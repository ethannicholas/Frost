#include "org/pandalanguage/panda/Int16List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/Int16.h"
#include "panda/core/SteppedRange.LTpanda/core/Int16.Cpanda/core/Int16.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Int32.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16$shim(org$pandalanguage$panda$Int16List* p0, panda$core$Int64 p1) {
    panda$core$Int16 result = org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16(p0, p1);

    panda$core$Int16$wrapper* $tmp2;
    $tmp2 = (panda$core$Int16$wrapper*) pandaObjectAlloc(14, (panda$core$Class*) &panda$core$Int16$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$Int16List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$panda$Int16List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$Int16List$_panda$collections$Iterable, { org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$panda$Int16List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$Int16List$_panda$collections$CollectionView, { org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
org$pandalanguage$panda$Int16List$class_type org$pandalanguage$panda$Int16List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$Int16List$_panda$collections$ListView, { org$pandalanguage$panda$Int16List$convert$R$panda$core$String, org$pandalanguage$panda$Int16List$cleanup, org$pandalanguage$panda$Int16List$computeCount$R$panda$core$Int64, org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64, org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16$shim} };

typedef panda$core$Int64 (*$fn155)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn187)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74", 33, 8062736655252349153, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 1244863149427928833, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, -9175448591852884227, NULL };
static panda$core$String $s164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 1244863149427928833, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 111, -3053817462390854804, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$Int16List$init$panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT(org$pandalanguage$panda$Int16List* param0, panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT param1) {

// line 16
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
panda$core$Int64 $tmp4 = org$pandalanguage$panda$Int16List$computeCount$R$panda$core$Int64(param0);
panda$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
panda$core$Int64 org$pandalanguage$panda$Int16List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$Int16List* param0) {

panda$core$Int16 local0;
// line 22
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp6 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = $tmp7.inclusive;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// line 23
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp10 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp11 = *$tmp10;
panda$core$Int16 $tmp12 = $tmp11.step;
panda$core$Int16 $tmp13 = (panda$core$Int16) {0};
int16_t $tmp14 = $tmp12.value;
int16_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 > $tmp15;
panda$core$Bit $tmp17 = (panda$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block6;
block4:;
// line 24
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp19 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp20 = *$tmp19;
panda$core$Int16 $tmp21 = $tmp20.end;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp22 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp23 = *$tmp22;
panda$core$Int16 $tmp24 = $tmp23.start;
int16_t $tmp25 = $tmp21.value;
int16_t $tmp26 = $tmp24.value;
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
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp31 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp32 = *$tmp31;
panda$core$Int16 $tmp33 = $tmp32.end;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp34 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp35 = *$tmp34;
panda$core$Int16 $tmp36 = $tmp35.start;
int16_t $tmp37 = $tmp33.value;
int16_t $tmp38 = $tmp36.value;
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
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp43 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp44 = *$tmp43;
panda$core$Int16 $tmp45 = $tmp44.end;
panda$core$Int32 $tmp46 = panda$core$Int32$init$panda$core$Int16($tmp45);
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp47 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp48 = *$tmp47;
panda$core$Int16 $tmp49 = $tmp48.start;
panda$core$Int32 $tmp50 = panda$core$Int32$init$panda$core$Int16($tmp49);
int32_t $tmp51 = $tmp46.value;
int32_t $tmp52 = $tmp50.value;
int32_t $tmp53 = $tmp51 - $tmp52;
panda$core$Int32 $tmp54 = (panda$core$Int32) {$tmp53};
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp55 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp56 = *$tmp55;
panda$core$Int16 $tmp57 = $tmp56.step;
panda$core$Int32 $tmp58 = panda$core$Int32$init$panda$core$Int16($tmp57);
int32_t $tmp59 = $tmp54.value;
int32_t $tmp60 = $tmp58.value;
int32_t $tmp61 = $tmp59 / $tmp60;
panda$core$Int32 $tmp62 = (panda$core$Int32) {$tmp61};
panda$core$Int32 $tmp63 = (panda$core$Int32) {0};
panda$core$Int32 $tmp64 = panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32($tmp62, $tmp63);
panda$core$Int64 $tmp65 = panda$core$Int64$init$panda$core$Int32($tmp64);
panda$core$Int64 $tmp66 = (panda$core$Int64) {1};
int64_t $tmp67 = $tmp65.value;
int64_t $tmp68 = $tmp66.value;
int64_t $tmp69 = $tmp67 + $tmp68;
panda$core$Int64 $tmp70 = (panda$core$Int64) {$tmp69};
return $tmp70;
block3:;
// line 1
// line 33
// line 34
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp71 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp72 = *$tmp71;
panda$core$Int16 $tmp73 = $tmp72.step;
panda$core$Int16 $tmp74 = (panda$core$Int16) {0};
int16_t $tmp75 = $tmp73.value;
int16_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 > $tmp76;
panda$core$Bit $tmp78 = (panda$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block11; else goto block13;
block11:;
// line 35
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp80 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp81 = *$tmp80;
panda$core$Int16 $tmp82 = $tmp81.end;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp83 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp84 = *$tmp83;
panda$core$Int16 $tmp85 = $tmp84.start;
int16_t $tmp86 = $tmp82.value;
int16_t $tmp87 = $tmp85.value;
bool $tmp88 = $tmp86 <= $tmp87;
panda$core$Bit $tmp89 = (panda$core$Bit) {$tmp88};
bool $tmp90 = $tmp89.value;
if ($tmp90) goto block14; else goto block15;
block14:;
// line 36
panda$core$Int64 $tmp91 = (panda$core$Int64) {0};
return $tmp91;
block15:;
// line 38
panda$core$Int16 $tmp92 = (panda$core$Int16) {18446744073709551615};
*(&local0) = $tmp92;
goto block12;
block13:;
// line 1
// line 40
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp93 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp94 = *$tmp93;
panda$core$Int16 $tmp95 = $tmp94.end;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp96 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp97 = *$tmp96;
panda$core$Int16 $tmp98 = $tmp97.start;
int16_t $tmp99 = $tmp95.value;
int16_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 >= $tmp100;
panda$core$Bit $tmp102 = (panda$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block16; else goto block17;
block16:;
// line 41
panda$core$Int64 $tmp104 = (panda$core$Int64) {0};
return $tmp104;
block17:;
// line 43
panda$core$Int16 $tmp105 = (panda$core$Int16) {1};
*(&local0) = $tmp105;
goto block12;
block12:;
// line 45
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp106 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp107 = *$tmp106;
panda$core$Int16 $tmp108 = $tmp107.end;
panda$core$Int32 $tmp109 = panda$core$Int32$init$panda$core$Int16($tmp108);
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp110 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp111 = *$tmp110;
panda$core$Int16 $tmp112 = $tmp111.start;
panda$core$Int32 $tmp113 = panda$core$Int32$init$panda$core$Int16($tmp112);
int32_t $tmp114 = $tmp109.value;
int32_t $tmp115 = $tmp113.value;
int32_t $tmp116 = $tmp114 - $tmp115;
panda$core$Int32 $tmp117 = (panda$core$Int32) {$tmp116};
panda$core$Int16 $tmp118 = *(&local0);
panda$core$Int32 $tmp119 = panda$core$Int32$init$panda$core$Int16($tmp118);
int32_t $tmp120 = $tmp117.value;
int32_t $tmp121 = $tmp119.value;
int32_t $tmp122 = $tmp120 + $tmp121;
panda$core$Int32 $tmp123 = (panda$core$Int32) {$tmp122};
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp124 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp125 = *$tmp124;
panda$core$Int16 $tmp126 = $tmp125.step;
panda$core$Int32 $tmp127 = panda$core$Int32$init$panda$core$Int16($tmp126);
int32_t $tmp128 = $tmp123.value;
int32_t $tmp129 = $tmp127.value;
int32_t $tmp130 = $tmp128 / $tmp129;
panda$core$Int32 $tmp131 = (panda$core$Int32) {$tmp130};
panda$core$Int32 $tmp132 = (panda$core$Int32) {0};
panda$core$Int32 $tmp133 = panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32($tmp131, $tmp132);
panda$core$Int64 $tmp134 = panda$core$Int64$init$panda$core$Int32($tmp133);
panda$core$Int64 $tmp135 = (panda$core$Int64) {1};
int64_t $tmp136 = $tmp134.value;
int64_t $tmp137 = $tmp135.value;
int64_t $tmp138 = $tmp136 + $tmp137;
panda$core$Int64 $tmp139 = (panda$core$Int64) {$tmp138};
return $tmp139;
block2:;
panda$core$Bit $tmp140 = panda$core$Bit$init$builtin_bit(false);
bool $tmp141 = $tmp140.value;
if ($tmp141) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp142 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s143, $tmp142, &$s144);
abort(); // unreachable
block18:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int16List* param0) {

// line 51
panda$core$Int64* $tmp145 = &param0->_count;
panda$core$Int64 $tmp146 = *$tmp145;
return $tmp146;

}
panda$core$Int16 org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16(org$pandalanguage$panda$Int16List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp147 = (panda$core$Int64) {0};
int64_t $tmp148 = param1.value;
int64_t $tmp149 = $tmp147.value;
bool $tmp150 = $tmp148 >= $tmp149;
panda$core$Bit $tmp151 = (panda$core$Bit) {$tmp150};
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block1; else goto block2;
block1:;
ITable* $tmp153 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp153->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp153 = $tmp153->next;
}
$fn155 $tmp154 = $tmp153->methods[0];
panda$core$Int64 $tmp156 = $tmp154(((panda$collections$CollectionView*) param0));
int64_t $tmp157 = param1.value;
int64_t $tmp158 = $tmp156.value;
bool $tmp159 = $tmp157 < $tmp158;
panda$core$Bit $tmp160 = (panda$core$Bit) {$tmp159};
*(&local0) = $tmp160;
goto block3;
block2:;
*(&local0) = $tmp151;
goto block3;
block3:;
panda$core$Bit $tmp161 = *(&local0);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp163 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s164, $tmp163, &$s165);
abort(); // unreachable
block4:;
// line 56
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp166 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp167 = *$tmp166;
panda$core$Int16 $tmp168 = $tmp167.start;
panda$core$Int32 $tmp169 = panda$core$Int32$init$panda$core$Int16($tmp168);
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp170 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp171 = *$tmp170;
panda$core$Int16 $tmp172 = $tmp171.step;
panda$core$Int32 $tmp173 = panda$core$Int32$init$panda$core$Int16($tmp172);
panda$core$Int16 $tmp174 = panda$core$Int64$convert$R$panda$core$Int16(param1);
panda$core$Int32 $tmp175 = panda$core$Int32$init$panda$core$Int16($tmp174);
int32_t $tmp176 = $tmp173.value;
int32_t $tmp177 = $tmp175.value;
int32_t $tmp178 = $tmp176 * $tmp177;
panda$core$Int32 $tmp179 = (panda$core$Int32) {$tmp178};
int32_t $tmp180 = $tmp169.value;
int32_t $tmp181 = $tmp179.value;
int32_t $tmp182 = $tmp180 + $tmp181;
panda$core$Int32 $tmp183 = (panda$core$Int32) {$tmp182};
panda$core$Int16 $tmp184 = panda$core$Int32$convert$R$panda$core$Int16($tmp183);
return $tmp184;

}
panda$core$String* org$pandalanguage$panda$Int16List$convert$R$panda$core$String(org$pandalanguage$panda$Int16List* param0) {

// line 61
ITable* $tmp185 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp185->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[1];
panda$core$String* $tmp188 = $tmp186(((panda$collections$CollectionView*) param0));
panda$core$String* $tmp189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s190, $tmp188);
panda$core$String* $tmp191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp189, &$s192);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp189));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
// unreffing REF($3:panda.core.String)
return $tmp191;

}
void org$pandalanguage$panda$Int16List$cleanup(org$pandalanguage$panda$Int16List* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

