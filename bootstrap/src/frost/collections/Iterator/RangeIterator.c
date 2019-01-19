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

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$Iterator$RangeIterator$_frost$collections$Iterator = { (frost$core$Class*) &frost$collections$Iterator$class, NULL, { frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim, frost$collections$Iterator$count$R$frost$core$Int64, frost$collections$Iterator$filter$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$Iterator$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$all$R$frost$collections$Array$LTfrost$collections$Iterator$T$GT, frost$collections$Iterator$apply$$LPfrost$collections$Iterator$T$RP$EQ$AM$GT$LP$RP, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$R$frost$collections$Iterator$T, frost$collections$Iterator$fold$$LPfrost$collections$Iterator$T$Cfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$T$RP$frost$collections$Iterator$T$R$frost$collections$Iterator$T, frost$collections$Iterator$map$$LPfrost$collections$Iterator$T$RP$EQ$GT$LPfrost$collections$Iterator$map$U$RP$R$frost$collections$Iterator$LTfrost$collections$Iterator$map$U$GT} };

static frost$core$String $s1;
frost$collections$Iterator$RangeIterator$class_type frost$collections$Iterator$RangeIterator$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterator$RangeIterator$_frost$collections$Iterator, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$Iterator$RangeIterator$cleanup, frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit, frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T$shim} };

typedef frost$core$Bit (*$fn44)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn50)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn98)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn104)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn115)(frost$collections$Iterator*);
typedef frost$core$Bit (*$fn177)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn191)(frost$collections$Iterator*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, 4805893956762861685, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x65\x6e\x64\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 244, 6057077034919450164, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s75 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s76 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s86 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s87 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };
static frost$core$String $s120 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, 5742099429461798673, NULL };
static frost$core$String $s165 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static frost$core$String $s166 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -2353806797591321741, NULL };

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
frost$core$Bit $tmp19 = frost$core$Bit$init$builtin_bit(param2.nonnull);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp21 = (frost$core$Int64) {65};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block6:;
frost$core$Bit $tmp24 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp25 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp18, ((frost$core$Int64) param2.value), $tmp24);
frost$core$Int64 $tmp26 = $tmp25.min;
*(&local0) = $tmp26;
frost$core$Int64 $tmp27 = $tmp25.max;
frost$core$Bit $tmp28 = $tmp25.inclusive;
bool $tmp29 = $tmp28.value;
frost$core$Int64 $tmp30 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp31 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp30);
if ($tmp29) goto block11; else goto block12;
block11:;
int64_t $tmp32 = $tmp26.value;
int64_t $tmp33 = $tmp27.value;
bool $tmp34 = $tmp32 <= $tmp33;
frost$core$Bit $tmp35 = (frost$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block9;
block12:;
int64_t $tmp37 = $tmp26.value;
int64_t $tmp38 = $tmp27.value;
bool $tmp39 = $tmp37 < $tmp38;
frost$core$Bit $tmp40 = (frost$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block8; else goto block9;
block8:;
// line 66
ITable* $tmp42 = param1->$class->itable;
while ($tmp42->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
frost$core$Bit $tmp45 = $tmp43(param1);
frost$core$Bit $tmp46 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block13; else goto block14;
block13:;
// line 67
ITable* $tmp48 = param1->$class->itable;
while ($tmp48->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[1];
frost$core$Object* $tmp51 = $tmp49(param1);
frost$core$Frost$unref$frost$core$Object$Q($tmp51);
// unreffing REF($72:frost.collections.Iterator.T)
goto block14;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp52 = *(&local0);
int64_t $tmp53 = $tmp27.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 - $tmp54;
frost$core$Int64 $tmp56 = (frost$core$Int64) {$tmp55};
frost$core$UInt64 $tmp57 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp56);
if ($tmp29) goto block16; else goto block17;
block16:;
uint64_t $tmp58 = $tmp57.value;
uint64_t $tmp59 = $tmp31.value;
bool $tmp60 = $tmp58 >= $tmp59;
frost$core$Bit $tmp61 = (frost$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block15; else goto block9;
block17:;
uint64_t $tmp63 = $tmp57.value;
uint64_t $tmp64 = $tmp31.value;
bool $tmp65 = $tmp63 > $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block15; else goto block9;
block15:;
int64_t $tmp68 = $tmp52.value;
int64_t $tmp69 = $tmp30.value;
int64_t $tmp70 = $tmp68 + $tmp69;
frost$core$Int64 $tmp71 = (frost$core$Int64) {$tmp70};
*(&local0) = $tmp71;
goto block8;
block9:;
// line 70
frost$core$Bit $tmp72 = frost$core$Bit$init$builtin_bit(param2.nonnull);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block18; else goto block19;
block19:;
frost$core$Int64 $tmp74 = (frost$core$Int64) {70};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s75, $tmp74, &$s76);
abort(); // unreachable
block18:;
frost$core$Int64* $tmp77 = &param0->current;
*$tmp77 = ((frost$core$Int64) param2.value);
goto block4;
block5:;
// line 1
// line 73
frost$core$Int64 $tmp78 = (frost$core$Int64) {0};
frost$core$Int64* $tmp79 = &param0->current;
*$tmp79 = $tmp78;
goto block4;
block4:;
// line 75
frost$core$Bit $tmp80 = frost$core$Bit$init$builtin_bit(param3.nonnull);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block20; else goto block21;
block20:;
// line 76
bool $tmp82 = param4.value;
if ($tmp82) goto block22; else goto block24;
block22:;
// line 77
frost$core$Bit $tmp83 = frost$core$Bit$init$builtin_bit(param3.nonnull);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block25; else goto block26;
block26:;
frost$core$Int64 $tmp85 = (frost$core$Int64) {77};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s86, $tmp85, &$s87);
abort(); // unreachable
block25:;
frost$core$Int64 $tmp88 = (frost$core$Int64) {1};
int64_t $tmp89 = ((frost$core$Int64) param3.value).value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 + $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
frost$core$Int64$nullable* $tmp93 = &param0->end;
*$tmp93 = ((frost$core$Int64$nullable) { $tmp92, true });
goto block23;
block24:;
// line 1
// line 80
frost$core$Int64$nullable* $tmp94 = &param0->end;
*$tmp94 = param3;
goto block23;
block23:;
goto block21;
block21:;
// line 83
frost$core$Int64* $tmp95 = &param0->step;
*$tmp95 = param5;
// line 84
ITable* $tmp96 = param1->$class->itable;
while ($tmp96->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
frost$core$Bit $tmp99 = $tmp97(param1);
frost$core$Bit $tmp100 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block27; else goto block29;
block27:;
// line 85
ITable* $tmp102 = param1->$class->itable;
while ($tmp102->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[1];
frost$core$Object* $tmp105 = $tmp103(param1);
frost$core$Frost$ref$frost$core$Object$Q($tmp105);
frost$core$Object** $tmp106 = &param0->pending;
frost$core$Object* $tmp107 = *$tmp106;
frost$core$Frost$unref$frost$core$Object$Q($tmp107);
frost$core$Object** $tmp108 = &param0->pending;
*$tmp108 = $tmp105;
frost$core$Frost$unref$frost$core$Object$Q($tmp105);
// unreffing REF($173:frost.collections.Iterator.T)
goto block28;
block29:;
// line 1
// line 88
frost$core$Bit $tmp109 = frost$core$Bit$init$builtin_bit(true);
frost$core$Bit* $tmp110 = &param0->_done;
*$tmp110 = $tmp109;
goto block28;
block28:;
return;

}
frost$core$Bit frost$collections$Iterator$RangeIterator$get_done$R$frost$core$Bit(frost$collections$Iterator$RangeIterator* param0) {

// line 94
frost$core$Bit* $tmp111 = &param0->_done;
frost$core$Bit $tmp112 = *$tmp111;
return $tmp112;

}
frost$core$Object* frost$collections$Iterator$RangeIterator$next$R$frost$collections$Iterator$RangeIterator$T(frost$collections$Iterator$RangeIterator* param0) {

frost$core$Object* local0 = NULL;
frost$core$Int64 local1;
frost$core$Bit local2;
frost$core$Bit local3;
ITable* $tmp113 = ((frost$collections$Iterator*) param0)->$class->itable;
while ($tmp113->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
frost$core$Bit $tmp116 = $tmp114(((frost$collections$Iterator*) param0));
frost$core$Bit $tmp117 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp119 = (frost$core$Int64) {98};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block1:;
// line 99
frost$core$Object** $tmp122 = &param0->pending;
frost$core$Object* $tmp123 = *$tmp122;
*(&local0) = ((frost$core$Object*) NULL);
frost$core$Frost$ref$frost$core$Object$Q($tmp123);
frost$core$Object* $tmp124 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp124);
*(&local0) = $tmp123;
// line 100
frost$core$Int64 $tmp125 = (frost$core$Int64) {0};
frost$core$Int64* $tmp126 = &param0->step;
frost$core$Int64 $tmp127 = *$tmp126;
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp129 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp125, $tmp127, $tmp128);
frost$core$Int64 $tmp130 = $tmp129.min;
*(&local1) = $tmp130;
frost$core$Int64 $tmp131 = $tmp129.max;
frost$core$Bit $tmp132 = $tmp129.inclusive;
bool $tmp133 = $tmp132.value;
frost$core$Int64 $tmp134 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp135 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp134);
if ($tmp133) goto block6; else goto block7;
block6:;
int64_t $tmp136 = $tmp130.value;
int64_t $tmp137 = $tmp131.value;
bool $tmp138 = $tmp136 <= $tmp137;
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block3; else goto block4;
block7:;
int64_t $tmp141 = $tmp130.value;
int64_t $tmp142 = $tmp131.value;
bool $tmp143 = $tmp141 < $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block3; else goto block4;
block3:;
// line 101
frost$core$Int64* $tmp146 = &param0->current;
frost$core$Int64 $tmp147 = *$tmp146;
frost$core$Int64 $tmp148 = (frost$core$Int64) {1};
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149 + $tmp150;
frost$core$Int64 $tmp152 = (frost$core$Int64) {$tmp151};
frost$core$Int64* $tmp153 = &param0->current;
*$tmp153 = $tmp152;
// line 102
frost$core$Int64$nullable* $tmp154 = &param0->end;
frost$core$Int64$nullable $tmp155 = *$tmp154;
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit($tmp155.nonnull);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block8; else goto block9;
block8:;
frost$core$Int64* $tmp158 = &param0->current;
frost$core$Int64 $tmp159 = *$tmp158;
frost$core$Int64$nullable* $tmp160 = &param0->end;
frost$core$Int64$nullable $tmp161 = *$tmp160;
frost$core$Bit $tmp162 = frost$core$Bit$init$builtin_bit($tmp161.nonnull);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp164 = (frost$core$Int64) {102};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block11:;
int64_t $tmp167 = $tmp159.value;
int64_t $tmp168 = ((frost$core$Int64) $tmp161.value).value;
bool $tmp169 = $tmp167 >= $tmp168;
frost$core$Bit $tmp170 = (frost$core$Bit) {$tmp169};
*(&local3) = $tmp170;
goto block10;
block9:;
*(&local3) = $tmp156;
goto block10;
block10:;
frost$core$Bit $tmp171 = *(&local3);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block13; else goto block14;
block13:;
*(&local2) = $tmp171;
goto block15;
block14:;
frost$collections$Iterator** $tmp173 = &param0->base;
frost$collections$Iterator* $tmp174 = *$tmp173;
ITable* $tmp175 = $tmp174->$class->itable;
while ($tmp175->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[0];
frost$core$Bit $tmp178 = $tmp176($tmp174);
*(&local2) = $tmp178;
goto block15;
block15:;
frost$core$Bit $tmp179 = *(&local2);
frost$core$Bit* $tmp180 = &param0->_done;
*$tmp180 = $tmp179;
// line 103
frost$core$Bit* $tmp181 = &param0->_done;
frost$core$Bit $tmp182 = *$tmp181;
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block16; else goto block17;
block16:;
// line 104
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) NULL));
frost$core$Object** $tmp184 = &param0->pending;
frost$core$Object* $tmp185 = *$tmp184;
frost$core$Frost$unref$frost$core$Object$Q($tmp185);
frost$core$Object** $tmp186 = &param0->pending;
*$tmp186 = ((frost$core$Object*) NULL);
// line 105
goto block4;
block17:;
// line 107
frost$collections$Iterator** $tmp187 = &param0->base;
frost$collections$Iterator* $tmp188 = *$tmp187;
ITable* $tmp189 = $tmp188->$class->itable;
while ($tmp189->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[1];
frost$core$Object* $tmp192 = $tmp190($tmp188);
frost$core$Frost$ref$frost$core$Object$Q($tmp192);
frost$core$Object** $tmp193 = &param0->pending;
frost$core$Object* $tmp194 = *$tmp193;
frost$core$Frost$unref$frost$core$Object$Q($tmp194);
frost$core$Object** $tmp195 = &param0->pending;
*$tmp195 = $tmp192;
frost$core$Frost$unref$frost$core$Object$Q($tmp192);
// unreffing REF($130:frost.collections.Iterator.T)
goto block5;
block5:;
frost$core$Int64 $tmp196 = *(&local1);
int64_t $tmp197 = $tmp131.value;
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197 - $tmp198;
frost$core$Int64 $tmp200 = (frost$core$Int64) {$tmp199};
frost$core$UInt64 $tmp201 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp200);
if ($tmp133) goto block19; else goto block20;
block19:;
uint64_t $tmp202 = $tmp201.value;
uint64_t $tmp203 = $tmp135.value;
bool $tmp204 = $tmp202 >= $tmp203;
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block18; else goto block4;
block20:;
uint64_t $tmp207 = $tmp201.value;
uint64_t $tmp208 = $tmp135.value;
bool $tmp209 = $tmp207 > $tmp208;
frost$core$Bit $tmp210 = (frost$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block18; else goto block4;
block18:;
int64_t $tmp212 = $tmp196.value;
int64_t $tmp213 = $tmp134.value;
int64_t $tmp214 = $tmp212 + $tmp213;
frost$core$Int64 $tmp215 = (frost$core$Int64) {$tmp214};
*(&local1) = $tmp215;
goto block3;
block4:;
// line 109
frost$core$Object* $tmp216 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q($tmp216);
frost$core$Object* $tmp217 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q($tmp217);
// unreffing result
*(&local0) = ((frost$core$Object*) NULL);
return $tmp216;

}
void frost$collections$Iterator$RangeIterator$cleanup(frost$collections$Iterator$RangeIterator* param0) {

// line 48
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Iterator** $tmp218 = &param0->base;
frost$collections$Iterator* $tmp219 = *$tmp218;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp219));
frost$core$Object** $tmp220 = &param0->pending;
frost$core$Object* $tmp221 = *$tmp220;
frost$core$Frost$unref$frost$core$Object$Q($tmp221);
return;

}

