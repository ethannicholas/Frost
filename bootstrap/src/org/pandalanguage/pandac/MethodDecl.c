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
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Bit.h"
#include "panda/core/Weak.h"
#include "panda/core/Object.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/Symbol/Kind.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Equatable.h"
#include "panda/collections/CollectionView.h"
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

typedef panda$collections$Iterator* (*$fn29)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn33)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn38)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn64)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn79)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn100)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn111)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn123)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn133)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn141)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn147)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn157)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn191)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn228)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn232)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn237)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn282)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn310)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn317)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn321)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn326)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn342)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn372)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn381)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn399)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x67\x65\x74\x5f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 105, -4161089433249330848, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void org$pandalanguage$pandac$MethodDecl$init$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$Annotations$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$Array$LTorg$pandalanguage$pandac$ClassDecl$GenericParameter$GT$Q$panda$collections$Array$LTorg$pandalanguage$pandac$MethodDecl$Parameter$GT$org$pandalanguage$pandac$Type$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$MethodDecl* param0, org$pandalanguage$pandac$ClassDecl* param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$Annotations* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, panda$collections$Array* param7, panda$collections$Array* param8, org$pandalanguage$pandac$Type* param9, panda$collections$ImmutableArray* param10) {

org$pandalanguage$pandac$MethodDecl$Parameter* local0 = NULL;
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
panda$core$Weak** $tmp8 = &param0->overridden;
panda$core$Weak* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Weak** $tmp10 = &param0->overridden;
*$tmp10 = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// line 70
panda$core$Int64 $tmp11 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Symbol$Kind $tmp12 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp11);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp12, param2, param6);
// line 71
panda$core$Weak* $tmp13 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp13, ((panda$core$Object*) param1));
panda$core$Weak** $tmp14 = &param0->owner;
panda$core$Weak* $tmp15 = *$tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$Weak** $tmp16 = &param0->owner;
*$tmp16 = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// line 72
panda$core$String** $tmp17 = &param0->doccomment;
panda$core$String* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp19 = &param0->doccomment;
*$tmp19 = param3;
// line 73
org$pandalanguage$pandac$Annotations** $tmp20 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp21 = *$tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Annotations** $tmp22 = &param0->annotations;
*$tmp22 = param4;
// line 74
org$pandalanguage$pandac$MethodDecl$Kind* $tmp23 = &param0->methodKind;
*$tmp23 = param5;
// line 75
panda$collections$Array** $tmp24 = &param0->genericParameters;
panda$collections$Array* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
panda$collections$Array** $tmp26 = &param0->genericParameters;
*$tmp26 = param7;
// line 76
ITable* $tmp27 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp27->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp27 = $tmp27->next;
}
$fn29 $tmp28 = $tmp27->methods[0];
panda$collections$Iterator* $tmp30 = $tmp28(((panda$collections$Iterable*) param8));
goto block1;
block1:;
ITable* $tmp31 = $tmp30->$class->itable;
while ($tmp31->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
panda$core$Bit $tmp34 = $tmp32($tmp30);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block3; else goto block2;
block2:;
*(&local0) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp36 = $tmp30->$class->itable;
while ($tmp36->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[1];
panda$core$Object* $tmp39 = $tmp37($tmp30);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp40 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp39)));
*(&local0) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp39);
// line 77
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp41 = *(&local0);
panda$core$Weak* $tmp42 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp42, ((panda$core$Object*) param0));
panda$core$Weak** $tmp43 = &$tmp41->owner;
panda$core$Weak* $tmp44 = *$tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$core$Weak** $tmp45 = &$tmp41->owner;
*$tmp45 = $tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$core$Panda$unref$panda$core$Object$Q($tmp39);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp46 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing p
*(&local0) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// line 79
panda$collections$Array** $tmp47 = &param0->parameters;
panda$collections$Array* $tmp48 = *$tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$collections$Array** $tmp49 = &param0->parameters;
*$tmp49 = param8;
// line 80
org$pandalanguage$pandac$Type** $tmp50 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp51 = *$tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$Type** $tmp52 = &param0->returnType;
*$tmp52 = param9;
// line 81
panda$collections$ImmutableArray** $tmp53 = &param0->body;
panda$collections$ImmutableArray* $tmp54 = *$tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
panda$collections$ImmutableArray** $tmp55 = &param0->body;
*$tmp55 = param10;
return;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

// line 86
org$pandalanguage$pandac$MethodDecl$Kind* $tmp56 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp57 = *$tmp56;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp58;
$tmp58 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp58->value = $tmp57;
panda$core$Int64 $tmp59 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp60 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp59);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp61;
$tmp61 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp61->value = $tmp60;
ITable* $tmp62 = ((panda$core$Equatable*) $tmp58)->$class->itable;
while ($tmp62->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp62 = $tmp62->next;
}
$fn64 $tmp63 = $tmp62->methods[1];
panda$core$Bit $tmp65 = $tmp63(((panda$core$Equatable*) $tmp58), ((panda$core$Equatable*) $tmp61));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp58)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp61)));
return $tmp65;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 90
org$pandalanguage$pandac$Annotations** $tmp66 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp67 = *$tmp66;
panda$core$Bit $tmp68 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp67);
panda$core$Bit $tmp69 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp71 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp72 = *$tmp71;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp73;
$tmp73 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp73->value = $tmp72;
panda$core$Int64 $tmp74 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp75 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp74);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp76;
$tmp76 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp76->value = $tmp75;
ITable* $tmp77 = ((panda$core$Equatable*) $tmp73)->$class->itable;
while ($tmp77->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp77 = $tmp77->next;
}
$fn79 $tmp78 = $tmp77->methods[1];
panda$core$Bit $tmp80 = $tmp78(((panda$core$Equatable*) $tmp73), ((panda$core$Equatable*) $tmp76));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp73)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp76)));
*(&local1) = $tmp80;
goto block3;
block2:;
*(&local1) = $tmp69;
goto block3;
block3:;
panda$core$Bit $tmp81 = *(&local1);
bool $tmp82 = $tmp81.value;
if ($tmp82) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Annotations** $tmp83 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp84 = *$tmp83;
panda$core$Bit $tmp85 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp84);
panda$core$Bit $tmp86 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp85);
*(&local0) = $tmp86;
goto block6;
block5:;
*(&local0) = $tmp81;
goto block6;
block6:;
panda$core$Bit $tmp87 = *(&local0);
return $tmp87;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

// line 94
org$pandalanguage$pandac$Annotations** $tmp88 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp89 = *$tmp88;
panda$core$Bit $tmp90 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp89);
panda$core$Bit $tmp91 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp90);
return $tmp91;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$Bit local0;
panda$core$Int64 local1;
// line 98
org$pandalanguage$pandac$Compiler$Resolution* $tmp92 = &param0->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp93 = *$tmp92;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp94;
$tmp94 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp94->value = $tmp93;
panda$core$Int64 $tmp95 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp96 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp95);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp97;
$tmp97 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp97->value = $tmp96;
ITable* $tmp98 = ((panda$core$Equatable*) $tmp94)->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[1];
panda$core$Bit $tmp101 = $tmp99(((panda$core$Equatable*) $tmp94), ((panda$core$Equatable*) $tmp97));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp94)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp97)));
bool $tmp102 = $tmp101.value;
if ($tmp102) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Compiler$Resolution* $tmp103 = &param1->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp104 = *$tmp103;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp105;
$tmp105 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp105->value = $tmp104;
panda$core$Int64 $tmp106 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp107 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp106);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp108;
$tmp108 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp108->value = $tmp107;
ITable* $tmp109 = ((panda$core$Equatable*) $tmp105)->$class->itable;
while ($tmp109->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[1];
panda$core$Bit $tmp112 = $tmp110(((panda$core$Equatable*) $tmp105), ((panda$core$Equatable*) $tmp108));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp105)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp108)));
*(&local0) = $tmp112;
goto block3;
block2:;
*(&local0) = $tmp101;
goto block3;
block3:;
panda$core$Bit $tmp113 = *(&local0);
bool $tmp114 = $tmp113.value;
if ($tmp114) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp115 = (panda$core$Int64) {98};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s116, $tmp115);
abort(); // unreachable
block4:;
// line 100
panda$core$String** $tmp117 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp118 = *$tmp117;
panda$core$String** $tmp119 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp120 = *$tmp119;
ITable* $tmp121 = ((panda$core$Equatable*) $tmp118)->$class->itable;
while ($tmp121->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp121 = $tmp121->next;
}
$fn123 $tmp122 = $tmp121->methods[1];
panda$core$Bit $tmp124 = $tmp122(((panda$core$Equatable*) $tmp118), ((panda$core$Equatable*) $tmp120));
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block6; else goto block7;
block6:;
// line 101
panda$core$Bit $tmp126 = panda$core$Bit$init$builtin_bit(false);
return $tmp126;
block7:;
// line 103
org$pandalanguage$pandac$Type** $tmp127 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp128 = *$tmp127;
org$pandalanguage$pandac$Type** $tmp129 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp130 = *$tmp129;
ITable* $tmp131 = ((panda$core$Equatable*) $tmp128)->$class->itable;
while ($tmp131->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp131 = $tmp131->next;
}
$fn133 $tmp132 = $tmp131->methods[1];
panda$core$Bit $tmp134 = $tmp132(((panda$core$Equatable*) $tmp128), ((panda$core$Equatable*) $tmp130));
bool $tmp135 = $tmp134.value;
if ($tmp135) goto block8; else goto block9;
block8:;
// line 104
panda$core$Bit $tmp136 = panda$core$Bit$init$builtin_bit(false);
return $tmp136;
block9:;
// line 106
panda$collections$Array** $tmp137 = &param0->parameters;
panda$collections$Array* $tmp138 = *$tmp137;
ITable* $tmp139 = ((panda$collections$CollectionView*) $tmp138)->$class->itable;
while ($tmp139->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[0];
panda$core$Int64 $tmp142 = $tmp140(((panda$collections$CollectionView*) $tmp138));
panda$collections$Array** $tmp143 = &param1->parameters;
panda$collections$Array* $tmp144 = *$tmp143;
ITable* $tmp145 = ((panda$collections$CollectionView*) $tmp144)->$class->itable;
while ($tmp145->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
panda$core$Int64 $tmp148 = $tmp146(((panda$collections$CollectionView*) $tmp144));
panda$core$Bit $tmp149 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp142, $tmp148);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block10; else goto block11;
block10:;
// line 107
panda$core$Bit $tmp151 = panda$core$Bit$init$builtin_bit(false);
return $tmp151;
block11:;
// line 109
panda$core$Int64 $tmp152 = (panda$core$Int64) {0};
panda$collections$Array** $tmp153 = &param0->parameters;
panda$collections$Array* $tmp154 = *$tmp153;
ITable* $tmp155 = ((panda$collections$CollectionView*) $tmp154)->$class->itable;
while ($tmp155->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
panda$core$Int64 $tmp158 = $tmp156(((panda$collections$CollectionView*) $tmp154));
panda$core$Bit $tmp159 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp160 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp152, $tmp158, $tmp159);
panda$core$Int64 $tmp161 = $tmp160.min;
*(&local1) = $tmp161;
panda$core$Int64 $tmp162 = $tmp160.max;
panda$core$Bit $tmp163 = $tmp160.inclusive;
bool $tmp164 = $tmp163.value;
panda$core$Int64 $tmp165 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp166 = panda$core$Int64$convert$R$panda$core$UInt64($tmp165);
if ($tmp164) goto block15; else goto block16;
block15:;
int64_t $tmp167 = $tmp161.value;
int64_t $tmp168 = $tmp162.value;
bool $tmp169 = $tmp167 <= $tmp168;
panda$core$Bit $tmp170 = (panda$core$Bit) {$tmp169};
bool $tmp171 = $tmp170.value;
if ($tmp171) goto block12; else goto block13;
block16:;
int64_t $tmp172 = $tmp161.value;
int64_t $tmp173 = $tmp162.value;
bool $tmp174 = $tmp172 < $tmp173;
panda$core$Bit $tmp175 = (panda$core$Bit) {$tmp174};
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block12; else goto block13;
block12:;
// line 110
panda$collections$Array** $tmp177 = &param0->parameters;
panda$collections$Array* $tmp178 = *$tmp177;
panda$core$Int64 $tmp179 = *(&local1);
panda$core$Object* $tmp180 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp178, $tmp179);
org$pandalanguage$pandac$Type** $tmp181 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp180)->type;
org$pandalanguage$pandac$Type* $tmp182 = *$tmp181;
panda$collections$Array** $tmp183 = &param1->parameters;
panda$collections$Array* $tmp184 = *$tmp183;
panda$core$Int64 $tmp185 = *(&local1);
panda$core$Object* $tmp186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp184, $tmp185);
org$pandalanguage$pandac$Type** $tmp187 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp186)->type;
org$pandalanguage$pandac$Type* $tmp188 = *$tmp187;
ITable* $tmp189 = ((panda$core$Equatable*) $tmp182)->$class->itable;
while ($tmp189->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[1];
panda$core$Bit $tmp192 = $tmp190(((panda$core$Equatable*) $tmp182), ((panda$core$Equatable*) $tmp188));
panda$core$Panda$unref$panda$core$Object$Q($tmp180);
panda$core$Panda$unref$panda$core$Object$Q($tmp186);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block17; else goto block18;
block17:;
// line 111
panda$core$Bit $tmp194 = panda$core$Bit$init$builtin_bit(false);
return $tmp194;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp195 = *(&local1);
int64_t $tmp196 = $tmp162.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 - $tmp197;
panda$core$Int64 $tmp199 = (panda$core$Int64) {$tmp198};
panda$core$UInt64 $tmp200 = panda$core$Int64$convert$R$panda$core$UInt64($tmp199);
if ($tmp164) goto block20; else goto block21;
block20:;
uint64_t $tmp201 = $tmp200.value;
uint64_t $tmp202 = $tmp166.value;
bool $tmp203 = $tmp201 >= $tmp202;
panda$core$Bit $tmp204 = (panda$core$Bit) {$tmp203};
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block19; else goto block13;
block21:;
uint64_t $tmp206 = $tmp200.value;
uint64_t $tmp207 = $tmp166.value;
bool $tmp208 = $tmp206 > $tmp207;
panda$core$Bit $tmp209 = (panda$core$Bit) {$tmp208};
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block19; else goto block13;
block19:;
int64_t $tmp211 = $tmp195.value;
int64_t $tmp212 = $tmp165.value;
int64_t $tmp213 = $tmp211 + $tmp212;
panda$core$Int64 $tmp214 = (panda$core$Int64) {$tmp213};
*(&local1) = $tmp214;
goto block12;
block13:;
// line 114
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit(true);
return $tmp215;

}
panda$core$Int64 org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(org$pandalanguage$pandac$MethodDecl* param0) {

org$pandalanguage$pandac$Annotations$Expression* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$UInt64 local2;
org$pandalanguage$pandac$parser$Token$Kind local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$UInt64 local5;
// line 118
org$pandalanguage$pandac$Annotations** $tmp216 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp217 = *$tmp216;
panda$collections$Array** $tmp218 = &$tmp217->expressions;
panda$collections$Array* $tmp219 = *$tmp218;
panda$core$Bit $tmp220 = panda$core$Bit$init$builtin_bit($tmp219 != NULL);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block1; else goto block2;
block1:;
// line 119
org$pandalanguage$pandac$Annotations** $tmp222 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp223 = *$tmp222;
panda$collections$Array** $tmp224 = &$tmp223->expressions;
panda$collections$Array* $tmp225 = *$tmp224;
ITable* $tmp226 = ((panda$collections$Iterable*) $tmp225)->$class->itable;
while ($tmp226->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp226 = $tmp226->next;
}
$fn228 $tmp227 = $tmp226->methods[0];
panda$collections$Iterator* $tmp229 = $tmp227(((panda$collections$Iterable*) $tmp225));
goto block3;
block3:;
ITable* $tmp230 = $tmp229->$class->itable;
while ($tmp230->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp230 = $tmp230->next;
}
$fn232 $tmp231 = $tmp230->methods[0];
panda$core$Bit $tmp233 = $tmp231($tmp229);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block5; else goto block4;
block4:;
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
ITable* $tmp235 = $tmp229->$class->itable;
while ($tmp235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp235 = $tmp235->next;
}
$fn237 $tmp236 = $tmp235->methods[1];
panda$core$Object* $tmp238 = $tmp236($tmp229);
org$pandalanguage$pandac$Annotations$Expression* $tmp239 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Annotations$Expression*) $tmp238)));
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp238);
// line 120
org$pandalanguage$pandac$Annotations$Expression* $tmp240 = *(&local0);
panda$core$Int64* $tmp241 = &$tmp240->$rawValue;
panda$core$Int64 $tmp242 = *$tmp241;
panda$core$Int64 $tmp243 = (panda$core$Int64) {4};
panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp242, $tmp243);
bool $tmp245 = $tmp244.value;
if ($tmp245) goto block7; else goto block6;
block7:;
panda$core$String** $tmp246 = (panda$core$String**) ($tmp240->$data + 0);
panda$core$String* $tmp247 = *$tmp246;
org$pandalanguage$pandac$ASTNode** $tmp248 = (org$pandalanguage$pandac$ASTNode**) ($tmp240->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp249 = *$tmp248;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp250 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp250));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp249));
*(&local1) = $tmp249;
// line 122
org$pandalanguage$pandac$ASTNode* $tmp251 = *(&local1);
panda$core$Int64* $tmp252 = &$tmp251->$rawValue;
panda$core$Int64 $tmp253 = *$tmp252;
panda$core$Int64 $tmp254 = (panda$core$Int64) {22};
panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp253, $tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Position* $tmp257 = (org$pandalanguage$pandac$Position*) ($tmp251->$data + 0);
org$pandalanguage$pandac$Position $tmp258 = *$tmp257;
panda$core$UInt64* $tmp259 = (panda$core$UInt64*) ($tmp251->$data + 16);
panda$core$UInt64 $tmp260 = *$tmp259;
*(&local2) = $tmp260;
// line 124
panda$core$UInt64 $tmp261 = *(&local2);
panda$core$Int64 $tmp262 = panda$core$UInt64$convert$R$panda$core$Int64($tmp261);
org$pandalanguage$pandac$ASTNode* $tmp263 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Annotations$Expression* $tmp264 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp264));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
return $tmp262;
block10:;
panda$core$Int64 $tmp265 = (panda$core$Int64) {32};
panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp253, $tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block11; else goto block8;
block11:;
org$pandalanguage$pandac$Position* $tmp268 = (org$pandalanguage$pandac$Position*) ($tmp251->$data + 0);
org$pandalanguage$pandac$Position $tmp269 = *$tmp268;
org$pandalanguage$pandac$parser$Token$Kind* $tmp270 = (org$pandalanguage$pandac$parser$Token$Kind*) ($tmp251->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp271 = *$tmp270;
*(&local3) = $tmp271;
org$pandalanguage$pandac$ASTNode** $tmp272 = (org$pandalanguage$pandac$ASTNode**) ($tmp251->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp273 = *$tmp272;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp274 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp274));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp273));
*(&local4) = $tmp273;
// line 126
org$pandalanguage$pandac$parser$Token$Kind $tmp275 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp276;
$tmp276 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp276->value = $tmp275;
panda$core$Int64 $tmp277 = (panda$core$Int64) {53};
org$pandalanguage$pandac$parser$Token$Kind $tmp278 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp277);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp279;
$tmp279 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp279->value = $tmp278;
ITable* $tmp280 = ((panda$core$Equatable*) $tmp276)->$class->itable;
while ($tmp280->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp280 = $tmp280->next;
}
$fn282 $tmp281 = $tmp280->methods[0];
panda$core$Bit $tmp283 = $tmp281(((panda$core$Equatable*) $tmp276), ((panda$core$Equatable*) $tmp279));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp276)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp279)));
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block12; else goto block13;
block12:;
// line 127
org$pandalanguage$pandac$ASTNode* $tmp285 = *(&local4);
panda$core$Int64* $tmp286 = &$tmp285->$rawValue;
panda$core$Int64 $tmp287 = *$tmp286;
panda$core$Int64 $tmp288 = (panda$core$Int64) {22};
panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp287, $tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block15; else goto block14;
block15:;
org$pandalanguage$pandac$Position* $tmp291 = (org$pandalanguage$pandac$Position*) ($tmp285->$data + 0);
org$pandalanguage$pandac$Position $tmp292 = *$tmp291;
panda$core$UInt64* $tmp293 = (panda$core$UInt64*) ($tmp285->$data + 16);
panda$core$UInt64 $tmp294 = *$tmp293;
*(&local5) = $tmp294;
// line 129
panda$core$UInt64 $tmp295 = *(&local5);
panda$core$Int64 $tmp296 = panda$core$UInt64$convert$R$panda$core$Int64($tmp295);
panda$core$Int64 $tmp297 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp296);
org$pandalanguage$pandac$ASTNode* $tmp298 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp298));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp299 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp299));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Annotations$Expression* $tmp300 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp300));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
return $tmp297;
block14:;
goto block13;
block13:;
org$pandalanguage$pandac$ASTNode* $tmp301 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
org$pandalanguage$pandac$ASTNode* $tmp302 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q($tmp238);
org$pandalanguage$pandac$Annotations$Expression* $tmp303 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
goto block2;
block2:;
// line 136
panda$core$Int64 $tmp304 = (panda$core$Int64) {0};
return $tmp304;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local1 = NULL;
org$pandalanguage$pandac$Type$Kind local2;
// line 140
panda$collections$Array* $tmp305 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array** $tmp306 = &param0->parameters;
panda$collections$Array* $tmp307 = *$tmp306;
ITable* $tmp308 = ((panda$collections$CollectionView*) $tmp307)->$class->itable;
while ($tmp308->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp308 = $tmp308->next;
}
$fn310 $tmp309 = $tmp308->methods[0];
panda$core$Int64 $tmp311 = $tmp309(((panda$collections$CollectionView*) $tmp307));
panda$collections$Array$init$panda$core$Int64($tmp305, $tmp311);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp312 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp312));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
*(&local0) = $tmp305;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// line 141
panda$collections$Array** $tmp313 = &param0->parameters;
panda$collections$Array* $tmp314 = *$tmp313;
ITable* $tmp315 = ((panda$collections$Iterable*) $tmp314)->$class->itable;
while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp315 = $tmp315->next;
}
$fn317 $tmp316 = $tmp315->methods[0];
panda$collections$Iterator* $tmp318 = $tmp316(((panda$collections$Iterable*) $tmp314));
goto block1;
block1:;
ITable* $tmp319 = $tmp318->$class->itable;
while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[0];
panda$core$Bit $tmp322 = $tmp320($tmp318);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp324 = $tmp318->$class->itable;
while ($tmp324->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp324 = $tmp324->next;
}
$fn326 $tmp325 = $tmp324->methods[1];
panda$core$Object* $tmp327 = $tmp325($tmp318);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp328 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp327)));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp327);
// line 142
panda$collections$Array* $tmp329 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp330 = *(&local1);
org$pandalanguage$pandac$Type** $tmp331 = &$tmp330->type;
org$pandalanguage$pandac$Type* $tmp332 = *$tmp331;
panda$collections$Array$add$panda$collections$Array$T($tmp329, ((panda$core$Object*) $tmp332));
panda$core$Panda$unref$panda$core$Object$Q($tmp327);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp333 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// line 144
// line 145
org$pandalanguage$pandac$MethodDecl$Kind* $tmp334 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp335 = *$tmp334;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp336;
$tmp336 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp336->value = $tmp335;
panda$core$Int64 $tmp337 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp338 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp337);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp339;
$tmp339 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp339->value = $tmp338;
ITable* $tmp340 = ((panda$core$Equatable*) $tmp336)->$class->itable;
while ($tmp340->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp340 = $tmp340->next;
}
$fn342 $tmp341 = $tmp340->methods[0];
panda$core$Bit $tmp343 = $tmp341(((panda$core$Equatable*) $tmp336), ((panda$core$Equatable*) $tmp339));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp336)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp339)));
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block4; else goto block6;
block4:;
// line 146
panda$core$Int64 $tmp345 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp346 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp345);
*(&local2) = $tmp346;
goto block5;
block6:;
// line 1
// line 149
panda$core$Int64 $tmp347 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp348 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp347);
*(&local2) = $tmp348;
goto block5;
block5:;
// line 151
org$pandalanguage$pandac$Position* $tmp349 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp350 = *$tmp349;
org$pandalanguage$pandac$Type$Kind $tmp351 = *(&local2);
panda$collections$Array* $tmp352 = *(&local0);
org$pandalanguage$pandac$Type** $tmp353 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp354 = *$tmp353;
panda$core$Int64 $tmp355 = org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(param0);
org$pandalanguage$pandac$Type* $tmp356 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp350, $tmp351, ((panda$collections$ListView*) $tmp352), $tmp354, $tmp355);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
panda$collections$Array* $tmp357 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp357));
// unreffing paramTypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp356;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
// line 155
panda$core$MutableString* $tmp358 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String** $tmp359 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp360 = *$tmp359;
panda$core$String* $tmp361 = panda$core$String$convert$R$panda$core$String($tmp360);
panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s363);
panda$core$MutableString$init$panda$core$String($tmp358, $tmp362);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp364 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
*(&local0) = $tmp358;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp358));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
// line 156
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp365 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s366));
*(&local1) = &$s367;
// line 157
panda$collections$Array** $tmp368 = &param0->parameters;
panda$collections$Array* $tmp369 = *$tmp368;
ITable* $tmp370 = ((panda$collections$Iterable*) $tmp369)->$class->itable;
while ($tmp370->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp370 = $tmp370->next;
}
$fn372 $tmp371 = $tmp370->methods[0];
panda$collections$Iterator* $tmp373 = $tmp371(((panda$collections$Iterable*) $tmp369));
goto block1;
block1:;
ITable* $tmp374 = $tmp373->$class->itable;
while ($tmp374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp374 = $tmp374->next;
}
$fn376 $tmp375 = $tmp374->methods[0];
panda$core$Bit $tmp377 = $tmp375($tmp373);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp379 = $tmp373->$class->itable;
while ($tmp379->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp379 = $tmp379->next;
}
$fn381 $tmp380 = $tmp379->methods[1];
panda$core$Object* $tmp382 = $tmp380($tmp373);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp383 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp383));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp382)));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp382);
// line 158
panda$core$MutableString* $tmp384 = *(&local0);
panda$core$String* $tmp385 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp384, $tmp385);
// line 159
panda$core$MutableString* $tmp386 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp387 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp386, ((panda$core$Object*) $tmp387));
// line 160
panda$core$String* $tmp388 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp388));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s389));
*(&local1) = &$s390;
panda$core$Panda$unref$panda$core$Object$Q($tmp382);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp391 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp391));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
// line 162
panda$core$MutableString* $tmp392 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp392, &$s393);
// line 163
org$pandalanguage$pandac$Type** $tmp394 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp395 = *$tmp394;
org$pandalanguage$pandac$Type* $tmp396 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp397 = ((panda$core$Equatable*) $tmp395)->$class->itable;
while ($tmp397->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp397 = $tmp397->next;
}
$fn399 $tmp398 = $tmp397->methods[1];
panda$core$Bit $tmp400 = $tmp398(((panda$core$Equatable*) $tmp395), ((panda$core$Equatable*) $tmp396));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block4; else goto block5;
block4:;
// line 164
panda$core$MutableString* $tmp402 = *(&local0);
org$pandalanguage$pandac$Type** $tmp403 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp404 = *$tmp403;
panda$core$String* $tmp405 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s406, ((panda$core$Object*) $tmp404));
panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s408);
panda$core$MutableString$append$panda$core$String($tmp402, $tmp407);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
goto block5;
block5:;
// line 166
panda$core$MutableString* $tmp409 = *(&local0);
panda$core$String* $tmp410 = panda$core$MutableString$finish$R$panda$core$String($tmp409);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
panda$core$String* $tmp411 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp412 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp412));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp410;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 170
org$pandalanguage$pandac$MethodDecl$Kind* $tmp413 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp414 = *$tmp413;
panda$core$Int64 $tmp415 = $tmp414.$rawValue;
panda$core$Int64 $tmp416 = (panda$core$Int64) {0};
panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp415, $tmp416);
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block2; else goto block3;
block2:;
// line 172
panda$core$Weak** $tmp419 = &param0->owner;
panda$core$Weak* $tmp420 = *$tmp419;
panda$core$Object* $tmp421 = panda$core$Weak$get$R$panda$core$Weak$T($tmp420);
panda$core$Panda$unref$panda$core$Object$Q($tmp421);
panda$core$String** $tmp422 = &((org$pandalanguage$pandac$ClassDecl*) $tmp421)->name;
panda$core$String* $tmp423 = *$tmp422;
panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s425, $tmp423);
panda$core$String* $tmp426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, &$s427);
panda$core$String* $tmp428 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp426, $tmp428);
panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp429, &$s431);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp424));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp426));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
return $tmp430;
block3:;
panda$core$Int64 $tmp432 = (panda$core$Int64) {1};
panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp415, $tmp432);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block4; else goto block5;
block4:;
// line 174
panda$core$Weak** $tmp435 = &param0->owner;
panda$core$Weak* $tmp436 = *$tmp435;
panda$core$Object* $tmp437 = panda$core$Weak$get$R$panda$core$Weak$T($tmp436);
panda$core$Panda$unref$panda$core$Object$Q($tmp437);
panda$core$String** $tmp438 = &((org$pandalanguage$pandac$ClassDecl*) $tmp437)->name;
panda$core$String* $tmp439 = *$tmp438;
panda$core$String* $tmp440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s441, $tmp439);
panda$core$String* $tmp442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp440, &$s443);
panda$core$String* $tmp444 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp442, $tmp444);
panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s447);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp442));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
return $tmp446;
block5:;
panda$core$Int64 $tmp448 = (panda$core$Int64) {2};
panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp415, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block6; else goto block1;
block6:;
// line 176
panda$core$Weak** $tmp451 = &param0->owner;
panda$core$Weak* $tmp452 = *$tmp451;
panda$core$Object* $tmp453 = panda$core$Weak$get$R$panda$core$Weak$T($tmp452);
panda$core$Panda$unref$panda$core$Object$Q($tmp453);
panda$core$String** $tmp454 = &((org$pandalanguage$pandac$ClassDecl*) $tmp453)->name;
panda$core$String* $tmp455 = *$tmp454;
panda$core$String* $tmp456 = panda$core$String$convert$R$panda$core$String($tmp455);
panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, &$s458);
panda$core$String* $tmp459 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp457, $tmp459);
panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, &$s462);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp456));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp461));
return $tmp461;
block1:;
panda$core$Bit $tmp463 = panda$core$Bit$init$builtin_bit(false);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp465 = (panda$core$Int64) {169};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s466, $tmp465, &$s467);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 182
panda$collections$ImmutableArray** $tmp468 = &param0->body;
panda$collections$ImmutableArray* $tmp469 = *$tmp468;
panda$core$Bit $tmp470 = panda$core$Bit$init$builtin_bit($tmp469 != NULL);
bool $tmp471 = $tmp470.value;
if ($tmp471) goto block1; else goto block2;
block1:;
// line 183
org$pandalanguage$pandac$Annotations** $tmp472 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp473 = *$tmp472;
panda$core$String* $tmp474 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp473);
panda$core$String* $tmp475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp474, &$s476);
panda$core$String* $tmp477 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, $tmp477);
panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp478, &$s480);
panda$collections$ImmutableArray** $tmp481 = &param0->body;
panda$collections$ImmutableArray* $tmp482 = *$tmp481;
panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp479, ((panda$core$Object*) $tmp482));
panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s485);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp474));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp475));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
return $tmp484;
block2:;
// line 185
panda$core$String* $tmp486 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
return $tmp486;

}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$Weak** $tmp487 = &param0->owner;
panda$core$Weak* $tmp488 = *$tmp487;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp488));
panda$core$String** $tmp489 = &param0->doccomment;
panda$core$String* $tmp490 = *$tmp489;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
org$pandalanguage$pandac$Annotations** $tmp491 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp492 = *$tmp491;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
panda$collections$Array** $tmp493 = &param0->genericParameters;
panda$collections$Array* $tmp494 = *$tmp493;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
panda$collections$Array** $tmp495 = &param0->parameters;
panda$collections$Array* $tmp496 = *$tmp495;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
org$pandalanguage$pandac$Type** $tmp497 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp498 = *$tmp497;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
panda$collections$ImmutableArray** $tmp499 = &param0->body;
panda$collections$ImmutableArray* $tmp500 = *$tmp499;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
panda$core$Weak** $tmp501 = &param0->overridden;
panda$core$Weak* $tmp502 = *$tmp501;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
return;

}

