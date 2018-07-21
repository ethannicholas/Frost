#include "panda/core/MutableString.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Bit.h"
#include "panda/core/Panda.h"
#include "panda/core/Char8.h"
#include "panda/core/Char32.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString/Index.h"
#include "panda/core/Equatable.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Matcher.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.GT.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.Q.GT.h"
#include "panda/core/MutableMethod.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int32.h"
#include "panda/core/Comparable.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"

static panda$core$String $s1;
panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$Char32, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$length$R$panda$core$Int64, panda$core$MutableString$byteLength$R$panda$core$Int64, panda$core$MutableString$start$R$panda$core$MutableString$Index, panda$core$MutableString$end$R$panda$core$MutableString$Index, panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index, panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index, panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index, panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q, panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q, panda$core$MutableString$contains$panda$core$Char8$R$panda$core$Bit, panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit, panda$core$MutableString$startsWith$panda$core$String$R$panda$core$Bit, panda$core$MutableString$endsWith$panda$core$String$R$panda$core$Bit, panda$core$MutableString$lastIndexOf$panda$core$String$R$panda$core$MutableString$Index$Q, panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q, panda$core$MutableString$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$MutableString$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$MutableString$trim, panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String, panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit, panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP, panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP, panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32, panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$MutableString$$IDXEQ$panda$core$MutableString$Index$panda$core$Char32, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$core$String, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String, panda$core$MutableString$replace$panda$core$String$panda$core$String, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear, panda$core$MutableString$finish$R$panda$core$String} };

typedef panda$core$String* (*$fn176)(panda$core$Object*);
typedef panda$core$Bit (*$fn192)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn570)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn596)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn641)(panda$core$Object*, panda$core$String*);
typedef panda$core$Object* (*$fn642)(panda$core$String*);
typedef panda$core$String* (*$fn643)(panda$core$Object*);
typedef panda$core$Object* (*$fn695)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn696)(panda$collections$ListView*);
typedef panda$core$String* (*$fn697)(panda$core$Object*);
typedef panda$core$Bit (*$fn812)(panda$core$Comparable*, panda$core$Comparable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, -2152859069647180220, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 97, -3184186071165599131, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

void panda$core$MutableString$init(panda$core$MutableString* self) {
    panda$core$Int64 $tmp2;
    self->dummy = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp2, 32);
    panda$core$MutableString$init$panda$core$Int64(self, $tmp2);
}
void panda$core$MutableString$init$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Int64 $tmp3;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5;
    panda$core$Int64 $tmp6;
    panda$core$Bit $tmp7;
    self->dummy = NULL;
    self->_length = p_s->_length;
    panda$core$Int64$init$builtin_int64(&$tmp3, 32);
    panda$core$Int64 $tmp4 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp3);
    self->maxLength = $tmp4;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->maxLength.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp6, 0);
    panda$core$Bit$init$builtin_bit(&$tmp7, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5, $tmp6, p_s->_length, $tmp7);
    int64_t $tmp9 = $tmp5.min.value;
    panda$core$Int64 i8 = { $tmp9 };
    int64_t $tmp11 = $tmp5.max.value;
    bool $tmp12 = $tmp5.inclusive.value;
    if ($tmp12) goto $l19; else goto $l20;
    $l19:;
    if ($tmp9 <= $tmp11) goto $l13; else goto $l15;
    $l20:;
    if ($tmp9 < $tmp11) goto $l13; else goto $l15;
    $l13:;
    {
        self->data[i8.value] = p_s->data[i8.value];
    }
    $l16:;
    int64_t $tmp22 = $tmp11 - i8.value;
    if ($tmp12) goto $l23; else goto $l24;
    $l23:;
    if ((uint64_t) $tmp22 >= 1) goto $l21; else goto $l15;
    $l24:;
    if ((uint64_t) $tmp22 > 1) goto $l21; else goto $l15;
    $l21:;
    i8.value += 1;
    goto $l13;
    $l15:;
}
void panda$core$MutableString$init$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_capacity) {
    panda$core$Int64 $tmp27;
    self->dummy = NULL;
    panda$core$Int64$init$builtin_int64(&$tmp27, 0);
    self->_length = $tmp27;
    self->maxLength = p_capacity;
    self->data = ((panda$core$Char8*) pandaZAlloc(self->maxLength.value * 1));
}
void panda$core$MutableString$cleanup(panda$core$MutableString* self) {
    int $tmp30;
    {
        pandaFree(self->data);
    }
    $tmp30 = -1;
    goto $l28;
    $l28:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp30) {
        case -1: goto $l31;
    }
    $l31:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) self->dummy));
}
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Int64 $tmp32;
    panda$core$MutableString* $tmp34;
    panda$core$Int64 $tmp35;
    panda$core$Int64$init$builtin_int64(&$tmp32, 1);
    panda$core$Int64 $tmp33 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp32);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp33);
    self->data[self->_length.value] = p_c;
    $tmp34 = self;
    panda$core$Int64$init$builtin_int64(&$tmp35, 1);
    panda$core$Int64 $tmp36 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp34->_length, $tmp35);
    $tmp34->_length = $tmp36;
}
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* self, panda$core$Char32 p_c) {
    int32_t value37;
    panda$core$Bit $tmp38;
    panda$core$Int64 $tmp40;
    panda$core$Char8 $tmp42;
    panda$core$UInt8 $tmp43;
    panda$core$MutableString* $tmp44;
    panda$core$Int64 $tmp45;
    panda$core$Bit $tmp47;
    panda$core$Int64 $tmp49;
    panda$core$Int64 $tmp51;
    panda$core$Char8 $tmp53;
    panda$core$UInt8 $tmp54;
    panda$core$Int64 $tmp57;
    panda$core$Char8 $tmp59;
    panda$core$UInt8 $tmp60;
    panda$core$MutableString* $tmp63;
    panda$core$Int64 $tmp64;
    panda$core$Bit $tmp66;
    panda$core$Int64 $tmp68;
    panda$core$Int64 $tmp70;
    panda$core$Char8 $tmp72;
    panda$core$UInt8 $tmp73;
    panda$core$Int64 $tmp76;
    panda$core$Char8 $tmp78;
    panda$core$UInt8 $tmp79;
    panda$core$Int64 $tmp83;
    panda$core$Char8 $tmp85;
    panda$core$UInt8 $tmp86;
    panda$core$MutableString* $tmp89;
    panda$core$Int64 $tmp90;
    panda$core$Int64 $tmp92;
    panda$core$Int64 $tmp94;
    panda$core$Char8 $tmp96;
    panda$core$UInt8 $tmp97;
    panda$core$Int64 $tmp100;
    panda$core$Char8 $tmp102;
    panda$core$UInt8 $tmp103;
    panda$core$Int64 $tmp107;
    panda$core$Char8 $tmp109;
    panda$core$UInt8 $tmp110;
    panda$core$Int64 $tmp114;
    panda$core$Char8 $tmp116;
    panda$core$UInt8 $tmp117;
    panda$core$MutableString* $tmp120;
    panda$core$Int64 $tmp121;
    value37 = p_c.value;
    bool $tmp39 = value37 < 128;
    panda$core$Bit$init$builtin_bit(&$tmp38, $tmp39);
    if ($tmp38.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp40, 1);
        panda$core$Int64 $tmp41 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp40);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp41);
        panda$core$UInt8$init$builtin_uint8(&$tmp43, ((uint8_t) value37));
        panda$core$Char8$init$panda$core$UInt8(&$tmp42, $tmp43);
        self->data[self->_length.value] = $tmp42;
        $tmp44 = self;
        panda$core$Int64$init$builtin_int64(&$tmp45, 1);
        panda$core$Int64 $tmp46 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp44->_length, $tmp45);
        $tmp44->_length = $tmp46;
    }
    }
    else {
    bool $tmp48 = value37 < 2048;
    panda$core$Bit$init$builtin_bit(&$tmp47, $tmp48);
    if ($tmp47.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp49, 2);
        panda$core$Int64 $tmp50 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp49);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp50);
        panda$core$Int64$init$builtin_int64(&$tmp51, 0);
        panda$core$Int64 $tmp52 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp51);
        int32_t $tmp55 = value37 >> 6;
        int32_t $tmp56 = $tmp55 | 192;
        panda$core$UInt8$init$builtin_uint8(&$tmp54, ((uint8_t) $tmp56));
        panda$core$Char8$init$panda$core$UInt8(&$tmp53, $tmp54);
        self->data[$tmp52.value] = $tmp53;
        panda$core$Int64$init$builtin_int64(&$tmp57, 1);
        panda$core$Int64 $tmp58 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp57);
        int32_t $tmp61 = value37 & 63;
        int32_t $tmp62 = $tmp61 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp60, ((uint8_t) $tmp62));
        panda$core$Char8$init$panda$core$UInt8(&$tmp59, $tmp60);
        self->data[$tmp58.value] = $tmp59;
        $tmp63 = self;
        panda$core$Int64$init$builtin_int64(&$tmp64, 2);
        panda$core$Int64 $tmp65 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp63->_length, $tmp64);
        $tmp63->_length = $tmp65;
    }
    }
    else {
    bool $tmp67 = value37 < 65536;
    panda$core$Bit$init$builtin_bit(&$tmp66, $tmp67);
    if ($tmp66.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp68, 3);
        panda$core$Int64 $tmp69 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp68);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp69);
        panda$core$Int64$init$builtin_int64(&$tmp70, 0);
        panda$core$Int64 $tmp71 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp70);
        int32_t $tmp74 = value37 >> 12;
        int32_t $tmp75 = $tmp74 | 224;
        panda$core$UInt8$init$builtin_uint8(&$tmp73, ((uint8_t) $tmp75));
        panda$core$Char8$init$panda$core$UInt8(&$tmp72, $tmp73);
        self->data[$tmp71.value] = $tmp72;
        panda$core$Int64$init$builtin_int64(&$tmp76, 1);
        panda$core$Int64 $tmp77 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp76);
        int32_t $tmp80 = value37 >> 6;
        int32_t $tmp81 = $tmp80 & 63;
        int32_t $tmp82 = $tmp81 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp79, ((uint8_t) $tmp82));
        panda$core$Char8$init$panda$core$UInt8(&$tmp78, $tmp79);
        self->data[$tmp77.value] = $tmp78;
        panda$core$Int64$init$builtin_int64(&$tmp83, 2);
        panda$core$Int64 $tmp84 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp83);
        int32_t $tmp87 = value37 & 63;
        int32_t $tmp88 = $tmp87 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp86, ((uint8_t) $tmp88));
        panda$core$Char8$init$panda$core$UInt8(&$tmp85, $tmp86);
        self->data[$tmp84.value] = $tmp85;
        $tmp89 = self;
        panda$core$Int64$init$builtin_int64(&$tmp90, 3);
        panda$core$Int64 $tmp91 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp89->_length, $tmp90);
        $tmp89->_length = $tmp91;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp92, 4);
        panda$core$Int64 $tmp93 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp92);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp93);
        panda$core$Int64$init$builtin_int64(&$tmp94, 0);
        panda$core$Int64 $tmp95 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp94);
        int32_t $tmp98 = value37 >> 18;
        int32_t $tmp99 = $tmp98 | 240;
        panda$core$UInt8$init$builtin_uint8(&$tmp97, ((uint8_t) $tmp99));
        panda$core$Char8$init$panda$core$UInt8(&$tmp96, $tmp97);
        self->data[$tmp95.value] = $tmp96;
        panda$core$Int64$init$builtin_int64(&$tmp100, 1);
        panda$core$Int64 $tmp101 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp100);
        int32_t $tmp104 = value37 >> 12;
        int32_t $tmp105 = $tmp104 & 63;
        int32_t $tmp106 = $tmp105 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp103, ((uint8_t) $tmp106));
        panda$core$Char8$init$panda$core$UInt8(&$tmp102, $tmp103);
        self->data[$tmp101.value] = $tmp102;
        panda$core$Int64$init$builtin_int64(&$tmp107, 2);
        panda$core$Int64 $tmp108 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp107);
        int32_t $tmp111 = value37 >> 6;
        int32_t $tmp112 = $tmp111 & 63;
        int32_t $tmp113 = $tmp112 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp110, ((uint8_t) $tmp113));
        panda$core$Char8$init$panda$core$UInt8(&$tmp109, $tmp110);
        self->data[$tmp108.value] = $tmp109;
        panda$core$Int64$init$builtin_int64(&$tmp114, 3);
        panda$core$Int64 $tmp115 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp114);
        int32_t $tmp118 = value37 & 63;
        int32_t $tmp119 = $tmp118 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp117, ((uint8_t) $tmp119));
        panda$core$Char8$init$panda$core$UInt8(&$tmp116, $tmp117);
        self->data[$tmp115.value] = $tmp116;
        $tmp120 = self;
        panda$core$Int64$init$builtin_int64(&$tmp121, 4);
        panda$core$Int64 $tmp122 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp120->_length, $tmp121);
        $tmp120->_length = $tmp122;
    }
    }
    }
    }
}
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp124;
    panda$core$Int64 $tmp125;
    panda$core$Bit $tmp126;
    panda$core$MutableString* $tmp147;
    panda$core$Int64 $tmp123 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp123);
    panda$core$Int64$init$builtin_int64(&$tmp125, 0);
    panda$core$Bit$init$builtin_bit(&$tmp126, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp124, $tmp125, p_s->_length, $tmp126);
    int64_t $tmp128 = $tmp124.min.value;
    panda$core$Int64 i127 = { $tmp128 };
    int64_t $tmp130 = $tmp124.max.value;
    bool $tmp131 = $tmp124.inclusive.value;
    if ($tmp131) goto $l138; else goto $l139;
    $l138:;
    if ($tmp128 <= $tmp130) goto $l132; else goto $l134;
    $l139:;
    if ($tmp128 < $tmp130) goto $l132; else goto $l134;
    $l132:;
    {
        panda$core$Int64 $tmp140 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i127);
        self->data[$tmp140.value] = p_s->data[i127.value];
    }
    $l135:;
    int64_t $tmp142 = $tmp130 - i127.value;
    if ($tmp131) goto $l143; else goto $l144;
    $l143:;
    if ((uint64_t) $tmp142 >= 1) goto $l141; else goto $l134;
    $l144:;
    if ((uint64_t) $tmp142 > 1) goto $l141; else goto $l134;
    $l141:;
    i127.value += 1;
    goto $l132;
    $l134:;
    $tmp147 = self;
    panda$core$Int64 $tmp148 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp147->_length, p_s->_length);
    $tmp147->_length = $tmp148;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp150;
    panda$core$Int64 $tmp151;
    panda$core$Bit $tmp152;
    panda$core$MutableString* $tmp173;
    panda$core$Int64 $tmp149 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp149);
    panda$core$Int64$init$builtin_int64(&$tmp151, 0);
    panda$core$Bit$init$builtin_bit(&$tmp152, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp150, $tmp151, p_count, $tmp152);
    int64_t $tmp154 = $tmp150.min.value;
    panda$core$Int64 i153 = { $tmp154 };
    int64_t $tmp156 = $tmp150.max.value;
    bool $tmp157 = $tmp150.inclusive.value;
    if ($tmp157) goto $l164; else goto $l165;
    $l164:;
    if ($tmp154 <= $tmp156) goto $l158; else goto $l160;
    $l165:;
    if ($tmp154 < $tmp156) goto $l158; else goto $l160;
    $l158:;
    {
        panda$core$Int64 $tmp166 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i153);
        self->data[$tmp166.value] = p_chars[i153.value];
    }
    $l161:;
    int64_t $tmp168 = $tmp156 - i153.value;
    if ($tmp157) goto $l169; else goto $l170;
    $l169:;
    if ((uint64_t) $tmp168 >= 1) goto $l167; else goto $l160;
    $l170:;
    if ((uint64_t) $tmp168 > 1) goto $l167; else goto $l160;
    $l167:;
    i153.value += 1;
    goto $l158;
    $l160:;
    $tmp173 = self;
    panda$core$Int64 $tmp174 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp173->_length, p_count);
    $tmp173->_length = $tmp174;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp175;
    panda$core$String* $tmp177 = (($fn176) p_o->$class->vtable[0])(p_o);
    $tmp175 = $tmp177;
    panda$core$MutableString$append$panda$core$String(self, $tmp175);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
}
panda$core$Int64 panda$core$MutableString$length$R$panda$core$Int64(panda$core$MutableString* self) {
    panda$core$Int64 result178;
    panda$core$Int64 $tmp179;
    panda$core$MutableString$Index index180;
    panda$core$Equatable* $tmp185;
    panda$core$Equatable* $tmp187;
    panda$core$Int64 $tmp195;
    panda$core$Int64 $returnValue197;
    panda$core$Int64$init$builtin_int64(&$tmp179, 0);
    result178 = $tmp179;
    panda$core$MutableString$Index $tmp181 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    index180 = $tmp181;
    $l182:;
    panda$core$MutableString$Index$wrapper* $tmp186;
    $tmp186 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp186->value = index180;
    $tmp185 = ((panda$core$Equatable*) $tmp186);
    panda$core$MutableString$Index $tmp188 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$wrapper* $tmp189;
    $tmp189 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp189->value = $tmp188;
    $tmp187 = ((panda$core$Equatable*) $tmp189);
    ITable* $tmp190 = $tmp185->$class->itable;
    while ($tmp190->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp190 = $tmp190->next;
    }
    $fn192 $tmp191 = $tmp190->methods[1];
    panda$core$Bit $tmp193 = $tmp191($tmp185, $tmp187);
    bool $tmp184 = $tmp193.value;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp187));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp185));
    if (!$tmp184) goto $l183;
    {
        panda$core$MutableString$Index $tmp194 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, index180);
        index180 = $tmp194;
        panda$core$Int64$init$builtin_int64(&$tmp195, 1);
        panda$core$Int64 $tmp196 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result178, $tmp195);
        result178 = $tmp196;
    }
    goto $l182;
    $l183:;
    $returnValue197 = result178;
    return $returnValue197;
}
panda$core$Int64 panda$core$MutableString$byteLength$R$panda$core$Int64(panda$core$MutableString* self) {
    panda$core$Int64 $returnValue199;
    $returnValue199 = self->_length;
    return $returnValue199;
}
panda$core$MutableString$Index panda$core$MutableString$start$R$panda$core$MutableString$Index(panda$core$MutableString* self) {
    panda$core$MutableString$Index $returnValue201;
    panda$core$MutableString$Index $tmp202;
    panda$core$Int64 $tmp203;
    panda$core$Int64$init$builtin_int64(&$tmp203, 0);
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp202, $tmp203);
    $returnValue201 = $tmp202;
    return $returnValue201;
}
panda$core$MutableString$Index panda$core$MutableString$end$R$panda$core$MutableString$Index(panda$core$MutableString* self) {
    panda$core$MutableString$Index $returnValue205;
    panda$core$MutableString$Index $tmp206;
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp206, self->_length);
    $returnValue205 = $tmp206;
    return $returnValue205;
}
panda$core$MutableString$Index panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_i) {
    int64_t c212;
    panda$core$Bit $tmp214;
    panda$core$MutableString$Index $returnValue216;
    panda$core$MutableString$Index $tmp217;
    panda$core$Int64 $tmp218;
    panda$core$Bit $tmp221;
    panda$core$MutableString$Index $tmp223;
    panda$core$Int64 $tmp224;
    panda$core$Bit $tmp227;
    panda$core$MutableString$Index $tmp229;
    panda$core$Int64 $tmp230;
    panda$core$MutableString$Index $tmp233;
    panda$core$Int64 $tmp234;
    panda$core$Bit $tmp208 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp208.value) goto $l209; else goto $l210;
    $l210:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s211, (panda$core$Int64) { 189 });
    abort();
    $l209:;
    int64_t $tmp213 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c212 = $tmp213;
    bool $tmp215 = c212 >= 240;
    panda$core$Bit$init$builtin_bit(&$tmp214, $tmp215);
    if ($tmp214.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp218, 4);
        panda$core$Int64 $tmp219 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp218);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp217, $tmp219);
        $returnValue216 = $tmp217;
        return $returnValue216;
    }
    }
    bool $tmp222 = c212 >= 224;
    panda$core$Bit$init$builtin_bit(&$tmp221, $tmp222);
    if ($tmp221.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp224, 3);
        panda$core$Int64 $tmp225 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp224);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp223, $tmp225);
        $returnValue216 = $tmp223;
        return $returnValue216;
    }
    }
    bool $tmp228 = c212 >= 192;
    panda$core$Bit$init$builtin_bit(&$tmp227, $tmp228);
    if ($tmp227.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp230, 2);
        panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp230);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp229, $tmp231);
        $returnValue216 = $tmp229;
        return $returnValue216;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp234, 1);
    panda$core$Int64 $tmp235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp234);
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp233, $tmp235);
    $returnValue216 = $tmp233;
    return $returnValue216;
}
panda$core$MutableString$Index panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_i) {
    panda$core$Int64 $tmp237;
    panda$core$Int64 newValue242;
    panda$core$Int64 $tmp243;
    panda$core$Bit $tmp248;
    panda$core$Int64 $tmp255;
    panda$core$MutableString$Index $returnValue257;
    panda$core$MutableString$Index $tmp258;
    panda$core$Int64$init$builtin_int64(&$tmp237, 0);
    panda$core$Bit $tmp238 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, $tmp237);
    if ($tmp238.value) goto $l239; else goto $l240;
    $l240:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s241, (panda$core$Int64) { 210 });
    abort();
    $l239:;
    panda$core$Int64$init$builtin_int64(&$tmp243, 1);
    panda$core$Int64 $tmp244 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp243);
    newValue242 = $tmp244;
    $l245:;
    int64_t $tmp250 = ((int64_t) self->data[newValue242.value].value) & 255;
    bool $tmp251 = $tmp250 >= 128;
    bool $tmp249 = $tmp251;
    if (!$tmp249) goto $l252;
    int64_t $tmp253 = ((int64_t) self->data[newValue242.value].value) & 255;
    bool $tmp254 = $tmp253 < 192;
    $tmp249 = $tmp254;
    $l252:;
    panda$core$Bit$init$builtin_bit(&$tmp248, $tmp249);
    bool $tmp247 = $tmp248.value;
    if (!$tmp247) goto $l246;
    {
        panda$core$Int64$init$builtin_int64(&$tmp255, 1);
        panda$core$Int64 $tmp256 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue242, $tmp255);
        newValue242 = $tmp256;
    }
    goto $l245;
    $l246:;
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp258, newValue242);
    $returnValue257 = $tmp258;
    return $returnValue257;
}
panda$core$MutableString$Index panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_index, panda$core$Int64 p_offset) {
    panda$core$MutableString$Index result260;
    panda$core$Int64 $tmp261;
    panda$core$Range$LTpanda$core$Int64$GT $tmp263;
    panda$core$Int64 $tmp264;
    panda$core$Bit $tmp265;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp286;
    panda$core$Int64 $tmp287;
    panda$core$Int64 $tmp288;
    panda$core$Bit $tmp289;
    panda$core$MutableString$Index $returnValue320;
    result260 = p_index;
    panda$core$Int64$init$builtin_int64(&$tmp261, 0);
    panda$core$Bit $tmp262 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, $tmp261);
    if ($tmp262.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp264, 0);
        panda$core$Bit$init$builtin_bit(&$tmp265, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp263, $tmp264, p_offset, $tmp265);
        int64_t $tmp267 = $tmp263.min.value;
        panda$core$Int64 i266 = { $tmp267 };
        int64_t $tmp269 = $tmp263.max.value;
        bool $tmp270 = $tmp263.inclusive.value;
        if ($tmp270) goto $l277; else goto $l278;
        $l277:;
        if ($tmp267 <= $tmp269) goto $l271; else goto $l273;
        $l278:;
        if ($tmp267 < $tmp269) goto $l271; else goto $l273;
        $l271:;
        {
            panda$core$MutableString$Index $tmp279 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, result260);
            result260 = $tmp279;
        }
        $l274:;
        int64_t $tmp281 = $tmp269 - i266.value;
        if ($tmp270) goto $l282; else goto $l283;
        $l282:;
        if ((uint64_t) $tmp281 >= 1) goto $l280; else goto $l273;
        $l283:;
        if ((uint64_t) $tmp281 > 1) goto $l280; else goto $l273;
        $l280:;
        i266.value += 1;
        goto $l271;
        $l273:;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp287, 0);
        panda$core$Int64$init$builtin_int64(&$tmp288, -1);
        panda$core$Bit$init$builtin_bit(&$tmp289, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp286, $tmp287, p_offset, $tmp288, $tmp289);
        int64_t $tmp291 = $tmp286.start.value;
        panda$core$Int64 i290 = { $tmp291 };
        int64_t $tmp293 = $tmp286.end.value;
        int64_t $tmp294 = $tmp286.step.value;
        bool $tmp295 = $tmp286.inclusive.value;
        bool $tmp302 = $tmp294 > 0;
        if ($tmp302) goto $l300; else goto $l301;
        $l300:;
        if ($tmp295) goto $l303; else goto $l304;
        $l303:;
        if ($tmp291 <= $tmp293) goto $l296; else goto $l298;
        $l304:;
        if ($tmp291 < $tmp293) goto $l296; else goto $l298;
        $l301:;
        if ($tmp295) goto $l305; else goto $l306;
        $l305:;
        if ($tmp291 >= $tmp293) goto $l296; else goto $l298;
        $l306:;
        if ($tmp291 > $tmp293) goto $l296; else goto $l298;
        $l296:;
        {
            panda$core$MutableString$Index $tmp308 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, result260);
            result260 = $tmp308;
        }
        $l299:;
        if ($tmp302) goto $l310; else goto $l311;
        $l310:;
        int64_t $tmp312 = $tmp293 - i290.value;
        if ($tmp295) goto $l313; else goto $l314;
        $l313:;
        if ((uint64_t) $tmp312 >= $tmp294) goto $l309; else goto $l298;
        $l314:;
        if ((uint64_t) $tmp312 > $tmp294) goto $l309; else goto $l298;
        $l311:;
        int64_t $tmp316 = i290.value - $tmp293;
        if ($tmp295) goto $l317; else goto $l318;
        $l317:;
        if ((uint64_t) $tmp316 >= -$tmp294) goto $l309; else goto $l298;
        $l318:;
        if ((uint64_t) $tmp316 > -$tmp294) goto $l309; else goto $l298;
        $l309:;
        i290.value += $tmp294;
        goto $l296;
        $l298:;
    }
    }
    $returnValue320 = result260;
    return $returnValue320;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$MutableString$Index$nullable $returnValue322;
    panda$core$MutableString$Index $tmp323 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$nullable $tmp324 = panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(self, p_s, $tmp323);
    $returnValue322 = $tmp324;
    return $returnValue322;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s, panda$core$MutableString$Index p_start) {
    panda$core$MutableString$Index$nullable $returnValue327;
    panda$core$Range$LTpanda$core$Int64$GT $tmp329;
    panda$core$Bit $tmp331;
    panda$core$Range$LTpanda$core$Int64$GT $tmp345;
    panda$core$Int64 $tmp346;
    panda$core$Bit $tmp347;
    panda$core$MutableString$Index $tmp369;
    panda$core$Bit $tmp326 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp326.value) {
    {
        $returnValue327 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
        return $returnValue327;
    }
    }
    panda$core$Int64 $tmp330 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Bit$init$builtin_bit(&$tmp331, true);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp329, p_start.value, $tmp330, $tmp331);
    int64_t $tmp333 = $tmp329.min.value;
    panda$core$Int64 i332 = { $tmp333 };
    int64_t $tmp335 = $tmp329.max.value;
    bool $tmp336 = $tmp329.inclusive.value;
    if ($tmp336) goto $l343; else goto $l344;
    $l343:;
    if ($tmp333 <= $tmp335) goto $l337; else goto $l339;
    $l344:;
    if ($tmp333 < $tmp335) goto $l337; else goto $l339;
    $l337:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp346, 0);
        panda$core$Bit$init$builtin_bit(&$tmp347, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp345, $tmp346, p_s->_length, $tmp347);
        int64_t $tmp349 = $tmp345.min.value;
        panda$core$Int64 j348 = { $tmp349 };
        int64_t $tmp351 = $tmp345.max.value;
        bool $tmp352 = $tmp345.inclusive.value;
        if ($tmp352) goto $l359; else goto $l360;
        $l359:;
        if ($tmp349 <= $tmp351) goto $l353; else goto $l355;
        $l360:;
        if ($tmp349 < $tmp351) goto $l353; else goto $l355;
        $l353:;
        {
            panda$core$Int64 $tmp361 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i332, j348);
            panda$core$Bit $tmp362 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp361.value], p_s->data[j348.value]);
            if ($tmp362.value) {
            {
                goto $l340;
            }
            }
        }
        $l356:;
        int64_t $tmp364 = $tmp351 - j348.value;
        if ($tmp352) goto $l365; else goto $l366;
        $l365:;
        if ((uint64_t) $tmp364 >= 1) goto $l363; else goto $l355;
        $l366:;
        if ((uint64_t) $tmp364 > 1) goto $l363; else goto $l355;
        $l363:;
        j348.value += 1;
        goto $l353;
        $l355:;
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp369, i332);
        $returnValue327 = ((panda$core$MutableString$Index$nullable) { $tmp369, true });
        return $returnValue327;
    }
    $l340:;
    int64_t $tmp372 = $tmp335 - i332.value;
    if ($tmp336) goto $l373; else goto $l374;
    $l373:;
    if ((uint64_t) $tmp372 >= 1) goto $l371; else goto $l339;
    $l374:;
    if ((uint64_t) $tmp372 > 1) goto $l371; else goto $l339;
    $l371:;
    i332.value += 1;
    goto $l337;
    $l339:;
    $returnValue327 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
    return $returnValue327;
}
panda$core$Bit panda$core$MutableString$contains$panda$core$Char8$R$panda$core$Bit(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp378;
    panda$core$Int64 $tmp379;
    panda$core$Bit $tmp380;
    panda$core$Bit $returnValue395;
    panda$core$Bit $tmp396;
    panda$core$Bit $tmp404;
    panda$core$Int64$init$builtin_int64(&$tmp379, 0);
    panda$core$Bit$init$builtin_bit(&$tmp380, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp378, $tmp379, self->_length, $tmp380);
    int64_t $tmp382 = $tmp378.min.value;
    panda$core$Int64 i381 = { $tmp382 };
    int64_t $tmp384 = $tmp378.max.value;
    bool $tmp385 = $tmp378.inclusive.value;
    if ($tmp385) goto $l392; else goto $l393;
    $l392:;
    if ($tmp382 <= $tmp384) goto $l386; else goto $l388;
    $l393:;
    if ($tmp382 < $tmp384) goto $l386; else goto $l388;
    $l386:;
    {
        panda$core$Bit $tmp394 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i381.value], p_c);
        if ($tmp394.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp396, true);
            $returnValue395 = $tmp396;
            return $returnValue395;
        }
        }
    }
    $l389:;
    int64_t $tmp399 = $tmp384 - i381.value;
    if ($tmp385) goto $l400; else goto $l401;
    $l400:;
    if ((uint64_t) $tmp399 >= 1) goto $l398; else goto $l388;
    $l401:;
    if ((uint64_t) $tmp399 > 1) goto $l398; else goto $l388;
    $l398:;
    i381.value += 1;
    goto $l386;
    $l388:;
    panda$core$Bit$init$builtin_bit(&$tmp404, false);
    $returnValue395 = $tmp404;
    return $returnValue395;
}
panda$core$Bit panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue406;
    panda$core$MutableString$Index$nullable $tmp407 = panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q(self, p_s);
    $returnValue406 = ((panda$core$Bit) { $tmp407.nonnull });
    return $returnValue406;
}
panda$core$Bit panda$core$MutableString$startsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue410;
    panda$core$Bit $tmp411;
    panda$core$Range$LTpanda$core$Int64$GT $tmp413;
    panda$core$Int64 $tmp414;
    panda$core$Bit $tmp415;
    panda$core$Bit $tmp430;
    panda$core$Bit $tmp438;
    panda$core$Bit $tmp409 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp409.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp411, false);
        $returnValue410 = $tmp411;
        return $returnValue410;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp414, 0);
    panda$core$Bit$init$builtin_bit(&$tmp415, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp413, $tmp414, p_other->_length, $tmp415);
    int64_t $tmp417 = $tmp413.min.value;
    panda$core$Int64 i416 = { $tmp417 };
    int64_t $tmp419 = $tmp413.max.value;
    bool $tmp420 = $tmp413.inclusive.value;
    if ($tmp420) goto $l427; else goto $l428;
    $l427:;
    if ($tmp417 <= $tmp419) goto $l421; else goto $l423;
    $l428:;
    if ($tmp417 < $tmp419) goto $l421; else goto $l423;
    $l421:;
    {
        panda$core$Bit $tmp429 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i416.value], p_other->data[i416.value]);
        if ($tmp429.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp430, false);
            $returnValue410 = $tmp430;
            return $returnValue410;
        }
        }
    }
    $l424:;
    int64_t $tmp433 = $tmp419 - i416.value;
    if ($tmp420) goto $l434; else goto $l435;
    $l434:;
    if ((uint64_t) $tmp433 >= 1) goto $l432; else goto $l423;
    $l435:;
    if ((uint64_t) $tmp433 > 1) goto $l432; else goto $l423;
    $l432:;
    i416.value += 1;
    goto $l421;
    $l423:;
    panda$core$Bit$init$builtin_bit(&$tmp438, true);
    $returnValue410 = $tmp438;
    return $returnValue410;
}
panda$core$Bit panda$core$MutableString$endsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue441;
    panda$core$Bit $tmp442;
    panda$core$Range$LTpanda$core$Int64$GT $tmp444;
    panda$core$Int64 $tmp445;
    panda$core$Bit $tmp446;
    panda$core$Bit $tmp463;
    panda$core$Bit $tmp471;
    panda$core$Bit $tmp440 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp440.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp442, false);
        $returnValue441 = $tmp442;
        return $returnValue441;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp445, 0);
    panda$core$Bit$init$builtin_bit(&$tmp446, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp444, $tmp445, p_other->_length, $tmp446);
    int64_t $tmp448 = $tmp444.min.value;
    panda$core$Int64 i447 = { $tmp448 };
    int64_t $tmp450 = $tmp444.max.value;
    bool $tmp451 = $tmp444.inclusive.value;
    if ($tmp451) goto $l458; else goto $l459;
    $l458:;
    if ($tmp448 <= $tmp450) goto $l452; else goto $l454;
    $l459:;
    if ($tmp448 < $tmp450) goto $l452; else goto $l454;
    $l452:;
    {
        panda$core$Int64 $tmp460 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp461 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp460, i447);
        panda$core$Bit $tmp462 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp461.value], p_other->data[i447.value]);
        if ($tmp462.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp463, false);
            $returnValue441 = $tmp463;
            return $returnValue441;
        }
        }
    }
    $l455:;
    int64_t $tmp466 = $tmp450 - i447.value;
    if ($tmp451) goto $l467; else goto $l468;
    $l467:;
    if ((uint64_t) $tmp466 >= 1) goto $l465; else goto $l454;
    $l468:;
    if ((uint64_t) $tmp466 > 1) goto $l465; else goto $l454;
    $l465:;
    i447.value += 1;
    goto $l452;
    $l454:;
    panda$core$Bit$init$builtin_bit(&$tmp471, true);
    $returnValue441 = $tmp471;
    return $returnValue441;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$MutableString$Index$nullable $returnValue473;
    panda$core$MutableString$Index $tmp474 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$nullable $tmp475 = panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(self, p_s, $tmp474);
    $returnValue473 = $tmp475;
    return $returnValue473;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s, panda$core$MutableString$Index p_start) {
    panda$core$MutableString$Index$nullable $returnValue478;
    panda$core$Int64 startPos480;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp483;
    panda$core$Int64 $tmp484;
    panda$core$Int64 $tmp485;
    panda$core$Bit $tmp486;
    panda$core$Range$LTpanda$core$Int64$GT $tmp505;
    panda$core$Int64 $tmp506;
    panda$core$Bit $tmp507;
    panda$core$MutableString$Index $tmp529;
    panda$core$Bit $tmp477 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp477.value) {
    {
        $returnValue478 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
        return $returnValue478;
    }
    }
    panda$core$Int64 $tmp481 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp482 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp481);
    startPos480 = $tmp482;
    panda$core$Int64$init$builtin_int64(&$tmp484, 0);
    panda$core$Int64$init$builtin_int64(&$tmp485, -1);
    panda$core$Bit$init$builtin_bit(&$tmp486, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp483, startPos480, $tmp484, $tmp485, $tmp486);
    int64_t $tmp488 = $tmp483.start.value;
    panda$core$Int64 i487 = { $tmp488 };
    int64_t $tmp490 = $tmp483.end.value;
    int64_t $tmp491 = $tmp483.step.value;
    bool $tmp492 = $tmp483.inclusive.value;
    bool $tmp499 = $tmp491 > 0;
    if ($tmp499) goto $l497; else goto $l498;
    $l497:;
    if ($tmp492) goto $l500; else goto $l501;
    $l500:;
    if ($tmp488 <= $tmp490) goto $l493; else goto $l495;
    $l501:;
    if ($tmp488 < $tmp490) goto $l493; else goto $l495;
    $l498:;
    if ($tmp492) goto $l502; else goto $l503;
    $l502:;
    if ($tmp488 >= $tmp490) goto $l493; else goto $l495;
    $l503:;
    if ($tmp488 > $tmp490) goto $l493; else goto $l495;
    $l493:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp506, 0);
        panda$core$Bit$init$builtin_bit(&$tmp507, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp505, $tmp506, p_s->_length, $tmp507);
        int64_t $tmp509 = $tmp505.min.value;
        panda$core$Int64 j508 = { $tmp509 };
        int64_t $tmp511 = $tmp505.max.value;
        bool $tmp512 = $tmp505.inclusive.value;
        if ($tmp512) goto $l519; else goto $l520;
        $l519:;
        if ($tmp509 <= $tmp511) goto $l513; else goto $l515;
        $l520:;
        if ($tmp509 < $tmp511) goto $l513; else goto $l515;
        $l513:;
        {
            panda$core$Int64 $tmp521 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i487, j508);
            panda$core$Bit $tmp522 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp521.value], p_s->data[j508.value]);
            if ($tmp522.value) {
            {
                goto $l496;
            }
            }
        }
        $l516:;
        int64_t $tmp524 = $tmp511 - j508.value;
        if ($tmp512) goto $l525; else goto $l526;
        $l525:;
        if ((uint64_t) $tmp524 >= 1) goto $l523; else goto $l515;
        $l526:;
        if ((uint64_t) $tmp524 > 1) goto $l523; else goto $l515;
        $l523:;
        j508.value += 1;
        goto $l513;
        $l515:;
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp529, i487);
        $returnValue478 = ((panda$core$MutableString$Index$nullable) { $tmp529, true });
        return $returnValue478;
    }
    $l496:;
    if ($tmp499) goto $l532; else goto $l533;
    $l532:;
    int64_t $tmp534 = $tmp490 - i487.value;
    if ($tmp492) goto $l535; else goto $l536;
    $l535:;
    if ((uint64_t) $tmp534 >= $tmp491) goto $l531; else goto $l495;
    $l536:;
    if ((uint64_t) $tmp534 > $tmp491) goto $l531; else goto $l495;
    $l533:;
    int64_t $tmp538 = i487.value - $tmp490;
    if ($tmp492) goto $l539; else goto $l540;
    $l539:;
    if ((uint64_t) $tmp538 >= -$tmp491) goto $l531; else goto $l495;
    $l540:;
    if ((uint64_t) $tmp538 > -$tmp491) goto $l531; else goto $l495;
    $l531:;
    i487.value += $tmp491;
    goto $l493;
    $l495:;
    $returnValue478 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
    return $returnValue478;
}
panda$core$Bit panda$core$MutableString$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue543;
    panda$core$Matcher* $tmp544;
    panda$core$String* $tmp545;
    panda$core$Bit $tmp548;
    panda$core$String* $tmp546 = panda$core$MutableString$convert$R$panda$core$String(self);
    $tmp545 = $tmp546;
    panda$core$Matcher* $tmp547 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, $tmp545);
    $tmp544 = $tmp547;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp548, $tmp544);
    $returnValue543 = $tmp548;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
    return $returnValue543;
}
panda$core$Bit panda$core$MutableString$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue550;
    panda$core$Matcher* $tmp551;
    panda$core$String* $tmp552;
    panda$core$String* $tmp553 = panda$core$MutableString$convert$R$panda$core$String(self);
    $tmp552 = $tmp553;
    panda$core$Matcher* $tmp554 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, $tmp552);
    $tmp551 = $tmp554;
    panda$core$Bit $tmp555 = panda$core$Matcher$find$R$panda$core$Bit($tmp551);
    $returnValue550 = $tmp555;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
    return $returnValue550;
}
void panda$core$MutableString$trim(panda$core$MutableString* self) {
    panda$core$MutableString$Index i557;
    panda$core$Equatable* $tmp563;
    panda$core$Equatable* $tmp565;
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp577;
    panda$core$Bit $tmp579;
    panda$core$Int64 $tmp581;
    panda$core$Equatable* $tmp589;
    panda$core$Equatable* $tmp591;
    panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp603;
    panda$core$Bit $tmp605;
    panda$core$MutableString$Index $tmp558 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    i557 = $tmp558;
    $l559:;
    panda$core$MutableString$Index$wrapper* $tmp564;
    $tmp564 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp564->value = i557;
    $tmp563 = ((panda$core$Equatable*) $tmp564);
    panda$core$MutableString$Index $tmp566 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$wrapper* $tmp567;
    $tmp567 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp567->value = $tmp566;
    $tmp565 = ((panda$core$Equatable*) $tmp567);
    ITable* $tmp568 = $tmp563->$class->itable;
    while ($tmp568->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp568 = $tmp568->next;
    }
    $fn570 $tmp569 = $tmp568->methods[1];
    panda$core$Bit $tmp571 = $tmp569($tmp563, $tmp565);
    bool $tmp562 = $tmp571.value;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
    if (!$tmp562) goto $l572;
    panda$core$Char32 $tmp573 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(self, i557);
    panda$core$Bit $tmp574 = panda$core$Char32$isWhitespace$R$panda$core$Bit($tmp573);
    $tmp562 = $tmp574.value;
    $l572:;
    panda$core$Bit $tmp575 = { $tmp562 };
    bool $tmp561 = $tmp575.value;
    if (!$tmp561) goto $l560;
    {
        panda$core$MutableString$Index $tmp576 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, i557);
        i557 = $tmp576;
    }
    goto $l559;
    $l560:;
    panda$core$MutableString$Index $tmp578 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$Bit$init$builtin_bit(&$tmp579, false);
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp577, $tmp578, i557, $tmp579);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp577, &$s580);
    panda$core$Int64$init$builtin_int64(&$tmp581, 0);
    panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp581);
    if ($tmp582.value) {
    {
        return;
    }
    }
    panda$core$MutableString$Index $tmp583 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp584 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, $tmp583);
    i557 = $tmp584;
    $l585:;
    panda$core$MutableString$Index$wrapper* $tmp590;
    $tmp590 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp590->value = i557;
    $tmp589 = ((panda$core$Equatable*) $tmp590);
    panda$core$MutableString$Index $tmp592 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$wrapper* $tmp593;
    $tmp593 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp593->value = $tmp592;
    $tmp591 = ((panda$core$Equatable*) $tmp593);
    ITable* $tmp594 = $tmp589->$class->itable;
    while ($tmp594->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp594 = $tmp594->next;
    }
    $fn596 $tmp595 = $tmp594->methods[1];
    panda$core$Bit $tmp597 = $tmp595($tmp589, $tmp591);
    bool $tmp588 = $tmp597.value;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp591));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
    if (!$tmp588) goto $l598;
    panda$core$Char32 $tmp599 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(self, i557);
    panda$core$Bit $tmp600 = panda$core$Char32$isWhitespace$R$panda$core$Bit($tmp599);
    $tmp588 = $tmp600.value;
    $l598:;
    panda$core$Bit $tmp601 = { $tmp588 };
    bool $tmp587 = $tmp601.value;
    if (!$tmp587) goto $l586;
    {
        panda$core$MutableString$Index $tmp602 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, i557);
        i557 = $tmp602;
    }
    goto $l585;
    $l586:;
    panda$core$MutableString$Index $tmp604 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, i557);
    panda$core$Bit$init$builtin_bit(&$tmp605, false);
    panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(&$tmp603, ((panda$core$MutableString$Index$nullable) { $tmp604, true }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp605);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(self, $tmp603, &$s606);
}
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$Bit $tmp607;
    panda$core$Bit$init$builtin_bit(&$tmp607, true);
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(self, p_search, p_replacement, $tmp607);
}
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$Matcher* matcher611 = NULL;
    panda$core$Matcher* $tmp612;
    panda$core$Matcher* $tmp613;
    panda$core$String* $tmp614;
    int $tmp610;
    {
        panda$core$String* $tmp615 = panda$core$MutableString$convert$R$panda$core$String(self);
        $tmp614 = $tmp615;
        panda$core$Matcher* $tmp616 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, $tmp614);
        $tmp613 = $tmp616;
        $tmp612 = $tmp613;
        matcher611 = $tmp612;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp613));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp614));
        panda$core$MutableString$clear(self);
        $l617:;
        panda$core$Bit $tmp620 = panda$core$Matcher$find$R$panda$core$Bit(matcher611);
        bool $tmp619 = $tmp620.value;
        if (!$tmp619) goto $l618;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher611, self, p_replacement, p_allowGroupReferences);
        }
        goto $l617;
        $l618:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher611, self);
    }
    $tmp610 = -1;
    goto $l608;
    $l608:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matcher611));
    matcher611 = NULL;
    switch ($tmp610) {
        case -1: goto $l621;
    }
    $l621:;
}
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$Matcher* matcher625 = NULL;
    panda$core$Matcher* $tmp626;
    panda$core$Matcher* $tmp627;
    panda$core$String* $tmp628;
    panda$core$String* $tmp635;
    panda$core$Object* $tmp636;
    panda$core$String* $tmp637;
    panda$core$Int64 $tmp638;
    panda$core$Object* $tmp640;
    panda$core$Bit $tmp645;
    int $tmp624;
    {
        panda$core$String* $tmp629 = panda$core$MutableString$convert$R$panda$core$String(self);
        $tmp628 = $tmp629;
        panda$core$Matcher* $tmp630 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, $tmp628);
        $tmp627 = $tmp630;
        $tmp626 = $tmp627;
        matcher625 = $tmp626;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp626));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
        panda$core$MutableString$clear(self);
        $l631:;
        panda$core$Bit $tmp634 = panda$core$Matcher$find$R$panda$core$Bit(matcher625);
        bool $tmp633 = $tmp634.value;
        if (!$tmp633) goto $l632;
        {
            panda$core$Int64$init$builtin_int64(&$tmp638, 0);
            panda$core$String* $tmp639 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher625, $tmp638);
            $tmp637 = $tmp639;
            if (p_replacement->target) {
                $tmp640 = (($fn641) p_replacement->pointer)(p_replacement->target, $tmp637);
            } else {
                $tmp640 = (($fn642) p_replacement->pointer)($tmp637);
            }
            $tmp636 = $tmp640;
            panda$core$String* $tmp644 = (($fn643) $tmp636->$class->vtable[0])($tmp636);
            $tmp635 = $tmp644;
            panda$core$Bit$init$builtin_bit(&$tmp645, false);
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher625, self, $tmp635, $tmp645);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
            panda$core$Panda$unref$panda$core$Object$Q($tmp636);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
        }
        goto $l631;
        $l632:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher625, self);
    }
    $tmp624 = -1;
    goto $l622;
    $l622:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matcher625));
    matcher625 = NULL;
    switch ($tmp624) {
        case -1: goto $l646;
    }
    $l646:;
}
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$Matcher* matcher650 = NULL;
    panda$core$Matcher* $tmp651;
    panda$core$Matcher* $tmp652;
    panda$core$String* $tmp653;
    panda$collections$Array* groups663 = NULL;
    panda$collections$Array* $tmp664;
    panda$collections$Array* $tmp665;
    panda$core$Range$LTpanda$core$Int64$GT $tmp667;
    panda$core$Int64 $tmp668;
    panda$core$Int64 $tmp669;
    panda$core$Bit $tmp670;
    panda$core$String* $tmp684;
    panda$core$String* $tmp692;
    panda$core$Object* $tmp693;
    panda$core$Object* $tmp694;
    panda$core$Bit $tmp699;
    int $tmp649;
    {
        panda$core$String* $tmp654 = panda$core$MutableString$convert$R$panda$core$String(self);
        $tmp653 = $tmp654;
        panda$core$Matcher* $tmp655 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, $tmp653);
        $tmp652 = $tmp655;
        $tmp651 = $tmp652;
        matcher650 = $tmp651;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
        panda$core$MutableString$clear(self);
        $l656:;
        panda$core$Bit $tmp659 = panda$core$Matcher$find$R$panda$core$Bit(matcher650);
        bool $tmp658 = $tmp659.value;
        if (!$tmp658) goto $l657;
        {
            int $tmp662;
            {
                panda$collections$Array* $tmp666 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp666);
                $tmp665 = $tmp666;
                $tmp664 = $tmp665;
                groups663 = $tmp664;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
                panda$core$Int64$init$builtin_int64(&$tmp668, 0);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp669, matcher650);
                panda$core$Bit$init$builtin_bit(&$tmp670, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp667, $tmp668, $tmp669, $tmp670);
                int64_t $tmp672 = $tmp667.min.value;
                panda$core$Int64 i671 = { $tmp672 };
                int64_t $tmp674 = $tmp667.max.value;
                bool $tmp675 = $tmp667.inclusive.value;
                if ($tmp675) goto $l682; else goto $l683;
                $l682:;
                if ($tmp672 <= $tmp674) goto $l676; else goto $l678;
                $l683:;
                if ($tmp672 < $tmp674) goto $l676; else goto $l678;
                $l676:;
                {
                    panda$core$String* $tmp685 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher650, i671);
                    $tmp684 = $tmp685;
                    panda$collections$Array$add$panda$collections$Array$T(groups663, ((panda$core$Object*) $tmp684));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
                }
                $l679:;
                int64_t $tmp687 = $tmp674 - i671.value;
                if ($tmp675) goto $l688; else goto $l689;
                $l688:;
                if ((uint64_t) $tmp687 >= 1) goto $l686; else goto $l678;
                $l689:;
                if ((uint64_t) $tmp687 > 1) goto $l686; else goto $l678;
                $l686:;
                i671.value += 1;
                goto $l676;
                $l678:;
                if (p_replacement->target) {
                    $tmp694 = (($fn695) p_replacement->pointer)(p_replacement->target, ((panda$collections$ListView*) groups663));
                } else {
                    $tmp694 = (($fn696) p_replacement->pointer)(((panda$collections$ListView*) groups663));
                }
                $tmp693 = $tmp694;
                panda$core$String* $tmp698 = (($fn697) $tmp693->$class->vtable[0])($tmp693);
                $tmp692 = $tmp698;
                panda$core$Bit$init$builtin_bit(&$tmp699, false);
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher650, self, $tmp692, $tmp699);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
                panda$core$Panda$unref$panda$core$Object$Q($tmp693);
            }
            $tmp662 = -1;
            goto $l660;
            $l660:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) groups663));
            groups663 = NULL;
            switch ($tmp662) {
                case -1: goto $l700;
            }
            $l700:;
        }
        goto $l656;
        $l657:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher650, self);
    }
    $tmp649 = -1;
    goto $l647;
    $l647:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) matcher650));
    matcher650 = NULL;
    switch ($tmp649) {
        case -1: goto $l701;
    }
    $l701:;
}
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(panda$core$MutableString* self, panda$core$MutableString$Index p_index) {
    panda$core$Int64 idx702;
    panda$core$Char8 c703;
    panda$core$Int32 result704;
    panda$core$Bit $tmp706;
    panda$core$Char32 $returnValue709;
    panda$core$Char32 $tmp710;
    panda$core$Bit $tmp712;
    panda$core$Int64 $tmp715;
    panda$core$Int32 $tmp721;
    panda$core$Int32 $tmp723;
    panda$core$Int64 $tmp725;
    panda$core$Int32 $tmp728;
    panda$core$Char32 $tmp731;
    panda$core$Bit $tmp733;
    panda$core$Int64 $tmp736;
    panda$core$Int32 $tmp742;
    panda$core$Int32 $tmp744;
    panda$core$Int64 $tmp746;
    panda$core$Int32 $tmp749;
    panda$core$Int32 $tmp751;
    panda$core$Int64 $tmp754;
    panda$core$Int32 $tmp757;
    panda$core$Char32 $tmp760;
    panda$core$Int64 $tmp762;
    panda$core$Int32 $tmp768;
    panda$core$Int32 $tmp770;
    panda$core$Int64 $tmp772;
    panda$core$Int32 $tmp775;
    panda$core$Int32 $tmp777;
    panda$core$Int64 $tmp780;
    panda$core$Int32 $tmp783;
    panda$core$Int32 $tmp785;
    panda$core$Int64 $tmp788;
    panda$core$Int32 $tmp791;
    panda$core$Char32 $tmp794;
    idx702 = p_index.value;
    c703 = self->data[idx702.value];
    panda$core$Int32 $tmp705 = panda$core$Char8$convert$R$panda$core$Int32(c703);
    result704 = $tmp705;
    int64_t $tmp707 = ((int64_t) c703.value) & 255;
    bool $tmp708 = $tmp707 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp706, $tmp708);
    if ($tmp706.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp710, result704);
        $returnValue709 = $tmp710;
        return $returnValue709;
    }
    }
    int64_t $tmp713 = ((int64_t) c703.value) & 255;
    bool $tmp714 = $tmp713 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp712, $tmp714);
    if ($tmp712.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp715, 1);
        panda$core$Int64 $tmp716 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx702, $tmp715);
        panda$core$Bit $tmp717 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp716, self->_length);
        if ($tmp717.value) goto $l718; else goto $l719;
        $l719:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s720, (panda$core$Int64) { 466 });
        abort();
        $l718:;
        panda$core$Int32$init$builtin_int32(&$tmp721, 31);
        panda$core$Int32 $tmp722 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result704, $tmp721);
        panda$core$Int32$init$builtin_int32(&$tmp723, 6);
        panda$core$Int32 $tmp724 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp722, $tmp723);
        panda$core$Int64$init$builtin_int64(&$tmp725, 1);
        panda$core$Int64 $tmp726 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx702, $tmp725);
        panda$core$Int32 $tmp727 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp726.value]);
        panda$core$Int32$init$builtin_int32(&$tmp728, 63);
        panda$core$Int32 $tmp729 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp727, $tmp728);
        panda$core$Int32 $tmp730 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp724, $tmp729);
        result704 = $tmp730;
        panda$core$Char32$init$panda$core$Int32(&$tmp731, result704);
        $returnValue709 = $tmp731;
        return $returnValue709;
    }
    }
    int64_t $tmp734 = ((int64_t) c703.value) & 255;
    bool $tmp735 = $tmp734 < 240;
    panda$core$Bit$init$builtin_bit(&$tmp733, $tmp735);
    if ($tmp733.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp736, 2);
        panda$core$Int64 $tmp737 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx702, $tmp736);
        panda$core$Bit $tmp738 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp737, self->_length);
        if ($tmp738.value) goto $l739; else goto $l740;
        $l740:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s741, (panda$core$Int64) { 471 });
        abort();
        $l739:;
        panda$core$Int32$init$builtin_int32(&$tmp742, 15);
        panda$core$Int32 $tmp743 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result704, $tmp742);
        panda$core$Int32$init$builtin_int32(&$tmp744, 12);
        panda$core$Int32 $tmp745 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp743, $tmp744);
        panda$core$Int64$init$builtin_int64(&$tmp746, 1);
        panda$core$Int64 $tmp747 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx702, $tmp746);
        panda$core$Int32 $tmp748 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp747.value]);
        panda$core$Int32$init$builtin_int32(&$tmp749, 63);
        panda$core$Int32 $tmp750 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp748, $tmp749);
        panda$core$Int32$init$builtin_int32(&$tmp751, 6);
        panda$core$Int32 $tmp752 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp750, $tmp751);
        panda$core$Int32 $tmp753 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp745, $tmp752);
        panda$core$Int64$init$builtin_int64(&$tmp754, 2);
        panda$core$Int64 $tmp755 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx702, $tmp754);
        panda$core$Int32 $tmp756 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp755.value]);
        panda$core$Int32$init$builtin_int32(&$tmp757, 63);
        panda$core$Int32 $tmp758 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp756, $tmp757);
        panda$core$Int32 $tmp759 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp753, $tmp758);
        result704 = $tmp759;
        panda$core$Char32$init$panda$core$Int32(&$tmp760, result704);
        $returnValue709 = $tmp760;
        return $returnValue709;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp762, 3);
    panda$core$Int64 $tmp763 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx702, $tmp762);
    panda$core$Bit $tmp764 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp763, self->_length);
    if ($tmp764.value) goto $l765; else goto $l766;
    $l766:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s767, (panda$core$Int64) { 476 });
    abort();
    $l765:;
    panda$core$Int32$init$builtin_int32(&$tmp768, 7);
    panda$core$Int32 $tmp769 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result704, $tmp768);
    panda$core$Int32$init$builtin_int32(&$tmp770, 18);
    panda$core$Int32 $tmp771 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp769, $tmp770);
    panda$core$Int64$init$builtin_int64(&$tmp772, 1);
    panda$core$Int64 $tmp773 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx702, $tmp772);
    panda$core$Int32 $tmp774 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp773.value]);
    panda$core$Int32$init$builtin_int32(&$tmp775, 63);
    panda$core$Int32 $tmp776 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp774, $tmp775);
    panda$core$Int32$init$builtin_int32(&$tmp777, 12);
    panda$core$Int32 $tmp778 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp776, $tmp777);
    panda$core$Int32 $tmp779 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp771, $tmp778);
    panda$core$Int64$init$builtin_int64(&$tmp780, 2);
    panda$core$Int64 $tmp781 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx702, $tmp780);
    panda$core$Int32 $tmp782 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp781.value]);
    panda$core$Int32$init$builtin_int32(&$tmp783, 63);
    panda$core$Int32 $tmp784 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp782, $tmp783);
    panda$core$Int32$init$builtin_int32(&$tmp785, 6);
    panda$core$Int32 $tmp786 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp784, $tmp785);
    panda$core$Int32 $tmp787 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp779, $tmp786);
    panda$core$Int64$init$builtin_int64(&$tmp788, 3);
    panda$core$Int64 $tmp789 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx702, $tmp788);
    panda$core$Int32 $tmp790 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp789.value]);
    panda$core$Int32$init$builtin_int32(&$tmp791, 63);
    panda$core$Int32 $tmp792 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp790, $tmp791);
    panda$core$Int32 $tmp793 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp787, $tmp792);
    result704 = $tmp793;
    panda$core$Char32$init$panda$core$Int32(&$tmp794, result704);
    $returnValue709 = $tmp794;
    return $returnValue709;
}
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$MutableString* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue796;
    panda$core$MutableString$Index $tmp797 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp798 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp797, p_index);
    panda$core$Char32 $tmp799 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(self, $tmp798);
    $returnValue796 = $tmp799;
    return $returnValue796;
}
void panda$core$MutableString$$IDXEQ$panda$core$MutableString$Index$panda$core$Char32(panda$core$MutableString* self, panda$core$MutableString$Index p_index, panda$core$Char32 p_c) {
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp801;
    panda$core$Bit $tmp802;
    panda$core$String* $tmp803;
    panda$core$Bit$init$builtin_bit(&$tmp802, true);
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp801, p_index, p_index, $tmp802);
    panda$core$String* $tmp804 = panda$core$Char32$convert$R$panda$core$String(p_c);
    $tmp803 = $tmp804;
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp801, $tmp803);
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$MutableString$Index$GT p_r, panda$core$String* p_s) {
    panda$core$Comparable* $tmp806;
    panda$core$Comparable* $tmp808;
    panda$core$Int64 max840;
    panda$core$Int64 $tmp841;
    panda$core$Int64 rangeLength843;
    panda$core$Int64 newLength845;
    panda$core$Int64 offset848;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp852;
    panda$core$Int64 $tmp853;
    panda$core$Int64 $tmp855;
    panda$core$Bit $tmp856;
    panda$core$Range$LTpanda$core$Int64$GT $tmp887;
    panda$core$Bit $tmp888;
    panda$core$Range$LTpanda$core$Int64$GT $tmp909;
    panda$core$Int64 $tmp910;
    panda$core$Bit $tmp911;
    panda$core$MutableString$Index$wrapper* $tmp807;
    $tmp807 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp807->value = p_r.max;
    $tmp806 = ((panda$core$Comparable*) $tmp807);
    panda$core$MutableString$Index$wrapper* $tmp809;
    $tmp809 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp809->value = p_r.min;
    $tmp808 = ((panda$core$Comparable*) $tmp809);
    ITable* $tmp810 = $tmp806->$class->itable;
    while ($tmp810->$class != (panda$core$Class*) &panda$core$Comparable$class) {
        $tmp810 = $tmp810->next;
    }
    $fn812 $tmp811 = $tmp810->methods[2];
    panda$core$Bit $tmp813 = $tmp811($tmp806, $tmp808);
    bool $tmp805 = $tmp813.value;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
    if (!$tmp805) goto $l814;
    bool $tmp817 = p_r.inclusive.value;
    if (!$tmp817) goto $l818;
    panda$core$Bit $tmp819 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.min.value, self->_length);
    $tmp817 = $tmp819.value;
    $l818:;
    panda$core$Bit $tmp820 = { $tmp817 };
    bool $tmp816 = $tmp820.value;
    if (!$tmp816) goto $l821;
    panda$core$Bit $tmp822 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.max.value, self->_length);
    $tmp816 = $tmp822.value;
    $l821:;
    panda$core$Bit $tmp823 = { $tmp816 };
    bool $tmp815 = $tmp823.value;
    if ($tmp815) goto $l824;
    panda$core$Bit $tmp827 = panda$core$Bit$$NOT$R$panda$core$Bit(p_r.inclusive);
    bool $tmp826 = $tmp827.value;
    if (!$tmp826) goto $l828;
    panda$core$Bit $tmp829 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_r.min.value, self->_length);
    $tmp826 = $tmp829.value;
    $l828:;
    panda$core$Bit $tmp830 = { $tmp826 };
    bool $tmp825 = $tmp830.value;
    if (!$tmp825) goto $l831;
    panda$core$Bit $tmp832 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_r.max.value, self->_length);
    $tmp825 = $tmp832.value;
    $l831:;
    panda$core$Bit $tmp833 = { $tmp825 };
    $tmp815 = $tmp833.value;
    $l824:;
    panda$core$Bit $tmp834 = { $tmp815 };
    $tmp805 = $tmp834.value;
    $l814:;
    panda$core$Bit $tmp835 = { $tmp805 };
    if ($tmp835.value) goto $l836; else goto $l837;
    $l837:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s838, (panda$core$Int64) { 501 }, &$s839);
    abort();
    $l836:;
    max840 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp841, 1);
        panda$core$Int64 $tmp842 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max840, $tmp841);
        max840 = $tmp842;
    }
    }
    panda$core$Int64 $tmp844 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max840, p_r.min.value);
    rangeLength843 = $tmp844;
    panda$core$Int64 $tmp846 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, rangeLength843);
    panda$core$Int64 $tmp847 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp846, p_s->_length);
    newLength845 = $tmp847;
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, newLength845);
    panda$core$Int64 $tmp849 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_s->_length, rangeLength843);
    offset848 = $tmp849;
    panda$core$Int64 $tmp850 = panda$core$String$byteLength$R$panda$core$Int64(p_s);
    panda$core$Bit $tmp851 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp850, rangeLength843);
    if ($tmp851.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp853, 1);
        panda$core$Int64 $tmp854 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp853);
        panda$core$Int64$init$builtin_int64(&$tmp855, -1);
        panda$core$Bit$init$builtin_bit(&$tmp856, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp852, $tmp854, max840, $tmp855, $tmp856);
        int64_t $tmp858 = $tmp852.start.value;
        panda$core$Int64 i857 = { $tmp858 };
        int64_t $tmp860 = $tmp852.end.value;
        int64_t $tmp861 = $tmp852.step.value;
        bool $tmp862 = $tmp852.inclusive.value;
        bool $tmp869 = $tmp861 > 0;
        if ($tmp869) goto $l867; else goto $l868;
        $l867:;
        if ($tmp862) goto $l870; else goto $l871;
        $l870:;
        if ($tmp858 <= $tmp860) goto $l863; else goto $l865;
        $l871:;
        if ($tmp858 < $tmp860) goto $l863; else goto $l865;
        $l868:;
        if ($tmp862) goto $l872; else goto $l873;
        $l872:;
        if ($tmp858 >= $tmp860) goto $l863; else goto $l865;
        $l873:;
        if ($tmp858 > $tmp860) goto $l863; else goto $l865;
        $l863:;
        {
            panda$core$Int64 $tmp875 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i857, offset848);
            self->data[$tmp875.value] = self->data[i857.value];
        }
        $l866:;
        if ($tmp869) goto $l877; else goto $l878;
        $l877:;
        int64_t $tmp879 = $tmp860 - i857.value;
        if ($tmp862) goto $l880; else goto $l881;
        $l880:;
        if ((uint64_t) $tmp879 >= $tmp861) goto $l876; else goto $l865;
        $l881:;
        if ((uint64_t) $tmp879 > $tmp861) goto $l876; else goto $l865;
        $l878:;
        int64_t $tmp883 = i857.value - $tmp860;
        if ($tmp862) goto $l884; else goto $l885;
        $l884:;
        if ((uint64_t) $tmp883 >= -$tmp861) goto $l876; else goto $l865;
        $l885:;
        if ((uint64_t) $tmp883 > -$tmp861) goto $l876; else goto $l865;
        $l876:;
        i857.value += $tmp861;
        goto $l863;
        $l865:;
    }
    }
    else {
    {
        panda$core$Bit$init$builtin_bit(&$tmp888, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp887, max840, self->_length, $tmp888);
        int64_t $tmp890 = $tmp887.min.value;
        panda$core$Int64 i889 = { $tmp890 };
        int64_t $tmp892 = $tmp887.max.value;
        bool $tmp893 = $tmp887.inclusive.value;
        if ($tmp893) goto $l900; else goto $l901;
        $l900:;
        if ($tmp890 <= $tmp892) goto $l894; else goto $l896;
        $l901:;
        if ($tmp890 < $tmp892) goto $l894; else goto $l896;
        $l894:;
        {
            panda$core$Int64 $tmp902 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i889, offset848);
            self->data[$tmp902.value] = self->data[i889.value];
        }
        $l897:;
        int64_t $tmp904 = $tmp892 - i889.value;
        if ($tmp893) goto $l905; else goto $l906;
        $l905:;
        if ((uint64_t) $tmp904 >= 1) goto $l903; else goto $l896;
        $l906:;
        if ((uint64_t) $tmp904 > 1) goto $l903; else goto $l896;
        $l903:;
        i889.value += 1;
        goto $l894;
        $l896:;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp910, 0);
    panda$core$Bit$init$builtin_bit(&$tmp911, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp909, $tmp910, p_s->_length, $tmp911);
    int64_t $tmp913 = $tmp909.min.value;
    panda$core$Int64 i912 = { $tmp913 };
    int64_t $tmp915 = $tmp909.max.value;
    bool $tmp916 = $tmp909.inclusive.value;
    if ($tmp916) goto $l923; else goto $l924;
    $l923:;
    if ($tmp913 <= $tmp915) goto $l917; else goto $l919;
    $l924:;
    if ($tmp913 < $tmp915) goto $l917; else goto $l919;
    $l917:;
    {
        panda$core$Int64 $tmp925 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min.value, i912);
        self->data[$tmp925.value] = p_s->data[i912.value];
    }
    $l920:;
    int64_t $tmp927 = $tmp915 - i912.value;
    if ($tmp916) goto $l928; else goto $l929;
    $l928:;
    if ((uint64_t) $tmp927 >= 1) goto $l926; else goto $l919;
    $l929:;
    if ((uint64_t) $tmp927 > 1) goto $l926; else goto $l919;
    $l926:;
    i912.value += 1;
    goto $l917;
    $l919:;
    self->_length = newLength845;
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$Int64$GT p_r, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp932;
    panda$core$MutableString$Index $tmp933 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp934 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp933, p_r.min);
    panda$core$MutableString$Index $tmp935 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp936 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp935, p_r.max);
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp932, $tmp934, $tmp936, p_r.inclusive);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp932, p_s);
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$MutableString$Index$Q$GT p_r, panda$core$String* p_s) {
    panda$core$MutableString$Index min937;
    panda$core$Bit inclusive939;
    panda$core$MutableString$Index max940;
    panda$core$Bit $tmp942;
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp943;
    memset(&min937, 0, sizeof(min937));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min937 = ((panda$core$MutableString$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp938 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        min937 = $tmp938;
    }
    }
    inclusive939 = p_r.inclusive;
    memset(&max940, 0, sizeof(max940));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max940 = ((panda$core$MutableString$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp941 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
        max940 = $tmp941;
        panda$core$Bit$init$builtin_bit(&$tmp942, false);
        inclusive939 = $tmp942;
    }
    }
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp943, min937, max940, inclusive939);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp943, p_s);
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r, panda$core$String* p_s) {
    panda$core$MutableString$Index min944;
    panda$core$Bit inclusive948;
    panda$core$MutableString$Index max949;
    panda$core$Bit $tmp953;
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp954;
    memset(&min944, 0, sizeof(min944));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$MutableString$Index $tmp945 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        panda$core$MutableString$Index $tmp946 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp945, ((panda$core$Int64) p_r.min.value));
        min944 = $tmp946;
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp947 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        min944 = $tmp947;
    }
    }
    inclusive948 = p_r.inclusive;
    memset(&max949, 0, sizeof(max949));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$MutableString$Index $tmp950 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        panda$core$MutableString$Index $tmp951 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp950, ((panda$core$Int64) p_r.max.value));
        max949 = $tmp951;
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp952 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
        max949 = $tmp952;
        panda$core$Bit$init$builtin_bit(&$tmp953, false);
        inclusive948 = $tmp953;
    }
    }
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp954, min944, max949, inclusive948);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp954, p_s);
}
void panda$core$MutableString$replace$panda$core$String$panda$core$String(panda$core$MutableString* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString$Index index955;
    panda$core$MutableString$Index$nullable next959;
    panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp961;
    panda$core$MutableString$Index $tmp962;
    panda$core$Bit $tmp965;
    panda$core$MutableString$Index $tmp966;
    panda$core$Int64 $tmp968;
    panda$core$MutableString$Index $tmp956 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    index955 = $tmp956;
    $l957:;
    while (true) {
    {
        panda$core$MutableString$Index$nullable $tmp960 = panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(self, p_search, index955);
        next959 = $tmp960;
        if (((panda$core$Bit) { !next959.nonnull }).value) {
        {
            goto $l958;
        }
        }
        panda$core$Int64 $tmp963 = panda$core$String$byteLength$R$panda$core$Int64(p_search);
        panda$core$Int64 $tmp964 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$MutableString$Index) next959.value).value, $tmp963);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp962, $tmp964);
        panda$core$Bit$init$builtin_bit(&$tmp965, false);
        panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(&$tmp961, next959, ((panda$core$MutableString$Index$nullable) { $tmp962, true }), $tmp965);
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(self, $tmp961, p_replacement);
        panda$core$Int64 $tmp967 = panda$core$String$byteLength$R$panda$core$Int64(p_replacement);
        panda$core$Int64$init$builtin_int64(&$tmp968, 1);
        panda$core$Int64 $tmp969 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp967, $tmp968);
        panda$core$Int64 $tmp970 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$MutableString$Index) next959.value).value, $tmp969);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp966, $tmp970);
        index955 = $tmp966;
    }
    }
    $l958:;
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Int64 $tmp971;
    panda$core$Int64 oldMax978;
    panda$core$MutableString* $tmp983;
    panda$core$Int64 $tmp984;
    panda$core$Int64$init$builtin_int64(&$tmp971, 0);
    panda$core$Bit $tmp972 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->maxLength, $tmp971);
    if ($tmp972.value) goto $l973; else goto $l974;
    $l974:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s975, (panda$core$Int64) { 589 }, &$s976);
    abort();
    $l973:;
    panda$core$Bit $tmp977 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp977.value) {
    {
        return;
    }
    }
    oldMax978 = self->maxLength;
    $l979:;
    panda$core$Bit $tmp982 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    bool $tmp981 = $tmp982.value;
    if (!$tmp981) goto $l980;
    {
        $tmp983 = self;
        panda$core$Int64$init$builtin_int64(&$tmp984, 2);
        panda$core$Int64 $tmp985 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp983->maxLength, $tmp984);
        $tmp983->maxLength = $tmp985;
    }
    goto $l979;
    $l980:;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, oldMax978.value * 1, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    panda$core$Int64 $tmp986;
    panda$core$Int64 $tmp987;
    panda$core$Int64 $tmp988;
    panda$core$Int64$init$builtin_int64(&$tmp986, 32);
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, $tmp986.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp987, 0);
    self->_length = $tmp987;
    panda$core$Int64$init$builtin_int64(&$tmp988, 32);
    self->maxLength = $tmp988;
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result989;
    panda$core$Range$LTpanda$core$Int64$GT $tmp990;
    panda$core$Int64 $tmp991;
    panda$core$Bit $tmp992;
    panda$core$String* $returnValue1012;
    panda$core$String* $tmp1013;
    panda$core$String* $tmp1014;
    result989 = ((panda$core$Char8*) pandaZAlloc(self->_length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp991, 0);
    panda$core$Bit$init$builtin_bit(&$tmp992, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp990, $tmp991, self->_length, $tmp992);
    int64_t $tmp994 = $tmp990.min.value;
    panda$core$Int64 i993 = { $tmp994 };
    int64_t $tmp996 = $tmp990.max.value;
    bool $tmp997 = $tmp990.inclusive.value;
    if ($tmp997) goto $l1004; else goto $l1005;
    $l1004:;
    if ($tmp994 <= $tmp996) goto $l998; else goto $l1000;
    $l1005:;
    if ($tmp994 < $tmp996) goto $l998; else goto $l1000;
    $l998:;
    {
        result989[i993.value] = self->data[i993.value];
    }
    $l1001:;
    int64_t $tmp1007 = $tmp996 - i993.value;
    if ($tmp997) goto $l1008; else goto $l1009;
    $l1008:;
    if ((uint64_t) $tmp1007 >= 1) goto $l1006; else goto $l1000;
    $l1009:;
    if ((uint64_t) $tmp1007 > 1) goto $l1006; else goto $l1000;
    $l1006:;
    i993.value += 1;
    goto $l998;
    $l1000:;
    panda$core$String* $tmp1015 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp1015, result989, self->_length);
    $tmp1014 = $tmp1015;
    $tmp1013 = $tmp1014;
    $returnValue1012 = $tmp1013;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1013));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
    return $returnValue1012;
}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Int64 $tmp1017;
    panda$core$Class* $tmp1018;
    panda$core$Class* $tmp1019;
    panda$core$String* $returnValue1021;
    panda$core$String* $tmp1022;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, self->_length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp1017, 0);
    self->maxLength = $tmp1017;
    {
        $tmp1018 = ((panda$core$Object*) self)->$class;
        $tmp1019 = ((panda$core$Object*) &$s1020)->$class;
        ((panda$core$Object*) self)->$class = $tmp1019;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
    }
    $tmp1022 = ((panda$core$String*) ((panda$core$Object*) self));
    $returnValue1021 = $tmp1022;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
    return $returnValue1021;
}

