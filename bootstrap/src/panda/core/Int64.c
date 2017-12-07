#include "panda/core/Int64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/Comparable.h"
#include "panda/core/Object.h"
#include "panda/core/String.h"
panda$core$Int64$wrapper* wrap_panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64$wrapper* result = (panda$core$Int64$wrapper*) malloc(24);
    result->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
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

panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Object* other) {
    return panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$wrappershim(panda$core$Int64$wrapper* self, panda$core$Object* other) {
    return panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(self->value, ((panda$core$Int64$wrapper*) other)->value);
}
panda$core$Int64 panda$core$Int64$hash$R$panda$core$Int64$wrappershim(panda$core$Int64$wrapper* self) {
    return panda$core$Int64$hash$R$panda$core$Int64(self->value);
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
panda$core$String* panda$core$Int64$convert$R$panda$core$String$wrappershim(panda$core$Int64$wrapper* self) {
    return panda$core$Int64$convert$R$panda$core$String(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$_panda$core$Equatable, { panda$core$Int64$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$_panda$collections$Key, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim} };

panda$core$Int64$class_type panda$core$Int64$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$_panda$core$Comparable, { panda$core$Int64$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Int64$$ADD$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$SUB$R$panda$core$Int64, panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$BNOT$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64, panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64, panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64, panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64, panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64, panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$Int64$hash$R$panda$core$Int64, panda$core$Int64$convert$R$panda$core$Int8, panda$core$Int64$convert$R$panda$core$Int16, panda$core$Int64$convert$R$panda$core$Int32, panda$core$Int64$convert$R$panda$core$UInt8, panda$core$Int64$convert$R$panda$core$UInt16, panda$core$Int64$convert$R$panda$core$UInt32, panda$core$Int64$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, NULL, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$wrappershim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Equatable, { panda$core$Int64$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$Key, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$wrappershim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$wrappershim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$wrappershim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$wrappershim} };

panda$core$Int64$wrapperclass_type panda$core$Int64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Comparable, { panda$core$Int64$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

void panda$core$Int64$init$builtin_int64(panda$core$Int64* self, int64_t p_value) {
    self->value = p_value;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp1 = self.value + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp1 });
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp2 = self.value + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp2 });
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp3 = self.value + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp3 });
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp4 = self.value + p_other.value;
    return ((panda$core$Int64) { $tmp4 });
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp5 = self.value - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp5 });
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp6 = self.value - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp6 });
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp7 = self.value - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp7 });
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp8 = self.value - p_other.value;
    return ((panda$core$Int64) { $tmp8 });
}
panda$core$Int64 panda$core$Int64$$SUB$R$panda$core$Int64(panda$core$Int64 self) {
    return ((panda$core$Int64) { -self.value });
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp10 = self.value * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp10 });
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp11 = self.value * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp11 });
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp12 = self.value * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp12 });
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp13 = self.value * p_other.value;
    return ((panda$core$Int64) { $tmp13 });
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp14 = self.value / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp14 });
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp15 = self.value / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp15 });
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp16 = self.value / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp16 });
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp17 = self.value / p_other.value;
    return ((panda$core$Int64) { $tmp17 });
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp18 = self.value % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp18 });
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp19 = self.value % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp19 });
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp20 = self.value % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp20 });
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp21 = self.value % p_other.value;
    return ((panda$core$Int64) { $tmp21 });
}
panda$core$Int64 panda$core$Int64$$BNOT$R$panda$core$Int64(panda$core$Int64 self) {
    return ((panda$core$Int64) { ~self.value });
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp23 = self.value & ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp23 });
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp24 = self.value & ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp24 });
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp25 = self.value & ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp25 });
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp26 = self.value & p_other.value;
    return ((panda$core$Int64) { $tmp26 });
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp27 = self.value & ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp27 });
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp28 = self.value & ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp28 });
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp29 = self.value & ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp29 });
}
panda$core$UInt64 panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    int64_t $tmp30 = ((int64_t) self.value) & p_other.value;
    return ((panda$core$UInt64) { $tmp30 });
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp31 = self.value | ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp31 });
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp32 = self.value | ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp32 });
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp33 = self.value | ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp33 });
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp34 = self.value | p_other.value;
    return ((panda$core$Int64) { $tmp34 });
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp35 = self.value | ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp35 });
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp36 = self.value | ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp36 });
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp37 = self.value | ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp37 });
}
panda$core$UInt64 panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    int64_t $tmp38 = ((int64_t) self.value) | p_other.value;
    return ((panda$core$UInt64) { $tmp38 });
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp39 = self.value ^ ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp39 });
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp40 = self.value ^ ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp40 });
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp41 = self.value ^ ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp41 });
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp42 = self.value ^ p_other.value;
    return ((panda$core$Int64) { $tmp42 });
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp43 = self.value ^ ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp43 });
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp44 = self.value ^ ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp44 });
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp45 = self.value ^ ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp45 });
}
panda$core$UInt64 panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    int64_t $tmp46 = ((int64_t) self.value) ^ p_other.value;
    return ((panda$core$UInt64) { $tmp46 });
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp47 = self.value << ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp47 });
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp48 = self.value << ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp48 });
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp49 = self.value << ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp49 });
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp50 = self.value << p_other.value;
    return ((panda$core$Int64) { $tmp50 });
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp51 = self.value << ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp51 });
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp52 = self.value << ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp52 });
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp53 = self.value << ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp53 });
}
panda$core$UInt64 panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    int64_t $tmp54 = ((int64_t) self.value) << p_other.value;
    return ((panda$core$UInt64) { $tmp54 });
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    int64_t $tmp55 = self.value >> ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp55 });
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    int64_t $tmp56 = self.value >> ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp56 });
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    int64_t $tmp57 = self.value >> ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp57 });
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    int64_t $tmp58 = self.value >> p_other.value;
    return ((panda$core$Int64) { $tmp58 });
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    int64_t $tmp59 = self.value >> ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp59 });
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    int64_t $tmp60 = self.value >> ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp60 });
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    int64_t $tmp61 = self.value >> ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp61 });
}
panda$core$UInt64 panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    int64_t $tmp62 = ((int64_t) self.value) >> p_other.value;
    return ((panda$core$UInt64) { $tmp62 });
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp63 = self.value == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp63 });
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp64 = self.value == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp64 });
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp65 = self.value == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp65 });
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp66 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp66 });
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp67 = self.value != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp67 });
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp68 = self.value != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp68 });
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp69 = self.value != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp69 });
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp70 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp70 });
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp71 = self.value < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp71 });
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp72 = self.value < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp72 });
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp73 = self.value < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp73 });
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp74 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp74 });
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp75 = self.value > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp75 });
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp76 = self.value > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp76 });
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp77 = self.value > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp77 });
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp78 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp78 });
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp79 = self.value >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp79 });
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp80 = self.value >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp80 });
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp81 = self.value >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp81 });
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp82 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp82 });
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp83 = self.value <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp83 });
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp84 = self.value <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp84 });
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp85 = self.value <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp85 });
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp86 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp86 });
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp87 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp87 }).value) {
    {
        return ((panda$core$Int64) { self.value });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp88 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp88 }).value) {
    {
        return ((panda$core$Int64) { self.value });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp89 = self.value < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp89 }).value) {
    {
        return ((panda$core$Int64) { self.value });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp90 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp90 }).value) {
    {
        return ((panda$core$Int64) { self.value });
    }
    }
    return ((panda$core$Int64) { p_other.value });
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    bool $tmp91 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp91 }).value) {
    {
        return ((panda$core$Int64) { self.value });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    bool $tmp92 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp92 }).value) {
    {
        return ((panda$core$Int64) { self.value });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    bool $tmp93 = self.value > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp93 }).value) {
    {
        return ((panda$core$Int64) { self.value });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    bool $tmp94 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp94 }).value) {
    {
        return ((panda$core$Int64) { self.value });
    }
    }
    return ((panda$core$Int64) { p_other.value });
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp95 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int64 $tmp96 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp95);
    panda$core$Bit $tmp97 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp96, ((panda$core$Int64) { 0 }));
    return $tmp97;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp98 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int64 $tmp99 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp98);
    panda$core$Bit $tmp100 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp99, ((panda$core$Int64) { 0 }));
    return $tmp100;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp101 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int64 $tmp102 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp101);
    panda$core$Bit $tmp103 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp102, ((panda$core$Int64) { 0 }));
    return $tmp103;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp104 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp105 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp104);
    panda$core$Bit $tmp106 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp105, ((panda$core$Int64) { 0 }));
    return $tmp106;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp107 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$Int64 $tmp108 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp107);
    panda$core$Bit $tmp109 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp108, ((panda$core$Int64) { 0 }));
    return $tmp109;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp110 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$Int64 $tmp111 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp110);
    panda$core$Bit $tmp112 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp111, ((panda$core$Int64) { 0 }));
    return $tmp112;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp113 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$Int64 $tmp114 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp113);
    panda$core$Bit $tmp115 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp114, ((panda$core$Int64) { 0 }));
    return $tmp115;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp116 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp117 = panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp116);
    panda$core$Bit $tmp118 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp117, ((panda$core$UInt64) { 0 }));
    return $tmp118;
}
panda$core$Int64 panda$core$Int64$hash$R$panda$core$Int64(panda$core$Int64 self) {
    return ((panda$core$Int64) { self.value });
}
panda$core$Int8 panda$core$Int64$convert$R$panda$core$Int8(panda$core$Int64 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Int64$convert$R$panda$core$Int16(panda$core$Int64 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$Int64$convert$R$panda$core$Int32(panda$core$Int64 self) {
    return ((panda$core$Int32) { ((int32_t) self.value) });
}
panda$core$UInt8 panda$core$Int64$convert$R$panda$core$UInt8(panda$core$Int64 self) {
    return ((panda$core$UInt8) { ((int8_t) self.value) });
}
panda$core$UInt16 panda$core$Int64$convert$R$panda$core$UInt16(panda$core$Int64 self) {
    return ((panda$core$UInt16) { ((int16_t) self.value) });
}
panda$core$UInt32 panda$core$Int64$convert$R$panda$core$UInt32(panda$core$Int64 self) {
    return ((panda$core$UInt32) { ((int32_t) self.value) });
}
panda$core$UInt64 panda$core$Int64$convert$R$panda$core$UInt64(panda$core$Int64 self) {
    return ((panda$core$UInt64) { ((int64_t) self.value) });
}
panda$core$String* panda$core$Int64$convert$R$panda$core$String(panda$core$Int64 self) {
    panda$core$Int64 max119;
    panda$core$Char8* chars120;
    panda$core$Int64 index121;
    panda$core$Int64 value123;
    panda$core$Char8 $tmp127;
    panda$core$Char8 $tmp136;
    panda$core$Char8 $tmp142;
    panda$core$Int64 size143;
    panda$core$Char8* result145;
    panda$core$Range$LTpanda$core$Int64$GT $tmp146;
    max119 = ((panda$core$Int64) { 20 });
    chars120 = ((panda$core$Char8*) malloc(max119.value * 1));
    panda$core$Int64 $tmp122 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max119, ((panda$core$Int64) { 1 }));
    index121 = $tmp122;
    value123 = self;
    panda$core$Bit $tmp124 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(value123, ((panda$core$Int64) { 0 }));
    if ($tmp124.value) {
    {
        $l125:;
        {
            panda$core$Int64 $tmp128 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value123, ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp129 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp128, ((panda$core$Int64) { 48 }));
            panda$core$Char8$init$panda$core$UInt8(&$tmp127, ((panda$core$UInt8) { ((int8_t) $tmp129.value) }));
            chars120[index121.value] = $tmp127;
            panda$core$Int64 $tmp130 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value123, ((panda$core$Int64) { 10 }));
            value123 = $tmp130;
            panda$core$Int64 $tmp131 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index121, ((panda$core$Int64) { 1 }));
            index121 = $tmp131;
        }
        panda$core$Bit $tmp132 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(value123, ((panda$core$Int64) { 0 }));
        if ($tmp132.value) goto $l125;
        $l126:;
        panda$core$Int64 $tmp133 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index121, ((panda$core$Int64) { 1 }));
        index121 = $tmp133;
    }
    }
    else {
    {
        $l134:;
        {
            panda$core$Int64 $tmp137 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value123, ((panda$core$Int64) { 10 }));
            panda$core$Int64 $tmp138 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 48 }), $tmp137);
            panda$core$Char8$init$panda$core$UInt8(&$tmp136, ((panda$core$UInt8) { ((int8_t) $tmp138.value) }));
            chars120[index121.value] = $tmp136;
            panda$core$Int64 $tmp139 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value123, ((panda$core$Int64) { 10 }));
            value123 = $tmp139;
            panda$core$Int64 $tmp140 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index121, ((panda$core$Int64) { 1 }));
            index121 = $tmp140;
        }
        panda$core$Bit $tmp141 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(value123, ((panda$core$Int64) { 0 }));
        if ($tmp141.value) goto $l134;
        $l135:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp142, ((panda$core$UInt8) { 45 }));
        chars120[index121.value] = $tmp142;
    }
    }
    panda$core$Int64 $tmp144 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max119, index121);
    size143 = $tmp144;
    result145 = ((panda$core$Char8*) malloc(size143.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp146, index121, max119, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp148 = $tmp146.start.value;
    panda$core$Int64 i147 = { $tmp148 };
    int64_t $tmp150 = $tmp146.end.value;
    int64_t $tmp151 = $tmp146.step.value;
    bool $tmp152 = $tmp146.inclusive.value;
    bool $tmp159 = $tmp151 > 0;
    if ($tmp159) goto $l157; else goto $l158;
    $l157:;
    if ($tmp152) goto $l160; else goto $l161;
    $l160:;
    if ($tmp148 <= $tmp150) goto $l153; else goto $l155;
    $l161:;
    if ($tmp148 < $tmp150) goto $l153; else goto $l155;
    $l158:;
    if ($tmp152) goto $l162; else goto $l163;
    $l162:;
    if ($tmp148 >= $tmp150) goto $l153; else goto $l155;
    $l163:;
    if ($tmp148 > $tmp150) goto $l153; else goto $l155;
    $l153:;
    {
        panda$core$Int64 $tmp165 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i147, index121);
        result145[$tmp165.value] = chars120[i147.value];
    }
    $l156:;
    if ($tmp159) goto $l167; else goto $l168;
    $l167:;
    int64_t $tmp169 = $tmp150 - i147.value;
    if ($tmp152) goto $l170; else goto $l171;
    $l170:;
    if ($tmp169 >= $tmp151) goto $l166; else goto $l155;
    $l171:;
    if ($tmp169 > $tmp151) goto $l166; else goto $l155;
    $l168:;
    int64_t $tmp173 = i147.value - $tmp150;
    if ($tmp152) goto $l174; else goto $l175;
    $l174:;
    if ($tmp173 >= -$tmp151) goto $l166; else goto $l155;
    $l175:;
    if ($tmp173 > -$tmp151) goto $l166; else goto $l155;
    $l166:;
    i147.value += $tmp151;
    goto $l153;
    $l155:;
    free(chars120);
    panda$core$String* $tmp177 = (panda$core$String*) malloc(33);
    $tmp177->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp177->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64$panda$core$Bit($tmp177, result145, size143, ((panda$core$Bit) { true }));
    return $tmp177;
}

