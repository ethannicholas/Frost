#include "panda/core/Int64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
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
#include "panda/core/Object.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Int64 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$Int64$wrapper* self, panda$core$String* fmt) {
    return panda$core$Int64$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Equatable* other) {
    return panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Equatable* other) {
    return panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Comparable* other) {
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
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

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
    panda$core$Int64 $returnValue3;
    int64_t $tmp4 = self.value + ((int64_t) p_other.value);
    $returnValue3 = ((panda$core$Int64) { $tmp4 });
    return $returnValue3;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue6;
    int64_t $tmp7 = self.value + ((int64_t) p_other.value);
    $returnValue6 = ((panda$core$Int64) { $tmp7 });
    return $returnValue6;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue9;
    int64_t $tmp10 = self.value + ((int64_t) p_other.value);
    $returnValue9 = ((panda$core$Int64) { $tmp10 });
    return $returnValue9;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue12;
    int64_t $tmp13 = self.value + p_other.value;
    $returnValue12 = ((panda$core$Int64) { $tmp13 });
    return $returnValue12;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue15;
    int64_t $tmp16 = self.value - ((int64_t) p_other.value);
    $returnValue15 = ((panda$core$Int64) { $tmp16 });
    return $returnValue15;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue18;
    int64_t $tmp19 = self.value - ((int64_t) p_other.value);
    $returnValue18 = ((panda$core$Int64) { $tmp19 });
    return $returnValue18;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue21;
    int64_t $tmp22 = self.value - ((int64_t) p_other.value);
    $returnValue21 = ((panda$core$Int64) { $tmp22 });
    return $returnValue21;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue24;
    int64_t $tmp25 = self.value - p_other.value;
    $returnValue24 = ((panda$core$Int64) { $tmp25 });
    return $returnValue24;
}
panda$core$Int64 panda$core$Int64$$SUB$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $returnValue27;
    $returnValue27 = ((panda$core$Int64) { -self.value });
    return $returnValue27;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue30;
    int64_t $tmp31 = self.value * ((int64_t) p_other.value);
    $returnValue30 = ((panda$core$Int64) { $tmp31 });
    return $returnValue30;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue33;
    int64_t $tmp34 = self.value * ((int64_t) p_other.value);
    $returnValue33 = ((panda$core$Int64) { $tmp34 });
    return $returnValue33;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue36;
    int64_t $tmp37 = self.value * ((int64_t) p_other.value);
    $returnValue36 = ((panda$core$Int64) { $tmp37 });
    return $returnValue36;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue39;
    int64_t $tmp40 = self.value * p_other.value;
    $returnValue39 = ((panda$core$Int64) { $tmp40 });
    return $returnValue39;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue42;
    int64_t $tmp43 = self.value / ((int64_t) p_other.value);
    $returnValue42 = ((panda$core$Int64) { $tmp43 });
    return $returnValue42;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue45;
    int64_t $tmp46 = self.value / ((int64_t) p_other.value);
    $returnValue45 = ((panda$core$Int64) { $tmp46 });
    return $returnValue45;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue48;
    int64_t $tmp49 = self.value / ((int64_t) p_other.value);
    $returnValue48 = ((panda$core$Int64) { $tmp49 });
    return $returnValue48;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue51;
    int64_t $tmp52 = self.value / p_other.value;
    $returnValue51 = ((panda$core$Int64) { $tmp52 });
    return $returnValue51;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue54;
    int64_t $tmp55 = self.value % ((int64_t) p_other.value);
    $returnValue54 = ((panda$core$Int64) { $tmp55 });
    return $returnValue54;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue57;
    int64_t $tmp58 = self.value % ((int64_t) p_other.value);
    $returnValue57 = ((panda$core$Int64) { $tmp58 });
    return $returnValue57;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue60;
    int64_t $tmp61 = self.value % ((int64_t) p_other.value);
    $returnValue60 = ((panda$core$Int64) { $tmp61 });
    return $returnValue60;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue63;
    int64_t $tmp64 = self.value % p_other.value;
    $returnValue63 = ((panda$core$Int64) { $tmp64 });
    return $returnValue63;
}
panda$core$Int64 panda$core$Int64$$BNOT$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $returnValue66;
    $returnValue66 = ((panda$core$Int64) { ~self.value });
    return $returnValue66;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue69;
    int64_t $tmp70 = self.value & ((int64_t) p_other.value);
    $returnValue69 = ((panda$core$Int64) { $tmp70 });
    return $returnValue69;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue72;
    int64_t $tmp73 = self.value & ((int64_t) p_other.value);
    $returnValue72 = ((panda$core$Int64) { $tmp73 });
    return $returnValue72;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue75;
    int64_t $tmp76 = self.value & ((int64_t) p_other.value);
    $returnValue75 = ((panda$core$Int64) { $tmp76 });
    return $returnValue75;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue78;
    int64_t $tmp79 = self.value & p_other.value;
    $returnValue78 = ((panda$core$Int64) { $tmp79 });
    return $returnValue78;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue81;
    int64_t $tmp82 = self.value & ((int64_t) p_other.value);
    $returnValue81 = ((panda$core$Int64) { $tmp82 });
    return $returnValue81;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue84;
    int64_t $tmp85 = self.value & ((int64_t) p_other.value);
    $returnValue84 = ((panda$core$Int64) { $tmp85 });
    return $returnValue84;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue87;
    int64_t $tmp88 = self.value & ((int64_t) p_other.value);
    $returnValue87 = ((panda$core$Int64) { $tmp88 });
    return $returnValue87;
}
panda$core$UInt64 panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue90;
    uint64_t $tmp91 = ((uint64_t) self.value) & p_other.value;
    $returnValue90 = ((panda$core$UInt64) { $tmp91 });
    return $returnValue90;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue93;
    int64_t $tmp94 = self.value | ((int64_t) p_other.value);
    $returnValue93 = ((panda$core$Int64) { $tmp94 });
    return $returnValue93;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue96;
    int64_t $tmp97 = self.value | ((int64_t) p_other.value);
    $returnValue96 = ((panda$core$Int64) { $tmp97 });
    return $returnValue96;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue99;
    int64_t $tmp100 = self.value | ((int64_t) p_other.value);
    $returnValue99 = ((panda$core$Int64) { $tmp100 });
    return $returnValue99;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue102;
    int64_t $tmp103 = self.value | p_other.value;
    $returnValue102 = ((panda$core$Int64) { $tmp103 });
    return $returnValue102;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue105;
    int64_t $tmp106 = self.value | ((int64_t) p_other.value);
    $returnValue105 = ((panda$core$Int64) { $tmp106 });
    return $returnValue105;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue108;
    int64_t $tmp109 = self.value | ((int64_t) p_other.value);
    $returnValue108 = ((panda$core$Int64) { $tmp109 });
    return $returnValue108;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue111;
    int64_t $tmp112 = self.value | ((int64_t) p_other.value);
    $returnValue111 = ((panda$core$Int64) { $tmp112 });
    return $returnValue111;
}
panda$core$UInt64 panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue114;
    uint64_t $tmp115 = ((uint64_t) self.value) | p_other.value;
    $returnValue114 = ((panda$core$UInt64) { $tmp115 });
    return $returnValue114;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue117;
    int64_t $tmp118 = self.value ^ ((int64_t) p_other.value);
    $returnValue117 = ((panda$core$Int64) { $tmp118 });
    return $returnValue117;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue120;
    int64_t $tmp121 = self.value ^ ((int64_t) p_other.value);
    $returnValue120 = ((panda$core$Int64) { $tmp121 });
    return $returnValue120;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue123;
    int64_t $tmp124 = self.value ^ ((int64_t) p_other.value);
    $returnValue123 = ((panda$core$Int64) { $tmp124 });
    return $returnValue123;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue126;
    int64_t $tmp127 = self.value ^ p_other.value;
    $returnValue126 = ((panda$core$Int64) { $tmp127 });
    return $returnValue126;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue129;
    int64_t $tmp130 = self.value ^ ((int64_t) p_other.value);
    $returnValue129 = ((panda$core$Int64) { $tmp130 });
    return $returnValue129;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue132;
    int64_t $tmp133 = self.value ^ ((int64_t) p_other.value);
    $returnValue132 = ((panda$core$Int64) { $tmp133 });
    return $returnValue132;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue135;
    int64_t $tmp136 = self.value ^ ((int64_t) p_other.value);
    $returnValue135 = ((panda$core$Int64) { $tmp136 });
    return $returnValue135;
}
panda$core$UInt64 panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue138;
    uint64_t $tmp139 = ((uint64_t) self.value) ^ p_other.value;
    $returnValue138 = ((panda$core$UInt64) { $tmp139 });
    return $returnValue138;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue141;
    int64_t $tmp142 = self.value << ((int64_t) p_other.value);
    $returnValue141 = ((panda$core$Int64) { $tmp142 });
    return $returnValue141;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue144;
    int64_t $tmp145 = self.value << ((int64_t) p_other.value);
    $returnValue144 = ((panda$core$Int64) { $tmp145 });
    return $returnValue144;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue147;
    int64_t $tmp148 = self.value << ((int64_t) p_other.value);
    $returnValue147 = ((panda$core$Int64) { $tmp148 });
    return $returnValue147;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue150;
    int64_t $tmp151 = self.value << p_other.value;
    $returnValue150 = ((panda$core$Int64) { $tmp151 });
    return $returnValue150;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue153;
    int64_t $tmp154 = self.value << ((int64_t) p_other.value);
    $returnValue153 = ((panda$core$Int64) { $tmp154 });
    return $returnValue153;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue156;
    int64_t $tmp157 = self.value << ((int64_t) p_other.value);
    $returnValue156 = ((panda$core$Int64) { $tmp157 });
    return $returnValue156;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue159;
    int64_t $tmp160 = self.value << ((int64_t) p_other.value);
    $returnValue159 = ((panda$core$Int64) { $tmp160 });
    return $returnValue159;
}
panda$core$UInt64 panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue162;
    uint64_t $tmp163 = ((uint64_t) self.value) << p_other.value;
    $returnValue162 = ((panda$core$UInt64) { $tmp163 });
    return $returnValue162;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue165;
    int64_t $tmp166 = self.value >> ((int64_t) p_other.value);
    $returnValue165 = ((panda$core$Int64) { $tmp166 });
    return $returnValue165;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue168;
    int64_t $tmp169 = self.value >> ((int64_t) p_other.value);
    $returnValue168 = ((panda$core$Int64) { $tmp169 });
    return $returnValue168;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue171;
    int64_t $tmp172 = self.value >> ((int64_t) p_other.value);
    $returnValue171 = ((panda$core$Int64) { $tmp172 });
    return $returnValue171;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue174;
    int64_t $tmp175 = self.value >> p_other.value;
    $returnValue174 = ((panda$core$Int64) { $tmp175 });
    return $returnValue174;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue177;
    int64_t $tmp178 = self.value >> ((int64_t) p_other.value);
    $returnValue177 = ((panda$core$Int64) { $tmp178 });
    return $returnValue177;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue180;
    int64_t $tmp181 = self.value >> ((int64_t) p_other.value);
    $returnValue180 = ((panda$core$Int64) { $tmp181 });
    return $returnValue180;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue183;
    int64_t $tmp184 = self.value >> ((int64_t) p_other.value);
    $returnValue183 = ((panda$core$Int64) { $tmp184 });
    return $returnValue183;
}
panda$core$UInt64 panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue186;
    uint64_t $tmp187 = ((uint64_t) self.value) >> p_other.value;
    $returnValue186 = ((panda$core$UInt64) { $tmp187 });
    return $returnValue186;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue189;
    bool $tmp190 = self.value == ((int64_t) p_other.value);
    $returnValue189 = ((panda$core$Bit) { $tmp190 });
    return $returnValue189;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue192;
    bool $tmp193 = self.value == ((int64_t) p_other.value);
    $returnValue192 = ((panda$core$Bit) { $tmp193 });
    return $returnValue192;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue195;
    bool $tmp196 = self.value == ((int64_t) p_other.value);
    $returnValue195 = ((panda$core$Bit) { $tmp196 });
    return $returnValue195;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue198;
    bool $tmp199 = self.value == p_other.value;
    $returnValue198 = ((panda$core$Bit) { $tmp199 });
    return $returnValue198;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue201;
    bool $tmp202 = self.value != ((int64_t) p_other.value);
    $returnValue201 = ((panda$core$Bit) { $tmp202 });
    return $returnValue201;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue204;
    bool $tmp205 = self.value != ((int64_t) p_other.value);
    $returnValue204 = ((panda$core$Bit) { $tmp205 });
    return $returnValue204;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue207;
    bool $tmp208 = self.value != ((int64_t) p_other.value);
    $returnValue207 = ((panda$core$Bit) { $tmp208 });
    return $returnValue207;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue210;
    bool $tmp211 = self.value != p_other.value;
    $returnValue210 = ((panda$core$Bit) { $tmp211 });
    return $returnValue210;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue213;
    bool $tmp214 = self.value < ((int64_t) p_other.value);
    $returnValue213 = ((panda$core$Bit) { $tmp214 });
    return $returnValue213;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue216;
    bool $tmp217 = self.value < ((int64_t) p_other.value);
    $returnValue216 = ((panda$core$Bit) { $tmp217 });
    return $returnValue216;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue219;
    bool $tmp220 = self.value < ((int64_t) p_other.value);
    $returnValue219 = ((panda$core$Bit) { $tmp220 });
    return $returnValue219;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue222;
    bool $tmp223 = self.value < p_other.value;
    $returnValue222 = ((panda$core$Bit) { $tmp223 });
    return $returnValue222;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue225;
    bool $tmp226 = self.value > ((int64_t) p_other.value);
    $returnValue225 = ((panda$core$Bit) { $tmp226 });
    return $returnValue225;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue228;
    bool $tmp229 = self.value > ((int64_t) p_other.value);
    $returnValue228 = ((panda$core$Bit) { $tmp229 });
    return $returnValue228;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue231;
    bool $tmp232 = self.value > ((int64_t) p_other.value);
    $returnValue231 = ((panda$core$Bit) { $tmp232 });
    return $returnValue231;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue234;
    bool $tmp235 = self.value > p_other.value;
    $returnValue234 = ((panda$core$Bit) { $tmp235 });
    return $returnValue234;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue237;
    bool $tmp238 = self.value >= ((int64_t) p_other.value);
    $returnValue237 = ((panda$core$Bit) { $tmp238 });
    return $returnValue237;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue240;
    bool $tmp241 = self.value >= ((int64_t) p_other.value);
    $returnValue240 = ((panda$core$Bit) { $tmp241 });
    return $returnValue240;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue243;
    bool $tmp244 = self.value >= ((int64_t) p_other.value);
    $returnValue243 = ((panda$core$Bit) { $tmp244 });
    return $returnValue243;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue246;
    bool $tmp247 = self.value >= p_other.value;
    $returnValue246 = ((panda$core$Bit) { $tmp247 });
    return $returnValue246;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue249;
    bool $tmp250 = self.value <= ((int64_t) p_other.value);
    $returnValue249 = ((panda$core$Bit) { $tmp250 });
    return $returnValue249;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue252;
    bool $tmp253 = self.value <= ((int64_t) p_other.value);
    $returnValue252 = ((panda$core$Bit) { $tmp253 });
    return $returnValue252;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue255;
    bool $tmp256 = self.value <= ((int64_t) p_other.value);
    $returnValue255 = ((panda$core$Bit) { $tmp256 });
    return $returnValue255;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue258;
    bool $tmp259 = self.value <= p_other.value;
    $returnValue258 = ((panda$core$Bit) { $tmp259 });
    return $returnValue258;
}
panda$core$Int64 panda$core$Int64$abs$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $returnValue262;
    panda$core$Bit $tmp261 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self, ((panda$core$Int64) { 0 }));
    if ($tmp261.value) {
    {
        panda$core$Int64 $tmp263 = panda$core$Int64$$SUB$R$panda$core$Int64(self);
        $returnValue262 = $tmp263;
        return $returnValue262;
    }
    }
    $returnValue262 = self;
    return $returnValue262;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue267;
    bool $tmp266 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp266 }).value) {
    {
        $returnValue267 = ((panda$core$Int64) { self.value });
        return $returnValue267;
    }
    }
    $returnValue267 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue267;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue271;
    bool $tmp270 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp270 }).value) {
    {
        $returnValue271 = ((panda$core$Int64) { self.value });
        return $returnValue271;
    }
    }
    $returnValue271 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue271;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue275;
    bool $tmp274 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp274 }).value) {
    {
        $returnValue275 = ((panda$core$Int64) { self.value });
        return $returnValue275;
    }
    }
    $returnValue275 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue275;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue279;
    bool $tmp278 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp278 }).value) {
    {
        $returnValue279 = ((panda$core$Int64) { self.value });
        return $returnValue279;
    }
    }
    $returnValue279 = ((panda$core$Int64) { p_other.value });
    return $returnValue279;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue283;
    bool $tmp282 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp282 }).value) {
    {
        $returnValue283 = ((panda$core$Int64) { self.value });
        return $returnValue283;
    }
    }
    $returnValue283 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue283;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue287;
    bool $tmp286 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp286 }).value) {
    {
        $returnValue287 = ((panda$core$Int64) { self.value });
        return $returnValue287;
    }
    }
    $returnValue287 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue287;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue291;
    bool $tmp290 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp290 }).value) {
    {
        $returnValue291 = ((panda$core$Int64) { self.value });
        return $returnValue291;
    }
    }
    $returnValue291 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue291;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue295;
    bool $tmp294 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp294 }).value) {
    {
        $returnValue295 = ((panda$core$Int64) { self.value });
        return $returnValue295;
    }
    }
    $returnValue295 = ((panda$core$Int64) { p_other.value });
    return $returnValue295;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue298;
    panda$core$Int32 $tmp299 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int64 $tmp300 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp299);
    panda$core$Bit $tmp301 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp300, ((panda$core$Int64) { 0 }));
    $returnValue298 = $tmp301;
    return $returnValue298;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue303;
    panda$core$Int32 $tmp304 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int64 $tmp305 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp304);
    panda$core$Bit $tmp306 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp305, ((panda$core$Int64) { 0 }));
    $returnValue303 = $tmp306;
    return $returnValue303;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue308;
    panda$core$Int32 $tmp309 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int64 $tmp310 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp309);
    panda$core$Bit $tmp311 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp310, ((panda$core$Int64) { 0 }));
    $returnValue308 = $tmp311;
    return $returnValue308;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_index) {
    panda$core$Bit $returnValue313;
    panda$core$Int64 $tmp314 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp315 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp314);
    panda$core$Bit $tmp316 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp315, ((panda$core$Int64) { 0 }));
    $returnValue313 = $tmp316;
    return $returnValue313;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue318;
    panda$core$UInt32 $tmp319 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$Int64 $tmp320 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp319);
    panda$core$Bit $tmp321 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp320, ((panda$core$Int64) { 0 }));
    $returnValue318 = $tmp321;
    return $returnValue318;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue323;
    panda$core$UInt32 $tmp324 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$Int64 $tmp325 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp324);
    panda$core$Bit $tmp326 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp325, ((panda$core$Int64) { 0 }));
    $returnValue323 = $tmp326;
    return $returnValue323;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue328;
    panda$core$UInt32 $tmp329 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$Int64 $tmp330 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp329);
    panda$core$Bit $tmp331 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp330, ((panda$core$Int64) { 0 }));
    $returnValue328 = $tmp331;
    return $returnValue328;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue333;
    panda$core$UInt64 $tmp334 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp335 = panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp334);
    panda$core$Bit $tmp336 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp335, ((panda$core$UInt64) { 0 }));
    $returnValue333 = $tmp336;
    return $returnValue333;
}
panda$core$Int64 panda$core$Int64$hash$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $returnValue338;
    $returnValue338 = ((panda$core$Int64) { self.value });
    return $returnValue338;
}
panda$core$Int64$nullable panda$core$Int64$parse$panda$core$String$panda$core$Int64$R$panda$core$Int64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs342;
    panda$core$String* $tmp343;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp344;
    panda$core$Int64$nullable $returnValue347;
    panda$core$UInt64$nullable result352;
    panda$core$Bit $tmp341 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s340);
    if ($tmp341.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp344, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp345 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp344);
        $tmp343 = $tmp345;
        panda$core$UInt64$nullable $tmp346 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp343, p_radix);
        abs342 = $tmp346;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
        if (((panda$core$Bit) { !abs342.nonnull }).value) {
        {
            $returnValue347 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue347;
        }
        }
        panda$core$Int64 $tmp349 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) abs342.value));
        panda$core$Int64 $tmp350 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp349);
        $returnValue347 = ((panda$core$Int64$nullable) { $tmp350, true });
        return $returnValue347;
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp353 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result352 = $tmp353;
        if (((panda$core$Bit) { !result352.nonnull }).value) {
        {
            $returnValue347 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue347;
        }
        }
        panda$core$Int64 $tmp355 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) result352.value));
        $returnValue347 = ((panda$core$Int64$nullable) { $tmp355, true });
        return $returnValue347;
    }
    }
}
panda$core$Int8 panda$core$Int64$convert$R$panda$core$Int8(panda$core$Int64 self) {
    panda$core$Int8 $returnValue357;
    $returnValue357 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $returnValue357;
}
panda$core$Int16 panda$core$Int64$convert$R$panda$core$Int16(panda$core$Int64 self) {
    panda$core$Int16 $returnValue359;
    $returnValue359 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $returnValue359;
}
panda$core$Int32 panda$core$Int64$convert$R$panda$core$Int32(panda$core$Int64 self) {
    panda$core$Int32 $returnValue361;
    $returnValue361 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $returnValue361;
}
panda$core$UInt8 panda$core$Int64$convert$R$panda$core$UInt8(panda$core$Int64 self) {
    panda$core$UInt8 $returnValue363;
    $returnValue363 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $returnValue363;
}
panda$core$UInt16 panda$core$Int64$convert$R$panda$core$UInt16(panda$core$Int64 self) {
    panda$core$UInt16 $returnValue365;
    $returnValue365 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $returnValue365;
}
panda$core$UInt32 panda$core$Int64$convert$R$panda$core$UInt32(panda$core$Int64 self) {
    panda$core$UInt32 $returnValue367;
    $returnValue367 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $returnValue367;
}
panda$core$UInt64 panda$core$Int64$convert$R$panda$core$UInt64(panda$core$Int64 self) {
    panda$core$UInt64 $returnValue369;
    $returnValue369 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $returnValue369;
}
panda$core$Real32 panda$core$Int64$convert$R$panda$core$Real32(panda$core$Int64 self) {
    panda$core$Real32 $returnValue371;
    $returnValue371 = ((panda$core$Real32) { ((float) self.value) });
    return $returnValue371;
}
panda$core$Real64 panda$core$Int64$convert$R$panda$core$Real64(panda$core$Int64 self) {
    panda$core$Real64 $returnValue373;
    $returnValue373 = ((panda$core$Real64) { ((double) self.value) });
    return $returnValue373;
}
panda$core$String* panda$core$Int64$convert$R$panda$core$String(panda$core$Int64 self) {
    panda$core$Int64 max375;
    panda$core$Char8* chars376;
    panda$core$Int64 index377;
    panda$core$Int64 value379;
    panda$core$Char8 $tmp383;
    panda$core$Char8 $tmp394;
    panda$core$Char8 $tmp402;
    panda$core$Int64 size403;
    panda$core$Range$LTpanda$core$Int64$GT $tmp405;
    panda$core$String* $returnValue426;
    panda$core$String* $tmp427;
    panda$core$String* $tmp428;
    max375 = ((panda$core$Int64) { 20 });
    chars376 = ((panda$core$Char8*) pandaZAlloc(max375.value * 1));
    panda$core$Int64 $tmp378 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max375, ((panda$core$Int64) { 1 }));
    index377 = $tmp378;
    value379 = self;
    panda$core$Bit $tmp380 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(value379, ((panda$core$Int64) { 0 }));
    if ($tmp380.value) {
    {
        $l381:;
        {
            panda$core$Int64 $tmp384 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value379, ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp385 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp384, ((panda$core$Int64) { 48 }));
            panda$core$UInt8 $tmp386 = panda$core$Int64$convert$R$panda$core$UInt8($tmp385);
            panda$core$Char8$init$panda$core$UInt8(&$tmp383, $tmp386);
            chars376[index377.value] = $tmp383;
            panda$core$Int64 $tmp387 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value379, ((panda$core$Int64) { 10 }));
            value379 = $tmp387;
            panda$core$Int64 $tmp388 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index377, ((panda$core$Int64) { 1 }));
            index377 = $tmp388;
        }
        panda$core$Bit $tmp390 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(value379, ((panda$core$Int64) { 0 }));
        bool $tmp389 = $tmp390.value;
        if ($tmp389) goto $l381;
        $l382:;
        panda$core$Int64 $tmp391 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index377, ((panda$core$Int64) { 1 }));
        index377 = $tmp391;
    }
    }
    else {
    {
        $l392:;
        {
            panda$core$Int64 $tmp395 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value379, ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp396 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 48 }), $tmp395);
            panda$core$UInt8 $tmp397 = panda$core$Int64$convert$R$panda$core$UInt8($tmp396);
            panda$core$Char8$init$panda$core$UInt8(&$tmp394, $tmp397);
            chars376[index377.value] = $tmp394;
            panda$core$Int64 $tmp398 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value379, ((panda$core$Int64) { 10 }));
            value379 = $tmp398;
            panda$core$Int64 $tmp399 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index377, ((panda$core$Int64) { 1 }));
            index377 = $tmp399;
        }
        panda$core$Bit $tmp401 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(value379, ((panda$core$Int64) { 0 }));
        bool $tmp400 = $tmp401.value;
        if ($tmp400) goto $l392;
        $l393:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp402, ((panda$core$UInt8) { 45 }));
        chars376[index377.value] = $tmp402;
    }
    }
    panda$core$Int64 $tmp404 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max375, index377);
    size403 = $tmp404;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp405, ((panda$core$Int64) { 0 }), size403, ((panda$core$Bit) { false }));
    int64_t $tmp407 = $tmp405.min.value;
    panda$core$Int64 i406 = { $tmp407 };
    int64_t $tmp409 = $tmp405.max.value;
    bool $tmp410 = $tmp405.inclusive.value;
    if ($tmp410) goto $l417; else goto $l418;
    $l417:;
    if ($tmp407 <= $tmp409) goto $l411; else goto $l413;
    $l418:;
    if ($tmp407 < $tmp409) goto $l411; else goto $l413;
    $l411:;
    {
        panda$core$Int64 $tmp419 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i406, index377);
        chars376[i406.value] = chars376[$tmp419.value];
    }
    $l414:;
    int64_t $tmp421 = $tmp409 - i406.value;
    if ($tmp410) goto $l422; else goto $l423;
    $l422:;
    if ((uint64_t) $tmp421 >= 1) goto $l420; else goto $l413;
    $l423:;
    if ((uint64_t) $tmp421 > 1) goto $l420; else goto $l413;
    $l420:;
    i406.value += 1;
    goto $l411;
    $l413:;
    panda$core$String* $tmp429 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp429, chars376, size403);
    $tmp428 = $tmp429;
    $tmp427 = $tmp428;
    $returnValue426 = $tmp427;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
    return $returnValue426;
}
panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String(panda$core$Int64 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue431;
    panda$core$String* $tmp432;
    panda$core$String* $tmp433;
    bool $tmp434 = self.value < 0;
    panda$core$Int64 $tmp435 = panda$core$Int64$abs$R$panda$core$Int64(self);
    panda$core$UInt64 $tmp436 = panda$core$Int64$convert$R$panda$core$UInt64($tmp435);
    panda$core$String* $tmp437 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { $tmp434 }), $tmp436, ((panda$core$UInt64) { 18446744073709551615 }), p_fmt);
    $tmp433 = $tmp437;
    $tmp432 = $tmp433;
    $returnValue431 = $tmp432;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
    return $returnValue431;
}
void panda$core$Int64$cleanup(panda$core$Int64 self) {
}

