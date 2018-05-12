#include "panda/core/Char32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int64.h"
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
void panda$core$Char32$cleanup$wrappershim(panda$core$Char32$wrapper* self) {
    panda$core$Char32$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char32$_panda$core$Equatable, { panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Char32$class_type panda$core$Char32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$_panda$core$Comparable, { panda$core$Char32$convert$R$panda$core$String, panda$core$Char32$cleanup, panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$shim, panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char32$hash$R$panda$core$Int64, panda$core$Char32$convert$R$panda$core$Int8, panda$core$Char32$convert$R$panda$core$Int16, panda$core$Char32$convert$R$panda$core$Int32, panda$core$Char32$convert$R$panda$core$Int64, panda$core$Char32$convert$R$panda$core$UInt8, panda$core$Char32$convert$R$panda$core$UInt16, panda$core$Char32$convert$R$panda$core$UInt32, panda$core$Char32$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Char32$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char32$wrapper_panda$collections$Key, { panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Equatable, { panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit$wrappershim, panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$Char32$wrapperclass_type panda$core$Char32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char32$wrapper_panda$core$Comparable, { panda$core$Char32$convert$R$panda$core$String$wrappershim, panda$core$Char32$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x33\x32", 17, -1766463100090469223, NULL };

void panda$core$Char32$init$panda$core$Int32(panda$core$Char32* self, panda$core$Int32 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char32$$EQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    panda$core$Bit $finallyReturn2;
    bool $tmp4 = self.value == p_other.value;
    $finallyReturn2 = ((panda$core$Bit) { $tmp4 });
    return $finallyReturn2;
}
panda$core$Bit panda$core$Char32$$NEQ$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    panda$core$Bit $finallyReturn5;
    bool $tmp7 = self.value != p_other.value;
    $finallyReturn5 = ((panda$core$Bit) { $tmp7 });
    return $finallyReturn5;
}
panda$core$Bit panda$core$Char32$$LT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    panda$core$Bit $finallyReturn8;
    bool $tmp10 = self.value < p_other.value;
    $finallyReturn8 = ((panda$core$Bit) { $tmp10 });
    return $finallyReturn8;
}
panda$core$Bit panda$core$Char32$$GT$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    panda$core$Bit $finallyReturn11;
    bool $tmp13 = self.value > p_other.value;
    $finallyReturn11 = ((panda$core$Bit) { $tmp13 });
    return $finallyReturn11;
}
panda$core$Bit panda$core$Char32$$LE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    panda$core$Bit $finallyReturn14;
    bool $tmp16 = self.value <= p_other.value;
    $finallyReturn14 = ((panda$core$Bit) { $tmp16 });
    return $finallyReturn14;
}
panda$core$Bit panda$core$Char32$$GE$panda$core$Char32$R$panda$core$Bit(panda$core$Char32 self, panda$core$Char32 p_other) {
    panda$core$Bit $finallyReturn17;
    bool $tmp19 = self.value >= p_other.value;
    $finallyReturn17 = ((panda$core$Bit) { $tmp19 });
    return $finallyReturn17;
}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char32 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result24 = NULL;
    panda$core$MutableString* $tmp25;
    panda$core$MutableString* $tmp26;
    panda$core$Range$LTpanda$core$Int64$GT $tmp28;
    panda$core$String* $finallyReturn47;
    panda$core$String* $tmp49;
    panda$core$String* $tmp50;
    int $tmp23;
    {
        panda$core$MutableString* $tmp27 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
        panda$core$MutableString$init($tmp27);
        $tmp26 = $tmp27;
        $tmp25 = $tmp26;
        result24 = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp28, ((panda$core$Int64) { 0 }), p_count, ((panda$core$Bit) { false }));
        int64_t $tmp30 = $tmp28.min.value;
        panda$core$Int64 i29 = { $tmp30 };
        int64_t $tmp32 = $tmp28.max.value;
        bool $tmp33 = $tmp28.inclusive.value;
        if ($tmp33) goto $l40; else goto $l41;
        $l40:;
        if ($tmp30 <= $tmp32) goto $l34; else goto $l36;
        $l41:;
        if ($tmp30 < $tmp32) goto $l34; else goto $l36;
        $l34:;
        {
            panda$core$MutableString$append$panda$core$Char32(result24, self);
        }
        $l37:;
        int64_t $tmp43 = $tmp32 - i29.value;
        if ($tmp33) goto $l44; else goto $l45;
        $l44:;
        if ((uint64_t) $tmp43 >= 1) goto $l42; else goto $l36;
        $l45:;
        if ((uint64_t) $tmp43 > 1) goto $l42; else goto $l36;
        $l42:;
        i29.value += 1;
        goto $l34;
        $l36:;
        panda$core$String* $tmp51 = panda$core$MutableString$finish$R$panda$core$String(result24);
        $tmp50 = $tmp51;
        $tmp49 = $tmp50;
        $finallyReturn47 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp50));
        $tmp23 = 0;
        goto $l21;
        $l52:;
        return $finallyReturn47;
    }
    $l21:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result24));
    result24 = NULL;
    switch ($tmp23) {
        case 0: goto $l52;
    }
    $l54:;
}
panda$core$String* panda$core$Char32$$MUL$panda$core$Int64$panda$core$Char32$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char32 p_char) {
    panda$core$String* $finallyReturn54;
    panda$core$String* $tmp56;
    panda$core$String* $tmp57;
    panda$core$String* $tmp58 = panda$core$Char32$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    $tmp57 = $tmp58;
    $tmp56 = $tmp57;
    $finallyReturn54 = $tmp56;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp56));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp57));
    return $finallyReturn54;
}
panda$core$Int64 panda$core$Char32$hash$R$panda$core$Int64(panda$core$Char32 self) {
    panda$core$Int64 $finallyReturn59;
    panda$core$Int64 $tmp61 = panda$core$Char32$convert$R$panda$core$Int64(self);
    $finallyReturn59 = $tmp61;
    return $finallyReturn59;
}
panda$core$Int8 panda$core$Char32$convert$R$panda$core$Int8(panda$core$Char32 self) {
    panda$core$Int8 $finallyReturn62;
    $finallyReturn62 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $finallyReturn62;
}
panda$core$Int16 panda$core$Char32$convert$R$panda$core$Int16(panda$core$Char32 self) {
    panda$core$Int16 $finallyReturn64;
    $finallyReturn64 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $finallyReturn64;
}
panda$core$Int32 panda$core$Char32$convert$R$panda$core$Int32(panda$core$Char32 self) {
    panda$core$Int32 $finallyReturn66;
    $finallyReturn66 = ((panda$core$Int32) { self.value });
    return $finallyReturn66;
}
panda$core$Int64 panda$core$Char32$convert$R$panda$core$Int64(panda$core$Char32 self) {
    panda$core$Int64 $finallyReturn68;
    $finallyReturn68 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn68;
}
panda$core$UInt8 panda$core$Char32$convert$R$panda$core$UInt8(panda$core$Char32 self) {
    panda$core$UInt8 $finallyReturn70;
    $finallyReturn70 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $finallyReturn70;
}
panda$core$UInt16 panda$core$Char32$convert$R$panda$core$UInt16(panda$core$Char32 self) {
    panda$core$UInt16 $finallyReturn72;
    $finallyReturn72 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $finallyReturn72;
}
panda$core$UInt32 panda$core$Char32$convert$R$panda$core$UInt32(panda$core$Char32 self) {
    panda$core$UInt32 $finallyReturn74;
    $finallyReturn74 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $finallyReturn74;
}
panda$core$UInt64 panda$core$Char32$convert$R$panda$core$UInt64(panda$core$Char32 self) {
    panda$core$UInt64 $finallyReturn76;
    $finallyReturn76 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $finallyReturn76;
}
panda$core$String* panda$core$Char32$convert$R$panda$core$String(panda$core$Char32 self) {
    panda$core$Char8* data80;
    panda$core$Char8 $tmp81;
    panda$core$String* $finallyReturn81;
    panda$core$String* $tmp83;
    panda$core$String* $tmp84;
    panda$core$Char8* data88;
    panda$core$Char8 $tmp89;
    panda$core$Char8 $tmp92;
    panda$core$String* $finallyReturn94;
    panda$core$String* $tmp96;
    panda$core$String* $tmp97;
    panda$core$Char8* data101;
    panda$core$Char8 $tmp102;
    panda$core$Char8 $tmp105;
    panda$core$Char8 $tmp109;
    panda$core$String* $finallyReturn111;
    panda$core$String* $tmp113;
    panda$core$String* $tmp114;
    panda$core$Char8* data117;
    panda$core$Char8 $tmp118;
    panda$core$Char8 $tmp121;
    panda$core$Char8 $tmp125;
    panda$core$Char8 $tmp129;
    panda$core$String* $finallyReturn131;
    panda$core$String* $tmp133;
    panda$core$String* $tmp134;
    bool $tmp79 = self.value < 128;
    if (((panda$core$Bit) { $tmp79 }).value) {
    {
        data80 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$Char8$init$panda$core$UInt8(&$tmp81, ((panda$core$UInt8) { ((uint8_t) self.value) }));
        data80[((panda$core$Int64) { 0 }).value] = $tmp81;
        panda$core$String* $tmp85 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp85, data80, ((panda$core$Int64) { 1 }));
        $tmp84 = $tmp85;
        $tmp83 = $tmp84;
        $finallyReturn81 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
        return $finallyReturn81;
    }
    }
    bool $tmp87 = self.value < 2048;
    if (((panda$core$Bit) { $tmp87 }).value) {
    {
        data88 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
        int32_t $tmp90 = self.value >> 6;
        int32_t $tmp91 = $tmp90 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp89, ((panda$core$UInt8) { ((uint8_t) $tmp91) }));
        data88[((panda$core$Int64) { 0 }).value] = $tmp89;
        int32_t $tmp93 = self.value & 63;
        int32_t $tmp94 = $tmp93 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp92, ((panda$core$UInt8) { ((uint8_t) $tmp94) }));
        data88[((panda$core$Int64) { 1 }).value] = $tmp92;
        panda$core$String* $tmp98 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp98, data88, ((panda$core$Int64) { 2 }));
        $tmp97 = $tmp98;
        $tmp96 = $tmp97;
        $finallyReturn94 = $tmp96;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
        return $finallyReturn94;
    }
    }
    bool $tmp100 = self.value < 65536;
    if (((panda$core$Bit) { $tmp100 }).value) {
    {
        data101 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 3 }).value * 1));
        int32_t $tmp103 = self.value >> 12;
        int32_t $tmp104 = $tmp103 | 224;
        panda$core$Char8$init$panda$core$UInt8(&$tmp102, ((panda$core$UInt8) { ((uint8_t) $tmp104) }));
        data101[((panda$core$Int64) { 0 }).value] = $tmp102;
        int32_t $tmp106 = self.value >> 6;
        int32_t $tmp107 = $tmp106 & 63;
        int32_t $tmp108 = $tmp107 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp105, ((panda$core$UInt8) { ((uint8_t) $tmp108) }));
        data101[((panda$core$Int64) { 1 }).value] = $tmp105;
        int32_t $tmp110 = self.value & 63;
        int32_t $tmp111 = $tmp110 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp109, ((panda$core$UInt8) { ((uint8_t) $tmp111) }));
        data101[((panda$core$Int64) { 2 }).value] = $tmp109;
        panda$core$String* $tmp115 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp115, data101, ((panda$core$Int64) { 3 }));
        $tmp114 = $tmp115;
        $tmp113 = $tmp114;
        $finallyReturn111 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
        return $finallyReturn111;
    }
    }
    data117 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 4 }).value * 1));
    int32_t $tmp119 = self.value >> 18;
    int32_t $tmp120 = $tmp119 | 240;
    panda$core$Char8$init$panda$core$UInt8(&$tmp118, ((panda$core$UInt8) { ((uint8_t) $tmp120) }));
    data117[((panda$core$Int64) { 0 }).value] = $tmp118;
    int32_t $tmp122 = self.value >> 12;
    int32_t $tmp123 = $tmp122 & 63;
    int32_t $tmp124 = $tmp123 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp121, ((panda$core$UInt8) { ((uint8_t) $tmp124) }));
    data117[((panda$core$Int64) { 1 }).value] = $tmp121;
    int32_t $tmp126 = self.value >> 6;
    int32_t $tmp127 = $tmp126 & 63;
    int32_t $tmp128 = $tmp127 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp125, ((panda$core$UInt8) { ((uint8_t) $tmp128) }));
    data117[((panda$core$Int64) { 2 }).value] = $tmp125;
    int32_t $tmp130 = self.value & 63;
    int32_t $tmp131 = $tmp130 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp129, ((panda$core$UInt8) { ((uint8_t) $tmp131) }));
    data117[((panda$core$Int64) { 3 }).value] = $tmp129;
    panda$core$String* $tmp135 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp135, data117, ((panda$core$Int64) { 4 }));
    $tmp134 = $tmp135;
    $tmp133 = $tmp134;
    $finallyReturn131 = $tmp133;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp133));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp134));
    return $finallyReturn131;
}
void panda$core$Char32$cleanup(panda$core$Char32 self) {
}

