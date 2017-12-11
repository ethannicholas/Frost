#include "panda/core/Bit.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
panda$core$Bit$wrapper* wrap_panda$core$Bit(panda$core$Bit self) {
    panda$core$Bit$wrapper* result = (panda$core$Bit$wrapper*) malloc(13);
    result->cl = (panda$core$Class*) &panda$core$Bit$wrapperclass;
    result->value = self;
    return result;
}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Bit self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(self, ((panda$core$Bit$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim(panda$core$Bit self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(self, ((panda$core$Bit$wrapper*) p0)->value);
    return result;
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

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Bit$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Bit$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Bit$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Bit$_panda$collections$Key, { panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim} };

panda$core$Bit$class_type panda$core$Bit$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Bit$_panda$core$Equatable, { panda$core$Bit$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$shim, panda$core$Bit$hash$R$panda$core$Int64, panda$core$Bit$$NOT$R$panda$core$Bit, panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit, panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit, panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Bit$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Bit$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Bit$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Bit$wrapper_panda$collections$Key, { panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit$wrappershim, panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit$wrappershim} };

panda$core$Bit$wrapperclass_type panda$core$Bit$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Bit$wrapper_panda$core$Equatable, { panda$core$Bit$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };

void panda$core$Bit$init$builtin_bit(panda$core$Bit* self, bool p_value) {
    self->value = p_value;
}
panda$core$String* panda$core$Bit$convert$R$panda$core$String(panda$core$Bit self) {
    if (self.value) {
    {
        return &$s1;
    }
    }
    else {
    {
        return &$s2;
    }
    }
}
panda$core$Bit panda$core$Bit$$EQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp3 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp3 });
}
panda$core$Bit panda$core$Bit$$NEQ$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp4 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp4 });
}
panda$core$Int64 panda$core$Bit$hash$R$panda$core$Int64(panda$core$Bit self) {
    if (((panda$core$Bit) { self.value }).value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    return ((panda$core$Int64) { 0 });
}
panda$core$Bit panda$core$Bit$$NOT$R$panda$core$Bit(panda$core$Bit self) {
    return ((panda$core$Bit) { !self.value });
}
panda$core$Bit panda$core$Bit$$OR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp6 = self.value;
    if ($tmp6) goto $l7;
    $tmp6 = p_other.value;
    $l7:;
    return ((panda$core$Bit) { $tmp6 });
}
panda$core$Bit panda$core$Bit$$AND$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp8 = self.value;
    if (!$tmp8) goto $l9;
    $tmp8 = p_other.value;
    $l9:;
    return ((panda$core$Bit) { $tmp8 });
}
panda$core$Bit panda$core$Bit$$XOR$panda$core$Bit$R$panda$core$Bit(panda$core$Bit self, panda$core$Bit p_other) {
    bool $tmp10 = self.value ^ p_other.value;
    return ((panda$core$Bit) { $tmp10 });
}

