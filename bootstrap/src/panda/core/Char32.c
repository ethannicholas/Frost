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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Panda.h"
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
    bool $tmp3 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp3 });
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp4 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp4 });
}
panda$core$Bit panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp5 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp5 });
}
panda$core$Bit panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp6 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp6 });
}
panda$core$Bit panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp7 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp7 });
}
panda$core$Bit panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp8 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp8 });
}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char32 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result9;
    panda$core$Range$LTpanda$core$Int64$GT $tmp12;
    panda$core$String* tmp132;
    panda$core$MutableString* $tmp10 = (panda$core$MutableString*) pandaZAlloc(48);
    $tmp10->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp10->refCount.value = 1;
    panda$core$MutableString$init($tmp10);
    result9 = $tmp10;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp12, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp14 = $tmp12.min.value;
    panda$core$Int64 i13 = { $tmp14 };
    int64_t $tmp16 = $tmp12.max.value;
    bool $tmp17 = $tmp12.inclusive.value;
    if ($tmp17) goto $l24; else goto $l25;
    $l24:;
    if ($tmp14 <= $tmp16) goto $l18; else goto $l20;
    $l25:;
    if ($tmp14 < $tmp16) goto $l18; else goto $l20;
    $l18:;
    {
        panda$core$MutableString$append$panda$core$Char32(result9, self);
    }
    $l21:;
    int64_t $tmp27 = $tmp16 - i13.value;
    if ($tmp17) goto $l28; else goto $l29;
    $l28:;
    if ((uint64_t) $tmp27 >= 1) goto $l26; else goto $l20;
    $l29:;
    if ((uint64_t) $tmp27 > 1) goto $l26; else goto $l20;
    $l26:;
    i13.value += 1;
    goto $l18;
    $l20:;
    {
        panda$core$String* $tmp33 = panda$core$MutableString$finish$R$panda$core$String(result9);
        tmp132 = $tmp33;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result9));
        return tmp132;
    }
}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char32 p_char) {
    panda$core$String* $tmp34 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp34;
}
panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64(panda$core$Char32 self) {
    panda$core$Int64 $tmp35 = panda$core$Char32$convert$R$panda$core$Int64(self);
    return $tmp35;
}
panda$core$Int8 panda$core$Char32$convert$R$panda$core$Int8(panda$core$Char32 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Char32$convert$R$panda$core$Int16(panda$core$Char32 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$Char32$convert$R$panda$core$Int32(panda$core$Char32 self) {
    return ((panda$core$Int32) { self.value });
}
panda$core$Int64 panda$core$Char32$convert$R$panda$core$Int64(panda$core$Char32 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8 panda$core$Char32$convert$R$panda$core$UInt8(panda$core$Char32 self) {
    return ((panda$core$UInt8) { ((uint8_t) self.value) });
}
panda$core$UInt16 panda$core$Char32$convert$R$panda$core$UInt16(panda$core$Char32 self) {
    return ((panda$core$UInt16) { ((uint16_t) self.value) });
}
panda$core$UInt32 panda$core$Char32$convert$R$panda$core$UInt32(panda$core$Char32 self) {
    return ((panda$core$UInt32) { ((uint32_t) self.value) });
}
panda$core$UInt64 panda$core$Char32$convert$R$panda$core$UInt64(panda$core$Char32 self) {
    return ((panda$core$UInt64) { ((uint64_t) self.value) });
}
panda$core$String* panda$core$Char32$convert$R$panda$core$String(panda$core$Char32 self) {
    panda$core$Char8* data37;
    panda$core$Char8 $tmp38;
    panda$core$Char8* data42;
    panda$core$Char8 $tmp43;
    panda$core$Char8 $tmp46;
    panda$core$Char8* data52;
    panda$core$Char8 $tmp53;
    panda$core$Char8 $tmp56;
    panda$core$Char8 $tmp60;
    panda$core$Char8* data65;
    panda$core$Char8 $tmp66;
    panda$core$Char8 $tmp69;
    panda$core$Char8 $tmp73;
    panda$core$Char8 $tmp77;
    bool $tmp36 = self.value < 128;
    if (((panda$core$Bit) { $tmp36 }).value) {
    {
        data37 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$Char8$init$panda$core$UInt8(&$tmp38, ((panda$core$UInt8) { ((uint8_t) self.value) }));
        data37[((panda$core$Int64) { 0 }).value] = $tmp38;
        panda$core$String* $tmp39 = (panda$core$String*) pandaZAlloc(48);
        $tmp39->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp39->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp39, data37, ((panda$core$Int64) { 1 }));
        return $tmp39;
    }
    }
    bool $tmp41 = self.value < 2048;
    if (((panda$core$Bit) { $tmp41 }).value) {
    {
        data42 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
        int32_t $tmp44 = self.value >> 6;
        int32_t $tmp45 = $tmp44 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp43, ((panda$core$UInt8) { ((uint8_t) $tmp45) }));
        data42[((panda$core$Int64) { 0 }).value] = $tmp43;
        int32_t $tmp47 = self.value & 63;
        int32_t $tmp48 = $tmp47 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp46, ((panda$core$UInt8) { ((uint8_t) $tmp48) }));
        data42[((panda$core$Int64) { 1 }).value] = $tmp46;
        panda$core$String* $tmp49 = (panda$core$String*) pandaZAlloc(48);
        $tmp49->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp49->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp49, data42, ((panda$core$Int64) { 2 }));
        return $tmp49;
    }
    }
    bool $tmp51 = self.value < 65536;
    if (((panda$core$Bit) { $tmp51 }).value) {
    {
        data52 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 3 }).value * 1));
        int32_t $tmp54 = self.value >> 12;
        int32_t $tmp55 = $tmp54 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp53, ((panda$core$UInt8) { ((uint8_t) $tmp55) }));
        data52[((panda$core$Int64) { 0 }).value] = $tmp53;
        int32_t $tmp57 = self.value >> 6;
        int32_t $tmp58 = $tmp57 & 63;
        int32_t $tmp59 = $tmp58 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp56, ((panda$core$UInt8) { ((uint8_t) $tmp59) }));
        data52[((panda$core$Int64) { 1 }).value] = $tmp56;
        int32_t $tmp61 = self.value & 63;
        int32_t $tmp62 = $tmp61 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp60, ((panda$core$UInt8) { ((uint8_t) $tmp62) }));
        data52[((panda$core$Int64) { 2 }).value] = $tmp60;
        panda$core$String* $tmp63 = (panda$core$String*) pandaZAlloc(48);
        $tmp63->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp63->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp63, data52, ((panda$core$Int64) { 3 }));
        return $tmp63;
    }
    }
    data65 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 4 }).value * 1));
    int32_t $tmp67 = self.value >> 18;
    int32_t $tmp68 = $tmp67 | 240;
    panda$core$Char8$init$panda$core$UInt8(&$tmp66, ((panda$core$UInt8) { ((uint8_t) $tmp68) }));
    data65[((panda$core$Int64) { 0 }).value] = $tmp66;
    int32_t $tmp70 = self.value >> 12;
    int32_t $tmp71 = $tmp70 & 63;
    int32_t $tmp72 = $tmp71 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp69, ((panda$core$UInt8) { ((uint8_t) $tmp72) }));
    data65[((panda$core$Int64) { 1 }).value] = $tmp69;
    int32_t $tmp74 = self.value >> 6;
    int32_t $tmp75 = $tmp74 & 63;
    int32_t $tmp76 = $tmp75 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp73, ((panda$core$UInt8) { ((uint8_t) $tmp76) }));
    data65[((panda$core$Int64) { 2 }).value] = $tmp73;
    int32_t $tmp78 = self.value & 63;
    int32_t $tmp79 = $tmp78 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp77, ((panda$core$UInt8) { ((uint8_t) $tmp79) }));
    data65[((panda$core$Int64) { 3 }).value] = $tmp77;
    panda$core$String* $tmp80 = (panda$core$String*) pandaZAlloc(48);
    $tmp80->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp80->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp80, data65, ((panda$core$Int64) { 4 }));
    return $tmp80;
}
void panda$core$Char32$cleanup(panda$core$Char32 self) {
}

