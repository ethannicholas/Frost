#include "panda/core/Char16.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt16.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}

panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64$wrappershim(panda$core$Char16$wrapper* self) {
    return panda$core$Char16$hash$R$panda$core$Int64(self->value);
}
panda$core$String* panda$core$Char16$convert$R$panda$core$String$wrappershim(panda$core$Char16$wrapper* self) {
    return panda$core$Char16$convert$R$panda$core$String(self->value);
}
void panda$core$Char16$cleanup$wrappershim(panda$core$Char16$wrapper* self) {
    panda$core$Char16$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char16$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char16$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char16$_panda$core$Comparable, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char16$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Char16$_panda$core$Equatable, { panda$core$Char16$hash$R$panda$core$Int64} };

static panda$core$String $s1;
panda$core$Char16$class_type panda$core$Char16$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char16$_panda$collections$Key, { panda$core$Char16$convert$R$panda$core$String, panda$core$Char16$cleanup, panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char16$hash$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$Int8, panda$core$Char16$convert$R$panda$core$Int16, panda$core$Char16$convert$R$panda$core$Int32, panda$core$Char16$convert$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$UInt8, panda$core$Char16$convert$R$panda$core$UInt16, panda$core$Char16$convert$R$panda$core$UInt32, panda$core$Char16$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char16$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char16$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char16$wrapper_panda$core$Comparable, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char16$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Char16$wrapper_panda$core$Equatable, { panda$core$Char16$hash$R$panda$core$Int64$wrappershim} };

static panda$core$String $s2;
panda$core$Char16$wrapperclass_type panda$core$Char16$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char16$wrapper_panda$collections$Key, { panda$core$Char16$convert$R$panda$core$String$wrappershim, panda$core$Char16$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };

void panda$core$Char16$init$panda$core$UInt16(panda$core$Char16* self, panda$core$UInt16 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp4 = self.value == p_other.value;
    panda$core$Bit $tmp3 = ((panda$core$Bit) { $tmp4 });
    return $tmp3;
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp6 = self.value != p_other.value;
    panda$core$Bit $tmp5 = ((panda$core$Bit) { $tmp6 });
    return $tmp5;
}
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp8 = self.value < p_other.value;
    panda$core$Bit $tmp7 = ((panda$core$Bit) { $tmp8 });
    return $tmp7;
}
panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp10 = self.value > p_other.value;
    panda$core$Bit $tmp9 = ((panda$core$Bit) { $tmp10 });
    return $tmp9;
}
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp12 = self.value <= p_other.value;
    panda$core$Bit $tmp11 = ((panda$core$Bit) { $tmp12 });
    return $tmp11;
}
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp14 = self.value >= p_other.value;
    panda$core$Bit $tmp13 = ((panda$core$Bit) { $tmp14 });
    return $tmp13;
}
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char16 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result15;
    panda$core$Range$LTpanda$core$Int64$GT $tmp19;
    panda$core$String* tmp141;
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
        panda$core$Char16$wrapper* $tmp34;
        $tmp34 = (panda$core$Char16$wrapper*) pandaObjectAlloc(14, (panda$core$Class*) &panda$core$Char16$wrapperclass);
        $tmp34->value = self;
        panda$core$Object* $tmp33 = ((panda$core$Object*) $tmp34);
        panda$core$MutableString$append$panda$core$Object(result15, $tmp33);
        panda$core$Panda$unref$panda$core$Object($tmp33);
    }
    $l28:;
    int64_t $tmp36 = $tmp23 - i20.value;
    if ($tmp24) goto $l37; else goto $l38;
    $l37:;
    if ((uint64_t) $tmp36 >= 1) goto $l35; else goto $l27;
    $l38:;
    if ((uint64_t) $tmp36 > 1) goto $l35; else goto $l27;
    $l35:;
    i20.value += 1;
    goto $l25;
    $l27:;
    {
        panda$core$String* $tmp44 = panda$core$MutableString$finish$R$panda$core$String(result15);
        panda$core$String* $tmp43 = $tmp44;
        panda$core$String* $tmp42 = $tmp43;
        tmp141 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result15));
        panda$core$String* $tmp45 = tmp141;
        return $tmp45;
    }
}
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$panda$core$Char16$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char16 p_char) {
    panda$core$String* $tmp49 = panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    panda$core$String* $tmp48 = $tmp49;
    panda$core$String* $tmp47 = $tmp48;
    panda$core$String* $tmp46 = $tmp47;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    return $tmp46;
}
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64(panda$core$Char16 self) {
    panda$core$Int64 $tmp51 = panda$core$Char16$convert$R$panda$core$Int64(self);
    panda$core$Int64 $tmp50 = $tmp51;
    return $tmp50;
}
panda$core$Int8 panda$core$Char16$convert$R$panda$core$Int8(panda$core$Char16 self) {
    panda$core$Int8 $tmp52 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $tmp52;
}
panda$core$Int16 panda$core$Char16$convert$R$panda$core$Int16(panda$core$Char16 self) {
    panda$core$Int16 $tmp53 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $tmp53;
}
panda$core$Int32 panda$core$Char16$convert$R$panda$core$Int32(panda$core$Char16 self) {
    panda$core$Int32 $tmp54 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $tmp54;
}
panda$core$Int64 panda$core$Char16$convert$R$panda$core$Int64(panda$core$Char16 self) {
    panda$core$Int64 $tmp55 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $tmp55;
}
panda$core$UInt8 panda$core$Char16$convert$R$panda$core$UInt8(panda$core$Char16 self) {
    panda$core$UInt8 $tmp56 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $tmp56;
}
panda$core$UInt16 panda$core$Char16$convert$R$panda$core$UInt16(panda$core$Char16 self) {
    panda$core$UInt16 $tmp57 = ((panda$core$UInt16) { self.value });
    return $tmp57;
}
panda$core$UInt32 panda$core$Char16$convert$R$panda$core$UInt32(panda$core$Char16 self) {
    panda$core$UInt32 $tmp58 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $tmp58;
}
panda$core$UInt64 panda$core$Char16$convert$R$panda$core$UInt64(panda$core$Char16 self) {
    panda$core$UInt64 $tmp59 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $tmp59;
}
panda$core$String* panda$core$Char16$convert$R$panda$core$String(panda$core$Char16 self) {
    panda$core$Char8* data61;
    panda$core$Char8 $tmp62;
    panda$core$Char8* data69;
    panda$core$Char8 $tmp70;
    panda$core$Char8 $tmp73;
    panda$core$Char8* data80;
    panda$core$Char8 $tmp81;
    panda$core$Char8 $tmp84;
    panda$core$Char8 $tmp88;
    bool $tmp60 = self.value < 128;
    if (((panda$core$Bit) { $tmp60 }).value) {
    {
        data61 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$UInt8 $tmp63 = panda$core$Char16$convert$R$panda$core$UInt8(self);
        panda$core$Char8$init$panda$core$UInt8(&$tmp62, $tmp63);
        data61[((panda$core$Int64) { 0 }).value] = $tmp62;
        panda$core$String* $tmp67 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp67, data61, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp66 = $tmp67;
        panda$core$String* $tmp65 = $tmp66;
        panda$core$String* $tmp64 = $tmp65;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
        return $tmp64;
    }
    }
    bool $tmp68 = self.value < 2048;
    if (((panda$core$Bit) { $tmp68 }).value) {
    {
        data69 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
        uint16_t $tmp71 = self.value >> 6;
        uint16_t $tmp72 = $tmp71 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp70, ((panda$core$UInt8) { ((uint8_t) $tmp72) }));
        data69[((panda$core$Int64) { 0 }).value] = $tmp70;
        uint16_t $tmp74 = self.value & 63;
        uint16_t $tmp75 = $tmp74 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp73, ((panda$core$UInt8) { ((uint8_t) $tmp75) }));
        data69[((panda$core$Int64) { 1 }).value] = $tmp73;
        panda$core$String* $tmp79 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp79, data69, ((panda$core$Int64) { 2 }));
        panda$core$String* $tmp78 = $tmp79;
        panda$core$String* $tmp77 = $tmp78;
        panda$core$String* $tmp76 = $tmp77;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
        return $tmp76;
    }
    }
    data80 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 3 }).value * 1));
    uint16_t $tmp82 = self.value >> 12;
    uint16_t $tmp83 = $tmp82 | 224;
    panda$core$Char8$init$panda$core$UInt8(&$tmp81, ((panda$core$UInt8) { ((uint8_t) $tmp83) }));
    data80[((panda$core$Int64) { 0 }).value] = $tmp81;
    uint16_t $tmp85 = self.value >> 6;
    uint16_t $tmp86 = $tmp85 & 63;
    uint16_t $tmp87 = $tmp86 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp84, ((panda$core$UInt8) { ((uint8_t) $tmp87) }));
    data80[((panda$core$Int64) { 1 }).value] = $tmp84;
    uint16_t $tmp89 = self.value & 63;
    uint16_t $tmp90 = $tmp89 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp88, ((panda$core$UInt8) { ((uint8_t) $tmp90) }));
    data80[((panda$core$Int64) { 2 }).value] = $tmp88;
    panda$core$String* $tmp94 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp94, data80, ((panda$core$Int64) { 3 }));
    panda$core$String* $tmp93 = $tmp94;
    panda$core$String* $tmp92 = $tmp93;
    panda$core$String* $tmp91 = $tmp92;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    return $tmp91;
}
void panda$core$Char16$cleanup(panda$core$Char16 self) {
}

