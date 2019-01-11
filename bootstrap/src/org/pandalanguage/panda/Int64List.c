#include "org/pandalanguage/panda/Int64List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64$shim(org$pandalanguage$panda$Int64List* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64(p0, p1);

    panda$core$Int64$wrapper* $tmp2;
    $tmp2 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$Int64List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$Int64List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$Int64List$_panda$collections$Iterable, { org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$Int64List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$Int64List$_panda$collections$ListView, { org$pandalanguage$panda$Int64List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

static panda$core$String $s1;
org$pandalanguage$panda$Int64List$class_type org$pandalanguage$panda$Int64List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$Int64List$_panda$collections$CollectionView, { org$pandalanguage$panda$Int64List$convert$R$panda$core$String, org$pandalanguage$panda$Int64List$cleanup, org$pandalanguage$panda$Int64List$computeCount$R$panda$core$Int64, org$pandalanguage$panda$Int64List$get_count$R$panda$core$Int64, org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64$shim} };

typedef panda$core$Int64 (*$fn146)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn173)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74", 33, 8062736707594730856, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 2144621319845314944, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, 7763029085313401504, NULL };
static panda$core$String $s155 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 2144621319845314944, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x36\x34\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 111, 4139392574784216090, NULL };
static panda$core$String $s176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$Int64List$init$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT(org$pandalanguage$panda$Int64List* param0, panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT param1) {

// line 16
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
panda$core$Int64 $tmp4 = org$pandalanguage$panda$Int64List$computeCount$R$panda$core$Int64(param0);
panda$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
panda$core$Int64 org$pandalanguage$panda$Int64List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$Int64List* param0) {

panda$core$Int64 local0;
// line 22
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp6 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = $tmp7.inclusive;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// line 23
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp10 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp11 = *$tmp10;
panda$core$Int64 $tmp12 = $tmp11.step;
panda$core$Int64 $tmp13 = (panda$core$Int64) {0};
int64_t $tmp14 = $tmp12.value;
int64_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 > $tmp15;
panda$core$Bit $tmp17 = (panda$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block6;
block4:;
// line 24
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp19 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp20 = *$tmp19;
panda$core$Int64 $tmp21 = $tmp20.end;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp22 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp23 = *$tmp22;
panda$core$Int64 $tmp24 = $tmp23.start;
int64_t $tmp25 = $tmp21.value;
int64_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 < $tmp26;
panda$core$Bit $tmp28 = (panda$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block7; else goto block8;
block7:;
// line 25
panda$core$Int64 $tmp30 = (panda$core$Int64) {0};
return $tmp30;
block8:;
goto block5;
block6:;
// line 27
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp31 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp32 = *$tmp31;
panda$core$Int64 $tmp33 = $tmp32.end;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp34 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp35 = *$tmp34;
panda$core$Int64 $tmp36 = $tmp35.start;
int64_t $tmp37 = $tmp33.value;
int64_t $tmp38 = $tmp36.value;
bool $tmp39 = $tmp37 > $tmp38;
panda$core$Bit $tmp40 = (panda$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block9; else goto block10;
block9:;
// line 28
panda$core$Int64 $tmp42 = (panda$core$Int64) {0};
return $tmp42;
block10:;
goto block5;
block5:;
// line 30
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp43 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp44 = *$tmp43;
panda$core$Int64 $tmp45 = $tmp44.end;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp46 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp47 = *$tmp46;
panda$core$Int64 $tmp48 = $tmp47.start;
int64_t $tmp49 = $tmp45.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 - $tmp50;
panda$core$Int64 $tmp52 = (panda$core$Int64) {$tmp51};
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp53 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp54 = *$tmp53;
panda$core$Int64 $tmp55 = $tmp54.step;
int64_t $tmp56 = $tmp52.value;
int64_t $tmp57 = $tmp55.value;
int64_t $tmp58 = $tmp56 / $tmp57;
panda$core$Int64 $tmp59 = (panda$core$Int64) {$tmp58};
panda$core$Int64 $tmp60 = (panda$core$Int64) {0};
panda$core$Int64 $tmp61 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp59, $tmp60);
panda$core$Int64 $tmp62 = (panda$core$Int64) {1};
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63 + $tmp64;
panda$core$Int64 $tmp66 = (panda$core$Int64) {$tmp65};
return $tmp66;
block3:;
// line 1
// line 33
// line 34
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp67 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp68 = *$tmp67;
panda$core$Int64 $tmp69 = $tmp68.step;
panda$core$Int64 $tmp70 = (panda$core$Int64) {0};
int64_t $tmp71 = $tmp69.value;
int64_t $tmp72 = $tmp70.value;
bool $tmp73 = $tmp71 > $tmp72;
panda$core$Bit $tmp74 = (panda$core$Bit) {$tmp73};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block11; else goto block13;
block11:;
// line 35
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp76 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp77 = *$tmp76;
panda$core$Int64 $tmp78 = $tmp77.end;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp79 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp80 = *$tmp79;
panda$core$Int64 $tmp81 = $tmp80.start;
int64_t $tmp82 = $tmp78.value;
int64_t $tmp83 = $tmp81.value;
bool $tmp84 = $tmp82 <= $tmp83;
panda$core$Bit $tmp85 = (panda$core$Bit) {$tmp84};
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block14; else goto block15;
block14:;
// line 36
panda$core$Int64 $tmp87 = (panda$core$Int64) {0};
return $tmp87;
block15:;
// line 38
panda$core$Int64 $tmp88 = (panda$core$Int64) {18446744073709551615};
*(&local0) = $tmp88;
goto block12;
block13:;
// line 1
// line 40
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp89 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp90 = *$tmp89;
panda$core$Int64 $tmp91 = $tmp90.end;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp92 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp93 = *$tmp92;
panda$core$Int64 $tmp94 = $tmp93.start;
int64_t $tmp95 = $tmp91.value;
int64_t $tmp96 = $tmp94.value;
bool $tmp97 = $tmp95 >= $tmp96;
panda$core$Bit $tmp98 = (panda$core$Bit) {$tmp97};
bool $tmp99 = $tmp98.value;
if ($tmp99) goto block16; else goto block17;
block16:;
// line 41
panda$core$Int64 $tmp100 = (panda$core$Int64) {0};
return $tmp100;
block17:;
// line 43
panda$core$Int64 $tmp101 = (panda$core$Int64) {1};
*(&local0) = $tmp101;
goto block12;
block12:;
// line 45
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp102 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp103 = *$tmp102;
panda$core$Int64 $tmp104 = $tmp103.end;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp105 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp106 = *$tmp105;
panda$core$Int64 $tmp107 = $tmp106.start;
int64_t $tmp108 = $tmp104.value;
int64_t $tmp109 = $tmp107.value;
int64_t $tmp110 = $tmp108 - $tmp109;
panda$core$Int64 $tmp111 = (panda$core$Int64) {$tmp110};
panda$core$Int64 $tmp112 = *(&local0);
int64_t $tmp113 = $tmp111.value;
int64_t $tmp114 = $tmp112.value;
int64_t $tmp115 = $tmp113 + $tmp114;
panda$core$Int64 $tmp116 = (panda$core$Int64) {$tmp115};
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp117 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp118 = *$tmp117;
panda$core$Int64 $tmp119 = $tmp118.step;
int64_t $tmp120 = $tmp116.value;
int64_t $tmp121 = $tmp119.value;
int64_t $tmp122 = $tmp120 / $tmp121;
panda$core$Int64 $tmp123 = (panda$core$Int64) {$tmp122};
panda$core$Int64 $tmp124 = (panda$core$Int64) {0};
panda$core$Int64 $tmp125 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp123, $tmp124);
panda$core$Int64 $tmp126 = (panda$core$Int64) {1};
int64_t $tmp127 = $tmp125.value;
int64_t $tmp128 = $tmp126.value;
int64_t $tmp129 = $tmp127 + $tmp128;
panda$core$Int64 $tmp130 = (panda$core$Int64) {$tmp129};
return $tmp130;
block2:;
panda$core$Bit $tmp131 = panda$core$Bit$init$builtin_bit(false);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp133 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s134, $tmp133, &$s135);
abort(); // unreachable
block18:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$panda$Int64List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int64List* param0) {

// line 51
panda$core$Int64* $tmp136 = &param0->_count;
panda$core$Int64 $tmp137 = *$tmp136;
return $tmp137;

}
panda$core$Int64 org$pandalanguage$panda$Int64List$$IDX$panda$core$Int64$R$panda$core$Int64(org$pandalanguage$panda$Int64List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp138 = (panda$core$Int64) {0};
int64_t $tmp139 = param1.value;
int64_t $tmp140 = $tmp138.value;
bool $tmp141 = $tmp139 >= $tmp140;
panda$core$Bit $tmp142 = (panda$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block1; else goto block2;
block1:;
ITable* $tmp144 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp144->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp144 = $tmp144->next;
}
$fn146 $tmp145 = $tmp144->methods[0];
panda$core$Int64 $tmp147 = $tmp145(((panda$collections$CollectionView*) param0));
int64_t $tmp148 = param1.value;
int64_t $tmp149 = $tmp147.value;
bool $tmp150 = $tmp148 < $tmp149;
panda$core$Bit $tmp151 = (panda$core$Bit) {$tmp150};
*(&local0) = $tmp151;
goto block3;
block2:;
*(&local0) = $tmp142;
goto block3;
block3:;
panda$core$Bit $tmp152 = *(&local0);
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp154 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s155, $tmp154, &$s156);
abort(); // unreachable
block4:;
// line 56
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp157 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp158 = *$tmp157;
panda$core$Int64 $tmp159 = $tmp158.start;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT* $tmp160 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp161 = *$tmp160;
panda$core$Int64 $tmp162 = $tmp161.step;
int64_t $tmp163 = $tmp162.value;
int64_t $tmp164 = param1.value;
int64_t $tmp165 = $tmp163 * $tmp164;
panda$core$Int64 $tmp166 = (panda$core$Int64) {$tmp165};
int64_t $tmp167 = $tmp159.value;
int64_t $tmp168 = $tmp166.value;
int64_t $tmp169 = $tmp167 + $tmp168;
panda$core$Int64 $tmp170 = (panda$core$Int64) {$tmp169};
return $tmp170;

}
panda$core$String* org$pandalanguage$panda$Int64List$convert$R$panda$core$String(org$pandalanguage$panda$Int64List* param0) {

// line 61
ITable* $tmp171 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp171->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp171 = $tmp171->next;
}
$fn173 $tmp172 = $tmp171->methods[1];
panda$core$String* $tmp174 = $tmp172(((panda$collections$CollectionView*) param0));
panda$core$String* $tmp175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s176, $tmp174);
panda$core$String* $tmp177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp175, &$s178);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp174));
// unreffing REF($3:panda.core.String)
return $tmp177;

}
void org$pandalanguage$panda$Int64List$cleanup(org$pandalanguage$panda$Int64List* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

