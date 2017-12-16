#include "panda/core/Char8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
panda$core$Char8$wrapper* wrap_panda$core$Char8(panda$core$Char8 self) {
    panda$core$Char8$wrapper* result = (panda$core$Char8$wrapper*) malloc(13);
    result->cl = (panda$core$Class*) &panda$core$Char8$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
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

panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64$wrappershim(panda$core$Char8$wrapper* self) {
    return panda$core$Char8$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Object* other) {
    return panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$String* panda$core$Char8$convert$R$panda$core$String$wrappershim(panda$core$Char8$wrapper* self) {
    return panda$core$Char8$convert$R$panda$core$String(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim} };

panda$core$Char8$class_type panda$core$Char8$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$_panda$core$Equatable, { panda$core$Char8$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$isWhitespace$R$panda$core$Bit, panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char8$hash$R$panda$core$Int64, panda$core$Char8$convert$R$panda$core$Int8, panda$core$Char8$convert$R$panda$core$Int16, panda$core$Char8$convert$R$panda$core$Int32, panda$core$Char8$convert$R$panda$core$Int64, panda$core$Char8$convert$R$panda$core$UInt8, panda$core$Char8$convert$R$panda$core$UInt16, panda$core$Char8$convert$R$panda$core$UInt32, panda$core$Char8$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$wrapper_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$wrappershim} };

panda$core$Char8$wrapperclass_type panda$core$Char8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$wrapper_panda$core$Equatable, { panda$core$Char8$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

void panda$core$Char8$init$panda$core$UInt8(panda$core$Char8* self, panda$core$UInt8 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp1 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp1 });
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp2 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp2 });
}
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 self) {
    panda$core$Char8 $match$32_93;
    panda$core$Char8 $tmp7;
    panda$core$Char8 $tmp10;
    panda$core$Char8 $tmp14;
    panda$core$Char8 $tmp18;
    {
        $match$32_93 = self;
        panda$core$Char8$init$panda$core$UInt8(&$tmp7, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp8 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$32_93, $tmp7);
        bool $tmp6 = $tmp8.value;
        if ($tmp6) goto $l9;
        panda$core$Char8$init$panda$core$UInt8(&$tmp10, ((panda$core$UInt8) { 13 }));
        panda$core$Bit $tmp11 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$32_93, $tmp10);
        $tmp6 = $tmp11.value;
        $l9:;
        panda$core$Bit $tmp12 = { $tmp6 };
        bool $tmp5 = $tmp12.value;
        if ($tmp5) goto $l13;
        panda$core$Char8$init$panda$core$UInt8(&$tmp14, ((panda$core$UInt8) { 9 }));
        panda$core$Bit $tmp15 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$32_93, $tmp14);
        $tmp5 = $tmp15.value;
        $l13:;
        panda$core$Bit $tmp16 = { $tmp5 };
        bool $tmp4 = $tmp16.value;
        if ($tmp4) goto $l17;
        panda$core$Char8$init$panda$core$UInt8(&$tmp18, ((panda$core$UInt8) { 32 }));
        panda$core$Bit $tmp19 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$32_93, $tmp18);
        $tmp4 = $tmp19.value;
        $l17:;
        panda$core$Bit $tmp20 = { $tmp4 };
        if ($tmp20.value) {
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
    panda$core$MutableString* result21;
    panda$core$Range$LTpanda$core$Int64$GT $tmp24;
    panda$core$MutableString* $tmp22 = (panda$core$MutableString*) malloc(48);
    $tmp22->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp22->refCount.value = 1;
    panda$core$MutableString$init($tmp22);
    result21 = $tmp22;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp24, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp26 = $tmp24.min.value;
    panda$core$Int64 i25 = { $tmp26 };
    int64_t $tmp28 = $tmp24.max.value;
    bool $tmp29 = $tmp24.inclusive.value;
    if ($tmp29) goto $l36; else goto $l37;
    $l36:;
    if ($tmp26 <= $tmp28) goto $l30; else goto $l32;
    $l37:;
    if ($tmp26 < $tmp28) goto $l30; else goto $l32;
    $l30:;
    {
        panda$core$MutableString$append$panda$core$Char8(result21, self);
    }
    $l33:;
    int64_t $tmp39 = $tmp28 - i25.value;
    if ($tmp29) goto $l40; else goto $l41;
    $l40:;
    if ($tmp39 >= 1) goto $l38; else goto $l32;
    $l41:;
    if ($tmp39 > 1) goto $l38; else goto $l32;
    $l38:;
    i25.value += 1;
    goto $l30;
    $l32:;
    panda$core$String* $tmp44 = panda$core$MutableString$finish$R$panda$core$String(result21);
    return $tmp44;
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$panda$core$Char8$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char8 p_char) {
    panda$core$String* $tmp45 = panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp45;
}
panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64(panda$core$Char8 self) {
    panda$core$Int64 $tmp46 = panda$core$Char8$convert$R$panda$core$Int64(self);
    return $tmp46;
}
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 self) {
    int16_t $tmp47 = ((int16_t) self.value) & 255;
    return ((panda$core$Int16) { $tmp47 });
}
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 self) {
    int32_t $tmp48 = ((int32_t) self.value) & 255;
    return ((panda$core$Int32) { $tmp48 });
}
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 self) {
    int64_t $tmp49 = ((int64_t) self.value) & 255;
    return ((panda$core$Int64) { $tmp49 });
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
    panda$core$Char8* data51;
    panda$core$Char8* data54;
    panda$core$Char8 $tmp55;
    panda$core$Char8 $tmp58;
    bool $tmp50 = self.value < 128;
    if (((panda$core$Bit) { $tmp50 }).value) {
    {
        data51 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 1 }).value * 1));
        data51[((panda$core$Int64) { 0 }).value] = self;
        panda$core$String* $tmp52 = (panda$core$String*) malloc(48);
        $tmp52->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp52->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp52, data51, ((panda$core$Int64) { 1 }));
        return $tmp52;
    }
    }
    data54 = ((panda$core$Char8*) malloc(((panda$core$Int64) { 2 }).value * 1));
    uint16_t $tmp56 = ((uint16_t) self.value) >> 6;
    uint16_t $tmp57 = $tmp56 | 192;
    panda$core$Char8$init$panda$core$UInt8(&$tmp55, ((panda$core$UInt8) { ((uint8_t) $tmp57) }));
    data54[((panda$core$Int64) { 0 }).value] = $tmp55;
    uint16_t $tmp59 = ((uint16_t) self.value) & 63;
    uint16_t $tmp60 = $tmp59 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp58, ((panda$core$UInt8) { ((uint8_t) $tmp60) }));
    data54[((panda$core$Int64) { 1 }).value] = $tmp58;
    panda$core$String* $tmp61 = (panda$core$String*) malloc(48);
    $tmp61->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp61->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp61, data54, ((panda$core$Int64) { 2 }));
    return $tmp61;
}

