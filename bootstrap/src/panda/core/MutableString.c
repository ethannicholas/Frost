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

typedef panda$core$String* (*$fn169)(panda$core$Object*);
typedef panda$core$Bit (*$fn185)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn563)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn589)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Object* (*$fn634)(panda$core$Object*, panda$core$String*);
typedef panda$core$Object* (*$fn635)(panda$core$String*);
typedef panda$core$String* (*$fn636)(panda$core$Object*);
typedef panda$core$Object* (*$fn688)(panda$core$Object*, panda$collections$ListView*);
typedef panda$core$Object* (*$fn689)(panda$collections$ListView*);
typedef panda$core$String* (*$fn690)(panda$core$Object*);
typedef panda$core$Bit (*$fn805)(panda$core$Comparable*, panda$core$Comparable*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67", 24, -1180377191894570377, NULL };
static panda$core$String $s204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x5b\x5d\x3a\x3d\x28\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x49\x6e\x64\x65\x78\x3e\x2c\x20\x73\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 134, -2152859069647180220, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x70\x61\x6e\x64\x61", 19, -4004145774509029272, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2e\x65\x6e\x73\x75\x72\x65\x43\x61\x70\x61\x63\x69\x74\x79\x28\x6e\x65\x77\x53\x69\x7a\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29", 97, -3184186071165599131, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    panda$core$Equatable* $tmp178;
    panda$core$Equatable* $tmp180;
    panda$core$Int64 $tmp188;
    panda$core$Int64 $returnValue190;
    panda$core$Int64$init$builtin_int64(&$tmp172, 0);
    result171 = $tmp172;
    panda$core$MutableString$Index $tmp174 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    index173 = $tmp174;
    $l175:;
    panda$core$MutableString$Index$wrapper* $tmp179;
    $tmp179 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp179->value = index173;
    $tmp178 = ((panda$core$Equatable*) $tmp179);
    panda$core$MutableString$Index $tmp181 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$wrapper* $tmp182;
    $tmp182 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp182->value = $tmp181;
    $tmp180 = ((panda$core$Equatable*) $tmp182);
    ITable* $tmp183 = $tmp178->$class->itable;
    while ($tmp183->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp183 = $tmp183->next;
    }
    $fn185 $tmp184 = $tmp183->methods[1];
    panda$core$Bit $tmp186 = $tmp184($tmp178, $tmp180);
    bool $tmp177 = $tmp186.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp180));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
    if (!$tmp177) goto $l176;
    {
        panda$core$MutableString$Index $tmp187 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, index173);
        index173 = $tmp187;
        panda$core$Int64$init$builtin_int64(&$tmp188, 1);
        panda$core$Int64 $tmp189 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result171, $tmp188);
        result171 = $tmp189;
    }
    goto $l175;
    $l176:;
    $returnValue190 = result171;
    return $returnValue190;
}
panda$core$Int64 panda$core$MutableString$byteLength$R$panda$core$Int64(panda$core$MutableString* self) {
    panda$core$Int64 $returnValue192;
    $returnValue192 = self->_length;
    return $returnValue192;
}
panda$core$MutableString$Index panda$core$MutableString$start$R$panda$core$MutableString$Index(panda$core$MutableString* self) {
    panda$core$MutableString$Index $returnValue194;
    panda$core$MutableString$Index $tmp195;
    panda$core$Int64 $tmp196;
    panda$core$Int64$init$builtin_int64(&$tmp196, 0);
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp195, $tmp196);
    $returnValue194 = $tmp195;
    return $returnValue194;
}
panda$core$MutableString$Index panda$core$MutableString$end$R$panda$core$MutableString$Index(panda$core$MutableString* self) {
    panda$core$MutableString$Index $returnValue198;
    panda$core$MutableString$Index $tmp199;
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp199, self->_length);
    $returnValue198 = $tmp199;
    return $returnValue198;
}
panda$core$MutableString$Index panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_i) {
    int64_t c205;
    panda$core$Bit $tmp207;
    panda$core$MutableString$Index $returnValue209;
    panda$core$MutableString$Index $tmp210;
    panda$core$Int64 $tmp211;
    panda$core$Bit $tmp214;
    panda$core$MutableString$Index $tmp216;
    panda$core$Int64 $tmp217;
    panda$core$Bit $tmp220;
    panda$core$MutableString$Index $tmp222;
    panda$core$Int64 $tmp223;
    panda$core$MutableString$Index $tmp226;
    panda$core$Int64 $tmp227;
    panda$core$Bit $tmp201 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_i.value, self->_length);
    if ($tmp201.value) goto $l202; else goto $l203;
    $l203:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s204, (panda$core$Int64) { 189 });
    abort();
    $l202:;
    int64_t $tmp206 = ((int64_t) self->data[p_i.value.value].value) & 255;
    c205 = $tmp206;
    bool $tmp208 = c205 >= 240;
    panda$core$Bit$init$builtin_bit(&$tmp207, $tmp208);
    if ($tmp207.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp211, 4);
        panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp211);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp210, $tmp212);
        $returnValue209 = $tmp210;
        return $returnValue209;
    }
    }
    bool $tmp215 = c205 >= 224;
    panda$core$Bit$init$builtin_bit(&$tmp214, $tmp215);
    if ($tmp214.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp217, 3);
        panda$core$Int64 $tmp218 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp217);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp216, $tmp218);
        $returnValue209 = $tmp216;
        return $returnValue209;
    }
    }
    bool $tmp221 = c205 >= 192;
    panda$core$Bit$init$builtin_bit(&$tmp220, $tmp221);
    if ($tmp220.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp223, 2);
        panda$core$Int64 $tmp224 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp223);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp222, $tmp224);
        $returnValue209 = $tmp222;
        return $returnValue209;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp227, 1);
    panda$core$Int64 $tmp228 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp227);
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp226, $tmp228);
    $returnValue209 = $tmp226;
    return $returnValue209;
}
panda$core$MutableString$Index panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_i) {
    panda$core$Int64 $tmp230;
    panda$core$Int64 newValue235;
    panda$core$Int64 $tmp236;
    panda$core$Bit $tmp241;
    panda$core$Int64 $tmp248;
    panda$core$MutableString$Index $returnValue250;
    panda$core$MutableString$Index $tmp251;
    panda$core$Int64$init$builtin_int64(&$tmp230, 0);
    panda$core$Bit $tmp231 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_i.value, $tmp230);
    if ($tmp231.value) goto $l232; else goto $l233;
    $l233:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s234, (panda$core$Int64) { 210 });
    abort();
    $l232:;
    panda$core$Int64$init$builtin_int64(&$tmp236, 1);
    panda$core$Int64 $tmp237 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_i.value, $tmp236);
    newValue235 = $tmp237;
    $l238:;
    int64_t $tmp243 = ((int64_t) self->data[newValue235.value].value) & 255;
    bool $tmp244 = $tmp243 >= 128;
    bool $tmp242 = $tmp244;
    if (!$tmp242) goto $l245;
    int64_t $tmp246 = ((int64_t) self->data[newValue235.value].value) & 255;
    bool $tmp247 = $tmp246 < 192;
    $tmp242 = $tmp247;
    $l245:;
    panda$core$Bit$init$builtin_bit(&$tmp241, $tmp242);
    bool $tmp240 = $tmp241.value;
    if (!$tmp240) goto $l239;
    {
        panda$core$Int64$init$builtin_int64(&$tmp248, 1);
        panda$core$Int64 $tmp249 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(newValue235, $tmp248);
        newValue235 = $tmp249;
    }
    goto $l238;
    $l239:;
    panda$core$MutableString$Index$init$panda$core$Int64(&$tmp251, newValue235);
    $returnValue250 = $tmp251;
    return $returnValue250;
}
panda$core$MutableString$Index panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(panda$core$MutableString* self, panda$core$MutableString$Index p_index, panda$core$Int64 p_offset) {
    panda$core$MutableString$Index result253;
    panda$core$Int64 $tmp254;
    panda$core$Range$LTpanda$core$Int64$GT $tmp256;
    panda$core$Int64 $tmp257;
    panda$core$Bit $tmp258;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp279;
    panda$core$Int64 $tmp280;
    panda$core$Int64 $tmp281;
    panda$core$Bit $tmp282;
    panda$core$MutableString$Index $returnValue313;
    result253 = p_index;
    panda$core$Int64$init$builtin_int64(&$tmp254, 0);
    panda$core$Bit $tmp255 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(p_offset, $tmp254);
    if ($tmp255.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp257, 0);
        panda$core$Bit$init$builtin_bit(&$tmp258, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp256, $tmp257, p_offset, $tmp258);
        int64_t $tmp260 = $tmp256.min.value;
        panda$core$Int64 i259 = { $tmp260 };
        int64_t $tmp262 = $tmp256.max.value;
        bool $tmp263 = $tmp256.inclusive.value;
        if ($tmp263) goto $l270; else goto $l271;
        $l270:;
        if ($tmp260 <= $tmp262) goto $l264; else goto $l266;
        $l271:;
        if ($tmp260 < $tmp262) goto $l264; else goto $l266;
        $l264:;
        {
            panda$core$MutableString$Index $tmp272 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, result253);
            result253 = $tmp272;
        }
        $l267:;
        int64_t $tmp274 = $tmp262 - i259.value;
        if ($tmp263) goto $l275; else goto $l276;
        $l275:;
        if ((uint64_t) $tmp274 >= 1) goto $l273; else goto $l266;
        $l276:;
        if ((uint64_t) $tmp274 > 1) goto $l273; else goto $l266;
        $l273:;
        i259.value += 1;
        goto $l264;
        $l266:;
    }
    }
    else {
    {
        panda$core$Int64$init$builtin_int64(&$tmp280, 0);
        panda$core$Int64$init$builtin_int64(&$tmp281, -1);
        panda$core$Bit$init$builtin_bit(&$tmp282, false);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp279, $tmp280, p_offset, $tmp281, $tmp282);
        int64_t $tmp284 = $tmp279.start.value;
        panda$core$Int64 i283 = { $tmp284 };
        int64_t $tmp286 = $tmp279.end.value;
        int64_t $tmp287 = $tmp279.step.value;
        bool $tmp288 = $tmp279.inclusive.value;
        bool $tmp295 = $tmp287 > 0;
        if ($tmp295) goto $l293; else goto $l294;
        $l293:;
        if ($tmp288) goto $l296; else goto $l297;
        $l296:;
        if ($tmp284 <= $tmp286) goto $l289; else goto $l291;
        $l297:;
        if ($tmp284 < $tmp286) goto $l289; else goto $l291;
        $l294:;
        if ($tmp288) goto $l298; else goto $l299;
        $l298:;
        if ($tmp284 >= $tmp286) goto $l289; else goto $l291;
        $l299:;
        if ($tmp284 > $tmp286) goto $l289; else goto $l291;
        $l289:;
        {
            panda$core$MutableString$Index $tmp301 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, result253);
            result253 = $tmp301;
        }
        $l292:;
        if ($tmp295) goto $l303; else goto $l304;
        $l303:;
        int64_t $tmp305 = $tmp286 - i283.value;
        if ($tmp288) goto $l306; else goto $l307;
        $l306:;
        if ((uint64_t) $tmp305 >= $tmp287) goto $l302; else goto $l291;
        $l307:;
        if ((uint64_t) $tmp305 > $tmp287) goto $l302; else goto $l291;
        $l304:;
        int64_t $tmp309 = i283.value - $tmp286;
        if ($tmp288) goto $l310; else goto $l311;
        $l310:;
        if ((uint64_t) $tmp309 >= -$tmp287) goto $l302; else goto $l291;
        $l311:;
        if ((uint64_t) $tmp309 > -$tmp287) goto $l302; else goto $l291;
        $l302:;
        i283.value += $tmp287;
        goto $l289;
        $l291:;
    }
    }
    $returnValue313 = result253;
    return $returnValue313;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$MutableString$Index$nullable $returnValue315;
    panda$core$MutableString$Index $tmp316 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$nullable $tmp317 = panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(self, p_s, $tmp316);
    $returnValue315 = $tmp317;
    return $returnValue315;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s, panda$core$MutableString$Index p_start) {
    panda$core$MutableString$Index$nullable $returnValue320;
    panda$core$Range$LTpanda$core$Int64$GT $tmp322;
    panda$core$Bit $tmp324;
    panda$core$Range$LTpanda$core$Int64$GT $tmp338;
    panda$core$Int64 $tmp339;
    panda$core$Bit $tmp340;
    panda$core$MutableString$Index $tmp362;
    panda$core$Bit $tmp319 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp319.value) {
    {
        $returnValue320 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
        return $returnValue320;
    }
    }
    panda$core$Int64 $tmp323 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Bit$init$builtin_bit(&$tmp324, true);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp322, p_start.value, $tmp323, $tmp324);
    int64_t $tmp326 = $tmp322.min.value;
    panda$core$Int64 i325 = { $tmp326 };
    int64_t $tmp328 = $tmp322.max.value;
    bool $tmp329 = $tmp322.inclusive.value;
    if ($tmp329) goto $l336; else goto $l337;
    $l336:;
    if ($tmp326 <= $tmp328) goto $l330; else goto $l332;
    $l337:;
    if ($tmp326 < $tmp328) goto $l330; else goto $l332;
    $l330:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp339, 0);
        panda$core$Bit$init$builtin_bit(&$tmp340, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp338, $tmp339, p_s->_length, $tmp340);
        int64_t $tmp342 = $tmp338.min.value;
        panda$core$Int64 j341 = { $tmp342 };
        int64_t $tmp344 = $tmp338.max.value;
        bool $tmp345 = $tmp338.inclusive.value;
        if ($tmp345) goto $l352; else goto $l353;
        $l352:;
        if ($tmp342 <= $tmp344) goto $l346; else goto $l348;
        $l353:;
        if ($tmp342 < $tmp344) goto $l346; else goto $l348;
        $l346:;
        {
            panda$core$Int64 $tmp354 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i325, j341);
            panda$core$Bit $tmp355 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp354.value], p_s->data[j341.value]);
            if ($tmp355.value) {
            {
                goto $l333;
            }
            }
        }
        $l349:;
        int64_t $tmp357 = $tmp344 - j341.value;
        if ($tmp345) goto $l358; else goto $l359;
        $l358:;
        if ((uint64_t) $tmp357 >= 1) goto $l356; else goto $l348;
        $l359:;
        if ((uint64_t) $tmp357 > 1) goto $l356; else goto $l348;
        $l356:;
        j341.value += 1;
        goto $l346;
        $l348:;
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp362, i325);
        $returnValue320 = ((panda$core$MutableString$Index$nullable) { $tmp362, true });
        return $returnValue320;
    }
    $l333:;
    int64_t $tmp365 = $tmp328 - i325.value;
    if ($tmp329) goto $l366; else goto $l367;
    $l366:;
    if ((uint64_t) $tmp365 >= 1) goto $l364; else goto $l332;
    $l367:;
    if ((uint64_t) $tmp365 > 1) goto $l364; else goto $l332;
    $l364:;
    i325.value += 1;
    goto $l330;
    $l332:;
    $returnValue320 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
    return $returnValue320;
}
panda$core$Bit panda$core$MutableString$contains$panda$core$Char8$R$panda$core$Bit(panda$core$MutableString* self, panda$core$Char8 p_c) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp371;
    panda$core$Int64 $tmp372;
    panda$core$Bit $tmp373;
    panda$core$Bit $returnValue388;
    panda$core$Bit $tmp389;
    panda$core$Bit $tmp397;
    panda$core$Int64$init$builtin_int64(&$tmp372, 0);
    panda$core$Bit$init$builtin_bit(&$tmp373, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp371, $tmp372, self->_length, $tmp373);
    int64_t $tmp375 = $tmp371.min.value;
    panda$core$Int64 i374 = { $tmp375 };
    int64_t $tmp377 = $tmp371.max.value;
    bool $tmp378 = $tmp371.inclusive.value;
    if ($tmp378) goto $l385; else goto $l386;
    $l385:;
    if ($tmp375 <= $tmp377) goto $l379; else goto $l381;
    $l386:;
    if ($tmp375 < $tmp377) goto $l379; else goto $l381;
    $l379:;
    {
        panda$core$Bit $tmp387 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->data[i374.value], p_c);
        if ($tmp387.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp389, true);
            $returnValue388 = $tmp389;
            return $returnValue388;
        }
        }
    }
    $l382:;
    int64_t $tmp392 = $tmp377 - i374.value;
    if ($tmp378) goto $l393; else goto $l394;
    $l393:;
    if ((uint64_t) $tmp392 >= 1) goto $l391; else goto $l381;
    $l394:;
    if ((uint64_t) $tmp392 > 1) goto $l391; else goto $l381;
    $l391:;
    i374.value += 1;
    goto $l379;
    $l381:;
    panda$core$Bit$init$builtin_bit(&$tmp397, false);
    $returnValue388 = $tmp397;
    return $returnValue388;
}
panda$core$Bit panda$core$MutableString$contains$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$Bit $returnValue399;
    panda$core$MutableString$Index$nullable $tmp400 = panda$core$MutableString$indexOf$panda$core$String$R$panda$core$MutableString$Index$Q(self, p_s);
    $returnValue399 = ((panda$core$Bit) { $tmp400.nonnull });
    return $returnValue399;
}
panda$core$Bit panda$core$MutableString$startsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue403;
    panda$core$Bit $tmp404;
    panda$core$Range$LTpanda$core$Int64$GT $tmp406;
    panda$core$Int64 $tmp407;
    panda$core$Bit $tmp408;
    panda$core$Bit $tmp423;
    panda$core$Bit $tmp431;
    panda$core$Bit $tmp402 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp402.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp404, false);
        $returnValue403 = $tmp404;
        return $returnValue403;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp407, 0);
    panda$core$Bit$init$builtin_bit(&$tmp408, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp406, $tmp407, p_other->_length, $tmp408);
    int64_t $tmp410 = $tmp406.min.value;
    panda$core$Int64 i409 = { $tmp410 };
    int64_t $tmp412 = $tmp406.max.value;
    bool $tmp413 = $tmp406.inclusive.value;
    if ($tmp413) goto $l420; else goto $l421;
    $l420:;
    if ($tmp410 <= $tmp412) goto $l414; else goto $l416;
    $l421:;
    if ($tmp410 < $tmp412) goto $l414; else goto $l416;
    $l414:;
    {
        panda$core$Bit $tmp422 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[i409.value], p_other->data[i409.value]);
        if ($tmp422.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp423, false);
            $returnValue403 = $tmp423;
            return $returnValue403;
        }
        }
    }
    $l417:;
    int64_t $tmp426 = $tmp412 - i409.value;
    if ($tmp413) goto $l427; else goto $l428;
    $l427:;
    if ((uint64_t) $tmp426 >= 1) goto $l425; else goto $l416;
    $l428:;
    if ((uint64_t) $tmp426 > 1) goto $l425; else goto $l416;
    $l425:;
    i409.value += 1;
    goto $l414;
    $l416:;
    panda$core$Bit$init$builtin_bit(&$tmp431, true);
    $returnValue403 = $tmp431;
    return $returnValue403;
}
panda$core$Bit panda$core$MutableString$endsWith$panda$core$String$R$panda$core$Bit(panda$core$MutableString* self, panda$core$String* p_other) {
    panda$core$Bit $returnValue434;
    panda$core$Bit $tmp435;
    panda$core$Range$LTpanda$core$Int64$GT $tmp437;
    panda$core$Int64 $tmp438;
    panda$core$Bit $tmp439;
    panda$core$Bit $tmp456;
    panda$core$Bit $tmp464;
    panda$core$Bit $tmp433 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_other->_length);
    if ($tmp433.value) {
    {
        panda$core$Bit$init$builtin_bit(&$tmp435, false);
        $returnValue434 = $tmp435;
        return $returnValue434;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp438, 0);
    panda$core$Bit$init$builtin_bit(&$tmp439, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp437, $tmp438, p_other->_length, $tmp439);
    int64_t $tmp441 = $tmp437.min.value;
    panda$core$Int64 i440 = { $tmp441 };
    int64_t $tmp443 = $tmp437.max.value;
    bool $tmp444 = $tmp437.inclusive.value;
    if ($tmp444) goto $l451; else goto $l452;
    $l451:;
    if ($tmp441 <= $tmp443) goto $l445; else goto $l447;
    $l452:;
    if ($tmp441 < $tmp443) goto $l445; else goto $l447;
    $l445:;
    {
        panda$core$Int64 $tmp453 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_other->_length);
        panda$core$Int64 $tmp454 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp453, i440);
        panda$core$Bit $tmp455 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp454.value], p_other->data[i440.value]);
        if ($tmp455.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp456, false);
            $returnValue434 = $tmp456;
            return $returnValue434;
        }
        }
    }
    $l448:;
    int64_t $tmp459 = $tmp443 - i440.value;
    if ($tmp444) goto $l460; else goto $l461;
    $l460:;
    if ((uint64_t) $tmp459 >= 1) goto $l458; else goto $l447;
    $l461:;
    if ((uint64_t) $tmp459 > 1) goto $l458; else goto $l447;
    $l458:;
    i440.value += 1;
    goto $l445;
    $l447:;
    panda$core$Bit$init$builtin_bit(&$tmp464, true);
    $returnValue434 = $tmp464;
    return $returnValue434;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s) {
    panda$core$MutableString$Index$nullable $returnValue466;
    panda$core$MutableString$Index $tmp467 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$nullable $tmp468 = panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(self, p_s, $tmp467);
    $returnValue466 = $tmp468;
    return $returnValue466;
}
panda$core$MutableString$Index$nullable panda$core$MutableString$lastIndexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(panda$core$MutableString* self, panda$core$String* p_s, panda$core$MutableString$Index p_start) {
    panda$core$MutableString$Index$nullable $returnValue471;
    panda$core$Int64 startPos473;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp476;
    panda$core$Int64 $tmp477;
    panda$core$Int64 $tmp478;
    panda$core$Bit $tmp479;
    panda$core$Range$LTpanda$core$Int64$GT $tmp498;
    panda$core$Int64 $tmp499;
    panda$core$Bit $tmp500;
    panda$core$MutableString$Index $tmp522;
    panda$core$Bit $tmp470 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->_length, p_s->_length);
    if ($tmp470.value) {
    {
        $returnValue471 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
        return $returnValue471;
    }
    }
    panda$core$Int64 $tmp474 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, p_s->_length);
    panda$core$Int64 $tmp475 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(p_start.value, $tmp474);
    startPos473 = $tmp475;
    panda$core$Int64$init$builtin_int64(&$tmp477, 0);
    panda$core$Int64$init$builtin_int64(&$tmp478, -1);
    panda$core$Bit$init$builtin_bit(&$tmp479, true);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp476, startPos473, $tmp477, $tmp478, $tmp479);
    int64_t $tmp481 = $tmp476.start.value;
    panda$core$Int64 i480 = { $tmp481 };
    int64_t $tmp483 = $tmp476.end.value;
    int64_t $tmp484 = $tmp476.step.value;
    bool $tmp485 = $tmp476.inclusive.value;
    bool $tmp492 = $tmp484 > 0;
    if ($tmp492) goto $l490; else goto $l491;
    $l490:;
    if ($tmp485) goto $l493; else goto $l494;
    $l493:;
    if ($tmp481 <= $tmp483) goto $l486; else goto $l488;
    $l494:;
    if ($tmp481 < $tmp483) goto $l486; else goto $l488;
    $l491:;
    if ($tmp485) goto $l495; else goto $l496;
    $l495:;
    if ($tmp481 >= $tmp483) goto $l486; else goto $l488;
    $l496:;
    if ($tmp481 > $tmp483) goto $l486; else goto $l488;
    $l486:;
    {
        panda$core$Int64$init$builtin_int64(&$tmp499, 0);
        panda$core$Bit$init$builtin_bit(&$tmp500, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp498, $tmp499, p_s->_length, $tmp500);
        int64_t $tmp502 = $tmp498.min.value;
        panda$core$Int64 j501 = { $tmp502 };
        int64_t $tmp504 = $tmp498.max.value;
        bool $tmp505 = $tmp498.inclusive.value;
        if ($tmp505) goto $l512; else goto $l513;
        $l512:;
        if ($tmp502 <= $tmp504) goto $l506; else goto $l508;
        $l513:;
        if ($tmp502 < $tmp504) goto $l506; else goto $l508;
        $l506:;
        {
            panda$core$Int64 $tmp514 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i480, j501);
            panda$core$Bit $tmp515 = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->data[$tmp514.value], p_s->data[j501.value]);
            if ($tmp515.value) {
            {
                goto $l489;
            }
            }
        }
        $l509:;
        int64_t $tmp517 = $tmp504 - j501.value;
        if ($tmp505) goto $l518; else goto $l519;
        $l518:;
        if ((uint64_t) $tmp517 >= 1) goto $l516; else goto $l508;
        $l519:;
        if ((uint64_t) $tmp517 > 1) goto $l516; else goto $l508;
        $l516:;
        j501.value += 1;
        goto $l506;
        $l508:;
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp522, i480);
        $returnValue471 = ((panda$core$MutableString$Index$nullable) { $tmp522, true });
        return $returnValue471;
    }
    $l489:;
    if ($tmp492) goto $l525; else goto $l526;
    $l525:;
    int64_t $tmp527 = $tmp483 - i480.value;
    if ($tmp485) goto $l528; else goto $l529;
    $l528:;
    if ((uint64_t) $tmp527 >= $tmp484) goto $l524; else goto $l488;
    $l529:;
    if ((uint64_t) $tmp527 > $tmp484) goto $l524; else goto $l488;
    $l526:;
    int64_t $tmp531 = i480.value - $tmp483;
    if ($tmp485) goto $l532; else goto $l533;
    $l532:;
    if ((uint64_t) $tmp531 >= -$tmp484) goto $l524; else goto $l488;
    $l533:;
    if ((uint64_t) $tmp531 > -$tmp484) goto $l524; else goto $l488;
    $l524:;
    i480.value += $tmp484;
    goto $l486;
    $l488:;
    $returnValue471 = ((panda$core$MutableString$Index$nullable) { .nonnull = false });
    return $returnValue471;
}
panda$core$Bit panda$core$MutableString$matches$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_regex) {
    panda$core$Bit $returnValue536;
    panda$core$Matcher* $tmp537;
    panda$core$String* $tmp538;
    panda$core$Bit $tmp541;
    panda$core$String* $tmp539 = panda$core$MutableString$convert$R$panda$core$String(self);
    $tmp538 = $tmp539;
    panda$core$Matcher* $tmp540 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_regex, $tmp538);
    $tmp537 = $tmp540;
    panda$core$Matcher$matches$R$panda$core$Bit(&$tmp541, $tmp537);
    $returnValue536 = $tmp541;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp538));
    return $returnValue536;
}
panda$core$Bit panda$core$MutableString$contains$panda$core$RegularExpression$R$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_needle) {
    panda$core$Bit $returnValue543;
    panda$core$Matcher* $tmp544;
    panda$core$String* $tmp545;
    panda$core$String* $tmp546 = panda$core$MutableString$convert$R$panda$core$String(self);
    $tmp545 = $tmp546;
    panda$core$Matcher* $tmp547 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_needle, $tmp545);
    $tmp544 = $tmp547;
    panda$core$Bit $tmp548 = panda$core$Matcher$find$R$panda$core$Bit($tmp544);
    $returnValue543 = $tmp548;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
    return $returnValue543;
}
void panda$core$MutableString$trim(panda$core$MutableString* self) {
    panda$core$MutableString$Index i550;
    panda$core$Equatable* $tmp556;
    panda$core$Equatable* $tmp558;
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp570;
    panda$core$Bit $tmp572;
    panda$core$Int64 $tmp574;
    panda$core$Equatable* $tmp582;
    panda$core$Equatable* $tmp584;
    panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp596;
    panda$core$Bit $tmp598;
    panda$core$MutableString$Index $tmp551 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    i550 = $tmp551;
    $l552:;
    panda$core$MutableString$Index$wrapper* $tmp557;
    $tmp557 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp557->value = i550;
    $tmp556 = ((panda$core$Equatable*) $tmp557);
    panda$core$MutableString$Index $tmp559 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$wrapper* $tmp560;
    $tmp560 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp560->value = $tmp559;
    $tmp558 = ((panda$core$Equatable*) $tmp560);
    ITable* $tmp561 = $tmp556->$class->itable;
    while ($tmp561->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp561 = $tmp561->next;
    }
    $fn563 $tmp562 = $tmp561->methods[1];
    panda$core$Bit $tmp564 = $tmp562($tmp556, $tmp558);
    bool $tmp555 = $tmp564.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
    if (!$tmp555) goto $l565;
    panda$core$Char32 $tmp566 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(self, i550);
    panda$core$Bit $tmp567 = panda$core$Char32$isWhitespace$R$panda$core$Bit($tmp566);
    $tmp555 = $tmp567.value;
    $l565:;
    panda$core$Bit $tmp568 = { $tmp555 };
    bool $tmp554 = $tmp568.value;
    if (!$tmp554) goto $l553;
    {
        panda$core$MutableString$Index $tmp569 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, i550);
        i550 = $tmp569;
    }
    goto $l552;
    $l553:;
    panda$core$MutableString$Index $tmp571 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$Bit$init$builtin_bit(&$tmp572, false);
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp570, $tmp571, i550, $tmp572);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp570, &$s573);
    panda$core$Int64$init$builtin_int64(&$tmp574, 0);
    panda$core$Bit $tmp575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->_length, $tmp574);
    if ($tmp575.value) {
    {
        return;
    }
    }
    panda$core$MutableString$Index $tmp576 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp577 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, $tmp576);
    i550 = $tmp577;
    $l578:;
    panda$core$MutableString$Index$wrapper* $tmp583;
    $tmp583 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp583->value = i550;
    $tmp582 = ((panda$core$Equatable*) $tmp583);
    panda$core$MutableString$Index $tmp585 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index$wrapper* $tmp586;
    $tmp586 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp586->value = $tmp585;
    $tmp584 = ((panda$core$Equatable*) $tmp586);
    ITable* $tmp587 = $tmp582->$class->itable;
    while ($tmp587->$class != (panda$core$Class*) &panda$core$Equatable$class) {
        $tmp587 = $tmp587->next;
    }
    $fn589 $tmp588 = $tmp587->methods[1];
    panda$core$Bit $tmp590 = $tmp588($tmp582, $tmp584);
    bool $tmp581 = $tmp590.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
    if (!$tmp581) goto $l591;
    panda$core$Char32 $tmp592 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(self, i550);
    panda$core$Bit $tmp593 = panda$core$Char32$isWhitespace$R$panda$core$Bit($tmp592);
    $tmp581 = $tmp593.value;
    $l591:;
    panda$core$Bit $tmp594 = { $tmp581 };
    bool $tmp580 = $tmp594.value;
    if (!$tmp580) goto $l579;
    {
        panda$core$MutableString$Index $tmp595 = panda$core$MutableString$previous$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, i550);
        i550 = $tmp595;
    }
    goto $l578;
    $l579:;
    panda$core$MutableString$Index $tmp597 = panda$core$MutableString$next$panda$core$MutableString$Index$R$panda$core$MutableString$Index(self, i550);
    panda$core$Bit$init$builtin_bit(&$tmp598, false);
    panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(&$tmp596, ((panda$core$MutableString$Index$nullable) { $tmp597, true }), ((panda$core$MutableString$Index$nullable) { .nonnull = false }), $tmp598);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(self, $tmp596, &$s599);
}
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement) {
    panda$core$Bit $tmp600;
    panda$core$Bit$init$builtin_bit(&$tmp600, true);
    panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(self, p_search, p_replacement, $tmp600);
}
void panda$core$MutableString$replace$panda$core$RegularExpression$panda$core$String$panda$core$Bit(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$String* p_replacement, panda$core$Bit p_allowGroupReferences) {
    panda$core$Matcher* matcher604 = NULL;
    panda$core$Matcher* $tmp605;
    panda$core$Matcher* $tmp606;
    panda$core$String* $tmp607;
    int $tmp603;
    {
        panda$core$String* $tmp608 = panda$core$MutableString$convert$R$panda$core$String(self);
        $tmp607 = $tmp608;
        panda$core$Matcher* $tmp609 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, $tmp607);
        $tmp606 = $tmp609;
        $tmp605 = $tmp606;
        matcher604 = $tmp605;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp605));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
        panda$core$MutableString$clear(self);
        $l610:;
        panda$core$Bit $tmp613 = panda$core$Matcher$find$R$panda$core$Bit(matcher604);
        bool $tmp612 = $tmp613.value;
        if (!$tmp612) goto $l611;
        {
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher604, self, p_replacement, p_allowGroupReferences);
        }
        goto $l610;
        $l611:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher604, self);
    }
    $tmp603 = -1;
    goto $l601;
    $l601:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher604));
    matcher604 = NULL;
    switch ($tmp603) {
        case -1: goto $l614;
    }
    $l614:;
}
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$core$String$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$Matcher* matcher618 = NULL;
    panda$core$Matcher* $tmp619;
    panda$core$Matcher* $tmp620;
    panda$core$String* $tmp621;
    panda$core$String* $tmp628;
    panda$core$Object* $tmp629;
    panda$core$String* $tmp630;
    panda$core$Int64 $tmp631;
    panda$core$Object* $tmp633;
    panda$core$Bit $tmp638;
    int $tmp617;
    {
        panda$core$String* $tmp622 = panda$core$MutableString$convert$R$panda$core$String(self);
        $tmp621 = $tmp622;
        panda$core$Matcher* $tmp623 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, $tmp621);
        $tmp620 = $tmp623;
        $tmp619 = $tmp620;
        matcher618 = $tmp619;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp621));
        panda$core$MutableString$clear(self);
        $l624:;
        panda$core$Bit $tmp627 = panda$core$Matcher$find$R$panda$core$Bit(matcher618);
        bool $tmp626 = $tmp627.value;
        if (!$tmp626) goto $l625;
        {
            panda$core$Int64$init$builtin_int64(&$tmp631, 0);
            panda$core$String* $tmp632 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher618, $tmp631);
            $tmp630 = $tmp632;
            if (p_replacement->target) {
                $tmp633 = (($fn634) p_replacement->pointer)(p_replacement->target, $tmp630);
            } else {
                $tmp633 = (($fn635) p_replacement->pointer)($tmp630);
            }
            $tmp629 = $tmp633;
            panda$core$String* $tmp637 = (($fn636) $tmp629->$class->vtable[0])($tmp629);
            $tmp628 = $tmp637;
            panda$core$Bit$init$builtin_bit(&$tmp638, false);
            panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher618, self, $tmp628, $tmp638);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
            panda$core$Panda$unref$panda$core$Object($tmp629);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
        }
        goto $l624;
        $l625:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher618, self);
    }
    $tmp617 = -1;
    goto $l615;
    $l615:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher618));
    matcher618 = NULL;
    switch ($tmp617) {
        case -1: goto $l639;
    }
    $l639:;
}
void panda$core$MutableString$replace$panda$core$RegularExpression$$LPpanda$collections$ListView$LTpanda$core$String$Q$GT$RP$EQ$GT$LPpanda$core$Object$RP(panda$core$MutableString* self, panda$core$RegularExpression* p_search, panda$core$MutableMethod* p_replacement) {
    panda$core$Matcher* matcher643 = NULL;
    panda$core$Matcher* $tmp644;
    panda$core$Matcher* $tmp645;
    panda$core$String* $tmp646;
    panda$collections$Array* groups656 = NULL;
    panda$collections$Array* $tmp657;
    panda$collections$Array* $tmp658;
    panda$core$Range$LTpanda$core$Int64$GT $tmp660;
    panda$core$Int64 $tmp661;
    panda$core$Int64 $tmp662;
    panda$core$Bit $tmp663;
    panda$core$String* $tmp677;
    panda$core$String* $tmp685;
    panda$core$Object* $tmp686;
    panda$core$Object* $tmp687;
    panda$core$Bit $tmp692;
    int $tmp642;
    {
        panda$core$String* $tmp647 = panda$core$MutableString$convert$R$panda$core$String(self);
        $tmp646 = $tmp647;
        panda$core$Matcher* $tmp648 = panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(p_search, $tmp646);
        $tmp645 = $tmp648;
        $tmp644 = $tmp645;
        matcher643 = $tmp644;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
        panda$core$MutableString$clear(self);
        $l649:;
        panda$core$Bit $tmp652 = panda$core$Matcher$find$R$panda$core$Bit(matcher643);
        bool $tmp651 = $tmp652.value;
        if (!$tmp651) goto $l650;
        {
            int $tmp655;
            {
                panda$collections$Array* $tmp659 = (panda$collections$Array*) pandaObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
                panda$collections$Array$init($tmp659);
                $tmp658 = $tmp659;
                $tmp657 = $tmp658;
                groups656 = $tmp657;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
                panda$core$Int64$init$builtin_int64(&$tmp661, 0);
                panda$core$Matcher$get_groupCount$R$panda$core$Int64(&$tmp662, matcher643);
                panda$core$Bit$init$builtin_bit(&$tmp663, false);
                panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp660, $tmp661, $tmp662, $tmp663);
                int64_t $tmp665 = $tmp660.min.value;
                panda$core$Int64 i664 = { $tmp665 };
                int64_t $tmp667 = $tmp660.max.value;
                bool $tmp668 = $tmp660.inclusive.value;
                if ($tmp668) goto $l675; else goto $l676;
                $l675:;
                if ($tmp665 <= $tmp667) goto $l669; else goto $l671;
                $l676:;
                if ($tmp665 < $tmp667) goto $l669; else goto $l671;
                $l669:;
                {
                    panda$core$String* $tmp678 = panda$core$Matcher$group$panda$core$Int64$R$panda$core$String$Q(matcher643, i664);
                    $tmp677 = $tmp678;
                    panda$collections$Array$add$panda$collections$Array$T(groups656, ((panda$core$Object*) $tmp677));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                }
                $l672:;
                int64_t $tmp680 = $tmp667 - i664.value;
                if ($tmp668) goto $l681; else goto $l682;
                $l681:;
                if ((uint64_t) $tmp680 >= 1) goto $l679; else goto $l671;
                $l682:;
                if ((uint64_t) $tmp680 > 1) goto $l679; else goto $l671;
                $l679:;
                i664.value += 1;
                goto $l669;
                $l671:;
                if (p_replacement->target) {
                    $tmp687 = (($fn688) p_replacement->pointer)(p_replacement->target, ((panda$collections$ListView*) groups656));
                } else {
                    $tmp687 = (($fn689) p_replacement->pointer)(((panda$collections$ListView*) groups656));
                }
                $tmp686 = $tmp687;
                panda$core$String* $tmp691 = (($fn690) $tmp686->$class->vtable[0])($tmp686);
                $tmp685 = $tmp691;
                panda$core$Bit$init$builtin_bit(&$tmp692, false);
                panda$core$Matcher$appendReplacement$panda$core$MutableString$panda$core$String$panda$core$Bit(matcher643, self, $tmp685, $tmp692);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp685));
                panda$core$Panda$unref$panda$core$Object($tmp686);
            }
            $tmp655 = -1;
            goto $l653;
            $l653:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) groups656));
            groups656 = NULL;
            switch ($tmp655) {
                case -1: goto $l693;
            }
            $l693:;
        }
        goto $l649;
        $l650:;
        panda$core$Matcher$appendTail$panda$core$MutableString(matcher643, self);
    }
    $tmp642 = -1;
    goto $l640;
    $l640:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) matcher643));
    matcher643 = NULL;
    switch ($tmp642) {
        case -1: goto $l694;
    }
    $l694:;
}
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(panda$core$MutableString* self, panda$core$MutableString$Index p_index) {
    panda$core$Int64 idx695;
    panda$core$Char8 c696;
    panda$core$Int32 result697;
    panda$core$Bit $tmp699;
    panda$core$Char32 $returnValue702;
    panda$core$Char32 $tmp703;
    panda$core$Bit $tmp705;
    panda$core$Int64 $tmp708;
    panda$core$Int32 $tmp714;
    panda$core$Int32 $tmp716;
    panda$core$Int64 $tmp718;
    panda$core$Int32 $tmp721;
    panda$core$Char32 $tmp724;
    panda$core$Bit $tmp726;
    panda$core$Int64 $tmp729;
    panda$core$Int32 $tmp735;
    panda$core$Int32 $tmp737;
    panda$core$Int64 $tmp739;
    panda$core$Int32 $tmp742;
    panda$core$Int32 $tmp744;
    panda$core$Int64 $tmp747;
    panda$core$Int32 $tmp750;
    panda$core$Char32 $tmp753;
    panda$core$Int64 $tmp755;
    panda$core$Int32 $tmp761;
    panda$core$Int32 $tmp763;
    panda$core$Int64 $tmp765;
    panda$core$Int32 $tmp768;
    panda$core$Int32 $tmp770;
    panda$core$Int64 $tmp773;
    panda$core$Int32 $tmp776;
    panda$core$Int32 $tmp778;
    panda$core$Int64 $tmp781;
    panda$core$Int32 $tmp784;
    panda$core$Char32 $tmp787;
    idx695 = p_index.value;
    c696 = self->data[idx695.value];
    panda$core$Int32 $tmp698 = panda$core$Char8$convert$R$panda$core$Int32(c696);
    result697 = $tmp698;
    int64_t $tmp700 = ((int64_t) c696.value) & 255;
    bool $tmp701 = $tmp700 < 192;
    panda$core$Bit$init$builtin_bit(&$tmp699, $tmp701);
    if ($tmp699.value) {
    {
        panda$core$Char32$init$panda$core$Int32(&$tmp703, result697);
        $returnValue702 = $tmp703;
        return $returnValue702;
    }
    }
    int64_t $tmp706 = ((int64_t) c696.value) & 255;
    bool $tmp707 = $tmp706 < 224;
    panda$core$Bit$init$builtin_bit(&$tmp705, $tmp707);
    if ($tmp705.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp708, 1);
        panda$core$Int64 $tmp709 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx695, $tmp708);
        panda$core$Bit $tmp710 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp709, self->_length);
        if ($tmp710.value) goto $l711; else goto $l712;
        $l712:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s713, (panda$core$Int64) { 466 });
        abort();
        $l711:;
        panda$core$Int32$init$builtin_int32(&$tmp714, 31);
        panda$core$Int32 $tmp715 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result697, $tmp714);
        panda$core$Int32$init$builtin_int32(&$tmp716, 6);
        panda$core$Int32 $tmp717 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp715, $tmp716);
        panda$core$Int64$init$builtin_int64(&$tmp718, 1);
        panda$core$Int64 $tmp719 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx695, $tmp718);
        panda$core$Int32 $tmp720 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp719.value]);
        panda$core$Int32$init$builtin_int32(&$tmp721, 63);
        panda$core$Int32 $tmp722 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp720, $tmp721);
        panda$core$Int32 $tmp723 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp717, $tmp722);
        result697 = $tmp723;
        panda$core$Char32$init$panda$core$Int32(&$tmp724, result697);
        $returnValue702 = $tmp724;
        return $returnValue702;
    }
    }
    int64_t $tmp727 = ((int64_t) c696.value) & 255;
    bool $tmp728 = $tmp727 < 240;
    panda$core$Bit$init$builtin_bit(&$tmp726, $tmp728);
    if ($tmp726.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp729, 2);
        panda$core$Int64 $tmp730 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx695, $tmp729);
        panda$core$Bit $tmp731 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp730, self->_length);
        if ($tmp731.value) goto $l732; else goto $l733;
        $l733:;
        panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s734, (panda$core$Int64) { 471 });
        abort();
        $l732:;
        panda$core$Int32$init$builtin_int32(&$tmp735, 15);
        panda$core$Int32 $tmp736 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result697, $tmp735);
        panda$core$Int32$init$builtin_int32(&$tmp737, 12);
        panda$core$Int32 $tmp738 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp736, $tmp737);
        panda$core$Int64$init$builtin_int64(&$tmp739, 1);
        panda$core$Int64 $tmp740 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx695, $tmp739);
        panda$core$Int32 $tmp741 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp740.value]);
        panda$core$Int32$init$builtin_int32(&$tmp742, 63);
        panda$core$Int32 $tmp743 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp741, $tmp742);
        panda$core$Int32$init$builtin_int32(&$tmp744, 6);
        panda$core$Int32 $tmp745 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp743, $tmp744);
        panda$core$Int32 $tmp746 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp738, $tmp745);
        panda$core$Int64$init$builtin_int64(&$tmp747, 2);
        panda$core$Int64 $tmp748 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx695, $tmp747);
        panda$core$Int32 $tmp749 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp748.value]);
        panda$core$Int32$init$builtin_int32(&$tmp750, 63);
        panda$core$Int32 $tmp751 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp749, $tmp750);
        panda$core$Int32 $tmp752 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp746, $tmp751);
        result697 = $tmp752;
        panda$core$Char32$init$panda$core$Int32(&$tmp753, result697);
        $returnValue702 = $tmp753;
        return $returnValue702;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp755, 3);
    panda$core$Int64 $tmp756 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx695, $tmp755);
    panda$core$Bit $tmp757 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit($tmp756, self->_length);
    if ($tmp757.value) goto $l758; else goto $l759;
    $l759:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s760, (panda$core$Int64) { 476 });
    abort();
    $l758:;
    panda$core$Int32$init$builtin_int32(&$tmp761, 7);
    panda$core$Int32 $tmp762 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(result697, $tmp761);
    panda$core$Int32$init$builtin_int32(&$tmp763, 18);
    panda$core$Int32 $tmp764 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp762, $tmp763);
    panda$core$Int64$init$builtin_int64(&$tmp765, 1);
    panda$core$Int64 $tmp766 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx695, $tmp765);
    panda$core$Int32 $tmp767 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp766.value]);
    panda$core$Int32$init$builtin_int32(&$tmp768, 63);
    panda$core$Int32 $tmp769 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp767, $tmp768);
    panda$core$Int32$init$builtin_int32(&$tmp770, 12);
    panda$core$Int32 $tmp771 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp769, $tmp770);
    panda$core$Int32 $tmp772 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp764, $tmp771);
    panda$core$Int64$init$builtin_int64(&$tmp773, 2);
    panda$core$Int64 $tmp774 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx695, $tmp773);
    panda$core$Int32 $tmp775 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp774.value]);
    panda$core$Int32$init$builtin_int32(&$tmp776, 63);
    panda$core$Int32 $tmp777 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp775, $tmp776);
    panda$core$Int32$init$builtin_int32(&$tmp778, 6);
    panda$core$Int32 $tmp779 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp777, $tmp778);
    panda$core$Int32 $tmp780 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp772, $tmp779);
    panda$core$Int64$init$builtin_int64(&$tmp781, 3);
    panda$core$Int64 $tmp782 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(idx695, $tmp781);
    panda$core$Int32 $tmp783 = panda$core$Char8$convert$R$panda$core$Int32(self->data[$tmp782.value]);
    panda$core$Int32$init$builtin_int32(&$tmp784, 63);
    panda$core$Int32 $tmp785 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32($tmp783, $tmp784);
    panda$core$Int32 $tmp786 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp780, $tmp785);
    result697 = $tmp786;
    panda$core$Char32$init$panda$core$Int32(&$tmp787, result697);
    $returnValue702 = $tmp787;
    return $returnValue702;
}
panda$core$Char32 panda$core$MutableString$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$MutableString* self, panda$core$Int64 p_index) {
    panda$core$Char32 $returnValue789;
    panda$core$MutableString$Index $tmp790 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp791 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp790, p_index);
    panda$core$Char32 $tmp792 = panda$core$MutableString$$IDX$panda$core$MutableString$Index$R$panda$core$Char32(self, $tmp791);
    $returnValue789 = $tmp792;
    return $returnValue789;
}
void panda$core$MutableString$$IDXEQ$panda$core$MutableString$Index$panda$core$Char32(panda$core$MutableString* self, panda$core$MutableString$Index p_index, panda$core$Char32 p_c) {
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp794;
    panda$core$Bit $tmp795;
    panda$core$String* $tmp796;
    panda$core$Bit$init$builtin_bit(&$tmp795, true);
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp794, p_index, p_index, $tmp795);
    panda$core$String* $tmp797 = panda$core$Char32$convert$R$panda$core$String(p_c);
    $tmp796 = $tmp797;
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp794, $tmp796);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$MutableString$Index$GT p_r, panda$core$String* p_s) {
    panda$core$Comparable* $tmp799;
    panda$core$Comparable* $tmp801;
    panda$core$Int64 max833;
    panda$core$Int64 $tmp834;
    panda$core$Int64 rangeLength836;
    panda$core$Int64 newLength838;
    panda$core$Int64 offset841;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp845;
    panda$core$Int64 $tmp846;
    panda$core$Int64 $tmp848;
    panda$core$Bit $tmp849;
    panda$core$Range$LTpanda$core$Int64$GT $tmp880;
    panda$core$Bit $tmp881;
    panda$core$Range$LTpanda$core$Int64$GT $tmp902;
    panda$core$Int64 $tmp903;
    panda$core$Bit $tmp904;
    panda$core$MutableString$Index$wrapper* $tmp800;
    $tmp800 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp800->value = p_r.max;
    $tmp799 = ((panda$core$Comparable*) $tmp800);
    panda$core$MutableString$Index$wrapper* $tmp802;
    $tmp802 = (panda$core$MutableString$Index$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$MutableString$Index$wrapperclass);
    $tmp802->value = p_r.min;
    $tmp801 = ((panda$core$Comparable*) $tmp802);
    ITable* $tmp803 = $tmp799->$class->itable;
    while ($tmp803->$class != (panda$core$Class*) &panda$core$Comparable$class) {
        $tmp803 = $tmp803->next;
    }
    $fn805 $tmp804 = $tmp803->methods[2];
    panda$core$Bit $tmp806 = $tmp804($tmp799, $tmp801);
    bool $tmp798 = $tmp806.value;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
    if (!$tmp798) goto $l807;
    bool $tmp810 = p_r.inclusive.value;
    if (!$tmp810) goto $l811;
    panda$core$Bit $tmp812 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.min.value, self->_length);
    $tmp810 = $tmp812.value;
    $l811:;
    panda$core$Bit $tmp813 = { $tmp810 };
    bool $tmp809 = $tmp813.value;
    if (!$tmp809) goto $l814;
    panda$core$Bit $tmp815 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_r.max.value, self->_length);
    $tmp809 = $tmp815.value;
    $l814:;
    panda$core$Bit $tmp816 = { $tmp809 };
    bool $tmp808 = $tmp816.value;
    if ($tmp808) goto $l817;
    panda$core$Bit $tmp820 = panda$core$Bit$$NOT$R$panda$core$Bit(p_r.inclusive);
    bool $tmp819 = $tmp820.value;
    if (!$tmp819) goto $l821;
    panda$core$Bit $tmp822 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_r.min.value, self->_length);
    $tmp819 = $tmp822.value;
    $l821:;
    panda$core$Bit $tmp823 = { $tmp819 };
    bool $tmp818 = $tmp823.value;
    if (!$tmp818) goto $l824;
    panda$core$Bit $tmp825 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_r.max.value, self->_length);
    $tmp818 = $tmp825.value;
    $l824:;
    panda$core$Bit $tmp826 = { $tmp818 };
    $tmp808 = $tmp826.value;
    $l817:;
    panda$core$Bit $tmp827 = { $tmp808 };
    $tmp798 = $tmp827.value;
    $l807:;
    panda$core$Bit $tmp828 = { $tmp798 };
    if ($tmp828.value) goto $l829; else goto $l830;
    $l830:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s831, (panda$core$Int64) { 501 }, &$s832);
    abort();
    $l829:;
    max833 = p_r.max.value;
    if (p_r.inclusive.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp834, 1);
        panda$core$Int64 $tmp835 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(max833, $tmp834);
        max833 = $tmp835;
    }
    }
    panda$core$Int64 $tmp837 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max833, p_r.min.value);
    rangeLength836 = $tmp837;
    panda$core$Int64 $tmp839 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, rangeLength836);
    panda$core$Int64 $tmp840 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp839, p_s->_length);
    newLength838 = $tmp840;
    panda$core$MutableString$ensureCapacity$panda$core$Int64(self, newLength838);
    panda$core$Int64 $tmp842 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_s->_length, rangeLength836);
    offset841 = $tmp842;
    panda$core$Int64 $tmp843 = panda$core$String$byteLength$R$panda$core$Int64(p_s);
    panda$core$Bit $tmp844 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp843, rangeLength836);
    if ($tmp844.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp846, 1);
        panda$core$Int64 $tmp847 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->_length, $tmp846);
        panda$core$Int64$init$builtin_int64(&$tmp848, -1);
        panda$core$Bit$init$builtin_bit(&$tmp849, true);
        panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp845, $tmp847, max833, $tmp848, $tmp849);
        int64_t $tmp851 = $tmp845.start.value;
        panda$core$Int64 i850 = { $tmp851 };
        int64_t $tmp853 = $tmp845.end.value;
        int64_t $tmp854 = $tmp845.step.value;
        bool $tmp855 = $tmp845.inclusive.value;
        bool $tmp862 = $tmp854 > 0;
        if ($tmp862) goto $l860; else goto $l861;
        $l860:;
        if ($tmp855) goto $l863; else goto $l864;
        $l863:;
        if ($tmp851 <= $tmp853) goto $l856; else goto $l858;
        $l864:;
        if ($tmp851 < $tmp853) goto $l856; else goto $l858;
        $l861:;
        if ($tmp855) goto $l865; else goto $l866;
        $l865:;
        if ($tmp851 >= $tmp853) goto $l856; else goto $l858;
        $l866:;
        if ($tmp851 > $tmp853) goto $l856; else goto $l858;
        $l856:;
        {
            panda$core$Int64 $tmp868 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i850, offset841);
            self->data[$tmp868.value] = self->data[i850.value];
        }
        $l859:;
        if ($tmp862) goto $l870; else goto $l871;
        $l870:;
        int64_t $tmp872 = $tmp853 - i850.value;
        if ($tmp855) goto $l873; else goto $l874;
        $l873:;
        if ((uint64_t) $tmp872 >= $tmp854) goto $l869; else goto $l858;
        $l874:;
        if ((uint64_t) $tmp872 > $tmp854) goto $l869; else goto $l858;
        $l871:;
        int64_t $tmp876 = i850.value - $tmp853;
        if ($tmp855) goto $l877; else goto $l878;
        $l877:;
        if ((uint64_t) $tmp876 >= -$tmp854) goto $l869; else goto $l858;
        $l878:;
        if ((uint64_t) $tmp876 > -$tmp854) goto $l869; else goto $l858;
        $l869:;
        i850.value += $tmp854;
        goto $l856;
        $l858:;
    }
    }
    else {
    {
        panda$core$Bit$init$builtin_bit(&$tmp881, false);
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp880, max833, self->_length, $tmp881);
        int64_t $tmp883 = $tmp880.min.value;
        panda$core$Int64 i882 = { $tmp883 };
        int64_t $tmp885 = $tmp880.max.value;
        bool $tmp886 = $tmp880.inclusive.value;
        if ($tmp886) goto $l893; else goto $l894;
        $l893:;
        if ($tmp883 <= $tmp885) goto $l887; else goto $l889;
        $l894:;
        if ($tmp883 < $tmp885) goto $l887; else goto $l889;
        $l887:;
        {
            panda$core$Int64 $tmp895 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i882, offset841);
            self->data[$tmp895.value] = self->data[i882.value];
        }
        $l890:;
        int64_t $tmp897 = $tmp885 - i882.value;
        if ($tmp886) goto $l898; else goto $l899;
        $l898:;
        if ((uint64_t) $tmp897 >= 1) goto $l896; else goto $l889;
        $l899:;
        if ((uint64_t) $tmp897 > 1) goto $l896; else goto $l889;
        $l896:;
        i882.value += 1;
        goto $l887;
        $l889:;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp903, 0);
    panda$core$Bit$init$builtin_bit(&$tmp904, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp902, $tmp903, p_s->_length, $tmp904);
    int64_t $tmp906 = $tmp902.min.value;
    panda$core$Int64 i905 = { $tmp906 };
    int64_t $tmp908 = $tmp902.max.value;
    bool $tmp909 = $tmp902.inclusive.value;
    if ($tmp909) goto $l916; else goto $l917;
    $l916:;
    if ($tmp906 <= $tmp908) goto $l910; else goto $l912;
    $l917:;
    if ($tmp906 < $tmp908) goto $l910; else goto $l912;
    $l910:;
    {
        panda$core$Int64 $tmp918 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_r.min.value, i905);
        self->data[$tmp918.value] = p_s->data[i905.value];
    }
    $l913:;
    int64_t $tmp920 = $tmp908 - i905.value;
    if ($tmp909) goto $l921; else goto $l922;
    $l921:;
    if ((uint64_t) $tmp920 >= 1) goto $l919; else goto $l912;
    $l922:;
    if ((uint64_t) $tmp920 > 1) goto $l919; else goto $l912;
    $l919:;
    i905.value += 1;
    goto $l910;
    $l912:;
    self->_length = newLength838;
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$Int64$GT p_r, panda$core$String* p_s) {
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp925;
    panda$core$MutableString$Index $tmp926 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp927 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp926, p_r.min);
    panda$core$MutableString$Index $tmp928 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    panda$core$MutableString$Index $tmp929 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp928, p_r.max);
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp925, $tmp927, $tmp929, p_r.inclusive);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp925, p_s);
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$MutableString$Index$Q$GT p_r, panda$core$String* p_s) {
    panda$core$MutableString$Index min930;
    panda$core$Bit inclusive932;
    panda$core$MutableString$Index max933;
    panda$core$Bit $tmp935;
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp936;
    memset(&min930, 0, sizeof(min930));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        min930 = ((panda$core$MutableString$Index) p_r.min.value);
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp931 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        min930 = $tmp931;
    }
    }
    inclusive932 = p_r.inclusive;
    memset(&max933, 0, sizeof(max933));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        max933 = ((panda$core$MutableString$Index) p_r.max.value);
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp934 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
        max933 = $tmp934;
        panda$core$Bit$init$builtin_bit(&$tmp935, false);
        inclusive932 = $tmp935;
    }
    }
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp936, min930, max933, inclusive932);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp936, p_s);
}
void panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$Int64$Q$GT$panda$core$String(panda$core$MutableString* self, panda$core$Range$LTpanda$core$Int64$Q$GT p_r, panda$core$String* p_s) {
    panda$core$MutableString$Index min937;
    panda$core$Bit inclusive941;
    panda$core$MutableString$Index max942;
    panda$core$Bit $tmp946;
    panda$core$Range$LTpanda$core$MutableString$Index$GT $tmp947;
    memset(&min937, 0, sizeof(min937));
    if (((panda$core$Bit) { p_r.min.nonnull }).value) {
    {
        panda$core$MutableString$Index $tmp938 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        panda$core$MutableString$Index $tmp939 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp938, ((panda$core$Int64) p_r.min.value));
        min937 = $tmp939;
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp940 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        min937 = $tmp940;
    }
    }
    inclusive941 = p_r.inclusive;
    memset(&max942, 0, sizeof(max942));
    if (((panda$core$Bit) { p_r.max.nonnull }).value) {
    {
        panda$core$MutableString$Index $tmp943 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
        panda$core$MutableString$Index $tmp944 = panda$core$MutableString$offset$panda$core$MutableString$Index$panda$core$Int64$R$panda$core$MutableString$Index(self, $tmp943, ((panda$core$Int64) p_r.max.value));
        max942 = $tmp944;
    }
    }
    else {
    {
        panda$core$MutableString$Index $tmp945 = panda$core$MutableString$end$R$panda$core$MutableString$Index(self);
        max942 = $tmp945;
        panda$core$Bit$init$builtin_bit(&$tmp946, false);
        inclusive941 = $tmp946;
    }
    }
    panda$core$Range$LTpanda$core$MutableString$Index$GT$init$panda$core$MutableString$Index$panda$core$MutableString$Index$panda$core$Bit(&$tmp947, min937, max942, inclusive941);
    panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$GT$panda$core$String(self, $tmp947, p_s);
}
void panda$core$MutableString$replace$panda$core$String$panda$core$String(panda$core$MutableString* self, panda$core$String* p_search, panda$core$String* p_replacement) {
    panda$core$MutableString$Index index948;
    panda$core$MutableString$Index$nullable next952;
    panda$core$Range$LTpanda$core$MutableString$Index$Q$GT $tmp954;
    panda$core$MutableString$Index $tmp955;
    panda$core$Bit $tmp958;
    panda$core$MutableString$Index $tmp959;
    panda$core$Int64 $tmp961;
    panda$core$MutableString$Index $tmp949 = panda$core$MutableString$start$R$panda$core$MutableString$Index(self);
    index948 = $tmp949;
    $l950:;
    while (true) {
    {
        panda$core$MutableString$Index$nullable $tmp953 = panda$core$MutableString$indexOf$panda$core$String$panda$core$MutableString$Index$R$panda$core$MutableString$Index$Q(self, p_search, index948);
        next952 = $tmp953;
        if (((panda$core$Bit) { !next952.nonnull }).value) {
        {
            goto $l951;
        }
        }
        panda$core$Int64 $tmp956 = panda$core$String$byteLength$R$panda$core$Int64(p_search);
        panda$core$Int64 $tmp957 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$MutableString$Index) next952.value).value, $tmp956);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp955, $tmp957);
        panda$core$Bit$init$builtin_bit(&$tmp958, false);
        panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$init$panda$core$MutableString$Index$Q$panda$core$MutableString$Index$Q$panda$core$Bit(&$tmp954, next952, ((panda$core$MutableString$Index$nullable) { $tmp955, true }), $tmp958);
        panda$core$MutableString$$IDXEQ$panda$core$Range$LTpanda$core$MutableString$Index$Q$GT$panda$core$String(self, $tmp954, p_replacement);
        panda$core$Int64 $tmp960 = panda$core$String$byteLength$R$panda$core$Int64(p_replacement);
        panda$core$Int64$init$builtin_int64(&$tmp961, 1);
        panda$core$Int64 $tmp962 = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64($tmp960, $tmp961);
        panda$core$Int64 $tmp963 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$MutableString$Index) next952.value).value, $tmp962);
        panda$core$MutableString$Index$init$panda$core$Int64(&$tmp959, $tmp963);
        index948 = $tmp959;
    }
    }
    $l951:;
}
void panda$core$MutableString$ensureCapacity$panda$core$Int64(panda$core$MutableString* self, panda$core$Int64 p_newSize) {
    panda$core$Int64 $tmp964;
    panda$core$Int64 oldMax971;
    panda$core$Int64 $tmp976;
    panda$core$Int64$init$builtin_int64(&$tmp964, 0);
    panda$core$Bit $tmp965 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->maxLength, $tmp964);
    if ($tmp965.value) goto $l966; else goto $l967;
    $l967:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s968, (panda$core$Int64) { 589 }, &$s969);
    abort();
    $l966:;
    panda$core$Bit $tmp970 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    if ($tmp970.value) {
    {
        return;
    }
    }
    oldMax971 = self->maxLength;
    $l972:;
    panda$core$Bit $tmp975 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->maxLength, p_newSize);
    bool $tmp974 = $tmp975.value;
    if (!$tmp974) goto $l973;
    {
        panda$core$Int64$init$builtin_int64(&$tmp976, 2);
        panda$core$Int64 $tmp977 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(self->maxLength, $tmp976);
        self->maxLength = $tmp977;
    }
    goto $l972;
    $l973:;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, oldMax971.value * 1, self->maxLength.value * 1));
}
void panda$core$MutableString$clear(panda$core$MutableString* self) {
    panda$core$Int64 $tmp978;
    panda$core$Int64 $tmp979;
    panda$core$Int64 $tmp980;
    panda$core$Int64$init$builtin_int64(&$tmp978, 32);
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, $tmp978.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp979, 0);
    self->_length = $tmp979;
    panda$core$Int64$init$builtin_int64(&$tmp980, 32);
    self->maxLength = $tmp980;
}
panda$core$String* panda$core$MutableString$convert$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Char8* result981;
    panda$core$Range$LTpanda$core$Int64$GT $tmp982;
    panda$core$Int64 $tmp983;
    panda$core$Bit $tmp984;
    panda$core$String* $returnValue1004;
    panda$core$String* $tmp1005;
    panda$core$String* $tmp1006;
    result981 = ((panda$core$Char8*) pandaZAlloc(self->_length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp983, 0);
    panda$core$Bit$init$builtin_bit(&$tmp984, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp982, $tmp983, self->_length, $tmp984);
    int64_t $tmp986 = $tmp982.min.value;
    panda$core$Int64 i985 = { $tmp986 };
    int64_t $tmp988 = $tmp982.max.value;
    bool $tmp989 = $tmp982.inclusive.value;
    if ($tmp989) goto $l996; else goto $l997;
    $l996:;
    if ($tmp986 <= $tmp988) goto $l990; else goto $l992;
    $l997:;
    if ($tmp986 < $tmp988) goto $l990; else goto $l992;
    $l990:;
    {
        result981[i985.value] = self->data[i985.value];
    }
    $l993:;
    int64_t $tmp999 = $tmp988 - i985.value;
    if ($tmp989) goto $l1000; else goto $l1001;
    $l1000:;
    if ((uint64_t) $tmp999 >= 1) goto $l998; else goto $l992;
    $l1001:;
    if ((uint64_t) $tmp999 > 1) goto $l998; else goto $l992;
    $l998:;
    i985.value += 1;
    goto $l990;
    $l992:;
    panda$core$String* $tmp1007 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp1007, result981, self->_length);
    $tmp1006 = $tmp1007;
    $tmp1005 = $tmp1006;
    $returnValue1004 = $tmp1005;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1005));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
    return $returnValue1004;
}
panda$core$String* panda$core$MutableString$finish$R$panda$core$String(panda$core$MutableString* self) {
    panda$core$Int64 $tmp1009;
    panda$core$Class* $tmp1010;
    panda$core$Class* $tmp1011;
    panda$core$String* $returnValue1013;
    panda$core$String* $tmp1014;
    self->data = ((panda$core$Char8*) pandaRealloc(self->data, self->maxLength.value * 1, self->_length.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp1009, 0);
    self->maxLength = $tmp1009;
    {
        $tmp1010 = ((panda$core$Object*) self)->$class;
        $tmp1011 = ((panda$core$Object*) &$s1012)->$class;
        ((panda$core$Object*) self)->$class = $tmp1011;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1011));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1010));
    }
    $tmp1014 = ((panda$core$String*) ((panda$core$Object*) self));
    $returnValue1013 = $tmp1014;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1014));
    return $returnValue1013;
}

