#include "panda/math/MersenneTwister.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/math/Random.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/collections/Array.h"
#include "panda/core/Bit.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt32.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/io/Console.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$math$MersenneTwister$_panda$math$Random = { (panda$core$Class*) &panda$math$Random$class, NULL, { panda$math$Random$bit$R$panda$core$Bit, panda$math$MersenneTwister$int32$R$panda$core$Int32, panda$math$MersenneTwister$int64$R$panda$core$Int64, panda$math$Random$int$panda$core$Int64$R$panda$core$Int64, panda$math$Random$real32$R$panda$core$Real32, panda$math$Random$real64$R$panda$core$Real64} };

static panda$core$String $s1;
panda$math$MersenneTwister$class_type panda$math$MersenneTwister$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$math$MersenneTwister$_panda$math$Random, { panda$core$Object$convert$R$panda$core$String, panda$math$MersenneTwister$cleanup, panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT, panda$math$MersenneTwister$extract$R$panda$core$UInt32, panda$math$MersenneTwister$twist, panda$math$MersenneTwister$int32$R$panda$core$Int32, panda$math$MersenneTwister$int64$R$panda$core$Int64} };

typedef panda$core$Int32 (*$fn28)(panda$math$Random*);
typedef panda$core$Int64 (*$fn50)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn62)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn73)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x6d\x61\x74\x68\x2e\x4d\x65\x72\x73\x65\x6e\x6e\x65\x54\x77\x69\x73\x74\x65\x72", 26, 1964359889194503994, NULL };

void panda$math$MersenneTwister$init(panda$math$MersenneTwister* param0) {

// line 35
panda$math$Random* $tmp2 = panda$math$Random$default$R$panda$math$Random();
panda$math$MersenneTwister$init$panda$math$Random(param0, $tmp2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
return;

}
void panda$math$MersenneTwister$init$panda$math$Random(panda$math$MersenneTwister* param0, panda$math$Random* param1) {

panda$core$Int64 local0;
// line 27
panda$core$Int64 $tmp3 = panda$core$Int64$init$builtin_int64(624);
panda$core$Int64* $tmp4 = &param0->index;
*$tmp4 = $tmp3;
// line 41
panda$core$Object$init(((panda$core$Object*) param0));
// line 42
panda$collections$Array* $tmp5 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp6 = panda$core$Int64$init$builtin_int64(624);
panda$collections$Array$init$panda$core$Int64($tmp5, $tmp6);
panda$collections$Array** $tmp7 = &param0->mt;
panda$collections$Array* $tmp8 = *$tmp7;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp8));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
panda$collections$Array** $tmp9 = &param0->mt;
*$tmp9 = $tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// line 43
panda$core$Int64 $tmp10 = panda$core$Int64$init$builtin_int64(0);
panda$core$Int64 $tmp11 = panda$core$Int64$init$builtin_int64(624);
panda$core$Bit $tmp12 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp13 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp10, $tmp11, $tmp12);
panda$core$Int64 $tmp14 = $tmp13.min;
*(&local0) = $tmp14;
panda$core$Int64 $tmp15 = $tmp13.max;
panda$core$Bit $tmp16 = $tmp13.inclusive;
bool $tmp17 = $tmp16.value;
panda$core$Int64 $tmp18 = panda$core$Int64$init$builtin_int64(1);
panda$core$UInt64 $tmp19 = panda$core$Int64$convert$R$panda$core$UInt64($tmp18);
if ($tmp17) goto block4; else goto block5;
block4:;
panda$core$Bit $tmp20 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp14, $tmp15);
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block1; else goto block2;
block5:;
panda$core$Bit $tmp22 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp14, $tmp15);
bool $tmp23 = $tmp22.value;
if ($tmp23) goto block1; else goto block2;
block1:;
// line 44
panda$collections$Array** $tmp24 = &param0->mt;
panda$collections$Array* $tmp25 = *$tmp24;
ITable* $tmp26 = param1->$class->itable;
while ($tmp26->$class != (panda$core$Class*) &panda$math$Random$class) {
    $tmp26 = $tmp26->next;
}
$fn28 $tmp27 = $tmp26->methods[1];
panda$core$Int32 $tmp29 = $tmp27(param1);
panda$core$UInt32 $tmp30 = panda$core$Int32$convert$R$panda$core$UInt32($tmp29);
panda$core$UInt32$wrapper* $tmp31;
$tmp31 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
$tmp31->value = $tmp30;
panda$collections$Array$add$panda$collections$Array$T($tmp25, ((panda$core$Object*) $tmp31));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
goto block3;
block3:;
panda$core$Int64 $tmp32 = *(&local0);
int64_t $tmp33 = $tmp15.value;
int64_t $tmp34 = $tmp32.value;
int64_t $tmp35 = $tmp33 - $tmp34;
panda$core$Int64 $tmp36 = panda$core$Int64$init$builtin_int64($tmp35);
panda$core$UInt64 $tmp37 = panda$core$Int64$convert$R$panda$core$UInt64($tmp36);
if ($tmp17) goto block7; else goto block8;
block7:;
panda$core$Bit $tmp38 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit($tmp37, $tmp19);
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block6; else goto block2;
block8:;
panda$core$Bit $tmp40 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit($tmp37, $tmp19);
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block6; else goto block2;
block6:;
int64_t $tmp42 = $tmp32.value;
int64_t $tmp43 = $tmp18.value;
int64_t $tmp44 = $tmp42 + $tmp43;
panda$core$Int64 $tmp45 = panda$core$Int64$init$builtin_int64($tmp44);
*(&local0) = $tmp45;
goto block1;
block2:;
return;

}
void panda$math$MersenneTwister$init$panda$collections$Array$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* param0, panda$collections$Array* param1) {

panda$core$Int64 local0;
// line 27
panda$core$Int64 $tmp46 = panda$core$Int64$init$builtin_int64(624);
panda$core$Int64* $tmp47 = &param0->index;
*$tmp47 = $tmp46;
// line 54
panda$core$Object$init(((panda$core$Object*) param0));
// line 55
ITable* $tmp48 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp48->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[0];
panda$core$Int64 $tmp51 = $tmp49(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp52 = panda$core$Int64$init$builtin_int64(624);
panda$core$Bit $tmp53 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp51, $tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block1; else goto block2;
block1:;
// line 56
panda$collections$Array* $tmp55 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp56 = panda$core$Int64$init$builtin_int64(0);
panda$core$Int64 $tmp57 = panda$core$Int64$init$builtin_int64(624);
panda$core$Bit $tmp58 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp59 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp56, $tmp57, $tmp58);
ITable* $tmp60 = ((panda$collections$ListView*) param1)->$class->itable;
while ($tmp60->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp60 = $tmp60->next;
}
$fn62 $tmp61 = $tmp60->methods[1];
panda$collections$ListView* $tmp63 = $tmp61(((panda$collections$ListView*) param1), $tmp59);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp55, ((panda$collections$CollectionView*) $tmp63));
panda$collections$Array** $tmp64 = &param0->mt;
panda$collections$Array* $tmp65 = *$tmp64;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp65));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$collections$Array** $tmp66 = &param0->mt;
*$tmp66 = $tmp55;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp55));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
// line 57
return;
block2:;
// line 59
panda$collections$Array* $tmp67 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp67, ((panda$collections$CollectionView*) param1));
panda$collections$Array** $tmp68 = &param0->mt;
panda$collections$Array* $tmp69 = *$tmp68;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp69));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
panda$collections$Array** $tmp70 = &param0->mt;
*$tmp70 = $tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp67));
// line 60
ITable* $tmp71 = ((panda$collections$CollectionView*) param1)->$class->itable;
while ($tmp71->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp71 = $tmp71->next;
}
$fn73 $tmp72 = $tmp71->methods[0];
panda$core$Int64 $tmp74 = $tmp72(((panda$collections$CollectionView*) param1));
panda$core$Int64 $tmp75 = panda$core$Int64$init$builtin_int64(624);
panda$core$Bit $tmp76 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp77 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp74, $tmp75, $tmp76);
panda$core$Int64 $tmp78 = $tmp77.min;
*(&local0) = $tmp78;
panda$core$Int64 $tmp79 = $tmp77.max;
panda$core$Bit $tmp80 = $tmp77.inclusive;
bool $tmp81 = $tmp80.value;
panda$core$Int64 $tmp82 = panda$core$Int64$init$builtin_int64(1);
panda$core$UInt64 $tmp83 = panda$core$Int64$convert$R$panda$core$UInt64($tmp82);
if ($tmp81) goto block6; else goto block7;
block6:;
panda$core$Bit $tmp84 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp78, $tmp79);
bool $tmp85 = $tmp84.value;
if ($tmp85) goto block3; else goto block4;
block7:;
panda$core$Bit $tmp86 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp78, $tmp79);
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block3; else goto block4;
block3:;
// line 61
panda$collections$Array** $tmp88 = &param0->mt;
panda$collections$Array* $tmp89 = *$tmp88;
panda$core$Int32 $tmp90 = panda$core$Int32$init$builtin_int32(1812433253);
panda$collections$Array** $tmp91 = &param0->mt;
panda$collections$Array* $tmp92 = *$tmp91;
panda$core$Int64 $tmp93 = *(&local0);
panda$core$Int64 $tmp94 = panda$core$Int64$init$builtin_int64(1);
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94.value;
int64_t $tmp97 = $tmp95 - $tmp96;
panda$core$Int64 $tmp98 = panda$core$Int64$init$builtin_int64($tmp97);
panda$core$Object* $tmp99 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp92, $tmp98);
panda$collections$Array** $tmp100 = &param0->mt;
panda$collections$Array* $tmp101 = *$tmp100;
panda$core$Int64 $tmp102 = *(&local0);
panda$core$Int64 $tmp103 = panda$core$Int64$init$builtin_int64(1);
int64_t $tmp104 = $tmp102.value;
int64_t $tmp105 = $tmp103.value;
int64_t $tmp106 = $tmp104 - $tmp105;
panda$core$Int64 $tmp107 = panda$core$Int64$init$builtin_int64($tmp106);
panda$core$Object* $tmp108 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp101, $tmp107);
panda$core$Int32 $tmp109 = panda$core$Int32$init$builtin_int32(32);
panda$core$Int32 $tmp110 = panda$core$Int32$init$builtin_int32(2);
int32_t $tmp111 = $tmp109.value;
int32_t $tmp112 = $tmp110.value;
int32_t $tmp113 = $tmp111 - $tmp112;
panda$core$Int32 $tmp114 = panda$core$Int32$init$builtin_int32($tmp113);
panda$core$Int32 $tmp115 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp108)->value, $tmp114);
panda$core$Int32 $tmp116 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp99)->value, $tmp115);
int32_t $tmp117 = $tmp90.value;
int32_t $tmp118 = $tmp116.value;
int32_t $tmp119 = $tmp117 * $tmp118;
panda$core$Int32 $tmp120 = panda$core$Int32$init$builtin_int32($tmp119);
panda$core$Int64 $tmp121 = panda$core$Int64$init$panda$core$Int32($tmp120);
panda$core$Int64 $tmp122 = *(&local0);
int64_t $tmp123 = $tmp121.value;
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123 + $tmp124;
panda$core$Int64 $tmp126 = panda$core$Int64$init$builtin_int64($tmp125);
panda$core$UInt32 $tmp127 = panda$core$Int64$convert$R$panda$core$UInt32($tmp126);
panda$core$UInt32$wrapper* $tmp128;
$tmp128 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
$tmp128->value = $tmp127;
panda$collections$Array$add$panda$collections$Array$T($tmp89, ((panda$core$Object*) $tmp128));
panda$core$Panda$unref$panda$core$Object$Q($tmp99);
panda$core$Panda$unref$panda$core$Object$Q($tmp108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
goto block5;
block5:;
panda$core$Int64 $tmp129 = *(&local0);
int64_t $tmp130 = $tmp79.value;
int64_t $tmp131 = $tmp129.value;
int64_t $tmp132 = $tmp130 - $tmp131;
panda$core$Int64 $tmp133 = panda$core$Int64$init$builtin_int64($tmp132);
panda$core$UInt64 $tmp134 = panda$core$Int64$convert$R$panda$core$UInt64($tmp133);
if ($tmp81) goto block9; else goto block10;
block9:;
panda$core$Bit $tmp135 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit($tmp134, $tmp83);
bool $tmp136 = $tmp135.value;
if ($tmp136) goto block8; else goto block4;
block10:;
panda$core$Bit $tmp137 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit($tmp134, $tmp83);
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block8; else goto block4;
block8:;
int64_t $tmp139 = $tmp129.value;
int64_t $tmp140 = $tmp82.value;
int64_t $tmp141 = $tmp139 + $tmp140;
panda$core$Int64 $tmp142 = panda$core$Int64$init$builtin_int64($tmp141);
*(&local0) = $tmp142;
goto block3;
block4:;
// line 63
panda$collections$Array** $tmp143 = &param0->mt;
panda$collections$Array* $tmp144 = *$tmp143;
panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp144));
return;

}
void panda$math$MersenneTwister$init$panda$core$Int64(panda$math$MersenneTwister* param0, panda$core$Int64 param1) {

panda$core$Int64 local0;
// line 27
panda$core$Int64 $tmp145 = panda$core$Int64$init$builtin_int64(624);
panda$core$Int64* $tmp146 = &param0->index;
*$tmp146 = $tmp145;
// line 72
panda$core$Object$init(((panda$core$Object*) param0));
// line 73
panda$collections$Array* $tmp147 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Int64 $tmp148 = panda$core$Int64$init$builtin_int64(624);
panda$collections$Array$init$panda$core$Int64($tmp147, $tmp148);
panda$collections$Array** $tmp149 = &param0->mt;
panda$collections$Array* $tmp150 = *$tmp149;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
panda$collections$Array** $tmp151 = &param0->mt;
*$tmp151 = $tmp147;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp147));
// line 74
panda$collections$Array** $tmp152 = &param0->mt;
panda$collections$Array* $tmp153 = *$tmp152;
panda$core$Int64 $tmp154 = panda$core$Int64$init$builtin_int64(32);
panda$core$Int64 $tmp155 = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(param1, $tmp154);
panda$core$UInt32 $tmp156 = panda$core$Int64$convert$R$panda$core$UInt32($tmp155);
panda$core$UInt32$wrapper* $tmp157;
$tmp157 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
$tmp157->value = $tmp156;
panda$collections$Array$add$panda$collections$Array$T($tmp153, ((panda$core$Object*) $tmp157));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// line 75
panda$collections$Array** $tmp158 = &param0->mt;
panda$collections$Array* $tmp159 = *$tmp158;
panda$core$UInt32 $tmp160 = panda$core$Int64$convert$R$panda$core$UInt32(param1);
panda$core$UInt32$wrapper* $tmp161;
$tmp161 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
$tmp161->value = $tmp160;
panda$collections$Array$add$panda$collections$Array$T($tmp159, ((panda$core$Object*) $tmp161));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp161));
// line 76
panda$core$Int64 $tmp162 = panda$core$Int64$init$builtin_int64(2);
panda$core$Int64 $tmp163 = panda$core$Int64$init$builtin_int64(624);
panda$core$Bit $tmp164 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp165 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp162, $tmp163, $tmp164);
panda$core$Int64 $tmp166 = $tmp165.min;
*(&local0) = $tmp166;
panda$core$Int64 $tmp167 = $tmp165.max;
panda$core$Bit $tmp168 = $tmp165.inclusive;
bool $tmp169 = $tmp168.value;
panda$core$Int64 $tmp170 = panda$core$Int64$init$builtin_int64(1);
panda$core$UInt64 $tmp171 = panda$core$Int64$convert$R$panda$core$UInt64($tmp170);
if ($tmp169) goto block4; else goto block5;
block4:;
panda$core$Bit $tmp172 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp166, $tmp167);
bool $tmp173 = $tmp172.value;
if ($tmp173) goto block1; else goto block2;
block5:;
panda$core$Bit $tmp174 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp166, $tmp167);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block1; else goto block2;
block1:;
// line 77
panda$collections$Array** $tmp176 = &param0->mt;
panda$collections$Array* $tmp177 = *$tmp176;
panda$core$Int32 $tmp178 = panda$core$Int32$init$builtin_int32(1812433253);
panda$collections$Array** $tmp179 = &param0->mt;
panda$collections$Array* $tmp180 = *$tmp179;
panda$core$Int64 $tmp181 = *(&local0);
panda$core$Int64 $tmp182 = panda$core$Int64$init$builtin_int64(1);
int64_t $tmp183 = $tmp181.value;
int64_t $tmp184 = $tmp182.value;
int64_t $tmp185 = $tmp183 - $tmp184;
panda$core$Int64 $tmp186 = panda$core$Int64$init$builtin_int64($tmp185);
panda$core$Object* $tmp187 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp180, $tmp186);
panda$collections$Array** $tmp188 = &param0->mt;
panda$collections$Array* $tmp189 = *$tmp188;
panda$core$Int64 $tmp190 = *(&local0);
panda$core$Int64 $tmp191 = panda$core$Int64$init$builtin_int64(1);
int64_t $tmp192 = $tmp190.value;
int64_t $tmp193 = $tmp191.value;
int64_t $tmp194 = $tmp192 - $tmp193;
panda$core$Int64 $tmp195 = panda$core$Int64$init$builtin_int64($tmp194);
panda$core$Object* $tmp196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp189, $tmp195);
panda$core$Int32 $tmp197 = panda$core$Int32$init$builtin_int32(32);
panda$core$Int32 $tmp198 = panda$core$Int32$init$builtin_int32(2);
int32_t $tmp199 = $tmp197.value;
int32_t $tmp200 = $tmp198.value;
int32_t $tmp201 = $tmp199 - $tmp200;
panda$core$Int32 $tmp202 = panda$core$Int32$init$builtin_int32($tmp201);
panda$core$Int32 $tmp203 = panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp196)->value, $tmp202);
panda$core$Int32 $tmp204 = panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt32$wrapper*) $tmp187)->value, $tmp203);
int32_t $tmp205 = $tmp178.value;
int32_t $tmp206 = $tmp204.value;
int32_t $tmp207 = $tmp205 * $tmp206;
panda$core$Int32 $tmp208 = panda$core$Int32$init$builtin_int32($tmp207);
panda$core$Int64 $tmp209 = panda$core$Int64$init$panda$core$Int32($tmp208);
panda$core$Int64 $tmp210 = *(&local0);
int64_t $tmp211 = $tmp209.value;
int64_t $tmp212 = $tmp210.value;
int64_t $tmp213 = $tmp211 + $tmp212;
panda$core$Int64 $tmp214 = panda$core$Int64$init$builtin_int64($tmp213);
panda$core$UInt32 $tmp215 = panda$core$Int64$convert$R$panda$core$UInt32($tmp214);
panda$core$UInt32$wrapper* $tmp216;
$tmp216 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
$tmp216->value = $tmp215;
panda$collections$Array$add$panda$collections$Array$T($tmp177, ((panda$core$Object*) $tmp216));
panda$core$Panda$unref$panda$core$Object$Q($tmp187);
panda$core$Panda$unref$panda$core$Object$Q($tmp196);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
goto block3;
block3:;
panda$core$Int64 $tmp217 = *(&local0);
int64_t $tmp218 = $tmp167.value;
int64_t $tmp219 = $tmp217.value;
int64_t $tmp220 = $tmp218 - $tmp219;
panda$core$Int64 $tmp221 = panda$core$Int64$init$builtin_int64($tmp220);
panda$core$UInt64 $tmp222 = panda$core$Int64$convert$R$panda$core$UInt64($tmp221);
if ($tmp169) goto block7; else goto block8;
block7:;
panda$core$Bit $tmp223 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit($tmp222, $tmp171);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block6; else goto block2;
block8:;
panda$core$Bit $tmp225 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit($tmp222, $tmp171);
bool $tmp226 = $tmp225.value;
if ($tmp226) goto block6; else goto block2;
block6:;
int64_t $tmp227 = $tmp217.value;
int64_t $tmp228 = $tmp170.value;
int64_t $tmp229 = $tmp227 + $tmp228;
panda$core$Int64 $tmp230 = panda$core$Int64$init$builtin_int64($tmp229);
*(&local0) = $tmp230;
goto block1;
block2:;
return;

}
panda$collections$ListView* panda$math$MersenneTwister$get_state$R$panda$collections$ListView$LTpanda$core$UInt32$GT(panda$math$MersenneTwister* param0) {

// line 83
panda$collections$Array* $tmp231 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array** $tmp232 = &param0->mt;
panda$collections$Array* $tmp233 = *$tmp232;
panda$collections$Array$init$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp231, ((panda$collections$CollectionView*) $tmp233));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp231)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
return ((panda$collections$ListView*) $tmp231);

}
panda$core$UInt32 panda$math$MersenneTwister$extract$R$panda$core$UInt32(panda$math$MersenneTwister* param0) {

panda$core$UInt32 local0;
// line 88
panda$core$Int64* $tmp234 = &param0->index;
panda$core$Int64 $tmp235 = *$tmp234;
panda$core$Int64 $tmp236 = panda$core$Int64$init$builtin_int64(624);
panda$core$Bit $tmp237 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp235, $tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block1; else goto block2;
block1:;
// line 89
panda$math$MersenneTwister$twist(param0);
goto block2;
block2:;
// line 91
panda$collections$Array** $tmp239 = &param0->mt;
panda$collections$Array* $tmp240 = *$tmp239;
panda$core$Int64* $tmp241 = &param0->index;
panda$core$Int64 $tmp242 = *$tmp241;
panda$core$Object* $tmp243 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp240, $tmp242);
*(&local0) = ((panda$core$UInt32$wrapper*) $tmp243)->value;
panda$core$Panda$unref$panda$core$Object$Q($tmp243);
// line 92
panda$core$UInt32 $tmp244 = *(&local0);
panda$core$UInt32 $tmp245 = *(&local0);
panda$core$UInt32 $tmp246 = panda$core$UInt32$init$builtin_uint32(11);
panda$core$UInt32 $tmp247 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32($tmp245, $tmp246);
panda$core$UInt32 $tmp248 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32($tmp244, $tmp247);
*(&local0) = $tmp248;
// line 93
panda$core$UInt32 $tmp249 = *(&local0);
panda$core$UInt32 $tmp250 = *(&local0);
panda$core$UInt32 $tmp251 = panda$core$UInt32$init$builtin_uint32(7);
panda$core$UInt32 $tmp252 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32($tmp250, $tmp251);
panda$core$UInt32 $tmp253 = panda$core$UInt32$init$builtin_uint32(2636928640);
panda$core$UInt32 $tmp254 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp252, $tmp253);
panda$core$UInt32 $tmp255 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32($tmp249, $tmp254);
*(&local0) = $tmp255;
// line 94
panda$core$UInt32 $tmp256 = *(&local0);
panda$core$UInt32 $tmp257 = *(&local0);
panda$core$UInt32 $tmp258 = panda$core$UInt32$init$builtin_uint32(15);
panda$core$UInt32 $tmp259 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32($tmp257, $tmp258);
panda$core$UInt32 $tmp260 = panda$core$UInt32$init$builtin_uint32(4022730752);
panda$core$UInt32 $tmp261 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32($tmp259, $tmp260);
panda$core$UInt32 $tmp262 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32($tmp256, $tmp261);
*(&local0) = $tmp262;
// line 95
panda$core$UInt32 $tmp263 = *(&local0);
panda$core$UInt32 $tmp264 = *(&local0);
panda$core$UInt32 $tmp265 = panda$core$UInt32$init$builtin_uint32(18);
panda$core$UInt32 $tmp266 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32($tmp264, $tmp265);
panda$core$UInt32 $tmp267 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32($tmp263, $tmp266);
*(&local0) = $tmp267;
// line 96
panda$core$Int64* $tmp268 = &param0->index;
panda$core$Int64 $tmp269 = *$tmp268;
panda$core$Int64 $tmp270 = panda$core$Int64$init$builtin_int64(1);
int64_t $tmp271 = $tmp269.value;
int64_t $tmp272 = $tmp270.value;
int64_t $tmp273 = $tmp271 + $tmp272;
panda$core$Int64 $tmp274 = panda$core$Int64$init$builtin_int64($tmp273);
panda$core$Int64* $tmp275 = &param0->index;
*$tmp275 = $tmp274;
// line 97
panda$core$UInt32 $tmp276 = *(&local0);
return $tmp276;

}
void panda$math$MersenneTwister$twist(panda$math$MersenneTwister* param0) {

panda$core$Int64 local0;
panda$core$UInt32 local1;
// line 102
panda$core$Int64 $tmp277 = panda$core$Int64$init$builtin_int64(0);
panda$core$Int64 $tmp278 = panda$core$Int64$init$builtin_int64(624);
panda$core$Bit $tmp279 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp280 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp277, $tmp278, $tmp279);
panda$core$Int64 $tmp281 = $tmp280.min;
*(&local0) = $tmp281;
panda$core$Int64 $tmp282 = $tmp280.max;
panda$core$Bit $tmp283 = $tmp280.inclusive;
bool $tmp284 = $tmp283.value;
panda$core$Int64 $tmp285 = panda$core$Int64$init$builtin_int64(1);
panda$core$UInt64 $tmp286 = panda$core$Int64$convert$R$panda$core$UInt64($tmp285);
if ($tmp284) goto block4; else goto block5;
block4:;
panda$core$Bit $tmp287 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit($tmp281, $tmp282);
bool $tmp288 = $tmp287.value;
if ($tmp288) goto block1; else goto block2;
block5:;
panda$core$Bit $tmp289 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp281, $tmp282);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block1; else goto block2;
block1:;
// line 103
panda$collections$Array** $tmp291 = &param0->mt;
panda$collections$Array* $tmp292 = *$tmp291;
panda$core$Int64 $tmp293 = *(&local0);
panda$core$Object* $tmp294 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp292, $tmp293);
panda$core$UInt32 $tmp295 = panda$core$UInt32$init$builtin_uint32(2147483648);
panda$core$UInt32 $tmp296 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp294)->value, $tmp295);
panda$collections$Array** $tmp297 = &param0->mt;
panda$collections$Array* $tmp298 = *$tmp297;
panda$core$Int64 $tmp299 = *(&local0);
panda$core$Int64 $tmp300 = panda$core$Int64$init$builtin_int64(1);
int64_t $tmp301 = $tmp299.value;
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301 + $tmp302;
panda$core$Int64 $tmp304 = panda$core$Int64$init$builtin_int64($tmp303);
panda$core$Int64 $tmp305 = panda$core$Int64$init$builtin_int64(624);
panda$core$Int64 $tmp306 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp304, $tmp305);
panda$core$Object* $tmp307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp298, $tmp306);
panda$core$UInt32 $tmp308 = panda$core$UInt32$init$builtin_uint32(2147483647);
panda$core$UInt32 $tmp309 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp307)->value, $tmp308);
uint32_t $tmp310 = $tmp296.value;
uint32_t $tmp311 = $tmp309.value;
uint32_t $tmp312 = $tmp310 + $tmp311;
panda$core$UInt32 $tmp313 = panda$core$UInt32$init$builtin_uint32($tmp312);
*(&local1) = $tmp313;
panda$core$Panda$unref$panda$core$Object$Q($tmp294);
panda$core$Panda$unref$panda$core$Object$Q($tmp307);
// line 104
panda$collections$Array** $tmp314 = &param0->mt;
panda$collections$Array* $tmp315 = *$tmp314;
panda$collections$Array** $tmp316 = &param0->mt;
panda$collections$Array* $tmp317 = *$tmp316;
panda$core$Int64 $tmp318 = *(&local0);
panda$core$Int32 $tmp319 = panda$core$Int32$init$builtin_int32(397);
panda$core$Int64 $tmp320 = panda$core$Int64$init$panda$core$Int32($tmp319);
int64_t $tmp321 = $tmp318.value;
int64_t $tmp322 = $tmp320.value;
int64_t $tmp323 = $tmp321 + $tmp322;
panda$core$Int64 $tmp324 = panda$core$Int64$init$builtin_int64($tmp323);
panda$core$Int64 $tmp325 = panda$core$Int64$init$builtin_int64(624);
panda$core$Int64 $tmp326 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp324, $tmp325);
panda$core$Object* $tmp327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp317, $tmp326);
panda$core$UInt32 $tmp328 = *(&local1);
panda$core$UInt32 $tmp329 = panda$core$UInt32$init$builtin_uint32(1);
panda$core$UInt32 $tmp330 = panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32($tmp328, $tmp329);
panda$core$UInt32 $tmp331 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp327)->value, $tmp330);
panda$core$Int64 $tmp332 = *(&local0);
panda$core$UInt32$wrapper* $tmp333;
$tmp333 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
$tmp333->value = $tmp331;
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp315, $tmp332, ((panda$core$Object*) $tmp333));
panda$core$Panda$unref$panda$core$Object$Q($tmp327);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// line 105
panda$core$UInt32 $tmp334 = *(&local1);
panda$core$UInt32 $tmp335 = panda$core$UInt32$init$builtin_uint32(2);
panda$core$UInt32 $tmp336 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32($tmp334, $tmp335);
panda$core$UInt32 $tmp337 = panda$core$UInt32$init$builtin_uint32(0);
panda$core$Bit $tmp338 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp336, $tmp337);
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block6; else goto block7;
block6:;
// line 106
panda$collections$Array** $tmp340 = &param0->mt;
panda$collections$Array* $tmp341 = *$tmp340;
panda$core$Int64 $tmp342 = *(&local0);
panda$core$Object* $tmp343 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp341, $tmp342);
panda$core$UInt32 $tmp344 = panda$core$UInt32$init$builtin_uint32(2567483615);
panda$core$UInt32 $tmp345 = panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32$wrapper*) $tmp343)->value, $tmp344);
panda$core$UInt32$wrapper* $tmp346;
$tmp346 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
$tmp346->value = $tmp345;
panda$collections$Array$$IDXEQ$panda$core$Int64$panda$collections$Array$T($tmp341, $tmp342, ((panda$core$Object*) $tmp346));
panda$core$Panda$unref$panda$core$Object$Q($tmp343);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp346));
goto block7;
block7:;
goto block3;
block3:;
panda$core$Int64 $tmp347 = *(&local0);
int64_t $tmp348 = $tmp282.value;
int64_t $tmp349 = $tmp347.value;
int64_t $tmp350 = $tmp348 - $tmp349;
panda$core$Int64 $tmp351 = panda$core$Int64$init$builtin_int64($tmp350);
panda$core$UInt64 $tmp352 = panda$core$Int64$convert$R$panda$core$UInt64($tmp351);
if ($tmp284) goto block9; else goto block10;
block9:;
panda$core$Bit $tmp353 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit($tmp352, $tmp286);
bool $tmp354 = $tmp353.value;
if ($tmp354) goto block8; else goto block2;
block10:;
panda$core$Bit $tmp355 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit($tmp352, $tmp286);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block8; else goto block2;
block8:;
int64_t $tmp357 = $tmp347.value;
int64_t $tmp358 = $tmp285.value;
int64_t $tmp359 = $tmp357 + $tmp358;
panda$core$Int64 $tmp360 = panda$core$Int64$init$builtin_int64($tmp359);
*(&local0) = $tmp360;
goto block1;
block2:;
// line 109
panda$core$Int64 $tmp361 = panda$core$Int64$init$builtin_int64(0);
panda$core$Int64* $tmp362 = &param0->index;
*$tmp362 = $tmp361;
return;

}
panda$core$Int32 panda$math$MersenneTwister$int32$R$panda$core$Int32(panda$math$MersenneTwister* param0) {

// line 114
panda$core$UInt32 $tmp363 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(param0);
panda$core$Int32 $tmp364 = panda$core$UInt32$convert$R$panda$core$Int32($tmp363);
return $tmp364;

}
panda$core$Int64 panda$math$MersenneTwister$int64$R$panda$core$Int64(panda$math$MersenneTwister* param0) {

// line 119
panda$core$UInt32 $tmp365 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(param0);
panda$core$Int64 $tmp366 = panda$core$UInt32$convert$R$panda$core$Int64($tmp365);
panda$core$Int64 $tmp367 = panda$core$Int64$init$builtin_int64(32);
panda$core$Int64 $tmp368 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp366, $tmp367);
panda$core$UInt32 $tmp369 = panda$math$MersenneTwister$extract$R$panda$core$UInt32(param0);
panda$core$Int64 $tmp370 = panda$core$Int64$init$panda$core$UInt32($tmp369);
panda$core$Int64 $tmp371 = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64($tmp368, $tmp370);
return $tmp371;

}
void panda$math$MersenneTwister$cleanup(panda$math$MersenneTwister* param0) {

panda$collections$Array** $tmp372 = &param0->mt;
panda$collections$Array* $tmp373 = *$tmp372;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp373));
return;

}

