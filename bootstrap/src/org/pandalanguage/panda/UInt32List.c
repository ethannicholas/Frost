#include "org/pandalanguage/panda/UInt32List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt32.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt32.Cpanda/core/UInt32.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$UInt32List$$IDX$panda$core$Int64$R$panda$core$UInt32$shim(org$pandalanguage$panda$UInt32List* p0, panda$core$Int64 p1) {
    panda$core$UInt32 result = org$pandalanguage$panda$UInt32List$$IDX$panda$core$Int64$R$panda$core$UInt32(p0, p1);

    panda$core$UInt32$wrapper* $tmp2;
    $tmp2 = (panda$core$UInt32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$UInt32$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$UInt32List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$UInt32List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$UInt32List$_panda$collections$Iterable, { org$pandalanguage$panda$UInt32List$$IDX$panda$core$Int64$R$panda$core$UInt32$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sorted$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$UInt32List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$UInt32List$_panda$collections$ListView, { org$pandalanguage$panda$UInt32List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

static panda$core$String $s1;
org$pandalanguage$panda$UInt32List$class_type org$pandalanguage$panda$UInt32List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$UInt32List$_panda$collections$CollectionView, { org$pandalanguage$panda$UInt32List$convert$R$panda$core$String, org$pandalanguage$panda$UInt32List$cleanup, org$pandalanguage$panda$UInt32List$computeCount$R$panda$core$Int64, org$pandalanguage$panda$UInt32List$get_count$R$panda$core$Int64, org$pandalanguage$panda$UInt32List$$IDX$panda$core$Int64$R$panda$core$UInt32$shim} };

typedef panda$core$Int64 (*$fn114)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn142)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74", 34, -3044087038939643684, NULL };
static panda$core$String $s102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 16, 4262625099474190492, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 100, -774713230111988580, NULL };
static panda$core$String $s123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 16, 4262625099474190492, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 113, 5902419781715980774, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$UInt32List$init$panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT(org$pandalanguage$panda$UInt32List* param0, panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT param1) {

// line 16
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
panda$core$Int64 $tmp4 = org$pandalanguage$panda$UInt32List$computeCount$R$panda$core$Int64(param0);
panda$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
panda$core$Int64 org$pandalanguage$panda$UInt32List$computeCount$R$panda$core$Int64(org$pandalanguage$panda$UInt32List* param0) {

panda$core$UInt32 local0;
// line 22
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp6 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp7 = *$tmp6;
panda$core$Bit $tmp8 = $tmp7.inclusive;
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block3;
block1:;
// line 23
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp10 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp11 = *$tmp10;
panda$core$UInt32 $tmp12 = $tmp11.step;
panda$core$UInt32 $tmp13 = (panda$core$UInt32) {0};
uint32_t $tmp14 = $tmp12.value;
uint32_t $tmp15 = $tmp13.value;
bool $tmp16 = $tmp14 > $tmp15;
panda$core$Bit $tmp17 = (panda$core$Bit) {$tmp16};
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block6;
block4:;
// line 24
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp19 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp20 = *$tmp19;
panda$core$UInt32 $tmp21 = $tmp20.end;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp22 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp23 = *$tmp22;
panda$core$UInt32 $tmp24 = $tmp23.start;
uint32_t $tmp25 = $tmp21.value;
uint32_t $tmp26 = $tmp24.value;
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
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp31 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp32 = *$tmp31;
panda$core$UInt32 $tmp33 = $tmp32.end;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp34 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp35 = *$tmp34;
panda$core$UInt32 $tmp36 = $tmp35.start;
uint32_t $tmp37 = $tmp33.value;
uint32_t $tmp38 = $tmp36.value;
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
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp43 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp44 = *$tmp43;
panda$core$UInt32 $tmp45 = $tmp44.end;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp46 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp47 = *$tmp46;
panda$core$UInt32 $tmp48 = $tmp47.start;
uint32_t $tmp49 = $tmp45.value;
uint32_t $tmp50 = $tmp48.value;
uint32_t $tmp51 = $tmp49 - $tmp50;
panda$core$UInt32 $tmp52 = (panda$core$UInt32) {$tmp51};
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp53 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp54 = *$tmp53;
panda$core$UInt32 $tmp55 = $tmp54.step;
uint32_t $tmp56 = $tmp52.value;
uint32_t $tmp57 = $tmp55.value;
uint32_t $tmp58 = $tmp56 / $tmp57;
panda$core$UInt32 $tmp59 = (panda$core$UInt32) {$tmp58};
panda$core$UInt32 $tmp60 = (panda$core$UInt32) {0};
panda$core$UInt32 $tmp61 = panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32($tmp59, $tmp60);
panda$core$UInt32 $tmp62 = (panda$core$UInt32) {1};
uint32_t $tmp63 = $tmp61.value;
uint32_t $tmp64 = $tmp62.value;
uint32_t $tmp65 = $tmp63 + $tmp64;
panda$core$UInt32 $tmp66 = (panda$core$UInt32) {$tmp65};
panda$core$Int64 $tmp67 = panda$core$Int64$init$panda$core$UInt32($tmp66);
return $tmp67;
block3:;
// line 1
// line 33
// line 34
panda$core$UInt32 $tmp68 = (panda$core$UInt32) {1};
*(&local0) = $tmp68;
// line 35
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp69 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp70 = *$tmp69;
panda$core$UInt32 $tmp71 = $tmp70.end;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp72 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp73 = *$tmp72;
panda$core$UInt32 $tmp74 = $tmp73.start;
uint32_t $tmp75 = $tmp71.value;
uint32_t $tmp76 = $tmp74.value;
uint32_t $tmp77 = $tmp75 - $tmp76;
panda$core$UInt32 $tmp78 = (panda$core$UInt32) {$tmp77};
panda$core$UInt32 $tmp79 = *(&local0);
uint32_t $tmp80 = $tmp78.value;
uint32_t $tmp81 = $tmp79.value;
uint32_t $tmp82 = $tmp80 + $tmp81;
panda$core$UInt32 $tmp83 = (panda$core$UInt32) {$tmp82};
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp84 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp85 = *$tmp84;
panda$core$UInt32 $tmp86 = $tmp85.step;
uint32_t $tmp87 = $tmp83.value;
uint32_t $tmp88 = $tmp86.value;
uint32_t $tmp89 = $tmp87 / $tmp88;
panda$core$UInt32 $tmp90 = (panda$core$UInt32) {$tmp89};
panda$core$UInt32 $tmp91 = (panda$core$UInt32) {0};
panda$core$UInt32 $tmp92 = panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32($tmp90, $tmp91);
panda$core$UInt32 $tmp93 = (panda$core$UInt32) {1};
uint32_t $tmp94 = $tmp92.value;
uint32_t $tmp95 = $tmp93.value;
uint32_t $tmp96 = $tmp94 + $tmp95;
panda$core$UInt32 $tmp97 = (panda$core$UInt32) {$tmp96};
panda$core$Int64 $tmp98 = panda$core$Int64$init$panda$core$UInt32($tmp97);
return $tmp98;
block2:;
panda$core$Bit $tmp99 = panda$core$Bit$init$builtin_bit(false);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp101 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s102, $tmp101, &$s103);
abort(); // unreachable
block11:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$panda$UInt32List$get_count$R$panda$core$Int64(org$pandalanguage$panda$UInt32List* param0) {

// line 41
panda$core$Int64* $tmp104 = &param0->_count;
panda$core$Int64 $tmp105 = *$tmp104;
return $tmp105;

}
panda$core$UInt32 org$pandalanguage$panda$UInt32List$$IDX$panda$core$Int64$R$panda$core$UInt32(org$pandalanguage$panda$UInt32List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp106 = (panda$core$Int64) {0};
int64_t $tmp107 = param1.value;
int64_t $tmp108 = $tmp106.value;
bool $tmp109 = $tmp107 >= $tmp108;
panda$core$Bit $tmp110 = (panda$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block1; else goto block2;
block1:;
ITable* $tmp112 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp112->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp112 = $tmp112->next;
}
$fn114 $tmp113 = $tmp112->methods[0];
panda$core$Int64 $tmp115 = $tmp113(((panda$collections$CollectionView*) param0));
int64_t $tmp116 = param1.value;
int64_t $tmp117 = $tmp115.value;
bool $tmp118 = $tmp116 < $tmp117;
panda$core$Bit $tmp119 = (panda$core$Bit) {$tmp118};
*(&local0) = $tmp119;
goto block3;
block2:;
*(&local0) = $tmp110;
goto block3;
block3:;
panda$core$Bit $tmp120 = *(&local0);
bool $tmp121 = $tmp120.value;
if ($tmp121) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp122 = (panda$core$Int64) {45};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s123, $tmp122, &$s124);
abort(); // unreachable
block4:;
// line 46
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp125 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp126 = *$tmp125;
panda$core$UInt32 $tmp127 = $tmp126.start;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT* $tmp128 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt32$Cpanda$core$UInt32$GT $tmp129 = *$tmp128;
panda$core$UInt32 $tmp130 = $tmp129.step;
panda$core$UInt32 $tmp131 = panda$core$Int64$convert$R$panda$core$UInt32(param1);
uint32_t $tmp132 = $tmp130.value;
uint32_t $tmp133 = $tmp131.value;
uint32_t $tmp134 = $tmp132 * $tmp133;
panda$core$UInt32 $tmp135 = (panda$core$UInt32) {$tmp134};
uint32_t $tmp136 = $tmp127.value;
uint32_t $tmp137 = $tmp135.value;
uint32_t $tmp138 = $tmp136 + $tmp137;
panda$core$UInt32 $tmp139 = (panda$core$UInt32) {$tmp138};
return $tmp139;

}
panda$core$String* org$pandalanguage$panda$UInt32List$convert$R$panda$core$String(org$pandalanguage$panda$UInt32List* param0) {

// line 51
ITable* $tmp140 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp140->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp140 = $tmp140->next;
}
$fn142 $tmp141 = $tmp140->methods[1];
panda$core$String* $tmp143 = $tmp141(((panda$collections$CollectionView*) param0));
panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s145, $tmp143);
panda$core$String* $tmp146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp144, &$s147);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp143));
// unreffing REF($3:panda.core.String)
return $tmp146;

}
void org$pandalanguage$panda$UInt32List$cleanup(org$pandalanguage$panda$UInt32List* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

