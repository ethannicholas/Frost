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
static panda$core$String $s8 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s28 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };

void panda$core$Bit$init$builtin_bit(panda$core$Bit* self, bool p_value) {
    self->value = p_value;
}
panda$core$String* panda$core$Bit$convert$R$panda$core$String(panda$core$Bit self) {
    if (self.value) {
    {
        panda$core$String* $tmp4 = &$s5;
        panda$core$String* $tmp3 = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        return $tmp3;
    }
    }
    else {
    {
        panda$core$String* $tmp7 = &$s8;
        panda$core$String* $tmp6 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        return $tmp6;
    }
    }
}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp10 = self.value == p_other.value;
    panda$core$Bit $tmp9 = ((panda$core$Bit) { $tmp10 });
    return $tmp9;
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp12 = self.value != p_other.value;
    panda$core$Bit $tmp11 = ((panda$core$Bit) { $tmp12 });
    return $tmp11;
}
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64(panda$core$Bit self) {
    if (((panda$core$Bit) { self.value }).value) {
    {
        panda$core$Int64 $tmp13 = ((panda$core$Int64) { 1 });
        return $tmp13;
    }
    }
    panda$core$Int64 $tmp14 = ((panda$core$Int64) { 0 });
    return $tmp14;
}
panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit(panda$core$Bit self) {
    panda$core$Bit $tmp15 = ((panda$core$Bit) { !self.value });
    return $tmp15;
}
panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp18 = self.value;
    if ($tmp18) goto $l19;
    $tmp18 = p_other.value;
    $l19:;
    panda$core$Bit $tmp17 = ((panda$core$Bit) { $tmp18 });
    return $tmp17;
}
panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp21 = self.value;
    if (!$tmp21) goto $l22;
    $tmp21 = p_other.value;
    $l22:;
    panda$core$Bit $tmp20 = ((panda$core$Bit) { $tmp21 });
    return $tmp20;
}
panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp24 = self.value ^ p_other.value;
    panda$core$Bit $tmp23 = ((panda$core$Bit) { $tmp24 });
    return $tmp23;
}
panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String(panda$core$Bit self, panda$core$String* p_fmt) {
    panda$collections$Array* s25;
    panda$core$String* tmp132;
    panda$core$String* tmp237;
    panda$collections$Array* $tmp29 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(p_fmt, &$s28);
    panda$collections$Array* $tmp27 = $tmp29;
    panda$collections$Array* $tmp26 = $tmp27;
    s25 = $tmp26;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp26));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp27));
    panda$core$Int64 $tmp30 = panda$collections$Array$get_count$R$panda$core$Int64(s25);
    panda$core$Bit $tmp31 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp30, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp31.value);
    if (self.value) {
    {
        {
            panda$core$Object* $tmp35 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(s25, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp34 = $tmp35;
            panda$core$String* $tmp33 = ((panda$core$String*) $tmp34);
            tmp132 = $tmp33;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp33));
            panda$core$Panda$unref$panda$core$Object($tmp34);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s25));
            panda$core$String* $tmp36 = tmp132;
            return $tmp36;
        }
    }
    }
    {
        panda$core$Object* $tmp40 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(s25, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp39 = $tmp40;
        panda$core$String* $tmp38 = ((panda$core$String*) $tmp39);
        tmp237 = $tmp38;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Panda$unref$panda$core$Object($tmp39);
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s25));
        panda$core$String* $tmp41 = tmp237;
        return $tmp41;
    }
}
void panda$core$Bit$cleanup(panda$core$Bit self) {
}

