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
    uint64_t $tmp4 = self.value + ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp3 = ((panda$core$UInt64) { $tmp4 });
    return $tmp3;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp6 = self.value + ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp5 = ((panda$core$UInt64) { $tmp6 });
    return $tmp5;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp8 = self.value + ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp7 = ((panda$core$UInt64) { $tmp8 });
    return $tmp7;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp10 = self.value + p_other.value;
    panda$core$UInt64 $tmp9 = ((panda$core$UInt64) { $tmp10 });
    return $tmp9;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp12 = self.value - ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp11 = ((panda$core$UInt64) { $tmp12 });
    return $tmp11;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp14 = self.value - ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp13 = ((panda$core$UInt64) { $tmp14 });
    return $tmp13;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp16 = self.value - ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp15 = ((panda$core$UInt64) { $tmp16 });
    return $tmp15;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp18 = self.value - p_other.value;
    panda$core$UInt64 $tmp17 = ((panda$core$UInt64) { $tmp18 });
    return $tmp17;
}
panda$core$UInt64 panda$core$UInt64$$SUB$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $tmp19 = ((panda$core$UInt64) { -self.value });
    return $tmp19;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp22 = self.value * ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp21 = ((panda$core$UInt64) { $tmp22 });
    return $tmp21;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp24 = self.value * ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp23 = ((panda$core$UInt64) { $tmp24 });
    return $tmp23;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp26 = self.value * ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp25 = ((panda$core$UInt64) { $tmp26 });
    return $tmp25;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp28 = self.value * p_other.value;
    panda$core$UInt64 $tmp27 = ((panda$core$UInt64) { $tmp28 });
    return $tmp27;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp30 = self.value / ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp29 = ((panda$core$UInt64) { $tmp30 });
    return $tmp29;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp32 = self.value / ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp31 = ((panda$core$UInt64) { $tmp32 });
    return $tmp31;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp34 = self.value / ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp33 = ((panda$core$UInt64) { $tmp34 });
    return $tmp33;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp36 = self.value / p_other.value;
    panda$core$UInt64 $tmp35 = ((panda$core$UInt64) { $tmp36 });
    return $tmp35;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp38 = self.value % ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp37 = ((panda$core$UInt64) { $tmp38 });
    return $tmp37;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp40 = self.value % ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp39 = ((panda$core$UInt64) { $tmp40 });
    return $tmp39;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp42 = self.value % ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp41 = ((panda$core$UInt64) { $tmp42 });
    return $tmp41;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp44 = self.value % p_other.value;
    panda$core$UInt64 $tmp43 = ((panda$core$UInt64) { $tmp44 });
    return $tmp43;
}
panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $tmp45 = ((panda$core$UInt64) { ~self.value });
    return $tmp45;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp48 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp47 = ((panda$core$UInt64) { $tmp48 });
    return $tmp47;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp50 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp49 = ((panda$core$UInt64) { $tmp50 });
    return $tmp49;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp52 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp51 = ((panda$core$UInt64) { $tmp52 });
    return $tmp51;
}
panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp54 = ((int64_t) self.value) & p_other.value;
    panda$core$Int64 $tmp53 = ((panda$core$Int64) { $tmp54 });
    return $tmp53;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp56 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp55 = ((panda$core$UInt64) { $tmp56 });
    return $tmp55;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp58 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp57 = ((panda$core$UInt64) { $tmp58 });
    return $tmp57;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp60 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp59 = ((panda$core$UInt64) { $tmp60 });
    return $tmp59;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp62 = self.value & p_other.value;
    panda$core$UInt64 $tmp61 = ((panda$core$UInt64) { $tmp62 });
    return $tmp61;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp64 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp63 = ((panda$core$UInt64) { $tmp64 });
    return $tmp63;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp66 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp65 = ((panda$core$UInt64) { $tmp66 });
    return $tmp65;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp68 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp67 = ((panda$core$UInt64) { $tmp68 });
    return $tmp67;
}
panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp70 = ((int64_t) self.value) | p_other.value;
    panda$core$Int64 $tmp69 = ((panda$core$Int64) { $tmp70 });
    return $tmp69;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp72 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp71 = ((panda$core$UInt64) { $tmp72 });
    return $tmp71;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp74 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp73 = ((panda$core$UInt64) { $tmp74 });
    return $tmp73;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp76 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp75 = ((panda$core$UInt64) { $tmp76 });
    return $tmp75;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp78 = self.value | p_other.value;
    panda$core$UInt64 $tmp77 = ((panda$core$UInt64) { $tmp78 });
    return $tmp77;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp80 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp79 = ((panda$core$UInt64) { $tmp80 });
    return $tmp79;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp82 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp81 = ((panda$core$UInt64) { $tmp82 });
    return $tmp81;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp84 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp83 = ((panda$core$UInt64) { $tmp84 });
    return $tmp83;
}
panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp86 = ((int64_t) self.value) ^ p_other.value;
    panda$core$Int64 $tmp85 = ((panda$core$Int64) { $tmp86 });
    return $tmp85;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp88 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp87 = ((panda$core$UInt64) { $tmp88 });
    return $tmp87;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp90 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp89 = ((panda$core$UInt64) { $tmp90 });
    return $tmp89;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp92 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp91 = ((panda$core$UInt64) { $tmp92 });
    return $tmp91;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp94 = self.value ^ p_other.value;
    panda$core$UInt64 $tmp93 = ((panda$core$UInt64) { $tmp94 });
    return $tmp93;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp96 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp95 = ((panda$core$UInt64) { $tmp96 });
    return $tmp95;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp98 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp97 = ((panda$core$UInt64) { $tmp98 });
    return $tmp97;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp100 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp99 = ((panda$core$UInt64) { $tmp100 });
    return $tmp99;
}
panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp102 = ((int64_t) self.value) << p_other.value;
    panda$core$Int64 $tmp101 = ((panda$core$Int64) { $tmp102 });
    return $tmp101;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp104 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp103 = ((panda$core$UInt64) { $tmp104 });
    return $tmp103;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp106 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp105 = ((panda$core$UInt64) { $tmp106 });
    return $tmp105;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp108 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp107 = ((panda$core$UInt64) { $tmp108 });
    return $tmp107;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp110 = self.value << p_other.value;
    panda$core$UInt64 $tmp109 = ((panda$core$UInt64) { $tmp110 });
    return $tmp109;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    uint64_t $tmp112 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp111 = ((panda$core$UInt64) { $tmp112 });
    return $tmp111;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    uint64_t $tmp114 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp113 = ((panda$core$UInt64) { $tmp114 });
    return $tmp113;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    uint64_t $tmp116 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp115 = ((panda$core$UInt64) { $tmp116 });
    return $tmp115;
}
panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    int64_t $tmp118 = ((int64_t) self.value) >> p_other.value;
    panda$core$Int64 $tmp117 = ((panda$core$Int64) { $tmp118 });
    return $tmp117;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    uint64_t $tmp120 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp119 = ((panda$core$UInt64) { $tmp120 });
    return $tmp119;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    uint64_t $tmp122 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp121 = ((panda$core$UInt64) { $tmp122 });
    return $tmp121;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    uint64_t $tmp124 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64 $tmp123 = ((panda$core$UInt64) { $tmp124 });
    return $tmp123;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    uint64_t $tmp126 = self.value >> p_other.value;
    panda$core$UInt64 $tmp125 = ((panda$core$UInt64) { $tmp126 });
    return $tmp125;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp128 = self.value == ((uint64_t) p_other.value);
    panda$core$Bit $tmp127 = ((panda$core$Bit) { $tmp128 });
    return $tmp127;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp130 = self.value == ((uint64_t) p_other.value);
    panda$core$Bit $tmp129 = ((panda$core$Bit) { $tmp130 });
    return $tmp129;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp132 = self.value == ((uint64_t) p_other.value);
    panda$core$Bit $tmp131 = ((panda$core$Bit) { $tmp132 });
    return $tmp131;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp134 = self.value == p_other.value;
    panda$core$Bit $tmp133 = ((panda$core$Bit) { $tmp134 });
    return $tmp133;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp136 = self.value != ((uint64_t) p_other.value);
    panda$core$Bit $tmp135 = ((panda$core$Bit) { $tmp136 });
    return $tmp135;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp138 = self.value != ((uint64_t) p_other.value);
    panda$core$Bit $tmp137 = ((panda$core$Bit) { $tmp138 });
    return $tmp137;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp140 = self.value != ((uint64_t) p_other.value);
    panda$core$Bit $tmp139 = ((panda$core$Bit) { $tmp140 });
    return $tmp139;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp142 = self.value != p_other.value;
    panda$core$Bit $tmp141 = ((panda$core$Bit) { $tmp142 });
    return $tmp141;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp144 = self.value < ((uint64_t) p_other.value);
    panda$core$Bit $tmp143 = ((panda$core$Bit) { $tmp144 });
    return $tmp143;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp146 = self.value < ((uint64_t) p_other.value);
    panda$core$Bit $tmp145 = ((panda$core$Bit) { $tmp146 });
    return $tmp145;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp148 = self.value < ((uint64_t) p_other.value);
    panda$core$Bit $tmp147 = ((panda$core$Bit) { $tmp148 });
    return $tmp147;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp150 = self.value < p_other.value;
    panda$core$Bit $tmp149 = ((panda$core$Bit) { $tmp150 });
    return $tmp149;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp152 = self.value > ((uint64_t) p_other.value);
    panda$core$Bit $tmp151 = ((panda$core$Bit) { $tmp152 });
    return $tmp151;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp154 = self.value > ((uint64_t) p_other.value);
    panda$core$Bit $tmp153 = ((panda$core$Bit) { $tmp154 });
    return $tmp153;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp156 = self.value > ((uint64_t) p_other.value);
    panda$core$Bit $tmp155 = ((panda$core$Bit) { $tmp156 });
    return $tmp155;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp158 = self.value > p_other.value;
    panda$core$Bit $tmp157 = ((panda$core$Bit) { $tmp158 });
    return $tmp157;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp160 = self.value >= ((uint64_t) p_other.value);
    panda$core$Bit $tmp159 = ((panda$core$Bit) { $tmp160 });
    return $tmp159;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp162 = self.value >= ((uint64_t) p_other.value);
    panda$core$Bit $tmp161 = ((panda$core$Bit) { $tmp162 });
    return $tmp161;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp164 = self.value >= ((uint64_t) p_other.value);
    panda$core$Bit $tmp163 = ((panda$core$Bit) { $tmp164 });
    return $tmp163;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp166 = self.value >= p_other.value;
    panda$core$Bit $tmp165 = ((panda$core$Bit) { $tmp166 });
    return $tmp165;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp168 = self.value <= ((uint64_t) p_other.value);
    panda$core$Bit $tmp167 = ((panda$core$Bit) { $tmp168 });
    return $tmp167;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp170 = self.value <= ((uint64_t) p_other.value);
    panda$core$Bit $tmp169 = ((panda$core$Bit) { $tmp170 });
    return $tmp169;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp172 = self.value <= ((uint64_t) p_other.value);
    panda$core$Bit $tmp171 = ((panda$core$Bit) { $tmp172 });
    return $tmp171;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp174 = self.value <= p_other.value;
    panda$core$Bit $tmp173 = ((panda$core$Bit) { $tmp174 });
    return $tmp173;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp175 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp175 }).value) {
    {
        panda$core$UInt64 $tmp176 = ((panda$core$UInt64) { self.value });
        return $tmp176;
    }
    }
    panda$core$UInt64 $tmp177 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $tmp177;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp178 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp178 }).value) {
    {
        panda$core$UInt64 $tmp179 = ((panda$core$UInt64) { self.value });
        return $tmp179;
    }
    }
    panda$core$UInt64 $tmp180 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $tmp180;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp181 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp181 }).value) {
    {
        panda$core$UInt64 $tmp182 = ((panda$core$UInt64) { self.value });
        return $tmp182;
    }
    }
    panda$core$UInt64 $tmp183 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $tmp183;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp184 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp184 }).value) {
    {
        panda$core$UInt64 $tmp185 = ((panda$core$UInt64) { self.value });
        return $tmp185;
    }
    }
    panda$core$UInt64 $tmp186 = ((panda$core$UInt64) { p_other.value });
    return $tmp186;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    bool $tmp187 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp187 }).value) {
    {
        panda$core$UInt64 $tmp188 = ((panda$core$UInt64) { self.value });
        return $tmp188;
    }
    }
    panda$core$UInt64 $tmp189 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $tmp189;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    bool $tmp190 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp190 }).value) {
    {
        panda$core$UInt64 $tmp191 = ((panda$core$UInt64) { self.value });
        return $tmp191;
    }
    }
    panda$core$UInt64 $tmp192 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $tmp192;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    bool $tmp193 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp193 }).value) {
    {
        panda$core$UInt64 $tmp194 = ((panda$core$UInt64) { self.value });
        return $tmp194;
    }
    }
    panda$core$UInt64 $tmp195 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $tmp195;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    bool $tmp196 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp196 }).value) {
    {
        panda$core$UInt64 $tmp197 = ((panda$core$UInt64) { self.value });
        return $tmp197;
    }
    }
    panda$core$UInt64 $tmp198 = ((panda$core$UInt64) { p_other.value });
    return $tmp198;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp200 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$UInt64 $tmp201 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp200);
    panda$core$Bit $tmp202 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp201, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp199 = $tmp202;
    return $tmp199;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp204 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$UInt64 $tmp205 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp204);
    panda$core$Bit $tmp206 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp205, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp203 = $tmp206;
    return $tmp203;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp208 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$UInt64 $tmp209 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp208);
    panda$core$Bit $tmp210 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp209, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp207 = $tmp210;
    return $tmp207;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp212 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp213 = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp212);
    panda$core$Bit $tmp214 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp213, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp211 = $tmp214;
    return $tmp211;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp216 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt64 $tmp217 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp216);
    panda$core$Bit $tmp218 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp217, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp215 = $tmp218;
    return $tmp215;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp220 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt64 $tmp221 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp220);
    panda$core$Bit $tmp222 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp221, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp219 = $tmp222;
    return $tmp219;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp224 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt64 $tmp225 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp224);
    panda$core$Bit $tmp226 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp225, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp223 = $tmp226;
    return $tmp223;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp228 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp229 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp228);
    panda$core$Bit $tmp230 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp229, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp227 = $tmp230;
    return $tmp227;
}
panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $tmp231 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $tmp231;
}
panda$core$UInt64$nullable panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result232;
    panda$core$UInt64$nullable $tmp233 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result232 = $tmp233;
    if (((panda$core$Bit) { !result232.nonnull }).value) {
    {
        panda$core$UInt64$nullable $tmp234 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $tmp234;
    }
    }
    panda$core$UInt64$nullable $tmp235 = result232;
    return $tmp235;
}
panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8(panda$core$UInt64 self) {
    panda$core$Int8 $tmp236 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $tmp236;
}
panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16(panda$core$UInt64 self) {
    panda$core$Int16 $tmp237 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $tmp237;
}
panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32(panda$core$UInt64 self) {
    panda$core$Int32 $tmp238 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $tmp238;
}
panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $tmp239 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $tmp239;
}
panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8(panda$core$UInt64 self) {
    panda$core$UInt8 $tmp240 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $tmp240;
}
panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16(panda$core$UInt64 self) {
    panda$core$UInt16 $tmp241 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $tmp241;
}
panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32(panda$core$UInt64 self) {
    panda$core$UInt32 $tmp242 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $tmp242;
}
panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32(panda$core$UInt64 self) {
    panda$core$Real32 $tmp243 = ((panda$core$Real32) { ((float) self.value) });
    return $tmp243;
}
panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64(panda$core$UInt64 self) {
    panda$core$Real64 $tmp244 = ((panda$core$Real64) { ((double) self.value) });
    return $tmp244;
}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String(panda$core$UInt64 self) {
    panda$core$Int64 max245;
    panda$core$Char8* chars246;
    panda$core$Int64 index247;
    panda$core$UInt64 value249;
    panda$core$Char8 $tmp253;
    panda$core$Char8 $tmp264;
    panda$core$Char8 $tmp272;
    panda$core$Int64 size273;
    panda$core$Range$LTpanda$core$Int64$GT $tmp275;
    max245 = ((panda$core$Int64) { 20 });
    chars246 = ((panda$core$Char8*) pandaZAlloc(max245.value * 1));
    panda$core$Int64 $tmp248 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max245, ((panda$core$Int64) { 1 }));
    index247 = $tmp248;
    value249 = self;
    panda$core$Bit $tmp250 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(value249, ((panda$core$UInt64) { 0 }));
    if ($tmp250.value) {
    {
        $l251:;
        {
            panda$core$UInt64 $tmp254 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value249, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp255 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp254, ((panda$core$UInt64) { 48 }));
            panda$core$UInt8 $tmp256 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp255);
            panda$core$Char8$init$panda$core$UInt8(&$tmp253, $tmp256);
            chars246[index247.value] = $tmp253;
            panda$core$UInt64 $tmp257 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value249, ((panda$core$UInt64) { 10 }));
            value249 = $tmp257;
            panda$core$Int64 $tmp258 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index247, ((panda$core$Int64) { 1 }));
            index247 = $tmp258;
        }
        panda$core$Bit $tmp260 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value249, ((panda$core$UInt64) { 0 }));
        bool $tmp259 = $tmp260.value;
        if ($tmp259) goto $l251;
        $l252:;
        panda$core$Int64 $tmp261 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index247, ((panda$core$Int64) { 1 }));
        index247 = $tmp261;
    }
    }
    else {
    {
        $l262:;
        {
            panda$core$UInt64 $tmp265 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value249, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp266 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 48 }), $tmp265);
            panda$core$UInt8 $tmp267 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp266);
            panda$core$Char8$init$panda$core$UInt8(&$tmp264, $tmp267);
            chars246[index247.value] = $tmp264;
            panda$core$UInt64 $tmp268 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value249, ((panda$core$UInt64) { 10 }));
            value249 = $tmp268;
            panda$core$Int64 $tmp269 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index247, ((panda$core$Int64) { 1 }));
            index247 = $tmp269;
        }
        panda$core$Bit $tmp271 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(value249, ((panda$core$UInt64) { 0 }));
        bool $tmp270 = $tmp271.value;
        if ($tmp270) goto $l262;
        $l263:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp272, ((panda$core$UInt8) { 45 }));
        chars246[index247.value] = $tmp272;
    }
    }
    panda$core$Int64 $tmp274 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max245, index247);
    size273 = $tmp274;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp275, ((panda$core$Int64) { 0 }), size273, ((panda$core$Bit) { false }));
    int64_t $tmp277 = $tmp275.min.value;
    panda$core$Int64 i276 = { $tmp277 };
    int64_t $tmp279 = $tmp275.max.value;
    bool $tmp280 = $tmp275.inclusive.value;
    if ($tmp280) goto $l287; else goto $l288;
    $l287:;
    if ($tmp277 <= $tmp279) goto $l281; else goto $l283;
    $l288:;
    if ($tmp277 < $tmp279) goto $l281; else goto $l283;
    $l281:;
    {
        panda$core$Int64 $tmp289 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i276, index247);
        chars246[i276.value] = chars246[$tmp289.value];
    }
    $l284:;
    int64_t $tmp291 = $tmp279 - i276.value;
    if ($tmp280) goto $l292; else goto $l293;
    $l292:;
    if ((uint64_t) $tmp291 >= 1) goto $l290; else goto $l283;
    $l293:;
    if ((uint64_t) $tmp291 > 1) goto $l290; else goto $l283;
    $l290:;
    i276.value += 1;
    goto $l281;
    $l283:;
    panda$core$String* $tmp299 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp299, chars246, size273);
    panda$core$String* $tmp298 = $tmp299;
    panda$core$String* $tmp297 = $tmp298;
    panda$core$String* $tmp296 = $tmp297;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp297));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
    return $tmp296;
}
panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String(panda$core$UInt64 self, panda$core$String* p_fmt) {
    panda$core$String* $tmp303 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), self, ((panda$core$UInt64) { 18446744073709551615 }), p_fmt);
    panda$core$String* $tmp302 = $tmp303;
    panda$core$String* $tmp301 = $tmp302;
    panda$core$String* $tmp300 = $tmp301;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
    return $tmp300;
}
void panda$core$UInt64$cleanup(panda$core$UInt64 self) {
}

