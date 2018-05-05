#include "panda/core/Char32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int64.h"
#include "panda/core/Int32.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Char32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(self, ((panda$core$Char32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Char32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(self, ((panda$core$Char32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Char32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit(self, ((panda$core$Char32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Char32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit(self, ((panda$core$Char32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Char32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(self, ((panda$core$Char32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim(panda$core$Char32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(self, ((panda$core$Char32$wrapper*) p0)->value);
    return result;
}

panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64$wrappershim(panda$core$Char32$wrapper* self) {
    return panda$core$Char32$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$String* panda$core$Char32$convert$R$panda$core$String$wrappershim(panda$core$Char32$wrapper* self) {
    return panda$core$Char32$convert$R$panda$core$String(self->value);
}
void panda$core$Char32$cleanup$wrappershim(panda$core$Char32$wrapper* self) {
    panda$core$Char32$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char32$_panda$core$Equatable, { panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Char32$class_type panda$core$Char32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$_panda$core$Comparable, { panda$core$Char32$convert$R$panda$core$String, panda$core$Char32$cleanup, panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char32$hash$R$panda$core$Int64, panda$core$Char32$convert$R$panda$core$Int8, panda$core$Char32$convert$R$panda$core$Int16, panda$core$Char32$convert$R$panda$core$Int32, panda$core$Char32$convert$R$panda$core$Int64, panda$core$Char32$convert$R$panda$core$UInt8, panda$core$Char32$convert$R$panda$core$UInt16, panda$core$Char32$convert$R$panda$core$UInt32, panda$core$Char32$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$wrapper_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Equatable, { panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$Char32$wrapperclass_type panda$core$Char32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Comparable, { panda$core$Char32$convert$R$panda$core$String$wrappershim, panda$core$Char32$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };

void panda$core$Char32$init$panda$core$Int32(panda$core$Char32* self, panda$core$Int32 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp4 = self.value == p_other.value;
    panda$core$Bit $tmp3 = ((panda$core$Bit) { $tmp4 });
    return $tmp3;
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp6 = self.value != p_other.value;
    panda$core$Bit $tmp5 = ((panda$core$Bit) { $tmp6 });
    return $tmp5;
}
panda$core$Bit panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp8 = self.value < p_other.value;
    panda$core$Bit $tmp7 = ((panda$core$Bit) { $tmp8 });
    return $tmp7;
}
panda$core$Bit panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp10 = self.value > p_other.value;
    panda$core$Bit $tmp9 = ((panda$core$Bit) { $tmp10 });
    return $tmp9;
}
panda$core$Bit panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp12 = self.value <= p_other.value;
    panda$core$Bit $tmp11 = ((panda$core$Bit) { $tmp12 });
    return $tmp11;
}
panda$core$Bit panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp14 = self.value >= p_other.value;
    panda$core$Bit $tmp13 = ((panda$core$Bit) { $tmp14 });
    return $tmp13;
}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char32 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result15;
    panda$core$Range$LTpanda$core$Int64$GT $tmp19;
    panda$core$String* tmp139;
    panda$core$MutableString* $tmp18 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp18);
    panda$core$MutableString* $tmp17 = $tmp18;
    panda$core$MutableString* $tmp16 = $tmp17;
    result15 = $tmp16;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp19, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp21 = $tmp19.min.value;
    panda$core$Int64 i20 = { $tmp21 };
    int64_t $tmp23 = $tmp19.max.value;
    bool $tmp24 = $tmp19.inclusive.value;
    if ($tmp24) goto $l31; else goto $l32;
    $l31:;
    if ($tmp21 <= $tmp23) goto $l25; else goto $l27;
    $l32:;
    if ($tmp21 < $tmp23) goto $l25; else goto $l27;
    $l25:;
    {
        panda$core$MutableString$append$panda$core$Char32(result15, self);
    }
    $l28:;
    int64_t $tmp34 = $tmp23 - i20.value;
    if ($tmp24) goto $l35; else goto $l36;
    $l35:;
    if ((uint64_t) $tmp34 >= 1) goto $l33; else goto $l27;
    $l36:;
    if ((uint64_t) $tmp34 > 1) goto $l33; else goto $l27;
    $l33:;
    i20.value += 1;
    goto $l25;
    $l27:;
    {
        panda$core$String* $tmp42 = panda$core$MutableString$finish$R$panda$core$String(result15);
        panda$core$String* $tmp41 = $tmp42;
        panda$core$String* $tmp40 = $tmp41;
        tmp139 = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result15));
        panda$core$String* $tmp43 = tmp139;
        return $tmp43;
    }
}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char32 p_char) {
    panda$core$String* $tmp47 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    panda$core$String* $tmp46 = $tmp47;
    panda$core$String* $tmp45 = $tmp46;
    panda$core$String* $tmp44 = $tmp45;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp45));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    return $tmp44;
}
panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64(panda$core$Char32 self) {
    panda$core$Int64 $tmp49 = panda$core$Char32$convert$R$panda$core$Int64(self);
    panda$core$Int64 $tmp48 = $tmp49;
    return $tmp48;
}
panda$core$Int8 panda$core$Char32$convert$R$panda$core$Int8(panda$core$Char32 self) {
    panda$core$Int8 $tmp50 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $tmp50;
}
panda$core$Int16 panda$core$Char32$convert$R$panda$core$Int16(panda$core$Char32 self) {
    panda$core$Int16 $tmp51 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $tmp51;
}
panda$core$Int32 panda$core$Char32$convert$R$panda$core$Int32(panda$core$Char32 self) {
    panda$core$Int32 $tmp52 = ((panda$core$Int32) { self.value });
    return $tmp52;
}
panda$core$Int64 panda$core$Char32$convert$R$panda$core$Int64(panda$core$Char32 self) {
    panda$core$Int64 $tmp53 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $tmp53;
}
panda$core$UInt8 panda$core$Char32$convert$R$panda$core$UInt8(panda$core$Char32 self) {
    panda$core$UInt8 $tmp54 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $tmp54;
}
panda$core$UInt16 panda$core$Char32$convert$R$panda$core$UInt16(panda$core$Char32 self) {
    panda$core$UInt16 $tmp55 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $tmp55;
}
panda$core$UInt32 panda$core$Char32$convert$R$panda$core$UInt32(panda$core$Char32 self) {
    panda$core$UInt32 $tmp56 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $tmp56;
}
panda$core$UInt64 panda$core$Char32$convert$R$panda$core$UInt64(panda$core$Char32 self) {
    panda$core$UInt64 $tmp57 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $tmp57;
}
panda$core$String* panda$core$Char32$convert$R$panda$core$String(panda$core$Char32 self) {
    panda$core$Char8* data59;
    panda$core$Char8 $tmp60;
    panda$core$Char8* data66;
    panda$core$Char8 $tmp67;
    panda$core$Char8 $tmp70;
    panda$core$Char8* data78;
    panda$core$Char8 $tmp79;
    panda$core$Char8 $tmp82;
    panda$core$Char8 $tmp86;
    panda$core$Char8* data93;
    panda$core$Char8 $tmp94;
    panda$core$Char8 $tmp97;
    panda$core$Char8 $tmp101;
    panda$core$Char8 $tmp105;
    bool $tmp58 = self.value < 128;
    if (((panda$core$Bit) { $tmp58 }).value) {
    {
        data59 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$Char8$init$panda$core$UInt8(&$tmp60, ((panda$core$UInt8) { ((uint8_t) self.value) }));
        data59[((panda$core$Int64) { 0 }).value] = $tmp60;
        panda$core$String* $tmp64 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp64, data59, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp63 = $tmp64;
        panda$core$String* $tmp62 = $tmp63;
        panda$core$String* $tmp61 = $tmp62;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp63));
        return $tmp61;
    }
    }
    bool $tmp65 = self.value < 2048;
    if (((panda$core$Bit) { $tmp65 }).value) {
    {
        data66 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
        int32_t $tmp68 = self.value >> 6;
        int32_t $tmp69 = $tmp68 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp67, ((panda$core$UInt8) { ((uint8_t) $tmp69) }));
        data66[((panda$core$Int64) { 0 }).value] = $tmp67;
        int32_t $tmp71 = self.value & 63;
        int32_t $tmp72 = $tmp71 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp70, ((panda$core$UInt8) { ((uint8_t) $tmp72) }));
        data66[((panda$core$Int64) { 1 }).value] = $tmp70;
        panda$core$String* $tmp76 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp76, data66, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp75 = $tmp76;
        panda$core$String* $tmp74 = $tmp75;
        panda$core$String* $tmp73 = $tmp74;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
        return $tmp73;
    }
    }
    bool $tmp77 = self.value < 65536;
    if (((panda$core$Bit) { $tmp77 }).value) {
    {
        data78 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 3 }).value * 1));
        int32_t $tmp80 = self.value >> 12;
        int32_t $tmp81 = $tmp80 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp79, ((panda$core$UInt8) { ((uint8_t) $tmp81) }));
        data78[((panda$core$Int64) { 0 }).value] = $tmp79;
        int32_t $tmp83 = self.value >> 6;
        int32_t $tmp84 = $tmp83 & 63;
        int32_t $tmp85 = $tmp84 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp82, ((panda$core$UInt8) { ((uint8_t) $tmp85) }));
        data78[((panda$core$Int64) { 1 }).value] = $tmp82;
        int32_t $tmp87 = self.value & 63;
        int32_t $tmp88 = $tmp87 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp86, ((panda$core$UInt8) { ((uint8_t) $tmp88) }));
        data78[((panda$core$Int64) { 2 }).value] = $tmp86;
        panda$core$String* $tmp92 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp92, data78, ((panda$core$Int64) { 3 }));
        panda$core$String* $tmp91 = $tmp92;
        panda$core$String* $tmp90 = $tmp91;
        panda$core$String* $tmp89 = $tmp90;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
        return $tmp89;
    }
    }
    data93 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 4 }).value * 1));
    int32_t $tmp95 = self.value >> 18;
    int32_t $tmp96 = $tmp95 | 240;
    panda$core$Char8$init$panda$core$UInt8(&$tmp94, ((panda$core$UInt8) { ((uint8_t) $tmp96) }));
    data93[((panda$core$Int64) { 0 }).value] = $tmp94;
    int32_t $tmp98 = self.value >> 12;
    int32_t $tmp99 = $tmp98 & 63;
    int32_t $tmp100 = $tmp99 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp97, ((panda$core$UInt8) { ((uint8_t) $tmp100) }));
    data93[((panda$core$Int64) { 1 }).value] = $tmp97;
    int32_t $tmp102 = self.value >> 6;
    int32_t $tmp103 = $tmp102 & 63;
    int32_t $tmp104 = $tmp103 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp101, ((panda$core$UInt8) { ((uint8_t) $tmp104) }));
    data93[((panda$core$Int64) { 2 }).value] = $tmp101;
    int32_t $tmp106 = self.value & 63;
    int32_t $tmp107 = $tmp106 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp105, ((panda$core$UInt8) { ((uint8_t) $tmp107) }));
    data93[((panda$core$Int64) { 3 }).value] = $tmp105;
    panda$core$String* $tmp111 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp111, data93, ((panda$core$Int64) { 4 }));
    panda$core$String* $tmp110 = $tmp111;
    panda$core$String* $tmp109 = $tmp110;
    panda$core$String* $tmp108 = $tmp109;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    return $tmp108;
}
void panda$core$Char32$cleanup(panda$core$Char32 self) {
}

