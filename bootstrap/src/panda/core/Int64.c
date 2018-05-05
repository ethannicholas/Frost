#include "panda/core/Int64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Comparable.h"
#include "panda/collections/Key.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$Int64$wrapper* self, panda$core$String* fmt) {
    return panda$core$Int64$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Object* other) {
    return panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Object* other) {
    return panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Object* other) {
    return panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Object* other) {
    return panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Object* other) {
    return panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Object* other) {
    return panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Int64 panda$core$Int64$hash$R$panda$core$Int64$wrappershim(panda$core$Int64$wrapper* self) {
    return panda$core$Int64$hash$R$panda$core$Int64(self->value);
}
panda$core$String* panda$core$Int64$convert$R$panda$core$String$wrappershim(panda$core$Int64$wrapper* self) {
    return panda$core$Int64$convert$R$panda$core$String(self->value);
}
void panda$core$Int64$cleanup$wrappershim(panda$core$Int64$wrapper* self) {
    panda$core$Int64$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Int64$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int64$_panda$core$Formattable, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$_panda$core$Equatable, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$_panda$core$Comparable, { panda$core$Int64$hash$R$panda$core$Int64} };

static panda$core$String $s1;
panda$core$Int64$class_type panda$core$Int64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$_panda$collections$Key, { panda$core$Int64$convert$R$panda$core$String, panda$core$Int64$cleanup, panda$core$Int64$$ADD$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$SUB$R$panda$core$Int64, panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$BNOT$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$abs$R$panda$core$Int64, panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$Int64$hash$R$panda$core$Int64, panda$core$Int64$convert$R$panda$core$Int8, panda$core$Int64$convert$R$panda$core$Int16, panda$core$Int64$convert$R$panda$core$Int32, panda$core$Int64$convert$R$panda$core$UInt8, panda$core$Int64$convert$R$panda$core$UInt16, panda$core$Int64$convert$R$panda$core$UInt32, panda$core$Int64$convert$R$panda$core$UInt64, panda$core$Int64$convert$R$panda$core$Real32, panda$core$Int64$convert$R$panda$core$Real64, panda$core$Int64$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Int64$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Formattable, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$wrappershim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Equatable, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$wrappershim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$wrappershim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$wrappershim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Comparable, { panda$core$Int64$hash$R$panda$core$Int64$wrappershim} };

static panda$core$String $s2;
panda$core$Int64$wrapperclass_type panda$core$Int64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$Key, { panda$core$Int64$convert$R$panda$core$String$wrappershim, panda$core$Int64$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

void panda$core$Int64$init$builtin_int64(panda$core$Int64* self, int64_t p_value) {
    self->value = p_value;
}
void panda$core$Int64$init$panda$core$Int8(panda$core$Int64* self, panda$core$Int8 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$Int16(panda$core$Int64* self, panda$core$Int16 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$Int32(panda$core$Int64* self, panda$core$Int32 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$UInt8(panda$core$Int64* self, panda$core$UInt8 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$UInt16(panda$core$Int64* self, panda$core$UInt16 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$UInt32(panda$core$Int64* self, panda$core$UInt32 p_value) {
    self->value = ((int64_t) p_value.value);
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp4 = self.value + ((int64_t) p_other.value);
    panda$core$Int64 $tmp3 = ((panda$core$Int64) { $tmp4 });
    return $tmp3;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp6 = self.value + ((int64_t) p_other.value);
    panda$core$Int64 $tmp5 = ((panda$core$Int64) { $tmp6 });
    return $tmp5;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp8 = self.value + ((int64_t) p_other.value);
    panda$core$Int64 $tmp7 = ((panda$core$Int64) { $tmp8 });
    return $tmp7;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp10 = self.value + p_other.value;
    panda$core$Int64 $tmp9 = ((panda$core$Int64) { $tmp10 });
    return $tmp9;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp12 = self.value - ((int64_t) p_other.value);
    panda$core$Int64 $tmp11 = ((panda$core$Int64) { $tmp12 });
    return $tmp11;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp14 = self.value - ((int64_t) p_other.value);
    panda$core$Int64 $tmp13 = ((panda$core$Int64) { $tmp14 });
    return $tmp13;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp16 = self.value - ((int64_t) p_other.value);
    panda$core$Int64 $tmp15 = ((panda$core$Int64) { $tmp16 });
    return $tmp15;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp18 = self.value - p_other.value;
    panda$core$Int64 $tmp17 = ((panda$core$Int64) { $tmp18 });
    return $tmp17;
}
panda$core$Int64 panda$core$Int64$$SUB$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $tmp19 = ((panda$core$Int64) { -self.value });
    return $tmp19;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp22 = self.value * ((int64_t) p_other.value);
    panda$core$Int64 $tmp21 = ((panda$core$Int64) { $tmp22 });
    return $tmp21;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp24 = self.value * ((int64_t) p_other.value);
    panda$core$Int64 $tmp23 = ((panda$core$Int64) { $tmp24 });
    return $tmp23;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp26 = self.value * ((int64_t) p_other.value);
    panda$core$Int64 $tmp25 = ((panda$core$Int64) { $tmp26 });
    return $tmp25;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp28 = self.value * p_other.value;
    panda$core$Int64 $tmp27 = ((panda$core$Int64) { $tmp28 });
    return $tmp27;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp30 = self.value / ((int64_t) p_other.value);
    panda$core$Int64 $tmp29 = ((panda$core$Int64) { $tmp30 });
    return $tmp29;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp32 = self.value / ((int64_t) p_other.value);
    panda$core$Int64 $tmp31 = ((panda$core$Int64) { $tmp32 });
    return $tmp31;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp34 = self.value / ((int64_t) p_other.value);
    panda$core$Int64 $tmp33 = ((panda$core$Int64) { $tmp34 });
    return $tmp33;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp36 = self.value / p_other.value;
    panda$core$Int64 $tmp35 = ((panda$core$Int64) { $tmp36 });
    return $tmp35;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp38 = self.value % ((int64_t) p_other.value);
    panda$core$Int64 $tmp37 = ((panda$core$Int64) { $tmp38 });
    return $tmp37;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp40 = self.value % ((int64_t) p_other.value);
    panda$core$Int64 $tmp39 = ((panda$core$Int64) { $tmp40 });
    return $tmp39;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp42 = self.value % ((int64_t) p_other.value);
    panda$core$Int64 $tmp41 = ((panda$core$Int64) { $tmp42 });
    return $tmp41;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp44 = self.value % p_other.value;
    panda$core$Int64 $tmp43 = ((panda$core$Int64) { $tmp44 });
    return $tmp43;
}
panda$core$Int64 panda$core$Int64$$BNOT$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $tmp45 = ((panda$core$Int64) { ~self.value });
    return $tmp45;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp48 = self.value & ((int64_t) p_other.value);
    panda$core$Int64 $tmp47 = ((panda$core$Int64) { $tmp48 });
    return $tmp47;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp50 = self.value & ((int64_t) p_other.value);
    panda$core$Int64 $tmp49 = ((panda$core$Int64) { $tmp50 });
    return $tmp49;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp52 = self.value & ((int64_t) p_other.value);
    panda$core$Int64 $tmp51 = ((panda$core$Int64) { $tmp52 });
    return $tmp51;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp54 = self.value & p_other.value;
    panda$core$Int64 $tmp53 = ((panda$core$Int64) { $tmp54 });
    return $tmp53;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp56 = self.value & ((int64_t) p_other.value);
    panda$core$Int64 $tmp55 = ((panda$core$Int64) { $tmp56 });
    return $tmp55;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp58 = self.value & ((int64_t) p_other.value);
    panda$core$Int64 $tmp57 = ((panda$core$Int64) { $tmp58 });
    return $tmp57;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp60 = self.value & ((int64_t) p_other.value);
    panda$core$Int64 $tmp59 = ((panda$core$Int64) { $tmp60 });
    return $tmp59;
}
panda$core$UInt64 panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp62 = ((uint64_t) self.value) & p_other.value;
    panda$core$UInt64 $tmp61 = ((panda$core$UInt64) { $tmp62 });
    return $tmp61;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp64 = self.value | ((int64_t) p_other.value);
    panda$core$Int64 $tmp63 = ((panda$core$Int64) { $tmp64 });
    return $tmp63;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp66 = self.value | ((int64_t) p_other.value);
    panda$core$Int64 $tmp65 = ((panda$core$Int64) { $tmp66 });
    return $tmp65;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp68 = self.value | ((int64_t) p_other.value);
    panda$core$Int64 $tmp67 = ((panda$core$Int64) { $tmp68 });
    return $tmp67;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp70 = self.value | p_other.value;
    panda$core$Int64 $tmp69 = ((panda$core$Int64) { $tmp70 });
    return $tmp69;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp72 = self.value | ((int64_t) p_other.value);
    panda$core$Int64 $tmp71 = ((panda$core$Int64) { $tmp72 });
    return $tmp71;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp74 = self.value | ((int64_t) p_other.value);
    panda$core$Int64 $tmp73 = ((panda$core$Int64) { $tmp74 });
    return $tmp73;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp76 = self.value | ((int64_t) p_other.value);
    panda$core$Int64 $tmp75 = ((panda$core$Int64) { $tmp76 });
    return $tmp75;
}
panda$core$UInt64 panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp78 = ((uint64_t) self.value) | p_other.value;
    panda$core$UInt64 $tmp77 = ((panda$core$UInt64) { $tmp78 });
    return $tmp77;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp80 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64 $tmp79 = ((panda$core$Int64) { $tmp80 });
    return $tmp79;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp82 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64 $tmp81 = ((panda$core$Int64) { $tmp82 });
    return $tmp81;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp84 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64 $tmp83 = ((panda$core$Int64) { $tmp84 });
    return $tmp83;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp86 = self.value ^ p_other.value;
    panda$core$Int64 $tmp85 = ((panda$core$Int64) { $tmp86 });
    return $tmp85;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp88 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64 $tmp87 = ((panda$core$Int64) { $tmp88 });
    return $tmp87;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp90 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64 $tmp89 = ((panda$core$Int64) { $tmp90 });
    return $tmp89;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp92 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64 $tmp91 = ((panda$core$Int64) { $tmp92 });
    return $tmp91;
}
panda$core$UInt64 panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp94 = ((uint64_t) self.value) ^ p_other.value;
    panda$core$UInt64 $tmp93 = ((panda$core$UInt64) { $tmp94 });
    return $tmp93;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp96 = self.value << ((int64_t) p_other.value);
    panda$core$Int64 $tmp95 = ((panda$core$Int64) { $tmp96 });
    return $tmp95;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp98 = self.value << ((int64_t) p_other.value);
    panda$core$Int64 $tmp97 = ((panda$core$Int64) { $tmp98 });
    return $tmp97;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp100 = self.value << ((int64_t) p_other.value);
    panda$core$Int64 $tmp99 = ((panda$core$Int64) { $tmp100 });
    return $tmp99;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp102 = self.value << p_other.value;
    panda$core$Int64 $tmp101 = ((panda$core$Int64) { $tmp102 });
    return $tmp101;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp104 = self.value << ((int64_t) p_other.value);
    panda$core$Int64 $tmp103 = ((panda$core$Int64) { $tmp104 });
    return $tmp103;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp106 = self.value << ((int64_t) p_other.value);
    panda$core$Int64 $tmp105 = ((panda$core$Int64) { $tmp106 });
    return $tmp105;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp108 = self.value << ((int64_t) p_other.value);
    panda$core$Int64 $tmp107 = ((panda$core$Int64) { $tmp108 });
    return $tmp107;
}
panda$core$UInt64 panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp110 = ((uint64_t) self.value) << p_other.value;
    panda$core$UInt64 $tmp109 = ((panda$core$UInt64) { $tmp110 });
    return $tmp109;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp112 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64 $tmp111 = ((panda$core$Int64) { $tmp112 });
    return $tmp111;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp114 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64 $tmp113 = ((panda$core$Int64) { $tmp114 });
    return $tmp113;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp116 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64 $tmp115 = ((panda$core$Int64) { $tmp116 });
    return $tmp115;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp118 = self.value >> p_other.value;
    panda$core$Int64 $tmp117 = ((panda$core$Int64) { $tmp118 });
    return $tmp117;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp120 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64 $tmp119 = ((panda$core$Int64) { $tmp120 });
    return $tmp119;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp122 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64 $tmp121 = ((panda$core$Int64) { $tmp122 });
    return $tmp121;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp124 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64 $tmp123 = ((panda$core$Int64) { $tmp124 });
    return $tmp123;
}
panda$core$UInt64 panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp126 = ((uint64_t) self.value) >> p_other.value;
    panda$core$UInt64 $tmp125 = ((panda$core$UInt64) { $tmp126 });
    return $tmp125;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp128 = self.value == ((int64_t) p_other.value);
    panda$core$Bit $tmp127 = ((panda$core$Bit) { $tmp128 });
    return $tmp127;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp130 = self.value == ((int64_t) p_other.value);
    panda$core$Bit $tmp129 = ((panda$core$Bit) { $tmp130 });
    return $tmp129;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp132 = self.value == ((int64_t) p_other.value);
    panda$core$Bit $tmp131 = ((panda$core$Bit) { $tmp132 });
    return $tmp131;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp134 = self.value == p_other.value;
    panda$core$Bit $tmp133 = ((panda$core$Bit) { $tmp134 });
    return $tmp133;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp136 = self.value != ((int64_t) p_other.value);
    panda$core$Bit $tmp135 = ((panda$core$Bit) { $tmp136 });
    return $tmp135;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp138 = self.value != ((int64_t) p_other.value);
    panda$core$Bit $tmp137 = ((panda$core$Bit) { $tmp138 });
    return $tmp137;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp140 = self.value != ((int64_t) p_other.value);
    panda$core$Bit $tmp139 = ((panda$core$Bit) { $tmp140 });
    return $tmp139;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp142 = self.value != p_other.value;
    panda$core$Bit $tmp141 = ((panda$core$Bit) { $tmp142 });
    return $tmp141;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp144 = self.value < ((int64_t) p_other.value);
    panda$core$Bit $tmp143 = ((panda$core$Bit) { $tmp144 });
    return $tmp143;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp146 = self.value < ((int64_t) p_other.value);
    panda$core$Bit $tmp145 = ((panda$core$Bit) { $tmp146 });
    return $tmp145;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp148 = self.value < ((int64_t) p_other.value);
    panda$core$Bit $tmp147 = ((panda$core$Bit) { $tmp148 });
    return $tmp147;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp150 = self.value < p_other.value;
    panda$core$Bit $tmp149 = ((panda$core$Bit) { $tmp150 });
    return $tmp149;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp152 = self.value > ((int64_t) p_other.value);
    panda$core$Bit $tmp151 = ((panda$core$Bit) { $tmp152 });
    return $tmp151;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp154 = self.value > ((int64_t) p_other.value);
    panda$core$Bit $tmp153 = ((panda$core$Bit) { $tmp154 });
    return $tmp153;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp156 = self.value > ((int64_t) p_other.value);
    panda$core$Bit $tmp155 = ((panda$core$Bit) { $tmp156 });
    return $tmp155;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp158 = self.value > p_other.value;
    panda$core$Bit $tmp157 = ((panda$core$Bit) { $tmp158 });
    return $tmp157;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp160 = self.value >= ((int64_t) p_other.value);
    panda$core$Bit $tmp159 = ((panda$core$Bit) { $tmp160 });
    return $tmp159;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp162 = self.value >= ((int64_t) p_other.value);
    panda$core$Bit $tmp161 = ((panda$core$Bit) { $tmp162 });
    return $tmp161;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp164 = self.value >= ((int64_t) p_other.value);
    panda$core$Bit $tmp163 = ((panda$core$Bit) { $tmp164 });
    return $tmp163;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp166 = self.value >= p_other.value;
    panda$core$Bit $tmp165 = ((panda$core$Bit) { $tmp166 });
    return $tmp165;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp168 = self.value <= ((int64_t) p_other.value);
    panda$core$Bit $tmp167 = ((panda$core$Bit) { $tmp168 });
    return $tmp167;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp170 = self.value <= ((int64_t) p_other.value);
    panda$core$Bit $tmp169 = ((panda$core$Bit) { $tmp170 });
    return $tmp169;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp172 = self.value <= ((int64_t) p_other.value);
    panda$core$Bit $tmp171 = ((panda$core$Bit) { $tmp172 });
    return $tmp171;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp174 = self.value <= p_other.value;
    panda$core$Bit $tmp173 = ((panda$core$Bit) { $tmp174 });
    return $tmp173;
}
panda$core$Int64 panda$core$Int64$abs$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Bit $tmp175 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64) { 0 }));
    if ($tmp175.value) {
    {
        panda$core$Int64 $tmp177 = panda$core$Int64$$SUB$R$panda$core$Int64(self);
        panda$core$Int64 $tmp176 = $tmp177;
        return $tmp176;
    }
    }
    panda$core$Int64 $tmp178 = self;
    return $tmp178;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp179 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp179 }).value) {
    {
        panda$core$Int64 $tmp180 = ((panda$core$Int64) { self.value });
        return $tmp180;
    }
    }
    panda$core$Int64 $tmp181 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp181;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp182 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp182 }).value) {
    {
        panda$core$Int64 $tmp183 = ((panda$core$Int64) { self.value });
        return $tmp183;
    }
    }
    panda$core$Int64 $tmp184 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp184;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp185 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp185 }).value) {
    {
        panda$core$Int64 $tmp186 = ((panda$core$Int64) { self.value });
        return $tmp186;
    }
    }
    panda$core$Int64 $tmp187 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp187;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp188 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp188 }).value) {
    {
        panda$core$Int64 $tmp189 = ((panda$core$Int64) { self.value });
        return $tmp189;
    }
    }
    panda$core$Int64 $tmp190 = ((panda$core$Int64) { p_other.value });
    return $tmp190;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp191 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp191 }).value) {
    {
        panda$core$Int64 $tmp192 = ((panda$core$Int64) { self.value });
        return $tmp192;
    }
    }
    panda$core$Int64 $tmp193 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp193;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp194 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp194 }).value) {
    {
        panda$core$Int64 $tmp195 = ((panda$core$Int64) { self.value });
        return $tmp195;
    }
    }
    panda$core$Int64 $tmp196 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp196;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp197 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp197 }).value) {
    {
        panda$core$Int64 $tmp198 = ((panda$core$Int64) { self.value });
        return $tmp198;
    }
    }
    panda$core$Int64 $tmp199 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp199;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp200 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp200 }).value) {
    {
        panda$core$Int64 $tmp201 = ((panda$core$Int64) { self.value });
        return $tmp201;
    }
    }
    panda$core$Int64 $tmp202 = ((panda$core$Int64) { p_other.value });
    return $tmp202;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp204 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int64 $tmp205 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp204);
    panda$core$Bit $tmp206 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp205, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp203 = $tmp206;
    return $tmp203;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp208 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int64 $tmp209 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp208);
    panda$core$Bit $tmp210 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp209, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp207 = $tmp210;
    return $tmp207;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp212 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int64 $tmp213 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp212);
    panda$core$Bit $tmp214 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp213, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp211 = $tmp214;
    return $tmp211;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp216 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp217 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp216);
    panda$core$Bit $tmp218 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp217, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp215 = $tmp218;
    return $tmp215;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp220 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$Int64 $tmp221 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp220);
    panda$core$Bit $tmp222 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp221, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp219 = $tmp222;
    return $tmp219;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp224 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$Int64 $tmp225 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp224);
    panda$core$Bit $tmp226 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp225, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp223 = $tmp226;
    return $tmp223;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp228 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$Int64 $tmp229 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp228);
    panda$core$Bit $tmp230 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp229, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp227 = $tmp230;
    return $tmp227;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp232 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp233 = panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp232);
    panda$core$Bit $tmp234 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp233, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp231 = $tmp234;
    return $tmp231;
}
panda$core$Int64 panda$core$Int64$hash$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $tmp235 = ((panda$core$Int64) { self.value });
    return $tmp235;
}
panda$core$Int64$nullable panda$core$Int64$parse$panda$core$String$panda$core$Int64$R$panda$core$Int64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs238;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp240;
    panda$core$UInt64$nullable result247;
    panda$core$Bit $tmp237 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s236);
    if ($tmp237.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp240, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp241 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp240);
        panda$core$String* $tmp239 = $tmp241;
        panda$core$UInt64$nullable $tmp242 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp239, p_radix);
        abs238 = $tmp242;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
        if (((panda$core$Bit) { !abs238.nonnull }).value) {
        {
            panda$core$Int64$nullable $tmp243 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $tmp243;
        }
        }
        panda$core$Int64 $tmp245 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) abs238.value));
        panda$core$Int64 $tmp246 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp245);
        panda$core$Int64$nullable $tmp244 = ((panda$core$Int64$nullable) { $tmp246, true });
        return $tmp244;
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp248 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result247 = $tmp248;
        if (((panda$core$Bit) { !result247.nonnull }).value) {
        {
            panda$core$Int64$nullable $tmp249 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $tmp249;
        }
        }
        panda$core$Int64 $tmp251 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) result247.value));
        panda$core$Int64$nullable $tmp250 = ((panda$core$Int64$nullable) { $tmp251, true });
        return $tmp250;
    }
    }
}
panda$core$Int8 panda$core$Int64$convert$R$panda$core$Int8(panda$core$Int64 self) {
    panda$core$Int8 $tmp252 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $tmp252;
}
panda$core$Int16 panda$core$Int64$convert$R$panda$core$Int16(panda$core$Int64 self) {
    panda$core$Int16 $tmp253 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $tmp253;
}
panda$core$Int32 panda$core$Int64$convert$R$panda$core$Int32(panda$core$Int64 self) {
    panda$core$Int32 $tmp254 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $tmp254;
}
panda$core$UInt8 panda$core$Int64$convert$R$panda$core$UInt8(panda$core$Int64 self) {
    panda$core$UInt8 $tmp255 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $tmp255;
}
panda$core$UInt16 panda$core$Int64$convert$R$panda$core$UInt16(panda$core$Int64 self) {
    panda$core$UInt16 $tmp256 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $tmp256;
}
panda$core$UInt32 panda$core$Int64$convert$R$panda$core$UInt32(panda$core$Int64 self) {
    panda$core$UInt32 $tmp257 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $tmp257;
}
panda$core$UInt64 panda$core$Int64$convert$R$panda$core$UInt64(panda$core$Int64 self) {
    panda$core$UInt64 $tmp258 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $tmp258;
}
panda$core$Real32 panda$core$Int64$convert$R$panda$core$Real32(panda$core$Int64 self) {
    panda$core$Real32 $tmp259 = ((panda$core$Real32) { ((float) self.value) });
    return $tmp259;
}
panda$core$Real64 panda$core$Int64$convert$R$panda$core$Real64(panda$core$Int64 self) {
    panda$core$Real64 $tmp260 = ((panda$core$Real64) { ((double) self.value) });
    return $tmp260;
}
panda$core$String* panda$core$Int64$convert$R$panda$core$String(panda$core$Int64 self) {
    panda$core$Int64 max261;
    panda$core$Char8* chars262;
    panda$core$Int64 index263;
    panda$core$Int64 value265;
    panda$core$Char8 $tmp269;
    panda$core$Char8 $tmp280;
    panda$core$Char8 $tmp288;
    panda$core$Int64 size289;
    panda$core$Range$LTpanda$core$Int64$GT $tmp291;
    max261 = ((panda$core$Int64) { 20 });
    chars262 = ((panda$core$Char8*) pandaZAlloc(max261.value * 1));
    panda$core$Int64 $tmp264 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max261, ((panda$core$Int64) { 1 }));
    index263 = $tmp264;
    value265 = self;
    panda$core$Bit $tmp266 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(value265, ((panda$core$Int64) { 0 }));
    if ($tmp266.value) {
    {
        $l267:;
        {
            panda$core$Int64 $tmp270 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value265, ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp271 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp270, ((panda$core$Int64) { 48 }));
            panda$core$UInt8 $tmp272 = panda$core$Int64$convert$R$panda$core$UInt8($tmp271);
            panda$core$Char8$init$panda$core$UInt8(&$tmp269, $tmp272);
            chars262[index263.value] = $tmp269;
            panda$core$Int64 $tmp273 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value265, ((panda$core$Int64) { 10 }));
            value265 = $tmp273;
            panda$core$Int64 $tmp274 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index263, ((panda$core$Int64) { 1 }));
            index263 = $tmp274;
        }
        panda$core$Bit $tmp276 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(value265, ((panda$core$Int64) { 0 }));
        bool $tmp275 = $tmp276.value;
        if ($tmp275) goto $l267;
        $l268:;
        panda$core$Int64 $tmp277 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index263, ((panda$core$Int64) { 1 }));
        index263 = $tmp277;
    }
    }
    else {
    {
        $l278:;
        {
            panda$core$Int64 $tmp281 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value265, ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp282 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 48 }), $tmp281);
            panda$core$UInt8 $tmp283 = panda$core$Int64$convert$R$panda$core$UInt8($tmp282);
            panda$core$Char8$init$panda$core$UInt8(&$tmp280, $tmp283);
            chars262[index263.value] = $tmp280;
            panda$core$Int64 $tmp284 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value265, ((panda$core$Int64) { 10 }));
            value265 = $tmp284;
            panda$core$Int64 $tmp285 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index263, ((panda$core$Int64) { 1 }));
            index263 = $tmp285;
        }
        panda$core$Bit $tmp287 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(value265, ((panda$core$Int64) { 0 }));
        bool $tmp286 = $tmp287.value;
        if ($tmp286) goto $l278;
        $l279:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp288, ((panda$core$UInt8) { 45 }));
        chars262[index263.value] = $tmp288;
    }
    }
    panda$core$Int64 $tmp290 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max261, index263);
    size289 = $tmp290;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp291, ((panda$core$Int64) { 0 }), size289, ((panda$core$Bit) { false }));
    int64_t $tmp293 = $tmp291.min.value;
    panda$core$Int64 i292 = { $tmp293 };
    int64_t $tmp295 = $tmp291.max.value;
    bool $tmp296 = $tmp291.inclusive.value;
    if ($tmp296) goto $l303; else goto $l304;
    $l303:;
    if ($tmp293 <= $tmp295) goto $l297; else goto $l299;
    $l304:;
    if ($tmp293 < $tmp295) goto $l297; else goto $l299;
    $l297:;
    {
        panda$core$Int64 $tmp305 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i292, index263);
        chars262[i292.value] = chars262[$tmp305.value];
    }
    $l300:;
    int64_t $tmp307 = $tmp295 - i292.value;
    if ($tmp296) goto $l308; else goto $l309;
    $l308:;
    if ((uint64_t) $tmp307 >= 1) goto $l306; else goto $l299;
    $l309:;
    if ((uint64_t) $tmp307 > 1) goto $l306; else goto $l299;
    $l306:;
    i292.value += 1;
    goto $l297;
    $l299:;
    panda$core$String* $tmp315 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp315, chars262, size289);
    panda$core$String* $tmp314 = $tmp315;
    panda$core$String* $tmp313 = $tmp314;
    panda$core$String* $tmp312 = $tmp313;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
    return $tmp312;
}
panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String(panda$core$Int64 self, panda$core$String* p_fmt) {
    bool $tmp319 = self.value < 0;
    panda$core$Int64 $tmp320 = panda$core$Int64$abs$R$panda$core$Int64(self);
    panda$core$UInt64 $tmp321 = panda$core$Int64$convert$R$panda$core$UInt64($tmp320);
    panda$core$String* $tmp322 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { $tmp319 }), $tmp321, ((panda$core$UInt64) { 18446744073709551615 }), p_fmt);
    panda$core$String* $tmp318 = $tmp322;
    panda$core$String* $tmp317 = $tmp318;
    panda$core$String* $tmp316 = $tmp317;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp317));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
    return $tmp316;
}
void panda$core$Int64$cleanup(panda$core$Int64 self) {
}

