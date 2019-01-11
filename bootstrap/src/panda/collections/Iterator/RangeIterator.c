#include "panda/collections/Iterator/RangeIterator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"

__attribute__((weak)) panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim(panda$collections$Iterator$RangeIterator* p0) {
    panda$core$Object* result = panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(p0);

    return result;
}

struct { panda$core$Class* cl; ITable* next; void* methods[11]; } panda$collections$Iterator$RangeIterator$_panda$collections$Iterator = { (panda$core$Class*) &panda$collections$Iterator$class, NULL, { panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim, panda$collections$Iterator$count$R$panda$core$Int64, panda$collections$Iterator$filter$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$Iterator$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$all$R$panda$collections$Array$LTpanda$collections$Iterator$T$GT, panda$collections$Iterator$apply$$LPpanda$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$R$panda$collections$Iterator$T, panda$collections$Iterator$fold$$LPpanda$collections$Iterator$T$Cpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$T$RP$panda$collections$Iterator$T$R$panda$collections$Iterator$T, panda$collections$Iterator$map$$LPpanda$collections$Iterator$T$RP$EQ$GT$LPpanda$collections$Iterator$map$U$RP$R$panda$collections$Iterator$LTpanda$collections$Iterator$map$U$GT} };

static panda$core$String $s1;
panda$collections$Iterator$RangeIterator$class_type panda$collections$Iterator$RangeIterator$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &panda$collections$Iterator$RangeIterator$_panda$collections$Iterator, { panda$core$Object$convert$R$panda$core$String, panda$collections$Iterator$RangeIterator$cleanup, panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit, panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T$shim} };

typedef panda$core$Bit (*$fn39)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn45)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn83)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn89)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn100)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn157)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn171)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -1619811014610548797, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x65\x6e\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 244, 801978631014599286, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x70\x61\x6e\x64\x61", 14, -6782353983774632655, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, -8688701766598055219, NULL };

void panda$collections$Iterator$RangeIterator$init$panda$collections$Iterator$LTpanda$collections$Iterator$RangeIterator$T$GT$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit$panda$core$Int64(panda$collections$Iterator$RangeIterator* param0, panda$collections$Iterator* param1, panda$core$Int64$nullable param2, panda$core$Int64$nullable param3, panda$core$Bit param4, panda$core$Int64 param5) {

panda$core$Int64 local0;
// line 59
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(false);
panda$core$Bit* $tmp3 = &param0->_done;
*$tmp3 = $tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
int64_t $tmp5 = param5.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 > $tmp6;
panda$core$Bit $tmp8 = (panda$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp10 = (panda$core$Int64) {62};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block1:;
// line 63
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
panda$collections$Iterator** $tmp13 = &param0->base;
panda$collections$Iterator* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$collections$Iterator** $tmp15 = &param0->base;
*$tmp15 = param1;
// line 64
panda$core$Bit $tmp16 = panda$core$Bit$init$builtin_bit(param2.nonnull);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block5;
block3:;
// line 65
panda$core$Int64 $tmp18 = (panda$core$Int64) {0};
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp20 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp18, ((panda$core$Int64) param2.value), $tmp19);
panda$core$Int64 $tmp21 = $tmp20.min;
*(&local0) = $tmp21;
panda$core$Int64 $tmp22 = $tmp20.max;
panda$core$Bit $tmp23 = $tmp20.inclusive;
bool $tmp24 = $tmp23.value;
panda$core$Int64 $tmp25 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp26 = panda$core$Int64$convert$R$panda$core$UInt64($tmp25);
if ($tmp24) goto block9; else goto block10;
block9:;
int64_t $tmp27 = $tmp21.value;
int64_t $tmp28 = $tmp22.value;
bool $tmp29 = $tmp27 <= $tmp28;
panda$core$Bit $tmp30 = (panda$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block6; else goto block7;
block10:;
int64_t $tmp32 = $tmp21.value;
int64_t $tmp33 = $tmp22.value;
bool $tmp34 = $tmp32 < $tmp33;
panda$core$Bit $tmp35 = (panda$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block6; else goto block7;
block6:;
// line 66
ITable* $tmp37 = param1->$class->itable;
while ($tmp37->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[0];
panda$core$Bit $tmp40 = $tmp38(param1);
panda$core$Bit $tmp41 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block11; else goto block12;
block11:;
// line 67
ITable* $tmp43 = param1->$class->itable;
while ($tmp43->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[1];
panda$core$Object* $tmp46 = $tmp44(param1);
panda$core$Panda$unref$panda$core$Object$Q($tmp46);
// unreffing REF($65:panda.collections.Iterator.T)
goto block12;
block12:;
goto block8;
block8:;
panda$core$Int64 $tmp47 = *(&local0);
int64_t $tmp48 = $tmp22.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 - $tmp49;
panda$core$Int64 $tmp51 = (panda$core$Int64) {$tmp50};
panda$core$UInt64 $tmp52 = panda$core$Int64$convert$R$panda$core$UInt64($tmp51);
if ($tmp24) goto block14; else goto block15;
block14:;
uint64_t $tmp53 = $tmp52.value;
uint64_t $tmp54 = $tmp26.value;
bool $tmp55 = $tmp53 >= $tmp54;
panda$core$Bit $tmp56 = (panda$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block13; else goto block7;
block15:;
uint64_t $tmp58 = $tmp52.value;
uint64_t $tmp59 = $tmp26.value;
bool $tmp60 = $tmp58 > $tmp59;
panda$core$Bit $tmp61 = (panda$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block13; else goto block7;
block13:;
int64_t $tmp63 = $tmp47.value;
int64_t $tmp64 = $tmp25.value;
int64_t $tmp65 = $tmp63 + $tmp64;
panda$core$Int64 $tmp66 = (panda$core$Int64) {$tmp65};
*(&local0) = $tmp66;
goto block6;
block7:;
// line 70
panda$core$Int64* $tmp67 = &param0->current;
*$tmp67 = ((panda$core$Int64) param2.value);
goto block4;
block5:;
// line 1
// line 73
panda$core$Int64 $tmp68 = (panda$core$Int64) {0};
panda$core$Int64* $tmp69 = &param0->current;
*$tmp69 = $tmp68;
goto block4;
block4:;
// line 75
panda$core$Bit $tmp70 = panda$core$Bit$init$builtin_bit(param3.nonnull);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block16; else goto block17;
block16:;
// line 76
bool $tmp72 = param4.value;
if ($tmp72) goto block18; else goto block20;
block18:;
// line 77
panda$core$Int64 $tmp73 = (panda$core$Int64) {1};
int64_t $tmp74 = ((panda$core$Int64) param3.value).value;
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74 + $tmp75;
panda$core$Int64 $tmp77 = (panda$core$Int64) {$tmp76};
panda$core$Int64$nullable* $tmp78 = &param0->end;
*$tmp78 = ((panda$core$Int64$nullable) { $tmp77, true });
goto block19;
block20:;
// line 1
// line 80
panda$core$Int64$nullable* $tmp79 = &param0->end;
*$tmp79 = param3;
goto block19;
block19:;
goto block17;
block17:;
// line 83
panda$core$Int64* $tmp80 = &param0->step;
*$tmp80 = param5;
// line 84
ITable* $tmp81 = param1->$class->itable;
while ($tmp81->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
panda$core$Bit $tmp84 = $tmp82(param1);
panda$core$Bit $tmp85 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block21; else goto block23;
block21:;
// line 85
ITable* $tmp87 = param1->$class->itable;
while ($tmp87->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[1];
panda$core$Object* $tmp90 = $tmp88(param1);
panda$core$Panda$ref$panda$core$Object$Q($tmp90);
panda$core$Object** $tmp91 = &param0->pending;
panda$core$Object* $tmp92 = *$tmp91;
panda$core$Panda$unref$panda$core$Object$Q($tmp92);
panda$core$Object** $tmp93 = &param0->pending;
*$tmp93 = $tmp90;
panda$core$Panda$unref$panda$core$Object$Q($tmp90);
// unreffing REF($152:panda.collections.Iterator.T)
goto block22;
block23:;
// line 1
// line 88
panda$core$Bit $tmp94 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp95 = &param0->_done;
*$tmp95 = $tmp94;
goto block22;
block22:;
return;

}
panda$core$Bit panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$RangeIterator* param0) {

// line 94
panda$core$Bit* $tmp96 = &param0->_done;
panda$core$Bit $tmp97 = *$tmp96;
return $tmp97;

}
panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(panda$collections$Iterator$RangeIterator* param0) {

panda$core$Object* local0 = NULL;
panda$core$Int64 local1;
panda$core$Bit local2;
panda$core$Bit local3;
ITable* $tmp98 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp98->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
panda$core$Bit $tmp101 = $tmp99(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp102 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp101);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp104 = (panda$core$Int64) {98};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s105, $tmp104, &$s106);
abort(); // unreachable
block1:;
// line 99
panda$core$Object** $tmp107 = &param0->pending;
panda$core$Object* $tmp108 = *$tmp107;
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp108);
panda$core$Object* $tmp109 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp109);
*(&local0) = $tmp108;
// line 100
panda$core$Int64 $tmp110 = (panda$core$Int64) {0};
panda$core$Int64* $tmp111 = &param0->step;
panda$core$Int64 $tmp112 = *$tmp111;
panda$core$Bit $tmp113 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp114 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp110, $tmp112, $tmp113);
panda$core$Int64 $tmp115 = $tmp114.min;
*(&local1) = $tmp115;
panda$core$Int64 $tmp116 = $tmp114.max;
panda$core$Bit $tmp117 = $tmp114.inclusive;
bool $tmp118 = $tmp117.value;
panda$core$Int64 $tmp119 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp120 = panda$core$Int64$convert$R$panda$core$UInt64($tmp119);
if ($tmp118) goto block6; else goto block7;
block6:;
int64_t $tmp121 = $tmp115.value;
int64_t $tmp122 = $tmp116.value;
bool $tmp123 = $tmp121 <= $tmp122;
panda$core$Bit $tmp124 = (panda$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block3; else goto block4;
block7:;
int64_t $tmp126 = $tmp115.value;
int64_t $tmp127 = $tmp116.value;
bool $tmp128 = $tmp126 < $tmp127;
panda$core$Bit $tmp129 = (panda$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block3; else goto block4;
block3:;
// line 101
panda$core$Int64* $tmp131 = &param0->current;
panda$core$Int64 $tmp132 = *$tmp131;
panda$core$Int64 $tmp133 = (panda$core$Int64) {1};
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133.value;
int64_t $tmp136 = $tmp134 + $tmp135;
panda$core$Int64 $tmp137 = (panda$core$Int64) {$tmp136};
panda$core$Int64* $tmp138 = &param0->current;
*$tmp138 = $tmp137;
// line 102
panda$core$Int64$nullable* $tmp139 = &param0->end;
panda$core$Int64$nullable $tmp140 = *$tmp139;
panda$core$Bit $tmp141 = panda$core$Bit$init$builtin_bit($tmp140.nonnull);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block8; else goto block9;
block8:;
panda$core$Int64* $tmp143 = &param0->current;
panda$core$Int64 $tmp144 = *$tmp143;
panda$core$Int64$nullable* $tmp145 = &param0->end;
panda$core$Int64$nullable $tmp146 = *$tmp145;
int64_t $tmp147 = $tmp144.value;
int64_t $tmp148 = ((panda$core$Int64) $tmp146.value).value;
bool $tmp149 = $tmp147 >= $tmp148;
panda$core$Bit $tmp150 = (panda$core$Bit) {$tmp149};
*(&local3) = $tmp150;
goto block10;
block9:;
*(&local3) = $tmp141;
goto block10;
block10:;
panda$core$Bit $tmp151 = *(&local3);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block11; else goto block12;
block11:;
*(&local2) = $tmp151;
goto block13;
block12:;
panda$collections$Iterator** $tmp153 = &param0->base;
panda$collections$Iterator* $tmp154 = *$tmp153;
ITable* $tmp155 = $tmp154->$class->itable;
while ($tmp155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
panda$core$Bit $tmp158 = $tmp156($tmp154);
*(&local2) = $tmp158;
goto block13;
block13:;
panda$core$Bit $tmp159 = *(&local2);
panda$core$Bit* $tmp160 = &param0->_done;
*$tmp160 = $tmp159;
// line 103
panda$core$Bit* $tmp161 = &param0->_done;
panda$core$Bit $tmp162 = *$tmp161;
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block14; else goto block15;
block14:;
// line 104
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) NULL));
panda$core$Object** $tmp164 = &param0->pending;
panda$core$Object* $tmp165 = *$tmp164;
panda$core$Panda$unref$panda$core$Object$Q($tmp165);
panda$core$Object** $tmp166 = &param0->pending;
*$tmp166 = ((panda$core$Object*) NULL);
// line 105
goto block4;
block15:;
// line 107
panda$collections$Iterator** $tmp167 = &param0->base;
panda$collections$Iterator* $tmp168 = *$tmp167;
ITable* $tmp169 = $tmp168->$class->itable;
while ($tmp169->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[1];
panda$core$Object* $tmp172 = $tmp170($tmp168);
panda$core$Panda$ref$panda$core$Object$Q($tmp172);
panda$core$Object** $tmp173 = &param0->pending;
panda$core$Object* $tmp174 = *$tmp173;
panda$core$Panda$unref$panda$core$Object$Q($tmp174);
panda$core$Object** $tmp175 = &param0->pending;
*$tmp175 = $tmp172;
panda$core$Panda$unref$panda$core$Object$Q($tmp172);
// unreffing REF($123:panda.collections.Iterator.T)
goto block5;
block5:;
panda$core$Int64 $tmp176 = *(&local1);
int64_t $tmp177 = $tmp116.value;
int64_t $tmp178 = $tmp176.value;
int64_t $tmp179 = $tmp177 - $tmp178;
panda$core$Int64 $tmp180 = (panda$core$Int64) {$tmp179};
panda$core$UInt64 $tmp181 = panda$core$Int64$convert$R$panda$core$UInt64($tmp180);
if ($tmp118) goto block17; else goto block18;
block17:;
uint64_t $tmp182 = $tmp181.value;
uint64_t $tmp183 = $tmp120.value;
bool $tmp184 = $tmp182 >= $tmp183;
panda$core$Bit $tmp185 = (panda$core$Bit) {$tmp184};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block16; else goto block4;
block18:;
uint64_t $tmp187 = $tmp181.value;
uint64_t $tmp188 = $tmp120.value;
bool $tmp189 = $tmp187 > $tmp188;
panda$core$Bit $tmp190 = (panda$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block16; else goto block4;
block16:;
int64_t $tmp192 = $tmp176.value;
int64_t $tmp193 = $tmp119.value;
int64_t $tmp194 = $tmp192 + $tmp193;
panda$core$Int64 $tmp195 = (panda$core$Int64) {$tmp194};
*(&local1) = $tmp195;
goto block3;
block4:;
// line 109
panda$core$Object* $tmp196 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp196);
panda$core$Object* $tmp197 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp197);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp196;

}
void panda$collections$Iterator$RangeIterator$cleanup(panda$collections$Iterator$RangeIterator* param0) {

// line 48
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$Iterator** $tmp198 = &param0->base;
panda$collections$Iterator* $tmp199 = *$tmp198;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp199));
panda$core$Object** $tmp200 = &param0->pending;
panda$core$Object* $tmp201 = *$tmp200;
panda$core$Panda$unref$panda$core$Object$Q($tmp201);
return;

}

