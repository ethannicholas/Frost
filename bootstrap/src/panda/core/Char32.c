#include "panda/core/Char32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/Int32.h"
#include "panda/core/MutableString.h"
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

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char32$_panda$core$Equatable, { panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim} };

panda$core$Char32$class_type panda$core$Char32$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$_panda$core$Comparable, { panda$core$Char32$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char32$hash$R$panda$core$Int64, panda$core$Char32$convert$R$panda$core$Int8, panda$core$Char32$convert$R$panda$core$Int16, panda$core$Char32$convert$R$panda$core$Int32, panda$core$Char32$convert$R$panda$core$Int64, panda$core$Char32$convert$R$panda$core$UInt8, panda$core$Char32$convert$R$panda$core$UInt16, panda$core$Char32$convert$R$panda$core$UInt32, panda$core$Char32$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$wrapper_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Equatable, { panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$wrappershim} };

panda$core$Char32$wrapperclass_type panda$core$Char32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Comparable, { panda$core$Char32$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

void panda$core$Char32$init$panda$core$Int32(panda$core$Char32* self, panda$core$Int32 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp1 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp1 });
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp2 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp2 });
}
panda$core$Bit panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp3 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp3 });
}
panda$core$Bit panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp4 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp4 });
}
panda$core$Bit panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp5 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp5 });
}
panda$core$Bit panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    bool $tmp6 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp6 });
}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char32 self, panda$core$Int64 p_count) {
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
        panda$core$MutableString$append$panda$core$Char32(result7, self);
    }
    $l19:;
    int64_t $tmp25 = $tmp14 - i11.value;
    if ($tmp15) goto $l26; else goto $l27;
    $l26:;
    if ($tmp25 >= 1) goto $l24; else goto $l18;
    $l27:;
    if ($tmp25 > 1) goto $l24; else goto $l18;
    $l24:;
    i11.value += 1;
    goto $l16;
    $l18:;
    panda$core$String* $tmp30 = panda$core$MutableString$finish$R$panda$core$String(result7);
    return $tmp30;
}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char32 p_char) {
    panda$core$String* $tmp31 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp31;
}
panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64(panda$core$Char32 self) {
    panda$core$Int64 $tmp32 = panda$core$Char32$convert$R$panda$core$Int64(self);
    return $tmp32;
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
    panda$core$Char8* data34;
    panda$core$Char8 $tmp35;
    panda$core$Char8* data39;
    panda$core$Char8 $tmp40;
    panda$core$Char8 $tmp43;
    panda$core$Char8* data49;
    panda$core$Char8 $tmp50;
    panda$core$Char8 $tmp53;
    panda$core$Char8 $tmp57;
    panda$core$Char8* data62;
    panda$core$Char8 $tmp63;
    panda$core$Char8 $tmp66;
    panda$core$Char8 $tmp70;
    panda$core$Char8 $tmp74;
    bool $tmp33 = self.value < 128;
    if (((panda$core$Bit) { $tmp33 }).value) {
    {
        data34 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$Char8$init$panda$core$UInt8(&$tmp35, ((panda$core$UInt8) { ((uint8_t) self.value) }));
        data34[((panda$core$Int64) { 0 }).value] = $tmp35;
        panda$core$String* $tmp36 = (panda$core$String*) malloc(48);
        $tmp36->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp36->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp36, data34, ((panda$core$Int64) { 1 }));
        return $tmp36;
    }
    }
    bool $tmp38 = self.value < 2048;
    if (((panda$core$Bit) { $tmp38 }).value) {
    {
        data39 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 2 }).value * 1));
        int32_t $tmp41 = self.value >> 6;
        int32_t $tmp42 = $tmp41 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp40, ((panda$core$UInt8) { ((uint8_t) $tmp42) }));
        data39[((panda$core$Int64) { 0 }).value] = $tmp40;
        int32_t $tmp44 = self.value & 63;
        int32_t $tmp45 = $tmp44 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp43, ((panda$core$UInt8) { ((uint8_t) $tmp45) }));
        data39[((panda$core$Int64) { 1 }).value] = $tmp43;
        panda$core$String* $tmp46 = (panda$core$String*) malloc(48);
        $tmp46->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp46->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp46, data39, ((panda$core$Int64) { 2 }));
        return $tmp46;
    }
    }
    bool $tmp48 = self.value < 65536;
    if (((panda$core$Bit) { $tmp48 }).value) {
    {
        data49 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 3 }).value * 1));
        int32_t $tmp51 = self.value >> 12;
        int32_t $tmp52 = $tmp51 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp50, ((panda$core$UInt8) { ((uint8_t) $tmp52) }));
        data49[((panda$core$Int64) { 0 }).value] = $tmp50;
        int32_t $tmp54 = self.value >> 6;
        int32_t $tmp55 = $tmp54 & 63;
        int32_t $tmp56 = $tmp55 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp53, ((panda$core$UInt8) { ((uint8_t) $tmp56) }));
        data49[((panda$core$Int64) { 1 }).value] = $tmp53;
        int32_t $tmp58 = self.value & 63;
        int32_t $tmp59 = $tmp58 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp57, ((panda$core$UInt8) { ((uint8_t) $tmp59) }));
        data49[((panda$core$Int64) { 2 }).value] = $tmp57;
        panda$core$String* $tmp60 = (panda$core$String*) malloc(48);
        $tmp60->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp60->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp60, data49, ((panda$core$Int64) { 3 }));
        return $tmp60;
    }
    }
    data62 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 4 }).value * 1));
    int32_t $tmp64 = self.value >> 18;
    int32_t $tmp65 = $tmp64 | 240;
    panda$core$Char8$init$panda$core$UInt8(&$tmp63, ((panda$core$UInt8) { ((uint8_t) $tmp65) }));
    data62[((panda$core$Int64) { 0 }).value] = $tmp63;
    int32_t $tmp67 = self.value >> 12;
    int32_t $tmp68 = $tmp67 & 63;
    int32_t $tmp69 = $tmp68 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp66, ((panda$core$UInt8) { ((uint8_t) $tmp69) }));
    data62[((panda$core$Int64) { 1 }).value] = $tmp66;
    int32_t $tmp71 = self.value >> 6;
    int32_t $tmp72 = $tmp71 & 63;
    int32_t $tmp73 = $tmp72 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp70, ((panda$core$UInt8) { ((uint8_t) $tmp73) }));
    data62[((panda$core$Int64) { 2 }).value] = $tmp70;
    int32_t $tmp75 = self.value & 63;
    int32_t $tmp76 = $tmp75 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp74, ((panda$core$UInt8) { ((uint8_t) $tmp76) }));
    data62[((panda$core$Int64) { 3 }).value] = $tmp74;
    panda$core$String* $tmp77 = (panda$core$String*) malloc(48);
    $tmp77->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp77->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp77, data62, ((panda$core$Int64) { 4 }));
    return $tmp77;
}

