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
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Panda.h"
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
    bool $tmp3 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp3 });
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp4 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp4 });
}
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp5 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp5 });
}
panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp6 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp6 });
}
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp7 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp7 });
}
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp8 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp8 });
}
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char16 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result9;
    panda$core$Range$LTpanda$core$Int64$GT $tmp12;
    panda$core$String* tmp133;
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
        panda$core$Char16$wrapper* $tmp26;
        $tmp26 = (panda$core$Char16$wrapper*) pandaZAlloc(14);
        $tmp26->cl = (panda$core$Class*) &panda$core$Char16$wrapperclass;
        $tmp26->refCount = 1;
        $tmp26->value = self;
        panda$core$MutableString$append$panda$core$Object(result9, ((panda$core$Object*) $tmp26));
    }
    $l21:;
    int64_t $tmp28 = $tmp16 - i13.value;
    if ($tmp17) goto $l29; else goto $l30;
    $l29:;
    if ((uint64_t) $tmp28 >= 1) goto $l27; else goto $l20;
    $l30:;
    if ((uint64_t) $tmp28 > 1) goto $l27; else goto $l20;
    $l27:;
    i13.value += 1;
    goto $l18;
    $l20:;
    {
        panda$core$String* $tmp34 = panda$core$MutableString$finish$R$panda$core$String(result9);
        tmp133 = $tmp34;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result9));
        return tmp133;
    }
}
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$panda$core$Char16$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char16 p_char) {
    panda$core$String* $tmp35 = panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp35;
}
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64(panda$core$Char16 self) {
    panda$core$Int64 $tmp36 = panda$core$Char16$convert$R$panda$core$Int64(self);
    return $tmp36;
}
panda$core$Int8 panda$core$Char16$convert$R$panda$core$Int8(panda$core$Char16 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Char16$convert$R$panda$core$Int16(panda$core$Char16 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$Char16$convert$R$panda$core$Int32(panda$core$Char16 self) {
    return ((panda$core$Int32) { ((int32_t) self.value) });
}
panda$core$Int64 panda$core$Char16$convert$R$panda$core$Int64(panda$core$Char16 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8 panda$core$Char16$convert$R$panda$core$UInt8(panda$core$Char16 self) {
    return ((panda$core$UInt8) { ((uint8_t) self.value) });
}
panda$core$UInt16 panda$core$Char16$convert$R$panda$core$UInt16(panda$core$Char16 self) {
    return ((panda$core$UInt16) { self.value });
}
panda$core$UInt32 panda$core$Char16$convert$R$panda$core$UInt32(panda$core$Char16 self) {
    return ((panda$core$UInt32) { ((uint32_t) self.value) });
}
panda$core$UInt64 panda$core$Char16$convert$R$panda$core$UInt64(panda$core$Char16 self) {
    return ((panda$core$UInt64) { ((uint64_t) self.value) });
}
panda$core$String* panda$core$Char16$convert$R$panda$core$String(panda$core$Char16 self) {
    panda$core$Char8* data38;
    panda$core$Char8 $tmp39;
    panda$core$Char8* data44;
    panda$core$Char8 $tmp45;
    panda$core$Char8 $tmp48;
    panda$core$Char8* data53;
    panda$core$Char8 $tmp54;
    panda$core$Char8 $tmp57;
    panda$core$Char8 $tmp61;
    bool $tmp37 = self.value < 128;
    if (((panda$core$Bit) { $tmp37 }).value) {
    {
        data38 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$UInt8 $tmp40 = panda$core$Char16$convert$R$panda$core$UInt8(self);
        panda$core$Char8$init$panda$core$UInt8(&$tmp39, $tmp40);
        data38[((panda$core$Int64) { 0 }).value] = $tmp39;
        panda$core$String* $tmp41 = (panda$core$String*) pandaZAlloc(48);
        $tmp41->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp41->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp41, data38, ((panda$core$Int64) { 1 }));
        return $tmp41;
    }
    }
    bool $tmp43 = self.value < 2048;
    if (((panda$core$Bit) { $tmp43 }).value) {
    {
        data44 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
        uint16_t $tmp46 = self.value >> 6;
        uint16_t $tmp47 = $tmp46 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp45, ((panda$core$UInt8) { ((uint8_t) $tmp47) }));
        data44[((panda$core$Int64) { 0 }).value] = $tmp45;
        uint16_t $tmp49 = self.value & 63;
        uint16_t $tmp50 = $tmp49 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp48, ((panda$core$UInt8) { ((uint8_t) $tmp50) }));
        data44[((panda$core$Int64) { 1 }).value] = $tmp48;
        panda$core$String* $tmp51 = (panda$core$String*) pandaZAlloc(48);
        $tmp51->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp51->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp51, data44, ((panda$core$Int64) { 2 }));
        return $tmp51;
    }
    }
    data53 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 3 }).value * 1));
    uint16_t $tmp55 = self.value >> 12;
    uint16_t $tmp56 = $tmp55 | 224;
    panda$core$Char8$init$panda$core$UInt8(&$tmp54, ((panda$core$UInt8) { ((uint8_t) $tmp56) }));
    data53[((panda$core$Int64) { 0 }).value] = $tmp54;
    uint16_t $tmp58 = self.value >> 6;
    uint16_t $tmp59 = $tmp58 & 63;
    uint16_t $tmp60 = $tmp59 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp57, ((panda$core$UInt8) { ((uint8_t) $tmp60) }));
    data53[((panda$core$Int64) { 1 }).value] = $tmp57;
    uint16_t $tmp62 = self.value & 63;
    uint16_t $tmp63 = $tmp62 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp61, ((panda$core$UInt8) { ((uint8_t) $tmp63) }));
    data53[((panda$core$Int64) { 2 }).value] = $tmp61;
    panda$core$String* $tmp64 = (panda$core$String*) pandaZAlloc(48);
    $tmp64->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp64->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp64, data53, ((panda$core$Int64) { 3 }));
    return $tmp64;
}
void panda$core$Char16$cleanup(panda$core$Char16 self) {
}

