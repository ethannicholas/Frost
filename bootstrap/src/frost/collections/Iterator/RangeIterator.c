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
frost$collections$Iterator$RangeIterator$class_type frost$collections$Iterator$RangeIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$RangeIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$RangeIterator$cleanup, frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim} };

typedef frost$core$Bit (*$fn40)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn48)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn87)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn95)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn106)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn166)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn180)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -7496503432914368729, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x65\x6e\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 244, -2999544761465976244, NULL };
static frost$core$String $s113 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -28151574787386209, NULL };
static frost$core$String $s114 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, 972743335700786433, NULL };

void frost$collections$Iterator$RangeIterator$init$frost$collections$Iterator$LTfrost$collections$Iterator$RangeIterator$T$GT$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit$frost$core$Int64(frost$collections$Iterator$RangeIterator* param0, frost$collections$Iterator* param1, frost$core$Int64$nullable param2, frost$core$Int64$nullable param3, frost$core$Bit param4, frost$core$Int64 param5) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:59
frost$core$Bit $tmp2 = (frost$core$Bit) {false};
frost$core$Bit* $tmp3 = &param0->_done;
*$tmp3 = $tmp2;
frost$core$Int64 $tmp4 = (frost$core$Int64) {0u};
int64_t $tmp5 = param5.value;
int64_t $tmp6 = $tmp4.value;
bool $tmp7 = $tmp5 > $tmp6;
frost$core$Bit $tmp8 = (frost$core$Bit) {$tmp7};
bool $tmp9 = $tmp8.value;
if ($tmp9) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp10 = (frost$core$Int64) {62u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s11, $tmp10, &$s12);
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
frost$core$Int64 $tmp18 = (frost$core$Int64) {0u};
frost$core$Bit $tmp19 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp20 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp18, ((frost$core$Int64) param2.value), $tmp19);
frost$core$Int64 $tmp21 = $tmp20.min;
*(&local0) = $tmp21;
frost$core$Int64 $tmp22 = $tmp20.max;
frost$core$Bit $tmp23 = $tmp20.inclusive;
bool $tmp24 = $tmp23.value;
frost$core$Int64 $tmp25 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp26 = $tmp25.value;
frost$core$UInt64 $tmp27 = (frost$core$UInt64) {((uint64_t) $tmp26)};
if ($tmp24) goto block10; else goto block11;
block10:;
int64_t $tmp28 = $tmp21.value;
int64_t $tmp29 = $tmp22.value;
bool $tmp30 = $tmp28 <= $tmp29;
frost$core$Bit $tmp31 = (frost$core$Bit) {$tmp30};
bool $tmp32 = $tmp31.value;
if ($tmp32) goto block7; else goto block8;
block11:;
int64_t $tmp33 = $tmp21.value;
int64_t $tmp34 = $tmp22.value;
bool $tmp35 = $tmp33 < $tmp34;
frost$core$Bit $tmp36 = (frost$core$Bit) {$tmp35};
bool $tmp37 = $tmp36.value;
if ($tmp37) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:66
ITable* $tmp38 = param1->$class->itable;
while ($tmp38->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp38 = $tmp38->next;
}
$fn40 $tmp39 = $tmp38->methods[0];
frost$core$Bit $tmp41 = $tmp39(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:66:24
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp42 = $tmp41.value;
bool $tmp43 = !$tmp42;
frost$core$Bit $tmp44 = (frost$core$Bit) {$tmp43};
bool $tmp45 = $tmp44.value;
if ($tmp45) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:67
ITable* $tmp46 = param1->$class->itable;
while ($tmp46->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp46 = $tmp46->next;
}
$fn48 $tmp47 = $tmp46->methods[1];
frost$core$Object* $tmp49 = $tmp47(param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp49);
goto block13;
block13:;
frost$core$Int64 $tmp50 = *(&local0);
int64_t $tmp51 = $tmp22.value;
int64_t $tmp52 = $tmp50.value;
int64_t $tmp53 = $tmp51 - $tmp52;
frost$core$Int64 $tmp54 = (frost$core$Int64) {$tmp53};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp55 = $tmp54.value;
frost$core$UInt64 $tmp56 = (frost$core$UInt64) {((uint64_t) $tmp55)};
if ($tmp24) goto block17; else goto block18;
block17:;
uint64_t $tmp57 = $tmp56.value;
uint64_t $tmp58 = $tmp27.value;
bool $tmp59 = $tmp57 >= $tmp58;
frost$core$Bit $tmp60 = (frost$core$Bit) {$tmp59};
bool $tmp61 = $tmp60.value;
if ($tmp61) goto block15; else goto block8;
block18:;
uint64_t $tmp62 = $tmp56.value;
uint64_t $tmp63 = $tmp27.value;
bool $tmp64 = $tmp62 > $tmp63;
frost$core$Bit $tmp65 = (frost$core$Bit) {$tmp64};
bool $tmp66 = $tmp65.value;
if ($tmp66) goto block15; else goto block8;
block15:;
int64_t $tmp67 = $tmp50.value;
int64_t $tmp68 = $tmp25.value;
int64_t $tmp69 = $tmp67 + $tmp68;
frost$core$Int64 $tmp70 = (frost$core$Int64) {$tmp69};
*(&local0) = $tmp70;
goto block7;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:70
frost$core$Int64* $tmp71 = &param0->current;
*$tmp71 = ((frost$core$Int64) param2.value);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:73
frost$core$Int64 $tmp72 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp73 = &param0->current;
*$tmp73 = $tmp72;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:75
frost$core$Bit $tmp74 = (frost$core$Bit) {param3.nonnull};
bool $tmp75 = $tmp74.value;
if ($tmp75) goto block19; else goto block20;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:76
bool $tmp76 = param4.value;
if ($tmp76) goto block21; else goto block23;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:77
frost$core$Int64 $tmp77 = (frost$core$Int64) {1u};
int64_t $tmp78 = ((frost$core$Int64) param3.value).value;
int64_t $tmp79 = $tmp77.value;
int64_t $tmp80 = $tmp78 + $tmp79;
frost$core$Int64 $tmp81 = (frost$core$Int64) {$tmp80};
frost$core$Int64$nullable* $tmp82 = &param0->end;
*$tmp82 = ((frost$core$Int64$nullable) { $tmp81, true });
goto block22;
block23:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:80
frost$core$Int64$nullable* $tmp83 = &param0->end;
*$tmp83 = param3;
goto block22;
block22:;
goto block20;
block20:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:83
frost$core$Int64* $tmp84 = &param0->step;
*$tmp84 = param5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:84
ITable* $tmp85 = param1->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
frost$core$Bit $tmp88 = $tmp86(param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:84:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp89 = $tmp88.value;
bool $tmp90 = !$tmp89;
frost$core$Bit $tmp91 = (frost$core$Bit) {$tmp90};
bool $tmp92 = $tmp91.value;
if ($tmp92) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:85
ITable* $tmp93 = param1->$class->itable;
while ($tmp93->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp93 = $tmp93->next;
}
$fn95 $tmp94 = $tmp93->methods[1];
frost$core$Object* $tmp96 = $tmp94(param1);
frost$core$Frost$ref$frost$core$Object$Q($tmp96);
frost$core$Object** $tmp97 = &param0->pending;
frost$core$Object* $tmp98 = *$tmp97;
frost$core$Frost$unref$frost$core$Object$Q($tmp98);
frost$core$Object** $tmp99 = &param0->pending;
*$tmp99 = $tmp96;
frost$core$Frost$unref$frost$core$Object$Q($tmp96);
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:88
frost$core$Bit $tmp100 = (frost$core$Bit) {true};
frost$core$Bit* $tmp101 = &param0->_done;
*$tmp101 = $tmp100;
goto block25;
block25:;
return;

}
frost$core$Bit frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$RangeIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:94
frost$core$Bit* $tmp102 = &param0->_done;
frost$core$Bit $tmp103 = *$tmp102;
return $tmp103;

}
frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(frost$collections$Iterator$RangeIterator* param0) {

frost$core$Object* local0 = NULL;
frost$core$Int64 local1;
frost$core$Bit local2;
frost$core$Bit local3;
ITable* $tmp104 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp104->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp104 = $tmp104->next;
}
$fn106 $tmp105 = $tmp104->methods[0];
frost$core$Bit $tmp107 = $tmp105(((frost$collections$Iterator*) param0));
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Iterator.frost:166:10
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp108 = $tmp107.value;
bool $tmp109 = !$tmp108;
frost$core$Bit $tmp110 = (frost$core$Bit) {$tmp109};
bool $tmp111 = $tmp110.value;
if ($tmp111) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp112 = (frost$core$Int64) {98u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s113, $tmp112, &$s114);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:99
frost$core$Object** $tmp115 = &param0->pending;
frost$core$Object* $tmp116 = *$tmp115;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp116);
frost$core$Object* $tmp117 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp117);
*(&local0) = $tmp116;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:100
frost$core$Int64 $tmp118 = (frost$core$Int64) {0u};
frost$core$Int64* $tmp119 = &param0->step;
frost$core$Int64 $tmp120 = *$tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp122 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp118, $tmp120, $tmp121);
frost$core$Int64 $tmp123 = $tmp122.min;
*(&local1) = $tmp123;
frost$core$Int64 $tmp124 = $tmp122.max;
frost$core$Bit $tmp125 = $tmp122.inclusive;
bool $tmp126 = $tmp125.value;
frost$core$Int64 $tmp127 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp128 = $tmp127.value;
frost$core$UInt64 $tmp129 = (frost$core$UInt64) {((uint64_t) $tmp128)};
if ($tmp126) goto block8; else goto block9;
block8:;
int64_t $tmp130 = $tmp123.value;
int64_t $tmp131 = $tmp124.value;
bool $tmp132 = $tmp130 <= $tmp131;
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
bool $tmp134 = $tmp133.value;
if ($tmp134) goto block5; else goto block6;
block9:;
int64_t $tmp135 = $tmp123.value;
int64_t $tmp136 = $tmp124.value;
bool $tmp137 = $tmp135 < $tmp136;
frost$core$Bit $tmp138 = (frost$core$Bit) {$tmp137};
bool $tmp139 = $tmp138.value;
if ($tmp139) goto block5; else goto block6;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:101
frost$core$Int64* $tmp140 = &param0->current;
frost$core$Int64 $tmp141 = *$tmp140;
frost$core$Int64 $tmp142 = (frost$core$Int64) {1u};
int64_t $tmp143 = $tmp141.value;
int64_t $tmp144 = $tmp142.value;
int64_t $tmp145 = $tmp143 + $tmp144;
frost$core$Int64 $tmp146 = (frost$core$Int64) {$tmp145};
frost$core$Int64* $tmp147 = &param0->current;
*$tmp147 = $tmp146;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:102
frost$core$Int64$nullable* $tmp148 = &param0->end;
frost$core$Int64$nullable $tmp149 = *$tmp148;
frost$core$Bit $tmp150 = (frost$core$Bit) {$tmp149.nonnull};
bool $tmp151 = $tmp150.value;
if ($tmp151) goto block10; else goto block11;
block10:;
frost$core$Int64* $tmp152 = &param0->current;
frost$core$Int64 $tmp153 = *$tmp152;
frost$core$Int64$nullable* $tmp154 = &param0->end;
frost$core$Int64$nullable $tmp155 = *$tmp154;
int64_t $tmp156 = $tmp153.value;
int64_t $tmp157 = ((frost$core$Int64) $tmp155.value).value;
bool $tmp158 = $tmp156 >= $tmp157;
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
*(&local3) = $tmp159;
goto block12;
block11:;
*(&local3) = $tmp150;
goto block12;
block12:;
frost$core$Bit $tmp160 = *(&local3);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block13; else goto block14;
block13:;
*(&local2) = $tmp160;
goto block15;
block14:;
frost$collections$Iterator** $tmp162 = &param0->base;
frost$collections$Iterator* $tmp163 = *$tmp162;
ITable* $tmp164 = $tmp163->$class->itable;
while ($tmp164->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp164 = $tmp164->next;
}
$fn166 $tmp165 = $tmp164->methods[0];
frost$core$Bit $tmp167 = $tmp165($tmp163);
*(&local2) = $tmp167;
goto block15;
block15:;
frost$core$Bit $tmp168 = *(&local2);
frost$core$Bit* $tmp169 = &param0->_done;
*$tmp169 = $tmp168;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:103
frost$core$Bit* $tmp170 = &param0->_done;
frost$core$Bit $tmp171 = *$tmp170;
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$core$Object** $tmp173 = &param0->pending;
frost$core$Object* $tmp174 = *$tmp173;
frost$core$Frost$unref$frost$core$Object$Q($tmp174);
frost$core$Object** $tmp175 = &param0->pending;
*$tmp175 = ((frost$core$Object*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:105
goto block6;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:107
frost$collections$Iterator** $tmp176 = &param0->base;
frost$collections$Iterator* $tmp177 = *$tmp176;
ITable* $tmp178 = $tmp177->$class->itable;
while ($tmp178->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp178 = $tmp178->next;
}
$fn180 $tmp179 = $tmp178->methods[1];
frost$core$Object* $tmp181 = $tmp179($tmp177);
frost$core$Frost$ref$frost$core$Object$Q($tmp181);
frost$core$Object** $tmp182 = &param0->pending;
frost$core$Object* $tmp183 = *$tmp182;
frost$core$Frost$unref$frost$core$Object$Q($tmp183);
frost$core$Object** $tmp184 = &param0->pending;
*$tmp184 = $tmp181;
frost$core$Frost$unref$frost$core$Object$Q($tmp181);
frost$core$Int64 $tmp185 = *(&local1);
int64_t $tmp186 = $tmp124.value;
int64_t $tmp187 = $tmp185.value;
int64_t $tmp188 = $tmp186 - $tmp187;
frost$core$Int64 $tmp189 = (frost$core$Int64) {$tmp188};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp190 = $tmp189.value;
frost$core$UInt64 $tmp191 = (frost$core$UInt64) {((uint64_t) $tmp190)};
if ($tmp126) goto block20; else goto block21;
block20:;
uint64_t $tmp192 = $tmp191.value;
uint64_t $tmp193 = $tmp129.value;
bool $tmp194 = $tmp192 >= $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block18; else goto block6;
block21:;
uint64_t $tmp197 = $tmp191.value;
uint64_t $tmp198 = $tmp129.value;
bool $tmp199 = $tmp197 > $tmp198;
frost$core$Bit $tmp200 = (frost$core$Bit) {$tmp199};
bool $tmp201 = $tmp200.value;
if ($tmp201) goto block18; else goto block6;
block18:;
int64_t $tmp202 = $tmp185.value;
int64_t $tmp203 = $tmp127.value;
int64_t $tmp204 = $tmp202 + $tmp203;
frost$core$Int64 $tmp205 = (frost$core$Int64) {$tmp204};
*(&local1) = $tmp205;
goto block5;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:109
frost$core$Object* $tmp206 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp206);
frost$core$Object* $tmp207 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp207);
*(&local0) = ((frost$core$Object*) NULL);
return $tmp206;

}
void frost$collections$Iterator$RangeIterator$cleanup(frost$collections$Iterator$RangeIterator* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/Iterator.frost:48
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp208 = &param0->base;
frost$collections$Iterator* $tmp209 = *$tmp208;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp209));
frost$core$Object** $tmp210 = &param0->pending;
frost$core$Object* $tmp211 = *$tmp210;
frost$core$Frost$unref$frost$core$Object$Q($tmp211);
return;

}

