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
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

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
    panda$core$Int64 $finallyReturn2;
    int64_t $tmp4 = self.value + ((int64_t) p_other.value);
    $finallyReturn2 = ((panda$core$Int64) { $tmp4 });
    return $finallyReturn2;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn5;
    int64_t $tmp7 = self.value + ((int64_t) p_other.value);
    $finallyReturn5 = ((panda$core$Int64) { $tmp7 });
    return $finallyReturn5;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn8;
    int64_t $tmp10 = self.value + ((int64_t) p_other.value);
    $finallyReturn8 = ((panda$core$Int64) { $tmp10 });
    return $finallyReturn8;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn11;
    int64_t $tmp13 = self.value + p_other.value;
    $finallyReturn11 = ((panda$core$Int64) { $tmp13 });
    return $finallyReturn11;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn14;
    int64_t $tmp16 = self.value - ((int64_t) p_other.value);
    $finallyReturn14 = ((panda$core$Int64) { $tmp16 });
    return $finallyReturn14;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn17;
    int64_t $tmp19 = self.value - ((int64_t) p_other.value);
    $finallyReturn17 = ((panda$core$Int64) { $tmp19 });
    return $finallyReturn17;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn20;
    int64_t $tmp22 = self.value - ((int64_t) p_other.value);
    $finallyReturn20 = ((panda$core$Int64) { $tmp22 });
    return $finallyReturn20;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn23;
    int64_t $tmp25 = self.value - p_other.value;
    $finallyReturn23 = ((panda$core$Int64) { $tmp25 });
    return $finallyReturn23;
}
panda$core$Int64 panda$core$Int64$$SUB$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $finallyReturn26;
    $finallyReturn26 = ((panda$core$Int64) { -self.value });
    return $finallyReturn26;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn29;
    int64_t $tmp31 = self.value * ((int64_t) p_other.value);
    $finallyReturn29 = ((panda$core$Int64) { $tmp31 });
    return $finallyReturn29;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn32;
    int64_t $tmp34 = self.value * ((int64_t) p_other.value);
    $finallyReturn32 = ((panda$core$Int64) { $tmp34 });
    return $finallyReturn32;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn35;
    int64_t $tmp37 = self.value * ((int64_t) p_other.value);
    $finallyReturn35 = ((panda$core$Int64) { $tmp37 });
    return $finallyReturn35;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn38;
    int64_t $tmp40 = self.value * p_other.value;
    $finallyReturn38 = ((panda$core$Int64) { $tmp40 });
    return $finallyReturn38;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn41;
    int64_t $tmp43 = self.value / ((int64_t) p_other.value);
    $finallyReturn41 = ((panda$core$Int64) { $tmp43 });
    return $finallyReturn41;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn44;
    int64_t $tmp46 = self.value / ((int64_t) p_other.value);
    $finallyReturn44 = ((panda$core$Int64) { $tmp46 });
    return $finallyReturn44;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn47;
    int64_t $tmp49 = self.value / ((int64_t) p_other.value);
    $finallyReturn47 = ((panda$core$Int64) { $tmp49 });
    return $finallyReturn47;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn50;
    int64_t $tmp52 = self.value / p_other.value;
    $finallyReturn50 = ((panda$core$Int64) { $tmp52 });
    return $finallyReturn50;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn53;
    int64_t $tmp55 = self.value % ((int64_t) p_other.value);
    $finallyReturn53 = ((panda$core$Int64) { $tmp55 });
    return $finallyReturn53;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn56;
    int64_t $tmp58 = self.value % ((int64_t) p_other.value);
    $finallyReturn56 = ((panda$core$Int64) { $tmp58 });
    return $finallyReturn56;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn59;
    int64_t $tmp61 = self.value % ((int64_t) p_other.value);
    $finallyReturn59 = ((panda$core$Int64) { $tmp61 });
    return $finallyReturn59;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn62;
    int64_t $tmp64 = self.value % p_other.value;
    $finallyReturn62 = ((panda$core$Int64) { $tmp64 });
    return $finallyReturn62;
}
panda$core$Int64 panda$core$Int64$$BNOT$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $finallyReturn65;
    $finallyReturn65 = ((panda$core$Int64) { ~self.value });
    return $finallyReturn65;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn68;
    int64_t $tmp70 = self.value & ((int64_t) p_other.value);
    $finallyReturn68 = ((panda$core$Int64) { $tmp70 });
    return $finallyReturn68;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn71;
    int64_t $tmp73 = self.value & ((int64_t) p_other.value);
    $finallyReturn71 = ((panda$core$Int64) { $tmp73 });
    return $finallyReturn71;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn74;
    int64_t $tmp76 = self.value & ((int64_t) p_other.value);
    $finallyReturn74 = ((panda$core$Int64) { $tmp76 });
    return $finallyReturn74;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn77;
    int64_t $tmp79 = self.value & p_other.value;
    $finallyReturn77 = ((panda$core$Int64) { $tmp79 });
    return $finallyReturn77;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $finallyReturn80;
    int64_t $tmp82 = self.value & ((int64_t) p_other.value);
    $finallyReturn80 = ((panda$core$Int64) { $tmp82 });
    return $finallyReturn80;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $finallyReturn83;
    int64_t $tmp85 = self.value & ((int64_t) p_other.value);
    $finallyReturn83 = ((panda$core$Int64) { $tmp85 });
    return $finallyReturn83;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn86;
    int64_t $tmp88 = self.value & ((int64_t) p_other.value);
    $finallyReturn86 = ((panda$core$Int64) { $tmp88 });
    return $finallyReturn86;
}
panda$core$UInt64 panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn89;
    uint64_t $tmp91 = ((uint64_t) self.value) & p_other.value;
    $finallyReturn89 = ((panda$core$UInt64) { $tmp91 });
    return $finallyReturn89;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn92;
    int64_t $tmp94 = self.value | ((int64_t) p_other.value);
    $finallyReturn92 = ((panda$core$Int64) { $tmp94 });
    return $finallyReturn92;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn95;
    int64_t $tmp97 = self.value | ((int64_t) p_other.value);
    $finallyReturn95 = ((panda$core$Int64) { $tmp97 });
    return $finallyReturn95;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn98;
    int64_t $tmp100 = self.value | ((int64_t) p_other.value);
    $finallyReturn98 = ((panda$core$Int64) { $tmp100 });
    return $finallyReturn98;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn101;
    int64_t $tmp103 = self.value | p_other.value;
    $finallyReturn101 = ((panda$core$Int64) { $tmp103 });
    return $finallyReturn101;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $finallyReturn104;
    int64_t $tmp106 = self.value | ((int64_t) p_other.value);
    $finallyReturn104 = ((panda$core$Int64) { $tmp106 });
    return $finallyReturn104;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $finallyReturn107;
    int64_t $tmp109 = self.value | ((int64_t) p_other.value);
    $finallyReturn107 = ((panda$core$Int64) { $tmp109 });
    return $finallyReturn107;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn110;
    int64_t $tmp112 = self.value | ((int64_t) p_other.value);
    $finallyReturn110 = ((panda$core$Int64) { $tmp112 });
    return $finallyReturn110;
}
panda$core$UInt64 panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn113;
    uint64_t $tmp115 = ((uint64_t) self.value) | p_other.value;
    $finallyReturn113 = ((panda$core$UInt64) { $tmp115 });
    return $finallyReturn113;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn116;
    int64_t $tmp118 = self.value ^ ((int64_t) p_other.value);
    $finallyReturn116 = ((panda$core$Int64) { $tmp118 });
    return $finallyReturn116;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn119;
    int64_t $tmp121 = self.value ^ ((int64_t) p_other.value);
    $finallyReturn119 = ((panda$core$Int64) { $tmp121 });
    return $finallyReturn119;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn122;
    int64_t $tmp124 = self.value ^ ((int64_t) p_other.value);
    $finallyReturn122 = ((panda$core$Int64) { $tmp124 });
    return $finallyReturn122;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn125;
    int64_t $tmp127 = self.value ^ p_other.value;
    $finallyReturn125 = ((panda$core$Int64) { $tmp127 });
    return $finallyReturn125;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $finallyReturn128;
    int64_t $tmp130 = self.value ^ ((int64_t) p_other.value);
    $finallyReturn128 = ((panda$core$Int64) { $tmp130 });
    return $finallyReturn128;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $finallyReturn131;
    int64_t $tmp133 = self.value ^ ((int64_t) p_other.value);
    $finallyReturn131 = ((panda$core$Int64) { $tmp133 });
    return $finallyReturn131;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn134;
    int64_t $tmp136 = self.value ^ ((int64_t) p_other.value);
    $finallyReturn134 = ((panda$core$Int64) { $tmp136 });
    return $finallyReturn134;
}
panda$core$UInt64 panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn137;
    uint64_t $tmp139 = ((uint64_t) self.value) ^ p_other.value;
    $finallyReturn137 = ((panda$core$UInt64) { $tmp139 });
    return $finallyReturn137;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn140;
    int64_t $tmp142 = self.value << ((int64_t) p_other.value);
    $finallyReturn140 = ((panda$core$Int64) { $tmp142 });
    return $finallyReturn140;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn143;
    int64_t $tmp145 = self.value << ((int64_t) p_other.value);
    $finallyReturn143 = ((panda$core$Int64) { $tmp145 });
    return $finallyReturn143;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn146;
    int64_t $tmp148 = self.value << ((int64_t) p_other.value);
    $finallyReturn146 = ((panda$core$Int64) { $tmp148 });
    return $finallyReturn146;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn149;
    int64_t $tmp151 = self.value << p_other.value;
    $finallyReturn149 = ((panda$core$Int64) { $tmp151 });
    return $finallyReturn149;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $finallyReturn152;
    int64_t $tmp154 = self.value << ((int64_t) p_other.value);
    $finallyReturn152 = ((panda$core$Int64) { $tmp154 });
    return $finallyReturn152;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $finallyReturn155;
    int64_t $tmp157 = self.value << ((int64_t) p_other.value);
    $finallyReturn155 = ((panda$core$Int64) { $tmp157 });
    return $finallyReturn155;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn158;
    int64_t $tmp160 = self.value << ((int64_t) p_other.value);
    $finallyReturn158 = ((panda$core$Int64) { $tmp160 });
    return $finallyReturn158;
}
panda$core$UInt64 panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn161;
    uint64_t $tmp163 = ((uint64_t) self.value) << p_other.value;
    $finallyReturn161 = ((panda$core$UInt64) { $tmp163 });
    return $finallyReturn161;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn164;
    int64_t $tmp166 = self.value >> ((int64_t) p_other.value);
    $finallyReturn164 = ((panda$core$Int64) { $tmp166 });
    return $finallyReturn164;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn167;
    int64_t $tmp169 = self.value >> ((int64_t) p_other.value);
    $finallyReturn167 = ((panda$core$Int64) { $tmp169 });
    return $finallyReturn167;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn170;
    int64_t $tmp172 = self.value >> ((int64_t) p_other.value);
    $finallyReturn170 = ((panda$core$Int64) { $tmp172 });
    return $finallyReturn170;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn173;
    int64_t $tmp175 = self.value >> p_other.value;
    $finallyReturn173 = ((panda$core$Int64) { $tmp175 });
    return $finallyReturn173;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $finallyReturn176;
    int64_t $tmp178 = self.value >> ((int64_t) p_other.value);
    $finallyReturn176 = ((panda$core$Int64) { $tmp178 });
    return $finallyReturn176;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $finallyReturn179;
    int64_t $tmp181 = self.value >> ((int64_t) p_other.value);
    $finallyReturn179 = ((panda$core$Int64) { $tmp181 });
    return $finallyReturn179;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn182;
    int64_t $tmp184 = self.value >> ((int64_t) p_other.value);
    $finallyReturn182 = ((panda$core$Int64) { $tmp184 });
    return $finallyReturn182;
}
panda$core$UInt64 panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn185;
    uint64_t $tmp187 = ((uint64_t) self.value) >> p_other.value;
    $finallyReturn185 = ((panda$core$UInt64) { $tmp187 });
    return $finallyReturn185;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn188;
    bool $tmp190 = self.value == ((int64_t) p_other.value);
    $finallyReturn188 = ((panda$core$Bit) { $tmp190 });
    return $finallyReturn188;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn191;
    bool $tmp193 = self.value == ((int64_t) p_other.value);
    $finallyReturn191 = ((panda$core$Bit) { $tmp193 });
    return $finallyReturn191;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn194;
    bool $tmp196 = self.value == ((int64_t) p_other.value);
    $finallyReturn194 = ((panda$core$Bit) { $tmp196 });
    return $finallyReturn194;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn197;
    bool $tmp199 = self.value == p_other.value;
    $finallyReturn197 = ((panda$core$Bit) { $tmp199 });
    return $finallyReturn197;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn200;
    bool $tmp202 = self.value != ((int64_t) p_other.value);
    $finallyReturn200 = ((panda$core$Bit) { $tmp202 });
    return $finallyReturn200;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn203;
    bool $tmp205 = self.value != ((int64_t) p_other.value);
    $finallyReturn203 = ((panda$core$Bit) { $tmp205 });
    return $finallyReturn203;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn206;
    bool $tmp208 = self.value != ((int64_t) p_other.value);
    $finallyReturn206 = ((panda$core$Bit) { $tmp208 });
    return $finallyReturn206;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn209;
    bool $tmp211 = self.value != p_other.value;
    $finallyReturn209 = ((panda$core$Bit) { $tmp211 });
    return $finallyReturn209;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn212;
    bool $tmp214 = self.value < ((int64_t) p_other.value);
    $finallyReturn212 = ((panda$core$Bit) { $tmp214 });
    return $finallyReturn212;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn215;
    bool $tmp217 = self.value < ((int64_t) p_other.value);
    $finallyReturn215 = ((panda$core$Bit) { $tmp217 });
    return $finallyReturn215;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn218;
    bool $tmp220 = self.value < ((int64_t) p_other.value);
    $finallyReturn218 = ((panda$core$Bit) { $tmp220 });
    return $finallyReturn218;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn221;
    bool $tmp223 = self.value < p_other.value;
    $finallyReturn221 = ((panda$core$Bit) { $tmp223 });
    return $finallyReturn221;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn224;
    bool $tmp226 = self.value > ((int64_t) p_other.value);
    $finallyReturn224 = ((panda$core$Bit) { $tmp226 });
    return $finallyReturn224;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn227;
    bool $tmp229 = self.value > ((int64_t) p_other.value);
    $finallyReturn227 = ((panda$core$Bit) { $tmp229 });
    return $finallyReturn227;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn230;
    bool $tmp232 = self.value > ((int64_t) p_other.value);
    $finallyReturn230 = ((panda$core$Bit) { $tmp232 });
    return $finallyReturn230;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn233;
    bool $tmp235 = self.value > p_other.value;
    $finallyReturn233 = ((panda$core$Bit) { $tmp235 });
    return $finallyReturn233;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn236;
    bool $tmp238 = self.value >= ((int64_t) p_other.value);
    $finallyReturn236 = ((panda$core$Bit) { $tmp238 });
    return $finallyReturn236;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn239;
    bool $tmp241 = self.value >= ((int64_t) p_other.value);
    $finallyReturn239 = ((panda$core$Bit) { $tmp241 });
    return $finallyReturn239;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn242;
    bool $tmp244 = self.value >= ((int64_t) p_other.value);
    $finallyReturn242 = ((panda$core$Bit) { $tmp244 });
    return $finallyReturn242;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn245;
    bool $tmp247 = self.value >= p_other.value;
    $finallyReturn245 = ((panda$core$Bit) { $tmp247 });
    return $finallyReturn245;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn248;
    bool $tmp250 = self.value <= ((int64_t) p_other.value);
    $finallyReturn248 = ((panda$core$Bit) { $tmp250 });
    return $finallyReturn248;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn251;
    bool $tmp253 = self.value <= ((int64_t) p_other.value);
    $finallyReturn251 = ((panda$core$Bit) { $tmp253 });
    return $finallyReturn251;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn254;
    bool $tmp256 = self.value <= ((int64_t) p_other.value);
    $finallyReturn254 = ((panda$core$Bit) { $tmp256 });
    return $finallyReturn254;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn257;
    bool $tmp259 = self.value <= p_other.value;
    $finallyReturn257 = ((panda$core$Bit) { $tmp259 });
    return $finallyReturn257;
}
panda$core$Int64 panda$core$Int64$abs$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $finallyReturn261;
    panda$core$Int64 $finallyReturn264;
    panda$core$Bit $tmp261 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64) { 0 }));
    if ($tmp261.value) {
    {
        panda$core$Int64 $tmp263 = panda$core$Int64$$SUB$R$panda$core$Int64(self);
        $finallyReturn261 = $tmp263;
        return $finallyReturn261;
    }
    }
    $finallyReturn264 = self;
    return $finallyReturn264;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn267;
    panda$core$Int64 $finallyReturn269;
    bool $tmp267 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp267 }).value) {
    {
        $finallyReturn267 = ((panda$core$Int64) { self.value });
        return $finallyReturn267;
    }
    }
    $finallyReturn269 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn269;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn272;
    panda$core$Int64 $finallyReturn274;
    bool $tmp272 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp272 }).value) {
    {
        $finallyReturn272 = ((panda$core$Int64) { self.value });
        return $finallyReturn272;
    }
    }
    $finallyReturn274 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn274;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn277;
    panda$core$Int64 $finallyReturn279;
    bool $tmp277 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp277 }).value) {
    {
        $finallyReturn277 = ((panda$core$Int64) { self.value });
        return $finallyReturn277;
    }
    }
    $finallyReturn279 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn279;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn282;
    panda$core$Int64 $finallyReturn284;
    bool $tmp282 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp282 }).value) {
    {
        $finallyReturn282 = ((panda$core$Int64) { self.value });
        return $finallyReturn282;
    }
    }
    $finallyReturn284 = ((panda$core$Int64) { p_other.value });
    return $finallyReturn284;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $finallyReturn287;
    panda$core$Int64 $finallyReturn289;
    bool $tmp287 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp287 }).value) {
    {
        $finallyReturn287 = ((panda$core$Int64) { self.value });
        return $finallyReturn287;
    }
    }
    $finallyReturn289 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn289;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $finallyReturn292;
    panda$core$Int64 $finallyReturn294;
    bool $tmp292 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp292 }).value) {
    {
        $finallyReturn292 = ((panda$core$Int64) { self.value });
        return $finallyReturn292;
    }
    }
    $finallyReturn294 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn294;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $finallyReturn297;
    panda$core$Int64 $finallyReturn299;
    bool $tmp297 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp297 }).value) {
    {
        $finallyReturn297 = ((panda$core$Int64) { self.value });
        return $finallyReturn297;
    }
    }
    $finallyReturn299 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn299;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn302;
    panda$core$Int64 $finallyReturn304;
    bool $tmp302 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp302 }).value) {
    {
        $finallyReturn302 = ((panda$core$Int64) { self.value });
        return $finallyReturn302;
    }
    }
    $finallyReturn304 = ((panda$core$Int64) { p_other.value });
    return $finallyReturn304;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_index) {
    panda$core$Bit $finallyReturn306;
    panda$core$Int32 $tmp308 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int64 $tmp309 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp308);
    panda$core$Bit $tmp310 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp309, ((panda$core$Int64) { 0 }));
    $finallyReturn306 = $tmp310;
    return $finallyReturn306;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_index) {
    panda$core$Bit $finallyReturn311;
    panda$core$Int32 $tmp313 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int64 $tmp314 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp313);
    panda$core$Bit $tmp315 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp314, ((panda$core$Int64) { 0 }));
    $finallyReturn311 = $tmp315;
    return $finallyReturn311;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_index) {
    panda$core$Bit $finallyReturn316;
    panda$core$Int32 $tmp318 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int64 $tmp319 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp318);
    panda$core$Bit $tmp320 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp319, ((panda$core$Int64) { 0 }));
    $finallyReturn316 = $tmp320;
    return $finallyReturn316;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_index) {
    panda$core$Bit $finallyReturn321;
    panda$core$Int64 $tmp323 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp324 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp323);
    panda$core$Bit $tmp325 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp324, ((panda$core$Int64) { 0 }));
    $finallyReturn321 = $tmp325;
    return $finallyReturn321;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt8 p_index) {
    panda$core$Bit $finallyReturn326;
    panda$core$UInt32 $tmp328 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$Int64 $tmp329 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp328);
    panda$core$Bit $tmp330 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp329, ((panda$core$Int64) { 0 }));
    $finallyReturn326 = $tmp330;
    return $finallyReturn326;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt16 p_index) {
    panda$core$Bit $finallyReturn331;
    panda$core$UInt32 $tmp333 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$Int64 $tmp334 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp333);
    panda$core$Bit $tmp335 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp334, ((panda$core$Int64) { 0 }));
    $finallyReturn331 = $tmp335;
    return $finallyReturn331;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt32 p_index) {
    panda$core$Bit $finallyReturn336;
    panda$core$UInt32 $tmp338 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$Int64 $tmp339 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp338);
    panda$core$Bit $tmp340 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp339, ((panda$core$Int64) { 0 }));
    $finallyReturn336 = $tmp340;
    return $finallyReturn336;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt64 p_index) {
    panda$core$Bit $finallyReturn341;
    panda$core$UInt64 $tmp343 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp344 = panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp343);
    panda$core$Bit $tmp345 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp344, ((panda$core$UInt64) { 0 }));
    $finallyReturn341 = $tmp345;
    return $finallyReturn341;
}
panda$core$Int64 panda$core$Int64$hash$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $finallyReturn346;
    $finallyReturn346 = ((panda$core$Int64) { self.value });
    return $finallyReturn346;
}
panda$core$Int64$nullable panda$core$Int64$parse$panda$core$String$panda$core$Int64$R$panda$core$Int64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs351;
    panda$core$String* $tmp352;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp353;
    panda$core$Int64$nullable $finallyReturn355;
    panda$core$Int64$nullable $finallyReturn357;
    panda$core$UInt64$nullable result362;
    panda$core$Int64$nullable $finallyReturn363;
    panda$core$Int64$nullable $finallyReturn365;
    panda$core$Bit $tmp350 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s349);
    if ($tmp350.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp353, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp354 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp353);
        $tmp352 = $tmp354;
        panda$core$UInt64$nullable $tmp355 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp352, p_radix);
        abs351 = $tmp355;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp352));
        if (((panda$core$Bit) { !abs351.nonnull }).value) {
        {
            $finallyReturn355 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $finallyReturn355;
        }
        }
        panda$core$Int64 $tmp359 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) abs351.value));
        panda$core$Int64 $tmp360 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp359);
        $finallyReturn357 = ((panda$core$Int64$nullable) { $tmp360, true });
        return $finallyReturn357;
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp363 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result362 = $tmp363;
        if (((panda$core$Bit) { !result362.nonnull }).value) {
        {
            $finallyReturn363 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $finallyReturn363;
        }
        }
        panda$core$Int64 $tmp367 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) result362.value));
        $finallyReturn365 = ((panda$core$Int64$nullable) { $tmp367, true });
        return $finallyReturn365;
    }
    }
}
panda$core$Int8 panda$core$Int64$convert$R$panda$core$Int8(panda$core$Int64 self) {
    panda$core$Int8 $finallyReturn368;
    $finallyReturn368 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $finallyReturn368;
}
panda$core$Int16 panda$core$Int64$convert$R$panda$core$Int16(panda$core$Int64 self) {
    panda$core$Int16 $finallyReturn370;
    $finallyReturn370 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $finallyReturn370;
}
panda$core$Int32 panda$core$Int64$convert$R$panda$core$Int32(panda$core$Int64 self) {
    panda$core$Int32 $finallyReturn372;
    $finallyReturn372 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $finallyReturn372;
}
panda$core$UInt8 panda$core$Int64$convert$R$panda$core$UInt8(panda$core$Int64 self) {
    panda$core$UInt8 $finallyReturn374;
    $finallyReturn374 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $finallyReturn374;
}
panda$core$UInt16 panda$core$Int64$convert$R$panda$core$UInt16(panda$core$Int64 self) {
    panda$core$UInt16 $finallyReturn376;
    $finallyReturn376 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $finallyReturn376;
}
panda$core$UInt32 panda$core$Int64$convert$R$panda$core$UInt32(panda$core$Int64 self) {
    panda$core$UInt32 $finallyReturn378;
    $finallyReturn378 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $finallyReturn378;
}
panda$core$UInt64 panda$core$Int64$convert$R$panda$core$UInt64(panda$core$Int64 self) {
    panda$core$UInt64 $finallyReturn380;
    $finallyReturn380 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $finallyReturn380;
}
panda$core$Real32 panda$core$Int64$convert$R$panda$core$Real32(panda$core$Int64 self) {
    panda$core$Real32 $finallyReturn382;
    $finallyReturn382 = ((panda$core$Real32) { ((float) self.value) });
    return $finallyReturn382;
}
panda$core$Real64 panda$core$Int64$convert$R$panda$core$Real64(panda$core$Int64 self) {
    panda$core$Real64 $finallyReturn384;
    $finallyReturn384 = ((panda$core$Real64) { ((double) self.value) });
    return $finallyReturn384;
}
panda$core$String* panda$core$Int64$convert$R$panda$core$String(panda$core$Int64 self) {
    panda$core$Int64 max387;
    panda$core$Char8* chars388;
    panda$core$Int64 index389;
    panda$core$Int64 value391;
    panda$core$Char8 $tmp395;
    panda$core$Char8 $tmp406;
    panda$core$Char8 $tmp414;
    panda$core$Int64 size415;
    panda$core$Range$LTpanda$core$Int64$GT $tmp417;
    panda$core$String* $finallyReturn437;
    panda$core$String* $tmp439;
    panda$core$String* $tmp440;
    max387 = ((panda$core$Int64) { 20 });
    chars388 = ((panda$core$Char8*) pandaZAlloc(max387.value * 1));
    panda$core$Int64 $tmp390 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max387, ((panda$core$Int64) { 1 }));
    index389 = $tmp390;
    value391 = self;
    panda$core$Bit $tmp392 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(value391, ((panda$core$Int64) { 0 }));
    if ($tmp392.value) {
    {
        $l393:;
        {
            panda$core$Int64 $tmp396 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value391, ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp397 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp396, ((panda$core$Int64) { 48 }));
            panda$core$UInt8 $tmp398 = panda$core$Int64$convert$R$panda$core$UInt8($tmp397);
            panda$core$Char8$init$panda$core$UInt8(&$tmp395, $tmp398);
            chars388[index389.value] = $tmp395;
            panda$core$Int64 $tmp399 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value391, ((panda$core$Int64) { 10 }));
            value391 = $tmp399;
            panda$core$Int64 $tmp400 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index389, ((panda$core$Int64) { 1 }));
            index389 = $tmp400;
        }
        panda$core$Bit $tmp402 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(value391, ((panda$core$Int64) { 0 }));
        bool $tmp401 = $tmp402.value;
        if ($tmp401) goto $l393;
        $l394:;
        panda$core$Int64 $tmp403 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index389, ((panda$core$Int64) { 1 }));
        index389 = $tmp403;
    }
    }
    else {
    {
        $l404:;
        {
            panda$core$Int64 $tmp407 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value391, ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp408 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 48 }), $tmp407);
            panda$core$UInt8 $tmp409 = panda$core$Int64$convert$R$panda$core$UInt8($tmp408);
            panda$core$Char8$init$panda$core$UInt8(&$tmp406, $tmp409);
            chars388[index389.value] = $tmp406;
            panda$core$Int64 $tmp410 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value391, ((panda$core$Int64) { 10 }));
            value391 = $tmp410;
            panda$core$Int64 $tmp411 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index389, ((panda$core$Int64) { 1 }));
            index389 = $tmp411;
        }
        panda$core$Bit $tmp413 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(value391, ((panda$core$Int64) { 0 }));
        bool $tmp412 = $tmp413.value;
        if ($tmp412) goto $l404;
        $l405:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp414, ((panda$core$UInt8) { 45 }));
        chars388[index389.value] = $tmp414;
    }
    }
    panda$core$Int64 $tmp416 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max387, index389);
    size415 = $tmp416;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp417, ((panda$core$Int64) { 0 }), size415, ((panda$core$Bit) { false }));
    int64_t $tmp419 = $tmp417.min.value;
    panda$core$Int64 i418 = { $tmp419 };
    int64_t $tmp421 = $tmp417.max.value;
    bool $tmp422 = $tmp417.inclusive.value;
    if ($tmp422) goto $l429; else goto $l430;
    $l429:;
    if ($tmp419 <= $tmp421) goto $l423; else goto $l425;
    $l430:;
    if ($tmp419 < $tmp421) goto $l423; else goto $l425;
    $l423:;
    {
        panda$core$Int64 $tmp431 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i418, index389);
        chars388[i418.value] = chars388[$tmp431.value];
    }
    $l426:;
    int64_t $tmp433 = $tmp421 - i418.value;
    if ($tmp422) goto $l434; else goto $l435;
    $l434:;
    if ((uint64_t) $tmp433 >= 1) goto $l432; else goto $l425;
    $l435:;
    if ((uint64_t) $tmp433 > 1) goto $l432; else goto $l425;
    $l432:;
    i418.value += 1;
    goto $l423;
    $l425:;
    panda$core$String* $tmp441 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp441, chars388, size415);
    $tmp440 = $tmp441;
    $tmp439 = $tmp440;
    $finallyReturn437 = $tmp439;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
    return $finallyReturn437;
}
panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String(panda$core$Int64 self, panda$core$String* p_fmt) {
    panda$core$String* $finallyReturn442;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    bool $tmp446 = self.value < 0;
    panda$core$Int64 $tmp447 = panda$core$Int64$abs$R$panda$core$Int64(self);
    panda$core$UInt64 $tmp448 = panda$core$Int64$convert$R$panda$core$UInt64($tmp447);
    panda$core$String* $tmp449 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { $tmp446 }), $tmp448, ((panda$core$UInt64) { 18446744073709551615 }), p_fmt);
    $tmp445 = $tmp449;
    $tmp444 = $tmp445;
    $finallyReturn442 = $tmp444;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
    return $finallyReturn442;
}
void panda$core$Int64$cleanup(panda$core$Int64 self) {
}

