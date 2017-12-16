#include "panda/core/String/Index.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
panda$core$String$Index$wrapper* wrap_panda$core$String$Index(panda$core$String$Index self) {
    panda$core$String$Index$wrapper* result = (panda$core$String$Index$wrapper*) malloc(24);
    result->cl = (panda$core$Class*) &panda$core$String$Index$wrapperclass;
    result->value = self;
    return result;
}
panda$core$Bit panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit$shim(panda$core$String$Index self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit(self, ((panda$core$String$Index$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit$shim(panda$core$String$Index self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(self, ((panda$core$String$Index$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit$shim(panda$core$String$Index self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit(self, ((panda$core$String$Index$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$String$Index$$LE$panda$core$String$Index$R$panda$core$Bit$shim(panda$core$String$Index self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$Index$$LE$panda$core$String$Index$R$panda$core$Bit(self, ((panda$core$String$Index$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit$shim(panda$core$String$Index self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(self, ((panda$core$String$Index$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit$shim(panda$core$String$Index self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(self, ((panda$core$String$Index$wrapper*) p0)->value);
    return result;
}

panda$core$Bit panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit$wrappershim(panda$core$String$Index$wrapper* self, panda$core$Object* other) {
    return panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit(self->value, ((panda$core$String$Index$wrapper*) other)->value);
}
panda$core$Bit panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit$wrappershim(panda$core$String$Index$wrapper* self, panda$core$Object* other) {
    return panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(self->value, ((panda$core$String$Index$wrapper*) other)->value);
}
panda$core$Bit panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit$wrappershim(panda$core$String$Index$wrapper* self, panda$core$Object* other) {
    return panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit(self->value, ((panda$core$String$Index$wrapper*) other)->value);
}
panda$core$Bit panda$core$String$Index$$LE$panda$core$String$Index$R$panda$core$Bit$wrappershim(panda$core$String$Index$wrapper* self, panda$core$Object* other) {
    return panda$core$String$Index$$LE$panda$core$String$Index$R$panda$core$Bit(self->value, ((panda$core$String$Index$wrapper*) other)->value);
}
panda$core$Int64 panda$core$String$Index$hash$R$panda$core$Int64$wrappershim(panda$core$String$Index$wrapper* self) {
    return panda$core$String$Index$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit$wrappershim(panda$core$String$Index$wrapper* self, panda$core$Object* other) {
    return panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(self->value, ((panda$core$String$Index$wrapper*) other)->value);
}
panda$core$Bit panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit$wrappershim(panda$core$String$Index$wrapper* self, panda$core$Object* other) {
    return panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(self->value, ((panda$core$String$Index$wrapper*) other)->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$String$Index$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$LE$panda$core$String$Index$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$String$Index$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$Index$_panda$core$Comparable, { panda$core$String$Index$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$String$Index$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$Index$_panda$collections$Key, { panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit$shim} };

panda$core$String$Index$class_type panda$core$String$Index$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$String$Index$_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$LE$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit$shim, panda$core$String$Index$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$String$Index$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit$wrappershim, panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit$wrappershim, panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit$wrappershim, panda$core$String$Index$$LE$panda$core$String$Index$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$String$Index$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$String$Index$wrapper_panda$core$Comparable, { panda$core$String$Index$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$String$Index$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$String$Index$wrapper_panda$collections$Key, { panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit$wrappershim, panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit$wrappershim} };

panda$core$String$Index$wrapperclass_type panda$core$String$Index$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$String$Index$wrapper_panda$core$Equatable, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

void panda$core$String$Index$init$panda$core$Int64(panda$core$String$Index* self, panda$core$Int64 p_value) {
    self->value = p_value;
}
panda$core$Bit panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other) {
    panda$core$Bit $tmp1 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self.value, p_other.value);
    return $tmp1;
}
panda$core$Bit panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other) {
    panda$core$Bit $tmp2 = panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(self, p_other);
    panda$core$Bit $tmp3 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2);
    return $tmp3;
}
panda$core$Bit panda$core$String$Index$$LT$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other) {
    panda$core$Bit $tmp4 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self.value, p_other.value);
    return $tmp4;
}
panda$core$Bit panda$core$String$Index$$GT$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other) {
    panda$core$Bit $tmp5 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self.value, p_other.value);
    return $tmp5;
}
panda$core$Bit panda$core$String$Index$$LE$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other) {
    panda$core$Bit $tmp6 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(self.value, p_other.value);
    return $tmp6;
}
panda$core$Bit panda$core$String$Index$$GE$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other) {
    panda$core$Bit $tmp7 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self.value, p_other.value);
    return $tmp7;
}
panda$core$Int64 panda$core$String$Index$hash$R$panda$core$Int64(panda$core$String$Index self) {
    return self.value;
}

