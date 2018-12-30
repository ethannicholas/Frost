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

typedef panda$collections$Iterator* (*$fn33)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn37)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn42)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn70)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn85)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn106)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn117)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn129)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn139)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn147)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn153)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn163)(panda$collections$CollectionView*);
typedef panda$core$Bit (*$fn197)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn234)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn238)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn243)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn288)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn316)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn323)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn327)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn332)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn348)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$collections$Iterator* (*$fn378)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn382)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn387)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn405)(panda$core$Equatable*, panda$core$Equatable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c", 35, -5673270859742326777, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s414 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x70\x61\x6e\x64\x61", 16, -4513292704312339124, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x67\x65\x74\x5f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 105, -4161089433249330848, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
bool $tmp10 = $tmp9 != ((panda$core$Weak*) NULL);
if ($tmp10) goto block1; else goto block2;
block1:;
panda$core$Object* $tmp11 = panda$core$Weak$get$R$panda$core$Weak$T($tmp9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp11)));
panda$core$Panda$unref$panda$core$Object$Q($tmp11);
goto block2;
block2:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$core$Weak** $tmp12 = &param0->overridden;
*$tmp12 = $tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
// line 70
panda$core$Int64 $tmp13 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Symbol$Kind $tmp14 = org$pandalanguage$pandac$Symbol$Kind$init$panda$core$Int64($tmp13);
org$pandalanguage$pandac$Symbol$init$org$pandalanguage$pandac$Symbol$Kind$org$pandalanguage$pandac$Position$panda$core$String(((org$pandalanguage$pandac$Symbol*) param0), $tmp14, param2, param6);
// line 71
panda$core$Weak* $tmp15 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp15, ((panda$core$Object*) param1));
panda$core$Weak** $tmp16 = &param0->owner;
panda$core$Weak* $tmp17 = *$tmp16;
bool $tmp18 = $tmp17 != ((panda$core$Weak*) NULL);
if ($tmp18) goto block3; else goto block4;
block3:;
panda$core$Object* $tmp19 = panda$core$Weak$get$R$panda$core$Weak$T($tmp17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp19)));
panda$core$Panda$unref$panda$core$Object$Q($tmp19);
goto block4;
block4:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
panda$core$Weak** $tmp20 = &param0->owner;
*$tmp20 = $tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp15));
// line 72
panda$core$String** $tmp21 = &param0->doccomment;
panda$core$String* $tmp22 = *$tmp21;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp22));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp23 = &param0->doccomment;
*$tmp23 = param3;
// line 73
org$pandalanguage$pandac$Annotations** $tmp24 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp25 = *$tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$Annotations** $tmp26 = &param0->annotations;
*$tmp26 = param4;
// line 74
org$pandalanguage$pandac$MethodDecl$Kind* $tmp27 = &param0->methodKind;
*$tmp27 = param5;
// line 75
panda$collections$Array** $tmp28 = &param0->genericParameters;
panda$collections$Array* $tmp29 = *$tmp28;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp29));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
panda$collections$Array** $tmp30 = &param0->genericParameters;
*$tmp30 = param7;
// line 76
ITable* $tmp31 = ((panda$collections$Iterable*) param8)->$class->itable;
while ($tmp31->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp31 = $tmp31->next;
}
$fn33 $tmp32 = $tmp31->methods[0];
panda$collections$Iterator* $tmp34 = $tmp32(((panda$collections$Iterable*) param8));
goto block5;
block5:;
ITable* $tmp35 = $tmp34->$class->itable;
while ($tmp35->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp35 = $tmp35->next;
}
$fn37 $tmp36 = $tmp35->methods[0];
panda$core$Bit $tmp38 = $tmp36($tmp34);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block7; else goto block6;
block6:;
*(&local0) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp40 = $tmp34->$class->itable;
while ($tmp40->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp40 = $tmp40->next;
}
$fn42 $tmp41 = $tmp40->methods[1];
panda$core$Object* $tmp43 = $tmp41($tmp34);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp44 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp43)));
*(&local0) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp43);
// line 77
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp45 = *(&local0);
panda$core$Weak* $tmp46 = (panda$core$Weak*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Weak$class);
panda$core$Weak$init$panda$core$Weak$T($tmp46, ((panda$core$Object*) param0));
panda$core$Weak** $tmp47 = &$tmp45->owner;
panda$core$Weak* $tmp48 = *$tmp47;
bool $tmp49 = $tmp48 != ((panda$core$Weak*) NULL);
if ($tmp49) goto block8; else goto block9;
block8:;
panda$core$Object* $tmp50 = panda$core$Weak$get$R$panda$core$Weak$T($tmp48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp50)));
panda$core$Panda$unref$panda$core$Object$Q($tmp50);
goto block9;
block9:;
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$core$Weak** $tmp51 = &$tmp45->owner;
*$tmp51 = $tmp46;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
panda$core$Panda$unref$panda$core$Object$Q($tmp43);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp52 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp52));
// unreffing p
*(&local0) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block5;
block7:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
// line 79
panda$collections$Array** $tmp53 = &param0->parameters;
panda$collections$Array* $tmp54 = *$tmp53;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp54));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$collections$Array** $tmp55 = &param0->parameters;
*$tmp55 = param8;
// line 80
org$pandalanguage$pandac$Type** $tmp56 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp57 = *$tmp56;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp57));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$Type** $tmp58 = &param0->returnType;
*$tmp58 = param9;
// line 81
panda$collections$ImmutableArray** $tmp59 = &param0->body;
panda$collections$ImmutableArray* $tmp60 = *$tmp59;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
panda$collections$ImmutableArray** $tmp61 = &param0->body;
*$tmp61 = param10;
return;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_heritable$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

// line 86
org$pandalanguage$pandac$MethodDecl$Kind* $tmp62 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp63 = *$tmp62;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp64;
$tmp64 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp64->value = $tmp63;
panda$core$Int64 $tmp65 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp66 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp65);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp67;
$tmp67 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp67->value = $tmp66;
ITable* $tmp68 = ((panda$core$Equatable*) $tmp64)->$class->itable;
while ($tmp68->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[1];
panda$core$Bit $tmp71 = $tmp69(((panda$core$Equatable*) $tmp64), ((panda$core$Equatable*) $tmp67));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp64)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp67)));
return $tmp71;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$get_isVirtual$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$Bit local0;
panda$core$Bit local1;
// line 90
org$pandalanguage$pandac$Annotations** $tmp72 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp73 = *$tmp72;
panda$core$Bit $tmp74 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp73);
panda$core$Bit $tmp75 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp74);
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp77 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp78 = *$tmp77;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp79;
$tmp79 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp79->value = $tmp78;
panda$core$Int64 $tmp80 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp81 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp80);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp82;
$tmp82 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp82->value = $tmp81;
ITable* $tmp83 = ((panda$core$Equatable*) $tmp79)->$class->itable;
while ($tmp83->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp83 = $tmp83->next;
}
$fn85 $tmp84 = $tmp83->methods[1];
panda$core$Bit $tmp86 = $tmp84(((panda$core$Equatable*) $tmp79), ((panda$core$Equatable*) $tmp82));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp79)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp82)));
*(&local1) = $tmp86;
goto block3;
block2:;
*(&local1) = $tmp75;
goto block3;
block3:;
panda$core$Bit $tmp87 = *(&local1);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Annotations** $tmp89 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp90 = *$tmp89;
panda$core$Bit $tmp91 = org$pandalanguage$pandac$Annotations$get_isFinal$R$panda$core$Bit($tmp90);
panda$core$Bit $tmp92 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp91);
*(&local0) = $tmp92;
goto block6;
block5:;
*(&local0) = $tmp87;
goto block6;
block6:;
panda$core$Bit $tmp93 = *(&local0);
return $tmp93;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0) {

// line 94
org$pandalanguage$pandac$Annotations** $tmp94 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp95 = *$tmp94;
panda$core$Bit $tmp96 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp95);
panda$core$Bit $tmp97 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp96);
return $tmp97;

}
panda$core$Bit org$pandalanguage$pandac$MethodDecl$matches$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$MethodDecl* param0, org$pandalanguage$pandac$MethodDecl* param1) {

panda$core$Bit local0;
panda$core$Int64 local1;
// line 98
org$pandalanguage$pandac$Compiler$Resolution* $tmp98 = &param0->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp99 = *$tmp98;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp100;
$tmp100 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp100->value = $tmp99;
panda$core$Int64 $tmp101 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp102 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp101);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp103;
$tmp103 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp103->value = $tmp102;
ITable* $tmp104 = ((panda$core$Equatable*) $tmp100)->$class->itable;
while ($tmp104->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[1];
panda$core$Bit $tmp107 = $tmp105(((panda$core$Equatable*) $tmp100), ((panda$core$Equatable*) $tmp103));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp100)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp103)));
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block1; else goto block2;
block1:;
org$pandalanguage$pandac$Compiler$Resolution* $tmp109 = &param1->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp110 = *$tmp109;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp111;
$tmp111 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp111->value = $tmp110;
panda$core$Int64 $tmp112 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp113 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp112);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp114;
$tmp114 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp114->value = $tmp113;
ITable* $tmp115 = ((panda$core$Equatable*) $tmp111)->$class->itable;
while ($tmp115->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[1];
panda$core$Bit $tmp118 = $tmp116(((panda$core$Equatable*) $tmp111), ((panda$core$Equatable*) $tmp114));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp111)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp114)));
*(&local0) = $tmp118;
goto block3;
block2:;
*(&local0) = $tmp107;
goto block3;
block3:;
panda$core$Bit $tmp119 = *(&local0);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp121 = (panda$core$Int64) {98};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s122, $tmp121);
abort(); // unreachable
block4:;
// line 100
panda$core$String** $tmp123 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp124 = *$tmp123;
panda$core$String** $tmp125 = &((org$pandalanguage$pandac$Symbol*) param1)->name;
panda$core$String* $tmp126 = *$tmp125;
ITable* $tmp127 = ((panda$core$Equatable*) $tmp124)->$class->itable;
while ($tmp127->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[1];
panda$core$Bit $tmp130 = $tmp128(((panda$core$Equatable*) $tmp124), ((panda$core$Equatable*) $tmp126));
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block6; else goto block7;
block6:;
// line 101
panda$core$Bit $tmp132 = panda$core$Bit$init$builtin_bit(false);
return $tmp132;
block7:;
// line 103
org$pandalanguage$pandac$Type** $tmp133 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp134 = *$tmp133;
org$pandalanguage$pandac$Type** $tmp135 = &param1->returnType;
org$pandalanguage$pandac$Type* $tmp136 = *$tmp135;
ITable* $tmp137 = ((panda$core$Equatable*) $tmp134)->$class->itable;
while ($tmp137->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp137 = $tmp137->next;
}
$fn139 $tmp138 = $tmp137->methods[1];
panda$core$Bit $tmp140 = $tmp138(((panda$core$Equatable*) $tmp134), ((panda$core$Equatable*) $tmp136));
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block8; else goto block9;
block8:;
// line 104
panda$core$Bit $tmp142 = panda$core$Bit$init$builtin_bit(false);
return $tmp142;
block9:;
// line 106
panda$collections$Array** $tmp143 = &param0->parameters;
panda$collections$Array* $tmp144 = *$tmp143;
ITable* $tmp145 = ((panda$collections$CollectionView*) $tmp144)->$class->itable;
while ($tmp145->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp145 = $tmp145->next;
}
$fn147 $tmp146 = $tmp145->methods[0];
panda$core$Int64 $tmp148 = $tmp146(((panda$collections$CollectionView*) $tmp144));
panda$collections$Array** $tmp149 = &param1->parameters;
panda$collections$Array* $tmp150 = *$tmp149;
ITable* $tmp151 = ((panda$collections$CollectionView*) $tmp150)->$class->itable;
while ($tmp151->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[0];
panda$core$Int64 $tmp154 = $tmp152(((panda$collections$CollectionView*) $tmp150));
panda$core$Bit $tmp155 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp148, $tmp154);
bool $tmp156 = $tmp155.value;
if ($tmp156) goto block10; else goto block11;
block10:;
// line 107
panda$core$Bit $tmp157 = panda$core$Bit$init$builtin_bit(false);
return $tmp157;
block11:;
// line 109
panda$core$Int64 $tmp158 = (panda$core$Int64) {0};
panda$collections$Array** $tmp159 = &param0->parameters;
panda$collections$Array* $tmp160 = *$tmp159;
ITable* $tmp161 = ((panda$collections$CollectionView*) $tmp160)->$class->itable;
while ($tmp161->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp161 = $tmp161->next;
}
$fn163 $tmp162 = $tmp161->methods[0];
panda$core$Int64 $tmp164 = $tmp162(((panda$collections$CollectionView*) $tmp160));
panda$core$Bit $tmp165 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp166 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp158, $tmp164, $tmp165);
panda$core$Int64 $tmp167 = $tmp166.min;
*(&local1) = $tmp167;
panda$core$Int64 $tmp168 = $tmp166.max;
panda$core$Bit $tmp169 = $tmp166.inclusive;
bool $tmp170 = $tmp169.value;
panda$core$Int64 $tmp171 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp172 = panda$core$Int64$convert$R$panda$core$UInt64($tmp171);
if ($tmp170) goto block15; else goto block16;
block15:;
int64_t $tmp173 = $tmp167.value;
int64_t $tmp174 = $tmp168.value;
bool $tmp175 = $tmp173 <= $tmp174;
panda$core$Bit $tmp176 = (panda$core$Bit) {$tmp175};
bool $tmp177 = $tmp176.value;
if ($tmp177) goto block12; else goto block13;
block16:;
int64_t $tmp178 = $tmp167.value;
int64_t $tmp179 = $tmp168.value;
bool $tmp180 = $tmp178 < $tmp179;
panda$core$Bit $tmp181 = (panda$core$Bit) {$tmp180};
bool $tmp182 = $tmp181.value;
if ($tmp182) goto block12; else goto block13;
block12:;
// line 110
panda$collections$Array** $tmp183 = &param0->parameters;
panda$collections$Array* $tmp184 = *$tmp183;
panda$core$Int64 $tmp185 = *(&local1);
panda$core$Object* $tmp186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp184, $tmp185);
org$pandalanguage$pandac$Type** $tmp187 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp186)->type;
org$pandalanguage$pandac$Type* $tmp188 = *$tmp187;
panda$collections$Array** $tmp189 = &param1->parameters;
panda$collections$Array* $tmp190 = *$tmp189;
panda$core$Int64 $tmp191 = *(&local1);
panda$core$Object* $tmp192 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp190, $tmp191);
org$pandalanguage$pandac$Type** $tmp193 = &((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp192)->type;
org$pandalanguage$pandac$Type* $tmp194 = *$tmp193;
ITable* $tmp195 = ((panda$core$Equatable*) $tmp188)->$class->itable;
while ($tmp195->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp195 = $tmp195->next;
}
$fn197 $tmp196 = $tmp195->methods[1];
panda$core$Bit $tmp198 = $tmp196(((panda$core$Equatable*) $tmp188), ((panda$core$Equatable*) $tmp194));
panda$core$Panda$unref$panda$core$Object$Q($tmp186);
panda$core$Panda$unref$panda$core$Object$Q($tmp192);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block17; else goto block18;
block17:;
// line 111
panda$core$Bit $tmp200 = panda$core$Bit$init$builtin_bit(false);
return $tmp200;
block18:;
goto block14;
block14:;
panda$core$Int64 $tmp201 = *(&local1);
int64_t $tmp202 = $tmp168.value;
int64_t $tmp203 = $tmp201.value;
int64_t $tmp204 = $tmp202 - $tmp203;
panda$core$Int64 $tmp205 = (panda$core$Int64) {$tmp204};
panda$core$UInt64 $tmp206 = panda$core$Int64$convert$R$panda$core$UInt64($tmp205);
if ($tmp170) goto block20; else goto block21;
block20:;
uint64_t $tmp207 = $tmp206.value;
uint64_t $tmp208 = $tmp172.value;
bool $tmp209 = $tmp207 >= $tmp208;
panda$core$Bit $tmp210 = (panda$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block19; else goto block13;
block21:;
uint64_t $tmp212 = $tmp206.value;
uint64_t $tmp213 = $tmp172.value;
bool $tmp214 = $tmp212 > $tmp213;
panda$core$Bit $tmp215 = (panda$core$Bit) {$tmp214};
bool $tmp216 = $tmp215.value;
if ($tmp216) goto block19; else goto block13;
block19:;
int64_t $tmp217 = $tmp201.value;
int64_t $tmp218 = $tmp171.value;
int64_t $tmp219 = $tmp217 + $tmp218;
panda$core$Int64 $tmp220 = (panda$core$Int64) {$tmp219};
*(&local1) = $tmp220;
goto block12;
block13:;
// line 114
panda$core$Bit $tmp221 = panda$core$Bit$init$builtin_bit(true);
return $tmp221;

}
panda$core$Int64 org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(org$pandalanguage$pandac$MethodDecl* param0) {

org$pandalanguage$pandac$Annotations$Expression* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$core$UInt64 local2;
org$pandalanguage$pandac$parser$Token$Kind local3;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
panda$core$UInt64 local5;
// line 118
org$pandalanguage$pandac$Annotations** $tmp222 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp223 = *$tmp222;
panda$collections$Array** $tmp224 = &$tmp223->expressions;
panda$collections$Array* $tmp225 = *$tmp224;
panda$core$Bit $tmp226 = panda$core$Bit$init$builtin_bit($tmp225 != NULL);
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block1; else goto block2;
block1:;
// line 119
org$pandalanguage$pandac$Annotations** $tmp228 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp229 = *$tmp228;
panda$collections$Array** $tmp230 = &$tmp229->expressions;
panda$collections$Array* $tmp231 = *$tmp230;
ITable* $tmp232 = ((panda$collections$Iterable*) $tmp231)->$class->itable;
while ($tmp232->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp232 = $tmp232->next;
}
$fn234 $tmp233 = $tmp232->methods[0];
panda$collections$Iterator* $tmp235 = $tmp233(((panda$collections$Iterable*) $tmp231));
goto block3;
block3:;
ITable* $tmp236 = $tmp235->$class->itable;
while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp236 = $tmp236->next;
}
$fn238 $tmp237 = $tmp236->methods[0];
panda$core$Bit $tmp239 = $tmp237($tmp235);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block5; else goto block4;
block4:;
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
ITable* $tmp241 = $tmp235->$class->itable;
while ($tmp241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp241 = $tmp241->next;
}
$fn243 $tmp242 = $tmp241->methods[1];
panda$core$Object* $tmp244 = $tmp242($tmp235);
org$pandalanguage$pandac$Annotations$Expression* $tmp245 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Annotations$Expression*) $tmp244)));
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) $tmp244);
// line 120
org$pandalanguage$pandac$Annotations$Expression* $tmp246 = *(&local0);
panda$core$Int64* $tmp247 = &$tmp246->$rawValue;
panda$core$Int64 $tmp248 = *$tmp247;
panda$core$Int64 $tmp249 = (panda$core$Int64) {4};
panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp248, $tmp249);
bool $tmp251 = $tmp250.value;
if ($tmp251) goto block7; else goto block6;
block7:;
panda$core$String** $tmp252 = (panda$core$String**) ($tmp246->$data + 0);
panda$core$String* $tmp253 = *$tmp252;
org$pandalanguage$pandac$ASTNode** $tmp254 = (org$pandalanguage$pandac$ASTNode**) ($tmp246->$data + 8);
org$pandalanguage$pandac$ASTNode* $tmp255 = *$tmp254;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp256 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
*(&local1) = $tmp255;
// line 122
org$pandalanguage$pandac$ASTNode* $tmp257 = *(&local1);
panda$core$Int64* $tmp258 = &$tmp257->$rawValue;
panda$core$Int64 $tmp259 = *$tmp258;
panda$core$Int64 $tmp260 = (panda$core$Int64) {22};
panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp259, $tmp260);
bool $tmp262 = $tmp261.value;
if ($tmp262) goto block9; else goto block10;
block9:;
org$pandalanguage$pandac$Position* $tmp263 = (org$pandalanguage$pandac$Position*) ($tmp257->$data + 0);
org$pandalanguage$pandac$Position $tmp264 = *$tmp263;
panda$core$UInt64* $tmp265 = (panda$core$UInt64*) ($tmp257->$data + 16);
panda$core$UInt64 $tmp266 = *$tmp265;
*(&local2) = $tmp266;
// line 124
panda$core$UInt64 $tmp267 = *(&local2);
panda$core$Int64 $tmp268 = panda$core$UInt64$convert$R$panda$core$Int64($tmp267);
org$pandalanguage$pandac$ASTNode* $tmp269 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp269));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Annotations$Expression* $tmp270 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp270));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
return $tmp268;
block10:;
panda$core$Int64 $tmp271 = (panda$core$Int64) {32};
panda$core$Bit $tmp272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp259, $tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block11; else goto block8;
block11:;
org$pandalanguage$pandac$Position* $tmp274 = (org$pandalanguage$pandac$Position*) ($tmp257->$data + 0);
org$pandalanguage$pandac$Position $tmp275 = *$tmp274;
org$pandalanguage$pandac$parser$Token$Kind* $tmp276 = (org$pandalanguage$pandac$parser$Token$Kind*) ($tmp257->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp277 = *$tmp276;
*(&local3) = $tmp277;
org$pandalanguage$pandac$ASTNode** $tmp278 = (org$pandalanguage$pandac$ASTNode**) ($tmp257->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp279 = *$tmp278;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp280 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp280));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
*(&local4) = $tmp279;
// line 126
org$pandalanguage$pandac$parser$Token$Kind $tmp281 = *(&local3);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp282;
$tmp282 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp282->value = $tmp281;
panda$core$Int64 $tmp283 = (panda$core$Int64) {53};
org$pandalanguage$pandac$parser$Token$Kind $tmp284 = org$pandalanguage$pandac$parser$Token$Kind$init$panda$core$Int64($tmp283);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp285;
$tmp285 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp285->value = $tmp284;
ITable* $tmp286 = ((panda$core$Equatable*) $tmp282)->$class->itable;
while ($tmp286->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp286 = $tmp286->next;
}
$fn288 $tmp287 = $tmp286->methods[0];
panda$core$Bit $tmp289 = $tmp287(((panda$core$Equatable*) $tmp282), ((panda$core$Equatable*) $tmp285));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp282)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp285)));
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block12; else goto block13;
block12:;
// line 127
org$pandalanguage$pandac$ASTNode* $tmp291 = *(&local4);
panda$core$Int64* $tmp292 = &$tmp291->$rawValue;
panda$core$Int64 $tmp293 = *$tmp292;
panda$core$Int64 $tmp294 = (panda$core$Int64) {22};
panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp293, $tmp294);
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block15; else goto block14;
block15:;
org$pandalanguage$pandac$Position* $tmp297 = (org$pandalanguage$pandac$Position*) ($tmp291->$data + 0);
org$pandalanguage$pandac$Position $tmp298 = *$tmp297;
panda$core$UInt64* $tmp299 = (panda$core$UInt64*) ($tmp291->$data + 16);
panda$core$UInt64 $tmp300 = *$tmp299;
*(&local5) = $tmp300;
// line 129
panda$core$UInt64 $tmp301 = *(&local5);
panda$core$Int64 $tmp302 = panda$core$UInt64$convert$R$panda$core$Int64($tmp301);
panda$core$Int64 $tmp303 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp302);
org$pandalanguage$pandac$ASTNode* $tmp304 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp304));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp305 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$Annotations$Expression* $tmp306 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp306));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
return $tmp303;
block14:;
goto block13;
block13:;
org$pandalanguage$pandac$ASTNode* $tmp307 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp307));
// unreffing base
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block8;
block8:;
org$pandalanguage$pandac$ASTNode* $tmp308 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp308));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block6;
block6:;
panda$core$Panda$unref$panda$core$Object$Q($tmp244);
org$pandalanguage$pandac$Annotations$Expression* $tmp309 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp309));
// unreffing a
*(&local0) = ((org$pandalanguage$pandac$Annotations$Expression*) NULL);
goto block3;
block5:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
goto block2;
block2:;
// line 136
panda$core$Int64 $tmp310 = (panda$core$Int64) {0};
return $tmp310;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodDecl* param0) {

panda$collections$Array* local0 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local1 = NULL;
org$pandalanguage$pandac$Type$Kind local2;
// line 140
panda$collections$Array* $tmp311 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array** $tmp312 = &param0->parameters;
panda$collections$Array* $tmp313 = *$tmp312;
ITable* $tmp314 = ((panda$collections$CollectionView*) $tmp313)->$class->itable;
while ($tmp314->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp314 = $tmp314->next;
}
$fn316 $tmp315 = $tmp314->methods[0];
panda$core$Int64 $tmp317 = $tmp315(((panda$collections$CollectionView*) $tmp313));
panda$collections$Array$init$panda$core$Int64($tmp311, $tmp317);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp318 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
*(&local0) = $tmp311;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
// line 141
panda$collections$Array** $tmp319 = &param0->parameters;
panda$collections$Array* $tmp320 = *$tmp319;
ITable* $tmp321 = ((panda$collections$Iterable*) $tmp320)->$class->itable;
while ($tmp321->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[0];
panda$collections$Iterator* $tmp324 = $tmp322(((panda$collections$Iterable*) $tmp320));
goto block1;
block1:;
ITable* $tmp325 = $tmp324->$class->itable;
while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp325 = $tmp325->next;
}
$fn327 $tmp326 = $tmp325->methods[0];
panda$core$Bit $tmp328 = $tmp326($tmp324);
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block3; else goto block2;
block2:;
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp330 = $tmp324->$class->itable;
while ($tmp330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp330 = $tmp330->next;
}
$fn332 $tmp331 = $tmp330->methods[1];
panda$core$Object* $tmp333 = $tmp331($tmp324);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp334 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp333)));
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp333);
// line 142
panda$collections$Array* $tmp335 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp336 = *(&local1);
org$pandalanguage$pandac$Type** $tmp337 = &$tmp336->type;
org$pandalanguage$pandac$Type* $tmp338 = *$tmp337;
panda$collections$Array$add$panda$collections$Array$T($tmp335, ((panda$core$Object*) $tmp338));
panda$core$Panda$unref$panda$core$Object$Q($tmp333);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp339 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing p
*(&local1) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
// line 144
// line 145
org$pandalanguage$pandac$MethodDecl$Kind* $tmp340 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp341 = *$tmp340;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp342;
$tmp342 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp342->value = $tmp341;
panda$core$Int64 $tmp343 = (panda$core$Int64) {1};
org$pandalanguage$pandac$MethodDecl$Kind $tmp344 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp343);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp345;
$tmp345 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp345->value = $tmp344;
ITable* $tmp346 = ((panda$core$Equatable*) $tmp342)->$class->itable;
while ($tmp346->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp346 = $tmp346->next;
}
$fn348 $tmp347 = $tmp346->methods[0];
panda$core$Bit $tmp349 = $tmp347(((panda$core$Equatable*) $tmp342), ((panda$core$Equatable*) $tmp345));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp342)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp345)));
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block4; else goto block6;
block4:;
// line 146
panda$core$Int64 $tmp351 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp352 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp351);
*(&local2) = $tmp352;
goto block5;
block6:;
// line 1
// line 149
panda$core$Int64 $tmp353 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp354 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp353);
*(&local2) = $tmp354;
goto block5;
block5:;
// line 151
org$pandalanguage$pandac$Position* $tmp355 = &((org$pandalanguage$pandac$Symbol*) param0)->position;
org$pandalanguage$pandac$Position $tmp356 = *$tmp355;
org$pandalanguage$pandac$Type$Kind $tmp357 = *(&local2);
panda$collections$Array* $tmp358 = *(&local0);
org$pandalanguage$pandac$Type** $tmp359 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp360 = *$tmp359;
panda$core$Int64 $tmp361 = org$pandalanguage$pandac$MethodDecl$get_priority$R$panda$core$Int64(param0);
org$pandalanguage$pandac$Type* $tmp362 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp356, $tmp357, ((panda$collections$ListView*) $tmp358), $tmp360, $tmp361);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
panda$collections$Array* $tmp363 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
// unreffing paramTypes
*(&local0) = ((panda$collections$Array*) NULL);
return $tmp362;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$MutableString* local0 = NULL;
panda$core$String* local1 = NULL;
org$pandalanguage$pandac$MethodDecl$Parameter* local2 = NULL;
// line 155
panda$core$MutableString* $tmp364 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$String** $tmp365 = &((org$pandalanguage$pandac$Symbol*) param0)->name;
panda$core$String* $tmp366 = *$tmp365;
panda$core$String* $tmp367 = panda$core$String$convert$R$panda$core$String($tmp366);
panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp367, &$s369);
panda$core$MutableString$init$panda$core$String($tmp364, $tmp368);
*(&local0) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp370 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp370));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
*(&local0) = $tmp364;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp367));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
// line 156
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp371 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp371));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s372));
*(&local1) = &$s373;
// line 157
panda$collections$Array** $tmp374 = &param0->parameters;
panda$collections$Array* $tmp375 = *$tmp374;
ITable* $tmp376 = ((panda$collections$Iterable*) $tmp375)->$class->itable;
while ($tmp376->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp376 = $tmp376->next;
}
$fn378 $tmp377 = $tmp376->methods[0];
panda$collections$Iterator* $tmp379 = $tmp377(((panda$collections$Iterable*) $tmp375));
goto block1;
block1:;
ITable* $tmp380 = $tmp379->$class->itable;
while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp380 = $tmp380->next;
}
$fn382 $tmp381 = $tmp380->methods[0];
panda$core$Bit $tmp383 = $tmp381($tmp379);
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block3; else goto block2;
block2:;
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
ITable* $tmp385 = $tmp379->$class->itable;
while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp385 = $tmp385->next;
}
$fn387 $tmp386 = $tmp385->methods[1];
panda$core$Object* $tmp388 = $tmp386($tmp379);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp389 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp389));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp388)));
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp388);
// line 158
panda$core$MutableString* $tmp390 = *(&local0);
panda$core$String* $tmp391 = *(&local1);
panda$core$MutableString$append$panda$core$String($tmp390, $tmp391);
// line 159
panda$core$MutableString* $tmp392 = *(&local0);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp393 = *(&local2);
panda$core$MutableString$append$panda$core$Object($tmp392, ((panda$core$Object*) $tmp393));
// line 160
panda$core$String* $tmp394 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp394));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s395));
*(&local1) = &$s396;
panda$core$Panda$unref$panda$core$Object$Q($tmp388);
org$pandalanguage$pandac$MethodDecl$Parameter* $tmp397 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp397));
// unreffing p
*(&local2) = ((org$pandalanguage$pandac$MethodDecl$Parameter*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
// line 162
panda$core$MutableString* $tmp398 = *(&local0);
panda$core$MutableString$append$panda$core$String($tmp398, &$s399);
// line 163
org$pandalanguage$pandac$Type** $tmp400 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp401 = *$tmp400;
org$pandalanguage$pandac$Type* $tmp402 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
ITable* $tmp403 = ((panda$core$Equatable*) $tmp401)->$class->itable;
while ($tmp403->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp403 = $tmp403->next;
}
$fn405 $tmp404 = $tmp403->methods[1];
panda$core$Bit $tmp406 = $tmp404(((panda$core$Equatable*) $tmp401), ((panda$core$Equatable*) $tmp402));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block4; else goto block5;
block4:;
// line 164
panda$core$MutableString* $tmp408 = *(&local0);
org$pandalanguage$pandac$Type** $tmp409 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp410 = *$tmp409;
panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s412, ((panda$core$Object*) $tmp410));
panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp411, &$s414);
panda$core$MutableString$append$panda$core$String($tmp408, $tmp413);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp411));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp413));
goto block5;
block5:;
// line 166
panda$core$MutableString* $tmp415 = *(&local0);
panda$core$String* $tmp416 = panda$core$MutableString$finish$R$panda$core$String($tmp415);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp416));
panda$core$String* $tmp417 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp417));
// unreffing separator
*(&local1) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp418 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp418));
// unreffing result
*(&local0) = ((panda$core$MutableString*) NULL);
return $tmp416;

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 170
org$pandalanguage$pandac$MethodDecl$Kind* $tmp419 = &param0->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp420 = *$tmp419;
panda$core$Int64 $tmp421 = $tmp420.$rawValue;
panda$core$Int64 $tmp422 = (panda$core$Int64) {0};
panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp422);
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block2; else goto block3;
block2:;
// line 172
panda$core$Weak** $tmp425 = &param0->owner;
panda$core$Weak* $tmp426 = *$tmp425;
panda$core$Object* $tmp427 = panda$core$Weak$get$R$panda$core$Weak$T($tmp426);
panda$core$Panda$unref$panda$core$Object$Q($tmp427);
panda$core$String** $tmp428 = &((org$pandalanguage$pandac$ClassDecl*) $tmp427)->name;
panda$core$String* $tmp429 = *$tmp428;
panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s431, $tmp429);
panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp430, &$s433);
panda$core$String* $tmp434 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp432, $tmp434);
panda$core$String* $tmp436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp435, &$s437);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp430));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp432));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp434));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp435));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp436));
return $tmp436;
block3:;
panda$core$Int64 $tmp438 = (panda$core$Int64) {1};
panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block4; else goto block5;
block4:;
// line 174
panda$core$Weak** $tmp441 = &param0->owner;
panda$core$Weak* $tmp442 = *$tmp441;
panda$core$Object* $tmp443 = panda$core$Weak$get$R$panda$core$Weak$T($tmp442);
panda$core$Panda$unref$panda$core$Object$Q($tmp443);
panda$core$String** $tmp444 = &((org$pandalanguage$pandac$ClassDecl*) $tmp443)->name;
panda$core$String* $tmp445 = *$tmp444;
panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s447, $tmp445);
panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, &$s449);
panda$core$String* $tmp450 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, $tmp450);
panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s453);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp446));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp450));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp451));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp452));
return $tmp452;
block5:;
panda$core$Int64 $tmp454 = (panda$core$Int64) {2};
panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp421, $tmp454);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block6; else goto block1;
block6:;
// line 176
panda$core$Weak** $tmp457 = &param0->owner;
panda$core$Weak* $tmp458 = *$tmp457;
panda$core$Object* $tmp459 = panda$core$Weak$get$R$panda$core$Weak$T($tmp458);
panda$core$Panda$unref$panda$core$Object$Q($tmp459);
panda$core$String** $tmp460 = &((org$pandalanguage$pandac$ClassDecl*) $tmp459)->name;
panda$core$String* $tmp461 = *$tmp460;
panda$core$String* $tmp462 = panda$core$String$convert$R$panda$core$String($tmp461);
panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp462, &$s464);
panda$core$String* $tmp465 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp463, $tmp465);
panda$core$String* $tmp467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp466, &$s468);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp462));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp463));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp465));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp467));
return $tmp467;
block1:;
panda$core$Bit $tmp469 = panda$core$Bit$init$builtin_bit(false);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp471 = (panda$core$Int64) {169};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s472, $tmp471, &$s473);
abort(); // unreachable
block7:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$MethodDecl$convert$R$panda$core$String(org$pandalanguage$pandac$MethodDecl* param0) {

// line 182
panda$collections$ImmutableArray** $tmp474 = &param0->body;
panda$collections$ImmutableArray* $tmp475 = *$tmp474;
panda$core$Bit $tmp476 = panda$core$Bit$init$builtin_bit($tmp475 != NULL);
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block1; else goto block2;
block1:;
// line 183
org$pandalanguage$pandac$Annotations** $tmp478 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp479 = *$tmp478;
panda$core$String* $tmp480 = org$pandalanguage$pandac$Annotations$convert$R$panda$core$String($tmp479);
panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s482);
panda$core$String* $tmp483 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, $tmp483);
panda$core$String* $tmp485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s486);
panda$collections$ImmutableArray** $tmp487 = &param0->body;
panda$collections$ImmutableArray* $tmp488 = *$tmp487;
panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp485, ((panda$core$Object*) $tmp488));
panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp489, &$s491);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp484));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp485));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
return $tmp490;
block2:;
// line 185
panda$core$String* $tmp492 = org$pandalanguage$pandac$MethodDecl$get_signature$R$panda$core$String(param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
return $tmp492;

}
void org$pandalanguage$pandac$MethodDecl$cleanup(org$pandalanguage$pandac$MethodDecl* param0) {

panda$core$Weak** $tmp493 = &param0->owner;
panda$core$Weak* $tmp494 = *$tmp493;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp494));
panda$core$String** $tmp495 = &param0->doccomment;
panda$core$String* $tmp496 = *$tmp495;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp496));
org$pandalanguage$pandac$Annotations** $tmp497 = &param0->annotations;
org$pandalanguage$pandac$Annotations* $tmp498 = *$tmp497;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp498));
panda$collections$Array** $tmp499 = &param0->genericParameters;
panda$collections$Array* $tmp500 = *$tmp499;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp500));
panda$collections$Array** $tmp501 = &param0->parameters;
panda$collections$Array* $tmp502 = *$tmp501;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp502));
org$pandalanguage$pandac$Type** $tmp503 = &param0->returnType;
org$pandalanguage$pandac$Type* $tmp504 = *$tmp503;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp504));
panda$collections$ImmutableArray** $tmp505 = &param0->body;
panda$collections$ImmutableArray* $tmp506 = *$tmp505;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
panda$core$Weak** $tmp507 = &param0->overridden;
panda$core$Weak* $tmp508 = *$tmp507;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
return;

}

