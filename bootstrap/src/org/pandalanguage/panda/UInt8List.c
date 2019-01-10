#include "org/pandalanguage/panda/UInt8List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt8.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt8.Cpanda/core/UInt8.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt32.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$UInt8List$$IDX$panda$core$Int64$R$panda$core$UInt8$shim(org$pandalanguage$panda$UInt8List* p0, panda$core$Int64 p1) {
    panda$core$UInt8 result = org$pandalanguage$panda$UInt8List$$IDX$panda$core$Int64$R$panda$core$UInt8(p0, p1);

    panda$core$UInt8$wrapper* $tmp2;
    $tmp2 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$UInt8List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$UInt8List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$UInt8List$_panda$collections$Iterable, { org$pandalanguage$panda$UInt8List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$UInt8List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$UInt8List$_panda$collections$CollectionView, { org$pandalanguage$panda$UInt8List$$IDX$panda$core$Int64$R$panda$core$UInt8$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sorted$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

static panda$core$String $s1;
org$pandalanguage$panda$UInt8List$class_type org$pandalanguage$panda$UInt8List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$UInt8List$_panda$collections$ListView, { org$pandalanguage$panda$UInt8List$convert$R$panda$core$String, org$pandalanguage$panda$UInt8List$cleanup, org$pandalanguage$panda$UInt8List$computeCount$R$panda$core$Int64, org$pandalanguage$panda$UInt8List$get_count$R$panda$core$Int64, org$pandalanguage$panda$UInt8List$$IDX$panda$core$Int64$R$panda$core$UInt8$shim} };

typedef panda$core$Int64 (*$fn121)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn153)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x38\x4c\x69\x73\x74", 33, 8188706894388873591, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 1218913292913467847, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 99, -2815696544134800405, NULL };
static panda$core$String $s130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 1218913292913467847, NULL };
static panda$core$String $s131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x38\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 111, -3443015885151889704, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$UInt8List$init$panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT(org$pandalanguage$panda$UInt8List* param0, panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT param1) {

// line 16
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
panda$core$Int64 $tmp4 = org$pandalanguage$panda$UInt8List$computeCount$R$panda$core$Int64(param0);
panda$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
panda$core$Int64 org$pandalanguage$panda$UInt8List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$UInt8List* param0) {

panda$core$UInt8 local0;
// line 22
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp6 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = $tmp7.inclusive;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// line 23
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp10 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp11 = *$tmp10;
panda$core$UInt8 $tmp12 = $tmp11.step;
panda$core$UInt8 $tmp13 = (panda$core$UInt8) {0};
uint8_t $tmp14 = $tmp12.value;
uint8_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 > $tmp15;
panda$core$Bit $tmp17 = (panda$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block6;
block4:;
// line 24
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp19 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp20 = *$tmp19;
panda$core$UInt8 $tmp21 = $tmp20.end;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp22 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp23 = *$tmp22;
panda$core$UInt8 $tmp24 = $tmp23.start;
uint8_t $tmp25 = $tmp21.value;
uint8_t $tmp26 = $tmp24.value;
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
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp31 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp32 = *$tmp31;
panda$core$UInt8 $tmp33 = $tmp32.end;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp34 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp35 = *$tmp34;
panda$core$UInt8 $tmp36 = $tmp35.start;
uint8_t $tmp37 = $tmp33.value;
uint8_t $tmp38 = $tmp36.value;
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
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp43 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp44 = *$tmp43;
panda$core$UInt8 $tmp45 = $tmp44.end;
panda$core$UInt32 $tmp46 = panda$core$UInt32$init$panda$core$UInt8($tmp45);
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp47 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp48 = *$tmp47;
panda$core$UInt8 $tmp49 = $tmp48.start;
panda$core$UInt32 $tmp50 = panda$core$UInt32$init$panda$core$UInt8($tmp49);
uint32_t $tmp51 = $tmp46.value;
uint32_t $tmp52 = $tmp50.value;
uint32_t $tmp53 = $tmp51 - $tmp52;
panda$core$UInt32 $tmp54 = (panda$core$UInt32) {$tmp53};
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp55 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp56 = *$tmp55;
panda$core$UInt8 $tmp57 = $tmp56.step;
panda$core$UInt32 $tmp58 = panda$core$UInt32$init$panda$core$UInt8($tmp57);
uint32_t $tmp59 = $tmp54.value;
uint32_t $tmp60 = $tmp58.value;
uint32_t $tmp61 = $tmp59 / $tmp60;
panda$core$UInt32 $tmp62 = (panda$core$UInt32) {$tmp61};
panda$core$UInt32 $tmp63 = (panda$core$UInt32) {0};
panda$core$UInt32 $tmp64 = panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32($tmp62, $tmp63);
panda$core$UInt32 $tmp65 = (panda$core$UInt32) {1};
uint32_t $tmp66 = $tmp64.value;
uint32_t $tmp67 = $tmp65.value;
uint32_t $tmp68 = $tmp66 + $tmp67;
panda$core$UInt32 $tmp69 = (panda$core$UInt32) {$tmp68};
panda$core$Int64 $tmp70 = panda$core$Int64$init$panda$core$UInt32($tmp69);
return $tmp70;
block3:;
// line 1
// line 33
// line 34
panda$core$UInt8 $tmp71 = (panda$core$UInt8) {1};
*(&local0) = $tmp71;
// line 35
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp72 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp73 = *$tmp72;
panda$core$UInt8 $tmp74 = $tmp73.end;
panda$core$UInt32 $tmp75 = panda$core$UInt32$init$panda$core$UInt8($tmp74);
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp76 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp77 = *$tmp76;
panda$core$UInt8 $tmp78 = $tmp77.start;
panda$core$UInt32 $tmp79 = panda$core$UInt32$init$panda$core$UInt8($tmp78);
uint32_t $tmp80 = $tmp75.value;
uint32_t $tmp81 = $tmp79.value;
uint32_t $tmp82 = $tmp80 - $tmp81;
panda$core$UInt32 $tmp83 = (panda$core$UInt32) {$tmp82};
panda$core$UInt8 $tmp84 = *(&local0);
panda$core$UInt32 $tmp85 = panda$core$UInt32$init$panda$core$UInt8($tmp84);
uint32_t $tmp86 = $tmp83.value;
uint32_t $tmp87 = $tmp85.value;
uint32_t $tmp88 = $tmp86 + $tmp87;
panda$core$UInt32 $tmp89 = (panda$core$UInt32) {$tmp88};
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp90 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp91 = *$tmp90;
panda$core$UInt8 $tmp92 = $tmp91.step;
panda$core$UInt32 $tmp93 = panda$core$UInt32$init$panda$core$UInt8($tmp92);
uint32_t $tmp94 = $tmp89.value;
uint32_t $tmp95 = $tmp93.value;
uint32_t $tmp96 = $tmp94 / $tmp95;
panda$core$UInt32 $tmp97 = (panda$core$UInt32) {$tmp96};
panda$core$UInt32 $tmp98 = (panda$core$UInt32) {0};
panda$core$UInt32 $tmp99 = panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32($tmp97, $tmp98);
panda$core$UInt32 $tmp100 = (panda$core$UInt32) {1};
uint32_t $tmp101 = $tmp99.value;
uint32_t $tmp102 = $tmp100.value;
uint32_t $tmp103 = $tmp101 + $tmp102;
panda$core$UInt32 $tmp104 = (panda$core$UInt32) {$tmp103};
panda$core$Int64 $tmp105 = panda$core$Int64$init$panda$core$UInt32($tmp104);
return $tmp105;
block2:;
panda$core$Bit $tmp106 = panda$core$Bit$init$builtin_bit(false);
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp108 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s109, $tmp108, &$s110);
abort(); // unreachable
block11:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$panda$UInt8List$get_count$R$panda$core$Int64(org$pandalanguage$panda$UInt8List* param0) {

// line 41
panda$core$Int64* $tmp111 = &param0->_count;
panda$core$Int64 $tmp112 = *$tmp111;
return $tmp112;

}
panda$core$UInt8 org$pandalanguage$panda$UInt8List$$IDX$panda$core$Int64$R$panda$core$UInt8(org$pandalanguage$panda$UInt8List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp113 = (panda$core$Int64) {0};
int64_t $tmp114 = param1.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 >= $tmp115;
panda$core$Bit $tmp117 = (panda$core$Bit) {$tmp116};
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block1; else goto block2;
block1:;
ITable* $tmp119 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp119->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp119 = $tmp119->next;
}
$fn121 $tmp120 = $tmp119->methods[0];
panda$core$Int64 $tmp122 = $tmp120(((panda$collections$CollectionView*) param0));
int64_t $tmp123 = param1.value;
int64_t $tmp124 = $tmp122.value;
bool $tmp125 = $tmp123 < $tmp124;
panda$core$Bit $tmp126 = (panda$core$Bit) {$tmp125};
*(&local0) = $tmp126;
goto block3;
block2:;
*(&local0) = $tmp117;
goto block3;
block3:;
panda$core$Bit $tmp127 = *(&local0);
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp129 = (panda$core$Int64) {45};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s130, $tmp129, &$s131);
abort(); // unreachable
block4:;
// line 46
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp132 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp133 = *$tmp132;
panda$core$UInt8 $tmp134 = $tmp133.start;
panda$core$UInt32 $tmp135 = panda$core$UInt32$init$panda$core$UInt8($tmp134);
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT* $tmp136 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp137 = *$tmp136;
panda$core$UInt8 $tmp138 = $tmp137.step;
panda$core$UInt32 $tmp139 = panda$core$UInt32$init$panda$core$UInt8($tmp138);
panda$core$UInt8 $tmp140 = panda$core$Int64$convert$R$panda$core$UInt8(param1);
panda$core$UInt32 $tmp141 = panda$core$UInt32$init$panda$core$UInt8($tmp140);
uint32_t $tmp142 = $tmp139.value;
uint32_t $tmp143 = $tmp141.value;
uint32_t $tmp144 = $tmp142 * $tmp143;
panda$core$UInt32 $tmp145 = (panda$core$UInt32) {$tmp144};
uint32_t $tmp146 = $tmp135.value;
uint32_t $tmp147 = $tmp145.value;
uint32_t $tmp148 = $tmp146 + $tmp147;
panda$core$UInt32 $tmp149 = (panda$core$UInt32) {$tmp148};
panda$core$UInt8 $tmp150 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp149);
return $tmp150;

}
panda$core$String* org$pandalanguage$panda$UInt8List$convert$R$panda$core$String(org$pandalanguage$panda$UInt8List* param0) {

// line 51
ITable* $tmp151 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp151->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp151 = $tmp151->next;
}
$fn153 $tmp152 = $tmp151->methods[1];
panda$core$String* $tmp154 = $tmp152(((panda$collections$CollectionView*) param0));
panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s156, $tmp154);
panda$core$String* $tmp157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp155, &$s158);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp154));
// unreffing REF($3:panda.core.String)
return $tmp157;

}
void org$pandalanguage$panda$UInt8List$cleanup(org$pandalanguage$panda$UInt8List* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

