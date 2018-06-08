#include "panda/core/Real32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
__attribute__((weak)) panda$core$Int64 panda$core$Real32$hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Real32$hash$R$panda$core$Int64(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(((panda$core$Real32$wrapper*) p0)->value, ((panda$core$Real32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Real32$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Real32$convert$R$panda$core$String(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$SUB$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Real32$$SUB$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$abs$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Real32$abs$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Real32$sqrt$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Real32$sqrt$R$panda$core$Real32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Real32$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Real32$convert$R$panda$core$Int8(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Real32$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Real32$convert$R$panda$core$Int16(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Real32$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Real32$convert$R$panda$core$Int32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Real32$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Real32$convert$R$panda$core$Int64(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$Real32$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$Real32$convert$R$panda$core$UInt8(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$Real32$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$Real32$convert$R$panda$core$UInt16(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Real32$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$Real32$convert$R$panda$core$UInt32(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Real32$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$Real32$convert$R$panda$core$UInt64(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Real32$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$Real32$convert$R$panda$core$Real64(((panda$core$Real32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Real32$cleanup$shim(panda$core$Object* p0) {
    panda$core$Real32$cleanup(((panda$core$Real32$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Real32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Real32$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Real32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real32$_panda$collections$Key, { panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Real32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Real32$_panda$core$Equatable, { panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Real32$class_type panda$core$Real32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real32$_panda$core$Comparable, { panda$core$Real32$convert$R$panda$core$String$shim, panda$core$Value$cleanup, panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$$SUB$R$panda$core$Real32$shim, panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Real32$abs$R$panda$core$Real32$shim, panda$core$Real32$sqrt$R$panda$core$Real32$shim, panda$core$Real32$hash$R$panda$core$Int64$shim, panda$core$Real32$convert$R$panda$core$Int8$shim, panda$core$Real32$convert$R$panda$core$Int16$shim, panda$core$Real32$convert$R$panda$core$Int32$shim, panda$core$Real32$convert$R$panda$core$Int64$shim, panda$core$Real32$convert$R$panda$core$UInt8$shim, panda$core$Real32$convert$R$panda$core$UInt16$shim, panda$core$Real32$convert$R$panda$core$UInt32$shim, panda$core$Real32$convert$R$panda$core$UInt64$shim, panda$core$Real32$convert$R$panda$core$Real64$shim, panda$core$Real32$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Real32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Real32$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Real32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Real32$wrapper_panda$collections$Key, { panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Real32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Real32$wrapper_panda$core$Equatable, { panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit$shim, panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit$shim} };

static panda$core$String $s2;
panda$core$Real32$wrapperclass_type panda$core$Real32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Real32$wrapper_panda$core$Comparable, { panda$core$Real32$convert$R$panda$core$String$shim, panda$core$Value$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x65\x61\x6c\x33\x32", 17, -1766462942751204117, NULL };

void panda$core$Real32$init$builtin_float32(panda$core$Real32* self, float p_value) {
    self->value = p_value;
}
panda$core$Real32 panda$core$Real32$$ADD$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Real32 $returnValue3;
    panda$core$Real32 $tmp4;
    float $tmp5 = self.value + p_other.value;
    panda$core$Real32$init$builtin_float32(&$tmp4, $tmp5);
    $returnValue3 = $tmp4;
    return $returnValue3;
}
panda$core$Real32 panda$core$Real32$$SUB$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Real32 $returnValue7;
    panda$core$Real32 $tmp8;
    float $tmp9 = self.value - p_other.value;
    panda$core$Real32$init$builtin_float32(&$tmp8, $tmp9);
    $returnValue7 = $tmp8;
    return $returnValue7;
}
panda$core$Real32 panda$core$Real32$$SUB$R$panda$core$Real32(panda$core$Real32 self) {
    panda$core$Real32 $returnValue11;
    panda$core$Real32 $tmp12;
    panda$core$Real32$init$builtin_float32(&$tmp12, -self.value);
    $returnValue11 = $tmp12;
    return $returnValue11;
}
panda$core$Real32 panda$core$Real32$$MUL$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Real32 $returnValue15;
    panda$core$Real32 $tmp16;
    float $tmp17 = self.value * p_other.value;
    panda$core$Real32$init$builtin_float32(&$tmp16, $tmp17);
    $returnValue15 = $tmp16;
    return $returnValue15;
}
panda$core$Real32 panda$core$Real32$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Real32 $returnValue19;
    panda$core$Real32 $tmp20;
    float $tmp21 = self.value / p_other.value;
    panda$core$Real32$init$builtin_float32(&$tmp20, $tmp21);
    $returnValue19 = $tmp20;
    return $returnValue19;
}
panda$core$Bit panda$core$Real32$$EQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $returnValue23;
    panda$core$Bit $tmp24;
    bool $tmp25 = self.value == p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp24, $tmp25);
    $returnValue23 = $tmp24;
    return $returnValue23;
}
panda$core$Bit panda$core$Real32$$NEQ$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $returnValue27;
    panda$core$Bit $tmp28;
    bool $tmp29 = self.value != p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp28, $tmp29);
    $returnValue27 = $tmp28;
    return $returnValue27;
}
panda$core$Bit panda$core$Real32$$LT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $returnValue31;
    panda$core$Bit $tmp32;
    bool $tmp33 = self.value < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp32, $tmp33);
    $returnValue31 = $tmp32;
    return $returnValue31;
}
panda$core$Bit panda$core$Real32$$GT$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $returnValue35;
    panda$core$Bit $tmp36;
    bool $tmp37 = self.value > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp36, $tmp37);
    $returnValue35 = $tmp36;
    return $returnValue35;
}
panda$core$Bit panda$core$Real32$$GE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $returnValue39;
    panda$core$Bit $tmp40;
    bool $tmp41 = self.value >= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp40, $tmp41);
    $returnValue39 = $tmp40;
    return $returnValue39;
}
panda$core$Bit panda$core$Real32$$LE$panda$core$Real32$R$panda$core$Bit(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $returnValue43;
    panda$core$Bit $tmp44;
    bool $tmp45 = self.value <= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp44, $tmp45);
    $returnValue43 = $tmp44;
    return $returnValue43;
}
panda$core$Real32 panda$core$Real32$min$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $tmp47;
    panda$core$Real32 $returnValue49;
    panda$core$Real32 $tmp50;
    panda$core$Real32 $tmp52;
    bool $tmp48 = self.value < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp47, $tmp48);
    if ($tmp47.value) {
    {
        panda$core$Real32$init$builtin_float32(&$tmp50, self.value);
        $returnValue49 = $tmp50;
        return $returnValue49;
    }
    }
    panda$core$Real32$init$builtin_float32(&$tmp52, p_other.value);
    $returnValue49 = $tmp52;
    return $returnValue49;
}
panda$core$Real32 panda$core$Real32$max$panda$core$Real32$R$panda$core$Real32(panda$core$Real32 self, panda$core$Real32 p_other) {
    panda$core$Bit $tmp54;
    panda$core$Real32 $returnValue56;
    panda$core$Real32 $tmp57;
    panda$core$Real32 $tmp59;
    bool $tmp55 = self.value > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp54, $tmp55);
    if ($tmp54.value) {
    {
        panda$core$Real32$init$builtin_float32(&$tmp57, self.value);
        $returnValue56 = $tmp57;
        return $returnValue56;
    }
    }
    panda$core$Real32$init$builtin_float32(&$tmp59, p_other.value);
    $returnValue56 = $tmp59;
    return $returnValue56;
}
panda$core$Real32 panda$core$Real32$abs$R$panda$core$Real32(panda$core$Real32 self) {
    panda$core$Bit $tmp61;
    panda$core$Real32 $returnValue63;
    panda$core$Real32 $tmp64;
    bool $tmp62 = self.value < 0.0;
    panda$core$Bit$init$builtin_bit(&$tmp61, $tmp62);
    if ($tmp61.value) {
    {
        panda$core$Real32$init$builtin_float32(&$tmp64, -self.value);
        $returnValue63 = $tmp64;
        return $returnValue63;
    }
    }
    $returnValue63 = self;
    return $returnValue63;
}
panda$core$Real32 panda$core$Real32$sqrt$R$panda$core$Real32(panda$core$Real32 self) {
    panda$core$Real32 $returnValue68;
    panda$core$Real32 $tmp69;
    float $tmp70 = panda$core$Panda$sqrt$builtin_float32$R$builtin_float32(self.value);
    panda$core$Real32$init$builtin_float32(&$tmp69, $tmp70);
    $returnValue68 = $tmp69;
    return $returnValue68;
}
panda$core$Int64 panda$core$Real32$hash$R$panda$core$Int64(panda$core$Real32 self) {
    panda$core$Int64 $returnValue72;
    panda$core$Int64 $tmp74;
    panda$core$Real64 $tmp73 = panda$core$Real32$convert$R$panda$core$Real64(self);
    panda$core$Panda$floatToIntBits$panda$core$Real64$R$panda$core$Int64(&$tmp74, $tmp73);
    $returnValue72 = $tmp74;
    return $returnValue72;
}
panda$core$Int8 panda$core$Real32$convert$R$panda$core$Int8(panda$core$Real32 self) {
    panda$core$Int8 $returnValue76;
    panda$core$Int8 $tmp77;
    panda$core$Int8$init$builtin_int8(&$tmp77, ((int8_t) self.value));
    $returnValue76 = $tmp77;
    return $returnValue76;
}
panda$core$Int16 panda$core$Real32$convert$R$panda$core$Int16(panda$core$Real32 self) {
    panda$core$Int16 $returnValue79;
    panda$core$Int16 $tmp80;
    panda$core$Int16$init$builtin_int16(&$tmp80, ((int16_t) self.value));
    $returnValue79 = $tmp80;
    return $returnValue79;
}
panda$core$Int32 panda$core$Real32$convert$R$panda$core$Int32(panda$core$Real32 self) {
    panda$core$Int32 $returnValue82;
    panda$core$Int32 $tmp83;
    panda$core$Int32$init$builtin_int32(&$tmp83, ((int32_t) self.value));
    $returnValue82 = $tmp83;
    return $returnValue82;
}
panda$core$Int64 panda$core$Real32$convert$R$panda$core$Int64(panda$core$Real32 self) {
    panda$core$Int64 $returnValue85;
    panda$core$Int64 $tmp86;
    panda$core$Int64$init$builtin_int64(&$tmp86, ((int64_t) self.value));
    $returnValue85 = $tmp86;
    return $returnValue85;
}
panda$core$UInt8 panda$core$Real32$convert$R$panda$core$UInt8(panda$core$Real32 self) {
    panda$core$UInt8 $returnValue88;
    panda$core$UInt8 $tmp89;
    panda$core$UInt8$init$builtin_uint8(&$tmp89, ((uint8_t) self.value));
    $returnValue88 = $tmp89;
    return $returnValue88;
}
panda$core$UInt16 panda$core$Real32$convert$R$panda$core$UInt16(panda$core$Real32 self) {
    panda$core$UInt16 $returnValue91;
    panda$core$UInt16 $tmp92;
    panda$core$UInt16$init$builtin_uint16(&$tmp92, ((uint16_t) self.value));
    $returnValue91 = $tmp92;
    return $returnValue91;
}
panda$core$UInt32 panda$core$Real32$convert$R$panda$core$UInt32(panda$core$Real32 self) {
    panda$core$UInt32 $returnValue94;
    panda$core$UInt32 $tmp95;
    panda$core$UInt32$init$builtin_uint32(&$tmp95, ((uint32_t) self.value));
    $returnValue94 = $tmp95;
    return $returnValue94;
}
panda$core$UInt64 panda$core$Real32$convert$R$panda$core$UInt64(panda$core$Real32 self) {
    panda$core$UInt64 $returnValue97;
    panda$core$UInt64 $tmp98;
    panda$core$UInt64$init$builtin_uint64(&$tmp98, ((uint64_t) self.value));
    $returnValue97 = $tmp98;
    return $returnValue97;
}
panda$core$Real64 panda$core$Real32$convert$R$panda$core$Real64(panda$core$Real32 self) {
    panda$core$Real64 $returnValue100;
    panda$core$Real64 $tmp101;
    panda$core$Real64$init$builtin_float64(&$tmp101, ((double) self.value));
    $returnValue100 = $tmp101;
    return $returnValue100;
}
panda$core$String* panda$core$Real32$convert$R$panda$core$String(panda$core$Real32 self) {
    panda$core$String* $returnValue103;
    panda$core$String* $tmp104;
    panda$core$String* $tmp105;
    panda$core$Real64 $tmp106 = panda$core$Real32$convert$R$panda$core$Real64(self);
    panda$core$String* $tmp107 = panda$core$Real64$convert$R$panda$core$String($tmp106);
    $tmp105 = $tmp107;
    $tmp104 = $tmp105;
    $returnValue103 = $tmp104;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
    return $returnValue103;
}
void panda$core$Real32$cleanup(panda$core$Real32 self) {
}





