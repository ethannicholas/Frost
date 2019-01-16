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

typedef panda$core$Bit (*$fn44)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn50)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn98)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn104)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn115)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn177)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn191)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72", 40, -1619811014610548797, NULL };
static panda$core$String $s11 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s12 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x69\x6e\x69\x74\x28\x62\x61\x73\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54\x3e\x2c\x20\x73\x74\x61\x72\x74\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x65\x6e\x64\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x2c\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x2c\x20\x73\x74\x65\x70\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 244, 801978631014599286, NULL };
static panda$core$String $s22 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s23 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s75 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s86 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x6e\x65\x78\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x52\x61\x6e\x67\x65\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x54", 122, -8688701766598055219, NULL };
static panda$core$String $s165 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x74\x65\x72\x61\x74\x6f\x72\x2e\x66\x72\x6f\x73\x74", 14, -6782353984797709813, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };

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
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit(param2.nonnull);
bool $tmp20 = $tmp19.value;
if ($tmp20) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp21 = (panda$core$Int64) {65};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s22, $tmp21, &$s23);
abort(); // unreachable
block6:;
panda$core$Bit $tmp24 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp25 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp18, ((panda$core$Int64) param2.value), $tmp24);
panda$core$Int64 $tmp26 = $tmp25.min;
*(&local0) = $tmp26;
panda$core$Int64 $tmp27 = $tmp25.max;
panda$core$Bit $tmp28 = $tmp25.inclusive;
bool $tmp29 = $tmp28.value;
panda$core$Int64 $tmp30 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp31 = panda$core$Int64$convert$R$panda$core$UInt64($tmp30);
if ($tmp29) goto block11; else goto block12;
block11:;
int64_t $tmp32 = $tmp26.value;
int64_t $tmp33 = $tmp27.value;
bool $tmp34 = $tmp32 <= $tmp33;
panda$core$Bit $tmp35 = (panda$core$Bit) {$tmp34};
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block9;
block12:;
int64_t $tmp37 = $tmp26.value;
int64_t $tmp38 = $tmp27.value;
bool $tmp39 = $tmp37 < $tmp38;
panda$core$Bit $tmp40 = (panda$core$Bit) {$tmp39};
bool $tmp41 = $tmp40.value;
if ($tmp41) goto block8; else goto block9;
block8:;
// line 66
ITable* $tmp42 = param1->$class->itable;
while ($tmp42->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp42 = $tmp42->next;
}
$fn44 $tmp43 = $tmp42->methods[0];
panda$core$Bit $tmp45 = $tmp43(param1);
panda$core$Bit $tmp46 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp45);
bool $tmp47 = $tmp46.value;
if ($tmp47) goto block13; else goto block14;
block13:;
// line 67
ITable* $tmp48 = param1->$class->itable;
while ($tmp48->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp48 = $tmp48->next;
}
$fn50 $tmp49 = $tmp48->methods[1];
panda$core$Object* $tmp51 = $tmp49(param1);
panda$core$Panda$unref$panda$core$Object$Q($tmp51);
// unreffing REF($72:panda.collections.Iterator.T)
goto block14;
block14:;
goto block10;
block10:;
panda$core$Int64 $tmp52 = *(&local0);
int64_t $tmp53 = $tmp27.value;
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53 - $tmp54;
panda$core$Int64 $tmp56 = (panda$core$Int64) {$tmp55};
panda$core$UInt64 $tmp57 = panda$core$Int64$convert$R$panda$core$UInt64($tmp56);
if ($tmp29) goto block16; else goto block17;
block16:;
uint64_t $tmp58 = $tmp57.value;
uint64_t $tmp59 = $tmp31.value;
bool $tmp60 = $tmp58 >= $tmp59;
panda$core$Bit $tmp61 = (panda$core$Bit) {$tmp60};
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block15; else goto block9;
block17:;
uint64_t $tmp63 = $tmp57.value;
uint64_t $tmp64 = $tmp31.value;
bool $tmp65 = $tmp63 > $tmp64;
panda$core$Bit $tmp66 = (panda$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block15; else goto block9;
block15:;
int64_t $tmp68 = $tmp52.value;
int64_t $tmp69 = $tmp30.value;
int64_t $tmp70 = $tmp68 + $tmp69;
panda$core$Int64 $tmp71 = (panda$core$Int64) {$tmp70};
*(&local0) = $tmp71;
goto block8;
block9:;
// line 70
panda$core$Bit $tmp72 = panda$core$Bit$init$builtin_bit(param2.nonnull);
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block18; else goto block19;
block19:;
panda$core$Int64 $tmp74 = (panda$core$Int64) {70};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s75, $tmp74, &$s76);
abort(); // unreachable
block18:;
panda$core$Int64* $tmp77 = &param0->current;
*$tmp77 = ((panda$core$Int64) param2.value);
goto block4;
block5:;
// line 1
// line 73
panda$core$Int64 $tmp78 = (panda$core$Int64) {0};
panda$core$Int64* $tmp79 = &param0->current;
*$tmp79 = $tmp78;
goto block4;
block4:;
// line 75
panda$core$Bit $tmp80 = panda$core$Bit$init$builtin_bit(param3.nonnull);
bool $tmp81 = $tmp80.value;
if ($tmp81) goto block20; else goto block21;
block20:;
// line 76
bool $tmp82 = param4.value;
if ($tmp82) goto block22; else goto block24;
block22:;
// line 77
panda$core$Bit $tmp83 = panda$core$Bit$init$builtin_bit(param3.nonnull);
bool $tmp84 = $tmp83.value;
if ($tmp84) goto block25; else goto block26;
block26:;
panda$core$Int64 $tmp85 = (panda$core$Int64) {77};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s86, $tmp85, &$s87);
abort(); // unreachable
block25:;
panda$core$Int64 $tmp88 = (panda$core$Int64) {1};
int64_t $tmp89 = ((panda$core$Int64) param3.value).value;
int64_t $tmp90 = $tmp88.value;
int64_t $tmp91 = $tmp89 + $tmp90;
panda$core$Int64 $tmp92 = (panda$core$Int64) {$tmp91};
panda$core$Int64$nullable* $tmp93 = &param0->end;
*$tmp93 = ((panda$core$Int64$nullable) { $tmp92, true });
goto block23;
block24:;
// line 1
// line 80
panda$core$Int64$nullable* $tmp94 = &param0->end;
*$tmp94 = param3;
goto block23;
block23:;
goto block21;
block21:;
// line 83
panda$core$Int64* $tmp95 = &param0->step;
*$tmp95 = param5;
// line 84
ITable* $tmp96 = param1->$class->itable;
while ($tmp96->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp96 = $tmp96->next;
}
$fn98 $tmp97 = $tmp96->methods[0];
panda$core$Bit $tmp99 = $tmp97(param1);
panda$core$Bit $tmp100 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp99);
bool $tmp101 = $tmp100.value;
if ($tmp101) goto block27; else goto block29;
block27:;
// line 85
ITable* $tmp102 = param1->$class->itable;
while ($tmp102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[1];
panda$core$Object* $tmp105 = $tmp103(param1);
panda$core$Panda$ref$panda$core$Object$Q($tmp105);
panda$core$Object** $tmp106 = &param0->pending;
panda$core$Object* $tmp107 = *$tmp106;
panda$core$Panda$unref$panda$core$Object$Q($tmp107);
panda$core$Object** $tmp108 = &param0->pending;
*$tmp108 = $tmp105;
panda$core$Panda$unref$panda$core$Object$Q($tmp105);
// unreffing REF($173:panda.collections.Iterator.T)
goto block28;
block29:;
// line 1
// line 88
panda$core$Bit $tmp109 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp110 = &param0->_done;
*$tmp110 = $tmp109;
goto block28;
block28:;
return;

}
panda$core$Bit panda$collections$Iterator$RangeIterator$get_done$R$panda$core$Bit(panda$collections$Iterator$RangeIterator* param0) {

// line 94
panda$core$Bit* $tmp111 = &param0->_done;
panda$core$Bit $tmp112 = *$tmp111;
return $tmp112;

}
panda$core$Object* panda$collections$Iterator$RangeIterator$next$R$panda$collections$Iterator$RangeIterator$T(panda$collections$Iterator$RangeIterator* param0) {

panda$core$Object* local0 = NULL;
panda$core$Int64 local1;
panda$core$Bit local2;
panda$core$Bit local3;
ITable* $tmp113 = ((panda$collections$Iterator*) param0)->$class->itable;
while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
panda$core$Bit $tmp116 = $tmp114(((panda$collections$Iterator*) param0));
panda$core$Bit $tmp117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp116);
bool $tmp118 = $tmp117.value;
if ($tmp118) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp119 = (panda$core$Int64) {98};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s120, $tmp119, &$s121);
abort(); // unreachable
block1:;
// line 99
panda$core$Object** $tmp122 = &param0->pending;
panda$core$Object* $tmp123 = *$tmp122;
*(&local0) = ((panda$core$Object*) NULL);
panda$core$Panda$ref$panda$core$Object$Q($tmp123);
panda$core$Object* $tmp124 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp124);
*(&local0) = $tmp123;
// line 100
panda$core$Int64 $tmp125 = (panda$core$Int64) {0};
panda$core$Int64* $tmp126 = &param0->step;
panda$core$Int64 $tmp127 = *$tmp126;
panda$core$Bit $tmp128 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp129 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp125, $tmp127, $tmp128);
panda$core$Int64 $tmp130 = $tmp129.min;
*(&local1) = $tmp130;
panda$core$Int64 $tmp131 = $tmp129.max;
panda$core$Bit $tmp132 = $tmp129.inclusive;
bool $tmp133 = $tmp132.value;
panda$core$Int64 $tmp134 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp135 = panda$core$Int64$convert$R$panda$core$UInt64($tmp134);
if ($tmp133) goto block6; else goto block7;
block6:;
int64_t $tmp136 = $tmp130.value;
int64_t $tmp137 = $tmp131.value;
bool $tmp138 = $tmp136 <= $tmp137;
panda$core$Bit $tmp139 = (panda$core$Bit) {$tmp138};
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block3; else goto block4;
block7:;
int64_t $tmp141 = $tmp130.value;
int64_t $tmp142 = $tmp131.value;
bool $tmp143 = $tmp141 < $tmp142;
panda$core$Bit $tmp144 = (panda$core$Bit) {$tmp143};
bool $tmp145 = $tmp144.value;
if ($tmp145) goto block3; else goto block4;
block3:;
// line 101
panda$core$Int64* $tmp146 = &param0->current;
panda$core$Int64 $tmp147 = *$tmp146;
panda$core$Int64 $tmp148 = (panda$core$Int64) {1};
int64_t $tmp149 = $tmp147.value;
int64_t $tmp150 = $tmp148.value;
int64_t $tmp151 = $tmp149 + $tmp150;
panda$core$Int64 $tmp152 = (panda$core$Int64) {$tmp151};
panda$core$Int64* $tmp153 = &param0->current;
*$tmp153 = $tmp152;
// line 102
panda$core$Int64$nullable* $tmp154 = &param0->end;
panda$core$Int64$nullable $tmp155 = *$tmp154;
panda$core$Bit $tmp156 = panda$core$Bit$init$builtin_bit($tmp155.nonnull);
bool $tmp157 = $tmp156.value;
if ($tmp157) goto block8; else goto block9;
block8:;
panda$core$Int64* $tmp158 = &param0->current;
panda$core$Int64 $tmp159 = *$tmp158;
panda$core$Int64$nullable* $tmp160 = &param0->end;
panda$core$Int64$nullable $tmp161 = *$tmp160;
panda$core$Bit $tmp162 = panda$core$Bit$init$builtin_bit($tmp161.nonnull);
bool $tmp163 = $tmp162.value;
if ($tmp163) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp164 = (panda$core$Int64) {102};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s165, $tmp164, &$s166);
abort(); // unreachable
block11:;
int64_t $tmp167 = $tmp159.value;
int64_t $tmp168 = ((panda$core$Int64) $tmp161.value).value;
bool $tmp169 = $tmp167 >= $tmp168;
panda$core$Bit $tmp170 = (panda$core$Bit) {$tmp169};
*(&local3) = $tmp170;
goto block10;
block9:;
*(&local3) = $tmp156;
goto block10;
block10:;
panda$core$Bit $tmp171 = *(&local3);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block13; else goto block14;
block13:;
*(&local2) = $tmp171;
goto block15;
block14:;
panda$collections$Iterator** $tmp173 = &param0->base;
panda$collections$Iterator* $tmp174 = *$tmp173;
ITable* $tmp175 = $tmp174->$class->itable;
while ($tmp175->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp175 = $tmp175->next;
}
$fn177 $tmp176 = $tmp175->methods[0];
panda$core$Bit $tmp178 = $tmp176($tmp174);
*(&local2) = $tmp178;
goto block15;
block15:;
panda$core$Bit $tmp179 = *(&local2);
panda$core$Bit* $tmp180 = &param0->_done;
*$tmp180 = $tmp179;
// line 103
panda$core$Bit* $tmp181 = &param0->_done;
panda$core$Bit $tmp182 = *$tmp181;
bool $tmp183 = $tmp182.value;
if ($tmp183) goto block16; else goto block17;
block16:;
// line 104
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) NULL));
panda$core$Object** $tmp184 = &param0->pending;
panda$core$Object* $tmp185 = *$tmp184;
panda$core$Panda$unref$panda$core$Object$Q($tmp185);
panda$core$Object** $tmp186 = &param0->pending;
*$tmp186 = ((panda$core$Object*) NULL);
// line 105
goto block4;
block17:;
// line 107
panda$collections$Iterator** $tmp187 = &param0->base;
panda$collections$Iterator* $tmp188 = *$tmp187;
ITable* $tmp189 = $tmp188->$class->itable;
while ($tmp189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp189 = $tmp189->next;
}
$fn191 $tmp190 = $tmp189->methods[1];
panda$core$Object* $tmp192 = $tmp190($tmp188);
panda$core$Panda$ref$panda$core$Object$Q($tmp192);
panda$core$Object** $tmp193 = &param0->pending;
panda$core$Object* $tmp194 = *$tmp193;
panda$core$Panda$unref$panda$core$Object$Q($tmp194);
panda$core$Object** $tmp195 = &param0->pending;
*$tmp195 = $tmp192;
panda$core$Panda$unref$panda$core$Object$Q($tmp192);
// unreffing REF($130:panda.collections.Iterator.T)
goto block5;
block5:;
panda$core$Int64 $tmp196 = *(&local1);
int64_t $tmp197 = $tmp131.value;
int64_t $tmp198 = $tmp196.value;
int64_t $tmp199 = $tmp197 - $tmp198;
panda$core$Int64 $tmp200 = (panda$core$Int64) {$tmp199};
panda$core$UInt64 $tmp201 = panda$core$Int64$convert$R$panda$core$UInt64($tmp200);
if ($tmp133) goto block19; else goto block20;
block19:;
uint64_t $tmp202 = $tmp201.value;
uint64_t $tmp203 = $tmp135.value;
bool $tmp204 = $tmp202 >= $tmp203;
panda$core$Bit $tmp205 = (panda$core$Bit) {$tmp204};
bool $tmp206 = $tmp205.value;
if ($tmp206) goto block18; else goto block4;
block20:;
uint64_t $tmp207 = $tmp201.value;
uint64_t $tmp208 = $tmp135.value;
bool $tmp209 = $tmp207 > $tmp208;
panda$core$Bit $tmp210 = (panda$core$Bit) {$tmp209};
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block18; else goto block4;
block18:;
int64_t $tmp212 = $tmp196.value;
int64_t $tmp213 = $tmp134.value;
int64_t $tmp214 = $tmp212 + $tmp213;
panda$core$Int64 $tmp215 = (panda$core$Int64) {$tmp214};
*(&local1) = $tmp215;
goto block3;
block4:;
// line 109
panda$core$Object* $tmp216 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q($tmp216);
panda$core$Object* $tmp217 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q($tmp217);
// unreffing result
*(&local0) = ((panda$core$Object*) NULL);
return $tmp216;

}
void panda$collections$Iterator$RangeIterator$cleanup(panda$collections$Iterator$RangeIterator* param0) {

// line 48
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$collections$Iterator** $tmp218 = &param0->base;
panda$collections$Iterator* $tmp219 = *$tmp218;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp219));
panda$core$Object** $tmp220 = &param0->pending;
panda$core$Object* $tmp221 = *$tmp220;
panda$core$Panda$unref$panda$core$Object$Q($tmp221);
return;

}

