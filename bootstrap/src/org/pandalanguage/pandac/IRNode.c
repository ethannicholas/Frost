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

typedef org$pandalanguage$pandac$Type* (*$fn82)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn85)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn89)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$Type* (*$fn102)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn165)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn191)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn230)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn233)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn241)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn401)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn415)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn423)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn521)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn645)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn648)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn670)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn674)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn696)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn703)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn714)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn716)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn752)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn759)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn770)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn772)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn805)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn827)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn840)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn853)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn860)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn871)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn873)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn903)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn916)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn923)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn934)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn936)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn945)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn958)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn966)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn984)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn991)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1002)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1004)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1024)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1037)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1044)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1055)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1057)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1074)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1081)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1092)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1094)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1125)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1135)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1148)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1155)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1166)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1168)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1189)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1202)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1236)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1239)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1243)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1301)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1308)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1319)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1321)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1357)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1364)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1375)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1377)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1394)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1401)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1412)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1414)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1432)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1445)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1452)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1463)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1465)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1491)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1542)(org$pandalanguage$pandac$IRNode*, panda$core$MutableMethod*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1577)(panda$core$Object*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1578)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1732)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1735)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1773)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1776)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn1829)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1832)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1861)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1995)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1998)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2030)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2033)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2065)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2068)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2137)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2140)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2143)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2254)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2257)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn2260)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2348)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2351)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2438)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2441)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2444)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2502)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn2505)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2541)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2544)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn2616)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2659)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2666)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2677)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2715)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2722)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2733)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2749)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2756)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2767)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2817)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2835)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2868)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2908)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2959)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2964)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2979)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2984)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3020)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3027)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3038)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3069)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3077)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn3095)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3115)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3174)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3258)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3265)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3276)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3321)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3328)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3339)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3355)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3362)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3373)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3400)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3490)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3497)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3508)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3671)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3678)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3700)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3738)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3760)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3778)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3862)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3903)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3912)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3953)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3960)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3971)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1270 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s2938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s3041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s3049 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s3117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s3442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s3480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s3582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s3585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 15, 7664694969176949793, NULL };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s3640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s3681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s3727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s3824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s3852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s3884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 11, -3294192213738444701, NULL };
static panda$core$String $s3899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s3906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s3909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3941 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s3943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };

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
    org$pandalanguage$pandac$Type* $tmp45;
    org$pandalanguage$pandac$Type* $tmp46;
    panda$core$Int64 $tmp50;
    org$pandalanguage$pandac$ChoiceCase* ce52 = NULL;
    panda$core$Int64 field54;
    org$pandalanguage$pandac$Type* $tmp56;
    panda$core$Object* $tmp57;
    panda$core$Int64 $tmp61;
    org$pandalanguage$pandac$Type* type63 = NULL;
    org$pandalanguage$pandac$Type* $tmp65;
    panda$core$Int64 $tmp68;
    org$pandalanguage$pandac$Type* type70 = NULL;
    org$pandalanguage$pandac$Type* $tmp72;
    panda$core$Int64 $tmp75;
    org$pandalanguage$pandac$IRNode* m77 = NULL;
    org$pandalanguage$pandac$Type* $tmp79;
    panda$core$Object* $tmp80;
    org$pandalanguage$pandac$Type* $tmp81;
    org$pandalanguage$pandac$Type* $tmp84;
    panda$core$Int64 $tmp91;
    panda$core$Int64 $tmp96;
    org$pandalanguage$pandac$IRNode* expr98 = NULL;
    org$pandalanguage$pandac$Type* $tmp100;
    org$pandalanguage$pandac$Type* $tmp101;
    panda$core$Int64 $tmp106;
    org$pandalanguage$pandac$Type* type108 = NULL;
    org$pandalanguage$pandac$Type* $tmp110;
    panda$core$Int64 $tmp113;
    org$pandalanguage$pandac$Type* type115 = NULL;
    org$pandalanguage$pandac$Type* $tmp117;
    panda$core$Int64 $tmp120;
    org$pandalanguage$pandac$Type* $tmp122;
    org$pandalanguage$pandac$Type* $tmp123;
    panda$core$Int64 $tmp127;
    org$pandalanguage$pandac$Type* $tmp129;
    org$pandalanguage$pandac$Type* $tmp130;
    panda$core$Int64 $tmp134;
    org$pandalanguage$pandac$Type* type136 = NULL;
    org$pandalanguage$pandac$IRNode* target138 = NULL;
    org$pandalanguage$pandac$MethodRef* m140 = NULL;
    org$pandalanguage$pandac$Type* $tmp142;
    panda$core$Int64 $tmp145;
    org$pandalanguage$pandac$Type* type147 = NULL;
    org$pandalanguage$pandac$Type* $tmp149;
    panda$core$Int64 $tmp152;
    org$pandalanguage$pandac$Type* type154 = NULL;
    org$pandalanguage$pandac$Type* $tmp156;
    panda$core$Int64 $tmp159;
    org$pandalanguage$pandac$IRNode* base161 = NULL;
    org$pandalanguage$pandac$Type* $tmp163;
    org$pandalanguage$pandac$Type* $tmp164;
    panda$core$Int64 $tmp169;
    org$pandalanguage$pandac$Type* type171 = NULL;
    org$pandalanguage$pandac$Type* $tmp173;
    panda$core$Int64 $tmp176;
    org$pandalanguage$pandac$Type* type178 = NULL;
    panda$core$Int64 id180;
    org$pandalanguage$pandac$Type* $tmp182;
    panda$core$Int64 $tmp185;
    org$pandalanguage$pandac$IRNode* base187 = NULL;
    org$pandalanguage$pandac$Type* $tmp189;
    org$pandalanguage$pandac$Type* $tmp190;
    panda$core$Int64 $tmp195;
    org$pandalanguage$pandac$Type* type197 = NULL;
    org$pandalanguage$pandac$Type* $tmp199;
    panda$core$Int64 $tmp202;
    org$pandalanguage$pandac$Type* type204 = NULL;
    org$pandalanguage$pandac$Type* $tmp206;
    panda$core$Int64 $tmp209;
    org$pandalanguage$pandac$Type* $tmp211;
    org$pandalanguage$pandac$Type* $tmp212;
    panda$core$Int64 $tmp216;
    org$pandalanguage$pandac$Type* type218 = NULL;
    org$pandalanguage$pandac$Type* $tmp220;
    panda$core$Int64 $tmp223;
    org$pandalanguage$pandac$IRNode* ifTrue225 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse227 = NULL;
    org$pandalanguage$pandac$Type* $tmp229;
    org$pandalanguage$pandac$Type* $tmp232;
    org$pandalanguage$pandac$Type* $tmp239;
    org$pandalanguage$pandac$Type* $tmp240;
    panda$core$Int64 $tmp245;
    org$pandalanguage$pandac$Type* $tmp247;
    org$pandalanguage$pandac$Type* $tmp248;
    panda$core$Int64 $tmp252;
    org$pandalanguage$pandac$Type* $tmp254;
    org$pandalanguage$pandac$Type* $tmp255;
    panda$core$Int64 $tmp259;
    org$pandalanguage$pandac$Type* type261 = NULL;
    org$pandalanguage$pandac$Type* $tmp263;
    panda$core$Int64 $tmp266;
    org$pandalanguage$pandac$Type* $tmp268;
    org$pandalanguage$pandac$Type* $tmp269;
    panda$core$Int64 $tmp273;
    org$pandalanguage$pandac$Type* type275 = NULL;
    org$pandalanguage$pandac$Type* $tmp277;
    panda$core$Int64 $tmp280;
    org$pandalanguage$pandac$Type* $tmp282;
    org$pandalanguage$pandac$Type* $tmp283;
    panda$core$Int64 $tmp287;
    org$pandalanguage$pandac$Type* $tmp289;
    org$pandalanguage$pandac$Type* $tmp290;
    panda$core$Int64 $tmp294;
    org$pandalanguage$pandac$Type* type296 = NULL;
    org$pandalanguage$pandac$Type* $tmp298;
    panda$core$Int64 $tmp301;
    org$pandalanguage$pandac$Variable* variable303 = NULL;
    org$pandalanguage$pandac$Type* $tmp305;
    panda$core$Bit $tmp308;
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
            org$pandalanguage$pandac$Type* $tmp47 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp46 = $tmp47;
            $tmp45 = $tmp46;
            $returnValue11 = $tmp45;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
            $tmp4 = 5;
            goto $l2;
            $l48:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp50, 10);
        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp50);
        if ($tmp51.value) {
        {
            org$pandalanguage$pandac$ChoiceCase** $tmp53 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$76_95->$data + 24));
            ce52 = *$tmp53;
            panda$core$Int64* $tmp55 = ((panda$core$Int64*) ((char*) $match$76_95->$data + 32));
            field54 = *$tmp55;
            panda$core$Object* $tmp58 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce52->fields, field54);
            $tmp57 = $tmp58;
            $tmp56 = ((org$pandalanguage$pandac$Type*) $tmp57);
            $returnValue11 = $tmp56;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
            panda$core$Panda$unref$panda$core$Object($tmp57);
            $tmp4 = 6;
            goto $l2;
            $l59:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp61, 11);
        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp61);
        if ($tmp62.value) {
        {
            org$pandalanguage$pandac$Type** $tmp64 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type63 = *$tmp64;
            $tmp65 = type63;
            $returnValue11 = $tmp65;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
            $tmp4 = 7;
            goto $l2;
            $l66:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp68, 12);
        panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp68);
        if ($tmp69.value) {
        {
            org$pandalanguage$pandac$Type** $tmp71 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type70 = *$tmp71;
            $tmp72 = type70;
            $returnValue11 = $tmp72;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp72));
            $tmp4 = 8;
            goto $l2;
            $l73:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp75, 16);
        panda$core$Bit $tmp76 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp75);
        if ($tmp76.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp78 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            m77 = *$tmp78;
            org$pandalanguage$pandac$Type* $tmp83 = (($fn82) m77->$class->vtable[2])(m77);
            $tmp81 = $tmp83;
            org$pandalanguage$pandac$Type* $tmp86 = (($fn85) m77->$class->vtable[2])(m77);
            $tmp84 = $tmp86;
            ITable* $tmp87 = ((panda$collections$CollectionView*) $tmp84->subtypes)->$class->itable;
            while ($tmp87->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp87 = $tmp87->next;
            }
            $fn89 $tmp88 = $tmp87->methods[0];
            panda$core$Int64 $tmp90 = $tmp88(((panda$collections$CollectionView*) $tmp84->subtypes));
            panda$core$Int64$init$builtin_int64(&$tmp91, 1);
            panda$core$Int64 $tmp92 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp90, $tmp91);
            panda$core$Object* $tmp93 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp81->subtypes, $tmp92);
            $tmp80 = $tmp93;
            $tmp79 = ((org$pandalanguage$pandac$Type*) $tmp80);
            $returnValue11 = $tmp79;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp79));
            panda$core$Panda$unref$panda$core$Object($tmp80);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp81));
            $tmp4 = 9;
            goto $l2;
            $l94:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp96, 17);
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp96);
        if ($tmp97.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp99 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            expr98 = *$tmp99;
            org$pandalanguage$pandac$Type* $tmp103 = (($fn102) expr98->$class->vtable[2])(expr98);
            $tmp101 = $tmp103;
            $tmp100 = $tmp101;
            $returnValue11 = $tmp100;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
            $tmp4 = 10;
            goto $l2;
            $l104:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp106, 18);
        panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp106);
        if ($tmp107.value) {
        {
            org$pandalanguage$pandac$Type** $tmp109 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type108 = *$tmp109;
            $tmp110 = type108;
            $returnValue11 = $tmp110;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp110));
            $tmp4 = 11;
            goto $l2;
            $l111:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp113, 20);
        panda$core$Bit $tmp114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp113);
        if ($tmp114.value) {
        {
            org$pandalanguage$pandac$Type** $tmp116 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type115 = *$tmp116;
            $tmp117 = type115;
            $returnValue11 = $tmp117;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
            $tmp4 = 12;
            goto $l2;
            $l118:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp120, 21);
        panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp120);
        if ($tmp121.value) {
        {
            org$pandalanguage$pandac$Type* $tmp124 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp123 = $tmp124;
            $tmp122 = $tmp123;
            $returnValue11 = $tmp122;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
            $tmp4 = 13;
            goto $l2;
            $l125:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp127, 22);
        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp127);
        if ($tmp128.value) {
        {
            org$pandalanguage$pandac$Type* $tmp131 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp130 = $tmp131;
            $tmp129 = $tmp130;
            $returnValue11 = $tmp129;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp130));
            $tmp4 = 14;
            goto $l2;
            $l132:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp134, 25);
        panda$core$Bit $tmp135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp134);
        if ($tmp135.value) {
        {
            org$pandalanguage$pandac$Type** $tmp137 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type136 = *$tmp137;
            org$pandalanguage$pandac$IRNode** $tmp139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            target138 = *$tmp139;
            org$pandalanguage$pandac$MethodRef** $tmp141 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$76_95->$data + 32));
            m140 = *$tmp141;
            $tmp142 = type136;
            $returnValue11 = $tmp142;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp142));
            $tmp4 = 15;
            goto $l2;
            $l143:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp145, 26);
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp145);
        if ($tmp146.value) {
        {
            org$pandalanguage$pandac$Type** $tmp148 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type147 = *$tmp148;
            $tmp149 = type147;
            $returnValue11 = $tmp149;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp149));
            $tmp4 = 16;
            goto $l2;
            $l150:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp152, 27);
        panda$core$Bit $tmp153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp152);
        if ($tmp153.value) {
        {
            org$pandalanguage$pandac$Type** $tmp155 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type154 = *$tmp155;
            $tmp156 = type154;
            $returnValue11 = $tmp156;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
            $tmp4 = 17;
            goto $l2;
            $l157:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp159, 28);
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp159);
        if ($tmp160.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp162 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            base161 = *$tmp162;
            org$pandalanguage$pandac$Type* $tmp166 = (($fn165) base161->$class->vtable[2])(base161);
            $tmp164 = $tmp166;
            $tmp163 = $tmp164;
            $returnValue11 = $tmp163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
            $tmp4 = 18;
            goto $l2;
            $l167:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp169, 30);
        panda$core$Bit $tmp170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp169);
        if ($tmp170.value) {
        {
            org$pandalanguage$pandac$Type** $tmp172 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type171 = *$tmp172;
            $tmp173 = type171;
            $returnValue11 = $tmp173;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
            $tmp4 = 19;
            goto $l2;
            $l174:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp176, 32);
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp176);
        if ($tmp177.value) {
        {
            org$pandalanguage$pandac$Type** $tmp179 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type178 = *$tmp179;
            panda$core$Int64* $tmp181 = ((panda$core$Int64*) ((char*) $match$76_95->$data + 24));
            id180 = *$tmp181;
            $tmp182 = type178;
            $returnValue11 = $tmp182;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp182));
            $tmp4 = 20;
            goto $l2;
            $l183:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp185, 33);
        panda$core$Bit $tmp186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp185);
        if ($tmp186.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp188 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 0));
            base187 = *$tmp188;
            org$pandalanguage$pandac$Type* $tmp192 = (($fn191) base187->$class->vtable[2])(base187);
            $tmp190 = $tmp192;
            $tmp189 = $tmp190;
            $returnValue11 = $tmp189;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
            $tmp4 = 21;
            goto $l2;
            $l193:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp195, 34);
        panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp195);
        if ($tmp196.value) {
        {
            org$pandalanguage$pandac$Type** $tmp198 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type197 = *$tmp198;
            $tmp199 = type197;
            $returnValue11 = $tmp199;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
            $tmp4 = 22;
            goto $l2;
            $l200:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp202, 35);
        panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp202);
        if ($tmp203.value) {
        {
            org$pandalanguage$pandac$Type** $tmp205 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type204 = *$tmp205;
            $tmp206 = type204;
            $returnValue11 = $tmp206;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
            $tmp4 = 23;
            goto $l2;
            $l207:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp209, 36);
        panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp209);
        if ($tmp210.value) {
        {
            org$pandalanguage$pandac$Type* $tmp213 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp212 = $tmp213;
            $tmp211 = $tmp212;
            $returnValue11 = $tmp211;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
            $tmp4 = 24;
            goto $l2;
            $l214:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp216, 37);
        panda$core$Bit $tmp217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp216);
        if ($tmp217.value) {
        {
            org$pandalanguage$pandac$Type** $tmp219 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type218 = *$tmp219;
            $tmp220 = type218;
            $returnValue11 = $tmp220;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp220));
            $tmp4 = 25;
            goto $l2;
            $l221:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp223, 38);
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp223);
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp226 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 24));
            ifTrue225 = *$tmp226;
            org$pandalanguage$pandac$IRNode** $tmp228 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$76_95->$data + 32));
            ifFalse227 = *$tmp228;
            org$pandalanguage$pandac$Type* $tmp231 = (($fn230) ifTrue225->$class->vtable[2])(ifTrue225);
            $tmp229 = $tmp231;
            org$pandalanguage$pandac$Type* $tmp234 = (($fn233) ifFalse227->$class->vtable[2])(ifFalse227);
            $tmp232 = $tmp234;
            panda$core$Bit $tmp235 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp229, $tmp232);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
            if ($tmp235.value) goto $l236; else goto $l237;
            $l237:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s238, (panda$core$Int64) { 130 });
            abort();
            $l236:;
            org$pandalanguage$pandac$Type* $tmp242 = (($fn241) ifTrue225->$class->vtable[2])(ifTrue225);
            $tmp240 = $tmp242;
            $tmp239 = $tmp240;
            $returnValue11 = $tmp239;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
            $tmp4 = 26;
            goto $l2;
            $l243:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp245, 39);
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp245);
        if ($tmp246.value) {
        {
            org$pandalanguage$pandac$Type* $tmp249 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp248 = $tmp249;
            $tmp247 = $tmp248;
            $returnValue11 = $tmp247;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp247));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp248));
            $tmp4 = 27;
            goto $l2;
            $l250:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp252, 40);
        panda$core$Bit $tmp253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp252);
        if ($tmp253.value) {
        {
            org$pandalanguage$pandac$Type* $tmp256 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp255 = $tmp256;
            $tmp254 = $tmp255;
            $returnValue11 = $tmp254;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
            $tmp4 = 28;
            goto $l2;
            $l257:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp259, 41);
        panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp259);
        if ($tmp260.value) {
        {
            org$pandalanguage$pandac$Type** $tmp262 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type261 = *$tmp262;
            $tmp263 = type261;
            $returnValue11 = $tmp263;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp263));
            $tmp4 = 29;
            goto $l2;
            $l264:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp266, 42);
        panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp266);
        if ($tmp267.value) {
        {
            org$pandalanguage$pandac$Type* $tmp270 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp269 = $tmp270;
            $tmp268 = $tmp269;
            $returnValue11 = $tmp268;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp268));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
            $tmp4 = 30;
            goto $l2;
            $l271:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp273, 43);
        panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp273);
        if ($tmp274.value) {
        {
            org$pandalanguage$pandac$Type** $tmp276 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 16));
            type275 = *$tmp276;
            $tmp277 = type275;
            $returnValue11 = $tmp277;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp277));
            $tmp4 = 31;
            goto $l2;
            $l278:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp280, 44);
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp280);
        if ($tmp281.value) {
        {
            org$pandalanguage$pandac$Type* $tmp284 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp283 = $tmp284;
            $tmp282 = $tmp283;
            $returnValue11 = $tmp282;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp282));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
            $tmp4 = 32;
            goto $l2;
            $l285:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp287, 45);
        panda$core$Bit $tmp288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp287);
        if ($tmp288.value) {
        {
            org$pandalanguage$pandac$Type* $tmp291 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp290 = $tmp291;
            $tmp289 = $tmp290;
            $returnValue11 = $tmp289;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
            $tmp4 = 33;
            goto $l2;
            $l292:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp294, 47);
        panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp294);
        if ($tmp295.value) {
        {
            org$pandalanguage$pandac$Type** $tmp297 = ((org$pandalanguage$pandac$Type**) ((char*) $match$76_95->$data + 24));
            type296 = *$tmp297;
            $tmp298 = type296;
            $returnValue11 = $tmp298;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
            $tmp4 = 34;
            goto $l2;
            $l299:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp301, 48);
        panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$76_95->$rawValue, $tmp301);
        if ($tmp302.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp304 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$76_95->$data + 16));
            variable303 = *$tmp304;
            $tmp305 = variable303->type;
            $returnValue11 = $tmp305;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
            $tmp4 = 35;
            goto $l2;
            $l306:;
            return $returnValue11;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp308, false);
            if ($tmp308.value) goto $l309; else goto $l310;
            $l310:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s311, (panda$core$Int64) { 151 });
            abort();
            $l309:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        case 22: goto $l200;
        case 33: goto $l292;
        case 15: goto $l143;
        case 6: goto $l59;
        case 24: goto $l214;
        case 3: goto $l34;
        case 8: goto $l73;
        case 11: goto $l111;
        case 5: goto $l48;
        case 23: goto $l207;
        case 13: goto $l125;
        case 31: goto $l278;
        case 27: goto $l250;
        case 20: goto $l183;
        case 17: goto $l157;
        case -1: goto $l312;
        case 1: goto $l20;
        case 0: goto $l13;
        case 12: goto $l118;
        case 18: goto $l167;
        case 21: goto $l193;
        case 32: goto $l285;
        case 29: goto $l264;
        case 28: goto $l257;
        case 4: goto $l41;
        case 26: goto $l243;
        case 10: goto $l104;
        case 9: goto $l94;
        case 25: goto $l221;
        case 30: goto $l271;
        case 35: goto $l306;
        case 7: goto $l66;
        case 34: goto $l299;
        case 14: goto $l132;
        case 19: goto $l174;
        case 2: goto $l27;
        case 16: goto $l150;
    }
    $l312:;
    abort();
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$156_9316 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp317;
    panda$core$Int64 $tmp318;
    org$pandalanguage$pandac$Position position320;
    org$pandalanguage$pandac$Position $returnValue322;
    panda$core$Int64 $tmp325;
    org$pandalanguage$pandac$Position position327;
    panda$core$Int64 $tmp331;
    org$pandalanguage$pandac$Position position333;
    panda$core$Int64 $tmp337;
    org$pandalanguage$pandac$Position position339;
    panda$core$Int64 $tmp343;
    org$pandalanguage$pandac$Position position345;
    panda$core$Int64 $tmp349;
    org$pandalanguage$pandac$Position position351;
    panda$core$Int64 $tmp355;
    org$pandalanguage$pandac$Position position357;
    panda$core$Int64 $tmp361;
    org$pandalanguage$pandac$Position position363;
    panda$core$Int64 $tmp367;
    org$pandalanguage$pandac$Position position369;
    panda$core$Int64 $tmp373;
    org$pandalanguage$pandac$Position position375;
    panda$core$Int64 $tmp379;
    org$pandalanguage$pandac$Position position381;
    panda$core$Int64 $tmp385;
    org$pandalanguage$pandac$Position position387;
    panda$core$Int64 $tmp391;
    org$pandalanguage$pandac$Position position393;
    panda$core$Int64 $tmp397;
    org$pandalanguage$pandac$IRNode* target399 = NULL;
    panda$core$Int64 $tmp405;
    org$pandalanguage$pandac$Position position407;
    panda$core$Int64 $tmp411;
    org$pandalanguage$pandac$IRNode* m413 = NULL;
    panda$core$Int64 $tmp419;
    org$pandalanguage$pandac$IRNode* expr421 = NULL;
    panda$core$Int64 $tmp427;
    org$pandalanguage$pandac$Position position429;
    panda$core$Int64 $tmp433;
    org$pandalanguage$pandac$Position position435;
    panda$core$Int64 $tmp439;
    org$pandalanguage$pandac$Position position441;
    panda$core$Int64 $tmp445;
    org$pandalanguage$pandac$Position position447;
    panda$core$Int64 $tmp451;
    org$pandalanguage$pandac$Position position453;
    panda$core$Int64 $tmp457;
    org$pandalanguage$pandac$Position position459;
    panda$core$Int64 $tmp463;
    org$pandalanguage$pandac$Position position465;
    panda$core$Int64 $tmp469;
    org$pandalanguage$pandac$Position position471;
    panda$core$Int64 $tmp475;
    org$pandalanguage$pandac$Position position477;
    panda$core$Int64 $tmp481;
    org$pandalanguage$pandac$Position position483;
    panda$core$Int64 $tmp487;
    org$pandalanguage$pandac$Position position489;
    panda$core$Int64 $tmp493;
    org$pandalanguage$pandac$Position position495;
    panda$core$Int64 $tmp499;
    org$pandalanguage$pandac$Position position501;
    panda$core$Int64 $tmp505;
    org$pandalanguage$pandac$Position position507;
    panda$core$Int64 $tmp511;
    org$pandalanguage$pandac$Position position513;
    panda$core$Int64 $tmp517;
    org$pandalanguage$pandac$IRNode* base519 = NULL;
    panda$core$Int64 $tmp525;
    org$pandalanguage$pandac$Position position527;
    panda$core$Int64 $tmp531;
    org$pandalanguage$pandac$Position position533;
    panda$core$Int64 $tmp537;
    org$pandalanguage$pandac$Position position539;
    panda$core$Int64 $tmp543;
    org$pandalanguage$pandac$Position position545;
    panda$core$Int64 $tmp549;
    org$pandalanguage$pandac$Position position551;
    panda$core$Int64 $tmp555;
    org$pandalanguage$pandac$Position position557;
    panda$core$Int64 $tmp561;
    org$pandalanguage$pandac$Position position563;
    panda$core$Int64 $tmp567;
    org$pandalanguage$pandac$Position position569;
    panda$core$Int64 $tmp573;
    org$pandalanguage$pandac$Position position575;
    panda$core$Int64 $tmp579;
    org$pandalanguage$pandac$Position position581;
    panda$core$Int64 $tmp585;
    org$pandalanguage$pandac$Position position587;
    panda$core$Int64 $tmp591;
    org$pandalanguage$pandac$Position position593;
    panda$core$Int64 $tmp597;
    org$pandalanguage$pandac$Position position599;
    panda$core$Int64 $tmp603;
    org$pandalanguage$pandac$Position position605;
    panda$core$Int64 $tmp609;
    org$pandalanguage$pandac$Position position611;
    panda$core$Int64 $tmp615;
    org$pandalanguage$pandac$Position position617;
    panda$core$Int64 $tmp621;
    org$pandalanguage$pandac$Position position623;
    panda$core$Bit $tmp627;
    int $tmp315;
    {
        $tmp317 = self;
        $match$156_9316 = $tmp317;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
        panda$core$Int64$init$builtin_int64(&$tmp318, 0);
        panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp318);
        if ($tmp319.value) {
        {
            org$pandalanguage$pandac$Position* $tmp321 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position320 = *$tmp321;
            $returnValue322 = position320;
            $tmp315 = 0;
            goto $l313;
            $l323:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp325, 1);
        panda$core$Bit $tmp326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp325);
        if ($tmp326.value) {
        {
            org$pandalanguage$pandac$Position* $tmp328 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position327 = *$tmp328;
            $returnValue322 = position327;
            $tmp315 = 1;
            goto $l313;
            $l329:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp331, 2);
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp331);
        if ($tmp332.value) {
        {
            org$pandalanguage$pandac$Position* $tmp334 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position333 = *$tmp334;
            $returnValue322 = position333;
            $tmp315 = 2;
            goto $l313;
            $l335:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp337, 3);
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp337);
        if ($tmp338.value) {
        {
            org$pandalanguage$pandac$Position* $tmp340 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position339 = *$tmp340;
            $returnValue322 = position339;
            $tmp315 = 3;
            goto $l313;
            $l341:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp343, 4);
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp343);
        if ($tmp344.value) {
        {
            org$pandalanguage$pandac$Position* $tmp346 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position345 = *$tmp346;
            $returnValue322 = position345;
            $tmp315 = 4;
            goto $l313;
            $l347:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp349, 6);
        panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp349);
        if ($tmp350.value) {
        {
            org$pandalanguage$pandac$Position* $tmp352 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position351 = *$tmp352;
            $returnValue322 = position351;
            $tmp315 = 5;
            goto $l313;
            $l353:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp355, 7);
        panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp355);
        if ($tmp356.value) {
        {
            org$pandalanguage$pandac$Position* $tmp358 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position357 = *$tmp358;
            $returnValue322 = position357;
            $tmp315 = 6;
            goto $l313;
            $l359:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp361, 8);
        panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp361);
        if ($tmp362.value) {
        {
            org$pandalanguage$pandac$Position* $tmp364 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position363 = *$tmp364;
            $returnValue322 = position363;
            $tmp315 = 7;
            goto $l313;
            $l365:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp367, 9);
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp367);
        if ($tmp368.value) {
        {
            org$pandalanguage$pandac$Position* $tmp370 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position369 = *$tmp370;
            $returnValue322 = position369;
            $tmp315 = 8;
            goto $l313;
            $l371:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp373, 10);
        panda$core$Bit $tmp374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp373);
        if ($tmp374.value) {
        {
            org$pandalanguage$pandac$Position* $tmp376 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position375 = *$tmp376;
            $returnValue322 = position375;
            $tmp315 = 9;
            goto $l313;
            $l377:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp379, 11);
        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp379);
        if ($tmp380.value) {
        {
            org$pandalanguage$pandac$Position* $tmp382 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position381 = *$tmp382;
            $returnValue322 = position381;
            $tmp315 = 10;
            goto $l313;
            $l383:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp385, 12);
        panda$core$Bit $tmp386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp385);
        if ($tmp386.value) {
        {
            org$pandalanguage$pandac$Position* $tmp388 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position387 = *$tmp388;
            $returnValue322 = position387;
            $tmp315 = 11;
            goto $l313;
            $l389:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp391, 13);
        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp391);
        if ($tmp392.value) {
        {
            org$pandalanguage$pandac$Position* $tmp394 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position393 = *$tmp394;
            $returnValue322 = position393;
            $tmp315 = 12;
            goto $l313;
            $l395:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp397, 14);
        panda$core$Bit $tmp398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp397);
        if ($tmp398.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp400 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9316->$data + 0));
            target399 = *$tmp400;
            org$pandalanguage$pandac$Position $tmp402 = (($fn401) target399->$class->vtable[3])(target399);
            $returnValue322 = $tmp402;
            $tmp315 = 13;
            goto $l313;
            $l403:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp405, 15);
        panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp405);
        if ($tmp406.value) {
        {
            org$pandalanguage$pandac$Position* $tmp408 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position407 = *$tmp408;
            $returnValue322 = position407;
            $tmp315 = 14;
            goto $l313;
            $l409:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp411, 16);
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp411);
        if ($tmp412.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp414 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9316->$data + 0));
            m413 = *$tmp414;
            org$pandalanguage$pandac$Position $tmp416 = (($fn415) m413->$class->vtable[3])(m413);
            $returnValue322 = $tmp416;
            $tmp315 = 15;
            goto $l313;
            $l417:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp419, 17);
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp419);
        if ($tmp420.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp422 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9316->$data + 0));
            expr421 = *$tmp422;
            org$pandalanguage$pandac$Position $tmp424 = (($fn423) expr421->$class->vtable[3])(expr421);
            $returnValue322 = $tmp424;
            $tmp315 = 16;
            goto $l313;
            $l425:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp427, 18);
        panda$core$Bit $tmp428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp427);
        if ($tmp428.value) {
        {
            org$pandalanguage$pandac$Position* $tmp430 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position429 = *$tmp430;
            $returnValue322 = position429;
            $tmp315 = 17;
            goto $l313;
            $l431:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp433, 19);
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp433);
        if ($tmp434.value) {
        {
            org$pandalanguage$pandac$Position* $tmp436 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position435 = *$tmp436;
            $returnValue322 = position435;
            $tmp315 = 18;
            goto $l313;
            $l437:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp439, 20);
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp439);
        if ($tmp440.value) {
        {
            org$pandalanguage$pandac$Position* $tmp442 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position441 = *$tmp442;
            $returnValue322 = position441;
            $tmp315 = 19;
            goto $l313;
            $l443:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp445, 21);
        panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp445);
        if ($tmp446.value) {
        {
            org$pandalanguage$pandac$Position* $tmp448 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position447 = *$tmp448;
            $returnValue322 = position447;
            $tmp315 = 20;
            goto $l313;
            $l449:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp451, 22);
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp451);
        if ($tmp452.value) {
        {
            org$pandalanguage$pandac$Position* $tmp454 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position453 = *$tmp454;
            $returnValue322 = position453;
            $tmp315 = 21;
            goto $l313;
            $l455:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp457, 23);
        panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp457);
        if ($tmp458.value) {
        {
            org$pandalanguage$pandac$Position* $tmp460 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position459 = *$tmp460;
            $returnValue322 = position459;
            $tmp315 = 22;
            goto $l313;
            $l461:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp463, 24);
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp463);
        if ($tmp464.value) {
        {
            org$pandalanguage$pandac$Position* $tmp466 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position465 = *$tmp466;
            $returnValue322 = position465;
            $tmp315 = 23;
            goto $l313;
            $l467:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp469, 25);
        panda$core$Bit $tmp470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp469);
        if ($tmp470.value) {
        {
            org$pandalanguage$pandac$Position* $tmp472 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position471 = *$tmp472;
            $returnValue322 = position471;
            $tmp315 = 24;
            goto $l313;
            $l473:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp475, 26);
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp475);
        if ($tmp476.value) {
        {
            org$pandalanguage$pandac$Position* $tmp478 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position477 = *$tmp478;
            $returnValue322 = position477;
            $tmp315 = 25;
            goto $l313;
            $l479:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp481, 27);
        panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp481);
        if ($tmp482.value) {
        {
            org$pandalanguage$pandac$Position* $tmp484 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position483 = *$tmp484;
            $returnValue322 = position483;
            $tmp315 = 26;
            goto $l313;
            $l485:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp487, 28);
        panda$core$Bit $tmp488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp487);
        if ($tmp488.value) {
        {
            org$pandalanguage$pandac$Position* $tmp490 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position489 = *$tmp490;
            $returnValue322 = position489;
            $tmp315 = 27;
            goto $l313;
            $l491:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp493, 29);
        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp493);
        if ($tmp494.value) {
        {
            org$pandalanguage$pandac$Position* $tmp496 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position495 = *$tmp496;
            $returnValue322 = position495;
            $tmp315 = 28;
            goto $l313;
            $l497:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp499, 30);
        panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp499);
        if ($tmp500.value) {
        {
            org$pandalanguage$pandac$Position* $tmp502 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position501 = *$tmp502;
            $returnValue322 = position501;
            $tmp315 = 29;
            goto $l313;
            $l503:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp505, 31);
        panda$core$Bit $tmp506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp505);
        if ($tmp506.value) {
        {
            org$pandalanguage$pandac$Position* $tmp508 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position507 = *$tmp508;
            $returnValue322 = position507;
            $tmp315 = 30;
            goto $l313;
            $l509:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp511, 32);
        panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp511);
        if ($tmp512.value) {
        {
            org$pandalanguage$pandac$Position* $tmp514 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position513 = *$tmp514;
            $returnValue322 = position513;
            $tmp315 = 31;
            goto $l313;
            $l515:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp517, 33);
        panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp517);
        if ($tmp518.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp520 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9316->$data + 0));
            base519 = *$tmp520;
            org$pandalanguage$pandac$Position $tmp522 = (($fn521) base519->$class->vtable[3])(base519);
            $returnValue322 = $tmp522;
            $tmp315 = 32;
            goto $l313;
            $l523:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp525, 34);
        panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp525);
        if ($tmp526.value) {
        {
            org$pandalanguage$pandac$Position* $tmp528 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position527 = *$tmp528;
            $returnValue322 = position527;
            $tmp315 = 33;
            goto $l313;
            $l529:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp531, 35);
        panda$core$Bit $tmp532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp531);
        if ($tmp532.value) {
        {
            org$pandalanguage$pandac$Position* $tmp534 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position533 = *$tmp534;
            $returnValue322 = position533;
            $tmp315 = 34;
            goto $l313;
            $l535:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp537, 36);
        panda$core$Bit $tmp538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp537);
        if ($tmp538.value) {
        {
            org$pandalanguage$pandac$Position* $tmp540 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position539 = *$tmp540;
            $returnValue322 = position539;
            $tmp315 = 35;
            goto $l313;
            $l541:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp543, 37);
        panda$core$Bit $tmp544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp543);
        if ($tmp544.value) {
        {
            org$pandalanguage$pandac$Position* $tmp546 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position545 = *$tmp546;
            $returnValue322 = position545;
            $tmp315 = 36;
            goto $l313;
            $l547:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp549, 38);
        panda$core$Bit $tmp550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp549);
        if ($tmp550.value) {
        {
            org$pandalanguage$pandac$Position* $tmp552 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position551 = *$tmp552;
            $returnValue322 = position551;
            $tmp315 = 37;
            goto $l313;
            $l553:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp555, 39);
        panda$core$Bit $tmp556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp555);
        if ($tmp556.value) {
        {
            org$pandalanguage$pandac$Position* $tmp558 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position557 = *$tmp558;
            $returnValue322 = position557;
            $tmp315 = 38;
            goto $l313;
            $l559:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp561, 40);
        panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp561);
        if ($tmp562.value) {
        {
            org$pandalanguage$pandac$Position* $tmp564 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position563 = *$tmp564;
            $returnValue322 = position563;
            $tmp315 = 39;
            goto $l313;
            $l565:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp567, 41);
        panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp567);
        if ($tmp568.value) {
        {
            org$pandalanguage$pandac$Position* $tmp570 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position569 = *$tmp570;
            $returnValue322 = position569;
            $tmp315 = 40;
            goto $l313;
            $l571:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp573, 42);
        panda$core$Bit $tmp574 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp573);
        if ($tmp574.value) {
        {
            org$pandalanguage$pandac$Position* $tmp576 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position575 = *$tmp576;
            $returnValue322 = position575;
            $tmp315 = 41;
            goto $l313;
            $l577:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp579, 43);
        panda$core$Bit $tmp580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp579);
        if ($tmp580.value) {
        {
            org$pandalanguage$pandac$Position* $tmp582 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position581 = *$tmp582;
            $returnValue322 = position581;
            $tmp315 = 42;
            goto $l313;
            $l583:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp585, 44);
        panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp585);
        if ($tmp586.value) {
        {
            org$pandalanguage$pandac$Position* $tmp588 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position587 = *$tmp588;
            $returnValue322 = position587;
            $tmp315 = 43;
            goto $l313;
            $l589:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp591, 45);
        panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp591);
        if ($tmp592.value) {
        {
            org$pandalanguage$pandac$Position* $tmp594 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position593 = *$tmp594;
            $returnValue322 = position593;
            $tmp315 = 44;
            goto $l313;
            $l595:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp597, 46);
        panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp597);
        if ($tmp598.value) {
        {
            org$pandalanguage$pandac$Position* $tmp600 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position599 = *$tmp600;
            $returnValue322 = position599;
            $tmp315 = 45;
            goto $l313;
            $l601:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp603, 47);
        panda$core$Bit $tmp604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp603);
        if ($tmp604.value) {
        {
            org$pandalanguage$pandac$Position* $tmp606 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position605 = *$tmp606;
            $returnValue322 = position605;
            $tmp315 = 46;
            goto $l313;
            $l607:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp609, 48);
        panda$core$Bit $tmp610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp609);
        if ($tmp610.value) {
        {
            org$pandalanguage$pandac$Position* $tmp612 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position611 = *$tmp612;
            $returnValue322 = position611;
            $tmp315 = 47;
            goto $l313;
            $l613:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp615, 49);
        panda$core$Bit $tmp616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp615);
        if ($tmp616.value) {
        {
            org$pandalanguage$pandac$Position* $tmp618 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position617 = *$tmp618;
            $returnValue322 = position617;
            $tmp315 = 48;
            goto $l313;
            $l619:;
            return $returnValue322;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp621, 50);
        panda$core$Bit $tmp622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9316->$rawValue, $tmp621);
        if ($tmp622.value) {
        {
            org$pandalanguage$pandac$Position* $tmp624 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9316->$data + 0));
            position623 = *$tmp624;
            $returnValue322 = position623;
            $tmp315 = 49;
            goto $l313;
            $l625:;
            return $returnValue322;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp627, false);
            if ($tmp627.value) goto $l628; else goto $l629;
            $l629:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s630, (panda$core$Int64) { 258 });
            abort();
            $l628:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp315 = -1;
    goto $l313;
    $l313:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
    switch ($tmp315) {
        case 16: goto $l425;
        case 10: goto $l383;
        case 37: goto $l553;
        case 44: goto $l595;
        case 39: goto $l565;
        case 32: goto $l523;
        case 9: goto $l377;
        case 36: goto $l547;
        case 12: goto $l395;
        case 8: goto $l371;
        case 43: goto $l589;
        case 27: goto $l491;
        case 17: goto $l431;
        case 0: goto $l323;
        case 2: goto $l335;
        case -1: goto $l631;
        case 1: goto $l329;
        case 35: goto $l541;
        case 45: goto $l601;
        case 15: goto $l417;
        case 25: goto $l479;
        case 19: goto $l443;
        case 3: goto $l341;
        case 21: goto $l455;
        case 14: goto $l409;
        case 20: goto $l449;
        case 26: goto $l485;
        case 18: goto $l437;
        case 34: goto $l535;
        case 5: goto $l353;
        case 4: goto $l347;
        case 22: goto $l461;
        case 33: goto $l529;
        case 47: goto $l613;
        case 46: goto $l607;
        case 31: goto $l515;
        case 40: goto $l571;
        case 30: goto $l509;
        case 11: goto $l389;
        case 13: goto $l403;
        case 6: goto $l359;
        case 7: goto $l365;
        case 23: goto $l467;
        case 29: goto $l503;
        case 48: goto $l619;
        case 24: goto $l473;
        case 41: goto $l577;
        case 38: goto $l559;
        case 28: goto $l497;
        case 49: goto $l625;
        case 42: goto $l583;
    }
    $l631:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$263_9635 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp636;
    panda$core$Int64 $tmp637;
    org$pandalanguage$pandac$IRNode* test639 = NULL;
    org$pandalanguage$pandac$IRNode* msg641 = NULL;
    panda$core$Bit $returnValue643;
    panda$core$Int64 $tmp653;
    panda$core$Bit $tmp655;
    panda$core$Int64 $tmp658;
    org$pandalanguage$pandac$IRNode* left660 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op662;
    org$pandalanguage$pandac$IRNode* right664 = NULL;
    panda$core$Int64 $tmp679;
    panda$core$Bit $tmp681;
    panda$core$Int64 $tmp684;
    panda$collections$ImmutableArray* statements686 = NULL;
    panda$collections$Iterator* Iter$273$17691 = NULL;
    panda$collections$Iterator* $tmp692;
    panda$collections$Iterator* $tmp693;
    org$pandalanguage$pandac$IRNode* s709 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp710;
    panda$core$Object* $tmp711;
    panda$core$Bit $tmp718;
    panda$core$Bit $tmp725;
    panda$core$Int64 $tmp728;
    panda$core$Bit $tmp730;
    panda$core$Int64 $tmp733;
    org$pandalanguage$pandac$MethodRef* m735 = NULL;
    panda$collections$ImmutableArray* args737 = NULL;
    panda$core$Int64 $tmp739;
    panda$core$Bit $tmp741;
    panda$collections$Iterator* Iter$285$17747 = NULL;
    panda$collections$Iterator* $tmp748;
    panda$collections$Iterator* $tmp749;
    org$pandalanguage$pandac$IRNode* arg765 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp766;
    panda$core$Object* $tmp767;
    panda$core$Bit $tmp774;
    panda$core$Bit $tmp781;
    panda$core$Int64 $tmp784;
    panda$core$Bit $tmp786;
    panda$core$Int64 $tmp789;
    panda$core$Bit $tmp791;
    panda$core$Int64 $tmp794;
    panda$core$Bit $tmp796;
    panda$core$Int64 $tmp799;
    org$pandalanguage$pandac$Type* type801 = NULL;
    org$pandalanguage$pandac$IRNode* call803 = NULL;
    panda$core$Int64 $tmp809;
    panda$core$Bit $tmp811;
    panda$core$Int64 $tmp814;
    panda$core$Bit $tmp816;
    panda$core$Int64 $tmp819;
    org$pandalanguage$pandac$IRNode* target821 = NULL;
    org$pandalanguage$pandac$IRNode* value823 = NULL;
    panda$core$Int64 $tmp832;
    panda$core$String* label834 = NULL;
    panda$collections$ImmutableArray* statements836 = NULL;
    org$pandalanguage$pandac$IRNode* test838 = NULL;
    panda$core$Bit $tmp842;
    panda$collections$Iterator* Iter$309$17848 = NULL;
    panda$collections$Iterator* $tmp849;
    panda$collections$Iterator* $tmp850;
    org$pandalanguage$pandac$IRNode* s866 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp867;
    panda$core$Object* $tmp868;
    panda$core$Bit $tmp875;
    panda$core$Bit $tmp882;
    panda$core$Int64 $tmp885;
    panda$core$Bit $tmp887;
    panda$core$Int64 $tmp890;
    panda$core$Bit $tmp892;
    panda$core$Int64 $tmp895;
    org$pandalanguage$pandac$IRNode* test897 = NULL;
    panda$collections$ImmutableArray* ifTrue899 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse901 = NULL;
    panda$core$Bit $tmp905;
    panda$collections$Iterator* Iter$323$17911 = NULL;
    panda$collections$Iterator* $tmp912;
    panda$collections$Iterator* $tmp913;
    org$pandalanguage$pandac$IRNode* s929 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp930;
    panda$core$Object* $tmp931;
    panda$core$Bit $tmp938;
    panda$core$Int64 $tmp949;
    panda$core$Bit $tmp951;
    panda$core$Int64 $tmp954;
    org$pandalanguage$pandac$IRNode* value956 = NULL;
    panda$core$Int64 $tmp962;
    org$pandalanguage$pandac$IRNode* value964 = NULL;
    panda$core$Int64 $tmp970;
    panda$core$String* label972 = NULL;
    panda$collections$ImmutableArray* statements974 = NULL;
    panda$collections$Iterator* Iter$336$17979 = NULL;
    panda$collections$Iterator* $tmp980;
    panda$collections$Iterator* $tmp981;
    org$pandalanguage$pandac$IRNode* s997 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp998;
    panda$core$Object* $tmp999;
    panda$core$Bit $tmp1006;
    panda$core$Bit $tmp1013;
    panda$core$Int64 $tmp1016;
    org$pandalanguage$pandac$IRNode* value1018 = NULL;
    panda$collections$ImmutableArray* whens1020 = NULL;
    panda$collections$ImmutableArray* other1022 = NULL;
    panda$core$Bit $tmp1026;
    panda$collections$Iterator* Iter$346$171032 = NULL;
    panda$collections$Iterator* $tmp1033;
    panda$collections$Iterator* $tmp1034;
    org$pandalanguage$pandac$IRNode* w1050 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1051;
    panda$core$Object* $tmp1052;
    panda$core$Bit $tmp1059;
    panda$collections$Iterator* Iter$351$171069 = NULL;
    panda$collections$Iterator* $tmp1070;
    panda$collections$Iterator* $tmp1071;
    org$pandalanguage$pandac$IRNode* s1087 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1088;
    panda$core$Object* $tmp1089;
    panda$core$Bit $tmp1096;
    panda$core$Bit $tmp1103;
    panda$core$Int64 $tmp1106;
    panda$core$Bit $tmp1108;
    panda$core$Int64 $tmp1111;
    panda$core$Bit $tmp1113;
    panda$core$Int64 $tmp1116;
    panda$core$Bit $tmp1118;
    panda$core$Int64 $tmp1121;
    org$pandalanguage$pandac$IRNode* base1123 = NULL;
    panda$core$Int64 $tmp1129;
    org$pandalanguage$pandac$IRNode* list1131 = NULL;
    panda$collections$ImmutableArray* statements1133 = NULL;
    panda$core$Bit $tmp1137;
    panda$collections$Iterator* Iter$370$171143 = NULL;
    panda$collections$Iterator* $tmp1144;
    panda$collections$Iterator* $tmp1145;
    org$pandalanguage$pandac$IRNode* s1161 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1162;
    panda$core$Object* $tmp1163;
    panda$core$Bit $tmp1170;
    panda$core$Bit $tmp1177;
    panda$core$Int64 $tmp1180;
    panda$core$Bit $tmp1182;
    panda$core$Int64 $tmp1185;
    org$pandalanguage$pandac$IRNode* value1187 = NULL;
    panda$core$Int64 $tmp1193;
    panda$core$Bit $tmp1195;
    panda$core$Int64 $tmp1198;
    org$pandalanguage$pandac$IRNode* base1200 = NULL;
    panda$core$Int64 $tmp1206;
    panda$core$Bit $tmp1208;
    panda$core$Int64 $tmp1211;
    panda$core$Bit $tmp1213;
    panda$core$Int64 $tmp1216;
    panda$core$Bit $tmp1218;
    panda$core$Int64 $tmp1221;
    panda$core$Bit $tmp1223;
    panda$core$Int64 $tmp1226;
    org$pandalanguage$pandac$IRNode* test1228 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1230 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1232 = NULL;
    panda$core$Int64 $tmp1248;
    panda$core$Bit $tmp1250;
    panda$core$Int64 $tmp1253;
    panda$core$Bit $tmp1255;
    panda$core$Int64 $tmp1259;
    panda$core$Bit $tmp1261;
    panda$core$Int64 $tmp1265;
    panda$core$Bit $tmp1267;
    panda$core$Int64 $tmp1271;
    panda$core$Bit $tmp1273;
    panda$core$Int64 $tmp1277;
    panda$core$Bit $tmp1279;
    panda$core$Int64 $tmp1283;
    panda$core$Bit $tmp1285;
    panda$core$Int64 $tmp1289;
    panda$collections$ImmutableArray* decls1291 = NULL;
    panda$collections$Iterator* Iter$409$171296 = NULL;
    panda$collections$Iterator* $tmp1297;
    panda$collections$Iterator* $tmp1298;
    org$pandalanguage$pandac$IRNode* d1314 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1315;
    panda$core$Object* $tmp1316;
    panda$core$Bit $tmp1323;
    panda$core$Bit $tmp1330;
    panda$core$Int64 $tmp1333;
    panda$core$Bit $tmp1335;
    panda$core$Int64 $tmp1338;
    panda$core$Bit $tmp1340;
    panda$core$Int64 $tmp1343;
    panda$collections$ImmutableArray* tests1345 = NULL;
    panda$collections$ImmutableArray* statements1347 = NULL;
    panda$collections$Iterator* Iter$420$171352 = NULL;
    panda$collections$Iterator* $tmp1353;
    panda$collections$Iterator* $tmp1354;
    org$pandalanguage$pandac$IRNode* t1370 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1371;
    panda$core$Object* $tmp1372;
    panda$core$Bit $tmp1379;
    panda$collections$Iterator* Iter$425$171389 = NULL;
    panda$collections$Iterator* $tmp1390;
    panda$collections$Iterator* $tmp1391;
    org$pandalanguage$pandac$IRNode* s1407 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1408;
    panda$core$Object* $tmp1409;
    panda$core$Bit $tmp1416;
    panda$core$Bit $tmp1423;
    panda$core$Int64 $tmp1426;
    org$pandalanguage$pandac$IRNode* test1428 = NULL;
    panda$collections$ImmutableArray* statements1430 = NULL;
    panda$core$Bit $tmp1434;
    panda$collections$Iterator* Iter$435$171440 = NULL;
    panda$collections$Iterator* $tmp1441;
    panda$collections$Iterator* $tmp1442;
    org$pandalanguage$pandac$IRNode* s1458 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1459;
    panda$core$Object* $tmp1460;
    panda$core$Bit $tmp1467;
    panda$core$Bit $tmp1474;
    panda$core$Bit $tmp1477;
    int $tmp634;
    {
        $tmp636 = self;
        $match$263_9635 = $tmp636;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp636));
        panda$core$Int64$init$builtin_int64(&$tmp637, 0);
        panda$core$Bit $tmp638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp637);
        if ($tmp638.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp640 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 16));
            test639 = *$tmp640;
            org$pandalanguage$pandac$IRNode** $tmp642 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 24));
            msg641 = *$tmp642;
            panda$core$Bit $tmp646 = (($fn645) test639->$class->vtable[4])(test639);
            bool $tmp644 = $tmp646.value;
            if ($tmp644) goto $l647;
            panda$core$Bit $tmp649 = (($fn648) msg641->$class->vtable[4])(msg641);
            $tmp644 = $tmp649.value;
            $l647:;
            panda$core$Bit $tmp650 = { $tmp644 };
            $returnValue643 = $tmp650;
            $tmp634 = 0;
            goto $l632;
            $l651:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp653, 1);
        panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp653);
        if ($tmp654.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp655, false);
            $returnValue643 = $tmp655;
            $tmp634 = 1;
            goto $l632;
            $l656:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp658, 2);
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp658);
        if ($tmp659.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp661 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 24));
            left660 = *$tmp661;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp663 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$263_9635->$data + 32));
            op662 = *$tmp663;
            org$pandalanguage$pandac$IRNode** $tmp665 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 40));
            right664 = *$tmp665;
            panda$core$Bit $tmp668 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op662);
            bool $tmp667 = $tmp668.value;
            if ($tmp667) goto $l669;
            panda$core$Bit $tmp671 = (($fn670) left660->$class->vtable[4])(left660);
            $tmp667 = $tmp671.value;
            $l669:;
            panda$core$Bit $tmp672 = { $tmp667 };
            bool $tmp666 = $tmp672.value;
            if ($tmp666) goto $l673;
            panda$core$Bit $tmp675 = (($fn674) right664->$class->vtable[4])(right664);
            $tmp666 = $tmp675.value;
            $l673:;
            panda$core$Bit $tmp676 = { $tmp666 };
            $returnValue643 = $tmp676;
            $tmp634 = 2;
            goto $l632;
            $l677:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp679, 3);
        panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp679);
        if ($tmp680.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp681, false);
            $returnValue643 = $tmp681;
            $tmp634 = 3;
            goto $l632;
            $l682:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp684, 4);
        panda$core$Bit $tmp685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp684);
        if ($tmp685.value) {
        {
            panda$collections$ImmutableArray** $tmp687 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 16));
            statements686 = *$tmp687;
            {
                int $tmp690;
                {
                    ITable* $tmp694 = ((panda$collections$Iterable*) statements686)->$class->itable;
                    while ($tmp694->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp694 = $tmp694->next;
                    }
                    $fn696 $tmp695 = $tmp694->methods[0];
                    panda$collections$Iterator* $tmp697 = $tmp695(((panda$collections$Iterable*) statements686));
                    $tmp693 = $tmp697;
                    $tmp692 = $tmp693;
                    Iter$273$17691 = $tmp692;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp692));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
                    $l698:;
                    ITable* $tmp701 = Iter$273$17691->$class->itable;
                    while ($tmp701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp701 = $tmp701->next;
                    }
                    $fn703 $tmp702 = $tmp701->methods[0];
                    panda$core$Bit $tmp704 = $tmp702(Iter$273$17691);
                    panda$core$Bit $tmp705 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp704);
                    bool $tmp700 = $tmp705.value;
                    if (!$tmp700) goto $l699;
                    {
                        int $tmp708;
                        {
                            ITable* $tmp712 = Iter$273$17691->$class->itable;
                            while ($tmp712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp712 = $tmp712->next;
                            }
                            $fn714 $tmp713 = $tmp712->methods[1];
                            panda$core$Object* $tmp715 = $tmp713(Iter$273$17691);
                            $tmp711 = $tmp715;
                            $tmp710 = ((org$pandalanguage$pandac$IRNode*) $tmp711);
                            s709 = $tmp710;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp710));
                            panda$core$Panda$unref$panda$core$Object($tmp711);
                            panda$core$Bit $tmp717 = (($fn716) s709->$class->vtable[4])(s709);
                            if ($tmp717.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp718, true);
                                $returnValue643 = $tmp718;
                                $tmp708 = 0;
                                goto $l706;
                                $l719:;
                                $tmp690 = 0;
                                goto $l688;
                                $l720:;
                                $tmp634 = 4;
                                goto $l632;
                                $l721:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp708 = -1;
                        goto $l706;
                        $l706:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s709));
                        s709 = NULL;
                        switch ($tmp708) {
                            case -1: goto $l723;
                            case 0: goto $l719;
                        }
                        $l723:;
                    }
                    goto $l698;
                    $l699:;
                }
                $tmp690 = -1;
                goto $l688;
                $l688:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$273$17691));
                Iter$273$17691 = NULL;
                switch ($tmp690) {
                    case 0: goto $l720;
                    case -1: goto $l724;
                }
                $l724:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp725, false);
            $returnValue643 = $tmp725;
            $tmp634 = 5;
            goto $l632;
            $l726:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp728, 6);
        panda$core$Bit $tmp729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp728);
        if ($tmp729.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp730, false);
            $returnValue643 = $tmp730;
            $tmp634 = 6;
            goto $l632;
            $l731:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp733, 7);
        panda$core$Bit $tmp734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp733);
        if ($tmp734.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp736 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$263_9635->$data + 24));
            m735 = *$tmp736;
            panda$collections$ImmutableArray** $tmp738 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 32));
            args737 = *$tmp738;
            panda$core$Int64$init$builtin_int64(&$tmp739, 0);
            panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m735->value->methodKind.$rawValue, $tmp739);
            if ($tmp740.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp741, true);
                $returnValue643 = $tmp741;
                $tmp634 = 7;
                goto $l632;
                $l742:;
                return $returnValue643;
            }
            }
            {
                int $tmp746;
                {
                    ITable* $tmp750 = ((panda$collections$Iterable*) args737)->$class->itable;
                    while ($tmp750->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp750 = $tmp750->next;
                    }
                    $fn752 $tmp751 = $tmp750->methods[0];
                    panda$collections$Iterator* $tmp753 = $tmp751(((panda$collections$Iterable*) args737));
                    $tmp749 = $tmp753;
                    $tmp748 = $tmp749;
                    Iter$285$17747 = $tmp748;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp748));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
                    $l754:;
                    ITable* $tmp757 = Iter$285$17747->$class->itable;
                    while ($tmp757->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp757 = $tmp757->next;
                    }
                    $fn759 $tmp758 = $tmp757->methods[0];
                    panda$core$Bit $tmp760 = $tmp758(Iter$285$17747);
                    panda$core$Bit $tmp761 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp760);
                    bool $tmp756 = $tmp761.value;
                    if (!$tmp756) goto $l755;
                    {
                        int $tmp764;
                        {
                            ITable* $tmp768 = Iter$285$17747->$class->itable;
                            while ($tmp768->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp768 = $tmp768->next;
                            }
                            $fn770 $tmp769 = $tmp768->methods[1];
                            panda$core$Object* $tmp771 = $tmp769(Iter$285$17747);
                            $tmp767 = $tmp771;
                            $tmp766 = ((org$pandalanguage$pandac$IRNode*) $tmp767);
                            arg765 = $tmp766;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp766));
                            panda$core$Panda$unref$panda$core$Object($tmp767);
                            panda$core$Bit $tmp773 = (($fn772) arg765->$class->vtable[4])(arg765);
                            if ($tmp773.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp774, true);
                                $returnValue643 = $tmp774;
                                $tmp764 = 0;
                                goto $l762;
                                $l775:;
                                $tmp746 = 0;
                                goto $l744;
                                $l776:;
                                $tmp634 = 8;
                                goto $l632;
                                $l777:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp764 = -1;
                        goto $l762;
                        $l762:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg765));
                        arg765 = NULL;
                        switch ($tmp764) {
                            case 0: goto $l775;
                            case -1: goto $l779;
                        }
                        $l779:;
                    }
                    goto $l754;
                    $l755:;
                }
                $tmp746 = -1;
                goto $l744;
                $l744:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$17747));
                Iter$285$17747 = NULL;
                switch ($tmp746) {
                    case -1: goto $l780;
                    case 0: goto $l776;
                }
                $l780:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp781, false);
            $returnValue643 = $tmp781;
            $tmp634 = 9;
            goto $l632;
            $l782:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp784, 8);
        panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp784);
        if ($tmp785.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp786, false);
            $returnValue643 = $tmp786;
            $tmp634 = 10;
            goto $l632;
            $l787:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp789, 9);
        panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp789);
        if ($tmp790.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp791, false);
            $returnValue643 = $tmp791;
            $tmp634 = 11;
            goto $l632;
            $l792:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp794, 10);
        panda$core$Bit $tmp795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp794);
        if ($tmp795.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp796, false);
            $returnValue643 = $tmp796;
            $tmp634 = 12;
            goto $l632;
            $l797:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp799, 11);
        panda$core$Bit $tmp800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp799);
        if ($tmp800.value) {
        {
            org$pandalanguage$pandac$Type** $tmp802 = ((org$pandalanguage$pandac$Type**) ((char*) $match$263_9635->$data + 16));
            type801 = *$tmp802;
            org$pandalanguage$pandac$IRNode** $tmp804 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 24));
            call803 = *$tmp804;
            panda$core$Bit $tmp806 = (($fn805) call803->$class->vtable[4])(call803);
            $returnValue643 = $tmp806;
            $tmp634 = 13;
            goto $l632;
            $l807:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp809, 12);
        panda$core$Bit $tmp810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp809);
        if ($tmp810.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp811, false);
            $returnValue643 = $tmp811;
            $tmp634 = 14;
            goto $l632;
            $l812:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp814, 13);
        panda$core$Bit $tmp815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp814);
        if ($tmp815.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp816, false);
            $returnValue643 = $tmp816;
            $tmp634 = 15;
            goto $l632;
            $l817:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp819, 14);
        panda$core$Bit $tmp820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp819);
        if ($tmp820.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp822 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 0));
            target821 = *$tmp822;
            org$pandalanguage$pandac$IRNode** $tmp824 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 8));
            value823 = *$tmp824;
            bool $tmp825 = ((panda$core$Bit) { value823 != NULL }).value;
            if (!$tmp825) goto $l826;
            panda$core$Bit $tmp828 = (($fn827) value823->$class->vtable[4])(value823);
            $tmp825 = $tmp828.value;
            $l826:;
            panda$core$Bit $tmp829 = { $tmp825 };
            $returnValue643 = $tmp829;
            $tmp634 = 16;
            goto $l632;
            $l830:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp832, 15);
        panda$core$Bit $tmp833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp832);
        if ($tmp833.value) {
        {
            panda$core$String** $tmp835 = ((panda$core$String**) ((char*) $match$263_9635->$data + 16));
            label834 = *$tmp835;
            panda$collections$ImmutableArray** $tmp837 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 24));
            statements836 = *$tmp837;
            org$pandalanguage$pandac$IRNode** $tmp839 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 32));
            test838 = *$tmp839;
            panda$core$Bit $tmp841 = (($fn840) test838->$class->vtable[4])(test838);
            if ($tmp841.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp842, true);
                $returnValue643 = $tmp842;
                $tmp634 = 17;
                goto $l632;
                $l843:;
                return $returnValue643;
            }
            }
            {
                int $tmp847;
                {
                    ITable* $tmp851 = ((panda$collections$Iterable*) statements836)->$class->itable;
                    while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp851 = $tmp851->next;
                    }
                    $fn853 $tmp852 = $tmp851->methods[0];
                    panda$collections$Iterator* $tmp854 = $tmp852(((panda$collections$Iterable*) statements836));
                    $tmp850 = $tmp854;
                    $tmp849 = $tmp850;
                    Iter$309$17848 = $tmp849;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                    $l855:;
                    ITable* $tmp858 = Iter$309$17848->$class->itable;
                    while ($tmp858->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp858 = $tmp858->next;
                    }
                    $fn860 $tmp859 = $tmp858->methods[0];
                    panda$core$Bit $tmp861 = $tmp859(Iter$309$17848);
                    panda$core$Bit $tmp862 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp861);
                    bool $tmp857 = $tmp862.value;
                    if (!$tmp857) goto $l856;
                    {
                        int $tmp865;
                        {
                            ITable* $tmp869 = Iter$309$17848->$class->itable;
                            while ($tmp869->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp869 = $tmp869->next;
                            }
                            $fn871 $tmp870 = $tmp869->methods[1];
                            panda$core$Object* $tmp872 = $tmp870(Iter$309$17848);
                            $tmp868 = $tmp872;
                            $tmp867 = ((org$pandalanguage$pandac$IRNode*) $tmp868);
                            s866 = $tmp867;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp867));
                            panda$core$Panda$unref$panda$core$Object($tmp868);
                            panda$core$Bit $tmp874 = (($fn873) s866->$class->vtable[4])(s866);
                            if ($tmp874.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp875, true);
                                $returnValue643 = $tmp875;
                                $tmp865 = 0;
                                goto $l863;
                                $l876:;
                                $tmp847 = 0;
                                goto $l845;
                                $l877:;
                                $tmp634 = 18;
                                goto $l632;
                                $l878:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp865 = -1;
                        goto $l863;
                        $l863:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s866));
                        s866 = NULL;
                        switch ($tmp865) {
                            case 0: goto $l876;
                            case -1: goto $l880;
                        }
                        $l880:;
                    }
                    goto $l855;
                    $l856:;
                }
                $tmp847 = -1;
                goto $l845;
                $l845:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$17848));
                Iter$309$17848 = NULL;
                switch ($tmp847) {
                    case 0: goto $l877;
                    case -1: goto $l881;
                }
                $l881:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp882, false);
            $returnValue643 = $tmp882;
            $tmp634 = 19;
            goto $l632;
            $l883:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp885, 17);
        panda$core$Bit $tmp886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp885);
        if ($tmp886.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp887, true);
            $returnValue643 = $tmp887;
            $tmp634 = 20;
            goto $l632;
            $l888:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp890, 18);
        panda$core$Bit $tmp891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp890);
        if ($tmp891.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp892, false);
            $returnValue643 = $tmp892;
            $tmp634 = 21;
            goto $l632;
            $l893:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp895, 19);
        panda$core$Bit $tmp896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp895);
        if ($tmp896.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp898 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 16));
            test897 = *$tmp898;
            panda$collections$ImmutableArray** $tmp900 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 24));
            ifTrue899 = *$tmp900;
            org$pandalanguage$pandac$IRNode** $tmp902 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 32));
            ifFalse901 = *$tmp902;
            panda$core$Bit $tmp904 = (($fn903) test897->$class->vtable[4])(test897);
            if ($tmp904.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp905, true);
                $returnValue643 = $tmp905;
                $tmp634 = 22;
                goto $l632;
                $l906:;
                return $returnValue643;
            }
            }
            {
                int $tmp910;
                {
                    ITable* $tmp914 = ((panda$collections$Iterable*) ifTrue899)->$class->itable;
                    while ($tmp914->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp914 = $tmp914->next;
                    }
                    $fn916 $tmp915 = $tmp914->methods[0];
                    panda$collections$Iterator* $tmp917 = $tmp915(((panda$collections$Iterable*) ifTrue899));
                    $tmp913 = $tmp917;
                    $tmp912 = $tmp913;
                    Iter$323$17911 = $tmp912;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp912));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
                    $l918:;
                    ITable* $tmp921 = Iter$323$17911->$class->itable;
                    while ($tmp921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp921 = $tmp921->next;
                    }
                    $fn923 $tmp922 = $tmp921->methods[0];
                    panda$core$Bit $tmp924 = $tmp922(Iter$323$17911);
                    panda$core$Bit $tmp925 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp924);
                    bool $tmp920 = $tmp925.value;
                    if (!$tmp920) goto $l919;
                    {
                        int $tmp928;
                        {
                            ITable* $tmp932 = Iter$323$17911->$class->itable;
                            while ($tmp932->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp932 = $tmp932->next;
                            }
                            $fn934 $tmp933 = $tmp932->methods[1];
                            panda$core$Object* $tmp935 = $tmp933(Iter$323$17911);
                            $tmp931 = $tmp935;
                            $tmp930 = ((org$pandalanguage$pandac$IRNode*) $tmp931);
                            s929 = $tmp930;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp930));
                            panda$core$Panda$unref$panda$core$Object($tmp931);
                            panda$core$Bit $tmp937 = (($fn936) s929->$class->vtable[4])(s929);
                            if ($tmp937.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp938, true);
                                $returnValue643 = $tmp938;
                                $tmp928 = 0;
                                goto $l926;
                                $l939:;
                                $tmp910 = 0;
                                goto $l908;
                                $l940:;
                                $tmp634 = 23;
                                goto $l632;
                                $l941:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp928 = -1;
                        goto $l926;
                        $l926:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s929));
                        s929 = NULL;
                        switch ($tmp928) {
                            case -1: goto $l943;
                            case 0: goto $l939;
                        }
                        $l943:;
                    }
                    goto $l918;
                    $l919:;
                }
                $tmp910 = -1;
                goto $l908;
                $l908:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$17911));
                Iter$323$17911 = NULL;
                switch ($tmp910) {
                    case -1: goto $l944;
                    case 0: goto $l940;
                }
                $l944:;
            }
            panda$core$Bit $tmp946 = (($fn945) ifFalse901->$class->vtable[4])(ifFalse901);
            $returnValue643 = $tmp946;
            $tmp634 = 24;
            goto $l632;
            $l947:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp949, 20);
        panda$core$Bit $tmp950 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp949);
        if ($tmp950.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp951, false);
            $returnValue643 = $tmp951;
            $tmp634 = 25;
            goto $l632;
            $l952:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp954, 21);
        panda$core$Bit $tmp955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp954);
        if ($tmp955.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp957 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 16));
            value956 = *$tmp957;
            panda$core$Bit $tmp959 = (($fn958) value956->$class->vtable[4])(value956);
            $returnValue643 = $tmp959;
            $tmp634 = 26;
            goto $l632;
            $l960:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp962, 22);
        panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp962);
        if ($tmp963.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp965 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 16));
            value964 = *$tmp965;
            panda$core$Bit $tmp967 = (($fn966) value964->$class->vtable[4])(value964);
            $returnValue643 = $tmp967;
            $tmp634 = 27;
            goto $l632;
            $l968:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp970, 23);
        panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp970);
        if ($tmp971.value) {
        {
            panda$core$String** $tmp973 = ((panda$core$String**) ((char*) $match$263_9635->$data + 16));
            label972 = *$tmp973;
            panda$collections$ImmutableArray** $tmp975 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 24));
            statements974 = *$tmp975;
            {
                int $tmp978;
                {
                    ITable* $tmp982 = ((panda$collections$Iterable*) statements974)->$class->itable;
                    while ($tmp982->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp982 = $tmp982->next;
                    }
                    $fn984 $tmp983 = $tmp982->methods[0];
                    panda$collections$Iterator* $tmp985 = $tmp983(((panda$collections$Iterable*) statements974));
                    $tmp981 = $tmp985;
                    $tmp980 = $tmp981;
                    Iter$336$17979 = $tmp980;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp980));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
                    $l986:;
                    ITable* $tmp989 = Iter$336$17979->$class->itable;
                    while ($tmp989->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp989 = $tmp989->next;
                    }
                    $fn991 $tmp990 = $tmp989->methods[0];
                    panda$core$Bit $tmp992 = $tmp990(Iter$336$17979);
                    panda$core$Bit $tmp993 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp992);
                    bool $tmp988 = $tmp993.value;
                    if (!$tmp988) goto $l987;
                    {
                        int $tmp996;
                        {
                            ITable* $tmp1000 = Iter$336$17979->$class->itable;
                            while ($tmp1000->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1000 = $tmp1000->next;
                            }
                            $fn1002 $tmp1001 = $tmp1000->methods[1];
                            panda$core$Object* $tmp1003 = $tmp1001(Iter$336$17979);
                            $tmp999 = $tmp1003;
                            $tmp998 = ((org$pandalanguage$pandac$IRNode*) $tmp999);
                            s997 = $tmp998;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp998));
                            panda$core$Panda$unref$panda$core$Object($tmp999);
                            panda$core$Bit $tmp1005 = (($fn1004) s997->$class->vtable[4])(s997);
                            if ($tmp1005.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1006, true);
                                $returnValue643 = $tmp1006;
                                $tmp996 = 0;
                                goto $l994;
                                $l1007:;
                                $tmp978 = 0;
                                goto $l976;
                                $l1008:;
                                $tmp634 = 28;
                                goto $l632;
                                $l1009:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp996 = -1;
                        goto $l994;
                        $l994:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s997));
                        s997 = NULL;
                        switch ($tmp996) {
                            case 0: goto $l1007;
                            case -1: goto $l1011;
                        }
                        $l1011:;
                    }
                    goto $l986;
                    $l987:;
                }
                $tmp978 = -1;
                goto $l976;
                $l976:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17979));
                Iter$336$17979 = NULL;
                switch ($tmp978) {
                    case -1: goto $l1012;
                    case 0: goto $l1008;
                }
                $l1012:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1013, false);
            $returnValue643 = $tmp1013;
            $tmp634 = 29;
            goto $l632;
            $l1014:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1016, 24);
        panda$core$Bit $tmp1017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1016);
        if ($tmp1017.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1019 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 16));
            value1018 = *$tmp1019;
            panda$collections$ImmutableArray** $tmp1021 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 24));
            whens1020 = *$tmp1021;
            panda$collections$ImmutableArray** $tmp1023 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 32));
            other1022 = *$tmp1023;
            panda$core$Bit $tmp1025 = (($fn1024) value1018->$class->vtable[4])(value1018);
            if ($tmp1025.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1026, true);
                $returnValue643 = $tmp1026;
                $tmp634 = 30;
                goto $l632;
                $l1027:;
                return $returnValue643;
            }
            }
            {
                int $tmp1031;
                {
                    ITable* $tmp1035 = ((panda$collections$Iterable*) whens1020)->$class->itable;
                    while ($tmp1035->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1035 = $tmp1035->next;
                    }
                    $fn1037 $tmp1036 = $tmp1035->methods[0];
                    panda$collections$Iterator* $tmp1038 = $tmp1036(((panda$collections$Iterable*) whens1020));
                    $tmp1034 = $tmp1038;
                    $tmp1033 = $tmp1034;
                    Iter$346$171032 = $tmp1033;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1033));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1034));
                    $l1039:;
                    ITable* $tmp1042 = Iter$346$171032->$class->itable;
                    while ($tmp1042->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1042 = $tmp1042->next;
                    }
                    $fn1044 $tmp1043 = $tmp1042->methods[0];
                    panda$core$Bit $tmp1045 = $tmp1043(Iter$346$171032);
                    panda$core$Bit $tmp1046 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1045);
                    bool $tmp1041 = $tmp1046.value;
                    if (!$tmp1041) goto $l1040;
                    {
                        int $tmp1049;
                        {
                            ITable* $tmp1053 = Iter$346$171032->$class->itable;
                            while ($tmp1053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1053 = $tmp1053->next;
                            }
                            $fn1055 $tmp1054 = $tmp1053->methods[1];
                            panda$core$Object* $tmp1056 = $tmp1054(Iter$346$171032);
                            $tmp1052 = $tmp1056;
                            $tmp1051 = ((org$pandalanguage$pandac$IRNode*) $tmp1052);
                            w1050 = $tmp1051;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1051));
                            panda$core$Panda$unref$panda$core$Object($tmp1052);
                            panda$core$Bit $tmp1058 = (($fn1057) w1050->$class->vtable[4])(w1050);
                            if ($tmp1058.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1059, true);
                                $returnValue643 = $tmp1059;
                                $tmp1049 = 0;
                                goto $l1047;
                                $l1060:;
                                $tmp1031 = 0;
                                goto $l1029;
                                $l1061:;
                                $tmp634 = 31;
                                goto $l632;
                                $l1062:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp1049 = -1;
                        goto $l1047;
                        $l1047:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1050));
                        w1050 = NULL;
                        switch ($tmp1049) {
                            case -1: goto $l1064;
                            case 0: goto $l1060;
                        }
                        $l1064:;
                    }
                    goto $l1039;
                    $l1040:;
                }
                $tmp1031 = -1;
                goto $l1029;
                $l1029:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$346$171032));
                Iter$346$171032 = NULL;
                switch ($tmp1031) {
                    case 0: goto $l1061;
                    case -1: goto $l1065;
                }
                $l1065:;
            }
            {
                int $tmp1068;
                {
                    ITable* $tmp1072 = ((panda$collections$Iterable*) other1022)->$class->itable;
                    while ($tmp1072->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1072 = $tmp1072->next;
                    }
                    $fn1074 $tmp1073 = $tmp1072->methods[0];
                    panda$collections$Iterator* $tmp1075 = $tmp1073(((panda$collections$Iterable*) other1022));
                    $tmp1071 = $tmp1075;
                    $tmp1070 = $tmp1071;
                    Iter$351$171069 = $tmp1070;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1070));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1071));
                    $l1076:;
                    ITable* $tmp1079 = Iter$351$171069->$class->itable;
                    while ($tmp1079->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1079 = $tmp1079->next;
                    }
                    $fn1081 $tmp1080 = $tmp1079->methods[0];
                    panda$core$Bit $tmp1082 = $tmp1080(Iter$351$171069);
                    panda$core$Bit $tmp1083 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1082);
                    bool $tmp1078 = $tmp1083.value;
                    if (!$tmp1078) goto $l1077;
                    {
                        int $tmp1086;
                        {
                            ITable* $tmp1090 = Iter$351$171069->$class->itable;
                            while ($tmp1090->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1090 = $tmp1090->next;
                            }
                            $fn1092 $tmp1091 = $tmp1090->methods[1];
                            panda$core$Object* $tmp1093 = $tmp1091(Iter$351$171069);
                            $tmp1089 = $tmp1093;
                            $tmp1088 = ((org$pandalanguage$pandac$IRNode*) $tmp1089);
                            s1087 = $tmp1088;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1088));
                            panda$core$Panda$unref$panda$core$Object($tmp1089);
                            panda$core$Bit $tmp1095 = (($fn1094) s1087->$class->vtable[4])(s1087);
                            if ($tmp1095.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1096, true);
                                $returnValue643 = $tmp1096;
                                $tmp1086 = 0;
                                goto $l1084;
                                $l1097:;
                                $tmp1068 = 0;
                                goto $l1066;
                                $l1098:;
                                $tmp634 = 32;
                                goto $l632;
                                $l1099:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp1086 = -1;
                        goto $l1084;
                        $l1084:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1087));
                        s1087 = NULL;
                        switch ($tmp1086) {
                            case 0: goto $l1097;
                            case -1: goto $l1101;
                        }
                        $l1101:;
                    }
                    goto $l1076;
                    $l1077:;
                }
                $tmp1068 = -1;
                goto $l1066;
                $l1066:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$351$171069));
                Iter$351$171069 = NULL;
                switch ($tmp1068) {
                    case 0: goto $l1098;
                    case -1: goto $l1102;
                }
                $l1102:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1103, false);
            $returnValue643 = $tmp1103;
            $tmp634 = 33;
            goto $l632;
            $l1104:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1106, 25);
        panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1106);
        if ($tmp1107.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1108, false);
            $returnValue643 = $tmp1108;
            $tmp634 = 34;
            goto $l632;
            $l1109:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1111, 26);
        panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1111);
        if ($tmp1112.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1113, false);
            $returnValue643 = $tmp1113;
            $tmp634 = 35;
            goto $l632;
            $l1114:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1116, 27);
        panda$core$Bit $tmp1117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1116);
        if ($tmp1117.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1118, false);
            $returnValue643 = $tmp1118;
            $tmp634 = 36;
            goto $l632;
            $l1119:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1121, 28);
        panda$core$Bit $tmp1122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1121);
        if ($tmp1122.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1124 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 24));
            base1123 = *$tmp1124;
            panda$core$Bit $tmp1126 = (($fn1125) base1123->$class->vtable[4])(base1123);
            $returnValue643 = $tmp1126;
            $tmp634 = 37;
            goto $l632;
            $l1127:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1129, 29);
        panda$core$Bit $tmp1130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1129);
        if ($tmp1130.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1132 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 32));
            list1131 = *$tmp1132;
            panda$collections$ImmutableArray** $tmp1134 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 40));
            statements1133 = *$tmp1134;
            panda$core$Bit $tmp1136 = (($fn1135) list1131->$class->vtable[4])(list1131);
            if ($tmp1136.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1137, true);
                $returnValue643 = $tmp1137;
                $tmp634 = 38;
                goto $l632;
                $l1138:;
                return $returnValue643;
            }
            }
            {
                int $tmp1142;
                {
                    ITable* $tmp1146 = ((panda$collections$Iterable*) statements1133)->$class->itable;
                    while ($tmp1146->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1146 = $tmp1146->next;
                    }
                    $fn1148 $tmp1147 = $tmp1146->methods[0];
                    panda$collections$Iterator* $tmp1149 = $tmp1147(((panda$collections$Iterable*) statements1133));
                    $tmp1145 = $tmp1149;
                    $tmp1144 = $tmp1145;
                    Iter$370$171143 = $tmp1144;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1144));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1145));
                    $l1150:;
                    ITable* $tmp1153 = Iter$370$171143->$class->itable;
                    while ($tmp1153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1153 = $tmp1153->next;
                    }
                    $fn1155 $tmp1154 = $tmp1153->methods[0];
                    panda$core$Bit $tmp1156 = $tmp1154(Iter$370$171143);
                    panda$core$Bit $tmp1157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1156);
                    bool $tmp1152 = $tmp1157.value;
                    if (!$tmp1152) goto $l1151;
                    {
                        int $tmp1160;
                        {
                            ITable* $tmp1164 = Iter$370$171143->$class->itable;
                            while ($tmp1164->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1164 = $tmp1164->next;
                            }
                            $fn1166 $tmp1165 = $tmp1164->methods[1];
                            panda$core$Object* $tmp1167 = $tmp1165(Iter$370$171143);
                            $tmp1163 = $tmp1167;
                            $tmp1162 = ((org$pandalanguage$pandac$IRNode*) $tmp1163);
                            s1161 = $tmp1162;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1162));
                            panda$core$Panda$unref$panda$core$Object($tmp1163);
                            panda$core$Bit $tmp1169 = (($fn1168) s1161->$class->vtable[4])(s1161);
                            if ($tmp1169.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1170, true);
                                $returnValue643 = $tmp1170;
                                $tmp1160 = 0;
                                goto $l1158;
                                $l1171:;
                                $tmp1142 = 0;
                                goto $l1140;
                                $l1172:;
                                $tmp634 = 39;
                                goto $l632;
                                $l1173:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp1160 = -1;
                        goto $l1158;
                        $l1158:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1161));
                        s1161 = NULL;
                        switch ($tmp1160) {
                            case 0: goto $l1171;
                            case -1: goto $l1175;
                        }
                        $l1175:;
                    }
                    goto $l1150;
                    $l1151:;
                }
                $tmp1142 = -1;
                goto $l1140;
                $l1140:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$370$171143));
                Iter$370$171143 = NULL;
                switch ($tmp1142) {
                    case -1: goto $l1176;
                    case 0: goto $l1172;
                }
                $l1176:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1177, false);
            $returnValue643 = $tmp1177;
            $tmp634 = 40;
            goto $l632;
            $l1178:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1180, 30);
        panda$core$Bit $tmp1181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1180);
        if ($tmp1181.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1182, false);
            $returnValue643 = $tmp1182;
            $tmp634 = 41;
            goto $l632;
            $l1183:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1185, 31);
        panda$core$Bit $tmp1186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1185);
        if ($tmp1186.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1188 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 16));
            value1187 = *$tmp1188;
            panda$core$Bit $tmp1190 = (($fn1189) value1187->$class->vtable[4])(value1187);
            $returnValue643 = $tmp1190;
            $tmp634 = 42;
            goto $l632;
            $l1191:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1193, 32);
        panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1193);
        if ($tmp1194.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1195, false);
            $returnValue643 = $tmp1195;
            $tmp634 = 43;
            goto $l632;
            $l1196:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1198, 33);
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1198);
        if ($tmp1199.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1201 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 0));
            base1200 = *$tmp1201;
            panda$core$Bit $tmp1203 = (($fn1202) base1200->$class->vtable[4])(base1200);
            $returnValue643 = $tmp1203;
            $tmp634 = 44;
            goto $l632;
            $l1204:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1206, 34);
        panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1206);
        if ($tmp1207.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1208, false);
            $returnValue643 = $tmp1208;
            $tmp634 = 45;
            goto $l632;
            $l1209:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1211, 35);
        panda$core$Bit $tmp1212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1211);
        if ($tmp1212.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1213, false);
            $returnValue643 = $tmp1213;
            $tmp634 = 46;
            goto $l632;
            $l1214:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1216, 36);
        panda$core$Bit $tmp1217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1216);
        if ($tmp1217.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1218, false);
            $returnValue643 = $tmp1218;
            $tmp634 = 47;
            goto $l632;
            $l1219:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1221, 37);
        panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1221);
        if ($tmp1222.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1223, false);
            $returnValue643 = $tmp1223;
            $tmp634 = 48;
            goto $l632;
            $l1224:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1226, 38);
        panda$core$Bit $tmp1227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1226);
        if ($tmp1227.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1229 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 16));
            test1228 = *$tmp1229;
            org$pandalanguage$pandac$IRNode** $tmp1231 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 24));
            ifTrue1230 = *$tmp1231;
            org$pandalanguage$pandac$IRNode** $tmp1233 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 32));
            ifFalse1232 = *$tmp1233;
            panda$core$Bit $tmp1237 = (($fn1236) test1228->$class->vtable[4])(test1228);
            bool $tmp1235 = $tmp1237.value;
            if ($tmp1235) goto $l1238;
            panda$core$Bit $tmp1240 = (($fn1239) ifTrue1230->$class->vtable[4])(ifTrue1230);
            $tmp1235 = $tmp1240.value;
            $l1238:;
            panda$core$Bit $tmp1241 = { $tmp1235 };
            bool $tmp1234 = $tmp1241.value;
            if ($tmp1234) goto $l1242;
            panda$core$Bit $tmp1244 = (($fn1243) ifFalse1232->$class->vtable[4])(ifFalse1232);
            $tmp1234 = $tmp1244.value;
            $l1242:;
            panda$core$Bit $tmp1245 = { $tmp1234 };
            $returnValue643 = $tmp1245;
            $tmp634 = 49;
            goto $l632;
            $l1246:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1248, 39);
        panda$core$Bit $tmp1249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1248);
        if ($tmp1249.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1250, false);
            $returnValue643 = $tmp1250;
            $tmp634 = 50;
            goto $l632;
            $l1251:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1253, 40);
        panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1253);
        if ($tmp1254.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1255, false);
            if ($tmp1255.value) goto $l1256; else goto $l1257;
            $l1257:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1258, (panda$core$Int64) { 397 });
            abort();
            $l1256:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1259, 41);
        panda$core$Bit $tmp1260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1259);
        if ($tmp1260.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1261, false);
            if ($tmp1261.value) goto $l1262; else goto $l1263;
            $l1263:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1264, (panda$core$Int64) { 399 });
            abort();
            $l1262:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1265, 42);
        panda$core$Bit $tmp1266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1265);
        if ($tmp1266.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1267, false);
            if ($tmp1267.value) goto $l1268; else goto $l1269;
            $l1269:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1270, (panda$core$Int64) { 401 });
            abort();
            $l1268:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1271, 43);
        panda$core$Bit $tmp1272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1271);
        if ($tmp1272.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1273, false);
            if ($tmp1273.value) goto $l1274; else goto $l1275;
            $l1275:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1276, (panda$core$Int64) { 403 });
            abort();
            $l1274:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1277, 44);
        panda$core$Bit $tmp1278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1277);
        if ($tmp1278.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1279, false);
            if ($tmp1279.value) goto $l1280; else goto $l1281;
            $l1281:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1282, (panda$core$Int64) { 405 });
            abort();
            $l1280:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1283, 45);
        panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1283);
        if ($tmp1284.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1285, false);
            if ($tmp1285.value) goto $l1286; else goto $l1287;
            $l1287:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1288, (panda$core$Int64) { 407 });
            abort();
            $l1286:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1289, 46);
        panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1289);
        if ($tmp1290.value) {
        {
            panda$collections$ImmutableArray** $tmp1292 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 24));
            decls1291 = *$tmp1292;
            {
                int $tmp1295;
                {
                    ITable* $tmp1299 = ((panda$collections$Iterable*) decls1291)->$class->itable;
                    while ($tmp1299->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1299 = $tmp1299->next;
                    }
                    $fn1301 $tmp1300 = $tmp1299->methods[0];
                    panda$collections$Iterator* $tmp1302 = $tmp1300(((panda$collections$Iterable*) decls1291));
                    $tmp1298 = $tmp1302;
                    $tmp1297 = $tmp1298;
                    Iter$409$171296 = $tmp1297;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1297));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
                    $l1303:;
                    ITable* $tmp1306 = Iter$409$171296->$class->itable;
                    while ($tmp1306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1306 = $tmp1306->next;
                    }
                    $fn1308 $tmp1307 = $tmp1306->methods[0];
                    panda$core$Bit $tmp1309 = $tmp1307(Iter$409$171296);
                    panda$core$Bit $tmp1310 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1309);
                    bool $tmp1305 = $tmp1310.value;
                    if (!$tmp1305) goto $l1304;
                    {
                        int $tmp1313;
                        {
                            ITable* $tmp1317 = Iter$409$171296->$class->itable;
                            while ($tmp1317->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1317 = $tmp1317->next;
                            }
                            $fn1319 $tmp1318 = $tmp1317->methods[1];
                            panda$core$Object* $tmp1320 = $tmp1318(Iter$409$171296);
                            $tmp1316 = $tmp1320;
                            $tmp1315 = ((org$pandalanguage$pandac$IRNode*) $tmp1316);
                            d1314 = $tmp1315;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1315));
                            panda$core$Panda$unref$panda$core$Object($tmp1316);
                            panda$core$Bit $tmp1322 = (($fn1321) d1314->$class->vtable[4])(d1314);
                            if ($tmp1322.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1323, true);
                                $returnValue643 = $tmp1323;
                                $tmp1313 = 0;
                                goto $l1311;
                                $l1324:;
                                $tmp1295 = 0;
                                goto $l1293;
                                $l1325:;
                                $tmp634 = 51;
                                goto $l632;
                                $l1326:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp1313 = -1;
                        goto $l1311;
                        $l1311:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1314));
                        d1314 = NULL;
                        switch ($tmp1313) {
                            case -1: goto $l1328;
                            case 0: goto $l1324;
                        }
                        $l1328:;
                    }
                    goto $l1303;
                    $l1304:;
                }
                $tmp1295 = -1;
                goto $l1293;
                $l1293:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$409$171296));
                Iter$409$171296 = NULL;
                switch ($tmp1295) {
                    case -1: goto $l1329;
                    case 0: goto $l1325;
                }
                $l1329:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1330, false);
            $returnValue643 = $tmp1330;
            $tmp634 = 52;
            goto $l632;
            $l1331:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1333, 47);
        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1333);
        if ($tmp1334.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1335, false);
            $returnValue643 = $tmp1335;
            $tmp634 = 53;
            goto $l632;
            $l1336:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1338, 48);
        panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1338);
        if ($tmp1339.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1340, false);
            $returnValue643 = $tmp1340;
            $tmp634 = 54;
            goto $l632;
            $l1341:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1343, 49);
        panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1343);
        if ($tmp1344.value) {
        {
            panda$collections$ImmutableArray** $tmp1346 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 16));
            tests1345 = *$tmp1346;
            panda$collections$ImmutableArray** $tmp1348 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 24));
            statements1347 = *$tmp1348;
            {
                int $tmp1351;
                {
                    ITable* $tmp1355 = ((panda$collections$Iterable*) tests1345)->$class->itable;
                    while ($tmp1355->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1355 = $tmp1355->next;
                    }
                    $fn1357 $tmp1356 = $tmp1355->methods[0];
                    panda$collections$Iterator* $tmp1358 = $tmp1356(((panda$collections$Iterable*) tests1345));
                    $tmp1354 = $tmp1358;
                    $tmp1353 = $tmp1354;
                    Iter$420$171352 = $tmp1353;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1353));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1354));
                    $l1359:;
                    ITable* $tmp1362 = Iter$420$171352->$class->itable;
                    while ($tmp1362->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1362 = $tmp1362->next;
                    }
                    $fn1364 $tmp1363 = $tmp1362->methods[0];
                    panda$core$Bit $tmp1365 = $tmp1363(Iter$420$171352);
                    panda$core$Bit $tmp1366 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1365);
                    bool $tmp1361 = $tmp1366.value;
                    if (!$tmp1361) goto $l1360;
                    {
                        int $tmp1369;
                        {
                            ITable* $tmp1373 = Iter$420$171352->$class->itable;
                            while ($tmp1373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1373 = $tmp1373->next;
                            }
                            $fn1375 $tmp1374 = $tmp1373->methods[1];
                            panda$core$Object* $tmp1376 = $tmp1374(Iter$420$171352);
                            $tmp1372 = $tmp1376;
                            $tmp1371 = ((org$pandalanguage$pandac$IRNode*) $tmp1372);
                            t1370 = $tmp1371;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1371));
                            panda$core$Panda$unref$panda$core$Object($tmp1372);
                            panda$core$Bit $tmp1378 = (($fn1377) t1370->$class->vtable[4])(t1370);
                            if ($tmp1378.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1379, true);
                                $returnValue643 = $tmp1379;
                                $tmp1369 = 0;
                                goto $l1367;
                                $l1380:;
                                $tmp1351 = 0;
                                goto $l1349;
                                $l1381:;
                                $tmp634 = 55;
                                goto $l632;
                                $l1382:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp1369 = -1;
                        goto $l1367;
                        $l1367:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1370));
                        t1370 = NULL;
                        switch ($tmp1369) {
                            case -1: goto $l1384;
                            case 0: goto $l1380;
                        }
                        $l1384:;
                    }
                    goto $l1359;
                    $l1360:;
                }
                $tmp1351 = -1;
                goto $l1349;
                $l1349:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$420$171352));
                Iter$420$171352 = NULL;
                switch ($tmp1351) {
                    case 0: goto $l1381;
                    case -1: goto $l1385;
                }
                $l1385:;
            }
            {
                int $tmp1388;
                {
                    ITable* $tmp1392 = ((panda$collections$Iterable*) statements1347)->$class->itable;
                    while ($tmp1392->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1392 = $tmp1392->next;
                    }
                    $fn1394 $tmp1393 = $tmp1392->methods[0];
                    panda$collections$Iterator* $tmp1395 = $tmp1393(((panda$collections$Iterable*) statements1347));
                    $tmp1391 = $tmp1395;
                    $tmp1390 = $tmp1391;
                    Iter$425$171389 = $tmp1390;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1391));
                    $l1396:;
                    ITable* $tmp1399 = Iter$425$171389->$class->itable;
                    while ($tmp1399->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1399 = $tmp1399->next;
                    }
                    $fn1401 $tmp1400 = $tmp1399->methods[0];
                    panda$core$Bit $tmp1402 = $tmp1400(Iter$425$171389);
                    panda$core$Bit $tmp1403 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1402);
                    bool $tmp1398 = $tmp1403.value;
                    if (!$tmp1398) goto $l1397;
                    {
                        int $tmp1406;
                        {
                            ITable* $tmp1410 = Iter$425$171389->$class->itable;
                            while ($tmp1410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1410 = $tmp1410->next;
                            }
                            $fn1412 $tmp1411 = $tmp1410->methods[1];
                            panda$core$Object* $tmp1413 = $tmp1411(Iter$425$171389);
                            $tmp1409 = $tmp1413;
                            $tmp1408 = ((org$pandalanguage$pandac$IRNode*) $tmp1409);
                            s1407 = $tmp1408;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1408));
                            panda$core$Panda$unref$panda$core$Object($tmp1409);
                            panda$core$Bit $tmp1415 = (($fn1414) s1407->$class->vtable[4])(s1407);
                            if ($tmp1415.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1416, true);
                                $returnValue643 = $tmp1416;
                                $tmp1406 = 0;
                                goto $l1404;
                                $l1417:;
                                $tmp1388 = 0;
                                goto $l1386;
                                $l1418:;
                                $tmp634 = 56;
                                goto $l632;
                                $l1419:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp1406 = -1;
                        goto $l1404;
                        $l1404:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1407));
                        s1407 = NULL;
                        switch ($tmp1406) {
                            case -1: goto $l1421;
                            case 0: goto $l1417;
                        }
                        $l1421:;
                    }
                    goto $l1396;
                    $l1397:;
                }
                $tmp1388 = -1;
                goto $l1386;
                $l1386:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$425$171389));
                Iter$425$171389 = NULL;
                switch ($tmp1388) {
                    case -1: goto $l1422;
                    case 0: goto $l1418;
                }
                $l1422:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1423, false);
            $returnValue643 = $tmp1423;
            $tmp634 = 57;
            goto $l632;
            $l1424:;
            return $returnValue643;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1426, 50);
        panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9635->$rawValue, $tmp1426);
        if ($tmp1427.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1429 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9635->$data + 24));
            test1428 = *$tmp1429;
            panda$collections$ImmutableArray** $tmp1431 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9635->$data + 32));
            statements1430 = *$tmp1431;
            panda$core$Bit $tmp1433 = (($fn1432) test1428->$class->vtable[4])(test1428);
            if ($tmp1433.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1434, true);
                $returnValue643 = $tmp1434;
                $tmp634 = 58;
                goto $l632;
                $l1435:;
                return $returnValue643;
            }
            }
            {
                int $tmp1439;
                {
                    ITable* $tmp1443 = ((panda$collections$Iterable*) statements1430)->$class->itable;
                    while ($tmp1443->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1443 = $tmp1443->next;
                    }
                    $fn1445 $tmp1444 = $tmp1443->methods[0];
                    panda$collections$Iterator* $tmp1446 = $tmp1444(((panda$collections$Iterable*) statements1430));
                    $tmp1442 = $tmp1446;
                    $tmp1441 = $tmp1442;
                    Iter$435$171440 = $tmp1441;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
                    $l1447:;
                    ITable* $tmp1450 = Iter$435$171440->$class->itable;
                    while ($tmp1450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1450 = $tmp1450->next;
                    }
                    $fn1452 $tmp1451 = $tmp1450->methods[0];
                    panda$core$Bit $tmp1453 = $tmp1451(Iter$435$171440);
                    panda$core$Bit $tmp1454 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1453);
                    bool $tmp1449 = $tmp1454.value;
                    if (!$tmp1449) goto $l1448;
                    {
                        int $tmp1457;
                        {
                            ITable* $tmp1461 = Iter$435$171440->$class->itable;
                            while ($tmp1461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1461 = $tmp1461->next;
                            }
                            $fn1463 $tmp1462 = $tmp1461->methods[1];
                            panda$core$Object* $tmp1464 = $tmp1462(Iter$435$171440);
                            $tmp1460 = $tmp1464;
                            $tmp1459 = ((org$pandalanguage$pandac$IRNode*) $tmp1460);
                            s1458 = $tmp1459;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                            panda$core$Panda$unref$panda$core$Object($tmp1460);
                            panda$core$Bit $tmp1466 = (($fn1465) s1458->$class->vtable[4])(s1458);
                            if ($tmp1466.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1467, true);
                                $returnValue643 = $tmp1467;
                                $tmp1457 = 0;
                                goto $l1455;
                                $l1468:;
                                $tmp1439 = 0;
                                goto $l1437;
                                $l1469:;
                                $tmp634 = 59;
                                goto $l632;
                                $l1470:;
                                return $returnValue643;
                            }
                            }
                        }
                        $tmp1457 = -1;
                        goto $l1455;
                        $l1455:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1458));
                        s1458 = NULL;
                        switch ($tmp1457) {
                            case 0: goto $l1468;
                            case -1: goto $l1472;
                        }
                        $l1472:;
                    }
                    goto $l1447;
                    $l1448:;
                }
                $tmp1439 = -1;
                goto $l1437;
                $l1437:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$435$171440));
                Iter$435$171440 = NULL;
                switch ($tmp1439) {
                    case 0: goto $l1469;
                    case -1: goto $l1473;
                }
                $l1473:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1474, false);
            $returnValue643 = $tmp1474;
            $tmp634 = 60;
            goto $l632;
            $l1475:;
            return $returnValue643;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1477, false);
            if ($tmp1477.value) goto $l1478; else goto $l1479;
            $l1479:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1480, (panda$core$Int64) { 442 });
            abort();
            $l1478:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp634 = -1;
    goto $l632;
    $l632:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
    switch ($tmp634) {
        case 4: goto $l721;
        case 1: goto $l656;
        case 17: goto $l843;
        case 18: goto $l878;
        case 34: goto $l1109;
        case 33: goto $l1104;
        case 35: goto $l1114;
        case 46: goto $l1214;
        case 31: goto $l1062;
        case 36: goto $l1119;
        case 37: goto $l1127;
        case 14: goto $l812;
        case 28: goto $l1009;
        case 56: goto $l1419;
        case 25: goto $l952;
        case 44: goto $l1204;
        case 43: goto $l1196;
        case 60: goto $l1475;
        case -1: goto $l1481;
        case 0: goto $l651;
        case 26: goto $l960;
        case 41: goto $l1183;
        case 40: goto $l1178;
        case 58: goto $l1435;
        case 57: goto $l1424;
        case 39: goto $l1173;
        case 11: goto $l792;
        case 23: goto $l941;
        case 59: goto $l1470;
        case 30: goto $l1027;
        case 15: goto $l817;
        case 24: goto $l947;
        case 29: goto $l1014;
        case 53: goto $l1336;
        case 38: goto $l1138;
        case 54: goto $l1341;
        case 22: goto $l906;
        case 12: goto $l797;
        case 49: goto $l1246;
        case 7: goto $l742;
        case 13: goto $l807;
        case 8: goto $l777;
        case 32: goto $l1099;
        case 42: goto $l1191;
        case 45: goto $l1209;
        case 55: goto $l1382;
        case 51: goto $l1326;
        case 10: goto $l787;
        case 52: goto $l1331;
        case 19: goto $l883;
        case 16: goto $l830;
        case 9: goto $l782;
        case 20: goto $l888;
        case 6: goto $l731;
        case 47: goto $l1219;
        case 50: goto $l1251;
        case 3: goto $l682;
        case 48: goto $l1224;
        case 21: goto $l893;
        case 27: goto $l968;
        case 2: goto $l677;
        case 5: goto $l726;
    }
    $l1481:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(panda$collections$ImmutableArray* p_nodes, panda$core$MutableMethod* p_f) {
    panda$collections$Array* newNodes1485 = NULL;
    panda$collections$Array* $tmp1486;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1487;
    panda$core$Int64 $tmp1488;
    panda$core$Bit $tmp1493;
    org$pandalanguage$pandac$IRNode* newNode1510 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1511;
    org$pandalanguage$pandac$IRNode* $tmp1512;
    panda$core$Object* $tmp1513;
    panda$collections$Array* $tmp1516;
    panda$collections$Array* $tmp1517;
    panda$collections$Array* $tmp1518;
    panda$collections$ImmutableArray* $returnValue1527;
    panda$collections$ImmutableArray* $tmp1528;
    panda$collections$ImmutableArray* $tmp1529;
    panda$collections$ImmutableArray* $tmp1533;
    int $tmp1484;
    {
        $tmp1486 = NULL;
        newNodes1485 = $tmp1486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1486));
        if (((panda$core$Bit) { p_nodes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1488, 0);
            ITable* $tmp1489 = ((panda$collections$CollectionView*) p_nodes)->$class->itable;
            while ($tmp1489->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1489 = $tmp1489->next;
            }
            $fn1491 $tmp1490 = $tmp1489->methods[0];
            panda$core$Int64 $tmp1492 = $tmp1490(((panda$collections$CollectionView*) p_nodes));
            panda$core$Bit$init$builtin_bit(&$tmp1493, false);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1487, $tmp1488, $tmp1492, $tmp1493);
            int64_t $tmp1495 = $tmp1487.min.value;
            panda$core$Int64 i1494 = { $tmp1495 };
            int64_t $tmp1497 = $tmp1487.max.value;
            bool $tmp1498 = $tmp1487.inclusive.value;
            if ($tmp1498) goto $l1505; else goto $l1506;
            $l1505:;
            if ($tmp1495 <= $tmp1497) goto $l1499; else goto $l1501;
            $l1506:;
            if ($tmp1495 < $tmp1497) goto $l1499; else goto $l1501;
            $l1499:;
            {
                int $tmp1509;
                {
                    panda$core$Object* $tmp1514 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_nodes, i1494);
                    $tmp1513 = $tmp1514;
                    org$pandalanguage$pandac$IRNode* $tmp1515 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(((org$pandalanguage$pandac$IRNode*) $tmp1513), p_f);
                    $tmp1512 = $tmp1515;
                    $tmp1511 = $tmp1512;
                    newNode1510 = $tmp1511;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1511));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
                    panda$core$Panda$unref$panda$core$Object($tmp1513);
                    if (((panda$core$Bit) { newNode1510 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { newNodes1485 == NULL }).value) {
                        {
                            {
                                $tmp1516 = newNodes1485;
                                panda$collections$Array* $tmp1519 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp1519, ((panda$collections$CollectionView*) p_nodes));
                                $tmp1518 = $tmp1519;
                                $tmp1517 = $tmp1518;
                                newNodes1485 = $tmp1517;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1518));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1516));
                            }
                        }
                        }
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(newNodes1485, i1494, ((panda$core$Object*) newNode1510));
                    }
                    }
                }
                $tmp1509 = -1;
                goto $l1507;
                $l1507:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newNode1510));
                newNode1510 = NULL;
                switch ($tmp1509) {
                    case -1: goto $l1520;
                }
                $l1520:;
            }
            $l1502:;
            int64_t $tmp1522 = $tmp1497 - i1494.value;
            if ($tmp1498) goto $l1523; else goto $l1524;
            $l1523:;
            if ((uint64_t) $tmp1522 >= 1) goto $l1521; else goto $l1501;
            $l1524:;
            if ((uint64_t) $tmp1522 > 1) goto $l1521; else goto $l1501;
            $l1521:;
            i1494.value += 1;
            goto $l1499;
            $l1501:;
        }
        }
        if (((panda$core$Bit) { newNodes1485 != NULL }).value) {
        {
            panda$collections$ImmutableArray* $tmp1530 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(newNodes1485);
            $tmp1529 = $tmp1530;
            $tmp1528 = $tmp1529;
            $returnValue1527 = $tmp1528;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1528));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1529));
            $tmp1484 = 0;
            goto $l1482;
            $l1531:;
            return $returnValue1527;
        }
        }
        $tmp1533 = NULL;
        $returnValue1527 = $tmp1533;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1533));
        $tmp1484 = 1;
        goto $l1482;
        $l1534:;
        return $returnValue1527;
    }
    $l1482:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newNodes1485));
    switch ($tmp1484) {
        case 0: goto $l1531;
        case 1: goto $l1534;
    }
    $l1536:;
    abort();
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* p_node, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* $returnValue1537;
    org$pandalanguage$pandac$IRNode* $tmp1538;
    org$pandalanguage$pandac$IRNode* $tmp1540;
    org$pandalanguage$pandac$IRNode* $tmp1541;
    if (((panda$core$Bit) { p_node == NULL }).value) {
    {
        $tmp1538 = NULL;
        $returnValue1537 = $tmp1538;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1538));
        return $returnValue1537;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp1543 = (($fn1542) p_node->$class->vtable[7])(p_node, p_f);
    $tmp1541 = $tmp1543;
    $tmp1540 = $tmp1541;
    $returnValue1537 = $tmp1540;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1540));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1541));
    return $returnValue1537;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$default$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$IRNode* p_defaultValue) {
    org$pandalanguage$pandac$IRNode* $returnValue1545;
    org$pandalanguage$pandac$IRNode* $tmp1546;
    org$pandalanguage$pandac$IRNode* $tmp1548;
    if (((panda$core$Bit) { p_node != NULL }).value) {
    {
        $tmp1546 = p_node;
        $returnValue1545 = $tmp1546;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1546));
        return $returnValue1545;
    }
    }
    $tmp1548 = p_defaultValue;
    $returnValue1545 = $tmp1548;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1548));
    return $returnValue1545;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$IRNode$default$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$collections$ImmutableArray* p_nodes, panda$collections$ImmutableArray* p_defaultValue) {
    panda$collections$ImmutableArray* $returnValue1550;
    panda$collections$ImmutableArray* $tmp1551;
    panda$collections$ImmutableArray* $tmp1553;
    if (((panda$core$Bit) { p_nodes != NULL }).value) {
    {
        $tmp1551 = p_nodes;
        $returnValue1550 = $tmp1551;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1551));
        return $returnValue1550;
    }
    }
    $tmp1553 = p_defaultValue;
    $returnValue1550 = $tmp1553;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1553));
    return $returnValue1550;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$transform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* result1558 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1559;
    org$pandalanguage$pandac$IRNode* $tmp1560;
    org$pandalanguage$pandac$IRNode* $returnValue1562;
    org$pandalanguage$pandac$IRNode* $tmp1563;
    org$pandalanguage$pandac$IRNode* $tmp1566;
    int $tmp1557;
    {
        org$pandalanguage$pandac$IRNode* $tmp1561 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(self, p_f);
        $tmp1560 = $tmp1561;
        $tmp1559 = $tmp1560;
        result1558 = $tmp1559;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1559));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1560));
        if (((panda$core$Bit) { result1558 != NULL }).value) {
        {
            $tmp1563 = result1558;
            $returnValue1562 = $tmp1563;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1563));
            $tmp1557 = 0;
            goto $l1555;
            $l1564:;
            return $returnValue1562;
        }
        }
        $tmp1566 = self;
        $returnValue1562 = $tmp1566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1566));
        $tmp1557 = 1;
        goto $l1555;
        $l1567:;
        return $returnValue1562;
    }
    $l1555:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1558));
    result1558 = NULL;
    switch ($tmp1557) {
        case 1: goto $l1567;
        case 0: goto $l1564;
    }
    $l1569:;
    abort();
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* transformed1573 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1574;
    org$pandalanguage$pandac$IRNode* $tmp1575;
    org$pandalanguage$pandac$IRNode* $tmp1576;
    org$pandalanguage$pandac$IRNode* $returnValue1579;
    org$pandalanguage$pandac$IRNode* $tmp1580;
    org$pandalanguage$pandac$IRNode* $match$506_91586 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1587;
    panda$core$Int64 $tmp1611;
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
    panda$core$Int64 $tmp1702;
    panda$core$Int64 $tmp1705;
    org$pandalanguage$pandac$Position position1707;
    org$pandalanguage$pandac$IRNode* test1709 = NULL;
    org$pandalanguage$pandac$IRNode* message1711 = NULL;
    org$pandalanguage$pandac$IRNode* newTest1716 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1717;
    org$pandalanguage$pandac$IRNode* $tmp1718;
    org$pandalanguage$pandac$IRNode* newMessage1720 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1721;
    org$pandalanguage$pandac$IRNode* $tmp1722;
    org$pandalanguage$pandac$IRNode* $tmp1727;
    org$pandalanguage$pandac$IRNode* $tmp1728;
    panda$core$Int64 $tmp1730;
    org$pandalanguage$pandac$IRNode* $tmp1731;
    org$pandalanguage$pandac$IRNode* $tmp1734;
    panda$core$Int64 $tmp1742;
    org$pandalanguage$pandac$Position position1744;
    org$pandalanguage$pandac$Type* type1746 = NULL;
    org$pandalanguage$pandac$IRNode* left1748 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1750;
    org$pandalanguage$pandac$IRNode* right1752 = NULL;
    org$pandalanguage$pandac$IRNode* newLeft1757 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1758;
    org$pandalanguage$pandac$IRNode* $tmp1759;
    org$pandalanguage$pandac$IRNode* newRight1761 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1762;
    org$pandalanguage$pandac$IRNode* $tmp1763;
    org$pandalanguage$pandac$IRNode* $tmp1768;
    org$pandalanguage$pandac$IRNode* $tmp1769;
    panda$core$Int64 $tmp1771;
    org$pandalanguage$pandac$IRNode* $tmp1772;
    org$pandalanguage$pandac$IRNode* $tmp1775;
    panda$core$Int64 $tmp1783;
    org$pandalanguage$pandac$Position position1785;
    panda$collections$ImmutableArray* statements1787 = NULL;
    panda$collections$ImmutableArray* newStatements1792 = NULL;
    panda$collections$ImmutableArray* $tmp1793;
    panda$collections$ImmutableArray* $tmp1794;
    org$pandalanguage$pandac$IRNode* $tmp1796;
    org$pandalanguage$pandac$IRNode* $tmp1797;
    panda$core$Int64 $tmp1799;
    panda$core$Int64 $tmp1805;
    org$pandalanguage$pandac$Position position1807;
    panda$collections$ImmutableArray* statements1809 = NULL;
    panda$collections$ImmutableArray* finally1811 = NULL;
    panda$collections$ImmutableArray* newStatements1816 = NULL;
    panda$collections$ImmutableArray* $tmp1817;
    panda$collections$ImmutableArray* $tmp1818;
    panda$collections$ImmutableArray* newFinally1820 = NULL;
    panda$collections$ImmutableArray* $tmp1821;
    panda$collections$ImmutableArray* $tmp1822;
    org$pandalanguage$pandac$IRNode* $tmp1824;
    org$pandalanguage$pandac$IRNode* $tmp1825;
    panda$core$Int64 $tmp1827;
    panda$collections$ImmutableArray* $tmp1828;
    panda$collections$ImmutableArray* $tmp1831;
    panda$core$Int64 $tmp1839;
    org$pandalanguage$pandac$Position position1841;
    org$pandalanguage$pandac$Type* type1843 = NULL;
    org$pandalanguage$pandac$MethodRef* m1845 = NULL;
    panda$collections$ImmutableArray* args1847 = NULL;
    panda$collections$ImmutableArray* newArgs1852 = NULL;
    panda$collections$ImmutableArray* $tmp1853;
    panda$collections$ImmutableArray* $tmp1854;
    org$pandalanguage$pandac$IRNode* $tmp1856;
    org$pandalanguage$pandac$IRNode* $tmp1857;
    panda$core$Int64 $tmp1859;
    panda$collections$ImmutableArray* $tmp1860;
    panda$core$Int64 $tmp1868;
    org$pandalanguage$pandac$Position position1870;
    org$pandalanguage$pandac$IRNode* value1872 = NULL;
    org$pandalanguage$pandac$Type* type1874 = NULL;
    panda$core$Bit explicit1876;
    org$pandalanguage$pandac$IRNode* newValue1881 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1882;
    org$pandalanguage$pandac$IRNode* $tmp1883;
    org$pandalanguage$pandac$IRNode* $tmp1885;
    org$pandalanguage$pandac$IRNode* $tmp1886;
    panda$core$Int64 $tmp1888;
    panda$core$Int64 $tmp1894;
    org$pandalanguage$pandac$Position position1896;
    org$pandalanguage$pandac$IRNode* base1898 = NULL;
    org$pandalanguage$pandac$ChoiceCase* ce1900 = NULL;
    panda$core$Int64 field1902;
    org$pandalanguage$pandac$IRNode* newBase1907 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1908;
    org$pandalanguage$pandac$IRNode* $tmp1909;
    org$pandalanguage$pandac$IRNode* $tmp1911;
    org$pandalanguage$pandac$IRNode* $tmp1912;
    panda$core$Int64 $tmp1914;
    panda$core$Int64 $tmp1920;
    org$pandalanguage$pandac$Position position1922;
    org$pandalanguage$pandac$Type* type1924 = NULL;
    org$pandalanguage$pandac$IRNode* call1926 = NULL;
    org$pandalanguage$pandac$IRNode* newCall1931 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1932;
    org$pandalanguage$pandac$IRNode* $tmp1933;
    org$pandalanguage$pandac$IRNode* $tmp1935;
    org$pandalanguage$pandac$IRNode* $tmp1936;
    panda$core$Int64 $tmp1938;
    panda$core$Int64 $tmp1944;
    org$pandalanguage$pandac$IRNode* target1946 = NULL;
    org$pandalanguage$pandac$IRNode* value1948 = NULL;
    org$pandalanguage$pandac$IRNode* newValue1953 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1954;
    org$pandalanguage$pandac$IRNode* $tmp1955;
    org$pandalanguage$pandac$IRNode* $tmp1957;
    org$pandalanguage$pandac$IRNode* $tmp1958;
    panda$core$Int64 $tmp1960;
    panda$core$Int64 $tmp1966;
    org$pandalanguage$pandac$Position position1968;
    panda$core$String* label1970 = NULL;
    panda$collections$ImmutableArray* statements1972 = NULL;
    org$pandalanguage$pandac$IRNode* test1974 = NULL;
    panda$collections$ImmutableArray* newStatements1979 = NULL;
    panda$collections$ImmutableArray* $tmp1980;
    panda$collections$ImmutableArray* $tmp1981;
    org$pandalanguage$pandac$IRNode* newTest1983 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1984;
    org$pandalanguage$pandac$IRNode* $tmp1985;
    org$pandalanguage$pandac$IRNode* $tmp1990;
    org$pandalanguage$pandac$IRNode* $tmp1991;
    panda$core$Int64 $tmp1993;
    panda$collections$ImmutableArray* $tmp1994;
    org$pandalanguage$pandac$IRNode* $tmp1997;
    panda$core$Int64 $tmp2005;
    org$pandalanguage$pandac$IRNode* m2007 = NULL;
    panda$collections$ImmutableArray* args2009 = NULL;
    org$pandalanguage$pandac$IRNode* newM2014 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2015;
    org$pandalanguage$pandac$IRNode* $tmp2016;
    panda$collections$ImmutableArray* newArgs2018 = NULL;
    panda$collections$ImmutableArray* $tmp2019;
    panda$collections$ImmutableArray* $tmp2020;
    org$pandalanguage$pandac$IRNode* $tmp2025;
    org$pandalanguage$pandac$IRNode* $tmp2026;
    panda$core$Int64 $tmp2028;
    org$pandalanguage$pandac$IRNode* $tmp2029;
    panda$collections$ImmutableArray* $tmp2032;
    panda$core$Int64 $tmp2040;
    org$pandalanguage$pandac$IRNode* expr2042 = NULL;
    org$pandalanguage$pandac$IRNode* statements2044 = NULL;
    org$pandalanguage$pandac$IRNode* newExpr2049 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2050;
    org$pandalanguage$pandac$IRNode* $tmp2051;
    org$pandalanguage$pandac$IRNode* newStatements2053 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2054;
    org$pandalanguage$pandac$IRNode* $tmp2055;
    org$pandalanguage$pandac$IRNode* $tmp2060;
    org$pandalanguage$pandac$IRNode* $tmp2061;
    panda$core$Int64 $tmp2063;
    org$pandalanguage$pandac$IRNode* $tmp2064;
    org$pandalanguage$pandac$IRNode* $tmp2067;
    panda$core$Int64 $tmp2075;
    org$pandalanguage$pandac$Position position2077;
    org$pandalanguage$pandac$Type* type2079 = NULL;
    org$pandalanguage$pandac$IRNode* base2081 = NULL;
    org$pandalanguage$pandac$FieldDecl* field2083 = NULL;
    org$pandalanguage$pandac$IRNode* newBase2088 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2089;
    org$pandalanguage$pandac$IRNode* $tmp2090;
    org$pandalanguage$pandac$IRNode* $tmp2092;
    org$pandalanguage$pandac$IRNode* $tmp2093;
    panda$core$Int64 $tmp2095;
    panda$core$Int64 $tmp2101;
    org$pandalanguage$pandac$Position position2103;
    org$pandalanguage$pandac$IRNode* test2105 = NULL;
    panda$collections$ImmutableArray* ifTrue2107 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2109 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2114 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2115;
    org$pandalanguage$pandac$IRNode* $tmp2116;
    panda$collections$ImmutableArray* newIfTrue2118 = NULL;
    panda$collections$ImmutableArray* $tmp2119;
    panda$collections$ImmutableArray* $tmp2120;
    org$pandalanguage$pandac$IRNode* newIfFalse2122 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2123;
    org$pandalanguage$pandac$IRNode* $tmp2124;
    org$pandalanguage$pandac$IRNode* $tmp2132;
    org$pandalanguage$pandac$IRNode* $tmp2133;
    panda$core$Int64 $tmp2135;
    org$pandalanguage$pandac$IRNode* $tmp2136;
    panda$collections$ImmutableArray* $tmp2139;
    org$pandalanguage$pandac$IRNode* $tmp2142;
    panda$core$Int64 $tmp2150;
    org$pandalanguage$pandac$Position position2152;
    org$pandalanguage$pandac$IRNode* value2154 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2159 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2160;
    org$pandalanguage$pandac$IRNode* $tmp2161;
    org$pandalanguage$pandac$IRNode* $tmp2163;
    org$pandalanguage$pandac$IRNode* $tmp2164;
    panda$core$Int64 $tmp2166;
    panda$core$Int64 $tmp2172;
    org$pandalanguage$pandac$Position position2174;
    org$pandalanguage$pandac$IRNode* value2176 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2181 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2182;
    org$pandalanguage$pandac$IRNode* $tmp2183;
    org$pandalanguage$pandac$IRNode* $tmp2185;
    org$pandalanguage$pandac$IRNode* $tmp2186;
    panda$core$Int64 $tmp2188;
    panda$core$Int64 $tmp2194;
    org$pandalanguage$pandac$Position position2196;
    panda$core$String* label2198 = NULL;
    panda$collections$ImmutableArray* statements2200 = NULL;
    panda$collections$ImmutableArray* newStatements2205 = NULL;
    panda$collections$ImmutableArray* $tmp2206;
    panda$collections$ImmutableArray* $tmp2207;
    org$pandalanguage$pandac$IRNode* $tmp2209;
    org$pandalanguage$pandac$IRNode* $tmp2210;
    panda$core$Int64 $tmp2212;
    panda$core$Int64 $tmp2218;
    org$pandalanguage$pandac$Position position2220;
    org$pandalanguage$pandac$IRNode* value2222 = NULL;
    panda$collections$ImmutableArray* whens2224 = NULL;
    panda$collections$ImmutableArray* other2226 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2231 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2232;
    org$pandalanguage$pandac$IRNode* $tmp2233;
    panda$collections$ImmutableArray* newWhens2235 = NULL;
    panda$collections$ImmutableArray* $tmp2236;
    panda$collections$ImmutableArray* $tmp2237;
    panda$collections$ImmutableArray* newOther2239 = NULL;
    panda$collections$ImmutableArray* $tmp2240;
    panda$collections$ImmutableArray* $tmp2241;
    org$pandalanguage$pandac$IRNode* $tmp2249;
    org$pandalanguage$pandac$IRNode* $tmp2250;
    panda$core$Int64 $tmp2252;
    org$pandalanguage$pandac$IRNode* $tmp2253;
    panda$collections$ImmutableArray* $tmp2256;
    panda$collections$ImmutableArray* $tmp2259;
    panda$core$Int64 $tmp2267;
    org$pandalanguage$pandac$Position position2269;
    org$pandalanguage$pandac$Type* type2271 = NULL;
    org$pandalanguage$pandac$IRNode* target2273 = NULL;
    org$pandalanguage$pandac$MethodRef* m2275 = NULL;
    org$pandalanguage$pandac$IRNode* newTarget2280 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2281;
    org$pandalanguage$pandac$IRNode* $tmp2282;
    org$pandalanguage$pandac$IRNode* $tmp2284;
    org$pandalanguage$pandac$IRNode* $tmp2285;
    panda$core$Int64 $tmp2287;
    panda$core$Int64 $tmp2293;
    org$pandalanguage$pandac$Position position2295;
    org$pandalanguage$pandac$parser$Token$Kind op2297;
    org$pandalanguage$pandac$IRNode* base2299 = NULL;
    org$pandalanguage$pandac$IRNode* newBase2304 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2305;
    org$pandalanguage$pandac$IRNode* $tmp2306;
    org$pandalanguage$pandac$IRNode* $tmp2308;
    org$pandalanguage$pandac$IRNode* $tmp2309;
    panda$core$Int64 $tmp2311;
    panda$core$Int64 $tmp2317;
    org$pandalanguage$pandac$Position position2319;
    panda$core$String* label2321 = NULL;
    org$pandalanguage$pandac$IRNode* target2323 = NULL;
    org$pandalanguage$pandac$IRNode* list2325 = NULL;
    panda$collections$ImmutableArray* statements2327 = NULL;
    org$pandalanguage$pandac$IRNode* newList2332 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2333;
    org$pandalanguage$pandac$IRNode* $tmp2334;
    panda$collections$ImmutableArray* newStatements2336 = NULL;
    panda$collections$ImmutableArray* $tmp2337;
    panda$collections$ImmutableArray* $tmp2338;
    org$pandalanguage$pandac$IRNode* $tmp2343;
    org$pandalanguage$pandac$IRNode* $tmp2344;
    panda$core$Int64 $tmp2346;
    org$pandalanguage$pandac$IRNode* $tmp2347;
    panda$collections$ImmutableArray* $tmp2350;
    panda$core$Int64 $tmp2358;
    org$pandalanguage$pandac$Position position2360;
    org$pandalanguage$pandac$IRNode* value2362 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2367 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2368;
    org$pandalanguage$pandac$IRNode* $tmp2369;
    org$pandalanguage$pandac$IRNode* $tmp2371;
    org$pandalanguage$pandac$IRNode* $tmp2372;
    panda$core$Int64 $tmp2374;
    panda$core$Int64 $tmp2380;
    org$pandalanguage$pandac$IRNode* base2382 = NULL;
    panda$core$Int64 id2384;
    org$pandalanguage$pandac$IRNode* newBase2389 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2390;
    org$pandalanguage$pandac$IRNode* $tmp2391;
    org$pandalanguage$pandac$IRNode* $tmp2393;
    org$pandalanguage$pandac$IRNode* $tmp2394;
    panda$core$Int64 $tmp2396;
    panda$core$Int64 $tmp2402;
    org$pandalanguage$pandac$Position position2404;
    org$pandalanguage$pandac$IRNode* test2406 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2408 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2410 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2415 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2416;
    org$pandalanguage$pandac$IRNode* $tmp2417;
    org$pandalanguage$pandac$IRNode* newIfTrue2419 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2420;
    org$pandalanguage$pandac$IRNode* $tmp2421;
    org$pandalanguage$pandac$IRNode* newIfFalse2423 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2424;
    org$pandalanguage$pandac$IRNode* $tmp2425;
    org$pandalanguage$pandac$IRNode* $tmp2433;
    org$pandalanguage$pandac$IRNode* $tmp2434;
    panda$core$Int64 $tmp2436;
    org$pandalanguage$pandac$IRNode* $tmp2437;
    org$pandalanguage$pandac$IRNode* $tmp2440;
    org$pandalanguage$pandac$IRNode* $tmp2443;
    panda$core$Int64 $tmp2451;
    org$pandalanguage$pandac$Position position2453;
    org$pandalanguage$pandac$Variable$Kind kind2455;
    panda$collections$ImmutableArray* decls2457 = NULL;
    panda$collections$ImmutableArray* newDecls2462 = NULL;
    panda$collections$ImmutableArray* $tmp2463;
    panda$collections$ImmutableArray* $tmp2464;
    org$pandalanguage$pandac$IRNode* $tmp2466;
    org$pandalanguage$pandac$IRNode* $tmp2467;
    panda$core$Int64 $tmp2469;
    panda$core$Int64 $tmp2475;
    org$pandalanguage$pandac$Position position2477;
    panda$collections$ImmutableArray* tests2479 = NULL;
    panda$collections$ImmutableArray* statements2481 = NULL;
    panda$collections$ImmutableArray* newTests2486 = NULL;
    panda$collections$ImmutableArray* $tmp2487;
    panda$collections$ImmutableArray* $tmp2488;
    panda$collections$ImmutableArray* newStatements2490 = NULL;
    panda$collections$ImmutableArray* $tmp2491;
    panda$collections$ImmutableArray* $tmp2492;
    org$pandalanguage$pandac$IRNode* $tmp2497;
    org$pandalanguage$pandac$IRNode* $tmp2498;
    panda$core$Int64 $tmp2500;
    panda$collections$ImmutableArray* $tmp2501;
    panda$collections$ImmutableArray* $tmp2504;
    panda$core$Int64 $tmp2512;
    org$pandalanguage$pandac$Position position2514;
    panda$core$String* label2516 = NULL;
    org$pandalanguage$pandac$IRNode* test2518 = NULL;
    panda$collections$ImmutableArray* statements2520 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2525 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2526;
    org$pandalanguage$pandac$IRNode* $tmp2527;
    panda$collections$ImmutableArray* newStatements2529 = NULL;
    panda$collections$ImmutableArray* $tmp2530;
    panda$collections$ImmutableArray* $tmp2531;
    org$pandalanguage$pandac$IRNode* $tmp2536;
    org$pandalanguage$pandac$IRNode* $tmp2537;
    panda$core$Int64 $tmp2539;
    org$pandalanguage$pandac$IRNode* $tmp2540;
    panda$collections$ImmutableArray* $tmp2543;
    panda$core$Bit $tmp2551;
    org$pandalanguage$pandac$IRNode* $tmp2556;
    int $tmp1572;
    {
        if (p_f->target) {
            $tmp1576 = (($fn1577) p_f->pointer)(p_f->target, self);
        } else {
            $tmp1576 = (($fn1578) p_f->pointer)(self);
        }
        $tmp1575 = $tmp1576;
        $tmp1574 = $tmp1575;
        transformed1573 = $tmp1574;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1574));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1575));
        if (((panda$core$Bit) { transformed1573 != NULL }).value) {
        {
            $tmp1580 = transformed1573;
            $returnValue1579 = $tmp1580;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1580));
            $tmp1572 = 0;
            goto $l1570;
            $l1581:;
            return $returnValue1579;
        }
        }
        int $tmp1585;
        {
            $tmp1587 = self;
            $match$506_91586 = $tmp1587;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1587));
            panda$core$Int64$init$builtin_int64(&$tmp1611, 1);
            panda$core$Bit $tmp1612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1611);
            bool $tmp1610 = $tmp1612.value;
            if ($tmp1610) goto $l1613;
            panda$core$Int64$init$builtin_int64(&$tmp1614, 3);
            panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1614);
            $tmp1610 = $tmp1615.value;
            $l1613:;
            panda$core$Bit $tmp1616 = { $tmp1610 };
            bool $tmp1609 = $tmp1616.value;
            if ($tmp1609) goto $l1617;
            panda$core$Int64$init$builtin_int64(&$tmp1618, 6);
            panda$core$Bit $tmp1619 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1618);
            $tmp1609 = $tmp1619.value;
            $l1617:;
            panda$core$Bit $tmp1620 = { $tmp1609 };
            bool $tmp1608 = $tmp1620.value;
            if ($tmp1608) goto $l1621;
            panda$core$Int64$init$builtin_int64(&$tmp1622, 9);
            panda$core$Bit $tmp1623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1622);
            $tmp1608 = $tmp1623.value;
            $l1621:;
            panda$core$Bit $tmp1624 = { $tmp1608 };
            bool $tmp1607 = $tmp1624.value;
            if ($tmp1607) goto $l1625;
            panda$core$Int64$init$builtin_int64(&$tmp1626, 12);
            panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1626);
            $tmp1607 = $tmp1627.value;
            $l1625:;
            panda$core$Bit $tmp1628 = { $tmp1607 };
            bool $tmp1606 = $tmp1628.value;
            if ($tmp1606) goto $l1629;
            panda$core$Int64$init$builtin_int64(&$tmp1630, 13);
            panda$core$Bit $tmp1631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1630);
            $tmp1606 = $tmp1631.value;
            $l1629:;
            panda$core$Bit $tmp1632 = { $tmp1606 };
            bool $tmp1605 = $tmp1632.value;
            if ($tmp1605) goto $l1633;
            panda$core$Int64$init$builtin_int64(&$tmp1634, 20);
            panda$core$Bit $tmp1635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1634);
            $tmp1605 = $tmp1635.value;
            $l1633:;
            panda$core$Bit $tmp1636 = { $tmp1605 };
            bool $tmp1604 = $tmp1636.value;
            if ($tmp1604) goto $l1637;
            panda$core$Int64$init$builtin_int64(&$tmp1638, 26);
            panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1638);
            $tmp1604 = $tmp1639.value;
            $l1637:;
            panda$core$Bit $tmp1640 = { $tmp1604 };
            bool $tmp1603 = $tmp1640.value;
            if ($tmp1603) goto $l1641;
            panda$core$Int64$init$builtin_int64(&$tmp1642, 27);
            panda$core$Bit $tmp1643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1642);
            $tmp1603 = $tmp1643.value;
            $l1641:;
            panda$core$Bit $tmp1644 = { $tmp1603 };
            bool $tmp1602 = $tmp1644.value;
            if ($tmp1602) goto $l1645;
            panda$core$Int64$init$builtin_int64(&$tmp1646, 30);
            panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1646);
            $tmp1602 = $tmp1647.value;
            $l1645:;
            panda$core$Bit $tmp1648 = { $tmp1602 };
            bool $tmp1601 = $tmp1648.value;
            if ($tmp1601) goto $l1649;
            panda$core$Int64$init$builtin_int64(&$tmp1650, 34);
            panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1650);
            $tmp1601 = $tmp1651.value;
            $l1649:;
            panda$core$Bit $tmp1652 = { $tmp1601 };
            bool $tmp1600 = $tmp1652.value;
            if ($tmp1600) goto $l1653;
            panda$core$Int64$init$builtin_int64(&$tmp1654, 35);
            panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1654);
            $tmp1600 = $tmp1655.value;
            $l1653:;
            panda$core$Bit $tmp1656 = { $tmp1600 };
            bool $tmp1599 = $tmp1656.value;
            if ($tmp1599) goto $l1657;
            panda$core$Int64$init$builtin_int64(&$tmp1658, 36);
            panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1658);
            $tmp1599 = $tmp1659.value;
            $l1657:;
            panda$core$Bit $tmp1660 = { $tmp1599 };
            bool $tmp1598 = $tmp1660.value;
            if ($tmp1598) goto $l1661;
            panda$core$Int64$init$builtin_int64(&$tmp1662, 37);
            panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1662);
            $tmp1598 = $tmp1663.value;
            $l1661:;
            panda$core$Bit $tmp1664 = { $tmp1598 };
            bool $tmp1597 = $tmp1664.value;
            if ($tmp1597) goto $l1665;
            panda$core$Int64$init$builtin_int64(&$tmp1666, 32);
            panda$core$Bit $tmp1667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1666);
            $tmp1597 = $tmp1667.value;
            $l1665:;
            panda$core$Bit $tmp1668 = { $tmp1597 };
            bool $tmp1596 = $tmp1668.value;
            if ($tmp1596) goto $l1669;
            panda$core$Int64$init$builtin_int64(&$tmp1670, 39);
            panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1670);
            $tmp1596 = $tmp1671.value;
            $l1669:;
            panda$core$Bit $tmp1672 = { $tmp1596 };
            bool $tmp1595 = $tmp1672.value;
            if ($tmp1595) goto $l1673;
            panda$core$Int64$init$builtin_int64(&$tmp1674, 40);
            panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1674);
            $tmp1595 = $tmp1675.value;
            $l1673:;
            panda$core$Bit $tmp1676 = { $tmp1595 };
            bool $tmp1594 = $tmp1676.value;
            if ($tmp1594) goto $l1677;
            panda$core$Int64$init$builtin_int64(&$tmp1678, 44);
            panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1678);
            $tmp1594 = $tmp1679.value;
            $l1677:;
            panda$core$Bit $tmp1680 = { $tmp1594 };
            bool $tmp1593 = $tmp1680.value;
            if ($tmp1593) goto $l1681;
            panda$core$Int64$init$builtin_int64(&$tmp1682, 41);
            panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1682);
            $tmp1593 = $tmp1683.value;
            $l1681:;
            panda$core$Bit $tmp1684 = { $tmp1593 };
            bool $tmp1592 = $tmp1684.value;
            if ($tmp1592) goto $l1685;
            panda$core$Int64$init$builtin_int64(&$tmp1686, 42);
            panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1686);
            $tmp1592 = $tmp1687.value;
            $l1685:;
            panda$core$Bit $tmp1688 = { $tmp1592 };
            bool $tmp1591 = $tmp1688.value;
            if ($tmp1591) goto $l1689;
            panda$core$Int64$init$builtin_int64(&$tmp1690, 43);
            panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1690);
            $tmp1591 = $tmp1691.value;
            $l1689:;
            panda$core$Bit $tmp1692 = { $tmp1591 };
            bool $tmp1590 = $tmp1692.value;
            if ($tmp1590) goto $l1693;
            panda$core$Int64$init$builtin_int64(&$tmp1694, 45);
            panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1694);
            $tmp1590 = $tmp1695.value;
            $l1693:;
            panda$core$Bit $tmp1696 = { $tmp1590 };
            bool $tmp1589 = $tmp1696.value;
            if ($tmp1589) goto $l1697;
            panda$core$Int64$init$builtin_int64(&$tmp1698, 47);
            panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1698);
            $tmp1589 = $tmp1699.value;
            $l1697:;
            panda$core$Bit $tmp1700 = { $tmp1589 };
            bool $tmp1588 = $tmp1700.value;
            if ($tmp1588) goto $l1701;
            panda$core$Int64$init$builtin_int64(&$tmp1702, 48);
            panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1702);
            $tmp1588 = $tmp1703.value;
            $l1701:;
            panda$core$Bit $tmp1704 = { $tmp1588 };
            if ($tmp1704.value) {
            {
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1705, 0);
            panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1705);
            if ($tmp1706.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1708 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position1707 = *$tmp1708;
                org$pandalanguage$pandac$IRNode** $tmp1710 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 16));
                test1709 = *$tmp1710;
                org$pandalanguage$pandac$IRNode** $tmp1712 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 24));
                message1711 = *$tmp1712;
                int $tmp1715;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1719 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test1709, p_f);
                    $tmp1718 = $tmp1719;
                    $tmp1717 = $tmp1718;
                    newTest1716 = $tmp1717;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1717));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1718));
                    org$pandalanguage$pandac$IRNode* $tmp1723 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(message1711, p_f);
                    $tmp1722 = $tmp1723;
                    $tmp1721 = $tmp1722;
                    newMessage1720 = $tmp1721;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1721));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1722));
                    bool $tmp1724 = ((panda$core$Bit) { newTest1716 != NULL }).value;
                    if ($tmp1724) goto $l1725;
                    $tmp1724 = ((panda$core$Bit) { newMessage1720 != NULL }).value;
                    $l1725:;
                    panda$core$Bit $tmp1726 = { $tmp1724 };
                    if ($tmp1726.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1729 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1730, 0);
                        org$pandalanguage$pandac$IRNode* $tmp1733 = (($fn1732) self->$class->vtable[5])(self, newTest1716, test1709);
                        $tmp1731 = $tmp1733;
                        org$pandalanguage$pandac$IRNode* $tmp1736 = (($fn1735) self->$class->vtable[5])(self, newMessage1720, message1711);
                        $tmp1734 = $tmp1736;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp1729, $tmp1730, position1707, $tmp1731, $tmp1734);
                        $tmp1728 = $tmp1729;
                        $tmp1727 = $tmp1728;
                        $returnValue1579 = $tmp1727;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1727));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1734));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1731));
                        $tmp1715 = 0;
                        goto $l1713;
                        $l1737:;
                        $tmp1585 = 0;
                        goto $l1583;
                        $l1738:;
                        $tmp1572 = 1;
                        goto $l1570;
                        $l1739:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1715 = -1;
                goto $l1713;
                $l1713:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newMessage1720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest1716));
                newTest1716 = NULL;
                newMessage1720 = NULL;
                switch ($tmp1715) {
                    case 0: goto $l1737;
                    case -1: goto $l1741;
                }
                $l1741:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1742, 2);
            panda$core$Bit $tmp1743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1742);
            if ($tmp1743.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1745 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position1744 = *$tmp1745;
                org$pandalanguage$pandac$Type** $tmp1747 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91586->$data + 16));
                type1746 = *$tmp1747;
                org$pandalanguage$pandac$IRNode** $tmp1749 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 24));
                left1748 = *$tmp1749;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1751 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$506_91586->$data + 32));
                op1750 = *$tmp1751;
                org$pandalanguage$pandac$IRNode** $tmp1753 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 40));
                right1752 = *$tmp1753;
                int $tmp1756;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1760 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(left1748, p_f);
                    $tmp1759 = $tmp1760;
                    $tmp1758 = $tmp1759;
                    newLeft1757 = $tmp1758;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1758));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1759));
                    org$pandalanguage$pandac$IRNode* $tmp1764 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(right1752, p_f);
                    $tmp1763 = $tmp1764;
                    $tmp1762 = $tmp1763;
                    newRight1761 = $tmp1762;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1762));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1763));
                    bool $tmp1765 = ((panda$core$Bit) { newLeft1757 != NULL }).value;
                    if ($tmp1765) goto $l1766;
                    $tmp1765 = ((panda$core$Bit) { newRight1761 != NULL }).value;
                    $l1766:;
                    panda$core$Bit $tmp1767 = { $tmp1765 };
                    if ($tmp1767.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1770 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1771, 2);
                        org$pandalanguage$pandac$IRNode* $tmp1774 = (($fn1773) self->$class->vtable[5])(self, newLeft1757, left1748);
                        $tmp1772 = $tmp1774;
                        org$pandalanguage$pandac$IRNode* $tmp1777 = (($fn1776) self->$class->vtable[5])(self, newRight1761, right1752);
                        $tmp1775 = $tmp1777;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp1770, $tmp1771, position1744, type1746, $tmp1772, op1750, $tmp1775);
                        $tmp1769 = $tmp1770;
                        $tmp1768 = $tmp1769;
                        $returnValue1579 = $tmp1768;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1768));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1769));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1772));
                        $tmp1756 = 0;
                        goto $l1754;
                        $l1778:;
                        $tmp1585 = 1;
                        goto $l1583;
                        $l1779:;
                        $tmp1572 = 2;
                        goto $l1570;
                        $l1780:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1756 = -1;
                goto $l1754;
                $l1754:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newRight1761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newLeft1757));
                newLeft1757 = NULL;
                newRight1761 = NULL;
                switch ($tmp1756) {
                    case -1: goto $l1782;
                    case 0: goto $l1778;
                }
                $l1782:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1783, 4);
            panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1783);
            if ($tmp1784.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1786 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position1785 = *$tmp1786;
                panda$collections$ImmutableArray** $tmp1788 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 16));
                statements1787 = *$tmp1788;
                int $tmp1791;
                {
                    panda$collections$ImmutableArray* $tmp1795 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1787, p_f);
                    $tmp1794 = $tmp1795;
                    $tmp1793 = $tmp1794;
                    newStatements1792 = $tmp1793;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1793));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
                    if (((panda$core$Bit) { newStatements1792 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1798 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1799, 4);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1798, $tmp1799, position1785, newStatements1792);
                        $tmp1797 = $tmp1798;
                        $tmp1796 = $tmp1797;
                        $returnValue1579 = $tmp1796;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1796));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1797));
                        $tmp1791 = 0;
                        goto $l1789;
                        $l1800:;
                        $tmp1585 = 2;
                        goto $l1583;
                        $l1801:;
                        $tmp1572 = 3;
                        goto $l1570;
                        $l1802:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1791 = -1;
                goto $l1789;
                $l1789:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1792));
                newStatements1792 = NULL;
                switch ($tmp1791) {
                    case 0: goto $l1800;
                    case -1: goto $l1804;
                }
                $l1804:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1805, 5);
            panda$core$Bit $tmp1806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1805);
            if ($tmp1806.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1808 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position1807 = *$tmp1808;
                panda$collections$ImmutableArray** $tmp1810 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 16));
                statements1809 = *$tmp1810;
                panda$collections$ImmutableArray** $tmp1812 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 24));
                finally1811 = *$tmp1812;
                int $tmp1815;
                {
                    panda$collections$ImmutableArray* $tmp1819 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1809, p_f);
                    $tmp1818 = $tmp1819;
                    $tmp1817 = $tmp1818;
                    newStatements1816 = $tmp1817;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1817));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1818));
                    panda$collections$ImmutableArray* $tmp1823 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(finally1811, p_f);
                    $tmp1822 = $tmp1823;
                    $tmp1821 = $tmp1822;
                    newFinally1820 = $tmp1821;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1821));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
                    if (((panda$core$Bit) { newStatements1816 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1826 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1827, 5);
                        panda$collections$ImmutableArray* $tmp1830 = (($fn1829) self->$class->vtable[6])(self, newStatements1816, statements1809);
                        $tmp1828 = $tmp1830;
                        panda$collections$ImmutableArray* $tmp1833 = (($fn1832) self->$class->vtable[6])(self, newFinally1820, finally1811);
                        $tmp1831 = $tmp1833;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1826, $tmp1827, position1807, $tmp1828, $tmp1831);
                        $tmp1825 = $tmp1826;
                        $tmp1824 = $tmp1825;
                        $returnValue1579 = $tmp1824;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1824));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1825));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1831));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1828));
                        $tmp1815 = 0;
                        goto $l1813;
                        $l1834:;
                        $tmp1585 = 3;
                        goto $l1583;
                        $l1835:;
                        $tmp1572 = 4;
                        goto $l1570;
                        $l1836:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1815 = -1;
                goto $l1813;
                $l1813:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newFinally1820));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1816));
                newStatements1816 = NULL;
                newFinally1820 = NULL;
                switch ($tmp1815) {
                    case -1: goto $l1838;
                    case 0: goto $l1834;
                }
                $l1838:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1839, 7);
            panda$core$Bit $tmp1840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1839);
            if ($tmp1840.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1842 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position1841 = *$tmp1842;
                org$pandalanguage$pandac$Type** $tmp1844 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91586->$data + 16));
                type1843 = *$tmp1844;
                org$pandalanguage$pandac$MethodRef** $tmp1846 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$506_91586->$data + 24));
                m1845 = *$tmp1846;
                panda$collections$ImmutableArray** $tmp1848 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 32));
                args1847 = *$tmp1848;
                int $tmp1851;
                {
                    panda$collections$ImmutableArray* $tmp1855 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(args1847, p_f);
                    $tmp1854 = $tmp1855;
                    $tmp1853 = $tmp1854;
                    newArgs1852 = $tmp1853;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1853));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1854));
                    if (((panda$core$Bit) { newArgs1852 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1858 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1859, 7);
                        panda$collections$ImmutableArray* $tmp1862 = (($fn1861) self->$class->vtable[6])(self, newArgs1852, args1847);
                        $tmp1860 = $tmp1862;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1858, $tmp1859, position1841, type1843, m1845, $tmp1860);
                        $tmp1857 = $tmp1858;
                        $tmp1856 = $tmp1857;
                        $returnValue1579 = $tmp1856;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1856));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
                        $tmp1851 = 0;
                        goto $l1849;
                        $l1863:;
                        $tmp1585 = 4;
                        goto $l1583;
                        $l1864:;
                        $tmp1572 = 5;
                        goto $l1570;
                        $l1865:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1851 = -1;
                goto $l1849;
                $l1849:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newArgs1852));
                newArgs1852 = NULL;
                switch ($tmp1851) {
                    case -1: goto $l1867;
                    case 0: goto $l1863;
                }
                $l1867:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1868, 8);
            panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1868);
            if ($tmp1869.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1871 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position1870 = *$tmp1871;
                org$pandalanguage$pandac$IRNode** $tmp1873 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 16));
                value1872 = *$tmp1873;
                org$pandalanguage$pandac$Type** $tmp1875 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91586->$data + 24));
                type1874 = *$tmp1875;
                panda$core$Bit* $tmp1877 = ((panda$core$Bit*) ((char*) $match$506_91586->$data + 32));
                explicit1876 = *$tmp1877;
                int $tmp1880;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1884 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value1872, p_f);
                    $tmp1883 = $tmp1884;
                    $tmp1882 = $tmp1883;
                    newValue1881 = $tmp1882;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1882));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1883));
                    if (((panda$core$Bit) { newValue1881 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1887 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1888, 8);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1887, $tmp1888, position1870, newValue1881, type1874, explicit1876);
                        $tmp1886 = $tmp1887;
                        $tmp1885 = $tmp1886;
                        $returnValue1579 = $tmp1885;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1885));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1886));
                        $tmp1880 = 0;
                        goto $l1878;
                        $l1889:;
                        $tmp1585 = 5;
                        goto $l1583;
                        $l1890:;
                        $tmp1572 = 6;
                        goto $l1570;
                        $l1891:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1880 = -1;
                goto $l1878;
                $l1878:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue1881));
                newValue1881 = NULL;
                switch ($tmp1880) {
                    case -1: goto $l1893;
                    case 0: goto $l1889;
                }
                $l1893:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1894, 10);
            panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1894);
            if ($tmp1895.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1897 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position1896 = *$tmp1897;
                org$pandalanguage$pandac$IRNode** $tmp1899 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 16));
                base1898 = *$tmp1899;
                org$pandalanguage$pandac$ChoiceCase** $tmp1901 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$506_91586->$data + 24));
                ce1900 = *$tmp1901;
                panda$core$Int64* $tmp1903 = ((panda$core$Int64*) ((char*) $match$506_91586->$data + 32));
                field1902 = *$tmp1903;
                int $tmp1906;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1910 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base1898, p_f);
                    $tmp1909 = $tmp1910;
                    $tmp1908 = $tmp1909;
                    newBase1907 = $tmp1908;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1908));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1909));
                    if (((panda$core$Bit) { newBase1907 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1913 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1914, 10);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64($tmp1913, $tmp1914, position1896, newBase1907, ce1900, field1902);
                        $tmp1912 = $tmp1913;
                        $tmp1911 = $tmp1912;
                        $returnValue1579 = $tmp1911;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
                        $tmp1906 = 0;
                        goto $l1904;
                        $l1915:;
                        $tmp1585 = 6;
                        goto $l1583;
                        $l1916:;
                        $tmp1572 = 7;
                        goto $l1570;
                        $l1917:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1906 = -1;
                goto $l1904;
                $l1904:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase1907));
                newBase1907 = NULL;
                switch ($tmp1906) {
                    case 0: goto $l1915;
                    case -1: goto $l1919;
                }
                $l1919:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1920, 11);
            panda$core$Bit $tmp1921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1920);
            if ($tmp1921.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1923 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position1922 = *$tmp1923;
                org$pandalanguage$pandac$Type** $tmp1925 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91586->$data + 16));
                type1924 = *$tmp1925;
                org$pandalanguage$pandac$IRNode** $tmp1927 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 24));
                call1926 = *$tmp1927;
                int $tmp1930;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1934 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(call1926, p_f);
                    $tmp1933 = $tmp1934;
                    $tmp1932 = $tmp1933;
                    newCall1931 = $tmp1932;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1932));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
                    if (((panda$core$Bit) { newCall1931 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1937 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1938, 11);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode($tmp1937, $tmp1938, position1922, type1924, newCall1931);
                        $tmp1936 = $tmp1937;
                        $tmp1935 = $tmp1936;
                        $returnValue1579 = $tmp1935;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1935));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1936));
                        $tmp1930 = 0;
                        goto $l1928;
                        $l1939:;
                        $tmp1585 = 7;
                        goto $l1583;
                        $l1940:;
                        $tmp1572 = 8;
                        goto $l1570;
                        $l1941:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1930 = -1;
                goto $l1928;
                $l1928:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newCall1931));
                newCall1931 = NULL;
                switch ($tmp1930) {
                    case -1: goto $l1943;
                    case 0: goto $l1939;
                }
                $l1943:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1944, 14);
            panda$core$Bit $tmp1945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1944);
            if ($tmp1945.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1947 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 0));
                target1946 = *$tmp1947;
                org$pandalanguage$pandac$IRNode** $tmp1949 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 8));
                value1948 = *$tmp1949;
                int $tmp1952;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1956 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value1948, p_f);
                    $tmp1955 = $tmp1956;
                    $tmp1954 = $tmp1955;
                    newValue1953 = $tmp1954;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1954));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1955));
                    if (((panda$core$Bit) { newValue1953 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1959 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1960, 14);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp1959, $tmp1960, target1946, newValue1953);
                        $tmp1958 = $tmp1959;
                        $tmp1957 = $tmp1958;
                        $returnValue1579 = $tmp1957;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1957));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1958));
                        $tmp1952 = 0;
                        goto $l1950;
                        $l1961:;
                        $tmp1585 = 8;
                        goto $l1583;
                        $l1962:;
                        $tmp1572 = 9;
                        goto $l1570;
                        $l1963:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1952 = -1;
                goto $l1950;
                $l1950:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue1953));
                newValue1953 = NULL;
                switch ($tmp1952) {
                    case -1: goto $l1965;
                    case 0: goto $l1961;
                }
                $l1965:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1966, 15);
            panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp1966);
            if ($tmp1967.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1969 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position1968 = *$tmp1969;
                panda$core$String** $tmp1971 = ((panda$core$String**) ((char*) $match$506_91586->$data + 16));
                label1970 = *$tmp1971;
                panda$collections$ImmutableArray** $tmp1973 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 24));
                statements1972 = *$tmp1973;
                org$pandalanguage$pandac$IRNode** $tmp1975 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 32));
                test1974 = *$tmp1975;
                int $tmp1978;
                {
                    panda$collections$ImmutableArray* $tmp1982 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1972, p_f);
                    $tmp1981 = $tmp1982;
                    $tmp1980 = $tmp1981;
                    newStatements1979 = $tmp1980;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1980));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1981));
                    org$pandalanguage$pandac$IRNode* $tmp1986 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test1974, p_f);
                    $tmp1985 = $tmp1986;
                    $tmp1984 = $tmp1985;
                    newTest1983 = $tmp1984;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1984));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
                    bool $tmp1987 = ((panda$core$Bit) { newStatements1979 != NULL }).value;
                    if ($tmp1987) goto $l1988;
                    $tmp1987 = ((panda$core$Bit) { newTest1983 != NULL }).value;
                    $l1988:;
                    panda$core$Bit $tmp1989 = { $tmp1987 };
                    if ($tmp1989.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1992 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1993, 15);
                        panda$collections$ImmutableArray* $tmp1996 = (($fn1995) self->$class->vtable[6])(self, newStatements1979, statements1972);
                        $tmp1994 = $tmp1996;
                        org$pandalanguage$pandac$IRNode* $tmp1999 = (($fn1998) self->$class->vtable[5])(self, newTest1983, test1974);
                        $tmp1997 = $tmp1999;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode($tmp1992, $tmp1993, position1968, label1970, $tmp1994, $tmp1997);
                        $tmp1991 = $tmp1992;
                        $tmp1990 = $tmp1991;
                        $returnValue1579 = $tmp1990;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1990));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1991));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1997));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
                        $tmp1978 = 0;
                        goto $l1976;
                        $l2000:;
                        $tmp1585 = 9;
                        goto $l1583;
                        $l2001:;
                        $tmp1572 = 10;
                        goto $l1570;
                        $l2002:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp1978 = -1;
                goto $l1976;
                $l1976:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest1983));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1979));
                newStatements1979 = NULL;
                newTest1983 = NULL;
                switch ($tmp1978) {
                    case 0: goto $l2000;
                    case -1: goto $l2004;
                }
                $l2004:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2005, 16);
            panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2005);
            if ($tmp2006.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2008 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 0));
                m2007 = *$tmp2008;
                panda$collections$ImmutableArray** $tmp2010 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 8));
                args2009 = *$tmp2010;
                int $tmp2013;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2017 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(m2007, p_f);
                    $tmp2016 = $tmp2017;
                    $tmp2015 = $tmp2016;
                    newM2014 = $tmp2015;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2015));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2016));
                    panda$collections$ImmutableArray* $tmp2021 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(args2009, p_f);
                    $tmp2020 = $tmp2021;
                    $tmp2019 = $tmp2020;
                    newArgs2018 = $tmp2019;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2019));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2020));
                    bool $tmp2022 = ((panda$core$Bit) { newM2014 != NULL }).value;
                    if ($tmp2022) goto $l2023;
                    $tmp2022 = ((panda$core$Bit) { newArgs2018 != NULL }).value;
                    $l2023:;
                    panda$core$Bit $tmp2024 = { $tmp2022 };
                    if ($tmp2024.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2027 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2028, 16);
                        org$pandalanguage$pandac$IRNode* $tmp2031 = (($fn2030) self->$class->vtable[5])(self, newM2014, m2007);
                        $tmp2029 = $tmp2031;
                        panda$collections$ImmutableArray* $tmp2034 = (($fn2033) self->$class->vtable[6])(self, newArgs2018, args2009);
                        $tmp2032 = $tmp2034;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2027, $tmp2028, $tmp2029, $tmp2032);
                        $tmp2026 = $tmp2027;
                        $tmp2025 = $tmp2026;
                        $returnValue1579 = $tmp2025;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2025));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2026));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2032));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2029));
                        $tmp2013 = 0;
                        goto $l2011;
                        $l2035:;
                        $tmp1585 = 10;
                        goto $l1583;
                        $l2036:;
                        $tmp1572 = 11;
                        goto $l1570;
                        $l2037:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2013 = -1;
                goto $l2011;
                $l2011:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newArgs2018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newM2014));
                newM2014 = NULL;
                newArgs2018 = NULL;
                switch ($tmp2013) {
                    case 0: goto $l2035;
                    case -1: goto $l2039;
                }
                $l2039:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2040, 17);
            panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2040);
            if ($tmp2041.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2043 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 0));
                expr2042 = *$tmp2043;
                org$pandalanguage$pandac$IRNode** $tmp2045 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 8));
                statements2044 = *$tmp2045;
                int $tmp2048;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2052 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(expr2042, p_f);
                    $tmp2051 = $tmp2052;
                    $tmp2050 = $tmp2051;
                    newExpr2049 = $tmp2050;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2051));
                    org$pandalanguage$pandac$IRNode* $tmp2056 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(statements2044, p_f);
                    $tmp2055 = $tmp2056;
                    $tmp2054 = $tmp2055;
                    newStatements2053 = $tmp2054;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2054));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2055));
                    bool $tmp2057 = ((panda$core$Bit) { newExpr2049 != NULL }).value;
                    if ($tmp2057) goto $l2058;
                    $tmp2057 = ((panda$core$Bit) { newStatements2053 != NULL }).value;
                    $l2058:;
                    panda$core$Bit $tmp2059 = { $tmp2057 };
                    if ($tmp2059.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2062 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2063, 17);
                        org$pandalanguage$pandac$IRNode* $tmp2066 = (($fn2065) self->$class->vtable[5])(self, newExpr2049, expr2042);
                        $tmp2064 = $tmp2066;
                        org$pandalanguage$pandac$IRNode* $tmp2069 = (($fn2068) self->$class->vtable[5])(self, newStatements2053, statements2044);
                        $tmp2067 = $tmp2069;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode($tmp2062, $tmp2063, $tmp2064, $tmp2067);
                        $tmp2061 = $tmp2062;
                        $tmp2060 = $tmp2061;
                        $returnValue1579 = $tmp2060;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2060));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2061));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2067));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2064));
                        $tmp2048 = 0;
                        goto $l2046;
                        $l2070:;
                        $tmp1585 = 11;
                        goto $l1583;
                        $l2071:;
                        $tmp1572 = 12;
                        goto $l1570;
                        $l2072:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2048 = -1;
                goto $l2046;
                $l2046:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2053));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newExpr2049));
                newExpr2049 = NULL;
                newStatements2053 = NULL;
                switch ($tmp2048) {
                    case 0: goto $l2070;
                    case -1: goto $l2074;
                }
                $l2074:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2075, 18);
            panda$core$Bit $tmp2076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2075);
            if ($tmp2076.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2078 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2077 = *$tmp2078;
                org$pandalanguage$pandac$Type** $tmp2080 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91586->$data + 16));
                type2079 = *$tmp2080;
                org$pandalanguage$pandac$IRNode** $tmp2082 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 24));
                base2081 = *$tmp2082;
                org$pandalanguage$pandac$FieldDecl** $tmp2084 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$506_91586->$data + 32));
                field2083 = *$tmp2084;
                int $tmp2087;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2091 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2081, p_f);
                    $tmp2090 = $tmp2091;
                    $tmp2089 = $tmp2090;
                    newBase2088 = $tmp2089;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2089));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2090));
                    if (((panda$core$Bit) { newBase2088 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2094 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2095, 18);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$FieldDecl($tmp2094, $tmp2095, position2077, type2079, newBase2088, field2083);
                        $tmp2093 = $tmp2094;
                        $tmp2092 = $tmp2093;
                        $returnValue1579 = $tmp2092;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2092));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2093));
                        $tmp2087 = 0;
                        goto $l2085;
                        $l2096:;
                        $tmp1585 = 12;
                        goto $l1583;
                        $l2097:;
                        $tmp1572 = 13;
                        goto $l1570;
                        $l2098:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2087 = -1;
                goto $l2085;
                $l2085:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2088));
                newBase2088 = NULL;
                switch ($tmp2087) {
                    case -1: goto $l2100;
                    case 0: goto $l2096;
                }
                $l2100:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2101, 19);
            panda$core$Bit $tmp2102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2101);
            if ($tmp2102.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2104 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2103 = *$tmp2104;
                org$pandalanguage$pandac$IRNode** $tmp2106 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 16));
                test2105 = *$tmp2106;
                panda$collections$ImmutableArray** $tmp2108 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 24));
                ifTrue2107 = *$tmp2108;
                org$pandalanguage$pandac$IRNode** $tmp2110 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 32));
                ifFalse2109 = *$tmp2110;
                int $tmp2113;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2117 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2105, p_f);
                    $tmp2116 = $tmp2117;
                    $tmp2115 = $tmp2116;
                    newTest2114 = $tmp2115;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2115));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2116));
                    panda$collections$ImmutableArray* $tmp2121 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(ifTrue2107, p_f);
                    $tmp2120 = $tmp2121;
                    $tmp2119 = $tmp2120;
                    newIfTrue2118 = $tmp2119;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2119));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
                    org$pandalanguage$pandac$IRNode* $tmp2125 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifFalse2109, p_f);
                    $tmp2124 = $tmp2125;
                    $tmp2123 = $tmp2124;
                    newIfFalse2122 = $tmp2123;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2123));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2124));
                    bool $tmp2127 = ((panda$core$Bit) { newTest2114 != NULL }).value;
                    if ($tmp2127) goto $l2128;
                    $tmp2127 = ((panda$core$Bit) { newIfTrue2118 != NULL }).value;
                    $l2128:;
                    panda$core$Bit $tmp2129 = { $tmp2127 };
                    bool $tmp2126 = $tmp2129.value;
                    if ($tmp2126) goto $l2130;
                    $tmp2126 = ((panda$core$Bit) { newIfFalse2122 != NULL }).value;
                    $l2130:;
                    panda$core$Bit $tmp2131 = { $tmp2126 };
                    if ($tmp2131.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2134 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2135, 19);
                        org$pandalanguage$pandac$IRNode* $tmp2138 = (($fn2137) self->$class->vtable[5])(self, newTest2114, test2105);
                        $tmp2136 = $tmp2138;
                        panda$collections$ImmutableArray* $tmp2141 = (($fn2140) self->$class->vtable[6])(self, newIfTrue2118, ifTrue2107);
                        $tmp2139 = $tmp2141;
                        org$pandalanguage$pandac$IRNode* $tmp2144 = (($fn2143) self->$class->vtable[5])(self, newIfFalse2122, ifFalse2109);
                        $tmp2142 = $tmp2144;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q($tmp2134, $tmp2135, position2103, $tmp2136, $tmp2139, $tmp2142);
                        $tmp2133 = $tmp2134;
                        $tmp2132 = $tmp2133;
                        $returnValue1579 = $tmp2132;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2132));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2133));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2142));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2139));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2136));
                        $tmp2113 = 0;
                        goto $l2111;
                        $l2145:;
                        $tmp1585 = 13;
                        goto $l1583;
                        $l2146:;
                        $tmp1572 = 14;
                        goto $l1570;
                        $l2147:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2113 = -1;
                goto $l2111;
                $l2111:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfFalse2122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfTrue2118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2114));
                newTest2114 = NULL;
                newIfTrue2118 = NULL;
                newIfFalse2122 = NULL;
                switch ($tmp2113) {
                    case -1: goto $l2149;
                    case 0: goto $l2145;
                }
                $l2149:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2150, 21);
            panda$core$Bit $tmp2151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2150);
            if ($tmp2151.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2153 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2152 = *$tmp2153;
                org$pandalanguage$pandac$IRNode** $tmp2155 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 16));
                value2154 = *$tmp2155;
                int $tmp2158;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2162 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2154, p_f);
                    $tmp2161 = $tmp2162;
                    $tmp2160 = $tmp2161;
                    newValue2159 = $tmp2160;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2160));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2161));
                    if (((panda$core$Bit) { newValue2159 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2165 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2166, 21);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp2165, $tmp2166, position2152, newValue2159);
                        $tmp2164 = $tmp2165;
                        $tmp2163 = $tmp2164;
                        $returnValue1579 = $tmp2163;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2163));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
                        $tmp2158 = 0;
                        goto $l2156;
                        $l2167:;
                        $tmp1585 = 14;
                        goto $l1583;
                        $l2168:;
                        $tmp1572 = 15;
                        goto $l1570;
                        $l2169:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2158 = -1;
                goto $l2156;
                $l2156:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2159));
                newValue2159 = NULL;
                switch ($tmp2158) {
                    case 0: goto $l2167;
                    case -1: goto $l2171;
                }
                $l2171:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2172, 22);
            panda$core$Bit $tmp2173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2172);
            if ($tmp2173.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2175 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2174 = *$tmp2175;
                org$pandalanguage$pandac$IRNode** $tmp2177 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 16));
                value2176 = *$tmp2177;
                int $tmp2180;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2184 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2176, p_f);
                    $tmp2183 = $tmp2184;
                    $tmp2182 = $tmp2183;
                    newValue2181 = $tmp2182;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2182));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2183));
                    if (((panda$core$Bit) { newValue2181 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2187 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2188, 22);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp2187, $tmp2188, position2174, newValue2181);
                        $tmp2186 = $tmp2187;
                        $tmp2185 = $tmp2186;
                        $returnValue1579 = $tmp2185;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2185));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2186));
                        $tmp2180 = 0;
                        goto $l2178;
                        $l2189:;
                        $tmp1585 = 15;
                        goto $l1583;
                        $l2190:;
                        $tmp1572 = 16;
                        goto $l1570;
                        $l2191:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2180 = -1;
                goto $l2178;
                $l2178:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2181));
                newValue2181 = NULL;
                switch ($tmp2180) {
                    case -1: goto $l2193;
                    case 0: goto $l2189;
                }
                $l2193:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2194, 23);
            panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2194);
            if ($tmp2195.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2197 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2196 = *$tmp2197;
                panda$core$String** $tmp2199 = ((panda$core$String**) ((char*) $match$506_91586->$data + 16));
                label2198 = *$tmp2199;
                panda$collections$ImmutableArray** $tmp2201 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 24));
                statements2200 = *$tmp2201;
                int $tmp2204;
                {
                    panda$collections$ImmutableArray* $tmp2208 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2200, p_f);
                    $tmp2207 = $tmp2208;
                    $tmp2206 = $tmp2207;
                    newStatements2205 = $tmp2206;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
                    if (((panda$core$Bit) { newStatements2205 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2211 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2212, 23);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2211, $tmp2212, position2196, label2198, newStatements2205);
                        $tmp2210 = $tmp2211;
                        $tmp2209 = $tmp2210;
                        $returnValue1579 = $tmp2209;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2210));
                        $tmp2204 = 0;
                        goto $l2202;
                        $l2213:;
                        $tmp1585 = 16;
                        goto $l1583;
                        $l2214:;
                        $tmp1572 = 17;
                        goto $l1570;
                        $l2215:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2204 = -1;
                goto $l2202;
                $l2202:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2205));
                newStatements2205 = NULL;
                switch ($tmp2204) {
                    case -1: goto $l2217;
                    case 0: goto $l2213;
                }
                $l2217:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2218, 24);
            panda$core$Bit $tmp2219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2218);
            if ($tmp2219.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2221 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2220 = *$tmp2221;
                org$pandalanguage$pandac$IRNode** $tmp2223 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 16));
                value2222 = *$tmp2223;
                panda$collections$ImmutableArray** $tmp2225 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 24));
                whens2224 = *$tmp2225;
                panda$collections$ImmutableArray** $tmp2227 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 32));
                other2226 = *$tmp2227;
                int $tmp2230;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2234 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2222, p_f);
                    $tmp2233 = $tmp2234;
                    $tmp2232 = $tmp2233;
                    newValue2231 = $tmp2232;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2232));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2233));
                    panda$collections$ImmutableArray* $tmp2238 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(whens2224, p_f);
                    $tmp2237 = $tmp2238;
                    $tmp2236 = $tmp2237;
                    newWhens2235 = $tmp2236;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
                    panda$collections$ImmutableArray* $tmp2242 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(other2226, p_f);
                    $tmp2241 = $tmp2242;
                    $tmp2240 = $tmp2241;
                    newOther2239 = $tmp2240;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2240));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2241));
                    bool $tmp2244 = ((panda$core$Bit) { newValue2231 != NULL }).value;
                    if ($tmp2244) goto $l2245;
                    $tmp2244 = ((panda$core$Bit) { newWhens2235 != NULL }).value;
                    $l2245:;
                    panda$core$Bit $tmp2246 = { $tmp2244 };
                    bool $tmp2243 = $tmp2246.value;
                    if ($tmp2243) goto $l2247;
                    $tmp2243 = ((panda$core$Bit) { newOther2239 != NULL }).value;
                    $l2247:;
                    panda$core$Bit $tmp2248 = { $tmp2243 };
                    if ($tmp2248.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2251 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2252, 24);
                        org$pandalanguage$pandac$IRNode* $tmp2255 = (($fn2254) self->$class->vtable[5])(self, newValue2231, value2222);
                        $tmp2253 = $tmp2255;
                        panda$collections$ImmutableArray* $tmp2258 = (($fn2257) self->$class->vtable[6])(self, newWhens2235, whens2224);
                        $tmp2256 = $tmp2258;
                        panda$collections$ImmutableArray* $tmp2261 = (($fn2260) self->$class->vtable[6])(self, newOther2239, other2226);
                        $tmp2259 = $tmp2261;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2251, $tmp2252, position2220, $tmp2253, $tmp2256, $tmp2259);
                        $tmp2250 = $tmp2251;
                        $tmp2249 = $tmp2250;
                        $returnValue1579 = $tmp2249;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2249));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2250));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2259));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2256));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
                        $tmp2230 = 0;
                        goto $l2228;
                        $l2262:;
                        $tmp1585 = 17;
                        goto $l1583;
                        $l2263:;
                        $tmp1572 = 18;
                        goto $l1570;
                        $l2264:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2230 = -1;
                goto $l2228;
                $l2228:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newOther2239));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newWhens2235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2231));
                newValue2231 = NULL;
                newWhens2235 = NULL;
                newOther2239 = NULL;
                switch ($tmp2230) {
                    case -1: goto $l2266;
                    case 0: goto $l2262;
                }
                $l2266:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2267, 25);
            panda$core$Bit $tmp2268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2267);
            if ($tmp2268.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2270 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2269 = *$tmp2270;
                org$pandalanguage$pandac$Type** $tmp2272 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91586->$data + 16));
                type2271 = *$tmp2272;
                org$pandalanguage$pandac$IRNode** $tmp2274 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 24));
                target2273 = *$tmp2274;
                org$pandalanguage$pandac$MethodRef** $tmp2276 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$506_91586->$data + 32));
                m2275 = *$tmp2276;
                int $tmp2279;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2283 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(target2273, p_f);
                    $tmp2282 = $tmp2283;
                    $tmp2281 = $tmp2282;
                    newTarget2280 = $tmp2281;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2281));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2282));
                    if (((panda$core$Bit) { newTarget2280 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2286 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2287, 25);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef($tmp2286, $tmp2287, position2269, type2271, newTarget2280, m2275);
                        $tmp2285 = $tmp2286;
                        $tmp2284 = $tmp2285;
                        $returnValue1579 = $tmp2284;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2284));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
                        $tmp2279 = 0;
                        goto $l2277;
                        $l2288:;
                        $tmp1585 = 18;
                        goto $l1583;
                        $l2289:;
                        $tmp1572 = 19;
                        goto $l1570;
                        $l2290:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2279 = -1;
                goto $l2277;
                $l2277:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTarget2280));
                newTarget2280 = NULL;
                switch ($tmp2279) {
                    case -1: goto $l2292;
                    case 0: goto $l2288;
                }
                $l2292:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2293, 28);
            panda$core$Bit $tmp2294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2293);
            if ($tmp2294.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2296 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2295 = *$tmp2296;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2298 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$506_91586->$data + 16));
                op2297 = *$tmp2298;
                org$pandalanguage$pandac$IRNode** $tmp2300 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 24));
                base2299 = *$tmp2300;
                int $tmp2303;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2307 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2299, p_f);
                    $tmp2306 = $tmp2307;
                    $tmp2305 = $tmp2306;
                    newBase2304 = $tmp2305;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2305));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2306));
                    if (((panda$core$Bit) { newBase2304 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2310 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2311, 28);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp2310, $tmp2311, position2295, op2297, newBase2304);
                        $tmp2309 = $tmp2310;
                        $tmp2308 = $tmp2309;
                        $returnValue1579 = $tmp2308;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2308));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2309));
                        $tmp2303 = 0;
                        goto $l2301;
                        $l2312:;
                        $tmp1585 = 19;
                        goto $l1583;
                        $l2313:;
                        $tmp1572 = 20;
                        goto $l1570;
                        $l2314:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2303 = -1;
                goto $l2301;
                $l2301:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2304));
                newBase2304 = NULL;
                switch ($tmp2303) {
                    case -1: goto $l2316;
                    case 0: goto $l2312;
                }
                $l2316:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2317, 29);
            panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2317);
            if ($tmp2318.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2320 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2319 = *$tmp2320;
                panda$core$String** $tmp2322 = ((panda$core$String**) ((char*) $match$506_91586->$data + 16));
                label2321 = *$tmp2322;
                org$pandalanguage$pandac$IRNode** $tmp2324 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 24));
                target2323 = *$tmp2324;
                org$pandalanguage$pandac$IRNode** $tmp2326 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 32));
                list2325 = *$tmp2326;
                panda$collections$ImmutableArray** $tmp2328 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 40));
                statements2327 = *$tmp2328;
                int $tmp2331;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2335 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(list2325, p_f);
                    $tmp2334 = $tmp2335;
                    $tmp2333 = $tmp2334;
                    newList2332 = $tmp2333;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2333));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2334));
                    panda$collections$ImmutableArray* $tmp2339 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2327, p_f);
                    $tmp2338 = $tmp2339;
                    $tmp2337 = $tmp2338;
                    newStatements2336 = $tmp2337;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
                    bool $tmp2340 = ((panda$core$Bit) { newList2332 != NULL }).value;
                    if ($tmp2340) goto $l2341;
                    $tmp2340 = ((panda$core$Bit) { newStatements2336 != NULL }).value;
                    $l2341:;
                    panda$core$Bit $tmp2342 = { $tmp2340 };
                    if ($tmp2342.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2345 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2346, 29);
                        org$pandalanguage$pandac$IRNode* $tmp2349 = (($fn2348) self->$class->vtable[5])(self, newList2332, list2325);
                        $tmp2347 = $tmp2349;
                        panda$collections$ImmutableArray* $tmp2352 = (($fn2351) self->$class->vtable[6])(self, newStatements2336, statements2327);
                        $tmp2350 = $tmp2352;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2345, $tmp2346, position2319, label2321, target2323, $tmp2347, $tmp2350);
                        $tmp2344 = $tmp2345;
                        $tmp2343 = $tmp2344;
                        $returnValue1579 = $tmp2343;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2343));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2350));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2347));
                        $tmp2331 = 0;
                        goto $l2329;
                        $l2353:;
                        $tmp1585 = 20;
                        goto $l1583;
                        $l2354:;
                        $tmp1572 = 21;
                        goto $l1570;
                        $l2355:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2331 = -1;
                goto $l2329;
                $l2329:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2336));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newList2332));
                newList2332 = NULL;
                newStatements2336 = NULL;
                switch ($tmp2331) {
                    case 0: goto $l2353;
                    case -1: goto $l2357;
                }
                $l2357:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2358, 31);
            panda$core$Bit $tmp2359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2358);
            if ($tmp2359.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2361 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2360 = *$tmp2361;
                org$pandalanguage$pandac$IRNode** $tmp2363 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 16));
                value2362 = *$tmp2363;
                int $tmp2366;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2370 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2362, p_f);
                    $tmp2369 = $tmp2370;
                    $tmp2368 = $tmp2369;
                    newValue2367 = $tmp2368;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2368));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2369));
                    if (((panda$core$Bit) { newValue2367 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2373 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2374, 31);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q($tmp2373, $tmp2374, position2360, newValue2367);
                        $tmp2372 = $tmp2373;
                        $tmp2371 = $tmp2372;
                        $returnValue1579 = $tmp2371;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2371));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2372));
                        $tmp2366 = 0;
                        goto $l2364;
                        $l2375:;
                        $tmp1585 = 21;
                        goto $l1583;
                        $l2376:;
                        $tmp1572 = 22;
                        goto $l1570;
                        $l2377:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2366 = -1;
                goto $l2364;
                $l2364:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2367));
                newValue2367 = NULL;
                switch ($tmp2366) {
                    case 0: goto $l2375;
                    case -1: goto $l2379;
                }
                $l2379:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2380, 33);
            panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2380);
            if ($tmp2381.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2383 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 0));
                base2382 = *$tmp2383;
                panda$core$Int64* $tmp2385 = ((panda$core$Int64*) ((char*) $match$506_91586->$data + 8));
                id2384 = *$tmp2385;
                int $tmp2388;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2392 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2382, p_f);
                    $tmp2391 = $tmp2392;
                    $tmp2390 = $tmp2391;
                    newBase2389 = $tmp2390;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2390));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2391));
                    if (((panda$core$Bit) { newBase2389 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2395 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2396, 33);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64($tmp2395, $tmp2396, newBase2389, id2384);
                        $tmp2394 = $tmp2395;
                        $tmp2393 = $tmp2394;
                        $returnValue1579 = $tmp2393;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2393));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2394));
                        $tmp2388 = 0;
                        goto $l2386;
                        $l2397:;
                        $tmp1585 = 22;
                        goto $l1583;
                        $l2398:;
                        $tmp1572 = 23;
                        goto $l1570;
                        $l2399:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2388 = -1;
                goto $l2386;
                $l2386:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2389));
                newBase2389 = NULL;
                switch ($tmp2388) {
                    case -1: goto $l2401;
                    case 0: goto $l2397;
                }
                $l2401:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2402, 38);
            panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2402);
            if ($tmp2403.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2405 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2404 = *$tmp2405;
                org$pandalanguage$pandac$IRNode** $tmp2407 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 16));
                test2406 = *$tmp2407;
                org$pandalanguage$pandac$IRNode** $tmp2409 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 24));
                ifTrue2408 = *$tmp2409;
                org$pandalanguage$pandac$IRNode** $tmp2411 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 32));
                ifFalse2410 = *$tmp2411;
                int $tmp2414;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2418 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2406, p_f);
                    $tmp2417 = $tmp2418;
                    $tmp2416 = $tmp2417;
                    newTest2415 = $tmp2416;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2416));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2417));
                    org$pandalanguage$pandac$IRNode* $tmp2422 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifTrue2408, p_f);
                    $tmp2421 = $tmp2422;
                    $tmp2420 = $tmp2421;
                    newIfTrue2419 = $tmp2420;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2421));
                    org$pandalanguage$pandac$IRNode* $tmp2426 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifFalse2410, p_f);
                    $tmp2425 = $tmp2426;
                    $tmp2424 = $tmp2425;
                    newIfFalse2423 = $tmp2424;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2424));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2425));
                    bool $tmp2428 = ((panda$core$Bit) { newTest2415 != NULL }).value;
                    if ($tmp2428) goto $l2429;
                    $tmp2428 = ((panda$core$Bit) { newIfTrue2419 != NULL }).value;
                    $l2429:;
                    panda$core$Bit $tmp2430 = { $tmp2428 };
                    bool $tmp2427 = $tmp2430.value;
                    if ($tmp2427) goto $l2431;
                    $tmp2427 = ((panda$core$Bit) { newIfFalse2423 != NULL }).value;
                    $l2431:;
                    panda$core$Bit $tmp2432 = { $tmp2427 };
                    if ($tmp2432.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2435 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2436, 38);
                        org$pandalanguage$pandac$IRNode* $tmp2439 = (($fn2438) self->$class->vtable[5])(self, newTest2415, test2406);
                        $tmp2437 = $tmp2439;
                        org$pandalanguage$pandac$IRNode* $tmp2442 = (($fn2441) self->$class->vtable[5])(self, newIfTrue2419, ifTrue2408);
                        $tmp2440 = $tmp2442;
                        org$pandalanguage$pandac$IRNode* $tmp2445 = (($fn2444) self->$class->vtable[5])(self, newIfFalse2423, ifFalse2410);
                        $tmp2443 = $tmp2445;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode($tmp2435, $tmp2436, position2404, $tmp2437, $tmp2440, $tmp2443);
                        $tmp2434 = $tmp2435;
                        $tmp2433 = $tmp2434;
                        $returnValue1579 = $tmp2433;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2433));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2434));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2443));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2440));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2437));
                        $tmp2414 = 0;
                        goto $l2412;
                        $l2446:;
                        $tmp1585 = 23;
                        goto $l1583;
                        $l2447:;
                        $tmp1572 = 24;
                        goto $l1570;
                        $l2448:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2414 = -1;
                goto $l2412;
                $l2412:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfFalse2423));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfTrue2419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2415));
                newTest2415 = NULL;
                newIfTrue2419 = NULL;
                newIfFalse2423 = NULL;
                switch ($tmp2414) {
                    case -1: goto $l2450;
                    case 0: goto $l2446;
                }
                $l2450:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2451, 46);
            panda$core$Bit $tmp2452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2451);
            if ($tmp2452.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2454 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2453 = *$tmp2454;
                org$pandalanguage$pandac$Variable$Kind* $tmp2456 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$506_91586->$data + 16));
                kind2455 = *$tmp2456;
                panda$collections$ImmutableArray** $tmp2458 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 24));
                decls2457 = *$tmp2458;
                int $tmp2461;
                {
                    panda$collections$ImmutableArray* $tmp2465 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(decls2457, p_f);
                    $tmp2464 = $tmp2465;
                    $tmp2463 = $tmp2464;
                    newDecls2462 = $tmp2463;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2463));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2464));
                    if (((panda$core$Bit) { newDecls2462 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2468 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2469, 46);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2468, $tmp2469, position2453, kind2455, newDecls2462);
                        $tmp2467 = $tmp2468;
                        $tmp2466 = $tmp2467;
                        $returnValue1579 = $tmp2466;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2466));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2467));
                        $tmp2461 = 0;
                        goto $l2459;
                        $l2470:;
                        $tmp1585 = 24;
                        goto $l1583;
                        $l2471:;
                        $tmp1572 = 25;
                        goto $l1570;
                        $l2472:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2461 = -1;
                goto $l2459;
                $l2459:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newDecls2462));
                newDecls2462 = NULL;
                switch ($tmp2461) {
                    case 0: goto $l2470;
                    case -1: goto $l2474;
                }
                $l2474:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2475, 49);
            panda$core$Bit $tmp2476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2475);
            if ($tmp2476.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2478 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2477 = *$tmp2478;
                panda$collections$ImmutableArray** $tmp2480 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 16));
                tests2479 = *$tmp2480;
                panda$collections$ImmutableArray** $tmp2482 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 24));
                statements2481 = *$tmp2482;
                int $tmp2485;
                {
                    panda$collections$ImmutableArray* $tmp2489 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(tests2479, p_f);
                    $tmp2488 = $tmp2489;
                    $tmp2487 = $tmp2488;
                    newTests2486 = $tmp2487;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2487));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2488));
                    panda$collections$ImmutableArray* $tmp2493 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2481, p_f);
                    $tmp2492 = $tmp2493;
                    $tmp2491 = $tmp2492;
                    newStatements2490 = $tmp2491;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2491));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2492));
                    bool $tmp2494 = ((panda$core$Bit) { newTests2486 != NULL }).value;
                    if ($tmp2494) goto $l2495;
                    $tmp2494 = ((panda$core$Bit) { newStatements2490 != NULL }).value;
                    $l2495:;
                    panda$core$Bit $tmp2496 = { $tmp2494 };
                    if ($tmp2496.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2499 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2500, 49);
                        panda$collections$ImmutableArray* $tmp2503 = (($fn2502) self->$class->vtable[6])(self, newTests2486, tests2479);
                        $tmp2501 = $tmp2503;
                        panda$collections$ImmutableArray* $tmp2506 = (($fn2505) self->$class->vtable[6])(self, newStatements2490, statements2481);
                        $tmp2504 = $tmp2506;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2499, $tmp2500, position2477, $tmp2501, $tmp2504);
                        $tmp2498 = $tmp2499;
                        $tmp2497 = $tmp2498;
                        $returnValue1579 = $tmp2497;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2497));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2504));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2501));
                        $tmp2485 = 0;
                        goto $l2483;
                        $l2507:;
                        $tmp1585 = 25;
                        goto $l1583;
                        $l2508:;
                        $tmp1572 = 26;
                        goto $l1570;
                        $l2509:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2485 = -1;
                goto $l2483;
                $l2483:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTests2486));
                newTests2486 = NULL;
                newStatements2490 = NULL;
                switch ($tmp2485) {
                    case -1: goto $l2511;
                    case 0: goto $l2507;
                }
                $l2511:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2512, 50);
            panda$core$Bit $tmp2513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91586->$rawValue, $tmp2512);
            if ($tmp2513.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2515 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91586->$data + 0));
                position2514 = *$tmp2515;
                panda$core$String** $tmp2517 = ((panda$core$String**) ((char*) $match$506_91586->$data + 16));
                label2516 = *$tmp2517;
                org$pandalanguage$pandac$IRNode** $tmp2519 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91586->$data + 24));
                test2518 = *$tmp2519;
                panda$collections$ImmutableArray** $tmp2521 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91586->$data + 32));
                statements2520 = *$tmp2521;
                int $tmp2524;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2528 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2518, p_f);
                    $tmp2527 = $tmp2528;
                    $tmp2526 = $tmp2527;
                    newTest2525 = $tmp2526;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2526));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
                    panda$collections$ImmutableArray* $tmp2532 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2520, p_f);
                    $tmp2531 = $tmp2532;
                    $tmp2530 = $tmp2531;
                    newStatements2529 = $tmp2530;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2530));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2531));
                    bool $tmp2533 = ((panda$core$Bit) { newTest2525 != NULL }).value;
                    if ($tmp2533) goto $l2534;
                    $tmp2533 = ((panda$core$Bit) { newStatements2529 != NULL }).value;
                    $l2534:;
                    panda$core$Bit $tmp2535 = { $tmp2533 };
                    if ($tmp2535.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2538 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2539, 50);
                        org$pandalanguage$pandac$IRNode* $tmp2542 = (($fn2541) self->$class->vtable[5])(self, newTest2525, test2518);
                        $tmp2540 = $tmp2542;
                        panda$collections$ImmutableArray* $tmp2545 = (($fn2544) self->$class->vtable[6])(self, newStatements2529, statements2520);
                        $tmp2543 = $tmp2545;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2538, $tmp2539, position2514, label2516, $tmp2540, $tmp2543);
                        $tmp2537 = $tmp2538;
                        $tmp2536 = $tmp2537;
                        $returnValue1579 = $tmp2536;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2536));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2537));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2543));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
                        $tmp2524 = 0;
                        goto $l2522;
                        $l2546:;
                        $tmp1585 = 26;
                        goto $l1583;
                        $l2547:;
                        $tmp1572 = 27;
                        goto $l1570;
                        $l2548:;
                        return $returnValue1579;
                    }
                    }
                }
                $tmp2524 = -1;
                goto $l2522;
                $l2522:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2529));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2525));
                newTest2525 = NULL;
                newStatements2529 = NULL;
                switch ($tmp2524) {
                    case -1: goto $l2550;
                    case 0: goto $l2546;
                }
                $l2550:;
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp2551, false);
                if ($tmp2551.value) goto $l2552; else goto $l2553;
                $l2553:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2554, (panda$core$Int64) { 675 });
                abort();
                $l2552:;
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1585 = -1;
        goto $l1583;
        $l1583:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1587));
        switch ($tmp1585) {
            case 18: goto $l2289;
            case 11: goto $l2071;
            case 7: goto $l1940;
            case 22: goto $l2398;
            case 17: goto $l2263;
            case 21: goto $l2376;
            case 24: goto $l2471;
            case 13: goto $l2146;
            case 3: goto $l1835;
            case 8: goto $l1962;
            case 5: goto $l1890;
            case 20: goto $l2354;
            case 16: goto $l2214;
            case 19: goto $l2313;
            case 1: goto $l1779;
            case -1: goto $l2555;
            case 10: goto $l2036;
            case 25: goto $l2508;
            case 12: goto $l2097;
            case 15: goto $l2190;
            case 9: goto $l2001;
            case 14: goto $l2168;
            case 0: goto $l1738;
            case 4: goto $l1864;
            case 2: goto $l1801;
            case 26: goto $l2547;
            case 6: goto $l1916;
            case 23: goto $l2447;
        }
        $l2555:;
        $tmp2556 = NULL;
        $returnValue1579 = $tmp2556;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2556));
        $tmp1572 = 28;
        goto $l1570;
        $l2557:;
        return $returnValue1579;
    }
    $l1570:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) transformed1573));
    transformed1573 = NULL;
    switch ($tmp1572) {
        case 12: goto $l2072;
        case 19: goto $l2290;
        case 22: goto $l2377;
        case 23: goto $l2399;
        case 18: goto $l2264;
        case 25: goto $l2472;
        case 4: goto $l1836;
        case 14: goto $l2147;
        case 9: goto $l1963;
        case 21: goto $l2355;
        case 26: goto $l2509;
        case 17: goto $l2215;
        case 11: goto $l2037;
        case 20: goto $l2314;
        case 28: goto $l2557;
        case 2: goto $l1780;
        case 0: goto $l1581;
        case 13: goto $l2098;
        case 8: goto $l1941;
        case 5: goto $l1865;
        case 1: goto $l1739;
        case 15: goto $l2169;
        case 10: goto $l2002;
        case 16: goto $l2191;
        case 6: goto $l1891;
        case 27: goto $l2548;
        case 3: goto $l1802;
        case 24: goto $l2448;
        case 7: goto $l1917;
    }
    $l2559:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$682_92563 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2564;
    panda$core$Int64 $tmp2565;
    org$pandalanguage$pandac$IRNode* test2567 = NULL;
    org$pandalanguage$pandac$IRNode* msg2569 = NULL;
    panda$core$String* $returnValue2571;
    panda$core$String* $tmp2572;
    panda$core$String* $tmp2573;
    panda$core$String* $tmp2574;
    panda$core$String* $tmp2575;
    panda$core$String* $tmp2576;
    panda$core$String* $tmp2586;
    panda$core$String* $tmp2587;
    panda$core$String* $tmp2588;
    panda$core$Int64 $tmp2595;
    panda$core$String* $tmp2597;
    panda$core$Int64 $tmp2601;
    org$pandalanguage$pandac$IRNode* left2603 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op2605;
    org$pandalanguage$pandac$IRNode* right2607 = NULL;
    panda$core$String* $tmp2609;
    panda$core$String* $tmp2610;
    panda$core$String* $tmp2611;
    panda$core$String* $tmp2612;
    panda$core$String* $tmp2613;
    panda$core$String* $tmp2614;
    panda$core$String* $tmp2615;
    panda$core$Object* $tmp2620;
    panda$core$Int64 $tmp2630;
    panda$core$Bit bit2632;
    panda$core$String* $tmp2634;
    panda$core$String* $tmp2635;
    panda$core$Int64 $tmp2639;
    panda$collections$ImmutableArray* statements2641 = NULL;
    panda$core$MutableString* result2646 = NULL;
    panda$core$MutableString* $tmp2647;
    panda$core$MutableString* $tmp2648;
    panda$collections$Iterator* Iter$696$172654 = NULL;
    panda$collections$Iterator* $tmp2655;
    panda$collections$Iterator* $tmp2656;
    org$pandalanguage$pandac$IRNode* s2672 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2673;
    panda$core$Object* $tmp2674;
    panda$core$String* $tmp2679;
    panda$core$Char8 $tmp2684;
    panda$core$UInt8 $tmp2685;
    panda$core$String* $tmp2686;
    panda$core$String* $tmp2687;
    panda$core$Int64 $tmp2693;
    panda$collections$ImmutableArray* statements2695 = NULL;
    panda$collections$ImmutableArray* finally2697 = NULL;
    panda$core$MutableString* result2702 = NULL;
    panda$core$MutableString* $tmp2703;
    panda$core$MutableString* $tmp2704;
    panda$collections$Iterator* Iter$703$172710 = NULL;
    panda$collections$Iterator* $tmp2711;
    panda$collections$Iterator* $tmp2712;
    org$pandalanguage$pandac$IRNode* s2728 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2729;
    panda$core$Object* $tmp2730;
    panda$core$String* $tmp2735;
    panda$collections$Iterator* Iter$707$172744 = NULL;
    panda$collections$Iterator* $tmp2745;
    panda$collections$Iterator* $tmp2746;
    org$pandalanguage$pandac$IRNode* s2762 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2763;
    panda$core$Object* $tmp2764;
    panda$core$String* $tmp2769;
    panda$core$Char8 $tmp2774;
    panda$core$UInt8 $tmp2775;
    panda$core$String* $tmp2776;
    panda$core$String* $tmp2777;
    panda$core$Int64 $tmp2783;
    panda$core$String* label2785 = NULL;
    panda$core$String* $tmp2787;
    panda$core$String* $tmp2788;
    panda$core$String* $tmp2789;
    panda$core$String* $tmp2796;
    panda$core$Int64 $tmp2800;
    org$pandalanguage$pandac$MethodRef* m2802 = NULL;
    panda$collections$ImmutableArray* args2804 = NULL;
    panda$core$String* $tmp2806;
    panda$core$String* $tmp2807;
    panda$core$String* $tmp2808;
    panda$core$String* $tmp2809;
    panda$core$String* $tmp2810;
    panda$core$String* $tmp2814;
    panda$core$Int64 $tmp2824;
    org$pandalanguage$pandac$IRNode* value2826 = NULL;
    org$pandalanguage$pandac$Type* type2828 = NULL;
    panda$core$String* $tmp2830;
    panda$core$String* $tmp2831;
    panda$core$String* $tmp2832;
    panda$core$String* $tmp2833;
    panda$core$String* $tmp2834;
    panda$core$Int64 $tmp2844;
    org$pandalanguage$pandac$ChoiceCase* ce2846 = NULL;
    panda$core$String* $tmp2848;
    panda$core$String* $tmp2849;
    panda$core$Int64 $tmp2853;
    org$pandalanguage$pandac$IRNode* base2855 = NULL;
    org$pandalanguage$pandac$ChoiceCase* ce2857 = NULL;
    panda$core$Int64 field2859;
    panda$core$String* $tmp2861;
    panda$core$String* $tmp2862;
    panda$core$String* $tmp2863;
    panda$core$String* $tmp2864;
    panda$core$String* $tmp2865;
    panda$core$String* $tmp2866;
    panda$core$String* $tmp2867;
    panda$core$Object* $tmp2875;
    panda$core$Int64 $tmp2882;
    org$pandalanguage$pandac$Type* type2884 = NULL;
    org$pandalanguage$pandac$IRNode* call2886 = NULL;
    org$pandalanguage$pandac$IRNode* $match$726_172891 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2892;
    panda$core$Int64 $tmp2893;
    panda$collections$ImmutableArray* args2895 = NULL;
    panda$core$String* $tmp2897;
    panda$core$String* $tmp2898;
    panda$core$String* $tmp2899;
    panda$core$String* $tmp2900;
    panda$core$String* $tmp2901;
    panda$core$String* $tmp2905;
    panda$core$Bit $tmp2916;
    panda$core$Int64 $tmp2921;
    org$pandalanguage$pandac$Type* Type2923 = NULL;
    panda$core$String* $tmp2925;
    panda$core$Int64 $tmp2929;
    panda$core$String* label2931 = NULL;
    panda$core$String* $tmp2933;
    panda$core$String* $tmp2934;
    panda$core$String* $tmp2935;
    panda$core$String* $tmp2942;
    panda$core$Int64 $tmp2946;
    org$pandalanguage$pandac$IRNode* target2948 = NULL;
    org$pandalanguage$pandac$IRNode* value2950 = NULL;
    panda$core$String* $tmp2952;
    panda$core$String* $tmp2953;
    panda$core$String* $tmp2954;
    panda$core$String* $tmp2955;
    panda$core$String* $tmp2956;
    panda$core$String* $tmp2957;
    panda$core$String* $tmp2958;
    org$pandalanguage$pandac$Type* $tmp2963;
    panda$core$String* $tmp2974;
    panda$core$String* $tmp2975;
    panda$core$String* $tmp2976;
    panda$core$String* $tmp2977;
    panda$core$String* $tmp2978;
    org$pandalanguage$pandac$Type* $tmp2983;
    panda$core$Int64 $tmp2991;
    panda$core$String* label2993 = NULL;
    panda$collections$ImmutableArray* statements2995 = NULL;
    org$pandalanguage$pandac$IRNode* test2997 = NULL;
    panda$core$MutableString* result3002 = NULL;
    panda$core$MutableString* $tmp3003;
    panda$core$MutableString* $tmp3004;
    panda$core$String* $tmp3006;
    panda$core$String* $tmp3007;
    panda$collections$Iterator* Iter$750$173015 = NULL;
    panda$collections$Iterator* $tmp3016;
    panda$collections$Iterator* $tmp3017;
    org$pandalanguage$pandac$IRNode* s3033 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3034;
    panda$core$Object* $tmp3035;
    panda$core$String* $tmp3040;
    panda$core$String* $tmp3045;
    panda$core$String* $tmp3046;
    panda$core$String* $tmp3051;
    panda$core$String* $tmp3052;
    panda$core$Int64 $tmp3058;
    org$pandalanguage$pandac$IRNode* m3060 = NULL;
    panda$collections$ImmutableArray* args3062 = NULL;
    panda$core$String* $tmp3064;
    panda$core$String* $tmp3065;
    panda$core$String* $tmp3066;
    panda$core$String* $tmp3067;
    panda$core$String* $tmp3068;
    panda$core$String* $tmp3073;
    panda$core$Int64 $tmp3084;
    org$pandalanguage$pandac$IRNode* expr3086 = NULL;
    org$pandalanguage$pandac$IRNode* stmt3088 = NULL;
    panda$core$String* $tmp3090;
    panda$core$String* $tmp3091;
    panda$core$String* $tmp3092;
    panda$core$String* $tmp3093;
    panda$core$String* $tmp3094;
    panda$core$Int64 $tmp3104;
    org$pandalanguage$pandac$IRNode* base3106 = NULL;
    org$pandalanguage$pandac$FieldDecl* field3108 = NULL;
    panda$core$String* $tmp3110;
    panda$core$String* $tmp3111;
    panda$core$String* $tmp3112;
    panda$core$String* $tmp3113;
    panda$core$String* $tmp3114;
    panda$core$String* $tmp3124;
    panda$core$Int64 $tmp3127;
    org$pandalanguage$pandac$IRNode* test3129 = NULL;
    panda$collections$ImmutableArray* ifTrue3131 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse3133 = NULL;
    panda$core$MutableString* result3138 = NULL;
    panda$core$MutableString* $tmp3139;
    panda$core$MutableString* $tmp3140;
    panda$core$String* $tmp3142;
    panda$core$String* $tmp3143;
    panda$collections$Iterator* Iter$766$173151 = NULL;
    panda$collections$Iterator* $tmp3152;
    panda$collections$Iterator* $tmp3153;
    org$pandalanguage$pandac$IRNode* s3169 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3170;
    panda$core$Object* $tmp3171;
    panda$core$String* $tmp3176;
    panda$core$Char8 $tmp3181;
    panda$core$UInt8 $tmp3182;
    panda$core$String* $tmp3183;
    panda$core$String* $tmp3184;
    panda$core$String* $tmp3189;
    panda$core$String* $tmp3190;
    panda$core$Int64 $tmp3196;
    panda$core$UInt64 value3198;
    panda$core$String* $tmp3200;
    panda$core$String* $tmp3201;
    panda$core$Int64 $tmp3205;
    org$pandalanguage$pandac$IRNode* value3207 = NULL;
    panda$core$String* $tmp3209;
    panda$core$String* $tmp3210;
    panda$core$String* $tmp3211;
    panda$core$Int64 $tmp3218;
    org$pandalanguage$pandac$IRNode* value3220 = NULL;
    panda$core$String* $tmp3222;
    panda$core$String* $tmp3223;
    panda$core$String* $tmp3224;
    panda$core$Int64 $tmp3231;
    panda$core$String* label3233 = NULL;
    panda$collections$ImmutableArray* statements3235 = NULL;
    panda$core$MutableString* result3240 = NULL;
    panda$core$MutableString* $tmp3241;
    panda$core$MutableString* $tmp3242;
    panda$core$String* $tmp3244;
    panda$core$String* $tmp3245;
    panda$collections$Iterator* Iter$786$173253 = NULL;
    panda$collections$Iterator* $tmp3254;
    panda$collections$Iterator* $tmp3255;
    org$pandalanguage$pandac$IRNode* s3271 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3272;
    panda$core$Object* $tmp3273;
    panda$core$String* $tmp3278;
    panda$core$Char8 $tmp3283;
    panda$core$UInt8 $tmp3284;
    panda$core$String* $tmp3285;
    panda$core$String* $tmp3286;
    panda$core$Int64 $tmp3292;
    org$pandalanguage$pandac$IRNode* value3294 = NULL;
    panda$collections$ImmutableArray* whens3296 = NULL;
    panda$collections$ImmutableArray* other3298 = NULL;
    panda$core$MutableString* result3303 = NULL;
    panda$core$MutableString* $tmp3304;
    panda$core$MutableString* $tmp3305;
    panda$core$String* $tmp3307;
    panda$core$String* $tmp3308;
    panda$collections$Iterator* Iter$793$173316 = NULL;
    panda$collections$Iterator* $tmp3317;
    panda$collections$Iterator* $tmp3318;
    org$pandalanguage$pandac$IRNode* w3334 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3335;
    panda$core$Object* $tmp3336;
    panda$core$String* $tmp3341;
    panda$collections$Iterator* Iter$798$213350 = NULL;
    panda$collections$Iterator* $tmp3351;
    panda$collections$Iterator* $tmp3352;
    org$pandalanguage$pandac$IRNode* s3368 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3369;
    panda$core$Object* $tmp3370;
    panda$core$String* $tmp3375;
    panda$core$Char8 $tmp3380;
    panda$core$UInt8 $tmp3381;
    panda$core$String* $tmp3382;
    panda$core$String* $tmp3383;
    panda$core$Int64 $tmp3389;
    org$pandalanguage$pandac$IRNode* target3391 = NULL;
    org$pandalanguage$pandac$MethodRef* m3393 = NULL;
    panda$core$String* $tmp3395;
    panda$core$String* $tmp3396;
    panda$core$String* $tmp3397;
    panda$core$String* $tmp3398;
    panda$core$String* $tmp3399;
    panda$core$String* $tmp3409;
    panda$core$Int64 $tmp3412;
    panda$core$UInt64 value3414;
    panda$core$String* $tmp3416;
    panda$core$String* $tmp3417;
    panda$core$Object* $tmp3419;
    panda$core$Int64 $tmp3424;
    panda$core$String* $tmp3426;
    panda$core$Int64 $tmp3430;
    org$pandalanguage$pandac$parser$Token$Kind op3432;
    org$pandalanguage$pandac$IRNode* base3434 = NULL;
    panda$core$String* $tmp3436;
    panda$core$String* $tmp3437;
    panda$core$String* $tmp3438;
    panda$core$String* $tmp3439;
    panda$core$String* $tmp3440;
    panda$core$Int64 $tmp3449;
    panda$core$String* label3451 = NULL;
    org$pandalanguage$pandac$IRNode* target3453 = NULL;
    org$pandalanguage$pandac$IRNode* list3455 = NULL;
    panda$collections$ImmutableArray* statements3457 = NULL;
    panda$core$MutableString* result3462 = NULL;
    panda$core$MutableString* $tmp3463;
    panda$core$MutableString* $tmp3464;
    panda$core$String* $tmp3466;
    panda$core$String* $tmp3467;
    panda$core$String* $tmp3471;
    panda$core$String* $tmp3472;
    panda$core$String* $tmp3473;
    panda$core$String* $tmp3474;
    panda$collections$Iterator* Iter$821$173485 = NULL;
    panda$collections$Iterator* $tmp3486;
    panda$collections$Iterator* $tmp3487;
    org$pandalanguage$pandac$IRNode* s3503 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3504;
    panda$core$Object* $tmp3505;
    panda$core$String* $tmp3510;
    panda$core$Char8 $tmp3515;
    panda$core$UInt8 $tmp3516;
    panda$core$String* $tmp3517;
    panda$core$String* $tmp3518;
    panda$core$Int64 $tmp3524;
    panda$core$Real64 value3526;
    panda$core$String* $tmp3528;
    panda$core$String* $tmp3529;
    panda$core$Int64 $tmp3533;
    org$pandalanguage$pandac$IRNode* value3535 = NULL;
    panda$core$String* $tmp3537;
    panda$core$String* $tmp3538;
    panda$core$String* $tmp3539;
    panda$core$String* $tmp3546;
    panda$core$Int64 $tmp3550;
    org$pandalanguage$pandac$Type* type3552 = NULL;
    panda$core$Int64 id3554;
    panda$core$String* $tmp3556;
    panda$core$String* $tmp3557;
    panda$core$String* $tmp3558;
    panda$core$Object* $tmp3560;
    panda$core$Int64 $tmp3567;
    org$pandalanguage$pandac$IRNode* base3569 = NULL;
    panda$core$Int64 id3571;
    panda$core$String* $tmp3573;
    panda$core$String* $tmp3574;
    panda$core$String* $tmp3575;
    panda$core$String* $tmp3576;
    panda$core$String* $tmp3577;
    panda$core$Object* $tmp3579;
    panda$core$Int64 $tmp3589;
    panda$core$String* $tmp3591;
    panda$core$Int64 $tmp3595;
    panda$core$String* $tmp3597;
    panda$core$Int64 $tmp3601;
    panda$core$String* str3603 = NULL;
    panda$core$String* $tmp3605;
    panda$core$String* $tmp3606;
    panda$core$Int64 $tmp3611;
    panda$core$String* $tmp3613;
    panda$core$Int64 $tmp3617;
    org$pandalanguage$pandac$IRNode* test3619 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue3621 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse3623 = NULL;
    panda$core$String* $tmp3625;
    panda$core$String* $tmp3626;
    panda$core$String* $tmp3627;
    panda$core$String* $tmp3628;
    panda$core$String* $tmp3629;
    panda$core$String* $tmp3630;
    panda$core$String* $tmp3631;
    panda$core$Int64 $tmp3644;
    org$pandalanguage$pandac$Type* type3646 = NULL;
    panda$core$String* $tmp3648;
    panda$core$String* $tmp3649;
    panda$core$Int64 $tmp3653;
    panda$core$String* name3655 = NULL;
    panda$core$String* $tmp3657;
    panda$core$Int64 $tmp3660;
    org$pandalanguage$pandac$IRNode* base3662 = NULL;
    panda$collections$ImmutableArray* args3664 = NULL;
    panda$core$String* $tmp3666;
    panda$core$String* $tmp3667;
    panda$core$String* $tmp3668;
    panda$core$String* $tmp3669;
    panda$core$String* $tmp3670;
    panda$core$String* $tmp3675;
    panda$core$Int64 $tmp3685;
    panda$collections$ImmutableArray* params3687 = NULL;
    org$pandalanguage$pandac$ASTNode* body3689 = NULL;
    panda$core$String* $tmp3691;
    panda$core$String* $tmp3692;
    panda$core$String* $tmp3693;
    panda$core$String* $tmp3694;
    panda$core$String* $tmp3695;
    panda$core$String* $tmp3697;
    panda$core$Int64 $tmp3710;
    org$pandalanguage$pandac$IRNode* target3712 = NULL;
    panda$collections$ImmutableArray* methods3714 = NULL;
    panda$collections$ImmutableArray* args3716 = NULL;
    panda$core$String* $tmp3718;
    panda$core$String* $tmp3719;
    panda$core$String* $tmp3720;
    panda$core$String* $tmp3721;
    panda$core$String* $tmp3722;
    panda$core$String* $tmp3723;
    panda$core$String* $tmp3724;
    panda$core$Object* $tmp3729;
    panda$core$Int64 $tmp3730;
    panda$core$String* $tmp3735;
    panda$core$String* $tmp3745;
    panda$core$String* $tmp3746;
    panda$core$String* $tmp3747;
    panda$core$String* $tmp3748;
    panda$core$String* $tmp3749;
    panda$core$Object* $tmp3751;
    panda$core$Int64 $tmp3752;
    panda$core$String* $tmp3757;
    panda$core$Int64 $tmp3767;
    org$pandalanguage$pandac$IRNode* target3769 = NULL;
    panda$collections$ImmutableArray* methods3771 = NULL;
    panda$core$String* $tmp3773;
    panda$core$String* $tmp3774;
    panda$core$String* $tmp3775;
    panda$core$String* $tmp3776;
    panda$core$String* $tmp3777;
    panda$core$Object* $tmp3782;
    panda$core$Int64 $tmp3783;
    panda$core$String* $tmp3790;
    panda$core$String* $tmp3791;
    panda$core$String* $tmp3792;
    panda$core$Object* $tmp3793;
    panda$core$Int64 $tmp3794;
    panda$core$Int64 $tmp3801;
    org$pandalanguage$pandac$IRNode* start3803 = NULL;
    org$pandalanguage$pandac$IRNode* end3805 = NULL;
    panda$core$Bit inclusive3807;
    org$pandalanguage$pandac$IRNode* step3809 = NULL;
    panda$core$MutableString* result3814 = NULL;
    panda$core$MutableString* $tmp3815;
    panda$core$MutableString* $tmp3816;
    panda$core$String* $tmp3820;
    panda$core$String* $tmp3821;
    panda$core$String* $tmp3826;
    panda$core$String* $tmp3827;
    panda$core$Int64 $tmp3833;
    org$pandalanguage$pandac$Variable$Kind kind3835;
    panda$collections$ImmutableArray* decls3837 = NULL;
    panda$core$MutableString* result3842 = NULL;
    panda$core$MutableString* $tmp3843;
    panda$core$MutableString* $tmp3844;
    org$pandalanguage$pandac$Variable$Kind $match$889_173846;
    panda$core$Int64 $tmp3847;
    panda$core$Int64 $tmp3850;
    panda$core$Int64 $tmp3853;
    panda$core$Int64 $tmp3856;
    panda$core$String* $tmp3859;
    panda$core$String* $tmp3864;
    panda$core$String* $tmp3865;
    panda$core$Int64 $tmp3871;
    panda$core$String* name3873 = NULL;
    panda$core$String* $tmp3875;
    panda$core$Int64 $tmp3878;
    org$pandalanguage$pandac$Variable* variable3880 = NULL;
    panda$core$String* $tmp3882;
    panda$core$String* $tmp3883;
    panda$core$Int64 $tmp3888;
    panda$collections$ImmutableArray* tests3890 = NULL;
    panda$collections$ImmutableArray* statements3892 = NULL;
    panda$core$String* $tmp3894;
    panda$core$String* $tmp3895;
    panda$core$String* $tmp3896;
    panda$core$String* $tmp3897;
    panda$core$String* $tmp3898;
    panda$core$String* $tmp3900;
    panda$core$String* $tmp3908;
    panda$core$Int64 $tmp3919;
    panda$core$String* label3921 = NULL;
    org$pandalanguage$pandac$IRNode* test3923 = NULL;
    panda$collections$ImmutableArray* statements3925 = NULL;
    panda$core$MutableString* result3930 = NULL;
    panda$core$MutableString* $tmp3931;
    panda$core$MutableString* $tmp3932;
    panda$core$String* $tmp3934;
    panda$core$String* $tmp3935;
    panda$core$String* $tmp3939;
    panda$core$String* $tmp3940;
    panda$collections$Iterator* Iter$909$173948 = NULL;
    panda$collections$Iterator* $tmp3949;
    panda$collections$Iterator* $tmp3950;
    org$pandalanguage$pandac$IRNode* s3966 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3967;
    panda$core$Object* $tmp3968;
    panda$core$String* $tmp3973;
    panda$core$Char8 $tmp3978;
    panda$core$UInt8 $tmp3979;
    panda$core$String* $tmp3980;
    panda$core$String* $tmp3981;
    panda$core$Bit $tmp3987;
    int $tmp2562;
    {
        $tmp2564 = self;
        $match$682_92563 = $tmp2564;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2564));
        panda$core$Int64$init$builtin_int64(&$tmp2565, 0);
        panda$core$Bit $tmp2566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2565);
        if ($tmp2566.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2568 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            test2567 = *$tmp2568;
            org$pandalanguage$pandac$IRNode** $tmp2570 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            msg2569 = *$tmp2570;
            if (((panda$core$Bit) { msg2569 != NULL }).value) {
            {
                panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2577, ((panda$core$Object*) test2567));
                $tmp2576 = $tmp2578;
                panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2579);
                $tmp2575 = $tmp2580;
                panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2575, ((panda$core$Object*) msg2569));
                $tmp2574 = $tmp2581;
                panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2574, &$s2582);
                $tmp2573 = $tmp2583;
                $tmp2572 = $tmp2573;
                $returnValue2571 = $tmp2572;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2572));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2573));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2574));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2575));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2576));
                $tmp2562 = 0;
                goto $l2560;
                $l2584:;
                return $returnValue2571;
            }
            }
            panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2589, ((panda$core$Object*) test2567));
            $tmp2588 = $tmp2590;
            panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2591);
            $tmp2587 = $tmp2592;
            $tmp2586 = $tmp2587;
            $returnValue2571 = $tmp2586;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2586));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
            $tmp2562 = 1;
            goto $l2560;
            $l2593:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2595, 1);
        panda$core$Bit $tmp2596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2595);
        if ($tmp2596.value) {
        {
            $tmp2597 = &$s2598;
            $returnValue2571 = $tmp2597;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2597));
            $tmp2562 = 2;
            goto $l2560;
            $l2599:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2601, 2);
        panda$core$Bit $tmp2602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2601);
        if ($tmp2602.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2604 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            left2603 = *$tmp2604;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2606 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$682_92563->$data + 32));
            op2605 = *$tmp2606;
            org$pandalanguage$pandac$IRNode** $tmp2608 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 40));
            right2607 = *$tmp2608;
            panda$core$String* $tmp2617 = (($fn2616) left2603->$class->vtable[0])(left2603);
            $tmp2615 = $tmp2617;
            panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2618);
            $tmp2614 = $tmp2619;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2621;
            $tmp2621 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2621->value = op2605;
            $tmp2620 = ((panda$core$Object*) $tmp2621);
            panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2614, $tmp2620);
            $tmp2613 = $tmp2622;
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2623);
            $tmp2612 = $tmp2624;
            panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2612, ((panda$core$Object*) right2607));
            $tmp2611 = $tmp2625;
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2626);
            $tmp2610 = $tmp2627;
            $tmp2609 = $tmp2610;
            $returnValue2571 = $tmp2609;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2609));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2610));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2613));
            panda$core$Panda$unref$panda$core$Object($tmp2620);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2615));
            $tmp2562 = 3;
            goto $l2560;
            $l2628:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2630, 3);
        panda$core$Bit $tmp2631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2630);
        if ($tmp2631.value) {
        {
            panda$core$Bit* $tmp2633 = ((panda$core$Bit*) ((char*) $match$682_92563->$data + 24));
            bit2632 = *$tmp2633;
            panda$core$String* $tmp2636 = panda$core$Bit$convert$R$panda$core$String(bit2632);
            $tmp2635 = $tmp2636;
            $tmp2634 = $tmp2635;
            $returnValue2571 = $tmp2634;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2634));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2635));
            $tmp2562 = 4;
            goto $l2560;
            $l2637:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2639, 4);
        panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2639);
        if ($tmp2640.value) {
        {
            panda$collections$ImmutableArray** $tmp2642 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 16));
            statements2641 = *$tmp2642;
            int $tmp2645;
            {
                panda$core$MutableString* $tmp2649 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp2649, &$s2650);
                $tmp2648 = $tmp2649;
                $tmp2647 = $tmp2648;
                result2646 = $tmp2647;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2647));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2648));
                {
                    int $tmp2653;
                    {
                        ITable* $tmp2657 = ((panda$collections$Iterable*) statements2641)->$class->itable;
                        while ($tmp2657->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2657 = $tmp2657->next;
                        }
                        $fn2659 $tmp2658 = $tmp2657->methods[0];
                        panda$collections$Iterator* $tmp2660 = $tmp2658(((panda$collections$Iterable*) statements2641));
                        $tmp2656 = $tmp2660;
                        $tmp2655 = $tmp2656;
                        Iter$696$172654 = $tmp2655;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2655));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2656));
                        $l2661:;
                        ITable* $tmp2664 = Iter$696$172654->$class->itable;
                        while ($tmp2664->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2664 = $tmp2664->next;
                        }
                        $fn2666 $tmp2665 = $tmp2664->methods[0];
                        panda$core$Bit $tmp2667 = $tmp2665(Iter$696$172654);
                        panda$core$Bit $tmp2668 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2667);
                        bool $tmp2663 = $tmp2668.value;
                        if (!$tmp2663) goto $l2662;
                        {
                            int $tmp2671;
                            {
                                ITable* $tmp2675 = Iter$696$172654->$class->itable;
                                while ($tmp2675->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2675 = $tmp2675->next;
                                }
                                $fn2677 $tmp2676 = $tmp2675->methods[1];
                                panda$core$Object* $tmp2678 = $tmp2676(Iter$696$172654);
                                $tmp2674 = $tmp2678;
                                $tmp2673 = ((org$pandalanguage$pandac$IRNode*) $tmp2674);
                                s2672 = $tmp2673;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2673));
                                panda$core$Panda$unref$panda$core$Object($tmp2674);
                                panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2672), &$s2680);
                                $tmp2679 = $tmp2681;
                                panda$core$MutableString$append$panda$core$String(result2646, $tmp2679);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2679));
                            }
                            $tmp2671 = -1;
                            goto $l2669;
                            $l2669:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2672));
                            s2672 = NULL;
                            switch ($tmp2671) {
                                case -1: goto $l2682;
                            }
                            $l2682:;
                        }
                        goto $l2661;
                        $l2662:;
                    }
                    $tmp2653 = -1;
                    goto $l2651;
                    $l2651:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$696$172654));
                    Iter$696$172654 = NULL;
                    switch ($tmp2653) {
                        case -1: goto $l2683;
                    }
                    $l2683:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2685, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2684, $tmp2685);
                panda$core$MutableString$append$panda$core$Char8(result2646, $tmp2684);
                panda$core$String* $tmp2688 = panda$core$MutableString$finish$R$panda$core$String(result2646);
                $tmp2687 = $tmp2688;
                $tmp2686 = $tmp2687;
                $returnValue2571 = $tmp2686;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2687));
                $tmp2645 = 0;
                goto $l2643;
                $l2689:;
                $tmp2562 = 5;
                goto $l2560;
                $l2690:;
                return $returnValue2571;
            }
            $l2643:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2646));
            result2646 = NULL;
            switch ($tmp2645) {
                case 0: goto $l2689;
            }
            $l2692:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2693, 5);
        panda$core$Bit $tmp2694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2693);
        if ($tmp2694.value) {
        {
            panda$collections$ImmutableArray** $tmp2696 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 16));
            statements2695 = *$tmp2696;
            panda$collections$ImmutableArray** $tmp2698 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 24));
            finally2697 = *$tmp2698;
            int $tmp2701;
            {
                panda$core$MutableString* $tmp2705 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp2705, &$s2706);
                $tmp2704 = $tmp2705;
                $tmp2703 = $tmp2704;
                result2702 = $tmp2703;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2704));
                {
                    int $tmp2709;
                    {
                        ITable* $tmp2713 = ((panda$collections$Iterable*) statements2695)->$class->itable;
                        while ($tmp2713->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2713 = $tmp2713->next;
                        }
                        $fn2715 $tmp2714 = $tmp2713->methods[0];
                        panda$collections$Iterator* $tmp2716 = $tmp2714(((panda$collections$Iterable*) statements2695));
                        $tmp2712 = $tmp2716;
                        $tmp2711 = $tmp2712;
                        Iter$703$172710 = $tmp2711;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2711));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2712));
                        $l2717:;
                        ITable* $tmp2720 = Iter$703$172710->$class->itable;
                        while ($tmp2720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2720 = $tmp2720->next;
                        }
                        $fn2722 $tmp2721 = $tmp2720->methods[0];
                        panda$core$Bit $tmp2723 = $tmp2721(Iter$703$172710);
                        panda$core$Bit $tmp2724 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2723);
                        bool $tmp2719 = $tmp2724.value;
                        if (!$tmp2719) goto $l2718;
                        {
                            int $tmp2727;
                            {
                                ITable* $tmp2731 = Iter$703$172710->$class->itable;
                                while ($tmp2731->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2731 = $tmp2731->next;
                                }
                                $fn2733 $tmp2732 = $tmp2731->methods[1];
                                panda$core$Object* $tmp2734 = $tmp2732(Iter$703$172710);
                                $tmp2730 = $tmp2734;
                                $tmp2729 = ((org$pandalanguage$pandac$IRNode*) $tmp2730);
                                s2728 = $tmp2729;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2729));
                                panda$core$Panda$unref$panda$core$Object($tmp2730);
                                panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2728), &$s2736);
                                $tmp2735 = $tmp2737;
                                panda$core$MutableString$append$panda$core$String(result2702, $tmp2735);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2735));
                            }
                            $tmp2727 = -1;
                            goto $l2725;
                            $l2725:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2728));
                            s2728 = NULL;
                            switch ($tmp2727) {
                                case -1: goto $l2738;
                            }
                            $l2738:;
                        }
                        goto $l2717;
                        $l2718:;
                    }
                    $tmp2709 = -1;
                    goto $l2707;
                    $l2707:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$703$172710));
                    Iter$703$172710 = NULL;
                    switch ($tmp2709) {
                        case -1: goto $l2739;
                    }
                    $l2739:;
                }
                panda$core$MutableString$append$panda$core$String(result2702, &$s2740);
                {
                    int $tmp2743;
                    {
                        ITable* $tmp2747 = ((panda$collections$Iterable*) finally2697)->$class->itable;
                        while ($tmp2747->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2747 = $tmp2747->next;
                        }
                        $fn2749 $tmp2748 = $tmp2747->methods[0];
                        panda$collections$Iterator* $tmp2750 = $tmp2748(((panda$collections$Iterable*) finally2697));
                        $tmp2746 = $tmp2750;
                        $tmp2745 = $tmp2746;
                        Iter$707$172744 = $tmp2745;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2745));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2746));
                        $l2751:;
                        ITable* $tmp2754 = Iter$707$172744->$class->itable;
                        while ($tmp2754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2754 = $tmp2754->next;
                        }
                        $fn2756 $tmp2755 = $tmp2754->methods[0];
                        panda$core$Bit $tmp2757 = $tmp2755(Iter$707$172744);
                        panda$core$Bit $tmp2758 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2757);
                        bool $tmp2753 = $tmp2758.value;
                        if (!$tmp2753) goto $l2752;
                        {
                            int $tmp2761;
                            {
                                ITable* $tmp2765 = Iter$707$172744->$class->itable;
                                while ($tmp2765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2765 = $tmp2765->next;
                                }
                                $fn2767 $tmp2766 = $tmp2765->methods[1];
                                panda$core$Object* $tmp2768 = $tmp2766(Iter$707$172744);
                                $tmp2764 = $tmp2768;
                                $tmp2763 = ((org$pandalanguage$pandac$IRNode*) $tmp2764);
                                s2762 = $tmp2763;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2763));
                                panda$core$Panda$unref$panda$core$Object($tmp2764);
                                panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2762), &$s2770);
                                $tmp2769 = $tmp2771;
                                panda$core$MutableString$append$panda$core$String(result2702, $tmp2769);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2769));
                            }
                            $tmp2761 = -1;
                            goto $l2759;
                            $l2759:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2762));
                            s2762 = NULL;
                            switch ($tmp2761) {
                                case -1: goto $l2772;
                            }
                            $l2772:;
                        }
                        goto $l2751;
                        $l2752:;
                    }
                    $tmp2743 = -1;
                    goto $l2741;
                    $l2741:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$707$172744));
                    Iter$707$172744 = NULL;
                    switch ($tmp2743) {
                        case -1: goto $l2773;
                    }
                    $l2773:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2775, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2774, $tmp2775);
                panda$core$MutableString$append$panda$core$Char8(result2702, $tmp2774);
                panda$core$String* $tmp2778 = panda$core$MutableString$finish$R$panda$core$String(result2702);
                $tmp2777 = $tmp2778;
                $tmp2776 = $tmp2777;
                $returnValue2571 = $tmp2776;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2777));
                $tmp2701 = 0;
                goto $l2699;
                $l2779:;
                $tmp2562 = 6;
                goto $l2560;
                $l2780:;
                return $returnValue2571;
            }
            $l2699:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2702));
            result2702 = NULL;
            switch ($tmp2701) {
                case 0: goto $l2779;
            }
            $l2782:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2783, 6);
        panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2783);
        if ($tmp2784.value) {
        {
            panda$core$String** $tmp2786 = ((panda$core$String**) ((char*) $match$682_92563->$data + 16));
            label2785 = *$tmp2786;
            if (((panda$core$Bit) { label2785 != NULL }).value) {
            {
                panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2790, label2785);
                $tmp2789 = $tmp2791;
                panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2792);
                $tmp2788 = $tmp2793;
                $tmp2787 = $tmp2788;
                $returnValue2571 = $tmp2787;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2788));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2789));
                $tmp2562 = 7;
                goto $l2560;
                $l2794:;
                return $returnValue2571;
            }
            }
            $tmp2796 = &$s2797;
            $returnValue2571 = $tmp2796;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2796));
            $tmp2562 = 8;
            goto $l2560;
            $l2798:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2800, 7);
        panda$core$Bit $tmp2801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2800);
        if ($tmp2801.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp2803 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$682_92563->$data + 24));
            m2802 = *$tmp2803;
            panda$collections$ImmutableArray** $tmp2805 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 32));
            args2804 = *$tmp2805;
            panda$core$String* $tmp2811 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m2802->value)->name);
            $tmp2810 = $tmp2811;
            panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, &$s2812);
            $tmp2809 = $tmp2813;
            ITable* $tmp2815 = ((panda$collections$CollectionView*) args2804)->$class->itable;
            while ($tmp2815->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2815 = $tmp2815->next;
            }
            $fn2817 $tmp2816 = $tmp2815->methods[1];
            panda$core$String* $tmp2818 = $tmp2816(((panda$collections$CollectionView*) args2804));
            $tmp2814 = $tmp2818;
            panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, $tmp2814);
            $tmp2808 = $tmp2819;
            panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2820);
            $tmp2807 = $tmp2821;
            $tmp2806 = $tmp2807;
            $returnValue2571 = $tmp2806;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2806));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2807));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2814));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2809));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2810));
            $tmp2562 = 9;
            goto $l2560;
            $l2822:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2824, 8);
        panda$core$Bit $tmp2825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2824);
        if ($tmp2825.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2827 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            value2826 = *$tmp2827;
            org$pandalanguage$pandac$Type** $tmp2829 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92563->$data + 24));
            type2828 = *$tmp2829;
            panda$core$String* $tmp2836 = (($fn2835) value2826->$class->vtable[0])(value2826);
            $tmp2834 = $tmp2836;
            panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2837);
            $tmp2833 = $tmp2838;
            panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2833, ((panda$core$Object*) type2828));
            $tmp2832 = $tmp2839;
            panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2840);
            $tmp2831 = $tmp2841;
            $tmp2830 = $tmp2831;
            $returnValue2571 = $tmp2830;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2830));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2831));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2833));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2834));
            $tmp2562 = 10;
            goto $l2560;
            $l2842:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2844, 9);
        panda$core$Bit $tmp2845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2844);
        if ($tmp2845.value) {
        {
            org$pandalanguage$pandac$ChoiceCase** $tmp2847 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$682_92563->$data + 24));
            ce2846 = *$tmp2847;
            panda$core$String* $tmp2850 = org$pandalanguage$pandac$ChoiceCase$convert$R$panda$core$String(ce2846);
            $tmp2849 = $tmp2850;
            $tmp2848 = $tmp2849;
            $returnValue2571 = $tmp2848;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2848));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2849));
            $tmp2562 = 11;
            goto $l2560;
            $l2851:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2853, 10);
        panda$core$Bit $tmp2854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2853);
        if ($tmp2854.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2856 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            base2855 = *$tmp2856;
            org$pandalanguage$pandac$ChoiceCase** $tmp2858 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$682_92563->$data + 24));
            ce2857 = *$tmp2858;
            panda$core$Int64* $tmp2860 = ((panda$core$Int64*) ((char*) $match$682_92563->$data + 32));
            field2859 = *$tmp2860;
            panda$core$String* $tmp2869 = (($fn2868) base2855->$class->vtable[0])(base2855);
            $tmp2867 = $tmp2869;
            panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2870);
            $tmp2866 = $tmp2871;
            panda$core$String* $tmp2872 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2866, ((panda$core$Object*) ce2857));
            $tmp2865 = $tmp2872;
            panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, &$s2873);
            $tmp2864 = $tmp2874;
            panda$core$Int64$wrapper* $tmp2876;
            $tmp2876 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2876->value = field2859;
            $tmp2875 = ((panda$core$Object*) $tmp2876);
            panda$core$String* $tmp2877 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2864, $tmp2875);
            $tmp2863 = $tmp2877;
            panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, &$s2878);
            $tmp2862 = $tmp2879;
            $tmp2861 = $tmp2862;
            $returnValue2571 = $tmp2861;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2861));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2862));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2863));
            panda$core$Panda$unref$panda$core$Object($tmp2875);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2864));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2865));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2866));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2867));
            $tmp2562 = 12;
            goto $l2560;
            $l2880:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2882, 11);
        panda$core$Bit $tmp2883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2882);
        if ($tmp2883.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2885 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92563->$data + 16));
            type2884 = *$tmp2885;
            org$pandalanguage$pandac$IRNode** $tmp2887 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            call2886 = *$tmp2887;
            int $tmp2890;
            {
                $tmp2892 = call2886;
                $match$726_172891 = $tmp2892;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2892));
                panda$core$Int64$init$builtin_int64(&$tmp2893, 7);
                panda$core$Bit $tmp2894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_172891->$rawValue, $tmp2893);
                if ($tmp2894.value) {
                {
                    panda$collections$ImmutableArray** $tmp2896 = ((panda$collections$ImmutableArray**) ((char*) $match$726_172891->$data + 32));
                    args2895 = *$tmp2896;
                    panda$core$String* $tmp2902 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2884);
                    $tmp2901 = $tmp2902;
                    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, &$s2903);
                    $tmp2900 = $tmp2904;
                    ITable* $tmp2906 = ((panda$collections$CollectionView*) args2895)->$class->itable;
                    while ($tmp2906->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp2906 = $tmp2906->next;
                    }
                    $fn2908 $tmp2907 = $tmp2906->methods[1];
                    panda$core$String* $tmp2909 = $tmp2907(((panda$collections$CollectionView*) args2895));
                    $tmp2905 = $tmp2909;
                    panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, $tmp2905);
                    $tmp2899 = $tmp2910;
                    panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, &$s2911);
                    $tmp2898 = $tmp2912;
                    $tmp2897 = $tmp2898;
                    $returnValue2571 = $tmp2897;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2897));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2898));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2899));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2905));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2900));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2901));
                    $tmp2890 = 0;
                    goto $l2888;
                    $l2913:;
                    $tmp2562 = 13;
                    goto $l2560;
                    $l2914:;
                    return $returnValue2571;
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp2916, false);
                    if ($tmp2916.value) goto $l2917; else goto $l2918;
                    $l2918:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2919, (panda$core$Int64) { 730 });
                    abort();
                    $l2917:;
                }
                }
            }
            $tmp2890 = -1;
            goto $l2888;
            $l2888:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2892));
            switch ($tmp2890) {
                case 0: goto $l2913;
                case -1: goto $l2920;
            }
            $l2920:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2921, 12);
        panda$core$Bit $tmp2922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2921);
        if ($tmp2922.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2924 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92563->$data + 16));
            Type2923 = *$tmp2924;
            $tmp2925 = &$s2926;
            $returnValue2571 = $tmp2925;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2925));
            $tmp2562 = 14;
            goto $l2560;
            $l2927:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2929, 13);
        panda$core$Bit $tmp2930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2929);
        if ($tmp2930.value) {
        {
            panda$core$String** $tmp2932 = ((panda$core$String**) ((char*) $match$682_92563->$data + 16));
            label2931 = *$tmp2932;
            if (((panda$core$Bit) { label2931 != NULL }).value) {
            {
                panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2936, label2931);
                $tmp2935 = $tmp2937;
                panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2938);
                $tmp2934 = $tmp2939;
                $tmp2933 = $tmp2934;
                $returnValue2571 = $tmp2933;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2935));
                $tmp2562 = 15;
                goto $l2560;
                $l2940:;
                return $returnValue2571;
            }
            }
            $tmp2942 = &$s2943;
            $returnValue2571 = $tmp2942;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2942));
            $tmp2562 = 16;
            goto $l2560;
            $l2944:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2946, 14);
        panda$core$Bit $tmp2947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2946);
        if ($tmp2947.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2949 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 0));
            target2948 = *$tmp2949;
            org$pandalanguage$pandac$IRNode** $tmp2951 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 8));
            value2950 = *$tmp2951;
            if (((panda$core$Bit) { value2950 != NULL }).value) {
            {
                panda$core$String* $tmp2960 = (($fn2959) target2948->$class->vtable[0])(target2948);
                $tmp2958 = $tmp2960;
                panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, &$s2961);
                $tmp2957 = $tmp2962;
                org$pandalanguage$pandac$Type* $tmp2965 = (($fn2964) target2948->$class->vtable[2])(target2948);
                $tmp2963 = $tmp2965;
                panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2957, ((panda$core$Object*) $tmp2963));
                $tmp2956 = $tmp2966;
                panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2967);
                $tmp2955 = $tmp2968;
                panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2955, ((panda$core$Object*) value2950));
                $tmp2954 = $tmp2969;
                panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2954, &$s2970);
                $tmp2953 = $tmp2971;
                $tmp2952 = $tmp2953;
                $returnValue2571 = $tmp2952;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2952));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2953));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2963));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2958));
                $tmp2562 = 17;
                goto $l2560;
                $l2972:;
                return $returnValue2571;
            }
            }
            panda$core$String* $tmp2980 = (($fn2979) target2948->$class->vtable[0])(target2948);
            $tmp2978 = $tmp2980;
            panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2981);
            $tmp2977 = $tmp2982;
            org$pandalanguage$pandac$Type* $tmp2985 = (($fn2984) target2948->$class->vtable[2])(target2948);
            $tmp2983 = $tmp2985;
            panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2977, ((panda$core$Object*) $tmp2983));
            $tmp2976 = $tmp2986;
            panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, &$s2987);
            $tmp2975 = $tmp2988;
            $tmp2974 = $tmp2975;
            $returnValue2571 = $tmp2974;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2974));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2975));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2976));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2983));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2977));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2978));
            $tmp2562 = 18;
            goto $l2560;
            $l2989:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2991, 15);
        panda$core$Bit $tmp2992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp2991);
        if ($tmp2992.value) {
        {
            panda$core$String** $tmp2994 = ((panda$core$String**) ((char*) $match$682_92563->$data + 16));
            label2993 = *$tmp2994;
            panda$collections$ImmutableArray** $tmp2996 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 24));
            statements2995 = *$tmp2996;
            org$pandalanguage$pandac$IRNode** $tmp2998 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 32));
            test2997 = *$tmp2998;
            int $tmp3001;
            {
                panda$core$MutableString* $tmp3005 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3005);
                $tmp3004 = $tmp3005;
                $tmp3003 = $tmp3004;
                result3002 = $tmp3003;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3004));
                if (((panda$core$Bit) { label2993 != NULL }).value) {
                {
                    panda$core$String* $tmp3008 = panda$core$String$convert$R$panda$core$String(label2993);
                    $tmp3007 = $tmp3008;
                    panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3007, &$s3009);
                    $tmp3006 = $tmp3010;
                    panda$core$MutableString$append$panda$core$String(result3002, $tmp3006);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3006));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3007));
                }
                }
                panda$core$MutableString$append$panda$core$String(result3002, &$s3011);
                {
                    int $tmp3014;
                    {
                        ITable* $tmp3018 = ((panda$collections$Iterable*) statements2995)->$class->itable;
                        while ($tmp3018->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3018 = $tmp3018->next;
                        }
                        $fn3020 $tmp3019 = $tmp3018->methods[0];
                        panda$collections$Iterator* $tmp3021 = $tmp3019(((panda$collections$Iterable*) statements2995));
                        $tmp3017 = $tmp3021;
                        $tmp3016 = $tmp3017;
                        Iter$750$173015 = $tmp3016;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3016));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3017));
                        $l3022:;
                        ITable* $tmp3025 = Iter$750$173015->$class->itable;
                        while ($tmp3025->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3025 = $tmp3025->next;
                        }
                        $fn3027 $tmp3026 = $tmp3025->methods[0];
                        panda$core$Bit $tmp3028 = $tmp3026(Iter$750$173015);
                        panda$core$Bit $tmp3029 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3028);
                        bool $tmp3024 = $tmp3029.value;
                        if (!$tmp3024) goto $l3023;
                        {
                            int $tmp3032;
                            {
                                ITable* $tmp3036 = Iter$750$173015->$class->itable;
                                while ($tmp3036->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3036 = $tmp3036->next;
                                }
                                $fn3038 $tmp3037 = $tmp3036->methods[1];
                                panda$core$Object* $tmp3039 = $tmp3037(Iter$750$173015);
                                $tmp3035 = $tmp3039;
                                $tmp3034 = ((org$pandalanguage$pandac$IRNode*) $tmp3035);
                                s3033 = $tmp3034;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3034));
                                panda$core$Panda$unref$panda$core$Object($tmp3035);
                                panda$core$String* $tmp3042 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3033), &$s3041);
                                $tmp3040 = $tmp3042;
                                panda$core$MutableString$append$panda$core$String(result3002, $tmp3040);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3040));
                            }
                            $tmp3032 = -1;
                            goto $l3030;
                            $l3030:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3033));
                            s3033 = NULL;
                            switch ($tmp3032) {
                                case -1: goto $l3043;
                            }
                            $l3043:;
                        }
                        goto $l3022;
                        $l3023:;
                    }
                    $tmp3014 = -1;
                    goto $l3012;
                    $l3012:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$750$173015));
                    Iter$750$173015 = NULL;
                    switch ($tmp3014) {
                        case -1: goto $l3044;
                    }
                    $l3044:;
                }
                panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3047, ((panda$core$Object*) test2997));
                $tmp3046 = $tmp3048;
                panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, &$s3049);
                $tmp3045 = $tmp3050;
                panda$core$MutableString$append$panda$core$String(result3002, $tmp3045);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3045));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3046));
                panda$core$String* $tmp3053 = panda$core$MutableString$finish$R$panda$core$String(result3002);
                $tmp3052 = $tmp3053;
                $tmp3051 = $tmp3052;
                $returnValue2571 = $tmp3051;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3051));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3052));
                $tmp3001 = 0;
                goto $l2999;
                $l3054:;
                $tmp2562 = 19;
                goto $l2560;
                $l3055:;
                return $returnValue2571;
            }
            $l2999:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3002));
            result3002 = NULL;
            switch ($tmp3001) {
                case 0: goto $l3054;
            }
            $l3057:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3058, 16);
        panda$core$Bit $tmp3059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3058);
        if ($tmp3059.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3061 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 0));
            m3060 = *$tmp3061;
            panda$collections$ImmutableArray** $tmp3063 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 8));
            args3062 = *$tmp3063;
            panda$core$String* $tmp3070 = (($fn3069) m3060->$class->vtable[0])(m3060);
            $tmp3068 = $tmp3070;
            panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3068, &$s3071);
            $tmp3067 = $tmp3072;
            ITable* $tmp3075 = ((panda$collections$CollectionView*) args3062)->$class->itable;
            while ($tmp3075->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3075 = $tmp3075->next;
            }
            $fn3077 $tmp3076 = $tmp3075->methods[2];
            panda$core$String* $tmp3078 = $tmp3076(((panda$collections$CollectionView*) args3062), &$s3074);
            $tmp3073 = $tmp3078;
            panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, $tmp3073);
            $tmp3066 = $tmp3079;
            panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, &$s3080);
            $tmp3065 = $tmp3081;
            $tmp3064 = $tmp3065;
            $returnValue2571 = $tmp3064;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3064));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3065));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3066));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3073));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3067));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3068));
            $tmp2562 = 20;
            goto $l2560;
            $l3082:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3084, 17);
        panda$core$Bit $tmp3085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3084);
        if ($tmp3085.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3087 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 0));
            expr3086 = *$tmp3087;
            org$pandalanguage$pandac$IRNode** $tmp3089 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 8));
            stmt3088 = *$tmp3089;
            panda$core$String* $tmp3096 = (($fn3095) expr3086->$class->vtable[0])(expr3086);
            $tmp3094 = $tmp3096;
            panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3097);
            $tmp3093 = $tmp3098;
            panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3093, ((panda$core$Object*) stmt3088));
            $tmp3092 = $tmp3099;
            panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3100);
            $tmp3091 = $tmp3101;
            $tmp3090 = $tmp3091;
            $returnValue2571 = $tmp3090;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3090));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3091));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3092));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3093));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3094));
            $tmp2562 = 21;
            goto $l2560;
            $l3102:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3104, 18);
        panda$core$Bit $tmp3105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3104);
        if ($tmp3105.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3107 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            base3106 = *$tmp3107;
            org$pandalanguage$pandac$FieldDecl** $tmp3109 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$682_92563->$data + 32));
            field3108 = *$tmp3109;
            if (((panda$core$Bit) { base3106 != NULL }).value) {
            {
                panda$core$String* $tmp3116 = (($fn3115) base3106->$class->vtable[0])(base3106);
                $tmp3114 = $tmp3116;
                panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, &$s3117);
                $tmp3113 = $tmp3118;
                panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, ((org$pandalanguage$pandac$Symbol*) field3108)->name);
                $tmp3112 = $tmp3119;
                panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3120);
                $tmp3111 = $tmp3121;
                $tmp3110 = $tmp3111;
                $returnValue2571 = $tmp3110;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3110));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3114));
                $tmp2562 = 22;
                goto $l2560;
                $l3122:;
                return $returnValue2571;
            }
            }
            $tmp3124 = ((org$pandalanguage$pandac$Symbol*) field3108)->name;
            $returnValue2571 = $tmp3124;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3124));
            $tmp2562 = 23;
            goto $l2560;
            $l3125:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3127, 19);
        panda$core$Bit $tmp3128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3127);
        if ($tmp3128.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3130 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            test3129 = *$tmp3130;
            panda$collections$ImmutableArray** $tmp3132 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 24));
            ifTrue3131 = *$tmp3132;
            org$pandalanguage$pandac$IRNode** $tmp3134 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 32));
            ifFalse3133 = *$tmp3134;
            int $tmp3137;
            {
                panda$core$MutableString* $tmp3141 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3144, ((panda$core$Object*) test3129));
                $tmp3143 = $tmp3145;
                panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3146);
                $tmp3142 = $tmp3147;
                panda$core$MutableString$init$panda$core$String($tmp3141, $tmp3142);
                $tmp3140 = $tmp3141;
                $tmp3139 = $tmp3140;
                result3138 = $tmp3139;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3140));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3142));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3143));
                {
                    int $tmp3150;
                    {
                        ITable* $tmp3154 = ((panda$collections$Iterable*) ifTrue3131)->$class->itable;
                        while ($tmp3154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3154 = $tmp3154->next;
                        }
                        $fn3156 $tmp3155 = $tmp3154->methods[0];
                        panda$collections$Iterator* $tmp3157 = $tmp3155(((panda$collections$Iterable*) ifTrue3131));
                        $tmp3153 = $tmp3157;
                        $tmp3152 = $tmp3153;
                        Iter$766$173151 = $tmp3152;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3152));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3153));
                        $l3158:;
                        ITable* $tmp3161 = Iter$766$173151->$class->itable;
                        while ($tmp3161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3161 = $tmp3161->next;
                        }
                        $fn3163 $tmp3162 = $tmp3161->methods[0];
                        panda$core$Bit $tmp3164 = $tmp3162(Iter$766$173151);
                        panda$core$Bit $tmp3165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3164);
                        bool $tmp3160 = $tmp3165.value;
                        if (!$tmp3160) goto $l3159;
                        {
                            int $tmp3168;
                            {
                                ITable* $tmp3172 = Iter$766$173151->$class->itable;
                                while ($tmp3172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3172 = $tmp3172->next;
                                }
                                $fn3174 $tmp3173 = $tmp3172->methods[1];
                                panda$core$Object* $tmp3175 = $tmp3173(Iter$766$173151);
                                $tmp3171 = $tmp3175;
                                $tmp3170 = ((org$pandalanguage$pandac$IRNode*) $tmp3171);
                                s3169 = $tmp3170;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3170));
                                panda$core$Panda$unref$panda$core$Object($tmp3171);
                                panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3169), &$s3177);
                                $tmp3176 = $tmp3178;
                                panda$core$MutableString$append$panda$core$String(result3138, $tmp3176);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3176));
                            }
                            $tmp3168 = -1;
                            goto $l3166;
                            $l3166:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3169));
                            s3169 = NULL;
                            switch ($tmp3168) {
                                case -1: goto $l3179;
                            }
                            $l3179:;
                        }
                        goto $l3158;
                        $l3159:;
                    }
                    $tmp3150 = -1;
                    goto $l3148;
                    $l3148:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$766$173151));
                    Iter$766$173151 = NULL;
                    switch ($tmp3150) {
                        case -1: goto $l3180;
                    }
                    $l3180:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3182, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3181, $tmp3182);
                panda$core$MutableString$append$panda$core$Char8(result3138, $tmp3181);
                if (((panda$core$Bit) { ifFalse3133 != NULL }).value) {
                {
                    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3185, ((panda$core$Object*) ifFalse3133));
                    $tmp3184 = $tmp3186;
                    panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, &$s3187);
                    $tmp3183 = $tmp3188;
                    panda$core$MutableString$append$panda$core$String(result3138, $tmp3183);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3183));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3184));
                }
                }
                panda$core$String* $tmp3191 = panda$core$MutableString$finish$R$panda$core$String(result3138);
                $tmp3190 = $tmp3191;
                $tmp3189 = $tmp3190;
                $returnValue2571 = $tmp3189;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3189));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3190));
                $tmp3137 = 0;
                goto $l3135;
                $l3192:;
                $tmp2562 = 24;
                goto $l2560;
                $l3193:;
                return $returnValue2571;
            }
            $l3135:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3138));
            result3138 = NULL;
            switch ($tmp3137) {
                case 0: goto $l3192;
            }
            $l3195:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3196, 20);
        panda$core$Bit $tmp3197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3196);
        if ($tmp3197.value) {
        {
            panda$core$UInt64* $tmp3199 = ((panda$core$UInt64*) ((char*) $match$682_92563->$data + 24));
            value3198 = *$tmp3199;
            panda$core$String* $tmp3202 = panda$core$UInt64$convert$R$panda$core$String(value3198);
            $tmp3201 = $tmp3202;
            $tmp3200 = $tmp3201;
            $returnValue2571 = $tmp3200;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3200));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3201));
            $tmp2562 = 25;
            goto $l2560;
            $l3203:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3205, 21);
        panda$core$Bit $tmp3206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3205);
        if ($tmp3206.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3208 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            value3207 = *$tmp3208;
            panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3212, ((panda$core$Object*) value3207));
            $tmp3211 = $tmp3213;
            panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, &$s3214);
            $tmp3210 = $tmp3215;
            $tmp3209 = $tmp3210;
            $returnValue2571 = $tmp3209;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3209));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3211));
            $tmp2562 = 26;
            goto $l2560;
            $l3216:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3218, 22);
        panda$core$Bit $tmp3219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3218);
        if ($tmp3219.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3221 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            value3220 = *$tmp3221;
            panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3225, ((panda$core$Object*) value3220));
            $tmp3224 = $tmp3226;
            panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, &$s3227);
            $tmp3223 = $tmp3228;
            $tmp3222 = $tmp3223;
            $returnValue2571 = $tmp3222;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3222));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3223));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3224));
            $tmp2562 = 27;
            goto $l2560;
            $l3229:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3231, 23);
        panda$core$Bit $tmp3232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3231);
        if ($tmp3232.value) {
        {
            panda$core$String** $tmp3234 = ((panda$core$String**) ((char*) $match$682_92563->$data + 16));
            label3233 = *$tmp3234;
            panda$collections$ImmutableArray** $tmp3236 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 24));
            statements3235 = *$tmp3236;
            int $tmp3239;
            {
                panda$core$MutableString* $tmp3243 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3243);
                $tmp3242 = $tmp3243;
                $tmp3241 = $tmp3242;
                result3240 = $tmp3241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3242));
                if (((panda$core$Bit) { label3233 != NULL }).value) {
                {
                    panda$core$String* $tmp3246 = panda$core$String$convert$R$panda$core$String(label3233);
                    $tmp3245 = $tmp3246;
                    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, &$s3247);
                    $tmp3244 = $tmp3248;
                    panda$core$MutableString$append$panda$core$String(result3240, $tmp3244);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3244));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3245));
                }
                }
                panda$core$MutableString$append$panda$core$String(result3240, &$s3249);
                {
                    int $tmp3252;
                    {
                        ITable* $tmp3256 = ((panda$collections$Iterable*) statements3235)->$class->itable;
                        while ($tmp3256->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3256 = $tmp3256->next;
                        }
                        $fn3258 $tmp3257 = $tmp3256->methods[0];
                        panda$collections$Iterator* $tmp3259 = $tmp3257(((panda$collections$Iterable*) statements3235));
                        $tmp3255 = $tmp3259;
                        $tmp3254 = $tmp3255;
                        Iter$786$173253 = $tmp3254;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3254));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3255));
                        $l3260:;
                        ITable* $tmp3263 = Iter$786$173253->$class->itable;
                        while ($tmp3263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3263 = $tmp3263->next;
                        }
                        $fn3265 $tmp3264 = $tmp3263->methods[0];
                        panda$core$Bit $tmp3266 = $tmp3264(Iter$786$173253);
                        panda$core$Bit $tmp3267 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3266);
                        bool $tmp3262 = $tmp3267.value;
                        if (!$tmp3262) goto $l3261;
                        {
                            int $tmp3270;
                            {
                                ITable* $tmp3274 = Iter$786$173253->$class->itable;
                                while ($tmp3274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3274 = $tmp3274->next;
                                }
                                $fn3276 $tmp3275 = $tmp3274->methods[1];
                                panda$core$Object* $tmp3277 = $tmp3275(Iter$786$173253);
                                $tmp3273 = $tmp3277;
                                $tmp3272 = ((org$pandalanguage$pandac$IRNode*) $tmp3273);
                                s3271 = $tmp3272;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3272));
                                panda$core$Panda$unref$panda$core$Object($tmp3273);
                                panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3271), &$s3279);
                                $tmp3278 = $tmp3280;
                                panda$core$MutableString$append$panda$core$String(result3240, $tmp3278);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3278));
                            }
                            $tmp3270 = -1;
                            goto $l3268;
                            $l3268:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3271));
                            s3271 = NULL;
                            switch ($tmp3270) {
                                case -1: goto $l3281;
                            }
                            $l3281:;
                        }
                        goto $l3260;
                        $l3261:;
                    }
                    $tmp3252 = -1;
                    goto $l3250;
                    $l3250:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$786$173253));
                    Iter$786$173253 = NULL;
                    switch ($tmp3252) {
                        case -1: goto $l3282;
                    }
                    $l3282:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3284, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3283, $tmp3284);
                panda$core$MutableString$append$panda$core$Char8(result3240, $tmp3283);
                panda$core$String* $tmp3287 = panda$core$MutableString$finish$R$panda$core$String(result3240);
                $tmp3286 = $tmp3287;
                $tmp3285 = $tmp3286;
                $returnValue2571 = $tmp3285;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3285));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3286));
                $tmp3239 = 0;
                goto $l3237;
                $l3288:;
                $tmp2562 = 28;
                goto $l2560;
                $l3289:;
                return $returnValue2571;
            }
            $l3237:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3240));
            result3240 = NULL;
            switch ($tmp3239) {
                case 0: goto $l3288;
            }
            $l3291:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3292, 24);
        panda$core$Bit $tmp3293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3292);
        if ($tmp3293.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3295 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            value3294 = *$tmp3295;
            panda$collections$ImmutableArray** $tmp3297 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 24));
            whens3296 = *$tmp3297;
            panda$collections$ImmutableArray** $tmp3299 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 32));
            other3298 = *$tmp3299;
            int $tmp3302;
            {
                panda$core$MutableString* $tmp3306 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3309, ((panda$core$Object*) value3294));
                $tmp3308 = $tmp3310;
                panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3311);
                $tmp3307 = $tmp3312;
                panda$core$MutableString$init$panda$core$String($tmp3306, $tmp3307);
                $tmp3305 = $tmp3306;
                $tmp3304 = $tmp3305;
                result3303 = $tmp3304;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3307));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3308));
                {
                    int $tmp3315;
                    {
                        ITable* $tmp3319 = ((panda$collections$Iterable*) whens3296)->$class->itable;
                        while ($tmp3319->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3319 = $tmp3319->next;
                        }
                        $fn3321 $tmp3320 = $tmp3319->methods[0];
                        panda$collections$Iterator* $tmp3322 = $tmp3320(((panda$collections$Iterable*) whens3296));
                        $tmp3318 = $tmp3322;
                        $tmp3317 = $tmp3318;
                        Iter$793$173316 = $tmp3317;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3317));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3318));
                        $l3323:;
                        ITable* $tmp3326 = Iter$793$173316->$class->itable;
                        while ($tmp3326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3326 = $tmp3326->next;
                        }
                        $fn3328 $tmp3327 = $tmp3326->methods[0];
                        panda$core$Bit $tmp3329 = $tmp3327(Iter$793$173316);
                        panda$core$Bit $tmp3330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3329);
                        bool $tmp3325 = $tmp3330.value;
                        if (!$tmp3325) goto $l3324;
                        {
                            int $tmp3333;
                            {
                                ITable* $tmp3337 = Iter$793$173316->$class->itable;
                                while ($tmp3337->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3337 = $tmp3337->next;
                                }
                                $fn3339 $tmp3338 = $tmp3337->methods[1];
                                panda$core$Object* $tmp3340 = $tmp3338(Iter$793$173316);
                                $tmp3336 = $tmp3340;
                                $tmp3335 = ((org$pandalanguage$pandac$IRNode*) $tmp3336);
                                w3334 = $tmp3335;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3335));
                                panda$core$Panda$unref$panda$core$Object($tmp3336);
                                panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w3334), &$s3342);
                                $tmp3341 = $tmp3343;
                                panda$core$MutableString$append$panda$core$String(result3303, $tmp3341);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3341));
                            }
                            $tmp3333 = -1;
                            goto $l3331;
                            $l3331:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3334));
                            w3334 = NULL;
                            switch ($tmp3333) {
                                case -1: goto $l3344;
                            }
                            $l3344:;
                        }
                        goto $l3323;
                        $l3324:;
                    }
                    $tmp3315 = -1;
                    goto $l3313;
                    $l3313:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$793$173316));
                    Iter$793$173316 = NULL;
                    switch ($tmp3315) {
                        case -1: goto $l3345;
                    }
                    $l3345:;
                }
                if (((panda$core$Bit) { other3298 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result3303, &$s3346);
                    {
                        int $tmp3349;
                        {
                            ITable* $tmp3353 = ((panda$collections$Iterable*) other3298)->$class->itable;
                            while ($tmp3353->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp3353 = $tmp3353->next;
                            }
                            $fn3355 $tmp3354 = $tmp3353->methods[0];
                            panda$collections$Iterator* $tmp3356 = $tmp3354(((panda$collections$Iterable*) other3298));
                            $tmp3352 = $tmp3356;
                            $tmp3351 = $tmp3352;
                            Iter$798$213350 = $tmp3351;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3351));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3352));
                            $l3357:;
                            ITable* $tmp3360 = Iter$798$213350->$class->itable;
                            while ($tmp3360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3360 = $tmp3360->next;
                            }
                            $fn3362 $tmp3361 = $tmp3360->methods[0];
                            panda$core$Bit $tmp3363 = $tmp3361(Iter$798$213350);
                            panda$core$Bit $tmp3364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3363);
                            bool $tmp3359 = $tmp3364.value;
                            if (!$tmp3359) goto $l3358;
                            {
                                int $tmp3367;
                                {
                                    ITable* $tmp3371 = Iter$798$213350->$class->itable;
                                    while ($tmp3371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp3371 = $tmp3371->next;
                                    }
                                    $fn3373 $tmp3372 = $tmp3371->methods[1];
                                    panda$core$Object* $tmp3374 = $tmp3372(Iter$798$213350);
                                    $tmp3370 = $tmp3374;
                                    $tmp3369 = ((org$pandalanguage$pandac$IRNode*) $tmp3370);
                                    s3368 = $tmp3369;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3369));
                                    panda$core$Panda$unref$panda$core$Object($tmp3370);
                                    panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3368), &$s3376);
                                    $tmp3375 = $tmp3377;
                                    panda$core$MutableString$append$panda$core$String(result3303, $tmp3375);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3375));
                                }
                                $tmp3367 = -1;
                                goto $l3365;
                                $l3365:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3368));
                                s3368 = NULL;
                                switch ($tmp3367) {
                                    case -1: goto $l3378;
                                }
                                $l3378:;
                            }
                            goto $l3357;
                            $l3358:;
                        }
                        $tmp3349 = -1;
                        goto $l3347;
                        $l3347:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$798$213350));
                        Iter$798$213350 = NULL;
                        switch ($tmp3349) {
                            case -1: goto $l3379;
                        }
                        $l3379:;
                    }
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3381, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3380, $tmp3381);
                panda$core$MutableString$append$panda$core$Char8(result3303, $tmp3380);
                panda$core$String* $tmp3384 = panda$core$MutableString$finish$R$panda$core$String(result3303);
                $tmp3383 = $tmp3384;
                $tmp3382 = $tmp3383;
                $returnValue2571 = $tmp3382;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3382));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3383));
                $tmp3302 = 0;
                goto $l3300;
                $l3385:;
                $tmp2562 = 29;
                goto $l2560;
                $l3386:;
                return $returnValue2571;
            }
            $l3300:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3303));
            result3303 = NULL;
            switch ($tmp3302) {
                case 0: goto $l3385;
            }
            $l3388:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3389, 25);
        panda$core$Bit $tmp3390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3389);
        if ($tmp3390.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3392 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            target3391 = *$tmp3392;
            org$pandalanguage$pandac$MethodRef** $tmp3394 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$682_92563->$data + 32));
            m3393 = *$tmp3394;
            if (((panda$core$Bit) { target3391 != NULL }).value) {
            {
                panda$core$String* $tmp3401 = (($fn3400) target3391->$class->vtable[0])(target3391);
                $tmp3399 = $tmp3401;
                panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, &$s3402);
                $tmp3398 = $tmp3403;
                panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, ((org$pandalanguage$pandac$Symbol*) m3393->value)->name);
                $tmp3397 = $tmp3404;
                panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, &$s3405);
                $tmp3396 = $tmp3406;
                $tmp3395 = $tmp3396;
                $returnValue2571 = $tmp3395;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3395));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3396));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3397));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3398));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3399));
                $tmp2562 = 30;
                goto $l2560;
                $l3407:;
                return $returnValue2571;
            }
            }
            $tmp3409 = ((org$pandalanguage$pandac$Symbol*) m3393->value)->name;
            $returnValue2571 = $tmp3409;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3409));
            $tmp2562 = 31;
            goto $l2560;
            $l3410:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3412, 26);
        panda$core$Bit $tmp3413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3412);
        if ($tmp3413.value) {
        {
            panda$core$UInt64* $tmp3415 = ((panda$core$UInt64*) ((char*) $match$682_92563->$data + 24));
            value3414 = *$tmp3415;
            panda$core$UInt64$wrapper* $tmp3420;
            $tmp3420 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp3420->value = value3414;
            $tmp3419 = ((panda$core$Object*) $tmp3420);
            panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3418, $tmp3419);
            $tmp3417 = $tmp3421;
            $tmp3416 = $tmp3417;
            $returnValue2571 = $tmp3416;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3416));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3417));
            panda$core$Panda$unref$panda$core$Object($tmp3419);
            $tmp2562 = 32;
            goto $l2560;
            $l3422:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3424, 27);
        panda$core$Bit $tmp3425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3424);
        if ($tmp3425.value) {
        {
            $tmp3426 = &$s3427;
            $returnValue2571 = $tmp3426;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3426));
            $tmp2562 = 33;
            goto $l2560;
            $l3428:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3430, 28);
        panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3430);
        if ($tmp3431.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3433 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$682_92563->$data + 16));
            op3432 = *$tmp3433;
            org$pandalanguage$pandac$IRNode** $tmp3435 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            base3434 = *$tmp3435;
            panda$core$String* $tmp3441 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String(op3432);
            $tmp3440 = $tmp3441;
            panda$core$String* $tmp3443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3440, &$s3442);
            $tmp3439 = $tmp3443;
            panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3439, ((panda$core$Object*) base3434));
            $tmp3438 = $tmp3444;
            panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3438, &$s3445);
            $tmp3437 = $tmp3446;
            $tmp3436 = $tmp3437;
            $returnValue2571 = $tmp3436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3437));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3438));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3440));
            $tmp2562 = 34;
            goto $l2560;
            $l3447:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3449, 29);
        panda$core$Bit $tmp3450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3449);
        if ($tmp3450.value) {
        {
            panda$core$String** $tmp3452 = ((panda$core$String**) ((char*) $match$682_92563->$data + 16));
            label3451 = *$tmp3452;
            org$pandalanguage$pandac$IRNode** $tmp3454 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            target3453 = *$tmp3454;
            org$pandalanguage$pandac$IRNode** $tmp3456 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 32));
            list3455 = *$tmp3456;
            panda$collections$ImmutableArray** $tmp3458 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 40));
            statements3457 = *$tmp3458;
            int $tmp3461;
            {
                panda$core$MutableString* $tmp3465 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3465);
                $tmp3464 = $tmp3465;
                $tmp3463 = $tmp3464;
                result3462 = $tmp3463;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3463));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3464));
                if (((panda$core$Bit) { label3451 != NULL }).value) {
                {
                    panda$core$String* $tmp3468 = panda$core$String$convert$R$panda$core$String(label3451);
                    $tmp3467 = $tmp3468;
                    panda$core$String* $tmp3470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3467, &$s3469);
                    $tmp3466 = $tmp3470;
                    panda$core$MutableString$append$panda$core$String(result3462, $tmp3466);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3466));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3467));
                }
                }
                panda$core$String* $tmp3476 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3475, ((panda$core$Object*) target3453));
                $tmp3474 = $tmp3476;
                panda$core$String* $tmp3478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, &$s3477);
                $tmp3473 = $tmp3478;
                panda$core$String* $tmp3479 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3473, ((panda$core$Object*) list3455));
                $tmp3472 = $tmp3479;
                panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3472, &$s3480);
                $tmp3471 = $tmp3481;
                panda$core$MutableString$append$panda$core$String(result3462, $tmp3471);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3471));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3472));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3474));
                {
                    int $tmp3484;
                    {
                        ITable* $tmp3488 = ((panda$collections$Iterable*) statements3457)->$class->itable;
                        while ($tmp3488->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3488 = $tmp3488->next;
                        }
                        $fn3490 $tmp3489 = $tmp3488->methods[0];
                        panda$collections$Iterator* $tmp3491 = $tmp3489(((panda$collections$Iterable*) statements3457));
                        $tmp3487 = $tmp3491;
                        $tmp3486 = $tmp3487;
                        Iter$821$173485 = $tmp3486;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3486));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3487));
                        $l3492:;
                        ITable* $tmp3495 = Iter$821$173485->$class->itable;
                        while ($tmp3495->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3495 = $tmp3495->next;
                        }
                        $fn3497 $tmp3496 = $tmp3495->methods[0];
                        panda$core$Bit $tmp3498 = $tmp3496(Iter$821$173485);
                        panda$core$Bit $tmp3499 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3498);
                        bool $tmp3494 = $tmp3499.value;
                        if (!$tmp3494) goto $l3493;
                        {
                            int $tmp3502;
                            {
                                ITable* $tmp3506 = Iter$821$173485->$class->itable;
                                while ($tmp3506->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3506 = $tmp3506->next;
                                }
                                $fn3508 $tmp3507 = $tmp3506->methods[1];
                                panda$core$Object* $tmp3509 = $tmp3507(Iter$821$173485);
                                $tmp3505 = $tmp3509;
                                $tmp3504 = ((org$pandalanguage$pandac$IRNode*) $tmp3505);
                                s3503 = $tmp3504;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3504));
                                panda$core$Panda$unref$panda$core$Object($tmp3505);
                                panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3503), &$s3511);
                                $tmp3510 = $tmp3512;
                                panda$core$MutableString$append$panda$core$String(result3462, $tmp3510);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3510));
                            }
                            $tmp3502 = -1;
                            goto $l3500;
                            $l3500:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3503));
                            s3503 = NULL;
                            switch ($tmp3502) {
                                case -1: goto $l3513;
                            }
                            $l3513:;
                        }
                        goto $l3492;
                        $l3493:;
                    }
                    $tmp3484 = -1;
                    goto $l3482;
                    $l3482:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$821$173485));
                    Iter$821$173485 = NULL;
                    switch ($tmp3484) {
                        case -1: goto $l3514;
                    }
                    $l3514:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3516, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3515, $tmp3516);
                panda$core$MutableString$append$panda$core$Char8(result3462, $tmp3515);
                panda$core$String* $tmp3519 = panda$core$MutableString$finish$R$panda$core$String(result3462);
                $tmp3518 = $tmp3519;
                $tmp3517 = $tmp3518;
                $returnValue2571 = $tmp3517;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3517));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3518));
                $tmp3461 = 0;
                goto $l3459;
                $l3520:;
                $tmp2562 = 35;
                goto $l2560;
                $l3521:;
                return $returnValue2571;
            }
            $l3459:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3462));
            result3462 = NULL;
            switch ($tmp3461) {
                case 0: goto $l3520;
            }
            $l3523:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3524, 30);
        panda$core$Bit $tmp3525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3524);
        if ($tmp3525.value) {
        {
            panda$core$Real64* $tmp3527 = ((panda$core$Real64*) ((char*) $match$682_92563->$data + 24));
            value3526 = *$tmp3527;
            panda$core$String* $tmp3530 = panda$core$Real64$convert$R$panda$core$String(value3526);
            $tmp3529 = $tmp3530;
            $tmp3528 = $tmp3529;
            $returnValue2571 = $tmp3528;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3528));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3529));
            $tmp2562 = 36;
            goto $l2560;
            $l3531:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3533, 31);
        panda$core$Bit $tmp3534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3533);
        if ($tmp3534.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3536 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            value3535 = *$tmp3536;
            if (((panda$core$Bit) { value3535 != NULL }).value) {
            {
                panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3540, ((panda$core$Object*) value3535));
                $tmp3539 = $tmp3541;
                panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, &$s3542);
                $tmp3538 = $tmp3543;
                $tmp3537 = $tmp3538;
                $returnValue2571 = $tmp3537;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3537));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3538));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3539));
                $tmp2562 = 37;
                goto $l2560;
                $l3544:;
                return $returnValue2571;
            }
            }
            $tmp3546 = &$s3547;
            $returnValue2571 = $tmp3546;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3546));
            $tmp2562 = 38;
            goto $l2560;
            $l3548:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3550, 32);
        panda$core$Bit $tmp3551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3550);
        if ($tmp3551.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3553 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92563->$data + 16));
            type3552 = *$tmp3553;
            panda$core$Int64* $tmp3555 = ((panda$core$Int64*) ((char*) $match$682_92563->$data + 24));
            id3554 = *$tmp3555;
            panda$core$Int64$wrapper* $tmp3561;
            $tmp3561 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3561->value = id3554;
            $tmp3560 = ((panda$core$Object*) $tmp3561);
            panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3559, $tmp3560);
            $tmp3558 = $tmp3562;
            panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3558, &$s3563);
            $tmp3557 = $tmp3564;
            $tmp3556 = $tmp3557;
            $returnValue2571 = $tmp3556;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3556));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3557));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3558));
            panda$core$Panda$unref$panda$core$Object($tmp3560);
            $tmp2562 = 39;
            goto $l2560;
            $l3565:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3567, 33);
        panda$core$Bit $tmp3568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3567);
        if ($tmp3568.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3570 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 0));
            base3569 = *$tmp3570;
            panda$core$Int64* $tmp3572 = ((panda$core$Int64*) ((char*) $match$682_92563->$data + 8));
            id3571 = *$tmp3572;
            panda$core$Int64$wrapper* $tmp3580;
            $tmp3580 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3580->value = id3571;
            $tmp3579 = ((panda$core$Object*) $tmp3580);
            panda$core$String* $tmp3581 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3578, $tmp3579);
            $tmp3577 = $tmp3581;
            panda$core$String* $tmp3583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3577, &$s3582);
            $tmp3576 = $tmp3583;
            panda$core$String* $tmp3584 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3576, ((panda$core$Object*) base3569));
            $tmp3575 = $tmp3584;
            panda$core$String* $tmp3586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3575, &$s3585);
            $tmp3574 = $tmp3586;
            $tmp3573 = $tmp3574;
            $returnValue2571 = $tmp3573;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3573));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3574));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3577));
            panda$core$Panda$unref$panda$core$Object($tmp3579);
            $tmp2562 = 40;
            goto $l2560;
            $l3587:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3589, 34);
        panda$core$Bit $tmp3590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3589);
        if ($tmp3590.value) {
        {
            $tmp3591 = &$s3592;
            $returnValue2571 = $tmp3591;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3591));
            $tmp2562 = 41;
            goto $l2560;
            $l3593:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3595, 35);
        panda$core$Bit $tmp3596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3595);
        if ($tmp3596.value) {
        {
            $tmp3597 = &$s3598;
            $returnValue2571 = $tmp3597;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3597));
            $tmp2562 = 42;
            goto $l2560;
            $l3599:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3601, 36);
        panda$core$Bit $tmp3602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3601);
        if ($tmp3602.value) {
        {
            panda$core$String** $tmp3604 = ((panda$core$String**) ((char*) $match$682_92563->$data + 16));
            str3603 = *$tmp3604;
            panda$core$String* $tmp3608 = panda$core$String$format$panda$core$String$R$panda$core$String(str3603, &$s3607);
            $tmp3606 = $tmp3608;
            $tmp3605 = $tmp3606;
            $returnValue2571 = $tmp3605;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3606));
            $tmp2562 = 43;
            goto $l2560;
            $l3609:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3611, 37);
        panda$core$Bit $tmp3612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3611);
        if ($tmp3612.value) {
        {
            $tmp3613 = &$s3614;
            $returnValue2571 = $tmp3613;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3613));
            $tmp2562 = 44;
            goto $l2560;
            $l3615:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3617, 38);
        panda$core$Bit $tmp3618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3617);
        if ($tmp3618.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3620 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            test3619 = *$tmp3620;
            org$pandalanguage$pandac$IRNode** $tmp3622 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            ifTrue3621 = *$tmp3622;
            org$pandalanguage$pandac$IRNode** $tmp3624 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 32));
            ifFalse3623 = *$tmp3624;
            panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3632, ((panda$core$Object*) test3619));
            $tmp3631 = $tmp3633;
            panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3631, &$s3634);
            $tmp3630 = $tmp3635;
            panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3630, ((panda$core$Object*) ifTrue3621));
            $tmp3629 = $tmp3636;
            panda$core$String* $tmp3638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, &$s3637);
            $tmp3628 = $tmp3638;
            panda$core$String* $tmp3639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3628, ((panda$core$Object*) ifFalse3623));
            $tmp3627 = $tmp3639;
            panda$core$String* $tmp3641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3627, &$s3640);
            $tmp3626 = $tmp3641;
            $tmp3625 = $tmp3626;
            $returnValue2571 = $tmp3625;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3625));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3626));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3631));
            $tmp2562 = 45;
            goto $l2560;
            $l3642:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3644, 39);
        panda$core$Bit $tmp3645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3644);
        if ($tmp3645.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3647 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92563->$data + 16));
            type3646 = *$tmp3647;
            panda$core$String* $tmp3650 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type3646);
            $tmp3649 = $tmp3650;
            $tmp3648 = $tmp3649;
            $returnValue2571 = $tmp3648;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3648));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3649));
            $tmp2562 = 46;
            goto $l2560;
            $l3651:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3653, 40);
        panda$core$Bit $tmp3654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3653);
        if ($tmp3654.value) {
        {
            panda$core$String** $tmp3656 = ((panda$core$String**) ((char*) $match$682_92563->$data + 16));
            name3655 = *$tmp3656;
            $tmp3657 = name3655;
            $returnValue2571 = $tmp3657;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3657));
            $tmp2562 = 47;
            goto $l2560;
            $l3658:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3660, 41);
        panda$core$Bit $tmp3661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3660);
        if ($tmp3661.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3663 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            base3662 = *$tmp3663;
            panda$collections$ImmutableArray** $tmp3665 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 32));
            args3664 = *$tmp3665;
            panda$core$String* $tmp3672 = (($fn3671) base3662->$class->vtable[0])(base3662);
            $tmp3670 = $tmp3672;
            panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3670, &$s3673);
            $tmp3669 = $tmp3674;
            ITable* $tmp3676 = ((panda$collections$CollectionView*) args3664)->$class->itable;
            while ($tmp3676->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3676 = $tmp3676->next;
            }
            $fn3678 $tmp3677 = $tmp3676->methods[1];
            panda$core$String* $tmp3679 = $tmp3677(((panda$collections$CollectionView*) args3664));
            $tmp3675 = $tmp3679;
            panda$core$String* $tmp3680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3669, $tmp3675);
            $tmp3668 = $tmp3680;
            panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3668, &$s3681);
            $tmp3667 = $tmp3682;
            $tmp3666 = $tmp3667;
            $returnValue2571 = $tmp3666;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3666));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3667));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3670));
            $tmp2562 = 48;
            goto $l2560;
            $l3683:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3685, 42);
        panda$core$Bit $tmp3686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3685);
        if ($tmp3686.value) {
        {
            panda$collections$ImmutableArray** $tmp3688 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 16));
            params3687 = *$tmp3688;
            org$pandalanguage$pandac$ASTNode** $tmp3690 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$682_92563->$data + 24));
            body3689 = *$tmp3690;
            ITable* $tmp3698 = ((panda$collections$CollectionView*) params3687)->$class->itable;
            while ($tmp3698->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3698 = $tmp3698->next;
            }
            $fn3700 $tmp3699 = $tmp3698->methods[1];
            panda$core$String* $tmp3701 = $tmp3699(((panda$collections$CollectionView*) params3687));
            $tmp3697 = $tmp3701;
            panda$core$String* $tmp3702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3696, $tmp3697);
            $tmp3695 = $tmp3702;
            panda$core$String* $tmp3704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3695, &$s3703);
            $tmp3694 = $tmp3704;
            panda$core$String* $tmp3705 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3694, ((panda$core$Object*) body3689));
            $tmp3693 = $tmp3705;
            panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3693, &$s3706);
            $tmp3692 = $tmp3707;
            $tmp3691 = $tmp3692;
            $returnValue2571 = $tmp3691;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3691));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3692));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3694));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3697));
            $tmp2562 = 49;
            goto $l2560;
            $l3708:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3710, 43);
        panda$core$Bit $tmp3711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3710);
        if ($tmp3711.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3713 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            target3712 = *$tmp3713;
            panda$collections$ImmutableArray** $tmp3715 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 32));
            methods3714 = *$tmp3715;
            panda$collections$ImmutableArray** $tmp3717 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 40));
            args3716 = *$tmp3717;
            if (((panda$core$Bit) { target3712 != NULL }).value) {
            {
                panda$core$String* $tmp3726 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3725, ((panda$core$Object*) target3712));
                $tmp3724 = $tmp3726;
                panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, &$s3727);
                $tmp3723 = $tmp3728;
                panda$core$Int64$init$builtin_int64(&$tmp3730, 0);
                panda$core$Object* $tmp3731 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3714, $tmp3730);
                $tmp3729 = $tmp3731;
                panda$core$String* $tmp3732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3723, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3729)->value)->name);
                $tmp3722 = $tmp3732;
                panda$core$String* $tmp3734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3722, &$s3733);
                $tmp3721 = $tmp3734;
                ITable* $tmp3736 = ((panda$collections$CollectionView*) args3716)->$class->itable;
                while ($tmp3736->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3736 = $tmp3736->next;
                }
                $fn3738 $tmp3737 = $tmp3736->methods[1];
                panda$core$String* $tmp3739 = $tmp3737(((panda$collections$CollectionView*) args3716));
                $tmp3735 = $tmp3739;
                panda$core$String* $tmp3740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3721, $tmp3735);
                $tmp3720 = $tmp3740;
                panda$core$String* $tmp3742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3720, &$s3741);
                $tmp3719 = $tmp3742;
                $tmp3718 = $tmp3719;
                $returnValue2571 = $tmp3718;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3721));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3722));
                panda$core$Panda$unref$panda$core$Object($tmp3729);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3723));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3724));
                $tmp2562 = 50;
                goto $l2560;
                $l3743:;
                return $returnValue2571;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3752, 0);
                panda$core$Object* $tmp3753 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3714, $tmp3752);
                $tmp3751 = $tmp3753;
                panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3750, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3751)->value)->name);
                $tmp3749 = $tmp3754;
                panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3749, &$s3755);
                $tmp3748 = $tmp3756;
                ITable* $tmp3758 = ((panda$collections$CollectionView*) args3716)->$class->itable;
                while ($tmp3758->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3758 = $tmp3758->next;
                }
                $fn3760 $tmp3759 = $tmp3758->methods[1];
                panda$core$String* $tmp3761 = $tmp3759(((panda$collections$CollectionView*) args3716));
                $tmp3757 = $tmp3761;
                panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3748, $tmp3757);
                $tmp3747 = $tmp3762;
                panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3747, &$s3763);
                $tmp3746 = $tmp3764;
                $tmp3745 = $tmp3746;
                $returnValue2571 = $tmp3745;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3746));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3757));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3748));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3749));
                panda$core$Panda$unref$panda$core$Object($tmp3751);
                $tmp2562 = 51;
                goto $l2560;
                $l3765:;
                return $returnValue2571;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3767, 44);
        panda$core$Bit $tmp3768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3767);
        if ($tmp3768.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3770 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            target3769 = *$tmp3770;
            panda$collections$ImmutableArray** $tmp3772 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 24));
            methods3771 = *$tmp3772;
            if (((panda$core$Bit) { target3769 != NULL }).value) {
            {
                panda$core$String* $tmp3779 = (($fn3778) target3769->$class->vtable[0])(target3769);
                $tmp3777 = $tmp3779;
                panda$core$String* $tmp3781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3777, &$s3780);
                $tmp3776 = $tmp3781;
                panda$core$Int64$init$builtin_int64(&$tmp3783, 0);
                panda$core$Object* $tmp3784 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3771, $tmp3783);
                $tmp3782 = $tmp3784;
                panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3782)->value)->name);
                $tmp3775 = $tmp3785;
                panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3775, &$s3786);
                $tmp3774 = $tmp3787;
                $tmp3773 = $tmp3774;
                $returnValue2571 = $tmp3773;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3775));
                panda$core$Panda$unref$panda$core$Object($tmp3782);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3777));
                $tmp2562 = 52;
                goto $l2560;
                $l3788:;
                return $returnValue2571;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3794, 0);
                panda$core$Object* $tmp3795 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3771, $tmp3794);
                $tmp3793 = $tmp3795;
                panda$core$String* $tmp3796 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3793)->value)->name);
                $tmp3792 = $tmp3796;
                panda$core$String* $tmp3798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3792, &$s3797);
                $tmp3791 = $tmp3798;
                $tmp3790 = $tmp3791;
                $returnValue2571 = $tmp3790;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3790));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3792));
                panda$core$Panda$unref$panda$core$Object($tmp3793);
                $tmp2562 = 53;
                goto $l2560;
                $l3799:;
                return $returnValue2571;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3801, 45);
        panda$core$Bit $tmp3802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3801);
        if ($tmp3802.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3804 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 16));
            start3803 = *$tmp3804;
            org$pandalanguage$pandac$IRNode** $tmp3806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            end3805 = *$tmp3806;
            panda$core$Bit* $tmp3808 = ((panda$core$Bit*) ((char*) $match$682_92563->$data + 32));
            inclusive3807 = *$tmp3808;
            org$pandalanguage$pandac$IRNode** $tmp3810 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 33));
            step3809 = *$tmp3810;
            int $tmp3813;
            {
                panda$core$MutableString* $tmp3817 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3817);
                $tmp3816 = $tmp3817;
                $tmp3815 = $tmp3816;
                result3814 = $tmp3815;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3815));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3816));
                if (((panda$core$Bit) { start3803 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result3814, ((panda$core$Object*) start3803));
                }
                }
                if (inclusive3807.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result3814, &$s3818);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result3814, &$s3819);
                }
                }
                if (((panda$core$Bit) { end3805 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result3814, ((panda$core$Object*) end3805));
                }
                }
                if (((panda$core$Bit) { step3809 != NULL }).value) {
                {
                    panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3822, ((panda$core$Object*) step3809));
                    $tmp3821 = $tmp3823;
                    panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3821, &$s3824);
                    $tmp3820 = $tmp3825;
                    panda$core$MutableString$append$panda$core$String(result3814, $tmp3820);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3820));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3821));
                }
                }
                panda$core$String* $tmp3828 = panda$core$MutableString$finish$R$panda$core$String(result3814);
                $tmp3827 = $tmp3828;
                $tmp3826 = $tmp3827;
                $returnValue2571 = $tmp3826;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3826));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3827));
                $tmp3813 = 0;
                goto $l3811;
                $l3829:;
                $tmp2562 = 54;
                goto $l2560;
                $l3830:;
                return $returnValue2571;
            }
            $l3811:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3814));
            result3814 = NULL;
            switch ($tmp3813) {
                case 0: goto $l3829;
            }
            $l3832:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3833, 46);
        panda$core$Bit $tmp3834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3833);
        if ($tmp3834.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3836 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$682_92563->$data + 16));
            kind3835 = *$tmp3836;
            panda$collections$ImmutableArray** $tmp3838 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 24));
            decls3837 = *$tmp3838;
            int $tmp3841;
            {
                panda$core$MutableString* $tmp3845 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3845);
                $tmp3844 = $tmp3845;
                $tmp3843 = $tmp3844;
                result3842 = $tmp3843;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3844));
                {
                    $match$889_173846 = kind3835;
                    panda$core$Int64$init$builtin_int64(&$tmp3847, 0);
                    panda$core$Bit $tmp3848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173846.$rawValue, $tmp3847);
                    if ($tmp3848.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3842, &$s3849);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3850, 1);
                    panda$core$Bit $tmp3851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173846.$rawValue, $tmp3850);
                    if ($tmp3851.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3842, &$s3852);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3853, 2);
                    panda$core$Bit $tmp3854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173846.$rawValue, $tmp3853);
                    if ($tmp3854.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3842, &$s3855);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3856, 3);
                    panda$core$Bit $tmp3857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173846.$rawValue, $tmp3856);
                    if ($tmp3857.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3842, &$s3858);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp3860 = ((panda$collections$CollectionView*) decls3837)->$class->itable;
                while ($tmp3860->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3860 = $tmp3860->next;
                }
                $fn3862 $tmp3861 = $tmp3860->methods[1];
                panda$core$String* $tmp3863 = $tmp3861(((panda$collections$CollectionView*) decls3837));
                $tmp3859 = $tmp3863;
                panda$core$MutableString$append$panda$core$String(result3842, $tmp3859);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3859));
                panda$core$String* $tmp3866 = panda$core$MutableString$finish$R$panda$core$String(result3842);
                $tmp3865 = $tmp3866;
                $tmp3864 = $tmp3865;
                $returnValue2571 = $tmp3864;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3864));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3865));
                $tmp3841 = 0;
                goto $l3839;
                $l3867:;
                $tmp2562 = 55;
                goto $l2560;
                $l3868:;
                return $returnValue2571;
            }
            $l3839:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3842));
            result3842 = NULL;
            switch ($tmp3841) {
                case 0: goto $l3867;
            }
            $l3870:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3871, 47);
        panda$core$Bit $tmp3872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3871);
        if ($tmp3872.value) {
        {
            panda$core$String** $tmp3874 = ((panda$core$String**) ((char*) $match$682_92563->$data + 16));
            name3873 = *$tmp3874;
            $tmp3875 = name3873;
            $returnValue2571 = $tmp3875;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3875));
            $tmp2562 = 56;
            goto $l2560;
            $l3876:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3878, 48);
        panda$core$Bit $tmp3879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3878);
        if ($tmp3879.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3881 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$682_92563->$data + 16));
            variable3880 = *$tmp3881;
            panda$core$String* $tmp3885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) variable3880)->name, &$s3884);
            $tmp3883 = $tmp3885;
            $tmp3882 = $tmp3883;
            $returnValue2571 = $tmp3882;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3882));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3883));
            $tmp2562 = 57;
            goto $l2560;
            $l3886:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3888, 49);
        panda$core$Bit $tmp3889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3888);
        if ($tmp3889.value) {
        {
            panda$collections$ImmutableArray** $tmp3891 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 16));
            tests3890 = *$tmp3891;
            panda$collections$ImmutableArray** $tmp3893 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 24));
            statements3892 = *$tmp3893;
            ITable* $tmp3901 = ((panda$collections$CollectionView*) tests3890)->$class->itable;
            while ($tmp3901->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3901 = $tmp3901->next;
            }
            $fn3903 $tmp3902 = $tmp3901->methods[1];
            panda$core$String* $tmp3904 = $tmp3902(((panda$collections$CollectionView*) tests3890));
            $tmp3900 = $tmp3904;
            panda$core$String* $tmp3905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3899, $tmp3900);
            $tmp3898 = $tmp3905;
            panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3898, &$s3906);
            $tmp3897 = $tmp3907;
            ITable* $tmp3910 = ((panda$collections$CollectionView*) statements3892)->$class->itable;
            while ($tmp3910->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3910 = $tmp3910->next;
            }
            $fn3912 $tmp3911 = $tmp3910->methods[2];
            panda$core$String* $tmp3913 = $tmp3911(((panda$collections$CollectionView*) statements3892), &$s3909);
            $tmp3908 = $tmp3913;
            panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3897, $tmp3908);
            $tmp3896 = $tmp3914;
            panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, &$s3915);
            $tmp3895 = $tmp3916;
            $tmp3894 = $tmp3895;
            $returnValue2571 = $tmp3894;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3894));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3895));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3896));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3908));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3897));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3898));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3900));
            $tmp2562 = 58;
            goto $l2560;
            $l3917:;
            return $returnValue2571;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3919, 50);
        panda$core$Bit $tmp3920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92563->$rawValue, $tmp3919);
        if ($tmp3920.value) {
        {
            panda$core$String** $tmp3922 = ((panda$core$String**) ((char*) $match$682_92563->$data + 16));
            label3921 = *$tmp3922;
            org$pandalanguage$pandac$IRNode** $tmp3924 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92563->$data + 24));
            test3923 = *$tmp3924;
            panda$collections$ImmutableArray** $tmp3926 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92563->$data + 32));
            statements3925 = *$tmp3926;
            int $tmp3929;
            {
                panda$core$MutableString* $tmp3933 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3933);
                $tmp3932 = $tmp3933;
                $tmp3931 = $tmp3932;
                result3930 = $tmp3931;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3931));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3932));
                if (((panda$core$Bit) { label3921 != NULL }).value) {
                {
                    panda$core$String* $tmp3936 = panda$core$String$convert$R$panda$core$String(label3921);
                    $tmp3935 = $tmp3936;
                    panda$core$String* $tmp3938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3935, &$s3937);
                    $tmp3934 = $tmp3938;
                    panda$core$MutableString$append$panda$core$String(result3930, $tmp3934);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3934));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3935));
                }
                }
                panda$core$String* $tmp3942 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3941, ((panda$core$Object*) test3923));
                $tmp3940 = $tmp3942;
                panda$core$String* $tmp3944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3940, &$s3943);
                $tmp3939 = $tmp3944;
                panda$core$MutableString$append$panda$core$String(result3930, $tmp3939);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3939));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3940));
                {
                    int $tmp3947;
                    {
                        ITable* $tmp3951 = ((panda$collections$Iterable*) statements3925)->$class->itable;
                        while ($tmp3951->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3951 = $tmp3951->next;
                        }
                        $fn3953 $tmp3952 = $tmp3951->methods[0];
                        panda$collections$Iterator* $tmp3954 = $tmp3952(((panda$collections$Iterable*) statements3925));
                        $tmp3950 = $tmp3954;
                        $tmp3949 = $tmp3950;
                        Iter$909$173948 = $tmp3949;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3949));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3950));
                        $l3955:;
                        ITable* $tmp3958 = Iter$909$173948->$class->itable;
                        while ($tmp3958->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3958 = $tmp3958->next;
                        }
                        $fn3960 $tmp3959 = $tmp3958->methods[0];
                        panda$core$Bit $tmp3961 = $tmp3959(Iter$909$173948);
                        panda$core$Bit $tmp3962 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3961);
                        bool $tmp3957 = $tmp3962.value;
                        if (!$tmp3957) goto $l3956;
                        {
                            int $tmp3965;
                            {
                                ITable* $tmp3969 = Iter$909$173948->$class->itable;
                                while ($tmp3969->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3969 = $tmp3969->next;
                                }
                                $fn3971 $tmp3970 = $tmp3969->methods[1];
                                panda$core$Object* $tmp3972 = $tmp3970(Iter$909$173948);
                                $tmp3968 = $tmp3972;
                                $tmp3967 = ((org$pandalanguage$pandac$IRNode*) $tmp3968);
                                s3966 = $tmp3967;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3967));
                                panda$core$Panda$unref$panda$core$Object($tmp3968);
                                panda$core$String* $tmp3975 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3966), &$s3974);
                                $tmp3973 = $tmp3975;
                                panda$core$MutableString$append$panda$core$String(result3930, $tmp3973);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3973));
                            }
                            $tmp3965 = -1;
                            goto $l3963;
                            $l3963:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3966));
                            s3966 = NULL;
                            switch ($tmp3965) {
                                case -1: goto $l3976;
                            }
                            $l3976:;
                        }
                        goto $l3955;
                        $l3956:;
                    }
                    $tmp3947 = -1;
                    goto $l3945;
                    $l3945:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$909$173948));
                    Iter$909$173948 = NULL;
                    switch ($tmp3947) {
                        case -1: goto $l3977;
                    }
                    $l3977:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3979, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3978, $tmp3979);
                panda$core$MutableString$append$panda$core$Char8(result3930, $tmp3978);
                panda$core$String* $tmp3982 = panda$core$MutableString$finish$R$panda$core$String(result3930);
                $tmp3981 = $tmp3982;
                $tmp3980 = $tmp3981;
                $returnValue2571 = $tmp3980;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3981));
                $tmp3929 = 0;
                goto $l3927;
                $l3983:;
                $tmp2562 = 59;
                goto $l2560;
                $l3984:;
                return $returnValue2571;
            }
            $l3927:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3930));
            result3930 = NULL;
            switch ($tmp3929) {
                case 0: goto $l3983;
            }
            $l3986:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp3987, false);
            if ($tmp3987.value) goto $l3988; else goto $l3989;
            $l3989:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s3990, (panda$core$Int64) { 915 });
            abort();
            $l3988:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp2562 = -1;
    goto $l2560;
    $l2560:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2564));
    switch ($tmp2562) {
        case 18: goto $l2989;
        case 5: goto $l2690;
        case 59: goto $l3984;
        case 7: goto $l2794;
        case 27: goto $l3229;
        case 25: goto $l3203;
        case 24: goto $l3193;
        case 11: goto $l2851;
        case 36: goto $l3531;
        case -1: goto $l3991;
        case 55: goto $l3868;
        case 2: goto $l2599;
        case 35: goto $l3521;
        case 9: goto $l2822;
        case 50: goto $l3743;
        case 20: goto $l3082;
        case 0: goto $l2584;
        case 3: goto $l2628;
        case 8: goto $l2798;
        case 40: goto $l3587;
        case 21: goto $l3102;
        case 45: goto $l3642;
        case 49: goto $l3708;
        case 57: goto $l3886;
        case 12: goto $l2880;
        case 10: goto $l2842;
        case 56: goto $l3876;
        case 30: goto $l3407;
        case 29: goto $l3386;
        case 16: goto $l2944;
        case 17: goto $l2972;
        case 52: goto $l3788;
        case 44: goto $l3615;
        case 53: goto $l3799;
        case 33: goto $l3428;
        case 26: goto $l3216;
        case 38: goto $l3548;
        case 34: goto $l3447;
        case 39: goto $l3565;
        case 48: goto $l3683;
        case 47: goto $l3658;
        case 58: goto $l3917;
        case 13: goto $l2914;
        case 22: goto $l3122;
        case 41: goto $l3593;
        case 32: goto $l3422;
        case 54: goto $l3830;
        case 19: goto $l3055;
        case 28: goto $l3289;
        case 1: goto $l2593;
        case 15: goto $l2940;
        case 23: goto $l3125;
        case 43: goto $l3609;
        case 46: goto $l3651;
        case 6: goto $l2780;
        case 31: goto $l3410;
        case 51: goto $l3765;
        case 37: goto $l3544;
        case 42: goto $l3599;
        case 14: goto $l2927;
        case 4: goto $l2637;
    }
    $l3991:;
    abort();
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_13998 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3999;
    panda$core$Int64 $tmp4000;
    org$pandalanguage$pandac$Position _f04002;
    org$pandalanguage$pandac$IRNode* _f14004 = NULL;
    org$pandalanguage$pandac$IRNode* _f24006 = NULL;
    panda$core$Int64 $tmp4008;
    org$pandalanguage$pandac$Position _f04010;
    org$pandalanguage$pandac$Type* _f14012 = NULL;
    panda$core$Int64 $tmp4014;
    org$pandalanguage$pandac$Position _f04016;
    org$pandalanguage$pandac$Type* _f14018 = NULL;
    org$pandalanguage$pandac$IRNode* _f24020 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f34022;
    org$pandalanguage$pandac$IRNode* _f44024 = NULL;
    panda$core$Int64 $tmp4026;
    org$pandalanguage$pandac$Position _f04028;
    org$pandalanguage$pandac$Type* _f14030 = NULL;
    panda$core$Bit _f24032;
    panda$core$Int64 $tmp4034;
    org$pandalanguage$pandac$Position _f04036;
    panda$collections$ImmutableArray* _f14038 = NULL;
    panda$core$Int64 $tmp4040;
    org$pandalanguage$pandac$Position _f04042;
    panda$collections$ImmutableArray* _f14044 = NULL;
    panda$collections$ImmutableArray* _f24046 = NULL;
    panda$core$Int64 $tmp4048;
    org$pandalanguage$pandac$Position _f04050;
    panda$core$String* _f14052 = NULL;
    panda$core$Int64 $tmp4054;
    org$pandalanguage$pandac$Position _f04056;
    org$pandalanguage$pandac$Type* _f14058 = NULL;
    org$pandalanguage$pandac$MethodRef* _f24060 = NULL;
    panda$collections$ImmutableArray* _f34062 = NULL;
    panda$core$Int64 $tmp4064;
    org$pandalanguage$pandac$Position _f04066;
    org$pandalanguage$pandac$IRNode* _f14068 = NULL;
    org$pandalanguage$pandac$Type* _f24070 = NULL;
    panda$core$Bit _f34072;
    panda$core$Int64 $tmp4074;
    org$pandalanguage$pandac$Position _f04076;
    org$pandalanguage$pandac$Type* _f14078 = NULL;
    org$pandalanguage$pandac$ChoiceCase* _f24080 = NULL;
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
    int $tmp3994;
    {
        int $tmp3997;
        {
            $tmp3999 = self;
            $match$5_13998 = $tmp3999;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3999));
            panda$core$Int64$init$builtin_int64(&$tmp4000, 0);
            panda$core$Bit $tmp4001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4000);
            if ($tmp4001.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4003 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04002 = *$tmp4003;
                org$pandalanguage$pandac$IRNode** $tmp4005 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14004 = *$tmp4005;
                org$pandalanguage$pandac$IRNode** $tmp4007 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24006 = *$tmp4007;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24006));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4008, 1);
            panda$core$Bit $tmp4009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4008);
            if ($tmp4009.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4011 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04010 = *$tmp4011;
                org$pandalanguage$pandac$Type** $tmp4013 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14012 = *$tmp4013;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14012));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4014, 2);
            panda$core$Bit $tmp4015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4014);
            if ($tmp4015.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4017 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04016 = *$tmp4017;
                org$pandalanguage$pandac$Type** $tmp4019 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14018 = *$tmp4019;
                org$pandalanguage$pandac$IRNode** $tmp4021 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24020 = *$tmp4021;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp4023 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_13998->$data + 32));
                _f34022 = *$tmp4023;
                org$pandalanguage$pandac$IRNode** $tmp4025 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 40));
                _f44024 = *$tmp4025;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44024));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4026, 3);
            panda$core$Bit $tmp4027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4026);
            if ($tmp4027.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4029 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04028 = *$tmp4029;
                org$pandalanguage$pandac$Type** $tmp4031 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14030 = *$tmp4031;
                panda$core$Bit* $tmp4033 = ((panda$core$Bit*) ((char*) $match$5_13998->$data + 24));
                _f24032 = *$tmp4033;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14030));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4034, 4);
            panda$core$Bit $tmp4035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4034);
            if ($tmp4035.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4037 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04036 = *$tmp4037;
                panda$collections$ImmutableArray** $tmp4039 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 16));
                _f14038 = *$tmp4039;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14038));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4040, 5);
            panda$core$Bit $tmp4041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4040);
            if ($tmp4041.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4043 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04042 = *$tmp4043;
                panda$collections$ImmutableArray** $tmp4045 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 16));
                _f14044 = *$tmp4045;
                panda$collections$ImmutableArray** $tmp4047 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 24));
                _f24046 = *$tmp4047;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14044));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24046));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4048, 6);
            panda$core$Bit $tmp4049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4048);
            if ($tmp4049.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4051 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04050 = *$tmp4051;
                panda$core$String** $tmp4053 = ((panda$core$String**) ((char*) $match$5_13998->$data + 16));
                _f14052 = *$tmp4053;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14052));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4054, 7);
            panda$core$Bit $tmp4055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4054);
            if ($tmp4055.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4057 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04056 = *$tmp4057;
                org$pandalanguage$pandac$Type** $tmp4059 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14058 = *$tmp4059;
                org$pandalanguage$pandac$MethodRef** $tmp4061 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_13998->$data + 24));
                _f24060 = *$tmp4061;
                panda$collections$ImmutableArray** $tmp4063 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 32));
                _f34062 = *$tmp4063;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14058));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34062));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4064, 8);
            panda$core$Bit $tmp4065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4064);
            if ($tmp4065.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4067 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04066 = *$tmp4067;
                org$pandalanguage$pandac$IRNode** $tmp4069 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14068 = *$tmp4069;
                org$pandalanguage$pandac$Type** $tmp4071 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 24));
                _f24070 = *$tmp4071;
                panda$core$Bit* $tmp4073 = ((panda$core$Bit*) ((char*) $match$5_13998->$data + 32));
                _f34072 = *$tmp4073;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14068));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24070));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4074, 9);
            panda$core$Bit $tmp4075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4074);
            if ($tmp4075.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4077 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04076 = *$tmp4077;
                org$pandalanguage$pandac$Type** $tmp4079 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14078 = *$tmp4079;
                org$pandalanguage$pandac$ChoiceCase** $tmp4081 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$5_13998->$data + 24));
                _f24080 = *$tmp4081;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14078));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24080));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4082, 10);
            panda$core$Bit $tmp4083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4082);
            if ($tmp4083.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4085 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04084 = *$tmp4085;
                org$pandalanguage$pandac$IRNode** $tmp4087 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14086 = *$tmp4087;
                org$pandalanguage$pandac$ChoiceCase** $tmp4089 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$5_13998->$data + 24));
                _f24088 = *$tmp4089;
                panda$core$Int64* $tmp4091 = ((panda$core$Int64*) ((char*) $match$5_13998->$data + 32));
                _f34090 = *$tmp4091;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24088));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4092, 11);
            panda$core$Bit $tmp4093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4092);
            if ($tmp4093.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4095 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04094 = *$tmp4095;
                org$pandalanguage$pandac$Type** $tmp4097 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14096 = *$tmp4097;
                org$pandalanguage$pandac$IRNode** $tmp4099 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24098 = *$tmp4099;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24098));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4100, 12);
            panda$core$Bit $tmp4101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4100);
            if ($tmp4101.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4103 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04102 = *$tmp4103;
                org$pandalanguage$pandac$Type** $tmp4105 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14104 = *$tmp4105;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14104));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4106, 13);
            panda$core$Bit $tmp4107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4106);
            if ($tmp4107.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4109 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04108 = *$tmp4109;
                panda$core$String** $tmp4111 = ((panda$core$String**) ((char*) $match$5_13998->$data + 16));
                _f14110 = *$tmp4111;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14110));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4112, 14);
            panda$core$Bit $tmp4113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4112);
            if ($tmp4113.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4115 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 0));
                _f04114 = *$tmp4115;
                org$pandalanguage$pandac$IRNode** $tmp4117 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 8));
                _f14116 = *$tmp4117;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14116));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4118, 15);
            panda$core$Bit $tmp4119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4118);
            if ($tmp4119.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4121 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04120 = *$tmp4121;
                panda$core$String** $tmp4123 = ((panda$core$String**) ((char*) $match$5_13998->$data + 16));
                _f14122 = *$tmp4123;
                panda$collections$ImmutableArray** $tmp4125 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 24));
                _f24124 = *$tmp4125;
                org$pandalanguage$pandac$IRNode** $tmp4127 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 32));
                _f34126 = *$tmp4127;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34126));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4128, 16);
            panda$core$Bit $tmp4129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4128);
            if ($tmp4129.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4131 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 0));
                _f04130 = *$tmp4131;
                panda$collections$ImmutableArray** $tmp4133 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 8));
                _f14132 = *$tmp4133;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04130));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14132));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4134, 17);
            panda$core$Bit $tmp4135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4134);
            if ($tmp4135.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4137 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 0));
                _f04136 = *$tmp4137;
                org$pandalanguage$pandac$IRNode** $tmp4139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 8));
                _f14138 = *$tmp4139;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04136));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14138));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4140, 18);
            panda$core$Bit $tmp4141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4140);
            if ($tmp4141.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4143 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04142 = *$tmp4143;
                org$pandalanguage$pandac$Type** $tmp4145 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14144 = *$tmp4145;
                org$pandalanguage$pandac$IRNode** $tmp4147 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24146 = *$tmp4147;
                org$pandalanguage$pandac$FieldDecl** $tmp4149 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_13998->$data + 32));
                _f34148 = *$tmp4149;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14144));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34148));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4150, 19);
            panda$core$Bit $tmp4151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4150);
            if ($tmp4151.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4153 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04152 = *$tmp4153;
                org$pandalanguage$pandac$IRNode** $tmp4155 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14154 = *$tmp4155;
                panda$collections$ImmutableArray** $tmp4157 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 24));
                _f24156 = *$tmp4157;
                org$pandalanguage$pandac$IRNode** $tmp4159 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 32));
                _f34158 = *$tmp4159;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34158));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4160, 20);
            panda$core$Bit $tmp4161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4160);
            if ($tmp4161.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4163 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04162 = *$tmp4163;
                org$pandalanguage$pandac$Type** $tmp4165 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14164 = *$tmp4165;
                panda$core$UInt64* $tmp4167 = ((panda$core$UInt64*) ((char*) $match$5_13998->$data + 24));
                _f24166 = *$tmp4167;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14164));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4168, 21);
            panda$core$Bit $tmp4169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4168);
            if ($tmp4169.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04170 = *$tmp4171;
                org$pandalanguage$pandac$IRNode** $tmp4173 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14172 = *$tmp4173;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14172));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4174, 22);
            panda$core$Bit $tmp4175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4174);
            if ($tmp4175.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4177 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04176 = *$tmp4177;
                org$pandalanguage$pandac$IRNode** $tmp4179 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14178 = *$tmp4179;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14178));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4180, 23);
            panda$core$Bit $tmp4181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4180);
            if ($tmp4181.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4183 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04182 = *$tmp4183;
                panda$core$String** $tmp4185 = ((panda$core$String**) ((char*) $match$5_13998->$data + 16));
                _f14184 = *$tmp4185;
                panda$collections$ImmutableArray** $tmp4187 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 24));
                _f24186 = *$tmp4187;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14184));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24186));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4188, 24);
            panda$core$Bit $tmp4189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4188);
            if ($tmp4189.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04190 = *$tmp4191;
                org$pandalanguage$pandac$IRNode** $tmp4193 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14192 = *$tmp4193;
                panda$collections$ImmutableArray** $tmp4195 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 24));
                _f24194 = *$tmp4195;
                panda$collections$ImmutableArray** $tmp4197 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 32));
                _f34196 = *$tmp4197;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24194));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34196));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4198, 25);
            panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4198);
            if ($tmp4199.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04200 = *$tmp4201;
                org$pandalanguage$pandac$Type** $tmp4203 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14202 = *$tmp4203;
                org$pandalanguage$pandac$IRNode** $tmp4205 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24204 = *$tmp4205;
                org$pandalanguage$pandac$MethodRef** $tmp4207 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_13998->$data + 32));
                _f34206 = *$tmp4207;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14202));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24204));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34206));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4208, 26);
            panda$core$Bit $tmp4209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4208);
            if ($tmp4209.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04210 = *$tmp4211;
                org$pandalanguage$pandac$Type** $tmp4213 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14212 = *$tmp4213;
                panda$core$UInt64* $tmp4215 = ((panda$core$UInt64*) ((char*) $match$5_13998->$data + 24));
                _f24214 = *$tmp4215;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14212));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4216, 27);
            panda$core$Bit $tmp4217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4216);
            if ($tmp4217.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4219 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04218 = *$tmp4219;
                org$pandalanguage$pandac$Type** $tmp4221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14220 = *$tmp4221;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14220));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4222, 28);
            panda$core$Bit $tmp4223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4222);
            if ($tmp4223.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4225 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04224 = *$tmp4225;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp4227 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_13998->$data + 16));
                _f14226 = *$tmp4227;
                org$pandalanguage$pandac$IRNode** $tmp4229 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24228 = *$tmp4229;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24228));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4230, 29);
            panda$core$Bit $tmp4231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4230);
            if ($tmp4231.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4233 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04232 = *$tmp4233;
                panda$core$String** $tmp4235 = ((panda$core$String**) ((char*) $match$5_13998->$data + 16));
                _f14234 = *$tmp4235;
                org$pandalanguage$pandac$IRNode** $tmp4237 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24236 = *$tmp4237;
                org$pandalanguage$pandac$IRNode** $tmp4239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 32));
                _f34238 = *$tmp4239;
                panda$collections$ImmutableArray** $tmp4241 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 40));
                _f44240 = *$tmp4241;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14234));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34238));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44240));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4242, 30);
            panda$core$Bit $tmp4243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4242);
            if ($tmp4243.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4245 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04244 = *$tmp4245;
                org$pandalanguage$pandac$Type** $tmp4247 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14246 = *$tmp4247;
                panda$core$Real64* $tmp4249 = ((panda$core$Real64*) ((char*) $match$5_13998->$data + 24));
                _f24248 = *$tmp4249;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14246));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4250, 31);
            panda$core$Bit $tmp4251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4250);
            if ($tmp4251.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04252 = *$tmp4253;
                org$pandalanguage$pandac$IRNode** $tmp4255 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14254 = *$tmp4255;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14254));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4256, 32);
            panda$core$Bit $tmp4257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4256);
            if ($tmp4257.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4259 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04258 = *$tmp4259;
                org$pandalanguage$pandac$Type** $tmp4261 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14260 = *$tmp4261;
                panda$core$Int64* $tmp4263 = ((panda$core$Int64*) ((char*) $match$5_13998->$data + 24));
                _f24262 = *$tmp4263;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14260));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4264, 33);
            panda$core$Bit $tmp4265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4264);
            if ($tmp4265.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4267 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 0));
                _f04266 = *$tmp4267;
                panda$core$Int64* $tmp4269 = ((panda$core$Int64*) ((char*) $match$5_13998->$data + 8));
                _f14268 = *$tmp4269;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04266));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4270, 34);
            panda$core$Bit $tmp4271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4270);
            if ($tmp4271.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04272 = *$tmp4273;
                org$pandalanguage$pandac$Type** $tmp4275 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14274 = *$tmp4275;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14274));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4276, 35);
            panda$core$Bit $tmp4277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4276);
            if ($tmp4277.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4279 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04278 = *$tmp4279;
                org$pandalanguage$pandac$Type** $tmp4281 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14280 = *$tmp4281;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14280));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4282, 36);
            panda$core$Bit $tmp4283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4282);
            if ($tmp4283.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4285 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04284 = *$tmp4285;
                panda$core$String** $tmp4287 = ((panda$core$String**) ((char*) $match$5_13998->$data + 16));
                _f14286 = *$tmp4287;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14286));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4288, 37);
            panda$core$Bit $tmp4289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4288);
            if ($tmp4289.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4291 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04290 = *$tmp4291;
                org$pandalanguage$pandac$Type** $tmp4293 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14292 = *$tmp4293;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14292));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4294, 38);
            panda$core$Bit $tmp4295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4294);
            if ($tmp4295.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4297 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04296 = *$tmp4297;
                org$pandalanguage$pandac$IRNode** $tmp4299 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14298 = *$tmp4299;
                org$pandalanguage$pandac$IRNode** $tmp4301 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24300 = *$tmp4301;
                org$pandalanguage$pandac$IRNode** $tmp4303 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 32));
                _f34302 = *$tmp4303;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34302));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4304, 39);
            panda$core$Bit $tmp4305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4304);
            if ($tmp4305.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04306 = *$tmp4307;
                org$pandalanguage$pandac$Type** $tmp4309 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14308 = *$tmp4309;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14308));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4310, 40);
            panda$core$Bit $tmp4311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4310);
            if ($tmp4311.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04312 = *$tmp4313;
                panda$core$String** $tmp4315 = ((panda$core$String**) ((char*) $match$5_13998->$data + 16));
                _f14314 = *$tmp4315;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14314));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4316, 41);
            panda$core$Bit $tmp4317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4316);
            if ($tmp4317.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04318 = *$tmp4319;
                org$pandalanguage$pandac$Type** $tmp4321 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14320 = *$tmp4321;
                org$pandalanguage$pandac$IRNode** $tmp4323 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24322 = *$tmp4323;
                panda$collections$ImmutableArray** $tmp4325 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 32));
                _f34324 = *$tmp4325;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14320));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24322));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34324));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4326, 42);
            panda$core$Bit $tmp4327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4326);
            if ($tmp4327.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4329 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04328 = *$tmp4329;
                panda$collections$ImmutableArray** $tmp4331 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 16));
                _f14330 = *$tmp4331;
                org$pandalanguage$pandac$ASTNode** $tmp4333 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_13998->$data + 24));
                _f24332 = *$tmp4333;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14330));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24332));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4334, 43);
            panda$core$Bit $tmp4335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4334);
            if ($tmp4335.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4337 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04336 = *$tmp4337;
                org$pandalanguage$pandac$Type** $tmp4339 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 16));
                _f14338 = *$tmp4339;
                org$pandalanguage$pandac$IRNode** $tmp4341 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24340 = *$tmp4341;
                panda$collections$ImmutableArray** $tmp4343 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 32));
                _f34342 = *$tmp4343;
                panda$collections$ImmutableArray** $tmp4345 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 40));
                _f44344 = *$tmp4345;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14338));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24340));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34342));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44344));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4346, 44);
            panda$core$Bit $tmp4347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4346);
            if ($tmp4347.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4349 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04348 = *$tmp4349;
                org$pandalanguage$pandac$IRNode** $tmp4351 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14350 = *$tmp4351;
                panda$collections$ImmutableArray** $tmp4353 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 24));
                _f24352 = *$tmp4353;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24352));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4354, 45);
            panda$core$Bit $tmp4355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4354);
            if ($tmp4355.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04356 = *$tmp4357;
                org$pandalanguage$pandac$IRNode** $tmp4359 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 16));
                _f14358 = *$tmp4359;
                org$pandalanguage$pandac$IRNode** $tmp4361 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24360 = *$tmp4361;
                panda$core$Bit* $tmp4363 = ((panda$core$Bit*) ((char*) $match$5_13998->$data + 32));
                _f34362 = *$tmp4363;
                org$pandalanguage$pandac$IRNode** $tmp4365 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 33));
                _f44364 = *$tmp4365;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14358));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24360));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44364));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4366, 46);
            panda$core$Bit $tmp4367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4366);
            if ($tmp4367.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04368 = *$tmp4369;
                org$pandalanguage$pandac$Variable$Kind* $tmp4371 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_13998->$data + 16));
                _f14370 = *$tmp4371;
                panda$collections$ImmutableArray** $tmp4373 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 24));
                _f24372 = *$tmp4373;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24372));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4374, 47);
            panda$core$Bit $tmp4375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4374);
            if ($tmp4375.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04376 = *$tmp4377;
                panda$core$String** $tmp4379 = ((panda$core$String**) ((char*) $match$5_13998->$data + 16));
                _f14378 = *$tmp4379;
                org$pandalanguage$pandac$Type** $tmp4381 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13998->$data + 24));
                _f24380 = *$tmp4381;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24380));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4382, 48);
            panda$core$Bit $tmp4383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4382);
            if ($tmp4383.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4385 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04384 = *$tmp4385;
                org$pandalanguage$pandac$Variable** $tmp4387 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_13998->$data + 16));
                _f14386 = *$tmp4387;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14386));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4388, 49);
            panda$core$Bit $tmp4389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4388);
            if ($tmp4389.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4391 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04390 = *$tmp4391;
                panda$collections$ImmutableArray** $tmp4393 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 16));
                _f14392 = *$tmp4393;
                panda$collections$ImmutableArray** $tmp4395 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 24));
                _f24394 = *$tmp4395;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14392));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24394));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4396, 50);
            panda$core$Bit $tmp4397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13998->$rawValue, $tmp4396);
            if ($tmp4397.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4399 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13998->$data + 0));
                _f04398 = *$tmp4399;
                panda$core$String** $tmp4401 = ((panda$core$String**) ((char*) $match$5_13998->$data + 16));
                _f14400 = *$tmp4401;
                org$pandalanguage$pandac$IRNode** $tmp4403 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13998->$data + 24));
                _f24402 = *$tmp4403;
                panda$collections$ImmutableArray** $tmp4405 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13998->$data + 32));
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
        $tmp3997 = -1;
        goto $l3995;
        $l3995:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3999));
        switch ($tmp3997) {
            case -1: goto $l4406;
        }
        $l4406:;
    }
    $tmp3994 = -1;
    goto $l3992;
    $l3992:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp3994) {
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
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ChoiceCase(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$ChoiceCase* p_f2) {
    org$pandalanguage$pandac$Type* $tmp4485;
    org$pandalanguage$pandac$Type* $tmp4488;
    org$pandalanguage$pandac$ChoiceCase* $tmp4489;
    org$pandalanguage$pandac$ChoiceCase* $tmp4492;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4484 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4484 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4486 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4485 = *$tmp4486;
        org$pandalanguage$pandac$Type** $tmp4487 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4488 = p_f1;
        *$tmp4487 = $tmp4488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4485));
    }
    {
        org$pandalanguage$pandac$ChoiceCase** $tmp4490 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4489 = *$tmp4490;
        org$pandalanguage$pandac$ChoiceCase** $tmp4491 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4492 = p_f2;
        *$tmp4491 = $tmp4492;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4492));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4489));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceCase* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4494;
    org$pandalanguage$pandac$IRNode* $tmp4497;
    org$pandalanguage$pandac$ChoiceCase* $tmp4498;
    org$pandalanguage$pandac$ChoiceCase* $tmp4501;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4493 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4493 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4495 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4494 = *$tmp4495;
        org$pandalanguage$pandac$IRNode** $tmp4496 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4497 = p_f1;
        *$tmp4496 = $tmp4497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4494));
    }
    {
        org$pandalanguage$pandac$ChoiceCase** $tmp4499 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4498 = *$tmp4499;
        org$pandalanguage$pandac$ChoiceCase** $tmp4500 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4501 = p_f2;
        *$tmp4500 = $tmp4501;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4501));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4498));
    }
    panda$core$Int64* $tmp4502 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp4502 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp4504;
    org$pandalanguage$pandac$Type* $tmp4507;
    org$pandalanguage$pandac$IRNode* $tmp4508;
    org$pandalanguage$pandac$IRNode* $tmp4511;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4503 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4503 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4505 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4504 = *$tmp4505;
        org$pandalanguage$pandac$Type** $tmp4506 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4507 = p_f1;
        *$tmp4506 = $tmp4507;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4507));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4504));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4509 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4508 = *$tmp4509;
        org$pandalanguage$pandac$IRNode** $tmp4510 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4511 = p_f2;
        *$tmp4510 = $tmp4511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4508));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4512;
    org$pandalanguage$pandac$IRNode* $tmp4515;
    org$pandalanguage$pandac$IRNode* $tmp4516;
    org$pandalanguage$pandac$IRNode* $tmp4519;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4513 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4512 = *$tmp4513;
        org$pandalanguage$pandac$IRNode** $tmp4514 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4515 = p_f0;
        *$tmp4514 = $tmp4515;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4512));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4517 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4516 = *$tmp4517;
        org$pandalanguage$pandac$IRNode** $tmp4518 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4519 = p_f1;
        *$tmp4518 = $tmp4519;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4516));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp4521;
    panda$core$String* $tmp4524;
    panda$collections$ImmutableArray* $tmp4525;
    panda$collections$ImmutableArray* $tmp4528;
    org$pandalanguage$pandac$IRNode* $tmp4529;
    org$pandalanguage$pandac$IRNode* $tmp4532;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4520 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4520 = p_f0;
    {
        panda$core$String** $tmp4522 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4521 = *$tmp4522;
        panda$core$String** $tmp4523 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4524 = p_f1;
        *$tmp4523 = $tmp4524;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4521));
    }
    {
        panda$collections$ImmutableArray** $tmp4526 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4525 = *$tmp4526;
        panda$collections$ImmutableArray** $tmp4527 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4528 = p_f2;
        *$tmp4527 = $tmp4528;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4528));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4525));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4530 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4529 = *$tmp4530;
        org$pandalanguage$pandac$IRNode** $tmp4531 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4532 = p_f3;
        *$tmp4531 = $tmp4532;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4529));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4533;
    org$pandalanguage$pandac$IRNode* $tmp4536;
    panda$collections$ImmutableArray* $tmp4537;
    panda$collections$ImmutableArray* $tmp4540;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4534 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4533 = *$tmp4534;
        org$pandalanguage$pandac$IRNode** $tmp4535 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4536 = p_f0;
        *$tmp4535 = $tmp4536;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4536));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4533));
    }
    {
        panda$collections$ImmutableArray** $tmp4538 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp4537 = *$tmp4538;
        panda$collections$ImmutableArray** $tmp4539 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp4540 = p_f1;
        *$tmp4539 = $tmp4540;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4540));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4537));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4541;
    org$pandalanguage$pandac$IRNode* $tmp4544;
    org$pandalanguage$pandac$IRNode* $tmp4545;
    org$pandalanguage$pandac$IRNode* $tmp4548;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4542 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4541 = *$tmp4542;
        org$pandalanguage$pandac$IRNode** $tmp4543 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4544 = p_f0;
        *$tmp4543 = $tmp4544;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4544));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4541));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4546 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4545 = *$tmp4546;
        org$pandalanguage$pandac$IRNode** $tmp4547 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4548 = p_f1;
        *$tmp4547 = $tmp4548;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4548));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4545));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4550;
    org$pandalanguage$pandac$Type* $tmp4553;
    org$pandalanguage$pandac$IRNode* $tmp4554;
    org$pandalanguage$pandac$IRNode* $tmp4557;
    org$pandalanguage$pandac$FieldDecl* $tmp4558;
    org$pandalanguage$pandac$FieldDecl* $tmp4561;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4549 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4549 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4551 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4550 = *$tmp4551;
        org$pandalanguage$pandac$Type** $tmp4552 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4553 = p_f1;
        *$tmp4552 = $tmp4553;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4553));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4550));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4555 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4554 = *$tmp4555;
        org$pandalanguage$pandac$IRNode** $tmp4556 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4557 = p_f2;
        *$tmp4556 = $tmp4557;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4554));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp4559 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp4558 = *$tmp4559;
        org$pandalanguage$pandac$FieldDecl** $tmp4560 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp4561 = p_f3;
        *$tmp4560 = $tmp4561;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4561));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4558));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4563;
    org$pandalanguage$pandac$IRNode* $tmp4566;
    panda$collections$ImmutableArray* $tmp4567;
    panda$collections$ImmutableArray* $tmp4570;
    org$pandalanguage$pandac$IRNode* $tmp4571;
    org$pandalanguage$pandac$IRNode* $tmp4574;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4562 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4562 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4564 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4563 = *$tmp4564;
        org$pandalanguage$pandac$IRNode** $tmp4565 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4566 = p_f1;
        *$tmp4565 = $tmp4566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4563));
    }
    {
        panda$collections$ImmutableArray** $tmp4568 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4567 = *$tmp4568;
        panda$collections$ImmutableArray** $tmp4569 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4570 = p_f2;
        *$tmp4569 = $tmp4570;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4570));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4567));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4572 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4571 = *$tmp4572;
        org$pandalanguage$pandac$IRNode** $tmp4573 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4574 = p_f3;
        *$tmp4573 = $tmp4574;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4574));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4571));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4576;
    org$pandalanguage$pandac$Type* $tmp4579;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4575 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4575 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4577 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4576 = *$tmp4577;
        org$pandalanguage$pandac$Type** $tmp4578 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4579 = p_f1;
        *$tmp4578 = $tmp4579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4576));
    }
    panda$core$UInt64* $tmp4580 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp4580 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4582;
    org$pandalanguage$pandac$IRNode* $tmp4585;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4581 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4581 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4583 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4582 = *$tmp4583;
        org$pandalanguage$pandac$IRNode** $tmp4584 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4585 = p_f1;
        *$tmp4584 = $tmp4585;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4582));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp4587;
    panda$core$String* $tmp4590;
    panda$collections$ImmutableArray* $tmp4591;
    panda$collections$ImmutableArray* $tmp4594;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4586 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4586 = p_f0;
    {
        panda$core$String** $tmp4588 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4587 = *$tmp4588;
        panda$core$String** $tmp4589 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4590 = p_f1;
        *$tmp4589 = $tmp4590;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4587));
    }
    {
        panda$collections$ImmutableArray** $tmp4592 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4591 = *$tmp4592;
        panda$collections$ImmutableArray** $tmp4593 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4594 = p_f2;
        *$tmp4593 = $tmp4594;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4591));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4596;
    org$pandalanguage$pandac$IRNode* $tmp4599;
    panda$collections$ImmutableArray* $tmp4600;
    panda$collections$ImmutableArray* $tmp4603;
    panda$collections$ImmutableArray* $tmp4604;
    panda$collections$ImmutableArray* $tmp4607;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4595 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4595 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4597 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4596 = *$tmp4597;
        org$pandalanguage$pandac$IRNode** $tmp4598 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4599 = p_f1;
        *$tmp4598 = $tmp4599;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4596));
    }
    {
        panda$collections$ImmutableArray** $tmp4601 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4600 = *$tmp4601;
        panda$collections$ImmutableArray** $tmp4602 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4603 = p_f2;
        *$tmp4602 = $tmp4603;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4603));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4600));
    }
    {
        panda$collections$ImmutableArray** $tmp4605 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4604 = *$tmp4605;
        panda$collections$ImmutableArray** $tmp4606 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4607 = p_f3;
        *$tmp4606 = $tmp4607;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4607));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4604));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4609;
    org$pandalanguage$pandac$Type* $tmp4612;
    org$pandalanguage$pandac$IRNode* $tmp4613;
    org$pandalanguage$pandac$IRNode* $tmp4616;
    org$pandalanguage$pandac$MethodRef* $tmp4617;
    org$pandalanguage$pandac$MethodRef* $tmp4620;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4608 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4608 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4610 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4609 = *$tmp4610;
        org$pandalanguage$pandac$Type** $tmp4611 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4612 = p_f1;
        *$tmp4611 = $tmp4612;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4612));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4609));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4614 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4613 = *$tmp4614;
        org$pandalanguage$pandac$IRNode** $tmp4615 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4616 = p_f2;
        *$tmp4615 = $tmp4616;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4616));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4613));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp4618 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp4617 = *$tmp4618;
        org$pandalanguage$pandac$MethodRef** $tmp4619 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp4620 = p_f3;
        *$tmp4619 = $tmp4620;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4620));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4617));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4623;
    org$pandalanguage$pandac$IRNode* $tmp4626;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4621 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4621 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp4622 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp4622 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp4624 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4623 = *$tmp4624;
        org$pandalanguage$pandac$IRNode** $tmp4625 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4626 = p_f2;
        *$tmp4625 = $tmp4626;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4626));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4623));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp4628;
    panda$core$String* $tmp4631;
    org$pandalanguage$pandac$IRNode* $tmp4632;
    org$pandalanguage$pandac$IRNode* $tmp4635;
    org$pandalanguage$pandac$IRNode* $tmp4636;
    org$pandalanguage$pandac$IRNode* $tmp4639;
    panda$collections$ImmutableArray* $tmp4640;
    panda$collections$ImmutableArray* $tmp4643;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4627 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4627 = p_f0;
    {
        panda$core$String** $tmp4629 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4628 = *$tmp4629;
        panda$core$String** $tmp4630 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4631 = p_f1;
        *$tmp4630 = $tmp4631;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4628));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4633 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4632 = *$tmp4633;
        org$pandalanguage$pandac$IRNode** $tmp4634 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4635 = p_f2;
        *$tmp4634 = $tmp4635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4632));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4637 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4636 = *$tmp4637;
        org$pandalanguage$pandac$IRNode** $tmp4638 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4639 = p_f3;
        *$tmp4638 = $tmp4639;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4639));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4636));
    }
    {
        panda$collections$ImmutableArray** $tmp4641 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4640 = *$tmp4641;
        panda$collections$ImmutableArray** $tmp4642 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4643 = p_f4;
        *$tmp4642 = $tmp4643;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4643));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4640));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4645;
    org$pandalanguage$pandac$Type* $tmp4648;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4644 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4644 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4646 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4645 = *$tmp4646;
        org$pandalanguage$pandac$Type** $tmp4647 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4648 = p_f1;
        *$tmp4647 = $tmp4648;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4645));
    }
    panda$core$Real64* $tmp4649 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp4649 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4651;
    org$pandalanguage$pandac$IRNode* $tmp4654;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4650 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4650 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4652 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4651 = *$tmp4652;
        org$pandalanguage$pandac$IRNode** $tmp4653 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4654 = p_f1;
        *$tmp4653 = $tmp4654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4651));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4656;
    org$pandalanguage$pandac$Type* $tmp4659;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4655 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4655 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4657 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4656 = *$tmp4657;
        org$pandalanguage$pandac$Type** $tmp4658 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4659 = p_f1;
        *$tmp4658 = $tmp4659;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4659));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4656));
    }
    panda$core$Int64* $tmp4660 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp4660 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4661;
    org$pandalanguage$pandac$IRNode* $tmp4664;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4662 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4661 = *$tmp4662;
        org$pandalanguage$pandac$IRNode** $tmp4663 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4664 = p_f0;
        *$tmp4663 = $tmp4664;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4664));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4661));
    }
    panda$core$Int64* $tmp4665 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp4665 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp4667;
    panda$core$String* $tmp4670;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4666 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4666 = p_f0;
    {
        panda$core$String** $tmp4668 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4667 = *$tmp4668;
        panda$core$String** $tmp4669 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4670 = p_f1;
        *$tmp4669 = $tmp4670;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4670));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4667));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4672;
    org$pandalanguage$pandac$IRNode* $tmp4675;
    org$pandalanguage$pandac$IRNode* $tmp4676;
    org$pandalanguage$pandac$IRNode* $tmp4679;
    org$pandalanguage$pandac$IRNode* $tmp4680;
    org$pandalanguage$pandac$IRNode* $tmp4683;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4671 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4671 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4673 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4672 = *$tmp4673;
        org$pandalanguage$pandac$IRNode** $tmp4674 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4675 = p_f1;
        *$tmp4674 = $tmp4675;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4675));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4672));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4677 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4676 = *$tmp4677;
        org$pandalanguage$pandac$IRNode** $tmp4678 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4679 = p_f2;
        *$tmp4678 = $tmp4679;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4676));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4681 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4680 = *$tmp4681;
        org$pandalanguage$pandac$IRNode** $tmp4682 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4683 = p_f3;
        *$tmp4682 = $tmp4683;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4683));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4680));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4685;
    org$pandalanguage$pandac$Type* $tmp4688;
    org$pandalanguage$pandac$IRNode* $tmp4689;
    org$pandalanguage$pandac$IRNode* $tmp4692;
    panda$collections$ImmutableArray* $tmp4693;
    panda$collections$ImmutableArray* $tmp4696;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4684 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4684 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4686 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4685 = *$tmp4686;
        org$pandalanguage$pandac$Type** $tmp4687 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4688 = p_f1;
        *$tmp4687 = $tmp4688;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4688));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4685));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4690 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4689 = *$tmp4690;
        org$pandalanguage$pandac$IRNode** $tmp4691 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4692 = p_f2;
        *$tmp4691 = $tmp4692;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4689));
    }
    {
        panda$collections$ImmutableArray** $tmp4694 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4693 = *$tmp4694;
        panda$collections$ImmutableArray** $tmp4695 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4696 = p_f3;
        *$tmp4695 = $tmp4696;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4696));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4693));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp4698;
    panda$collections$ImmutableArray* $tmp4701;
    org$pandalanguage$pandac$ASTNode* $tmp4702;
    org$pandalanguage$pandac$ASTNode* $tmp4705;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4697 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4697 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4699 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4698 = *$tmp4699;
        panda$collections$ImmutableArray** $tmp4700 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4701 = p_f1;
        *$tmp4700 = $tmp4701;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4701));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4698));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp4703 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp4702 = *$tmp4703;
        org$pandalanguage$pandac$ASTNode** $tmp4704 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp4705 = p_f2;
        *$tmp4704 = $tmp4705;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4705));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4702));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp4707;
    org$pandalanguage$pandac$Type* $tmp4710;
    org$pandalanguage$pandac$IRNode* $tmp4711;
    org$pandalanguage$pandac$IRNode* $tmp4714;
    panda$collections$ImmutableArray* $tmp4715;
    panda$collections$ImmutableArray* $tmp4718;
    panda$collections$ImmutableArray* $tmp4719;
    panda$collections$ImmutableArray* $tmp4722;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4706 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4706 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4708 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4707 = *$tmp4708;
        org$pandalanguage$pandac$Type** $tmp4709 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4710 = p_f1;
        *$tmp4709 = $tmp4710;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4710));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4707));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4712 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4711 = *$tmp4712;
        org$pandalanguage$pandac$IRNode** $tmp4713 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4714 = p_f2;
        *$tmp4713 = $tmp4714;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4714));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4711));
    }
    {
        panda$collections$ImmutableArray** $tmp4716 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4715 = *$tmp4716;
        panda$collections$ImmutableArray** $tmp4717 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4718 = p_f3;
        *$tmp4717 = $tmp4718;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4718));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4715));
    }
    {
        panda$collections$ImmutableArray** $tmp4720 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4719 = *$tmp4720;
        panda$collections$ImmutableArray** $tmp4721 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4722 = p_f4;
        *$tmp4721 = $tmp4722;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4722));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4719));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4724;
    org$pandalanguage$pandac$IRNode* $tmp4727;
    panda$collections$ImmutableArray* $tmp4728;
    panda$collections$ImmutableArray* $tmp4731;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4723 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4723 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4725 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4724 = *$tmp4725;
        org$pandalanguage$pandac$IRNode** $tmp4726 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4727 = p_f1;
        *$tmp4726 = $tmp4727;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4727));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4724));
    }
    {
        panda$collections$ImmutableArray** $tmp4729 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4728 = *$tmp4729;
        panda$collections$ImmutableArray** $tmp4730 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4731 = p_f2;
        *$tmp4730 = $tmp4731;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4731));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4728));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp4733;
    org$pandalanguage$pandac$IRNode* $tmp4736;
    org$pandalanguage$pandac$IRNode* $tmp4737;
    org$pandalanguage$pandac$IRNode* $tmp4740;
    org$pandalanguage$pandac$IRNode* $tmp4742;
    org$pandalanguage$pandac$IRNode* $tmp4745;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4732 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4732 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4734 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4733 = *$tmp4734;
        org$pandalanguage$pandac$IRNode** $tmp4735 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4736 = p_f1;
        *$tmp4735 = $tmp4736;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4736));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4733));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4738 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4737 = *$tmp4738;
        org$pandalanguage$pandac$IRNode** $tmp4739 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4740 = p_f2;
        *$tmp4739 = $tmp4740;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4740));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4737));
    }
    panda$core$Bit* $tmp4741 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp4741 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp4743 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp4742 = *$tmp4743;
        org$pandalanguage$pandac$IRNode** $tmp4744 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp4745 = p_f4;
        *$tmp4744 = $tmp4745;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4745));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4742));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp4748;
    panda$collections$ImmutableArray* $tmp4751;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4746 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4746 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp4747 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp4747 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp4749 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4748 = *$tmp4749;
        panda$collections$ImmutableArray** $tmp4750 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4751 = p_f2;
        *$tmp4750 = $tmp4751;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4751));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4748));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$Type* p_f2) {
    panda$core$String* $tmp4753;
    panda$core$String* $tmp4756;
    org$pandalanguage$pandac$Type* $tmp4757;
    org$pandalanguage$pandac$Type* $tmp4760;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4752 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4752 = p_f0;
    {
        panda$core$String** $tmp4754 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4753 = *$tmp4754;
        panda$core$String** $tmp4755 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4756 = p_f1;
        *$tmp4755 = $tmp4756;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4756));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4753));
    }
    {
        org$pandalanguage$pandac$Type** $tmp4758 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4757 = *$tmp4758;
        org$pandalanguage$pandac$Type** $tmp4759 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4760 = p_f2;
        *$tmp4759 = $tmp4760;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4760));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4757));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp4762;
    org$pandalanguage$pandac$Variable* $tmp4765;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4761 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4761 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp4763 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp4762 = *$tmp4763;
        org$pandalanguage$pandac$Variable** $tmp4764 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp4765 = p_f1;
        *$tmp4764 = $tmp4765;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4765));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4762));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp4767;
    panda$core$String* $tmp4770;
    org$pandalanguage$pandac$IRNode* $tmp4771;
    org$pandalanguage$pandac$IRNode* $tmp4774;
    panda$collections$ImmutableArray* $tmp4775;
    panda$collections$ImmutableArray* $tmp4778;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4766 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4766 = p_f0;
    {
        panda$core$String** $tmp4768 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4767 = *$tmp4768;
        panda$core$String** $tmp4769 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4770 = p_f1;
        *$tmp4769 = $tmp4770;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4770));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4767));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4772 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4771 = *$tmp4772;
        org$pandalanguage$pandac$IRNode** $tmp4773 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4774 = p_f2;
        *$tmp4773 = $tmp4774;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4774));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4771));
    }
    {
        panda$collections$ImmutableArray** $tmp4776 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4775 = *$tmp4776;
        panda$collections$ImmutableArray** $tmp4777 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4778 = p_f3;
        *$tmp4777 = $tmp4778;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4778));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4775));
    }
}

