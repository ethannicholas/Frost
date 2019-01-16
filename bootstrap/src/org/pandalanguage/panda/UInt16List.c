#include "org/pandalanguage/panda/UInt16List.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt16.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"
#include "panda/collections/Iterable.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt16.Cpanda/core/UInt16.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/UInt32.h"
#include "panda/core/Panda.h"

__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$UInt16List$$IDX$panda$core$Int64$R$panda$core$UInt16$shim(org$pandalanguage$panda$UInt16List* p0, panda$core$Int64 p1) {
    panda$core$UInt16 result = org$pandalanguage$panda$UInt16List$$IDX$panda$core$Int64$R$panda$core$UInt16(p0, p1);

    panda$core$UInt16$wrapper* $tmp2;
    $tmp2 = (panda$core$UInt16$wrapper*) frostObjectAlloc(14, (panda$core$Class*) &panda$core$UInt16$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$UInt16List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, NULL, { org$pandalanguage$panda$UInt16List$$IDX$panda$core$Int64$R$panda$core$UInt16$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$UInt16List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$UInt16List$_panda$collections$ListView, { org$pandalanguage$panda$UInt16List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$UInt16List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &org$pandalanguage$panda$UInt16List$_panda$collections$CollectionView, { panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
org$pandalanguage$panda$UInt16List$class_type org$pandalanguage$panda$UInt16List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$UInt16List$_panda$collections$Iterable, { org$pandalanguage$panda$UInt16List$convert$R$panda$core$String, org$pandalanguage$panda$UInt16List$cleanup, org$pandalanguage$panda$UInt16List$get_count$R$panda$core$Int64, org$pandalanguage$panda$UInt16List$$IDX$panda$core$Int64$R$panda$core$UInt16$shim} };

typedef panda$core$Int64 (*$fn97)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn129)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74", 34, -3044087059543603082, NULL };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, -7863730697579519904, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 167, -8033340734342091678, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x66\x72\x6f\x73\x74", 16, -7863730697579519904, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x55\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 113, 4467972355245510018, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$UInt16List$init$panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT(org$pandalanguage$panda$UInt16List* param0, panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT param1) {

// line 16
panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
panda$core$Int64 $tmp4 = org$pandalanguage$panda$UInt16List$computeCount$panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT$R$panda$core$Int64(param1);
panda$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
panda$core$Int64 org$pandalanguage$panda$UInt16List$computeCount$panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT$R$panda$core$Int64(panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT param0) {

panda$core$UInt16 local0;
// line 22
panda$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
panda$core$UInt16 $tmp8 = param0.step;
panda$core$UInt16 $tmp9 = (panda$core$UInt16) {0};
uint16_t $tmp10 = $tmp8.value;
uint16_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
panda$core$Bit $tmp13 = (panda$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
panda$core$UInt16 $tmp15 = param0.end;
panda$core$UInt16 $tmp16 = param0.start;
uint16_t $tmp17 = $tmp15.value;
uint16_t $tmp18 = $tmp16.value;
bool $tmp19 = $tmp17 < $tmp18;
panda$core$Bit $tmp20 = (panda$core$Bit) {$tmp19};
bool $tmp21 = $tmp20.value;
if ($tmp21) goto block7; else goto block8;
block7:;
// line 25
panda$core$Int64 $tmp22 = (panda$core$Int64) {0};
return $tmp22;
block8:;
goto block5;
block6:;
// line 27
panda$core$UInt16 $tmp23 = param0.end;
panda$core$UInt16 $tmp24 = param0.start;
uint16_t $tmp25 = $tmp23.value;
uint16_t $tmp26 = $tmp24.value;
bool $tmp27 = $tmp25 > $tmp26;
panda$core$Bit $tmp28 = (panda$core$Bit) {$tmp27};
bool $tmp29 = $tmp28.value;
if ($tmp29) goto block9; else goto block10;
block9:;
// line 28
panda$core$Int64 $tmp30 = (panda$core$Int64) {0};
return $tmp30;
block10:;
goto block5;
block5:;
// line 30
panda$core$UInt16 $tmp31 = param0.end;
panda$core$UInt32 $tmp32 = panda$core$UInt32$init$panda$core$UInt16($tmp31);
panda$core$UInt16 $tmp33 = param0.start;
panda$core$UInt32 $tmp34 = panda$core$UInt32$init$panda$core$UInt16($tmp33);
uint32_t $tmp35 = $tmp32.value;
uint32_t $tmp36 = $tmp34.value;
uint32_t $tmp37 = $tmp35 - $tmp36;
panda$core$UInt32 $tmp38 = (panda$core$UInt32) {$tmp37};
panda$core$UInt16 $tmp39 = param0.step;
panda$core$UInt32 $tmp40 = panda$core$UInt32$init$panda$core$UInt16($tmp39);
uint32_t $tmp41 = $tmp38.value;
uint32_t $tmp42 = $tmp40.value;
uint32_t $tmp43 = $tmp41 / $tmp42;
panda$core$UInt32 $tmp44 = (panda$core$UInt32) {$tmp43};
panda$core$UInt32 $tmp45 = (panda$core$UInt32) {0};
panda$core$UInt32 $tmp46 = panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32($tmp44, $tmp45);
panda$core$Int64 $tmp47 = panda$core$Int64$init$panda$core$UInt32($tmp46);
panda$core$Int64 $tmp48 = (panda$core$Int64) {1};
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 + $tmp50;
panda$core$Int64 $tmp52 = (panda$core$Int64) {$tmp51};
return $tmp52;
block3:;
// line 1
// line 33
// line 34
panda$core$UInt16 $tmp53 = (panda$core$UInt16) {1};
*(&local0) = $tmp53;
// line 35
panda$core$UInt16 $tmp54 = param0.end;
panda$core$UInt32 $tmp55 = panda$core$UInt32$init$panda$core$UInt16($tmp54);
panda$core$UInt16 $tmp56 = param0.start;
panda$core$UInt32 $tmp57 = panda$core$UInt32$init$panda$core$UInt16($tmp56);
uint32_t $tmp58 = $tmp55.value;
uint32_t $tmp59 = $tmp57.value;
uint32_t $tmp60 = $tmp58 - $tmp59;
panda$core$UInt32 $tmp61 = (panda$core$UInt32) {$tmp60};
panda$core$UInt16 $tmp62 = *(&local0);
panda$core$UInt32 $tmp63 = panda$core$UInt32$init$panda$core$UInt16($tmp62);
uint32_t $tmp64 = $tmp61.value;
uint32_t $tmp65 = $tmp63.value;
uint32_t $tmp66 = $tmp64 + $tmp65;
panda$core$UInt32 $tmp67 = (panda$core$UInt32) {$tmp66};
panda$core$UInt16 $tmp68 = param0.step;
panda$core$UInt32 $tmp69 = panda$core$UInt32$init$panda$core$UInt16($tmp68);
uint32_t $tmp70 = $tmp67.value;
uint32_t $tmp71 = $tmp69.value;
uint32_t $tmp72 = $tmp70 / $tmp71;
panda$core$UInt32 $tmp73 = (panda$core$UInt32) {$tmp72};
panda$core$UInt32 $tmp74 = (panda$core$UInt32) {0};
panda$core$UInt32 $tmp75 = panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32($tmp73, $tmp74);
panda$core$Int64 $tmp76 = panda$core$Int64$init$panda$core$UInt32($tmp75);
panda$core$Int64 $tmp77 = (panda$core$Int64) {1};
int64_t $tmp78 = $tmp76.value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 + $tmp79;
panda$core$Int64 $tmp81 = (panda$core$Int64) {$tmp80};
return $tmp81;
block2:;
panda$core$Bit $tmp82 = panda$core$Bit$init$builtin_bit(false);
bool $tmp83 = $tmp82.value;
if ($tmp83) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp84 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s85, $tmp84, &$s86);
abort(); // unreachable
block11:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$panda$UInt16List$get_count$R$panda$core$Int64(org$pandalanguage$panda$UInt16List* param0) {

// line 41
panda$core$Int64* $tmp87 = &param0->_count;
panda$core$Int64 $tmp88 = *$tmp87;
return $tmp88;

}
panda$core$UInt16 org$pandalanguage$panda$UInt16List$$IDX$panda$core$Int64$R$panda$core$UInt16(org$pandalanguage$panda$UInt16List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp89 = (panda$core$Int64) {0};
int64_t $tmp90 = param1.value;
int64_t $tmp91 = $tmp89.value;
bool $tmp92 = $tmp90 >= $tmp91;
panda$core$Bit $tmp93 = (panda$core$Bit) {$tmp92};
bool $tmp94 = $tmp93.value;
if ($tmp94) goto block1; else goto block2;
block1:;
ITable* $tmp95 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp95->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp95 = $tmp95->next;
}
$fn97 $tmp96 = $tmp95->methods[0];
panda$core$Int64 $tmp98 = $tmp96(((panda$collections$CollectionView*) param0));
int64_t $tmp99 = param1.value;
int64_t $tmp100 = $tmp98.value;
bool $tmp101 = $tmp99 < $tmp100;
panda$core$Bit $tmp102 = (panda$core$Bit) {$tmp101};
*(&local0) = $tmp102;
goto block3;
block2:;
*(&local0) = $tmp93;
goto block3;
block3:;
panda$core$Bit $tmp103 = *(&local0);
bool $tmp104 = $tmp103.value;
if ($tmp104) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp105 = (panda$core$Int64) {45};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s106, $tmp105, &$s107);
abort(); // unreachable
block4:;
// line 46
panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT* $tmp108 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT $tmp109 = *$tmp108;
panda$core$UInt16 $tmp110 = $tmp109.start;
panda$core$UInt32 $tmp111 = panda$core$UInt32$init$panda$core$UInt16($tmp110);
panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT* $tmp112 = &param0->range;
panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT $tmp113 = *$tmp112;
panda$core$UInt16 $tmp114 = $tmp113.step;
panda$core$UInt32 $tmp115 = panda$core$UInt32$init$panda$core$UInt16($tmp114);
panda$core$UInt16 $tmp116 = panda$core$Int64$convert$R$panda$core$UInt16(param1);
panda$core$UInt32 $tmp117 = panda$core$UInt32$init$panda$core$UInt16($tmp116);
uint32_t $tmp118 = $tmp115.value;
uint32_t $tmp119 = $tmp117.value;
uint32_t $tmp120 = $tmp118 * $tmp119;
panda$core$UInt32 $tmp121 = (panda$core$UInt32) {$tmp120};
uint32_t $tmp122 = $tmp111.value;
uint32_t $tmp123 = $tmp121.value;
uint32_t $tmp124 = $tmp122 + $tmp123;
panda$core$UInt32 $tmp125 = (panda$core$UInt32) {$tmp124};
panda$core$UInt16 $tmp126 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp125);
return $tmp126;

}
panda$core$String* org$pandalanguage$panda$UInt16List$convert$R$panda$core$String(org$pandalanguage$panda$UInt16List* param0) {

// line 51
ITable* $tmp127 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp127->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp127 = $tmp127->next;
}
$fn129 $tmp128 = $tmp127->methods[1];
panda$core$String* $tmp130 = $tmp128(((panda$collections$CollectionView*) param0));
panda$core$String* $tmp131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s132, $tmp130);
panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s134);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp133));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp131));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp130));
// unreffing REF($3:panda.core.String)
return $tmp133;

}
void org$pandalanguage$panda$UInt16List$cleanup(org$pandalanguage$panda$UInt16List* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

