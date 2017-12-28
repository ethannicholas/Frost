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
#include "panda/core/Panda.h"
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
    panda$core$Range$LTpanda$core$Int64$GT $tmp11;
    panda$core$MutableString* $tmp8 = (panda$core$MutableString*) pandaAlloc(48);
    $tmp8->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp8->refCount.value = 1;
    panda$core$MutableString$init($tmp8);
    panda$core$Object* $tmp10 = panda$core$Panda$ref$panda$core$Object$R$panda$core$Object(((panda$core$Object*) $tmp8));
    result7 = ((panda$core$MutableString*) $tmp10);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp11, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp13 = $tmp11.min.value;
    panda$core$Int64 i12 = { $tmp13 };
    int64_t $tmp15 = $tmp11.max.value;
    bool $tmp16 = $tmp11.inclusive.value;
    if ($tmp16) goto $l23; else goto $l24;
    $l23:;
    if ($tmp13 <= $tmp15) goto $l17; else goto $l19;
    $l24:;
    if ($tmp13 < $tmp15) goto $l17; else goto $l19;
    $l17:;
    {
        panda$core$MutableString$append$panda$core$Char32(result7, self);
    }
    $l20:;
    int64_t $tmp26 = $tmp15 - i12.value;
    if ($tmp16) goto $l27; else goto $l28;
    $l27:;
    if ((uint64_t) $tmp26 >= 1) goto $l25; else goto $l19;
    $l28:;
    if ((uint64_t) $tmp26 > 1) goto $l25; else goto $l19;
    $l25:;
    i12.value += 1;
    goto $l17;
    $l19:;
    panda$core$String* $tmp31 = panda$core$MutableString$finish$R$panda$core$String(result7);
    return $tmp31;
}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char32 p_char) {
    panda$core$String* $tmp32 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    return $tmp32;
}
panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64(panda$core$Char32 self) {
    panda$core$Int64 $tmp33 = panda$core$Char32$convert$R$panda$core$Int64(self);
    return $tmp33;
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
    panda$core$Char8* data35;
    panda$core$Char8 $tmp36;
    panda$core$Char8* data40;
    panda$core$Char8 $tmp41;
    panda$core$Char8 $tmp44;
    panda$core$Char8* data50;
    panda$core$Char8 $tmp51;
    panda$core$Char8 $tmp54;
    panda$core$Char8 $tmp58;
    panda$core$Char8* data63;
    panda$core$Char8 $tmp64;
    panda$core$Char8 $tmp67;
    panda$core$Char8 $tmp71;
    panda$core$Char8 $tmp75;
    bool $tmp34 = self.value < 128;
    if (((panda$core$Bit) { $tmp34 }).value) {
    {
        data35 = ((panda$core$Char8*) pandaAlloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$Char8$init$panda$core$UInt8(&$tmp36, ((panda$core$UInt8) { ((uint8_t) self.value) }));
        data35[((panda$core$Int64) { 0 }).value] = $tmp36;
        panda$core$String* $tmp37 = (panda$core$String*) pandaAlloc(48);
        $tmp37->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp37->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp37, data35, ((panda$core$Int64) { 1 }));
        return $tmp37;
    }
    }
    bool $tmp39 = self.value < 2048;
    if (((panda$core$Bit) { $tmp39 }).value) {
    {
        data40 = ((panda$core$Char8*) pandaAlloc(((panda$core$Int64) { 2 }).value * 1));
        int32_t $tmp42 = self.value >> 6;
        int32_t $tmp43 = $tmp42 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp41, ((panda$core$UInt8) { ((uint8_t) $tmp43) }));
        data40[((panda$core$Int64) { 0 }).value] = $tmp41;
        int32_t $tmp45 = self.value & 63;
        int32_t $tmp46 = $tmp45 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp44, ((panda$core$UInt8) { ((uint8_t) $tmp46) }));
        data40[((panda$core$Int64) { 1 }).value] = $tmp44;
        panda$core$String* $tmp47 = (panda$core$String*) pandaAlloc(48);
        $tmp47->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp47->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp47, data40, ((panda$core$Int64) { 2 }));
        return $tmp47;
    }
    }
    bool $tmp49 = self.value < 65536;
    if (((panda$core$Bit) { $tmp49 }).value) {
    {
        data50 = ((panda$core$Char8*) pandaAlloc(((panda$core$Int64) { 3 }).value * 1));
        int32_t $tmp52 = self.value >> 12;
        int32_t $tmp53 = $tmp52 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp51, ((panda$core$UInt8) { ((uint8_t) $tmp53) }));
        data50[((panda$core$Int64) { 0 }).value] = $tmp51;
        int32_t $tmp55 = self.value >> 6;
        int32_t $tmp56 = $tmp55 & 63;
        int32_t $tmp57 = $tmp56 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp54, ((panda$core$UInt8) { ((uint8_t) $tmp57) }));
        data50[((panda$core$Int64) { 1 }).value] = $tmp54;
        int32_t $tmp59 = self.value & 63;
        int32_t $tmp60 = $tmp59 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp58, ((panda$core$UInt8) { ((uint8_t) $tmp60) }));
        data50[((panda$core$Int64) { 2 }).value] = $tmp58;
        panda$core$String* $tmp61 = (panda$core$String*) pandaAlloc(48);
        $tmp61->$class = (panda$core$Class*) &panda$core$String$class;
        $tmp61->refCount.value = 1;
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp61, data50, ((panda$core$Int64) { 3 }));
        return $tmp61;
    }
    }
    data63 = ((panda$core$Char8*) pandaAlloc(((panda$core$Int64) { 4 }).value * 1));
    int32_t $tmp65 = self.value >> 18;
    int32_t $tmp66 = $tmp65 | 240;
    panda$core$Char8$init$panda$core$UInt8(&$tmp64, ((panda$core$UInt8) { ((uint8_t) $tmp66) }));
    data63[((panda$core$Int64) { 0 }).value] = $tmp64;
    int32_t $tmp68 = self.value >> 12;
    int32_t $tmp69 = $tmp68 & 63;
    int32_t $tmp70 = $tmp69 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp67, ((panda$core$UInt8) { ((uint8_t) $tmp70) }));
    data63[((panda$core$Int64) { 1 }).value] = $tmp67;
    int32_t $tmp72 = self.value >> 6;
    int32_t $tmp73 = $tmp72 & 63;
    int32_t $tmp74 = $tmp73 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp71, ((panda$core$UInt8) { ((uint8_t) $tmp74) }));
    data63[((panda$core$Int64) { 2 }).value] = $tmp71;
    int32_t $tmp76 = self.value & 63;
    int32_t $tmp77 = $tmp76 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp75, ((panda$core$UInt8) { ((uint8_t) $tmp77) }));
    data63[((panda$core$Int64) { 3 }).value] = $tmp75;
    panda$core$String* $tmp78 = (panda$core$String*) pandaAlloc(48);
    $tmp78->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp78->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp78, data63, ((panda$core$Int64) { 4 }));
    return $tmp78;
}

