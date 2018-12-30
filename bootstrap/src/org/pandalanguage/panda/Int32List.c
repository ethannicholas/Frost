#include "org/pandalanguage/panda/Int32List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/Int32.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/SteppedRange.LTpanda/core/Int32.Cpanda/core/Int32.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32$shim(org$pandalanguage$panda$Int32List* p0, panda$core$Int64 p1) {
    panda$core$Int32 result = org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32(p0, p1);

    panda$core$Int32$wrapper* $tmp2;
    $tmp2 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$panda$Int32List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$panda$Int32List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$Int32List$_panda$collections$CollectionView, { org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$Int32List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &org$pandalanguage$panda$Int32List$_panda$collections$ListView, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
org$pandalanguage$panda$Int32List$class_type org$pandalanguage$panda$Int32List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$Int32List$_panda$collections$Iterable, { org$pandalanguage$panda$Int32List$convert$R$panda$core$String, org$pandalanguage$panda$Int32List$cleanup, org$pandalanguage$panda$Int32List$computeCount$R$panda$core$Int64, org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64, org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32$shim} };

typedef panda$core$Int64 (*$fn148)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn176)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74", 33, 8062736675856308551, NULL };
static panda$core$String $s136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, -5075525128250989545, NULL };
static panda$core$String $s137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, -747491741719717125, NULL };
static panda$core$String $s157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, -5075525128250989545, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 111, -1395845738728909704, NULL };
static panda$core$String $s179 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$Int32List$init$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT(org$pandalanguage$panda$Int32List* param0, panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT param1) {

// line 16
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
panda$core$Int64 $tmp4 = org$pandalanguage$panda$Int32List$computeCount$R$panda$core$Int64(param0);
panda$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
panda$core$Int64 org$pandalanguage$panda$Int32List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$Int32List* param0) {

panda$core$Int32 local0;
// line 22
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp6 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = $tmp7.inclusive;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// line 23
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp10 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp11 = *$tmp10;
panda$core$Int32 $tmp12 = $tmp11.step;
panda$core$Int32 $tmp13 = (panda$core$Int32) {0};
int32_t $tmp14 = $tmp12.value;
int32_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 > $tmp15;
panda$core$Bit $tmp17 = (panda$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block6;
block4:;
// line 24
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp19 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp20 = *$tmp19;
panda$core$Int32 $tmp21 = $tmp20.end;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp22 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp23 = *$tmp22;
panda$core$Int32 $tmp24 = $tmp23.start;
int32_t $tmp25 = $tmp21.value;
int32_t $tmp26 = $tmp24.value;
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
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp31 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp32 = *$tmp31;
panda$core$Int32 $tmp33 = $tmp32.end;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp34 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp35 = *$tmp34;
panda$core$Int32 $tmp36 = $tmp35.start;
int32_t $tmp37 = $tmp33.value;
int32_t $tmp38 = $tmp36.value;
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
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp43 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp44 = *$tmp43;
panda$core$Int32 $tmp45 = $tmp44.end;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp46 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp47 = *$tmp46;
panda$core$Int32 $tmp48 = $tmp47.start;
int32_t $tmp49 = $tmp45.value;
int32_t $tmp50 = $tmp48.value;
int32_t $tmp51 = $tmp49 - $tmp50;
panda$core$Int32 $tmp52 = (panda$core$Int32) {$tmp51};
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp53 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp54 = *$tmp53;
panda$core$Int32 $tmp55 = $tmp54.step;
int32_t $tmp56 = $tmp52.value;
int32_t $tmp57 = $tmp55.value;
int32_t $tmp58 = $tmp56 / $tmp57;
panda$core$Int32 $tmp59 = (panda$core$Int32) {$tmp58};
panda$core$Int32 $tmp60 = (panda$core$Int32) {0};
panda$core$Int32 $tmp61 = panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32($tmp59, $tmp60);
panda$core$Int64 $tmp62 = panda$core$Int64$init$panda$core$Int32($tmp61);
panda$core$Int64 $tmp63 = (panda$core$Int64) {1};
int64_t $tmp64 = $tmp62.value;
int64_t $tmp65 = $tmp63.value;
int64_t $tmp66 = $tmp64 + $tmp65;
panda$core$Int64 $tmp67 = (panda$core$Int64) {$tmp66};
return $tmp67;
block3:;
// line 1
// line 33
// line 34
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp68 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp69 = *$tmp68;
panda$core$Int32 $tmp70 = $tmp69.step;
panda$core$Int32 $tmp71 = (panda$core$Int32) {0};
int32_t $tmp72 = $tmp70.value;
int32_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 > $tmp73;
panda$core$Bit $tmp75 = (panda$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block11; else goto block13;
block11:;
// line 35
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp77 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp78 = *$tmp77;
panda$core$Int32 $tmp79 = $tmp78.end;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp80 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp81 = *$tmp80;
panda$core$Int32 $tmp82 = $tmp81.start;
int32_t $tmp83 = $tmp79.value;
int32_t $tmp84 = $tmp82.value;
bool $tmp85 = $tmp83 <= $tmp84;
panda$core$Bit $tmp86 = (panda$core$Bit) {$tmp85};
bool $tmp87 = $tmp86.value;
if ($tmp87) goto block14; else goto block15;
block14:;
// line 36
panda$core$Int64 $tmp88 = (panda$core$Int64) {0};
return $tmp88;
block15:;
// line 38
panda$core$Int32 $tmp89 = (panda$core$Int32) {18446744073709551615};
*(&local0) = $tmp89;
goto block12;
block13:;
// line 1
// line 40
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp90 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp91 = *$tmp90;
panda$core$Int32 $tmp92 = $tmp91.end;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp93 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp94 = *$tmp93;
panda$core$Int32 $tmp95 = $tmp94.start;
int32_t $tmp96 = $tmp92.value;
int32_t $tmp97 = $tmp95.value;
bool $tmp98 = $tmp96 >= $tmp97;
panda$core$Bit $tmp99 = (panda$core$Bit) {$tmp98};
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block16; else goto block17;
block16:;
// line 41
panda$core$Int64 $tmp101 = (panda$core$Int64) {0};
return $tmp101;
block17:;
// line 43
panda$core$Int32 $tmp102 = (panda$core$Int32) {1};
*(&local0) = $tmp102;
goto block12;
block12:;
// line 45
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp103 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp104 = *$tmp103;
panda$core$Int32 $tmp105 = $tmp104.end;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp106 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp107 = *$tmp106;
panda$core$Int32 $tmp108 = $tmp107.start;
int32_t $tmp109 = $tmp105.value;
int32_t $tmp110 = $tmp108.value;
int32_t $tmp111 = $tmp109 - $tmp110;
panda$core$Int32 $tmp112 = (panda$core$Int32) {$tmp111};
panda$core$Int32 $tmp113 = *(&local0);
int32_t $tmp114 = $tmp112.value;
int32_t $tmp115 = $tmp113.value;
int32_t $tmp116 = $tmp114 + $tmp115;
panda$core$Int32 $tmp117 = (panda$core$Int32) {$tmp116};
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp118 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp119 = *$tmp118;
panda$core$Int32 $tmp120 = $tmp119.step;
int32_t $tmp121 = $tmp117.value;
int32_t $tmp122 = $tmp120.value;
int32_t $tmp123 = $tmp121 / $tmp122;
panda$core$Int32 $tmp124 = (panda$core$Int32) {$tmp123};
panda$core$Int32 $tmp125 = (panda$core$Int32) {0};
panda$core$Int32 $tmp126 = panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32($tmp124, $tmp125);
panda$core$Int64 $tmp127 = panda$core$Int64$init$panda$core$Int32($tmp126);
panda$core$Int64 $tmp128 = (panda$core$Int64) {1};
int64_t $tmp129 = $tmp127.value;
int64_t $tmp130 = $tmp128.value;
int64_t $tmp131 = $tmp129 + $tmp130;
panda$core$Int64 $tmp132 = (panda$core$Int64) {$tmp131};
return $tmp132;
block2:;
panda$core$Bit $tmp133 = panda$core$Bit$init$builtin_bit(false);
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp135 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s136, $tmp135, &$s137);
abort(); // unreachable
block18:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int32List* param0) {

// line 51
panda$core$Int64* $tmp138 = &param0->_count;
panda$core$Int64 $tmp139 = *$tmp138;
return $tmp139;

}
panda$core$Int32 org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32(org$pandalanguage$panda$Int32List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp140 = (panda$core$Int64) {0};
int64_t $tmp141 = param1.value;
int64_t $tmp142 = $tmp140.value;
bool $tmp143 = $tmp141 >= $tmp142;
panda$core$Bit $tmp144 = (panda$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block1; else goto block2;
block1:;
ITable* $tmp146 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp146->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp146 = $tmp146->next;
}
$fn148 $tmp147 = $tmp146->methods[0];
panda$core$Int64 $tmp149 = $tmp147(((panda$collections$CollectionView*) param0));
int64_t $tmp150 = param1.value;
int64_t $tmp151 = $tmp149.value;
bool $tmp152 = $tmp150 < $tmp151;
panda$core$Bit $tmp153 = (panda$core$Bit) {$tmp152};
*(&local0) = $tmp153;
goto block3;
block2:;
*(&local0) = $tmp144;
goto block3;
block3:;
panda$core$Bit $tmp154 = *(&local0);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp156 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s157, $tmp156, &$s158);
abort(); // unreachable
block4:;
// line 56
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp159 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp160 = *$tmp159;
panda$core$Int32 $tmp161 = $tmp160.start;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp162 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp163 = *$tmp162;
panda$core$Int32 $tmp164 = $tmp163.step;
panda$core$Int32 $tmp165 = panda$core$Int64$convert$R$panda$core$Int32(param1);
int32_t $tmp166 = $tmp164.value;
int32_t $tmp167 = $tmp165.value;
int32_t $tmp168 = $tmp166 * $tmp167;
panda$core$Int32 $tmp169 = (panda$core$Int32) {$tmp168};
int32_t $tmp170 = $tmp161.value;
int32_t $tmp171 = $tmp169.value;
int32_t $tmp172 = $tmp170 + $tmp171;
panda$core$Int32 $tmp173 = (panda$core$Int32) {$tmp172};
return $tmp173;

}
panda$core$String* org$pandalanguage$panda$Int32List$convert$R$panda$core$String(org$pandalanguage$panda$Int32List* param0) {

// line 61
ITable* $tmp174 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp174->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp174 = $tmp174->next;
}
$fn176 $tmp175 = $tmp174->methods[1];
panda$core$String* $tmp177 = $tmp175(((panda$collections$CollectionView*) param0));
panda$core$String* $tmp178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s179, $tmp177);
panda$core$String* $tmp180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp178, &$s181);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp178));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp180));
return $tmp180;

}
void org$pandalanguage$panda$Int32List$cleanup(org$pandalanguage$panda$Int32List* param0) {

return;

}

