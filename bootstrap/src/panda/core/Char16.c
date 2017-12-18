#include "panda/core/Char16.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/UInt16.h"
#include "panda/core/MutableString.h"
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

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char16$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char16$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char16$_panda$core$Comparable, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char16$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Char16$_panda$core$Equatable, { panda$core$Char16$hash$R$panda$core$Int64} };

panda$core$Char16$class_type panda$core$Char16$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char16$_panda$collections$Key, { panda$core$Char16$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char16$hash$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$Int8, panda$core$Char16$convert$R$panda$core$Int16, panda$core$Char16$convert$R$panda$core$Int32, panda$core$Char16$convert$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$UInt8, panda$core$Char16$convert$R$panda$core$UInt16, panda$core$Char16$convert$R$panda$core$UInt32, panda$core$Char16$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char16$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char16$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char16$wrapper_panda$core$Comparable, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char16$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Char16$wrapper_panda$core$Equatable, { panda$core$Char16$hash$R$panda$core$Int64$wrappershim} };

panda$core$Char16$wrapperclass_type panda$core$Char16$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char16$wrapper_panda$collections$Key, { panda$core$Char16$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

void panda$core$Char16$init$panda$core$UInt16(panda$core$Char16* self, panda$core$UInt16 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp1 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp1 });
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp2 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp2 });
}
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp3 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp3 });
}
panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp4 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp4 });
}
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp5 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp5 });
}
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    bool $tmp6 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp6 });
}
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char16 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result7;
    panda$core$Range$LTpanda$core$Int64$GT $tmp10;
    panda$core$MutableString* $tmp8 = (panda$core$MutableString*) malloc(48);
    $tmp8->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp8->refCount.value = 1;
    panda$core$MutableString$init($tmp8);
    result7 = $tmp8;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp10, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp12 = $tmp10.min.value;
    panda$core$Int64 i11 = { $tmp12 };
    int64_t $tmp14 = $tmp10.max.value;
    bool $tmp15 = $tmp10.inclusive.value;
    if ($tmp15) goto $l22; else goto $l23;
    $l22:;
    if ($tmp12 <= $tmp14) goto $l16; else goto $l18;
    $l23:;
    if ($tmp12 < $tmp14) goto $l16; else goto $l18;
    $l16:;
    {
        panda$core$Char16$wrapper* $tmp24;
        $tmp24 = (panda$core$Char16$wrapper*) malloc(14);
        $tmp24->cl = (panda$core$Class*) &panda$core$Char16$wrapperclass;
        $tmp24->refCount = 1;
        $tmp24->value = self;
        panda$core$MutableString$append$panda$core$Object(result7, ((panda$core$Object*) $tmp24));
    }
    $l19:;
    int64_t $tmp26 = $tmp14 - i11.value;
    if ($tmp15) goto $l27; else goto $l28;
    $l27:;
    if ($tmp26 >= 1) goto $l25; else goto $l18;
    $l28:;
    if ($tmp26 > 1) goto $l25; else goto $l18;
    $l25:;
    i11.value += 1;
    goto $l16;
    $l18:;
    panda$core$String* $tmp31 = panda$core$MutableString$finish$R$panda$core$String(result7);
    return $tmp31;
}
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$panda$core$Char16$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char16 p_char) {
    panda$core$String* $tmp32 = panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp32;
}
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64(panda$core$Char16 self) {
    panda$core$Int64 $tmp33 = panda$core$Char16$convert$R$panda$core$Int64(self);
    return $tmp33;
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
    panda$core$Char8* data35;
    panda$core$Char8 $tmp36;
    panda$core$Char8* data41;
    panda$core$Char8 $tmp42;
    panda$core$Char8 $tmp45;
    panda$core$Char8* data50;
    panda$core$Char8 $tmp51;
    panda$core$Char8 $tmp54;
    panda$core$Char8 $tmp58;
    bool $tmp34 = self.value < 128;
    if (((panda$core$Bit) { $tmp34 }).value) {
    {
        data35 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$UInt8 $tmp37 = panda$core$Char16$convert$R$panda$core$UInt8(self);
        panda$core$Char8$init$panda$core$UInt8(&$tmp36, $tmp37);
        data35[((panda$core$Int64) { 0 }).value] = $tmp36;
        panda$core$String* $tmp38 = (panda$core$String*) malloc(48);
        $tmp38->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp38->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp38, data35, ((panda$core$Int64) { 1 }));
        return $tmp38;
    }
    }
    bool $tmp40 = self.value < 2048;
    if (((panda$core$Bit) { $tmp40 }).value) {
    {
        data41 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 2 }).value * 1));
        uint16_t $tmp43 = self.value >> 6;
        uint16_t $tmp44 = $tmp43 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp42, ((panda$core$UInt8) { ((uint8_t) $tmp44) }));
        data41[((panda$core$Int64) { 0 }).value] = $tmp42;
        uint16_t $tmp46 = self.value & 63;
        uint16_t $tmp47 = $tmp46 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp45, ((panda$core$UInt8) { ((uint8_t) $tmp47) }));
        data41[((panda$core$Int64) { 1 }).value] = $tmp45;
        panda$core$String* $tmp48 = (panda$core$String*) malloc(48);
        $tmp48->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp48->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp48, data41, ((panda$core$Int64) { 2 }));
        return $tmp48;
    }
    }
    data50 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 3 }).value * 1));
    uint16_t $tmp52 = self.value >> 12;
    uint16_t $tmp53 = $tmp52 | 224;
    panda$core$Char8$init$panda$core$UInt8(&$tmp51, ((panda$core$UInt8) { ((uint8_t) $tmp53) }));
    data50[((panda$core$Int64) { 0 }).value] = $tmp51;
    uint16_t $tmp55 = self.value >> 6;
    uint16_t $tmp56 = $tmp55 & 63;
    uint16_t $tmp57 = $tmp56 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp54, ((panda$core$UInt8) { ((uint8_t) $tmp57) }));
    data50[((panda$core$Int64) { 1 }).value] = $tmp54;
    uint16_t $tmp59 = self.value & 63;
    uint16_t $tmp60 = $tmp59 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp58, ((panda$core$UInt8) { ((uint8_t) $tmp60) }));
    data50[((panda$core$Int64) { 2 }).value] = $tmp58;
    panda$core$String* $tmp61 = (panda$core$String*) malloc(48);
    $tmp61->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp61->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp61, data50, ((panda$core$Int64) { 3 }));
    return $tmp61;
}

