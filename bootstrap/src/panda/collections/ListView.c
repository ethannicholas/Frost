#include "panda/collections/ListView.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Q.Cpanda/core/Int64.GT.h"
#include "panda/core/MutableMethod.h"
#include "panda/collections/ListView/ListIterator.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$collections$ListView$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ListView$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$collections$ListView$_panda$collections$Iterable, { NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$collections$ListView$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &panda$collections$ListView$_panda$collections$ListView, { NULL, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

static panda$core$String $s1;
panda$collections$ListView$class_type panda$collections$ListView$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$ListView$_panda$collections$CollectionView, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, NULL, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

typedef panda$core$Object* (*$fn49)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn88)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn104)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn121)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn141)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn164)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Object* (*$fn192)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn214)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn226)(panda$collections$ListView*, panda$core$Int64);
typedef panda$collections$Iterator* (*$fn234)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn238)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn243)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn252)(panda$core$Object*);
typedef panda$core$Bit (*$fn254)(panda$core$Object*, panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77", 26, 1346634265727302291, NULL };
static panda$core$String $s180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4c\x69\x73\x74\x56\x69\x65\x77\x2e\x70\x61\x6e\x64\x61", 14, -973627211574904282, NULL };

panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$Range$LTpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Object** local2;
panda$core$Int64 local3;
// line 51
panda$core$Int64 $tmp2 = param1.max;
*(&local0) = $tmp2;
// line 52
panda$core$Bit $tmp3 = param1.inclusive;
bool $tmp4 = $tmp3.value;
if ($tmp4) goto block1; else goto block2;
block1:;
// line 53
panda$core$Int64 $tmp5 = *(&local0);
panda$core$Int64 $tmp6 = (panda$core$Int64) {1};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
int64_t $tmp9 = $tmp7 + $tmp8;
panda$core$Int64 $tmp10 = (panda$core$Int64) {$tmp9};
*(&local0) = $tmp10;
goto block2;
block2:;
// line 55
panda$core$Int64 $tmp11 = *(&local0);
panda$core$Int64 $tmp12 = param1.min;
int64_t $tmp13 = $tmp11.value;
int64_t $tmp14 = $tmp12.value;
int64_t $tmp15 = $tmp13 - $tmp14;
panda$core$Int64 $tmp16 = (panda$core$Int64) {$tmp15};
*(&local1) = $tmp16;
// line 56
panda$core$Int64 $tmp17 = *(&local1);
int64_t $tmp18 = $tmp17.value;
panda$core$Object** $tmp19 = ((panda$core$Object**) pandaZAlloc($tmp18 * 8));
*(&local2) = $tmp19;
// line 57
panda$core$Int64 $tmp20 = (panda$core$Int64) {0};
panda$core$Int64 $tmp21 = *(&local1);
panda$core$Bit $tmp22 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp23 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp20, $tmp21, $tmp22);
panda$core$Int64 $tmp24 = $tmp23.min;
*(&local3) = $tmp24;
panda$core$Int64 $tmp25 = $tmp23.max;
panda$core$Bit $tmp26 = $tmp23.inclusive;
bool $tmp27 = $tmp26.value;
panda$core$Int64 $tmp28 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp29 = panda$core$Int64$convert$R$panda$core$UInt64($tmp28);
if ($tmp27) goto block6; else goto block7;
block6:;
int64_t $tmp30 = $tmp24.value;
int64_t $tmp31 = $tmp25.value;
bool $tmp32 = $tmp30 <= $tmp31;
panda$core$Bit $tmp33 = (panda$core$Bit) {$tmp32};
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block3; else goto block4;
block7:;
int64_t $tmp35 = $tmp24.value;
int64_t $tmp36 = $tmp25.value;
bool $tmp37 = $tmp35 < $tmp36;
panda$core$Bit $tmp38 = (panda$core$Bit) {$tmp37};
bool $tmp39 = $tmp38.value;
if ($tmp39) goto block3; else goto block4;
block3:;
// line 58
panda$core$Object** $tmp40 = *(&local2);
panda$core$Int64 $tmp41 = param1.min;
panda$core$Int64 $tmp42 = *(&local3);
int64_t $tmp43 = $tmp41.value;
int64_t $tmp44 = $tmp42.value;
int64_t $tmp45 = $tmp43 + $tmp44;
panda$core$Int64 $tmp46 = (panda$core$Int64) {$tmp45};
ITable* $tmp47 = param0->$class->itable;
while ($tmp47->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp47 = $tmp47->next;
}
$fn49 $tmp48 = $tmp47->methods[0];
panda$core$Object* $tmp50 = $tmp48(param0, $tmp46);
panda$core$Int64 $tmp51 = *(&local3);
int64_t $tmp52 = $tmp51.value;
panda$core$Object* $tmp53 = $tmp40[$tmp52];
panda$core$Panda$unref$panda$core$Object$Q($tmp53);
panda$core$Panda$ref$panda$core$Object$Q($tmp50);
$tmp40[$tmp52] = $tmp50;
panda$core$Panda$unref$panda$core$Object$Q($tmp50);
goto block5;
block5:;
panda$core$Int64 $tmp54 = *(&local3);
int64_t $tmp55 = $tmp25.value;
int64_t $tmp56 = $tmp54.value;
int64_t $tmp57 = $tmp55 - $tmp56;
panda$core$Int64 $tmp58 = (panda$core$Int64) {$tmp57};
panda$core$UInt64 $tmp59 = panda$core$Int64$convert$R$panda$core$UInt64($tmp58);
if ($tmp27) goto block9; else goto block10;
block9:;
uint64_t $tmp60 = $tmp59.value;
uint64_t $tmp61 = $tmp29.value;
bool $tmp62 = $tmp60 >= $tmp61;
panda$core$Bit $tmp63 = (panda$core$Bit) {$tmp62};
bool $tmp64 = $tmp63.value;
if ($tmp64) goto block8; else goto block4;
block10:;
uint64_t $tmp65 = $tmp59.value;
uint64_t $tmp66 = $tmp29.value;
bool $tmp67 = $tmp65 > $tmp66;
panda$core$Bit $tmp68 = (panda$core$Bit) {$tmp67};
bool $tmp69 = $tmp68.value;
if ($tmp69) goto block8; else goto block4;
block8:;
int64_t $tmp70 = $tmp54.value;
int64_t $tmp71 = $tmp28.value;
int64_t $tmp72 = $tmp70 + $tmp71;
panda$core$Int64 $tmp73 = (panda$core$Int64) {$tmp72};
*(&local3) = $tmp73;
goto block3;
block4:;
// line 60
panda$collections$Array* $tmp74 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$core$Object** $tmp75 = *(&local2);
panda$core$Int64 $tmp76 = *(&local1);
panda$collections$Array$init$panda$unsafe$Pointer$LTpanda$collections$Array$T$GT$panda$core$Int64($tmp74, $tmp75, $tmp76);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp74)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp74));
return ((panda$collections$ListView*) $tmp74);

}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$Range$LTpanda$core$Int64$Q$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
// line 74
// line 75
panda$core$Int64$nullable $tmp77 = param1.min;
panda$core$Bit $tmp78 = panda$core$Bit$init$builtin_bit($tmp77.nonnull);
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block1; else goto block3;
block1:;
// line 76
panda$core$Int64$nullable $tmp80 = param1.min;
*(&local0) = ((panda$core$Int64) $tmp80.value);
goto block2;
block3:;
// line 1
// line 79
panda$core$Int64 $tmp81 = (panda$core$Int64) {0};
*(&local0) = $tmp81;
goto block2;
block2:;
// line 82
// line 83
panda$core$Int64$nullable $tmp82 = param1.max;
panda$core$Bit $tmp83 = panda$core$Bit$init$builtin_bit($tmp82.nonnull);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block4; else goto block6;
block4:;
// line 84
panda$core$Int64$nullable $tmp85 = param1.max;
*(&local1) = ((panda$core$Int64) $tmp85.value);
goto block5;
block6:;
// line 1
// line 87
ITable* $tmp86 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp86->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp86 = $tmp86->next;
}
$fn88 $tmp87 = $tmp86->methods[0];
panda$core$Int64 $tmp89 = $tmp87(((panda$collections$CollectionView*) param0));
*(&local1) = $tmp89;
// line 88
panda$core$Bit $tmp90 = param1.inclusive;
bool $tmp91 = $tmp90.value;
if ($tmp91) goto block7; else goto block8;
block7:;
// line 89
panda$core$Int64 $tmp92 = *(&local1);
panda$core$Int64 $tmp93 = (panda$core$Int64) {1};
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93.value;
int64_t $tmp96 = $tmp94 - $tmp95;
panda$core$Int64 $tmp97 = (panda$core$Int64) {$tmp96};
*(&local1) = $tmp97;
goto block8;
block8:;
goto block5;
block5:;
// line 92
panda$core$Int64 $tmp98 = *(&local0);
panda$core$Int64 $tmp99 = *(&local1);
panda$core$Bit $tmp100 = param1.inclusive;
panda$core$Range$LTpanda$core$Int64$GT $tmp101 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp98, $tmp99, $tmp100);
ITable* $tmp102 = param0->$class->itable;
while ($tmp102->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[1];
panda$collections$ListView* $tmp105 = $tmp103(param0, $tmp101);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
return $tmp105;

}
panda$collections$ListView* panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT param1) {

panda$core$Int64 local0;
panda$core$Int64 local1;
panda$core$Int64 local2;
panda$collections$Array* local3 = NULL;
panda$core$Bit local4;
panda$core$Bit local5;
panda$core$Bit local6;
// line 103
panda$core$Int64 $tmp106 = param1.step;
*(&local0) = $tmp106;
// line 105
// line 106
panda$core$Int64$nullable $tmp107 = param1.start;
panda$core$Bit $tmp108 = panda$core$Bit$init$builtin_bit($tmp107.nonnull);
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block1; else goto block3;
block1:;
// line 107
panda$core$Int64$nullable $tmp110 = param1.start;
*(&local1) = ((panda$core$Int64) $tmp110.value);
goto block2;
block3:;
// line 109
panda$core$Int64 $tmp111 = *(&local0);
panda$core$Int64 $tmp112 = (panda$core$Int64) {0};
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
bool $tmp115 = $tmp113 > $tmp114;
panda$core$Bit $tmp116 = (panda$core$Bit) {$tmp115};
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block4; else goto block6;
block4:;
// line 110
panda$core$Int64 $tmp118 = (panda$core$Int64) {0};
*(&local1) = $tmp118;
goto block5;
block6:;
// line 1
// line 113
ITable* $tmp119 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp119->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[0];
panda$core$Int64 $tmp122 = $tmp120(((panda$collections$CollectionView*) param0));
panda$core$Int64 $tmp123 = (panda$core$Int64) {1};
int64_t $tmp124 = $tmp122.value;
int64_t $tmp125 = $tmp123.value;
int64_t $tmp126 = $tmp124 - $tmp125;
panda$core$Int64 $tmp127 = (panda$core$Int64) {$tmp126};
*(&local1) = $tmp127;
goto block5;
block5:;
goto block2;
block2:;
// line 116
// line 117
panda$core$Int64$nullable $tmp128 = param1.end;
panda$core$Bit $tmp129 = panda$core$Bit$init$builtin_bit($tmp128.nonnull);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block7; else goto block9;
block7:;
// line 118
panda$core$Int64$nullable $tmp131 = param1.end;
*(&local2) = ((panda$core$Int64) $tmp131.value);
goto block8;
block9:;
// line 120
panda$core$Int64 $tmp132 = *(&local0);
panda$core$Int64 $tmp133 = (panda$core$Int64) {0};
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133.value;
bool $tmp136 = $tmp134 > $tmp135;
panda$core$Bit $tmp137 = (panda$core$Bit) {$tmp136};
bool $tmp138 = $tmp137.value;
if ($tmp138) goto block10; else goto block12;
block10:;
// line 121
ITable* $tmp139 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp139->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp139 = $tmp139->next;
}
$fn141 $tmp140 = $tmp139->methods[0];
panda$core$Int64 $tmp142 = $tmp140(((panda$collections$CollectionView*) param0));
*(&local2) = $tmp142;
goto block11;
block12:;
// line 1
// line 124
panda$core$Int64 $tmp143 = (panda$core$Int64) {0};
*(&local2) = $tmp143;
goto block11;
block11:;
goto block8;
block8:;
// line 127
panda$collections$Array* $tmp144 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp144);
*(&local3) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp145 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
*(&local3) = $tmp144;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// line 128
panda$core$Int64 $tmp146 = param1.step;
panda$core$Int64 $tmp147 = (panda$core$Int64) {0};
int64_t $tmp148 = $tmp146.value;
int64_t $tmp149 = $tmp147.value;
bool $tmp150 = $tmp148 > $tmp149;
panda$core$Bit $tmp151 = (panda$core$Bit) {$tmp150};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block13; else goto block15;
block13:;
// line 129
goto block16;
block16:;
panda$core$Int64 $tmp153 = *(&local1);
panda$core$Int64 $tmp154 = *(&local2);
int64_t $tmp155 = $tmp153.value;
int64_t $tmp156 = $tmp154.value;
bool $tmp157 = $tmp155 < $tmp156;
panda$core$Bit $tmp158 = (panda$core$Bit) {$tmp157};
bool $tmp159 = $tmp158.value;
if ($tmp159) goto block17; else goto block18;
block17:;
// line 130
panda$collections$Array* $tmp160 = *(&local3);
panda$core$Int64 $tmp161 = *(&local1);
ITable* $tmp162 = param0->$class->itable;
while ($tmp162->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp162 = $tmp162->next;
}
$fn164 $tmp163 = $tmp162->methods[0];
panda$core$Object* $tmp165 = $tmp163(param0, $tmp161);
panda$collections$Array$add$panda$collections$Array$T($tmp160, $tmp165);
panda$core$Panda$unref$panda$core$Object$Q($tmp165);
// line 131
panda$core$Int64 $tmp166 = *(&local1);
panda$core$Int64 $tmp167 = *(&local0);
int64_t $tmp168 = $tmp166.value;
int64_t $tmp169 = $tmp167.value;
int64_t $tmp170 = $tmp168 + $tmp169;
panda$core$Int64 $tmp171 = (panda$core$Int64) {$tmp170};
*(&local1) = $tmp171;
goto block16;
block18:;
goto block14;
block15:;
// line 1
// line 135
panda$core$Int64 $tmp172 = param1.step;
panda$core$Int64 $tmp173 = (panda$core$Int64) {0};
int64_t $tmp174 = $tmp172.value;
int64_t $tmp175 = $tmp173.value;
bool $tmp176 = $tmp174 < $tmp175;
panda$core$Bit $tmp177 = (panda$core$Bit) {$tmp176};
bool $tmp178 = $tmp177.value;
if ($tmp178) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp179 = (panda$core$Int64) {135};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s180, $tmp179);
abort(); // unreachable
block19:;
// line 136
goto block21;
block21:;
panda$core$Int64 $tmp181 = *(&local1);
panda$core$Int64 $tmp182 = *(&local2);
int64_t $tmp183 = $tmp181.value;
int64_t $tmp184 = $tmp182.value;
bool $tmp185 = $tmp183 > $tmp184;
panda$core$Bit $tmp186 = (panda$core$Bit) {$tmp185};
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block22; else goto block23;
block22:;
// line 137
panda$collections$Array* $tmp188 = *(&local3);
panda$core$Int64 $tmp189 = *(&local1);
ITable* $tmp190 = param0->$class->itable;
while ($tmp190->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp190 = $tmp190->next;
}
$fn192 $tmp191 = $tmp190->methods[0];
panda$core$Object* $tmp193 = $tmp191(param0, $tmp189);
panda$collections$Array$add$panda$collections$Array$T($tmp188, $tmp193);
panda$core$Panda$unref$panda$core$Object$Q($tmp193);
// line 138
panda$core$Int64 $tmp194 = *(&local1);
panda$core$Int64 $tmp195 = *(&local0);
int64_t $tmp196 = $tmp194.value;
int64_t $tmp197 = $tmp195.value;
int64_t $tmp198 = $tmp196 + $tmp197;
panda$core$Int64 $tmp199 = (panda$core$Int64) {$tmp198};
*(&local1) = $tmp199;
goto block21;
block23:;
goto block14;
block14:;
// line 141
panda$core$Bit $tmp200 = param1.inclusive;
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block24; else goto block25;
block24:;
*(&local6) = $tmp200;
goto block26;
block25:;
panda$core$Int64$nullable $tmp202 = param1.end;
panda$core$Bit $tmp203 = panda$core$Bit$init$builtin_bit(!$tmp202.nonnull);
*(&local6) = $tmp203;
goto block26;
block26:;
panda$core$Bit $tmp204 = *(&local6);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block27; else goto block28;
block27:;
panda$core$Int64 $tmp206 = *(&local1);
panda$core$Int64 $tmp207 = *(&local2);
panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp206, $tmp207);
*(&local5) = $tmp208;
goto block29;
block28:;
*(&local5) = $tmp204;
goto block29;
block29:;
panda$core$Bit $tmp209 = *(&local5);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block30; else goto block31;
block30:;
panda$core$Int64 $tmp211 = *(&local2);
ITable* $tmp212 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp212->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp212 = $tmp212->next;
}
$fn214 $tmp213 = $tmp212->methods[0];
panda$core$Int64 $tmp215 = $tmp213(((panda$collections$CollectionView*) param0));
int64_t $tmp216 = $tmp211.value;
int64_t $tmp217 = $tmp215.value;
bool $tmp218 = $tmp216 < $tmp217;
panda$core$Bit $tmp219 = (panda$core$Bit) {$tmp218};
*(&local4) = $tmp219;
goto block32;
block31:;
*(&local4) = $tmp209;
goto block32;
block32:;
panda$core$Bit $tmp220 = *(&local4);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block33; else goto block34;
block33:;
// line 142
panda$collections$Array* $tmp222 = *(&local3);
panda$core$Int64 $tmp223 = *(&local1);
ITable* $tmp224 = param0->$class->itable;
while ($tmp224->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp224 = $tmp224->next;
}
$fn226 $tmp225 = $tmp224->methods[0];
panda$core$Object* $tmp227 = $tmp225(param0, $tmp223);
panda$collections$Array$add$panda$collections$Array$T($tmp222, $tmp227);
panda$core$Panda$unref$panda$core$Object$Q($tmp227);
goto block34;
block34:;
// line 144
panda$collections$Array* $tmp228 = *(&local3);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp228)));
panda$collections$Array* $tmp229 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// unreffing result
*(&local3) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp228);

}
panda$collections$ListView* panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0, panda$core$MutableMethod* param1) {

panda$collections$Array* local0 = NULL;
panda$core$Object* local1 = NULL;
panda$core$Bit local2;
// line 153
panda$collections$Array* $tmp230 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp230);
*(&local0) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp231 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp231));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
*(&local0) = $tmp230;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
// line 154
ITable* $tmp232 = ((panda$collections$Iterable*) param0)->$class->itable;
while ($tmp232->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp232 = $tmp232->next;
}
$fn234 $tmp233 = $tmp232->methods[0];
panda$collections$Iterator* $tmp235 = $tmp233(((panda$collections$Iterable*) param0));
goto block1;
block1:;
ITable* $tmp236 = $tmp235->$class->itable;
while ($tmp236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp236 = $tmp236->next;
}
$fn238 $tmp237 = $tmp236->methods[0];
panda$core$Bit $tmp239 = $tmp237($tmp235);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block3; else goto block2;
block2:;
*(&local1) = ((panda$core$Object*) NULL);
ITable* $tmp241 = $tmp235->$class->itable;
while ($tmp241->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp241 = $tmp241->next;
}
$fn243 $tmp242 = $tmp241->methods[1];
panda$core$Object* $tmp244 = $tmp242($tmp235);
panda$core$Object* $tmp245 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp245);
panda$core$Panda$ref$panda$core$Object$Q($tmp244);
*(&local1) = $tmp244;
// line 155
panda$core$Object* $tmp246 = *(&local1);
panda$core$Int8** $tmp247 = &param1->pointer;
panda$core$Int8* $tmp248 = *$tmp247;
panda$core$Object** $tmp249 = &param1->target;
panda$core$Object* $tmp250 = *$tmp249;
bool $tmp251 = $tmp250 != ((panda$core$Object*) NULL);
if ($tmp251) goto block4; else goto block5;
block5:;
panda$core$Bit $tmp253 = (($fn252) $tmp248)($tmp246);
*(&local2) = $tmp253;
goto block6;
block4:;
panda$core$Bit $tmp255 = (($fn254) $tmp248)($tmp250, $tmp246);
*(&local2) = $tmp255;
goto block6;
block6:;
panda$core$Bit $tmp256 = *(&local2);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block7; else goto block8;
block7:;
// line 156
panda$collections$Array* $tmp258 = *(&local0);
panda$core$Object* $tmp259 = *(&local1);
panda$collections$Array$add$panda$collections$Array$T($tmp258, $tmp259);
goto block8;
block8:;
panda$core$Panda$unref$panda$core$Object$Q($tmp244);
panda$core$Object* $tmp260 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q($tmp260);
// unreffing v
*(&local1) = ((panda$core$Object*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// line 159
panda$collections$Array* $tmp261 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp261)));
panda$collections$Array* $tmp262 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
// unreffing result
*(&local0) = ((panda$collections$Array*) NULL);
return ((panda$collections$ListView*) $tmp261);

}
panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(panda$collections$ListView* param0) {

// line 165
panda$collections$ListView$ListIterator* $tmp263 = (panda$collections$ListView$ListIterator*) pandaObjectAlloc(32, (panda$core$Class*) &panda$collections$ListView$ListIterator$class);
panda$collections$ListView$ListIterator$init$panda$collections$ListView$LTpanda$collections$ListView$ListIterator$T$GT($tmp263, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp263)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp263));
return ((panda$collections$Iterator*) $tmp263);

}

