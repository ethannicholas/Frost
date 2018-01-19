#include "panda/core/Char8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Panda.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}

panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64$wrappershim(panda$core$Char8$wrapper* self) {
    return panda$core$Char8$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$String* panda$core$Char8$convert$R$panda$core$String$wrappershim(panda$core$Char8$wrapper* self) {
    return panda$core$Char8$convert$R$panda$core$String(self->value);
}
void panda$core$Char8$cleanup$wrappershim(panda$core$Char8$wrapper* self) {
    panda$core$Char8$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char8$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char8$_panda$core$Equatable, { panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Char8$class_type panda$core$Char8$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$_panda$core$Comparable, { panda$core$Char8$convert$R$panda$core$String, panda$core$Char8$cleanup, panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$isWhitespace$R$panda$core$Bit, panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char8$hash$R$panda$core$Int64, panda$core$Char8$convert$R$panda$core$Int8, panda$core$Char8$convert$R$panda$core$Int16, panda$core$Char8$convert$R$panda$core$Int32, panda$core$Char8$convert$R$panda$core$Int64, panda$core$Char8$convert$R$panda$core$UInt8, panda$core$Char8$convert$R$panda$core$UInt16, panda$core$Char8$convert$R$panda$core$UInt32, panda$core$Char8$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$wrapper_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char8$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char8$wrapper_panda$core$Equatable, { panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$Char8$wrapperclass_type panda$core$Char8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$wrapper_panda$core$Comparable, { panda$core$Char8$convert$R$panda$core$String$wrappershim, panda$core$Char8$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x38", 16, -4218233433617922336, NULL };

void panda$core$Char8$init$panda$core$UInt8(panda$core$Char8* self, panda$core$UInt8 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp3 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp3 });
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp4 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp4 });
}
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp5 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp5 });
}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp6 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp6 });
}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp7 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp7 });
}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp8 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp8 });
}
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 self) {
    panda$core$Char8 $match$52_99;
    panda$core$Char8 $tmp13;
    panda$core$Char8 $tmp16;
    panda$core$Char8 $tmp20;
    panda$core$Char8 $tmp24;
    {
        $match$52_99 = self;
        panda$core$Char8$init$panda$core$UInt8(&$tmp13, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp14 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_99, $tmp13);
        bool $tmp12 = $tmp14.value;
        if ($tmp12) goto $l15;
        panda$core$Char8$init$panda$core$UInt8(&$tmp16, ((panda$core$UInt8) { 13 }));
        panda$core$Bit $tmp17 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_99, $tmp16);
        $tmp12 = $tmp17.value;
        $l15:;
        panda$core$Bit $tmp18 = { $tmp12 };
        bool $tmp11 = $tmp18.value;
        if ($tmp11) goto $l19;
        panda$core$Char8$init$panda$core$UInt8(&$tmp20, ((panda$core$UInt8) { 9 }));
        panda$core$Bit $tmp21 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_99, $tmp20);
        $tmp11 = $tmp21.value;
        $l19:;
        panda$core$Bit $tmp22 = { $tmp11 };
        bool $tmp10 = $tmp22.value;
        if ($tmp10) goto $l23;
        panda$core$Char8$init$panda$core$UInt8(&$tmp24, ((panda$core$UInt8) { 32 }));
        panda$core$Bit $tmp25 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_99, $tmp24);
        $tmp10 = $tmp25.value;
        $l23:;
        panda$core$Bit $tmp26 = { $tmp10 };
        if ($tmp26.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
    }
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char8 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result27;
    panda$core$Range$LTpanda$core$Int64$GT $tmp30;
    panda$core$String* tmp150;
    panda$core$MutableString* $tmp28 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp28->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp28->refCount.value = 1;
    panda$core$MutableString$init($tmp28);
    result27 = $tmp28;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp30, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp32 = $tmp30.min.value;
    panda$core$Int64 i31 = { $tmp32 };
    int64_t $tmp34 = $tmp30.max.value;
    bool $tmp35 = $tmp30.inclusive.value;
    if ($tmp35) goto $l42; else goto $l43;
    $l42:;
    if ($tmp32 <= $tmp34) goto $l36; else goto $l38;
    $l43:;
    if ($tmp32 < $tmp34) goto $l36; else goto $l38;
    $l36:;
    {
        panda$core$MutableString$append$panda$core$Char8(result27, self);
    }
    $l39:;
    int64_t $tmp45 = $tmp34 - i31.value;
    if ($tmp35) goto $l46; else goto $l47;
    $l46:;
    if ((uint64_t) $tmp45 >= 1) goto $l44; else goto $l38;
    $l47:;
    if ((uint64_t) $tmp45 > 1) goto $l44; else goto $l38;
    $l44:;
    i31.value += 1;
    goto $l36;
    $l38:;
    {
        panda$core$String* $tmp51 = panda$core$MutableString$finish$R$panda$core$String(result27);
        tmp150 = $tmp51;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result27));
        return tmp150;
    }
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$panda$core$Char8$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char8 p_char) {
    panda$core$String* $tmp52 = panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp52;
}
panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64(panda$core$Char8 self) {
    panda$core$Int64 $tmp53 = panda$core$Char8$convert$R$panda$core$Int64(self);
    return $tmp53;
}
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 self) {
    int16_t $tmp54 = ((int16_t) self.value) & 255;
    return ((panda$core$Int16) { $tmp54 });
}
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 self) {
    int32_t $tmp55 = ((int32_t) self.value) & 255;
    return ((panda$core$Int32) { $tmp55 });
}
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 self) {
    int64_t $tmp56 = ((int64_t) self.value) & 255;
    return ((panda$core$Int64) { $tmp56 });
}
panda$core$UInt8 panda$core$Char8$convert$R$panda$core$UInt8(panda$core$Char8 self) {
    return ((panda$core$UInt8) { self.value });
}
panda$core$UInt16 panda$core$Char8$convert$R$panda$core$UInt16(panda$core$Char8 self) {
    return ((panda$core$UInt16) { ((uint16_t) self.value) });
}
panda$core$UInt32 panda$core$Char8$convert$R$panda$core$UInt32(panda$core$Char8 self) {
    return ((panda$core$UInt32) { ((uint32_t) self.value) });
}
panda$core$UInt64 panda$core$Char8$convert$R$panda$core$UInt64(panda$core$Char8 self) {
    return ((panda$core$UInt64) { ((uint64_t) self.value) });
}
panda$core$String* panda$core$Char8$convert$R$panda$core$String(panda$core$Char8 self) {
    panda$core$Char8* data58;
    panda$core$Char8* data61;
    panda$core$Char8 $tmp62;
    panda$core$Char8 $tmp65;
    bool $tmp57 = self.value < 128;
    if (((panda$core$Bit) { $tmp57 }).value) {
    {
        data58 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        data58[((panda$core$Int64) { 0 }).value] = self;
        panda$core$String* $tmp59 = (panda$core$String*) pandaZAlloc(48);
        $tmp59->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp59->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp59, data58, ((panda$core$Int64) { 1 }));
        return $tmp59;
    }
    }
    data61 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
    uint16_t $tmp63 = ((uint16_t) self.value) >> 6;
    uint16_t $tmp64 = $tmp63 | 192;
    panda$core$Char8$init$panda$core$UInt8(&$tmp62, ((panda$core$UInt8) { ((uint8_t) $tmp64) }));
    data61[((panda$core$Int64) { 0 }).value] = $tmp62;
    uint16_t $tmp66 = ((uint16_t) self.value) & 63;
    uint16_t $tmp67 = $tmp66 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp65, ((panda$core$UInt8) { ((uint8_t) $tmp67) }));
    data61[((panda$core$Int64) { 1 }).value] = $tmp65;
    panda$core$String* $tmp68 = (panda$core$String*) pandaZAlloc(48);
    $tmp68->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp68->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp68, data61, ((panda$core$Int64) { 2 }));
    return $tmp68;
}
void panda$core$Char8$cleanup(panda$core$Char8 self) {
}

