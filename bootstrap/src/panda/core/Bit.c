#include "panda/core/Bit.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Bit self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self, ((panda$core$Bit$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Bit self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(self, ((panda$core$Bit$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$Bit$wrapper* self, panda$core$String* fmt) {
    return panda$core$Bit$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64$wrappershim(panda$core$Bit$wrapper* self) {
    return panda$core$Bit$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$wrappershim(panda$core$Bit$wrapper* self, panda$core$Object* other) {
    return panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->value, ((panda$core$Bit$wrapper*) other)->value);
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$wrappershim(panda$core$Bit$wrapper* self, panda$core$Object* other) {
    return panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(self->value, ((panda$core$Bit$wrapper*) other)->value);
}
panda$core$String* panda$core$Bit$convert$R$panda$core$String$wrappershim(panda$core$Bit$wrapper* self) {
    return panda$core$Bit$convert$R$panda$core$String(self->value);
}
void panda$core$Bit$cleanup$wrappershim(panda$core$Bit$wrapper* self) {
    panda$core$Bit$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Bit$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Bit$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Bit$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Bit$_panda$core$Formattable, { panda$core$Bit$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Bit$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Bit$_panda$collections$Key, { panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Bit$class_type panda$core$Bit$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Bit$_panda$core$Equatable, { panda$core$Bit$convert$R$panda$core$String, panda$core$Bit$cleanup, panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$hash$R$panda$core$Int64, panda$core$Bit$$NOT$R$panda$core$Bit, panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit, panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit, panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit, panda$core$Bit$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Bit$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Bit$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Bit$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Bit$wrapper_panda$core$Formattable, { panda$core$Bit$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Bit$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Bit$wrapper_panda$collections$Key, { panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$wrappershim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$Bit$wrapperclass_type panda$core$Bit$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Bit$wrapper_panda$core$Equatable, { panda$core$Bit$convert$R$panda$core$String$wrappershim, panda$core$Bit$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s5 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s9 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };

void panda$core$Bit$init$builtin_bit(panda$core$Bit* self, bool p_value) {
    self->value = p_value;
}
panda$core$String* panda$core$Bit$convert$R$panda$core$String(panda$core$Bit self) {
    panda$core$String* $finallyReturn2;
    panda$core$String* $tmp4;
    panda$core$String* $finallyReturn6;
    panda$core$String* $tmp8;
    if (self.value) {
    {
        $tmp4 = &$s5;
        $finallyReturn2 = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        return $finallyReturn2;
    }
    }
    else {
    {
        $tmp8 = &$s9;
        $finallyReturn6 = $tmp8;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp8));
        return $finallyReturn6;
    }
    }
}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $finallyReturn10;
    bool $tmp12 = self.value == p_other.value;
    $finallyReturn10 = ((panda$core$Bit) { $tmp12 });
    return $finallyReturn10;
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $finallyReturn13;
    bool $tmp15 = self.value != p_other.value;
    $finallyReturn13 = ((panda$core$Bit) { $tmp15 });
    return $finallyReturn13;
}
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64(panda$core$Bit self) {
    panda$core$Int64 $finallyReturn16;
    panda$core$Int64 $finallyReturn18;
    if (((panda$core$Bit) { self.value }).value) {
    {
        $finallyReturn16 = ((panda$core$Int64) { 1 });
        return $finallyReturn16;
    }
    }
    $finallyReturn18 = ((panda$core$Int64) { 0 });
    return $finallyReturn18;
}
panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit(panda$core$Bit self) {
    panda$core$Bit $finallyReturn20;
    $finallyReturn20 = ((panda$core$Bit) { !self.value });
    return $finallyReturn20;
}
panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $finallyReturn23;
    bool $tmp25 = self.value;
    if ($tmp25) goto $l26;
    $tmp25 = p_other.value;
    $l26:;
    $finallyReturn23 = ((panda$core$Bit) { $tmp25 });
    return $finallyReturn23;
}
panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $finallyReturn27;
    bool $tmp29 = self.value;
    if (!$tmp29) goto $l30;
    $tmp29 = p_other.value;
    $l30:;
    $finallyReturn27 = ((panda$core$Bit) { $tmp29 });
    return $finallyReturn27;
}
panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $finallyReturn31;
    bool $tmp33 = self.value ^ p_other.value;
    $finallyReturn31 = ((panda$core$Bit) { $tmp33 });
    return $finallyReturn31;
}
panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String(panda$core$Bit self, panda$core$String* p_fmt) {
    panda$collections$Array* s38;
    panda$collections$Array* $tmp39;
    panda$collections$Array* $tmp40;
    panda$core$String* $finallyReturn44;
    panda$core$String* $tmp46;
    panda$core$Object* $tmp47;
    panda$core$String* $finallyReturn50;
    panda$core$String* $tmp52;
    panda$core$Object* $tmp53;
    int $tmp37;
    {
        panda$collections$Array* $tmp42 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(p_fmt, &$s41);
        $tmp40 = $tmp42;
        $tmp39 = $tmp40;
        s38 = $tmp39;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp39));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Int64 $tmp43 = panda$collections$Array$get_count$R$panda$core$Int64(s38);
        panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp43, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp44.value);
        if (self.value) {
        {
            panda$core$Object* $tmp48 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(s38, ((panda$core$Int64) { 0 }));
            $tmp47 = $tmp48;
            $tmp46 = ((panda$core$String*) $tmp47);
            $finallyReturn44 = $tmp46;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
            panda$core$Panda$unref$panda$core$Object($tmp47);
            $tmp37 = 0;
            goto $l35;
            $l49:;
            return $finallyReturn44;
        }
        }
        panda$core$Object* $tmp54 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(s38, ((panda$core$Int64) { 1 }));
        $tmp53 = $tmp54;
        $tmp52 = ((panda$core$String*) $tmp53);
        $finallyReturn50 = $tmp52;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp52));
        panda$core$Panda$unref$panda$core$Object($tmp53);
        $tmp37 = 1;
        goto $l35;
        $l55:;
        return $finallyReturn50;
    }
    $l35:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s38));
    switch ($tmp37) {
        case 1: goto $l55;
        case 0: goto $l49;
    }
    $l57:;
}
void panda$core$Bit$cleanup(panda$core$Bit self) {
}

