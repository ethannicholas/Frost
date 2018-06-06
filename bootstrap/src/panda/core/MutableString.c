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
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/RegularExpression.h"
#include "panda/core/Matcher.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.GT.h"
#include "panda/core/Range.LTpanda/core/MutableString/Index.Q.GT.h"
#include "panda/core/MutableMethod.h"
#include "panda/collections/Array.h"
#include "panda/collections/ListView.h"
#include "panda/core/Int32.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"

static panda$core$String $s1;
panda$core$MutableString$class_type panda$core$MutableString$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$MutableString$convert$R$panda$core$String, panda$core$MutableString$cleanup, panda$core$MutableString$append$panda$core$Char8, panda$core$MutableString$append$panda$core$Char32, panda$core$MutableString$append$panda$core$String, panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64, panda$core$MutableString$append$panda$core$Object, panda$core$MutableString$length$R$panda$core$Int64, panda$core$MutableString$byteLength$R$panda$core$Int64, panda$core$MutableString$start$R$panda$core$MutableString$Index, panda$core$MutableString$end$R$panda$core$MutableString$Index, panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index, panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index, panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index, panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q, panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q, panda$core$MutableString$contains$panda$core$Char8$R$panda$core$Bit, panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit, panda$core$MutableString$startsWith$panda$core$String$R$panda$core$Bit, panda$core$MutableString$endsWith$panda$core$String$R$panda$core$Bit, panda$core$MutableString$lastIndexOf$panda$core$String$R$panda$core$MutableString$Index$Q, panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q, panda$core$MutableString$matches$panda$core$RegularExpression$R$panda$core$Bit, panda$core$MutableString$contains$panda$core$RegularExpression$R$panda$core$Bit, panda$core$MutableString$trim, panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String, panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit, panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP, panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP, panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32, panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32, panda$core$MutableString$$IDXEQ$panda$core$MutableString$Index$panda$core$Char32, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$core$String, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String, panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String, panda$core$MutableString$replace$panda$core$String$panda$core$String, panda$core$MutableString$ensureCapacity$panda$core$Int64, panda$core$MutableString$clear, panda$core$MutableString$finish$R$panda$core$String} };

typedef panda$core$String* (*$fn169)(panda$core$Object*);
typedef panda$core$Object* (*$fn612)(panda$core$String*, panda$core$String*);
typedef panda$core$Object* (*$fn613)(panda$core$String*);
typedef panda$core$String* (*$fn614)(panda$core$Object*);
typedef panda$core$Object* (*$fn666)(panda$collections$ListView*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn667)(panda$collections$ListView*);
typedef panda$core$String* (*$fn668)(panda$core$Object*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, -2152859069647180220, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->dummy));
}
void panda$core$MutableString$append$panda$core$Char8(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Int64 $tmp32;
    panda$core$Int64 $tmp34;
    panda$core$Int64$init$builtin_int64(&$tmp32, 1);
    panda$core$Int64 $tmp33 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp32);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp33);
    self->data[self->_length.value] = p_c;
    panda$core$Int64$init$builtin_int64(&$tmp34, 1);
    panda$core$Int64 $tmp35 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp34);
    self->_length = $tmp35;
}
void panda$core$MutableString$append$panda$core$Char32(panda$core$MutableString* self, panda$core$Char32 p_c) {
    int32_t value36;
    panda$core$Bit $tmp37;
    panda$core$Int64 $tmp39;
    panda$core$Char8 $tmp41;
    panda$core$UInt8 $tmp42;
    panda$core$Int64 $tmp43;
    panda$core$Bit $tmp45;
    panda$core$Int64 $tmp47;
    panda$core$Int64 $tmp49;
    panda$core$Char8 $tmp51;
    panda$core$UInt8 $tmp52;
    panda$core$Int64 $tmp55;
    panda$core$Char8 $tmp57;
    panda$core$UInt8 $tmp58;
    panda$core$Int64 $tmp61;
    panda$core$Bit $tmp63;
    panda$core$Int64 $tmp65;
    panda$core$Int64 $tmp67;
    panda$core$Char8 $tmp69;
    panda$core$UInt8 $tmp70;
    panda$core$Int64 $tmp73;
    panda$core$Char8 $tmp75;
    panda$core$UInt8 $tmp76;
    panda$core$Int64 $tmp80;
    panda$core$Char8 $tmp82;
    panda$core$UInt8 $tmp83;
    panda$core$Int64 $tmp86;
    panda$core$Int64 $tmp88;
    panda$core$Int64 $tmp90;
    panda$core$Char8 $tmp92;
    panda$core$UInt8 $tmp93;
    panda$core$Int64 $tmp96;
    panda$core$Char8 $tmp98;
    panda$core$UInt8 $tmp99;
    panda$core$Int64 $tmp103;
    panda$core$Char8 $tmp105;
    panda$core$UInt8 $tmp106;
    panda$core$Int64 $tmp110;
    panda$core$Char8 $tmp112;
    panda$core$UInt8 $tmp113;
    panda$core$Int64 $tmp116;
    value36 = p_c.value;
    bool $tmp38 = value36 < 128;
    panda$core$Bit$init$builtin_bit(&$tmp37, $tmp38);
    if ($tmp37.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp39, 1);
        panda$core$Int64 $tmp40 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp39);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp40);
        panda$core$UInt8$init$builtin_uint8(&$tmp42, ((uint8_t) value36));
        panda$core$Char8$init$panda$core$UInt8(&$tmp41, $tmp42);
        self->data[self->_length.value] = $tmp41;
        panda$core$Int64$init$builtin_int64(&$tmp43, 1);
        panda$core$Int64 $tmp44 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp43);
        self->_length = $tmp44;
    }
    }
    else {
    bool $tmp46 = value36 < 2048;
    panda$core$Bit$init$builtin_bit(&$tmp45, $tmp46);
    if ($tmp45.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp47, 2);
        panda$core$Int64 $tmp48 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp47);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp48);
        panda$core$Int64$init$builtin_int64(&$tmp49, 0);
        panda$core$Int64 $tmp50 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp49);
        int32_t $tmp53 = value36 >> 6;
        int32_t $tmp54 = $tmp53 | 192;
        panda$core$UInt8$init$builtin_uint8(&$tmp52, ((uint8_t) $tmp54));
        panda$core$Char8$init$panda$core$UInt8(&$tmp51, $tmp52);
        self->data[$tmp50.value] = $tmp51;
        panda$core$Int64$init$builtin_int64(&$tmp55, 1);
        panda$core$Int64 $tmp56 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp55);
        int32_t $tmp59 = value36 & 63;
        int32_t $tmp60 = $tmp59 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp58, ((uint8_t) $tmp60));
        panda$core$Char8$init$panda$core$UInt8(&$tmp57, $tmp58);
        self->data[$tmp56.value] = $tmp57;
        panda$core$Int64$init$builtin_int64(&$tmp61, 2);
        panda$core$Int64 $tmp62 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp61);
        self->_length = $tmp62;
    }
    }
    else {
    bool $tmp64 = value36 < 65536;
    panda$core$Bit$init$builtin_bit(&$tmp63, $tmp64);
    if ($tmp63.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp65, 3);
        panda$core$Int64 $tmp66 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp65);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp66);
        panda$core$Int64$init$builtin_int64(&$tmp67, 0);
        panda$core$Int64 $tmp68 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp67);
        int32_t $tmp71 = value36 >> 12;
        int32_t $tmp72 = $tmp71 | 224;
        panda$core$UInt8$init$builtin_uint8(&$tmp70, ((uint8_t) $tmp72));
        panda$core$Char8$init$panda$core$UInt8(&$tmp69, $tmp70);
        self->data[$tmp68.value] = $tmp69;
        panda$core$Int64$init$builtin_int64(&$tmp73, 1);
        panda$core$Int64 $tmp74 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp73);
        int32_t $tmp77 = value36 >> 6;
        int32_t $tmp78 = $tmp77 & 63;
        int32_t $tmp79 = $tmp78 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp76, ((uint8_t) $tmp79));
        panda$core$Char8$init$panda$core$UInt8(&$tmp75, $tmp76);
        self->data[$tmp74.value] = $tmp75;
        panda$core$Int64$init$builtin_int64(&$tmp80, 2);
        panda$core$Int64 $tmp81 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp80);
        int32_t $tmp84 = value36 & 63;
        int32_t $tmp85 = $tmp84 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp83, ((uint8_t) $tmp85));
        panda$core$Char8$init$panda$core$UInt8(&$tmp82, $tmp83);
        self->data[$tmp81.value] = $tmp82;
        panda$core$Int64$init$builtin_int64(&$tmp86, 3);
        panda$core$Int64 $tmp87 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp86);
        self->_length = $tmp87;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp88, 4);
        panda$core$Int64 $tmp89 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp88);
        panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp89);
        panda$core$Int64$init$builtin_int64(&$tmp90, 0);
        panda$core$Int64 $tmp91 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp90);
        int32_t $tmp94 = value36 >> 18;
        int32_t $tmp95 = $tmp94 | 240;
        panda$core$UInt8$init$builtin_uint8(&$tmp93, ((uint8_t) $tmp95));
        panda$core$Char8$init$panda$core$UInt8(&$tmp92, $tmp93);
        self->data[$tmp91.value] = $tmp92;
        panda$core$Int64$init$builtin_int64(&$tmp96, 1);
        panda$core$Int64 $tmp97 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp96);
        int32_t $tmp100 = value36 >> 12;
        int32_t $tmp101 = $tmp100 & 63;
        int32_t $tmp102 = $tmp101 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp99, ((uint8_t) $tmp102));
        panda$core$Char8$init$panda$core$UInt8(&$tmp98, $tmp99);
        self->data[$tmp97.value] = $tmp98;
        panda$core$Int64$init$builtin_int64(&$tmp103, 2);
        panda$core$Int64 $tmp104 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp103);
        int32_t $tmp107 = value36 >> 6;
        int32_t $tmp108 = $tmp107 & 63;
        int32_t $tmp109 = $tmp108 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp106, ((uint8_t) $tmp109));
        panda$core$Char8$init$panda$core$UInt8(&$tmp105, $tmp106);
        self->data[$tmp104.value] = $tmp105;
        panda$core$Int64$init$builtin_int64(&$tmp110, 3);
        panda$core$Int64 $tmp111 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp110);
        int32_t $tmp114 = value36 & 63;
        int32_t $tmp115 = $tmp114 | 128;
        panda$core$UInt8$init$builtin_uint8(&$tmp113, ((uint8_t) $tmp115));
        panda$core$Char8$init$panda$core$UInt8(&$tmp112, $tmp113);
        self->data[$tmp111.value] = $tmp112;
        panda$core$Int64$init$builtin_int64(&$tmp116, 4);
        panda$core$Int64 $tmp117 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp116);
        self->_length = $tmp117;
    }
    }
    }
    }
}
void panda$core$MutableString$append$panda$core$String(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp119;
    panda$core$Int64 $tmp120;
    panda$core$Bit $tmp121;
    panda$core$Int64 $tmp118 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp118);
    panda$core$Int64$init$builtin_int64(&$tmp120, 0);
    panda$core$Bit$init$builtin_bit(&$tmp121, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp119, $tmp120, p_s->_length, $tmp121);
    int64_t $tmp123 = $tmp119.min.value;
    panda$core$Int64 i122 = { $tmp123 };
    int64_t $tmp125 = $tmp119.max.value;
    bool $tmp126 = $tmp119.inclusive.value;
    if ($tmp126) goto $l133; else goto $l134;
    $l133:;
    if ($tmp123 <= $tmp125) goto $l127; else goto $l129;
    $l134:;
    if ($tmp123 < $tmp125) goto $l127; else goto $l129;
    $l127:;
    {
        panda$core$Int64 $tmp135 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i122);
        self->data[$tmp135.value] = p_s->data[i122.value];
    }
    $l130:;
    int64_t $tmp137 = $tmp125 - i122.value;
    if ($tmp126) goto $l138; else goto $l139;
    $l138:;
    if ((uint64_t) $tmp137 >= 1) goto $l136; else goto $l129;
    $l139:;
    if ((uint64_t) $tmp137 > 1) goto $l136; else goto $l129;
    $l136:;
    i122.value += 1;
    goto $l127;
    $l129:;
    panda$core$Int64 $tmp142 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    self->_length = $tmp142;
}
void panda$core$MutableString$append$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$MutableString* self, panda$core$Char8* p_chars, panda$core$Int64 p_count) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp144;
    panda$core$Int64 $tmp145;
    panda$core$Bit $tmp146;
    panda$core$Int64 $tmp143 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_count);
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, $tmp143);
    panda$core$Int64$init$builtin_int64(&$tmp145, 0);
    panda$core$Bit$init$builtin_bit(&$tmp146, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp144, $tmp145, p_count, $tmp146);
    int64_t $tmp148 = $tmp144.min.value;
    panda$core$Int64 i147 = { $tmp148 };
    int64_t $tmp150 = $tmp144.max.value;
    bool $tmp151 = $tmp144.inclusive.value;
    if ($tmp151) goto $l158; else goto $l159;
    $l158:;
    if ($tmp148 <= $tmp150) goto $l152; else goto $l154;
    $l159:;
    if ($tmp148 < $tmp150) goto $l152; else goto $l154;
    $l152:;
    {
        panda$core$Int64 $tmp160 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, i147);
        self->data[$tmp160.value] = p_chars[i147.value];
    }
    $l155:;
    int64_t $tmp162 = $tmp150 - i147.value;
    if ($tmp151) goto $l163; else goto $l164;
    $l163:;
    if ((uint64_t) $tmp162 >= 1) goto $l161; else goto $l154;
    $l164:;
    if ((uint64_t) $tmp162 > 1) goto $l161; else goto $l154;
    $l161:;
    i147.value += 1;
    goto $l152;
    $l154:;
    panda$core$Int64 $tmp167 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->_length, p_count);
    self->_length = $tmp167;
}
void panda$core$MutableString$append$panda$core$Object(panda$core$MutableString* self, panda$core$Object* p_o) {
    panda$core$String* $tmp168;
    panda$core$String* $tmp170 = (($fn169) p_o->$class->vtable[0])(p_o);
    $tmp168 = $tmp170;
    panda$core$MutableString$append$panda$core$String(self, $tmp168);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp168));
}
panda$core$Int64 panda$core$MutableString$length$R$panda$core$Int64(panda$core$MutableString* self) {
    panda$core$Int64 result171;
    panda$core$Int64 $tmp172;
    panda$core$MutableString$Index index173;
    panda$core$Int64 $tmp181;
    panda$core$Int64 $returnValue183;
    panda$core$Int64$init$builtin_int64(&$tmp172, 0);
    result171 = $tmp172;
    panda$core$MutableString$Index $tmp174 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    index173 = $tmp174;
    $l175:;
    panda$core$MutableString$Index $tmp178 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$Bit $tmp179 = panda$core$MutableString$Index$$NEQ$panda$core$MutableString$Index$R$panda$core$Bit(index173, $tmp178);
    bool $tmp177 = $tmp179.value;
    if (!$tmp177) goto $l176;
    {
        panda$core$MutableString$Index $tmp180 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, index173);
        index173 = $tmp180;
        panda$core$Int64$init$builtin_int64(&$tmp181, 1);
        panda$core$Int64 $tmp182 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result171, $tmp181);
        result171 = $tmp182;
    }
    goto $l175;
    $l176:;
    $returnValue183 = result171;
    return $returnValue183;
}
panda$core$Int64 panda$core$MutableString$byteLength$R$panda$core$Int64(panda$core$MutableString* self) {
    panda$core$Int64 $returnValue185;
    $returnValue185 = self->_length;
    return $returnValue185;
}
panda$core$MutableString$Index panda$core$MutableString$start$R$panda$core$MutableString$Index(panda$core$MutableString* self) {
    panda$core$MutableString$Index $returnValue187;
    panda$core$MutableString$Index $tmp188;
    panda$core$Int64 $tmp189;
    panda$core$Int64$init$builtin_int64(&$tmp189, 0);
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp188, $tmp189);
    $returnValue187 = $tmp188;
    return $returnValue187;
}
panda$core$MutableString$Index panda$core$MutableString$end$R$panda$core$MutableString$Index(panda$core$MutableString* self) {
    panda$core$MutableString$Index $returnValue191;
    panda$core$MutableString$Index $tmp192;
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp192, self->_length);
    $returnValue191 = $tmp192;
    return $returnValue191;
}
panda$core$MutableString$Index panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_i) {
    int64_t c198;
    panda$core$Bit $tmp200;
    panda$core$MutableString$Index $returnValue202;
    panda$core$MutableString$Index $tmp203;
    panda$core$Int64 $tmp204;
    panda$core$Bit $tmp207;
    panda$core$MutableString$Index $tmp209;
    panda$core$Int64 $tmp210;
    panda$core$Bit $tmp213;
    panda$core$MutableString$Index $tmp215;
    panda$core$Int64 $tmp216;
    panda$core$MutableString$Index $tmp219;
    panda$core$Int64 $tmp220;
    panda$core$Bit $tmp194 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp194.value) goto $l195; else goto $l196;
    $l196:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s197, (panda$core$Int64) { 209 });
    abort();
    $l195:;
    int64_t $tmp199 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c198 = $tmp199;
    bool $tmp201 = c198 >= 240;
    panda$core$Bit$init$builtin_bit(&$tmp200, $tmp201);
    if ($tmp200.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp204, 4);
        panda$core$Int64 $tmp205 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp204);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp203, $tmp205);
        $returnValue202 = $tmp203;
        return $returnValue202;
    }
    }
    bool $tmp208 = c198 >= 224;
    panda$core$Bit$init$builtin_bit(&$tmp207, $tmp208);
    if ($tmp207.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp210, 3);
        panda$core$Int64 $tmp211 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp210);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp209, $tmp211);
        $returnValue202 = $tmp209;
        return $returnValue202;
    }
    }
    bool $tmp214 = c198 >= 192;
    panda$core$Bit$init$builtin_bit(&$tmp213, $tmp214);
    if ($tmp213.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp216, 2);
        panda$core$Int64 $tmp217 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp216);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp215, $tmp217);
        $returnValue202 = $tmp215;
        return $returnValue202;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp220, 1);
    panda$core$Int64 $tmp221 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp220);
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp219, $tmp221);
    $returnValue202 = $tmp219;
    return $returnValue202;
}
panda$core$MutableString$Index panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_i) {
    panda$core$Int64 $tmp223;
    panda$core$Int64 newValue228;
    panda$core$Int64 $tmp229;
    panda$core$Bit $tmp234;
    panda$core$Int64 $tmp241;
    panda$core$MutableString$Index $returnValue243;
    panda$core$MutableString$Index $tmp244;
    panda$core$Int64$init$builtin_int64(&$tmp223, 0);
    panda$core$Bit $tmp224 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, $tmp223);
    if ($tmp224.value) goto $l225; else goto $l226;
    $l226:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s227, (panda$core$Int64) { 230 });
    abort();
    $l225:;
    panda$core$Int64$init$builtin_int64(&$tmp229, 1);
    panda$core$Int64 $tmp230 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp229);
    newValue228 = $tmp230;
    $l231:;
    int64_t $tmp236 = ((int64_t) self->data[newValue228.value].value) & 255;
    bool $tmp237 = $tmp236 >= 128;
    bool $tmp235 = $tmp237;
    if (!$tmp235) goto $l238;
    int64_t $tmp239 = ((int64_t) self->data[newValue228.value].value) & 255;
    bool $tmp240 = $tmp239 < 192;
    $tmp235 = $tmp240;
    $l238:;
    panda$core$Bit$init$builtin_bit(&$tmp234, $tmp235);
    bool $tmp233 = $tmp234.value;
    if (!$tmp233) goto $l232;
    {
        panda$core$Int64$init$builtin_int64(&$tmp241, 1);
        panda$core$Int64 $tmp242 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue228, $tmp241);
        newValue228 = $tmp242;
    }
    goto $l231;
    $l232:;
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp244, newValue228);
    $returnValue243 = $tmp244;
    return $returnValue243;
}
panda$core$MutableString$Index panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_index, panda$core$Int64 p_offset) {
    panda$core$MutableString$Index result246;
    panda$core$Int64 $tmp247;
    panda$core$Range$LTpanda$core$Int64$GT $tmp249;
    panda$core$Int64 $tmp250;
    panda$core$Bit $tmp251;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp272;
    panda$core$Int64 $tmp273;
    panda$core$Int64 $tmp274;
    panda$core$Bit $tmp275;
    panda$core$MutableString$Index $returnValue306;
    result246 = p_index;
    panda$core$Int64$init$builtin_int64(&$tmp247, 0);
    panda$core$Bit $tmp248 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, $tmp247);
    if ($tmp248.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp250, 0);
        panda$core$Bit$init$builtin_bit(&$tmp251, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp249, $tmp250, p_offset, $tmp251);
        int64_t $tmp253 = $tmp249.min.value;
        panda$core$Int64 i252 = { $tmp253 };
        int64_t $tmp255 = $tmp249.max.value;
        bool $tmp256 = $tmp249.inclusive.value;
        if ($tmp256) goto $l263; else goto $l264;
        $l263:;
        if ($tmp253 <= $tmp255) goto $l257; else goto $l259;
        $l264:;
        if ($tmp253 < $tmp255) goto $l257; else goto $l259;
        $l257:;
        {
            panda$core$MutableString$Index $tmp265 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, result246);
            result246 = $tmp265;
        }
        $l260:;
        int64_t $tmp267 = $tmp255 - i252.value;
        if ($tmp256) goto $l268; else goto $l269;
        $l268:;
        if ((uint64_t) $tmp267 >= 1) goto $l266; else goto $l259;
        $l269:;
        if ((uint64_t) $tmp267 > 1) goto $l266; else goto $l259;
        $l266:;
        i252.value += 1;
        goto $l257;
        $l259:;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp273, 0);
        panda$core$Int64$init$builtin_int64(&$tmp274, -1);
        panda$core$Bit$init$builtin_bit(&$tmp275, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp272, $tmp273, p_offset, $tmp274, $tmp275);
        int64_t $tmp277 = $tmp272.start.value;
        panda$core$Int64 i276 = { $tmp277 };
        int64_t $tmp279 = $tmp272.end.value;
        int64_t $tmp280 = $tmp272.step.value;
        bool $tmp281 = $tmp272.inclusive.value;
        bool $tmp288 = $tmp280 > 0;
        if ($tmp288) goto $l286; else goto $l287;
        $l286:;
        if ($tmp281) goto $l289; else goto $l290;
        $l289:;
        if ($tmp277 <= $tmp279) goto $l282; else goto $l284;
        $l290:;
        if ($tmp277 < $tmp279) goto $l282; else goto $l284;
        $l287:;
        if ($tmp281) goto $l291; else goto $l292;
        $l291:;
        if ($tmp277 >= $tmp279) goto $l282; else goto $l284;
        $l292:;
        if ($tmp277 > $tmp279) goto $l282; else goto $l284;
        $l282:;
        {
            panda$core$MutableString$Index $tmp294 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, result246);
            result246 = $tmp294;
        }
        $l285:;
        if ($tmp288) goto $l296; else goto $l297;
        $l296:;
        int64_t $tmp298 = $tmp279 - i276.value;
        if ($tmp281) goto $l299; else goto $l300;
        $l299:;
        if ((uint64_t) $tmp298 >= $tmp280) goto $l295; else goto $l284;
        $l300:;
        if ((uint64_t) $tmp298 > $tmp280) goto $l295; else goto $l284;
        $l297:;
        int64_t $tmp302 = i276.value - $tmp279;
        if ($tmp281) goto $l303; else goto $l304;
        $l303:;
        if ((uint64_t) $tmp302 >= -$tmp280) goto $l295; else goto $l284;
        $l304:;
        if ((uint64_t) $tmp302 > -$tmp280) goto $l295; else goto $l284;
        $l295:;
        i276.value += $tmp280;
        goto $l282;
        $l284:;
    }
    }
    $returnValue306 = result246;
    return $returnValue306;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$MutableString$Index$nullable $returnValue308;
    panda$core$MutableString$Index $tmp309 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$nullable $tmp310 = panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(self, p_s, $tmp309);
    $returnValue308 = $tmp310;
    return $returnValue308;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s, panda$core$MutableString$Index p_start) {
    panda$core$MutableString$Index$nullable $returnValue313;
    panda$core$Range$LTpanda$core$Int64$GT $tmp315;
    panda$core$Bit $tmp317;
    panda$core$Range$LTpanda$core$Int64$GT $tmp331;
    panda$core$Int64 $tmp332;
    panda$core$Bit $tmp333;
    panda$core$MutableString$Index $tmp355;
    panda$core$Bit $tmp312 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp312.value) {
    {
        $returnValue313 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
        return $returnValue313;
    }
    }
    panda$core$Int64 $tmp316 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Bit$init$builtin_bit(&$tmp317, true);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp315, p_start.value, $tmp316, $tmp317);
    int64_t $tmp319 = $tmp315.min.value;
    panda$core$Int64 i318 = { $tmp319 };
    int64_t $tmp321 = $tmp315.max.value;
    bool $tmp322 = $tmp315.inclusive.value;
    if ($tmp322) goto $l329; else goto $l330;
    $l329:;
    if ($tmp319 <= $tmp321) goto $l323; else goto $l325;
    $l330:;
    if ($tmp319 < $tmp321) goto $l323; else goto $l325;
    $l323:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp332, 0);
        panda$core$Bit$init$builtin_bit(&$tmp333, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp331, $tmp332, p_s->_length, $tmp333);
        int64_t $tmp335 = $tmp331.min.value;
        panda$core$Int64 j334 = { $tmp335 };
        int64_t $tmp337 = $tmp331.max.value;
        bool $tmp338 = $tmp331.inclusive.value;
        if ($tmp338) goto $l345; else goto $l346;
        $l345:;
        if ($tmp335 <= $tmp337) goto $l339; else goto $l341;
        $l346:;
        if ($tmp335 < $tmp337) goto $l339; else goto $l341;
        $l339:;
        {
            panda$core$Int64 $tmp347 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i318, j334);
            panda$core$Bit $tmp348 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp347.value], p_s->data[j334.value]);
            if ($tmp348.value) {
            {
                goto $l326;
            }
            }
        }
        $l342:;
        int64_t $tmp350 = $tmp337 - j334.value;
        if ($tmp338) goto $l351; else goto $l352;
        $l351:;
        if ((uint64_t) $tmp350 >= 1) goto $l349; else goto $l341;
        $l352:;
        if ((uint64_t) $tmp350 > 1) goto $l349; else goto $l341;
        $l349:;
        j334.value += 1;
        goto $l339;
        $l341:;
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp355, i318);
        $returnValue313 = ((panda$core$MutableString$Index$nullable) { $tmp355, true });
        return $returnValue313;
    }
    $l326:;
    int64_t $tmp358 = $tmp321 - i318.value;
    if ($tmp322) goto $l359; else goto $l360;
    $l359:;
    if ((uint64_t) $tmp358 >= 1) goto $l357; else goto $l325;
    $l360:;
    if ((uint64_t) $tmp358 > 1) goto $l357; else goto $l325;
    $l357:;
    i318.value += 1;
    goto $l323;
    $l325:;
    $returnValue313 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
    return $returnValue313;
}
panda$core$Bit panda$core$MutableString$contains$panda$core$Char8$R$panda$core$Bit(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp364;
    panda$core$Int64 $tmp365;
    panda$core$Bit $tmp366;
    panda$core$Bit $returnValue381;
    panda$core$Bit $tmp382;
    panda$core$Bit $tmp390;
    panda$core$Int64$init$builtin_int64(&$tmp365, 0);
    panda$core$Bit$init$builtin_bit(&$tmp366, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp364, $tmp365, self->_length, $tmp366);
    int64_t $tmp368 = $tmp364.min.value;
    panda$core$Int64 i367 = { $tmp368 };
    int64_t $tmp370 = $tmp364.max.value;
    bool $tmp371 = $tmp364.inclusive.value;
    if ($tmp371) goto $l378; else goto $l379;
    $l378:;
    if ($tmp368 <= $tmp370) goto $l372; else goto $l374;
    $l379:;
    if ($tmp368 < $tmp370) goto $l372; else goto $l374;
    $l372:;
    {
        panda$core$Bit $tmp380 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i367.value], p_c);
        if ($tmp380.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp382, true);
            $returnValue381 = $tmp382;
            return $returnValue381;
        }
        }
    }
    $l375:;
    int64_t $tmp385 = $tmp370 - i367.value;
    if ($tmp371) goto $l386; else goto $l387;
    $l386:;
    if ((uint64_t) $tmp385 >= 1) goto $l384; else goto $l374;
    $l387:;
    if ((uint64_t) $tmp385 > 1) goto $l384; else goto $l374;
    $l384:;
    i367.value += 1;
    goto $l372;
    $l374:;
    panda$core$Bit$init$builtin_bit(&$tmp390, false);
    $returnValue381 = $tmp390;
    return $returnValue381;
}
panda$core$Bit panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue392;
    panda$core$MutableString$Index$nullable $tmp393 = panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q(self, p_s);
    $returnValue392 = ((panda$core$Bit) { $tmp393.nonnull });
    return $returnValue392;
}
panda$core$Bit panda$core$MutableString$startsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue396;
    panda$core$Bit $tmp397;
    panda$core$Range$LTpanda$core$Int64$GT $tmp399;
    panda$core$Int64 $tmp400;
    panda$core$Bit $tmp401;
    panda$core$Bit $tmp416;
    panda$core$Bit $tmp424;
    panda$core$Bit $tmp395 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp395.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp397, false);
        $returnValue396 = $tmp397;
        return $returnValue396;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp400, 0);
    panda$core$Bit$init$builtin_bit(&$tmp401, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp399, $tmp400, p_other->_length, $tmp401);
    int64_t $tmp403 = $tmp399.min.value;
    panda$core$Int64 i402 = { $tmp403 };
    int64_t $tmp405 = $tmp399.max.value;
    bool $tmp406 = $tmp399.inclusive.value;
    if ($tmp406) goto $l413; else goto $l414;
    $l413:;
    if ($tmp403 <= $tmp405) goto $l407; else goto $l409;
    $l414:;
    if ($tmp403 < $tmp405) goto $l407; else goto $l409;
    $l407:;
    {
        panda$core$Bit $tmp415 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i402.value], p_other->data[i402.value]);
        if ($tmp415.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp416, false);
            $returnValue396 = $tmp416;
            return $returnValue396;
        }
        }
    }
    $l410:;
    int64_t $tmp419 = $tmp405 - i402.value;
    if ($tmp406) goto $l420; else goto $l421;
    $l420:;
    if ((uint64_t) $tmp419 >= 1) goto $l418; else goto $l409;
    $l421:;
    if ((uint64_t) $tmp419 > 1) goto $l418; else goto $l409;
    $l418:;
    i402.value += 1;
    goto $l407;
    $l409:;
    panda$core$Bit$init$builtin_bit(&$tmp424, true);
    $returnValue396 = $tmp424;
    return $returnValue396;
}
panda$core$Bit panda$core$MutableString$endsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue427;
    panda$core$Bit $tmp428;
    panda$core$Range$LTpanda$core$Int64$GT $tmp430;
    panda$core$Int64 $tmp431;
    panda$core$Bit $tmp432;
    panda$core$Bit $tmp449;
    panda$core$Bit $tmp457;
    panda$core$Bit $tmp426 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp426.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp428, false);
        $returnValue427 = $tmp428;
        return $returnValue427;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp431, 0);
    panda$core$Bit$init$builtin_bit(&$tmp432, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp430, $tmp431, p_other->_length, $tmp432);
    int64_t $tmp434 = $tmp430.min.value;
    panda$core$Int64 i433 = { $tmp434 };
    int64_t $tmp436 = $tmp430.max.value;
    bool $tmp437 = $tmp430.inclusive.value;
    if ($tmp437) goto $l444; else goto $l445;
    $l444:;
    if ($tmp434 <= $tmp436) goto $l438; else goto $l440;
    $l445:;
    if ($tmp434 < $tmp436) goto $l438; else goto $l440;
    $l438:;
    {
        panda$core$Int64 $tmp446 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp447 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp446, i433);
        panda$core$Bit $tmp448 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp447.value], p_other->data[i433.value]);
        if ($tmp448.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp449, false);
            $returnValue427 = $tmp449;
            return $returnValue427;
        }
        }
    }
    $l441:;
    int64_t $tmp452 = $tmp436 - i433.value;
    if ($tmp437) goto $l453; else goto $l454;
    $l453:;
    if ((uint64_t) $tmp452 >= 1) goto $l451; else goto $l440;
    $l454:;
    if ((uint64_t) $tmp452 > 1) goto $l451; else goto $l440;
    $l451:;
    i433.value += 1;
    goto $l438;
    $l440:;
    panda$core$Bit$init$builtin_bit(&$tmp457, true);
    $returnValue427 = $tmp457;
    return $returnValue427;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$MutableString$Index$nullable $returnValue459;
    panda$core$MutableString$Index $tmp460 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$nullable $tmp461 = panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(self, p_s, $tmp460);
    $returnValue459 = $tmp461;
    return $returnValue459;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s, panda$core$MutableString$Index p_start) {
    panda$core$MutableString$Index$nullable $returnValue464;
    panda$core$Int64 startPos466;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp469;
    panda$core$Int64 $tmp470;
    panda$core$Int64 $tmp471;
    panda$core$Bit $tmp472;
    panda$core$Range$LTpanda$core$Int64$GT $tmp491;
    panda$core$Int64 $tmp492;
    panda$core$Bit $tmp493;
    panda$core$MutableString$Index $tmp515;
    panda$core$Bit $tmp463 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp463.value) {
    {
        $returnValue464 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
        return $returnValue464;
    }
    }
    panda$core$Int64 $tmp467 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp468 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp467);
    startPos466 = $tmp468;
    panda$core$Int64$init$builtin_int64(&$tmp470, 0);
    panda$core$Int64$init$builtin_int64(&$tmp471, -1);
    panda$core$Bit$init$builtin_bit(&$tmp472, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp469, startPos466, $tmp470, $tmp471, $tmp472);
    int64_t $tmp474 = $tmp469.start.value;
    panda$core$Int64 i473 = { $tmp474 };
    int64_t $tmp476 = $tmp469.end.value;
    int64_t $tmp477 = $tmp469.step.value;
    bool $tmp478 = $tmp469.inclusive.value;
    bool $tmp485 = $tmp477 > 0;
    if ($tmp485) goto $l483; else goto $l484;
    $l483:;
    if ($tmp478) goto $l486; else goto $l487;
    $l486:;
    if ($tmp474 <= $tmp476) goto $l479; else goto $l481;
    $l487:;
    if ($tmp474 < $tmp476) goto $l479; else goto $l481;
    $l484:;
    if ($tmp478) goto $l488; else goto $l489;
    $l488:;
    if ($tmp474 >= $tmp476) goto $l479; else goto $l481;
    $l489:;
    if ($tmp474 > $tmp476) goto $l479; else goto $l481;
    $l479:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp492, 0);
        panda$core$Bit$init$builtin_bit(&$tmp493, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp491, $tmp492, p_s->_length, $tmp493);
        int64_t $tmp495 = $tmp491.min.value;
        panda$core$Int64 j494 = { $tmp495 };
        int64_t $tmp497 = $tmp491.max.value;
        bool $tmp498 = $tmp491.inclusive.value;
        if ($tmp498) goto $l505; else goto $l506;
        $l505:;
        if ($tmp495 <= $tmp497) goto $l499; else goto $l501;
        $l506:;
        if ($tmp495 < $tmp497) goto $l499; else goto $l501;
        $l499:;
        {
            panda$core$Int64 $tmp507 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i473, j494);
            panda$core$Bit $tmp508 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp507.value], p_s->data[j494.value]);
            if ($tmp508.value) {
            {
                goto $l482;
            }
            }
        }
        $l502:;
        int64_t $tmp510 = $tmp497 - j494.value;
        if ($tmp498) goto $l511; else goto $l512;
        $l511:;
        if ((uint64_t) $tmp510 >= 1) goto $l509; else goto $l501;
        $l512:;
        if ((uint64_t) $tmp510 > 1) goto $l509; else goto $l501;
        $l509:;
        j494.value += 1;
        goto $l499;
        $l501:;
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp515, i473);
        $returnValue464 = ((panda$core$MutableString$Index$nullable) { $tmp515, true });
        return $returnValue464;
    }
    $l482:;
    if ($tmp485) goto $l518; else goto $l519;
    $l518:;
    int64_t $tmp520 = $tmp476 - i473.value;
    if ($tmp478) goto $l521; else goto $l522;
    $l521:;
    if ((uint64_t) $tmp520 >= $tmp477) goto $l517; else goto $l481;
    $l522:;
    if ((uint64_t) $tmp520 > $tmp477) goto $l517; else goto $l481;
    $l519:;
    int64_t $tmp524 = i473.value - $tmp476;
    if ($tmp478) goto $l525; else goto $l526;
    $l525:;
    if ((uint64_t) $tmp524 >= -$tmp477) goto $l517; else goto $l481;
    $l526:;
    if ((uint64_t) $tmp524 > -$tmp477) goto $l517; else goto $l481;
    $l517:;
    i473.value += $tmp477;
    goto $l479;
    $l481:;
    $returnValue464 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
    return $returnValue464;
}
panda$core$Bit panda$core$MutableString$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue529;
    panda$core$Matcher* $tmp530;
    panda$core$String* $tmp531;
    panda$core$Bit $tmp534;
    panda$core$String* $tmp532 = panda$core$MutableString$convert$R$panda$core$String(self);
    $tmp531 = $tmp532;
    panda$core$Matcher* $tmp533 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, $tmp531);
    $tmp530 = $tmp533;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp534, $tmp530);
    $returnValue529 = $tmp534;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp530));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
    return $returnValue529;
}
panda$core$Bit panda$core$MutableString$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue536;
    panda$core$Matcher* $tmp537;
    panda$core$String* $tmp538;
    panda$core$String* $tmp539 = panda$core$MutableString$convert$R$panda$core$String(self);
    $tmp538 = $tmp539;
    panda$core$Matcher* $tmp540 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, $tmp538);
    $tmp537 = $tmp540;
    panda$core$Bit $tmp541 = panda$core$Matcher$find$R$panda$core$Bit($tmp537);
    $returnValue536 = $tmp541;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
    return $returnValue536;
}
void panda$core$MutableString$trim(panda$core$MutableString* self) {
    panda$core$MutableString$Index i543;
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp556;
    panda$core$Bit $tmp558;
    panda$core$Int64 $tmp560;
    panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp575;
    panda$core$Bit $tmp576;
    panda$core$MutableString$Index $tmp544 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    i543 = $tmp544;
    $l545:;
    panda$core$MutableString$Index $tmp549 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$Bit $tmp550 = panda$core$MutableString$Index$$NEQ$panda$core$MutableString$Index$R$panda$core$Bit(i543, $tmp549);
    bool $tmp548 = $tmp550.value;
    if (!$tmp548) goto $l551;
    panda$core$Char32 $tmp552 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(self, i543);
    panda$core$Bit $tmp553 = panda$core$Char32$isWhitespace$R$panda$core$Bit($tmp552);
    $tmp548 = $tmp553.value;
    $l551:;
    panda$core$Bit $tmp554 = { $tmp548 };
    bool $tmp547 = $tmp554.value;
    if (!$tmp547) goto $l546;
    {
        panda$core$MutableString$Index $tmp555 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, i543);
        i543 = $tmp555;
    }
    goto $l545;
    $l546:;
    panda$core$MutableString$Index $tmp557 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$Bit$init$builtin_bit(&$tmp558, false);
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp556, $tmp557, i543, $tmp558);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp556, &$s559);
    panda$core$Int64$init$builtin_int64(&$tmp560, 0);
    panda$core$Bit $tmp561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp560);
    if ($tmp561.value) {
    {
        return;
    }
    }
    panda$core$MutableString$Index $tmp562 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp563 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, $tmp562);
    i543 = $tmp563;
    $l564:;
    panda$core$MutableString$Index $tmp568 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$Bit $tmp569 = panda$core$MutableString$Index$$NEQ$panda$core$MutableString$Index$R$panda$core$Bit(i543, $tmp568);
    bool $tmp567 = $tmp569.value;
    if (!$tmp567) goto $l570;
    panda$core$Char32 $tmp571 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(self, i543);
    panda$core$Bit $tmp572 = panda$core$Char32$isWhitespace$R$panda$core$Bit($tmp571);
    $tmp567 = $tmp572.value;
    $l570:;
    panda$core$Bit $tmp573 = { $tmp567 };
    bool $tmp566 = $tmp573.value;
    if (!$tmp566) goto $l565;
    {
        panda$core$MutableString$Index $tmp574 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, i543);
        i543 = $tmp574;
    }
    goto $l564;
    $l565:;
    panda$core$Bit$init$builtin_bit(&$tmp576, false);
    panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(&$tmp575, ((panda$core$MutableString$Index$nullable) { i543, true }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp576);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(self, $tmp575, &$s577);
}
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$Bit $tmp578;
    panda$core$Bit$init$builtin_bit(&$tmp578, true);
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(self, p_search, p_replacement, $tmp578);
}
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$Matcher* matcher582 = NULL;
    panda$core$Matcher* $tmp583;
    panda$core$Matcher* $tmp584;
    panda$core$String* $tmp585;
    int $tmp581;
    {
        panda$core$String* $tmp586 = panda$core$MutableString$convert$R$panda$core$String(self);
        $tmp585 = $tmp586;
        panda$core$Matcher* $tmp587 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, $tmp585);
        $tmp584 = $tmp587;
        $tmp583 = $tmp584;
        matcher582 = $tmp583;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
        panda$core$MutableString$clear(self);
        $l588:;
        panda$core$Bit $tmp591 = panda$core$Matcher$find$R$panda$core$Bit(matcher582);
        bool $tmp590 = $tmp591.value;
        if (!$tmp590) goto $l589;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher582, self, p_replacement, p_allowGroupReferences);
        }
        goto $l588;
        $l589:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher582, self);
    }
    $tmp581 = -1;
    goto $l579;
    $l579:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher582));
    matcher582 = NULL;
    switch ($tmp581) {
        case -1: goto $l592;
    }
    $l592:;
}
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$Matcher* matcher596 = NULL;
    panda$core$Matcher* $tmp597;
    panda$core$Matcher* $tmp598;
    panda$core$String* $tmp599;
    panda$core$String* $tmp606;
    panda$core$Object* $tmp607;
    panda$core$String* $tmp608;
    panda$core$Int64 $tmp609;
    panda$core$Object* $tmp611;
    panda$core$Bit $tmp616;
    int $tmp595;
    {
        panda$core$String* $tmp600 = panda$core$MutableString$convert$R$panda$core$String(self);
        $tmp599 = $tmp600;
        panda$core$Matcher* $tmp601 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, $tmp599);
        $tmp598 = $tmp601;
        $tmp597 = $tmp598;
        matcher596 = $tmp597;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp597));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
        panda$core$MutableString$clear(self);
        $l602:;
        panda$core$Bit $tmp605 = panda$core$Matcher$find$R$panda$core$Bit(matcher596);
        bool $tmp604 = $tmp605.value;
        if (!$tmp604) goto $l603;
        {
            panda$core$Int64$init$builtin_int64(&$tmp609, 0);
            panda$core$String* $tmp610 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher596, $tmp609);
            $tmp608 = $tmp610;
            if (p_replacement->target) {
                $tmp611 = (($fn612) p_replacement->pointer)(((panda$core$String*) p_replacement->target), $tmp608);
            } else {
                $tmp611 = (($fn613) p_replacement->pointer)($tmp608);
            }
            $tmp607 = $tmp611;
            panda$core$String* $tmp615 = (($fn614) $tmp607->$class->vtable[0])($tmp607);
            $tmp606 = $tmp615;
            panda$core$Bit$init$builtin_bit(&$tmp616, false);
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher596, self, $tmp606, $tmp616);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
            panda$core$Panda$unref$panda$core$Object($tmp607);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
        }
        goto $l602;
        $l603:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher596, self);
    }
    $tmp595 = -1;
    goto $l593;
    $l593:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher596));
    matcher596 = NULL;
    switch ($tmp595) {
        case -1: goto $l617;
    }
    $l617:;
}
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$Matcher* matcher621 = NULL;
    panda$core$Matcher* $tmp622;
    panda$core$Matcher* $tmp623;
    panda$core$String* $tmp624;
    panda$collections$Array* groups634 = NULL;
    panda$collections$Array* $tmp635;
    panda$collections$Array* $tmp636;
    panda$core$Range$LTpanda$core$Int64$GT $tmp638;
    panda$core$Int64 $tmp639;
    panda$core$Int64 $tmp640;
    panda$core$Bit $tmp641;
    panda$core$String* $tmp655;
    panda$core$String* $tmp663;
    panda$core$Object* $tmp664;
    panda$core$Object* $tmp665;
    panda$core$Bit $tmp670;
    int $tmp620;
    {
        panda$core$String* $tmp625 = panda$core$MutableString$convert$R$panda$core$String(self);
        $tmp624 = $tmp625;
        panda$core$Matcher* $tmp626 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, $tmp624);
        $tmp623 = $tmp626;
        $tmp622 = $tmp623;
        matcher621 = $tmp622;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
        panda$core$MutableString$clear(self);
        $l627:;
        panda$core$Bit $tmp630 = panda$core$Matcher$find$R$panda$core$Bit(matcher621);
        bool $tmp629 = $tmp630.value;
        if (!$tmp629) goto $l628;
        {
            int $tmp633;
            {
                panda$collections$Array* $tmp637 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp637);
                $tmp636 = $tmp637;
                $tmp635 = $tmp636;
                groups634 = $tmp635;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp635));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                panda$core$Int64$init$builtin_int64(&$tmp639, 0);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp640, matcher621);
                panda$core$Bit$init$builtin_bit(&$tmp641, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp638, $tmp639, $tmp640, $tmp641);
                int64_t $tmp643 = $tmp638.min.value;
                panda$core$Int64 i642 = { $tmp643 };
                int64_t $tmp645 = $tmp638.max.value;
                bool $tmp646 = $tmp638.inclusive.value;
                if ($tmp646) goto $l653; else goto $l654;
                $l653:;
                if ($tmp643 <= $tmp645) goto $l647; else goto $l649;
                $l654:;
                if ($tmp643 < $tmp645) goto $l647; else goto $l649;
                $l647:;
                {
                    panda$core$String* $tmp656 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher621, i642);
                    $tmp655 = $tmp656;
                    panda$collections$Array$add$panda$collections$Array$T(groups634, ((panda$core$Object*) $tmp655));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
                }
                $l650:;
                int64_t $tmp658 = $tmp645 - i642.value;
                if ($tmp646) goto $l659; else goto $l660;
                $l659:;
                if ((uint64_t) $tmp658 >= 1) goto $l657; else goto $l649;
                $l660:;
                if ((uint64_t) $tmp658 > 1) goto $l657; else goto $l649;
                $l657:;
                i642.value += 1;
                goto $l647;
                $l649:;
                if (p_replacement->target) {
                    $tmp665 = (($fn666) p_replacement->pointer)(((panda$collections$ListView*) p_replacement->target), ((panda$collections$ListView*) groups634));
                } else {
                    $tmp665 = (($fn667) p_replacement->pointer)(((panda$collections$ListView*) groups634));
                }
                $tmp664 = $tmp665;
                panda$core$String* $tmp669 = (($fn668) $tmp664->$class->vtable[0])($tmp664);
                $tmp663 = $tmp669;
                panda$core$Bit$init$builtin_bit(&$tmp670, false);
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher621, self, $tmp663, $tmp670);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
                panda$core$Panda$unref$panda$core$Object($tmp664);
            }
            $tmp633 = -1;
            goto $l631;
            $l631:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups634));
            groups634 = NULL;
            switch ($tmp633) {
                case -1: goto $l671;
            }
            $l671:;
        }
        goto $l627;
        $l628:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher621, self);
    }
    $tmp620 = -1;
    goto $l618;
    $l618:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher621));
    matcher621 = NULL;
    switch ($tmp620) {
        case -1: goto $l672;
    }
    $l672:;
}
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(panda$core$MutableString* self, panda$core$MutableString$Index p_index) {
    panda$core$Int64 idx673;
    panda$core$Char8 c674;
    panda$core$Int32 result675;
    panda$core$Bit $tmp677;
    panda$core$Char32 $returnValue680;
    panda$core$Char32 $tmp681;
    panda$core$Bit $tmp683;
    panda$core$Int64 $tmp686;
    panda$core$Int32 $tmp692;
    panda$core$Int32 $tmp694;
    panda$core$Int64 $tmp696;
    panda$core$Int32 $tmp699;
    panda$core$Char32 $tmp702;
    panda$core$Bit $tmp704;
    panda$core$Int64 $tmp707;
    panda$core$Int32 $tmp713;
    panda$core$Int32 $tmp715;
    panda$core$Int64 $tmp717;
    panda$core$Int32 $tmp720;
    panda$core$Int32 $tmp722;
    panda$core$Int64 $tmp725;
    panda$core$Int32 $tmp728;
    panda$core$Char32 $tmp731;
    panda$core$Int64 $tmp733;
    panda$core$Int32 $tmp739;
    panda$core$Int32 $tmp741;
    panda$core$Int64 $tmp743;
    panda$core$Int32 $tmp746;
    panda$core$Int32 $tmp748;
    panda$core$Int64 $tmp751;
    panda$core$Int32 $tmp754;
    panda$core$Int32 $tmp756;
    panda$core$Int64 $tmp759;
    panda$core$Int32 $tmp762;
    panda$core$Char32 $tmp765;
    idx673 = p_index.value;
    c674 = self->data[idx673.value];
    panda$core$Int32 $tmp676 = panda$core$Char8$convert$R$panda$core$Int32(c674);
    result675 = $tmp676;
    int64_t $tmp678 = ((int64_t) c674.value) & 255;
    bool $tmp679 = $tmp678 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp677, $tmp679);
    if ($tmp677.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp681, result675);
        $returnValue680 = $tmp681;
        return $returnValue680;
    }
    }
    int64_t $tmp684 = ((int64_t) c674.value) & 255;
    bool $tmp685 = $tmp684 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp683, $tmp685);
    if ($tmp683.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp686, 1);
        panda$core$Int64 $tmp687 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx673, $tmp686);
        panda$core$Bit $tmp688 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp687, self->_length);
        if ($tmp688.value) goto $l689; else goto $l690;
        $l690:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s691, (panda$core$Int64) { 486 });
        abort();
        $l689:;
        panda$core$Int32$init$builtin_int32(&$tmp692, 31);
        panda$core$Int32 $tmp693 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result675, $tmp692);
        panda$core$Int32$init$builtin_int32(&$tmp694, 6);
        panda$core$Int32 $tmp695 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp693, $tmp694);
        panda$core$Int64$init$builtin_int64(&$tmp696, 1);
        panda$core$Int64 $tmp697 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx673, $tmp696);
        panda$core$Int32 $tmp698 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp697.value]);
        panda$core$Int32$init$builtin_int32(&$tmp699, 63);
        panda$core$Int32 $tmp700 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp698, $tmp699);
        panda$core$Int32 $tmp701 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp695, $tmp700);
        result675 = $tmp701;
        panda$core$Char32$init$panda$core$Int32(&$tmp702, result675);
        $returnValue680 = $tmp702;
        return $returnValue680;
    }
    }
    int64_t $tmp705 = ((int64_t) c674.value) & 255;
    bool $tmp706 = $tmp705 < 240;
    panda$core$Bit$init$builtin_bit(&$tmp704, $tmp706);
    if ($tmp704.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp707, 2);
        panda$core$Int64 $tmp708 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx673, $tmp707);
        panda$core$Bit $tmp709 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp708, self->_length);
        if ($tmp709.value) goto $l710; else goto $l711;
        $l711:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s712, (panda$core$Int64) { 491 });
        abort();
        $l710:;
        panda$core$Int32$init$builtin_int32(&$tmp713, 15);
        panda$core$Int32 $tmp714 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result675, $tmp713);
        panda$core$Int32$init$builtin_int32(&$tmp715, 12);
        panda$core$Int32 $tmp716 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp714, $tmp715);
        panda$core$Int64$init$builtin_int64(&$tmp717, 1);
        panda$core$Int64 $tmp718 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx673, $tmp717);
        panda$core$Int32 $tmp719 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp718.value]);
        panda$core$Int32$init$builtin_int32(&$tmp720, 63);
        panda$core$Int32 $tmp721 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp719, $tmp720);
        panda$core$Int32$init$builtin_int32(&$tmp722, 6);
        panda$core$Int32 $tmp723 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp721, $tmp722);
        panda$core$Int32 $tmp724 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp716, $tmp723);
        panda$core$Int64$init$builtin_int64(&$tmp725, 2);
        panda$core$Int64 $tmp726 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx673, $tmp725);
        panda$core$Int32 $tmp727 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp726.value]);
        panda$core$Int32$init$builtin_int32(&$tmp728, 63);
        panda$core$Int32 $tmp729 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp727, $tmp728);
        panda$core$Int32 $tmp730 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp724, $tmp729);
        result675 = $tmp730;
        panda$core$Char32$init$panda$core$Int32(&$tmp731, result675);
        $returnValue680 = $tmp731;
        return $returnValue680;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp733, 3);
    panda$core$Int64 $tmp734 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx673, $tmp733);
    panda$core$Bit $tmp735 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp734, self->_length);
    if ($tmp735.value) goto $l736; else goto $l737;
    $l737:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s738, (panda$core$Int64) { 496 });
    abort();
    $l736:;
    panda$core$Int32$init$builtin_int32(&$tmp739, 7);
    panda$core$Int32 $tmp740 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result675, $tmp739);
    panda$core$Int32$init$builtin_int32(&$tmp741, 18);
    panda$core$Int32 $tmp742 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp740, $tmp741);
    panda$core$Int64$init$builtin_int64(&$tmp743, 1);
    panda$core$Int64 $tmp744 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx673, $tmp743);
    panda$core$Int32 $tmp745 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp744.value]);
    panda$core$Int32$init$builtin_int32(&$tmp746, 63);
    panda$core$Int32 $tmp747 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp745, $tmp746);
    panda$core$Int32$init$builtin_int32(&$tmp748, 12);
    panda$core$Int32 $tmp749 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp747, $tmp748);
    panda$core$Int32 $tmp750 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp742, $tmp749);
    panda$core$Int64$init$builtin_int64(&$tmp751, 2);
    panda$core$Int64 $tmp752 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx673, $tmp751);
    panda$core$Int32 $tmp753 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp752.value]);
    panda$core$Int32$init$builtin_int32(&$tmp754, 63);
    panda$core$Int32 $tmp755 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp753, $tmp754);
    panda$core$Int32$init$builtin_int32(&$tmp756, 6);
    panda$core$Int32 $tmp757 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp755, $tmp756);
    panda$core$Int32 $tmp758 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp750, $tmp757);
    panda$core$Int64$init$builtin_int64(&$tmp759, 3);
    panda$core$Int64 $tmp760 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx673, $tmp759);
    panda$core$Int32 $tmp761 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp760.value]);
    panda$core$Int32$init$builtin_int32(&$tmp762, 63);
    panda$core$Int32 $tmp763 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp761, $tmp762);
    panda$core$Int32 $tmp764 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp758, $tmp763);
    result675 = $tmp764;
    panda$core$Char32$init$panda$core$Int32(&$tmp765, result675);
    $returnValue680 = $tmp765;
    return $returnValue680;
}
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$MutableString* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue767;
    panda$core$MutableString$Index $tmp768 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp769 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp768, p_index);
    panda$core$Char32 $tmp770 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(self, $tmp769);
    $returnValue767 = $tmp770;
    return $returnValue767;
}
void panda$core$MutableString$$IDXEQ$panda$core$MutableString$Index$panda$core$Char32(panda$core$MutableString* self, panda$core$MutableString$Index p_index, panda$core$Char32 p_c) {
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp772;
    panda$core$Bit $tmp773;
    panda$core$String* $tmp774;
    panda$core$Bit$init$builtin_bit(&$tmp773, true);
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp772, p_index, p_index, $tmp773);
    panda$core$String* $tmp775 = panda$core$Char32$convert$R$panda$core$String(p_c);
    $tmp774 = $tmp775;
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp772, $tmp774);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$MutableString$Index$GT p_r, panda$core$String* p_s) {
    panda$core$Int64 max804;
    panda$core$Int64 $tmp805;
    panda$core$Int64 rangeLength807;
    panda$core$Int64 newLength809;
    panda$core$Int64 offset812;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp816;
    panda$core$Int64 $tmp817;
    panda$core$Int64 $tmp819;
    panda$core$Bit $tmp820;
    panda$core$Range$LTpanda$core$Int64$GT $tmp851;
    panda$core$Bit $tmp852;
    panda$core$Range$LTpanda$core$Int64$GT $tmp873;
    panda$core$Int64 $tmp874;
    panda$core$Bit $tmp875;
    panda$core$Bit $tmp777 = panda$core$MutableString$Index$$GE$panda$core$MutableString$Index$R$panda$core$Bit(p_r.max, p_r.min);
    bool $tmp776 = $tmp777.value;
    if (!$tmp776) goto $l778;
    bool $tmp781 = p_r.inclusive.value;
    if (!$tmp781) goto $l782;
    panda$core$Bit $tmp783 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.min.value, self->_length);
    $tmp781 = $tmp783.value;
    $l782:;
    panda$core$Bit $tmp784 = { $tmp781 };
    bool $tmp780 = $tmp784.value;
    if (!$tmp780) goto $l785;
    panda$core$Bit $tmp786 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.max.value, self->_length);
    $tmp780 = $tmp786.value;
    $l785:;
    panda$core$Bit $tmp787 = { $tmp780 };
    bool $tmp779 = $tmp787.value;
    if ($tmp779) goto $l788;
    panda$core$Bit $tmp791 = panda$core$Bit$$NOT$R$panda$core$Bit(p_r.inclusive);
    bool $tmp790 = $tmp791.value;
    if (!$tmp790) goto $l792;
    panda$core$Bit $tmp793 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_r.min.value, self->_length);
    $tmp790 = $tmp793.value;
    $l792:;
    panda$core$Bit $tmp794 = { $tmp790 };
    bool $tmp789 = $tmp794.value;
    if (!$tmp789) goto $l795;
    panda$core$Bit $tmp796 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_r.max.value, self->_length);
    $tmp789 = $tmp796.value;
    $l795:;
    panda$core$Bit $tmp797 = { $tmp789 };
    $tmp779 = $tmp797.value;
    $l788:;
    panda$core$Bit $tmp798 = { $tmp779 };
    $tmp776 = $tmp798.value;
    $l778:;
    panda$core$Bit $tmp799 = { $tmp776 };
    if ($tmp799.value) goto $l800; else goto $l801;
    $l801:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s802, (panda$core$Int64) { 521 }, &$s803);
    abort();
    $l800:;
    max804 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp805, 1);
        panda$core$Int64 $tmp806 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max804, $tmp805);
        max804 = $tmp806;
    }
    }
    panda$core$Int64 $tmp808 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max804, p_r.min.value);
    rangeLength807 = $tmp808;
    panda$core$Int64 $tmp810 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, rangeLength807);
    panda$core$Int64 $tmp811 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp810, p_s->_length);
    newLength809 = $tmp811;
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, newLength809);
    panda$core$Int64 $tmp813 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_s->_length, rangeLength807);
    offset812 = $tmp813;
    panda$core$Int64 $tmp814 = panda$core$String$byteLength$R$panda$core$Int64(p_s);
    panda$core$Bit $tmp815 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp814, rangeLength807);
    if ($tmp815.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp817, 1);
        panda$core$Int64 $tmp818 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp817);
        panda$core$Int64$init$builtin_int64(&$tmp819, -1);
        panda$core$Bit$init$builtin_bit(&$tmp820, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp816, $tmp818, max804, $tmp819, $tmp820);
        int64_t $tmp822 = $tmp816.start.value;
        panda$core$Int64 i821 = { $tmp822 };
        int64_t $tmp824 = $tmp816.end.value;
        int64_t $tmp825 = $tmp816.step.value;
        bool $tmp826 = $tmp816.inclusive.value;
        bool $tmp833 = $tmp825 > 0;
        if ($tmp833) goto $l831; else goto $l832;
        $l831:;
        if ($tmp826) goto $l834; else goto $l835;
        $l834:;
        if ($tmp822 <= $tmp824) goto $l827; else goto $l829;
        $l835:;
        if ($tmp822 < $tmp824) goto $l827; else goto $l829;
        $l832:;
        if ($tmp826) goto $l836; else goto $l837;
        $l836:;
        if ($tmp822 >= $tmp824) goto $l827; else goto $l829;
        $l837:;
        if ($tmp822 > $tmp824) goto $l827; else goto $l829;
        $l827:;
        {
            panda$core$Int64 $tmp839 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i821, offset812);
            self->data[$tmp839.value] = self->data[i821.value];
        }
        $l830:;
        if ($tmp833) goto $l841; else goto $l842;
        $l841:;
        int64_t $tmp843 = $tmp824 - i821.value;
        if ($tmp826) goto $l844; else goto $l845;
        $l844:;
        if ((uint64_t) $tmp843 >= $tmp825) goto $l840; else goto $l829;
        $l845:;
        if ((uint64_t) $tmp843 > $tmp825) goto $l840; else goto $l829;
        $l842:;
        int64_t $tmp847 = i821.value - $tmp824;
        if ($tmp826) goto $l848; else goto $l849;
        $l848:;
        if ((uint64_t) $tmp847 >= -$tmp825) goto $l840; else goto $l829;
        $l849:;
        if ((uint64_t) $tmp847 > -$tmp825) goto $l840; else goto $l829;
        $l840:;
        i821.value += $tmp825;
        goto $l827;
        $l829:;
    }
    }
    else {
    {
        panda$core$Bit$init$builtin_bit(&$tmp852, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp851, max804, self->_length, $tmp852);
        int64_t $tmp854 = $tmp851.min.value;
        panda$core$Int64 i853 = { $tmp854 };
        int64_t $tmp856 = $tmp851.max.value;
        bool $tmp857 = $tmp851.inclusive.value;
        if ($tmp857) goto $l864; else goto $l865;
        $l864:;
        if ($tmp854 <= $tmp856) goto $l858; else goto $l860;
        $l865:;
        if ($tmp854 < $tmp856) goto $l858; else goto $l860;
        $l858:;
        {
            panda$core$Int64 $tmp866 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i853, offset812);
            self->data[$tmp866.value] = self->data[i853.value];
        }
        $l861:;
        int64_t $tmp868 = $tmp856 - i853.value;
        if ($tmp857) goto $l869; else goto $l870;
        $l869:;
        if ((uint64_t) $tmp868 >= 1) goto $l867; else goto $l860;
        $l870:;
        if ((uint64_t) $tmp868 > 1) goto $l867; else goto $l860;
        $l867:;
        i853.value += 1;
        goto $l858;
        $l860:;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp874, 0);
    panda$core$Bit$init$builtin_bit(&$tmp875, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp873, $tmp874, p_s->_length, $tmp875);
    int64_t $tmp877 = $tmp873.min.value;
    panda$core$Int64 i876 = { $tmp877 };
    int64_t $tmp879 = $tmp873.max.value;
    bool $tmp880 = $tmp873.inclusive.value;
    if ($tmp880) goto $l887; else goto $l888;
    $l887:;
    if ($tmp877 <= $tmp879) goto $l881; else goto $l883;
    $l888:;
    if ($tmp877 < $tmp879) goto $l881; else goto $l883;
    $l881:;
    {
        panda$core$Int64 $tmp889 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min.value, i876);
        self->data[$tmp889.value] = p_s->data[i876.value];
    }
    $l884:;
    int64_t $tmp891 = $tmp879 - i876.value;
    if ($tmp880) goto $l892; else goto $l893;
    $l892:;
    if ((uint64_t) $tmp891 >= 1) goto $l890; else goto $l883;
    $l893:;
    if ((uint64_t) $tmp891 > 1) goto $l890; else goto $l883;
    $l890:;
    i876.value += 1;
    goto $l881;
    $l883:;
    self->_length = newLength809;
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$Int64$GT p_r, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp896;
    panda$core$MutableString$Index $tmp897 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp898 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp897, p_r.min);
    panda$core$MutableString$Index $tmp899 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp900 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp899, p_r.max);
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp896, $tmp898, $tmp900, p_r.inclusive);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp896, p_s);
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$MutableString$Index$Q$GT p_r, panda$core$String* p_s) {
    panda$core$MutableString$Index min901;
    panda$core$Bit inclusive903;
    panda$core$MutableString$Index max904;
    panda$core$Bit $tmp906;
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp907;
    memset(&min901, 0, sizeof(min901));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min901 = ((panda$core$MutableString$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp902 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        min901 = $tmp902;
    }
    }
    inclusive903 = p_r.inclusive;
    memset(&max904, 0, sizeof(max904));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max904 = ((panda$core$MutableString$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp905 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
        max904 = $tmp905;
        panda$core$Bit$init$builtin_bit(&$tmp906, false);
        inclusive903 = $tmp906;
    }
    }
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp907, min901, max904, inclusive903);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp907, p_s);
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r, panda$core$String* p_s) {
    panda$core$MutableString$Index min908;
    panda$core$Bit inclusive912;
    panda$core$MutableString$Index max913;
    panda$core$Bit $tmp917;
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp918;
    memset(&min908, 0, sizeof(min908));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$MutableString$Index $tmp909 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        panda$core$MutableString$Index $tmp910 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp909, ((panda$core$Int64) p_r.min.value));
        min908 = $tmp910;
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp911 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        min908 = $tmp911;
    }
    }
    inclusive912 = p_r.inclusive;
    memset(&max913, 0, sizeof(max913));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$MutableString$Index $tmp914 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        panda$core$MutableString$Index $tmp915 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp914, ((panda$core$Int64) p_r.max.value));
        max913 = $tmp915;
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp916 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
        max913 = $tmp916;
        panda$core$Bit$init$builtin_bit(&$tmp917, false);
        inclusive912 = $tmp917;
    }
    }
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp918, min908, max913, inclusive912);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp918, p_s);
}
void panda$core$MutableString$replace$panda$core$String$panda$core$String(panda$core$MutableString* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString$Index index919;
    panda$core$MutableString$Index$nullable next923;
    panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp925;
    panda$core$MutableString$Index $tmp926;
    panda$core$Bit $tmp929;
    panda$core$MutableString$Index $tmp930;
    panda$core$Int64 $tmp932;
    panda$core$MutableString$Index $tmp920 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    index919 = $tmp920;
    $l921:;
    while (true) {
    {
        panda$core$MutableString$Index$nullable $tmp924 = panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(self, p_search, index919);
        next923 = $tmp924;
        if (((panda$core$Bit) { !next923.nonnull }).value) {
        {
            goto $l922;
        }
        }
        panda$core$Int64 $tmp927 = panda$core$String$byteLength$R$panda$core$Int64(p_search);
        panda$core$Int64 $tmp928 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$MutableString$Index) next923.value).value, $tmp927);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp926, $tmp928);
        panda$core$Bit$init$builtin_bit(&$tmp929, false);
        panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(&$tmp925, next923, ((panda$core$MutableString$Index$nullable) { $tmp926, true }), $tmp929);
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(self, $tmp925, p_replacement);
        panda$core$Int64 $tmp931 = panda$core$String$byteLength$R$panda$core$Int64(p_replacement);
        panda$core$Int64$init$builtin_int64(&$tmp932, 1);
        panda$core$Int64 $tmp933 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp931, $tmp932);
        panda$core$Int64 $tmp934 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index919.value, $tmp933);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp930, $tmp934);
        index919 = $tmp930;
    }
    }
    $l922:;
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Int64 oldMax936;
    panda$core$Int64 $tmp941;
    panda$core$Bit $tmp935 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp935.value) {
    {
        return;
    }
    }
    oldMax936 = self->maxLength;
    $l937:;
    panda$core$Bit $tmp940 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    bool $tmp939 = $tmp940.value;
    if (!$tmp939) goto $l938;
    {
        panda$core$Int64$init$builtin_int64(&$tmp941, 2);
        panda$core$Int64 $tmp942 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, $tmp941);
        self->maxLength = $tmp942;
    }
    goto $l937;
    $l938:;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, oldMax936.value * 1, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    panda$core$Int64 $tmp943;
    panda$core$Int64 $tmp944;
    panda$core$Int64 $tmp945;
    panda$core$Int64$init$builtin_int64(&$tmp943, 32);
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, $tmp943.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp944, 0);
    self->_length = $tmp944;
    panda$core$Int64$init$builtin_int64(&$tmp945, 32);
    self->maxLength = $tmp945;
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result946;
    panda$core$Range$LTpanda$core$Int64$GT $tmp947;
    panda$core$Int64 $tmp948;
    panda$core$Bit $tmp949;
    panda$core$String* $returnValue969;
    panda$core$String* $tmp970;
    panda$core$String* $tmp971;
    result946 = ((panda$core$Char8*) pandaZAlloc(self->_length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp948, 0);
    panda$core$Bit$init$builtin_bit(&$tmp949, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp947, $tmp948, self->_length, $tmp949);
    int64_t $tmp951 = $tmp947.min.value;
    panda$core$Int64 i950 = { $tmp951 };
    int64_t $tmp953 = $tmp947.max.value;
    bool $tmp954 = $tmp947.inclusive.value;
    if ($tmp954) goto $l961; else goto $l962;
    $l961:;
    if ($tmp951 <= $tmp953) goto $l955; else goto $l957;
    $l962:;
    if ($tmp951 < $tmp953) goto $l955; else goto $l957;
    $l955:;
    {
        result946[i950.value] = self->data[i950.value];
    }
    $l958:;
    int64_t $tmp964 = $tmp953 - i950.value;
    if ($tmp954) goto $l965; else goto $l966;
    $l965:;
    if ((uint64_t) $tmp964 >= 1) goto $l963; else goto $l957;
    $l966:;
    if ((uint64_t) $tmp964 > 1) goto $l963; else goto $l957;
    $l963:;
    i950.value += 1;
    goto $l955;
    $l957:;
    panda$core$String* $tmp972 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp972, result946, self->_length);
    $tmp971 = $tmp972;
    $tmp970 = $tmp971;
    $returnValue969 = $tmp970;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp970));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
    return $returnValue969;
}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Int64 $tmp974;
    panda$core$Class* $tmp975;
    panda$core$Class* $tmp976;
    panda$core$String* $returnValue978;
    panda$core$String* $tmp979;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, self->_length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp974, 0);
    self->maxLength = $tmp974;
    {
        $tmp975 = ((panda$core$Object*) self)->$class;
        $tmp976 = ((panda$core$Object*) &$s977)->$class;
        ((panda$core$Object*) self)->$class = $tmp976;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp976));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp975));
    }
    $tmp979 = ((panda$core$String*) ((panda$core$Object*) self));
    $returnValue978 = $tmp979;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
    return $returnValue978;
}

