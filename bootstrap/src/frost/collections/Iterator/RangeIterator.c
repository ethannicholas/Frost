#include "frost/collections/Iterator/RangeIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim(frost$collections$Iterator$RangeIterator* p0) {
    frost$core$Object* result = frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$RangeIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$RangeIterator$class_type frost$collections$Iterator$RangeIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$RangeIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$RangeIterator$cleanup, frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim} };

typedef frost$core$Bit (*$fn39)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn45)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn83)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn89)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn100)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn157)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn171)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, 4805893956762861685, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x65\x6e\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 244, 6057077034919450164, NULL };
static frost$core$String $s105 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s106 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, 5742099429461798673, NULL };

void frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64(frost$collections$Iterator$RangeIterator* param0, frost$collections$Iterator* param1, frost$core$Int64$nullable param2, frost$core$Int64$nullable param3, frost$core$Bit param4, frost$core$Int64 param5) {

frost$core$Int64 local0;
// line 59
frost$core$Bit $tmp2 = frost$core$Bit$init$builtin_bit(false);
frost$core$Bit* $tmp3 = &param0->_done;
*$tmp3 = $tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0};
int64_t $tmp5 = param5.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 > $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {62};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block1:;
// line 63
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Iterator** $tmp13 = &param0->base;
frost$collections$Iterator* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$Iterator** $tmp15 = &param0->base;
*$tmp15 = param1;
// line 64
frost$core$Bit $tmp16 = frost$core$Bit$init$builtin_bit(param2.nonnull);
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block5;
block3:;
// line 65
frost$core$Int64 $tmp18 = (frost$core$Int64) {0};
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp20 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp18, ((frost$core$Int64) param2.value), $tmp19);
frost$core$Int64 $tmp21 = $tmp20.min;
*(&local0) = $tmp21;
frost$core$Int64 $tmp22 = $tmp20.max;
frost$core$Bit $tmp23 = $tmp20.inclusive;
bool $tmp24 = $tmp23.value;
frost$core$Int64 $tmp25 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp26 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp25);
if ($tmp24) goto block9; else goto block10;
block9:;
int64_t $tmp27 = $tmp21.value;
int64_t $tmp28 = $tmp22.value;
bool $tmp29 = $tmp27 <= $tmp28;
frost$core$Bit $tmp30 = (frost$core$Bit) {$tmp29};
bool $tmp31 = $tmp30.value;
if ($tmp31) goto block6; else goto block7;
block10:;
int64_t $tmp32 = $tmp21.value;
int64_t $tmp33 = $tmp22.value;
bool $tmp34 = $tmp32 < $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block6; else goto block7;
block6:;
// line 66
ITable* $tmp37 = param1->$class->itable;
while ($tmp37->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp37 = $tmp37->next;
}
$fn39 $tmp38 = $tmp37->methods[0];
frost$core$Bit $tmp40 = $tmp38(param1);
frost$core$Bit $tmp41 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block11; else goto block12;
block11:;
// line 67
ITable* $tmp43 = param1->$class->itable;
while ($tmp43->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp43 = $tmp43->next;
}
$fn45 $tmp44 = $tmp43->methods[1];
frost$core$Object* $tmp46 = $tmp44(param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp46);
goto block12;
block12:;
goto block8;
block8:;
frost$core$Int64 $tmp47 = *(&local0);
int64_t $tmp48 = $tmp22.value;
int64_t $tmp49 = $tmp47.value;
int64_t $tmp50 = $tmp48 - $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
frost$core$UInt64 $tmp52 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp51);
if ($tmp24) goto block14; else goto block15;
block14:;
uint64_t $tmp53 = $tmp52.value;
uint64_t $tmp54 = $tmp26.value;
bool $tmp55 = $tmp53 >= $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block13; else goto block7;
block15:;
uint64_t $tmp58 = $tmp52.value;
uint64_t $tmp59 = $tmp26.value;
bool $tmp60 = $tmp58 > $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block13; else goto block7;
block13:;
int64_t $tmp63 = $tmp47.value;
int64_t $tmp64 = $tmp25.value;
int64_t $tmp65 = $tmp63 + $tmp64;
frost$core$Int64 $tmp66 = (frost$core$Int64) {$tmp65};
*(&local0) = $tmp66;
goto block6;
block7:;
// line 70
frost$core$Int64* $tmp67 = &param0->current;
*$tmp67 = ((frost$core$Int64) param2.value);
goto block4;
block5:;
// line 1
// line 73
frost$core$Int64 $tmp68 = (frost$core$Int64) {0};
frost$core$Int64* $tmp69 = &param0->current;
*$tmp69 = $tmp68;
goto block4;
block4:;
// line 75
frost$core$Bit $tmp70 = frost$core$Bit$init$builtin_bit(param3.nonnull);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block16; else goto block17;
block16:;
// line 76
bool $tmp72 = param4.value;
if ($tmp72) goto block18; else goto block20;
block18:;
// line 77
frost$core$Int64 $tmp73 = (frost$core$Int64) {1};
int64_t $tmp74 = ((frost$core$Int64) param3.value).value;
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74 + $tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {$tmp76};
frost$core$Int64$nullable* $tmp78 = &param0->end;
*$tmp78 = ((frost$core$Int64$nullable) { $tmp77, true });
goto block19;
block20:;
// line 1
// line 80
frost$core$Int64$nullable* $tmp79 = &param0->end;
*$tmp79 = param3;
goto block19;
block19:;
goto block17;
block17:;
// line 83
frost$core$Int64* $tmp80 = &param0->step;
*$tmp80 = param5;
// line 84
ITable* $tmp81 = param1->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
frost$core$Bit $tmp84 = $tmp82(param1);
frost$core$Bit $tmp85 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block21; else goto block23;
block21:;
// line 85
ITable* $tmp87 = param1->$class->itable;
while ($tmp87->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp87 = $tmp87->next;
}
$fn89 $tmp88 = $tmp87->methods[1];
frost$core$Object* $tmp90 = $tmp88(param1);
frost$core$Frost$ref$frost$core$Object$Q($tmp90);
frost$core$Object** $tmp91 = &param0->pending;
frost$core$Object* $tmp92 = *$tmp91;
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
frost$core$Object** $tmp93 = &param0->pending;
*$tmp93 = $tmp90;
frost$core$Frost$unref$frost$core$Object$Q($tmp90);
goto block22;
block23:;
// line 1
// line 88
frost$core$Bit $tmp94 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp95 = &param0->_done;
*$tmp95 = $tmp94;
goto block22;
block22:;
return;

}
frost$core$Bit frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$RangeIterator* param0) {

// line 94
frost$core$Bit* $tmp96 = &param0->_done;
frost$core$Bit $tmp97 = *$tmp96;
return $tmp97;

}
frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(frost$collections$Iterator$RangeIterator* param0) {

frost$core$Object* local0 = NULL;
frost$core$Int64 local1;
frost$core$Bit local2;
frost$core$Bit local3;
ITable* $tmp98 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp98->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp98 = $tmp98->next;
}
$fn100 $tmp99 = $tmp98->methods[0];
frost$core$Bit $tmp101 = $tmp99(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp102 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp101);
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp104 = (frost$core$Int64) {98};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s105, $tmp104, &$s106);
abort(); // unreachable
block1:;
// line 99
frost$core$Object** $tmp107 = &param0->pending;
frost$core$Object* $tmp108 = *$tmp107;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp108);
frost$core$Object* $tmp109 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp109);
*(&local0) = $tmp108;
// line 100
frost$core$Int64 $tmp110 = (frost$core$Int64) {0};
frost$core$Int64* $tmp111 = &param0->step;
frost$core$Int64 $tmp112 = *$tmp111;
frost$core$Bit $tmp113 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp114 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp110, $tmp112, $tmp113);
frost$core$Int64 $tmp115 = $tmp114.min;
*(&local1) = $tmp115;
frost$core$Int64 $tmp116 = $tmp114.max;
frost$core$Bit $tmp117 = $tmp114.inclusive;
bool $tmp118 = $tmp117.value;
frost$core$Int64 $tmp119 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp120 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp119);
if ($tmp118) goto block6; else goto block7;
block6:;
int64_t $tmp121 = $tmp115.value;
int64_t $tmp122 = $tmp116.value;
bool $tmp123 = $tmp121 <= $tmp122;
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
bool $tmp125 = $tmp124.value;
if ($tmp125) goto block3; else goto block4;
block7:;
int64_t $tmp126 = $tmp115.value;
int64_t $tmp127 = $tmp116.value;
bool $tmp128 = $tmp126 < $tmp127;
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block3; else goto block4;
block3:;
// line 101
frost$core$Int64* $tmp131 = &param0->current;
frost$core$Int64 $tmp132 = *$tmp131;
frost$core$Int64 $tmp133 = (frost$core$Int64) {1};
int64_t $tmp134 = $tmp132.value;
int64_t $tmp135 = $tmp133.value;
int64_t $tmp136 = $tmp134 + $tmp135;
frost$core$Int64 $tmp137 = (frost$core$Int64) {$tmp136};
frost$core$Int64* $tmp138 = &param0->current;
*$tmp138 = $tmp137;
// line 102
frost$core$Int64$nullable* $tmp139 = &param0->end;
frost$core$Int64$nullable $tmp140 = *$tmp139;
frost$core$Bit $tmp141 = frost$core$Bit$init$builtin_bit($tmp140.nonnull);
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp143 = &param0->current;
frost$core$Int64 $tmp144 = *$tmp143;
frost$core$Int64$nullable* $tmp145 = &param0->end;
frost$core$Int64$nullable $tmp146 = *$tmp145;
int64_t $tmp147 = $tmp144.value;
int64_t $tmp148 = ((frost$core$Int64) $tmp146.value).value;
bool $tmp149 = $tmp147 >= $tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149};
*(&local3) = $tmp150;
goto block10;
block9:;
*(&local3) = $tmp141;
goto block10;
block10:;
frost$core$Bit $tmp151 = *(&local3);
bool $tmp152 = $tmp151.value;
if ($tmp152) goto block11; else goto block12;
block11:;
*(&local2) = $tmp151;
goto block13;
block12:;
frost$collections$Iterator** $tmp153 = &param0->base;
frost$collections$Iterator* $tmp154 = *$tmp153;
ITable* $tmp155 = $tmp154->$class->itable;
while ($tmp155->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp155 = $tmp155->next;
}
$fn157 $tmp156 = $tmp155->methods[0];
frost$core$Bit $tmp158 = $tmp156($tmp154);
*(&local2) = $tmp158;
goto block13;
block13:;
frost$core$Bit $tmp159 = *(&local2);
frost$core$Bit* $tmp160 = &param0->_done;
*$tmp160 = $tmp159;
// line 103
frost$core$Bit* $tmp161 = &param0->_done;
frost$core$Bit $tmp162 = *$tmp161;
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block14; else goto block15;
block14:;
// line 104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$core$Object** $tmp164 = &param0->pending;
frost$core$Object* $tmp165 = *$tmp164;
frost$core$Frost$unref$frost$core$Object$Q($tmp165);
frost$core$Object** $tmp166 = &param0->pending;
*$tmp166 = ((frost$core$Object*) NULL);
// line 105
goto block4;
block15:;
// line 107
frost$collections$Iterator** $tmp167 = &param0->base;
frost$collections$Iterator* $tmp168 = *$tmp167;
ITable* $tmp169 = $tmp168->$class->itable;
while ($tmp169->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp169 = $tmp169->next;
}
$fn171 $tmp170 = $tmp169->methods[1];
frost$core$Object* $tmp172 = $tmp170($tmp168);
frost$core$Frost$ref$frost$core$Object$Q($tmp172);
frost$core$Object** $tmp173 = &param0->pending;
frost$core$Object* $tmp174 = *$tmp173;
frost$core$Frost$unref$frost$core$Object$Q($tmp174);
frost$core$Object** $tmp175 = &param0->pending;
*$tmp175 = $tmp172;
frost$core$Frost$unref$frost$core$Object$Q($tmp172);
goto block5;
block5:;
frost$core$Int64 $tmp176 = *(&local1);
int64_t $tmp177 = $tmp116.value;
int64_t $tmp178 = $tmp176.value;
int64_t $tmp179 = $tmp177 - $tmp178;
frost$core$Int64 $tmp180 = (frost$core$Int64) {$tmp179};
frost$core$UInt64 $tmp181 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp180);
if ($tmp118) goto block17; else goto block18;
block17:;
uint64_t $tmp182 = $tmp181.value;
uint64_t $tmp183 = $tmp120.value;
bool $tmp184 = $tmp182 >= $tmp183;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block16; else goto block4;
block18:;
uint64_t $tmp187 = $tmp181.value;
uint64_t $tmp188 = $tmp120.value;
bool $tmp189 = $tmp187 > $tmp188;
frost$core$Bit $tmp190 = (frost$core$Bit) {$tmp189};
bool $tmp191 = $tmp190.value;
if ($tmp191) goto block16; else goto block4;
block16:;
int64_t $tmp192 = $tmp176.value;
int64_t $tmp193 = $tmp119.value;
int64_t $tmp194 = $tmp192 + $tmp193;
frost$core$Int64 $tmp195 = (frost$core$Int64) {$tmp194};
*(&local1) = $tmp195;
goto block3;
block4:;
// line 109
frost$core$Object* $tmp196 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp196);
frost$core$Object* $tmp197 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp197);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp196;

}
void frost$collections$Iterator$RangeIterator$cleanup(frost$collections$Iterator$RangeIterator* param0) {

// line 48
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp198 = &param0->base;
frost$collections$Iterator* $tmp199 = *$tmp198;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp199));
frost$core$Object** $tmp200 = &param0->pending;
frost$core$Object* $tmp201 = *$tmp200;
frost$core$Frost$unref$frost$core$Object$Q($tmp201);
return;

}

