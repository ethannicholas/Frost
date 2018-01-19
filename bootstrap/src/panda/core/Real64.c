#include "panda/core/Real64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real32.h"
panda$core$Bit panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Real64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit(self, ((panda$core$Real64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Real64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(self, ((panda$core$Real64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Real64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit(self, ((panda$core$Real64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Real64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit(self, ((panda$core$Real64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Real64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit(self, ((panda$core$Real64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$shim(panda$core$Real64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit(self, ((panda$core$Real64$wrapper*) p0)->value);
    return result;
}

panda$core$Bit panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$wrappershim(panda$core$Real64$wrapper* self, panda$core$Object* other) {
    return panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit(self->value, ((panda$core$Real64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$wrappershim(panda$core$Real64$wrapper* self, panda$core$Object* other) {
    return panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(self->value, ((panda$core$Real64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$wrappershim(panda$core$Real64$wrapper* self, panda$core$Object* other) {
    return panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit(self->value, ((panda$core$Real64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$wrappershim(panda$core$Real64$wrapper* self, panda$core$Object* other) {
    return panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit(self->value, ((panda$core$Real64$wrapper*) other)->value);
}
panda$core$Int64 panda$core$Real64$hash$R$panda$core$Int64$wrappershim(panda$core$Real64$wrapper* self) {
    return panda$core$Real64$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$wrappershim(panda$core$Real64$wrapper* self, panda$core$Object* other) {
    return panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit(self->value, ((panda$core$Real64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$wrappershim(panda$core$Real64$wrapper* self, panda$core$Object* other) {
    return panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit(self->value, ((panda$core$Real64$wrapper*) other)->value);
}
panda$core$String* panda$core$Real64$convert$R$panda$core$String$wrappershim(panda$core$Real64$wrapper* self) {
    return panda$core$Real64$convert$R$panda$core$String(self->value);
}
void panda$core$Real64$cleanup$wrappershim(panda$core$Real64$wrapper* self) {
    panda$core$Real64$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Real64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Real64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Real64$_panda$core$Comparable, { panda$core$Real64$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Real64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real64$_panda$collections$Key, { panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Real64$class_type panda$core$Real64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real64$_panda$core$Equatable, { panda$core$Real64$convert$R$panda$core$String, panda$core$Real64$cleanup, panda$core$Real64$$ADD$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$$SUB$R$panda$core$Real64, panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$min$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$max$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$hash$R$panda$core$Int64, panda$core$Real64$convert$R$panda$core$Int8, panda$core$Real64$convert$R$panda$core$Int16, panda$core$Real64$convert$R$panda$core$Int32, panda$core$Real64$convert$R$panda$core$Int64, panda$core$Real64$convert$R$panda$core$UInt8, panda$core$Real64$convert$R$panda$core$UInt16, panda$core$Real64$convert$R$panda$core$UInt32, panda$core$Real64$convert$R$panda$core$UInt64, panda$core$Real64$convert$R$panda$core$Real32} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Real64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, NULL, { panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$wrappershim, panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$wrappershim, panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$wrappershim, panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Real64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Real64$wrapper_panda$core$Comparable, { panda$core$Real64$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Real64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real64$wrapper_panda$collections$Key, { panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$wrappershim, panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$Real64$wrapperclass_type panda$core$Real64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real64$wrapper_panda$core$Equatable, { panda$core$Real64$convert$R$panda$core$String$wrappershim, panda$core$Real64$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x36\x34", 17, -1766462942751203812, NULL };

void panda$core$Real64$init$builtin_float64(panda$core$Real64* self, double p_value) {
    self->value = p_value;
}
void panda$core$Real64$init$panda$core$Int64(panda$core$Real64* self, panda$core$Int64 p_value) {
    self->value = ((double) p_value.value);
}
panda$core$Real64 panda$core$Real64$$ADD$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    double $tmp3 = self.value + p_other.value;
    return ((panda$core$Real64) { $tmp3 });
}
panda$core$Real64 panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    double $tmp4 = self.value - p_other.value;
    return ((panda$core$Real64) { $tmp4 });
}
panda$core$Real64 panda$core$Real64$$SUB$R$panda$core$Real64(panda$core$Real64 self) {
    return ((panda$core$Real64) { -self.value });
}
panda$core$Real64 panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    double $tmp6 = self.value * p_other.value;
    return ((panda$core$Real64) { $tmp6 });
}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    double $tmp7 = self.value / p_other.value;
    return ((panda$core$Real64) { $tmp7 });
}
panda$core$Bit panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    bool $tmp8 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp8 });
}
panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    bool $tmp9 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp9 });
}
panda$core$Bit panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    bool $tmp10 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp10 });
}
panda$core$Bit panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    bool $tmp11 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp11 });
}
panda$core$Bit panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    bool $tmp12 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp12 });
}
panda$core$Bit panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    bool $tmp13 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp13 });
}
panda$core$Real64 panda$core$Real64$min$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    bool $tmp14 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp14 }).value) {
    {
        return ((panda$core$Real64) { self.value });
    }
    }
    return ((panda$core$Real64) { p_other.value });
}
panda$core$Real64 panda$core$Real64$max$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    bool $tmp15 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp15 }).value) {
    {
        return ((panda$core$Real64) { self.value });
    }
    }
    return ((panda$core$Real64) { p_other.value });
}
panda$core$Int64 panda$core$Real64$hash$R$panda$core$Int64(panda$core$Real64 self) {
    panda$core$Int64 $tmp16;
    panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(&$tmp16, self);
    return $tmp16;
}
panda$core$Real64$nullable panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q(panda$core$String* p_s) {
    panda$core$Real64 $tmp17;
    panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp17, p_s);
    return ((panda$core$Real64$nullable) { $tmp17, true });
}
panda$core$Int8 panda$core$Real64$convert$R$panda$core$Int8(panda$core$Real64 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Real64$convert$R$panda$core$Int16(panda$core$Real64 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$Real64$convert$R$panda$core$Int32(panda$core$Real64 self) {
    return ((panda$core$Int32) { ((int32_t) self.value) });
}
panda$core$Int64 panda$core$Real64$convert$R$panda$core$Int64(panda$core$Real64 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8 panda$core$Real64$convert$R$panda$core$UInt8(panda$core$Real64 self) {
    return ((panda$core$UInt8) { ((uint8_t) self.value) });
}
panda$core$UInt16 panda$core$Real64$convert$R$panda$core$UInt16(panda$core$Real64 self) {
    return ((panda$core$UInt16) { ((uint16_t) self.value) });
}
panda$core$UInt32 panda$core$Real64$convert$R$panda$core$UInt32(panda$core$Real64 self) {
    return ((panda$core$UInt32) { ((uint32_t) self.value) });
}
panda$core$UInt64 panda$core$Real64$convert$R$panda$core$UInt64(panda$core$Real64 self) {
    return ((panda$core$UInt64) { ((uint64_t) self.value) });
}
panda$core$Real32 panda$core$Real64$convert$R$panda$core$Real32(panda$core$Real64 self) {
    return ((panda$core$Real32) { ((float) self.value) });
}
void panda$core$Real64$cleanup(panda$core$Real64 self) {
}

