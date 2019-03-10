#include "frost/collections/Iterator/RangeIterator.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim(frost$collections$Iterator$RangeIterator* p0) {
    frost$core$Object* result = frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(p0);

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[12]; } frost$collections$Iterator$RangeIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int, frost$collections$Iterator$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$Iterator$T$RP$GT, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$RangeIterator$class_type frost$collections$Iterator$RangeIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$RangeIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$RangeIterator$cleanup, frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim} };

typedef frost$core$Bit (*$fn38)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn46)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn83)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn102)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn160)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn174)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -7496503432914368729, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x65\x6e\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 238, -2269912078841639166, NULL };
static frost$core$String $s109 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s110 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, 972743335700786433, NULL };

void frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int(frost$collections$Iterator$RangeIterator* param0, frost$collections$Iterator* param1, frost$core$Int$nullable param2, frost$core$Int$nullable param3, frost$core$Bit param4, frost$core$Int param5) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:59
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
frost$core$Bit* $tmp3 = &param0->_done;
*$tmp3 = $tmp2;
frost$core$Int $tmp4 = (frost$core$Int) {0u};
int64_t $tmp5 = param5.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 > $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block2:;
frost$core$Int $tmp10 = (frost$core$Int) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, $tmp10, &$s12);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:63
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Iterator** $tmp13 = &param0->base;
frost$collections$Iterator* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$Iterator** $tmp15 = &param0->base;
*$tmp15 = param1;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:64
frost$core$Bit $tmp16 = (frost$core$Bit) {param2.nonnull};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:65
frost$core$Int $tmp18 = (frost$core$Int) {0u};
frost$core$Bit $tmp19 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp20 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp18, ((frost$core$Int) param2.value), $tmp19);
frost$core$Int $tmp21 = $tmp20.min;
*(&local0) = $tmp21;
frost$core$Int $tmp22 = $tmp20.max;
frost$core$Bit $tmp23 = $tmp20.inclusive;
bool $tmp24 = $tmp23.value;
frost$core$Int $tmp25 = (frost$core$Int) {1u};
if ($tmp24) goto block9; else goto block10;
block9:;
int64_t $tmp26 = $tmp21.value;
int64_t $tmp27 = $tmp22.value;
bool $tmp28 = $tmp26 <= $tmp27;
frost$core$Bit $tmp29 = (frost$core$Bit) {$tmp28};
bool $tmp30 = $tmp29.value;
if ($tmp30) goto block6; else goto block7;
block10:;
int64_t $tmp31 = $tmp21.value;
int64_t $tmp32 = $tmp22.value;
bool $tmp33 = $tmp31 < $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:66
ITable* $tmp36 = param1->$class->itable;
while ($tmp36->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp36 = $tmp36->next;
}
$fn38 $tmp37 = $tmp36->methods[0];
frost$core$Bit $tmp39 = $tmp37(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:66:24
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp40 = $tmp39.value;
bool $tmp41 = !$tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:67
ITable* $tmp44 = param1->$class->itable;
while ($tmp44->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp44 = $tmp44->next;
}
$fn46 $tmp45 = $tmp44->methods[1];
frost$core$Object* $tmp47 = $tmp45(param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp47);
goto block12;
block12:;
frost$core$Int $tmp48 = *(&local0);
int64_t $tmp49 = $tmp22.value;
int64_t $tmp50 = $tmp48.value;
int64_t $tmp51 = $tmp49 - $tmp50;
frost$core$Int $tmp52 = (frost$core$Int) {$tmp51};
if ($tmp24) goto block15; else goto block16;
block15:;
int64_t $tmp53 = $tmp52.value;
int64_t $tmp54 = $tmp25.value;
bool $tmp55 = $tmp53 >= $tmp54;
frost$core$Bit $tmp56 = (frost$core$Bit) {$tmp55};
bool $tmp57 = $tmp56.value;
if ($tmp57) goto block14; else goto block7;
block16:;
int64_t $tmp58 = $tmp52.value;
int64_t $tmp59 = $tmp25.value;
bool $tmp60 = $tmp58 > $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block14; else goto block7;
block14:;
int64_t $tmp63 = $tmp48.value;
int64_t $tmp64 = $tmp25.value;
int64_t $tmp65 = $tmp63 + $tmp64;
frost$core$Int $tmp66 = (frost$core$Int) {$tmp65};
*(&local0) = $tmp66;
goto block6;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:70
frost$core$Int* $tmp67 = &param0->current;
*$tmp67 = ((frost$core$Int) param2.value);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:73
frost$core$Int $tmp68 = (frost$core$Int) {0u};
frost$core$Int* $tmp69 = &param0->current;
*$tmp69 = $tmp68;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:75
frost$core$Bit $tmp70 = (frost$core$Bit) {param3.nonnull};
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:76
bool $tmp72 = param4.value;
if ($tmp72) goto block19; else goto block21;
block19:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:77
frost$core$Int $tmp73 = (frost$core$Int) {1u};
int64_t $tmp74 = ((frost$core$Int) param3.value).value;
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74 + $tmp75;
frost$core$Int $tmp77 = (frost$core$Int) {$tmp76};
frost$core$Int$nullable* $tmp78 = &param0->end;
*$tmp78 = ((frost$core$Int$nullable) { $tmp77, true });
goto block20;
block21:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:80
frost$core$Int$nullable* $tmp79 = &param0->end;
*$tmp79 = param3;
goto block20;
block20:;
goto block18;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:83
frost$core$Int* $tmp80 = &param0->step;
*$tmp80 = param5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:84
ITable* $tmp81 = param1->$class->itable;
while ($tmp81->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp81 = $tmp81->next;
}
$fn83 $tmp82 = $tmp81->methods[0];
frost$core$Bit $tmp84 = $tmp82(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:84:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp85 = $tmp84.value;
bool $tmp86 = !$tmp85;
frost$core$Bit $tmp87 = (frost$core$Bit) {$tmp86};
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block22; else goto block24;
block22:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:85
ITable* $tmp89 = param1->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[1];
frost$core$Object* $tmp92 = $tmp90(param1);
frost$core$Frost$ref$frost$core$Object$Q($tmp92);
frost$core$Object** $tmp93 = &param0->pending;
frost$core$Object* $tmp94 = *$tmp93;
frost$core$Frost$unref$frost$core$Object$Q($tmp94);
frost$core$Object** $tmp95 = &param0->pending;
*$tmp95 = $tmp92;
frost$core$Frost$unref$frost$core$Object$Q($tmp92);
goto block23;
block24:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:88
frost$core$Bit $tmp96 = (frost$core$Bit) {true};
frost$core$Bit* $tmp97 = &param0->_done;
*$tmp97 = $tmp96;
goto block23;
block23:;
return;

}
frost$core$Bit frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$RangeIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:94
frost$core$Bit* $tmp98 = &param0->_done;
frost$core$Bit $tmp99 = *$tmp98;
return $tmp99;

}
frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(frost$collections$Iterator$RangeIterator* param0) {

frost$core$Object* local0 = NULL;
frost$core$Int local1;
frost$core$Bit local2;
frost$core$Bit local3;
ITable* $tmp100 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp100->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp100 = $tmp100->next;
}
$fn102 $tmp101 = $tmp100->methods[0];
frost$core$Bit $tmp103 = $tmp101(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp104 = $tmp103.value;
bool $tmp105 = !$tmp104;
frost$core$Bit $tmp106 = (frost$core$Bit) {$tmp105};
bool $tmp107 = $tmp106.value;
if ($tmp107) goto block1; else goto block2;
block2:;
frost$core$Int $tmp108 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s109, $tmp108, &$s110);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:99
frost$core$Object** $tmp111 = &param0->pending;
frost$core$Object* $tmp112 = *$tmp111;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp112);
frost$core$Object* $tmp113 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp113);
*(&local0) = $tmp112;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:100
frost$core$Int $tmp114 = (frost$core$Int) {0u};
frost$core$Int* $tmp115 = &param0->step;
frost$core$Int $tmp116 = *$tmp115;
frost$core$Bit $tmp117 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp118 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp114, $tmp116, $tmp117);
frost$core$Int $tmp119 = $tmp118.min;
*(&local1) = $tmp119;
frost$core$Int $tmp120 = $tmp118.max;
frost$core$Bit $tmp121 = $tmp118.inclusive;
bool $tmp122 = $tmp121.value;
frost$core$Int $tmp123 = (frost$core$Int) {1u};
if ($tmp122) goto block7; else goto block8;
block7:;
int64_t $tmp124 = $tmp119.value;
int64_t $tmp125 = $tmp120.value;
bool $tmp126 = $tmp124 <= $tmp125;
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
bool $tmp128 = $tmp127.value;
if ($tmp128) goto block4; else goto block5;
block8:;
int64_t $tmp129 = $tmp119.value;
int64_t $tmp130 = $tmp120.value;
bool $tmp131 = $tmp129 < $tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
bool $tmp133 = $tmp132.value;
if ($tmp133) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:101
frost$core$Int* $tmp134 = &param0->current;
frost$core$Int $tmp135 = *$tmp134;
frost$core$Int $tmp136 = (frost$core$Int) {1u};
int64_t $tmp137 = $tmp135.value;
int64_t $tmp138 = $tmp136.value;
int64_t $tmp139 = $tmp137 + $tmp138;
frost$core$Int $tmp140 = (frost$core$Int) {$tmp139};
frost$core$Int* $tmp141 = &param0->current;
*$tmp141 = $tmp140;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:102
frost$core$Int$nullable* $tmp142 = &param0->end;
frost$core$Int$nullable $tmp143 = *$tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143.nonnull};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block9; else goto block10;
block9:;
frost$core$Int* $tmp146 = &param0->current;
frost$core$Int $tmp147 = *$tmp146;
frost$core$Int$nullable* $tmp148 = &param0->end;
frost$core$Int$nullable $tmp149 = *$tmp148;
int64_t $tmp150 = $tmp147.value;
int64_t $tmp151 = ((frost$core$Int) $tmp149.value).value;
bool $tmp152 = $tmp150 >= $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
*(&local3) = $tmp153;
goto block11;
block10:;
*(&local3) = $tmp144;
goto block11;
block11:;
frost$core$Bit $tmp154 = *(&local3);
bool $tmp155 = $tmp154.value;
if ($tmp155) goto block12; else goto block13;
block12:;
*(&local2) = $tmp154;
goto block14;
block13:;
frost$collections$Iterator** $tmp156 = &param0->base;
frost$collections$Iterator* $tmp157 = *$tmp156;
ITable* $tmp158 = $tmp157->$class->itable;
while ($tmp158->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp158 = $tmp158->next;
}
$fn160 $tmp159 = $tmp158->methods[0];
frost$core$Bit $tmp161 = $tmp159($tmp157);
*(&local2) = $tmp161;
goto block14;
block14:;
frost$core$Bit $tmp162 = *(&local2);
frost$core$Bit* $tmp163 = &param0->_done;
*$tmp163 = $tmp162;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:103
frost$core$Bit* $tmp164 = &param0->_done;
frost$core$Bit $tmp165 = *$tmp164;
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$core$Object** $tmp167 = &param0->pending;
frost$core$Object* $tmp168 = *$tmp167;
frost$core$Frost$unref$frost$core$Object$Q($tmp168);
frost$core$Object** $tmp169 = &param0->pending;
*$tmp169 = ((frost$core$Object*) NULL);
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:105
goto block5;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:107
frost$collections$Iterator** $tmp170 = &param0->base;
frost$collections$Iterator* $tmp171 = *$tmp170;
ITable* $tmp172 = $tmp171->$class->itable;
while ($tmp172->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp172 = $tmp172->next;
}
$fn174 $tmp173 = $tmp172->methods[1];
frost$core$Object* $tmp175 = $tmp173($tmp171);
frost$core$Frost$ref$frost$core$Object$Q($tmp175);
frost$core$Object** $tmp176 = &param0->pending;
frost$core$Object* $tmp177 = *$tmp176;
frost$core$Frost$unref$frost$core$Object$Q($tmp177);
frost$core$Object** $tmp178 = &param0->pending;
*$tmp178 = $tmp175;
frost$core$Frost$unref$frost$core$Object$Q($tmp175);
frost$core$Int $tmp179 = *(&local1);
int64_t $tmp180 = $tmp120.value;
int64_t $tmp181 = $tmp179.value;
int64_t $tmp182 = $tmp180 - $tmp181;
frost$core$Int $tmp183 = (frost$core$Int) {$tmp182};
if ($tmp122) goto block18; else goto block19;
block18:;
int64_t $tmp184 = $tmp183.value;
int64_t $tmp185 = $tmp123.value;
bool $tmp186 = $tmp184 >= $tmp185;
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186};
bool $tmp188 = $tmp187.value;
if ($tmp188) goto block17; else goto block5;
block19:;
int64_t $tmp189 = $tmp183.value;
int64_t $tmp190 = $tmp123.value;
bool $tmp191 = $tmp189 > $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block17; else goto block5;
block17:;
int64_t $tmp194 = $tmp179.value;
int64_t $tmp195 = $tmp123.value;
int64_t $tmp196 = $tmp194 + $tmp195;
frost$core$Int $tmp197 = (frost$core$Int) {$tmp196};
*(&local1) = $tmp197;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:109
frost$core$Object* $tmp198 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp198);
frost$core$Object* $tmp199 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp199);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp198;

}
void frost$collections$Iterator$RangeIterator$cleanup(frost$collections$Iterator$RangeIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/collections/Iterator.frost:48
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp200 = &param0->base;
frost$collections$Iterator* $tmp201 = *$tmp200;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp201));
frost$core$Object** $tmp202 = &param0->pending;
frost$core$Object* $tmp203 = *$tmp202;
frost$core$Frost$unref$frost$core$Object$Q($tmp203);
return;

}

