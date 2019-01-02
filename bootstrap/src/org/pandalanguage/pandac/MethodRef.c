#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/collections/ListView.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Position.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Bit (*$fn10)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn58)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn82)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn93)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Bit (*$fn136)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn170)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn181)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s31 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static panda$core$String $s33 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static panda$core$String $s42 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x70\x61\x6e\x64\x61", 15, 3211813929552538657, NULL };
static panda$core$String $s213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$MethodRef* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$MethodDecl* param3) {

org$pandalanguage$pandac$Type* local0 = NULL;
org$pandalanguage$pandac$Type* local1 = NULL;
panda$core$Bit local2;
panda$core$Bit local3;
panda$collections$Array* local4 = NULL;
org$pandalanguage$pandac$Type$Kind local5;
panda$core$Bit local6;
org$pandalanguage$pandac$Type$Kind local7;
// line 26
org$pandalanguage$pandac$Compiler$Resolution* $tmp2 = &param3->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp3 = *$tmp2;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp4;
$tmp4 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp4->value = $tmp3;
panda$core$Int64 $tmp5 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp6 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp5);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp7;
$tmp7 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((panda$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[1];
panda$core$Bit $tmp11 = $tmp9(((panda$core$Equatable*) $tmp4), ((panda$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp13 = (panda$core$Int64) {26};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s14, $tmp13);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp7)));
// line 27
org$pandalanguage$pandac$MethodDecl** $tmp15 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp16 = *$tmp15;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp16));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp17 = &param0->value;
*$tmp17 = param3;
// line 28
org$pandalanguage$pandac$Type** $tmp18 = &param0->target;
org$pandalanguage$pandac$Type* $tmp19 = *$tmp18;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp19));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp20 = &param0->target;
*$tmp20 = param2;
// line 29
panda$core$Weak** $tmp21 = &param3->owner;
panda$core$Weak* $tmp22 = *$tmp21;
panda$core$Object* $tmp23 = panda$core$Weak$get$R$panda$core$Weak$T($tmp22);
panda$core$Panda$unref$panda$core$Object$Q($tmp23);
org$pandalanguage$pandac$Type* $tmp24 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param1, param2, ((org$pandalanguage$pandac$ClassDecl*) $tmp23));
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp25 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp25));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
*(&local0) = $tmp24;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp24));
// line 30
org$pandalanguage$pandac$Type* $tmp26 = *(&local0);
panda$core$Bit $tmp27 = panda$core$Bit$init$builtin_bit($tmp26 != NULL);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp29 = (panda$core$Int64) {30};
panda$core$String* $tmp30 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s31, ((panda$core$Object*) param2));
panda$core$String* $tmp32 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp30, &$s33);
panda$core$Weak** $tmp34 = &param3->owner;
panda$core$Weak* $tmp35 = *$tmp34;
panda$core$Object* $tmp36 = panda$core$Weak$get$R$panda$core$Weak$T($tmp35);
panda$core$Panda$unref$panda$core$Object$Q($tmp36);
panda$core$String** $tmp37 = &((org$pandalanguage$pandac$ClassDecl*) $tmp36)->name;
panda$core$String* $tmp38 = *$tmp37;
panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp32, $tmp38);
panda$core$String* $tmp40 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, &$s41);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s42, $tmp29, $tmp40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp30));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp40));
abort(); // unreachable
block3:;
// line 31
org$pandalanguage$pandac$Type* $tmp43 = org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type(param3);
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp44 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp44));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
*(&local1) = $tmp43;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp43));
// line 32
org$pandalanguage$pandac$Annotations** $tmp45 = &param3->annotations;
org$pandalanguage$pandac$Annotations* $tmp46 = *$tmp45;
panda$core$Bit $tmp47 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp46);
panda$core$Bit $tmp48 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp47);
bool $tmp49 = $tmp48.value;
if ($tmp49) goto block5; else goto block6;
block5:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp50 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp51 = *$tmp50;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp52;
$tmp52 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp52->value = $tmp51;
panda$core$Int64 $tmp53 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp54 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp53);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp55;
$tmp55 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp55->value = $tmp54;
ITable* $tmp56 = ((panda$core$Equatable*) $tmp52)->$class->itable;
while ($tmp56->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp56 = $tmp56->next;
}
$fn58 $tmp57 = $tmp56->methods[1];
panda$core$Bit $tmp59 = $tmp57(((panda$core$Equatable*) $tmp52), ((panda$core$Equatable*) $tmp55));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp52)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp55)));
*(&local3) = $tmp59;
goto block7;
block6:;
*(&local3) = $tmp48;
goto block7;
block7:;
panda$core$Bit $tmp60 = *(&local3);
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block8; else goto block9;
block8:;
panda$core$Bit $tmp62 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(param2);
*(&local2) = $tmp62;
goto block10;
block9:;
*(&local2) = $tmp60;
goto block10;
block10:;
panda$core$Bit $tmp63 = *(&local2);
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block11; else goto block13;
block11:;
// line 34
panda$collections$Array* $tmp65 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp65);
*(&local4) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp66 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
*(&local4) = $tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
// line 35
panda$collections$Array* $tmp67 = *(&local4);
panda$collections$ImmutableArray** $tmp68 = &param2->subtypes;
panda$collections$ImmutableArray* $tmp69 = *$tmp68;
panda$core$Int64 $tmp70 = (panda$core$Int64) {1};
panda$core$Object* $tmp71 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp69, $tmp70);
panda$collections$Array$add$panda$collections$Array$T($tmp67, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp71)));
panda$core$Panda$unref$panda$core$Object$Q($tmp71);
// line 36
panda$collections$Array* $tmp72 = *(&local4);
org$pandalanguage$pandac$Type* $tmp73 = *(&local1);
panda$collections$ImmutableArray** $tmp74 = &$tmp73->subtypes;
panda$collections$ImmutableArray* $tmp75 = *$tmp74;
panda$core$Int64 $tmp76 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp77 = *(&local1);
panda$collections$ImmutableArray** $tmp78 = &$tmp77->subtypes;
panda$collections$ImmutableArray* $tmp79 = *$tmp78;
ITable* $tmp80 = ((panda$collections$CollectionView*) $tmp79)->$class->itable;
while ($tmp80->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp80 = $tmp80->next;
}
$fn82 $tmp81 = $tmp80->methods[0];
panda$core$Int64 $tmp83 = $tmp81(((panda$collections$CollectionView*) $tmp79));
panda$core$Int64 $tmp84 = (panda$core$Int64) {1};
int64_t $tmp85 = $tmp83.value;
int64_t $tmp86 = $tmp84.value;
int64_t $tmp87 = $tmp85 - $tmp86;
panda$core$Int64 $tmp88 = (panda$core$Int64) {$tmp87};
panda$core$Bit $tmp89 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp90 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp76, $tmp88, $tmp89);
ITable* $tmp91 = ((panda$collections$ListView*) $tmp75)->$class->itable;
while ($tmp91->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp91 = $tmp91->next;
}
$fn93 $tmp92 = $tmp91->methods[1];
panda$collections$ListView* $tmp94 = $tmp92(((panda$collections$ListView*) $tmp75), $tmp90);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp72, ((panda$collections$CollectionView*) $tmp94));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp94));
// line 37
// line 38
org$pandalanguage$pandac$MethodDecl$Kind* $tmp95 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp96 = *$tmp95;
panda$core$Int64 $tmp97 = $tmp96.$rawValue;
panda$core$Int64 $tmp98 = (panda$core$Int64) {0};
panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp97, $tmp98);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block15; else goto block16;
block15:;
// line 40
panda$core$Int64 $tmp101 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp102 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp101);
*(&local5) = $tmp102;
goto block14;
block16:;
panda$core$Int64 $tmp103 = (panda$core$Int64) {1};
panda$core$Bit $tmp104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp97, $tmp103);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block17; else goto block18;
block17:;
// line 43
panda$core$Int64 $tmp106 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp107 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp106);
*(&local5) = $tmp107;
goto block14;
block18:;
// line 46
panda$core$Bit $tmp108 = panda$core$Bit$init$builtin_bit(false);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp110 = (panda$core$Int64) {46};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s111, $tmp110);
abort(); // unreachable
block19:;
goto block14;
block14:;
// line 49
org$pandalanguage$pandac$Type* $tmp112 = *(&local1);
org$pandalanguage$pandac$Position* $tmp113 = &((org$pandalanguage$pandac$Symbol*) $tmp112)->position;
org$pandalanguage$pandac$Position $tmp114 = *$tmp113;
org$pandalanguage$pandac$Type$Kind $tmp115 = *(&local5);
panda$collections$Array* $tmp116 = *(&local4);
org$pandalanguage$pandac$Type* $tmp117 = *(&local1);
org$pandalanguage$pandac$Type* $tmp118 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp117);
org$pandalanguage$pandac$Type* $tmp119 = *(&local1);
panda$core$Int64* $tmp120 = &$tmp119->priority;
panda$core$Int64 $tmp121 = *$tmp120;
org$pandalanguage$pandac$Type* $tmp122 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp114, $tmp115, ((panda$collections$ListView*) $tmp116), $tmp118, $tmp121);
org$pandalanguage$pandac$Type* $tmp123 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
*(&local1) = $tmp122;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp118));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
panda$collections$Array* $tmp124 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp124));
// unreffing parameterTypes
*(&local4) = ((panda$collections$Array*) NULL);
goto block12;
block13:;
// line 52
panda$core$Bit $tmp125 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param1, param2);
panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block21; else goto block22;
block21:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp128 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp129 = *$tmp128;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp130;
$tmp130 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp130->value = $tmp129;
panda$core$Int64 $tmp131 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp132 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp131);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp133;
$tmp133 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp133->value = $tmp132;
ITable* $tmp134 = ((panda$core$Equatable*) $tmp130)->$class->itable;
while ($tmp134->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp134 = $tmp134->next;
}
$fn136 $tmp135 = $tmp134->methods[1];
panda$core$Bit $tmp137 = $tmp135(((panda$core$Equatable*) $tmp130), ((panda$core$Equatable*) $tmp133));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp130)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp133)));
*(&local6) = $tmp137;
goto block23;
block22:;
*(&local6) = $tmp126;
goto block23;
block23:;
panda$core$Bit $tmp138 = *(&local6);
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block24; else goto block25;
block24:;
// line 53
// line 54
org$pandalanguage$pandac$MethodDecl$Kind* $tmp140 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp141 = *$tmp140;
panda$core$Int64 $tmp142 = $tmp141.$rawValue;
panda$core$Int64 $tmp143 = (panda$core$Int64) {0};
panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp142, $tmp143);
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block27; else goto block28;
block27:;
// line 56
panda$core$Int64 $tmp146 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp147 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp146);
*(&local7) = $tmp147;
goto block26;
block28:;
panda$core$Int64 $tmp148 = (panda$core$Int64) {1};
panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp142, $tmp148);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block29; else goto block30;
block29:;
// line 59
panda$core$Int64 $tmp151 = (panda$core$Int64) {14};
org$pandalanguage$pandac$Type$Kind $tmp152 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp151);
*(&local7) = $tmp152;
goto block26;
block30:;
// line 62
panda$core$Bit $tmp153 = panda$core$Bit$init$builtin_bit(false);
bool $tmp154 = $tmp153.value;
if ($tmp154) goto block31; else goto block32;
block32:;
panda$core$Int64 $tmp155 = (panda$core$Int64) {62};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s156, $tmp155);
abort(); // unreachable
block31:;
goto block26;
block26:;
// line 65
org$pandalanguage$pandac$Type* $tmp157 = *(&local1);
org$pandalanguage$pandac$Position* $tmp158 = &((org$pandalanguage$pandac$Symbol*) $tmp157)->position;
org$pandalanguage$pandac$Position $tmp159 = *$tmp158;
org$pandalanguage$pandac$Type$Kind $tmp160 = *(&local7);
org$pandalanguage$pandac$Type* $tmp161 = *(&local1);
panda$collections$ImmutableArray** $tmp162 = &$tmp161->subtypes;
panda$collections$ImmutableArray* $tmp163 = *$tmp162;
panda$core$Int64 $tmp164 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp165 = *(&local1);
panda$collections$ImmutableArray** $tmp166 = &$tmp165->subtypes;
panda$collections$ImmutableArray* $tmp167 = *$tmp166;
ITable* $tmp168 = ((panda$collections$CollectionView*) $tmp167)->$class->itable;
while ($tmp168->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp168 = $tmp168->next;
}
$fn170 $tmp169 = $tmp168->methods[0];
panda$core$Int64 $tmp171 = $tmp169(((panda$collections$CollectionView*) $tmp167));
panda$core$Int64 $tmp172 = (panda$core$Int64) {1};
int64_t $tmp173 = $tmp171.value;
int64_t $tmp174 = $tmp172.value;
int64_t $tmp175 = $tmp173 - $tmp174;
panda$core$Int64 $tmp176 = (panda$core$Int64) {$tmp175};
panda$core$Bit $tmp177 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp178 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp164, $tmp176, $tmp177);
ITable* $tmp179 = ((panda$collections$ListView*) $tmp163)->$class->itable;
while ($tmp179->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp179 = $tmp179->next;
}
$fn181 $tmp180 = $tmp179->methods[1];
panda$collections$ListView* $tmp182 = $tmp180(((panda$collections$ListView*) $tmp163), $tmp178);
org$pandalanguage$pandac$Type* $tmp183 = *(&local1);
org$pandalanguage$pandac$Type* $tmp184 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp183);
org$pandalanguage$pandac$Type* $tmp185 = *(&local1);
panda$core$Int64* $tmp186 = &$tmp185->priority;
panda$core$Int64 $tmp187 = *$tmp186;
org$pandalanguage$pandac$Type* $tmp188 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp159, $tmp160, $tmp182, $tmp184, $tmp187);
org$pandalanguage$pandac$Type* $tmp189 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
*(&local1) = $tmp188;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp182));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp184));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
goto block25;
block25:;
goto block12;
block12:;
// line 69
org$pandalanguage$pandac$Type* $tmp190 = *(&local0);
org$pandalanguage$pandac$Type* $tmp191 = *(&local1);
org$pandalanguage$pandac$Type* $tmp192 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp190, $tmp191);
org$pandalanguage$pandac$Type** $tmp193 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp194 = *$tmp193;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp194));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
org$pandalanguage$pandac$Type** $tmp195 = &param0->effectiveType;
*$tmp195 = $tmp192;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp192));
org$pandalanguage$pandac$Type* $tmp196 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp196));
// unreffing methodType
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp197 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp197));
// unreffing found
*(&local0) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* param0) {

// line 73
org$pandalanguage$pandac$Type** $tmp198 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp199 = *$tmp198;
panda$core$Int64 $tmp200 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp199);
return $tmp200;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* param0, panda$core$Int64 param1) {

// line 77
org$pandalanguage$pandac$Type** $tmp201 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp202 = *$tmp201;
panda$collections$ImmutableArray** $tmp203 = &$tmp202->subtypes;
panda$collections$ImmutableArray* $tmp204 = *$tmp203;
panda$core$Object* $tmp205 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp204, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp205)));
panda$core$Panda$unref$panda$core$Object$Q($tmp205);
return ((org$pandalanguage$pandac$Type*) $tmp205);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* param0) {

// line 81
org$pandalanguage$pandac$Type** $tmp206 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp207 = *$tmp206;
org$pandalanguage$pandac$Type* $tmp208 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp207);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp208));
return $tmp208;

}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* param0) {

// line 86
org$pandalanguage$pandac$MethodDecl** $tmp209 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp210 = *$tmp209;
panda$core$String* $tmp211 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp210);
panda$core$String* $tmp212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s213, $tmp211);
panda$core$String* $tmp214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp212, &$s215);
org$pandalanguage$pandac$Type** $tmp216 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp217 = *$tmp216;
panda$core$String* $tmp218 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp214, ((panda$core$Object*) $tmp217));
panda$core$String* $tmp219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp218, &$s220);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp212));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp218));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
return $tmp219;

}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* param0) {

org$pandalanguage$pandac$Type** $tmp221 = &param0->target;
org$pandalanguage$pandac$Type* $tmp222 = *$tmp221;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp222));
org$pandalanguage$pandac$MethodDecl** $tmp223 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp224 = *$tmp223;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
org$pandalanguage$pandac$Type** $tmp225 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp226 = *$tmp225;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
return;

}

