#include "panda/core/Char8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt8.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$shim(panda$core$Char8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(self, ((panda$core$Char8$wrapper*) p0)->value);
    return result;
}

panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64$wrappershim(panda$core$Char8$wrapper* self) {
    return panda$core$Char8$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Equatable* other) {
    return panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Equatable* other) {
    return panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(self->value, ((panda$core$Char8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit$wrappershim(panda$core$Char8$wrapper* self, panda$core$Comparable* other) {
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
    panda$core$Bit $returnValue3;
    bool $tmp4 = self.value == p_other.value;
    $returnValue3 = ((panda$core$Bit) { $tmp4 });
    return $returnValue3;
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $returnValue6;
    bool $tmp7 = self.value != p_other.value;
    $returnValue6 = ((panda$core$Bit) { $tmp7 });
    return $returnValue6;
}
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $returnValue9;
    bool $tmp10 = self.value < p_other.value;
    $returnValue9 = ((panda$core$Bit) { $tmp10 });
    return $returnValue9;
}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $returnValue12;
    bool $tmp13 = self.value > p_other.value;
    $returnValue12 = ((panda$core$Bit) { $tmp13 });
    return $returnValue12;
}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $returnValue15;
    bool $tmp16 = self.value <= p_other.value;
    $returnValue15 = ((panda$core$Bit) { $tmp16 });
    return $returnValue15;
}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $returnValue18;
    bool $tmp19 = self.value >= p_other.value;
    $returnValue18 = ((panda$core$Bit) { $tmp19 });
    return $returnValue18;
}
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 self) {
    panda$core$Char8 $match$52_921;
    panda$core$Char8 $tmp25;
    panda$core$Char8 $tmp28;
    panda$core$Char8 $tmp32;
    panda$core$Char8 $tmp36;
    panda$core$Bit $returnValue39;
    {
        $match$52_921 = self;
        panda$core$Char8$init$panda$core$UInt8(&$tmp25, ((panda$core$UInt8) { 10 }));
        panda$core$Bit $tmp26 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_921, $tmp25);
        bool $tmp24 = $tmp26.value;
        if ($tmp24) goto $l27;
        panda$core$Char8$init$panda$core$UInt8(&$tmp28, ((panda$core$UInt8) { 13 }));
        panda$core$Bit $tmp29 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_921, $tmp28);
        $tmp24 = $tmp29.value;
        $l27:;
        panda$core$Bit $tmp30 = { $tmp24 };
        bool $tmp23 = $tmp30.value;
        if ($tmp23) goto $l31;
        panda$core$Char8$init$panda$core$UInt8(&$tmp32, ((panda$core$UInt8) { 9 }));
        panda$core$Bit $tmp33 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_921, $tmp32);
        $tmp23 = $tmp33.value;
        $l31:;
        panda$core$Bit $tmp34 = { $tmp23 };
        bool $tmp22 = $tmp34.value;
        if ($tmp22) goto $l35;
        panda$core$Char8$init$panda$core$UInt8(&$tmp36, ((panda$core$UInt8) { 32 }));
        panda$core$Bit $tmp37 = panda$core$Char8$$EQ$panda$core$Char8$R$panda$core$Bit($match$52_921, $tmp36);
        $tmp22 = $tmp37.value;
        $l35:;
        panda$core$Bit $tmp38 = { $tmp22 };
        if ($tmp38.value) {
        {
            $returnValue39 = ((panda$core$Bit) { true });
            return $returnValue39;
        }
        }
        else {
        {
            $returnValue39 = ((panda$core$Bit) { false });
            return $returnValue39;
        }
        }
    }
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char8 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result45 = NULL;
    panda$core$MutableString* $tmp46;
    panda$core$MutableString* $tmp47;
    panda$core$Range$LTpanda$core$Int64$GT $tmp49;
    panda$core$String* $returnValue69;
    panda$core$String* $tmp70;
    panda$core$String* $tmp71;
    int $tmp44;
    {
        panda$core$MutableString* $tmp48 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp48);
        $tmp47 = $tmp48;
        $tmp46 = $tmp47;
        result45 = $tmp46;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp49, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
        int64_t $tmp51 = $tmp49.min.value;
        panda$core$Int64 i50 = { $tmp51 };
        int64_t $tmp53 = $tmp49.max.value;
        bool $tmp54 = $tmp49.inclusive.value;
        if ($tmp54) goto $l61; else goto $l62;
        $l61:;
        if ($tmp51 <= $tmp53) goto $l55; else goto $l57;
        $l62:;
        if ($tmp51 < $tmp53) goto $l55; else goto $l57;
        $l55:;
        {
            panda$core$MutableString$append$panda$core$Char8(result45, self);
        }
        $l58:;
        int64_t $tmp64 = $tmp53 - i50.value;
        if ($tmp54) goto $l65; else goto $l66;
        $l65:;
        if ((uint64_t) $tmp64 >= 1) goto $l63; else goto $l57;
        $l66:;
        if ((uint64_t) $tmp64 > 1) goto $l63; else goto $l57;
        $l63:;
        i50.value += 1;
        goto $l55;
        $l57:;
        panda$core$String* $tmp72 = panda$core$MutableString$finish$R$panda$core$String(result45);
        $tmp71 = $tmp72;
        $tmp70 = $tmp71;
        $returnValue69 = $tmp70;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp70));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
        $tmp44 = 0;
        goto $l42;
        $l73:;
        return $returnValue69;
    }
    $l42:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result45));
    result45 = NULL;
    switch ($tmp44) {
        case 0: goto $l73;
    }
    $l75:;
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$panda$core$Char8$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char8 p_char) {
    panda$core$String* $returnValue76;
    panda$core$String* $tmp77;
    panda$core$String* $tmp78;
    panda$core$String* $tmp79 = panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    $tmp78 = $tmp79;
    $tmp77 = $tmp78;
    $returnValue76 = $tmp77;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp78));
    return $returnValue76;
}
panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64(panda$core$Char8 self) {
    panda$core$Int64 $returnValue81;
    panda$core$Int64 $tmp82 = panda$core$Char8$convert$R$panda$core$Int64(self);
    $returnValue81 = $tmp82;
    return $returnValue81;
}
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 self) {
    panda$core$Int8 $returnValue84;
    $returnValue84 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $returnValue84;
}
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 self) {
    panda$core$Int16 $returnValue86;
    int16_t $tmp87 = ((int16_t) self.value) & 255;
    $returnValue86 = ((panda$core$Int16) { $tmp87 });
    return $returnValue86;
}
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 self) {
    panda$core$Int32 $returnValue89;
    int32_t $tmp90 = ((int32_t) self.value) & 255;
    $returnValue89 = ((panda$core$Int32) { $tmp90 });
    return $returnValue89;
}
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 self) {
    panda$core$Int64 $returnValue92;
    int64_t $tmp93 = ((int64_t) self.value) & 255;
    $returnValue92 = ((panda$core$Int64) { $tmp93 });
    return $returnValue92;
}
panda$core$UInt8 panda$core$Char8$convert$R$panda$core$UInt8(panda$core$Char8 self) {
    panda$core$UInt8 $returnValue95;
    $returnValue95 = ((panda$core$UInt8) { self.value });
    return $returnValue95;
}
panda$core$UInt16 panda$core$Char8$convert$R$panda$core$UInt16(panda$core$Char8 self) {
    panda$core$UInt16 $returnValue97;
    $returnValue97 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $returnValue97;
}
panda$core$UInt32 panda$core$Char8$convert$R$panda$core$UInt32(panda$core$Char8 self) {
    panda$core$UInt32 $returnValue99;
    $returnValue99 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $returnValue99;
}
panda$core$UInt64 panda$core$Char8$convert$R$panda$core$UInt64(panda$core$Char8 self) {
    panda$core$UInt64 $returnValue101;
    $returnValue101 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $returnValue101;
}
panda$core$String* panda$core$Char8$convert$R$panda$core$String(panda$core$Char8 self) {
    panda$core$Char8* data104;
    panda$core$String* $returnValue105;
    panda$core$String* $tmp106;
    panda$core$String* $tmp107;
    panda$core$Char8* data110;
    panda$core$Char8 $tmp111;
    panda$core$Char8 $tmp114;
    panda$core$String* $tmp117;
    panda$core$String* $tmp118;
    bool $tmp103 = self.value < 128;
    if (((panda$core$Bit) { $tmp103 }).value) {
    {
        data104 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        data104[((panda$core$Int64) { 0 }).value] = self;
        panda$core$String* $tmp108 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp108, data104, ((panda$core$Int64) { 1 }));
        $tmp107 = $tmp108;
        $tmp106 = $tmp107;
        $returnValue105 = $tmp106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp107));
        return $returnValue105;
    }
    }
    data110 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
    uint16_t $tmp112 = ((uint16_t) self.value) >> 6;
    uint16_t $tmp113 = $tmp112 | 192;
    panda$core$Char8$init$panda$core$UInt8(&$tmp111, ((panda$core$UInt8) { ((uint8_t) $tmp113) }));
    data110[((panda$core$Int64) { 0 }).value] = $tmp111;
    uint16_t $tmp115 = ((uint16_t) self.value) & 63;
    uint16_t $tmp116 = $tmp115 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp114, ((panda$core$UInt8) { ((uint8_t) $tmp116) }));
    data110[((panda$core$Int64) { 1 }).value] = $tmp114;
    panda$core$String* $tmp119 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp119, data110, ((panda$core$Int64) { 2 }));
    $tmp118 = $tmp119;
    $tmp117 = $tmp118;
    $returnValue105 = $tmp117;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp118));
    return $returnValue105;
}
void panda$core$Char8$cleanup(panda$core$Char8 self) {
}

