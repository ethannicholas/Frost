#include "panda/core/Char16.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
panda$core$Char16$wrapper* wrap_panda$core$Char16(panda$core$Char16 self) {
    panda$core$Char16$wrapper* result = (panda$core$Char16$wrapper*) malloc(14);
    result->cl = (panda$core$Class*) &panda$core$Char16$wrapperclass;
    result->value = self;
    return result;
}
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
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
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

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char16$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char16$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Char16$_panda$core$Equatable, { panda$core$Char16$hash$R$panda$core$Int64} };

panda$core$Char16$class_type panda$core$Char16$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char16$_panda$collections$Key, { panda$core$Char16$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char16$hash$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$Int8, panda$core$Char16$convert$R$panda$core$Int16, panda$core$Char16$convert$R$panda$core$Int32, panda$core$Char16$convert$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$UInt8, panda$core$Char16$convert$R$panda$core$UInt16, panda$core$Char16$convert$R$panda$core$UInt32, panda$core$Char16$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char16$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$wrappershim} };

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
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char16 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result3;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6;
    panda$core$MutableString* $tmp4 = (panda$core$MutableString*) malloc(48);
    $tmp4->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp4->refCount.value = 1;
    panda$core$MutableString$init($tmp4);
    result3 = $tmp4;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp8 = $tmp6.min.value;
    panda$core$Int64 i7 = { $tmp8 };
    int64_t $tmp10 = $tmp6.max.value;
    bool $tmp11 = $tmp6.inclusive.value;
    if ($tmp11) goto $l18; else goto $l19;
    $l18:;
    if ($tmp8 <= $tmp10) goto $l12; else goto $l14;
    $l19:;
    if ($tmp8 < $tmp10) goto $l12; else goto $l14;
    $l12:;
    {
        panda$core$MutableString$append$panda$core$Object(result3, ((panda$core$Object*) wrap_panda$core$Char16(self)));
    }
    $l15:;
    int64_t $tmp21 = $tmp10 - i7.value;
    if ($tmp11) goto $l22; else goto $l23;
    $l22:;
    if ($tmp21 >= 1) goto $l20; else goto $l14;
    $l23:;
    if ($tmp21 > 1) goto $l20; else goto $l14;
    $l20:;
    i7.value += 1;
    goto $l12;
    $l14:;
    panda$core$String* $tmp26 = panda$core$MutableString$finish$R$panda$core$String(result3);
    return $tmp26;
}
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$panda$core$Char16$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char16 p_char) {
    panda$core$String* $tmp27 = panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp27;
}
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64(panda$core$Char16 self) {
    panda$core$Int64 $tmp28 = panda$core$Char16$convert$R$panda$core$Int64(self);
    return $tmp28;
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
    panda$core$Char8* data30;
    panda$core$Char8 $tmp31;
    panda$core$Char8* data36;
    panda$core$Char8 $tmp37;
    panda$core$Char8 $tmp40;
    panda$core$Char8* data45;
    panda$core$Char8 $tmp46;
    panda$core$Char8 $tmp49;
    panda$core$Char8 $tmp53;
    bool $tmp29 = self.value < 128;
    if (((panda$core$Bit) { $tmp29 }).value) {
    {
        data30 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$UInt8 $tmp32 = panda$core$Char16$convert$R$panda$core$UInt8(self);
        panda$core$Char8$init$panda$core$UInt8(&$tmp31, $tmp32);
        data30[((panda$core$Int64) { 0 }).value] = $tmp31;
        panda$core$String* $tmp33 = (panda$core$String*) malloc(48);
        $tmp33->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp33->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp33, data30, ((panda$core$Int64) { 1 }));
        return $tmp33;
    }
    }
    bool $tmp35 = self.value < 2048;
    if (((panda$core$Bit) { $tmp35 }).value) {
    {
        data36 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 2 }).value * 1));
        uint16_t $tmp38 = self.value >> 6;
        uint16_t $tmp39 = $tmp38 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp37, ((panda$core$UInt8) { ((uint8_t) $tmp39) }));
        data36[((panda$core$Int64) { 0 }).value] = $tmp37;
        uint16_t $tmp41 = self.value & 63;
        uint16_t $tmp42 = $tmp41 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp40, ((panda$core$UInt8) { ((uint8_t) $tmp42) }));
        data36[((panda$core$Int64) { 1 }).value] = $tmp40;
        panda$core$String* $tmp43 = (panda$core$String*) malloc(48);
        $tmp43->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp43->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp43, data36, ((panda$core$Int64) { 2 }));
        return $tmp43;
    }
    }
    data45 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 3 }).value * 1));
    uint16_t $tmp47 = self.value >> 12;
    uint16_t $tmp48 = $tmp47 | 224;
    panda$core$Char8$init$panda$core$UInt8(&$tmp46, ((panda$core$UInt8) { ((uint8_t) $tmp48) }));
    data45[((panda$core$Int64) { 0 }).value] = $tmp46;
    uint16_t $tmp50 = self.value >> 6;
    uint16_t $tmp51 = $tmp50 & 63;
    uint16_t $tmp52 = $tmp51 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp49, ((panda$core$UInt8) { ((uint8_t) $tmp52) }));
    data45[((panda$core$Int64) { 1 }).value] = $tmp49;
    uint16_t $tmp54 = self.value & 63;
    uint16_t $tmp55 = $tmp54 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp53, ((panda$core$UInt8) { ((uint8_t) $tmp55) }));
    data45[((panda$core$Int64) { 2 }).value] = $tmp53;
    panda$core$String* $tmp56 = (panda$core$String*) malloc(48);
    $tmp56->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp56->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp56, data45, ((panda$core$Int64) { 3 }));
    return $tmp56;
}

