#include "panda/core/Char16.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt16.h"
#include "panda/core/MutableString.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim(panda$core$Char16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(self, ((panda$core$Char16$wrapper*) p0)->value);
    return result;
}

panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$wrappershim(panda$core$Char16$wrapper* self, panda$core$Object* other) {
    return panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(self->value, ((panda$core$Char16$wrapper*) other)->value);
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
void panda$core$Char16$cleanup$wrappershim(panda$core$Char16$wrapper* self) {
    panda$core$Char16$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Char16$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Char16$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char16$_panda$core$Comparable, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Char16$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Char16$_panda$core$Equatable, { panda$core$Char16$hash$R$panda$core$Int64} };

static panda$core$String $s1;
panda$core$Char16$class_type panda$core$Char16$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char16$_panda$collections$Key, { panda$core$Char16$convert$R$panda$core$String, panda$core$Char16$cleanup, panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$shim, panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String, panda$core$Char16$hash$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$Int8, panda$core$Char16$convert$R$panda$core$Int16, panda$core$Char16$convert$R$panda$core$Int32, panda$core$Char16$convert$R$panda$core$Int64, panda$core$Char16$convert$R$panda$core$UInt8, panda$core$Char16$convert$R$panda$core$UInt16, panda$core$Char16$convert$R$panda$core$UInt32, panda$core$Char16$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Char16$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Char16$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Char16$wrapper_panda$core$Comparable, { panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit$wrappershim, panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Char16$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Char16$wrapper_panda$core$Equatable, { panda$core$Char16$hash$R$panda$core$Int64$wrappershim} };

static panda$core$String $s2;
panda$core$Char16$wrapperclass_type panda$core$Char16$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Char16$wrapper_panda$collections$Key, { panda$core$Char16$convert$R$panda$core$String$wrappershim, panda$core$Char16$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72\x31\x36", 17, -1766463100090469421, NULL };

void panda$core$Char16$init$panda$core$UInt16(panda$core$Char16* self, panda$core$UInt16 p_value) {
    self->value = p_value.value;
}
panda$core$Bit panda$core$Char16$$EQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    panda$core$Bit $finallyReturn2;
    bool $tmp4 = self.value == p_other.value;
    $finallyReturn2 = ((panda$core$Bit) { $tmp4 });
    return $finallyReturn2;
}
panda$core$Bit panda$core$Char16$$NEQ$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    panda$core$Bit $finallyReturn5;
    bool $tmp7 = self.value != p_other.value;
    $finallyReturn5 = ((panda$core$Bit) { $tmp7 });
    return $finallyReturn5;
}
panda$core$Bit panda$core$Char16$$LT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    panda$core$Bit $finallyReturn8;
    bool $tmp10 = self.value < p_other.value;
    $finallyReturn8 = ((panda$core$Bit) { $tmp10 });
    return $finallyReturn8;
}
panda$core$Bit panda$core$Char16$$GT$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    panda$core$Bit $finallyReturn11;
    bool $tmp13 = self.value > p_other.value;
    $finallyReturn11 = ((panda$core$Bit) { $tmp13 });
    return $finallyReturn11;
}
panda$core$Bit panda$core$Char16$$LE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    panda$core$Bit $finallyReturn14;
    bool $tmp16 = self.value <= p_other.value;
    $finallyReturn14 = ((panda$core$Bit) { $tmp16 });
    return $finallyReturn14;
}
panda$core$Bit panda$core$Char16$$GE$panda$core$Char16$R$panda$core$Bit(panda$core$Char16 self, panda$core$Char16 p_other) {
    panda$core$Bit $finallyReturn17;
    bool $tmp19 = self.value >= p_other.value;
    $finallyReturn17 = ((panda$core$Bit) { $tmp19 });
    return $finallyReturn17;
}
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(panda$core$Char16 self, panda$core$Int64 p_count) {
    panda$core$MutableString* result24;
    panda$core$MutableString* $tmp25;
    panda$core$MutableString* $tmp26;
    panda$core$Range$LTpanda$core$Int64$GT $tmp28;
    panda$core$Object* $tmp42;
    panda$core$String* $finallyReturn49;
    panda$core$String* $tmp51;
    panda$core$String* $tmp52;
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
            panda$core$Char16$wrapper* $tmp43;
            $tmp43 = (panda$core$Char16$wrapper*) pandaObjectAlloc(14, (panda$core$Class*) &panda$core$Char16$wrapperclass);
            $tmp43->value = self;
            $tmp42 = ((panda$core$Object*) $tmp43);
            panda$core$MutableString$append$panda$core$Object(result24, $tmp42);
            panda$core$Panda$unref$panda$core$Object($tmp42);
        }
        $l37:;
        int64_t $tmp45 = $tmp32 - i29.value;
        if ($tmp33) goto $l46; else goto $l47;
        $l46:;
        if ((uint64_t) $tmp45 >= 1) goto $l44; else goto $l36;
        $l47:;
        if ((uint64_t) $tmp45 > 1) goto $l44; else goto $l36;
        $l44:;
        i29.value += 1;
        goto $l34;
        $l36:;
        panda$core$String* $tmp53 = panda$core$MutableString$finish$R$panda$core$String(result24);
        $tmp52 = $tmp53;
        $tmp51 = $tmp52;
        $finallyReturn49 = $tmp51;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
        $tmp23 = 0;
        goto $l21;
        $l54:;
        return $finallyReturn49;
    }
    $l21:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result24));
    switch ($tmp23) {
        case 0: goto $l54;
    }
    $l56:;
}
panda$core$String* panda$core$Char16$$MUL$panda$core$Int64$panda$core$Char16$R$panda$core$String(panda$core$Int64 p_count, panda$core$Char16 p_char) {
    panda$core$String* $finallyReturn56;
    panda$core$String* $tmp58;
    panda$core$String* $tmp59;
    panda$core$String* $tmp60 = panda$core$Char16$$MUL$panda$core$Int64$R$panda$core$String(p_char, p_count);
    $tmp59 = $tmp60;
    $tmp58 = $tmp59;
    $finallyReturn56 = $tmp58;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
    return $finallyReturn56;
}
panda$core$Int64 panda$core$Char16$hash$R$panda$core$Int64(panda$core$Char16 self) {
    panda$core$Int64 $finallyReturn61;
    panda$core$Int64 $tmp63 = panda$core$Char16$convert$R$panda$core$Int64(self);
    $finallyReturn61 = $tmp63;
    return $finallyReturn61;
}
panda$core$Int8 panda$core$Char16$convert$R$panda$core$Int8(panda$core$Char16 self) {
    panda$core$Int8 $finallyReturn64;
    $finallyReturn64 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $finallyReturn64;
}
panda$core$Int16 panda$core$Char16$convert$R$panda$core$Int16(panda$core$Char16 self) {
    panda$core$Int16 $finallyReturn66;
    $finallyReturn66 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $finallyReturn66;
}
panda$core$Int32 panda$core$Char16$convert$R$panda$core$Int32(panda$core$Char16 self) {
    panda$core$Int32 $finallyReturn68;
    $finallyReturn68 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $finallyReturn68;
}
panda$core$Int64 panda$core$Char16$convert$R$panda$core$Int64(panda$core$Char16 self) {
    panda$core$Int64 $finallyReturn70;
    $finallyReturn70 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn70;
}
panda$core$UInt8 panda$core$Char16$convert$R$panda$core$UInt8(panda$core$Char16 self) {
    panda$core$UInt8 $finallyReturn72;
    $finallyReturn72 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $finallyReturn72;
}
panda$core$UInt16 panda$core$Char16$convert$R$panda$core$UInt16(panda$core$Char16 self) {
    panda$core$UInt16 $finallyReturn74;
    $finallyReturn74 = ((panda$core$UInt16) { self.value });
    return $finallyReturn74;
}
panda$core$UInt32 panda$core$Char16$convert$R$panda$core$UInt32(panda$core$Char16 self) {
    panda$core$UInt32 $finallyReturn76;
    $finallyReturn76 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $finallyReturn76;
}
panda$core$UInt64 panda$core$Char16$convert$R$panda$core$UInt64(panda$core$Char16 self) {
    panda$core$UInt64 $finallyReturn78;
    $finallyReturn78 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $finallyReturn78;
}
panda$core$String* panda$core$Char16$convert$R$panda$core$String(panda$core$Char16 self) {
    panda$core$Char8* data82;
    panda$core$Char8 $tmp83;
    panda$core$String* $finallyReturn84;
    panda$core$String* $tmp86;
    panda$core$String* $tmp87;
    panda$core$Char8* data91;
    panda$core$Char8 $tmp92;
    panda$core$Char8 $tmp95;
    panda$core$String* $finallyReturn97;
    panda$core$String* $tmp99;
    panda$core$String* $tmp100;
    panda$core$Char8* data103;
    panda$core$Char8 $tmp104;
    panda$core$Char8 $tmp107;
    panda$core$Char8 $tmp111;
    panda$core$String* $finallyReturn113;
    panda$core$String* $tmp115;
    panda$core$String* $tmp116;
    bool $tmp81 = self.value < 128;
    if (((panda$core$Bit) { $tmp81 }).value) {
    {
        data82 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 1 }).value * 1));
        panda$core$UInt8 $tmp84 = panda$core$Char16$convert$R$panda$core$UInt8(self);
        panda$core$Char8$init$panda$core$UInt8(&$tmp83, $tmp84);
        data82[((panda$core$Int64) { 0 }).value] = $tmp83;
        panda$core$String* $tmp88 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp88, data82, ((panda$core$Int64) { 1 }));
        $tmp87 = $tmp88;
        $tmp86 = $tmp87;
        $finallyReturn84 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp87));
        return $finallyReturn84;
    }
    }
    bool $tmp90 = self.value < 2048;
    if (((panda$core$Bit) { $tmp90 }).value) {
    {
        data91 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 2 }).value * 1));
        uint16_t $tmp93 = self.value >> 6;
        uint16_t $tmp94 = $tmp93 | 192;
        panda$core$Char8$init$panda$core$UInt8(&$tmp92, ((panda$core$UInt8) { ((uint8_t) $tmp94) }));
        data91[((panda$core$Int64) { 0 }).value] = $tmp92;
        uint16_t $tmp96 = self.value & 63;
        uint16_t $tmp97 = $tmp96 | 128;
        panda$core$Char8$init$panda$core$UInt8(&$tmp95, ((panda$core$UInt8) { ((uint8_t) $tmp97) }));
        data91[((panda$core$Int64) { 1 }).value] = $tmp95;
        panda$core$String* $tmp101 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
        panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp101, data91, ((panda$core$Int64) { 2 }));
        $tmp100 = $tmp101;
        $tmp99 = $tmp100;
        $finallyReturn97 = $tmp99;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp99));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp100));
        return $finallyReturn97;
    }
    }
    data103 = ((panda$core$Char8*) pandaZAlloc(((panda$core$Int64) { 3 }).value * 1));
    uint16_t $tmp105 = self.value >> 12;
    uint16_t $tmp106 = $tmp105 | 224;
    panda$core$Char8$init$panda$core$UInt8(&$tmp104, ((panda$core$UInt8) { ((uint8_t) $tmp106) }));
    data103[((panda$core$Int64) { 0 }).value] = $tmp104;
    uint16_t $tmp108 = self.value >> 6;
    uint16_t $tmp109 = $tmp108 & 63;
    uint16_t $tmp110 = $tmp109 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp107, ((panda$core$UInt8) { ((uint8_t) $tmp110) }));
    data103[((panda$core$Int64) { 1 }).value] = $tmp107;
    uint16_t $tmp112 = self.value & 63;
    uint16_t $tmp113 = $tmp112 | 128;
    panda$core$Char8$init$panda$core$UInt8(&$tmp111, ((panda$core$UInt8) { ((uint8_t) $tmp113) }));
    data103[((panda$core$Int64) { 2 }).value] = $tmp111;
    panda$core$String* $tmp117 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp117, data103, ((panda$core$Int64) { 3 }));
    $tmp116 = $tmp117;
    $tmp115 = $tmp116;
    $finallyReturn113 = $tmp115;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp116));
    return $finallyReturn113;
}
void panda$core$Char16$cleanup(panda$core$Char16 self) {
}

