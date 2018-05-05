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
    bool $tmp4 = self.value == p_other.value;
    panda$core$Bit $tmp3 = ((panda$core$Bit) { $tmp4 });
    return $tmp3;
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp6 = self.value != p_other.value;
    panda$core$Bit $tmp5 = ((panda$core$Bit) { $tmp6 });
    return $tmp5;
}
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp8 = self.value < p_other.value;
    panda$core$Bit $tmp7 = ((panda$core$Bit) { $tmp8 });
    return $tmp7;
}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp10 = self.value > p_other.value;
    panda$core$Bit $tmp9 = ((panda$core$Bit) { $tmp10 });
    return $tmp9;
}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp12 = self.value <= p_other.value;
    panda$core$Bit $tmp11 = ((panda$core$Bit) { $tmp12 });
    return $tmp11;
}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    bool $tmp14 = self.value >= p_other.value;
    panda$core$Bit $tmp13 = ((panda$core$Bit) { $tmp14 });
    return $tmp13;
}
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 self) {
    panda$core$Char8 $match$52_915;
    panda$core$Char8 $tmp19;
    panda$core$Char8 $tmp22;
    panda$core$Char8 $tmp26;
    panda$core$Char8 $tmp30;
    {
        $match$52_915 = self;
        panda$core$Char8$init$panda$core$UInt8(&$tmp19, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp20 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_915, $tmp19);
        bool $tmp18 = $tmp20.value;
        if ($tmp18) goto $l21;
        panda$core$Char8$init$panda$core$UInt8(&$tmp22, ((panda$core$UInt8) { 13 }));
        panda$core$Bit $tmp23 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_915, $tmp22);
        $tmp18 = $tmp23.value;
        $l21:;
        panda$core$Bit $tmp24 = { $tmp18 };
        bool $tmp17 = $tmp24.value;
        if ($tmp17) goto $l25;
        panda$core$Char8$init$panda$core$UInt8(&$tmp26, ((panda$core$UInt8) { 9 }));
        panda$core$Bit $tmp27 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_915, $tmp26);
        $tmp17 = $tmp27.value;
        $l25:;
        panda$core$Bit $tmp28 = { $tmp17 };
        bool $tmp16 = $tmp28.value;
        if ($tmp16) goto $l29;
        panda$core$Char8$init$panda$core$UInt8(&$tmp30, ((panda$core$UInt8) { 32 }));
        panda$core$Bit $tmp31 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_915, $tmp30);
        $tmp16 = $tmp31.value;
        $l29:;
        panda$core$Bit $tmp32 = { $tmp16 };
        if ($tmp32.value) {
        {
            panda$core$Bit $tmp33 = ((panda$core$Bit) { true });
            return $tmp33;
        }
        }
        else {
        {
            panda$core$Bit $tmp34 = ((panda$core$Bit) { false });
            return $tmp34;
        }
        }
    }
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char8 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result35;
    panda$core$Range$LTpanda$core$Int64$GT $tmp39;
    panda$core$String* tmp159;
    panda$core$MutableString* $tmp38 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
    panda$core$MutableString$init($tmp38);
    panda$core$MutableString* $tmp37 = $tmp38;
    panda$core$MutableString* $tmp36 = $tmp37;
    result35 = $tmp36;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp36));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp39, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
    int64_t $tmp41 = $tmp39.min.value;
    panda$core$Int64 i40 = { $tmp41 };
    int64_t $tmp43 = $tmp39.max.value;
    bool $tmp44 = $tmp39.inclusive.value;
    if ($tmp44) goto $l51; else goto $l52;
    $l51:;
    if ($tmp41 <= $tmp43) goto $l45; else goto $l47;
    $l52:;
    if ($tmp41 < $tmp43) goto $l45; else goto $l47;
    $l45:;
    {
        panda$core$MutableString$append$panda$core$Char8(result35, self);
    }
    $l48:;
    int64_t $tmp54 = $tmp43 - i40.value;
    if ($tmp44) goto $l55; else goto $l56;
    $l55:;
    if ((uint64_t) $tmp54 >= 1) goto $l53; else goto $l47;
    $l56:;
    if ((uint64_t) $tmp54 > 1) goto $l53; else goto $l47;
    $l53:;
    i40.value += 1;
    goto $l45;
    $l47:;
    {
        panda$core$String* $tmp62 = panda$core$MutableString$finish$R$panda$core$String(result35);
        panda$core$String* $tmp61 = $tmp62;
        panda$core$String* $tmp60 = $tmp61;
        tmp159 = $tmp60;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp60));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result35));
        panda$core$String* $tmp63 = tmp159;
        return $tmp63;
    }
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$panda$core$Char8$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char8 p_char) {
    panda$core$String* $tmp67 = panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    panda$core$String* $tmp66 = $tmp67;
    panda$core$String* $tmp65 = $tmp66;
    panda$core$String* $tmp64 = $tmp65;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp65));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp66));
    return $tmp64;
}
panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64(panda$core$Char8 self) {
    panda$core$Int64 $tmp69 = panda$core$Char8$convert$R$panda$core$Int64(self);
    panda$core$Int64 $tmp68 = $tmp69;
    return $tmp68;
}
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 self) {
    panda$core$Int8 $tmp70 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $tmp70;
}
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 self) {
    int16_t $tmp72 = ((int16_t) self.value) & 255;
    panda$core$Int16 $tmp71 = ((panda$core$Int16) { $tmp72 });
    return $tmp71;
}
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 self) {
    int32_t $tmp74 = ((int32_t) self.value) & 255;
    panda$core$Int32 $tmp73 = ((panda$core$Int32) { $tmp74 });
    return $tmp73;
}
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 self) {
    int64_t $tmp76 = ((int64_t) self.value) & 255;
    panda$core$Int64 $tmp75 = ((panda$core$Int64) { $tmp76 });
    return $tmp75;
}
panda$core$UInt8 panda$core$Char8$convert$R$panda$core$UInt8(panda$core$Char8 self) {
    panda$core$UInt8 $tmp77 = ((panda$core$UInt8) { self.value });
    return $tmp77;
}
panda$core$UInt16 panda$core$Char8$convert$R$panda$core$UInt16(panda$core$Char8 self) {
    panda$core$UInt16 $tmp78 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $tmp78;
}
panda$core$UInt32 panda$core$Char8$convert$R$panda$core$UInt32(panda$core$Char8 self) {
    panda$core$UInt32 $tmp79 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $tmp79;
}
panda$core$UInt64 panda$core$Char8$convert$R$panda$core$UInt64(panda$core$Char8 self) {
    panda$core$UInt64 $tmp80 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $tmp80;
}
panda$core$String* panda$core$Char8$convert$R$panda$core$String(panda$core$Char8 self) {
    panda$core$Char8* data82;
    panda$core$Char8* data87;
    panda$core$Char8 $tmp88;
    panda$core$Char8 $tmp91;
    bool $tmp81 = self.value < 128;
    if (((panda$core$Bit) { $tmp81 }).value) {
    {
        data82 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        data82[((panda$core$Int64) { 0 }).value] = self;
        panda$core$String* $tmp86 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp86, data82, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp85 = $tmp86;
        panda$core$String* $tmp84 = $tmp85;
        panda$core$String* $tmp83 = $tmp84;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp84));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp85));
        return $tmp83;
    }
    }
    data87 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
    uint16_t $tmp89 = ((uint16_t) self.value) >> 6;
    uint16_t $tmp90 = $tmp89 | 192;
    panda$core$Char8$init$panda$core$UInt8(&$tmp88, ((panda$core$UInt8) { ((uint8_t) $tmp90) }));
    data87[((panda$core$Int64) { 0 }).value] = $tmp88;
    uint16_t $tmp92 = ((uint16_t) self.value) & 63;
    uint16_t $tmp93 = $tmp92 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp91, ((panda$core$UInt8) { ((uint8_t) $tmp93) }));
    data87[((panda$core$Int64) { 1 }).value] = $tmp91;
    panda$core$String* $tmp97 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp97, data87, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp96 = $tmp97;
    panda$core$String* $tmp95 = $tmp96;
    panda$core$String* $tmp94 = $tmp95;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp96));
    return $tmp94;
}
void panda$core$Char8$cleanup(panda$core$Char8 self) {
}

