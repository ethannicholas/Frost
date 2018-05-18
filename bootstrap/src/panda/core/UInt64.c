#include "panda/core/UInt64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/Comparable.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/Panda.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Object.h"
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$UInt64$wrapper* self, panda$core$String* fmt) {
    return panda$core$UInt64$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Equatable* other) {
    return panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Equatable* other) {
    return panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64$wrappershim(panda$core$UInt64$wrapper* self) {
    return panda$core$UInt64$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Comparable* other) {
    return panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Comparable* other) {
    return panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Comparable* other) {
    return panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Comparable* other) {
    return panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String$wrappershim(panda$core$UInt64$wrapper* self) {
    return panda$core$UInt64$convert$R$panda$core$String(self->value);
}
void panda$core$UInt64$cleanup$wrappershim(panda$core$UInt64$wrapper* self) {
    panda$core$UInt64$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt64$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt64$_panda$core$Formattable, { panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt64$_panda$core$Equatable, { panda$core$UInt64$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt64$_panda$collections$Key, { panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$UInt64$class_type panda$core$UInt64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt64$_panda$core$Comparable, { panda$core$UInt64$convert$R$panda$core$String, panda$core$UInt64$cleanup, panda$core$UInt64$$ADD$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$SUB$R$panda$core$UInt64, panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$BNOT$R$panda$core$UInt64, panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64, panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64, panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64, panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64, panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64, panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64, panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64, panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64, panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64, panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64, panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64, panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64, panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64, panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64, panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64, panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64, panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64, panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64, panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt64$hash$R$panda$core$Int64, panda$core$UInt64$convert$R$panda$core$Int8, panda$core$UInt64$convert$R$panda$core$Int16, panda$core$UInt64$convert$R$panda$core$Int32, panda$core$UInt64$convert$R$panda$core$Int64, panda$core$UInt64$convert$R$panda$core$UInt8, panda$core$UInt64$convert$R$panda$core$UInt16, panda$core$UInt64$convert$R$panda$core$UInt32, panda$core$UInt64$convert$R$panda$core$Real32, panda$core$UInt64$convert$R$panda$core$Real64, panda$core$UInt64$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt64$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Formattable, { panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$wrappershim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Equatable, { panda$core$UInt64$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$Key, { panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$wrappershim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$wrappershim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$wrappershim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$UInt64$wrapperclass_type panda$core$UInt64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Comparable, { panda$core$UInt64$convert$R$panda$core$String$wrappershim, panda$core$UInt64$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };

void panda$core$UInt64$init$builtin_uint64(panda$core$UInt64* self, uint64_t p_value) {
    self->value = p_value;
}
void panda$core$UInt64$init$panda$core$UInt8(panda$core$UInt64* self, panda$core$UInt8 p_value) {
    self->value = ((uint64_t) p_value.value);
}
void panda$core$UInt64$init$panda$core$UInt16(panda$core$UInt64* self, panda$core$UInt16 p_value) {
    self->value = ((uint64_t) p_value.value);
}
void panda$core$UInt64$init$panda$core$UInt32(panda$core$UInt64* self, panda$core$UInt32 p_value) {
    self->value = ((uint64_t) p_value.value);
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn2;
    uint64_t $tmp4 = self.value + ((uint64_t) p_other.value);
    $finallyReturn2 = ((panda$core$UInt64) { $tmp4 });
    return $finallyReturn2;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn5;
    uint64_t $tmp7 = self.value + ((uint64_t) p_other.value);
    $finallyReturn5 = ((panda$core$UInt64) { $tmp7 });
    return $finallyReturn5;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn8;
    uint64_t $tmp10 = self.value + ((uint64_t) p_other.value);
    $finallyReturn8 = ((panda$core$UInt64) { $tmp10 });
    return $finallyReturn8;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn11;
    uint64_t $tmp13 = self.value + p_other.value;
    $finallyReturn11 = ((panda$core$UInt64) { $tmp13 });
    return $finallyReturn11;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn14;
    uint64_t $tmp16 = self.value - ((uint64_t) p_other.value);
    $finallyReturn14 = ((panda$core$UInt64) { $tmp16 });
    return $finallyReturn14;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn17;
    uint64_t $tmp19 = self.value - ((uint64_t) p_other.value);
    $finallyReturn17 = ((panda$core$UInt64) { $tmp19 });
    return $finallyReturn17;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn20;
    uint64_t $tmp22 = self.value - ((uint64_t) p_other.value);
    $finallyReturn20 = ((panda$core$UInt64) { $tmp22 });
    return $finallyReturn20;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn23;
    uint64_t $tmp25 = self.value - p_other.value;
    $finallyReturn23 = ((panda$core$UInt64) { $tmp25 });
    return $finallyReturn23;
}
panda$core$UInt64 panda$core$UInt64$$SUB$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $finallyReturn26;
    $finallyReturn26 = ((panda$core$UInt64) { -self.value });
    return $finallyReturn26;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn29;
    uint64_t $tmp31 = self.value * ((uint64_t) p_other.value);
    $finallyReturn29 = ((panda$core$UInt64) { $tmp31 });
    return $finallyReturn29;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn32;
    uint64_t $tmp34 = self.value * ((uint64_t) p_other.value);
    $finallyReturn32 = ((panda$core$UInt64) { $tmp34 });
    return $finallyReturn32;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn35;
    uint64_t $tmp37 = self.value * ((uint64_t) p_other.value);
    $finallyReturn35 = ((panda$core$UInt64) { $tmp37 });
    return $finallyReturn35;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn38;
    uint64_t $tmp40 = self.value * p_other.value;
    $finallyReturn38 = ((panda$core$UInt64) { $tmp40 });
    return $finallyReturn38;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn41;
    uint64_t $tmp43 = self.value / ((uint64_t) p_other.value);
    $finallyReturn41 = ((panda$core$UInt64) { $tmp43 });
    return $finallyReturn41;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn44;
    uint64_t $tmp46 = self.value / ((uint64_t) p_other.value);
    $finallyReturn44 = ((panda$core$UInt64) { $tmp46 });
    return $finallyReturn44;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn47;
    uint64_t $tmp49 = self.value / ((uint64_t) p_other.value);
    $finallyReturn47 = ((panda$core$UInt64) { $tmp49 });
    return $finallyReturn47;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn50;
    uint64_t $tmp52 = self.value / p_other.value;
    $finallyReturn50 = ((panda$core$UInt64) { $tmp52 });
    return $finallyReturn50;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn53;
    uint64_t $tmp55 = self.value % ((uint64_t) p_other.value);
    $finallyReturn53 = ((panda$core$UInt64) { $tmp55 });
    return $finallyReturn53;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn56;
    uint64_t $tmp58 = self.value % ((uint64_t) p_other.value);
    $finallyReturn56 = ((panda$core$UInt64) { $tmp58 });
    return $finallyReturn56;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn59;
    uint64_t $tmp61 = self.value % ((uint64_t) p_other.value);
    $finallyReturn59 = ((panda$core$UInt64) { $tmp61 });
    return $finallyReturn59;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn62;
    uint64_t $tmp64 = self.value % p_other.value;
    $finallyReturn62 = ((panda$core$UInt64) { $tmp64 });
    return $finallyReturn62;
}
panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $finallyReturn65;
    $finallyReturn65 = ((panda$core$UInt64) { ~self.value });
    return $finallyReturn65;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $finallyReturn68;
    uint64_t $tmp70 = self.value & ((uint64_t) p_other.value);
    $finallyReturn68 = ((panda$core$UInt64) { $tmp70 });
    return $finallyReturn68;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $finallyReturn71;
    uint64_t $tmp73 = self.value & ((uint64_t) p_other.value);
    $finallyReturn71 = ((panda$core$UInt64) { $tmp73 });
    return $finallyReturn71;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $finallyReturn74;
    uint64_t $tmp76 = self.value & ((uint64_t) p_other.value);
    $finallyReturn74 = ((panda$core$UInt64) { $tmp76 });
    return $finallyReturn74;
}
panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn77;
    int64_t $tmp79 = ((int64_t) self.value) & p_other.value;
    $finallyReturn77 = ((panda$core$Int64) { $tmp79 });
    return $finallyReturn77;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn80;
    uint64_t $tmp82 = self.value & ((uint64_t) p_other.value);
    $finallyReturn80 = ((panda$core$UInt64) { $tmp82 });
    return $finallyReturn80;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn83;
    uint64_t $tmp85 = self.value & ((uint64_t) p_other.value);
    $finallyReturn83 = ((panda$core$UInt64) { $tmp85 });
    return $finallyReturn83;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn86;
    uint64_t $tmp88 = self.value & ((uint64_t) p_other.value);
    $finallyReturn86 = ((panda$core$UInt64) { $tmp88 });
    return $finallyReturn86;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn89;
    uint64_t $tmp91 = self.value & p_other.value;
    $finallyReturn89 = ((panda$core$UInt64) { $tmp91 });
    return $finallyReturn89;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $finallyReturn92;
    uint64_t $tmp94 = self.value | ((uint64_t) p_other.value);
    $finallyReturn92 = ((panda$core$UInt64) { $tmp94 });
    return $finallyReturn92;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $finallyReturn95;
    uint64_t $tmp97 = self.value | ((uint64_t) p_other.value);
    $finallyReturn95 = ((panda$core$UInt64) { $tmp97 });
    return $finallyReturn95;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $finallyReturn98;
    uint64_t $tmp100 = self.value | ((uint64_t) p_other.value);
    $finallyReturn98 = ((panda$core$UInt64) { $tmp100 });
    return $finallyReturn98;
}
panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn101;
    int64_t $tmp103 = ((int64_t) self.value) | p_other.value;
    $finallyReturn101 = ((panda$core$Int64) { $tmp103 });
    return $finallyReturn101;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn104;
    uint64_t $tmp106 = self.value | ((uint64_t) p_other.value);
    $finallyReturn104 = ((panda$core$UInt64) { $tmp106 });
    return $finallyReturn104;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn107;
    uint64_t $tmp109 = self.value | ((uint64_t) p_other.value);
    $finallyReturn107 = ((panda$core$UInt64) { $tmp109 });
    return $finallyReturn107;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn110;
    uint64_t $tmp112 = self.value | ((uint64_t) p_other.value);
    $finallyReturn110 = ((panda$core$UInt64) { $tmp112 });
    return $finallyReturn110;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn113;
    uint64_t $tmp115 = self.value | p_other.value;
    $finallyReturn113 = ((panda$core$UInt64) { $tmp115 });
    return $finallyReturn113;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $finallyReturn116;
    uint64_t $tmp118 = self.value ^ ((uint64_t) p_other.value);
    $finallyReturn116 = ((panda$core$UInt64) { $tmp118 });
    return $finallyReturn116;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $finallyReturn119;
    uint64_t $tmp121 = self.value ^ ((uint64_t) p_other.value);
    $finallyReturn119 = ((panda$core$UInt64) { $tmp121 });
    return $finallyReturn119;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $finallyReturn122;
    uint64_t $tmp124 = self.value ^ ((uint64_t) p_other.value);
    $finallyReturn122 = ((panda$core$UInt64) { $tmp124 });
    return $finallyReturn122;
}
panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn125;
    int64_t $tmp127 = ((int64_t) self.value) ^ p_other.value;
    $finallyReturn125 = ((panda$core$Int64) { $tmp127 });
    return $finallyReturn125;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn128;
    uint64_t $tmp130 = self.value ^ ((uint64_t) p_other.value);
    $finallyReturn128 = ((panda$core$UInt64) { $tmp130 });
    return $finallyReturn128;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn131;
    uint64_t $tmp133 = self.value ^ ((uint64_t) p_other.value);
    $finallyReturn131 = ((panda$core$UInt64) { $tmp133 });
    return $finallyReturn131;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn134;
    uint64_t $tmp136 = self.value ^ ((uint64_t) p_other.value);
    $finallyReturn134 = ((panda$core$UInt64) { $tmp136 });
    return $finallyReturn134;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn137;
    uint64_t $tmp139 = self.value ^ p_other.value;
    $finallyReturn137 = ((panda$core$UInt64) { $tmp139 });
    return $finallyReturn137;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $finallyReturn140;
    uint64_t $tmp142 = self.value << ((uint64_t) p_other.value);
    $finallyReturn140 = ((panda$core$UInt64) { $tmp142 });
    return $finallyReturn140;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $finallyReturn143;
    uint64_t $tmp145 = self.value << ((uint64_t) p_other.value);
    $finallyReturn143 = ((panda$core$UInt64) { $tmp145 });
    return $finallyReturn143;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $finallyReturn146;
    uint64_t $tmp148 = self.value << ((uint64_t) p_other.value);
    $finallyReturn146 = ((panda$core$UInt64) { $tmp148 });
    return $finallyReturn146;
}
panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn149;
    int64_t $tmp151 = ((int64_t) self.value) << p_other.value;
    $finallyReturn149 = ((panda$core$Int64) { $tmp151 });
    return $finallyReturn149;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn152;
    uint64_t $tmp154 = self.value << ((uint64_t) p_other.value);
    $finallyReturn152 = ((panda$core$UInt64) { $tmp154 });
    return $finallyReturn152;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn155;
    uint64_t $tmp157 = self.value << ((uint64_t) p_other.value);
    $finallyReturn155 = ((panda$core$UInt64) { $tmp157 });
    return $finallyReturn155;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn158;
    uint64_t $tmp160 = self.value << ((uint64_t) p_other.value);
    $finallyReturn158 = ((panda$core$UInt64) { $tmp160 });
    return $finallyReturn158;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn161;
    uint64_t $tmp163 = self.value << p_other.value;
    $finallyReturn161 = ((panda$core$UInt64) { $tmp163 });
    return $finallyReturn161;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $finallyReturn164;
    uint64_t $tmp166 = self.value >> ((uint64_t) p_other.value);
    $finallyReturn164 = ((panda$core$UInt64) { $tmp166 });
    return $finallyReturn164;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $finallyReturn167;
    uint64_t $tmp169 = self.value >> ((uint64_t) p_other.value);
    $finallyReturn167 = ((panda$core$UInt64) { $tmp169 });
    return $finallyReturn167;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $finallyReturn170;
    uint64_t $tmp172 = self.value >> ((uint64_t) p_other.value);
    $finallyReturn170 = ((panda$core$UInt64) { $tmp172 });
    return $finallyReturn170;
}
panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn173;
    int64_t $tmp175 = ((int64_t) self.value) >> p_other.value;
    $finallyReturn173 = ((panda$core$Int64) { $tmp175 });
    return $finallyReturn173;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn176;
    uint64_t $tmp178 = self.value >> ((uint64_t) p_other.value);
    $finallyReturn176 = ((panda$core$UInt64) { $tmp178 });
    return $finallyReturn176;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn179;
    uint64_t $tmp181 = self.value >> ((uint64_t) p_other.value);
    $finallyReturn179 = ((panda$core$UInt64) { $tmp181 });
    return $finallyReturn179;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn182;
    uint64_t $tmp184 = self.value >> ((uint64_t) p_other.value);
    $finallyReturn182 = ((panda$core$UInt64) { $tmp184 });
    return $finallyReturn182;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn185;
    uint64_t $tmp187 = self.value >> p_other.value;
    $finallyReturn185 = ((panda$core$UInt64) { $tmp187 });
    return $finallyReturn185;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn188;
    bool $tmp190 = self.value == ((uint64_t) p_other.value);
    $finallyReturn188 = ((panda$core$Bit) { $tmp190 });
    return $finallyReturn188;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn191;
    bool $tmp193 = self.value == ((uint64_t) p_other.value);
    $finallyReturn191 = ((panda$core$Bit) { $tmp193 });
    return $finallyReturn191;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn194;
    bool $tmp196 = self.value == ((uint64_t) p_other.value);
    $finallyReturn194 = ((panda$core$Bit) { $tmp196 });
    return $finallyReturn194;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn197;
    bool $tmp199 = self.value == p_other.value;
    $finallyReturn197 = ((panda$core$Bit) { $tmp199 });
    return $finallyReturn197;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn200;
    bool $tmp202 = self.value != ((uint64_t) p_other.value);
    $finallyReturn200 = ((panda$core$Bit) { $tmp202 });
    return $finallyReturn200;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn203;
    bool $tmp205 = self.value != ((uint64_t) p_other.value);
    $finallyReturn203 = ((panda$core$Bit) { $tmp205 });
    return $finallyReturn203;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn206;
    bool $tmp208 = self.value != ((uint64_t) p_other.value);
    $finallyReturn206 = ((panda$core$Bit) { $tmp208 });
    return $finallyReturn206;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn209;
    bool $tmp211 = self.value != p_other.value;
    $finallyReturn209 = ((panda$core$Bit) { $tmp211 });
    return $finallyReturn209;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn212;
    bool $tmp214 = self.value < ((uint64_t) p_other.value);
    $finallyReturn212 = ((panda$core$Bit) { $tmp214 });
    return $finallyReturn212;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn215;
    bool $tmp217 = self.value < ((uint64_t) p_other.value);
    $finallyReturn215 = ((panda$core$Bit) { $tmp217 });
    return $finallyReturn215;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn218;
    bool $tmp220 = self.value < ((uint64_t) p_other.value);
    $finallyReturn218 = ((panda$core$Bit) { $tmp220 });
    return $finallyReturn218;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn221;
    bool $tmp223 = self.value < p_other.value;
    $finallyReturn221 = ((panda$core$Bit) { $tmp223 });
    return $finallyReturn221;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn224;
    bool $tmp226 = self.value > ((uint64_t) p_other.value);
    $finallyReturn224 = ((panda$core$Bit) { $tmp226 });
    return $finallyReturn224;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn227;
    bool $tmp229 = self.value > ((uint64_t) p_other.value);
    $finallyReturn227 = ((panda$core$Bit) { $tmp229 });
    return $finallyReturn227;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn230;
    bool $tmp232 = self.value > ((uint64_t) p_other.value);
    $finallyReturn230 = ((panda$core$Bit) { $tmp232 });
    return $finallyReturn230;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn233;
    bool $tmp235 = self.value > p_other.value;
    $finallyReturn233 = ((panda$core$Bit) { $tmp235 });
    return $finallyReturn233;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn236;
    bool $tmp238 = self.value >= ((uint64_t) p_other.value);
    $finallyReturn236 = ((panda$core$Bit) { $tmp238 });
    return $finallyReturn236;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn239;
    bool $tmp241 = self.value >= ((uint64_t) p_other.value);
    $finallyReturn239 = ((panda$core$Bit) { $tmp241 });
    return $finallyReturn239;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn242;
    bool $tmp244 = self.value >= ((uint64_t) p_other.value);
    $finallyReturn242 = ((panda$core$Bit) { $tmp244 });
    return $finallyReturn242;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn245;
    bool $tmp247 = self.value >= p_other.value;
    $finallyReturn245 = ((panda$core$Bit) { $tmp247 });
    return $finallyReturn245;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn248;
    bool $tmp250 = self.value <= ((uint64_t) p_other.value);
    $finallyReturn248 = ((panda$core$Bit) { $tmp250 });
    return $finallyReturn248;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn251;
    bool $tmp253 = self.value <= ((uint64_t) p_other.value);
    $finallyReturn251 = ((panda$core$Bit) { $tmp253 });
    return $finallyReturn251;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn254;
    bool $tmp256 = self.value <= ((uint64_t) p_other.value);
    $finallyReturn254 = ((panda$core$Bit) { $tmp256 });
    return $finallyReturn254;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $finallyReturn257;
    bool $tmp259 = self.value <= p_other.value;
    $finallyReturn257 = ((panda$core$Bit) { $tmp259 });
    return $finallyReturn257;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn261;
    panda$core$UInt64 $finallyReturn263;
    bool $tmp261 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp261 }).value) {
    {
        $finallyReturn261 = ((panda$core$UInt64) { self.value });
        return $finallyReturn261;
    }
    }
    $finallyReturn263 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $finallyReturn263;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn266;
    panda$core$UInt64 $finallyReturn268;
    bool $tmp266 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp266 }).value) {
    {
        $finallyReturn266 = ((panda$core$UInt64) { self.value });
        return $finallyReturn266;
    }
    }
    $finallyReturn268 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $finallyReturn268;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn271;
    panda$core$UInt64 $finallyReturn273;
    bool $tmp271 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp271 }).value) {
    {
        $finallyReturn271 = ((panda$core$UInt64) { self.value });
        return $finallyReturn271;
    }
    }
    $finallyReturn273 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $finallyReturn273;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn276;
    panda$core$UInt64 $finallyReturn278;
    bool $tmp276 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp276 }).value) {
    {
        $finallyReturn276 = ((panda$core$UInt64) { self.value });
        return $finallyReturn276;
    }
    }
    $finallyReturn278 = ((panda$core$UInt64) { p_other.value });
    return $finallyReturn278;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $finallyReturn281;
    panda$core$UInt64 $finallyReturn283;
    bool $tmp281 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp281 }).value) {
    {
        $finallyReturn281 = ((panda$core$UInt64) { self.value });
        return $finallyReturn281;
    }
    }
    $finallyReturn283 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $finallyReturn283;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $finallyReturn286;
    panda$core$UInt64 $finallyReturn288;
    bool $tmp286 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp286 }).value) {
    {
        $finallyReturn286 = ((panda$core$UInt64) { self.value });
        return $finallyReturn286;
    }
    }
    $finallyReturn288 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $finallyReturn288;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $finallyReturn291;
    panda$core$UInt64 $finallyReturn293;
    bool $tmp291 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp291 }).value) {
    {
        $finallyReturn291 = ((panda$core$UInt64) { self.value });
        return $finallyReturn291;
    }
    }
    $finallyReturn293 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $finallyReturn293;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn296;
    panda$core$UInt64 $finallyReturn298;
    bool $tmp296 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp296 }).value) {
    {
        $finallyReturn296 = ((panda$core$UInt64) { self.value });
        return $finallyReturn296;
    }
    }
    $finallyReturn298 = ((panda$core$UInt64) { p_other.value });
    return $finallyReturn298;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int8 p_index) {
    panda$core$Bit $finallyReturn300;
    panda$core$Int32 $tmp302 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$UInt64 $tmp303 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp302);
    panda$core$Bit $tmp304 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp303, ((panda$core$UInt64) { 0 }));
    $finallyReturn300 = $tmp304;
    return $finallyReturn300;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int16 p_index) {
    panda$core$Bit $finallyReturn305;
    panda$core$Int32 $tmp307 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$UInt64 $tmp308 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp307);
    panda$core$Bit $tmp309 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp308, ((panda$core$UInt64) { 0 }));
    $finallyReturn305 = $tmp309;
    return $finallyReturn305;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int32 p_index) {
    panda$core$Bit $finallyReturn310;
    panda$core$Int32 $tmp312 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$UInt64 $tmp313 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp312);
    panda$core$Bit $tmp314 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp313, ((panda$core$UInt64) { 0 }));
    $finallyReturn310 = $tmp314;
    return $finallyReturn310;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int64 p_index) {
    panda$core$Bit $finallyReturn315;
    panda$core$Int64 $tmp317 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp318 = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp317);
    panda$core$Bit $tmp319 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp318, ((panda$core$Int64) { 0 }));
    $finallyReturn315 = $tmp319;
    return $finallyReturn315;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_index) {
    panda$core$Bit $finallyReturn320;
    panda$core$UInt32 $tmp322 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt64 $tmp323 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp322);
    panda$core$Bit $tmp324 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp323, ((panda$core$UInt64) { 0 }));
    $finallyReturn320 = $tmp324;
    return $finallyReturn320;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_index) {
    panda$core$Bit $finallyReturn325;
    panda$core$UInt32 $tmp327 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt64 $tmp328 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp327);
    panda$core$Bit $tmp329 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp328, ((panda$core$UInt64) { 0 }));
    $finallyReturn325 = $tmp329;
    return $finallyReturn325;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_index) {
    panda$core$Bit $finallyReturn330;
    panda$core$UInt32 $tmp332 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt64 $tmp333 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp332);
    panda$core$Bit $tmp334 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp333, ((panda$core$UInt64) { 0 }));
    $finallyReturn330 = $tmp334;
    return $finallyReturn330;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_index) {
    panda$core$Bit $finallyReturn335;
    panda$core$UInt64 $tmp337 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp338 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp337);
    panda$core$Bit $tmp339 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp338, ((panda$core$UInt64) { 0 }));
    $finallyReturn335 = $tmp339;
    return $finallyReturn335;
}
panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $finallyReturn340;
    $finallyReturn340 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn340;
}
panda$core$UInt64$nullable panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result343;
    panda$core$UInt64$nullable $finallyReturn344;
    panda$core$UInt64$nullable $finallyReturn346;
    panda$core$UInt64$nullable $tmp344 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result343 = $tmp344;
    if (((panda$core$Bit) { !result343.nonnull }).value) {
    {
        $finallyReturn344 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $finallyReturn344;
    }
    }
    $finallyReturn346 = result343;
    return $finallyReturn346;
}
panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8(panda$core$UInt64 self) {
    panda$core$Int8 $finallyReturn348;
    $finallyReturn348 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $finallyReturn348;
}
panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16(panda$core$UInt64 self) {
    panda$core$Int16 $finallyReturn350;
    $finallyReturn350 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $finallyReturn350;
}
panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32(panda$core$UInt64 self) {
    panda$core$Int32 $finallyReturn352;
    $finallyReturn352 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $finallyReturn352;
}
panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $finallyReturn354;
    $finallyReturn354 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn354;
}
panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8(panda$core$UInt64 self) {
    panda$core$UInt8 $finallyReturn356;
    $finallyReturn356 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $finallyReturn356;
}
panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16(panda$core$UInt64 self) {
    panda$core$UInt16 $finallyReturn358;
    $finallyReturn358 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $finallyReturn358;
}
panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32(panda$core$UInt64 self) {
    panda$core$UInt32 $finallyReturn360;
    $finallyReturn360 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $finallyReturn360;
}
panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32(panda$core$UInt64 self) {
    panda$core$Real32 $finallyReturn362;
    $finallyReturn362 = ((panda$core$Real32) { ((float) self.value) });
    return $finallyReturn362;
}
panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64(panda$core$UInt64 self) {
    panda$core$Real64 $finallyReturn364;
    $finallyReturn364 = ((panda$core$Real64) { ((double) self.value) });
    return $finallyReturn364;
}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String(panda$core$UInt64 self) {
    panda$core$Int64 max367;
    panda$core$Char8* chars368;
    panda$core$Int64 index369;
    panda$core$UInt64 value371;
    panda$core$Char8 $tmp375;
    panda$core$Char8 $tmp386;
    panda$core$Char8 $tmp394;
    panda$core$Int64 size395;
    panda$core$Range$LTpanda$core$Int64$GT $tmp397;
    panda$core$String* $finallyReturn417;
    panda$core$String* $tmp419;
    panda$core$String* $tmp420;
    max367 = ((panda$core$Int64) { 20 });
    chars368 = ((panda$core$Char8*) pandaZAlloc(max367.value * 1));
    panda$core$Int64 $tmp370 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max367, ((panda$core$Int64) { 1 }));
    index369 = $tmp370;
    value371 = self;
    panda$core$Bit $tmp372 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(value371, ((panda$core$UInt64) { 0 }));
    if ($tmp372.value) {
    {
        $l373:;
        {
            panda$core$UInt64 $tmp376 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value371, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp377 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp376, ((panda$core$UInt64) { 48 }));
            panda$core$UInt8 $tmp378 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp377);
            panda$core$Char8$init$panda$core$UInt8(&$tmp375, $tmp378);
            chars368[index369.value] = $tmp375;
            panda$core$UInt64 $tmp379 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value371, ((panda$core$UInt64) { 10 }));
            value371 = $tmp379;
            panda$core$Int64 $tmp380 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index369, ((panda$core$Int64) { 1 }));
            index369 = $tmp380;
        }
        panda$core$Bit $tmp382 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value371, ((panda$core$UInt64) { 0 }));
        bool $tmp381 = $tmp382.value;
        if ($tmp381) goto $l373;
        $l374:;
        panda$core$Int64 $tmp383 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index369, ((panda$core$Int64) { 1 }));
        index369 = $tmp383;
    }
    }
    else {
    {
        $l384:;
        {
            panda$core$UInt64 $tmp387 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value371, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp388 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 48 }), $tmp387);
            panda$core$UInt8 $tmp389 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp388);
            panda$core$Char8$init$panda$core$UInt8(&$tmp386, $tmp389);
            chars368[index369.value] = $tmp386;
            panda$core$UInt64 $tmp390 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value371, ((panda$core$UInt64) { 10 }));
            value371 = $tmp390;
            panda$core$Int64 $tmp391 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index369, ((panda$core$Int64) { 1 }));
            index369 = $tmp391;
        }
        panda$core$Bit $tmp393 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(value371, ((panda$core$UInt64) { 0 }));
        bool $tmp392 = $tmp393.value;
        if ($tmp392) goto $l384;
        $l385:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp394, ((panda$core$UInt8) { 45 }));
        chars368[index369.value] = $tmp394;
    }
    }
    panda$core$Int64 $tmp396 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max367, index369);
    size395 = $tmp396;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp397, ((panda$core$Int64) { 0 }), size395, ((panda$core$Bit) { false }));
    int64_t $tmp399 = $tmp397.min.value;
    panda$core$Int64 i398 = { $tmp399 };
    int64_t $tmp401 = $tmp397.max.value;
    bool $tmp402 = $tmp397.inclusive.value;
    if ($tmp402) goto $l409; else goto $l410;
    $l409:;
    if ($tmp399 <= $tmp401) goto $l403; else goto $l405;
    $l410:;
    if ($tmp399 < $tmp401) goto $l403; else goto $l405;
    $l403:;
    {
        panda$core$Int64 $tmp411 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i398, index369);
        chars368[i398.value] = chars368[$tmp411.value];
    }
    $l406:;
    int64_t $tmp413 = $tmp401 - i398.value;
    if ($tmp402) goto $l414; else goto $l415;
    $l414:;
    if ((uint64_t) $tmp413 >= 1) goto $l412; else goto $l405;
    $l415:;
    if ((uint64_t) $tmp413 > 1) goto $l412; else goto $l405;
    $l412:;
    i398.value += 1;
    goto $l403;
    $l405:;
    panda$core$String* $tmp421 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp421, chars368, size395);
    $tmp420 = $tmp421;
    $tmp419 = $tmp420;
    $finallyReturn417 = $tmp419;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp419));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
    return $finallyReturn417;
}
panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String(panda$core$UInt64 self, panda$core$String* p_fmt) {
    panda$core$String* $finallyReturn422;
    panda$core$String* $tmp424;
    panda$core$String* $tmp425;
    panda$core$String* $tmp426 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), self, ((panda$core$UInt64) { 18446744073709551615 }), p_fmt);
    $tmp425 = $tmp426;
    $tmp424 = $tmp425;
    $finallyReturn422 = $tmp424;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp424));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
    return $finallyReturn422;
}
void panda$core$UInt64$cleanup(panda$core$UInt64 self) {
}

