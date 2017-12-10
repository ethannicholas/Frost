#include "panda/core/Int32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/collections/Key.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Equatable.h"
#include "panda/core/Object.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
panda$core$Int32$wrapper* wrap_panda$core$Int32(panda$core$Int32 self) {
    panda$core$Int32$wrapper* result = (panda$core$Int32$wrapper*) malloc(16);
    result->cl = (panda$core$Class*) &panda$core$Int32$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Int32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(self, ((panda$core$Int32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Int32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(self, ((panda$core$Int32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Int32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(self, ((panda$core$Int32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Int32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(self, ((panda$core$Int32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Int32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit(self, ((panda$core$Int32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Int32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit(self, ((panda$core$Int32$wrapper*) p0)->value);
    return result;
}

panda$core$Int64 panda$core$Int32$hash$R$panda$core$Int64$wrappershim(panda$core$Int32$wrapper* self) {
    return panda$core$Int32$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$wrappershim(panda$core$Int32$wrapper* self, panda$core$Object* other) {
    return panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(self->value, ((panda$core$Int32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$wrappershim(panda$core$Int32$wrapper* self, panda$core$Object* other) {
    return panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(self->value, ((panda$core$Int32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$wrappershim(panda$core$Int32$wrapper* self, panda$core$Object* other) {
    return panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(self->value, ((panda$core$Int32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$wrappershim(panda$core$Int32$wrapper* self, panda$core$Object* other) {
    return panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(self->value, ((panda$core$Int32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$wrappershim(panda$core$Int32$wrapper* self, panda$core$Object* other) {
    return panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit(self->value, ((panda$core$Int32$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$wrappershim(panda$core$Int32$wrapper* self, panda$core$Object* other) {
    return panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit(self->value, ((panda$core$Int32$wrapper*) other)->value);
}
panda$core$String* panda$core$Int32$convert$R$panda$core$String$wrappershim(panda$core$Int32$wrapper* self) {
    return panda$core$Int32$convert$R$panda$core$String(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Int32$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int32$_panda$collections$Key, { panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int32$_panda$core$Comparable, { panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim} };

panda$core$Int32$class_type panda$core$Int32$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int32$_panda$core$Equatable, { panda$core$Int32$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Int32$$ADD$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$ADD$panda$core$UInt8$R$panda$core$Int64, panda$core$Int32$$ADD$panda$core$UInt16$R$panda$core$Int64, panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64, panda$core$Int32$$SUB$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$SUB$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$SUB$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$SUB$panda$core$UInt8$R$panda$core$Int64, panda$core$Int32$$SUB$panda$core$UInt16$R$panda$core$Int64, panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64, panda$core$Int32$$SUB$R$panda$core$Int32, panda$core$Int32$$MUL$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$MUL$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$MUL$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$MUL$panda$core$UInt8$R$panda$core$Int64, panda$core$Int32$$MUL$panda$core$UInt16$R$panda$core$Int64, panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64, panda$core$Int32$$INTDIV$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$INTDIV$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$INTDIV$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$INTDIV$panda$core$UInt8$R$panda$core$Int64, panda$core$Int32$$INTDIV$panda$core$UInt16$R$panda$core$Int64, panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64, panda$core$Int32$$REM$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$REM$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$REM$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$REM$panda$core$UInt8$R$panda$core$Int64, panda$core$Int32$$REM$panda$core$UInt16$R$panda$core$Int64, panda$core$Int32$$REM$panda$core$UInt32$R$panda$core$Int64, panda$core$Int32$$BNOT$R$panda$core$Int32, panda$core$Int32$$BAND$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$BAND$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$BAND$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int32$$BAND$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int32$$BOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$BOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$BOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$BOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int32$$BOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int32$$BXOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$BXOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$BXOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$BXOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int32$$BXOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int32$$SHL$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$SHL$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$SHL$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int32$$SHL$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int32$$SHR$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$$SHR$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$$SHR$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$$SHR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int32$$SHR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int32$$SHR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int32$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int32$$EQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int32$$EQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int32$$EQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int32$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int32$$EQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int32$$NEQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int32$$NEQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int32$$NEQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int32$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int32$$NEQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int32$$LT$panda$core$Int8$R$panda$core$Bit, panda$core$Int32$$LT$panda$core$Int16$R$panda$core$Bit, panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int64$R$panda$core$Bit, panda$core$Int32$$LT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int32$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int32$$LT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int32$$GT$panda$core$Int8$R$panda$core$Bit, panda$core$Int32$$GT$panda$core$Int16$R$panda$core$Bit, panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$Int64$R$panda$core$Bit, panda$core$Int32$$GT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int32$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int32$$GT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int32$$GE$panda$core$Int8$R$panda$core$Bit, panda$core$Int32$$GE$panda$core$Int16$R$panda$core$Bit, panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int64$R$panda$core$Bit, panda$core$Int32$$GE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int32$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int32$$GE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int32$$LE$panda$core$Int8$R$panda$core$Bit, panda$core$Int32$$LE$panda$core$Int16$R$panda$core$Bit, panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int64$R$panda$core$Bit, panda$core$Int32$$LE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int32$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int32$$LE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int32$min$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$min$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$min$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$min$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$min$panda$core$UInt8$R$panda$core$Int64, panda$core$Int32$min$panda$core$UInt16$R$panda$core$Int64, panda$core$Int32$min$panda$core$UInt32$R$panda$core$Int64, panda$core$Int32$max$panda$core$Int8$R$panda$core$Int32, panda$core$Int32$max$panda$core$Int16$R$panda$core$Int32, panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32, panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64, panda$core$Int32$max$panda$core$UInt8$R$panda$core$Int64, panda$core$Int32$max$panda$core$UInt16$R$panda$core$Int64, panda$core$Int32$max$panda$core$UInt32$R$panda$core$Int64, panda$core$Int32$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$Int32$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$Int32$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$Int32$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$Int32$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$Int32$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$Int32$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$Int32$hash$R$panda$core$Int64, panda$core$Int32$convert$R$panda$core$Int8, panda$core$Int32$convert$R$panda$core$Int16, panda$core$Int32$convert$R$panda$core$Int64, panda$core$Int32$convert$R$panda$core$UInt8, panda$core$Int32$convert$R$panda$core$UInt16, panda$core$Int32$convert$R$panda$core$UInt32, panda$core$Int32$convert$R$panda$core$UInt64} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, NULL, { panda$core$Int32$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int32$wrapper_panda$collections$Key, { panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$wrappershim, panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$wrappershim, panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$wrappershim, panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int32$wrapper_panda$core$Comparable, { panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$wrappershim, panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$wrappershim} };

panda$core$Int32$wrapperclass_type panda$core$Int32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int32$wrapper_panda$core$Equatable, { panda$core$Int32$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

void panda$core$Int32$init$builtin_int32(panda$core$Int32* self, int32_t p_value) {
    self->value = p_value;
}
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp1 = self.value + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp1 });
}
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp2 = self.value + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp2 });
}
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp3 = self.value + p_other.value;
    return ((panda$core$Int32) { $tmp3 });
}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp4 = ((int64_t) self.value) + p_other.value;
    return ((panda$core$Int64) { $tmp4 });
}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int64_t $tmp5 = ((int64_t) self.value) + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp5 });
}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int64_t $tmp6 = ((int64_t) self.value) + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp6 });
}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int64_t $tmp7 = ((int64_t) self.value) + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp7 });
}
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp8 = self.value - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp8 });
}
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp9 = self.value - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp9 });
}
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp10 = self.value - p_other.value;
    return ((panda$core$Int32) { $tmp10 });
}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp11 = ((int64_t) self.value) - p_other.value;
    return ((panda$core$Int64) { $tmp11 });
}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int64_t $tmp12 = ((int64_t) self.value) - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp12 });
}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int64_t $tmp13 = ((int64_t) self.value) - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp13 });
}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int64_t $tmp14 = ((int64_t) self.value) - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp14 });
}
panda$core$Int32 panda$core$Int32$$SUB$R$panda$core$Int32(panda$core$Int32 self) {
    return ((panda$core$Int32) { -self.value });
}
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp16 = self.value * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp16 });
}
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp17 = self.value * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp17 });
}
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp18 = self.value * p_other.value;
    return ((panda$core$Int32) { $tmp18 });
}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp19 = ((int64_t) self.value) * p_other.value;
    return ((panda$core$Int64) { $tmp19 });
}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int64_t $tmp20 = ((int64_t) self.value) * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp20 });
}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int64_t $tmp21 = ((int64_t) self.value) * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp21 });
}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int64_t $tmp22 = ((int64_t) self.value) * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp22 });
}
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp23 = self.value / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp23 });
}
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp24 = self.value / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp24 });
}
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp25 = self.value / p_other.value;
    return ((panda$core$Int32) { $tmp25 });
}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp26 = ((int64_t) self.value) / p_other.value;
    return ((panda$core$Int64) { $tmp26 });
}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int64_t $tmp27 = ((int64_t) self.value) / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp27 });
}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int64_t $tmp28 = ((int64_t) self.value) / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp28 });
}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int64_t $tmp29 = ((int64_t) self.value) / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp29 });
}
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp30 = self.value % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp30 });
}
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp31 = self.value % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp31 });
}
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp32 = self.value % p_other.value;
    return ((panda$core$Int32) { $tmp32 });
}
panda$core$Int64 panda$core$Int32$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp33 = ((int64_t) self.value) % p_other.value;
    return ((panda$core$Int64) { $tmp33 });
}
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int64_t $tmp34 = ((int64_t) self.value) % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp34 });
}
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int64_t $tmp35 = ((int64_t) self.value) % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp35 });
}
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int64_t $tmp36 = ((int64_t) self.value) % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp36 });
}
panda$core$Int32 panda$core$Int32$$BNOT$R$panda$core$Int32(panda$core$Int32 self) {
    return ((panda$core$Int32) { ~self.value });
}
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp38 = self.value & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp38 });
}
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp39 = self.value & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp39 });
}
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp40 = self.value & p_other.value;
    return ((panda$core$Int32) { $tmp40 });
}
panda$core$Int64 panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp41 = ((int64_t) self.value) & p_other.value;
    return ((panda$core$Int64) { $tmp41 });
}
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int32_t $tmp42 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp42 });
}
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int32_t $tmp43 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp43 });
}
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int32_t $tmp44 = ((int32_t) self.value) & p_other.value;
    return ((panda$core$UInt32) { $tmp44 });
}
panda$core$UInt64 panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    int64_t $tmp45 = ((int64_t) self.value) & p_other.value;
    return ((panda$core$UInt64) { $tmp45 });
}
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp46 = self.value | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp46 });
}
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp47 = self.value | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp47 });
}
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp48 = self.value | p_other.value;
    return ((panda$core$Int32) { $tmp48 });
}
panda$core$Int64 panda$core$Int32$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp49 = ((int64_t) self.value) | p_other.value;
    return ((panda$core$Int64) { $tmp49 });
}
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int32_t $tmp50 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp50 });
}
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int32_t $tmp51 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp51 });
}
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int32_t $tmp52 = ((int32_t) self.value) | p_other.value;
    return ((panda$core$UInt32) { $tmp52 });
}
panda$core$UInt64 panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    int64_t $tmp53 = ((int64_t) self.value) | p_other.value;
    return ((panda$core$UInt64) { $tmp53 });
}
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp54 = self.value ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp54 });
}
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp55 = self.value ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp55 });
}
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp56 = self.value ^ p_other.value;
    return ((panda$core$Int32) { $tmp56 });
}
panda$core$Int64 panda$core$Int32$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp57 = ((int64_t) self.value) ^ p_other.value;
    return ((panda$core$Int64) { $tmp57 });
}
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int32_t $tmp58 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp58 });
}
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int32_t $tmp59 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp59 });
}
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int32_t $tmp60 = ((int32_t) self.value) ^ p_other.value;
    return ((panda$core$UInt32) { $tmp60 });
}
panda$core$UInt64 panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    int64_t $tmp61 = ((int64_t) self.value) ^ p_other.value;
    return ((panda$core$UInt64) { $tmp61 });
}
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp62 = self.value << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp62 });
}
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp63 = self.value << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp63 });
}
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp64 = self.value << p_other.value;
    return ((panda$core$Int32) { $tmp64 });
}
panda$core$Int64 panda$core$Int32$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp65 = ((int64_t) self.value) << p_other.value;
    return ((panda$core$Int64) { $tmp65 });
}
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int32_t $tmp66 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp66 });
}
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int32_t $tmp67 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp67 });
}
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int32_t $tmp68 = ((int32_t) self.value) << p_other.value;
    return ((panda$core$UInt32) { $tmp68 });
}
panda$core$UInt64 panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    int64_t $tmp69 = ((int64_t) self.value) << p_other.value;
    return ((panda$core$UInt64) { $tmp69 });
}
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    int32_t $tmp70 = self.value >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp70 });
}
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    int32_t $tmp71 = self.value >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp71 });
}
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    int32_t $tmp72 = self.value >> p_other.value;
    return ((panda$core$Int32) { $tmp72 });
}
panda$core$Int64 panda$core$Int32$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    int64_t $tmp73 = ((int64_t) self.value) >> p_other.value;
    return ((panda$core$Int64) { $tmp73 });
}
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    int32_t $tmp74 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp74 });
}
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    int32_t $tmp75 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp75 });
}
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    int32_t $tmp76 = ((int32_t) self.value) >> p_other.value;
    return ((panda$core$UInt32) { $tmp76 });
}
panda$core$UInt64 panda$core$Int32$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    int64_t $tmp77 = ((int64_t) self.value) >> p_other.value;
    return ((panda$core$UInt64) { $tmp77 });
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    bool $tmp78 = self.value == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp78 });
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    bool $tmp79 = self.value == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp79 });
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    bool $tmp80 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp80 });
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    bool $tmp81 = ((int64_t) self.value) == p_other.value;
    return ((panda$core$Bit) { $tmp81 });
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    bool $tmp82 = ((int64_t) self.value) == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp82 });
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    bool $tmp83 = ((int64_t) self.value) == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp83 });
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    bool $tmp84 = ((int64_t) self.value) == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp84 });
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    bool $tmp85 = self.value != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp85 });
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    bool $tmp86 = self.value != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp86 });
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    bool $tmp87 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp87 });
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    bool $tmp88 = ((int64_t) self.value) != p_other.value;
    return ((panda$core$Bit) { $tmp88 });
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    bool $tmp89 = ((int64_t) self.value) != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp89 });
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    bool $tmp90 = ((int64_t) self.value) != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp90 });
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    bool $tmp91 = ((int64_t) self.value) != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp91 });
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    bool $tmp92 = self.value < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp92 });
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    bool $tmp93 = self.value < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp93 });
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    bool $tmp94 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp94 });
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    bool $tmp95 = ((int64_t) self.value) < p_other.value;
    return ((panda$core$Bit) { $tmp95 });
}
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    bool $tmp96 = ((int64_t) self.value) < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp96 });
}
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    bool $tmp97 = ((int64_t) self.value) < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp97 });
}
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    bool $tmp98 = ((int64_t) self.value) < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp98 });
}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    bool $tmp99 = self.value > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp99 });
}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    bool $tmp100 = self.value > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp100 });
}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    bool $tmp101 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp101 });
}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    bool $tmp102 = ((int64_t) self.value) > p_other.value;
    return ((panda$core$Bit) { $tmp102 });
}
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    bool $tmp103 = ((int64_t) self.value) > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp103 });
}
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    bool $tmp104 = ((int64_t) self.value) > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp104 });
}
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    bool $tmp105 = ((int64_t) self.value) > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp105 });
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    bool $tmp106 = self.value >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp106 });
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    bool $tmp107 = self.value >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp107 });
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    bool $tmp108 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp108 });
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    bool $tmp109 = ((int64_t) self.value) >= p_other.value;
    return ((panda$core$Bit) { $tmp109 });
}
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    bool $tmp110 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp110 });
}
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    bool $tmp111 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp111 });
}
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    bool $tmp112 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp112 });
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    bool $tmp113 = self.value <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp113 });
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    bool $tmp114 = self.value <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp114 });
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    bool $tmp115 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp115 });
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    bool $tmp116 = ((int64_t) self.value) <= p_other.value;
    return ((panda$core$Bit) { $tmp116 });
}
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    bool $tmp117 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp117 });
}
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    bool $tmp118 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp118 });
}
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    bool $tmp119 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp119 });
}
panda$core$Int32 panda$core$Int32$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    bool $tmp120 = self.value < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp120 }).value) {
    {
        return ((panda$core$Int32) { self.value });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int32$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    bool $tmp121 = self.value < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp121 }).value) {
    {
        return ((panda$core$Int32) { self.value });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int32$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    bool $tmp122 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp122 }).value) {
    {
        return ((panda$core$Int32) { self.value });
    }
    }
    return ((panda$core$Int32) { p_other.value });
}
panda$core$Int64 panda$core$Int32$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    bool $tmp123 = ((int64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp123 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { p_other.value });
}
panda$core$Int64 panda$core$Int32$min$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    bool $tmp124 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp124 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int32$min$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    bool $tmp125 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp125 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int32$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    bool $tmp126 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp126 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int32 panda$core$Int32$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    bool $tmp127 = self.value > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp127 }).value) {
    {
        return ((panda$core$Int32) { self.value });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int32$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    bool $tmp128 = self.value > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp128 }).value) {
    {
        return ((panda$core$Int32) { self.value });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    bool $tmp129 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp129 }).value) {
    {
        return ((panda$core$Int32) { self.value });
    }
    }
    return ((panda$core$Int32) { p_other.value });
}
panda$core$Int64 panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    bool $tmp130 = ((int64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp130 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { p_other.value });
}
panda$core$Int64 panda$core$Int32$max$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    bool $tmp131 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp131 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int32$max$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    bool $tmp132 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp132 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$Int32$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    bool $tmp133 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp133 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp134 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp135 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp134);
    panda$core$Bit $tmp136 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp135, ((panda$core$Int32) { 0 }));
    return $tmp136;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp137 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp138 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp137);
    panda$core$Bit $tmp139 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp138, ((panda$core$Int32) { 0 }));
    return $tmp139;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp140 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp141 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp140);
    panda$core$Bit $tmp142 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp141, ((panda$core$Int32) { 0 }));
    return $tmp142;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp143 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp144 = panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp143);
    panda$core$Bit $tmp145 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp144, ((panda$core$Int64) { 0 }));
    return $tmp145;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp146 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp147 = panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp146);
    panda$core$Bit $tmp148 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp147, ((panda$core$UInt32) { 0 }));
    return $tmp148;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp149 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp150 = panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp149);
    panda$core$Bit $tmp151 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp150, ((panda$core$UInt32) { 0 }));
    return $tmp151;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp152 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp153 = panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp152);
    panda$core$Bit $tmp154 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp153, ((panda$core$UInt32) { 0 }));
    return $tmp154;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp155 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp156 = panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp155);
    panda$core$Bit $tmp157 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp156, ((panda$core$UInt64) { 0 }));
    return $tmp157;
}
panda$core$Int64 panda$core$Int32$hash$R$panda$core$Int64(panda$core$Int32 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$Int8 panda$core$Int32$convert$R$panda$core$Int8(panda$core$Int32 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$Int32$convert$R$panda$core$Int16(panda$core$Int32 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int64 panda$core$Int32$convert$R$panda$core$Int64(panda$core$Int32 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8 panda$core$Int32$convert$R$panda$core$UInt8(panda$core$Int32 self) {
    return ((panda$core$UInt8) { ((int8_t) self.value) });
}
panda$core$UInt16 panda$core$Int32$convert$R$panda$core$UInt16(panda$core$Int32 self) {
    return ((panda$core$UInt16) { ((int16_t) self.value) });
}
panda$core$UInt32 panda$core$Int32$convert$R$panda$core$UInt32(panda$core$Int32 self) {
    return ((panda$core$UInt32) { ((int32_t) self.value) });
}
panda$core$UInt64 panda$core$Int32$convert$R$panda$core$UInt64(panda$core$Int32 self) {
    return ((panda$core$UInt64) { ((int64_t) self.value) });
}
panda$core$String* panda$core$Int32$convert$R$panda$core$String(panda$core$Int32 self) {
    panda$core$Int64 max158;
    panda$core$Char8* chars159;
    panda$core$Int64 index160;
    panda$core$Int32 value162;
    panda$core$Char8 $tmp166;
    panda$core$Char8 $tmp175;
    panda$core$Char8 $tmp181;
    panda$core$Int64 size182;
    panda$core$Char8* result184;
    panda$core$Range$LTpanda$core$Int64$GT $tmp185;
    max158 = ((panda$core$Int64) { 11 });
    chars159 = ((panda$core$Char8*) malloc(max158.value * 1));
    panda$core$Int64 $tmp161 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max158, ((panda$core$Int64) { 1 }));
    index160 = $tmp161;
    value162 = self;
    panda$core$Bit $tmp163 = panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(value162, ((panda$core$Int32) { 0 }));
    if ($tmp163.value) {
    {
        $l164:;
        {
            panda$core$Int32 $tmp167 = panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32(value162, ((panda$core$Int32) { 10 }));
            panda$core$Int32 $tmp168 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp167, ((panda$core$Int32) { 48 }));
            panda$core$Char8$init$panda$core$UInt8(&$tmp166, ((panda$core$UInt8) { ((int8_t) $tmp168.value) }));
            chars159[index160.value] = $tmp166;
            panda$core$Int32 $tmp169 = panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32(value162, ((panda$core$Int32) { 10 }));
            value162 = $tmp169;
            panda$core$Int64 $tmp170 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index160, ((panda$core$Int64) { 1 }));
            index160 = $tmp170;
        }
        panda$core$Bit $tmp171 = panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(value162, ((panda$core$Int32) { 0 }));
        if ($tmp171.value) goto $l164;
        $l165:;
        panda$core$Int64 $tmp172 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index160, ((panda$core$Int64) { 1 }));
        index160 = $tmp172;
    }
    }
    else {
    {
        $l173:;
        {
            panda$core$Int32 $tmp176 = panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32(value162, ((panda$core$Int32) { 10 }));
            panda$core$Int32 $tmp177 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 48 }), $tmp176);
            panda$core$Char8$init$panda$core$UInt8(&$tmp175, ((panda$core$UInt8) { ((int8_t) $tmp177.value) }));
            chars159[index160.value] = $tmp175;
            panda$core$Int32 $tmp178 = panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32(value162, ((panda$core$Int32) { 10 }));
            value162 = $tmp178;
            panda$core$Int64 $tmp179 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index160, ((panda$core$Int64) { 1 }));
            index160 = $tmp179;
        }
        panda$core$Bit $tmp180 = panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(value162, ((panda$core$Int32) { 0 }));
        if ($tmp180.value) goto $l173;
        $l174:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp181, ((panda$core$UInt8) { 45 }));
        chars159[index160.value] = $tmp181;
    }
    }
    panda$core$Int64 $tmp183 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max158, index160);
    size182 = $tmp183;
    result184 = ((panda$core$Char8*) malloc(size182.value * 1));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp185, index160, max158, ((panda$core$Bit) { false }));
    int64_t $tmp187 = $tmp185.min.value;
    panda$core$Int64 i186 = { $tmp187 };
    int64_t $tmp189 = $tmp185.max.value;
    bool $tmp190 = $tmp185.inclusive.value;
    bool $tmp197 = 1 > 0;
    if ($tmp197) goto $l195; else goto $l196;
    $l195:;
    if ($tmp190) goto $l198; else goto $l199;
    $l198:;
    if ($tmp187 <= $tmp189) goto $l191; else goto $l193;
    $l199:;
    if ($tmp187 < $tmp189) goto $l191; else goto $l193;
    $l196:;
    if ($tmp190) goto $l200; else goto $l201;
    $l200:;
    if ($tmp187 >= $tmp189) goto $l191; else goto $l193;
    $l201:;
    if ($tmp187 > $tmp189) goto $l191; else goto $l193;
    $l191:;
    {
        panda$core$Int64 $tmp203 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i186, index160);
        result184[$tmp203.value] = chars159[i186.value];
    }
    $l194:;
    if ($tmp197) goto $l205; else goto $l206;
    $l205:;
    int64_t $tmp207 = $tmp189 - i186.value;
    if ($tmp190) goto $l208; else goto $l209;
    $l208:;
    if ($tmp207 >= 1) goto $l204; else goto $l193;
    $l209:;
    if ($tmp207 > 1) goto $l204; else goto $l193;
    $l206:;
    int64_t $tmp211 = i186.value - $tmp189;
    if ($tmp190) goto $l212; else goto $l213;
    $l212:;
    if ($tmp211 >= -1) goto $l204; else goto $l193;
    $l213:;
    if ($tmp211 > -1) goto $l204; else goto $l193;
    $l204:;
    i186.value += 1;
    goto $l191;
    $l193:;
    free(chars159);
    panda$core$String* $tmp215 = (panda$core$String*) malloc(40);
    $tmp215->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp215->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp215, result184, size182);
    return $tmp215;
}

