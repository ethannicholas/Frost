#include "panda/core/UInt64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
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
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$UInt64 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(self, ((panda$core$UInt64$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$UInt64$wrapper* self, panda$core$String* fmt) {
    return panda$core$UInt64$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64$wrappershim(panda$core$UInt64$wrapper* self) {
    return panda$core$UInt64$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(self->value, ((panda$core$UInt64$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$wrappershim(panda$core$UInt64$wrapper* self, panda$core$Object* other) {
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
    uint64_t $tmp3 = self.value + ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp3 });
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp4 = self.value + ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp4 });
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp5 = self.value + ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp5 });
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp6 = self.value + p_other.value;
    return ((panda$core$UInt64) { $tmp6 });
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp7 = self.value - ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp7 });
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp8 = self.value - ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp8 });
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp9 = self.value - ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp9 });
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp10 = self.value - p_other.value;
    return ((panda$core$UInt64) { $tmp10 });
}
panda$core$UInt64 panda$core$UInt64$$SUB$R$panda$core$UInt64(panda$core$UInt64 self) {
    return ((panda$core$UInt64) { -self.value });
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp12 = self.value * ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp12 });
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp13 = self.value * ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp13 });
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp14 = self.value * ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp14 });
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp15 = self.value * p_other.value;
    return ((panda$core$UInt64) { $tmp15 });
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp16 = self.value / ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp16 });
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp17 = self.value / ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp17 });
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp18 = self.value / ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp18 });
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp19 = self.value / p_other.value;
    return ((panda$core$UInt64) { $tmp19 });
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp20 = self.value % ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp20 });
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp21 = self.value % ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp21 });
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp22 = self.value % ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp22 });
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp23 = self.value % p_other.value;
    return ((panda$core$UInt64) { $tmp23 });
}
panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64(panda$core$UInt64 self) {
    return ((panda$core$UInt64) { ~self.value });
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp25 = self.value & ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp25 });
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp26 = self.value & ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp26 });
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp27 = self.value & ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp27 });
}
panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp28 = ((int64_t) self.value) & p_other.value;
    return ((panda$core$Int64) { $tmp28 });
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp29 = self.value & ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp29 });
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp30 = self.value & ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp30 });
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp31 = self.value & ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp31 });
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp32 = self.value & p_other.value;
    return ((panda$core$UInt64) { $tmp32 });
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp33 = self.value | ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp33 });
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp34 = self.value | ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp34 });
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp35 = self.value | ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp35 });
}
panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp36 = ((int64_t) self.value) | p_other.value;
    return ((panda$core$Int64) { $tmp36 });
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp37 = self.value | ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp37 });
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp38 = self.value | ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp38 });
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp39 = self.value | ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp39 });
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp40 = self.value | p_other.value;
    return ((panda$core$UInt64) { $tmp40 });
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp41 = self.value ^ ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp41 });
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp42 = self.value ^ ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp42 });
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp43 = self.value ^ ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp43 });
}
panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp44 = ((int64_t) self.value) ^ p_other.value;
    return ((panda$core$Int64) { $tmp44 });
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp45 = self.value ^ ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp45 });
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp46 = self.value ^ ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp46 });
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp47 = self.value ^ ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp47 });
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp48 = self.value ^ p_other.value;
    return ((panda$core$UInt64) { $tmp48 });
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp49 = self.value << ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp49 });
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp50 = self.value << ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp50 });
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp51 = self.value << ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp51 });
}
panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp52 = ((int64_t) self.value) << p_other.value;
    return ((panda$core$Int64) { $tmp52 });
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp53 = self.value << ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp53 });
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp54 = self.value << ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp54 });
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp55 = self.value << ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp55 });
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp56 = self.value << p_other.value;
    return ((panda$core$UInt64) { $tmp56 });
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp57 = self.value >> ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp57 });
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp58 = self.value >> ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp58 });
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp59 = self.value >> ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp59 });
}
panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp60 = ((int64_t) self.value) >> p_other.value;
    return ((panda$core$Int64) { $tmp60 });
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp61 = self.value >> ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp61 });
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp62 = self.value >> ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp62 });
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp63 = self.value >> ((uint64_t) p_other.value);
    return ((panda$core$UInt64) { $tmp63 });
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp64 = self.value >> p_other.value;
    return ((panda$core$UInt64) { $tmp64 });
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp65 = self.value == ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp65 });
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp66 = self.value == ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp66 });
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp67 = self.value == ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp67 });
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp68 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp68 });
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp69 = self.value != ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp69 });
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp70 = self.value != ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp70 });
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp71 = self.value != ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp71 });
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp72 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp72 });
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp73 = self.value < ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp73 });
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp74 = self.value < ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp74 });
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp75 = self.value < ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp75 });
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp76 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp76 });
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp77 = self.value > ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp77 });
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp78 = self.value > ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp78 });
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp79 = self.value > ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp79 });
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp80 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp80 });
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp81 = self.value >= ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp81 });
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp82 = self.value >= ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp82 });
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp83 = self.value >= ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp83 });
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp84 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp84 });
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp85 = self.value <= ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp85 });
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp86 = self.value <= ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp86 });
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp87 = self.value <= ((uint64_t) p_other.value);
    return ((panda$core$Bit) { $tmp87 });
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp88 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp88 });
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp89 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp89 }).value) {
    {
        return ((panda$core$UInt64) { self.value });
    }
    }
    return ((panda$core$UInt64) { ((uint64_t) p_other.value) });
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp90 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp90 }).value) {
    {
        return ((panda$core$UInt64) { self.value });
    }
    }
    return ((panda$core$UInt64) { ((uint64_t) p_other.value) });
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp91 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp91 }).value) {
    {
        return ((panda$core$UInt64) { self.value });
    }
    }
    return ((panda$core$UInt64) { ((uint64_t) p_other.value) });
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp92 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp92 }).value) {
    {
        return ((panda$core$UInt64) { self.value });
    }
    }
    return ((panda$core$UInt64) { p_other.value });
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp93 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp93 }).value) {
    {
        return ((panda$core$UInt64) { self.value });
    }
    }
    return ((panda$core$UInt64) { ((uint64_t) p_other.value) });
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp94 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp94 }).value) {
    {
        return ((panda$core$UInt64) { self.value });
    }
    }
    return ((panda$core$UInt64) { ((uint64_t) p_other.value) });
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp95 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp95 }).value) {
    {
        return ((panda$core$UInt64) { self.value });
    }
    }
    return ((panda$core$UInt64) { ((uint64_t) p_other.value) });
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp96 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp96 }).value) {
    {
        return ((panda$core$UInt64) { self.value });
    }
    }
    return ((panda$core$UInt64) { p_other.value });
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp97 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$UInt64 $tmp98 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp97);
    panda$core$Bit $tmp99 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp98, ((panda$core$UInt64) { 0 }));
    return $tmp99;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp100 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$UInt64 $tmp101 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp100);
    panda$core$Bit $tmp102 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp101, ((panda$core$UInt64) { 0 }));
    return $tmp102;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp103 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$UInt64 $tmp104 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp103);
    panda$core$Bit $tmp105 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp104, ((panda$core$UInt64) { 0 }));
    return $tmp105;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp106 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp107 = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp106);
    panda$core$Bit $tmp108 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp107, ((panda$core$Int64) { 0 }));
    return $tmp108;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp109 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt64 $tmp110 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp109);
    panda$core$Bit $tmp111 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp110, ((panda$core$UInt64) { 0 }));
    return $tmp111;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp112 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt64 $tmp113 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp112);
    panda$core$Bit $tmp114 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp113, ((panda$core$UInt64) { 0 }));
    return $tmp114;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp115 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt64 $tmp116 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp115);
    panda$core$Bit $tmp117 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp116, ((panda$core$UInt64) { 0 }));
    return $tmp117;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp118 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp119 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp118);
    panda$core$Bit $tmp120 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp119, ((panda$core$UInt64) { 0 }));
    return $tmp120;
}
panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64(panda$core$UInt64 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt64$nullable panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result121;
    panda$core$UInt64$nullable $tmp122 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result121 = $tmp122;
    if (((panda$core$Bit) { !result121.nonnull }).value) {
    {
        return ((panda$core$UInt64$nullable) { .nonnull = false });
    }
    }
    return result121;
}
panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8(panda$core$UInt64 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16(panda$core$UInt64 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32(panda$core$UInt64 self) {
    return ((panda$core$Int32) { ((int32_t) self.value) });
}
panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64(panda$core$UInt64 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8(panda$core$UInt64 self) {
    return ((panda$core$UInt8) { ((uint8_t) self.value) });
}
panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16(panda$core$UInt64 self) {
    return ((panda$core$UInt16) { ((uint16_t) self.value) });
}
panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32(panda$core$UInt64 self) {
    return ((panda$core$UInt32) { ((uint32_t) self.value) });
}
panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32(panda$core$UInt64 self) {
    return ((panda$core$Real32) { ((float) self.value) });
}
panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64(panda$core$UInt64 self) {
    return ((panda$core$Real64) { ((double) self.value) });
}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String(panda$core$UInt64 self) {
    panda$core$Int64 max123;
    panda$core$Char8* chars124;
    panda$core$Int64 index125;
    panda$core$UInt64 value127;
    panda$core$Char8 $tmp131;
    panda$core$Char8 $tmp141;
    panda$core$Char8 $tmp148;
    panda$core$Int64 size149;
    panda$core$Range$LTpanda$core$Int64$GT $tmp151;
    max123 = ((panda$core$Int64) { 20 });
    chars124 = ((panda$core$Char8*) pandaZAlloc(max123.value * 1));
    panda$core$Int64 $tmp126 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max123, ((panda$core$Int64) { 1 }));
    index125 = $tmp126;
    value127 = self;
    panda$core$Bit $tmp128 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(value127, ((panda$core$UInt64) { 0 }));
    if ($tmp128.value) {
    {
        $l129:;
        {
            panda$core$UInt64 $tmp132 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value127, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp133 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp132, ((panda$core$UInt64) { 48 }));
            panda$core$UInt8 $tmp134 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp133);
            panda$core$Char8$init$panda$core$UInt8(&$tmp131, $tmp134);
            chars124[index125.value] = $tmp131;
            panda$core$UInt64 $tmp135 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value127, ((panda$core$UInt64) { 10 }));
            value127 = $tmp135;
            panda$core$Int64 $tmp136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index125, ((panda$core$Int64) { 1 }));
            index125 = $tmp136;
        }
        panda$core$Bit $tmp137 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value127, ((panda$core$UInt64) { 0 }));
        if ($tmp137.value) goto $l129;
        $l130:;
        panda$core$Int64 $tmp138 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index125, ((panda$core$Int64) { 1 }));
        index125 = $tmp138;
    }
    }
    else {
    {
        $l139:;
        {
            panda$core$UInt64 $tmp142 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value127, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp143 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 48 }), $tmp142);
            panda$core$UInt8 $tmp144 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp143);
            panda$core$Char8$init$panda$core$UInt8(&$tmp141, $tmp144);
            chars124[index125.value] = $tmp141;
            panda$core$UInt64 $tmp145 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value127, ((panda$core$UInt64) { 10 }));
            value127 = $tmp145;
            panda$core$Int64 $tmp146 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index125, ((panda$core$Int64) { 1 }));
            index125 = $tmp146;
        }
        panda$core$Bit $tmp147 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(value127, ((panda$core$UInt64) { 0 }));
        if ($tmp147.value) goto $l139;
        $l140:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp148, ((panda$core$UInt8) { 45 }));
        chars124[index125.value] = $tmp148;
    }
    }
    panda$core$Int64 $tmp150 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max123, index125);
    size149 = $tmp150;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp151, ((panda$core$Int64) { 0 }), size149, ((panda$core$Bit) { false }));
    int64_t $tmp153 = $tmp151.min.value;
    panda$core$Int64 i152 = { $tmp153 };
    int64_t $tmp155 = $tmp151.max.value;
    bool $tmp156 = $tmp151.inclusive.value;
    if ($tmp156) goto $l163; else goto $l164;
    $l163:;
    if ($tmp153 <= $tmp155) goto $l157; else goto $l159;
    $l164:;
    if ($tmp153 < $tmp155) goto $l157; else goto $l159;
    $l157:;
    {
        panda$core$Int64 $tmp165 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i152, index125);
        chars124[i152.value] = chars124[$tmp165.value];
    }
    $l160:;
    int64_t $tmp167 = $tmp155 - i152.value;
    if ($tmp156) goto $l168; else goto $l169;
    $l168:;
    if ((uint64_t) $tmp167 >= 1) goto $l166; else goto $l159;
    $l169:;
    if ((uint64_t) $tmp167 > 1) goto $l166; else goto $l159;
    $l166:;
    i152.value += 1;
    goto $l157;
    $l159:;
    panda$core$String* $tmp172 = (panda$core$String*) pandaZAlloc(48);
    $tmp172->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp172->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp172, chars124, size149);
    return $tmp172;
}
panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String(panda$core$UInt64 self, panda$core$String* p_fmt) {
    panda$core$String* $tmp174 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), self, ((panda$core$UInt64) { 18446744073709551615 }), p_fmt);
    return $tmp174;
}
void panda$core$UInt64$cleanup(panda$core$UInt64 self) {
}

