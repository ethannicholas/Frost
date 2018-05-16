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
panda$core$Real64$class_type panda$core$Real64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real64$_panda$core$Equatable, { panda$core$Real64$convert$R$panda$core$String, panda$core$Real64$cleanup, panda$core$Real64$$ADD$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$$SUB$R$panda$core$Real64, panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit$shim, panda$core$Real64$min$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$max$panda$core$Real64$R$panda$core$Real64, panda$core$Real64$abs$R$panda$core$Real64, panda$core$Real64$sqrt$R$panda$core$Real64, panda$core$Real64$hash$R$panda$core$Int64, panda$core$Real64$convert$R$panda$core$Int8, panda$core$Real64$convert$R$panda$core$Int16, panda$core$Real64$convert$R$panda$core$Int32, panda$core$Real64$convert$R$panda$core$Int64, panda$core$Real64$convert$R$panda$core$UInt8, panda$core$Real64$convert$R$panda$core$UInt16, panda$core$Real64$convert$R$panda$core$UInt32, panda$core$Real64$convert$R$panda$core$UInt64, panda$core$Real64$convert$R$panda$core$Real32} };

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
    panda$core$Real64 $finallyReturn2;
    double $tmp4 = self.value + p_other.value;
    $finallyReturn2 = ((panda$core$Real64) { $tmp4 });
    return $finallyReturn2;
}
panda$core$Real64 panda$core$Real64$$SUB$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Real64 $finallyReturn5;
    double $tmp7 = self.value - p_other.value;
    $finallyReturn5 = ((panda$core$Real64) { $tmp7 });
    return $finallyReturn5;
}
panda$core$Real64 panda$core$Real64$$SUB$R$panda$core$Real64(panda$core$Real64 self) {
    panda$core$Real64 $finallyReturn8;
    $finallyReturn8 = ((panda$core$Real64) { -self.value });
    return $finallyReturn8;
}
panda$core$Real64 panda$core$Real64$$MUL$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Real64 $finallyReturn11;
    double $tmp13 = self.value * p_other.value;
    $finallyReturn11 = ((panda$core$Real64) { $tmp13 });
    return $finallyReturn11;
}
panda$core$Real64 panda$core$Real64$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Real64 $finallyReturn14;
    double $tmp16 = self.value / p_other.value;
    $finallyReturn14 = ((panda$core$Real64) { $tmp16 });
    return $finallyReturn14;
}
panda$core$Bit panda$core$Real64$$EQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Bit $finallyReturn17;
    bool $tmp19 = self.value == p_other.value;
    $finallyReturn17 = ((panda$core$Bit) { $tmp19 });
    return $finallyReturn17;
}
panda$core$Bit panda$core$Real64$$NEQ$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Bit $finallyReturn20;
    bool $tmp22 = self.value != p_other.value;
    $finallyReturn20 = ((panda$core$Bit) { $tmp22 });
    return $finallyReturn20;
}
panda$core$Bit panda$core$Real64$$LT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Bit $finallyReturn23;
    bool $tmp25 = self.value < p_other.value;
    $finallyReturn23 = ((panda$core$Bit) { $tmp25 });
    return $finallyReturn23;
}
panda$core$Bit panda$core$Real64$$GT$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Bit $finallyReturn26;
    bool $tmp28 = self.value > p_other.value;
    $finallyReturn26 = ((panda$core$Bit) { $tmp28 });
    return $finallyReturn26;
}
panda$core$Bit panda$core$Real64$$GE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Bit $finallyReturn29;
    bool $tmp31 = self.value >= p_other.value;
    $finallyReturn29 = ((panda$core$Bit) { $tmp31 });
    return $finallyReturn29;
}
panda$core$Bit panda$core$Real64$$LE$panda$core$Real64$R$panda$core$Bit(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Bit $finallyReturn32;
    bool $tmp34 = self.value <= p_other.value;
    $finallyReturn32 = ((panda$core$Bit) { $tmp34 });
    return $finallyReturn32;
}
panda$core$Real64 panda$core$Real64$min$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Real64 $finallyReturn36;
    panda$core$Real64 $finallyReturn38;
    bool $tmp36 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp36 }).value) {
    {
        $finallyReturn36 = ((panda$core$Real64) { self.value });
        return $finallyReturn36;
    }
    }
    $finallyReturn38 = ((panda$core$Real64) { p_other.value });
    return $finallyReturn38;
}
panda$core$Real64 panda$core$Real64$max$panda$core$Real64$R$panda$core$Real64(panda$core$Real64 self, panda$core$Real64 p_other) {
    panda$core$Real64 $finallyReturn41;
    panda$core$Real64 $finallyReturn43;
    bool $tmp41 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp41 }).value) {
    {
        $finallyReturn41 = ((panda$core$Real64) { self.value });
        return $finallyReturn41;
    }
    }
    $finallyReturn43 = ((panda$core$Real64) { p_other.value });
    return $finallyReturn43;
}
panda$core$Real64 panda$core$Real64$abs$R$panda$core$Real64(panda$core$Real64 self) {
    panda$core$Real64 $finallyReturn46;
    panda$core$Real64 $finallyReturn49;
    bool $tmp46 = self.value < 0.0;
    if (((panda$core$Bit) { $tmp46 }).value) {
    {
        $finallyReturn46 = ((panda$core$Real64) { -self.value });
        return $finallyReturn46;
    }
    }
    $finallyReturn49 = self;
    return $finallyReturn49;
}
panda$core$Real64 panda$core$Real64$sqrt$R$panda$core$Real64(panda$core$Real64 self) {
    panda$core$Real64 $finallyReturn51;
    double $tmp53 = panda$core$Panda$sqrt$builtin_float64$R$builtin_float64(self.value);
    $finallyReturn51 = ((panda$core$Real64) { $tmp53 });
    return $finallyReturn51;
}
panda$core$Int64 panda$core$Real64$hash$R$panda$core$Int64(panda$core$Real64 self) {
    panda$core$Int64 $finallyReturn54;
    panda$core$Int64 $tmp56;
    panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(&$tmp56, self);
    $finallyReturn54 = $tmp56;
    return $finallyReturn54;
}
panda$core$Real64$nullable panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q(panda$core$String* p_s) {
    panda$core$Real64$nullable $finallyReturn57;
    panda$core$Real64 $tmp59;
    panda$core$Panda$toReal64$panda$core$String$R$panda$core$Real64(&$tmp59, p_s);
    $finallyReturn57 = ((panda$core$Real64$nullable) { $tmp59, true });
    return $finallyReturn57;
}
panda$core$Int8 panda$core$Real64$convert$R$panda$core$Int8(panda$core$Real64 self) {
    panda$core$Int8 $finallyReturn60;
    $finallyReturn60 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $finallyReturn60;
}
panda$core$Int16 panda$core$Real64$convert$R$panda$core$Int16(panda$core$Real64 self) {
    panda$core$Int16 $finallyReturn62;
    $finallyReturn62 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $finallyReturn62;
}
panda$core$Int32 panda$core$Real64$convert$R$panda$core$Int32(panda$core$Real64 self) {
    panda$core$Int32 $finallyReturn64;
    $finallyReturn64 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $finallyReturn64;
}
panda$core$Int64 panda$core$Real64$convert$R$panda$core$Int64(panda$core$Real64 self) {
    panda$core$Int64 $finallyReturn66;
    $finallyReturn66 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn66;
}
panda$core$UInt8 panda$core$Real64$convert$R$panda$core$UInt8(panda$core$Real64 self) {
    panda$core$UInt8 $finallyReturn68;
    $finallyReturn68 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $finallyReturn68;
}
panda$core$UInt16 panda$core$Real64$convert$R$panda$core$UInt16(panda$core$Real64 self) {
    panda$core$UInt16 $finallyReturn70;
    $finallyReturn70 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $finallyReturn70;
}
panda$core$UInt32 panda$core$Real64$convert$R$panda$core$UInt32(panda$core$Real64 self) {
    panda$core$UInt32 $finallyReturn72;
    $finallyReturn72 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $finallyReturn72;
}
panda$core$UInt64 panda$core$Real64$convert$R$panda$core$UInt64(panda$core$Real64 self) {
    panda$core$UInt64 $finallyReturn74;
    $finallyReturn74 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $finallyReturn74;
}
panda$core$Real32 panda$core$Real64$convert$R$panda$core$Real32(panda$core$Real64 self) {
    panda$core$Real32 $finallyReturn76;
    $finallyReturn76 = ((panda$core$Real32) { ((float) self.value) });
    return $finallyReturn76;
}
void panda$core$Real64$cleanup(panda$core$Real64 self) {
}






