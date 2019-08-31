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

typedef frost$core$Bit (*$fn43)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn51)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn98)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn106)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn117)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn180)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn194)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -7496503432914368729, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x65\x6e\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29", 238, -2269912078841639166, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s124 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s125 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, 972743335700786433, NULL };
static frost$core$String $s168 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s169 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };

void frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit$frost$core$Int(frost$collections$Iterator$RangeIterator* param0, frost$collections$Iterator* param1, frost$core$Int$nullable param2, frost$core$Int$nullable param3, frost$core$Bit param4, frost$core$Int param5) {

frost$core$Int local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:59
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:63
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Iterator** $tmp13 = &param0->base;
frost$collections$Iterator* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$collections$Iterator** $tmp15 = &param0->base;
*$tmp15 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:64
frost$core$Bit $tmp16 = (frost$core$Bit) {param2.nonnull};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:65
frost$core$Int $tmp18 = (frost$core$Int) {0u};
frost$core$Bit $tmp19 = (frost$core$Bit) {param2.nonnull};
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block7;
block7:;
frost$core$Int $tmp21 = (frost$core$Int) {65u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block6:;
frost$core$Bit $tmp24 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp25 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp18, ((frost$core$Int) param2.value), $tmp24);
frost$core$Int $tmp26 = $tmp25.min;
*(&local0) = $tmp26;
frost$core$Int $tmp27 = $tmp25.max;
frost$core$Bit $tmp28 = $tmp25.inclusive;
bool $tmp29 = $tmp28.value;
frost$core$Int $tmp30 = (frost$core$Int) {1u};
if ($tmp29) goto block11; else goto block12;
block11:;
int64_t $tmp31 = $tmp26.value;
int64_t $tmp32 = $tmp27.value;
bool $tmp33 = $tmp31 <= $tmp32;
frost$core$Bit $tmp34 = (frost$core$Bit) {$tmp33};
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block8; else goto block9;
block12:;
int64_t $tmp36 = $tmp26.value;
int64_t $tmp37 = $tmp27.value;
bool $tmp38 = $tmp36 < $tmp37;
frost$core$Bit $tmp39 = (frost$core$Bit) {$tmp38};
bool $tmp40 = $tmp39.value;
if ($tmp40) goto block8; else goto block9;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:66
ITable* $tmp41 = param1->$class->itable;
while ($tmp41->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp41 = $tmp41->next;
}
$fn43 $tmp42 = $tmp41->methods[0];
frost$core$Bit $tmp44 = $tmp42(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:66:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp45 = $tmp44.value;
bool $tmp46 = !$tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:67
ITable* $tmp49 = param1->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[1];
frost$core$Object* $tmp52 = $tmp50(param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp52);
goto block14;
block14:;
frost$core$Int $tmp53 = *(&local0);
int64_t $tmp54 = $tmp27.value;
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54 - $tmp55;
frost$core$Int $tmp57 = (frost$core$Int) {$tmp56};
if ($tmp29) goto block17; else goto block18;
block17:;
int64_t $tmp58 = $tmp57.value;
int64_t $tmp59 = $tmp30.value;
bool $tmp60 = $tmp58 >= $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block16; else goto block9;
block18:;
int64_t $tmp63 = $tmp57.value;
int64_t $tmp64 = $tmp30.value;
bool $tmp65 = $tmp63 > $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block16; else goto block9;
block16:;
int64_t $tmp68 = $tmp53.value;
int64_t $tmp69 = $tmp30.value;
int64_t $tmp70 = $tmp68 + $tmp69;
frost$core$Int $tmp71 = (frost$core$Int) {$tmp70};
*(&local0) = $tmp71;
goto block8;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:70
frost$core$Bit $tmp72 = (frost$core$Bit) {param2.nonnull};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block19; else goto block20;
block20:;
frost$core$Int $tmp74 = (frost$core$Int) {70u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s75, $tmp74, &$s76);
abort(); // unreachable
block19:;
frost$core$Int* $tmp77 = &param0->current;
*$tmp77 = ((frost$core$Int) param2.value);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:73
frost$core$Int $tmp78 = (frost$core$Int) {0u};
frost$core$Int* $tmp79 = &param0->current;
*$tmp79 = $tmp78;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:75
frost$core$Bit $tmp80 = (frost$core$Bit) {param3.nonnull};
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:76
bool $tmp82 = param4.value;
if ($tmp82) goto block23; else goto block25;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:77
frost$core$Bit $tmp83 = (frost$core$Bit) {param3.nonnull};
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block26; else goto block27;
block27:;
frost$core$Int $tmp85 = (frost$core$Int) {77u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s86, $tmp85, &$s87);
abort(); // unreachable
block26:;
frost$core$Int $tmp88 = (frost$core$Int) {1u};
int64_t $tmp89 = ((frost$core$Int) param3.value).value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 + $tmp90;
frost$core$Int $tmp92 = (frost$core$Int) {$tmp91};
frost$core$Int$nullable* $tmp93 = &param0->end;
*$tmp93 = ((frost$core$Int$nullable) { $tmp92, true });
goto block24;
block25:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:80
frost$core$Int$nullable* $tmp94 = &param0->end;
*$tmp94 = param3;
goto block24;
block24:;
goto block22;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:83
frost$core$Int* $tmp95 = &param0->step;
*$tmp95 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:84
ITable* $tmp96 = param1->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$core$Bit $tmp99 = $tmp97(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:84:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp100 = $tmp99.value;
bool $tmp101 = !$tmp100;
frost$core$Bit $tmp102 = (frost$core$Bit) {$tmp101};
bool $tmp103 = $tmp102.value;
if ($tmp103) goto block28; else goto block30;
block28:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:85
ITable* $tmp104 = param1->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[1];
frost$core$Object* $tmp107 = $tmp105(param1);
frost$core$Frost$ref$frost$core$Object$Q($tmp107);
frost$core$Object** $tmp108 = &param0->pending;
frost$core$Object* $tmp109 = *$tmp108;
frost$core$Frost$unref$frost$core$Object$Q($tmp109);
frost$core$Object** $tmp110 = &param0->pending;
*$tmp110 = $tmp107;
frost$core$Frost$unref$frost$core$Object$Q($tmp107);
goto block29;
block30:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:88
frost$core$Bit $tmp111 = (frost$core$Bit) {true};
frost$core$Bit* $tmp112 = &param0->_done;
*$tmp112 = $tmp111;
goto block29;
block29:;
return;

}
frost$core$Bit frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$RangeIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:94
frost$core$Bit* $tmp113 = &param0->_done;
frost$core$Bit $tmp114 = *$tmp113;
return $tmp114;

}
frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(frost$collections$Iterator$RangeIterator* param0) {

frost$core$Object* local0 = NULL;
frost$core$Int local1;
frost$core$Bit local2;
frost$core$Bit local3;
ITable* $tmp115 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp115->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp115 = $tmp115->next;
}
$fn117 $tmp116 = $tmp115->methods[0];
frost$core$Bit $tmp118 = $tmp116(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
bool $tmp119 = $tmp118.value;
bool $tmp120 = !$tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block1; else goto block2;
block2:;
frost$core$Int $tmp123 = (frost$core$Int) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s124, $tmp123, &$s125);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:99
frost$core$Object** $tmp126 = &param0->pending;
frost$core$Object* $tmp127 = *$tmp126;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp127);
frost$core$Object* $tmp128 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp128);
*(&local0) = $tmp127;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:100
frost$core$Int $tmp129 = (frost$core$Int) {0u};
frost$core$Int* $tmp130 = &param0->step;
frost$core$Int $tmp131 = *$tmp130;
frost$core$Bit $tmp132 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp133 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp129, $tmp131, $tmp132);
frost$core$Int $tmp134 = $tmp133.min;
*(&local1) = $tmp134;
frost$core$Int $tmp135 = $tmp133.max;
frost$core$Bit $tmp136 = $tmp133.inclusive;
bool $tmp137 = $tmp136.value;
frost$core$Int $tmp138 = (frost$core$Int) {1u};
if ($tmp137) goto block7; else goto block8;
block7:;
int64_t $tmp139 = $tmp134.value;
int64_t $tmp140 = $tmp135.value;
bool $tmp141 = $tmp139 <= $tmp140;
frost$core$Bit $tmp142 = (frost$core$Bit) {$tmp141};
bool $tmp143 = $tmp142.value;
if ($tmp143) goto block4; else goto block5;
block8:;
int64_t $tmp144 = $tmp134.value;
int64_t $tmp145 = $tmp135.value;
bool $tmp146 = $tmp144 < $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:101
frost$core$Int* $tmp149 = &param0->current;
frost$core$Int $tmp150 = *$tmp149;
frost$core$Int $tmp151 = (frost$core$Int) {1u};
int64_t $tmp152 = $tmp150.value;
int64_t $tmp153 = $tmp151.value;
int64_t $tmp154 = $tmp152 + $tmp153;
frost$core$Int $tmp155 = (frost$core$Int) {$tmp154};
frost$core$Int* $tmp156 = &param0->current;
*$tmp156 = $tmp155;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:102
frost$core$Int$nullable* $tmp157 = &param0->end;
frost$core$Int$nullable $tmp158 = *$tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158.nonnull};
bool $tmp160 = $tmp159.value;
if ($tmp160) goto block9; else goto block10;
block9:;
frost$core$Int* $tmp161 = &param0->current;
frost$core$Int $tmp162 = *$tmp161;
frost$core$Int$nullable* $tmp163 = &param0->end;
frost$core$Int$nullable $tmp164 = *$tmp163;
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164.nonnull};
bool $tmp166 = $tmp165.value;
if ($tmp166) goto block12; else goto block13;
block13:;
frost$core$Int $tmp167 = (frost$core$Int) {102u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s168, $tmp167, &$s169);
abort(); // unreachable
block12:;
int64_t $tmp170 = $tmp162.value;
int64_t $tmp171 = ((frost$core$Int) $tmp164.value).value;
bool $tmp172 = $tmp170 >= $tmp171;
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
*(&local3) = $tmp173;
goto block11;
block10:;
*(&local3) = $tmp159;
goto block11;
block11:;
frost$core$Bit $tmp174 = *(&local3);
bool $tmp175 = $tmp174.value;
if ($tmp175) goto block14; else goto block15;
block14:;
*(&local2) = $tmp174;
goto block16;
block15:;
frost$collections$Iterator** $tmp176 = &param0->base;
frost$collections$Iterator* $tmp177 = *$tmp176;
ITable* $tmp178 = $tmp177->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[0];
frost$core$Bit $tmp181 = $tmp179($tmp177);
*(&local2) = $tmp181;
goto block16;
block16:;
frost$core$Bit $tmp182 = *(&local2);
frost$core$Bit* $tmp183 = &param0->_done;
*$tmp183 = $tmp182;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:103
frost$core$Bit* $tmp184 = &param0->_done;
frost$core$Bit $tmp185 = *$tmp184;
bool $tmp186 = $tmp185.value;
if ($tmp186) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$core$Object** $tmp187 = &param0->pending;
frost$core$Object* $tmp188 = *$tmp187;
frost$core$Frost$unref$frost$core$Object$Q($tmp188);
frost$core$Object** $tmp189 = &param0->pending;
*$tmp189 = ((frost$core$Object*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:105
goto block5;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:107
frost$collections$Iterator** $tmp190 = &param0->base;
frost$collections$Iterator* $tmp191 = *$tmp190;
ITable* $tmp192 = $tmp191->$class->itable;
while ($tmp192->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp192 = $tmp192->next;
}
$fn194 $tmp193 = $tmp192->methods[1];
frost$core$Object* $tmp195 = $tmp193($tmp191);
frost$core$Frost$ref$frost$core$Object$Q($tmp195);
frost$core$Object** $tmp196 = &param0->pending;
frost$core$Object* $tmp197 = *$tmp196;
frost$core$Frost$unref$frost$core$Object$Q($tmp197);
frost$core$Object** $tmp198 = &param0->pending;
*$tmp198 = $tmp195;
frost$core$Frost$unref$frost$core$Object$Q($tmp195);
frost$core$Int $tmp199 = *(&local1);
int64_t $tmp200 = $tmp135.value;
int64_t $tmp201 = $tmp199.value;
int64_t $tmp202 = $tmp200 - $tmp201;
frost$core$Int $tmp203 = (frost$core$Int) {$tmp202};
if ($tmp137) goto block20; else goto block21;
block20:;
int64_t $tmp204 = $tmp203.value;
int64_t $tmp205 = $tmp138.value;
bool $tmp206 = $tmp204 >= $tmp205;
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
bool $tmp208 = $tmp207.value;
if ($tmp208) goto block19; else goto block5;
block21:;
int64_t $tmp209 = $tmp203.value;
int64_t $tmp210 = $tmp138.value;
bool $tmp211 = $tmp209 > $tmp210;
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block19; else goto block5;
block19:;
int64_t $tmp214 = $tmp199.value;
int64_t $tmp215 = $tmp138.value;
int64_t $tmp216 = $tmp214 + $tmp215;
frost$core$Int $tmp217 = (frost$core$Int) {$tmp216};
*(&local1) = $tmp217;
goto block4;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:109
frost$core$Object* $tmp218 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp218);
frost$core$Object* $tmp219 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp219);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp218;

}
void frost$collections$Iterator$RangeIterator$cleanup(frost$collections$Iterator$RangeIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:48
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp220 = &param0->base;
frost$collections$Iterator* $tmp221 = *$tmp220;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp221));
frost$core$Object** $tmp222 = &param0->pending;
frost$core$Object* $tmp223 = *$tmp222;
frost$core$Frost$unref$frost$core$Object$Q($tmp223);
return;

}

