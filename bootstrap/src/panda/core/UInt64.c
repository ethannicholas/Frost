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
    panda$core$UInt64 $returnValue3;
    uint64_t $tmp4 = self.value + ((uint64_t) p_other.value);
    $returnValue3 = ((panda$core$UInt64) { $tmp4 });
    return $returnValue3;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue6;
    uint64_t $tmp7 = self.value + ((uint64_t) p_other.value);
    $returnValue6 = ((panda$core$UInt64) { $tmp7 });
    return $returnValue6;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue9;
    uint64_t $tmp10 = self.value + ((uint64_t) p_other.value);
    $returnValue9 = ((panda$core$UInt64) { $tmp10 });
    return $returnValue9;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue12;
    uint64_t $tmp13 = self.value + p_other.value;
    $returnValue12 = ((panda$core$UInt64) { $tmp13 });
    return $returnValue12;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue15;
    uint64_t $tmp16 = self.value - ((uint64_t) p_other.value);
    $returnValue15 = ((panda$core$UInt64) { $tmp16 });
    return $returnValue15;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue18;
    uint64_t $tmp19 = self.value - ((uint64_t) p_other.value);
    $returnValue18 = ((panda$core$UInt64) { $tmp19 });
    return $returnValue18;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue21;
    uint64_t $tmp22 = self.value - ((uint64_t) p_other.value);
    $returnValue21 = ((panda$core$UInt64) { $tmp22 });
    return $returnValue21;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue24;
    uint64_t $tmp25 = self.value - p_other.value;
    $returnValue24 = ((panda$core$UInt64) { $tmp25 });
    return $returnValue24;
}
panda$core$UInt64 panda$core$UInt64$$SUB$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $returnValue27;
    $returnValue27 = ((panda$core$UInt64) { -self.value });
    return $returnValue27;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue30;
    uint64_t $tmp31 = self.value * ((uint64_t) p_other.value);
    $returnValue30 = ((panda$core$UInt64) { $tmp31 });
    return $returnValue30;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue33;
    uint64_t $tmp34 = self.value * ((uint64_t) p_other.value);
    $returnValue33 = ((panda$core$UInt64) { $tmp34 });
    return $returnValue33;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue36;
    uint64_t $tmp37 = self.value * ((uint64_t) p_other.value);
    $returnValue36 = ((panda$core$UInt64) { $tmp37 });
    return $returnValue36;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue39;
    uint64_t $tmp40 = self.value * p_other.value;
    $returnValue39 = ((panda$core$UInt64) { $tmp40 });
    return $returnValue39;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue42;
    uint64_t $tmp43 = self.value / ((uint64_t) p_other.value);
    $returnValue42 = ((panda$core$UInt64) { $tmp43 });
    return $returnValue42;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue45;
    uint64_t $tmp46 = self.value / ((uint64_t) p_other.value);
    $returnValue45 = ((panda$core$UInt64) { $tmp46 });
    return $returnValue45;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue48;
    uint64_t $tmp49 = self.value / ((uint64_t) p_other.value);
    $returnValue48 = ((panda$core$UInt64) { $tmp49 });
    return $returnValue48;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue51;
    uint64_t $tmp52 = self.value / p_other.value;
    $returnValue51 = ((panda$core$UInt64) { $tmp52 });
    return $returnValue51;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue54;
    uint64_t $tmp55 = self.value % ((uint64_t) p_other.value);
    $returnValue54 = ((panda$core$UInt64) { $tmp55 });
    return $returnValue54;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue57;
    uint64_t $tmp58 = self.value % ((uint64_t) p_other.value);
    $returnValue57 = ((panda$core$UInt64) { $tmp58 });
    return $returnValue57;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue60;
    uint64_t $tmp61 = self.value % ((uint64_t) p_other.value);
    $returnValue60 = ((panda$core$UInt64) { $tmp61 });
    return $returnValue60;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue63;
    uint64_t $tmp64 = self.value % p_other.value;
    $returnValue63 = ((panda$core$UInt64) { $tmp64 });
    return $returnValue63;
}
panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $returnValue66;
    $returnValue66 = ((panda$core$UInt64) { ~self.value });
    return $returnValue66;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue69;
    uint64_t $tmp70 = self.value & ((uint64_t) p_other.value);
    $returnValue69 = ((panda$core$UInt64) { $tmp70 });
    return $returnValue69;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue72;
    uint64_t $tmp73 = self.value & ((uint64_t) p_other.value);
    $returnValue72 = ((panda$core$UInt64) { $tmp73 });
    return $returnValue72;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue75;
    uint64_t $tmp76 = self.value & ((uint64_t) p_other.value);
    $returnValue75 = ((panda$core$UInt64) { $tmp76 });
    return $returnValue75;
}
panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue78;
    int64_t $tmp79 = ((int64_t) self.value) & p_other.value;
    $returnValue78 = ((panda$core$Int64) { $tmp79 });
    return $returnValue78;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue81;
    uint64_t $tmp82 = self.value & ((uint64_t) p_other.value);
    $returnValue81 = ((panda$core$UInt64) { $tmp82 });
    return $returnValue81;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue84;
    uint64_t $tmp85 = self.value & ((uint64_t) p_other.value);
    $returnValue84 = ((panda$core$UInt64) { $tmp85 });
    return $returnValue84;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue87;
    uint64_t $tmp88 = self.value & ((uint64_t) p_other.value);
    $returnValue87 = ((panda$core$UInt64) { $tmp88 });
    return $returnValue87;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue90;
    uint64_t $tmp91 = self.value & p_other.value;
    $returnValue90 = ((panda$core$UInt64) { $tmp91 });
    return $returnValue90;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue93;
    uint64_t $tmp94 = self.value | ((uint64_t) p_other.value);
    $returnValue93 = ((panda$core$UInt64) { $tmp94 });
    return $returnValue93;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue96;
    uint64_t $tmp97 = self.value | ((uint64_t) p_other.value);
    $returnValue96 = ((panda$core$UInt64) { $tmp97 });
    return $returnValue96;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue99;
    uint64_t $tmp100 = self.value | ((uint64_t) p_other.value);
    $returnValue99 = ((panda$core$UInt64) { $tmp100 });
    return $returnValue99;
}
panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue102;
    int64_t $tmp103 = ((int64_t) self.value) | p_other.value;
    $returnValue102 = ((panda$core$Int64) { $tmp103 });
    return $returnValue102;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue105;
    uint64_t $tmp106 = self.value | ((uint64_t) p_other.value);
    $returnValue105 = ((panda$core$UInt64) { $tmp106 });
    return $returnValue105;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue108;
    uint64_t $tmp109 = self.value | ((uint64_t) p_other.value);
    $returnValue108 = ((panda$core$UInt64) { $tmp109 });
    return $returnValue108;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue111;
    uint64_t $tmp112 = self.value | ((uint64_t) p_other.value);
    $returnValue111 = ((panda$core$UInt64) { $tmp112 });
    return $returnValue111;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue114;
    uint64_t $tmp115 = self.value | p_other.value;
    $returnValue114 = ((panda$core$UInt64) { $tmp115 });
    return $returnValue114;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue117;
    uint64_t $tmp118 = self.value ^ ((uint64_t) p_other.value);
    $returnValue117 = ((panda$core$UInt64) { $tmp118 });
    return $returnValue117;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue120;
    uint64_t $tmp121 = self.value ^ ((uint64_t) p_other.value);
    $returnValue120 = ((panda$core$UInt64) { $tmp121 });
    return $returnValue120;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue123;
    uint64_t $tmp124 = self.value ^ ((uint64_t) p_other.value);
    $returnValue123 = ((panda$core$UInt64) { $tmp124 });
    return $returnValue123;
}
panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue126;
    int64_t $tmp127 = ((int64_t) self.value) ^ p_other.value;
    $returnValue126 = ((panda$core$Int64) { $tmp127 });
    return $returnValue126;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue129;
    uint64_t $tmp130 = self.value ^ ((uint64_t) p_other.value);
    $returnValue129 = ((panda$core$UInt64) { $tmp130 });
    return $returnValue129;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue132;
    uint64_t $tmp133 = self.value ^ ((uint64_t) p_other.value);
    $returnValue132 = ((panda$core$UInt64) { $tmp133 });
    return $returnValue132;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue135;
    uint64_t $tmp136 = self.value ^ ((uint64_t) p_other.value);
    $returnValue135 = ((panda$core$UInt64) { $tmp136 });
    return $returnValue135;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue138;
    uint64_t $tmp139 = self.value ^ p_other.value;
    $returnValue138 = ((panda$core$UInt64) { $tmp139 });
    return $returnValue138;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue141;
    uint64_t $tmp142 = self.value << ((uint64_t) p_other.value);
    $returnValue141 = ((panda$core$UInt64) { $tmp142 });
    return $returnValue141;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue144;
    uint64_t $tmp145 = self.value << ((uint64_t) p_other.value);
    $returnValue144 = ((panda$core$UInt64) { $tmp145 });
    return $returnValue144;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue147;
    uint64_t $tmp148 = self.value << ((uint64_t) p_other.value);
    $returnValue147 = ((panda$core$UInt64) { $tmp148 });
    return $returnValue147;
}
panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue150;
    int64_t $tmp151 = ((int64_t) self.value) << p_other.value;
    $returnValue150 = ((panda$core$Int64) { $tmp151 });
    return $returnValue150;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue153;
    uint64_t $tmp154 = self.value << ((uint64_t) p_other.value);
    $returnValue153 = ((panda$core$UInt64) { $tmp154 });
    return $returnValue153;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue156;
    uint64_t $tmp157 = self.value << ((uint64_t) p_other.value);
    $returnValue156 = ((panda$core$UInt64) { $tmp157 });
    return $returnValue156;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue159;
    uint64_t $tmp160 = self.value << ((uint64_t) p_other.value);
    $returnValue159 = ((panda$core$UInt64) { $tmp160 });
    return $returnValue159;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue162;
    uint64_t $tmp163 = self.value << p_other.value;
    $returnValue162 = ((panda$core$UInt64) { $tmp163 });
    return $returnValue162;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue165;
    uint64_t $tmp166 = self.value >> ((uint64_t) p_other.value);
    $returnValue165 = ((panda$core$UInt64) { $tmp166 });
    return $returnValue165;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue168;
    uint64_t $tmp169 = self.value >> ((uint64_t) p_other.value);
    $returnValue168 = ((panda$core$UInt64) { $tmp169 });
    return $returnValue168;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue171;
    uint64_t $tmp172 = self.value >> ((uint64_t) p_other.value);
    $returnValue171 = ((panda$core$UInt64) { $tmp172 });
    return $returnValue171;
}
panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue174;
    int64_t $tmp175 = ((int64_t) self.value) >> p_other.value;
    $returnValue174 = ((panda$core$Int64) { $tmp175 });
    return $returnValue174;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue177;
    uint64_t $tmp178 = self.value >> ((uint64_t) p_other.value);
    $returnValue177 = ((panda$core$UInt64) { $tmp178 });
    return $returnValue177;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue180;
    uint64_t $tmp181 = self.value >> ((uint64_t) p_other.value);
    $returnValue180 = ((panda$core$UInt64) { $tmp181 });
    return $returnValue180;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue183;
    uint64_t $tmp184 = self.value >> ((uint64_t) p_other.value);
    $returnValue183 = ((panda$core$UInt64) { $tmp184 });
    return $returnValue183;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue186;
    uint64_t $tmp187 = self.value >> p_other.value;
    $returnValue186 = ((panda$core$UInt64) { $tmp187 });
    return $returnValue186;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue189;
    bool $tmp190 = self.value == ((uint64_t) p_other.value);
    $returnValue189 = ((panda$core$Bit) { $tmp190 });
    return $returnValue189;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue192;
    bool $tmp193 = self.value == ((uint64_t) p_other.value);
    $returnValue192 = ((panda$core$Bit) { $tmp193 });
    return $returnValue192;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue195;
    bool $tmp196 = self.value == ((uint64_t) p_other.value);
    $returnValue195 = ((panda$core$Bit) { $tmp196 });
    return $returnValue195;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue198;
    bool $tmp199 = self.value == p_other.value;
    $returnValue198 = ((panda$core$Bit) { $tmp199 });
    return $returnValue198;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue201;
    bool $tmp202 = self.value != ((uint64_t) p_other.value);
    $returnValue201 = ((panda$core$Bit) { $tmp202 });
    return $returnValue201;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue204;
    bool $tmp205 = self.value != ((uint64_t) p_other.value);
    $returnValue204 = ((panda$core$Bit) { $tmp205 });
    return $returnValue204;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue207;
    bool $tmp208 = self.value != ((uint64_t) p_other.value);
    $returnValue207 = ((panda$core$Bit) { $tmp208 });
    return $returnValue207;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue210;
    bool $tmp211 = self.value != p_other.value;
    $returnValue210 = ((panda$core$Bit) { $tmp211 });
    return $returnValue210;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue213;
    bool $tmp214 = self.value < ((uint64_t) p_other.value);
    $returnValue213 = ((panda$core$Bit) { $tmp214 });
    return $returnValue213;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue216;
    bool $tmp217 = self.value < ((uint64_t) p_other.value);
    $returnValue216 = ((panda$core$Bit) { $tmp217 });
    return $returnValue216;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue219;
    bool $tmp220 = self.value < ((uint64_t) p_other.value);
    $returnValue219 = ((panda$core$Bit) { $tmp220 });
    return $returnValue219;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue222;
    bool $tmp223 = self.value < p_other.value;
    $returnValue222 = ((panda$core$Bit) { $tmp223 });
    return $returnValue222;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue225;
    bool $tmp226 = self.value > ((uint64_t) p_other.value);
    $returnValue225 = ((panda$core$Bit) { $tmp226 });
    return $returnValue225;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue228;
    bool $tmp229 = self.value > ((uint64_t) p_other.value);
    $returnValue228 = ((panda$core$Bit) { $tmp229 });
    return $returnValue228;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue231;
    bool $tmp232 = self.value > ((uint64_t) p_other.value);
    $returnValue231 = ((panda$core$Bit) { $tmp232 });
    return $returnValue231;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue234;
    bool $tmp235 = self.value > p_other.value;
    $returnValue234 = ((panda$core$Bit) { $tmp235 });
    return $returnValue234;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue237;
    bool $tmp238 = self.value >= ((uint64_t) p_other.value);
    $returnValue237 = ((panda$core$Bit) { $tmp238 });
    return $returnValue237;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue240;
    bool $tmp241 = self.value >= ((uint64_t) p_other.value);
    $returnValue240 = ((panda$core$Bit) { $tmp241 });
    return $returnValue240;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue243;
    bool $tmp244 = self.value >= ((uint64_t) p_other.value);
    $returnValue243 = ((panda$core$Bit) { $tmp244 });
    return $returnValue243;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue246;
    bool $tmp247 = self.value >= p_other.value;
    $returnValue246 = ((panda$core$Bit) { $tmp247 });
    return $returnValue246;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue249;
    bool $tmp250 = self.value <= ((uint64_t) p_other.value);
    $returnValue249 = ((panda$core$Bit) { $tmp250 });
    return $returnValue249;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue252;
    bool $tmp253 = self.value <= ((uint64_t) p_other.value);
    $returnValue252 = ((panda$core$Bit) { $tmp253 });
    return $returnValue252;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue255;
    bool $tmp256 = self.value <= ((uint64_t) p_other.value);
    $returnValue255 = ((panda$core$Bit) { $tmp256 });
    return $returnValue255;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue258;
    bool $tmp259 = self.value <= p_other.value;
    $returnValue258 = ((panda$core$Bit) { $tmp259 });
    return $returnValue258;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue262;
    bool $tmp261 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp261 }).value) {
    {
        $returnValue262 = ((panda$core$UInt64) { self.value });
        return $returnValue262;
    }
    }
    $returnValue262 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue262;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue266;
    bool $tmp265 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp265 }).value) {
    {
        $returnValue266 = ((panda$core$UInt64) { self.value });
        return $returnValue266;
    }
    }
    $returnValue266 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue266;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue270;
    bool $tmp269 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp269 }).value) {
    {
        $returnValue270 = ((panda$core$UInt64) { self.value });
        return $returnValue270;
    }
    }
    $returnValue270 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue270;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue274;
    bool $tmp273 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp273 }).value) {
    {
        $returnValue274 = ((panda$core$UInt64) { self.value });
        return $returnValue274;
    }
    }
    $returnValue274 = ((panda$core$UInt64) { p_other.value });
    return $returnValue274;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue278;
    bool $tmp277 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp277 }).value) {
    {
        $returnValue278 = ((panda$core$UInt64) { self.value });
        return $returnValue278;
    }
    }
    $returnValue278 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue278;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue282;
    bool $tmp281 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp281 }).value) {
    {
        $returnValue282 = ((panda$core$UInt64) { self.value });
        return $returnValue282;
    }
    }
    $returnValue282 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue282;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue286;
    bool $tmp285 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp285 }).value) {
    {
        $returnValue286 = ((panda$core$UInt64) { self.value });
        return $returnValue286;
    }
    }
    $returnValue286 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue286;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue290;
    bool $tmp289 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp289 }).value) {
    {
        $returnValue290 = ((panda$core$UInt64) { self.value });
        return $returnValue290;
    }
    }
    $returnValue290 = ((panda$core$UInt64) { p_other.value });
    return $returnValue290;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue293;
    panda$core$Int32 $tmp294 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$UInt64 $tmp295 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp294);
    panda$core$Bit $tmp296 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp295, ((panda$core$UInt64) { 0 }));
    $returnValue293 = $tmp296;
    return $returnValue293;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue298;
    panda$core$Int32 $tmp299 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$UInt64 $tmp300 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp299);
    panda$core$Bit $tmp301 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp300, ((panda$core$UInt64) { 0 }));
    $returnValue298 = $tmp301;
    return $returnValue298;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue303;
    panda$core$Int32 $tmp304 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$UInt64 $tmp305 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp304);
    panda$core$Bit $tmp306 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp305, ((panda$core$UInt64) { 0 }));
    $returnValue303 = $tmp306;
    return $returnValue303;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int64 p_index) {
    panda$core$Bit $returnValue308;
    panda$core$Int64 $tmp309 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp310 = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp309);
    panda$core$Bit $tmp311 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp310, ((panda$core$Int64) { 0 }));
    $returnValue308 = $tmp311;
    return $returnValue308;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue313;
    panda$core$UInt32 $tmp314 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt64 $tmp315 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp314);
    panda$core$Bit $tmp316 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp315, ((panda$core$UInt64) { 0 }));
    $returnValue313 = $tmp316;
    return $returnValue313;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue318;
    panda$core$UInt32 $tmp319 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt64 $tmp320 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp319);
    panda$core$Bit $tmp321 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp320, ((panda$core$UInt64) { 0 }));
    $returnValue318 = $tmp321;
    return $returnValue318;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue323;
    panda$core$UInt32 $tmp324 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt64 $tmp325 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp324);
    panda$core$Bit $tmp326 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp325, ((panda$core$UInt64) { 0 }));
    $returnValue323 = $tmp326;
    return $returnValue323;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue328;
    panda$core$UInt64 $tmp329 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp330 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp329);
    panda$core$Bit $tmp331 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp330, ((panda$core$UInt64) { 0 }));
    $returnValue328 = $tmp331;
    return $returnValue328;
}
panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $returnValue333;
    $returnValue333 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue333;
}
panda$core$UInt64$nullable panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result335;
    panda$core$UInt64$nullable $returnValue337;
    panda$core$UInt64$nullable $tmp336 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result335 = $tmp336;
    if (((panda$core$Bit) { !result335.nonnull }).value) {
    {
        $returnValue337 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue337;
    }
    }
    $returnValue337 = result335;
    return $returnValue337;
}
panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8(panda$core$UInt64 self) {
    panda$core$Int8 $returnValue340;
    $returnValue340 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $returnValue340;
}
panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16(panda$core$UInt64 self) {
    panda$core$Int16 $returnValue342;
    $returnValue342 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $returnValue342;
}
panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32(panda$core$UInt64 self) {
    panda$core$Int32 $returnValue344;
    $returnValue344 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $returnValue344;
}
panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $returnValue346;
    $returnValue346 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue346;
}
panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8(panda$core$UInt64 self) {
    panda$core$UInt8 $returnValue348;
    $returnValue348 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $returnValue348;
}
panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16(panda$core$UInt64 self) {
    panda$core$UInt16 $returnValue350;
    $returnValue350 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $returnValue350;
}
panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32(panda$core$UInt64 self) {
    panda$core$UInt32 $returnValue352;
    $returnValue352 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $returnValue352;
}
panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32(panda$core$UInt64 self) {
    panda$core$Real32 $returnValue354;
    $returnValue354 = ((panda$core$Real32) { ((float) self.value) });
    return $returnValue354;
}
panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64(panda$core$UInt64 self) {
    panda$core$Real64 $returnValue356;
    $returnValue356 = ((panda$core$Real64) { ((double) self.value) });
    return $returnValue356;
}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String(panda$core$UInt64 self) {
    panda$core$Int64 max358;
    panda$core$Char8* chars359;
    panda$core$Int64 index360;
    panda$core$UInt64 value362;
    panda$core$Char8 $tmp366;
    panda$core$Char8 $tmp377;
    panda$core$Char8 $tmp385;
    panda$core$Int64 size386;
    panda$core$Range$LTpanda$core$Int64$GT $tmp388;
    panda$core$String* $returnValue409;
    panda$core$String* $tmp410;
    panda$core$String* $tmp411;
    max358 = ((panda$core$Int64) { 20 });
    chars359 = ((panda$core$Char8*) pandaZAlloc(max358.value * 1));
    panda$core$Int64 $tmp361 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max358, ((panda$core$Int64) { 1 }));
    index360 = $tmp361;
    value362 = self;
    panda$core$Bit $tmp363 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(value362, ((panda$core$UInt64) { 0 }));
    if ($tmp363.value) {
    {
        $l364:;
        {
            panda$core$UInt64 $tmp367 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value362, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp368 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp367, ((panda$core$UInt64) { 48 }));
            panda$core$UInt8 $tmp369 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp368);
            panda$core$Char8$init$panda$core$UInt8(&$tmp366, $tmp369);
            chars359[index360.value] = $tmp366;
            panda$core$UInt64 $tmp370 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value362, ((panda$core$UInt64) { 10 }));
            value362 = $tmp370;
            panda$core$Int64 $tmp371 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index360, ((panda$core$Int64) { 1 }));
            index360 = $tmp371;
        }
        panda$core$Bit $tmp373 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value362, ((panda$core$UInt64) { 0 }));
        bool $tmp372 = $tmp373.value;
        if ($tmp372) goto $l364;
        $l365:;
        panda$core$Int64 $tmp374 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index360, ((panda$core$Int64) { 1 }));
        index360 = $tmp374;
    }
    }
    else {
    {
        $l375:;
        {
            panda$core$UInt64 $tmp378 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value362, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp379 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 48 }), $tmp378);
            panda$core$UInt8 $tmp380 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp379);
            panda$core$Char8$init$panda$core$UInt8(&$tmp377, $tmp380);
            chars359[index360.value] = $tmp377;
            panda$core$UInt64 $tmp381 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value362, ((panda$core$UInt64) { 10 }));
            value362 = $tmp381;
            panda$core$Int64 $tmp382 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index360, ((panda$core$Int64) { 1 }));
            index360 = $tmp382;
        }
        panda$core$Bit $tmp384 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(value362, ((panda$core$UInt64) { 0 }));
        bool $tmp383 = $tmp384.value;
        if ($tmp383) goto $l375;
        $l376:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp385, ((panda$core$UInt8) { 45 }));
        chars359[index360.value] = $tmp385;
    }
    }
    panda$core$Int64 $tmp387 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max358, index360);
    size386 = $tmp387;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp388, ((panda$core$Int64) { 0 }), size386, ((panda$core$Bit) { false }));
    int64_t $tmp390 = $tmp388.min.value;
    panda$core$Int64 i389 = { $tmp390 };
    int64_t $tmp392 = $tmp388.max.value;
    bool $tmp393 = $tmp388.inclusive.value;
    if ($tmp393) goto $l400; else goto $l401;
    $l400:;
    if ($tmp390 <= $tmp392) goto $l394; else goto $l396;
    $l401:;
    if ($tmp390 < $tmp392) goto $l394; else goto $l396;
    $l394:;
    {
        panda$core$Int64 $tmp402 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i389, index360);
        chars359[i389.value] = chars359[$tmp402.value];
    }
    $l397:;
    int64_t $tmp404 = $tmp392 - i389.value;
    if ($tmp393) goto $l405; else goto $l406;
    $l405:;
    if ((uint64_t) $tmp404 >= 1) goto $l403; else goto $l396;
    $l406:;
    if ((uint64_t) $tmp404 > 1) goto $l403; else goto $l396;
    $l403:;
    i389.value += 1;
    goto $l394;
    $l396:;
    panda$core$String* $tmp412 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp412, chars359, size386);
    $tmp411 = $tmp412;
    $tmp410 = $tmp411;
    $returnValue409 = $tmp410;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
    return $returnValue409;
}
panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String(panda$core$UInt64 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue414;
    panda$core$String* $tmp415;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), self, ((panda$core$UInt64) { 18446744073709551615 }), p_fmt);
    $tmp416 = $tmp417;
    $tmp415 = $tmp416;
    $returnValue414 = $tmp415;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp415));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp416));
    return $returnValue414;
}
void panda$core$UInt64$cleanup(panda$core$UInt64 self) {
}

