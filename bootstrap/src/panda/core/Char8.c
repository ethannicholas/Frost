#include "panda/core/Char8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
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

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char8$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char8$_panda$core$Equatable, { panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim} };

panda$core$Char8$class_type panda$core$Char8$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$_panda$core$Comparable, { panda$core$Char8$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim, panda$core$Char8$isWhitespace$R$panda$core$Bit, panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char8$hash$R$panda$core$Int64, panda$core$Char8$convert$R$panda$core$Int8, panda$core$Char8$convert$R$panda$core$Int16, panda$core$Char8$convert$R$panda$core$Int32, panda$core$Char8$convert$R$panda$core$Int64, panda$core$Char8$convert$R$panda$core$UInt8, panda$core$Char8$convert$R$panda$core$UInt16, panda$core$Char8$convert$R$panda$core$UInt32, panda$core$Char8$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char8$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char8$wrapper_panda$collections$Key, { panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char8$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char8$wrapper_panda$core$Equatable, { panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$wrappershim, panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$wrappershim} };

panda$core$Char8$wrapperclass_type panda$core$Char8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char8$wrapper_panda$core$Comparable, { panda$core$Char8$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

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
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp3 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp3 });
}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp4 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp4 });
}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp5 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp5 });
}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp6 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp6 });
}
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 self) {
    panda$core$Char8 $match$52_97;
    panda$core$Char8 $tmp11;
    panda$core$Char8 $tmp14;
    panda$core$Char8 $tmp18;
    panda$core$Char8 $tmp22;
    {
        $match$52_97 = self;
        panda$core$Char8$init$panda$core$UInt8(&$tmp11, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp12 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_97, $tmp11);
        bool $tmp10 = $tmp12.value;
        if ($tmp10) goto $l13;
        panda$core$Char8$init$panda$core$UInt8(&$tmp14, ((panda$core$UInt8) { 13 }));
        panda$core$Bit $tmp15 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_97, $tmp14);
        $tmp10 = $tmp15.value;
        $l13:;
        panda$core$Bit $tmp16 = { $tmp10 };
        bool $tmp9 = $tmp16.value;
        if ($tmp9) goto $l17;
        panda$core$Char8$init$panda$core$UInt8(&$tmp18, ((panda$core$UInt8) { 9 }));
        panda$core$Bit $tmp19 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_97, $tmp18);
        $tmp9 = $tmp19.value;
        $l17:;
        panda$core$Bit $tmp20 = { $tmp9 };
        bool $tmp8 = $tmp20.value;
        if ($tmp8) goto $l21;
        panda$core$Char8$init$panda$core$UInt8(&$tmp22, ((panda$core$UInt8) { 32 }));
        panda$core$Bit $tmp23 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_97, $tmp22);
        $tmp8 = $tmp23.value;
        $l21:;
        panda$core$Bit $tmp24 = { $tmp8 };
        if ($tmp24.value) {
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
    panda$core$MutableString* result25;
    panda$core$Range$LTpanda$core$Int64$GT $tmp29;
    panda$core$MutableString* $tmp26 = (panda$core$MutableString*) malloc(48);
    $tmp26->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp26->refCount.value = 1;
    panda$core$MutableString$init($tmp26);
    panda$core$Object* $tmp28 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp26));
    result25 = ((panda$core$MutableString*) $tmp28);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp29, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp31 = $tmp29.min.value;
    panda$core$Int64 i30 = { $tmp31 };
    int64_t $tmp33 = $tmp29.max.value;
    bool $tmp34 = $tmp29.inclusive.value;
    if ($tmp34) goto $l41; else goto $l42;
    $l41:;
    if ($tmp31 <= $tmp33) goto $l35; else goto $l37;
    $l42:;
    if ($tmp31 < $tmp33) goto $l35; else goto $l37;
    $l35:;
    {
        panda$core$MutableString$append$panda$core$Char8(result25, self);
    }
    $l38:;
    int64_t $tmp44 = $tmp33 - i30.value;
    if ($tmp34) goto $l45; else goto $l46;
    $l45:;
    if ((uint64_t) $tmp44 >= 1) goto $l43; else goto $l37;
    $l46:;
    if ((uint64_t) $tmp44 > 1) goto $l43; else goto $l37;
    $l43:;
    i30.value += 1;
    goto $l35;
    $l37:;
    panda$core$String* $tmp49 = panda$core$MutableString$finish$R$panda$core$String(result25);
    return $tmp49;
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$panda$core$Char8$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char8 p_char) {
    panda$core$String* $tmp50 = panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp50;
}
panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64(panda$core$Char8 self) {
    panda$core$Int64 $tmp51 = panda$core$Char8$convert$R$panda$core$Int64(self);
    return $tmp51;
}
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 self) {
    int16_t $tmp52 = ((int16_t) self.value) & 255;
    return ((panda$core$Int16) { $tmp52 });
}
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 self) {
    int32_t $tmp53 = ((int32_t) self.value) & 255;
    return ((panda$core$Int32) { $tmp53 });
}
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 self) {
    int64_t $tmp54 = ((int64_t) self.value) & 255;
    return ((panda$core$Int64) { $tmp54 });
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
    panda$core$Char8* data56;
    panda$core$Char8* data59;
    panda$core$Char8 $tmp60;
    panda$core$Char8 $tmp63;
    bool $tmp55 = self.value < 128;
    if (((panda$core$Bit) { $tmp55 }).value) {
    {
        data56 = ((panda$core$Char8*) pandaAlloc(((panda$core$Int64) { 1 }).value * 1));
        data56[((panda$core$Int64) { 0 }).value] = self;
        panda$core$String* $tmp57 = (panda$core$String*) malloc(48);
        $tmp57->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp57->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp57, data56, ((panda$core$Int64) { 1 }));
        return $tmp57;
    }
    }
    data59 = ((panda$core$Char8*) pandaAlloc(((panda$core$Int64) { 2 }).value * 1));
    uint16_t $tmp61 = ((uint16_t) self.value) >> 6;
    uint16_t $tmp62 = $tmp61 | 192;
    panda$core$Char8$init$panda$core$UInt8(&$tmp60, ((panda$core$UInt8) { ((uint8_t) $tmp62) }));
    data59[((panda$core$Int64) { 0 }).value] = $tmp60;
    uint16_t $tmp64 = ((uint16_t) self.value) & 63;
    uint16_t $tmp65 = $tmp64 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp63, ((panda$core$UInt8) { ((uint8_t) $tmp65) }));
    data59[((panda$core$Int64) { 1 }).value] = $tmp63;
    panda$core$String* $tmp66 = (panda$core$String*) malloc(48);
    $tmp66->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp66->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp66, data59, ((panda$core$Int64) { 2 }));
    return $tmp66;
}

