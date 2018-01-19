#include "panda/core/Real32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int64.h"
#include "panda/core/Panda.h"
#include "panda/core/Real64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Real32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(self, ((panda$core$Real32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Real32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(self, ((panda$core$Real32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Real32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(self, ((panda$core$Real32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Real32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(self, ((panda$core$Real32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Real32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(self, ((panda$core$Real32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Real32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(self, ((panda$core$Real32$wrapper*) p0)->value);
    return result;
}

panda$core$Int64 panda$core$Real32$hash$R$panda$core$Int64$wrappershim(panda$core$Real32$wrapper* self) {
    return panda$core$Real32$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$wrappershim(panda$core$Real32$wrapper* self, panda$core$Object* other) {
    return panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(self->value, ((panda$core$Real32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$wrappershim(panda$core$Real32$wrapper* self, panda$core$Object* other) {
    return panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(self->value, ((panda$core$Real32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$wrappershim(panda$core$Real32$wrapper* self, panda$core$Object* other) {
    return panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(self->value, ((panda$core$Real32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$wrappershim(panda$core$Real32$wrapper* self, panda$core$Object* other) {
    return panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(self->value, ((panda$core$Real32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$wrappershim(panda$core$Real32$wrapper* self, panda$core$Object* other) {
    return panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(self->value, ((panda$core$Real32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$wrappershim(panda$core$Real32$wrapper* self, panda$core$Object* other) {
    return panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(self->value, ((panda$core$Real32$wrapper*) other)->value);
}
panda$core$String* panda$core$Real32$convert$R$panda$core$String$wrappershim(panda$core$Real32$wrapper* self) {
    return panda$core$Real32$convert$R$panda$core$String(self->value);
}
void panda$core$Real32$cleanup$wrappershim(panda$core$Real32$wrapper* self) {
    panda$core$Real32$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Real32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Real32$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Real32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real32$_panda$collections$Key, { panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Real32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Real32$_panda$core$Equatable, { panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Real32$class_type panda$core$Real32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real32$_panda$core$Comparable, { panda$core$Real32$convert$R$panda$core$String, panda$core$Real32$cleanup, panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$$SUB$R$panda$core$Real32, panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$hash$R$panda$core$Int64, panda$core$Real32$convert$R$panda$core$Int8, panda$core$Real32$convert$R$panda$core$Int16, panda$core$Real32$convert$R$panda$core$Int32, panda$core$Real32$convert$R$panda$core$Int64, panda$core$Real32$convert$R$panda$core$UInt8, panda$core$Real32$convert$R$panda$core$UInt16, panda$core$Real32$convert$R$panda$core$UInt32, panda$core$Real32$convert$R$panda$core$UInt64, panda$core$Real32$convert$R$panda$core$Real64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Real32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Real32$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Real32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real32$wrapper_panda$collections$Key, { panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$wrappershim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Real32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Real32$wrapper_panda$core$Equatable, { panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$wrappershim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$wrappershim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$wrappershim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$Real32$wrapperclass_type panda$core$Real32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real32$wrapper_panda$core$Comparable, { panda$core$Real32$convert$R$panda$core$String$wrappershim, panda$core$Real32$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };

void panda$core$Real32$init$builtin_float32(panda$core$Real32* self, float p_value) {
    self->value = p_value;
}
panda$core$Real32 panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    float $tmp3 = self.value + p_other.value;
    return ((panda$core$Real32) { $tmp3 });
}
panda$core$Real32 panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    float $tmp4 = self.value - p_other.value;
    return ((panda$core$Real32) { $tmp4 });
}
panda$core$Real32 panda$core$Real32$$SUB$R$panda$core$Real32(panda$core$Real32 self) {
    return ((panda$core$Real32) { -self.value });
}
panda$core$Real32 panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    float $tmp6 = self.value * p_other.value;
    return ((panda$core$Real32) { $tmp6 });
}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    float $tmp7 = self.value / p_other.value;
    return ((panda$core$Real32) { $tmp7 });
}
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    bool $tmp8 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp8 });
}
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    bool $tmp9 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp9 });
}
panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    bool $tmp10 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp10 });
}
panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    bool $tmp11 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp11 });
}
panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    bool $tmp12 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp12 });
}
panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    bool $tmp13 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp13 });
}
panda$core$Real32 panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    bool $tmp14 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp14 }).value) {
    {
        return ((panda$core$Real32) { self.value });
    }
    }
    return ((panda$core$Real32) { p_other.value });
}
panda$core$Real32 panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    bool $tmp15 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp15 }).value) {
    {
        return ((panda$core$Real32) { self.value });
    }
    }
    return ((panda$core$Real32) { p_other.value });
}
panda$core$Int64 panda$core$Real32$hash$R$panda$core$Int64(panda$core$Real32 self) {
    panda$core$Int64 $tmp17;
    panda$core$Real64 $tmp16 = panda$core$Real32$convert$R$panda$core$Real64(self);
    panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(&$tmp17, $tmp16);
    return $tmp17;
}
panda$core$Real32$nullable panda$core$Real32$parse$panda$core$String$R$panda$core$Real32$Q(panda$core$String* p_s) {
    panda$core$Real64$nullable result18;
    panda$core$Real64$nullable $tmp19 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q(p_s);
    result18 = $tmp19;
    if (((panda$core$Bit) { !result18.nonnull }).value) {
    {
        return ((panda$core$Real32$nullable) { .nonnull = false });
    }
    }
    panda$core$Real32 $tmp20 = panda$core$Real64$convert$R$panda$core$Real32(((panda$core$Real64) result18.value));
    return ((panda$core$Real32$nullable) { $tmp20, true });
}
panda$core$Int8 panda$core$Real32$convert$R$panda$core$Int8(panda$core$Real32 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Real32$convert$R$panda$core$Int16(panda$core$Real32 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$Real32$convert$R$panda$core$Int32(panda$core$Real32 self) {
    return ((panda$core$Int32) { ((int32_t) self.value) });
}
panda$core$Int64 panda$core$Real32$convert$R$panda$core$Int64(panda$core$Real32 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8 panda$core$Real32$convert$R$panda$core$UInt8(panda$core$Real32 self) {
    return ((panda$core$UInt8) { ((uint8_t) self.value) });
}
panda$core$UInt16 panda$core$Real32$convert$R$panda$core$UInt16(panda$core$Real32 self) {
    return ((panda$core$UInt16) { ((uint16_t) self.value) });
}
panda$core$UInt32 panda$core$Real32$convert$R$panda$core$UInt32(panda$core$Real32 self) {
    return ((panda$core$UInt32) { ((uint32_t) self.value) });
}
panda$core$UInt64 panda$core$Real32$convert$R$panda$core$UInt64(panda$core$Real32 self) {
    return ((panda$core$UInt64) { ((uint64_t) self.value) });
}
panda$core$Real64 panda$core$Real32$convert$R$panda$core$Real64(panda$core$Real32 self) {
    return ((panda$core$Real64) { ((double) self.value) });
}
panda$core$String* panda$core$Real32$convert$R$panda$core$String(panda$core$Real32 self) {
    panda$core$Real64 $tmp21 = panda$core$Real32$convert$R$panda$core$Real64(self);
    panda$core$String* $tmp22 = panda$core$Real64$convert$R$panda$core$String($tmp21);
    return $tmp22;
}
void panda$core$Real32$cleanup(panda$core$Real32 self) {
}

