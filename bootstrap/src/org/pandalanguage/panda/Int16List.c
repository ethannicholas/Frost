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

__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Object* org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16$shim(org$pandalanguage$panda$Int16List* p0, panda$core$Int64 p1) {
    panda$core$Int16 result = org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16(p0, p1);

    panda$core$Int16$wrapper* $tmp2;
    $tmp2 = (panda$core$Int16$wrapper*) pandaObjectAlloc(14, (panda$core$Class*) &panda$core$Int16$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } org$pandalanguage$panda$Int16List$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, NULL, { panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$Int16List$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, (ITable*) &org$pandalanguage$panda$Int16List$_panda$collections$Iterable, { org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } org$pandalanguage$panda$Int16List$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &org$pandalanguage$panda$Int16List$_panda$collections$CollectionView, { org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

static panda$core$String $s1;
org$pandalanguage$panda$Int16List$class_type org$pandalanguage$panda$Int16List$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$panda$Int16List$_panda$collections$ListView, { org$pandalanguage$panda$Int16List$convert$R$panda$core$String, org$pandalanguage$panda$Int16List$cleanup, org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64, org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16$shim} };

typedef panda$core$Int64 (*$fn119)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn151)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74", 33, 8062736655252349153, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 1244863149427928833, NULL };
static panda$core$String $s108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x63\x6f\x6d\x70\x75\x74\x65\x43\x6f\x75\x6e\x74\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 164, 18126410382934843, NULL };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x70\x61\x6e\x64\x61", 15, 1244863149427928833, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x2e\x49\x6e\x74\x31\x36\x4c\x69\x73\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 111, -3053817462390854804, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s156 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };

void org$pandalanguage$panda$Int16List$init$panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT(org$pandalanguage$panda$Int16List* param0, panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT param1) {

// line 16
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp3 = &param0->range;
*$tmp3 = param1;
// line 17
panda$core$Int64 $tmp4 = org$pandalanguage$panda$Int16List$computeCount$panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT$R$panda$core$Int64(param1);
panda$core$Int64* $tmp5 = &param0->_count;
*$tmp5 = $tmp4;
return;

}
panda$core$Int64 org$pandalanguage$panda$Int16List$computeCount$panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT$R$panda$core$Int64(panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT param0) {

panda$core$Int16 local0;
// line 22
panda$core$Bit $tmp6 = param0.inclusive;
bool $tmp7 = $tmp6.value;
if ($tmp7) goto block1; else goto block3;
block1:;
// line 23
panda$core$Int16 $tmp8 = param0.step;
panda$core$Int16 $tmp9 = (panda$core$Int16) {0};
int16_t $tmp10 = $tmp8.value;
int16_t $tmp11 = $tmp9.value;
bool $tmp12 = $tmp10 > $tmp11;
panda$core$Bit $tmp13 = (panda$core$Bit) {$tmp12};
bool $tmp14 = $tmp13.value;
if ($tmp14) goto block4; else goto block6;
block4:;
// line 24
panda$core$Int16 $tmp15 = param0.end;
panda$core$Int16 $tmp16 = param0.start;
int16_t $tmp17 = $tmp15.value;
int16_t $tmp18 = $tmp16.value;
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
panda$core$Int16 $tmp23 = param0.end;
panda$core$Int16 $tmp24 = param0.start;
int16_t $tmp25 = $tmp23.value;
int16_t $tmp26 = $tmp24.value;
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
panda$core$Int16 $tmp31 = param0.end;
panda$core$Int32 $tmp32 = panda$core$Int32$init$panda$core$Int16($tmp31);
panda$core$Int16 $tmp33 = param0.start;
panda$core$Int32 $tmp34 = panda$core$Int32$init$panda$core$Int16($tmp33);
int32_t $tmp35 = $tmp32.value;
int32_t $tmp36 = $tmp34.value;
int32_t $tmp37 = $tmp35 - $tmp36;
panda$core$Int32 $tmp38 = (panda$core$Int32) {$tmp37};
panda$core$Int16 $tmp39 = param0.step;
panda$core$Int32 $tmp40 = panda$core$Int32$init$panda$core$Int16($tmp39);
int32_t $tmp41 = $tmp38.value;
int32_t $tmp42 = $tmp40.value;
int32_t $tmp43 = $tmp41 / $tmp42;
panda$core$Int32 $tmp44 = (panda$core$Int32) {$tmp43};
panda$core$Int64 $tmp45 = (panda$core$Int64) {0};
panda$core$Int64 $tmp46 = panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64($tmp44, $tmp45);
panda$core$Int64 $tmp47 = (panda$core$Int64) {1};
int64_t $tmp48 = $tmp46.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 + $tmp49;
panda$core$Int64 $tmp51 = (panda$core$Int64) {$tmp50};
return $tmp51;
block3:;
// line 1
// line 33
// line 34
panda$core$Int16 $tmp52 = param0.step;
panda$core$Int16 $tmp53 = (panda$core$Int16) {0};
int16_t $tmp54 = $tmp52.value;
int16_t $tmp55 = $tmp53.value;
bool $tmp56 = $tmp54 > $tmp55;
panda$core$Bit $tmp57 = (panda$core$Bit) {$tmp56};
bool $tmp58 = $tmp57.value;
if ($tmp58) goto block11; else goto block13;
block11:;
// line 35
panda$core$Int16 $tmp59 = param0.end;
panda$core$Int16 $tmp60 = param0.start;
int16_t $tmp61 = $tmp59.value;
int16_t $tmp62 = $tmp60.value;
bool $tmp63 = $tmp61 <= $tmp62;
panda$core$Bit $tmp64 = (panda$core$Bit) {$tmp63};
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block14; else goto block15;
block14:;
// line 36
panda$core$Int64 $tmp66 = (panda$core$Int64) {0};
return $tmp66;
block15:;
// line 38
panda$core$Int16 $tmp67 = (panda$core$Int16) {18446744073709551615};
*(&local0) = $tmp67;
goto block12;
block13:;
// line 1
// line 40
panda$core$Int16 $tmp68 = param0.end;
panda$core$Int16 $tmp69 = param0.start;
int16_t $tmp70 = $tmp68.value;
int16_t $tmp71 = $tmp69.value;
bool $tmp72 = $tmp70 >= $tmp71;
panda$core$Bit $tmp73 = (panda$core$Bit) {$tmp72};
bool $tmp74 = $tmp73.value;
if ($tmp74) goto block16; else goto block17;
block16:;
// line 41
panda$core$Int64 $tmp75 = (panda$core$Int64) {0};
return $tmp75;
block17:;
// line 43
panda$core$Int16 $tmp76 = (panda$core$Int16) {1};
*(&local0) = $tmp76;
goto block12;
block12:;
// line 45
panda$core$Int16 $tmp77 = param0.end;
panda$core$Int32 $tmp78 = panda$core$Int32$init$panda$core$Int16($tmp77);
panda$core$Int16 $tmp79 = param0.start;
panda$core$Int32 $tmp80 = panda$core$Int32$init$panda$core$Int16($tmp79);
int32_t $tmp81 = $tmp78.value;
int32_t $tmp82 = $tmp80.value;
int32_t $tmp83 = $tmp81 - $tmp82;
panda$core$Int32 $tmp84 = (panda$core$Int32) {$tmp83};
panda$core$Int16 $tmp85 = *(&local0);
panda$core$Int32 $tmp86 = panda$core$Int32$init$panda$core$Int16($tmp85);
int32_t $tmp87 = $tmp84.value;
int32_t $tmp88 = $tmp86.value;
int32_t $tmp89 = $tmp87 + $tmp88;
panda$core$Int32 $tmp90 = (panda$core$Int32) {$tmp89};
panda$core$Int16 $tmp91 = param0.step;
panda$core$Int32 $tmp92 = panda$core$Int32$init$panda$core$Int16($tmp91);
int32_t $tmp93 = $tmp90.value;
int32_t $tmp94 = $tmp92.value;
int32_t $tmp95 = $tmp93 / $tmp94;
panda$core$Int32 $tmp96 = (panda$core$Int32) {$tmp95};
panda$core$Int64 $tmp97 = (panda$core$Int64) {0};
panda$core$Int64 $tmp98 = panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64($tmp96, $tmp97);
panda$core$Int64 $tmp99 = (panda$core$Int64) {1};
int64_t $tmp100 = $tmp98.value;
int64_t $tmp101 = $tmp99.value;
int64_t $tmp102 = $tmp100 + $tmp101;
panda$core$Int64 $tmp103 = (panda$core$Int64) {$tmp102};
return $tmp103;
block2:;
panda$core$Bit $tmp104 = panda$core$Bit$init$builtin_bit(false);
bool $tmp105 = $tmp104.value;
if ($tmp105) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp106 = (panda$core$Int64) {21};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s107, $tmp106, &$s108);
abort(); // unreachable
block18:;
abort(); // unreachable

}
panda$core$Int64 org$pandalanguage$panda$Int16List$get_count$R$panda$core$Int64(org$pandalanguage$panda$Int16List* param0) {

// line 51
panda$core$Int64* $tmp109 = &param0->_count;
panda$core$Int64 $tmp110 = *$tmp109;
return $tmp110;

}
panda$core$Int16 org$pandalanguage$panda$Int16List$$IDX$panda$core$Int64$R$panda$core$Int16(org$pandalanguage$panda$Int16List* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp111 = (panda$core$Int64) {0};
int64_t $tmp112 = param1.value;
int64_t $tmp113 = $tmp111.value;
bool $tmp114 = $tmp112 >= $tmp113;
panda$core$Bit $tmp115 = (panda$core$Bit) {$tmp114};
bool $tmp116 = $tmp115.value;
if ($tmp116) goto block1; else goto block2;
block1:;
ITable* $tmp117 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp117->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp117 = $tmp117->next;
}
$fn119 $tmp118 = $tmp117->methods[0];
panda$core$Int64 $tmp120 = $tmp118(((panda$collections$CollectionView*) param0));
int64_t $tmp121 = param1.value;
int64_t $tmp122 = $tmp120.value;
bool $tmp123 = $tmp121 < $tmp122;
panda$core$Bit $tmp124 = (panda$core$Bit) {$tmp123};
*(&local0) = $tmp124;
goto block3;
block2:;
*(&local0) = $tmp115;
goto block3;
block3:;
panda$core$Bit $tmp125 = *(&local0);
bool $tmp126 = $tmp125.value;
if ($tmp126) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp127 = (panda$core$Int64) {55};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s128, $tmp127, &$s129);
abort(); // unreachable
block4:;
// line 56
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp130 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp131 = *$tmp130;
panda$core$Int16 $tmp132 = $tmp131.start;
panda$core$Int32 $tmp133 = panda$core$Int32$init$panda$core$Int16($tmp132);
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT* $tmp134 = &param0->range;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp135 = *$tmp134;
panda$core$Int16 $tmp136 = $tmp135.step;
panda$core$Int32 $tmp137 = panda$core$Int32$init$panda$core$Int16($tmp136);
panda$core$Int16 $tmp138 = panda$core$Int64$convert$R$panda$core$Int16(param1);
panda$core$Int32 $tmp139 = panda$core$Int32$init$panda$core$Int16($tmp138);
int32_t $tmp140 = $tmp137.value;
int32_t $tmp141 = $tmp139.value;
int32_t $tmp142 = $tmp140 * $tmp141;
panda$core$Int32 $tmp143 = (panda$core$Int32) {$tmp142};
int32_t $tmp144 = $tmp133.value;
int32_t $tmp145 = $tmp143.value;
int32_t $tmp146 = $tmp144 + $tmp145;
panda$core$Int32 $tmp147 = (panda$core$Int32) {$tmp146};
panda$core$Int16 $tmp148 = panda$core$Int32$convert$R$panda$core$Int16($tmp147);
return $tmp148;

}
panda$core$String* org$pandalanguage$panda$Int16List$convert$R$panda$core$String(org$pandalanguage$panda$Int16List* param0) {

// line 61
ITable* $tmp149 = ((panda$collections$CollectionView*) param0)->$class->itable;
while ($tmp149->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp149 = $tmp149->next;
}
$fn151 $tmp150 = $tmp149->methods[1];
panda$core$String* $tmp152 = $tmp150(((panda$collections$CollectionView*) param0));
panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s154, $tmp152);
panda$core$String* $tmp155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp153, &$s156);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp152));
// unreffing REF($3:panda.core.String)
return $tmp155;

}
void org$pandalanguage$panda$Int16List$cleanup(org$pandalanguage$panda$Int16List* param0) {

// line 8
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}

