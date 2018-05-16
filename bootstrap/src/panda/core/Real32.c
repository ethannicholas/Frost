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
panda$core$Real32$class_type panda$core$Real32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real32$_panda$core$Comparable, { panda$core$Real32$convert$R$panda$core$String, panda$core$Real32$cleanup, panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$$SUB$R$panda$core$Real32, panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32, panda$core$Real32$abs$R$panda$core$Real32, panda$core$Real32$sqrt$R$panda$core$Real32, panda$core$Real32$hash$R$panda$core$Int64, panda$core$Real32$convert$R$panda$core$Int8, panda$core$Real32$convert$R$panda$core$Int16, panda$core$Real32$convert$R$panda$core$Int32, panda$core$Real32$convert$R$panda$core$Int64, panda$core$Real32$convert$R$panda$core$UInt8, panda$core$Real32$convert$R$panda$core$UInt16, panda$core$Real32$convert$R$panda$core$UInt32, panda$core$Real32$convert$R$panda$core$UInt64, panda$core$Real32$convert$R$panda$core$Real64} };

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
    panda$core$Real32 $finallyReturn2;
    float $tmp4 = self.value + p_other.value;
    $finallyReturn2 = ((panda$core$Real32) { $tmp4 });
    return $finallyReturn2;
}
panda$core$Real32 panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Real32 $finallyReturn5;
    float $tmp7 = self.value - p_other.value;
    $finallyReturn5 = ((panda$core$Real32) { $tmp7 });
    return $finallyReturn5;
}
panda$core$Real32 panda$core$Real32$$SUB$R$panda$core$Real32(panda$core$Real32 self) {
    panda$core$Real32 $finallyReturn8;
    $finallyReturn8 = ((panda$core$Real32) { -self.value });
    return $finallyReturn8;
}
panda$core$Real32 panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Real32 $finallyReturn11;
    float $tmp13 = self.value * p_other.value;
    $finallyReturn11 = ((panda$core$Real32) { $tmp13 });
    return $finallyReturn11;
}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Real32 $finallyReturn14;
    float $tmp16 = self.value / p_other.value;
    $finallyReturn14 = ((panda$core$Real32) { $tmp16 });
    return $finallyReturn14;
}
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $finallyReturn17;
    bool $tmp19 = self.value == p_other.value;
    $finallyReturn17 = ((panda$core$Bit) { $tmp19 });
    return $finallyReturn17;
}
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $finallyReturn20;
    bool $tmp22 = self.value != p_other.value;
    $finallyReturn20 = ((panda$core$Bit) { $tmp22 });
    return $finallyReturn20;
}
panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $finallyReturn23;
    bool $tmp25 = self.value < p_other.value;
    $finallyReturn23 = ((panda$core$Bit) { $tmp25 });
    return $finallyReturn23;
}
panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $finallyReturn26;
    bool $tmp28 = self.value > p_other.value;
    $finallyReturn26 = ((panda$core$Bit) { $tmp28 });
    return $finallyReturn26;
}
panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $finallyReturn29;
    bool $tmp31 = self.value >= p_other.value;
    $finallyReturn29 = ((panda$core$Bit) { $tmp31 });
    return $finallyReturn29;
}
panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $finallyReturn32;
    bool $tmp34 = self.value <= p_other.value;
    $finallyReturn32 = ((panda$core$Bit) { $tmp34 });
    return $finallyReturn32;
}
panda$core$Real32 panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Real32 $finallyReturn36;
    panda$core$Real32 $finallyReturn38;
    bool $tmp36 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp36 }).value) {
    {
        $finallyReturn36 = ((panda$core$Real32) { self.value });
        return $finallyReturn36;
    }
    }
    $finallyReturn38 = ((panda$core$Real32) { p_other.value });
    return $finallyReturn38;
}
panda$core$Real32 panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Real32 $finallyReturn41;
    panda$core$Real32 $finallyReturn43;
    bool $tmp41 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp41 }).value) {
    {
        $finallyReturn41 = ((panda$core$Real32) { self.value });
        return $finallyReturn41;
    }
    }
    $finallyReturn43 = ((panda$core$Real32) { p_other.value });
    return $finallyReturn43;
}
panda$core$Real32 panda$core$Real32$abs$R$panda$core$Real32(panda$core$Real32 self) {
    panda$core$Real32 $finallyReturn46;
    panda$core$Real32 $finallyReturn49;
    bool $tmp46 = self.value < 0.0;
    if (((panda$core$Bit) { $tmp46 }).value) {
    {
        $finallyReturn46 = ((panda$core$Real32) { -self.value });
        return $finallyReturn46;
    }
    }
    $finallyReturn49 = self;
    return $finallyReturn49;
}
panda$core$Real32 panda$core$Real32$sqrt$R$panda$core$Real32(panda$core$Real32 self) {
    panda$core$Real32 $finallyReturn51;
    float $tmp53 = panda$core$Panda$sqrt$builtin_float32$R$builtin_float32(self.value);
    $finallyReturn51 = ((panda$core$Real32) { $tmp53 });
    return $finallyReturn51;
}
panda$core$Int64 panda$core$Real32$hash$R$panda$core$Int64(panda$core$Real32 self) {
    panda$core$Int64 $finallyReturn54;
    panda$core$Int64 $tmp57;
    panda$core$Real64 $tmp56 = panda$core$Real32$convert$R$panda$core$Real64(self);
    panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(&$tmp57, $tmp56);
    $finallyReturn54 = $tmp57;
    return $finallyReturn54;
}
panda$core$Real32$nullable panda$core$Real32$parse$panda$core$String$R$panda$core$Real32$Q(panda$core$String* p_s) {
    panda$core$Real64$nullable result59;
    panda$core$Real32$nullable $finallyReturn60;
    panda$core$Real32$nullable $finallyReturn62;
    panda$core$Real64$nullable $tmp60 = panda$core$Real64$parse$panda$core$String$R$panda$core$Real64$Q(p_s);
    result59 = $tmp60;
    if (((panda$core$Bit) { !result59.nonnull }).value) {
    {
        $finallyReturn60 = ((panda$core$Real32$nullable) { .nonnull = false });
        return $finallyReturn60;
    }
    }
    panda$core$Real32 $tmp64 = panda$core$Real64$convert$R$panda$core$Real32(((panda$core$Real64) result59.value));
    $finallyReturn62 = ((panda$core$Real32$nullable) { $tmp64, true });
    return $finallyReturn62;
}
panda$core$Int8 panda$core$Real32$convert$R$panda$core$Int8(panda$core$Real32 self) {
    panda$core$Int8 $finallyReturn65;
    $finallyReturn65 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $finallyReturn65;
}
panda$core$Int16 panda$core$Real32$convert$R$panda$core$Int16(panda$core$Real32 self) {
    panda$core$Int16 $finallyReturn67;
    $finallyReturn67 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $finallyReturn67;
}
panda$core$Int32 panda$core$Real32$convert$R$panda$core$Int32(panda$core$Real32 self) {
    panda$core$Int32 $finallyReturn69;
    $finallyReturn69 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $finallyReturn69;
}
panda$core$Int64 panda$core$Real32$convert$R$panda$core$Int64(panda$core$Real32 self) {
    panda$core$Int64 $finallyReturn71;
    $finallyReturn71 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn71;
}
panda$core$UInt8 panda$core$Real32$convert$R$panda$core$UInt8(panda$core$Real32 self) {
    panda$core$UInt8 $finallyReturn73;
    $finallyReturn73 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $finallyReturn73;
}
panda$core$UInt16 panda$core$Real32$convert$R$panda$core$UInt16(panda$core$Real32 self) {
    panda$core$UInt16 $finallyReturn75;
    $finallyReturn75 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $finallyReturn75;
}
panda$core$UInt32 panda$core$Real32$convert$R$panda$core$UInt32(panda$core$Real32 self) {
    panda$core$UInt32 $finallyReturn77;
    $finallyReturn77 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $finallyReturn77;
}
panda$core$UInt64 panda$core$Real32$convert$R$panda$core$UInt64(panda$core$Real32 self) {
    panda$core$UInt64 $finallyReturn79;
    $finallyReturn79 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $finallyReturn79;
}
panda$core$Real64 panda$core$Real32$convert$R$panda$core$Real64(panda$core$Real32 self) {
    panda$core$Real64 $finallyReturn81;
    $finallyReturn81 = ((panda$core$Real64) { ((double) self.value) });
    return $finallyReturn81;
}
panda$core$String* panda$core$Real32$convert$R$panda$core$String(panda$core$Real32 self) {
    panda$core$String* $finallyReturn83;
    panda$core$String* $tmp85;
    panda$core$String* $tmp86;
    panda$core$Real64 $tmp87 = panda$core$Real32$convert$R$panda$core$Real64(self);
    panda$core$String* $tmp88 = panda$core$Real64$convert$R$panda$core$String($tmp87);
    $tmp86 = $tmp88;
    $tmp85 = $tmp86;
    $finallyReturn83 = $tmp85;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp85));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp86));
    return $finallyReturn83;
}
void panda$core$Real32$cleanup(panda$core$Real32 self) {
}






