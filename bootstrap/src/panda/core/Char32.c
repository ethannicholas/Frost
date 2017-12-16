#include "panda/core/Char32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
panda$core$Char32$wrapper* wrap_panda$core$Char32(panda$core$Char32 self) {
    panda$core$Char32$wrapper* result = (panda$core$Char32$wrapper*) malloc(16);
    result->cl = (panda$core$Class*) &panda$core$Char32$wrapperclass;
    result->value = self;
    return result;
}
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

panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64$wrappershim(panda$core$Char32$wrapper* self) {
    return panda$core$Char32$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$wrappershim(panda$core$Char32$wrapper* self, panda$core$Object* other) {
    return panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(self->value, ((panda$core$Char32$wrapper*) other)->value);
}
panda$core$String* panda$core$Char32$convert$R$panda$core$String$wrappershim(panda$core$Char32$wrapper* self) {
    return panda$core$Char32$convert$R$panda$core$String(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim} };

panda$core$Char32$class_type panda$core$Char32$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$_panda$core$Equatable, { panda$core$Char32$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char32$hash$R$panda$core$Int64, panda$core$Char32$convert$R$panda$core$Int8, panda$core$Char32$convert$R$panda$core$Int16, panda$core$Char32$convert$R$panda$core$Int32, panda$core$Char32$convert$R$panda$core$Int64, panda$core$Char32$convert$R$panda$core$UInt8, panda$core$Char32$convert$R$panda$core$UInt16, panda$core$Char32$convert$R$panda$core$UInt32, panda$core$Char32$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$wrapper_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$wrappershim} };

panda$core$Char32$wrapperclass_type panda$core$Char32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Equatable, { panda$core$Char32$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

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
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char32 self, panda$core$Int64 p_count) {
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
        panda$core$MutableString$append$panda$core$Char32(result3, self);
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
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char32 p_char) {
    panda$core$String* $tmp27 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp27;
}
panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64(panda$core$Char32 self) {
    panda$core$Int64 $tmp28 = panda$core$Char32$convert$R$panda$core$Int64(self);
    return $tmp28;
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
    panda$core$Char8* data30;
    panda$core$Char8 $tmp31;
    panda$core$Char8* data35;
    panda$core$Char8 $tmp36;
    panda$core$Char8 $tmp39;
    panda$core$Char8* data45;
    panda$core$Char8 $tmp46;
    panda$core$Char8 $tmp49;
    panda$core$Char8 $tmp53;
    panda$core$Char8* data58;
    panda$core$Char8 $tmp59;
    panda$core$Char8 $tmp62;
    panda$core$Char8 $tmp66;
    panda$core$Char8 $tmp70;
    bool $tmp29 = self.value < 128;
    if (((panda$core$Bit) { $tmp29 }).value) {
    {
        data30 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$Char8$init$panda$core$UInt8(&$tmp31, ((panda$core$UInt8) { ((uint8_t) self.value) }));
        data30[((panda$core$Int64) { 0 }).value] = $tmp31;
        panda$core$String* $tmp32 = (panda$core$String*) malloc(48);
        $tmp32->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp32->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp32, data30, ((panda$core$Int64) { 1 }));
        return $tmp32;
    }
    }
    bool $tmp34 = self.value < 2048;
    if (((panda$core$Bit) { $tmp34 }).value) {
    {
        data35 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 2 }).value * 1));
        int32_t $tmp37 = self.value >> 6;
        int32_t $tmp38 = $tmp37 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp36, ((panda$core$UInt8) { ((uint8_t) $tmp38) }));
        data35[((panda$core$Int64) { 0 }).value] = $tmp36;
        int32_t $tmp40 = self.value & 63;
        int32_t $tmp41 = $tmp40 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp39, ((panda$core$UInt8) { ((uint8_t) $tmp41) }));
        data35[((panda$core$Int64) { 1 }).value] = $tmp39;
        panda$core$String* $tmp42 = (panda$core$String*) malloc(48);
        $tmp42->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp42->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp42, data35, ((panda$core$Int64) { 2 }));
        return $tmp42;
    }
    }
    bool $tmp44 = self.value < 65536;
    if (((panda$core$Bit) { $tmp44 }).value) {
    {
        data45 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 3 }).value * 1));
        int32_t $tmp47 = self.value >> 12;
        int32_t $tmp48 = $tmp47 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp46, ((panda$core$UInt8) { ((uint8_t) $tmp48) }));
        data45[((panda$core$Int64) { 0 }).value] = $tmp46;
        int32_t $tmp50 = self.value >> 6;
        int32_t $tmp51 = $tmp50 & 63;
        int32_t $tmp52 = $tmp51 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp49, ((panda$core$UInt8) { ((uint8_t) $tmp52) }));
        data45[((panda$core$Int64) { 1 }).value] = $tmp49;
        int32_t $tmp54 = self.value & 63;
        int32_t $tmp55 = $tmp54 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp53, ((panda$core$UInt8) { ((uint8_t) $tmp55) }));
        data45[((panda$core$Int64) { 2 }).value] = $tmp53;
        panda$core$String* $tmp56 = (panda$core$String*) malloc(48);
        $tmp56->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp56->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp56, data45, ((panda$core$Int64) { 3 }));
        return $tmp56;
    }
    }
    data58 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 4 }).value * 1));
    int32_t $tmp60 = self.value >> 18;
    int32_t $tmp61 = $tmp60 | 240;
    panda$core$Char8$init$panda$core$UInt8(&$tmp59, ((panda$core$UInt8) { ((uint8_t) $tmp61) }));
    data58[((panda$core$Int64) { 0 }).value] = $tmp59;
    int32_t $tmp63 = self.value >> 12;
    int32_t $tmp64 = $tmp63 & 63;
    int32_t $tmp65 = $tmp64 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp62, ((panda$core$UInt8) { ((uint8_t) $tmp65) }));
    data58[((panda$core$Int64) { 1 }).value] = $tmp62;
    int32_t $tmp67 = self.value >> 6;
    int32_t $tmp68 = $tmp67 & 63;
    int32_t $tmp69 = $tmp68 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp66, ((panda$core$UInt8) { ((uint8_t) $tmp69) }));
    data58[((panda$core$Int64) { 2 }).value] = $tmp66;
    int32_t $tmp71 = self.value & 63;
    int32_t $tmp72 = $tmp71 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp70, ((panda$core$UInt8) { ((uint8_t) $tmp72) }));
    data58[((panda$core$Int64) { 3 }).value] = $tmp70;
    panda$core$String* $tmp73 = (panda$core$String*) malloc(48);
    $tmp73->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp73->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp73, data58, ((panda$core$Int64) { 4 }));
    return $tmp73;
}

