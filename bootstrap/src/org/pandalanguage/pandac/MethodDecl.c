#include "org/pandalanguage/pandac/MethodDecl.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Weak.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Equatable.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/Annotations/Expression.h"
#include "org/pandalanguage/pandac/ASTNode.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/ListView.h"
#include "panda/core/MutableString.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodDecl$class_type org$pandalanguage$pandac$MethodDecl$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &org$pandalanguage$pandac$Symbol$class, NULL, { org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$cleanup, org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64, org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String, org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String} };

typedef panda$core$Int64 (*$fn15)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn45)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn49)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn54)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn80)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn95)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn116)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn127)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn139)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn149)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn157)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn163)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn176)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn210)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn247)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn251)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn256)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn301)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn329)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn336)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn340)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn345)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn361)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn391)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn395)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn400)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn418)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s25 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x69\x6e\x69\x74\x28\x6f\x77\x6e\x65\x72\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2c\x20\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x2c\x20\x64\x6f\x63\x63\x6f\x6d\x6d\x65\x6e\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x2c\x20\x61\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x6e\x6e\x6f\x74\x61\x74\x69\x6f\x6e\x73\x2c\x20\x6d\x65\x74\x68\x6f\x64\x4b\x69\x6e\x64\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x4b\x69\x6e\x64\x2c\x20\x6e\x61\x6d\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x67\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6c\x61\x73\x73\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x2c\x20\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x2c\x20\x72\x65\x74\x75\x72\x6e\x54\x79\x70\x65\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x2c\x20\x62\x6f\x64\x79\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x3e\x3f\x29", 608, 4895590715618188606, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x67\x65\x74\x5f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 105, -4161089433249330848, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$Annotations* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, panda$collections$Array* param7, panda$collections$Array* param8, org$pandalanguage$pandac$Type* param9, org$pandalanguage$pandac$FixedArray* param10) {

panda$core$Bit local0;
org$pandalanguage$pandac$MethodDecl$Parameter* local1 = NULL;
// line 49
panda$core$Int64 $tmp2 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp3 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp2);
org$pandalanguage$pandac$Compiler$Resolution* $tmp4 = &param0->resolved;
*$tmp4 = $tmp3;
// line 51
panda$core$Bit $tmp5 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp6 = &param0->overrideKnown;
*$tmp6 = $tmp5;
// line 54
panda$core$Weak* $tmp7 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp7, ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) NULL)));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Weak** $tmp8 = &param0->overridden;
panda$core$Weak* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Weak** $tmp10 = &param0->overridden;
*$tmp10 = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($10:panda.core.Weak<org.pandalanguage.pandac.MethodDecl?>)
panda$core$Bit $tmp11 = panda$core$Bit$init$builtin_bit(param7 == NULL);
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block1:;
*(&local0) = $tmp11;
goto block3;
block2:;
ITable* $tmp13 = ((panda$collections$CollectionView*) param7)->$class->itable;
while ($tmp13->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
panda$core$Int64 $tmp16 = $tmp14(((panda$collections$CollectionView*) param7));
panda$core$Int64 $tmp17 = (panda$core$Int64) {0};
int64_t $tmp18 = $tmp16.value;
int64_t $tmp19 = $tmp17.value;
bool $tmp20 = $tmp18 > $tmp19;
panda$core$Bit $tmp21 = (panda$core$Bit) {$tmp20};
*(&local0) = $tmp21;
goto block3;
block3:;
panda$core$Bit $tmp22 = *(&local0);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp24 = (panda$core$Int64) {67};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s25, $tmp24, &$s26);
abort(); // unreachable
block4:;
// line 71
panda$core$Int64 $tmp27 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Symbol$Kind $tmp28 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp27);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp28, param2, param6);
// line 72
panda$core$Weak* $tmp29 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp29, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Weak** $tmp30 = &param0->owner;
panda$core$Weak* $tmp31 = *$tmp30;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
panda$core$Weak** $tmp32 = &param0->owner;
*$tmp32 = $tmp29;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
// unreffing REF($53:panda.core.Weak<org.pandalanguage.pandac.ClassDecl>)
// line 73
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp33 = &param0->doccomment;
panda$core$String* $tmp34 = *$tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
panda$core$String** $tmp35 = &param0->doccomment;
*$tmp35 = param3;
// line 74
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Annotations** $tmp36 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp37 = *$tmp36;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
org$pandalanguage$pandac$Annotations** $tmp38 = &param0->annotations;
*$tmp38 = param4;
// line 75
org$pandalanguage$pandac$MethodDecl$Kind* $tmp39 = &param0->methodKind;
*$tmp39 = param5;
// line 76
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
panda$collections$Array** $tmp40 = &param0->genericParameters;
panda$collections$Array* $tmp41 = *$tmp40;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp41));
panda$collections$Array** $tmp42 = &param0->genericParameters;
*$tmp42 = param7;
// line 77
ITable* $tmp43 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp43->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[0];
panda$collections$Iterator* $tmp46 = $tmp44(((panda$collections$Iterable*) param8));
goto block6;
block6:;
ITable* $tmp47 = $tmp46->$class->itable;
while ($tmp47->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
panda$core$Bit $tmp50 = $tmp48($tmp46);
bool $tmp51 = $tmp50.value;
if ($tmp51) goto block8; else goto block7;
block7:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp52 = $tmp46->$class->itable;
while ($tmp52->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp52 = $tmp52->next;
}
$fn54 $tmp53 = $tmp52->methods[1];
panda$core$Object* $tmp55 = $tmp53($tmp46);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp55)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp56 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp56));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp55);
// line 78
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp57 = *(&local1);
panda$core$Weak* $tmp58 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp58, ((panda$core$Object*) param0));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
panda$core$Weak** $tmp59 = &$tmp57->owner;
panda$core$Weak* $tmp60 = *$tmp59;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$Weak** $tmp61 = &$tmp57->owner;
*$tmp61 = $tmp58;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp58));
// unreffing REF($124:panda.core.Weak<org.pandalanguage.pandac.MethodDecl?>)
panda$core$Panda$unref$panda$core$Object$Q($tmp55);
// unreffing REF($113:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp62 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp62));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block6;
block8:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($102:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 80
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$collections$Array** $tmp63 = &param0->parameters;
panda$collections$Array* $tmp64 = *$tmp63;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp64));
panda$collections$Array** $tmp65 = &param0->parameters;
*$tmp65 = param8;
// line 81
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$Type** $tmp66 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp67 = *$tmp66;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
org$pandalanguage$pandac$Type** $tmp68 = &param0->returnType;
*$tmp68 = param9;
// line 82
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
org$pandalanguage$pandac$FixedArray** $tmp69 = &param0->body;
org$pandalanguage$pandac$FixedArray* $tmp70 = *$tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
org$pandalanguage$pandac$FixedArray** $tmp71 = &param0->body;
*$tmp71 = param10;
return;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

// line 87
org$pandalanguage$pandac$MethodDecl$Kind* $tmp72 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp73 = *$tmp72;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp74;
$tmp74 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp74->value = $tmp73;
panda$core$Int64 $tmp75 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp76 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp75);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp77;
$tmp77 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp77->value = $tmp76;
ITable* $tmp78 = ((panda$core$Equatable*) $tmp74)->$class->itable;
while ($tmp78->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp78 = $tmp78->next;
}
$fn80 $tmp79 = $tmp78->methods[1];
panda$core$Bit $tmp81 = $tmp79(((panda$core$Equatable*) $tmp74), ((panda$core$Equatable*) $tmp77));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp77)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp74)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
return $tmp81;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 91
org$pandalanguage$pandac$Annotations** $tmp82 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp83 = *$tmp82;
panda$core$Bit $tmp84 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp83);
panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp87 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp88 = *$tmp87;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp89;
$tmp89 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp89->value = $tmp88;
panda$core$Int64 $tmp90 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp91 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp90);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp92;
$tmp92 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp92->value = $tmp91;
ITable* $tmp93 = ((panda$core$Equatable*) $tmp89)->$class->itable;
while ($tmp93->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[1];
panda$core$Bit $tmp96 = $tmp94(((panda$core$Equatable*) $tmp89), ((panda$core$Equatable*) $tmp92));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp92)));
// unreffing REF($13:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp89)));
// unreffing REF($9:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local1) = $tmp96;
goto block3;
block2:;
*(&local1) = $tmp85;
goto block3;
block3:;
panda$core$Bit $tmp97 = *(&local1);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Annotations** $tmp99 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp100 = *$tmp99;
panda$core$Bit $tmp101 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp100);
panda$core$Bit $tmp102 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp101);
*(&local0) = $tmp102;
goto block6;
block5:;
*(&local0) = $tmp97;
goto block6;
block6:;
panda$core$Bit $tmp103 = *(&local0);
return $tmp103;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

// line 95
org$pandalanguage$pandac$Annotations** $tmp104 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp105 = *$tmp104;
panda$core$Bit $tmp106 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp105);
panda$core$Bit $tmp107 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp106);
return $tmp107;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$Bit local0;
panda$core$Int64 local1;
// line 99
org$pandalanguage$pandac$Compiler$Resolution* $tmp108 = &param0->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp109 = *$tmp108;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp110;
$tmp110 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp110->value = $tmp109;
panda$core$Int64 $tmp111 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp112 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp111);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp113;
$tmp113 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp113->value = $tmp112;
ITable* $tmp114 = ((panda$core$Equatable*) $tmp110)->$class->itable;
while ($tmp114->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp114 = $tmp114->next;
}
$fn116 $tmp115 = $tmp114->methods[1];
panda$core$Bit $tmp117 = $tmp115(((panda$core$Equatable*) $tmp110), ((panda$core$Equatable*) $tmp113));
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Compiler$Resolution* $tmp119 = &param1->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp120 = *$tmp119;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp121;
$tmp121 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp121->value = $tmp120;
panda$core$Int64 $tmp122 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp123 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp122);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp124;
$tmp124 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp124->value = $tmp123;
ITable* $tmp125 = ((panda$core$Equatable*) $tmp121)->$class->itable;
while ($tmp125->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp125 = $tmp125->next;
}
$fn127 $tmp126 = $tmp125->methods[1];
panda$core$Bit $tmp128 = $tmp126(((panda$core$Equatable*) $tmp121), ((panda$core$Equatable*) $tmp124));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp124)));
// unreffing REF($18:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp121)));
// unreffing REF($14:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
*(&local0) = $tmp128;
goto block3;
block2:;
*(&local0) = $tmp117;
goto block3;
block3:;
panda$core$Bit $tmp129 = *(&local0);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp131 = (panda$core$Int64) {99};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s132, $tmp131);
abort(); // unreachable
block4:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp113)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp110)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
// line 101
panda$core$String** $tmp133 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp134 = *$tmp133;
panda$core$String** $tmp135 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp136 = *$tmp135;
ITable* $tmp137 = ((panda$core$Equatable*) $tmp134)->$class->itable;
while ($tmp137->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[1];
panda$core$Bit $tmp140 = $tmp138(((panda$core$Equatable*) $tmp134), ((panda$core$Equatable*) $tmp136));
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block6; else goto block7;
block6:;
// line 102
panda$core$Bit $tmp142 = panda$core$Bit$init$builtin_bit(false);
return $tmp142;
block7:;
// line 104
org$pandalanguage$pandac$Type** $tmp143 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp144 = *$tmp143;
org$pandalanguage$pandac$Type** $tmp145 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp146 = *$tmp145;
ITable* $tmp147 = ((panda$core$Equatable*) $tmp144)->$class->itable;
while ($tmp147->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp147 = $tmp147->next;
}
$fn149 $tmp148 = $tmp147->methods[1];
panda$core$Bit $tmp150 = $tmp148(((panda$core$Equatable*) $tmp144), ((panda$core$Equatable*) $tmp146));
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block8; else goto block9;
block8:;
// line 105
panda$core$Bit $tmp152 = panda$core$Bit$init$builtin_bit(false);
return $tmp152;
block9:;
// line 107
panda$collections$Array** $tmp153 = &param0->parameters;
panda$collections$Array* $tmp154 = *$tmp153;
ITable* $tmp155 = ((panda$collections$CollectionView*) $tmp154)->$class->itable;
while ($tmp155->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
panda$core$Int64 $tmp158 = $tmp156(((panda$collections$CollectionView*) $tmp154));
panda$collections$Array** $tmp159 = &param1->parameters;
panda$collections$Array* $tmp160 = *$tmp159;
ITable* $tmp161 = ((panda$collections$CollectionView*) $tmp160)->$class->itable;
while ($tmp161->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
panda$core$Int64 $tmp164 = $tmp162(((panda$collections$CollectionView*) $tmp160));
int64_t $tmp165 = $tmp158.value;
int64_t $tmp166 = $tmp164.value;
bool $tmp167 = $tmp165 != $tmp166;
panda$core$Bit $tmp168 = (panda$core$Bit) {$tmp167};
bool $tmp169 = $tmp168.value;
if ($tmp169) goto block10; else goto block11;
block10:;
// line 108
panda$core$Bit $tmp170 = panda$core$Bit$init$builtin_bit(false);
return $tmp170;
block11:;
// line 110
panda$core$Int64 $tmp171 = (panda$core$Int64) {0};
panda$collections$Array** $tmp172 = &param0->parameters;
panda$collections$Array* $tmp173 = *$tmp172;
ITable* $tmp174 = ((panda$collections$CollectionView*) $tmp173)->$class->itable;
while ($tmp174->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[0];
panda$core$Int64 $tmp177 = $tmp175(((panda$collections$CollectionView*) $tmp173));
panda$core$Bit $tmp178 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp179 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp171, $tmp177, $tmp178);
panda$core$Int64 $tmp180 = $tmp179.min;
*(&local1) = $tmp180;
panda$core$Int64 $tmp181 = $tmp179.max;
panda$core$Bit $tmp182 = $tmp179.inclusive;
bool $tmp183 = $tmp182.value;
panda$core$Int64 $tmp184 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp185 = panda$core$Int64$convert$R$panda$core$UInt64($tmp184);
if ($tmp183) goto block15; else goto block16;
block15:;
int64_t $tmp186 = $tmp180.value;
int64_t $tmp187 = $tmp181.value;
bool $tmp188 = $tmp186 <= $tmp187;
panda$core$Bit $tmp189 = (panda$core$Bit) {$tmp188};
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block12; else goto block13;
block16:;
int64_t $tmp191 = $tmp180.value;
int64_t $tmp192 = $tmp181.value;
bool $tmp193 = $tmp191 < $tmp192;
panda$core$Bit $tmp194 = (panda$core$Bit) {$tmp193};
bool $tmp195 = $tmp194.value;
if ($tmp195) goto block12; else goto block13;
block12:;
// line 111
panda$collections$Array** $tmp196 = &param0->parameters;
panda$collections$Array* $tmp197 = *$tmp196;
panda$core$Int64 $tmp198 = *(&local1);
panda$core$Object* $tmp199 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp197, $tmp198);
org$pandalanguage$pandac$Type** $tmp200 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp199)->type;
org$pandalanguage$pandac$Type* $tmp201 = *$tmp200;
panda$collections$Array** $tmp202 = &param1->parameters;
panda$collections$Array* $tmp203 = *$tmp202;
panda$core$Int64 $tmp204 = *(&local1);
panda$core$Object* $tmp205 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp203, $tmp204);
org$pandalanguage$pandac$Type** $tmp206 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp205)->type;
org$pandalanguage$pandac$Type* $tmp207 = *$tmp206;
ITable* $tmp208 = ((panda$core$Equatable*) $tmp201)->$class->itable;
while ($tmp208->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp208 = $tmp208->next;
}
$fn210 $tmp209 = $tmp208->methods[1];
panda$core$Bit $tmp211 = $tmp209(((panda$core$Equatable*) $tmp201), ((panda$core$Equatable*) $tmp207));
bool $tmp212 = $tmp211.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp205);
// unreffing REF($139:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp199);
// unreffing REF($129:panda.collections.Array.T)
if ($tmp212) goto block17; else goto block18;
block17:;
// line 112
panda$core$Bit $tmp213 = panda$core$Bit$init$builtin_bit(false);
return $tmp213;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp214 = *(&local1);
int64_t $tmp215 = $tmp181.value;
int64_t $tmp216 = $tmp214.value;
int64_t $tmp217 = $tmp215 - $tmp216;
panda$core$Int64 $tmp218 = (panda$core$Int64) {$tmp217};
panda$core$UInt64 $tmp219 = panda$core$Int64$convert$R$panda$core$UInt64($tmp218);
if ($tmp183) goto block20; else goto block21;
block20:;
uint64_t $tmp220 = $tmp219.value;
uint64_t $tmp221 = $tmp185.value;
bool $tmp222 = $tmp220 >= $tmp221;
panda$core$Bit $tmp223 = (panda$core$Bit) {$tmp222};
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block19; else goto block13;
block21:;
uint64_t $tmp225 = $tmp219.value;
uint64_t $tmp226 = $tmp185.value;
bool $tmp227 = $tmp225 > $tmp226;
panda$core$Bit $tmp228 = (panda$core$Bit) {$tmp227};
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block19; else goto block13;
block19:;
int64_t $tmp230 = $tmp214.value;
int64_t $tmp231 = $tmp184.value;
int64_t $tmp232 = $tmp230 + $tmp231;
panda$core$Int64 $tmp233 = (panda$core$Int64) {$tmp232};
*(&local1) = $tmp233;
goto block12;
block13:;
// line 115
panda$core$Bit $tmp234 = panda$core$Bit$init$builtin_bit(true);
return $tmp234;

}
panda$core$Int64 org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(org$pandalanguage$pandac$MethodDecl* param0) {

org$pandalanguage$pandac$Annotations$Expression* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$UInt64 local2;
org$pandalanguage$pandac$parser$Token$Kind local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$UInt64 local5;
// line 119
org$pandalanguage$pandac$Annotations** $tmp235 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp236 = *$tmp235;
panda$collections$Array** $tmp237 = &$tmp236->expressions;
panda$collections$Array* $tmp238 = *$tmp237;
panda$core$Bit $tmp239 = panda$core$Bit$init$builtin_bit($tmp238 != NULL);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// line 120
org$pandalanguage$pandac$Annotations** $tmp241 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp242 = *$tmp241;
panda$collections$Array** $tmp243 = &$tmp242->expressions;
panda$collections$Array* $tmp244 = *$tmp243;
ITable* $tmp245 = ((panda$collections$Iterable*) $tmp244)->$class->itable;
while ($tmp245->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp245 = $tmp245->next;
}
$fn247 $tmp246 = $tmp245->methods[0];
panda$collections$Iterator* $tmp248 = $tmp246(((panda$collections$Iterable*) $tmp244));
goto block3;
block3:;
ITable* $tmp249 = $tmp248->$class->itable;
while ($tmp249->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp249 = $tmp249->next;
}
$fn251 $tmp250 = $tmp249->methods[0];
panda$core$Bit $tmp252 = $tmp250($tmp248);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block5; else goto block4;
block4:;
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
ITable* $tmp254 = $tmp248->$class->itable;
while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[1];
panda$core$Object* $tmp257 = $tmp255($tmp248);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Annotations$Expression*) $tmp257)));
org$pandalanguage$pandac$Annotations$Expression* $tmp258 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp257);
// line 121
org$pandalanguage$pandac$Annotations$Expression* $tmp259 = *(&local0);
panda$core$Int64* $tmp260 = &$tmp259->$rawValue;
panda$core$Int64 $tmp261 = *$tmp260;
panda$core$Int64 $tmp262 = (panda$core$Int64) {4};
panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp261, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block7; else goto block6;
block7:;
panda$core$String** $tmp265 = (panda$core$String**) ($tmp259->$data + 0);
panda$core$String* $tmp266 = *$tmp265;
org$pandalanguage$pandac$ASTNode** $tmp267 = (org$pandalanguage$pandac$ASTNode**) ($tmp259->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp268 = *$tmp267;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
org$pandalanguage$pandac$ASTNode* $tmp269 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
*(&local1) = $tmp268;
// line 123
org$pandalanguage$pandac$ASTNode* $tmp270 = *(&local1);
panda$core$Int64* $tmp271 = &$tmp270->$rawValue;
panda$core$Int64 $tmp272 = *$tmp271;
panda$core$Int64 $tmp273 = (panda$core$Int64) {25};
panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp272, $tmp273);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Position* $tmp276 = (org$pandalanguage$pandac$Position*) ($tmp270->$data + 0);
org$pandalanguage$pandac$Position $tmp277 = *$tmp276;
panda$core$UInt64* $tmp278 = (panda$core$UInt64*) ($tmp270->$data + 16);
panda$core$UInt64 $tmp279 = *$tmp278;
*(&local2) = $tmp279;
// line 125
panda$core$UInt64 $tmp280 = *(&local2);
panda$core$Int64 $tmp281 = panda$core$UInt64$convert$R$panda$core$Int64($tmp280);
org$pandalanguage$pandac$ASTNode* $tmp282 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp282));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp257);
// unreffing REF($28:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp283 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp283));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing REF($17:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp281;
block10:;
panda$core$Int64 $tmp284 = (panda$core$Int64) {35};
panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp272, $tmp284);
bool $tmp286 = $tmp285.value;
if ($tmp286) goto block11; else goto block8;
block11:;
org$pandalanguage$pandac$Position* $tmp287 = (org$pandalanguage$pandac$Position*) ($tmp270->$data + 0);
org$pandalanguage$pandac$Position $tmp288 = *$tmp287;
org$pandalanguage$pandac$parser$Token$Kind* $tmp289 = (org$pandalanguage$pandac$parser$Token$Kind*) ($tmp270->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp290 = *$tmp289;
*(&local3) = $tmp290;
org$pandalanguage$pandac$ASTNode** $tmp291 = (org$pandalanguage$pandac$ASTNode**) ($tmp270->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp292 = *$tmp291;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp292));
org$pandalanguage$pandac$ASTNode* $tmp293 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
*(&local4) = $tmp292;
// line 128
org$pandalanguage$pandac$parser$Token$Kind $tmp294 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp295;
$tmp295 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp295->value = $tmp294;
panda$core$Int64 $tmp296 = (panda$core$Int64) {53};
org$pandalanguage$pandac$parser$Token$Kind $tmp297 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp296);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp298;
$tmp298 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp298->value = $tmp297;
ITable* $tmp299 = ((panda$core$Equatable*) $tmp295)->$class->itable;
while ($tmp299->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp299 = $tmp299->next;
}
$fn301 $tmp300 = $tmp299->methods[0];
panda$core$Bit $tmp302 = $tmp300(((panda$core$Equatable*) $tmp295), ((panda$core$Equatable*) $tmp298));
bool $tmp303 = $tmp302.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp298)));
// unreffing REF($112:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp295)));
// unreffing REF($108:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp303) goto block12; else goto block13;
block12:;
// line 129
org$pandalanguage$pandac$ASTNode* $tmp304 = *(&local4);
panda$core$Int64* $tmp305 = &$tmp304->$rawValue;
panda$core$Int64 $tmp306 = *$tmp305;
panda$core$Int64 $tmp307 = (panda$core$Int64) {25};
panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp306, $tmp307);
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block15; else goto block14;
block15:;
org$pandalanguage$pandac$Position* $tmp310 = (org$pandalanguage$pandac$Position*) ($tmp304->$data + 0);
org$pandalanguage$pandac$Position $tmp311 = *$tmp310;
panda$core$UInt64* $tmp312 = (panda$core$UInt64*) ($tmp304->$data + 16);
panda$core$UInt64 $tmp313 = *$tmp312;
*(&local5) = $tmp313;
// line 131
panda$core$UInt64 $tmp314 = *(&local5);
panda$core$Int64 $tmp315 = panda$core$UInt64$convert$R$panda$core$Int64($tmp314);
panda$core$Int64 $tmp316 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp315);
org$pandalanguage$pandac$ASTNode* $tmp317 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp317));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp318 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp257);
// unreffing REF($28:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp319 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp319));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing REF($17:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp316;
block14:;
goto block13;
block13:;
org$pandalanguage$pandac$ASTNode* $tmp320 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
org$pandalanguage$pandac$ASTNode* $tmp321 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q($tmp257);
// unreffing REF($28:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp322 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp248));
// unreffing REF($17:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block2;
block2:;
// line 141
panda$core$Int64 $tmp323 = (panda$core$Int64) {0};
return $tmp323;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local1 = NULL;
org$pandalanguage$pandac$Type$Kind local2;
// line 145
panda$collections$Array* $tmp324 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array** $tmp325 = &param0->parameters;
panda$collections$Array* $tmp326 = *$tmp325;
ITable* $tmp327 = ((panda$collections$CollectionView*) $tmp326)->$class->itable;
while ($tmp327->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[0];
panda$core$Int64 $tmp330 = $tmp328(((panda$collections$CollectionView*) $tmp326));
panda$collections$Array$init$panda$core$Int64($tmp324, $tmp330);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
panda$collections$Array* $tmp331 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
*(&local0) = $tmp324;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 146
panda$collections$Array** $tmp332 = &param0->parameters;
panda$collections$Array* $tmp333 = *$tmp332;
ITable* $tmp334 = ((panda$collections$Iterable*) $tmp333)->$class->itable;
while ($tmp334->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp334 = $tmp334->next;
}
$fn336 $tmp335 = $tmp334->methods[0];
panda$collections$Iterator* $tmp337 = $tmp335(((panda$collections$Iterable*) $tmp333));
goto block1;
block1:;
ITable* $tmp338 = $tmp337->$class->itable;
while ($tmp338->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp338 = $tmp338->next;
}
$fn340 $tmp339 = $tmp338->methods[0];
panda$core$Bit $tmp341 = $tmp339($tmp337);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp343 = $tmp337->$class->itable;
while ($tmp343->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[1];
panda$core$Object* $tmp346 = $tmp344($tmp337);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp346)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp347 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp347));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp346);
// line 147
panda$collections$Array* $tmp348 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp349 = *(&local1);
org$pandalanguage$pandac$Type** $tmp350 = &$tmp349->type;
org$pandalanguage$pandac$Type* $tmp351 = *$tmp350;
panda$collections$Array$add$panda$collections$Array$T($tmp348, ((panda$core$Object*) $tmp351));
panda$core$Panda$unref$panda$core$Object$Q($tmp346);
// unreffing REF($36:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp352 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp337));
// unreffing REF($25:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 149
// line 150
org$pandalanguage$pandac$MethodDecl$Kind* $tmp353 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp354 = *$tmp353;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp355;
$tmp355 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp355->value = $tmp354;
panda$core$Int64 $tmp356 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp357 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp356);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp358;
$tmp358 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp358->value = $tmp357;
ITable* $tmp359 = ((panda$core$Equatable*) $tmp355)->$class->itable;
while ($tmp359->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp359 = $tmp359->next;
}
$fn361 $tmp360 = $tmp359->methods[0];
panda$core$Bit $tmp362 = $tmp360(((panda$core$Equatable*) $tmp355), ((panda$core$Equatable*) $tmp358));
bool $tmp363 = $tmp362.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp358)));
// unreffing REF($72:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp355)));
// unreffing REF($68:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp363) goto block4; else goto block6;
block4:;
// line 151
panda$core$Int64 $tmp364 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp365 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp364);
*(&local2) = $tmp365;
goto block5;
block6:;
// line 1
// line 154
panda$core$Int64 $tmp366 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp367 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp366);
*(&local2) = $tmp367;
goto block5;
block5:;
// line 156
org$pandalanguage$pandac$Position* $tmp368 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp369 = *$tmp368;
org$pandalanguage$pandac$Type$Kind $tmp370 = *(&local2);
panda$collections$Array* $tmp371 = *(&local0);
org$pandalanguage$pandac$Type** $tmp372 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp373 = *$tmp372;
panda$core$Int64 $tmp374 = org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(param0);
org$pandalanguage$pandac$Type* $tmp375 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp369, $tmp370, ((panda$collections$ListView*) $tmp371), $tmp373, $tmp374);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp375));
// unreffing REF($104:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp376 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing paramTypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp375;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
// line 160
panda$core$MutableString* $tmp377 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String** $tmp378 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp379 = *$tmp378;
panda$core$String* $tmp380 = panda$core$String$convert$R$panda$core$String($tmp379);
panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp380, &$s382);
panda$core$MutableString$init$panda$core$String($tmp377, $tmp381);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
panda$core$MutableString* $tmp383 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
*(&local0) = $tmp377;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp377));
// unreffing REF($1:panda.core.MutableString)
// line 161
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s384));
panda$core$String* $tmp385 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp385));
*(&local1) = &$s386;
// line 162
panda$collections$Array** $tmp387 = &param0->parameters;
panda$collections$Array* $tmp388 = *$tmp387;
ITable* $tmp389 = ((panda$collections$Iterable*) $tmp388)->$class->itable;
while ($tmp389->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[0];
panda$collections$Iterator* $tmp392 = $tmp390(((panda$collections$Iterable*) $tmp388));
goto block1;
block1:;
ITable* $tmp393 = $tmp392->$class->itable;
while ($tmp393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp393 = $tmp393->next;
}
$fn395 $tmp394 = $tmp393->methods[0];
panda$core$Bit $tmp396 = $tmp394($tmp392);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp398 = $tmp392->$class->itable;
while ($tmp398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp398 = $tmp398->next;
}
$fn400 $tmp399 = $tmp398->methods[1];
panda$core$Object* $tmp401 = $tmp399($tmp392);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp401)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp402 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp401);
// line 163
panda$core$MutableString* $tmp403 = *(&local0);
panda$core$String* $tmp404 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp403, $tmp404);
// line 164
panda$core$MutableString* $tmp405 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp406 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp405, ((panda$core$Object*) $tmp406));
// line 165
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s407));
panda$core$String* $tmp408 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
*(&local1) = &$s409;
panda$core$Panda$unref$panda$core$Object$Q($tmp401);
// unreffing REF($49:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp410 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
// unreffing REF($38:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 167
panda$core$MutableString* $tmp411 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp411, &$s412);
// line 168
org$pandalanguage$pandac$Type** $tmp413 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp414 = *$tmp413;
org$pandalanguage$pandac$Type* $tmp415 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp416 = ((panda$core$Equatable*) $tmp414)->$class->itable;
while ($tmp416->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp416 = $tmp416->next;
}
$fn418 $tmp417 = $tmp416->methods[1];
panda$core$Bit $tmp419 = $tmp417(((panda$core$Equatable*) $tmp414), ((panda$core$Equatable*) $tmp415));
bool $tmp420 = $tmp419.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing REF($93:org.pandalanguage.pandac.Type)
if ($tmp420) goto block4; else goto block5;
block4:;
// line 169
panda$core$MutableString* $tmp421 = *(&local0);
org$pandalanguage$pandac$Type** $tmp422 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp423 = *$tmp422;
panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s425, ((panda$core$Object*) $tmp423));
panda$core$String* $tmp426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, &$s427);
panda$core$MutableString$append$panda$core$String($tmp421, $tmp426);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
// unreffing REF($108:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
// unreffing REF($107:panda.core.String)
goto block5;
block5:;
// line 171
panda$core$MutableString* $tmp428 = *(&local0);
panda$core$String* $tmp429 = panda$core$MutableString$finish$R$panda$core$String($tmp428);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing REF($119:panda.core.String)
panda$core$String* $tmp430 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp431 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp429;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 175
org$pandalanguage$pandac$MethodDecl$Kind* $tmp432 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp433 = *$tmp432;
panda$core$Int64 $tmp434 = $tmp433.$rawValue;
panda$core$Int64 $tmp435 = (panda$core$Int64) {0};
panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp434, $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block2; else goto block3;
block2:;
// line 177
panda$core$Weak** $tmp438 = &param0->owner;
panda$core$Weak* $tmp439 = *$tmp438;
panda$core$Object* $tmp440 = panda$core$Weak$get$R$panda$core$Weak$T($tmp439);
panda$core$String** $tmp441 = &((org$pandalanguage$pandac$ClassDecl*) $tmp440)->name;
panda$core$String* $tmp442 = *$tmp441;
panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s444, $tmp442);
panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s446);
panda$core$String* $tmp447 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, $tmp447);
panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, &$s450);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
// unreffing REF($20:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
// unreffing REF($16:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp440);
// unreffing REF($12:panda.core.Weak.T)
return $tmp449;
block3:;
panda$core$Int64 $tmp451 = (panda$core$Int64) {1};
panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp434, $tmp451);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block4; else goto block5;
block4:;
// line 180
panda$core$Weak** $tmp454 = &param0->owner;
panda$core$Weak* $tmp455 = *$tmp454;
panda$core$Object* $tmp456 = panda$core$Weak$get$R$panda$core$Weak$T($tmp455);
panda$core$String** $tmp457 = &((org$pandalanguage$pandac$ClassDecl*) $tmp456)->name;
panda$core$String* $tmp458 = *$tmp457;
panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s460, $tmp458);
panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp459, &$s462);
panda$core$String* $tmp463 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp461, $tmp463);
panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp464, &$s466);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp456);
// unreffing REF($50:panda.core.Weak.T)
return $tmp465;
block5:;
panda$core$Int64 $tmp467 = (panda$core$Int64) {2};
panda$core$Bit $tmp468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp434, $tmp467);
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block6; else goto block1;
block6:;
// line 183
panda$core$Weak** $tmp470 = &param0->owner;
panda$core$Weak* $tmp471 = *$tmp470;
panda$core$Object* $tmp472 = panda$core$Weak$get$R$panda$core$Weak$T($tmp471);
panda$core$String** $tmp473 = &((org$pandalanguage$pandac$ClassDecl*) $tmp472)->name;
panda$core$String* $tmp474 = *$tmp473;
panda$core$String* $tmp475 = panda$core$String$convert$R$panda$core$String($tmp474);
panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s477);
panda$core$String* $tmp478 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, $tmp478);
panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, &$s481);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp476));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp472);
// unreffing REF($88:panda.core.Weak.T)
return $tmp480;
block1:;
panda$core$Bit $tmp482 = panda$core$Bit$init$builtin_bit(false);
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp484 = (panda$core$Int64) {174};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s485, $tmp484, &$s486);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 190
org$pandalanguage$pandac$FixedArray** $tmp487 = &param0->body;
org$pandalanguage$pandac$FixedArray* $tmp488 = *$tmp487;
panda$core$Bit $tmp489 = panda$core$Bit$init$builtin_bit($tmp488 != NULL);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block1; else goto block2;
block1:;
// line 191
org$pandalanguage$pandac$Annotations** $tmp491 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp492 = *$tmp491;
panda$core$String* $tmp493 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp492);
panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s495);
panda$core$String* $tmp496 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp494, $tmp496);
panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp497, &$s499);
org$pandalanguage$pandac$FixedArray** $tmp500 = &param0->body;
org$pandalanguage$pandac$FixedArray* $tmp501 = *$tmp500;
panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp498, ((panda$core$Object*) $tmp501));
panda$core$String* $tmp503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp502, &$s504);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
// unreffing REF($10:panda.core.String)
return $tmp503;
block2:;
// line 193
panda$core$String* $tmp505 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
// unreffing REF($45:panda.core.String)
return $tmp505;

}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* param0) {

// line 6
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
panda$core$Weak** $tmp506 = &param0->owner;
panda$core$Weak* $tmp507 = *$tmp506;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
panda$core$String** $tmp508 = &param0->doccomment;
panda$core$String* $tmp509 = *$tmp508;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
org$pandalanguage$pandac$Annotations** $tmp510 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp511 = *$tmp510;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
panda$collections$Array** $tmp512 = &param0->genericParameters;
panda$collections$Array* $tmp513 = *$tmp512;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
panda$collections$Array** $tmp514 = &param0->parameters;
panda$collections$Array* $tmp515 = *$tmp514;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
org$pandalanguage$pandac$Type** $tmp516 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp517 = *$tmp516;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp517));
org$pandalanguage$pandac$FixedArray** $tmp518 = &param0->body;
org$pandalanguage$pandac$FixedArray* $tmp519 = *$tmp518;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
panda$core$Weak** $tmp520 = &param0->overridden;
panda$core$Weak* $tmp521 = *$tmp520;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
return;

}

