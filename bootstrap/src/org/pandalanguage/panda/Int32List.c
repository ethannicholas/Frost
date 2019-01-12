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
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$Int32List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$Int32List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$Int32List$_panda$collections$CollectionView, { org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$Int32List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &org$pandalanguage$panda$Int32List$_panda$collections$ListView, { panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

static panda$core$String $s1;
org$pandalanguage$panda$Int32List$class_type org$pandalanguage$panda$Int32List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$Int32List$_panda$collections$Iterable, { org$pandalanguage$panda$Int32List$convert$R$panda$core$String, org$pandalanguage$panda$Int32List$cleanup, org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64, org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32$shim} };

typedef panda$core$Int64 (*$fn112)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn140)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74", 33, 8062736675856308551, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, -5075525128250989545, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 164, -5074273035843050931, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, -5075525128250989545, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x33\x32\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 111, -1395845738728909704, NULL };
static panda$core$String $s143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$Int32List$init$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT(org$pandalanguage$panda$Int32List* param0, panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT param1) {

// line 16
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
panda$core$Int64 $tmp4 = org$pandalanguage$panda$Int32List$computeCount$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT$R$panda$core$Int64(param1);
panda$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
panda$core$Int64 org$pandalanguage$panda$Int32List$computeCount$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT$R$panda$core$Int64(panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT param0) {

panda$core$Int32 local0;
// line 22
panda$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
panda$core$Int32 $tmp8 = param0.step;
panda$core$Int32 $tmp9 = (panda$core$Int32) {0};
int32_t $tmp10 = $tmp8.value;
int32_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
panda$core$Bit $tmp13 = (panda$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
panda$core$Int32 $tmp15 = param0.end;
panda$core$Int32 $tmp16 = param0.start;
int32_t $tmp17 = $tmp15.value;
int32_t $tmp18 = $tmp16.value;
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
panda$core$Int32 $tmp23 = param0.end;
panda$core$Int32 $tmp24 = param0.start;
int32_t $tmp25 = $tmp23.value;
int32_t $tmp26 = $tmp24.value;
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
panda$core$Int32 $tmp31 = param0.end;
panda$core$Int32 $tmp32 = param0.start;
int32_t $tmp33 = $tmp31.value;
int32_t $tmp34 = $tmp32.value;
int32_t $tmp35 = $tmp33 - $tmp34;
panda$core$Int32 $tmp36 = (panda$core$Int32) {$tmp35};
panda$core$Int32 $tmp37 = param0.step;
int32_t $tmp38 = $tmp36.value;
int32_t $tmp39 = $tmp37.value;
int32_t $tmp40 = $tmp38 / $tmp39;
panda$core$Int32 $tmp41 = (panda$core$Int32) {$tmp40};
panda$core$Int64 $tmp42 = (panda$core$Int64) {0};
panda$core$Int64 $tmp43 = panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64($tmp41, $tmp42);
panda$core$Int64 $tmp44 = (panda$core$Int64) {1};
int64_t $tmp45 = $tmp43.value;
int64_t $tmp46 = $tmp44.value;
int64_t $tmp47 = $tmp45 + $tmp46;
panda$core$Int64 $tmp48 = (panda$core$Int64) {$tmp47};
return $tmp48;
block3:;
// line 1
// line 33
// line 34
panda$core$Int32 $tmp49 = param0.step;
panda$core$Int32 $tmp50 = (panda$core$Int32) {0};
int32_t $tmp51 = $tmp49.value;
int32_t $tmp52 = $tmp50.value;
bool $tmp53 = $tmp51 > $tmp52;
panda$core$Bit $tmp54 = (panda$core$Bit) {$tmp53};
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block11; else goto block13;
block11:;
// line 35
panda$core$Int32 $tmp56 = param0.end;
panda$core$Int32 $tmp57 = param0.start;
int32_t $tmp58 = $tmp56.value;
int32_t $tmp59 = $tmp57.value;
bool $tmp60 = $tmp58 <= $tmp59;
panda$core$Bit $tmp61 = (panda$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block14; else goto block15;
block14:;
// line 36
panda$core$Int64 $tmp63 = (panda$core$Int64) {0};
return $tmp63;
block15:;
// line 38
panda$core$Int32 $tmp64 = (panda$core$Int32) {18446744073709551615};
*(&local0) = $tmp64;
goto block12;
block13:;
// line 1
// line 40
panda$core$Int32 $tmp65 = param0.end;
panda$core$Int32 $tmp66 = param0.start;
int32_t $tmp67 = $tmp65.value;
int32_t $tmp68 = $tmp66.value;
bool $tmp69 = $tmp67 >= $tmp68;
panda$core$Bit $tmp70 = (panda$core$Bit) {$tmp69};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block16; else goto block17;
block16:;
// line 41
panda$core$Int64 $tmp72 = (panda$core$Int64) {0};
return $tmp72;
block17:;
// line 43
panda$core$Int32 $tmp73 = (panda$core$Int32) {1};
*(&local0) = $tmp73;
goto block12;
block12:;
// line 45
panda$core$Int32 $tmp74 = param0.end;
panda$core$Int32 $tmp75 = param0.start;
int32_t $tmp76 = $tmp74.value;
int32_t $tmp77 = $tmp75.value;
int32_t $tmp78 = $tmp76 - $tmp77;
panda$core$Int32 $tmp79 = (panda$core$Int32) {$tmp78};
panda$core$Int32 $tmp80 = *(&local0);
int32_t $tmp81 = $tmp79.value;
int32_t $tmp82 = $tmp80.value;
int32_t $tmp83 = $tmp81 + $tmp82;
panda$core$Int32 $tmp84 = (panda$core$Int32) {$tmp83};
panda$core$Int32 $tmp85 = param0.step;
int32_t $tmp86 = $tmp84.value;
int32_t $tmp87 = $tmp85.value;
int32_t $tmp88 = $tmp86 / $tmp87;
panda$core$Int32 $tmp89 = (panda$core$Int32) {$tmp88};
panda$core$Int64 $tmp90 = (panda$core$Int64) {0};
panda$core$Int64 $tmp91 = panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64($tmp89, $tmp90);
panda$core$Int64 $tmp92 = (panda$core$Int64) {1};
int64_t $tmp93 = $tmp91.value;
int64_t $tmp94 = $tmp92.value;
int64_t $tmp95 = $tmp93 + $tmp94;
panda$core$Int64 $tmp96 = (panda$core$Int64) {$tmp95};
return $tmp96;
block2:;
panda$core$Bit $tmp97 = panda$core$Bit$init$builtin_bit(false);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp99 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block18:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$panda$Int32List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int32List* param0) {

// line 51
panda$core$Int64* $tmp102 = &param0->_count;
panda$core$Int64 $tmp103 = *$tmp102;
return $tmp103;

}
panda$core$Int32 org$pandalanguage$panda$Int32List$$IDX$panda$core$Int64$R$panda$core$Int32(org$pandalanguage$panda$Int32List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp104 = (panda$core$Int64) {0};
int64_t $tmp105 = param1.value;
int64_t $tmp106 = $tmp104.value;
bool $tmp107 = $tmp105 >= $tmp106;
panda$core$Bit $tmp108 = (panda$core$Bit) {$tmp107};
bool $tmp109 = $tmp108.value;
if ($tmp109) goto block1; else goto block2;
block1:;
ITable* $tmp110 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp110->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp110 = $tmp110->next;
}
$fn112 $tmp111 = $tmp110->methods[0];
panda$core$Int64 $tmp113 = $tmp111(((panda$collections$CollectionView*) param0));
int64_t $tmp114 = param1.value;
int64_t $tmp115 = $tmp113.value;
bool $tmp116 = $tmp114 < $tmp115;
panda$core$Bit $tmp117 = (panda$core$Bit) {$tmp116};
*(&local0) = $tmp117;
goto block3;
block2:;
*(&local0) = $tmp108;
goto block3;
block3:;
panda$core$Bit $tmp118 = *(&local0);
bool $tmp119 = $tmp118.value;
if ($tmp119) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp120 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s121, $tmp120, &$s122);
abort(); // unreachable
block4:;
// line 56
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp123 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp124 = *$tmp123;
panda$core$Int32 $tmp125 = $tmp124.start;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT* $tmp126 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp127 = *$tmp126;
panda$core$Int32 $tmp128 = $tmp127.step;
panda$core$Int32 $tmp129 = panda$core$Int64$convert$R$panda$core$Int32(param1);
int32_t $tmp130 = $tmp128.value;
int32_t $tmp131 = $tmp129.value;
int32_t $tmp132 = $tmp130 * $tmp131;
panda$core$Int32 $tmp133 = (panda$core$Int32) {$tmp132};
int32_t $tmp134 = $tmp125.value;
int32_t $tmp135 = $tmp133.value;
int32_t $tmp136 = $tmp134 + $tmp135;
panda$core$Int32 $tmp137 = (panda$core$Int32) {$tmp136};
return $tmp137;

}
panda$core$String* org$pandalanguage$panda$Int32List$convert$R$panda$core$String(org$pandalanguage$panda$Int32List* param0) {

// line 61
ITable* $tmp138 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp138->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp138 = $tmp138->next;
}
$fn140 $tmp139 = $tmp138->methods[1];
panda$core$String* $tmp141 = $tmp139(((panda$collections$CollectionView*) param0));
panda$core$String* $tmp142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s143, $tmp141);
panda$core$String* $tmp144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp142, &$s145);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp142));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp141));
// unreffing REF($3:panda.core.String)
return $tmp144;

}
void org$pandalanguage$panda$Int32List$cleanup(org$pandalanguage$panda$Int32List* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

