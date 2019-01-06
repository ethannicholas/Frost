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
typedef panda$core$Int64 (*$fn160)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn194)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn231)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn235)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn240)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn285)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn313)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn320)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn324)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn329)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn345)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn375)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn379)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn384)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn402)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x67\x65\x74\x5f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 105, -4161089433249330848, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s488 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Weak** $tmp8 = &param0->overridden;
panda$core$Weak* $tmp9 = *$tmp8;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$core$Weak** $tmp10 = &param0->overridden;
*$tmp10 = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// unreffing REF($10:panda.core.Weak<org.pandalanguage.pandac.MethodDecl?>)
// line 70
panda$core$Int64 $tmp11 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Symbol$Kind $tmp12 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp11);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp12, param2, param6);
// line 71
panda$core$Weak* $tmp13 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp13, ((panda$core$Object*) param1));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
panda$core$Weak** $tmp14 = &param0->owner;
panda$core$Weak* $tmp15 = *$tmp14;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Weak** $tmp16 = &param0->owner;
*$tmp16 = $tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp13));
// unreffing REF($31:panda.core.Weak<org.pandalanguage.pandac.ClassDecl>)
// line 72
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp17 = &param0->doccomment;
panda$core$String* $tmp18 = *$tmp17;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp18));
panda$core$String** $tmp19 = &param0->doccomment;
*$tmp19 = param3;
// line 73
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Annotations** $tmp20 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp21 = *$tmp20;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
org$pandalanguage$pandac$Annotations** $tmp22 = &param0->annotations;
*$tmp22 = param4;
// line 74
org$pandalanguage$pandac$MethodDecl$Kind* $tmp23 = &param0->methodKind;
*$tmp23 = param5;
// line 75
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
panda$collections$Array** $tmp24 = &param0->genericParameters;
panda$collections$Array* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
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
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp39)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp40 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
*(&local0) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp39);
// line 77
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp41 = *(&local0);
panda$core$Weak* $tmp42 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp42, ((panda$core$Object*) param0));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
panda$core$Weak** $tmp43 = &$tmp41->owner;
panda$core$Weak* $tmp44 = *$tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Weak** $tmp45 = &$tmp41->owner;
*$tmp45 = $tmp42;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp42));
// unreffing REF($102:panda.core.Weak<org.pandalanguage.pandac.MethodDecl?>)
panda$core$Panda$unref$panda$core$Object$Q($tmp39);
// unreffing REF($91:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp46 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing p
*(&local0) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
// unreffing REF($80:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 79
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$collections$Array** $tmp47 = &param0->parameters;
panda$collections$Array* $tmp48 = *$tmp47;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp48));
panda$collections$Array** $tmp49 = &param0->parameters;
*$tmp49 = param8;
// line 80
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$Type** $tmp50 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp51 = *$tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
org$pandalanguage$pandac$Type** $tmp52 = &param0->returnType;
*$tmp52 = param9;
// line 81
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
panda$collections$ImmutableArray** $tmp53 = &param0->body;
panda$collections$ImmutableArray* $tmp54 = *$tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp61)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp58)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp76)));
// unreffing REF($13:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp73)));
// unreffing REF($9:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp108)));
// unreffing REF($18:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp105)));
// unreffing REF($14:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
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
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp97)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp94)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
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
int64_t $tmp149 = $tmp142.value;
int64_t $tmp150 = $tmp148.value;
bool $tmp151 = $tmp149 != $tmp150;
panda$core$Bit $tmp152 = (panda$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block10; else goto block11;
block10:;
// line 107
panda$core$Bit $tmp154 = panda$core$Bit$init$builtin_bit(false);
return $tmp154;
block11:;
// line 109
panda$core$Int64 $tmp155 = (panda$core$Int64) {0};
panda$collections$Array** $tmp156 = &param0->parameters;
panda$collections$Array* $tmp157 = *$tmp156;
ITable* $tmp158 = ((panda$collections$CollectionView*) $tmp157)->$class->itable;
while ($tmp158->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
panda$core$Int64 $tmp161 = $tmp159(((panda$collections$CollectionView*) $tmp157));
panda$core$Bit $tmp162 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp163 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp155, $tmp161, $tmp162);
panda$core$Int64 $tmp164 = $tmp163.min;
*(&local1) = $tmp164;
panda$core$Int64 $tmp165 = $tmp163.max;
panda$core$Bit $tmp166 = $tmp163.inclusive;
bool $tmp167 = $tmp166.value;
panda$core$Int64 $tmp168 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp169 = panda$core$Int64$convert$R$panda$core$UInt64($tmp168);
if ($tmp167) goto block15; else goto block16;
block15:;
int64_t $tmp170 = $tmp164.value;
int64_t $tmp171 = $tmp165.value;
bool $tmp172 = $tmp170 <= $tmp171;
panda$core$Bit $tmp173 = (panda$core$Bit) {$tmp172};
bool $tmp174 = $tmp173.value;
if ($tmp174) goto block12; else goto block13;
block16:;
int64_t $tmp175 = $tmp164.value;
int64_t $tmp176 = $tmp165.value;
bool $tmp177 = $tmp175 < $tmp176;
panda$core$Bit $tmp178 = (panda$core$Bit) {$tmp177};
bool $tmp179 = $tmp178.value;
if ($tmp179) goto block12; else goto block13;
block12:;
// line 110
panda$collections$Array** $tmp180 = &param0->parameters;
panda$collections$Array* $tmp181 = *$tmp180;
panda$core$Int64 $tmp182 = *(&local1);
panda$core$Object* $tmp183 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp181, $tmp182);
org$pandalanguage$pandac$Type** $tmp184 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp183)->type;
org$pandalanguage$pandac$Type* $tmp185 = *$tmp184;
panda$collections$Array** $tmp186 = &param1->parameters;
panda$collections$Array* $tmp187 = *$tmp186;
panda$core$Int64 $tmp188 = *(&local1);
panda$core$Object* $tmp189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp187, $tmp188);
org$pandalanguage$pandac$Type** $tmp190 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp189)->type;
org$pandalanguage$pandac$Type* $tmp191 = *$tmp190;
ITable* $tmp192 = ((panda$core$Equatable*) $tmp185)->$class->itable;
while ($tmp192->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[1];
panda$core$Bit $tmp195 = $tmp193(((panda$core$Equatable*) $tmp185), ((panda$core$Equatable*) $tmp191));
bool $tmp196 = $tmp195.value;
panda$core$Panda$unref$panda$core$Object$Q($tmp189);
// unreffing REF($139:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q($tmp183);
// unreffing REF($129:panda.collections.Array.T)
if ($tmp196) goto block17; else goto block18;
block17:;
// line 111
panda$core$Bit $tmp197 = panda$core$Bit$init$builtin_bit(false);
return $tmp197;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp198 = *(&local1);
int64_t $tmp199 = $tmp165.value;
int64_t $tmp200 = $tmp198.value;
int64_t $tmp201 = $tmp199 - $tmp200;
panda$core$Int64 $tmp202 = (panda$core$Int64) {$tmp201};
panda$core$UInt64 $tmp203 = panda$core$Int64$convert$R$panda$core$UInt64($tmp202);
if ($tmp167) goto block20; else goto block21;
block20:;
uint64_t $tmp204 = $tmp203.value;
uint64_t $tmp205 = $tmp169.value;
bool $tmp206 = $tmp204 >= $tmp205;
panda$core$Bit $tmp207 = (panda$core$Bit) {$tmp206};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block19; else goto block13;
block21:;
uint64_t $tmp209 = $tmp203.value;
uint64_t $tmp210 = $tmp169.value;
bool $tmp211 = $tmp209 > $tmp210;
panda$core$Bit $tmp212 = (panda$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block19; else goto block13;
block19:;
int64_t $tmp214 = $tmp198.value;
int64_t $tmp215 = $tmp168.value;
int64_t $tmp216 = $tmp214 + $tmp215;
panda$core$Int64 $tmp217 = (panda$core$Int64) {$tmp216};
*(&local1) = $tmp217;
goto block12;
block13:;
// line 114
panda$core$Bit $tmp218 = panda$core$Bit$init$builtin_bit(true);
return $tmp218;

}
panda$core$Int64 org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(org$pandalanguage$pandac$MethodDecl* param0) {

org$pandalanguage$pandac$Annotations$Expression* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$UInt64 local2;
org$pandalanguage$pandac$parser$Token$Kind local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$UInt64 local5;
// line 118
org$pandalanguage$pandac$Annotations** $tmp219 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp220 = *$tmp219;
panda$collections$Array** $tmp221 = &$tmp220->expressions;
panda$collections$Array* $tmp222 = *$tmp221;
panda$core$Bit $tmp223 = panda$core$Bit$init$builtin_bit($tmp222 != NULL);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block1; else goto block2;
block1:;
// line 119
org$pandalanguage$pandac$Annotations** $tmp225 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp226 = *$tmp225;
panda$collections$Array** $tmp227 = &$tmp226->expressions;
panda$collections$Array* $tmp228 = *$tmp227;
ITable* $tmp229 = ((panda$collections$Iterable*) $tmp228)->$class->itable;
while ($tmp229->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp229 = $tmp229->next;
}
$fn231 $tmp230 = $tmp229->methods[0];
panda$collections$Iterator* $tmp232 = $tmp230(((panda$collections$Iterable*) $tmp228));
goto block3;
block3:;
ITable* $tmp233 = $tmp232->$class->itable;
while ($tmp233->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp233 = $tmp233->next;
}
$fn235 $tmp234 = $tmp233->methods[0];
panda$core$Bit $tmp236 = $tmp234($tmp232);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block5; else goto block4;
block4:;
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
ITable* $tmp238 = $tmp232->$class->itable;
while ($tmp238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp238 = $tmp238->next;
}
$fn240 $tmp239 = $tmp238->methods[1];
panda$core$Object* $tmp241 = $tmp239($tmp232);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Annotations$Expression*) $tmp241)));
org$pandalanguage$pandac$Annotations$Expression* $tmp242 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp241);
// line 120
org$pandalanguage$pandac$Annotations$Expression* $tmp243 = *(&local0);
panda$core$Int64* $tmp244 = &$tmp243->$rawValue;
panda$core$Int64 $tmp245 = *$tmp244;
panda$core$Int64 $tmp246 = (panda$core$Int64) {4};
panda$core$Bit $tmp247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp245, $tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block7; else goto block6;
block7:;
panda$core$String** $tmp249 = (panda$core$String**) ($tmp243->$data + 0);
panda$core$String* $tmp250 = *$tmp249;
org$pandalanguage$pandac$ASTNode** $tmp251 = (org$pandalanguage$pandac$ASTNode**) ($tmp243->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp252 = *$tmp251;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp252));
org$pandalanguage$pandac$ASTNode* $tmp253 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
*(&local1) = $tmp252;
// line 122
org$pandalanguage$pandac$ASTNode* $tmp254 = *(&local1);
panda$core$Int64* $tmp255 = &$tmp254->$rawValue;
panda$core$Int64 $tmp256 = *$tmp255;
panda$core$Int64 $tmp257 = (panda$core$Int64) {23};
panda$core$Bit $tmp258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp256, $tmp257);
bool $tmp259 = $tmp258.value;
if ($tmp259) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Position* $tmp260 = (org$pandalanguage$pandac$Position*) ($tmp254->$data + 0);
org$pandalanguage$pandac$Position $tmp261 = *$tmp260;
panda$core$UInt64* $tmp262 = (panda$core$UInt64*) ($tmp254->$data + 16);
panda$core$UInt64 $tmp263 = *$tmp262;
*(&local2) = $tmp263;
// line 124
panda$core$UInt64 $tmp264 = *(&local2);
panda$core$Int64 $tmp265 = panda$core$UInt64$convert$R$panda$core$Int64($tmp264);
org$pandalanguage$pandac$ASTNode* $tmp266 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp266));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp241);
// unreffing REF($28:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp267 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($17:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp265;
block10:;
panda$core$Int64 $tmp268 = (panda$core$Int64) {33};
panda$core$Bit $tmp269 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp256, $tmp268);
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block11; else goto block8;
block11:;
org$pandalanguage$pandac$Position* $tmp271 = (org$pandalanguage$pandac$Position*) ($tmp254->$data + 0);
org$pandalanguage$pandac$Position $tmp272 = *$tmp271;
org$pandalanguage$pandac$parser$Token$Kind* $tmp273 = (org$pandalanguage$pandac$parser$Token$Kind*) ($tmp254->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp274 = *$tmp273;
*(&local3) = $tmp274;
org$pandalanguage$pandac$ASTNode** $tmp275 = (org$pandalanguage$pandac$ASTNode**) ($tmp254->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp276 = *$tmp275;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp276));
org$pandalanguage$pandac$ASTNode* $tmp277 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp277));
*(&local4) = $tmp276;
// line 127
org$pandalanguage$pandac$parser$Token$Kind $tmp278 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp279;
$tmp279 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp279->value = $tmp278;
panda$core$Int64 $tmp280 = (panda$core$Int64) {53};
org$pandalanguage$pandac$parser$Token$Kind $tmp281 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp280);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp282;
$tmp282 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp282->value = $tmp281;
ITable* $tmp283 = ((panda$core$Equatable*) $tmp279)->$class->itable;
while ($tmp283->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp283 = $tmp283->next;
}
$fn285 $tmp284 = $tmp283->methods[0];
panda$core$Bit $tmp286 = $tmp284(((panda$core$Equatable*) $tmp279), ((panda$core$Equatable*) $tmp282));
bool $tmp287 = $tmp286.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp282)));
// unreffing REF($112:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp279)));
// unreffing REF($108:panda.core.Equatable<org.pandalanguage.pandac.parser.Token.Kind>)
if ($tmp287) goto block12; else goto block13;
block12:;
// line 128
org$pandalanguage$pandac$ASTNode* $tmp288 = *(&local4);
panda$core$Int64* $tmp289 = &$tmp288->$rawValue;
panda$core$Int64 $tmp290 = *$tmp289;
panda$core$Int64 $tmp291 = (panda$core$Int64) {23};
panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp290, $tmp291);
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block15; else goto block14;
block15:;
org$pandalanguage$pandac$Position* $tmp294 = (org$pandalanguage$pandac$Position*) ($tmp288->$data + 0);
org$pandalanguage$pandac$Position $tmp295 = *$tmp294;
panda$core$UInt64* $tmp296 = (panda$core$UInt64*) ($tmp288->$data + 16);
panda$core$UInt64 $tmp297 = *$tmp296;
*(&local5) = $tmp297;
// line 130
panda$core$UInt64 $tmp298 = *(&local5);
panda$core$Int64 $tmp299 = panda$core$UInt64$convert$R$panda$core$Int64($tmp298);
panda$core$Int64 $tmp300 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp299);
org$pandalanguage$pandac$ASTNode* $tmp301 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp301));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp302 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp241);
// unreffing REF($28:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp303 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp303));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($17:panda.collections.Iterator<panda.collections.Iterable.T>)
return $tmp300;
block14:;
goto block13;
block13:;
org$pandalanguage$pandac$ASTNode* $tmp304 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
org$pandalanguage$pandac$ASTNode* $tmp305 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q($tmp241);
// unreffing REF($28:panda.collections.Iterator.T)
org$pandalanguage$pandac$Annotations$Expression* $tmp306 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp232));
// unreffing REF($17:panda.collections.Iterator<panda.collections.Iterable.T>)
goto block2;
block2:;
// line 140
panda$core$Int64 $tmp307 = (panda$core$Int64) {0};
return $tmp307;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local1 = NULL;
org$pandalanguage$pandac$Type$Kind local2;
// line 144
panda$collections$Array* $tmp308 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array** $tmp309 = &param0->parameters;
panda$collections$Array* $tmp310 = *$tmp309;
ITable* $tmp311 = ((panda$collections$CollectionView*) $tmp310)->$class->itable;
while ($tmp311->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp311 = $tmp311->next;
}
$fn313 $tmp312 = $tmp311->methods[0];
panda$core$Int64 $tmp314 = $tmp312(((panda$collections$CollectionView*) $tmp310));
panda$collections$Array$init$panda$core$Int64($tmp308, $tmp314);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
panda$collections$Array* $tmp315 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp315));
*(&local0) = $tmp308;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing REF($1:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 145
panda$collections$Array** $tmp316 = &param0->parameters;
panda$collections$Array* $tmp317 = *$tmp316;
ITable* $tmp318 = ((panda$collections$Iterable*) $tmp317)->$class->itable;
while ($tmp318->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp318 = $tmp318->next;
}
$fn320 $tmp319 = $tmp318->methods[0];
panda$collections$Iterator* $tmp321 = $tmp319(((panda$collections$Iterable*) $tmp317));
goto block1;
block1:;
ITable* $tmp322 = $tmp321->$class->itable;
while ($tmp322->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[0];
panda$core$Bit $tmp325 = $tmp323($tmp321);
bool $tmp326 = $tmp325.value;
if ($tmp326) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp327 = $tmp321->$class->itable;
while ($tmp327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp327 = $tmp327->next;
}
$fn329 $tmp328 = $tmp327->methods[1];
panda$core$Object* $tmp330 = $tmp328($tmp321);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp330)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp331 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp330);
// line 146
panda$collections$Array* $tmp332 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp333 = *(&local1);
org$pandalanguage$pandac$Type** $tmp334 = &$tmp333->type;
org$pandalanguage$pandac$Type* $tmp335 = *$tmp334;
panda$collections$Array$add$panda$collections$Array$T($tmp332, ((panda$core$Object*) $tmp335));
panda$core$Panda$unref$panda$core$Object$Q($tmp330);
// unreffing REF($36:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp336 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp336));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing REF($25:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 148
// line 149
org$pandalanguage$pandac$MethodDecl$Kind* $tmp337 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp338 = *$tmp337;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp339;
$tmp339 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp339->value = $tmp338;
panda$core$Int64 $tmp340 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp341 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp340);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp342;
$tmp342 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp342->value = $tmp341;
ITable* $tmp343 = ((panda$core$Equatable*) $tmp339)->$class->itable;
while ($tmp343->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp343 = $tmp343->next;
}
$fn345 $tmp344 = $tmp343->methods[0];
panda$core$Bit $tmp346 = $tmp344(((panda$core$Equatable*) $tmp339), ((panda$core$Equatable*) $tmp342));
bool $tmp347 = $tmp346.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp342)));
// unreffing REF($72:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp339)));
// unreffing REF($68:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
if ($tmp347) goto block4; else goto block6;
block4:;
// line 150
panda$core$Int64 $tmp348 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp349 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp348);
*(&local2) = $tmp349;
goto block5;
block6:;
// line 1
// line 153
panda$core$Int64 $tmp350 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp351 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp350);
*(&local2) = $tmp351;
goto block5;
block5:;
// line 155
org$pandalanguage$pandac$Position* $tmp352 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp353 = *$tmp352;
org$pandalanguage$pandac$Type$Kind $tmp354 = *(&local2);
panda$collections$Array* $tmp355 = *(&local0);
org$pandalanguage$pandac$Type** $tmp356 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp357 = *$tmp356;
panda$core$Int64 $tmp358 = org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(param0);
org$pandalanguage$pandac$Type* $tmp359 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp353, $tmp354, ((panda$collections$ListView*) $tmp355), $tmp357, $tmp358);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp359));
// unreffing REF($104:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp360 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing paramTypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp359;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
// line 159
panda$core$MutableString* $tmp361 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String** $tmp362 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp363 = *$tmp362;
panda$core$String* $tmp364 = panda$core$String$convert$R$panda$core$String($tmp363);
panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s366);
panda$core$MutableString$init$panda$core$String($tmp361, $tmp365);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
panda$core$MutableString* $tmp367 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
*(&local0) = $tmp361;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
// unreffing REF($1:panda.core.MutableString)
// line 160
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s368));
panda$core$String* $tmp369 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
*(&local1) = &$s370;
// line 161
panda$collections$Array** $tmp371 = &param0->parameters;
panda$collections$Array* $tmp372 = *$tmp371;
ITable* $tmp373 = ((panda$collections$Iterable*) $tmp372)->$class->itable;
while ($tmp373->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp373 = $tmp373->next;
}
$fn375 $tmp374 = $tmp373->methods[0];
panda$collections$Iterator* $tmp376 = $tmp374(((panda$collections$Iterable*) $tmp372));
goto block1;
block1:;
ITable* $tmp377 = $tmp376->$class->itable;
while ($tmp377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp377 = $tmp377->next;
}
$fn379 $tmp378 = $tmp377->methods[0];
panda$core$Bit $tmp380 = $tmp378($tmp376);
bool $tmp381 = $tmp380.value;
if ($tmp381) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp382 = $tmp376->$class->itable;
while ($tmp382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp382 = $tmp382->next;
}
$fn384 $tmp383 = $tmp382->methods[1];
panda$core$Object* $tmp385 = $tmp383($tmp376);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp385)));
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp386 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp386));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp385);
// line 162
panda$core$MutableString* $tmp387 = *(&local0);
panda$core$String* $tmp388 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp387, $tmp388);
// line 163
panda$core$MutableString* $tmp389 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp390 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp389, ((panda$core$Object*) $tmp390));
// line 164
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s391));
panda$core$String* $tmp392 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp392));
*(&local1) = &$s393;
panda$core$Panda$unref$panda$core$Object$Q($tmp385);
// unreffing REF($49:panda.collections.Iterator.T)
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp394 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing REF($38:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 166
panda$core$MutableString* $tmp395 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp395, &$s396);
// line 167
org$pandalanguage$pandac$Type** $tmp397 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp398 = *$tmp397;
org$pandalanguage$pandac$Type* $tmp399 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp400 = ((panda$core$Equatable*) $tmp398)->$class->itable;
while ($tmp400->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp400 = $tmp400->next;
}
$fn402 $tmp401 = $tmp400->methods[1];
panda$core$Bit $tmp403 = $tmp401(((panda$core$Equatable*) $tmp398), ((panda$core$Equatable*) $tmp399));
bool $tmp404 = $tmp403.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp399));
// unreffing REF($93:org.pandalanguage.pandac.Type)
if ($tmp404) goto block4; else goto block5;
block4:;
// line 168
panda$core$MutableString* $tmp405 = *(&local0);
org$pandalanguage$pandac$Type** $tmp406 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp407 = *$tmp406;
panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s409, ((panda$core$Object*) $tmp407));
panda$core$String* $tmp410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp408, &$s411);
panda$core$MutableString$append$panda$core$String($tmp405, $tmp410);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp410));
// unreffing REF($108:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
// unreffing REF($107:panda.core.String)
goto block5;
block5:;
// line 170
panda$core$MutableString* $tmp412 = *(&local0);
panda$core$String* $tmp413 = panda$core$MutableString$finish$R$panda$core$String($tmp412);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
// unreffing REF($119:panda.core.String)
panda$core$String* $tmp414 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp414));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp415 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp415));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp413;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 174
org$pandalanguage$pandac$MethodDecl$Kind* $tmp416 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp417 = *$tmp416;
panda$core$Int64 $tmp418 = $tmp417.$rawValue;
panda$core$Int64 $tmp419 = (panda$core$Int64) {0};
panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp418, $tmp419);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block2; else goto block3;
block2:;
// line 176
panda$core$Weak** $tmp422 = &param0->owner;
panda$core$Weak* $tmp423 = *$tmp422;
panda$core$Object* $tmp424 = panda$core$Weak$get$R$panda$core$Weak$T($tmp423);
panda$core$String** $tmp425 = &((org$pandalanguage$pandac$ClassDecl*) $tmp424)->name;
panda$core$String* $tmp426 = *$tmp425;
panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s428, $tmp426);
panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp427, &$s430);
panda$core$String* $tmp431 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp429, $tmp431);
panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp432, &$s434);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp433));
// unreffing REF($20:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp431));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp429));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
// unreffing REF($16:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp424);
// unreffing REF($12:panda.core.Weak.T)
return $tmp433;
block3:;
panda$core$Int64 $tmp435 = (panda$core$Int64) {1};
panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp418, $tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block4; else goto block5;
block4:;
// line 179
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
// unreffing REF($58:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
// unreffing REF($57:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp447));
// unreffing REF($56:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
// unreffing REF($55:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp443));
// unreffing REF($54:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp440);
// unreffing REF($50:panda.core.Weak.T)
return $tmp449;
block5:;
panda$core$Int64 $tmp451 = (panda$core$Int64) {2};
panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp418, $tmp451);
bool $tmp453 = $tmp452.value;
if ($tmp453) goto block6; else goto block1;
block6:;
// line 182
panda$core$Weak** $tmp454 = &param0->owner;
panda$core$Weak* $tmp455 = *$tmp454;
panda$core$Object* $tmp456 = panda$core$Weak$get$R$panda$core$Weak$T($tmp455);
panda$core$String** $tmp457 = &((org$pandalanguage$pandac$ClassDecl*) $tmp456)->name;
panda$core$String* $tmp458 = *$tmp457;
panda$core$String* $tmp459 = panda$core$String$convert$R$panda$core$String($tmp458);
panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp459, &$s461);
panda$core$String* $tmp462 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, $tmp462);
panda$core$String* $tmp464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp463, &$s465);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
// unreffing REF($96:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
// unreffing REF($95:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
// unreffing REF($94:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp460));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp456);
// unreffing REF($88:panda.core.Weak.T)
return $tmp464;
block1:;
panda$core$Bit $tmp466 = panda$core$Bit$init$builtin_bit(false);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp468 = (panda$core$Int64) {173};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s469, $tmp468, &$s470);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 189
panda$collections$ImmutableArray** $tmp471 = &param0->body;
panda$collections$ImmutableArray* $tmp472 = *$tmp471;
panda$core$Bit $tmp473 = panda$core$Bit$init$builtin_bit($tmp472 != NULL);
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block1; else goto block2;
block1:;
// line 190
org$pandalanguage$pandac$Annotations** $tmp475 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp476 = *$tmp475;
panda$core$String* $tmp477 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp476);
panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp477, &$s479);
panda$core$String* $tmp480 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp478, $tmp480);
panda$core$String* $tmp482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s483);
panda$collections$ImmutableArray** $tmp484 = &param0->body;
panda$collections$ImmutableArray* $tmp485 = *$tmp484;
panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp482, ((panda$core$Object*) $tmp485));
panda$core$String* $tmp487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, &$s488);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp487));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp487));
// unreffing REF($19:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp486));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp482));
// unreffing REF($14:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
// unreffing REF($13:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
// unreffing REF($12:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp478));
// unreffing REF($11:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp477));
// unreffing REF($10:panda.core.String)
return $tmp487;
block2:;
// line 192
panda$core$String* $tmp489 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
// unreffing REF($45:panda.core.String)
return $tmp489;

}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* param0) {

// line 6
org$pandalanguage$pandac$Symbol$cleanup(((org$pandalanguage$pandac$Symbol*) param0));
panda$core$Weak** $tmp490 = &param0->owner;
panda$core$Weak* $tmp491 = *$tmp490;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
panda$core$String** $tmp492 = &param0->doccomment;
panda$core$String* $tmp493 = *$tmp492;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
org$pandalanguage$pandac$Annotations** $tmp494 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp495 = *$tmp494;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
panda$collections$Array** $tmp496 = &param0->genericParameters;
panda$collections$Array* $tmp497 = *$tmp496;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp497));
panda$collections$Array** $tmp498 = &param0->parameters;
panda$collections$Array* $tmp499 = *$tmp498;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
org$pandalanguage$pandac$Type** $tmp500 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp501 = *$tmp500;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
panda$collections$ImmutableArray** $tmp502 = &param0->body;
panda$collections$ImmutableArray* $tmp503 = *$tmp502;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
panda$core$Weak** $tmp504 = &param0->overridden;
panda$core$Weak* $tmp505 = *$tmp504;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
return;

}

