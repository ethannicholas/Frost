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
    panda$core$Bit $finallyReturn2;
    bool $tmp4 = self.value == p_other.value;
    $finallyReturn2 = ((panda$core$Bit) { $tmp4 });
    return $finallyReturn2;
}
panda$core$Bit panda$core$Char8$$NEQ$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $finallyReturn5;
    bool $tmp7 = self.value != p_other.value;
    $finallyReturn5 = ((panda$core$Bit) { $tmp7 });
    return $finallyReturn5;
}
panda$core$Bit panda$core$Char8$$LT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $finallyReturn8;
    bool $tmp10 = self.value < p_other.value;
    $finallyReturn8 = ((panda$core$Bit) { $tmp10 });
    return $finallyReturn8;
}
panda$core$Bit panda$core$Char8$$GT$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $finallyReturn11;
    bool $tmp13 = self.value > p_other.value;
    $finallyReturn11 = ((panda$core$Bit) { $tmp13 });
    return $finallyReturn11;
}
panda$core$Bit panda$core$Char8$$LE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $finallyReturn14;
    bool $tmp16 = self.value <= p_other.value;
    $finallyReturn14 = ((panda$core$Bit) { $tmp16 });
    return $finallyReturn14;
}
panda$core$Bit panda$core$Char8$$GE$panda$core$Char8$R$panda$core$Bit(panda$core$Char8 self, panda$core$Char8 p_other) {
    panda$core$Bit $finallyReturn17;
    bool $tmp19 = self.value >= p_other.value;
    $finallyReturn17 = ((panda$core$Bit) { $tmp19 });
    return $finallyReturn17;
}
panda$core$Bit panda$core$Char8$isWhitespace$R$panda$core$Bit(panda$core$Char8 self) {
    panda$core$Char8 $match$52_921;
    panda$core$Char8 $tmp25;
    panda$core$Char8 $tmp28;
    panda$core$Char8 $tmp32;
    panda$core$Char8 $tmp36;
    panda$core$Bit $finallyReturn38;
    panda$core$Bit $finallyReturn40;
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
            $finallyReturn38 = ((panda$core$Bit) { true });
            return $finallyReturn38;
        }
        }
        else {
        {
            $finallyReturn40 = ((panda$core$Bit) { false });
            return $finallyReturn40;
        }
        }
    }
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char8 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result46;
    panda$core$MutableString* $tmp47;
    panda$core$MutableString* $tmp48;
    panda$core$Range$LTpanda$core$Int64$GT $tmp50;
    panda$core$String* $finallyReturn69;
    panda$core$String* $tmp71;
    panda$core$String* $tmp72;
    int $tmp45;
    {
        panda$core$MutableString* $tmp49 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp49);
        $tmp48 = $tmp49;
        $tmp47 = $tmp48;
        result46 = $tmp47;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp47));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp50, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
        int64_t $tmp52 = $tmp50.min.value;
        panda$core$Int64 i51 = { $tmp52 };
        int64_t $tmp54 = $tmp50.max.value;
        bool $tmp55 = $tmp50.inclusive.value;
        if ($tmp55) goto $l62; else goto $l63;
        $l62:;
        if ($tmp52 <= $tmp54) goto $l56; else goto $l58;
        $l63:;
        if ($tmp52 < $tmp54) goto $l56; else goto $l58;
        $l56:;
        {
            panda$core$MutableString$append$panda$core$Char8(result46, self);
        }
        $l59:;
        int64_t $tmp65 = $tmp54 - i51.value;
        if ($tmp55) goto $l66; else goto $l67;
        $l66:;
        if ((uint64_t) $tmp65 >= 1) goto $l64; else goto $l58;
        $l67:;
        if ((uint64_t) $tmp65 > 1) goto $l64; else goto $l58;
        $l64:;
        i51.value += 1;
        goto $l56;
        $l58:;
        panda$core$String* $tmp73 = panda$core$MutableString$finish$R$panda$core$String(result46);
        $tmp72 = $tmp73;
        $tmp71 = $tmp72;
        $finallyReturn69 = $tmp71;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
        $tmp45 = 0;
        goto $l43;
        $l74:;
        return $finallyReturn69;
    }
    $l43:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result46));
    switch ($tmp45) {
        case 0: goto $l74;
    }
    $l76:;
}
panda$core$String* panda$core$Char8$$MUL$panda$core$Int64$panda$core$Char8$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char8 p_char) {
    panda$core$String* $finallyReturn76;
    panda$core$String* $tmp78;
    panda$core$String* $tmp79;
    panda$core$String* $tmp80 = panda$core$Char8$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    $tmp79 = $tmp80;
    $tmp78 = $tmp79;
    $finallyReturn76 = $tmp78;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
    return $finallyReturn76;
}
panda$core$Int64 panda$core$Char8$hash$R$panda$core$Int64(panda$core$Char8 self) {
    panda$core$Int64 $finallyReturn81;
    panda$core$Int64 $tmp83 = panda$core$Char8$convert$R$panda$core$Int64(self);
    $finallyReturn81 = $tmp83;
    return $finallyReturn81;
}
panda$core$Int8 panda$core$Char8$convert$R$panda$core$Int8(panda$core$Char8 self) {
    panda$core$Int8 $finallyReturn84;
    $finallyReturn84 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $finallyReturn84;
}
panda$core$Int16 panda$core$Char8$convert$R$panda$core$Int16(panda$core$Char8 self) {
    panda$core$Int16 $finallyReturn86;
    int16_t $tmp88 = ((int16_t) self.value) & 255;
    $finallyReturn86 = ((panda$core$Int16) { $tmp88 });
    return $finallyReturn86;
}
panda$core$Int32 panda$core$Char8$convert$R$panda$core$Int32(panda$core$Char8 self) {
    panda$core$Int32 $finallyReturn89;
    int32_t $tmp91 = ((int32_t) self.value) & 255;
    $finallyReturn89 = ((panda$core$Int32) { $tmp91 });
    return $finallyReturn89;
}
panda$core$Int64 panda$core$Char8$convert$R$panda$core$Int64(panda$core$Char8 self) {
    panda$core$Int64 $finallyReturn92;
    int64_t $tmp94 = ((int64_t) self.value) & 255;
    $finallyReturn92 = ((panda$core$Int64) { $tmp94 });
    return $finallyReturn92;
}
panda$core$UInt8 panda$core$Char8$convert$R$panda$core$UInt8(panda$core$Char8 self) {
    panda$core$UInt8 $finallyReturn95;
    $finallyReturn95 = ((panda$core$UInt8) { self.value });
    return $finallyReturn95;
}
panda$core$UInt16 panda$core$Char8$convert$R$panda$core$UInt16(panda$core$Char8 self) {
    panda$core$UInt16 $finallyReturn97;
    $finallyReturn97 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $finallyReturn97;
}
panda$core$UInt32 panda$core$Char8$convert$R$panda$core$UInt32(panda$core$Char8 self) {
    panda$core$UInt32 $finallyReturn99;
    $finallyReturn99 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $finallyReturn99;
}
panda$core$UInt64 panda$core$Char8$convert$R$panda$core$UInt64(panda$core$Char8 self) {
    panda$core$UInt64 $finallyReturn101;
    $finallyReturn101 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $finallyReturn101;
}
panda$core$String* panda$core$Char8$convert$R$panda$core$String(panda$core$Char8 self) {
    panda$core$Char8* data105;
    panda$core$String* $finallyReturn105;
    panda$core$String* $tmp107;
    panda$core$String* $tmp108;
    panda$core$Char8* data111;
    panda$core$Char8 $tmp112;
    panda$core$Char8 $tmp115;
    panda$core$String* $finallyReturn117;
    panda$core$String* $tmp119;
    panda$core$String* $tmp120;
    bool $tmp104 = self.value < 128;
    if (((panda$core$Bit) { $tmp104 }).value) {
    {
        data105 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        data105[((panda$core$Int64) { 0 }).value] = self;
        panda$core$String* $tmp109 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp109, data105, ((panda$core$Int64) { 1 }));
        $tmp108 = $tmp109;
        $tmp107 = $tmp108;
        $finallyReturn105 = $tmp107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp108));
        return $finallyReturn105;
    }
    }
    data111 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
    uint16_t $tmp113 = ((uint16_t) self.value) >> 6;
    uint16_t $tmp114 = $tmp113 | 192;
    panda$core$Char8$init$panda$core$UInt8(&$tmp112, ((panda$core$UInt8) { ((uint8_t) $tmp114) }));
    data111[((panda$core$Int64) { 0 }).value] = $tmp112;
    uint16_t $tmp116 = ((uint16_t) self.value) & 63;
    uint16_t $tmp117 = $tmp116 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp115, ((panda$core$UInt8) { ((uint8_t) $tmp117) }));
    data111[((panda$core$Int64) { 1 }).value] = $tmp115;
    panda$core$String* $tmp121 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp121, data111, ((panda$core$Int64) { 2 }));
    $tmp120 = $tmp121;
    $tmp119 = $tmp120;
    $finallyReturn117 = $tmp119;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp119));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp120));
    return $finallyReturn117;
}
void panda$core$Char8$cleanup(panda$core$Char8 self) {
}

