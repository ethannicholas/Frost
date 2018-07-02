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
typedef org$pandalanguage$pandac$Position (*$fn405)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn419)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn427)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn525)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn653)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn656)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn678)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn682)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn704)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn711)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn722)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn724)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn760)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn767)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn778)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn780)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn813)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn835)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn848)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn861)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn868)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn879)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn881)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn911)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn924)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn931)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn942)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn944)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn953)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn966)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn974)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn992)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn999)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1010)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1012)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1032)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1045)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1052)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1063)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1065)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1082)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1089)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1100)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1102)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1133)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1143)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1174)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1176)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1197)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1210)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1244)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1247)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1251)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1309)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1316)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1327)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1329)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1365)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1372)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1383)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1385)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1402)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1409)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1420)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1422)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1440)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1453)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1460)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1471)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1473)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Int64 (*$fn1503)(panda$collections$CollectionView*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1558)(org$pandalanguage$pandac$IRNode*, panda$core$MutableMethod*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1597)(panda$core$Object*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1598)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1752)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1755)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1793)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn1796)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn1849)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1852)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn1881)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn2015)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2018)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2050)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2053)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2085)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2088)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2157)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2160)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2163)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2274)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2277)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn2280)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2368)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2371)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2458)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2461)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2464)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2522)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$collections$ImmutableArray* (*$fn2525)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef org$pandalanguage$pandac$IRNode* (*$fn2561)(org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*);
typedef panda$collections$ImmutableArray* (*$fn2564)(org$pandalanguage$pandac$IRNode*, panda$collections$ImmutableArray*, panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn2640)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2683)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2690)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2701)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2739)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2746)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2757)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2773)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2780)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2791)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2841)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2859)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2892)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2932)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2983)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn2988)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3003)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn3008)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3044)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3051)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3062)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3093)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3101)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$core$String* (*$fn3119)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3139)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3180)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3187)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3198)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3282)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3289)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3300)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3345)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3352)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3363)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn3379)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3386)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3397)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3424)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn3514)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3521)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3532)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn3695)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3702)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3724)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3762)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3784)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3802)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn3886)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3927)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn3936)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3977)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3984)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3995)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s3141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s3211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s3303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s3466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s3583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s3587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s3622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 15, 7664694969176949793, NULL };
static panda$core$String $s3631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s3656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s3661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s3664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s3730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s3751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s3779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3787 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s3804 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s3810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s3846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s3879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x63\x61\x70\x74\x75\x72\x65\x2a\x2d", 11, -3294192213738444701, NULL };
static panda$core$String $s3923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s3930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s3965 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s3967 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s3998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s4014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s4019 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

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
    if (false) goto $l313; else goto $l314;
    $l314:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s315, (panda$core$Int64) { 75 }, &$s316);
    abort();
    $l313:;
    abort();
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$156_9320 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp321;
    panda$core$Int64 $tmp322;
    org$pandalanguage$pandac$Position position324;
    org$pandalanguage$pandac$Position $returnValue326;
    panda$core$Int64 $tmp329;
    org$pandalanguage$pandac$Position position331;
    panda$core$Int64 $tmp335;
    org$pandalanguage$pandac$Position position337;
    panda$core$Int64 $tmp341;
    org$pandalanguage$pandac$Position position343;
    panda$core$Int64 $tmp347;
    org$pandalanguage$pandac$Position position349;
    panda$core$Int64 $tmp353;
    org$pandalanguage$pandac$Position position355;
    panda$core$Int64 $tmp359;
    org$pandalanguage$pandac$Position position361;
    panda$core$Int64 $tmp365;
    org$pandalanguage$pandac$Position position367;
    panda$core$Int64 $tmp371;
    org$pandalanguage$pandac$Position position373;
    panda$core$Int64 $tmp377;
    org$pandalanguage$pandac$Position position379;
    panda$core$Int64 $tmp383;
    org$pandalanguage$pandac$Position position385;
    panda$core$Int64 $tmp389;
    org$pandalanguage$pandac$Position position391;
    panda$core$Int64 $tmp395;
    org$pandalanguage$pandac$Position position397;
    panda$core$Int64 $tmp401;
    org$pandalanguage$pandac$IRNode* target403 = NULL;
    panda$core$Int64 $tmp409;
    org$pandalanguage$pandac$Position position411;
    panda$core$Int64 $tmp415;
    org$pandalanguage$pandac$IRNode* m417 = NULL;
    panda$core$Int64 $tmp423;
    org$pandalanguage$pandac$IRNode* expr425 = NULL;
    panda$core$Int64 $tmp431;
    org$pandalanguage$pandac$Position position433;
    panda$core$Int64 $tmp437;
    org$pandalanguage$pandac$Position position439;
    panda$core$Int64 $tmp443;
    org$pandalanguage$pandac$Position position445;
    panda$core$Int64 $tmp449;
    org$pandalanguage$pandac$Position position451;
    panda$core$Int64 $tmp455;
    org$pandalanguage$pandac$Position position457;
    panda$core$Int64 $tmp461;
    org$pandalanguage$pandac$Position position463;
    panda$core$Int64 $tmp467;
    org$pandalanguage$pandac$Position position469;
    panda$core$Int64 $tmp473;
    org$pandalanguage$pandac$Position position475;
    panda$core$Int64 $tmp479;
    org$pandalanguage$pandac$Position position481;
    panda$core$Int64 $tmp485;
    org$pandalanguage$pandac$Position position487;
    panda$core$Int64 $tmp491;
    org$pandalanguage$pandac$Position position493;
    panda$core$Int64 $tmp497;
    org$pandalanguage$pandac$Position position499;
    panda$core$Int64 $tmp503;
    org$pandalanguage$pandac$Position position505;
    panda$core$Int64 $tmp509;
    org$pandalanguage$pandac$Position position511;
    panda$core$Int64 $tmp515;
    org$pandalanguage$pandac$Position position517;
    panda$core$Int64 $tmp521;
    org$pandalanguage$pandac$IRNode* base523 = NULL;
    panda$core$Int64 $tmp529;
    org$pandalanguage$pandac$Position position531;
    panda$core$Int64 $tmp535;
    org$pandalanguage$pandac$Position position537;
    panda$core$Int64 $tmp541;
    org$pandalanguage$pandac$Position position543;
    panda$core$Int64 $tmp547;
    org$pandalanguage$pandac$Position position549;
    panda$core$Int64 $tmp553;
    org$pandalanguage$pandac$Position position555;
    panda$core$Int64 $tmp559;
    org$pandalanguage$pandac$Position position561;
    panda$core$Int64 $tmp565;
    org$pandalanguage$pandac$Position position567;
    panda$core$Int64 $tmp571;
    org$pandalanguage$pandac$Position position573;
    panda$core$Int64 $tmp577;
    org$pandalanguage$pandac$Position position579;
    panda$core$Int64 $tmp583;
    org$pandalanguage$pandac$Position position585;
    panda$core$Int64 $tmp589;
    org$pandalanguage$pandac$Position position591;
    panda$core$Int64 $tmp595;
    org$pandalanguage$pandac$Position position597;
    panda$core$Int64 $tmp601;
    org$pandalanguage$pandac$Position position603;
    panda$core$Int64 $tmp607;
    org$pandalanguage$pandac$Position position609;
    panda$core$Int64 $tmp613;
    org$pandalanguage$pandac$Position position615;
    panda$core$Int64 $tmp619;
    org$pandalanguage$pandac$Position position621;
    panda$core$Int64 $tmp625;
    org$pandalanguage$pandac$Position position627;
    panda$core$Bit $tmp631;
    int $tmp319;
    {
        $tmp321 = self;
        $match$156_9320 = $tmp321;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
        panda$core$Int64$init$builtin_int64(&$tmp322, 0);
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp322);
        if ($tmp323.value) {
        {
            org$pandalanguage$pandac$Position* $tmp325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position324 = *$tmp325;
            $returnValue326 = position324;
            $tmp319 = 0;
            goto $l317;
            $l327:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp329, 1);
        panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp329);
        if ($tmp330.value) {
        {
            org$pandalanguage$pandac$Position* $tmp332 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position331 = *$tmp332;
            $returnValue326 = position331;
            $tmp319 = 1;
            goto $l317;
            $l333:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp335, 2);
        panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp335);
        if ($tmp336.value) {
        {
            org$pandalanguage$pandac$Position* $tmp338 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position337 = *$tmp338;
            $returnValue326 = position337;
            $tmp319 = 2;
            goto $l317;
            $l339:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp341, 3);
        panda$core$Bit $tmp342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp341);
        if ($tmp342.value) {
        {
            org$pandalanguage$pandac$Position* $tmp344 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position343 = *$tmp344;
            $returnValue326 = position343;
            $tmp319 = 3;
            goto $l317;
            $l345:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp347, 4);
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp347);
        if ($tmp348.value) {
        {
            org$pandalanguage$pandac$Position* $tmp350 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position349 = *$tmp350;
            $returnValue326 = position349;
            $tmp319 = 4;
            goto $l317;
            $l351:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp353, 6);
        panda$core$Bit $tmp354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp353);
        if ($tmp354.value) {
        {
            org$pandalanguage$pandac$Position* $tmp356 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position355 = *$tmp356;
            $returnValue326 = position355;
            $tmp319 = 5;
            goto $l317;
            $l357:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp359, 7);
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp359);
        if ($tmp360.value) {
        {
            org$pandalanguage$pandac$Position* $tmp362 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position361 = *$tmp362;
            $returnValue326 = position361;
            $tmp319 = 6;
            goto $l317;
            $l363:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp365, 8);
        panda$core$Bit $tmp366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp365);
        if ($tmp366.value) {
        {
            org$pandalanguage$pandac$Position* $tmp368 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position367 = *$tmp368;
            $returnValue326 = position367;
            $tmp319 = 7;
            goto $l317;
            $l369:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp371, 9);
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp371);
        if ($tmp372.value) {
        {
            org$pandalanguage$pandac$Position* $tmp374 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position373 = *$tmp374;
            $returnValue326 = position373;
            $tmp319 = 8;
            goto $l317;
            $l375:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp377, 10);
        panda$core$Bit $tmp378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp377);
        if ($tmp378.value) {
        {
            org$pandalanguage$pandac$Position* $tmp380 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position379 = *$tmp380;
            $returnValue326 = position379;
            $tmp319 = 9;
            goto $l317;
            $l381:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp383, 11);
        panda$core$Bit $tmp384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp383);
        if ($tmp384.value) {
        {
            org$pandalanguage$pandac$Position* $tmp386 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position385 = *$tmp386;
            $returnValue326 = position385;
            $tmp319 = 10;
            goto $l317;
            $l387:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp389, 12);
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp389);
        if ($tmp390.value) {
        {
            org$pandalanguage$pandac$Position* $tmp392 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position391 = *$tmp392;
            $returnValue326 = position391;
            $tmp319 = 11;
            goto $l317;
            $l393:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp395, 13);
        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp395);
        if ($tmp396.value) {
        {
            org$pandalanguage$pandac$Position* $tmp398 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position397 = *$tmp398;
            $returnValue326 = position397;
            $tmp319 = 12;
            goto $l317;
            $l399:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp401, 14);
        panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp401);
        if ($tmp402.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp404 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9320->$data + 0));
            target403 = *$tmp404;
            org$pandalanguage$pandac$Position $tmp406 = (($fn405) target403->$class->vtable[3])(target403);
            $returnValue326 = $tmp406;
            $tmp319 = 13;
            goto $l317;
            $l407:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp409, 15);
        panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp409);
        if ($tmp410.value) {
        {
            org$pandalanguage$pandac$Position* $tmp412 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position411 = *$tmp412;
            $returnValue326 = position411;
            $tmp319 = 14;
            goto $l317;
            $l413:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp415, 16);
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp415);
        if ($tmp416.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp418 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9320->$data + 0));
            m417 = *$tmp418;
            org$pandalanguage$pandac$Position $tmp420 = (($fn419) m417->$class->vtable[3])(m417);
            $returnValue326 = $tmp420;
            $tmp319 = 15;
            goto $l317;
            $l421:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp423, 17);
        panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp423);
        if ($tmp424.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp426 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9320->$data + 0));
            expr425 = *$tmp426;
            org$pandalanguage$pandac$Position $tmp428 = (($fn427) expr425->$class->vtable[3])(expr425);
            $returnValue326 = $tmp428;
            $tmp319 = 16;
            goto $l317;
            $l429:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp431, 18);
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp431);
        if ($tmp432.value) {
        {
            org$pandalanguage$pandac$Position* $tmp434 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position433 = *$tmp434;
            $returnValue326 = position433;
            $tmp319 = 17;
            goto $l317;
            $l435:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp437, 19);
        panda$core$Bit $tmp438 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp437);
        if ($tmp438.value) {
        {
            org$pandalanguage$pandac$Position* $tmp440 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position439 = *$tmp440;
            $returnValue326 = position439;
            $tmp319 = 18;
            goto $l317;
            $l441:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp443, 20);
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp443);
        if ($tmp444.value) {
        {
            org$pandalanguage$pandac$Position* $tmp446 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position445 = *$tmp446;
            $returnValue326 = position445;
            $tmp319 = 19;
            goto $l317;
            $l447:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp449, 21);
        panda$core$Bit $tmp450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp449);
        if ($tmp450.value) {
        {
            org$pandalanguage$pandac$Position* $tmp452 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position451 = *$tmp452;
            $returnValue326 = position451;
            $tmp319 = 20;
            goto $l317;
            $l453:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp455, 22);
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp455);
        if ($tmp456.value) {
        {
            org$pandalanguage$pandac$Position* $tmp458 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position457 = *$tmp458;
            $returnValue326 = position457;
            $tmp319 = 21;
            goto $l317;
            $l459:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp461, 23);
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp461);
        if ($tmp462.value) {
        {
            org$pandalanguage$pandac$Position* $tmp464 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position463 = *$tmp464;
            $returnValue326 = position463;
            $tmp319 = 22;
            goto $l317;
            $l465:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp467, 24);
        panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp467);
        if ($tmp468.value) {
        {
            org$pandalanguage$pandac$Position* $tmp470 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position469 = *$tmp470;
            $returnValue326 = position469;
            $tmp319 = 23;
            goto $l317;
            $l471:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp473, 25);
        panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp473);
        if ($tmp474.value) {
        {
            org$pandalanguage$pandac$Position* $tmp476 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position475 = *$tmp476;
            $returnValue326 = position475;
            $tmp319 = 24;
            goto $l317;
            $l477:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp479, 26);
        panda$core$Bit $tmp480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp479);
        if ($tmp480.value) {
        {
            org$pandalanguage$pandac$Position* $tmp482 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position481 = *$tmp482;
            $returnValue326 = position481;
            $tmp319 = 25;
            goto $l317;
            $l483:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp485, 27);
        panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp485);
        if ($tmp486.value) {
        {
            org$pandalanguage$pandac$Position* $tmp488 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position487 = *$tmp488;
            $returnValue326 = position487;
            $tmp319 = 26;
            goto $l317;
            $l489:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp491, 28);
        panda$core$Bit $tmp492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp491);
        if ($tmp492.value) {
        {
            org$pandalanguage$pandac$Position* $tmp494 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position493 = *$tmp494;
            $returnValue326 = position493;
            $tmp319 = 27;
            goto $l317;
            $l495:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp497, 29);
        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp497);
        if ($tmp498.value) {
        {
            org$pandalanguage$pandac$Position* $tmp500 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position499 = *$tmp500;
            $returnValue326 = position499;
            $tmp319 = 28;
            goto $l317;
            $l501:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp503, 30);
        panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp503);
        if ($tmp504.value) {
        {
            org$pandalanguage$pandac$Position* $tmp506 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position505 = *$tmp506;
            $returnValue326 = position505;
            $tmp319 = 29;
            goto $l317;
            $l507:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp509, 31);
        panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp509);
        if ($tmp510.value) {
        {
            org$pandalanguage$pandac$Position* $tmp512 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position511 = *$tmp512;
            $returnValue326 = position511;
            $tmp319 = 30;
            goto $l317;
            $l513:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp515, 32);
        panda$core$Bit $tmp516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp515);
        if ($tmp516.value) {
        {
            org$pandalanguage$pandac$Position* $tmp518 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position517 = *$tmp518;
            $returnValue326 = position517;
            $tmp319 = 31;
            goto $l317;
            $l519:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp521, 33);
        panda$core$Bit $tmp522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp521);
        if ($tmp522.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp524 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$156_9320->$data + 0));
            base523 = *$tmp524;
            org$pandalanguage$pandac$Position $tmp526 = (($fn525) base523->$class->vtable[3])(base523);
            $returnValue326 = $tmp526;
            $tmp319 = 32;
            goto $l317;
            $l527:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp529, 34);
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp529);
        if ($tmp530.value) {
        {
            org$pandalanguage$pandac$Position* $tmp532 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position531 = *$tmp532;
            $returnValue326 = position531;
            $tmp319 = 33;
            goto $l317;
            $l533:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp535, 35);
        panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp535);
        if ($tmp536.value) {
        {
            org$pandalanguage$pandac$Position* $tmp538 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position537 = *$tmp538;
            $returnValue326 = position537;
            $tmp319 = 34;
            goto $l317;
            $l539:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp541, 36);
        panda$core$Bit $tmp542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp541);
        if ($tmp542.value) {
        {
            org$pandalanguage$pandac$Position* $tmp544 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position543 = *$tmp544;
            $returnValue326 = position543;
            $tmp319 = 35;
            goto $l317;
            $l545:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp547, 37);
        panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp547);
        if ($tmp548.value) {
        {
            org$pandalanguage$pandac$Position* $tmp550 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position549 = *$tmp550;
            $returnValue326 = position549;
            $tmp319 = 36;
            goto $l317;
            $l551:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp553, 38);
        panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp553);
        if ($tmp554.value) {
        {
            org$pandalanguage$pandac$Position* $tmp556 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position555 = *$tmp556;
            $returnValue326 = position555;
            $tmp319 = 37;
            goto $l317;
            $l557:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp559, 39);
        panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp559);
        if ($tmp560.value) {
        {
            org$pandalanguage$pandac$Position* $tmp562 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position561 = *$tmp562;
            $returnValue326 = position561;
            $tmp319 = 38;
            goto $l317;
            $l563:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp565, 40);
        panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp565);
        if ($tmp566.value) {
        {
            org$pandalanguage$pandac$Position* $tmp568 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position567 = *$tmp568;
            $returnValue326 = position567;
            $tmp319 = 39;
            goto $l317;
            $l569:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp571, 41);
        panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp571);
        if ($tmp572.value) {
        {
            org$pandalanguage$pandac$Position* $tmp574 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position573 = *$tmp574;
            $returnValue326 = position573;
            $tmp319 = 40;
            goto $l317;
            $l575:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp577, 42);
        panda$core$Bit $tmp578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp577);
        if ($tmp578.value) {
        {
            org$pandalanguage$pandac$Position* $tmp580 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position579 = *$tmp580;
            $returnValue326 = position579;
            $tmp319 = 41;
            goto $l317;
            $l581:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp583, 43);
        panda$core$Bit $tmp584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp583);
        if ($tmp584.value) {
        {
            org$pandalanguage$pandac$Position* $tmp586 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position585 = *$tmp586;
            $returnValue326 = position585;
            $tmp319 = 42;
            goto $l317;
            $l587:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp589, 44);
        panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp589);
        if ($tmp590.value) {
        {
            org$pandalanguage$pandac$Position* $tmp592 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position591 = *$tmp592;
            $returnValue326 = position591;
            $tmp319 = 43;
            goto $l317;
            $l593:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp595, 45);
        panda$core$Bit $tmp596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp595);
        if ($tmp596.value) {
        {
            org$pandalanguage$pandac$Position* $tmp598 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position597 = *$tmp598;
            $returnValue326 = position597;
            $tmp319 = 44;
            goto $l317;
            $l599:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp601, 46);
        panda$core$Bit $tmp602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp601);
        if ($tmp602.value) {
        {
            org$pandalanguage$pandac$Position* $tmp604 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position603 = *$tmp604;
            $returnValue326 = position603;
            $tmp319 = 45;
            goto $l317;
            $l605:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp607, 47);
        panda$core$Bit $tmp608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp607);
        if ($tmp608.value) {
        {
            org$pandalanguage$pandac$Position* $tmp610 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position609 = *$tmp610;
            $returnValue326 = position609;
            $tmp319 = 46;
            goto $l317;
            $l611:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp613, 48);
        panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp613);
        if ($tmp614.value) {
        {
            org$pandalanguage$pandac$Position* $tmp616 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position615 = *$tmp616;
            $returnValue326 = position615;
            $tmp319 = 47;
            goto $l317;
            $l617:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp619, 49);
        panda$core$Bit $tmp620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp619);
        if ($tmp620.value) {
        {
            org$pandalanguage$pandac$Position* $tmp622 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position621 = *$tmp622;
            $returnValue326 = position621;
            $tmp319 = 48;
            goto $l317;
            $l623:;
            return $returnValue326;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp625, 50);
        panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$156_9320->$rawValue, $tmp625);
        if ($tmp626.value) {
        {
            org$pandalanguage$pandac$Position* $tmp628 = ((org$pandalanguage$pandac$Position*) ((char*) $match$156_9320->$data + 0));
            position627 = *$tmp628;
            $returnValue326 = position627;
            $tmp319 = 49;
            goto $l317;
            $l629:;
            return $returnValue326;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp631, false);
            if ($tmp631.value) goto $l632; else goto $l633;
            $l633:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s634, (panda$core$Int64) { 258 });
            abort();
            $l632:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp319 = -1;
    goto $l317;
    $l317:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
    switch ($tmp319) {
        case 9: goto $l381;
        case 38: goto $l563;
        case 36: goto $l551;
        case 15: goto $l421;
        case 43: goto $l593;
        case 31: goto $l519;
        case 27: goto $l495;
        case 16: goto $l429;
        case 32: goto $l527;
        case 8: goto $l375;
        case 7: goto $l369;
        case 17: goto $l435;
        case 49: goto $l629;
        case 42: goto $l587;
        case 0: goto $l327;
        case 26: goto $l489;
        case 1: goto $l333;
        case 45: goto $l605;
        case 34: goto $l539;
        case 35: goto $l545;
        case 24: goto $l477;
        case 14: goto $l413;
        case 44: goto $l599;
        case 20: goto $l453;
        case 25: goto $l483;
        case 18: goto $l441;
        case 2: goto $l339;
        case 3: goto $l345;
        case 4: goto $l351;
        case 33: goto $l533;
        case -1: goto $l635;
        case 19: goto $l447;
        case 21: goto $l459;
        case 22: goto $l465;
        case 46: goto $l611;
        case 40: goto $l575;
        case 30: goto $l513;
        case 5: goto $l357;
        case 11: goto $l393;
        case 13: goto $l407;
        case 12: goto $l399;
        case 29: goto $l507;
        case 10: goto $l387;
        case 39: goto $l569;
        case 6: goto $l363;
        case 48: goto $l623;
        case 23: goto $l471;
        case 47: goto $l617;
        case 28: goto $l501;
        case 37: goto $l557;
        case 41: goto $l581;
    }
    $l635:;
    if (false) goto $l636; else goto $l637;
    $l637:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s638, (panda$core$Int64) { 155 }, &$s639);
    abort();
    $l636:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$263_9643 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp644;
    panda$core$Int64 $tmp645;
    org$pandalanguage$pandac$IRNode* test647 = NULL;
    org$pandalanguage$pandac$IRNode* msg649 = NULL;
    panda$core$Bit $returnValue651;
    panda$core$Int64 $tmp661;
    panda$core$Bit $tmp663;
    panda$core$Int64 $tmp666;
    org$pandalanguage$pandac$IRNode* left668 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op670;
    org$pandalanguage$pandac$IRNode* right672 = NULL;
    panda$core$Int64 $tmp687;
    panda$core$Bit $tmp689;
    panda$core$Int64 $tmp692;
    panda$collections$ImmutableArray* statements694 = NULL;
    panda$collections$Iterator* Iter$273$17699 = NULL;
    panda$collections$Iterator* $tmp700;
    panda$collections$Iterator* $tmp701;
    org$pandalanguage$pandac$IRNode* s717 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp718;
    panda$core$Object* $tmp719;
    panda$core$Bit $tmp726;
    panda$core$Bit $tmp733;
    panda$core$Int64 $tmp736;
    panda$core$Bit $tmp738;
    panda$core$Int64 $tmp741;
    org$pandalanguage$pandac$MethodRef* m743 = NULL;
    panda$collections$ImmutableArray* args745 = NULL;
    panda$core$Int64 $tmp747;
    panda$core$Bit $tmp749;
    panda$collections$Iterator* Iter$285$17755 = NULL;
    panda$collections$Iterator* $tmp756;
    panda$collections$Iterator* $tmp757;
    org$pandalanguage$pandac$IRNode* arg773 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp774;
    panda$core$Object* $tmp775;
    panda$core$Bit $tmp782;
    panda$core$Bit $tmp789;
    panda$core$Int64 $tmp792;
    panda$core$Bit $tmp794;
    panda$core$Int64 $tmp797;
    panda$core$Bit $tmp799;
    panda$core$Int64 $tmp802;
    panda$core$Bit $tmp804;
    panda$core$Int64 $tmp807;
    org$pandalanguage$pandac$Type* type809 = NULL;
    org$pandalanguage$pandac$IRNode* call811 = NULL;
    panda$core$Int64 $tmp817;
    panda$core$Bit $tmp819;
    panda$core$Int64 $tmp822;
    panda$core$Bit $tmp824;
    panda$core$Int64 $tmp827;
    org$pandalanguage$pandac$IRNode* target829 = NULL;
    org$pandalanguage$pandac$IRNode* value831 = NULL;
    panda$core$Int64 $tmp840;
    panda$core$String* label842 = NULL;
    panda$collections$ImmutableArray* statements844 = NULL;
    org$pandalanguage$pandac$IRNode* test846 = NULL;
    panda$core$Bit $tmp850;
    panda$collections$Iterator* Iter$309$17856 = NULL;
    panda$collections$Iterator* $tmp857;
    panda$collections$Iterator* $tmp858;
    org$pandalanguage$pandac$IRNode* s874 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp875;
    panda$core$Object* $tmp876;
    panda$core$Bit $tmp883;
    panda$core$Bit $tmp890;
    panda$core$Int64 $tmp893;
    panda$core$Bit $tmp895;
    panda$core$Int64 $tmp898;
    panda$core$Bit $tmp900;
    panda$core$Int64 $tmp903;
    org$pandalanguage$pandac$IRNode* test905 = NULL;
    panda$collections$ImmutableArray* ifTrue907 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse909 = NULL;
    panda$core$Bit $tmp913;
    panda$collections$Iterator* Iter$323$17919 = NULL;
    panda$collections$Iterator* $tmp920;
    panda$collections$Iterator* $tmp921;
    org$pandalanguage$pandac$IRNode* s937 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp938;
    panda$core$Object* $tmp939;
    panda$core$Bit $tmp946;
    panda$core$Int64 $tmp957;
    panda$core$Bit $tmp959;
    panda$core$Int64 $tmp962;
    org$pandalanguage$pandac$IRNode* value964 = NULL;
    panda$core$Int64 $tmp970;
    org$pandalanguage$pandac$IRNode* value972 = NULL;
    panda$core$Int64 $tmp978;
    panda$core$String* label980 = NULL;
    panda$collections$ImmutableArray* statements982 = NULL;
    panda$collections$Iterator* Iter$336$17987 = NULL;
    panda$collections$Iterator* $tmp988;
    panda$collections$Iterator* $tmp989;
    org$pandalanguage$pandac$IRNode* s1005 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1006;
    panda$core$Object* $tmp1007;
    panda$core$Bit $tmp1014;
    panda$core$Bit $tmp1021;
    panda$core$Int64 $tmp1024;
    org$pandalanguage$pandac$IRNode* value1026 = NULL;
    panda$collections$ImmutableArray* whens1028 = NULL;
    panda$collections$ImmutableArray* other1030 = NULL;
    panda$core$Bit $tmp1034;
    panda$collections$Iterator* Iter$346$171040 = NULL;
    panda$collections$Iterator* $tmp1041;
    panda$collections$Iterator* $tmp1042;
    org$pandalanguage$pandac$IRNode* w1058 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1059;
    panda$core$Object* $tmp1060;
    panda$core$Bit $tmp1067;
    panda$collections$Iterator* Iter$351$171077 = NULL;
    panda$collections$Iterator* $tmp1078;
    panda$collections$Iterator* $tmp1079;
    org$pandalanguage$pandac$IRNode* s1095 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1096;
    panda$core$Object* $tmp1097;
    panda$core$Bit $tmp1104;
    panda$core$Bit $tmp1111;
    panda$core$Int64 $tmp1114;
    panda$core$Bit $tmp1116;
    panda$core$Int64 $tmp1119;
    panda$core$Bit $tmp1121;
    panda$core$Int64 $tmp1124;
    panda$core$Bit $tmp1126;
    panda$core$Int64 $tmp1129;
    org$pandalanguage$pandac$IRNode* base1131 = NULL;
    panda$core$Int64 $tmp1137;
    org$pandalanguage$pandac$IRNode* list1139 = NULL;
    panda$collections$ImmutableArray* statements1141 = NULL;
    panda$core$Bit $tmp1145;
    panda$collections$Iterator* Iter$370$171151 = NULL;
    panda$collections$Iterator* $tmp1152;
    panda$collections$Iterator* $tmp1153;
    org$pandalanguage$pandac$IRNode* s1169 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1170;
    panda$core$Object* $tmp1171;
    panda$core$Bit $tmp1178;
    panda$core$Bit $tmp1185;
    panda$core$Int64 $tmp1188;
    panda$core$Bit $tmp1190;
    panda$core$Int64 $tmp1193;
    org$pandalanguage$pandac$IRNode* value1195 = NULL;
    panda$core$Int64 $tmp1201;
    panda$core$Bit $tmp1203;
    panda$core$Int64 $tmp1206;
    org$pandalanguage$pandac$IRNode* base1208 = NULL;
    panda$core$Int64 $tmp1214;
    panda$core$Bit $tmp1216;
    panda$core$Int64 $tmp1219;
    panda$core$Bit $tmp1221;
    panda$core$Int64 $tmp1224;
    panda$core$Bit $tmp1226;
    panda$core$Int64 $tmp1229;
    panda$core$Bit $tmp1231;
    panda$core$Int64 $tmp1234;
    org$pandalanguage$pandac$IRNode* test1236 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1238 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1240 = NULL;
    panda$core$Int64 $tmp1256;
    panda$core$Bit $tmp1258;
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
    panda$core$Bit $tmp1293;
    panda$core$Int64 $tmp1297;
    panda$collections$ImmutableArray* decls1299 = NULL;
    panda$collections$Iterator* Iter$409$171304 = NULL;
    panda$collections$Iterator* $tmp1305;
    panda$collections$Iterator* $tmp1306;
    org$pandalanguage$pandac$IRNode* d1322 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1323;
    panda$core$Object* $tmp1324;
    panda$core$Bit $tmp1331;
    panda$core$Bit $tmp1338;
    panda$core$Int64 $tmp1341;
    panda$core$Bit $tmp1343;
    panda$core$Int64 $tmp1346;
    panda$core$Bit $tmp1348;
    panda$core$Int64 $tmp1351;
    panda$collections$ImmutableArray* tests1353 = NULL;
    panda$collections$ImmutableArray* statements1355 = NULL;
    panda$collections$Iterator* Iter$420$171360 = NULL;
    panda$collections$Iterator* $tmp1361;
    panda$collections$Iterator* $tmp1362;
    org$pandalanguage$pandac$IRNode* t1378 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1379;
    panda$core$Object* $tmp1380;
    panda$core$Bit $tmp1387;
    panda$collections$Iterator* Iter$425$171397 = NULL;
    panda$collections$Iterator* $tmp1398;
    panda$collections$Iterator* $tmp1399;
    org$pandalanguage$pandac$IRNode* s1415 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1416;
    panda$core$Object* $tmp1417;
    panda$core$Bit $tmp1424;
    panda$core$Bit $tmp1431;
    panda$core$Int64 $tmp1434;
    org$pandalanguage$pandac$IRNode* test1436 = NULL;
    panda$collections$ImmutableArray* statements1438 = NULL;
    panda$core$Bit $tmp1442;
    panda$collections$Iterator* Iter$435$171448 = NULL;
    panda$collections$Iterator* $tmp1449;
    panda$collections$Iterator* $tmp1450;
    org$pandalanguage$pandac$IRNode* s1466 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1467;
    panda$core$Object* $tmp1468;
    panda$core$Bit $tmp1475;
    panda$core$Bit $tmp1482;
    panda$core$Bit $tmp1485;
    int $tmp642;
    {
        $tmp644 = self;
        $match$263_9643 = $tmp644;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp644));
        panda$core$Int64$init$builtin_int64(&$tmp645, 0);
        panda$core$Bit $tmp646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp645);
        if ($tmp646.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp648 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 16));
            test647 = *$tmp648;
            org$pandalanguage$pandac$IRNode** $tmp650 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 24));
            msg649 = *$tmp650;
            panda$core$Bit $tmp654 = (($fn653) test647->$class->vtable[4])(test647);
            bool $tmp652 = $tmp654.value;
            if ($tmp652) goto $l655;
            panda$core$Bit $tmp657 = (($fn656) msg649->$class->vtable[4])(msg649);
            $tmp652 = $tmp657.value;
            $l655:;
            panda$core$Bit $tmp658 = { $tmp652 };
            $returnValue651 = $tmp658;
            $tmp642 = 0;
            goto $l640;
            $l659:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp661, 1);
        panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp661);
        if ($tmp662.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp663, false);
            $returnValue651 = $tmp663;
            $tmp642 = 1;
            goto $l640;
            $l664:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp666, 2);
        panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp666);
        if ($tmp667.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp669 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 24));
            left668 = *$tmp669;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp671 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$263_9643->$data + 32));
            op670 = *$tmp671;
            org$pandalanguage$pandac$IRNode** $tmp673 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 40));
            right672 = *$tmp673;
            panda$core$Bit $tmp676 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op670);
            bool $tmp675 = $tmp676.value;
            if ($tmp675) goto $l677;
            panda$core$Bit $tmp679 = (($fn678) left668->$class->vtable[4])(left668);
            $tmp675 = $tmp679.value;
            $l677:;
            panda$core$Bit $tmp680 = { $tmp675 };
            bool $tmp674 = $tmp680.value;
            if ($tmp674) goto $l681;
            panda$core$Bit $tmp683 = (($fn682) right672->$class->vtable[4])(right672);
            $tmp674 = $tmp683.value;
            $l681:;
            panda$core$Bit $tmp684 = { $tmp674 };
            $returnValue651 = $tmp684;
            $tmp642 = 2;
            goto $l640;
            $l685:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp687, 3);
        panda$core$Bit $tmp688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp687);
        if ($tmp688.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp689, false);
            $returnValue651 = $tmp689;
            $tmp642 = 3;
            goto $l640;
            $l690:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp692, 4);
        panda$core$Bit $tmp693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp692);
        if ($tmp693.value) {
        {
            panda$collections$ImmutableArray** $tmp695 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 16));
            statements694 = *$tmp695;
            {
                int $tmp698;
                {
                    ITable* $tmp702 = ((panda$collections$Iterable*) statements694)->$class->itable;
                    while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp702 = $tmp702->next;
                    }
                    $fn704 $tmp703 = $tmp702->methods[0];
                    panda$collections$Iterator* $tmp705 = $tmp703(((panda$collections$Iterable*) statements694));
                    $tmp701 = $tmp705;
                    $tmp700 = $tmp701;
                    Iter$273$17699 = $tmp700;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp700));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp701));
                    $l706:;
                    ITable* $tmp709 = Iter$273$17699->$class->itable;
                    while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp709 = $tmp709->next;
                    }
                    $fn711 $tmp710 = $tmp709->methods[0];
                    panda$core$Bit $tmp712 = $tmp710(Iter$273$17699);
                    panda$core$Bit $tmp713 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp712);
                    bool $tmp708 = $tmp713.value;
                    if (!$tmp708) goto $l707;
                    {
                        int $tmp716;
                        {
                            ITable* $tmp720 = Iter$273$17699->$class->itable;
                            while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp720 = $tmp720->next;
                            }
                            $fn722 $tmp721 = $tmp720->methods[1];
                            panda$core$Object* $tmp723 = $tmp721(Iter$273$17699);
                            $tmp719 = $tmp723;
                            $tmp718 = ((org$pandalanguage$pandac$IRNode*) $tmp719);
                            s717 = $tmp718;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp718));
                            panda$core$Panda$unref$panda$core$Object($tmp719);
                            panda$core$Bit $tmp725 = (($fn724) s717->$class->vtable[4])(s717);
                            if ($tmp725.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp726, true);
                                $returnValue651 = $tmp726;
                                $tmp716 = 0;
                                goto $l714;
                                $l727:;
                                $tmp698 = 0;
                                goto $l696;
                                $l728:;
                                $tmp642 = 4;
                                goto $l640;
                                $l729:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp716 = -1;
                        goto $l714;
                        $l714:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s717));
                        s717 = NULL;
                        switch ($tmp716) {
                            case 0: goto $l727;
                            case -1: goto $l731;
                        }
                        $l731:;
                    }
                    goto $l706;
                    $l707:;
                }
                $tmp698 = -1;
                goto $l696;
                $l696:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$273$17699));
                Iter$273$17699 = NULL;
                switch ($tmp698) {
                    case -1: goto $l732;
                    case 0: goto $l728;
                }
                $l732:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp733, false);
            $returnValue651 = $tmp733;
            $tmp642 = 5;
            goto $l640;
            $l734:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp736, 6);
        panda$core$Bit $tmp737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp736);
        if ($tmp737.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp738, false);
            $returnValue651 = $tmp738;
            $tmp642 = 6;
            goto $l640;
            $l739:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp741, 7);
        panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp741);
        if ($tmp742.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp744 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$263_9643->$data + 24));
            m743 = *$tmp744;
            panda$collections$ImmutableArray** $tmp746 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 32));
            args745 = *$tmp746;
            panda$core$Int64$init$builtin_int64(&$tmp747, 0);
            panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m743->value->methodKind.$rawValue, $tmp747);
            if ($tmp748.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp749, true);
                $returnValue651 = $tmp749;
                $tmp642 = 7;
                goto $l640;
                $l750:;
                return $returnValue651;
            }
            }
            {
                int $tmp754;
                {
                    ITable* $tmp758 = ((panda$collections$Iterable*) args745)->$class->itable;
                    while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp758 = $tmp758->next;
                    }
                    $fn760 $tmp759 = $tmp758->methods[0];
                    panda$collections$Iterator* $tmp761 = $tmp759(((panda$collections$Iterable*) args745));
                    $tmp757 = $tmp761;
                    $tmp756 = $tmp757;
                    Iter$285$17755 = $tmp756;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp756));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp757));
                    $l762:;
                    ITable* $tmp765 = Iter$285$17755->$class->itable;
                    while ($tmp765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp765 = $tmp765->next;
                    }
                    $fn767 $tmp766 = $tmp765->methods[0];
                    panda$core$Bit $tmp768 = $tmp766(Iter$285$17755);
                    panda$core$Bit $tmp769 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp768);
                    bool $tmp764 = $tmp769.value;
                    if (!$tmp764) goto $l763;
                    {
                        int $tmp772;
                        {
                            ITable* $tmp776 = Iter$285$17755->$class->itable;
                            while ($tmp776->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp776 = $tmp776->next;
                            }
                            $fn778 $tmp777 = $tmp776->methods[1];
                            panda$core$Object* $tmp779 = $tmp777(Iter$285$17755);
                            $tmp775 = $tmp779;
                            $tmp774 = ((org$pandalanguage$pandac$IRNode*) $tmp775);
                            arg773 = $tmp774;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp774));
                            panda$core$Panda$unref$panda$core$Object($tmp775);
                            panda$core$Bit $tmp781 = (($fn780) arg773->$class->vtable[4])(arg773);
                            if ($tmp781.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp782, true);
                                $returnValue651 = $tmp782;
                                $tmp772 = 0;
                                goto $l770;
                                $l783:;
                                $tmp754 = 0;
                                goto $l752;
                                $l784:;
                                $tmp642 = 8;
                                goto $l640;
                                $l785:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp772 = -1;
                        goto $l770;
                        $l770:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg773));
                        arg773 = NULL;
                        switch ($tmp772) {
                            case -1: goto $l787;
                            case 0: goto $l783;
                        }
                        $l787:;
                    }
                    goto $l762;
                    $l763:;
                }
                $tmp754 = -1;
                goto $l752;
                $l752:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$17755));
                Iter$285$17755 = NULL;
                switch ($tmp754) {
                    case 0: goto $l784;
                    case -1: goto $l788;
                }
                $l788:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp789, false);
            $returnValue651 = $tmp789;
            $tmp642 = 9;
            goto $l640;
            $l790:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp792, 8);
        panda$core$Bit $tmp793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp792);
        if ($tmp793.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp794, false);
            $returnValue651 = $tmp794;
            $tmp642 = 10;
            goto $l640;
            $l795:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp797, 9);
        panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp797);
        if ($tmp798.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp799, false);
            $returnValue651 = $tmp799;
            $tmp642 = 11;
            goto $l640;
            $l800:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp802, 10);
        panda$core$Bit $tmp803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp802);
        if ($tmp803.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp804, false);
            $returnValue651 = $tmp804;
            $tmp642 = 12;
            goto $l640;
            $l805:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp807, 11);
        panda$core$Bit $tmp808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp807);
        if ($tmp808.value) {
        {
            org$pandalanguage$pandac$Type** $tmp810 = ((org$pandalanguage$pandac$Type**) ((char*) $match$263_9643->$data + 16));
            type809 = *$tmp810;
            org$pandalanguage$pandac$IRNode** $tmp812 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 24));
            call811 = *$tmp812;
            panda$core$Bit $tmp814 = (($fn813) call811->$class->vtable[4])(call811);
            $returnValue651 = $tmp814;
            $tmp642 = 13;
            goto $l640;
            $l815:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp817, 12);
        panda$core$Bit $tmp818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp817);
        if ($tmp818.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp819, false);
            $returnValue651 = $tmp819;
            $tmp642 = 14;
            goto $l640;
            $l820:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp822, 13);
        panda$core$Bit $tmp823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp822);
        if ($tmp823.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp824, false);
            $returnValue651 = $tmp824;
            $tmp642 = 15;
            goto $l640;
            $l825:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp827, 14);
        panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp827);
        if ($tmp828.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp830 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 0));
            target829 = *$tmp830;
            org$pandalanguage$pandac$IRNode** $tmp832 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 8));
            value831 = *$tmp832;
            bool $tmp833 = ((panda$core$Bit) { value831 != NULL }).value;
            if (!$tmp833) goto $l834;
            panda$core$Bit $tmp836 = (($fn835) value831->$class->vtable[4])(value831);
            $tmp833 = $tmp836.value;
            $l834:;
            panda$core$Bit $tmp837 = { $tmp833 };
            $returnValue651 = $tmp837;
            $tmp642 = 16;
            goto $l640;
            $l838:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp840, 15);
        panda$core$Bit $tmp841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp840);
        if ($tmp841.value) {
        {
            panda$core$String** $tmp843 = ((panda$core$String**) ((char*) $match$263_9643->$data + 16));
            label842 = *$tmp843;
            panda$collections$ImmutableArray** $tmp845 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 24));
            statements844 = *$tmp845;
            org$pandalanguage$pandac$IRNode** $tmp847 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 32));
            test846 = *$tmp847;
            panda$core$Bit $tmp849 = (($fn848) test846->$class->vtable[4])(test846);
            if ($tmp849.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp850, true);
                $returnValue651 = $tmp850;
                $tmp642 = 17;
                goto $l640;
                $l851:;
                return $returnValue651;
            }
            }
            {
                int $tmp855;
                {
                    ITable* $tmp859 = ((panda$collections$Iterable*) statements844)->$class->itable;
                    while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp859 = $tmp859->next;
                    }
                    $fn861 $tmp860 = $tmp859->methods[0];
                    panda$collections$Iterator* $tmp862 = $tmp860(((panda$collections$Iterable*) statements844));
                    $tmp858 = $tmp862;
                    $tmp857 = $tmp858;
                    Iter$309$17856 = $tmp857;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp857));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
                    $l863:;
                    ITable* $tmp866 = Iter$309$17856->$class->itable;
                    while ($tmp866->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp866 = $tmp866->next;
                    }
                    $fn868 $tmp867 = $tmp866->methods[0];
                    panda$core$Bit $tmp869 = $tmp867(Iter$309$17856);
                    panda$core$Bit $tmp870 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp869);
                    bool $tmp865 = $tmp870.value;
                    if (!$tmp865) goto $l864;
                    {
                        int $tmp873;
                        {
                            ITable* $tmp877 = Iter$309$17856->$class->itable;
                            while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp877 = $tmp877->next;
                            }
                            $fn879 $tmp878 = $tmp877->methods[1];
                            panda$core$Object* $tmp880 = $tmp878(Iter$309$17856);
                            $tmp876 = $tmp880;
                            $tmp875 = ((org$pandalanguage$pandac$IRNode*) $tmp876);
                            s874 = $tmp875;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp875));
                            panda$core$Panda$unref$panda$core$Object($tmp876);
                            panda$core$Bit $tmp882 = (($fn881) s874->$class->vtable[4])(s874);
                            if ($tmp882.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp883, true);
                                $returnValue651 = $tmp883;
                                $tmp873 = 0;
                                goto $l871;
                                $l884:;
                                $tmp855 = 0;
                                goto $l853;
                                $l885:;
                                $tmp642 = 18;
                                goto $l640;
                                $l886:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp873 = -1;
                        goto $l871;
                        $l871:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s874));
                        s874 = NULL;
                        switch ($tmp873) {
                            case 0: goto $l884;
                            case -1: goto $l888;
                        }
                        $l888:;
                    }
                    goto $l863;
                    $l864:;
                }
                $tmp855 = -1;
                goto $l853;
                $l853:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$17856));
                Iter$309$17856 = NULL;
                switch ($tmp855) {
                    case -1: goto $l889;
                    case 0: goto $l885;
                }
                $l889:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp890, false);
            $returnValue651 = $tmp890;
            $tmp642 = 19;
            goto $l640;
            $l891:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp893, 17);
        panda$core$Bit $tmp894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp893);
        if ($tmp894.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp895, true);
            $returnValue651 = $tmp895;
            $tmp642 = 20;
            goto $l640;
            $l896:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp898, 18);
        panda$core$Bit $tmp899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp898);
        if ($tmp899.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp900, false);
            $returnValue651 = $tmp900;
            $tmp642 = 21;
            goto $l640;
            $l901:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp903, 19);
        panda$core$Bit $tmp904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp903);
        if ($tmp904.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp906 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 16));
            test905 = *$tmp906;
            panda$collections$ImmutableArray** $tmp908 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 24));
            ifTrue907 = *$tmp908;
            org$pandalanguage$pandac$IRNode** $tmp910 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 32));
            ifFalse909 = *$tmp910;
            panda$core$Bit $tmp912 = (($fn911) test905->$class->vtable[4])(test905);
            if ($tmp912.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp913, true);
                $returnValue651 = $tmp913;
                $tmp642 = 22;
                goto $l640;
                $l914:;
                return $returnValue651;
            }
            }
            {
                int $tmp918;
                {
                    ITable* $tmp922 = ((panda$collections$Iterable*) ifTrue907)->$class->itable;
                    while ($tmp922->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp922 = $tmp922->next;
                    }
                    $fn924 $tmp923 = $tmp922->methods[0];
                    panda$collections$Iterator* $tmp925 = $tmp923(((panda$collections$Iterable*) ifTrue907));
                    $tmp921 = $tmp925;
                    $tmp920 = $tmp921;
                    Iter$323$17919 = $tmp920;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp920));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp921));
                    $l926:;
                    ITable* $tmp929 = Iter$323$17919->$class->itable;
                    while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp929 = $tmp929->next;
                    }
                    $fn931 $tmp930 = $tmp929->methods[0];
                    panda$core$Bit $tmp932 = $tmp930(Iter$323$17919);
                    panda$core$Bit $tmp933 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp932);
                    bool $tmp928 = $tmp933.value;
                    if (!$tmp928) goto $l927;
                    {
                        int $tmp936;
                        {
                            ITable* $tmp940 = Iter$323$17919->$class->itable;
                            while ($tmp940->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp940 = $tmp940->next;
                            }
                            $fn942 $tmp941 = $tmp940->methods[1];
                            panda$core$Object* $tmp943 = $tmp941(Iter$323$17919);
                            $tmp939 = $tmp943;
                            $tmp938 = ((org$pandalanguage$pandac$IRNode*) $tmp939);
                            s937 = $tmp938;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp938));
                            panda$core$Panda$unref$panda$core$Object($tmp939);
                            panda$core$Bit $tmp945 = (($fn944) s937->$class->vtable[4])(s937);
                            if ($tmp945.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp946, true);
                                $returnValue651 = $tmp946;
                                $tmp936 = 0;
                                goto $l934;
                                $l947:;
                                $tmp918 = 0;
                                goto $l916;
                                $l948:;
                                $tmp642 = 23;
                                goto $l640;
                                $l949:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp936 = -1;
                        goto $l934;
                        $l934:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s937));
                        s937 = NULL;
                        switch ($tmp936) {
                            case 0: goto $l947;
                            case -1: goto $l951;
                        }
                        $l951:;
                    }
                    goto $l926;
                    $l927:;
                }
                $tmp918 = -1;
                goto $l916;
                $l916:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$17919));
                Iter$323$17919 = NULL;
                switch ($tmp918) {
                    case -1: goto $l952;
                    case 0: goto $l948;
                }
                $l952:;
            }
            panda$core$Bit $tmp954 = (($fn953) ifFalse909->$class->vtable[4])(ifFalse909);
            $returnValue651 = $tmp954;
            $tmp642 = 24;
            goto $l640;
            $l955:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp957, 20);
        panda$core$Bit $tmp958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp957);
        if ($tmp958.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp959, false);
            $returnValue651 = $tmp959;
            $tmp642 = 25;
            goto $l640;
            $l960:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp962, 21);
        panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp962);
        if ($tmp963.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp965 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 16));
            value964 = *$tmp965;
            panda$core$Bit $tmp967 = (($fn966) value964->$class->vtable[4])(value964);
            $returnValue651 = $tmp967;
            $tmp642 = 26;
            goto $l640;
            $l968:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp970, 22);
        panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp970);
        if ($tmp971.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp973 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 16));
            value972 = *$tmp973;
            panda$core$Bit $tmp975 = (($fn974) value972->$class->vtable[4])(value972);
            $returnValue651 = $tmp975;
            $tmp642 = 27;
            goto $l640;
            $l976:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp978, 23);
        panda$core$Bit $tmp979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp978);
        if ($tmp979.value) {
        {
            panda$core$String** $tmp981 = ((panda$core$String**) ((char*) $match$263_9643->$data + 16));
            label980 = *$tmp981;
            panda$collections$ImmutableArray** $tmp983 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 24));
            statements982 = *$tmp983;
            {
                int $tmp986;
                {
                    ITable* $tmp990 = ((panda$collections$Iterable*) statements982)->$class->itable;
                    while ($tmp990->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp990 = $tmp990->next;
                    }
                    $fn992 $tmp991 = $tmp990->methods[0];
                    panda$collections$Iterator* $tmp993 = $tmp991(((panda$collections$Iterable*) statements982));
                    $tmp989 = $tmp993;
                    $tmp988 = $tmp989;
                    Iter$336$17987 = $tmp988;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp988));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                    $l994:;
                    ITable* $tmp997 = Iter$336$17987->$class->itable;
                    while ($tmp997->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp997 = $tmp997->next;
                    }
                    $fn999 $tmp998 = $tmp997->methods[0];
                    panda$core$Bit $tmp1000 = $tmp998(Iter$336$17987);
                    panda$core$Bit $tmp1001 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1000);
                    bool $tmp996 = $tmp1001.value;
                    if (!$tmp996) goto $l995;
                    {
                        int $tmp1004;
                        {
                            ITable* $tmp1008 = Iter$336$17987->$class->itable;
                            while ($tmp1008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1008 = $tmp1008->next;
                            }
                            $fn1010 $tmp1009 = $tmp1008->methods[1];
                            panda$core$Object* $tmp1011 = $tmp1009(Iter$336$17987);
                            $tmp1007 = $tmp1011;
                            $tmp1006 = ((org$pandalanguage$pandac$IRNode*) $tmp1007);
                            s1005 = $tmp1006;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1006));
                            panda$core$Panda$unref$panda$core$Object($tmp1007);
                            panda$core$Bit $tmp1013 = (($fn1012) s1005->$class->vtable[4])(s1005);
                            if ($tmp1013.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1014, true);
                                $returnValue651 = $tmp1014;
                                $tmp1004 = 0;
                                goto $l1002;
                                $l1015:;
                                $tmp986 = 0;
                                goto $l984;
                                $l1016:;
                                $tmp642 = 28;
                                goto $l640;
                                $l1017:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp1004 = -1;
                        goto $l1002;
                        $l1002:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1005));
                        s1005 = NULL;
                        switch ($tmp1004) {
                            case -1: goto $l1019;
                            case 0: goto $l1015;
                        }
                        $l1019:;
                    }
                    goto $l994;
                    $l995:;
                }
                $tmp986 = -1;
                goto $l984;
                $l984:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17987));
                Iter$336$17987 = NULL;
                switch ($tmp986) {
                    case -1: goto $l1020;
                    case 0: goto $l1016;
                }
                $l1020:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1021, false);
            $returnValue651 = $tmp1021;
            $tmp642 = 29;
            goto $l640;
            $l1022:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1024, 24);
        panda$core$Bit $tmp1025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1024);
        if ($tmp1025.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1027 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 16));
            value1026 = *$tmp1027;
            panda$collections$ImmutableArray** $tmp1029 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 24));
            whens1028 = *$tmp1029;
            panda$collections$ImmutableArray** $tmp1031 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 32));
            other1030 = *$tmp1031;
            panda$core$Bit $tmp1033 = (($fn1032) value1026->$class->vtable[4])(value1026);
            if ($tmp1033.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1034, true);
                $returnValue651 = $tmp1034;
                $tmp642 = 30;
                goto $l640;
                $l1035:;
                return $returnValue651;
            }
            }
            {
                int $tmp1039;
                {
                    ITable* $tmp1043 = ((panda$collections$Iterable*) whens1028)->$class->itable;
                    while ($tmp1043->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1043 = $tmp1043->next;
                    }
                    $fn1045 $tmp1044 = $tmp1043->methods[0];
                    panda$collections$Iterator* $tmp1046 = $tmp1044(((panda$collections$Iterable*) whens1028));
                    $tmp1042 = $tmp1046;
                    $tmp1041 = $tmp1042;
                    Iter$346$171040 = $tmp1041;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1041));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1042));
                    $l1047:;
                    ITable* $tmp1050 = Iter$346$171040->$class->itable;
                    while ($tmp1050->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1050 = $tmp1050->next;
                    }
                    $fn1052 $tmp1051 = $tmp1050->methods[0];
                    panda$core$Bit $tmp1053 = $tmp1051(Iter$346$171040);
                    panda$core$Bit $tmp1054 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1053);
                    bool $tmp1049 = $tmp1054.value;
                    if (!$tmp1049) goto $l1048;
                    {
                        int $tmp1057;
                        {
                            ITable* $tmp1061 = Iter$346$171040->$class->itable;
                            while ($tmp1061->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1061 = $tmp1061->next;
                            }
                            $fn1063 $tmp1062 = $tmp1061->methods[1];
                            panda$core$Object* $tmp1064 = $tmp1062(Iter$346$171040);
                            $tmp1060 = $tmp1064;
                            $tmp1059 = ((org$pandalanguage$pandac$IRNode*) $tmp1060);
                            w1058 = $tmp1059;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1059));
                            panda$core$Panda$unref$panda$core$Object($tmp1060);
                            panda$core$Bit $tmp1066 = (($fn1065) w1058->$class->vtable[4])(w1058);
                            if ($tmp1066.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1067, true);
                                $returnValue651 = $tmp1067;
                                $tmp1057 = 0;
                                goto $l1055;
                                $l1068:;
                                $tmp1039 = 0;
                                goto $l1037;
                                $l1069:;
                                $tmp642 = 31;
                                goto $l640;
                                $l1070:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp1057 = -1;
                        goto $l1055;
                        $l1055:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1058));
                        w1058 = NULL;
                        switch ($tmp1057) {
                            case 0: goto $l1068;
                            case -1: goto $l1072;
                        }
                        $l1072:;
                    }
                    goto $l1047;
                    $l1048:;
                }
                $tmp1039 = -1;
                goto $l1037;
                $l1037:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$346$171040));
                Iter$346$171040 = NULL;
                switch ($tmp1039) {
                    case -1: goto $l1073;
                    case 0: goto $l1069;
                }
                $l1073:;
            }
            {
                int $tmp1076;
                {
                    ITable* $tmp1080 = ((panda$collections$Iterable*) other1030)->$class->itable;
                    while ($tmp1080->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1080 = $tmp1080->next;
                    }
                    $fn1082 $tmp1081 = $tmp1080->methods[0];
                    panda$collections$Iterator* $tmp1083 = $tmp1081(((panda$collections$Iterable*) other1030));
                    $tmp1079 = $tmp1083;
                    $tmp1078 = $tmp1079;
                    Iter$351$171077 = $tmp1078;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1078));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1079));
                    $l1084:;
                    ITable* $tmp1087 = Iter$351$171077->$class->itable;
                    while ($tmp1087->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1087 = $tmp1087->next;
                    }
                    $fn1089 $tmp1088 = $tmp1087->methods[0];
                    panda$core$Bit $tmp1090 = $tmp1088(Iter$351$171077);
                    panda$core$Bit $tmp1091 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1090);
                    bool $tmp1086 = $tmp1091.value;
                    if (!$tmp1086) goto $l1085;
                    {
                        int $tmp1094;
                        {
                            ITable* $tmp1098 = Iter$351$171077->$class->itable;
                            while ($tmp1098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1098 = $tmp1098->next;
                            }
                            $fn1100 $tmp1099 = $tmp1098->methods[1];
                            panda$core$Object* $tmp1101 = $tmp1099(Iter$351$171077);
                            $tmp1097 = $tmp1101;
                            $tmp1096 = ((org$pandalanguage$pandac$IRNode*) $tmp1097);
                            s1095 = $tmp1096;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1096));
                            panda$core$Panda$unref$panda$core$Object($tmp1097);
                            panda$core$Bit $tmp1103 = (($fn1102) s1095->$class->vtable[4])(s1095);
                            if ($tmp1103.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1104, true);
                                $returnValue651 = $tmp1104;
                                $tmp1094 = 0;
                                goto $l1092;
                                $l1105:;
                                $tmp1076 = 0;
                                goto $l1074;
                                $l1106:;
                                $tmp642 = 32;
                                goto $l640;
                                $l1107:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp1094 = -1;
                        goto $l1092;
                        $l1092:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1095));
                        s1095 = NULL;
                        switch ($tmp1094) {
                            case -1: goto $l1109;
                            case 0: goto $l1105;
                        }
                        $l1109:;
                    }
                    goto $l1084;
                    $l1085:;
                }
                $tmp1076 = -1;
                goto $l1074;
                $l1074:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$351$171077));
                Iter$351$171077 = NULL;
                switch ($tmp1076) {
                    case 0: goto $l1106;
                    case -1: goto $l1110;
                }
                $l1110:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1111, false);
            $returnValue651 = $tmp1111;
            $tmp642 = 33;
            goto $l640;
            $l1112:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1114, 25);
        panda$core$Bit $tmp1115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1114);
        if ($tmp1115.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1116, false);
            $returnValue651 = $tmp1116;
            $tmp642 = 34;
            goto $l640;
            $l1117:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1119, 26);
        panda$core$Bit $tmp1120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1119);
        if ($tmp1120.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1121, false);
            $returnValue651 = $tmp1121;
            $tmp642 = 35;
            goto $l640;
            $l1122:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1124, 27);
        panda$core$Bit $tmp1125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1124);
        if ($tmp1125.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1126, false);
            $returnValue651 = $tmp1126;
            $tmp642 = 36;
            goto $l640;
            $l1127:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1129, 28);
        panda$core$Bit $tmp1130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1129);
        if ($tmp1130.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1132 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 24));
            base1131 = *$tmp1132;
            panda$core$Bit $tmp1134 = (($fn1133) base1131->$class->vtable[4])(base1131);
            $returnValue651 = $tmp1134;
            $tmp642 = 37;
            goto $l640;
            $l1135:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1137, 29);
        panda$core$Bit $tmp1138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1137);
        if ($tmp1138.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1140 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 32));
            list1139 = *$tmp1140;
            panda$collections$ImmutableArray** $tmp1142 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 40));
            statements1141 = *$tmp1142;
            panda$core$Bit $tmp1144 = (($fn1143) list1139->$class->vtable[4])(list1139);
            if ($tmp1144.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1145, true);
                $returnValue651 = $tmp1145;
                $tmp642 = 38;
                goto $l640;
                $l1146:;
                return $returnValue651;
            }
            }
            {
                int $tmp1150;
                {
                    ITable* $tmp1154 = ((panda$collections$Iterable*) statements1141)->$class->itable;
                    while ($tmp1154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1154 = $tmp1154->next;
                    }
                    $fn1156 $tmp1155 = $tmp1154->methods[0];
                    panda$collections$Iterator* $tmp1157 = $tmp1155(((panda$collections$Iterable*) statements1141));
                    $tmp1153 = $tmp1157;
                    $tmp1152 = $tmp1153;
                    Iter$370$171151 = $tmp1152;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1152));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
                    $l1158:;
                    ITable* $tmp1161 = Iter$370$171151->$class->itable;
                    while ($tmp1161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1161 = $tmp1161->next;
                    }
                    $fn1163 $tmp1162 = $tmp1161->methods[0];
                    panda$core$Bit $tmp1164 = $tmp1162(Iter$370$171151);
                    panda$core$Bit $tmp1165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1164);
                    bool $tmp1160 = $tmp1165.value;
                    if (!$tmp1160) goto $l1159;
                    {
                        int $tmp1168;
                        {
                            ITable* $tmp1172 = Iter$370$171151->$class->itable;
                            while ($tmp1172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1172 = $tmp1172->next;
                            }
                            $fn1174 $tmp1173 = $tmp1172->methods[1];
                            panda$core$Object* $tmp1175 = $tmp1173(Iter$370$171151);
                            $tmp1171 = $tmp1175;
                            $tmp1170 = ((org$pandalanguage$pandac$IRNode*) $tmp1171);
                            s1169 = $tmp1170;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
                            panda$core$Panda$unref$panda$core$Object($tmp1171);
                            panda$core$Bit $tmp1177 = (($fn1176) s1169->$class->vtable[4])(s1169);
                            if ($tmp1177.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1178, true);
                                $returnValue651 = $tmp1178;
                                $tmp1168 = 0;
                                goto $l1166;
                                $l1179:;
                                $tmp1150 = 0;
                                goto $l1148;
                                $l1180:;
                                $tmp642 = 39;
                                goto $l640;
                                $l1181:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp1168 = -1;
                        goto $l1166;
                        $l1166:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1169));
                        s1169 = NULL;
                        switch ($tmp1168) {
                            case 0: goto $l1179;
                            case -1: goto $l1183;
                        }
                        $l1183:;
                    }
                    goto $l1158;
                    $l1159:;
                }
                $tmp1150 = -1;
                goto $l1148;
                $l1148:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$370$171151));
                Iter$370$171151 = NULL;
                switch ($tmp1150) {
                    case -1: goto $l1184;
                    case 0: goto $l1180;
                }
                $l1184:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1185, false);
            $returnValue651 = $tmp1185;
            $tmp642 = 40;
            goto $l640;
            $l1186:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1188, 30);
        panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1188);
        if ($tmp1189.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1190, false);
            $returnValue651 = $tmp1190;
            $tmp642 = 41;
            goto $l640;
            $l1191:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1193, 31);
        panda$core$Bit $tmp1194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1193);
        if ($tmp1194.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1196 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 16));
            value1195 = *$tmp1196;
            panda$core$Bit $tmp1198 = (($fn1197) value1195->$class->vtable[4])(value1195);
            $returnValue651 = $tmp1198;
            $tmp642 = 42;
            goto $l640;
            $l1199:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1201, 32);
        panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1201);
        if ($tmp1202.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1203, false);
            $returnValue651 = $tmp1203;
            $tmp642 = 43;
            goto $l640;
            $l1204:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1206, 33);
        panda$core$Bit $tmp1207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1206);
        if ($tmp1207.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1209 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 0));
            base1208 = *$tmp1209;
            panda$core$Bit $tmp1211 = (($fn1210) base1208->$class->vtable[4])(base1208);
            $returnValue651 = $tmp1211;
            $tmp642 = 44;
            goto $l640;
            $l1212:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1214, 34);
        panda$core$Bit $tmp1215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1214);
        if ($tmp1215.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1216, false);
            $returnValue651 = $tmp1216;
            $tmp642 = 45;
            goto $l640;
            $l1217:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1219, 35);
        panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1219);
        if ($tmp1220.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1221, false);
            $returnValue651 = $tmp1221;
            $tmp642 = 46;
            goto $l640;
            $l1222:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1224, 36);
        panda$core$Bit $tmp1225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1224);
        if ($tmp1225.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1226, false);
            $returnValue651 = $tmp1226;
            $tmp642 = 47;
            goto $l640;
            $l1227:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1229, 37);
        panda$core$Bit $tmp1230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1229);
        if ($tmp1230.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1231, false);
            $returnValue651 = $tmp1231;
            $tmp642 = 48;
            goto $l640;
            $l1232:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1234, 38);
        panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1234);
        if ($tmp1235.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1237 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 16));
            test1236 = *$tmp1237;
            org$pandalanguage$pandac$IRNode** $tmp1239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 24));
            ifTrue1238 = *$tmp1239;
            org$pandalanguage$pandac$IRNode** $tmp1241 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 32));
            ifFalse1240 = *$tmp1241;
            panda$core$Bit $tmp1245 = (($fn1244) test1236->$class->vtable[4])(test1236);
            bool $tmp1243 = $tmp1245.value;
            if ($tmp1243) goto $l1246;
            panda$core$Bit $tmp1248 = (($fn1247) ifTrue1238->$class->vtable[4])(ifTrue1238);
            $tmp1243 = $tmp1248.value;
            $l1246:;
            panda$core$Bit $tmp1249 = { $tmp1243 };
            bool $tmp1242 = $tmp1249.value;
            if ($tmp1242) goto $l1250;
            panda$core$Bit $tmp1252 = (($fn1251) ifFalse1240->$class->vtable[4])(ifFalse1240);
            $tmp1242 = $tmp1252.value;
            $l1250:;
            panda$core$Bit $tmp1253 = { $tmp1242 };
            $returnValue651 = $tmp1253;
            $tmp642 = 49;
            goto $l640;
            $l1254:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1256, 39);
        panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1256);
        if ($tmp1257.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1258, false);
            $returnValue651 = $tmp1258;
            $tmp642 = 50;
            goto $l640;
            $l1259:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1261, 40);
        panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1261);
        if ($tmp1262.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1263, false);
            if ($tmp1263.value) goto $l1264; else goto $l1265;
            $l1265:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1266, (panda$core$Int64) { 397 });
            abort();
            $l1264:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1267, 41);
        panda$core$Bit $tmp1268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1267);
        if ($tmp1268.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1269, false);
            if ($tmp1269.value) goto $l1270; else goto $l1271;
            $l1271:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1272, (panda$core$Int64) { 399 });
            abort();
            $l1270:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1273, 42);
        panda$core$Bit $tmp1274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1273);
        if ($tmp1274.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1275, false);
            if ($tmp1275.value) goto $l1276; else goto $l1277;
            $l1277:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1278, (panda$core$Int64) { 401 });
            abort();
            $l1276:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1279, 43);
        panda$core$Bit $tmp1280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1279);
        if ($tmp1280.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1281, false);
            if ($tmp1281.value) goto $l1282; else goto $l1283;
            $l1283:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1284, (panda$core$Int64) { 403 });
            abort();
            $l1282:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1285, 44);
        panda$core$Bit $tmp1286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1285);
        if ($tmp1286.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1287, false);
            if ($tmp1287.value) goto $l1288; else goto $l1289;
            $l1289:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1290, (panda$core$Int64) { 405 });
            abort();
            $l1288:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1291, 45);
        panda$core$Bit $tmp1292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1291);
        if ($tmp1292.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1293, false);
            if ($tmp1293.value) goto $l1294; else goto $l1295;
            $l1295:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1296, (panda$core$Int64) { 407 });
            abort();
            $l1294:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1297, 46);
        panda$core$Bit $tmp1298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1297);
        if ($tmp1298.value) {
        {
            panda$collections$ImmutableArray** $tmp1300 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 24));
            decls1299 = *$tmp1300;
            {
                int $tmp1303;
                {
                    ITable* $tmp1307 = ((panda$collections$Iterable*) decls1299)->$class->itable;
                    while ($tmp1307->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1307 = $tmp1307->next;
                    }
                    $fn1309 $tmp1308 = $tmp1307->methods[0];
                    panda$collections$Iterator* $tmp1310 = $tmp1308(((panda$collections$Iterable*) decls1299));
                    $tmp1306 = $tmp1310;
                    $tmp1305 = $tmp1306;
                    Iter$409$171304 = $tmp1305;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1305));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1306));
                    $l1311:;
                    ITable* $tmp1314 = Iter$409$171304->$class->itable;
                    while ($tmp1314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1314 = $tmp1314->next;
                    }
                    $fn1316 $tmp1315 = $tmp1314->methods[0];
                    panda$core$Bit $tmp1317 = $tmp1315(Iter$409$171304);
                    panda$core$Bit $tmp1318 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1317);
                    bool $tmp1313 = $tmp1318.value;
                    if (!$tmp1313) goto $l1312;
                    {
                        int $tmp1321;
                        {
                            ITable* $tmp1325 = Iter$409$171304->$class->itable;
                            while ($tmp1325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1325 = $tmp1325->next;
                            }
                            $fn1327 $tmp1326 = $tmp1325->methods[1];
                            panda$core$Object* $tmp1328 = $tmp1326(Iter$409$171304);
                            $tmp1324 = $tmp1328;
                            $tmp1323 = ((org$pandalanguage$pandac$IRNode*) $tmp1324);
                            d1322 = $tmp1323;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1323));
                            panda$core$Panda$unref$panda$core$Object($tmp1324);
                            panda$core$Bit $tmp1330 = (($fn1329) d1322->$class->vtable[4])(d1322);
                            if ($tmp1330.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1331, true);
                                $returnValue651 = $tmp1331;
                                $tmp1321 = 0;
                                goto $l1319;
                                $l1332:;
                                $tmp1303 = 0;
                                goto $l1301;
                                $l1333:;
                                $tmp642 = 51;
                                goto $l640;
                                $l1334:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp1321 = -1;
                        goto $l1319;
                        $l1319:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1322));
                        d1322 = NULL;
                        switch ($tmp1321) {
                            case -1: goto $l1336;
                            case 0: goto $l1332;
                        }
                        $l1336:;
                    }
                    goto $l1311;
                    $l1312:;
                }
                $tmp1303 = -1;
                goto $l1301;
                $l1301:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$409$171304));
                Iter$409$171304 = NULL;
                switch ($tmp1303) {
                    case -1: goto $l1337;
                    case 0: goto $l1333;
                }
                $l1337:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1338, false);
            $returnValue651 = $tmp1338;
            $tmp642 = 52;
            goto $l640;
            $l1339:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1341, 47);
        panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1341);
        if ($tmp1342.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1343, false);
            $returnValue651 = $tmp1343;
            $tmp642 = 53;
            goto $l640;
            $l1344:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1346, 48);
        panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1346);
        if ($tmp1347.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1348, false);
            $returnValue651 = $tmp1348;
            $tmp642 = 54;
            goto $l640;
            $l1349:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1351, 49);
        panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1351);
        if ($tmp1352.value) {
        {
            panda$collections$ImmutableArray** $tmp1354 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 16));
            tests1353 = *$tmp1354;
            panda$collections$ImmutableArray** $tmp1356 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 24));
            statements1355 = *$tmp1356;
            {
                int $tmp1359;
                {
                    ITable* $tmp1363 = ((panda$collections$Iterable*) tests1353)->$class->itable;
                    while ($tmp1363->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1363 = $tmp1363->next;
                    }
                    $fn1365 $tmp1364 = $tmp1363->methods[0];
                    panda$collections$Iterator* $tmp1366 = $tmp1364(((panda$collections$Iterable*) tests1353));
                    $tmp1362 = $tmp1366;
                    $tmp1361 = $tmp1362;
                    Iter$420$171360 = $tmp1361;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
                    $l1367:;
                    ITable* $tmp1370 = Iter$420$171360->$class->itable;
                    while ($tmp1370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1370 = $tmp1370->next;
                    }
                    $fn1372 $tmp1371 = $tmp1370->methods[0];
                    panda$core$Bit $tmp1373 = $tmp1371(Iter$420$171360);
                    panda$core$Bit $tmp1374 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1373);
                    bool $tmp1369 = $tmp1374.value;
                    if (!$tmp1369) goto $l1368;
                    {
                        int $tmp1377;
                        {
                            ITable* $tmp1381 = Iter$420$171360->$class->itable;
                            while ($tmp1381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1381 = $tmp1381->next;
                            }
                            $fn1383 $tmp1382 = $tmp1381->methods[1];
                            panda$core$Object* $tmp1384 = $tmp1382(Iter$420$171360);
                            $tmp1380 = $tmp1384;
                            $tmp1379 = ((org$pandalanguage$pandac$IRNode*) $tmp1380);
                            t1378 = $tmp1379;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                            panda$core$Panda$unref$panda$core$Object($tmp1380);
                            panda$core$Bit $tmp1386 = (($fn1385) t1378->$class->vtable[4])(t1378);
                            if ($tmp1386.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1387, true);
                                $returnValue651 = $tmp1387;
                                $tmp1377 = 0;
                                goto $l1375;
                                $l1388:;
                                $tmp1359 = 0;
                                goto $l1357;
                                $l1389:;
                                $tmp642 = 55;
                                goto $l640;
                                $l1390:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp1377 = -1;
                        goto $l1375;
                        $l1375:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1378));
                        t1378 = NULL;
                        switch ($tmp1377) {
                            case 0: goto $l1388;
                            case -1: goto $l1392;
                        }
                        $l1392:;
                    }
                    goto $l1367;
                    $l1368:;
                }
                $tmp1359 = -1;
                goto $l1357;
                $l1357:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$420$171360));
                Iter$420$171360 = NULL;
                switch ($tmp1359) {
                    case -1: goto $l1393;
                    case 0: goto $l1389;
                }
                $l1393:;
            }
            {
                int $tmp1396;
                {
                    ITable* $tmp1400 = ((panda$collections$Iterable*) statements1355)->$class->itable;
                    while ($tmp1400->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1400 = $tmp1400->next;
                    }
                    $fn1402 $tmp1401 = $tmp1400->methods[0];
                    panda$collections$Iterator* $tmp1403 = $tmp1401(((panda$collections$Iterable*) statements1355));
                    $tmp1399 = $tmp1403;
                    $tmp1398 = $tmp1399;
                    Iter$425$171397 = $tmp1398;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1398));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1399));
                    $l1404:;
                    ITable* $tmp1407 = Iter$425$171397->$class->itable;
                    while ($tmp1407->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1407 = $tmp1407->next;
                    }
                    $fn1409 $tmp1408 = $tmp1407->methods[0];
                    panda$core$Bit $tmp1410 = $tmp1408(Iter$425$171397);
                    panda$core$Bit $tmp1411 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1410);
                    bool $tmp1406 = $tmp1411.value;
                    if (!$tmp1406) goto $l1405;
                    {
                        int $tmp1414;
                        {
                            ITable* $tmp1418 = Iter$425$171397->$class->itable;
                            while ($tmp1418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1418 = $tmp1418->next;
                            }
                            $fn1420 $tmp1419 = $tmp1418->methods[1];
                            panda$core$Object* $tmp1421 = $tmp1419(Iter$425$171397);
                            $tmp1417 = $tmp1421;
                            $tmp1416 = ((org$pandalanguage$pandac$IRNode*) $tmp1417);
                            s1415 = $tmp1416;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1416));
                            panda$core$Panda$unref$panda$core$Object($tmp1417);
                            panda$core$Bit $tmp1423 = (($fn1422) s1415->$class->vtable[4])(s1415);
                            if ($tmp1423.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1424, true);
                                $returnValue651 = $tmp1424;
                                $tmp1414 = 0;
                                goto $l1412;
                                $l1425:;
                                $tmp1396 = 0;
                                goto $l1394;
                                $l1426:;
                                $tmp642 = 56;
                                goto $l640;
                                $l1427:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp1414 = -1;
                        goto $l1412;
                        $l1412:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1415));
                        s1415 = NULL;
                        switch ($tmp1414) {
                            case -1: goto $l1429;
                            case 0: goto $l1425;
                        }
                        $l1429:;
                    }
                    goto $l1404;
                    $l1405:;
                }
                $tmp1396 = -1;
                goto $l1394;
                $l1394:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$425$171397));
                Iter$425$171397 = NULL;
                switch ($tmp1396) {
                    case 0: goto $l1426;
                    case -1: goto $l1430;
                }
                $l1430:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1431, false);
            $returnValue651 = $tmp1431;
            $tmp642 = 57;
            goto $l640;
            $l1432:;
            return $returnValue651;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1434, 50);
        panda$core$Bit $tmp1435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$263_9643->$rawValue, $tmp1434);
        if ($tmp1435.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1437 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$263_9643->$data + 24));
            test1436 = *$tmp1437;
            panda$collections$ImmutableArray** $tmp1439 = ((panda$collections$ImmutableArray**) ((char*) $match$263_9643->$data + 32));
            statements1438 = *$tmp1439;
            panda$core$Bit $tmp1441 = (($fn1440) test1436->$class->vtable[4])(test1436);
            if ($tmp1441.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1442, true);
                $returnValue651 = $tmp1442;
                $tmp642 = 58;
                goto $l640;
                $l1443:;
                return $returnValue651;
            }
            }
            {
                int $tmp1447;
                {
                    ITable* $tmp1451 = ((panda$collections$Iterable*) statements1438)->$class->itable;
                    while ($tmp1451->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1451 = $tmp1451->next;
                    }
                    $fn1453 $tmp1452 = $tmp1451->methods[0];
                    panda$collections$Iterator* $tmp1454 = $tmp1452(((panda$collections$Iterable*) statements1438));
                    $tmp1450 = $tmp1454;
                    $tmp1449 = $tmp1450;
                    Iter$435$171448 = $tmp1449;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1449));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
                    $l1455:;
                    ITable* $tmp1458 = Iter$435$171448->$class->itable;
                    while ($tmp1458->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1458 = $tmp1458->next;
                    }
                    $fn1460 $tmp1459 = $tmp1458->methods[0];
                    panda$core$Bit $tmp1461 = $tmp1459(Iter$435$171448);
                    panda$core$Bit $tmp1462 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1461);
                    bool $tmp1457 = $tmp1462.value;
                    if (!$tmp1457) goto $l1456;
                    {
                        int $tmp1465;
                        {
                            ITable* $tmp1469 = Iter$435$171448->$class->itable;
                            while ($tmp1469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1469 = $tmp1469->next;
                            }
                            $fn1471 $tmp1470 = $tmp1469->methods[1];
                            panda$core$Object* $tmp1472 = $tmp1470(Iter$435$171448);
                            $tmp1468 = $tmp1472;
                            $tmp1467 = ((org$pandalanguage$pandac$IRNode*) $tmp1468);
                            s1466 = $tmp1467;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1467));
                            panda$core$Panda$unref$panda$core$Object($tmp1468);
                            panda$core$Bit $tmp1474 = (($fn1473) s1466->$class->vtable[4])(s1466);
                            if ($tmp1474.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1475, true);
                                $returnValue651 = $tmp1475;
                                $tmp1465 = 0;
                                goto $l1463;
                                $l1476:;
                                $tmp1447 = 0;
                                goto $l1445;
                                $l1477:;
                                $tmp642 = 59;
                                goto $l640;
                                $l1478:;
                                return $returnValue651;
                            }
                            }
                        }
                        $tmp1465 = -1;
                        goto $l1463;
                        $l1463:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1466));
                        s1466 = NULL;
                        switch ($tmp1465) {
                            case -1: goto $l1480;
                            case 0: goto $l1476;
                        }
                        $l1480:;
                    }
                    goto $l1455;
                    $l1456:;
                }
                $tmp1447 = -1;
                goto $l1445;
                $l1445:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$435$171448));
                Iter$435$171448 = NULL;
                switch ($tmp1447) {
                    case 0: goto $l1477;
                    case -1: goto $l1481;
                }
                $l1481:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1482, false);
            $returnValue651 = $tmp1482;
            $tmp642 = 60;
            goto $l640;
            $l1483:;
            return $returnValue651;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1485, false);
            if ($tmp1485.value) goto $l1486; else goto $l1487;
            $l1487:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1488, (panda$core$Int64) { 442 });
            abort();
            $l1486:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp642 = -1;
    goto $l640;
    $l640:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
    switch ($tmp642) {
        case -1: goto $l1489;
        case 55: goto $l1390;
        case 60: goto $l1483;
        case 0: goto $l659;
        case 1: goto $l664;
        case 32: goto $l1107;
        case 17: goto $l851;
        case 50: goto $l1259;
        case 16: goto $l838;
        case 49: goto $l1254;
        case 35: goto $l1122;
        case 43: goto $l1204;
        case 31: goto $l1070;
        case 22: goto $l914;
        case 23: goto $l949;
        case 34: goto $l1117;
        case 13: goto $l815;
        case 33: goto $l1112;
        case 12: goto $l805;
        case 42: goto $l1199;
        case 54: goto $l1349;
        case 59: goto $l1478;
        case 24: goto $l955;
        case 25: goto $l960;
        case 56: goto $l1427;
        case 36: goto $l1127;
        case 47: goto $l1227;
        case 45: goto $l1217;
        case 8: goto $l785;
        case 48: goto $l1232;
        case 28: goto $l1017;
        case 9: goto $l790;
        case 53: goto $l1344;
        case 14: goto $l820;
        case 51: goto $l1334;
        case 37: goto $l1135;
        case 52: goto $l1339;
        case 21: goto $l901;
        case 7: goto $l750;
        case 29: goto $l1022;
        case 10: goto $l795;
        case 39: goto $l1181;
        case 30: goto $l1035;
        case 11: goto $l800;
        case 20: goto $l896;
        case 2: goto $l685;
        case 41: goto $l1191;
        case 5: goto $l734;
        case 3: goto $l690;
        case 6: goto $l739;
        case 40: goto $l1186;
        case 44: goto $l1212;
        case 38: goto $l1146;
        case 27: goto $l976;
        case 18: goto $l886;
        case 4: goto $l729;
        case 58: goto $l1443;
        case 15: goto $l825;
        case 26: goto $l968;
        case 19: goto $l891;
        case 57: goto $l1432;
        case 46: goto $l1222;
    }
    $l1489:;
    if (false) goto $l1490; else goto $l1491;
    $l1491:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1492, (panda$core$Int64) { 262 }, &$s1493);
    abort();
    $l1490:;
    abort();
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(panda$collections$ImmutableArray* p_nodes, panda$core$MutableMethod* p_f) {
    panda$collections$Array* newNodes1497 = NULL;
    panda$collections$Array* $tmp1498;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1499;
    panda$core$Int64 $tmp1500;
    panda$core$Bit $tmp1505;
    org$pandalanguage$pandac$IRNode* newNode1522 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1523;
    org$pandalanguage$pandac$IRNode* $tmp1524;
    panda$core$Object* $tmp1525;
    panda$collections$Array* $tmp1528;
    panda$collections$Array* $tmp1529;
    panda$collections$Array* $tmp1530;
    panda$collections$ImmutableArray* $returnValue1539;
    panda$collections$ImmutableArray* $tmp1540;
    panda$collections$ImmutableArray* $tmp1541;
    panda$collections$ImmutableArray* $tmp1545;
    int $tmp1496;
    {
        $tmp1498 = NULL;
        newNodes1497 = $tmp1498;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
        if (((panda$core$Bit) { p_nodes != NULL }).value) {
        {
            panda$core$Int64$init$builtin_int64(&$tmp1500, 0);
            ITable* $tmp1501 = ((panda$collections$CollectionView*) p_nodes)->$class->itable;
            while ($tmp1501->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1501 = $tmp1501->next;
            }
            $fn1503 $tmp1502 = $tmp1501->methods[0];
            panda$core$Int64 $tmp1504 = $tmp1502(((panda$collections$CollectionView*) p_nodes));
            panda$core$Bit$init$builtin_bit(&$tmp1505, false);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1499, $tmp1500, $tmp1504, $tmp1505);
            int64_t $tmp1507 = $tmp1499.min.value;
            panda$core$Int64 i1506 = { $tmp1507 };
            int64_t $tmp1509 = $tmp1499.max.value;
            bool $tmp1510 = $tmp1499.inclusive.value;
            if ($tmp1510) goto $l1517; else goto $l1518;
            $l1517:;
            if ($tmp1507 <= $tmp1509) goto $l1511; else goto $l1513;
            $l1518:;
            if ($tmp1507 < $tmp1509) goto $l1511; else goto $l1513;
            $l1511:;
            {
                int $tmp1521;
                {
                    panda$core$Object* $tmp1526 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_nodes, i1506);
                    $tmp1525 = $tmp1526;
                    org$pandalanguage$pandac$IRNode* $tmp1527 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(((org$pandalanguage$pandac$IRNode*) $tmp1525), p_f);
                    $tmp1524 = $tmp1527;
                    $tmp1523 = $tmp1524;
                    newNode1522 = $tmp1523;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1523));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1524));
                    panda$core$Panda$unref$panda$core$Object($tmp1525);
                    if (((panda$core$Bit) { newNode1522 != NULL }).value) {
                    {
                        if (((panda$core$Bit) { newNodes1497 == NULL }).value) {
                        {
                            {
                                $tmp1528 = newNodes1497;
                                panda$collections$Array* $tmp1531 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                                panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp1531, ((panda$collections$CollectionView*) p_nodes));
                                $tmp1530 = $tmp1531;
                                $tmp1529 = $tmp1530;
                                newNodes1497 = $tmp1529;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1529));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1530));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1528));
                            }
                        }
                        }
                        panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T(newNodes1497, i1506, ((panda$core$Object*) newNode1522));
                    }
                    }
                }
                $tmp1521 = -1;
                goto $l1519;
                $l1519:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newNode1522));
                newNode1522 = NULL;
                switch ($tmp1521) {
                    case -1: goto $l1532;
                }
                $l1532:;
            }
            $l1514:;
            int64_t $tmp1534 = $tmp1509 - i1506.value;
            if ($tmp1510) goto $l1535; else goto $l1536;
            $l1535:;
            if ((uint64_t) $tmp1534 >= 1) goto $l1533; else goto $l1513;
            $l1536:;
            if ((uint64_t) $tmp1534 > 1) goto $l1533; else goto $l1513;
            $l1533:;
            i1506.value += 1;
            goto $l1511;
            $l1513:;
        }
        }
        if (((panda$core$Bit) { newNodes1497 != NULL }).value) {
        {
            panda$collections$ImmutableArray* $tmp1542 = panda$collections$Array$finish$R$panda$collections$ImmutableArray$LTpanda$collections$Array$T$GT(newNodes1497);
            $tmp1541 = $tmp1542;
            $tmp1540 = $tmp1541;
            $returnValue1539 = $tmp1540;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1540));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1541));
            $tmp1496 = 0;
            goto $l1494;
            $l1543:;
            return $returnValue1539;
        }
        }
        $tmp1545 = NULL;
        $returnValue1539 = $tmp1545;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1545));
        $tmp1496 = 1;
        goto $l1494;
        $l1546:;
        return $returnValue1539;
    }
    $l1494:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newNodes1497));
    switch ($tmp1496) {
        case 0: goto $l1543;
        case 1: goto $l1546;
    }
    $l1548:;
    if (false) goto $l1549; else goto $l1550;
    $l1550:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1551, (panda$core$Int64) { 448 }, &$s1552);
    abort();
    $l1549:;
    abort();
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* p_node, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* $returnValue1553;
    org$pandalanguage$pandac$IRNode* $tmp1554;
    org$pandalanguage$pandac$IRNode* $tmp1556;
    org$pandalanguage$pandac$IRNode* $tmp1557;
    if (((panda$core$Bit) { p_node == NULL }).value) {
    {
        $tmp1554 = NULL;
        $returnValue1553 = $tmp1554;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1554));
        return $returnValue1553;
    }
    }
    org$pandalanguage$pandac$IRNode* $tmp1559 = (($fn1558) p_node->$class->vtable[7])(p_node, p_f);
    $tmp1557 = $tmp1559;
    $tmp1556 = $tmp1557;
    $returnValue1553 = $tmp1556;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1556));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1557));
    return $returnValue1553;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$default$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$IRNode$Q$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, org$pandalanguage$pandac$IRNode* p_node, org$pandalanguage$pandac$IRNode* p_defaultValue) {
    org$pandalanguage$pandac$IRNode* $returnValue1561;
    org$pandalanguage$pandac$IRNode* $tmp1562;
    org$pandalanguage$pandac$IRNode* $tmp1564;
    if (((panda$core$Bit) { p_node != NULL }).value) {
    {
        $tmp1562 = p_node;
        $returnValue1561 = $tmp1562;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1562));
        return $returnValue1561;
    }
    }
    $tmp1564 = p_defaultValue;
    $returnValue1561 = $tmp1564;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1564));
    return $returnValue1561;
}
panda$collections$ImmutableArray* org$pandalanguage$pandac$IRNode$default$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$collections$ImmutableArray* p_nodes, panda$collections$ImmutableArray* p_defaultValue) {
    panda$collections$ImmutableArray* $returnValue1566;
    panda$collections$ImmutableArray* $tmp1567;
    panda$collections$ImmutableArray* $tmp1569;
    if (((panda$core$Bit) { p_nodes != NULL }).value) {
    {
        $tmp1567 = p_nodes;
        $returnValue1566 = $tmp1567;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1567));
        return $returnValue1566;
    }
    }
    $tmp1569 = p_defaultValue;
    $returnValue1566 = $tmp1569;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1569));
    return $returnValue1566;
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$transform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* result1574 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1575;
    org$pandalanguage$pandac$IRNode* $tmp1576;
    org$pandalanguage$pandac$IRNode* $returnValue1578;
    org$pandalanguage$pandac$IRNode* $tmp1579;
    org$pandalanguage$pandac$IRNode* $tmp1582;
    int $tmp1573;
    {
        org$pandalanguage$pandac$IRNode* $tmp1577 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(self, p_f);
        $tmp1576 = $tmp1577;
        $tmp1575 = $tmp1576;
        result1574 = $tmp1575;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1575));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1576));
        if (((panda$core$Bit) { result1574 != NULL }).value) {
        {
            $tmp1579 = result1574;
            $returnValue1578 = $tmp1579;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1579));
            $tmp1573 = 0;
            goto $l1571;
            $l1580:;
            return $returnValue1578;
        }
        }
        $tmp1582 = self;
        $returnValue1578 = $tmp1582;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1582));
        $tmp1573 = 1;
        goto $l1571;
        $l1583:;
        return $returnValue1578;
    }
    $l1571:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1574));
    result1574 = NULL;
    switch ($tmp1573) {
        case 1: goto $l1583;
        case 0: goto $l1580;
    }
    $l1585:;
    if (false) goto $l1586; else goto $l1587;
    $l1587:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1588, (panda$core$Int64) { 492 }, &$s1589);
    abort();
    $l1586:;
    abort();
}
org$pandalanguage$pandac$IRNode* org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$MutableMethod* p_f) {
    org$pandalanguage$pandac$IRNode* transformed1593 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1594;
    org$pandalanguage$pandac$IRNode* $tmp1595;
    org$pandalanguage$pandac$IRNode* $tmp1596;
    org$pandalanguage$pandac$IRNode* $returnValue1599;
    org$pandalanguage$pandac$IRNode* $tmp1600;
    org$pandalanguage$pandac$IRNode* $match$506_91606 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1607;
    panda$core$Int64 $tmp1631;
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
    panda$core$Int64 $tmp1706;
    panda$core$Int64 $tmp1710;
    panda$core$Int64 $tmp1714;
    panda$core$Int64 $tmp1718;
    panda$core$Int64 $tmp1722;
    panda$core$Int64 $tmp1725;
    org$pandalanguage$pandac$Position position1727;
    org$pandalanguage$pandac$IRNode* test1729 = NULL;
    org$pandalanguage$pandac$IRNode* message1731 = NULL;
    org$pandalanguage$pandac$IRNode* newTest1736 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1737;
    org$pandalanguage$pandac$IRNode* $tmp1738;
    org$pandalanguage$pandac$IRNode* newMessage1740 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1741;
    org$pandalanguage$pandac$IRNode* $tmp1742;
    org$pandalanguage$pandac$IRNode* $tmp1747;
    org$pandalanguage$pandac$IRNode* $tmp1748;
    panda$core$Int64 $tmp1750;
    org$pandalanguage$pandac$IRNode* $tmp1751;
    org$pandalanguage$pandac$IRNode* $tmp1754;
    panda$core$Int64 $tmp1762;
    org$pandalanguage$pandac$Position position1764;
    org$pandalanguage$pandac$Type* type1766 = NULL;
    org$pandalanguage$pandac$IRNode* left1768 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1770;
    org$pandalanguage$pandac$IRNode* right1772 = NULL;
    org$pandalanguage$pandac$IRNode* newLeft1777 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1778;
    org$pandalanguage$pandac$IRNode* $tmp1779;
    org$pandalanguage$pandac$IRNode* newRight1781 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1782;
    org$pandalanguage$pandac$IRNode* $tmp1783;
    org$pandalanguage$pandac$IRNode* $tmp1788;
    org$pandalanguage$pandac$IRNode* $tmp1789;
    panda$core$Int64 $tmp1791;
    org$pandalanguage$pandac$IRNode* $tmp1792;
    org$pandalanguage$pandac$IRNode* $tmp1795;
    panda$core$Int64 $tmp1803;
    org$pandalanguage$pandac$Position position1805;
    panda$collections$ImmutableArray* statements1807 = NULL;
    panda$collections$ImmutableArray* newStatements1812 = NULL;
    panda$collections$ImmutableArray* $tmp1813;
    panda$collections$ImmutableArray* $tmp1814;
    org$pandalanguage$pandac$IRNode* $tmp1816;
    org$pandalanguage$pandac$IRNode* $tmp1817;
    panda$core$Int64 $tmp1819;
    panda$core$Int64 $tmp1825;
    org$pandalanguage$pandac$Position position1827;
    panda$collections$ImmutableArray* statements1829 = NULL;
    panda$collections$ImmutableArray* finally1831 = NULL;
    panda$collections$ImmutableArray* newStatements1836 = NULL;
    panda$collections$ImmutableArray* $tmp1837;
    panda$collections$ImmutableArray* $tmp1838;
    panda$collections$ImmutableArray* newFinally1840 = NULL;
    panda$collections$ImmutableArray* $tmp1841;
    panda$collections$ImmutableArray* $tmp1842;
    org$pandalanguage$pandac$IRNode* $tmp1844;
    org$pandalanguage$pandac$IRNode* $tmp1845;
    panda$core$Int64 $tmp1847;
    panda$collections$ImmutableArray* $tmp1848;
    panda$collections$ImmutableArray* $tmp1851;
    panda$core$Int64 $tmp1859;
    org$pandalanguage$pandac$Position position1861;
    org$pandalanguage$pandac$Type* type1863 = NULL;
    org$pandalanguage$pandac$MethodRef* m1865 = NULL;
    panda$collections$ImmutableArray* args1867 = NULL;
    panda$collections$ImmutableArray* newArgs1872 = NULL;
    panda$collections$ImmutableArray* $tmp1873;
    panda$collections$ImmutableArray* $tmp1874;
    org$pandalanguage$pandac$IRNode* $tmp1876;
    org$pandalanguage$pandac$IRNode* $tmp1877;
    panda$core$Int64 $tmp1879;
    panda$collections$ImmutableArray* $tmp1880;
    panda$core$Int64 $tmp1888;
    org$pandalanguage$pandac$Position position1890;
    org$pandalanguage$pandac$IRNode* value1892 = NULL;
    org$pandalanguage$pandac$Type* type1894 = NULL;
    panda$core$Bit explicit1896;
    org$pandalanguage$pandac$IRNode* newValue1901 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1902;
    org$pandalanguage$pandac$IRNode* $tmp1903;
    org$pandalanguage$pandac$IRNode* $tmp1905;
    org$pandalanguage$pandac$IRNode* $tmp1906;
    panda$core$Int64 $tmp1908;
    panda$core$Int64 $tmp1914;
    org$pandalanguage$pandac$Position position1916;
    org$pandalanguage$pandac$IRNode* base1918 = NULL;
    org$pandalanguage$pandac$ChoiceCase* ce1920 = NULL;
    panda$core$Int64 field1922;
    org$pandalanguage$pandac$IRNode* newBase1927 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1928;
    org$pandalanguage$pandac$IRNode* $tmp1929;
    org$pandalanguage$pandac$IRNode* $tmp1931;
    org$pandalanguage$pandac$IRNode* $tmp1932;
    panda$core$Int64 $tmp1934;
    panda$core$Int64 $tmp1940;
    org$pandalanguage$pandac$Position position1942;
    org$pandalanguage$pandac$Type* type1944 = NULL;
    org$pandalanguage$pandac$IRNode* call1946 = NULL;
    org$pandalanguage$pandac$IRNode* newCall1951 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1952;
    org$pandalanguage$pandac$IRNode* $tmp1953;
    org$pandalanguage$pandac$IRNode* $tmp1955;
    org$pandalanguage$pandac$IRNode* $tmp1956;
    panda$core$Int64 $tmp1958;
    panda$core$Int64 $tmp1964;
    org$pandalanguage$pandac$IRNode* target1966 = NULL;
    org$pandalanguage$pandac$IRNode* value1968 = NULL;
    org$pandalanguage$pandac$IRNode* newValue1973 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1974;
    org$pandalanguage$pandac$IRNode* $tmp1975;
    org$pandalanguage$pandac$IRNode* $tmp1977;
    org$pandalanguage$pandac$IRNode* $tmp1978;
    panda$core$Int64 $tmp1980;
    panda$core$Int64 $tmp1986;
    org$pandalanguage$pandac$Position position1988;
    panda$core$String* label1990 = NULL;
    panda$collections$ImmutableArray* statements1992 = NULL;
    org$pandalanguage$pandac$IRNode* test1994 = NULL;
    panda$collections$ImmutableArray* newStatements1999 = NULL;
    panda$collections$ImmutableArray* $tmp2000;
    panda$collections$ImmutableArray* $tmp2001;
    org$pandalanguage$pandac$IRNode* newTest2003 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2004;
    org$pandalanguage$pandac$IRNode* $tmp2005;
    org$pandalanguage$pandac$IRNode* $tmp2010;
    org$pandalanguage$pandac$IRNode* $tmp2011;
    panda$core$Int64 $tmp2013;
    panda$collections$ImmutableArray* $tmp2014;
    org$pandalanguage$pandac$IRNode* $tmp2017;
    panda$core$Int64 $tmp2025;
    org$pandalanguage$pandac$IRNode* m2027 = NULL;
    panda$collections$ImmutableArray* args2029 = NULL;
    org$pandalanguage$pandac$IRNode* newM2034 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2035;
    org$pandalanguage$pandac$IRNode* $tmp2036;
    panda$collections$ImmutableArray* newArgs2038 = NULL;
    panda$collections$ImmutableArray* $tmp2039;
    panda$collections$ImmutableArray* $tmp2040;
    org$pandalanguage$pandac$IRNode* $tmp2045;
    org$pandalanguage$pandac$IRNode* $tmp2046;
    panda$core$Int64 $tmp2048;
    org$pandalanguage$pandac$IRNode* $tmp2049;
    panda$collections$ImmutableArray* $tmp2052;
    panda$core$Int64 $tmp2060;
    org$pandalanguage$pandac$IRNode* expr2062 = NULL;
    org$pandalanguage$pandac$IRNode* statements2064 = NULL;
    org$pandalanguage$pandac$IRNode* newExpr2069 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2070;
    org$pandalanguage$pandac$IRNode* $tmp2071;
    org$pandalanguage$pandac$IRNode* newStatements2073 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2074;
    org$pandalanguage$pandac$IRNode* $tmp2075;
    org$pandalanguage$pandac$IRNode* $tmp2080;
    org$pandalanguage$pandac$IRNode* $tmp2081;
    panda$core$Int64 $tmp2083;
    org$pandalanguage$pandac$IRNode* $tmp2084;
    org$pandalanguage$pandac$IRNode* $tmp2087;
    panda$core$Int64 $tmp2095;
    org$pandalanguage$pandac$Position position2097;
    org$pandalanguage$pandac$Type* type2099 = NULL;
    org$pandalanguage$pandac$IRNode* base2101 = NULL;
    org$pandalanguage$pandac$FieldDecl* field2103 = NULL;
    org$pandalanguage$pandac$IRNode* newBase2108 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2109;
    org$pandalanguage$pandac$IRNode* $tmp2110;
    org$pandalanguage$pandac$IRNode* $tmp2112;
    org$pandalanguage$pandac$IRNode* $tmp2113;
    panda$core$Int64 $tmp2115;
    panda$core$Int64 $tmp2121;
    org$pandalanguage$pandac$Position position2123;
    org$pandalanguage$pandac$IRNode* test2125 = NULL;
    panda$collections$ImmutableArray* ifTrue2127 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2129 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2134 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2135;
    org$pandalanguage$pandac$IRNode* $tmp2136;
    panda$collections$ImmutableArray* newIfTrue2138 = NULL;
    panda$collections$ImmutableArray* $tmp2139;
    panda$collections$ImmutableArray* $tmp2140;
    org$pandalanguage$pandac$IRNode* newIfFalse2142 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2143;
    org$pandalanguage$pandac$IRNode* $tmp2144;
    org$pandalanguage$pandac$IRNode* $tmp2152;
    org$pandalanguage$pandac$IRNode* $tmp2153;
    panda$core$Int64 $tmp2155;
    org$pandalanguage$pandac$IRNode* $tmp2156;
    panda$collections$ImmutableArray* $tmp2159;
    org$pandalanguage$pandac$IRNode* $tmp2162;
    panda$core$Int64 $tmp2170;
    org$pandalanguage$pandac$Position position2172;
    org$pandalanguage$pandac$IRNode* value2174 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2179 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2180;
    org$pandalanguage$pandac$IRNode* $tmp2181;
    org$pandalanguage$pandac$IRNode* $tmp2183;
    org$pandalanguage$pandac$IRNode* $tmp2184;
    panda$core$Int64 $tmp2186;
    panda$core$Int64 $tmp2192;
    org$pandalanguage$pandac$Position position2194;
    org$pandalanguage$pandac$IRNode* value2196 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2201 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2202;
    org$pandalanguage$pandac$IRNode* $tmp2203;
    org$pandalanguage$pandac$IRNode* $tmp2205;
    org$pandalanguage$pandac$IRNode* $tmp2206;
    panda$core$Int64 $tmp2208;
    panda$core$Int64 $tmp2214;
    org$pandalanguage$pandac$Position position2216;
    panda$core$String* label2218 = NULL;
    panda$collections$ImmutableArray* statements2220 = NULL;
    panda$collections$ImmutableArray* newStatements2225 = NULL;
    panda$collections$ImmutableArray* $tmp2226;
    panda$collections$ImmutableArray* $tmp2227;
    org$pandalanguage$pandac$IRNode* $tmp2229;
    org$pandalanguage$pandac$IRNode* $tmp2230;
    panda$core$Int64 $tmp2232;
    panda$core$Int64 $tmp2238;
    org$pandalanguage$pandac$Position position2240;
    org$pandalanguage$pandac$IRNode* value2242 = NULL;
    panda$collections$ImmutableArray* whens2244 = NULL;
    panda$collections$ImmutableArray* other2246 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2251 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2252;
    org$pandalanguage$pandac$IRNode* $tmp2253;
    panda$collections$ImmutableArray* newWhens2255 = NULL;
    panda$collections$ImmutableArray* $tmp2256;
    panda$collections$ImmutableArray* $tmp2257;
    panda$collections$ImmutableArray* newOther2259 = NULL;
    panda$collections$ImmutableArray* $tmp2260;
    panda$collections$ImmutableArray* $tmp2261;
    org$pandalanguage$pandac$IRNode* $tmp2269;
    org$pandalanguage$pandac$IRNode* $tmp2270;
    panda$core$Int64 $tmp2272;
    org$pandalanguage$pandac$IRNode* $tmp2273;
    panda$collections$ImmutableArray* $tmp2276;
    panda$collections$ImmutableArray* $tmp2279;
    panda$core$Int64 $tmp2287;
    org$pandalanguage$pandac$Position position2289;
    org$pandalanguage$pandac$Type* type2291 = NULL;
    org$pandalanguage$pandac$IRNode* target2293 = NULL;
    org$pandalanguage$pandac$MethodRef* m2295 = NULL;
    org$pandalanguage$pandac$IRNode* newTarget2300 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2301;
    org$pandalanguage$pandac$IRNode* $tmp2302;
    org$pandalanguage$pandac$IRNode* $tmp2304;
    org$pandalanguage$pandac$IRNode* $tmp2305;
    panda$core$Int64 $tmp2307;
    panda$core$Int64 $tmp2313;
    org$pandalanguage$pandac$Position position2315;
    org$pandalanguage$pandac$parser$Token$Kind op2317;
    org$pandalanguage$pandac$IRNode* base2319 = NULL;
    org$pandalanguage$pandac$IRNode* newBase2324 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2325;
    org$pandalanguage$pandac$IRNode* $tmp2326;
    org$pandalanguage$pandac$IRNode* $tmp2328;
    org$pandalanguage$pandac$IRNode* $tmp2329;
    panda$core$Int64 $tmp2331;
    panda$core$Int64 $tmp2337;
    org$pandalanguage$pandac$Position position2339;
    panda$core$String* label2341 = NULL;
    org$pandalanguage$pandac$IRNode* target2343 = NULL;
    org$pandalanguage$pandac$IRNode* list2345 = NULL;
    panda$collections$ImmutableArray* statements2347 = NULL;
    org$pandalanguage$pandac$IRNode* newList2352 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2353;
    org$pandalanguage$pandac$IRNode* $tmp2354;
    panda$collections$ImmutableArray* newStatements2356 = NULL;
    panda$collections$ImmutableArray* $tmp2357;
    panda$collections$ImmutableArray* $tmp2358;
    org$pandalanguage$pandac$IRNode* $tmp2363;
    org$pandalanguage$pandac$IRNode* $tmp2364;
    panda$core$Int64 $tmp2366;
    org$pandalanguage$pandac$IRNode* $tmp2367;
    panda$collections$ImmutableArray* $tmp2370;
    panda$core$Int64 $tmp2378;
    org$pandalanguage$pandac$Position position2380;
    org$pandalanguage$pandac$IRNode* value2382 = NULL;
    org$pandalanguage$pandac$IRNode* newValue2387 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2388;
    org$pandalanguage$pandac$IRNode* $tmp2389;
    org$pandalanguage$pandac$IRNode* $tmp2391;
    org$pandalanguage$pandac$IRNode* $tmp2392;
    panda$core$Int64 $tmp2394;
    panda$core$Int64 $tmp2400;
    org$pandalanguage$pandac$IRNode* base2402 = NULL;
    panda$core$Int64 id2404;
    org$pandalanguage$pandac$IRNode* newBase2409 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2410;
    org$pandalanguage$pandac$IRNode* $tmp2411;
    org$pandalanguage$pandac$IRNode* $tmp2413;
    org$pandalanguage$pandac$IRNode* $tmp2414;
    panda$core$Int64 $tmp2416;
    panda$core$Int64 $tmp2422;
    org$pandalanguage$pandac$Position position2424;
    org$pandalanguage$pandac$IRNode* test2426 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2428 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2430 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2435 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2436;
    org$pandalanguage$pandac$IRNode* $tmp2437;
    org$pandalanguage$pandac$IRNode* newIfTrue2439 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2440;
    org$pandalanguage$pandac$IRNode* $tmp2441;
    org$pandalanguage$pandac$IRNode* newIfFalse2443 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2444;
    org$pandalanguage$pandac$IRNode* $tmp2445;
    org$pandalanguage$pandac$IRNode* $tmp2453;
    org$pandalanguage$pandac$IRNode* $tmp2454;
    panda$core$Int64 $tmp2456;
    org$pandalanguage$pandac$IRNode* $tmp2457;
    org$pandalanguage$pandac$IRNode* $tmp2460;
    org$pandalanguage$pandac$IRNode* $tmp2463;
    panda$core$Int64 $tmp2471;
    org$pandalanguage$pandac$Position position2473;
    org$pandalanguage$pandac$Variable$Kind kind2475;
    panda$collections$ImmutableArray* decls2477 = NULL;
    panda$collections$ImmutableArray* newDecls2482 = NULL;
    panda$collections$ImmutableArray* $tmp2483;
    panda$collections$ImmutableArray* $tmp2484;
    org$pandalanguage$pandac$IRNode* $tmp2486;
    org$pandalanguage$pandac$IRNode* $tmp2487;
    panda$core$Int64 $tmp2489;
    panda$core$Int64 $tmp2495;
    org$pandalanguage$pandac$Position position2497;
    panda$collections$ImmutableArray* tests2499 = NULL;
    panda$collections$ImmutableArray* statements2501 = NULL;
    panda$collections$ImmutableArray* newTests2506 = NULL;
    panda$collections$ImmutableArray* $tmp2507;
    panda$collections$ImmutableArray* $tmp2508;
    panda$collections$ImmutableArray* newStatements2510 = NULL;
    panda$collections$ImmutableArray* $tmp2511;
    panda$collections$ImmutableArray* $tmp2512;
    org$pandalanguage$pandac$IRNode* $tmp2517;
    org$pandalanguage$pandac$IRNode* $tmp2518;
    panda$core$Int64 $tmp2520;
    panda$collections$ImmutableArray* $tmp2521;
    panda$collections$ImmutableArray* $tmp2524;
    panda$core$Int64 $tmp2532;
    org$pandalanguage$pandac$Position position2534;
    panda$core$String* label2536 = NULL;
    org$pandalanguage$pandac$IRNode* test2538 = NULL;
    panda$collections$ImmutableArray* statements2540 = NULL;
    org$pandalanguage$pandac$IRNode* newTest2545 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2546;
    org$pandalanguage$pandac$IRNode* $tmp2547;
    panda$collections$ImmutableArray* newStatements2549 = NULL;
    panda$collections$ImmutableArray* $tmp2550;
    panda$collections$ImmutableArray* $tmp2551;
    org$pandalanguage$pandac$IRNode* $tmp2556;
    org$pandalanguage$pandac$IRNode* $tmp2557;
    panda$core$Int64 $tmp2559;
    org$pandalanguage$pandac$IRNode* $tmp2560;
    panda$collections$ImmutableArray* $tmp2563;
    panda$core$Bit $tmp2571;
    org$pandalanguage$pandac$IRNode* $tmp2576;
    int $tmp1592;
    {
        if (p_f->target) {
            $tmp1596 = (($fn1597) p_f->pointer)(p_f->target, self);
        } else {
            $tmp1596 = (($fn1598) p_f->pointer)(self);
        }
        $tmp1595 = $tmp1596;
        $tmp1594 = $tmp1595;
        transformed1593 = $tmp1594;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1595));
        if (((panda$core$Bit) { transformed1593 != NULL }).value) {
        {
            $tmp1600 = transformed1593;
            $returnValue1599 = $tmp1600;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1600));
            $tmp1592 = 0;
            goto $l1590;
            $l1601:;
            return $returnValue1599;
        }
        }
        int $tmp1605;
        {
            $tmp1607 = self;
            $match$506_91606 = $tmp1607;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1607));
            panda$core$Int64$init$builtin_int64(&$tmp1631, 1);
            panda$core$Bit $tmp1632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1631);
            bool $tmp1630 = $tmp1632.value;
            if ($tmp1630) goto $l1633;
            panda$core$Int64$init$builtin_int64(&$tmp1634, 3);
            panda$core$Bit $tmp1635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1634);
            $tmp1630 = $tmp1635.value;
            $l1633:;
            panda$core$Bit $tmp1636 = { $tmp1630 };
            bool $tmp1629 = $tmp1636.value;
            if ($tmp1629) goto $l1637;
            panda$core$Int64$init$builtin_int64(&$tmp1638, 6);
            panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1638);
            $tmp1629 = $tmp1639.value;
            $l1637:;
            panda$core$Bit $tmp1640 = { $tmp1629 };
            bool $tmp1628 = $tmp1640.value;
            if ($tmp1628) goto $l1641;
            panda$core$Int64$init$builtin_int64(&$tmp1642, 9);
            panda$core$Bit $tmp1643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1642);
            $tmp1628 = $tmp1643.value;
            $l1641:;
            panda$core$Bit $tmp1644 = { $tmp1628 };
            bool $tmp1627 = $tmp1644.value;
            if ($tmp1627) goto $l1645;
            panda$core$Int64$init$builtin_int64(&$tmp1646, 12);
            panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1646);
            $tmp1627 = $tmp1647.value;
            $l1645:;
            panda$core$Bit $tmp1648 = { $tmp1627 };
            bool $tmp1626 = $tmp1648.value;
            if ($tmp1626) goto $l1649;
            panda$core$Int64$init$builtin_int64(&$tmp1650, 13);
            panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1650);
            $tmp1626 = $tmp1651.value;
            $l1649:;
            panda$core$Bit $tmp1652 = { $tmp1626 };
            bool $tmp1625 = $tmp1652.value;
            if ($tmp1625) goto $l1653;
            panda$core$Int64$init$builtin_int64(&$tmp1654, 20);
            panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1654);
            $tmp1625 = $tmp1655.value;
            $l1653:;
            panda$core$Bit $tmp1656 = { $tmp1625 };
            bool $tmp1624 = $tmp1656.value;
            if ($tmp1624) goto $l1657;
            panda$core$Int64$init$builtin_int64(&$tmp1658, 26);
            panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1658);
            $tmp1624 = $tmp1659.value;
            $l1657:;
            panda$core$Bit $tmp1660 = { $tmp1624 };
            bool $tmp1623 = $tmp1660.value;
            if ($tmp1623) goto $l1661;
            panda$core$Int64$init$builtin_int64(&$tmp1662, 27);
            panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1662);
            $tmp1623 = $tmp1663.value;
            $l1661:;
            panda$core$Bit $tmp1664 = { $tmp1623 };
            bool $tmp1622 = $tmp1664.value;
            if ($tmp1622) goto $l1665;
            panda$core$Int64$init$builtin_int64(&$tmp1666, 30);
            panda$core$Bit $tmp1667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1666);
            $tmp1622 = $tmp1667.value;
            $l1665:;
            panda$core$Bit $tmp1668 = { $tmp1622 };
            bool $tmp1621 = $tmp1668.value;
            if ($tmp1621) goto $l1669;
            panda$core$Int64$init$builtin_int64(&$tmp1670, 34);
            panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1670);
            $tmp1621 = $tmp1671.value;
            $l1669:;
            panda$core$Bit $tmp1672 = { $tmp1621 };
            bool $tmp1620 = $tmp1672.value;
            if ($tmp1620) goto $l1673;
            panda$core$Int64$init$builtin_int64(&$tmp1674, 35);
            panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1674);
            $tmp1620 = $tmp1675.value;
            $l1673:;
            panda$core$Bit $tmp1676 = { $tmp1620 };
            bool $tmp1619 = $tmp1676.value;
            if ($tmp1619) goto $l1677;
            panda$core$Int64$init$builtin_int64(&$tmp1678, 36);
            panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1678);
            $tmp1619 = $tmp1679.value;
            $l1677:;
            panda$core$Bit $tmp1680 = { $tmp1619 };
            bool $tmp1618 = $tmp1680.value;
            if ($tmp1618) goto $l1681;
            panda$core$Int64$init$builtin_int64(&$tmp1682, 37);
            panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1682);
            $tmp1618 = $tmp1683.value;
            $l1681:;
            panda$core$Bit $tmp1684 = { $tmp1618 };
            bool $tmp1617 = $tmp1684.value;
            if ($tmp1617) goto $l1685;
            panda$core$Int64$init$builtin_int64(&$tmp1686, 32);
            panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1686);
            $tmp1617 = $tmp1687.value;
            $l1685:;
            panda$core$Bit $tmp1688 = { $tmp1617 };
            bool $tmp1616 = $tmp1688.value;
            if ($tmp1616) goto $l1689;
            panda$core$Int64$init$builtin_int64(&$tmp1690, 39);
            panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1690);
            $tmp1616 = $tmp1691.value;
            $l1689:;
            panda$core$Bit $tmp1692 = { $tmp1616 };
            bool $tmp1615 = $tmp1692.value;
            if ($tmp1615) goto $l1693;
            panda$core$Int64$init$builtin_int64(&$tmp1694, 40);
            panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1694);
            $tmp1615 = $tmp1695.value;
            $l1693:;
            panda$core$Bit $tmp1696 = { $tmp1615 };
            bool $tmp1614 = $tmp1696.value;
            if ($tmp1614) goto $l1697;
            panda$core$Int64$init$builtin_int64(&$tmp1698, 44);
            panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1698);
            $tmp1614 = $tmp1699.value;
            $l1697:;
            panda$core$Bit $tmp1700 = { $tmp1614 };
            bool $tmp1613 = $tmp1700.value;
            if ($tmp1613) goto $l1701;
            panda$core$Int64$init$builtin_int64(&$tmp1702, 41);
            panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1702);
            $tmp1613 = $tmp1703.value;
            $l1701:;
            panda$core$Bit $tmp1704 = { $tmp1613 };
            bool $tmp1612 = $tmp1704.value;
            if ($tmp1612) goto $l1705;
            panda$core$Int64$init$builtin_int64(&$tmp1706, 42);
            panda$core$Bit $tmp1707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1706);
            $tmp1612 = $tmp1707.value;
            $l1705:;
            panda$core$Bit $tmp1708 = { $tmp1612 };
            bool $tmp1611 = $tmp1708.value;
            if ($tmp1611) goto $l1709;
            panda$core$Int64$init$builtin_int64(&$tmp1710, 43);
            panda$core$Bit $tmp1711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1710);
            $tmp1611 = $tmp1711.value;
            $l1709:;
            panda$core$Bit $tmp1712 = { $tmp1611 };
            bool $tmp1610 = $tmp1712.value;
            if ($tmp1610) goto $l1713;
            panda$core$Int64$init$builtin_int64(&$tmp1714, 45);
            panda$core$Bit $tmp1715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1714);
            $tmp1610 = $tmp1715.value;
            $l1713:;
            panda$core$Bit $tmp1716 = { $tmp1610 };
            bool $tmp1609 = $tmp1716.value;
            if ($tmp1609) goto $l1717;
            panda$core$Int64$init$builtin_int64(&$tmp1718, 47);
            panda$core$Bit $tmp1719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1718);
            $tmp1609 = $tmp1719.value;
            $l1717:;
            panda$core$Bit $tmp1720 = { $tmp1609 };
            bool $tmp1608 = $tmp1720.value;
            if ($tmp1608) goto $l1721;
            panda$core$Int64$init$builtin_int64(&$tmp1722, 48);
            panda$core$Bit $tmp1723 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1722);
            $tmp1608 = $tmp1723.value;
            $l1721:;
            panda$core$Bit $tmp1724 = { $tmp1608 };
            if ($tmp1724.value) {
            {
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1725, 0);
            panda$core$Bit $tmp1726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1725);
            if ($tmp1726.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1728 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position1727 = *$tmp1728;
                org$pandalanguage$pandac$IRNode** $tmp1730 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 16));
                test1729 = *$tmp1730;
                org$pandalanguage$pandac$IRNode** $tmp1732 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 24));
                message1731 = *$tmp1732;
                int $tmp1735;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1739 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test1729, p_f);
                    $tmp1738 = $tmp1739;
                    $tmp1737 = $tmp1738;
                    newTest1736 = $tmp1737;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1738));
                    org$pandalanguage$pandac$IRNode* $tmp1743 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(message1731, p_f);
                    $tmp1742 = $tmp1743;
                    $tmp1741 = $tmp1742;
                    newMessage1740 = $tmp1741;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1741));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1742));
                    bool $tmp1744 = ((panda$core$Bit) { newTest1736 != NULL }).value;
                    if ($tmp1744) goto $l1745;
                    $tmp1744 = ((panda$core$Bit) { newMessage1740 != NULL }).value;
                    $l1745:;
                    panda$core$Bit $tmp1746 = { $tmp1744 };
                    if ($tmp1746.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1749 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1750, 0);
                        org$pandalanguage$pandac$IRNode* $tmp1753 = (($fn1752) self->$class->vtable[5])(self, newTest1736, test1729);
                        $tmp1751 = $tmp1753;
                        org$pandalanguage$pandac$IRNode* $tmp1756 = (($fn1755) self->$class->vtable[5])(self, newMessage1740, message1731);
                        $tmp1754 = $tmp1756;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp1749, $tmp1750, position1727, $tmp1751, $tmp1754);
                        $tmp1748 = $tmp1749;
                        $tmp1747 = $tmp1748;
                        $returnValue1599 = $tmp1747;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1747));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
                        $tmp1735 = 0;
                        goto $l1733;
                        $l1757:;
                        $tmp1605 = 0;
                        goto $l1603;
                        $l1758:;
                        $tmp1592 = 1;
                        goto $l1590;
                        $l1759:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1735 = -1;
                goto $l1733;
                $l1733:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newMessage1740));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest1736));
                newTest1736 = NULL;
                newMessage1740 = NULL;
                switch ($tmp1735) {
                    case 0: goto $l1757;
                    case -1: goto $l1761;
                }
                $l1761:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1762, 2);
            panda$core$Bit $tmp1763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1762);
            if ($tmp1763.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1765 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position1764 = *$tmp1765;
                org$pandalanguage$pandac$Type** $tmp1767 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91606->$data + 16));
                type1766 = *$tmp1767;
                org$pandalanguage$pandac$IRNode** $tmp1769 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 24));
                left1768 = *$tmp1769;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1771 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$506_91606->$data + 32));
                op1770 = *$tmp1771;
                org$pandalanguage$pandac$IRNode** $tmp1773 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 40));
                right1772 = *$tmp1773;
                int $tmp1776;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1780 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(left1768, p_f);
                    $tmp1779 = $tmp1780;
                    $tmp1778 = $tmp1779;
                    newLeft1777 = $tmp1778;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1778));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1779));
                    org$pandalanguage$pandac$IRNode* $tmp1784 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(right1772, p_f);
                    $tmp1783 = $tmp1784;
                    $tmp1782 = $tmp1783;
                    newRight1781 = $tmp1782;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1782));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
                    bool $tmp1785 = ((panda$core$Bit) { newLeft1777 != NULL }).value;
                    if ($tmp1785) goto $l1786;
                    $tmp1785 = ((panda$core$Bit) { newRight1781 != NULL }).value;
                    $l1786:;
                    panda$core$Bit $tmp1787 = { $tmp1785 };
                    if ($tmp1787.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1790 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1791, 2);
                        org$pandalanguage$pandac$IRNode* $tmp1794 = (($fn1793) self->$class->vtable[5])(self, newLeft1777, left1768);
                        $tmp1792 = $tmp1794;
                        org$pandalanguage$pandac$IRNode* $tmp1797 = (($fn1796) self->$class->vtable[5])(self, newRight1781, right1772);
                        $tmp1795 = $tmp1797;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp1790, $tmp1791, position1764, type1766, $tmp1792, op1770, $tmp1795);
                        $tmp1789 = $tmp1790;
                        $tmp1788 = $tmp1789;
                        $returnValue1599 = $tmp1788;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1788));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1789));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
                        $tmp1776 = 0;
                        goto $l1774;
                        $l1798:;
                        $tmp1605 = 1;
                        goto $l1603;
                        $l1799:;
                        $tmp1592 = 2;
                        goto $l1590;
                        $l1800:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1776 = -1;
                goto $l1774;
                $l1774:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newRight1781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newLeft1777));
                newLeft1777 = NULL;
                newRight1781 = NULL;
                switch ($tmp1776) {
                    case -1: goto $l1802;
                    case 0: goto $l1798;
                }
                $l1802:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1803, 4);
            panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1803);
            if ($tmp1804.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1806 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position1805 = *$tmp1806;
                panda$collections$ImmutableArray** $tmp1808 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 16));
                statements1807 = *$tmp1808;
                int $tmp1811;
                {
                    panda$collections$ImmutableArray* $tmp1815 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1807, p_f);
                    $tmp1814 = $tmp1815;
                    $tmp1813 = $tmp1814;
                    newStatements1812 = $tmp1813;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1813));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1814));
                    if (((panda$core$Bit) { newStatements1812 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1818 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1819, 4);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1818, $tmp1819, position1805, newStatements1812);
                        $tmp1817 = $tmp1818;
                        $tmp1816 = $tmp1817;
                        $returnValue1599 = $tmp1816;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1816));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1817));
                        $tmp1811 = 0;
                        goto $l1809;
                        $l1820:;
                        $tmp1605 = 2;
                        goto $l1603;
                        $l1821:;
                        $tmp1592 = 3;
                        goto $l1590;
                        $l1822:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1811 = -1;
                goto $l1809;
                $l1809:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1812));
                newStatements1812 = NULL;
                switch ($tmp1811) {
                    case -1: goto $l1824;
                    case 0: goto $l1820;
                }
                $l1824:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1825, 5);
            panda$core$Bit $tmp1826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1825);
            if ($tmp1826.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1828 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position1827 = *$tmp1828;
                panda$collections$ImmutableArray** $tmp1830 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 16));
                statements1829 = *$tmp1830;
                panda$collections$ImmutableArray** $tmp1832 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 24));
                finally1831 = *$tmp1832;
                int $tmp1835;
                {
                    panda$collections$ImmutableArray* $tmp1839 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1829, p_f);
                    $tmp1838 = $tmp1839;
                    $tmp1837 = $tmp1838;
                    newStatements1836 = $tmp1837;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1837));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1838));
                    panda$collections$ImmutableArray* $tmp1843 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(finally1831, p_f);
                    $tmp1842 = $tmp1843;
                    $tmp1841 = $tmp1842;
                    newFinally1840 = $tmp1841;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1841));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
                    if (((panda$core$Bit) { newStatements1836 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1846 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1847, 5);
                        panda$collections$ImmutableArray* $tmp1850 = (($fn1849) self->$class->vtable[6])(self, newStatements1836, statements1829);
                        $tmp1848 = $tmp1850;
                        panda$collections$ImmutableArray* $tmp1853 = (($fn1852) self->$class->vtable[6])(self, newFinally1840, finally1831);
                        $tmp1851 = $tmp1853;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1846, $tmp1847, position1827, $tmp1848, $tmp1851);
                        $tmp1845 = $tmp1846;
                        $tmp1844 = $tmp1845;
                        $returnValue1599 = $tmp1844;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1844));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1845));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1851));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1848));
                        $tmp1835 = 0;
                        goto $l1833;
                        $l1854:;
                        $tmp1605 = 3;
                        goto $l1603;
                        $l1855:;
                        $tmp1592 = 4;
                        goto $l1590;
                        $l1856:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1835 = -1;
                goto $l1833;
                $l1833:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newFinally1840));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1836));
                newStatements1836 = NULL;
                newFinally1840 = NULL;
                switch ($tmp1835) {
                    case -1: goto $l1858;
                    case 0: goto $l1854;
                }
                $l1858:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1859, 7);
            panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1859);
            if ($tmp1860.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1862 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position1861 = *$tmp1862;
                org$pandalanguage$pandac$Type** $tmp1864 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91606->$data + 16));
                type1863 = *$tmp1864;
                org$pandalanguage$pandac$MethodRef** $tmp1866 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$506_91606->$data + 24));
                m1865 = *$tmp1866;
                panda$collections$ImmutableArray** $tmp1868 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 32));
                args1867 = *$tmp1868;
                int $tmp1871;
                {
                    panda$collections$ImmutableArray* $tmp1875 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(args1867, p_f);
                    $tmp1874 = $tmp1875;
                    $tmp1873 = $tmp1874;
                    newArgs1872 = $tmp1873;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1873));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1874));
                    if (((panda$core$Bit) { newArgs1872 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1878 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1879, 7);
                        panda$collections$ImmutableArray* $tmp1882 = (($fn1881) self->$class->vtable[6])(self, newArgs1872, args1867);
                        $tmp1880 = $tmp1882;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp1878, $tmp1879, position1861, type1863, m1865, $tmp1880);
                        $tmp1877 = $tmp1878;
                        $tmp1876 = $tmp1877;
                        $returnValue1599 = $tmp1876;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1876));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1877));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1880));
                        $tmp1871 = 0;
                        goto $l1869;
                        $l1883:;
                        $tmp1605 = 4;
                        goto $l1603;
                        $l1884:;
                        $tmp1592 = 5;
                        goto $l1590;
                        $l1885:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1871 = -1;
                goto $l1869;
                $l1869:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newArgs1872));
                newArgs1872 = NULL;
                switch ($tmp1871) {
                    case 0: goto $l1883;
                    case -1: goto $l1887;
                }
                $l1887:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1888, 8);
            panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1888);
            if ($tmp1889.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1891 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position1890 = *$tmp1891;
                org$pandalanguage$pandac$IRNode** $tmp1893 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 16));
                value1892 = *$tmp1893;
                org$pandalanguage$pandac$Type** $tmp1895 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91606->$data + 24));
                type1894 = *$tmp1895;
                panda$core$Bit* $tmp1897 = ((panda$core$Bit*) ((char*) $match$506_91606->$data + 32));
                explicit1896 = *$tmp1897;
                int $tmp1900;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1904 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value1892, p_f);
                    $tmp1903 = $tmp1904;
                    $tmp1902 = $tmp1903;
                    newValue1901 = $tmp1902;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1902));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1903));
                    if (((panda$core$Bit) { newValue1901 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1907 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1908, 8);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit($tmp1907, $tmp1908, position1890, newValue1901, type1894, explicit1896);
                        $tmp1906 = $tmp1907;
                        $tmp1905 = $tmp1906;
                        $returnValue1599 = $tmp1905;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1905));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1906));
                        $tmp1900 = 0;
                        goto $l1898;
                        $l1909:;
                        $tmp1605 = 5;
                        goto $l1603;
                        $l1910:;
                        $tmp1592 = 6;
                        goto $l1590;
                        $l1911:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1900 = -1;
                goto $l1898;
                $l1898:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue1901));
                newValue1901 = NULL;
                switch ($tmp1900) {
                    case -1: goto $l1913;
                    case 0: goto $l1909;
                }
                $l1913:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1914, 10);
            panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1914);
            if ($tmp1915.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1917 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position1916 = *$tmp1917;
                org$pandalanguage$pandac$IRNode** $tmp1919 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 16));
                base1918 = *$tmp1919;
                org$pandalanguage$pandac$ChoiceCase** $tmp1921 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$506_91606->$data + 24));
                ce1920 = *$tmp1921;
                panda$core$Int64* $tmp1923 = ((panda$core$Int64*) ((char*) $match$506_91606->$data + 32));
                field1922 = *$tmp1923;
                int $tmp1926;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1930 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base1918, p_f);
                    $tmp1929 = $tmp1930;
                    $tmp1928 = $tmp1929;
                    newBase1927 = $tmp1928;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1928));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1929));
                    if (((panda$core$Bit) { newBase1927 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1933 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1934, 10);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64($tmp1933, $tmp1934, position1916, newBase1927, ce1920, field1922);
                        $tmp1932 = $tmp1933;
                        $tmp1931 = $tmp1932;
                        $returnValue1599 = $tmp1931;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1931));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
                        $tmp1926 = 0;
                        goto $l1924;
                        $l1935:;
                        $tmp1605 = 6;
                        goto $l1603;
                        $l1936:;
                        $tmp1592 = 7;
                        goto $l1590;
                        $l1937:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1926 = -1;
                goto $l1924;
                $l1924:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase1927));
                newBase1927 = NULL;
                switch ($tmp1926) {
                    case -1: goto $l1939;
                    case 0: goto $l1935;
                }
                $l1939:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1940, 11);
            panda$core$Bit $tmp1941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1940);
            if ($tmp1941.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1943 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position1942 = *$tmp1943;
                org$pandalanguage$pandac$Type** $tmp1945 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91606->$data + 16));
                type1944 = *$tmp1945;
                org$pandalanguage$pandac$IRNode** $tmp1947 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 24));
                call1946 = *$tmp1947;
                int $tmp1950;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1954 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(call1946, p_f);
                    $tmp1953 = $tmp1954;
                    $tmp1952 = $tmp1953;
                    newCall1951 = $tmp1952;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1952));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1953));
                    if (((panda$core$Bit) { newCall1951 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1957 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1958, 11);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode($tmp1957, $tmp1958, position1942, type1944, newCall1951);
                        $tmp1956 = $tmp1957;
                        $tmp1955 = $tmp1956;
                        $returnValue1599 = $tmp1955;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1955));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1956));
                        $tmp1950 = 0;
                        goto $l1948;
                        $l1959:;
                        $tmp1605 = 7;
                        goto $l1603;
                        $l1960:;
                        $tmp1592 = 8;
                        goto $l1590;
                        $l1961:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1950 = -1;
                goto $l1948;
                $l1948:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newCall1951));
                newCall1951 = NULL;
                switch ($tmp1950) {
                    case 0: goto $l1959;
                    case -1: goto $l1963;
                }
                $l1963:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1964, 14);
            panda$core$Bit $tmp1965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1964);
            if ($tmp1965.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1967 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 0));
                target1966 = *$tmp1967;
                org$pandalanguage$pandac$IRNode** $tmp1969 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 8));
                value1968 = *$tmp1969;
                int $tmp1972;
                {
                    org$pandalanguage$pandac$IRNode* $tmp1976 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value1968, p_f);
                    $tmp1975 = $tmp1976;
                    $tmp1974 = $tmp1975;
                    newValue1973 = $tmp1974;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1974));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1975));
                    if (((panda$core$Bit) { newValue1973 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp1979 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp1980, 14);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q($tmp1979, $tmp1980, target1966, newValue1973);
                        $tmp1978 = $tmp1979;
                        $tmp1977 = $tmp1978;
                        $returnValue1599 = $tmp1977;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1977));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1978));
                        $tmp1972 = 0;
                        goto $l1970;
                        $l1981:;
                        $tmp1605 = 8;
                        goto $l1603;
                        $l1982:;
                        $tmp1592 = 9;
                        goto $l1590;
                        $l1983:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1972 = -1;
                goto $l1970;
                $l1970:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue1973));
                newValue1973 = NULL;
                switch ($tmp1972) {
                    case 0: goto $l1981;
                    case -1: goto $l1985;
                }
                $l1985:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp1986, 15);
            panda$core$Bit $tmp1987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp1986);
            if ($tmp1987.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1989 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position1988 = *$tmp1989;
                panda$core$String** $tmp1991 = ((panda$core$String**) ((char*) $match$506_91606->$data + 16));
                label1990 = *$tmp1991;
                panda$collections$ImmutableArray** $tmp1993 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 24));
                statements1992 = *$tmp1993;
                org$pandalanguage$pandac$IRNode** $tmp1995 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 32));
                test1994 = *$tmp1995;
                int $tmp1998;
                {
                    panda$collections$ImmutableArray* $tmp2002 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements1992, p_f);
                    $tmp2001 = $tmp2002;
                    $tmp2000 = $tmp2001;
                    newStatements1999 = $tmp2000;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2000));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2001));
                    org$pandalanguage$pandac$IRNode* $tmp2006 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test1994, p_f);
                    $tmp2005 = $tmp2006;
                    $tmp2004 = $tmp2005;
                    newTest2003 = $tmp2004;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2004));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2005));
                    bool $tmp2007 = ((panda$core$Bit) { newStatements1999 != NULL }).value;
                    if ($tmp2007) goto $l2008;
                    $tmp2007 = ((panda$core$Bit) { newTest2003 != NULL }).value;
                    $l2008:;
                    panda$core$Bit $tmp2009 = { $tmp2007 };
                    if ($tmp2009.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2012 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2013, 15);
                        panda$collections$ImmutableArray* $tmp2016 = (($fn2015) self->$class->vtable[6])(self, newStatements1999, statements1992);
                        $tmp2014 = $tmp2016;
                        org$pandalanguage$pandac$IRNode* $tmp2019 = (($fn2018) self->$class->vtable[5])(self, newTest2003, test1994);
                        $tmp2017 = $tmp2019;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode($tmp2012, $tmp2013, position1988, label1990, $tmp2014, $tmp2017);
                        $tmp2011 = $tmp2012;
                        $tmp2010 = $tmp2011;
                        $returnValue1599 = $tmp2010;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2010));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2017));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2014));
                        $tmp1998 = 0;
                        goto $l1996;
                        $l2020:;
                        $tmp1605 = 9;
                        goto $l1603;
                        $l2021:;
                        $tmp1592 = 10;
                        goto $l1590;
                        $l2022:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp1998 = -1;
                goto $l1996;
                $l1996:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements1999));
                newStatements1999 = NULL;
                newTest2003 = NULL;
                switch ($tmp1998) {
                    case 0: goto $l2020;
                    case -1: goto $l2024;
                }
                $l2024:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2025, 16);
            panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2025);
            if ($tmp2026.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2028 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 0));
                m2027 = *$tmp2028;
                panda$collections$ImmutableArray** $tmp2030 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 8));
                args2029 = *$tmp2030;
                int $tmp2033;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2037 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(m2027, p_f);
                    $tmp2036 = $tmp2037;
                    $tmp2035 = $tmp2036;
                    newM2034 = $tmp2035;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2035));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2036));
                    panda$collections$ImmutableArray* $tmp2041 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(args2029, p_f);
                    $tmp2040 = $tmp2041;
                    $tmp2039 = $tmp2040;
                    newArgs2038 = $tmp2039;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2039));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2040));
                    bool $tmp2042 = ((panda$core$Bit) { newM2034 != NULL }).value;
                    if ($tmp2042) goto $l2043;
                    $tmp2042 = ((panda$core$Bit) { newArgs2038 != NULL }).value;
                    $l2043:;
                    panda$core$Bit $tmp2044 = { $tmp2042 };
                    if ($tmp2044.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2047 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2048, 16);
                        org$pandalanguage$pandac$IRNode* $tmp2051 = (($fn2050) self->$class->vtable[5])(self, newM2034, m2027);
                        $tmp2049 = $tmp2051;
                        panda$collections$ImmutableArray* $tmp2054 = (($fn2053) self->$class->vtable[6])(self, newArgs2038, args2029);
                        $tmp2052 = $tmp2054;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2047, $tmp2048, $tmp2049, $tmp2052);
                        $tmp2046 = $tmp2047;
                        $tmp2045 = $tmp2046;
                        $returnValue1599 = $tmp2045;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2045));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2046));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
                        $tmp2033 = 0;
                        goto $l2031;
                        $l2055:;
                        $tmp1605 = 10;
                        goto $l1603;
                        $l2056:;
                        $tmp1592 = 11;
                        goto $l1590;
                        $l2057:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2033 = -1;
                goto $l2031;
                $l2031:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newArgs2038));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newM2034));
                newM2034 = NULL;
                newArgs2038 = NULL;
                switch ($tmp2033) {
                    case -1: goto $l2059;
                    case 0: goto $l2055;
                }
                $l2059:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2060, 17);
            panda$core$Bit $tmp2061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2060);
            if ($tmp2061.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2063 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 0));
                expr2062 = *$tmp2063;
                org$pandalanguage$pandac$IRNode** $tmp2065 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 8));
                statements2064 = *$tmp2065;
                int $tmp2068;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2072 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(expr2062, p_f);
                    $tmp2071 = $tmp2072;
                    $tmp2070 = $tmp2071;
                    newExpr2069 = $tmp2070;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2070));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2071));
                    org$pandalanguage$pandac$IRNode* $tmp2076 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(statements2064, p_f);
                    $tmp2075 = $tmp2076;
                    $tmp2074 = $tmp2075;
                    newStatements2073 = $tmp2074;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2074));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
                    bool $tmp2077 = ((panda$core$Bit) { newExpr2069 != NULL }).value;
                    if ($tmp2077) goto $l2078;
                    $tmp2077 = ((panda$core$Bit) { newStatements2073 != NULL }).value;
                    $l2078:;
                    panda$core$Bit $tmp2079 = { $tmp2077 };
                    if ($tmp2079.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2082 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2083, 17);
                        org$pandalanguage$pandac$IRNode* $tmp2086 = (($fn2085) self->$class->vtable[5])(self, newExpr2069, expr2062);
                        $tmp2084 = $tmp2086;
                        org$pandalanguage$pandac$IRNode* $tmp2089 = (($fn2088) self->$class->vtable[5])(self, newStatements2073, statements2064);
                        $tmp2087 = $tmp2089;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode($tmp2082, $tmp2083, $tmp2084, $tmp2087);
                        $tmp2081 = $tmp2082;
                        $tmp2080 = $tmp2081;
                        $returnValue1599 = $tmp2080;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2080));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2081));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2087));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
                        $tmp2068 = 0;
                        goto $l2066;
                        $l2090:;
                        $tmp1605 = 11;
                        goto $l1603;
                        $l2091:;
                        $tmp1592 = 12;
                        goto $l1590;
                        $l2092:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2068 = -1;
                goto $l2066;
                $l2066:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2073));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newExpr2069));
                newExpr2069 = NULL;
                newStatements2073 = NULL;
                switch ($tmp2068) {
                    case -1: goto $l2094;
                    case 0: goto $l2090;
                }
                $l2094:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2095, 18);
            panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2095);
            if ($tmp2096.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2098 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2097 = *$tmp2098;
                org$pandalanguage$pandac$Type** $tmp2100 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91606->$data + 16));
                type2099 = *$tmp2100;
                org$pandalanguage$pandac$IRNode** $tmp2102 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 24));
                base2101 = *$tmp2102;
                org$pandalanguage$pandac$FieldDecl** $tmp2104 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$506_91606->$data + 32));
                field2103 = *$tmp2104;
                int $tmp2107;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2111 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2101, p_f);
                    $tmp2110 = $tmp2111;
                    $tmp2109 = $tmp2110;
                    newBase2108 = $tmp2109;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2109));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2110));
                    if (((panda$core$Bit) { newBase2108 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2114 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2115, 18);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$FieldDecl($tmp2114, $tmp2115, position2097, type2099, newBase2108, field2103);
                        $tmp2113 = $tmp2114;
                        $tmp2112 = $tmp2113;
                        $returnValue1599 = $tmp2112;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                        $tmp2107 = 0;
                        goto $l2105;
                        $l2116:;
                        $tmp1605 = 12;
                        goto $l1603;
                        $l2117:;
                        $tmp1592 = 13;
                        goto $l1590;
                        $l2118:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2107 = -1;
                goto $l2105;
                $l2105:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2108));
                newBase2108 = NULL;
                switch ($tmp2107) {
                    case -1: goto $l2120;
                    case 0: goto $l2116;
                }
                $l2120:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2121, 19);
            panda$core$Bit $tmp2122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2121);
            if ($tmp2122.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2124 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2123 = *$tmp2124;
                org$pandalanguage$pandac$IRNode** $tmp2126 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 16));
                test2125 = *$tmp2126;
                panda$collections$ImmutableArray** $tmp2128 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 24));
                ifTrue2127 = *$tmp2128;
                org$pandalanguage$pandac$IRNode** $tmp2130 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 32));
                ifFalse2129 = *$tmp2130;
                int $tmp2133;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2137 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2125, p_f);
                    $tmp2136 = $tmp2137;
                    $tmp2135 = $tmp2136;
                    newTest2134 = $tmp2135;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2135));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2136));
                    panda$collections$ImmutableArray* $tmp2141 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(ifTrue2127, p_f);
                    $tmp2140 = $tmp2141;
                    $tmp2139 = $tmp2140;
                    newIfTrue2138 = $tmp2139;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2139));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2140));
                    org$pandalanguage$pandac$IRNode* $tmp2145 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifFalse2129, p_f);
                    $tmp2144 = $tmp2145;
                    $tmp2143 = $tmp2144;
                    newIfFalse2142 = $tmp2143;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2143));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2144));
                    bool $tmp2147 = ((panda$core$Bit) { newTest2134 != NULL }).value;
                    if ($tmp2147) goto $l2148;
                    $tmp2147 = ((panda$core$Bit) { newIfTrue2138 != NULL }).value;
                    $l2148:;
                    panda$core$Bit $tmp2149 = { $tmp2147 };
                    bool $tmp2146 = $tmp2149.value;
                    if ($tmp2146) goto $l2150;
                    $tmp2146 = ((panda$core$Bit) { newIfFalse2142 != NULL }).value;
                    $l2150:;
                    panda$core$Bit $tmp2151 = { $tmp2146 };
                    if ($tmp2151.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2154 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2155, 19);
                        org$pandalanguage$pandac$IRNode* $tmp2158 = (($fn2157) self->$class->vtable[5])(self, newTest2134, test2125);
                        $tmp2156 = $tmp2158;
                        panda$collections$ImmutableArray* $tmp2161 = (($fn2160) self->$class->vtable[6])(self, newIfTrue2138, ifTrue2127);
                        $tmp2159 = $tmp2161;
                        org$pandalanguage$pandac$IRNode* $tmp2164 = (($fn2163) self->$class->vtable[5])(self, newIfFalse2142, ifFalse2129);
                        $tmp2162 = $tmp2164;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q($tmp2154, $tmp2155, position2123, $tmp2156, $tmp2159, $tmp2162);
                        $tmp2153 = $tmp2154;
                        $tmp2152 = $tmp2153;
                        $returnValue1599 = $tmp2152;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2152));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2162));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2159));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2156));
                        $tmp2133 = 0;
                        goto $l2131;
                        $l2165:;
                        $tmp1605 = 13;
                        goto $l1603;
                        $l2166:;
                        $tmp1592 = 14;
                        goto $l1590;
                        $l2167:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2133 = -1;
                goto $l2131;
                $l2131:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfFalse2142));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfTrue2138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2134));
                newTest2134 = NULL;
                newIfTrue2138 = NULL;
                newIfFalse2142 = NULL;
                switch ($tmp2133) {
                    case 0: goto $l2165;
                    case -1: goto $l2169;
                }
                $l2169:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2170, 21);
            panda$core$Bit $tmp2171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2170);
            if ($tmp2171.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2173 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2172 = *$tmp2173;
                org$pandalanguage$pandac$IRNode** $tmp2175 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 16));
                value2174 = *$tmp2175;
                int $tmp2178;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2182 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2174, p_f);
                    $tmp2181 = $tmp2182;
                    $tmp2180 = $tmp2181;
                    newValue2179 = $tmp2180;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2180));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
                    if (((panda$core$Bit) { newValue2179 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2185 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2186, 21);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp2185, $tmp2186, position2172, newValue2179);
                        $tmp2184 = $tmp2185;
                        $tmp2183 = $tmp2184;
                        $returnValue1599 = $tmp2183;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2183));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2184));
                        $tmp2178 = 0;
                        goto $l2176;
                        $l2187:;
                        $tmp1605 = 14;
                        goto $l1603;
                        $l2188:;
                        $tmp1592 = 15;
                        goto $l1590;
                        $l2189:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2178 = -1;
                goto $l2176;
                $l2176:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2179));
                newValue2179 = NULL;
                switch ($tmp2178) {
                    case 0: goto $l2187;
                    case -1: goto $l2191;
                }
                $l2191:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2192, 22);
            panda$core$Bit $tmp2193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2192);
            if ($tmp2193.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2195 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2194 = *$tmp2195;
                org$pandalanguage$pandac$IRNode** $tmp2197 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 16));
                value2196 = *$tmp2197;
                int $tmp2200;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2204 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2196, p_f);
                    $tmp2203 = $tmp2204;
                    $tmp2202 = $tmp2203;
                    newValue2201 = $tmp2202;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2202));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
                    if (((panda$core$Bit) { newValue2201 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2207 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2208, 22);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode($tmp2207, $tmp2208, position2194, newValue2201);
                        $tmp2206 = $tmp2207;
                        $tmp2205 = $tmp2206;
                        $returnValue1599 = $tmp2205;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2205));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2206));
                        $tmp2200 = 0;
                        goto $l2198;
                        $l2209:;
                        $tmp1605 = 15;
                        goto $l1603;
                        $l2210:;
                        $tmp1592 = 16;
                        goto $l1590;
                        $l2211:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2200 = -1;
                goto $l2198;
                $l2198:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2201));
                newValue2201 = NULL;
                switch ($tmp2200) {
                    case 0: goto $l2209;
                    case -1: goto $l2213;
                }
                $l2213:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2214, 23);
            panda$core$Bit $tmp2215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2214);
            if ($tmp2215.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2217 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2216 = *$tmp2217;
                panda$core$String** $tmp2219 = ((panda$core$String**) ((char*) $match$506_91606->$data + 16));
                label2218 = *$tmp2219;
                panda$collections$ImmutableArray** $tmp2221 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 24));
                statements2220 = *$tmp2221;
                int $tmp2224;
                {
                    panda$collections$ImmutableArray* $tmp2228 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2220, p_f);
                    $tmp2227 = $tmp2228;
                    $tmp2226 = $tmp2227;
                    newStatements2225 = $tmp2226;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2226));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
                    if (((panda$core$Bit) { newStatements2225 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2231 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2232, 23);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2231, $tmp2232, position2216, label2218, newStatements2225);
                        $tmp2230 = $tmp2231;
                        $tmp2229 = $tmp2230;
                        $returnValue1599 = $tmp2229;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2229));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2230));
                        $tmp2224 = 0;
                        goto $l2222;
                        $l2233:;
                        $tmp1605 = 16;
                        goto $l1603;
                        $l2234:;
                        $tmp1592 = 17;
                        goto $l1590;
                        $l2235:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2224 = -1;
                goto $l2222;
                $l2222:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2225));
                newStatements2225 = NULL;
                switch ($tmp2224) {
                    case 0: goto $l2233;
                    case -1: goto $l2237;
                }
                $l2237:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2238, 24);
            panda$core$Bit $tmp2239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2238);
            if ($tmp2239.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2241 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2240 = *$tmp2241;
                org$pandalanguage$pandac$IRNode** $tmp2243 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 16));
                value2242 = *$tmp2243;
                panda$collections$ImmutableArray** $tmp2245 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 24));
                whens2244 = *$tmp2245;
                panda$collections$ImmutableArray** $tmp2247 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 32));
                other2246 = *$tmp2247;
                int $tmp2250;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2254 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2242, p_f);
                    $tmp2253 = $tmp2254;
                    $tmp2252 = $tmp2253;
                    newValue2251 = $tmp2252;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2252));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
                    panda$collections$ImmutableArray* $tmp2258 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(whens2244, p_f);
                    $tmp2257 = $tmp2258;
                    $tmp2256 = $tmp2257;
                    newWhens2255 = $tmp2256;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2256));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
                    panda$collections$ImmutableArray* $tmp2262 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(other2246, p_f);
                    $tmp2261 = $tmp2262;
                    $tmp2260 = $tmp2261;
                    newOther2259 = $tmp2260;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
                    bool $tmp2264 = ((panda$core$Bit) { newValue2251 != NULL }).value;
                    if ($tmp2264) goto $l2265;
                    $tmp2264 = ((panda$core$Bit) { newWhens2255 != NULL }).value;
                    $l2265:;
                    panda$core$Bit $tmp2266 = { $tmp2264 };
                    bool $tmp2263 = $tmp2266.value;
                    if ($tmp2263) goto $l2267;
                    $tmp2263 = ((panda$core$Bit) { newOther2259 != NULL }).value;
                    $l2267:;
                    panda$core$Bit $tmp2268 = { $tmp2263 };
                    if ($tmp2268.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2271 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2272, 24);
                        org$pandalanguage$pandac$IRNode* $tmp2275 = (($fn2274) self->$class->vtable[5])(self, newValue2251, value2242);
                        $tmp2273 = $tmp2275;
                        panda$collections$ImmutableArray* $tmp2278 = (($fn2277) self->$class->vtable[6])(self, newWhens2255, whens2244);
                        $tmp2276 = $tmp2278;
                        panda$collections$ImmutableArray* $tmp2281 = (($fn2280) self->$class->vtable[6])(self, newOther2259, other2246);
                        $tmp2279 = $tmp2281;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q($tmp2271, $tmp2272, position2240, $tmp2273, $tmp2276, $tmp2279);
                        $tmp2270 = $tmp2271;
                        $tmp2269 = $tmp2270;
                        $returnValue1599 = $tmp2269;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2269));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2270));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2279));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2276));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
                        $tmp2250 = 0;
                        goto $l2248;
                        $l2282:;
                        $tmp1605 = 17;
                        goto $l1603;
                        $l2283:;
                        $tmp1592 = 18;
                        goto $l1590;
                        $l2284:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2250 = -1;
                goto $l2248;
                $l2248:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newOther2259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newWhens2255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2251));
                newValue2251 = NULL;
                newWhens2255 = NULL;
                newOther2259 = NULL;
                switch ($tmp2250) {
                    case -1: goto $l2286;
                    case 0: goto $l2282;
                }
                $l2286:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2287, 25);
            panda$core$Bit $tmp2288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2287);
            if ($tmp2288.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2290 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2289 = *$tmp2290;
                org$pandalanguage$pandac$Type** $tmp2292 = ((org$pandalanguage$pandac$Type**) ((char*) $match$506_91606->$data + 16));
                type2291 = *$tmp2292;
                org$pandalanguage$pandac$IRNode** $tmp2294 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 24));
                target2293 = *$tmp2294;
                org$pandalanguage$pandac$MethodRef** $tmp2296 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$506_91606->$data + 32));
                m2295 = *$tmp2296;
                int $tmp2299;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2303 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(target2293, p_f);
                    $tmp2302 = $tmp2303;
                    $tmp2301 = $tmp2302;
                    newTarget2300 = $tmp2301;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2301));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
                    if (((panda$core$Bit) { newTarget2300 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2306 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2307, 25);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef($tmp2306, $tmp2307, position2289, type2291, newTarget2300, m2295);
                        $tmp2305 = $tmp2306;
                        $tmp2304 = $tmp2305;
                        $returnValue1599 = $tmp2304;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2304));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
                        $tmp2299 = 0;
                        goto $l2297;
                        $l2308:;
                        $tmp1605 = 18;
                        goto $l1603;
                        $l2309:;
                        $tmp1592 = 19;
                        goto $l1590;
                        $l2310:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2299 = -1;
                goto $l2297;
                $l2297:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTarget2300));
                newTarget2300 = NULL;
                switch ($tmp2299) {
                    case -1: goto $l2312;
                    case 0: goto $l2308;
                }
                $l2312:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2313, 28);
            panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2313);
            if ($tmp2314.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2316 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2315 = *$tmp2316;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2318 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$506_91606->$data + 16));
                op2317 = *$tmp2318;
                org$pandalanguage$pandac$IRNode** $tmp2320 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 24));
                base2319 = *$tmp2320;
                int $tmp2323;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2327 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2319, p_f);
                    $tmp2326 = $tmp2327;
                    $tmp2325 = $tmp2326;
                    newBase2324 = $tmp2325;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2325));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2326));
                    if (((panda$core$Bit) { newBase2324 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2330 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2331, 28);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode($tmp2330, $tmp2331, position2315, op2317, newBase2324);
                        $tmp2329 = $tmp2330;
                        $tmp2328 = $tmp2329;
                        $returnValue1599 = $tmp2328;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2328));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2329));
                        $tmp2323 = 0;
                        goto $l2321;
                        $l2332:;
                        $tmp1605 = 19;
                        goto $l1603;
                        $l2333:;
                        $tmp1592 = 20;
                        goto $l1590;
                        $l2334:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2323 = -1;
                goto $l2321;
                $l2321:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2324));
                newBase2324 = NULL;
                switch ($tmp2323) {
                    case 0: goto $l2332;
                    case -1: goto $l2336;
                }
                $l2336:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2337, 29);
            panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2337);
            if ($tmp2338.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2340 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2339 = *$tmp2340;
                panda$core$String** $tmp2342 = ((panda$core$String**) ((char*) $match$506_91606->$data + 16));
                label2341 = *$tmp2342;
                org$pandalanguage$pandac$IRNode** $tmp2344 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 24));
                target2343 = *$tmp2344;
                org$pandalanguage$pandac$IRNode** $tmp2346 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 32));
                list2345 = *$tmp2346;
                panda$collections$ImmutableArray** $tmp2348 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 40));
                statements2347 = *$tmp2348;
                int $tmp2351;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2355 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(list2345, p_f);
                    $tmp2354 = $tmp2355;
                    $tmp2353 = $tmp2354;
                    newList2352 = $tmp2353;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2353));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2354));
                    panda$collections$ImmutableArray* $tmp2359 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2347, p_f);
                    $tmp2358 = $tmp2359;
                    $tmp2357 = $tmp2358;
                    newStatements2356 = $tmp2357;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2357));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2358));
                    bool $tmp2360 = ((panda$core$Bit) { newList2352 != NULL }).value;
                    if ($tmp2360) goto $l2361;
                    $tmp2360 = ((panda$core$Bit) { newStatements2356 != NULL }).value;
                    $l2361:;
                    panda$core$Bit $tmp2362 = { $tmp2360 };
                    if ($tmp2362.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2365 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2366, 29);
                        org$pandalanguage$pandac$IRNode* $tmp2369 = (($fn2368) self->$class->vtable[5])(self, newList2352, list2345);
                        $tmp2367 = $tmp2369;
                        panda$collections$ImmutableArray* $tmp2372 = (($fn2371) self->$class->vtable[6])(self, newStatements2356, statements2347);
                        $tmp2370 = $tmp2372;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2365, $tmp2366, position2339, label2341, target2343, $tmp2367, $tmp2370);
                        $tmp2364 = $tmp2365;
                        $tmp2363 = $tmp2364;
                        $returnValue1599 = $tmp2363;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2364));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2370));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
                        $tmp2351 = 0;
                        goto $l2349;
                        $l2373:;
                        $tmp1605 = 20;
                        goto $l1603;
                        $l2374:;
                        $tmp1592 = 21;
                        goto $l1590;
                        $l2375:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2351 = -1;
                goto $l2349;
                $l2349:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2356));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newList2352));
                newList2352 = NULL;
                newStatements2356 = NULL;
                switch ($tmp2351) {
                    case 0: goto $l2373;
                    case -1: goto $l2377;
                }
                $l2377:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2378, 31);
            panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2378);
            if ($tmp2379.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2381 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2380 = *$tmp2381;
                org$pandalanguage$pandac$IRNode** $tmp2383 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 16));
                value2382 = *$tmp2383;
                int $tmp2386;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2390 = org$pandalanguage$pandac$IRNode$transform$org$pandalanguage$pandac$IRNode$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(value2382, p_f);
                    $tmp2389 = $tmp2390;
                    $tmp2388 = $tmp2389;
                    newValue2387 = $tmp2388;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2388));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2389));
                    if (((panda$core$Bit) { newValue2387 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2393 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2394, 31);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q($tmp2393, $tmp2394, position2380, newValue2387);
                        $tmp2392 = $tmp2393;
                        $tmp2391 = $tmp2392;
                        $returnValue1599 = $tmp2391;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2391));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2392));
                        $tmp2386 = 0;
                        goto $l2384;
                        $l2395:;
                        $tmp1605 = 21;
                        goto $l1603;
                        $l2396:;
                        $tmp1592 = 22;
                        goto $l1590;
                        $l2397:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2386 = -1;
                goto $l2384;
                $l2384:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newValue2387));
                newValue2387 = NULL;
                switch ($tmp2386) {
                    case -1: goto $l2399;
                    case 0: goto $l2395;
                }
                $l2399:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2400, 33);
            panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2400);
            if ($tmp2401.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2403 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 0));
                base2402 = *$tmp2403;
                panda$core$Int64* $tmp2405 = ((panda$core$Int64*) ((char*) $match$506_91606->$data + 8));
                id2404 = *$tmp2405;
                int $tmp2408;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2412 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(base2402, p_f);
                    $tmp2411 = $tmp2412;
                    $tmp2410 = $tmp2411;
                    newBase2409 = $tmp2410;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2410));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2411));
                    if (((panda$core$Bit) { newBase2409 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2415 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2416, 33);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64($tmp2415, $tmp2416, newBase2409, id2404);
                        $tmp2414 = $tmp2415;
                        $tmp2413 = $tmp2414;
                        $returnValue1599 = $tmp2413;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2413));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
                        $tmp2408 = 0;
                        goto $l2406;
                        $l2417:;
                        $tmp1605 = 22;
                        goto $l1603;
                        $l2418:;
                        $tmp1592 = 23;
                        goto $l1590;
                        $l2419:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2408 = -1;
                goto $l2406;
                $l2406:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newBase2409));
                newBase2409 = NULL;
                switch ($tmp2408) {
                    case -1: goto $l2421;
                    case 0: goto $l2417;
                }
                $l2421:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2422, 38);
            panda$core$Bit $tmp2423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2422);
            if ($tmp2423.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2425 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2424 = *$tmp2425;
                org$pandalanguage$pandac$IRNode** $tmp2427 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 16));
                test2426 = *$tmp2427;
                org$pandalanguage$pandac$IRNode** $tmp2429 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 24));
                ifTrue2428 = *$tmp2429;
                org$pandalanguage$pandac$IRNode** $tmp2431 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 32));
                ifFalse2430 = *$tmp2431;
                int $tmp2434;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2438 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2426, p_f);
                    $tmp2437 = $tmp2438;
                    $tmp2436 = $tmp2437;
                    newTest2435 = $tmp2436;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2436));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2437));
                    org$pandalanguage$pandac$IRNode* $tmp2442 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifTrue2428, p_f);
                    $tmp2441 = $tmp2442;
                    $tmp2440 = $tmp2441;
                    newIfTrue2439 = $tmp2440;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2440));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2441));
                    org$pandalanguage$pandac$IRNode* $tmp2446 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(ifFalse2430, p_f);
                    $tmp2445 = $tmp2446;
                    $tmp2444 = $tmp2445;
                    newIfFalse2443 = $tmp2444;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2444));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2445));
                    bool $tmp2448 = ((panda$core$Bit) { newTest2435 != NULL }).value;
                    if ($tmp2448) goto $l2449;
                    $tmp2448 = ((panda$core$Bit) { newIfTrue2439 != NULL }).value;
                    $l2449:;
                    panda$core$Bit $tmp2450 = { $tmp2448 };
                    bool $tmp2447 = $tmp2450.value;
                    if ($tmp2447) goto $l2451;
                    $tmp2447 = ((panda$core$Bit) { newIfFalse2443 != NULL }).value;
                    $l2451:;
                    panda$core$Bit $tmp2452 = { $tmp2447 };
                    if ($tmp2452.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2455 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2456, 38);
                        org$pandalanguage$pandac$IRNode* $tmp2459 = (($fn2458) self->$class->vtable[5])(self, newTest2435, test2426);
                        $tmp2457 = $tmp2459;
                        org$pandalanguage$pandac$IRNode* $tmp2462 = (($fn2461) self->$class->vtable[5])(self, newIfTrue2439, ifTrue2428);
                        $tmp2460 = $tmp2462;
                        org$pandalanguage$pandac$IRNode* $tmp2465 = (($fn2464) self->$class->vtable[5])(self, newIfFalse2443, ifFalse2430);
                        $tmp2463 = $tmp2465;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode($tmp2455, $tmp2456, position2424, $tmp2457, $tmp2460, $tmp2463);
                        $tmp2454 = $tmp2455;
                        $tmp2453 = $tmp2454;
                        $returnValue1599 = $tmp2453;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2453));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2454));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2463));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2460));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2457));
                        $tmp2434 = 0;
                        goto $l2432;
                        $l2466:;
                        $tmp1605 = 23;
                        goto $l1603;
                        $l2467:;
                        $tmp1592 = 24;
                        goto $l1590;
                        $l2468:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2434 = -1;
                goto $l2432;
                $l2432:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfFalse2443));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newIfTrue2439));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2435));
                newTest2435 = NULL;
                newIfTrue2439 = NULL;
                newIfFalse2443 = NULL;
                switch ($tmp2434) {
                    case 0: goto $l2466;
                    case -1: goto $l2470;
                }
                $l2470:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2471, 46);
            panda$core$Bit $tmp2472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2471);
            if ($tmp2472.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2474 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2473 = *$tmp2474;
                org$pandalanguage$pandac$Variable$Kind* $tmp2476 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$506_91606->$data + 16));
                kind2475 = *$tmp2476;
                panda$collections$ImmutableArray** $tmp2478 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 24));
                decls2477 = *$tmp2478;
                int $tmp2481;
                {
                    panda$collections$ImmutableArray* $tmp2485 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(decls2477, p_f);
                    $tmp2484 = $tmp2485;
                    $tmp2483 = $tmp2484;
                    newDecls2482 = $tmp2483;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2483));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2484));
                    if (((panda$core$Bit) { newDecls2482 != NULL }).value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2488 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2489, 46);
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2488, $tmp2489, position2473, kind2475, newDecls2482);
                        $tmp2487 = $tmp2488;
                        $tmp2486 = $tmp2487;
                        $returnValue1599 = $tmp2486;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2486));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2487));
                        $tmp2481 = 0;
                        goto $l2479;
                        $l2490:;
                        $tmp1605 = 24;
                        goto $l1603;
                        $l2491:;
                        $tmp1592 = 25;
                        goto $l1590;
                        $l2492:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2481 = -1;
                goto $l2479;
                $l2479:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newDecls2482));
                newDecls2482 = NULL;
                switch ($tmp2481) {
                    case 0: goto $l2490;
                    case -1: goto $l2494;
                }
                $l2494:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2495, 49);
            panda$core$Bit $tmp2496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2495);
            if ($tmp2496.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2498 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2497 = *$tmp2498;
                panda$collections$ImmutableArray** $tmp2500 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 16));
                tests2499 = *$tmp2500;
                panda$collections$ImmutableArray** $tmp2502 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 24));
                statements2501 = *$tmp2502;
                int $tmp2505;
                {
                    panda$collections$ImmutableArray* $tmp2509 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(tests2499, p_f);
                    $tmp2508 = $tmp2509;
                    $tmp2507 = $tmp2508;
                    newTests2506 = $tmp2507;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2507));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2508));
                    panda$collections$ImmutableArray* $tmp2513 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2501, p_f);
                    $tmp2512 = $tmp2513;
                    $tmp2511 = $tmp2512;
                    newStatements2510 = $tmp2511;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2511));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2512));
                    bool $tmp2514 = ((panda$core$Bit) { newTests2506 != NULL }).value;
                    if ($tmp2514) goto $l2515;
                    $tmp2514 = ((panda$core$Bit) { newStatements2510 != NULL }).value;
                    $l2515:;
                    panda$core$Bit $tmp2516 = { $tmp2514 };
                    if ($tmp2516.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2519 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2520, 49);
                        panda$collections$ImmutableArray* $tmp2523 = (($fn2522) self->$class->vtable[6])(self, newTests2506, tests2499);
                        $tmp2521 = $tmp2523;
                        panda$collections$ImmutableArray* $tmp2526 = (($fn2525) self->$class->vtable[6])(self, newStatements2510, statements2501);
                        $tmp2524 = $tmp2526;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2519, $tmp2520, position2497, $tmp2521, $tmp2524);
                        $tmp2518 = $tmp2519;
                        $tmp2517 = $tmp2518;
                        $returnValue1599 = $tmp2517;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2517));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2518));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2521));
                        $tmp2505 = 0;
                        goto $l2503;
                        $l2527:;
                        $tmp1605 = 25;
                        goto $l1603;
                        $l2528:;
                        $tmp1592 = 26;
                        goto $l1590;
                        $l2529:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2505 = -1;
                goto $l2503;
                $l2503:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2510));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTests2506));
                newTests2506 = NULL;
                newStatements2510 = NULL;
                switch ($tmp2505) {
                    case -1: goto $l2531;
                    case 0: goto $l2527;
                }
                $l2531:;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2532, 50);
            panda$core$Bit $tmp2533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$506_91606->$rawValue, $tmp2532);
            if ($tmp2533.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2535 = ((org$pandalanguage$pandac$Position*) ((char*) $match$506_91606->$data + 0));
                position2534 = *$tmp2535;
                panda$core$String** $tmp2537 = ((panda$core$String**) ((char*) $match$506_91606->$data + 16));
                label2536 = *$tmp2537;
                org$pandalanguage$pandac$IRNode** $tmp2539 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$506_91606->$data + 24));
                test2538 = *$tmp2539;
                panda$collections$ImmutableArray** $tmp2541 = ((panda$collections$ImmutableArray**) ((char*) $match$506_91606->$data + 32));
                statements2540 = *$tmp2541;
                int $tmp2544;
                {
                    org$pandalanguage$pandac$IRNode* $tmp2548 = org$pandalanguage$pandac$IRNode$doTransform$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$org$pandalanguage$pandac$IRNode$Q(test2538, p_f);
                    $tmp2547 = $tmp2548;
                    $tmp2546 = $tmp2547;
                    newTest2545 = $tmp2546;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2546));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2547));
                    panda$collections$ImmutableArray* $tmp2552 = org$pandalanguage$pandac$IRNode$transform$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q$$LPorg$pandalanguage$pandac$IRNode$RP$EQ$AM$GT$LPorg$pandalanguage$pandac$IRNode$Q$RP$R$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(statements2540, p_f);
                    $tmp2551 = $tmp2552;
                    $tmp2550 = $tmp2551;
                    newStatements2549 = $tmp2550;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2550));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
                    bool $tmp2553 = ((panda$core$Bit) { newTest2545 != NULL }).value;
                    if ($tmp2553) goto $l2554;
                    $tmp2553 = ((panda$core$Bit) { newStatements2549 != NULL }).value;
                    $l2554:;
                    panda$core$Bit $tmp2555 = { $tmp2553 };
                    if ($tmp2555.value) {
                    {
                        org$pandalanguage$pandac$IRNode* $tmp2558 = (org$pandalanguage$pandac$IRNode*) pandaObjectAlloc(72, (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class);
                        panda$core$Int64$init$builtin_int64(&$tmp2559, 50);
                        org$pandalanguage$pandac$IRNode* $tmp2562 = (($fn2561) self->$class->vtable[5])(self, newTest2545, test2538);
                        $tmp2560 = $tmp2562;
                        panda$collections$ImmutableArray* $tmp2565 = (($fn2564) self->$class->vtable[6])(self, newStatements2549, statements2540);
                        $tmp2563 = $tmp2565;
                        org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT($tmp2558, $tmp2559, position2534, label2536, $tmp2560, $tmp2563);
                        $tmp2557 = $tmp2558;
                        $tmp2556 = $tmp2557;
                        $returnValue1599 = $tmp2556;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2556));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2557));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2563));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2560));
                        $tmp2544 = 0;
                        goto $l2542;
                        $l2566:;
                        $tmp1605 = 26;
                        goto $l1603;
                        $l2567:;
                        $tmp1592 = 27;
                        goto $l1590;
                        $l2568:;
                        return $returnValue1599;
                    }
                    }
                }
                $tmp2544 = -1;
                goto $l2542;
                $l2542:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newStatements2549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) newTest2545));
                newTest2545 = NULL;
                newStatements2549 = NULL;
                switch ($tmp2544) {
                    case -1: goto $l2570;
                    case 0: goto $l2566;
                }
                $l2570:;
            }
            }
            else {
            {
                panda$core$Bit$init$builtin_bit(&$tmp2571, false);
                if ($tmp2571.value) goto $l2572; else goto $l2573;
                $l2573:;
                panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2574, (panda$core$Int64) { 675 });
                abort();
                $l2572:;
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1605 = -1;
        goto $l1603;
        $l1603:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1607));
        switch ($tmp1605) {
            case 6: goto $l1936;
            case 21: goto $l2396;
            case 20: goto $l2374;
            case 4: goto $l1884;
            case 1: goto $l1799;
            case 12: goto $l2117;
            case 5: goto $l1910;
            case 13: goto $l2166;
            case 25: goto $l2528;
            case 8: goto $l1982;
            case 3: goto $l1855;
            case 26: goto $l2567;
            case 11: goto $l2091;
            case 14: goto $l2188;
            case 2: goto $l1821;
            case 23: goto $l2467;
            case 0: goto $l1758;
            case 16: goto $l2234;
            case 22: goto $l2418;
            case 7: goto $l1960;
            case 24: goto $l2491;
            case 9: goto $l2021;
            case 18: goto $l2309;
            case 19: goto $l2333;
            case 10: goto $l2056;
            case 15: goto $l2210;
            case 17: goto $l2283;
            case -1: goto $l2575;
        }
        $l2575:;
        $tmp2576 = NULL;
        $returnValue1599 = $tmp2576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2576));
        $tmp1592 = 28;
        goto $l1590;
        $l2577:;
        return $returnValue1599;
    }
    $l1590:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) transformed1593));
    transformed1593 = NULL;
    switch ($tmp1592) {
        case 7: goto $l1937;
        case 18: goto $l2284;
        case 21: goto $l2375;
        case 22: goto $l2397;
        case 2: goto $l1800;
        case 20: goto $l2334;
        case 5: goto $l1885;
        case 8: goto $l1961;
        case 4: goto $l1856;
        case 26: goto $l2529;
        case 16: goto $l2211;
        case 9: goto $l1983;
        case 27: goto $l2568;
        case 12: goto $l2092;
        case 3: goto $l1822;
        case 0: goto $l1601;
        case 13: goto $l2118;
        case 15: goto $l2189;
        case 23: goto $l2419;
        case 6: goto $l1911;
        case 24: goto $l2468;
        case 1: goto $l1759;
        case 14: goto $l2167;
        case 17: goto $l2235;
        case 25: goto $l2492;
        case 10: goto $l2022;
        case 19: goto $l2310;
        case 28: goto $l2577;
        case 11: goto $l2057;
    }
    $l2579:;
    if (false) goto $l2580; else goto $l2581;
    $l2581:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2582, (panda$core$Int64) { 501 }, &$s2583);
    abort();
    $l2580:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$682_92587 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2588;
    panda$core$Int64 $tmp2589;
    org$pandalanguage$pandac$IRNode* test2591 = NULL;
    org$pandalanguage$pandac$IRNode* msg2593 = NULL;
    panda$core$String* $returnValue2595;
    panda$core$String* $tmp2596;
    panda$core$String* $tmp2597;
    panda$core$String* $tmp2598;
    panda$core$String* $tmp2599;
    panda$core$String* $tmp2600;
    panda$core$String* $tmp2610;
    panda$core$String* $tmp2611;
    panda$core$String* $tmp2612;
    panda$core$Int64 $tmp2619;
    panda$core$String* $tmp2621;
    panda$core$Int64 $tmp2625;
    org$pandalanguage$pandac$IRNode* left2627 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op2629;
    org$pandalanguage$pandac$IRNode* right2631 = NULL;
    panda$core$String* $tmp2633;
    panda$core$String* $tmp2634;
    panda$core$String* $tmp2635;
    panda$core$String* $tmp2636;
    panda$core$String* $tmp2637;
    panda$core$String* $tmp2638;
    panda$core$String* $tmp2639;
    panda$core$Object* $tmp2644;
    panda$core$Int64 $tmp2654;
    panda$core$Bit bit2656;
    panda$core$String* $tmp2658;
    panda$core$String* $tmp2659;
    panda$core$Int64 $tmp2663;
    panda$collections$ImmutableArray* statements2665 = NULL;
    panda$core$MutableString* result2670 = NULL;
    panda$core$MutableString* $tmp2671;
    panda$core$MutableString* $tmp2672;
    panda$collections$Iterator* Iter$696$172678 = NULL;
    panda$collections$Iterator* $tmp2679;
    panda$collections$Iterator* $tmp2680;
    org$pandalanguage$pandac$IRNode* s2696 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2697;
    panda$core$Object* $tmp2698;
    panda$core$String* $tmp2703;
    panda$core$Char8 $tmp2708;
    panda$core$UInt8 $tmp2709;
    panda$core$String* $tmp2710;
    panda$core$String* $tmp2711;
    panda$core$Int64 $tmp2717;
    panda$collections$ImmutableArray* statements2719 = NULL;
    panda$collections$ImmutableArray* finally2721 = NULL;
    panda$core$MutableString* result2726 = NULL;
    panda$core$MutableString* $tmp2727;
    panda$core$MutableString* $tmp2728;
    panda$collections$Iterator* Iter$703$172734 = NULL;
    panda$collections$Iterator* $tmp2735;
    panda$collections$Iterator* $tmp2736;
    org$pandalanguage$pandac$IRNode* s2752 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2753;
    panda$core$Object* $tmp2754;
    panda$core$String* $tmp2759;
    panda$collections$Iterator* Iter$707$172768 = NULL;
    panda$collections$Iterator* $tmp2769;
    panda$collections$Iterator* $tmp2770;
    org$pandalanguage$pandac$IRNode* s2786 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2787;
    panda$core$Object* $tmp2788;
    panda$core$String* $tmp2793;
    panda$core$Char8 $tmp2798;
    panda$core$UInt8 $tmp2799;
    panda$core$String* $tmp2800;
    panda$core$String* $tmp2801;
    panda$core$Int64 $tmp2807;
    panda$core$String* label2809 = NULL;
    panda$core$String* $tmp2811;
    panda$core$String* $tmp2812;
    panda$core$String* $tmp2813;
    panda$core$String* $tmp2820;
    panda$core$Int64 $tmp2824;
    org$pandalanguage$pandac$MethodRef* m2826 = NULL;
    panda$collections$ImmutableArray* args2828 = NULL;
    panda$core$String* $tmp2830;
    panda$core$String* $tmp2831;
    panda$core$String* $tmp2832;
    panda$core$String* $tmp2833;
    panda$core$String* $tmp2834;
    panda$core$String* $tmp2838;
    panda$core$Int64 $tmp2848;
    org$pandalanguage$pandac$IRNode* value2850 = NULL;
    org$pandalanguage$pandac$Type* type2852 = NULL;
    panda$core$String* $tmp2854;
    panda$core$String* $tmp2855;
    panda$core$String* $tmp2856;
    panda$core$String* $tmp2857;
    panda$core$String* $tmp2858;
    panda$core$Int64 $tmp2868;
    org$pandalanguage$pandac$ChoiceCase* ce2870 = NULL;
    panda$core$String* $tmp2872;
    panda$core$String* $tmp2873;
    panda$core$Int64 $tmp2877;
    org$pandalanguage$pandac$IRNode* base2879 = NULL;
    org$pandalanguage$pandac$ChoiceCase* ce2881 = NULL;
    panda$core$Int64 field2883;
    panda$core$String* $tmp2885;
    panda$core$String* $tmp2886;
    panda$core$String* $tmp2887;
    panda$core$String* $tmp2888;
    panda$core$String* $tmp2889;
    panda$core$String* $tmp2890;
    panda$core$String* $tmp2891;
    panda$core$Object* $tmp2899;
    panda$core$Int64 $tmp2906;
    org$pandalanguage$pandac$Type* type2908 = NULL;
    org$pandalanguage$pandac$IRNode* call2910 = NULL;
    org$pandalanguage$pandac$IRNode* $match$726_172915 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2916;
    panda$core$Int64 $tmp2917;
    panda$collections$ImmutableArray* args2919 = NULL;
    panda$core$String* $tmp2921;
    panda$core$String* $tmp2922;
    panda$core$String* $tmp2923;
    panda$core$String* $tmp2924;
    panda$core$String* $tmp2925;
    panda$core$String* $tmp2929;
    panda$core$Bit $tmp2940;
    panda$core$Int64 $tmp2945;
    org$pandalanguage$pandac$Type* Type2947 = NULL;
    panda$core$String* $tmp2949;
    panda$core$Int64 $tmp2953;
    panda$core$String* label2955 = NULL;
    panda$core$String* $tmp2957;
    panda$core$String* $tmp2958;
    panda$core$String* $tmp2959;
    panda$core$String* $tmp2966;
    panda$core$Int64 $tmp2970;
    org$pandalanguage$pandac$IRNode* target2972 = NULL;
    org$pandalanguage$pandac$IRNode* value2974 = NULL;
    panda$core$String* $tmp2976;
    panda$core$String* $tmp2977;
    panda$core$String* $tmp2978;
    panda$core$String* $tmp2979;
    panda$core$String* $tmp2980;
    panda$core$String* $tmp2981;
    panda$core$String* $tmp2982;
    org$pandalanguage$pandac$Type* $tmp2987;
    panda$core$String* $tmp2998;
    panda$core$String* $tmp2999;
    panda$core$String* $tmp3000;
    panda$core$String* $tmp3001;
    panda$core$String* $tmp3002;
    org$pandalanguage$pandac$Type* $tmp3007;
    panda$core$Int64 $tmp3015;
    panda$core$String* label3017 = NULL;
    panda$collections$ImmutableArray* statements3019 = NULL;
    org$pandalanguage$pandac$IRNode* test3021 = NULL;
    panda$core$MutableString* result3026 = NULL;
    panda$core$MutableString* $tmp3027;
    panda$core$MutableString* $tmp3028;
    panda$core$String* $tmp3030;
    panda$core$String* $tmp3031;
    panda$collections$Iterator* Iter$750$173039 = NULL;
    panda$collections$Iterator* $tmp3040;
    panda$collections$Iterator* $tmp3041;
    org$pandalanguage$pandac$IRNode* s3057 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3058;
    panda$core$Object* $tmp3059;
    panda$core$String* $tmp3064;
    panda$core$String* $tmp3069;
    panda$core$String* $tmp3070;
    panda$core$String* $tmp3075;
    panda$core$String* $tmp3076;
    panda$core$Int64 $tmp3082;
    org$pandalanguage$pandac$IRNode* m3084 = NULL;
    panda$collections$ImmutableArray* args3086 = NULL;
    panda$core$String* $tmp3088;
    panda$core$String* $tmp3089;
    panda$core$String* $tmp3090;
    panda$core$String* $tmp3091;
    panda$core$String* $tmp3092;
    panda$core$String* $tmp3097;
    panda$core$Int64 $tmp3108;
    org$pandalanguage$pandac$IRNode* expr3110 = NULL;
    org$pandalanguage$pandac$IRNode* stmt3112 = NULL;
    panda$core$String* $tmp3114;
    panda$core$String* $tmp3115;
    panda$core$String* $tmp3116;
    panda$core$String* $tmp3117;
    panda$core$String* $tmp3118;
    panda$core$Int64 $tmp3128;
    org$pandalanguage$pandac$IRNode* base3130 = NULL;
    org$pandalanguage$pandac$FieldDecl* field3132 = NULL;
    panda$core$String* $tmp3134;
    panda$core$String* $tmp3135;
    panda$core$String* $tmp3136;
    panda$core$String* $tmp3137;
    panda$core$String* $tmp3138;
    panda$core$String* $tmp3148;
    panda$core$Int64 $tmp3151;
    org$pandalanguage$pandac$IRNode* test3153 = NULL;
    panda$collections$ImmutableArray* ifTrue3155 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse3157 = NULL;
    panda$core$MutableString* result3162 = NULL;
    panda$core$MutableString* $tmp3163;
    panda$core$MutableString* $tmp3164;
    panda$core$String* $tmp3166;
    panda$core$String* $tmp3167;
    panda$collections$Iterator* Iter$766$173175 = NULL;
    panda$collections$Iterator* $tmp3176;
    panda$collections$Iterator* $tmp3177;
    org$pandalanguage$pandac$IRNode* s3193 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3194;
    panda$core$Object* $tmp3195;
    panda$core$String* $tmp3200;
    panda$core$Char8 $tmp3205;
    panda$core$UInt8 $tmp3206;
    panda$core$String* $tmp3207;
    panda$core$String* $tmp3208;
    panda$core$String* $tmp3213;
    panda$core$String* $tmp3214;
    panda$core$Int64 $tmp3220;
    panda$core$UInt64 value3222;
    panda$core$String* $tmp3224;
    panda$core$String* $tmp3225;
    panda$core$Int64 $tmp3229;
    org$pandalanguage$pandac$IRNode* value3231 = NULL;
    panda$core$String* $tmp3233;
    panda$core$String* $tmp3234;
    panda$core$String* $tmp3235;
    panda$core$Int64 $tmp3242;
    org$pandalanguage$pandac$IRNode* value3244 = NULL;
    panda$core$String* $tmp3246;
    panda$core$String* $tmp3247;
    panda$core$String* $tmp3248;
    panda$core$Int64 $tmp3255;
    panda$core$String* label3257 = NULL;
    panda$collections$ImmutableArray* statements3259 = NULL;
    panda$core$MutableString* result3264 = NULL;
    panda$core$MutableString* $tmp3265;
    panda$core$MutableString* $tmp3266;
    panda$core$String* $tmp3268;
    panda$core$String* $tmp3269;
    panda$collections$Iterator* Iter$786$173277 = NULL;
    panda$collections$Iterator* $tmp3278;
    panda$collections$Iterator* $tmp3279;
    org$pandalanguage$pandac$IRNode* s3295 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3296;
    panda$core$Object* $tmp3297;
    panda$core$String* $tmp3302;
    panda$core$Char8 $tmp3307;
    panda$core$UInt8 $tmp3308;
    panda$core$String* $tmp3309;
    panda$core$String* $tmp3310;
    panda$core$Int64 $tmp3316;
    org$pandalanguage$pandac$IRNode* value3318 = NULL;
    panda$collections$ImmutableArray* whens3320 = NULL;
    panda$collections$ImmutableArray* other3322 = NULL;
    panda$core$MutableString* result3327 = NULL;
    panda$core$MutableString* $tmp3328;
    panda$core$MutableString* $tmp3329;
    panda$core$String* $tmp3331;
    panda$core$String* $tmp3332;
    panda$collections$Iterator* Iter$793$173340 = NULL;
    panda$collections$Iterator* $tmp3341;
    panda$collections$Iterator* $tmp3342;
    org$pandalanguage$pandac$IRNode* w3358 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3359;
    panda$core$Object* $tmp3360;
    panda$core$String* $tmp3365;
    panda$collections$Iterator* Iter$798$213374 = NULL;
    panda$collections$Iterator* $tmp3375;
    panda$collections$Iterator* $tmp3376;
    org$pandalanguage$pandac$IRNode* s3392 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3393;
    panda$core$Object* $tmp3394;
    panda$core$String* $tmp3399;
    panda$core$Char8 $tmp3404;
    panda$core$UInt8 $tmp3405;
    panda$core$String* $tmp3406;
    panda$core$String* $tmp3407;
    panda$core$Int64 $tmp3413;
    org$pandalanguage$pandac$IRNode* target3415 = NULL;
    org$pandalanguage$pandac$MethodRef* m3417 = NULL;
    panda$core$String* $tmp3419;
    panda$core$String* $tmp3420;
    panda$core$String* $tmp3421;
    panda$core$String* $tmp3422;
    panda$core$String* $tmp3423;
    panda$core$String* $tmp3433;
    panda$core$Int64 $tmp3436;
    panda$core$UInt64 value3438;
    panda$core$String* $tmp3440;
    panda$core$String* $tmp3441;
    panda$core$Object* $tmp3443;
    panda$core$Int64 $tmp3448;
    panda$core$String* $tmp3450;
    panda$core$Int64 $tmp3454;
    org$pandalanguage$pandac$parser$Token$Kind op3456;
    org$pandalanguage$pandac$IRNode* base3458 = NULL;
    panda$core$String* $tmp3460;
    panda$core$String* $tmp3461;
    panda$core$String* $tmp3462;
    panda$core$String* $tmp3463;
    panda$core$String* $tmp3464;
    panda$core$Int64 $tmp3473;
    panda$core$String* label3475 = NULL;
    org$pandalanguage$pandac$IRNode* target3477 = NULL;
    org$pandalanguage$pandac$IRNode* list3479 = NULL;
    panda$collections$ImmutableArray* statements3481 = NULL;
    panda$core$MutableString* result3486 = NULL;
    panda$core$MutableString* $tmp3487;
    panda$core$MutableString* $tmp3488;
    panda$core$String* $tmp3490;
    panda$core$String* $tmp3491;
    panda$core$String* $tmp3495;
    panda$core$String* $tmp3496;
    panda$core$String* $tmp3497;
    panda$core$String* $tmp3498;
    panda$collections$Iterator* Iter$821$173509 = NULL;
    panda$collections$Iterator* $tmp3510;
    panda$collections$Iterator* $tmp3511;
    org$pandalanguage$pandac$IRNode* s3527 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3528;
    panda$core$Object* $tmp3529;
    panda$core$String* $tmp3534;
    panda$core$Char8 $tmp3539;
    panda$core$UInt8 $tmp3540;
    panda$core$String* $tmp3541;
    panda$core$String* $tmp3542;
    panda$core$Int64 $tmp3548;
    panda$core$Real64 value3550;
    panda$core$String* $tmp3552;
    panda$core$String* $tmp3553;
    panda$core$Int64 $tmp3557;
    org$pandalanguage$pandac$IRNode* value3559 = NULL;
    panda$core$String* $tmp3561;
    panda$core$String* $tmp3562;
    panda$core$String* $tmp3563;
    panda$core$String* $tmp3570;
    panda$core$Int64 $tmp3574;
    org$pandalanguage$pandac$Type* type3576 = NULL;
    panda$core$Int64 id3578;
    panda$core$String* $tmp3580;
    panda$core$String* $tmp3581;
    panda$core$String* $tmp3582;
    panda$core$Object* $tmp3584;
    panda$core$Int64 $tmp3591;
    org$pandalanguage$pandac$IRNode* base3593 = NULL;
    panda$core$Int64 id3595;
    panda$core$String* $tmp3597;
    panda$core$String* $tmp3598;
    panda$core$String* $tmp3599;
    panda$core$String* $tmp3600;
    panda$core$String* $tmp3601;
    panda$core$Object* $tmp3603;
    panda$core$Int64 $tmp3613;
    panda$core$String* $tmp3615;
    panda$core$Int64 $tmp3619;
    panda$core$String* $tmp3621;
    panda$core$Int64 $tmp3625;
    panda$core$String* str3627 = NULL;
    panda$core$String* $tmp3629;
    panda$core$String* $tmp3630;
    panda$core$Int64 $tmp3635;
    panda$core$String* $tmp3637;
    panda$core$Int64 $tmp3641;
    org$pandalanguage$pandac$IRNode* test3643 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue3645 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse3647 = NULL;
    panda$core$String* $tmp3649;
    panda$core$String* $tmp3650;
    panda$core$String* $tmp3651;
    panda$core$String* $tmp3652;
    panda$core$String* $tmp3653;
    panda$core$String* $tmp3654;
    panda$core$String* $tmp3655;
    panda$core$Int64 $tmp3668;
    org$pandalanguage$pandac$Type* type3670 = NULL;
    panda$core$String* $tmp3672;
    panda$core$String* $tmp3673;
    panda$core$Int64 $tmp3677;
    panda$core$String* name3679 = NULL;
    panda$core$String* $tmp3681;
    panda$core$Int64 $tmp3684;
    org$pandalanguage$pandac$IRNode* base3686 = NULL;
    panda$collections$ImmutableArray* args3688 = NULL;
    panda$core$String* $tmp3690;
    panda$core$String* $tmp3691;
    panda$core$String* $tmp3692;
    panda$core$String* $tmp3693;
    panda$core$String* $tmp3694;
    panda$core$String* $tmp3699;
    panda$core$Int64 $tmp3709;
    panda$collections$ImmutableArray* params3711 = NULL;
    org$pandalanguage$pandac$ASTNode* body3713 = NULL;
    panda$core$String* $tmp3715;
    panda$core$String* $tmp3716;
    panda$core$String* $tmp3717;
    panda$core$String* $tmp3718;
    panda$core$String* $tmp3719;
    panda$core$String* $tmp3721;
    panda$core$Int64 $tmp3734;
    org$pandalanguage$pandac$IRNode* target3736 = NULL;
    panda$collections$ImmutableArray* methods3738 = NULL;
    panda$collections$ImmutableArray* args3740 = NULL;
    panda$core$String* $tmp3742;
    panda$core$String* $tmp3743;
    panda$core$String* $tmp3744;
    panda$core$String* $tmp3745;
    panda$core$String* $tmp3746;
    panda$core$String* $tmp3747;
    panda$core$String* $tmp3748;
    panda$core$Object* $tmp3753;
    panda$core$Int64 $tmp3754;
    panda$core$String* $tmp3759;
    panda$core$String* $tmp3769;
    panda$core$String* $tmp3770;
    panda$core$String* $tmp3771;
    panda$core$String* $tmp3772;
    panda$core$String* $tmp3773;
    panda$core$Object* $tmp3775;
    panda$core$Int64 $tmp3776;
    panda$core$String* $tmp3781;
    panda$core$Int64 $tmp3791;
    org$pandalanguage$pandac$IRNode* target3793 = NULL;
    panda$collections$ImmutableArray* methods3795 = NULL;
    panda$core$String* $tmp3797;
    panda$core$String* $tmp3798;
    panda$core$String* $tmp3799;
    panda$core$String* $tmp3800;
    panda$core$String* $tmp3801;
    panda$core$Object* $tmp3806;
    panda$core$Int64 $tmp3807;
    panda$core$String* $tmp3814;
    panda$core$String* $tmp3815;
    panda$core$String* $tmp3816;
    panda$core$Object* $tmp3817;
    panda$core$Int64 $tmp3818;
    panda$core$Int64 $tmp3825;
    org$pandalanguage$pandac$IRNode* start3827 = NULL;
    org$pandalanguage$pandac$IRNode* end3829 = NULL;
    panda$core$Bit inclusive3831;
    org$pandalanguage$pandac$IRNode* step3833 = NULL;
    panda$core$MutableString* result3838 = NULL;
    panda$core$MutableString* $tmp3839;
    panda$core$MutableString* $tmp3840;
    panda$core$String* $tmp3844;
    panda$core$String* $tmp3845;
    panda$core$String* $tmp3850;
    panda$core$String* $tmp3851;
    panda$core$Int64 $tmp3857;
    org$pandalanguage$pandac$Variable$Kind kind3859;
    panda$collections$ImmutableArray* decls3861 = NULL;
    panda$core$MutableString* result3866 = NULL;
    panda$core$MutableString* $tmp3867;
    panda$core$MutableString* $tmp3868;
    org$pandalanguage$pandac$Variable$Kind $match$889_173870;
    panda$core$Int64 $tmp3871;
    panda$core$Int64 $tmp3874;
    panda$core$Int64 $tmp3877;
    panda$core$Int64 $tmp3880;
    panda$core$String* $tmp3883;
    panda$core$String* $tmp3888;
    panda$core$String* $tmp3889;
    panda$core$Int64 $tmp3895;
    panda$core$String* name3897 = NULL;
    panda$core$String* $tmp3899;
    panda$core$Int64 $tmp3902;
    org$pandalanguage$pandac$Variable* variable3904 = NULL;
    panda$core$String* $tmp3906;
    panda$core$String* $tmp3907;
    panda$core$Int64 $tmp3912;
    panda$collections$ImmutableArray* tests3914 = NULL;
    panda$collections$ImmutableArray* statements3916 = NULL;
    panda$core$String* $tmp3918;
    panda$core$String* $tmp3919;
    panda$core$String* $tmp3920;
    panda$core$String* $tmp3921;
    panda$core$String* $tmp3922;
    panda$core$String* $tmp3924;
    panda$core$String* $tmp3932;
    panda$core$Int64 $tmp3943;
    panda$core$String* label3945 = NULL;
    org$pandalanguage$pandac$IRNode* test3947 = NULL;
    panda$collections$ImmutableArray* statements3949 = NULL;
    panda$core$MutableString* result3954 = NULL;
    panda$core$MutableString* $tmp3955;
    panda$core$MutableString* $tmp3956;
    panda$core$String* $tmp3958;
    panda$core$String* $tmp3959;
    panda$core$String* $tmp3963;
    panda$core$String* $tmp3964;
    panda$collections$Iterator* Iter$909$173972 = NULL;
    panda$collections$Iterator* $tmp3973;
    panda$collections$Iterator* $tmp3974;
    org$pandalanguage$pandac$IRNode* s3990 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp3991;
    panda$core$Object* $tmp3992;
    panda$core$String* $tmp3997;
    panda$core$Char8 $tmp4002;
    panda$core$UInt8 $tmp4003;
    panda$core$String* $tmp4004;
    panda$core$String* $tmp4005;
    panda$core$Bit $tmp4011;
    int $tmp2586;
    {
        $tmp2588 = self;
        $match$682_92587 = $tmp2588;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2588));
        panda$core$Int64$init$builtin_int64(&$tmp2589, 0);
        panda$core$Bit $tmp2590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2589);
        if ($tmp2590.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2592 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            test2591 = *$tmp2592;
            org$pandalanguage$pandac$IRNode** $tmp2594 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            msg2593 = *$tmp2594;
            if (((panda$core$Bit) { msg2593 != NULL }).value) {
            {
                panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2601, ((panda$core$Object*) test2591));
                $tmp2600 = $tmp2602;
                panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, &$s2603);
                $tmp2599 = $tmp2604;
                panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2599, ((panda$core$Object*) msg2593));
                $tmp2598 = $tmp2605;
                panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, &$s2606);
                $tmp2597 = $tmp2607;
                $tmp2596 = $tmp2597;
                $returnValue2595 = $tmp2596;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2596));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2597));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2598));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2600));
                $tmp2586 = 0;
                goto $l2584;
                $l2608:;
                return $returnValue2595;
            }
            }
            panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2613, ((panda$core$Object*) test2591));
            $tmp2612 = $tmp2614;
            panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, &$s2615);
            $tmp2611 = $tmp2616;
            $tmp2610 = $tmp2611;
            $returnValue2595 = $tmp2610;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2610));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2612));
            $tmp2586 = 1;
            goto $l2584;
            $l2617:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2619, 1);
        panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2619);
        if ($tmp2620.value) {
        {
            $tmp2621 = &$s2622;
            $returnValue2595 = $tmp2621;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2621));
            $tmp2586 = 2;
            goto $l2584;
            $l2623:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2625, 2);
        panda$core$Bit $tmp2626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2625);
        if ($tmp2626.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2628 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            left2627 = *$tmp2628;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2630 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$682_92587->$data + 32));
            op2629 = *$tmp2630;
            org$pandalanguage$pandac$IRNode** $tmp2632 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 40));
            right2631 = *$tmp2632;
            panda$core$String* $tmp2641 = (($fn2640) left2627->$class->vtable[0])(left2627);
            $tmp2639 = $tmp2641;
            panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, &$s2642);
            $tmp2638 = $tmp2643;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2645;
            $tmp2645 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2645->value = op2629;
            $tmp2644 = ((panda$core$Object*) $tmp2645);
            panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2638, $tmp2644);
            $tmp2637 = $tmp2646;
            panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2647);
            $tmp2636 = $tmp2648;
            panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2636, ((panda$core$Object*) right2631));
            $tmp2635 = $tmp2649;
            panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2650);
            $tmp2634 = $tmp2651;
            $tmp2633 = $tmp2634;
            $returnValue2595 = $tmp2633;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2633));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2634));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2635));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2636));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2637));
            panda$core$Panda$unref$panda$core$Object($tmp2644);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2638));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2639));
            $tmp2586 = 3;
            goto $l2584;
            $l2652:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2654, 3);
        panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2654);
        if ($tmp2655.value) {
        {
            panda$core$Bit* $tmp2657 = ((panda$core$Bit*) ((char*) $match$682_92587->$data + 24));
            bit2656 = *$tmp2657;
            panda$core$String* $tmp2660 = panda$core$Bit$convert$R$panda$core$String(bit2656);
            $tmp2659 = $tmp2660;
            $tmp2658 = $tmp2659;
            $returnValue2595 = $tmp2658;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2659));
            $tmp2586 = 4;
            goto $l2584;
            $l2661:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2663, 4);
        panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2663);
        if ($tmp2664.value) {
        {
            panda$collections$ImmutableArray** $tmp2666 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 16));
            statements2665 = *$tmp2666;
            int $tmp2669;
            {
                panda$core$MutableString* $tmp2673 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp2673, &$s2674);
                $tmp2672 = $tmp2673;
                $tmp2671 = $tmp2672;
                result2670 = $tmp2671;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2672));
                {
                    int $tmp2677;
                    {
                        ITable* $tmp2681 = ((panda$collections$Iterable*) statements2665)->$class->itable;
                        while ($tmp2681->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2681 = $tmp2681->next;
                        }
                        $fn2683 $tmp2682 = $tmp2681->methods[0];
                        panda$collections$Iterator* $tmp2684 = $tmp2682(((panda$collections$Iterable*) statements2665));
                        $tmp2680 = $tmp2684;
                        $tmp2679 = $tmp2680;
                        Iter$696$172678 = $tmp2679;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2680));
                        $l2685:;
                        ITable* $tmp2688 = Iter$696$172678->$class->itable;
                        while ($tmp2688->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2688 = $tmp2688->next;
                        }
                        $fn2690 $tmp2689 = $tmp2688->methods[0];
                        panda$core$Bit $tmp2691 = $tmp2689(Iter$696$172678);
                        panda$core$Bit $tmp2692 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2691);
                        bool $tmp2687 = $tmp2692.value;
                        if (!$tmp2687) goto $l2686;
                        {
                            int $tmp2695;
                            {
                                ITable* $tmp2699 = Iter$696$172678->$class->itable;
                                while ($tmp2699->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2699 = $tmp2699->next;
                                }
                                $fn2701 $tmp2700 = $tmp2699->methods[1];
                                panda$core$Object* $tmp2702 = $tmp2700(Iter$696$172678);
                                $tmp2698 = $tmp2702;
                                $tmp2697 = ((org$pandalanguage$pandac$IRNode*) $tmp2698);
                                s2696 = $tmp2697;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2697));
                                panda$core$Panda$unref$panda$core$Object($tmp2698);
                                panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2696), &$s2704);
                                $tmp2703 = $tmp2705;
                                panda$core$MutableString$append$panda$core$String(result2670, $tmp2703);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2703));
                            }
                            $tmp2695 = -1;
                            goto $l2693;
                            $l2693:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2696));
                            s2696 = NULL;
                            switch ($tmp2695) {
                                case -1: goto $l2706;
                            }
                            $l2706:;
                        }
                        goto $l2685;
                        $l2686:;
                    }
                    $tmp2677 = -1;
                    goto $l2675;
                    $l2675:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$696$172678));
                    Iter$696$172678 = NULL;
                    switch ($tmp2677) {
                        case -1: goto $l2707;
                    }
                    $l2707:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2709, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2708, $tmp2709);
                panda$core$MutableString$append$panda$core$Char8(result2670, $tmp2708);
                panda$core$String* $tmp2712 = panda$core$MutableString$finish$R$panda$core$String(result2670);
                $tmp2711 = $tmp2712;
                $tmp2710 = $tmp2711;
                $returnValue2595 = $tmp2710;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2711));
                $tmp2669 = 0;
                goto $l2667;
                $l2713:;
                $tmp2586 = 5;
                goto $l2584;
                $l2714:;
                return $returnValue2595;
            }
            $l2667:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2670));
            result2670 = NULL;
            switch ($tmp2669) {
                case 0: goto $l2713;
            }
            $l2716:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2717, 5);
        panda$core$Bit $tmp2718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2717);
        if ($tmp2718.value) {
        {
            panda$collections$ImmutableArray** $tmp2720 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 16));
            statements2719 = *$tmp2720;
            panda$collections$ImmutableArray** $tmp2722 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 24));
            finally2721 = *$tmp2722;
            int $tmp2725;
            {
                panda$core$MutableString* $tmp2729 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp2729, &$s2730);
                $tmp2728 = $tmp2729;
                $tmp2727 = $tmp2728;
                result2726 = $tmp2727;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2727));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2728));
                {
                    int $tmp2733;
                    {
                        ITable* $tmp2737 = ((panda$collections$Iterable*) statements2719)->$class->itable;
                        while ($tmp2737->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2737 = $tmp2737->next;
                        }
                        $fn2739 $tmp2738 = $tmp2737->methods[0];
                        panda$collections$Iterator* $tmp2740 = $tmp2738(((panda$collections$Iterable*) statements2719));
                        $tmp2736 = $tmp2740;
                        $tmp2735 = $tmp2736;
                        Iter$703$172734 = $tmp2735;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2735));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2736));
                        $l2741:;
                        ITable* $tmp2744 = Iter$703$172734->$class->itable;
                        while ($tmp2744->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2744 = $tmp2744->next;
                        }
                        $fn2746 $tmp2745 = $tmp2744->methods[0];
                        panda$core$Bit $tmp2747 = $tmp2745(Iter$703$172734);
                        panda$core$Bit $tmp2748 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2747);
                        bool $tmp2743 = $tmp2748.value;
                        if (!$tmp2743) goto $l2742;
                        {
                            int $tmp2751;
                            {
                                ITable* $tmp2755 = Iter$703$172734->$class->itable;
                                while ($tmp2755->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2755 = $tmp2755->next;
                                }
                                $fn2757 $tmp2756 = $tmp2755->methods[1];
                                panda$core$Object* $tmp2758 = $tmp2756(Iter$703$172734);
                                $tmp2754 = $tmp2758;
                                $tmp2753 = ((org$pandalanguage$pandac$IRNode*) $tmp2754);
                                s2752 = $tmp2753;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2753));
                                panda$core$Panda$unref$panda$core$Object($tmp2754);
                                panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2752), &$s2760);
                                $tmp2759 = $tmp2761;
                                panda$core$MutableString$append$panda$core$String(result2726, $tmp2759);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2759));
                            }
                            $tmp2751 = -1;
                            goto $l2749;
                            $l2749:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2752));
                            s2752 = NULL;
                            switch ($tmp2751) {
                                case -1: goto $l2762;
                            }
                            $l2762:;
                        }
                        goto $l2741;
                        $l2742:;
                    }
                    $tmp2733 = -1;
                    goto $l2731;
                    $l2731:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$703$172734));
                    Iter$703$172734 = NULL;
                    switch ($tmp2733) {
                        case -1: goto $l2763;
                    }
                    $l2763:;
                }
                panda$core$MutableString$append$panda$core$String(result2726, &$s2764);
                {
                    int $tmp2767;
                    {
                        ITable* $tmp2771 = ((panda$collections$Iterable*) finally2721)->$class->itable;
                        while ($tmp2771->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2771 = $tmp2771->next;
                        }
                        $fn2773 $tmp2772 = $tmp2771->methods[0];
                        panda$collections$Iterator* $tmp2774 = $tmp2772(((panda$collections$Iterable*) finally2721));
                        $tmp2770 = $tmp2774;
                        $tmp2769 = $tmp2770;
                        Iter$707$172768 = $tmp2769;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2769));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2770));
                        $l2775:;
                        ITable* $tmp2778 = Iter$707$172768->$class->itable;
                        while ($tmp2778->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2778 = $tmp2778->next;
                        }
                        $fn2780 $tmp2779 = $tmp2778->methods[0];
                        panda$core$Bit $tmp2781 = $tmp2779(Iter$707$172768);
                        panda$core$Bit $tmp2782 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2781);
                        bool $tmp2777 = $tmp2782.value;
                        if (!$tmp2777) goto $l2776;
                        {
                            int $tmp2785;
                            {
                                ITable* $tmp2789 = Iter$707$172768->$class->itable;
                                while ($tmp2789->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2789 = $tmp2789->next;
                                }
                                $fn2791 $tmp2790 = $tmp2789->methods[1];
                                panda$core$Object* $tmp2792 = $tmp2790(Iter$707$172768);
                                $tmp2788 = $tmp2792;
                                $tmp2787 = ((org$pandalanguage$pandac$IRNode*) $tmp2788);
                                s2786 = $tmp2787;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2787));
                                panda$core$Panda$unref$panda$core$Object($tmp2788);
                                panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2786), &$s2794);
                                $tmp2793 = $tmp2795;
                                panda$core$MutableString$append$panda$core$String(result2726, $tmp2793);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2793));
                            }
                            $tmp2785 = -1;
                            goto $l2783;
                            $l2783:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2786));
                            s2786 = NULL;
                            switch ($tmp2785) {
                                case -1: goto $l2796;
                            }
                            $l2796:;
                        }
                        goto $l2775;
                        $l2776:;
                    }
                    $tmp2767 = -1;
                    goto $l2765;
                    $l2765:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$707$172768));
                    Iter$707$172768 = NULL;
                    switch ($tmp2767) {
                        case -1: goto $l2797;
                    }
                    $l2797:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2799, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2798, $tmp2799);
                panda$core$MutableString$append$panda$core$Char8(result2726, $tmp2798);
                panda$core$String* $tmp2802 = panda$core$MutableString$finish$R$panda$core$String(result2726);
                $tmp2801 = $tmp2802;
                $tmp2800 = $tmp2801;
                $returnValue2595 = $tmp2800;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2801));
                $tmp2725 = 0;
                goto $l2723;
                $l2803:;
                $tmp2586 = 6;
                goto $l2584;
                $l2804:;
                return $returnValue2595;
            }
            $l2723:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2726));
            result2726 = NULL;
            switch ($tmp2725) {
                case 0: goto $l2803;
            }
            $l2806:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2807, 6);
        panda$core$Bit $tmp2808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2807);
        if ($tmp2808.value) {
        {
            panda$core$String** $tmp2810 = ((panda$core$String**) ((char*) $match$682_92587->$data + 16));
            label2809 = *$tmp2810;
            if (((panda$core$Bit) { label2809 != NULL }).value) {
            {
                panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2814, label2809);
                $tmp2813 = $tmp2815;
                panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2816);
                $tmp2812 = $tmp2817;
                $tmp2811 = $tmp2812;
                $returnValue2595 = $tmp2811;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2813));
                $tmp2586 = 7;
                goto $l2584;
                $l2818:;
                return $returnValue2595;
            }
            }
            $tmp2820 = &$s2821;
            $returnValue2595 = $tmp2820;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2820));
            $tmp2586 = 8;
            goto $l2584;
            $l2822:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2824, 7);
        panda$core$Bit $tmp2825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2824);
        if ($tmp2825.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp2827 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$682_92587->$data + 24));
            m2826 = *$tmp2827;
            panda$collections$ImmutableArray** $tmp2829 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 32));
            args2828 = *$tmp2829;
            panda$core$String* $tmp2835 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m2826->value)->name);
            $tmp2834 = $tmp2835;
            panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2836);
            $tmp2833 = $tmp2837;
            ITable* $tmp2839 = ((panda$collections$CollectionView*) args2828)->$class->itable;
            while ($tmp2839->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp2839 = $tmp2839->next;
            }
            $fn2841 $tmp2840 = $tmp2839->methods[1];
            panda$core$String* $tmp2842 = $tmp2840(((panda$collections$CollectionView*) args2828));
            $tmp2838 = $tmp2842;
            panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, $tmp2838);
            $tmp2832 = $tmp2843;
            panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2844);
            $tmp2831 = $tmp2845;
            $tmp2830 = $tmp2831;
            $returnValue2595 = $tmp2830;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2830));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2831));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2838));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2833));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2834));
            $tmp2586 = 9;
            goto $l2584;
            $l2846:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2848, 8);
        panda$core$Bit $tmp2849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2848);
        if ($tmp2849.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2851 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            value2850 = *$tmp2851;
            org$pandalanguage$pandac$Type** $tmp2853 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92587->$data + 24));
            type2852 = *$tmp2853;
            panda$core$String* $tmp2860 = (($fn2859) value2850->$class->vtable[0])(value2850);
            $tmp2858 = $tmp2860;
            panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2861);
            $tmp2857 = $tmp2862;
            panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2857, ((panda$core$Object*) type2852));
            $tmp2856 = $tmp2863;
            panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2864);
            $tmp2855 = $tmp2865;
            $tmp2854 = $tmp2855;
            $returnValue2595 = $tmp2854;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2854));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2855));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2856));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2857));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2858));
            $tmp2586 = 10;
            goto $l2584;
            $l2866:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2868, 9);
        panda$core$Bit $tmp2869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2868);
        if ($tmp2869.value) {
        {
            org$pandalanguage$pandac$ChoiceCase** $tmp2871 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$682_92587->$data + 24));
            ce2870 = *$tmp2871;
            panda$core$String* $tmp2874 = org$pandalanguage$pandac$ChoiceCase$convert$R$panda$core$String(ce2870);
            $tmp2873 = $tmp2874;
            $tmp2872 = $tmp2873;
            $returnValue2595 = $tmp2872;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2872));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2873));
            $tmp2586 = 11;
            goto $l2584;
            $l2875:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2877, 10);
        panda$core$Bit $tmp2878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2877);
        if ($tmp2878.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2880 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            base2879 = *$tmp2880;
            org$pandalanguage$pandac$ChoiceCase** $tmp2882 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$682_92587->$data + 24));
            ce2881 = *$tmp2882;
            panda$core$Int64* $tmp2884 = ((panda$core$Int64*) ((char*) $match$682_92587->$data + 32));
            field2883 = *$tmp2884;
            panda$core$String* $tmp2893 = (($fn2892) base2879->$class->vtable[0])(base2879);
            $tmp2891 = $tmp2893;
            panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2891, &$s2894);
            $tmp2890 = $tmp2895;
            panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2890, ((panda$core$Object*) ce2881));
            $tmp2889 = $tmp2896;
            panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, &$s2897);
            $tmp2888 = $tmp2898;
            panda$core$Int64$wrapper* $tmp2900;
            $tmp2900 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2900->value = field2883;
            $tmp2899 = ((panda$core$Object*) $tmp2900);
            panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2888, $tmp2899);
            $tmp2887 = $tmp2901;
            panda$core$String* $tmp2903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2902);
            $tmp2886 = $tmp2903;
            $tmp2885 = $tmp2886;
            $returnValue2595 = $tmp2885;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2885));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2886));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2887));
            panda$core$Panda$unref$panda$core$Object($tmp2899);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2888));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2889));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2890));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2891));
            $tmp2586 = 12;
            goto $l2584;
            $l2904:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2906, 11);
        panda$core$Bit $tmp2907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2906);
        if ($tmp2907.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2909 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92587->$data + 16));
            type2908 = *$tmp2909;
            org$pandalanguage$pandac$IRNode** $tmp2911 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            call2910 = *$tmp2911;
            int $tmp2914;
            {
                $tmp2916 = call2910;
                $match$726_172915 = $tmp2916;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2916));
                panda$core$Int64$init$builtin_int64(&$tmp2917, 7);
                panda$core$Bit $tmp2918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$726_172915->$rawValue, $tmp2917);
                if ($tmp2918.value) {
                {
                    panda$collections$ImmutableArray** $tmp2920 = ((panda$collections$ImmutableArray**) ((char*) $match$726_172915->$data + 32));
                    args2919 = *$tmp2920;
                    panda$core$String* $tmp2926 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2908);
                    $tmp2925 = $tmp2926;
                    panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2925, &$s2927);
                    $tmp2924 = $tmp2928;
                    ITable* $tmp2930 = ((panda$collections$CollectionView*) args2919)->$class->itable;
                    while ($tmp2930->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp2930 = $tmp2930->next;
                    }
                    $fn2932 $tmp2931 = $tmp2930->methods[1];
                    panda$core$String* $tmp2933 = $tmp2931(((panda$collections$CollectionView*) args2919));
                    $tmp2929 = $tmp2933;
                    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, $tmp2929);
                    $tmp2923 = $tmp2934;
                    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, &$s2935);
                    $tmp2922 = $tmp2936;
                    $tmp2921 = $tmp2922;
                    $returnValue2595 = $tmp2921;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2921));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2922));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2923));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2929));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2924));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2925));
                    $tmp2914 = 0;
                    goto $l2912;
                    $l2937:;
                    $tmp2586 = 13;
                    goto $l2584;
                    $l2938:;
                    return $returnValue2595;
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp2940, false);
                    if ($tmp2940.value) goto $l2941; else goto $l2942;
                    $l2942:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2943, (panda$core$Int64) { 730 });
                    abort();
                    $l2941:;
                }
                }
            }
            $tmp2914 = -1;
            goto $l2912;
            $l2912:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2916));
            switch ($tmp2914) {
                case 0: goto $l2937;
                case -1: goto $l2944;
            }
            $l2944:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2945, 12);
        panda$core$Bit $tmp2946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2945);
        if ($tmp2946.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2948 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92587->$data + 16));
            Type2947 = *$tmp2948;
            $tmp2949 = &$s2950;
            $returnValue2595 = $tmp2949;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2949));
            $tmp2586 = 14;
            goto $l2584;
            $l2951:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2953, 13);
        panda$core$Bit $tmp2954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2953);
        if ($tmp2954.value) {
        {
            panda$core$String** $tmp2956 = ((panda$core$String**) ((char*) $match$682_92587->$data + 16));
            label2955 = *$tmp2956;
            if (((panda$core$Bit) { label2955 != NULL }).value) {
            {
                panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2960, label2955);
                $tmp2959 = $tmp2961;
                panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2962);
                $tmp2958 = $tmp2963;
                $tmp2957 = $tmp2958;
                $returnValue2595 = $tmp2957;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2959));
                $tmp2586 = 15;
                goto $l2584;
                $l2964:;
                return $returnValue2595;
            }
            }
            $tmp2966 = &$s2967;
            $returnValue2595 = $tmp2966;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2966));
            $tmp2586 = 16;
            goto $l2584;
            $l2968:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2970, 14);
        panda$core$Bit $tmp2971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp2970);
        if ($tmp2971.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2973 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 0));
            target2972 = *$tmp2973;
            org$pandalanguage$pandac$IRNode** $tmp2975 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 8));
            value2974 = *$tmp2975;
            if (((panda$core$Bit) { value2974 != NULL }).value) {
            {
                panda$core$String* $tmp2984 = (($fn2983) target2972->$class->vtable[0])(target2972);
                $tmp2982 = $tmp2984;
                panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2985);
                $tmp2981 = $tmp2986;
                org$pandalanguage$pandac$Type* $tmp2989 = (($fn2988) target2972->$class->vtable[2])(target2972);
                $tmp2987 = $tmp2989;
                panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2981, ((panda$core$Object*) $tmp2987));
                $tmp2980 = $tmp2990;
                panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2991);
                $tmp2979 = $tmp2992;
                panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2979, ((panda$core$Object*) value2974));
                $tmp2978 = $tmp2993;
                panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2994);
                $tmp2977 = $tmp2995;
                $tmp2976 = $tmp2977;
                $returnValue2595 = $tmp2976;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2977));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2978));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2979));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2982));
                $tmp2586 = 17;
                goto $l2584;
                $l2996:;
                return $returnValue2595;
            }
            }
            panda$core$String* $tmp3004 = (($fn3003) target2972->$class->vtable[0])(target2972);
            $tmp3002 = $tmp3004;
            panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3005);
            $tmp3001 = $tmp3006;
            org$pandalanguage$pandac$Type* $tmp3009 = (($fn3008) target2972->$class->vtable[2])(target2972);
            $tmp3007 = $tmp3009;
            panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3001, ((panda$core$Object*) $tmp3007));
            $tmp3000 = $tmp3010;
            panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, &$s3011);
            $tmp2999 = $tmp3012;
            $tmp2998 = $tmp2999;
            $returnValue2595 = $tmp2998;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2998));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2999));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3000));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3007));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3001));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3002));
            $tmp2586 = 18;
            goto $l2584;
            $l3013:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3015, 15);
        panda$core$Bit $tmp3016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3015);
        if ($tmp3016.value) {
        {
            panda$core$String** $tmp3018 = ((panda$core$String**) ((char*) $match$682_92587->$data + 16));
            label3017 = *$tmp3018;
            panda$collections$ImmutableArray** $tmp3020 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 24));
            statements3019 = *$tmp3020;
            org$pandalanguage$pandac$IRNode** $tmp3022 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 32));
            test3021 = *$tmp3022;
            int $tmp3025;
            {
                panda$core$MutableString* $tmp3029 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3029);
                $tmp3028 = $tmp3029;
                $tmp3027 = $tmp3028;
                result3026 = $tmp3027;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3028));
                if (((panda$core$Bit) { label3017 != NULL }).value) {
                {
                    panda$core$String* $tmp3032 = panda$core$String$convert$R$panda$core$String(label3017);
                    $tmp3031 = $tmp3032;
                    panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, &$s3033);
                    $tmp3030 = $tmp3034;
                    panda$core$MutableString$append$panda$core$String(result3026, $tmp3030);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3030));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3031));
                }
                }
                panda$core$MutableString$append$panda$core$String(result3026, &$s3035);
                {
                    int $tmp3038;
                    {
                        ITable* $tmp3042 = ((panda$collections$Iterable*) statements3019)->$class->itable;
                        while ($tmp3042->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3042 = $tmp3042->next;
                        }
                        $fn3044 $tmp3043 = $tmp3042->methods[0];
                        panda$collections$Iterator* $tmp3045 = $tmp3043(((panda$collections$Iterable*) statements3019));
                        $tmp3041 = $tmp3045;
                        $tmp3040 = $tmp3041;
                        Iter$750$173039 = $tmp3040;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3040));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3041));
                        $l3046:;
                        ITable* $tmp3049 = Iter$750$173039->$class->itable;
                        while ($tmp3049->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3049 = $tmp3049->next;
                        }
                        $fn3051 $tmp3050 = $tmp3049->methods[0];
                        panda$core$Bit $tmp3052 = $tmp3050(Iter$750$173039);
                        panda$core$Bit $tmp3053 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3052);
                        bool $tmp3048 = $tmp3053.value;
                        if (!$tmp3048) goto $l3047;
                        {
                            int $tmp3056;
                            {
                                ITable* $tmp3060 = Iter$750$173039->$class->itable;
                                while ($tmp3060->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3060 = $tmp3060->next;
                                }
                                $fn3062 $tmp3061 = $tmp3060->methods[1];
                                panda$core$Object* $tmp3063 = $tmp3061(Iter$750$173039);
                                $tmp3059 = $tmp3063;
                                $tmp3058 = ((org$pandalanguage$pandac$IRNode*) $tmp3059);
                                s3057 = $tmp3058;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3058));
                                panda$core$Panda$unref$panda$core$Object($tmp3059);
                                panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3057), &$s3065);
                                $tmp3064 = $tmp3066;
                                panda$core$MutableString$append$panda$core$String(result3026, $tmp3064);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3064));
                            }
                            $tmp3056 = -1;
                            goto $l3054;
                            $l3054:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3057));
                            s3057 = NULL;
                            switch ($tmp3056) {
                                case -1: goto $l3067;
                            }
                            $l3067:;
                        }
                        goto $l3046;
                        $l3047:;
                    }
                    $tmp3038 = -1;
                    goto $l3036;
                    $l3036:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$750$173039));
                    Iter$750$173039 = NULL;
                    switch ($tmp3038) {
                        case -1: goto $l3068;
                    }
                    $l3068:;
                }
                panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3071, ((panda$core$Object*) test3021));
                $tmp3070 = $tmp3072;
                panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, &$s3073);
                $tmp3069 = $tmp3074;
                panda$core$MutableString$append$panda$core$String(result3026, $tmp3069);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3069));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3070));
                panda$core$String* $tmp3077 = panda$core$MutableString$finish$R$panda$core$String(result3026);
                $tmp3076 = $tmp3077;
                $tmp3075 = $tmp3076;
                $returnValue2595 = $tmp3075;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3076));
                $tmp3025 = 0;
                goto $l3023;
                $l3078:;
                $tmp2586 = 19;
                goto $l2584;
                $l3079:;
                return $returnValue2595;
            }
            $l3023:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3026));
            result3026 = NULL;
            switch ($tmp3025) {
                case 0: goto $l3078;
            }
            $l3081:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3082, 16);
        panda$core$Bit $tmp3083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3082);
        if ($tmp3083.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3085 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 0));
            m3084 = *$tmp3085;
            panda$collections$ImmutableArray** $tmp3087 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 8));
            args3086 = *$tmp3087;
            panda$core$String* $tmp3094 = (($fn3093) m3084->$class->vtable[0])(m3084);
            $tmp3092 = $tmp3094;
            panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3095);
            $tmp3091 = $tmp3096;
            ITable* $tmp3099 = ((panda$collections$CollectionView*) args3086)->$class->itable;
            while ($tmp3099->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3099 = $tmp3099->next;
            }
            $fn3101 $tmp3100 = $tmp3099->methods[2];
            panda$core$String* $tmp3102 = $tmp3100(((panda$collections$CollectionView*) args3086), &$s3098);
            $tmp3097 = $tmp3102;
            panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, $tmp3097);
            $tmp3090 = $tmp3103;
            panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, &$s3104);
            $tmp3089 = $tmp3105;
            $tmp3088 = $tmp3089;
            $returnValue2595 = $tmp3088;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3088));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3089));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3090));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3097));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3091));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3092));
            $tmp2586 = 20;
            goto $l2584;
            $l3106:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3108, 17);
        panda$core$Bit $tmp3109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3108);
        if ($tmp3109.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3111 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 0));
            expr3110 = *$tmp3111;
            org$pandalanguage$pandac$IRNode** $tmp3113 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 8));
            stmt3112 = *$tmp3113;
            panda$core$String* $tmp3120 = (($fn3119) expr3110->$class->vtable[0])(expr3110);
            $tmp3118 = $tmp3120;
            panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, &$s3121);
            $tmp3117 = $tmp3122;
            panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3117, ((panda$core$Object*) stmt3112));
            $tmp3116 = $tmp3123;
            panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3116, &$s3124);
            $tmp3115 = $tmp3125;
            $tmp3114 = $tmp3115;
            $returnValue2595 = $tmp3114;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3114));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3115));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3116));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3117));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3118));
            $tmp2586 = 21;
            goto $l2584;
            $l3126:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3128, 18);
        panda$core$Bit $tmp3129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3128);
        if ($tmp3129.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3131 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            base3130 = *$tmp3131;
            org$pandalanguage$pandac$FieldDecl** $tmp3133 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$682_92587->$data + 32));
            field3132 = *$tmp3133;
            if (((panda$core$Bit) { base3130 != NULL }).value) {
            {
                panda$core$String* $tmp3140 = (($fn3139) base3130->$class->vtable[0])(base3130);
                $tmp3138 = $tmp3140;
                panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3138, &$s3141);
                $tmp3137 = $tmp3142;
                panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, ((org$pandalanguage$pandac$Symbol*) field3132)->name);
                $tmp3136 = $tmp3143;
                panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3136, &$s3144);
                $tmp3135 = $tmp3145;
                $tmp3134 = $tmp3135;
                $returnValue2595 = $tmp3134;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3134));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3135));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3136));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3137));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3138));
                $tmp2586 = 22;
                goto $l2584;
                $l3146:;
                return $returnValue2595;
            }
            }
            $tmp3148 = ((org$pandalanguage$pandac$Symbol*) field3132)->name;
            $returnValue2595 = $tmp3148;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3148));
            $tmp2586 = 23;
            goto $l2584;
            $l3149:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3151, 19);
        panda$core$Bit $tmp3152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3151);
        if ($tmp3152.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3154 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            test3153 = *$tmp3154;
            panda$collections$ImmutableArray** $tmp3156 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 24));
            ifTrue3155 = *$tmp3156;
            org$pandalanguage$pandac$IRNode** $tmp3158 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 32));
            ifFalse3157 = *$tmp3158;
            int $tmp3161;
            {
                panda$core$MutableString* $tmp3165 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3168, ((panda$core$Object*) test3153));
                $tmp3167 = $tmp3169;
                panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, &$s3170);
                $tmp3166 = $tmp3171;
                panda$core$MutableString$init$panda$core$String($tmp3165, $tmp3166);
                $tmp3164 = $tmp3165;
                $tmp3163 = $tmp3164;
                result3162 = $tmp3163;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3163));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3164));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3166));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3167));
                {
                    int $tmp3174;
                    {
                        ITable* $tmp3178 = ((panda$collections$Iterable*) ifTrue3155)->$class->itable;
                        while ($tmp3178->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3178 = $tmp3178->next;
                        }
                        $fn3180 $tmp3179 = $tmp3178->methods[0];
                        panda$collections$Iterator* $tmp3181 = $tmp3179(((panda$collections$Iterable*) ifTrue3155));
                        $tmp3177 = $tmp3181;
                        $tmp3176 = $tmp3177;
                        Iter$766$173175 = $tmp3176;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3176));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3177));
                        $l3182:;
                        ITable* $tmp3185 = Iter$766$173175->$class->itable;
                        while ($tmp3185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3185 = $tmp3185->next;
                        }
                        $fn3187 $tmp3186 = $tmp3185->methods[0];
                        panda$core$Bit $tmp3188 = $tmp3186(Iter$766$173175);
                        panda$core$Bit $tmp3189 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3188);
                        bool $tmp3184 = $tmp3189.value;
                        if (!$tmp3184) goto $l3183;
                        {
                            int $tmp3192;
                            {
                                ITable* $tmp3196 = Iter$766$173175->$class->itable;
                                while ($tmp3196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3196 = $tmp3196->next;
                                }
                                $fn3198 $tmp3197 = $tmp3196->methods[1];
                                panda$core$Object* $tmp3199 = $tmp3197(Iter$766$173175);
                                $tmp3195 = $tmp3199;
                                $tmp3194 = ((org$pandalanguage$pandac$IRNode*) $tmp3195);
                                s3193 = $tmp3194;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3194));
                                panda$core$Panda$unref$panda$core$Object($tmp3195);
                                panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3193), &$s3201);
                                $tmp3200 = $tmp3202;
                                panda$core$MutableString$append$panda$core$String(result3162, $tmp3200);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3200));
                            }
                            $tmp3192 = -1;
                            goto $l3190;
                            $l3190:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3193));
                            s3193 = NULL;
                            switch ($tmp3192) {
                                case -1: goto $l3203;
                            }
                            $l3203:;
                        }
                        goto $l3182;
                        $l3183:;
                    }
                    $tmp3174 = -1;
                    goto $l3172;
                    $l3172:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$766$173175));
                    Iter$766$173175 = NULL;
                    switch ($tmp3174) {
                        case -1: goto $l3204;
                    }
                    $l3204:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3206, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3205, $tmp3206);
                panda$core$MutableString$append$panda$core$Char8(result3162, $tmp3205);
                if (((panda$core$Bit) { ifFalse3157 != NULL }).value) {
                {
                    panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3209, ((panda$core$Object*) ifFalse3157));
                    $tmp3208 = $tmp3210;
                    panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3211);
                    $tmp3207 = $tmp3212;
                    panda$core$MutableString$append$panda$core$String(result3162, $tmp3207);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3207));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3208));
                }
                }
                panda$core$String* $tmp3215 = panda$core$MutableString$finish$R$panda$core$String(result3162);
                $tmp3214 = $tmp3215;
                $tmp3213 = $tmp3214;
                $returnValue2595 = $tmp3213;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3214));
                $tmp3161 = 0;
                goto $l3159;
                $l3216:;
                $tmp2586 = 24;
                goto $l2584;
                $l3217:;
                return $returnValue2595;
            }
            $l3159:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3162));
            result3162 = NULL;
            switch ($tmp3161) {
                case 0: goto $l3216;
            }
            $l3219:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3220, 20);
        panda$core$Bit $tmp3221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3220);
        if ($tmp3221.value) {
        {
            panda$core$UInt64* $tmp3223 = ((panda$core$UInt64*) ((char*) $match$682_92587->$data + 24));
            value3222 = *$tmp3223;
            panda$core$String* $tmp3226 = panda$core$UInt64$convert$R$panda$core$String(value3222);
            $tmp3225 = $tmp3226;
            $tmp3224 = $tmp3225;
            $returnValue2595 = $tmp3224;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3225));
            $tmp2586 = 25;
            goto $l2584;
            $l3227:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3229, 21);
        panda$core$Bit $tmp3230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3229);
        if ($tmp3230.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3232 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            value3231 = *$tmp3232;
            panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3236, ((panda$core$Object*) value3231));
            $tmp3235 = $tmp3237;
            panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, &$s3238);
            $tmp3234 = $tmp3239;
            $tmp3233 = $tmp3234;
            $returnValue2595 = $tmp3233;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3233));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3234));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3235));
            $tmp2586 = 26;
            goto $l2584;
            $l3240:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3242, 22);
        panda$core$Bit $tmp3243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3242);
        if ($tmp3243.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3245 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            value3244 = *$tmp3245;
            panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3249, ((panda$core$Object*) value3244));
            $tmp3248 = $tmp3250;
            panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, &$s3251);
            $tmp3247 = $tmp3252;
            $tmp3246 = $tmp3247;
            $returnValue2595 = $tmp3246;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3247));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3248));
            $tmp2586 = 27;
            goto $l2584;
            $l3253:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3255, 23);
        panda$core$Bit $tmp3256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3255);
        if ($tmp3256.value) {
        {
            panda$core$String** $tmp3258 = ((panda$core$String**) ((char*) $match$682_92587->$data + 16));
            label3257 = *$tmp3258;
            panda$collections$ImmutableArray** $tmp3260 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 24));
            statements3259 = *$tmp3260;
            int $tmp3263;
            {
                panda$core$MutableString* $tmp3267 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3267);
                $tmp3266 = $tmp3267;
                $tmp3265 = $tmp3266;
                result3264 = $tmp3265;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3265));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3266));
                if (((panda$core$Bit) { label3257 != NULL }).value) {
                {
                    panda$core$String* $tmp3270 = panda$core$String$convert$R$panda$core$String(label3257);
                    $tmp3269 = $tmp3270;
                    panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, &$s3271);
                    $tmp3268 = $tmp3272;
                    panda$core$MutableString$append$panda$core$String(result3264, $tmp3268);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3268));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3269));
                }
                }
                panda$core$MutableString$append$panda$core$String(result3264, &$s3273);
                {
                    int $tmp3276;
                    {
                        ITable* $tmp3280 = ((panda$collections$Iterable*) statements3259)->$class->itable;
                        while ($tmp3280->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3280 = $tmp3280->next;
                        }
                        $fn3282 $tmp3281 = $tmp3280->methods[0];
                        panda$collections$Iterator* $tmp3283 = $tmp3281(((panda$collections$Iterable*) statements3259));
                        $tmp3279 = $tmp3283;
                        $tmp3278 = $tmp3279;
                        Iter$786$173277 = $tmp3278;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3278));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3279));
                        $l3284:;
                        ITable* $tmp3287 = Iter$786$173277->$class->itable;
                        while ($tmp3287->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3287 = $tmp3287->next;
                        }
                        $fn3289 $tmp3288 = $tmp3287->methods[0];
                        panda$core$Bit $tmp3290 = $tmp3288(Iter$786$173277);
                        panda$core$Bit $tmp3291 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3290);
                        bool $tmp3286 = $tmp3291.value;
                        if (!$tmp3286) goto $l3285;
                        {
                            int $tmp3294;
                            {
                                ITable* $tmp3298 = Iter$786$173277->$class->itable;
                                while ($tmp3298->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3298 = $tmp3298->next;
                                }
                                $fn3300 $tmp3299 = $tmp3298->methods[1];
                                panda$core$Object* $tmp3301 = $tmp3299(Iter$786$173277);
                                $tmp3297 = $tmp3301;
                                $tmp3296 = ((org$pandalanguage$pandac$IRNode*) $tmp3297);
                                s3295 = $tmp3296;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3296));
                                panda$core$Panda$unref$panda$core$Object($tmp3297);
                                panda$core$String* $tmp3304 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3295), &$s3303);
                                $tmp3302 = $tmp3304;
                                panda$core$MutableString$append$panda$core$String(result3264, $tmp3302);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3302));
                            }
                            $tmp3294 = -1;
                            goto $l3292;
                            $l3292:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3295));
                            s3295 = NULL;
                            switch ($tmp3294) {
                                case -1: goto $l3305;
                            }
                            $l3305:;
                        }
                        goto $l3284;
                        $l3285:;
                    }
                    $tmp3276 = -1;
                    goto $l3274;
                    $l3274:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$786$173277));
                    Iter$786$173277 = NULL;
                    switch ($tmp3276) {
                        case -1: goto $l3306;
                    }
                    $l3306:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3308, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3307, $tmp3308);
                panda$core$MutableString$append$panda$core$Char8(result3264, $tmp3307);
                panda$core$String* $tmp3311 = panda$core$MutableString$finish$R$panda$core$String(result3264);
                $tmp3310 = $tmp3311;
                $tmp3309 = $tmp3310;
                $returnValue2595 = $tmp3309;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3309));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3310));
                $tmp3263 = 0;
                goto $l3261;
                $l3312:;
                $tmp2586 = 28;
                goto $l2584;
                $l3313:;
                return $returnValue2595;
            }
            $l3261:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3264));
            result3264 = NULL;
            switch ($tmp3263) {
                case 0: goto $l3312;
            }
            $l3315:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3316, 24);
        panda$core$Bit $tmp3317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3316);
        if ($tmp3317.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3319 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            value3318 = *$tmp3319;
            panda$collections$ImmutableArray** $tmp3321 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 24));
            whens3320 = *$tmp3321;
            panda$collections$ImmutableArray** $tmp3323 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 32));
            other3322 = *$tmp3323;
            int $tmp3326;
            {
                panda$core$MutableString* $tmp3330 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3333, ((panda$core$Object*) value3318));
                $tmp3332 = $tmp3334;
                panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, &$s3335);
                $tmp3331 = $tmp3336;
                panda$core$MutableString$init$panda$core$String($tmp3330, $tmp3331);
                $tmp3329 = $tmp3330;
                $tmp3328 = $tmp3329;
                result3327 = $tmp3328;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3328));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3331));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3332));
                {
                    int $tmp3339;
                    {
                        ITable* $tmp3343 = ((panda$collections$Iterable*) whens3320)->$class->itable;
                        while ($tmp3343->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3343 = $tmp3343->next;
                        }
                        $fn3345 $tmp3344 = $tmp3343->methods[0];
                        panda$collections$Iterator* $tmp3346 = $tmp3344(((panda$collections$Iterable*) whens3320));
                        $tmp3342 = $tmp3346;
                        $tmp3341 = $tmp3342;
                        Iter$793$173340 = $tmp3341;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3341));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3342));
                        $l3347:;
                        ITable* $tmp3350 = Iter$793$173340->$class->itable;
                        while ($tmp3350->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3350 = $tmp3350->next;
                        }
                        $fn3352 $tmp3351 = $tmp3350->methods[0];
                        panda$core$Bit $tmp3353 = $tmp3351(Iter$793$173340);
                        panda$core$Bit $tmp3354 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3353);
                        bool $tmp3349 = $tmp3354.value;
                        if (!$tmp3349) goto $l3348;
                        {
                            int $tmp3357;
                            {
                                ITable* $tmp3361 = Iter$793$173340->$class->itable;
                                while ($tmp3361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3361 = $tmp3361->next;
                                }
                                $fn3363 $tmp3362 = $tmp3361->methods[1];
                                panda$core$Object* $tmp3364 = $tmp3362(Iter$793$173340);
                                $tmp3360 = $tmp3364;
                                $tmp3359 = ((org$pandalanguage$pandac$IRNode*) $tmp3360);
                                w3358 = $tmp3359;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3359));
                                panda$core$Panda$unref$panda$core$Object($tmp3360);
                                panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w3358), &$s3366);
                                $tmp3365 = $tmp3367;
                                panda$core$MutableString$append$panda$core$String(result3327, $tmp3365);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3365));
                            }
                            $tmp3357 = -1;
                            goto $l3355;
                            $l3355:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w3358));
                            w3358 = NULL;
                            switch ($tmp3357) {
                                case -1: goto $l3368;
                            }
                            $l3368:;
                        }
                        goto $l3347;
                        $l3348:;
                    }
                    $tmp3339 = -1;
                    goto $l3337;
                    $l3337:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$793$173340));
                    Iter$793$173340 = NULL;
                    switch ($tmp3339) {
                        case -1: goto $l3369;
                    }
                    $l3369:;
                }
                if (((panda$core$Bit) { other3322 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result3327, &$s3370);
                    {
                        int $tmp3373;
                        {
                            ITable* $tmp3377 = ((panda$collections$Iterable*) other3322)->$class->itable;
                            while ($tmp3377->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp3377 = $tmp3377->next;
                            }
                            $fn3379 $tmp3378 = $tmp3377->methods[0];
                            panda$collections$Iterator* $tmp3380 = $tmp3378(((panda$collections$Iterable*) other3322));
                            $tmp3376 = $tmp3380;
                            $tmp3375 = $tmp3376;
                            Iter$798$213374 = $tmp3375;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3375));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3376));
                            $l3381:;
                            ITable* $tmp3384 = Iter$798$213374->$class->itable;
                            while ($tmp3384->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp3384 = $tmp3384->next;
                            }
                            $fn3386 $tmp3385 = $tmp3384->methods[0];
                            panda$core$Bit $tmp3387 = $tmp3385(Iter$798$213374);
                            panda$core$Bit $tmp3388 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3387);
                            bool $tmp3383 = $tmp3388.value;
                            if (!$tmp3383) goto $l3382;
                            {
                                int $tmp3391;
                                {
                                    ITable* $tmp3395 = Iter$798$213374->$class->itable;
                                    while ($tmp3395->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp3395 = $tmp3395->next;
                                    }
                                    $fn3397 $tmp3396 = $tmp3395->methods[1];
                                    panda$core$Object* $tmp3398 = $tmp3396(Iter$798$213374);
                                    $tmp3394 = $tmp3398;
                                    $tmp3393 = ((org$pandalanguage$pandac$IRNode*) $tmp3394);
                                    s3392 = $tmp3393;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3393));
                                    panda$core$Panda$unref$panda$core$Object($tmp3394);
                                    panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3392), &$s3400);
                                    $tmp3399 = $tmp3401;
                                    panda$core$MutableString$append$panda$core$String(result3327, $tmp3399);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3399));
                                }
                                $tmp3391 = -1;
                                goto $l3389;
                                $l3389:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3392));
                                s3392 = NULL;
                                switch ($tmp3391) {
                                    case -1: goto $l3402;
                                }
                                $l3402:;
                            }
                            goto $l3381;
                            $l3382:;
                        }
                        $tmp3373 = -1;
                        goto $l3371;
                        $l3371:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$798$213374));
                        Iter$798$213374 = NULL;
                        switch ($tmp3373) {
                            case -1: goto $l3403;
                        }
                        $l3403:;
                    }
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3405, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3404, $tmp3405);
                panda$core$MutableString$append$panda$core$Char8(result3327, $tmp3404);
                panda$core$String* $tmp3408 = panda$core$MutableString$finish$R$panda$core$String(result3327);
                $tmp3407 = $tmp3408;
                $tmp3406 = $tmp3407;
                $returnValue2595 = $tmp3406;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3406));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3407));
                $tmp3326 = 0;
                goto $l3324;
                $l3409:;
                $tmp2586 = 29;
                goto $l2584;
                $l3410:;
                return $returnValue2595;
            }
            $l3324:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3327));
            result3327 = NULL;
            switch ($tmp3326) {
                case 0: goto $l3409;
            }
            $l3412:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3413, 25);
        panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3413);
        if ($tmp3414.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3416 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            target3415 = *$tmp3416;
            org$pandalanguage$pandac$MethodRef** $tmp3418 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$682_92587->$data + 32));
            m3417 = *$tmp3418;
            if (((panda$core$Bit) { target3415 != NULL }).value) {
            {
                panda$core$String* $tmp3425 = (($fn3424) target3415->$class->vtable[0])(target3415);
                $tmp3423 = $tmp3425;
                panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3426);
                $tmp3422 = $tmp3427;
                panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3422, ((org$pandalanguage$pandac$Symbol*) m3417->value)->name);
                $tmp3421 = $tmp3428;
                panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3421, &$s3429);
                $tmp3420 = $tmp3430;
                $tmp3419 = $tmp3420;
                $returnValue2595 = $tmp3419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3421));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3423));
                $tmp2586 = 30;
                goto $l2584;
                $l3431:;
                return $returnValue2595;
            }
            }
            $tmp3433 = ((org$pandalanguage$pandac$Symbol*) m3417->value)->name;
            $returnValue2595 = $tmp3433;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3433));
            $tmp2586 = 31;
            goto $l2584;
            $l3434:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3436, 26);
        panda$core$Bit $tmp3437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3436);
        if ($tmp3437.value) {
        {
            panda$core$UInt64* $tmp3439 = ((panda$core$UInt64*) ((char*) $match$682_92587->$data + 24));
            value3438 = *$tmp3439;
            panda$core$UInt64$wrapper* $tmp3444;
            $tmp3444 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp3444->value = value3438;
            $tmp3443 = ((panda$core$Object*) $tmp3444);
            panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3442, $tmp3443);
            $tmp3441 = $tmp3445;
            $tmp3440 = $tmp3441;
            $returnValue2595 = $tmp3440;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3440));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3441));
            panda$core$Panda$unref$panda$core$Object($tmp3443);
            $tmp2586 = 32;
            goto $l2584;
            $l3446:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3448, 27);
        panda$core$Bit $tmp3449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3448);
        if ($tmp3449.value) {
        {
            $tmp3450 = &$s3451;
            $returnValue2595 = $tmp3450;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3450));
            $tmp2586 = 33;
            goto $l2584;
            $l3452:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3454, 28);
        panda$core$Bit $tmp3455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3454);
        if ($tmp3455.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp3457 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$682_92587->$data + 16));
            op3456 = *$tmp3457;
            org$pandalanguage$pandac$IRNode** $tmp3459 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            base3458 = *$tmp3459;
            panda$core$String* $tmp3465 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String(op3456);
            $tmp3464 = $tmp3465;
            panda$core$String* $tmp3467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3464, &$s3466);
            $tmp3463 = $tmp3467;
            panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3463, ((panda$core$Object*) base3458));
            $tmp3462 = $tmp3468;
            panda$core$String* $tmp3470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3462, &$s3469);
            $tmp3461 = $tmp3470;
            $tmp3460 = $tmp3461;
            $returnValue2595 = $tmp3460;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3460));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3461));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3462));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3463));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3464));
            $tmp2586 = 34;
            goto $l2584;
            $l3471:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3473, 29);
        panda$core$Bit $tmp3474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3473);
        if ($tmp3474.value) {
        {
            panda$core$String** $tmp3476 = ((panda$core$String**) ((char*) $match$682_92587->$data + 16));
            label3475 = *$tmp3476;
            org$pandalanguage$pandac$IRNode** $tmp3478 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            target3477 = *$tmp3478;
            org$pandalanguage$pandac$IRNode** $tmp3480 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 32));
            list3479 = *$tmp3480;
            panda$collections$ImmutableArray** $tmp3482 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 40));
            statements3481 = *$tmp3482;
            int $tmp3485;
            {
                panda$core$MutableString* $tmp3489 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3489);
                $tmp3488 = $tmp3489;
                $tmp3487 = $tmp3488;
                result3486 = $tmp3487;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3487));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3488));
                if (((panda$core$Bit) { label3475 != NULL }).value) {
                {
                    panda$core$String* $tmp3492 = panda$core$String$convert$R$panda$core$String(label3475);
                    $tmp3491 = $tmp3492;
                    panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, &$s3493);
                    $tmp3490 = $tmp3494;
                    panda$core$MutableString$append$panda$core$String(result3486, $tmp3490);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3490));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3491));
                }
                }
                panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3499, ((panda$core$Object*) target3477));
                $tmp3498 = $tmp3500;
                panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3498, &$s3501);
                $tmp3497 = $tmp3502;
                panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3497, ((panda$core$Object*) list3479));
                $tmp3496 = $tmp3503;
                panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, &$s3504);
                $tmp3495 = $tmp3505;
                panda$core$MutableString$append$panda$core$String(result3486, $tmp3495);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3498));
                {
                    int $tmp3508;
                    {
                        ITable* $tmp3512 = ((panda$collections$Iterable*) statements3481)->$class->itable;
                        while ($tmp3512->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3512 = $tmp3512->next;
                        }
                        $fn3514 $tmp3513 = $tmp3512->methods[0];
                        panda$collections$Iterator* $tmp3515 = $tmp3513(((panda$collections$Iterable*) statements3481));
                        $tmp3511 = $tmp3515;
                        $tmp3510 = $tmp3511;
                        Iter$821$173509 = $tmp3510;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3510));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3511));
                        $l3516:;
                        ITable* $tmp3519 = Iter$821$173509->$class->itable;
                        while ($tmp3519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3519 = $tmp3519->next;
                        }
                        $fn3521 $tmp3520 = $tmp3519->methods[0];
                        panda$core$Bit $tmp3522 = $tmp3520(Iter$821$173509);
                        panda$core$Bit $tmp3523 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3522);
                        bool $tmp3518 = $tmp3523.value;
                        if (!$tmp3518) goto $l3517;
                        {
                            int $tmp3526;
                            {
                                ITable* $tmp3530 = Iter$821$173509->$class->itable;
                                while ($tmp3530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3530 = $tmp3530->next;
                                }
                                $fn3532 $tmp3531 = $tmp3530->methods[1];
                                panda$core$Object* $tmp3533 = $tmp3531(Iter$821$173509);
                                $tmp3529 = $tmp3533;
                                $tmp3528 = ((org$pandalanguage$pandac$IRNode*) $tmp3529);
                                s3527 = $tmp3528;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3528));
                                panda$core$Panda$unref$panda$core$Object($tmp3529);
                                panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3527), &$s3535);
                                $tmp3534 = $tmp3536;
                                panda$core$MutableString$append$panda$core$String(result3486, $tmp3534);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3534));
                            }
                            $tmp3526 = -1;
                            goto $l3524;
                            $l3524:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3527));
                            s3527 = NULL;
                            switch ($tmp3526) {
                                case -1: goto $l3537;
                            }
                            $l3537:;
                        }
                        goto $l3516;
                        $l3517:;
                    }
                    $tmp3508 = -1;
                    goto $l3506;
                    $l3506:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$821$173509));
                    Iter$821$173509 = NULL;
                    switch ($tmp3508) {
                        case -1: goto $l3538;
                    }
                    $l3538:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp3540, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp3539, $tmp3540);
                panda$core$MutableString$append$panda$core$Char8(result3486, $tmp3539);
                panda$core$String* $tmp3543 = panda$core$MutableString$finish$R$panda$core$String(result3486);
                $tmp3542 = $tmp3543;
                $tmp3541 = $tmp3542;
                $returnValue2595 = $tmp3541;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3541));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3542));
                $tmp3485 = 0;
                goto $l3483;
                $l3544:;
                $tmp2586 = 35;
                goto $l2584;
                $l3545:;
                return $returnValue2595;
            }
            $l3483:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3486));
            result3486 = NULL;
            switch ($tmp3485) {
                case 0: goto $l3544;
            }
            $l3547:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3548, 30);
        panda$core$Bit $tmp3549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3548);
        if ($tmp3549.value) {
        {
            panda$core$Real64* $tmp3551 = ((panda$core$Real64*) ((char*) $match$682_92587->$data + 24));
            value3550 = *$tmp3551;
            panda$core$String* $tmp3554 = panda$core$Real64$convert$R$panda$core$String(value3550);
            $tmp3553 = $tmp3554;
            $tmp3552 = $tmp3553;
            $returnValue2595 = $tmp3552;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3552));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3553));
            $tmp2586 = 36;
            goto $l2584;
            $l3555:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3557, 31);
        panda$core$Bit $tmp3558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3557);
        if ($tmp3558.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3560 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            value3559 = *$tmp3560;
            if (((panda$core$Bit) { value3559 != NULL }).value) {
            {
                panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3564, ((panda$core$Object*) value3559));
                $tmp3563 = $tmp3565;
                panda$core$String* $tmp3567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3563, &$s3566);
                $tmp3562 = $tmp3567;
                $tmp3561 = $tmp3562;
                $returnValue2595 = $tmp3561;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3561));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3562));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3563));
                $tmp2586 = 37;
                goto $l2584;
                $l3568:;
                return $returnValue2595;
            }
            }
            $tmp3570 = &$s3571;
            $returnValue2595 = $tmp3570;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3570));
            $tmp2586 = 38;
            goto $l2584;
            $l3572:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3574, 32);
        panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3574);
        if ($tmp3575.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3577 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92587->$data + 16));
            type3576 = *$tmp3577;
            panda$core$Int64* $tmp3579 = ((panda$core$Int64*) ((char*) $match$682_92587->$data + 24));
            id3578 = *$tmp3579;
            panda$core$Int64$wrapper* $tmp3585;
            $tmp3585 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3585->value = id3578;
            $tmp3584 = ((panda$core$Object*) $tmp3585);
            panda$core$String* $tmp3586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3583, $tmp3584);
            $tmp3582 = $tmp3586;
            panda$core$String* $tmp3588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3582, &$s3587);
            $tmp3581 = $tmp3588;
            $tmp3580 = $tmp3581;
            $returnValue2595 = $tmp3580;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3580));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3581));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3582));
            panda$core$Panda$unref$panda$core$Object($tmp3584);
            $tmp2586 = 39;
            goto $l2584;
            $l3589:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3591, 33);
        panda$core$Bit $tmp3592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3591);
        if ($tmp3592.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3594 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 0));
            base3593 = *$tmp3594;
            panda$core$Int64* $tmp3596 = ((panda$core$Int64*) ((char*) $match$682_92587->$data + 8));
            id3595 = *$tmp3596;
            panda$core$Int64$wrapper* $tmp3604;
            $tmp3604 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp3604->value = id3595;
            $tmp3603 = ((panda$core$Object*) $tmp3604);
            panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3602, $tmp3603);
            $tmp3601 = $tmp3605;
            panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, &$s3606);
            $tmp3600 = $tmp3607;
            panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3600, ((panda$core$Object*) base3593));
            $tmp3599 = $tmp3608;
            panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, &$s3609);
            $tmp3598 = $tmp3610;
            $tmp3597 = $tmp3598;
            $returnValue2595 = $tmp3597;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3597));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3598));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3599));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3600));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3601));
            panda$core$Panda$unref$panda$core$Object($tmp3603);
            $tmp2586 = 40;
            goto $l2584;
            $l3611:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3613, 34);
        panda$core$Bit $tmp3614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3613);
        if ($tmp3614.value) {
        {
            $tmp3615 = &$s3616;
            $returnValue2595 = $tmp3615;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3615));
            $tmp2586 = 41;
            goto $l2584;
            $l3617:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3619, 35);
        panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3619);
        if ($tmp3620.value) {
        {
            $tmp3621 = &$s3622;
            $returnValue2595 = $tmp3621;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3621));
            $tmp2586 = 42;
            goto $l2584;
            $l3623:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3625, 36);
        panda$core$Bit $tmp3626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3625);
        if ($tmp3626.value) {
        {
            panda$core$String** $tmp3628 = ((panda$core$String**) ((char*) $match$682_92587->$data + 16));
            str3627 = *$tmp3628;
            panda$core$String* $tmp3632 = panda$core$String$format$panda$core$String$R$panda$core$String(str3627, &$s3631);
            $tmp3630 = $tmp3632;
            $tmp3629 = $tmp3630;
            $returnValue2595 = $tmp3629;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
            $tmp2586 = 43;
            goto $l2584;
            $l3633:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3635, 37);
        panda$core$Bit $tmp3636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3635);
        if ($tmp3636.value) {
        {
            $tmp3637 = &$s3638;
            $returnValue2595 = $tmp3637;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3637));
            $tmp2586 = 44;
            goto $l2584;
            $l3639:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3641, 38);
        panda$core$Bit $tmp3642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3641);
        if ($tmp3642.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3644 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            test3643 = *$tmp3644;
            org$pandalanguage$pandac$IRNode** $tmp3646 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            ifTrue3645 = *$tmp3646;
            org$pandalanguage$pandac$IRNode** $tmp3648 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 32));
            ifFalse3647 = *$tmp3648;
            panda$core$String* $tmp3657 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3656, ((panda$core$Object*) test3643));
            $tmp3655 = $tmp3657;
            panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3655, &$s3658);
            $tmp3654 = $tmp3659;
            panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3654, ((panda$core$Object*) ifTrue3645));
            $tmp3653 = $tmp3660;
            panda$core$String* $tmp3662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3653, &$s3661);
            $tmp3652 = $tmp3662;
            panda$core$String* $tmp3663 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3652, ((panda$core$Object*) ifFalse3647));
            $tmp3651 = $tmp3663;
            panda$core$String* $tmp3665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3651, &$s3664);
            $tmp3650 = $tmp3665;
            $tmp3649 = $tmp3650;
            $returnValue2595 = $tmp3649;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3649));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3650));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3651));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3652));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3653));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3654));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3655));
            $tmp2586 = 45;
            goto $l2584;
            $l3666:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3668, 39);
        panda$core$Bit $tmp3669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3668);
        if ($tmp3669.value) {
        {
            org$pandalanguage$pandac$Type** $tmp3671 = ((org$pandalanguage$pandac$Type**) ((char*) $match$682_92587->$data + 16));
            type3670 = *$tmp3671;
            panda$core$String* $tmp3674 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type3670);
            $tmp3673 = $tmp3674;
            $tmp3672 = $tmp3673;
            $returnValue2595 = $tmp3672;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3672));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3673));
            $tmp2586 = 46;
            goto $l2584;
            $l3675:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3677, 40);
        panda$core$Bit $tmp3678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3677);
        if ($tmp3678.value) {
        {
            panda$core$String** $tmp3680 = ((panda$core$String**) ((char*) $match$682_92587->$data + 16));
            name3679 = *$tmp3680;
            $tmp3681 = name3679;
            $returnValue2595 = $tmp3681;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3681));
            $tmp2586 = 47;
            goto $l2584;
            $l3682:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3684, 41);
        panda$core$Bit $tmp3685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3684);
        if ($tmp3685.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3687 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            base3686 = *$tmp3687;
            panda$collections$ImmutableArray** $tmp3689 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 32));
            args3688 = *$tmp3689;
            panda$core$String* $tmp3696 = (($fn3695) base3686->$class->vtable[0])(base3686);
            $tmp3694 = $tmp3696;
            panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3694, &$s3697);
            $tmp3693 = $tmp3698;
            ITable* $tmp3700 = ((panda$collections$CollectionView*) args3688)->$class->itable;
            while ($tmp3700->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3700 = $tmp3700->next;
            }
            $fn3702 $tmp3701 = $tmp3700->methods[1];
            panda$core$String* $tmp3703 = $tmp3701(((panda$collections$CollectionView*) args3688));
            $tmp3699 = $tmp3703;
            panda$core$String* $tmp3704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3693, $tmp3699);
            $tmp3692 = $tmp3704;
            panda$core$String* $tmp3706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3692, &$s3705);
            $tmp3691 = $tmp3706;
            $tmp3690 = $tmp3691;
            $returnValue2595 = $tmp3690;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3690));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3691));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3692));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3699));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3694));
            $tmp2586 = 48;
            goto $l2584;
            $l3707:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3709, 42);
        panda$core$Bit $tmp3710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3709);
        if ($tmp3710.value) {
        {
            panda$collections$ImmutableArray** $tmp3712 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 16));
            params3711 = *$tmp3712;
            org$pandalanguage$pandac$ASTNode** $tmp3714 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$682_92587->$data + 24));
            body3713 = *$tmp3714;
            ITable* $tmp3722 = ((panda$collections$CollectionView*) params3711)->$class->itable;
            while ($tmp3722->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3722 = $tmp3722->next;
            }
            $fn3724 $tmp3723 = $tmp3722->methods[1];
            panda$core$String* $tmp3725 = $tmp3723(((panda$collections$CollectionView*) params3711));
            $tmp3721 = $tmp3725;
            panda$core$String* $tmp3726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3720, $tmp3721);
            $tmp3719 = $tmp3726;
            panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3719, &$s3727);
            $tmp3718 = $tmp3728;
            panda$core$String* $tmp3729 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3718, ((panda$core$Object*) body3713));
            $tmp3717 = $tmp3729;
            panda$core$String* $tmp3731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3717, &$s3730);
            $tmp3716 = $tmp3731;
            $tmp3715 = $tmp3716;
            $returnValue2595 = $tmp3715;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3715));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3716));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3717));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3718));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3719));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3721));
            $tmp2586 = 49;
            goto $l2584;
            $l3732:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3734, 43);
        panda$core$Bit $tmp3735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3734);
        if ($tmp3735.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3737 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            target3736 = *$tmp3737;
            panda$collections$ImmutableArray** $tmp3739 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 32));
            methods3738 = *$tmp3739;
            panda$collections$ImmutableArray** $tmp3741 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 40));
            args3740 = *$tmp3741;
            if (((panda$core$Bit) { target3736 != NULL }).value) {
            {
                panda$core$String* $tmp3750 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3749, ((panda$core$Object*) target3736));
                $tmp3748 = $tmp3750;
                panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3748, &$s3751);
                $tmp3747 = $tmp3752;
                panda$core$Int64$init$builtin_int64(&$tmp3754, 0);
                panda$core$Object* $tmp3755 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3738, $tmp3754);
                $tmp3753 = $tmp3755;
                panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3747, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3753)->value)->name);
                $tmp3746 = $tmp3756;
                panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3746, &$s3757);
                $tmp3745 = $tmp3758;
                ITable* $tmp3760 = ((panda$collections$CollectionView*) args3740)->$class->itable;
                while ($tmp3760->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3760 = $tmp3760->next;
                }
                $fn3762 $tmp3761 = $tmp3760->methods[1];
                panda$core$String* $tmp3763 = $tmp3761(((panda$collections$CollectionView*) args3740));
                $tmp3759 = $tmp3763;
                panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, $tmp3759);
                $tmp3744 = $tmp3764;
                panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3744, &$s3765);
                $tmp3743 = $tmp3766;
                $tmp3742 = $tmp3743;
                $returnValue2595 = $tmp3742;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3746));
                panda$core$Panda$unref$panda$core$Object($tmp3753);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3748));
                $tmp2586 = 50;
                goto $l2584;
                $l3767:;
                return $returnValue2595;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3776, 0);
                panda$core$Object* $tmp3777 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3738, $tmp3776);
                $tmp3775 = $tmp3777;
                panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3774, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3775)->value)->name);
                $tmp3773 = $tmp3778;
                panda$core$String* $tmp3780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, &$s3779);
                $tmp3772 = $tmp3780;
                ITable* $tmp3782 = ((panda$collections$CollectionView*) args3740)->$class->itable;
                while ($tmp3782->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3782 = $tmp3782->next;
                }
                $fn3784 $tmp3783 = $tmp3782->methods[1];
                panda$core$String* $tmp3785 = $tmp3783(((panda$collections$CollectionView*) args3740));
                $tmp3781 = $tmp3785;
                panda$core$String* $tmp3786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, $tmp3781);
                $tmp3771 = $tmp3786;
                panda$core$String* $tmp3788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3787);
                $tmp3770 = $tmp3788;
                $tmp3769 = $tmp3770;
                $returnValue2595 = $tmp3769;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3769));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3771));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3772));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3773));
                panda$core$Panda$unref$panda$core$Object($tmp3775);
                $tmp2586 = 51;
                goto $l2584;
                $l3789:;
                return $returnValue2595;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3791, 44);
        panda$core$Bit $tmp3792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3791);
        if ($tmp3792.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3794 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            target3793 = *$tmp3794;
            panda$collections$ImmutableArray** $tmp3796 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 24));
            methods3795 = *$tmp3796;
            if (((panda$core$Bit) { target3793 != NULL }).value) {
            {
                panda$core$String* $tmp3803 = (($fn3802) target3793->$class->vtable[0])(target3793);
                $tmp3801 = $tmp3803;
                panda$core$String* $tmp3805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3801, &$s3804);
                $tmp3800 = $tmp3805;
                panda$core$Int64$init$builtin_int64(&$tmp3807, 0);
                panda$core$Object* $tmp3808 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3795, $tmp3807);
                $tmp3806 = $tmp3808;
                panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3806)->value)->name);
                $tmp3799 = $tmp3809;
                panda$core$String* $tmp3811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, &$s3810);
                $tmp3798 = $tmp3811;
                $tmp3797 = $tmp3798;
                $returnValue2595 = $tmp3797;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3797));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3799));
                panda$core$Panda$unref$panda$core$Object($tmp3806);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3801));
                $tmp2586 = 52;
                goto $l2584;
                $l3812:;
                return $returnValue2595;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp3818, 0);
                panda$core$Object* $tmp3819 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods3795, $tmp3818);
                $tmp3817 = $tmp3819;
                panda$core$String* $tmp3820 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp3817)->value)->name);
                $tmp3816 = $tmp3820;
                panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3816, &$s3821);
                $tmp3815 = $tmp3822;
                $tmp3814 = $tmp3815;
                $returnValue2595 = $tmp3814;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3814));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3815));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3816));
                panda$core$Panda$unref$panda$core$Object($tmp3817);
                $tmp2586 = 53;
                goto $l2584;
                $l3823:;
                return $returnValue2595;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3825, 45);
        panda$core$Bit $tmp3826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3825);
        if ($tmp3826.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp3828 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 16));
            start3827 = *$tmp3828;
            org$pandalanguage$pandac$IRNode** $tmp3830 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            end3829 = *$tmp3830;
            panda$core$Bit* $tmp3832 = ((panda$core$Bit*) ((char*) $match$682_92587->$data + 32));
            inclusive3831 = *$tmp3832;
            org$pandalanguage$pandac$IRNode** $tmp3834 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 33));
            step3833 = *$tmp3834;
            int $tmp3837;
            {
                panda$core$MutableString* $tmp3841 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3841);
                $tmp3840 = $tmp3841;
                $tmp3839 = $tmp3840;
                result3838 = $tmp3839;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3840));
                if (((panda$core$Bit) { start3827 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result3838, ((panda$core$Object*) start3827));
                }
                }
                if (inclusive3831.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result3838, &$s3842);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result3838, &$s3843);
                }
                }
                if (((panda$core$Bit) { end3829 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result3838, ((panda$core$Object*) end3829));
                }
                }
                if (((panda$core$Bit) { step3833 != NULL }).value) {
                {
                    panda$core$String* $tmp3847 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3846, ((panda$core$Object*) step3833));
                    $tmp3845 = $tmp3847;
                    panda$core$String* $tmp3849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3845, &$s3848);
                    $tmp3844 = $tmp3849;
                    panda$core$MutableString$append$panda$core$String(result3838, $tmp3844);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3844));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3845));
                }
                }
                panda$core$String* $tmp3852 = panda$core$MutableString$finish$R$panda$core$String(result3838);
                $tmp3851 = $tmp3852;
                $tmp3850 = $tmp3851;
                $returnValue2595 = $tmp3850;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3850));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3851));
                $tmp3837 = 0;
                goto $l3835;
                $l3853:;
                $tmp2586 = 54;
                goto $l2584;
                $l3854:;
                return $returnValue2595;
            }
            $l3835:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3838));
            result3838 = NULL;
            switch ($tmp3837) {
                case 0: goto $l3853;
            }
            $l3856:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3857, 46);
        panda$core$Bit $tmp3858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3857);
        if ($tmp3858.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp3860 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$682_92587->$data + 16));
            kind3859 = *$tmp3860;
            panda$collections$ImmutableArray** $tmp3862 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 24));
            decls3861 = *$tmp3862;
            int $tmp3865;
            {
                panda$core$MutableString* $tmp3869 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3869);
                $tmp3868 = $tmp3869;
                $tmp3867 = $tmp3868;
                result3866 = $tmp3867;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3868));
                {
                    $match$889_173870 = kind3859;
                    panda$core$Int64$init$builtin_int64(&$tmp3871, 0);
                    panda$core$Bit $tmp3872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173870.$rawValue, $tmp3871);
                    if ($tmp3872.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3866, &$s3873);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3874, 1);
                    panda$core$Bit $tmp3875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173870.$rawValue, $tmp3874);
                    if ($tmp3875.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3866, &$s3876);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3877, 2);
                    panda$core$Bit $tmp3878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173870.$rawValue, $tmp3877);
                    if ($tmp3878.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3866, &$s3879);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp3880, 3);
                    panda$core$Bit $tmp3881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$889_173870.$rawValue, $tmp3880);
                    if ($tmp3881.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result3866, &$s3882);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp3884 = ((panda$collections$CollectionView*) decls3861)->$class->itable;
                while ($tmp3884->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp3884 = $tmp3884->next;
                }
                $fn3886 $tmp3885 = $tmp3884->methods[1];
                panda$core$String* $tmp3887 = $tmp3885(((panda$collections$CollectionView*) decls3861));
                $tmp3883 = $tmp3887;
                panda$core$MutableString$append$panda$core$String(result3866, $tmp3883);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3883));
                panda$core$String* $tmp3890 = panda$core$MutableString$finish$R$panda$core$String(result3866);
                $tmp3889 = $tmp3890;
                $tmp3888 = $tmp3889;
                $returnValue2595 = $tmp3888;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3888));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3889));
                $tmp3865 = 0;
                goto $l3863;
                $l3891:;
                $tmp2586 = 55;
                goto $l2584;
                $l3892:;
                return $returnValue2595;
            }
            $l3863:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3866));
            result3866 = NULL;
            switch ($tmp3865) {
                case 0: goto $l3891;
            }
            $l3894:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3895, 47);
        panda$core$Bit $tmp3896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3895);
        if ($tmp3896.value) {
        {
            panda$core$String** $tmp3898 = ((panda$core$String**) ((char*) $match$682_92587->$data + 16));
            name3897 = *$tmp3898;
            $tmp3899 = name3897;
            $returnValue2595 = $tmp3899;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3899));
            $tmp2586 = 56;
            goto $l2584;
            $l3900:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3902, 48);
        panda$core$Bit $tmp3903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3902);
        if ($tmp3903.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp3905 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$682_92587->$data + 16));
            variable3904 = *$tmp3905;
            panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) variable3904)->name, &$s3908);
            $tmp3907 = $tmp3909;
            $tmp3906 = $tmp3907;
            $returnValue2595 = $tmp3906;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3906));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3907));
            $tmp2586 = 57;
            goto $l2584;
            $l3910:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3912, 49);
        panda$core$Bit $tmp3913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3912);
        if ($tmp3913.value) {
        {
            panda$collections$ImmutableArray** $tmp3915 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 16));
            tests3914 = *$tmp3915;
            panda$collections$ImmutableArray** $tmp3917 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 24));
            statements3916 = *$tmp3917;
            ITable* $tmp3925 = ((panda$collections$CollectionView*) tests3914)->$class->itable;
            while ($tmp3925->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3925 = $tmp3925->next;
            }
            $fn3927 $tmp3926 = $tmp3925->methods[1];
            panda$core$String* $tmp3928 = $tmp3926(((panda$collections$CollectionView*) tests3914));
            $tmp3924 = $tmp3928;
            panda$core$String* $tmp3929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3923, $tmp3924);
            $tmp3922 = $tmp3929;
            panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3922, &$s3930);
            $tmp3921 = $tmp3931;
            ITable* $tmp3934 = ((panda$collections$CollectionView*) statements3916)->$class->itable;
            while ($tmp3934->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp3934 = $tmp3934->next;
            }
            $fn3936 $tmp3935 = $tmp3934->methods[2];
            panda$core$String* $tmp3937 = $tmp3935(((panda$collections$CollectionView*) statements3916), &$s3933);
            $tmp3932 = $tmp3937;
            panda$core$String* $tmp3938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3921, $tmp3932);
            $tmp3920 = $tmp3938;
            panda$core$String* $tmp3940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3920, &$s3939);
            $tmp3919 = $tmp3940;
            $tmp3918 = $tmp3919;
            $returnValue2595 = $tmp3918;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3918));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3919));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3920));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3921));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3922));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3924));
            $tmp2586 = 58;
            goto $l2584;
            $l3941:;
            return $returnValue2595;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp3943, 50);
        panda$core$Bit $tmp3944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$682_92587->$rawValue, $tmp3943);
        if ($tmp3944.value) {
        {
            panda$core$String** $tmp3946 = ((panda$core$String**) ((char*) $match$682_92587->$data + 16));
            label3945 = *$tmp3946;
            org$pandalanguage$pandac$IRNode** $tmp3948 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$682_92587->$data + 24));
            test3947 = *$tmp3948;
            panda$collections$ImmutableArray** $tmp3950 = ((panda$collections$ImmutableArray**) ((char*) $match$682_92587->$data + 32));
            statements3949 = *$tmp3950;
            int $tmp3953;
            {
                panda$core$MutableString* $tmp3957 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp3957);
                $tmp3956 = $tmp3957;
                $tmp3955 = $tmp3956;
                result3954 = $tmp3955;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3956));
                if (((panda$core$Bit) { label3945 != NULL }).value) {
                {
                    panda$core$String* $tmp3960 = panda$core$String$convert$R$panda$core$String(label3945);
                    $tmp3959 = $tmp3960;
                    panda$core$String* $tmp3962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3959, &$s3961);
                    $tmp3958 = $tmp3962;
                    panda$core$MutableString$append$panda$core$String(result3954, $tmp3958);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3958));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3959));
                }
                }
                panda$core$String* $tmp3966 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3965, ((panda$core$Object*) test3947));
                $tmp3964 = $tmp3966;
                panda$core$String* $tmp3968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3964, &$s3967);
                $tmp3963 = $tmp3968;
                panda$core$MutableString$append$panda$core$String(result3954, $tmp3963);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3963));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3964));
                {
                    int $tmp3971;
                    {
                        ITable* $tmp3975 = ((panda$collections$Iterable*) statements3949)->$class->itable;
                        while ($tmp3975->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp3975 = $tmp3975->next;
                        }
                        $fn3977 $tmp3976 = $tmp3975->methods[0];
                        panda$collections$Iterator* $tmp3978 = $tmp3976(((panda$collections$Iterable*) statements3949));
                        $tmp3974 = $tmp3978;
                        $tmp3973 = $tmp3974;
                        Iter$909$173972 = $tmp3973;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3973));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3974));
                        $l3979:;
                        ITable* $tmp3982 = Iter$909$173972->$class->itable;
                        while ($tmp3982->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp3982 = $tmp3982->next;
                        }
                        $fn3984 $tmp3983 = $tmp3982->methods[0];
                        panda$core$Bit $tmp3985 = $tmp3983(Iter$909$173972);
                        panda$core$Bit $tmp3986 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3985);
                        bool $tmp3981 = $tmp3986.value;
                        if (!$tmp3981) goto $l3980;
                        {
                            int $tmp3989;
                            {
                                ITable* $tmp3993 = Iter$909$173972->$class->itable;
                                while ($tmp3993->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp3993 = $tmp3993->next;
                                }
                                $fn3995 $tmp3994 = $tmp3993->methods[1];
                                panda$core$Object* $tmp3996 = $tmp3994(Iter$909$173972);
                                $tmp3992 = $tmp3996;
                                $tmp3991 = ((org$pandalanguage$pandac$IRNode*) $tmp3992);
                                s3990 = $tmp3991;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3991));
                                panda$core$Panda$unref$panda$core$Object($tmp3992);
                                panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s3990), &$s3998);
                                $tmp3997 = $tmp3999;
                                panda$core$MutableString$append$panda$core$String(result3954, $tmp3997);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3997));
                            }
                            $tmp3989 = -1;
                            goto $l3987;
                            $l3987:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s3990));
                            s3990 = NULL;
                            switch ($tmp3989) {
                                case -1: goto $l4000;
                            }
                            $l4000:;
                        }
                        goto $l3979;
                        $l3980:;
                    }
                    $tmp3971 = -1;
                    goto $l3969;
                    $l3969:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$909$173972));
                    Iter$909$173972 = NULL;
                    switch ($tmp3971) {
                        case -1: goto $l4001;
                    }
                    $l4001:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp4003, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp4002, $tmp4003);
                panda$core$MutableString$append$panda$core$Char8(result3954, $tmp4002);
                panda$core$String* $tmp4006 = panda$core$MutableString$finish$R$panda$core$String(result3954);
                $tmp4005 = $tmp4006;
                $tmp4004 = $tmp4005;
                $returnValue2595 = $tmp4004;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4005));
                $tmp3953 = 0;
                goto $l3951;
                $l4007:;
                $tmp2586 = 59;
                goto $l2584;
                $l4008:;
                return $returnValue2595;
            }
            $l3951:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result3954));
            result3954 = NULL;
            switch ($tmp3953) {
                case 0: goto $l4007;
            }
            $l4010:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp4011, false);
            if ($tmp4011.value) goto $l4012; else goto $l4013;
            $l4013:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s4014, (panda$core$Int64) { 915 });
            abort();
            $l4012:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp2586 = -1;
    goto $l2584;
    $l2584:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
    switch ($tmp2586) {
        case 59: goto $l4008;
        case 33: goto $l3452;
        case 44: goto $l3639;
        case 45: goto $l3666;
        case 24: goto $l3217;
        case 47: goto $l3682;
        case 11: goto $l2875;
        case 10: goto $l2866;
        case 13: goto $l2938;
        case 49: goto $l3732;
        case 0: goto $l2608;
        case 58: goto $l3941;
        case 26: goto $l3240;
        case 57: goto $l3910;
        case 46: goto $l3675;
        case 16: goto $l2968;
        case 20: goto $l3106;
        case 38: goto $l3572;
        case 17: goto $l2996;
        case 1: goto $l2617;
        case 42: goto $l3623;
        case 23: goto $l3149;
        case 5: goto $l2714;
        case 48: goto $l3707;
        case 9: goto $l2846;
        case 25: goto $l3227;
        case 37: goto $l3568;
        case 51: goto $l3789;
        case 34: goto $l3471;
        case -1: goto $l4015;
        case 39: goto $l3589;
        case 14: goto $l2951;
        case 4: goto $l2661;
        case 35: goto $l3545;
        case 27: goto $l3253;
        case 18: goto $l3013;
        case 36: goto $l3555;
        case 2: goto $l2623;
        case 43: goto $l3633;
        case 40: goto $l3611;
        case 55: goto $l3892;
        case 28: goto $l3313;
        case 21: goto $l3126;
        case 50: goto $l3767;
        case 19: goto $l3079;
        case 15: goto $l2964;
        case 30: goto $l3431;
        case 41: goto $l3617;
        case 8: goto $l2822;
        case 56: goto $l3900;
        case 53: goto $l3823;
        case 6: goto $l2804;
        case 22: goto $l3146;
        case 12: goto $l2904;
        case 54: goto $l3854;
        case 32: goto $l3446;
        case 31: goto $l3434;
        case 3: goto $l2652;
        case 29: goto $l3410;
        case 7: goto $l2818;
        case 52: goto $l3812;
    }
    $l4015:;
    if (false) goto $l4016; else goto $l4017;
    $l4017:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s4018, (panda$core$Int64) { 681 }, &$s4019);
    abort();
    $l4016:;
    abort();
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_14026 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp4027;
    panda$core$Int64 $tmp4028;
    org$pandalanguage$pandac$Position _f04030;
    org$pandalanguage$pandac$IRNode* _f14032 = NULL;
    org$pandalanguage$pandac$IRNode* _f24034 = NULL;
    panda$core$Int64 $tmp4036;
    org$pandalanguage$pandac$Position _f04038;
    org$pandalanguage$pandac$Type* _f14040 = NULL;
    panda$core$Int64 $tmp4042;
    org$pandalanguage$pandac$Position _f04044;
    org$pandalanguage$pandac$Type* _f14046 = NULL;
    org$pandalanguage$pandac$IRNode* _f24048 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f34050;
    org$pandalanguage$pandac$IRNode* _f44052 = NULL;
    panda$core$Int64 $tmp4054;
    org$pandalanguage$pandac$Position _f04056;
    org$pandalanguage$pandac$Type* _f14058 = NULL;
    panda$core$Bit _f24060;
    panda$core$Int64 $tmp4062;
    org$pandalanguage$pandac$Position _f04064;
    panda$collections$ImmutableArray* _f14066 = NULL;
    panda$core$Int64 $tmp4068;
    org$pandalanguage$pandac$Position _f04070;
    panda$collections$ImmutableArray* _f14072 = NULL;
    panda$collections$ImmutableArray* _f24074 = NULL;
    panda$core$Int64 $tmp4076;
    org$pandalanguage$pandac$Position _f04078;
    panda$core$String* _f14080 = NULL;
    panda$core$Int64 $tmp4082;
    org$pandalanguage$pandac$Position _f04084;
    org$pandalanguage$pandac$Type* _f14086 = NULL;
    org$pandalanguage$pandac$MethodRef* _f24088 = NULL;
    panda$collections$ImmutableArray* _f34090 = NULL;
    panda$core$Int64 $tmp4092;
    org$pandalanguage$pandac$Position _f04094;
    org$pandalanguage$pandac$IRNode* _f14096 = NULL;
    org$pandalanguage$pandac$Type* _f24098 = NULL;
    panda$core$Bit _f34100;
    panda$core$Int64 $tmp4102;
    org$pandalanguage$pandac$Position _f04104;
    org$pandalanguage$pandac$Type* _f14106 = NULL;
    org$pandalanguage$pandac$ChoiceCase* _f24108 = NULL;
    panda$core$Int64 $tmp4110;
    org$pandalanguage$pandac$Position _f04112;
    org$pandalanguage$pandac$IRNode* _f14114 = NULL;
    org$pandalanguage$pandac$ChoiceCase* _f24116 = NULL;
    panda$core$Int64 _f34118;
    panda$core$Int64 $tmp4120;
    org$pandalanguage$pandac$Position _f04122;
    org$pandalanguage$pandac$Type* _f14124 = NULL;
    org$pandalanguage$pandac$IRNode* _f24126 = NULL;
    panda$core$Int64 $tmp4128;
    org$pandalanguage$pandac$Position _f04130;
    org$pandalanguage$pandac$Type* _f14132 = NULL;
    panda$core$Int64 $tmp4134;
    org$pandalanguage$pandac$Position _f04136;
    panda$core$String* _f14138 = NULL;
    panda$core$Int64 $tmp4140;
    org$pandalanguage$pandac$IRNode* _f04142 = NULL;
    org$pandalanguage$pandac$IRNode* _f14144 = NULL;
    panda$core$Int64 $tmp4146;
    org$pandalanguage$pandac$Position _f04148;
    panda$core$String* _f14150 = NULL;
    panda$collections$ImmutableArray* _f24152 = NULL;
    org$pandalanguage$pandac$IRNode* _f34154 = NULL;
    panda$core$Int64 $tmp4156;
    org$pandalanguage$pandac$IRNode* _f04158 = NULL;
    panda$collections$ImmutableArray* _f14160 = NULL;
    panda$core$Int64 $tmp4162;
    org$pandalanguage$pandac$IRNode* _f04164 = NULL;
    org$pandalanguage$pandac$IRNode* _f14166 = NULL;
    panda$core$Int64 $tmp4168;
    org$pandalanguage$pandac$Position _f04170;
    org$pandalanguage$pandac$Type* _f14172 = NULL;
    org$pandalanguage$pandac$IRNode* _f24174 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f34176 = NULL;
    panda$core$Int64 $tmp4178;
    org$pandalanguage$pandac$Position _f04180;
    org$pandalanguage$pandac$IRNode* _f14182 = NULL;
    panda$collections$ImmutableArray* _f24184 = NULL;
    org$pandalanguage$pandac$IRNode* _f34186 = NULL;
    panda$core$Int64 $tmp4188;
    org$pandalanguage$pandac$Position _f04190;
    org$pandalanguage$pandac$Type* _f14192 = NULL;
    panda$core$UInt64 _f24194;
    panda$core$Int64 $tmp4196;
    org$pandalanguage$pandac$Position _f04198;
    org$pandalanguage$pandac$IRNode* _f14200 = NULL;
    panda$core$Int64 $tmp4202;
    org$pandalanguage$pandac$Position _f04204;
    org$pandalanguage$pandac$IRNode* _f14206 = NULL;
    panda$core$Int64 $tmp4208;
    org$pandalanguage$pandac$Position _f04210;
    panda$core$String* _f14212 = NULL;
    panda$collections$ImmutableArray* _f24214 = NULL;
    panda$core$Int64 $tmp4216;
    org$pandalanguage$pandac$Position _f04218;
    org$pandalanguage$pandac$IRNode* _f14220 = NULL;
    panda$collections$ImmutableArray* _f24222 = NULL;
    panda$collections$ImmutableArray* _f34224 = NULL;
    panda$core$Int64 $tmp4226;
    org$pandalanguage$pandac$Position _f04228;
    org$pandalanguage$pandac$Type* _f14230 = NULL;
    org$pandalanguage$pandac$IRNode* _f24232 = NULL;
    org$pandalanguage$pandac$MethodRef* _f34234 = NULL;
    panda$core$Int64 $tmp4236;
    org$pandalanguage$pandac$Position _f04238;
    org$pandalanguage$pandac$Type* _f14240 = NULL;
    panda$core$UInt64 _f24242;
    panda$core$Int64 $tmp4244;
    org$pandalanguage$pandac$Position _f04246;
    org$pandalanguage$pandac$Type* _f14248 = NULL;
    panda$core$Int64 $tmp4250;
    org$pandalanguage$pandac$Position _f04252;
    org$pandalanguage$pandac$parser$Token$Kind _f14254;
    org$pandalanguage$pandac$IRNode* _f24256 = NULL;
    panda$core$Int64 $tmp4258;
    org$pandalanguage$pandac$Position _f04260;
    panda$core$String* _f14262 = NULL;
    org$pandalanguage$pandac$IRNode* _f24264 = NULL;
    org$pandalanguage$pandac$IRNode* _f34266 = NULL;
    panda$collections$ImmutableArray* _f44268 = NULL;
    panda$core$Int64 $tmp4270;
    org$pandalanguage$pandac$Position _f04272;
    org$pandalanguage$pandac$Type* _f14274 = NULL;
    panda$core$Real64 _f24276;
    panda$core$Int64 $tmp4278;
    org$pandalanguage$pandac$Position _f04280;
    org$pandalanguage$pandac$IRNode* _f14282 = NULL;
    panda$core$Int64 $tmp4284;
    org$pandalanguage$pandac$Position _f04286;
    org$pandalanguage$pandac$Type* _f14288 = NULL;
    panda$core$Int64 _f24290;
    panda$core$Int64 $tmp4292;
    org$pandalanguage$pandac$IRNode* _f04294 = NULL;
    panda$core$Int64 _f14296;
    panda$core$Int64 $tmp4298;
    org$pandalanguage$pandac$Position _f04300;
    org$pandalanguage$pandac$Type* _f14302 = NULL;
    panda$core$Int64 $tmp4304;
    org$pandalanguage$pandac$Position _f04306;
    org$pandalanguage$pandac$Type* _f14308 = NULL;
    panda$core$Int64 $tmp4310;
    org$pandalanguage$pandac$Position _f04312;
    panda$core$String* _f14314 = NULL;
    panda$core$Int64 $tmp4316;
    org$pandalanguage$pandac$Position _f04318;
    org$pandalanguage$pandac$Type* _f14320 = NULL;
    panda$core$Int64 $tmp4322;
    org$pandalanguage$pandac$Position _f04324;
    org$pandalanguage$pandac$IRNode* _f14326 = NULL;
    org$pandalanguage$pandac$IRNode* _f24328 = NULL;
    org$pandalanguage$pandac$IRNode* _f34330 = NULL;
    panda$core$Int64 $tmp4332;
    org$pandalanguage$pandac$Position _f04334;
    org$pandalanguage$pandac$Type* _f14336 = NULL;
    panda$core$Int64 $tmp4338;
    org$pandalanguage$pandac$Position _f04340;
    panda$core$String* _f14342 = NULL;
    panda$core$Int64 $tmp4344;
    org$pandalanguage$pandac$Position _f04346;
    org$pandalanguage$pandac$Type* _f14348 = NULL;
    org$pandalanguage$pandac$IRNode* _f24350 = NULL;
    panda$collections$ImmutableArray* _f34352 = NULL;
    panda$core$Int64 $tmp4354;
    org$pandalanguage$pandac$Position _f04356;
    panda$collections$ImmutableArray* _f14358 = NULL;
    org$pandalanguage$pandac$ASTNode* _f24360 = NULL;
    panda$core$Int64 $tmp4362;
    org$pandalanguage$pandac$Position _f04364;
    org$pandalanguage$pandac$Type* _f14366 = NULL;
    org$pandalanguage$pandac$IRNode* _f24368 = NULL;
    panda$collections$ImmutableArray* _f34370 = NULL;
    panda$collections$ImmutableArray* _f44372 = NULL;
    panda$core$Int64 $tmp4374;
    org$pandalanguage$pandac$Position _f04376;
    org$pandalanguage$pandac$IRNode* _f14378 = NULL;
    panda$collections$ImmutableArray* _f24380 = NULL;
    panda$core$Int64 $tmp4382;
    org$pandalanguage$pandac$Position _f04384;
    org$pandalanguage$pandac$IRNode* _f14386 = NULL;
    org$pandalanguage$pandac$IRNode* _f24388 = NULL;
    panda$core$Bit _f34390;
    org$pandalanguage$pandac$IRNode* _f44392 = NULL;
    panda$core$Int64 $tmp4394;
    org$pandalanguage$pandac$Position _f04396;
    org$pandalanguage$pandac$Variable$Kind _f14398;
    panda$collections$ImmutableArray* _f24400 = NULL;
    panda$core$Int64 $tmp4402;
    org$pandalanguage$pandac$Position _f04404;
    panda$core$String* _f14406 = NULL;
    org$pandalanguage$pandac$Type* _f24408 = NULL;
    panda$core$Int64 $tmp4410;
    org$pandalanguage$pandac$Position _f04412;
    org$pandalanguage$pandac$Variable* _f14414 = NULL;
    panda$core$Int64 $tmp4416;
    org$pandalanguage$pandac$Position _f04418;
    panda$collections$ImmutableArray* _f14420 = NULL;
    panda$collections$ImmutableArray* _f24422 = NULL;
    panda$core$Int64 $tmp4424;
    org$pandalanguage$pandac$Position _f04426;
    panda$core$String* _f14428 = NULL;
    org$pandalanguage$pandac$IRNode* _f24430 = NULL;
    panda$collections$ImmutableArray* _f34432 = NULL;
    int $tmp4022;
    {
        int $tmp4025;
        {
            $tmp4027 = self;
            $match$5_14026 = $tmp4027;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4027));
            panda$core$Int64$init$builtin_int64(&$tmp4028, 0);
            panda$core$Bit $tmp4029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4028);
            if ($tmp4029.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4031 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04030 = *$tmp4031;
                org$pandalanguage$pandac$IRNode** $tmp4033 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14032 = *$tmp4033;
                org$pandalanguage$pandac$IRNode** $tmp4035 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24034 = *$tmp4035;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24034));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4036, 1);
            panda$core$Bit $tmp4037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4036);
            if ($tmp4037.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4039 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04038 = *$tmp4039;
                org$pandalanguage$pandac$Type** $tmp4041 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14040 = *$tmp4041;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14040));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4042, 2);
            panda$core$Bit $tmp4043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4042);
            if ($tmp4043.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4045 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04044 = *$tmp4045;
                org$pandalanguage$pandac$Type** $tmp4047 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14046 = *$tmp4047;
                org$pandalanguage$pandac$IRNode** $tmp4049 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24048 = *$tmp4049;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp4051 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_14026->$data + 32));
                _f34050 = *$tmp4051;
                org$pandalanguage$pandac$IRNode** $tmp4053 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 40));
                _f44052 = *$tmp4053;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24048));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44052));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4054, 3);
            panda$core$Bit $tmp4055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4054);
            if ($tmp4055.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4057 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04056 = *$tmp4057;
                org$pandalanguage$pandac$Type** $tmp4059 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14058 = *$tmp4059;
                panda$core$Bit* $tmp4061 = ((panda$core$Bit*) ((char*) $match$5_14026->$data + 24));
                _f24060 = *$tmp4061;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14058));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4062, 4);
            panda$core$Bit $tmp4063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4062);
            if ($tmp4063.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4065 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04064 = *$tmp4065;
                panda$collections$ImmutableArray** $tmp4067 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 16));
                _f14066 = *$tmp4067;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14066));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4068, 5);
            panda$core$Bit $tmp4069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4068);
            if ($tmp4069.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4071 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04070 = *$tmp4071;
                panda$collections$ImmutableArray** $tmp4073 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 16));
                _f14072 = *$tmp4073;
                panda$collections$ImmutableArray** $tmp4075 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 24));
                _f24074 = *$tmp4075;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24074));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4076, 6);
            panda$core$Bit $tmp4077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4076);
            if ($tmp4077.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4079 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04078 = *$tmp4079;
                panda$core$String** $tmp4081 = ((panda$core$String**) ((char*) $match$5_14026->$data + 16));
                _f14080 = *$tmp4081;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14080));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4082, 7);
            panda$core$Bit $tmp4083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4082);
            if ($tmp4083.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4085 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04084 = *$tmp4085;
                org$pandalanguage$pandac$Type** $tmp4087 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14086 = *$tmp4087;
                org$pandalanguage$pandac$MethodRef** $tmp4089 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_14026->$data + 24));
                _f24088 = *$tmp4089;
                panda$collections$ImmutableArray** $tmp4091 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 32));
                _f34090 = *$tmp4091;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24088));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34090));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4092, 8);
            panda$core$Bit $tmp4093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4092);
            if ($tmp4093.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4095 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04094 = *$tmp4095;
                org$pandalanguage$pandac$IRNode** $tmp4097 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14096 = *$tmp4097;
                org$pandalanguage$pandac$Type** $tmp4099 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 24));
                _f24098 = *$tmp4099;
                panda$core$Bit* $tmp4101 = ((panda$core$Bit*) ((char*) $match$5_14026->$data + 32));
                _f34100 = *$tmp4101;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24098));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4102, 9);
            panda$core$Bit $tmp4103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4102);
            if ($tmp4103.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4105 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04104 = *$tmp4105;
                org$pandalanguage$pandac$Type** $tmp4107 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14106 = *$tmp4107;
                org$pandalanguage$pandac$ChoiceCase** $tmp4109 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$5_14026->$data + 24));
                _f24108 = *$tmp4109;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14106));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24108));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4110, 10);
            panda$core$Bit $tmp4111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4110);
            if ($tmp4111.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4113 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04112 = *$tmp4113;
                org$pandalanguage$pandac$IRNode** $tmp4115 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14114 = *$tmp4115;
                org$pandalanguage$pandac$ChoiceCase** $tmp4117 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$5_14026->$data + 24));
                _f24116 = *$tmp4117;
                panda$core$Int64* $tmp4119 = ((panda$core$Int64*) ((char*) $match$5_14026->$data + 32));
                _f34118 = *$tmp4119;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24116));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4120, 11);
            panda$core$Bit $tmp4121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4120);
            if ($tmp4121.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4123 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04122 = *$tmp4123;
                org$pandalanguage$pandac$Type** $tmp4125 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14124 = *$tmp4125;
                org$pandalanguage$pandac$IRNode** $tmp4127 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24126 = *$tmp4127;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24126));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4128, 12);
            panda$core$Bit $tmp4129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4128);
            if ($tmp4129.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04130 = *$tmp4131;
                org$pandalanguage$pandac$Type** $tmp4133 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14132 = *$tmp4133;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14132));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4134, 13);
            panda$core$Bit $tmp4135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4134);
            if ($tmp4135.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4137 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04136 = *$tmp4137;
                panda$core$String** $tmp4139 = ((panda$core$String**) ((char*) $match$5_14026->$data + 16));
                _f14138 = *$tmp4139;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14138));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4140, 14);
            panda$core$Bit $tmp4141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4140);
            if ($tmp4141.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4143 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 0));
                _f04142 = *$tmp4143;
                org$pandalanguage$pandac$IRNode** $tmp4145 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 8));
                _f14144 = *$tmp4145;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04142));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14144));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4146, 15);
            panda$core$Bit $tmp4147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4146);
            if ($tmp4147.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4149 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04148 = *$tmp4149;
                panda$core$String** $tmp4151 = ((panda$core$String**) ((char*) $match$5_14026->$data + 16));
                _f14150 = *$tmp4151;
                panda$collections$ImmutableArray** $tmp4153 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 24));
                _f24152 = *$tmp4153;
                org$pandalanguage$pandac$IRNode** $tmp4155 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 32));
                _f34154 = *$tmp4155;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14150));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34154));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4156, 16);
            panda$core$Bit $tmp4157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4156);
            if ($tmp4157.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4159 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 0));
                _f04158 = *$tmp4159;
                panda$collections$ImmutableArray** $tmp4161 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 8));
                _f14160 = *$tmp4161;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14160));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4162, 17);
            panda$core$Bit $tmp4163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4162);
            if ($tmp4163.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4165 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 0));
                _f04164 = *$tmp4165;
                org$pandalanguage$pandac$IRNode** $tmp4167 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 8));
                _f14166 = *$tmp4167;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04164));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14166));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4168, 18);
            panda$core$Bit $tmp4169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4168);
            if ($tmp4169.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04170 = *$tmp4171;
                org$pandalanguage$pandac$Type** $tmp4173 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14172 = *$tmp4173;
                org$pandalanguage$pandac$IRNode** $tmp4175 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24174 = *$tmp4175;
                org$pandalanguage$pandac$FieldDecl** $tmp4177 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_14026->$data + 32));
                _f34176 = *$tmp4177;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34176));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4178, 19);
            panda$core$Bit $tmp4179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4178);
            if ($tmp4179.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04180 = *$tmp4181;
                org$pandalanguage$pandac$IRNode** $tmp4183 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14182 = *$tmp4183;
                panda$collections$ImmutableArray** $tmp4185 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 24));
                _f24184 = *$tmp4185;
                org$pandalanguage$pandac$IRNode** $tmp4187 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 32));
                _f34186 = *$tmp4187;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14182));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24184));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34186));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4188, 20);
            panda$core$Bit $tmp4189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4188);
            if ($tmp4189.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04190 = *$tmp4191;
                org$pandalanguage$pandac$Type** $tmp4193 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14192 = *$tmp4193;
                panda$core$UInt64* $tmp4195 = ((panda$core$UInt64*) ((char*) $match$5_14026->$data + 24));
                _f24194 = *$tmp4195;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14192));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4196, 21);
            panda$core$Bit $tmp4197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4196);
            if ($tmp4197.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4199 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04198 = *$tmp4199;
                org$pandalanguage$pandac$IRNode** $tmp4201 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14200 = *$tmp4201;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14200));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4202, 22);
            panda$core$Bit $tmp4203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4202);
            if ($tmp4203.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4205 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04204 = *$tmp4205;
                org$pandalanguage$pandac$IRNode** $tmp4207 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14206 = *$tmp4207;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14206));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4208, 23);
            panda$core$Bit $tmp4209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4208);
            if ($tmp4209.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04210 = *$tmp4211;
                panda$core$String** $tmp4213 = ((panda$core$String**) ((char*) $match$5_14026->$data + 16));
                _f14212 = *$tmp4213;
                panda$collections$ImmutableArray** $tmp4215 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 24));
                _f24214 = *$tmp4215;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24214));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4216, 24);
            panda$core$Bit $tmp4217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4216);
            if ($tmp4217.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4219 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04218 = *$tmp4219;
                org$pandalanguage$pandac$IRNode** $tmp4221 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14220 = *$tmp4221;
                panda$collections$ImmutableArray** $tmp4223 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 24));
                _f24222 = *$tmp4223;
                panda$collections$ImmutableArray** $tmp4225 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 32));
                _f34224 = *$tmp4225;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24222));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34224));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4226, 25);
            panda$core$Bit $tmp4227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4226);
            if ($tmp4227.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4229 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04228 = *$tmp4229;
                org$pandalanguage$pandac$Type** $tmp4231 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14230 = *$tmp4231;
                org$pandalanguage$pandac$IRNode** $tmp4233 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24232 = *$tmp4233;
                org$pandalanguage$pandac$MethodRef** $tmp4235 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_14026->$data + 32));
                _f34234 = *$tmp4235;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14230));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24232));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34234));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4236, 26);
            panda$core$Bit $tmp4237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4236);
            if ($tmp4237.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4239 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04238 = *$tmp4239;
                org$pandalanguage$pandac$Type** $tmp4241 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14240 = *$tmp4241;
                panda$core$UInt64* $tmp4243 = ((panda$core$UInt64*) ((char*) $match$5_14026->$data + 24));
                _f24242 = *$tmp4243;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14240));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4244, 27);
            panda$core$Bit $tmp4245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4244);
            if ($tmp4245.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4247 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04246 = *$tmp4247;
                org$pandalanguage$pandac$Type** $tmp4249 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14248 = *$tmp4249;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14248));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4250, 28);
            panda$core$Bit $tmp4251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4250);
            if ($tmp4251.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04252 = *$tmp4253;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp4255 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_14026->$data + 16));
                _f14254 = *$tmp4255;
                org$pandalanguage$pandac$IRNode** $tmp4257 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24256 = *$tmp4257;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24256));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4258, 29);
            panda$core$Bit $tmp4259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4258);
            if ($tmp4259.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4261 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04260 = *$tmp4261;
                panda$core$String** $tmp4263 = ((panda$core$String**) ((char*) $match$5_14026->$data + 16));
                _f14262 = *$tmp4263;
                org$pandalanguage$pandac$IRNode** $tmp4265 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24264 = *$tmp4265;
                org$pandalanguage$pandac$IRNode** $tmp4267 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 32));
                _f34266 = *$tmp4267;
                panda$collections$ImmutableArray** $tmp4269 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 40));
                _f44268 = *$tmp4269;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24264));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44268));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4270, 30);
            panda$core$Bit $tmp4271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4270);
            if ($tmp4271.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04272 = *$tmp4273;
                org$pandalanguage$pandac$Type** $tmp4275 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14274 = *$tmp4275;
                panda$core$Real64* $tmp4277 = ((panda$core$Real64*) ((char*) $match$5_14026->$data + 24));
                _f24276 = *$tmp4277;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14274));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4278, 31);
            panda$core$Bit $tmp4279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4278);
            if ($tmp4279.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4281 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04280 = *$tmp4281;
                org$pandalanguage$pandac$IRNode** $tmp4283 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14282 = *$tmp4283;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14282));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4284, 32);
            panda$core$Bit $tmp4285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4284);
            if ($tmp4285.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4287 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04286 = *$tmp4287;
                org$pandalanguage$pandac$Type** $tmp4289 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14288 = *$tmp4289;
                panda$core$Int64* $tmp4291 = ((panda$core$Int64*) ((char*) $match$5_14026->$data + 24));
                _f24290 = *$tmp4291;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14288));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4292, 33);
            panda$core$Bit $tmp4293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4292);
            if ($tmp4293.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp4295 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 0));
                _f04294 = *$tmp4295;
                panda$core$Int64* $tmp4297 = ((panda$core$Int64*) ((char*) $match$5_14026->$data + 8));
                _f14296 = *$tmp4297;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f04294));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4298, 34);
            panda$core$Bit $tmp4299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4298);
            if ($tmp4299.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04300 = *$tmp4301;
                org$pandalanguage$pandac$Type** $tmp4303 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14302 = *$tmp4303;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14302));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4304, 35);
            panda$core$Bit $tmp4305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4304);
            if ($tmp4305.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04306 = *$tmp4307;
                org$pandalanguage$pandac$Type** $tmp4309 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14308 = *$tmp4309;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14308));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4310, 36);
            panda$core$Bit $tmp4311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4310);
            if ($tmp4311.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04312 = *$tmp4313;
                panda$core$String** $tmp4315 = ((panda$core$String**) ((char*) $match$5_14026->$data + 16));
                _f14314 = *$tmp4315;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14314));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4316, 37);
            panda$core$Bit $tmp4317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4316);
            if ($tmp4317.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04318 = *$tmp4319;
                org$pandalanguage$pandac$Type** $tmp4321 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14320 = *$tmp4321;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14320));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4322, 38);
            panda$core$Bit $tmp4323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4322);
            if ($tmp4323.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04324 = *$tmp4325;
                org$pandalanguage$pandac$IRNode** $tmp4327 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14326 = *$tmp4327;
                org$pandalanguage$pandac$IRNode** $tmp4329 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24328 = *$tmp4329;
                org$pandalanguage$pandac$IRNode** $tmp4331 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 32));
                _f34330 = *$tmp4331;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14326));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24328));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34330));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4332, 39);
            panda$core$Bit $tmp4333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4332);
            if ($tmp4333.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4335 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04334 = *$tmp4335;
                org$pandalanguage$pandac$Type** $tmp4337 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14336 = *$tmp4337;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14336));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4338, 40);
            panda$core$Bit $tmp4339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4338);
            if ($tmp4339.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4341 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04340 = *$tmp4341;
                panda$core$String** $tmp4343 = ((panda$core$String**) ((char*) $match$5_14026->$data + 16));
                _f14342 = *$tmp4343;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14342));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4344, 41);
            panda$core$Bit $tmp4345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4344);
            if ($tmp4345.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4347 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04346 = *$tmp4347;
                org$pandalanguage$pandac$Type** $tmp4349 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14348 = *$tmp4349;
                org$pandalanguage$pandac$IRNode** $tmp4351 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24350 = *$tmp4351;
                panda$collections$ImmutableArray** $tmp4353 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 32));
                _f34352 = *$tmp4353;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14348));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34352));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4354, 42);
            panda$core$Bit $tmp4355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4354);
            if ($tmp4355.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04356 = *$tmp4357;
                panda$collections$ImmutableArray** $tmp4359 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 16));
                _f14358 = *$tmp4359;
                org$pandalanguage$pandac$ASTNode** $tmp4361 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_14026->$data + 24));
                _f24360 = *$tmp4361;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14358));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24360));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4362, 43);
            panda$core$Bit $tmp4363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4362);
            if ($tmp4363.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4365 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04364 = *$tmp4365;
                org$pandalanguage$pandac$Type** $tmp4367 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 16));
                _f14366 = *$tmp4367;
                org$pandalanguage$pandac$IRNode** $tmp4369 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24368 = *$tmp4369;
                panda$collections$ImmutableArray** $tmp4371 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 32));
                _f34370 = *$tmp4371;
                panda$collections$ImmutableArray** $tmp4373 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 40));
                _f44372 = *$tmp4373;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24368));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34370));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44372));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4374, 44);
            panda$core$Bit $tmp4375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4374);
            if ($tmp4375.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04376 = *$tmp4377;
                org$pandalanguage$pandac$IRNode** $tmp4379 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14378 = *$tmp4379;
                panda$collections$ImmutableArray** $tmp4381 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 24));
                _f24380 = *$tmp4381;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24380));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4382, 45);
            panda$core$Bit $tmp4383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4382);
            if ($tmp4383.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4385 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04384 = *$tmp4385;
                org$pandalanguage$pandac$IRNode** $tmp4387 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 16));
                _f14386 = *$tmp4387;
                org$pandalanguage$pandac$IRNode** $tmp4389 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24388 = *$tmp4389;
                panda$core$Bit* $tmp4391 = ((panda$core$Bit*) ((char*) $match$5_14026->$data + 32));
                _f34390 = *$tmp4391;
                org$pandalanguage$pandac$IRNode** $tmp4393 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 33));
                _f44392 = *$tmp4393;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14386));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24388));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f44392));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4394, 46);
            panda$core$Bit $tmp4395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4394);
            if ($tmp4395.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4397 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04396 = *$tmp4397;
                org$pandalanguage$pandac$Variable$Kind* $tmp4399 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_14026->$data + 16));
                _f14398 = *$tmp4399;
                panda$collections$ImmutableArray** $tmp4401 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 24));
                _f24400 = *$tmp4401;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24400));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4402, 47);
            panda$core$Bit $tmp4403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4402);
            if ($tmp4403.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4405 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04404 = *$tmp4405;
                panda$core$String** $tmp4407 = ((panda$core$String**) ((char*) $match$5_14026->$data + 16));
                _f14406 = *$tmp4407;
                org$pandalanguage$pandac$Type** $tmp4409 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_14026->$data + 24));
                _f24408 = *$tmp4409;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14406));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24408));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4410, 48);
            panda$core$Bit $tmp4411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4410);
            if ($tmp4411.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4413 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04412 = *$tmp4413;
                org$pandalanguage$pandac$Variable** $tmp4415 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_14026->$data + 16));
                _f14414 = *$tmp4415;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14414));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4416, 49);
            panda$core$Bit $tmp4417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4416);
            if ($tmp4417.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4419 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04418 = *$tmp4419;
                panda$collections$ImmutableArray** $tmp4421 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 16));
                _f14420 = *$tmp4421;
                panda$collections$ImmutableArray** $tmp4423 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 24));
                _f24422 = *$tmp4423;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24422));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp4424, 50);
            panda$core$Bit $tmp4425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_14026->$rawValue, $tmp4424);
            if ($tmp4425.value) {
            {
                org$pandalanguage$pandac$Position* $tmp4427 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_14026->$data + 0));
                _f04426 = *$tmp4427;
                panda$core$String** $tmp4429 = ((panda$core$String**) ((char*) $match$5_14026->$data + 16));
                _f14428 = *$tmp4429;
                org$pandalanguage$pandac$IRNode** $tmp4431 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_14026->$data + 24));
                _f24430 = *$tmp4431;
                panda$collections$ImmutableArray** $tmp4433 = ((panda$collections$ImmutableArray**) ((char*) $match$5_14026->$data + 32));
                _f34432 = *$tmp4433;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f14428));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f24430));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f34432));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp4025 = -1;
        goto $l4023;
        $l4023:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4027));
        switch ($tmp4025) {
            case -1: goto $l4434;
        }
        $l4434:;
    }
    $tmp4022 = -1;
    goto $l4020;
    $l4020:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp4022) {
        case -1: goto $l4435;
    }
    $l4435:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4437;
    org$pandalanguage$pandac$IRNode* $tmp4440;
    org$pandalanguage$pandac$IRNode* $tmp4441;
    org$pandalanguage$pandac$IRNode* $tmp4444;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4436 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4436 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4438 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4437 = *$tmp4438;
        org$pandalanguage$pandac$IRNode** $tmp4439 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4440 = p_f1;
        *$tmp4439 = $tmp4440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4437));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4442 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4441 = *$tmp4442;
        org$pandalanguage$pandac$IRNode** $tmp4443 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4444 = p_f2;
        *$tmp4443 = $tmp4444;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4441));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp4446;
    org$pandalanguage$pandac$Type* $tmp4449;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4445 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4445 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4447 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4446 = *$tmp4447;
        org$pandalanguage$pandac$Type** $tmp4448 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4449 = p_f1;
        *$tmp4448 = $tmp4449;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4449));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4446));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp4451;
    org$pandalanguage$pandac$Type* $tmp4454;
    org$pandalanguage$pandac$IRNode* $tmp4455;
    org$pandalanguage$pandac$IRNode* $tmp4458;
    org$pandalanguage$pandac$IRNode* $tmp4460;
    org$pandalanguage$pandac$IRNode* $tmp4463;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4450 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4450 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4452 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4451 = *$tmp4452;
        org$pandalanguage$pandac$Type** $tmp4453 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4454 = p_f1;
        *$tmp4453 = $tmp4454;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4454));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4451));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4456 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4455 = *$tmp4456;
        org$pandalanguage$pandac$IRNode** $tmp4457 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4458 = p_f2;
        *$tmp4457 = $tmp4458;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4458));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4455));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp4459 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp4459 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp4461 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp4460 = *$tmp4461;
        org$pandalanguage$pandac$IRNode** $tmp4462 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp4463 = p_f4;
        *$tmp4462 = $tmp4463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4463));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4460));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp4465;
    org$pandalanguage$pandac$Type* $tmp4468;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4464 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4464 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4466 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4465 = *$tmp4466;
        org$pandalanguage$pandac$Type** $tmp4467 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4468 = p_f1;
        *$tmp4467 = $tmp4468;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4465));
    }
    panda$core$Bit* $tmp4469 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp4469 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp4471;
    panda$collections$ImmutableArray* $tmp4474;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4470 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4470 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4472 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4471 = *$tmp4472;
        panda$collections$ImmutableArray** $tmp4473 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4474 = p_f1;
        *$tmp4473 = $tmp4474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4471));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp4476;
    panda$collections$ImmutableArray* $tmp4479;
    panda$collections$ImmutableArray* $tmp4480;
    panda$collections$ImmutableArray* $tmp4483;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4475 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4475 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4477 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4476 = *$tmp4477;
        panda$collections$ImmutableArray** $tmp4478 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4479 = p_f1;
        *$tmp4478 = $tmp4479;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4476));
    }
    {
        panda$collections$ImmutableArray** $tmp4481 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4480 = *$tmp4481;
        panda$collections$ImmutableArray** $tmp4482 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4483 = p_f2;
        *$tmp4482 = $tmp4483;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4480));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp4485;
    panda$core$String* $tmp4488;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4484 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4484 = p_f0;
    {
        panda$core$String** $tmp4486 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4485 = *$tmp4486;
        panda$core$String** $tmp4487 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4488 = p_f1;
        *$tmp4487 = $tmp4488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4485));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4490;
    org$pandalanguage$pandac$Type* $tmp4493;
    org$pandalanguage$pandac$MethodRef* $tmp4494;
    org$pandalanguage$pandac$MethodRef* $tmp4497;
    panda$collections$ImmutableArray* $tmp4498;
    panda$collections$ImmutableArray* $tmp4501;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4489 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4489 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4491 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4490 = *$tmp4491;
        org$pandalanguage$pandac$Type** $tmp4492 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4493 = p_f1;
        *$tmp4492 = $tmp4493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4490));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp4495 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp4494 = *$tmp4495;
        org$pandalanguage$pandac$MethodRef** $tmp4496 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp4497 = p_f2;
        *$tmp4496 = $tmp4497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4494));
    }
    {
        panda$collections$ImmutableArray** $tmp4499 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4498 = *$tmp4499;
        panda$collections$ImmutableArray** $tmp4500 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4501 = p_f3;
        *$tmp4500 = $tmp4501;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4501));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4498));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4503;
    org$pandalanguage$pandac$IRNode* $tmp4506;
    org$pandalanguage$pandac$Type* $tmp4507;
    org$pandalanguage$pandac$Type* $tmp4510;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4502 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4502 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4504 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4503 = *$tmp4504;
        org$pandalanguage$pandac$IRNode** $tmp4505 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4506 = p_f1;
        *$tmp4505 = $tmp4506;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4506));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4503));
    }
    {
        org$pandalanguage$pandac$Type** $tmp4508 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4507 = *$tmp4508;
        org$pandalanguage$pandac$Type** $tmp4509 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4510 = p_f2;
        *$tmp4509 = $tmp4510;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4507));
    }
    panda$core$Bit* $tmp4511 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp4511 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ChoiceCase(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$ChoiceCase* p_f2) {
    org$pandalanguage$pandac$Type* $tmp4513;
    org$pandalanguage$pandac$Type* $tmp4516;
    org$pandalanguage$pandac$ChoiceCase* $tmp4517;
    org$pandalanguage$pandac$ChoiceCase* $tmp4520;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4512 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4512 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4514 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4513 = *$tmp4514;
        org$pandalanguage$pandac$Type** $tmp4515 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4516 = p_f1;
        *$tmp4515 = $tmp4516;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4513));
    }
    {
        org$pandalanguage$pandac$ChoiceCase** $tmp4518 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4517 = *$tmp4518;
        org$pandalanguage$pandac$ChoiceCase** $tmp4519 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4520 = p_f2;
        *$tmp4519 = $tmp4520;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4520));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4517));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceCase* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4522;
    org$pandalanguage$pandac$IRNode* $tmp4525;
    org$pandalanguage$pandac$ChoiceCase* $tmp4526;
    org$pandalanguage$pandac$ChoiceCase* $tmp4529;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4521 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4521 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4523 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4522 = *$tmp4523;
        org$pandalanguage$pandac$IRNode** $tmp4524 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4525 = p_f1;
        *$tmp4524 = $tmp4525;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4525));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4522));
    }
    {
        org$pandalanguage$pandac$ChoiceCase** $tmp4527 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4526 = *$tmp4527;
        org$pandalanguage$pandac$ChoiceCase** $tmp4528 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp4529 = p_f2;
        *$tmp4528 = $tmp4529;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4529));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4526));
    }
    panda$core$Int64* $tmp4530 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp4530 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp4532;
    org$pandalanguage$pandac$Type* $tmp4535;
    org$pandalanguage$pandac$IRNode* $tmp4536;
    org$pandalanguage$pandac$IRNode* $tmp4539;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4531 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4531 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4533 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4532 = *$tmp4533;
        org$pandalanguage$pandac$Type** $tmp4534 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4535 = p_f1;
        *$tmp4534 = $tmp4535;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4532));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4537 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4536 = *$tmp4537;
        org$pandalanguage$pandac$IRNode** $tmp4538 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4539 = p_f2;
        *$tmp4538 = $tmp4539;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4539));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4536));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4540;
    org$pandalanguage$pandac$IRNode* $tmp4543;
    org$pandalanguage$pandac$IRNode* $tmp4544;
    org$pandalanguage$pandac$IRNode* $tmp4547;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4541 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4540 = *$tmp4541;
        org$pandalanguage$pandac$IRNode** $tmp4542 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4543 = p_f0;
        *$tmp4542 = $tmp4543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4540));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4545 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4544 = *$tmp4545;
        org$pandalanguage$pandac$IRNode** $tmp4546 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4547 = p_f1;
        *$tmp4546 = $tmp4547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4544));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp4549;
    panda$core$String* $tmp4552;
    panda$collections$ImmutableArray* $tmp4553;
    panda$collections$ImmutableArray* $tmp4556;
    org$pandalanguage$pandac$IRNode* $tmp4557;
    org$pandalanguage$pandac$IRNode* $tmp4560;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4548 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4548 = p_f0;
    {
        panda$core$String** $tmp4550 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4549 = *$tmp4550;
        panda$core$String** $tmp4551 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4552 = p_f1;
        *$tmp4551 = $tmp4552;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4552));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4549));
    }
    {
        panda$collections$ImmutableArray** $tmp4554 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4553 = *$tmp4554;
        panda$collections$ImmutableArray** $tmp4555 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4556 = p_f2;
        *$tmp4555 = $tmp4556;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4556));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4553));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4558 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4557 = *$tmp4558;
        org$pandalanguage$pandac$IRNode** $tmp4559 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4560 = p_f3;
        *$tmp4559 = $tmp4560;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4560));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4557));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4561;
    org$pandalanguage$pandac$IRNode* $tmp4564;
    panda$collections$ImmutableArray* $tmp4565;
    panda$collections$ImmutableArray* $tmp4568;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4562 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4561 = *$tmp4562;
        org$pandalanguage$pandac$IRNode** $tmp4563 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4564 = p_f0;
        *$tmp4563 = $tmp4564;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4564));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4561));
    }
    {
        panda$collections$ImmutableArray** $tmp4566 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp4565 = *$tmp4566;
        panda$collections$ImmutableArray** $tmp4567 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp4568 = p_f1;
        *$tmp4567 = $tmp4568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4565));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4569;
    org$pandalanguage$pandac$IRNode* $tmp4572;
    org$pandalanguage$pandac$IRNode* $tmp4573;
    org$pandalanguage$pandac$IRNode* $tmp4576;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4570 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4569 = *$tmp4570;
        org$pandalanguage$pandac$IRNode** $tmp4571 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4572 = p_f0;
        *$tmp4571 = $tmp4572;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4572));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4569));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4574 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4573 = *$tmp4574;
        org$pandalanguage$pandac$IRNode** $tmp4575 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp4576 = p_f1;
        *$tmp4575 = $tmp4576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4576));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4573));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4578;
    org$pandalanguage$pandac$Type* $tmp4581;
    org$pandalanguage$pandac$IRNode* $tmp4582;
    org$pandalanguage$pandac$IRNode* $tmp4585;
    org$pandalanguage$pandac$FieldDecl* $tmp4586;
    org$pandalanguage$pandac$FieldDecl* $tmp4589;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4577 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4577 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4579 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4578 = *$tmp4579;
        org$pandalanguage$pandac$Type** $tmp4580 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4581 = p_f1;
        *$tmp4580 = $tmp4581;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4581));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4578));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4583 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4582 = *$tmp4583;
        org$pandalanguage$pandac$IRNode** $tmp4584 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4585 = p_f2;
        *$tmp4584 = $tmp4585;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4585));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4582));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp4587 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp4586 = *$tmp4587;
        org$pandalanguage$pandac$FieldDecl** $tmp4588 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp4589 = p_f3;
        *$tmp4588 = $tmp4589;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4589));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4586));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4591;
    org$pandalanguage$pandac$IRNode* $tmp4594;
    panda$collections$ImmutableArray* $tmp4595;
    panda$collections$ImmutableArray* $tmp4598;
    org$pandalanguage$pandac$IRNode* $tmp4599;
    org$pandalanguage$pandac$IRNode* $tmp4602;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4590 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4590 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4592 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4591 = *$tmp4592;
        org$pandalanguage$pandac$IRNode** $tmp4593 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4594 = p_f1;
        *$tmp4593 = $tmp4594;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4594));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4591));
    }
    {
        panda$collections$ImmutableArray** $tmp4596 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4595 = *$tmp4596;
        panda$collections$ImmutableArray** $tmp4597 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4598 = p_f2;
        *$tmp4597 = $tmp4598;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4595));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4600 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4599 = *$tmp4600;
        org$pandalanguage$pandac$IRNode** $tmp4601 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4602 = p_f3;
        *$tmp4601 = $tmp4602;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4602));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4599));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4604;
    org$pandalanguage$pandac$Type* $tmp4607;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4603 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4603 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4605 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4604 = *$tmp4605;
        org$pandalanguage$pandac$Type** $tmp4606 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4607 = p_f1;
        *$tmp4606 = $tmp4607;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4607));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4604));
    }
    panda$core$UInt64* $tmp4608 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp4608 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4610;
    org$pandalanguage$pandac$IRNode* $tmp4613;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4609 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4609 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4611 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4610 = *$tmp4611;
        org$pandalanguage$pandac$IRNode** $tmp4612 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4613 = p_f1;
        *$tmp4612 = $tmp4613;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4613));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4610));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp4615;
    panda$core$String* $tmp4618;
    panda$collections$ImmutableArray* $tmp4619;
    panda$collections$ImmutableArray* $tmp4622;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4614 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4614 = p_f0;
    {
        panda$core$String** $tmp4616 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4615 = *$tmp4616;
        panda$core$String** $tmp4617 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4618 = p_f1;
        *$tmp4617 = $tmp4618;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4615));
    }
    {
        panda$collections$ImmutableArray** $tmp4620 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4619 = *$tmp4620;
        panda$collections$ImmutableArray** $tmp4621 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4622 = p_f2;
        *$tmp4621 = $tmp4622;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4619));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4624;
    org$pandalanguage$pandac$IRNode* $tmp4627;
    panda$collections$ImmutableArray* $tmp4628;
    panda$collections$ImmutableArray* $tmp4631;
    panda$collections$ImmutableArray* $tmp4632;
    panda$collections$ImmutableArray* $tmp4635;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4623 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4623 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4625 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4624 = *$tmp4625;
        org$pandalanguage$pandac$IRNode** $tmp4626 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4627 = p_f1;
        *$tmp4626 = $tmp4627;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4624));
    }
    {
        panda$collections$ImmutableArray** $tmp4629 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4628 = *$tmp4629;
        panda$collections$ImmutableArray** $tmp4630 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4631 = p_f2;
        *$tmp4630 = $tmp4631;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4628));
    }
    {
        panda$collections$ImmutableArray** $tmp4633 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4632 = *$tmp4633;
        panda$collections$ImmutableArray** $tmp4634 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4635 = p_f3;
        *$tmp4634 = $tmp4635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4632));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4637;
    org$pandalanguage$pandac$Type* $tmp4640;
    org$pandalanguage$pandac$IRNode* $tmp4641;
    org$pandalanguage$pandac$IRNode* $tmp4644;
    org$pandalanguage$pandac$MethodRef* $tmp4645;
    org$pandalanguage$pandac$MethodRef* $tmp4648;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4636 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4636 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4638 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4637 = *$tmp4638;
        org$pandalanguage$pandac$Type** $tmp4639 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4640 = p_f1;
        *$tmp4639 = $tmp4640;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4640));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4637));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4642 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4641 = *$tmp4642;
        org$pandalanguage$pandac$IRNode** $tmp4643 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4644 = p_f2;
        *$tmp4643 = $tmp4644;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4641));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp4646 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp4645 = *$tmp4646;
        org$pandalanguage$pandac$MethodRef** $tmp4647 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp4648 = p_f3;
        *$tmp4647 = $tmp4648;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4645));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4651;
    org$pandalanguage$pandac$IRNode* $tmp4654;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4649 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4649 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp4650 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp4650 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp4652 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4651 = *$tmp4652;
        org$pandalanguage$pandac$IRNode** $tmp4653 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4654 = p_f2;
        *$tmp4653 = $tmp4654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4651));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp4656;
    panda$core$String* $tmp4659;
    org$pandalanguage$pandac$IRNode* $tmp4660;
    org$pandalanguage$pandac$IRNode* $tmp4663;
    org$pandalanguage$pandac$IRNode* $tmp4664;
    org$pandalanguage$pandac$IRNode* $tmp4667;
    panda$collections$ImmutableArray* $tmp4668;
    panda$collections$ImmutableArray* $tmp4671;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4655 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4655 = p_f0;
    {
        panda$core$String** $tmp4657 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4656 = *$tmp4657;
        panda$core$String** $tmp4658 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4659 = p_f1;
        *$tmp4658 = $tmp4659;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4659));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4656));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4661 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4660 = *$tmp4661;
        org$pandalanguage$pandac$IRNode** $tmp4662 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4663 = p_f2;
        *$tmp4662 = $tmp4663;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4663));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4660));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4665 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4664 = *$tmp4665;
        org$pandalanguage$pandac$IRNode** $tmp4666 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4667 = p_f3;
        *$tmp4666 = $tmp4667;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4664));
    }
    {
        panda$collections$ImmutableArray** $tmp4669 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4668 = *$tmp4669;
        panda$collections$ImmutableArray** $tmp4670 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4671 = p_f4;
        *$tmp4670 = $tmp4671;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4671));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4668));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4673;
    org$pandalanguage$pandac$Type* $tmp4676;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4672 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4672 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4674 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4673 = *$tmp4674;
        org$pandalanguage$pandac$Type** $tmp4675 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4676 = p_f1;
        *$tmp4675 = $tmp4676;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4676));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4673));
    }
    panda$core$Real64* $tmp4677 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp4677 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4679;
    org$pandalanguage$pandac$IRNode* $tmp4682;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4678 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4678 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4680 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4679 = *$tmp4680;
        org$pandalanguage$pandac$IRNode** $tmp4681 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4682 = p_f1;
        *$tmp4681 = $tmp4682;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4682));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4679));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp4684;
    org$pandalanguage$pandac$Type* $tmp4687;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4683 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4683 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4685 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4684 = *$tmp4685;
        org$pandalanguage$pandac$Type** $tmp4686 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4687 = p_f1;
        *$tmp4686 = $tmp4687;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4687));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4684));
    }
    panda$core$Int64* $tmp4688 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp4688 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp4689;
    org$pandalanguage$pandac$IRNode* $tmp4692;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp4690 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4689 = *$tmp4690;
        org$pandalanguage$pandac$IRNode** $tmp4691 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp4692 = p_f0;
        *$tmp4691 = $tmp4692;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4689));
    }
    panda$core$Int64* $tmp4693 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp4693 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp4695;
    panda$core$String* $tmp4698;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4694 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4694 = p_f0;
    {
        panda$core$String** $tmp4696 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4695 = *$tmp4696;
        panda$core$String** $tmp4697 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4698 = p_f1;
        *$tmp4697 = $tmp4698;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4698));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4695));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp4700;
    org$pandalanguage$pandac$IRNode* $tmp4703;
    org$pandalanguage$pandac$IRNode* $tmp4704;
    org$pandalanguage$pandac$IRNode* $tmp4707;
    org$pandalanguage$pandac$IRNode* $tmp4708;
    org$pandalanguage$pandac$IRNode* $tmp4711;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4699 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4699 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4701 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4700 = *$tmp4701;
        org$pandalanguage$pandac$IRNode** $tmp4702 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4703 = p_f1;
        *$tmp4702 = $tmp4703;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4703));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4700));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4705 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4704 = *$tmp4705;
        org$pandalanguage$pandac$IRNode** $tmp4706 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4707 = p_f2;
        *$tmp4706 = $tmp4707;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4707));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4704));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4709 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4708 = *$tmp4709;
        org$pandalanguage$pandac$IRNode** $tmp4710 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp4711 = p_f3;
        *$tmp4710 = $tmp4711;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4711));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4708));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp4713;
    org$pandalanguage$pandac$Type* $tmp4716;
    org$pandalanguage$pandac$IRNode* $tmp4717;
    org$pandalanguage$pandac$IRNode* $tmp4720;
    panda$collections$ImmutableArray* $tmp4721;
    panda$collections$ImmutableArray* $tmp4724;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4712 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4712 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4714 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4713 = *$tmp4714;
        org$pandalanguage$pandac$Type** $tmp4715 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4716 = p_f1;
        *$tmp4715 = $tmp4716;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4716));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4713));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4718 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4717 = *$tmp4718;
        org$pandalanguage$pandac$IRNode** $tmp4719 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4720 = p_f2;
        *$tmp4719 = $tmp4720;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4720));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4717));
    }
    {
        panda$collections$ImmutableArray** $tmp4722 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4721 = *$tmp4722;
        panda$collections$ImmutableArray** $tmp4723 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4724 = p_f3;
        *$tmp4723 = $tmp4724;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4724));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4721));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp4726;
    panda$collections$ImmutableArray* $tmp4729;
    org$pandalanguage$pandac$ASTNode* $tmp4730;
    org$pandalanguage$pandac$ASTNode* $tmp4733;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4725 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4725 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp4727 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4726 = *$tmp4727;
        panda$collections$ImmutableArray** $tmp4728 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp4729 = p_f1;
        *$tmp4728 = $tmp4729;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4729));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4726));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp4731 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp4730 = *$tmp4731;
        org$pandalanguage$pandac$ASTNode** $tmp4732 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp4733 = p_f2;
        *$tmp4732 = $tmp4733;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4733));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4730));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp4735;
    org$pandalanguage$pandac$Type* $tmp4738;
    org$pandalanguage$pandac$IRNode* $tmp4739;
    org$pandalanguage$pandac$IRNode* $tmp4742;
    panda$collections$ImmutableArray* $tmp4743;
    panda$collections$ImmutableArray* $tmp4746;
    panda$collections$ImmutableArray* $tmp4747;
    panda$collections$ImmutableArray* $tmp4750;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4734 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4734 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp4736 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4735 = *$tmp4736;
        org$pandalanguage$pandac$Type** $tmp4737 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp4738 = p_f1;
        *$tmp4737 = $tmp4738;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4738));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4735));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4740 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4739 = *$tmp4740;
        org$pandalanguage$pandac$IRNode** $tmp4741 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4742 = p_f2;
        *$tmp4741 = $tmp4742;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4742));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4739));
    }
    {
        panda$collections$ImmutableArray** $tmp4744 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4743 = *$tmp4744;
        panda$collections$ImmutableArray** $tmp4745 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4746 = p_f3;
        *$tmp4745 = $tmp4746;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4746));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4743));
    }
    {
        panda$collections$ImmutableArray** $tmp4748 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4747 = *$tmp4748;
        panda$collections$ImmutableArray** $tmp4749 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp4750 = p_f4;
        *$tmp4749 = $tmp4750;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4750));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4747));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp4752;
    org$pandalanguage$pandac$IRNode* $tmp4755;
    panda$collections$ImmutableArray* $tmp4756;
    panda$collections$ImmutableArray* $tmp4759;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4751 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4751 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4753 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4752 = *$tmp4753;
        org$pandalanguage$pandac$IRNode** $tmp4754 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4755 = p_f1;
        *$tmp4754 = $tmp4755;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4755));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4752));
    }
    {
        panda$collections$ImmutableArray** $tmp4757 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4756 = *$tmp4757;
        panda$collections$ImmutableArray** $tmp4758 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4759 = p_f2;
        *$tmp4758 = $tmp4759;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4759));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4756));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp4761;
    org$pandalanguage$pandac$IRNode* $tmp4764;
    org$pandalanguage$pandac$IRNode* $tmp4765;
    org$pandalanguage$pandac$IRNode* $tmp4768;
    org$pandalanguage$pandac$IRNode* $tmp4770;
    org$pandalanguage$pandac$IRNode* $tmp4773;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4760 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4760 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4762 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4761 = *$tmp4762;
        org$pandalanguage$pandac$IRNode** $tmp4763 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp4764 = p_f1;
        *$tmp4763 = $tmp4764;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4764));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4761));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4766 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4765 = *$tmp4766;
        org$pandalanguage$pandac$IRNode** $tmp4767 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4768 = p_f2;
        *$tmp4767 = $tmp4768;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4768));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4765));
    }
    panda$core$Bit* $tmp4769 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp4769 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp4771 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp4770 = *$tmp4771;
        org$pandalanguage$pandac$IRNode** $tmp4772 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp4773 = p_f4;
        *$tmp4772 = $tmp4773;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4773));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4770));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp4776;
    panda$collections$ImmutableArray* $tmp4779;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4774 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4774 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp4775 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp4775 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp4777 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4776 = *$tmp4777;
        panda$collections$ImmutableArray** $tmp4778 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp4779 = p_f2;
        *$tmp4778 = $tmp4779;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4779));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4776));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$Type* p_f2) {
    panda$core$String* $tmp4781;
    panda$core$String* $tmp4784;
    org$pandalanguage$pandac$Type* $tmp4785;
    org$pandalanguage$pandac$Type* $tmp4788;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4780 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4780 = p_f0;
    {
        panda$core$String** $tmp4782 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4781 = *$tmp4782;
        panda$core$String** $tmp4783 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4784 = p_f1;
        *$tmp4783 = $tmp4784;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4784));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4781));
    }
    {
        org$pandalanguage$pandac$Type** $tmp4786 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4785 = *$tmp4786;
        org$pandalanguage$pandac$Type** $tmp4787 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp4788 = p_f2;
        *$tmp4787 = $tmp4788;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4788));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4785));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp4790;
    org$pandalanguage$pandac$Variable* $tmp4793;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4789 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4789 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp4791 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp4790 = *$tmp4791;
        org$pandalanguage$pandac$Variable** $tmp4792 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp4793 = p_f1;
        *$tmp4792 = $tmp4793;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4793));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4790));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp4795;
    panda$core$String* $tmp4798;
    org$pandalanguage$pandac$IRNode* $tmp4799;
    org$pandalanguage$pandac$IRNode* $tmp4802;
    panda$collections$ImmutableArray* $tmp4803;
    panda$collections$ImmutableArray* $tmp4806;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp4794 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp4794 = p_f0;
    {
        panda$core$String** $tmp4796 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4795 = *$tmp4796;
        panda$core$String** $tmp4797 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp4798 = p_f1;
        *$tmp4797 = $tmp4798;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4798));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4795));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp4800 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4799 = *$tmp4800;
        org$pandalanguage$pandac$IRNode** $tmp4801 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp4802 = p_f2;
        *$tmp4801 = $tmp4802;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4802));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4799));
    }
    {
        panda$collections$ImmutableArray** $tmp4804 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4803 = *$tmp4804;
        panda$collections$ImmutableArray** $tmp4805 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp4806 = p_f3;
        *$tmp4805 = $tmp4806;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4806));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4803));
    }
}

