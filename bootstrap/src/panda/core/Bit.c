#include "panda/core/Bit.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Object.h"
#include "panda/collections/Array.h"
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Bit self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self, ((panda$core$Bit$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Bit self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(self, ((panda$core$Bit$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$Bit$wrapper* self, panda$core$String* fmt) {
    return panda$core$Bit$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64$wrappershim(panda$core$Bit$wrapper* self) {
    return panda$core$Bit$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$wrappershim(panda$core$Bit$wrapper* self, panda$core$Equatable* other) {
    return panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self->value, ((panda$core$Bit$wrapper*) other)->value);
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$wrappershim(panda$core$Bit$wrapper* self, panda$core$Equatable* other) {
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
static panda$core$String $s39 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7c", 1, 225, NULL };

void panda$core$Bit$init$builtin_bit(panda$core$Bit* self, bool p_value) {
    self->value = p_value;
}
panda$core$String* panda$core$Bit$convert$R$panda$core$String(panda$core$Bit self) {
    panda$core$String* $returnValue3;
    panda$core$String* $tmp4;
    panda$core$String* $tmp7;
    if (self.value) {
    {
        $tmp4 = &$s5;
        $returnValue3 = $tmp4;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp4));
        return $returnValue3;
    }
    }
    else {
    {
        $tmp7 = &$s8;
        $returnValue3 = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        return $returnValue3;
    }
    }
}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue10;
    bool $tmp11 = self.value == p_other.value;
    $returnValue10 = ((panda$core$Bit) { $tmp11 });
    return $returnValue10;
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue13;
    bool $tmp14 = self.value != p_other.value;
    $returnValue13 = ((panda$core$Bit) { $tmp14 });
    return $returnValue13;
}
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64(panda$core$Bit self) {
    panda$core$Int64 $returnValue16;
    if (((panda$core$Bit) { self.value }).value) {
    {
        $returnValue16 = ((panda$core$Int64) { 1 });
        return $returnValue16;
    }
    }
    $returnValue16 = ((panda$core$Int64) { 0 });
    return $returnValue16;
}
panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit(panda$core$Bit self) {
    panda$core$Bit $returnValue19;
    $returnValue19 = ((panda$core$Bit) { !self.value });
    return $returnValue19;
}
panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue22;
    bool $tmp23 = self.value;
    if ($tmp23) goto $l24;
    $tmp23 = p_other.value;
    $l24:;
    $returnValue22 = ((panda$core$Bit) { $tmp23 });
    return $returnValue22;
}
panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue26;
    bool $tmp27 = self.value;
    if (!$tmp27) goto $l28;
    $tmp27 = p_other.value;
    $l28:;
    $returnValue26 = ((panda$core$Bit) { $tmp27 });
    return $returnValue26;
}
panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    panda$core$Bit $returnValue30;
    bool $tmp31 = self.value ^ p_other.value;
    $returnValue30 = ((panda$core$Bit) { $tmp31 });
    return $returnValue30;
}
panda$core$String* panda$core$Bit$format$panda$core$String$R$panda$core$String(panda$core$Bit self, panda$core$String* p_fmt) {
    panda$collections$Array* s36 = NULL;
    panda$collections$Array* $tmp37;
    panda$collections$Array* $tmp38;
    panda$core$String* $returnValue43;
    panda$core$String* $tmp44;
    panda$core$Object* $tmp45;
    panda$core$String* $tmp49;
    panda$core$Object* $tmp50;
    int $tmp35;
    {
        panda$collections$Array* $tmp40 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(p_fmt, &$s39);
        $tmp38 = $tmp40;
        $tmp37 = $tmp38;
        s36 = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp38));
        panda$core$Int64 $tmp41 = panda$collections$Array$get_count$R$panda$core$Int64(s36);
        panda$core$Bit $tmp42 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp41, ((panda$core$Int64) { 2 }));
        PANDA_ASSERT($tmp42.value);
        if (self.value) {
        {
            panda$core$Object* $tmp46 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(s36, ((panda$core$Int64) { 0 }));
            $tmp45 = $tmp46;
            $tmp44 = ((panda$core$String*) $tmp45);
            $returnValue43 = $tmp44;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
            panda$core$Panda$unref$panda$core$Object($tmp45);
            $tmp35 = 0;
            goto $l33;
            $l47:;
            return $returnValue43;
        }
        }
        panda$core$Object* $tmp51 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(s36, ((panda$core$Int64) { 1 }));
        $tmp50 = $tmp51;
        $tmp49 = ((panda$core$String*) $tmp50);
        $returnValue43 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object($tmp50);
        $tmp35 = 1;
        goto $l33;
        $l52:;
        return $returnValue43;
    }
    $l33:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s36));
    s36 = NULL;
    switch ($tmp35) {
        case 1: goto $l52;
        case 0: goto $l47;
    }
    $l54:;
}
void panda$core$Bit$cleanup(panda$core$Bit self) {
}






