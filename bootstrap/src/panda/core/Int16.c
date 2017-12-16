#include "panda/core/Int16.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/core/Equatable.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
panda$core$Int16$wrapper* wrap_panda$core$Int16(panda$core$Int16 self) {
    panda$core$Int16$wrapper* result = (panda$core$Int16$wrapper*) malloc(14);
    result->cl = (panda$core$Class*) &panda$core$Int16$wrapperclass;
    result->value = self;
    return result;
}
#include "panda/core/Int8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$Int16$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$Int16$wrapper* self, panda$core$String* fmt) {
    return panda$core$Int16$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Int64 panda$core$Int16$hash$R$panda$core$Int64$wrappershim(panda$core$Int16$wrapper* self) {
    return panda$core$Int16$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Object* other) {
    return panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Object* other) {
    return panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Object* other) {
    return panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Object* other) {
    return panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Object* other) {
    return panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Object* other) {
    return panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$String* panda$core$Int16$convert$R$panda$core$String$wrappershim(panda$core$Int16$wrapper* self) {
    return panda$core$Int16$convert$R$panda$core$String(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int16$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Int16$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int16$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int16$_panda$core$Formattable, { panda$core$Int16$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int16$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int16$_panda$collections$Key, { panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int16$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int16$_panda$core$Comparable, { panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim} };

panda$core$Int16$class_type panda$core$Int16$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int16$_panda$core$Equatable, { panda$core$Int16$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$Int16$$ADD$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$ADD$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$SUB$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$SUB$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$SUB$R$panda$core$Int16, panda$core$Int16$$MUL$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$MUL$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$INTDIV$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$INTDIV$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$REM$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$REM$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$BNOT$R$panda$core$Int16, panda$core$Int16$$BAND$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$BAND$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$BAND$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$BOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$BOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$BOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$BOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$BOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$BXOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$BXOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$BXOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$BXOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$BXOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$SHL$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$SHL$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$SHL$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$SHL$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$SHL$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$SHR$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$SHR$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$SHR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$SHR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$SHR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$EQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$abs$R$panda$core$Int16, panda$core$Int16$min$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$min$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$min$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$min$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$min$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$min$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$min$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$max$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$max$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$max$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$max$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$max$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$max$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$max$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$Int16$hash$R$panda$core$Int64, panda$core$Int16$convert$R$panda$core$Int8, panda$core$Int16$convert$R$panda$core$Int32, panda$core$Int16$convert$R$panda$core$Int64, panda$core$Int16$convert$R$panda$core$UInt8, panda$core$Int16$convert$R$panda$core$UInt16, panda$core$Int16$convert$R$panda$core$UInt32, panda$core$Int16$convert$R$panda$core$UInt64, panda$core$Int16$convert$R$panda$core$Real32, panda$core$Int16$convert$R$panda$core$Real64, panda$core$Int16$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int16$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Int16$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int16$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int16$wrapper_panda$core$Formattable, { panda$core$Int16$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int16$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int16$wrapper_panda$collections$Key, { panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$wrappershim, panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$wrappershim, panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$wrappershim, panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int16$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int16$wrapper_panda$core$Comparable, { panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$wrappershim, panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$wrappershim} };

panda$core$Int16$wrapperclass_type panda$core$Int16$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int16$wrapper_panda$core$Equatable, { panda$core$Int16$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };
static panda$core$String $s160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };

void panda$core$Int16$init$builtin_int16(panda$core$Int16* self, int16_t p_value) {
    self->value = p_value;
}
void panda$core$Int16$init$panda$core$Int8(panda$core$Int16* self, panda$core$Int8 p_value) {
    self->value = ((int16_t) p_value.value);
}
void panda$core$Int16$init$panda$core$UInt8(panda$core$Int16* self, panda$core$UInt8 p_value) {
    self->value = ((int16_t) p_value.value);
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp1 = ((int32_t) self.value) + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp1 });
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp2 = ((int32_t) self.value) + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp2 });
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp3 = ((int32_t) self.value) + p_other.value;
    return ((panda$core$Int32) { $tmp3 });
}
panda$core$Int64 panda$core$Int16$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp4 = ((int64_t) self.value) + p_other.value;
    return ((panda$core$Int64) { $tmp4 });
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp5 = ((int32_t) self.value) + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp5 });
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp6 = ((int32_t) self.value) + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp6 });
}
panda$core$Int64 panda$core$Int16$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp7 = ((int64_t) self.value) + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp7 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp8 = ((int32_t) self.value) - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp8 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp9 = ((int32_t) self.value) - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp9 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp10 = ((int32_t) self.value) - p_other.value;
    return ((panda$core$Int32) { $tmp10 });
}
panda$core$Int64 panda$core$Int16$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp11 = ((int64_t) self.value) - p_other.value;
    return ((panda$core$Int64) { $tmp11 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp12 = ((int32_t) self.value) - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp12 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp13 = ((int32_t) self.value) - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp13 });
}
panda$core$Int64 panda$core$Int16$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp14 = ((int64_t) self.value) - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp14 });
}
panda$core$Int16 panda$core$Int16$$SUB$R$panda$core$Int16(panda$core$Int16 self) {
    return ((panda$core$Int16) { -self.value });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp16 = ((int32_t) self.value) * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp16 });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp17 = ((int32_t) self.value) * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp17 });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp18 = ((int32_t) self.value) * p_other.value;
    return ((panda$core$Int32) { $tmp18 });
}
panda$core$Int64 panda$core$Int16$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp19 = ((int64_t) self.value) * p_other.value;
    return ((panda$core$Int64) { $tmp19 });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp20 = ((int32_t) self.value) * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp20 });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp21 = ((int32_t) self.value) * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp21 });
}
panda$core$Int64 panda$core$Int16$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp22 = ((int64_t) self.value) * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp22 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp23 = ((int32_t) self.value) / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp23 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp24 = ((int32_t) self.value) / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp24 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp25 = ((int32_t) self.value) / p_other.value;
    return ((panda$core$Int32) { $tmp25 });
}
panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp26 = ((int64_t) self.value) / p_other.value;
    return ((panda$core$Int64) { $tmp26 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp27 = ((int32_t) self.value) / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp27 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp28 = ((int32_t) self.value) / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp28 });
}
panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp29 = ((int64_t) self.value) / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp29 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp30 = ((int32_t) self.value) % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp30 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp31 = ((int32_t) self.value) % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp31 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp32 = ((int32_t) self.value) % p_other.value;
    return ((panda$core$Int32) { $tmp32 });
}
panda$core$Int64 panda$core$Int16$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp33 = ((int64_t) self.value) % p_other.value;
    return ((panda$core$Int64) { $tmp33 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp34 = ((int32_t) self.value) % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp34 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp35 = ((int32_t) self.value) % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp35 });
}
panda$core$Int64 panda$core$Int16$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp36 = ((int64_t) self.value) % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp36 });
}
panda$core$Int16 panda$core$Int16$$BNOT$R$panda$core$Int16(panda$core$Int16 self) {
    return ((panda$core$Int16) { ~self.value });
}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp38 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp38 });
}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp39 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp39 });
}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp40 = ((int32_t) self.value) & p_other.value;
    return ((panda$core$Int32) { $tmp40 });
}
panda$core$Int64 panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp41 = ((int64_t) self.value) & p_other.value;
    return ((panda$core$Int64) { $tmp41 });
}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp42 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp42 });
}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp43 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp43 });
}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp44 = ((uint32_t) self.value) & p_other.value;
    return ((panda$core$UInt32) { $tmp44 });
}
panda$core$UInt64 panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp45 = ((uint64_t) self.value) & p_other.value;
    return ((panda$core$UInt64) { $tmp45 });
}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp46 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp46 });
}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp47 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp47 });
}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp48 = ((int32_t) self.value) | p_other.value;
    return ((panda$core$Int32) { $tmp48 });
}
panda$core$Int64 panda$core$Int16$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp49 = ((int64_t) self.value) | p_other.value;
    return ((panda$core$Int64) { $tmp49 });
}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp50 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp50 });
}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp51 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp51 });
}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp52 = ((uint32_t) self.value) | p_other.value;
    return ((panda$core$UInt32) { $tmp52 });
}
panda$core$UInt64 panda$core$Int16$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp53 = ((uint64_t) self.value) | p_other.value;
    return ((panda$core$UInt64) { $tmp53 });
}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp54 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp54 });
}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp55 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp55 });
}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp56 = ((int32_t) self.value) ^ p_other.value;
    return ((panda$core$Int32) { $tmp56 });
}
panda$core$Int64 panda$core$Int16$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp57 = ((int64_t) self.value) ^ p_other.value;
    return ((panda$core$Int64) { $tmp57 });
}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp58 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp58 });
}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp59 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp59 });
}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp60 = ((uint32_t) self.value) ^ p_other.value;
    return ((panda$core$UInt32) { $tmp60 });
}
panda$core$UInt64 panda$core$Int16$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp61 = ((uint64_t) self.value) ^ p_other.value;
    return ((panda$core$UInt64) { $tmp61 });
}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp62 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp62 });
}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp63 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp63 });
}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp64 = ((int32_t) self.value) << p_other.value;
    return ((panda$core$Int32) { $tmp64 });
}
panda$core$Int64 panda$core$Int16$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp65 = ((int64_t) self.value) << p_other.value;
    return ((panda$core$Int64) { $tmp65 });
}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp66 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp66 });
}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp67 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp67 });
}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp68 = ((uint32_t) self.value) << p_other.value;
    return ((panda$core$UInt32) { $tmp68 });
}
panda$core$UInt64 panda$core$Int16$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp69 = ((uint64_t) self.value) << p_other.value;
    return ((panda$core$UInt64) { $tmp69 });
}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp70 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp70 });
}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp71 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp71 });
}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp72 = ((int32_t) self.value) >> p_other.value;
    return ((panda$core$Int32) { $tmp72 });
}
panda$core$Int64 panda$core$Int16$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp73 = ((int64_t) self.value) >> p_other.value;
    return ((panda$core$Int64) { $tmp73 });
}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp74 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp74 });
}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp75 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp75 });
}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp76 = ((uint32_t) self.value) >> p_other.value;
    return ((panda$core$UInt32) { $tmp76 });
}
panda$core$UInt64 panda$core$Int16$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp77 = ((uint64_t) self.value) >> p_other.value;
    return ((panda$core$UInt64) { $tmp77 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp78 = ((int32_t) self.value) == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp78 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp79 = ((int32_t) self.value) == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp79 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp80 = ((int32_t) self.value) == p_other.value;
    return ((panda$core$Bit) { $tmp80 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp81 = ((int64_t) self.value) == p_other.value;
    return ((panda$core$Bit) { $tmp81 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp82 = ((int32_t) self.value) == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp82 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp83 = ((int32_t) self.value) == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp83 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp84 = ((int64_t) self.value) == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp84 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp85 = ((int32_t) self.value) != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp85 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp86 = ((int32_t) self.value) != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp86 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp87 = ((int32_t) self.value) != p_other.value;
    return ((panda$core$Bit) { $tmp87 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp88 = ((int64_t) self.value) != p_other.value;
    return ((panda$core$Bit) { $tmp88 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp89 = ((int32_t) self.value) != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp89 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp90 = ((int32_t) self.value) != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp90 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp91 = ((int64_t) self.value) != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp91 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp92 = ((int32_t) self.value) < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp92 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp93 = ((int32_t) self.value) < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp93 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp94 = ((int32_t) self.value) < p_other.value;
    return ((panda$core$Bit) { $tmp94 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp95 = ((int64_t) self.value) < p_other.value;
    return ((panda$core$Bit) { $tmp95 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp96 = ((int32_t) self.value) < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp96 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp97 = ((int32_t) self.value) < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp97 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp98 = ((int64_t) self.value) < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp98 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp99 = ((int32_t) self.value) > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp99 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp100 = ((int32_t) self.value) > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp100 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp101 = ((int32_t) self.value) > p_other.value;
    return ((panda$core$Bit) { $tmp101 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp102 = ((int64_t) self.value) > p_other.value;
    return ((panda$core$Bit) { $tmp102 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp103 = ((int32_t) self.value) > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp103 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp104 = ((int32_t) self.value) > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp104 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp105 = ((int64_t) self.value) > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp105 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp106 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp106 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp107 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp107 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp108 = ((int32_t) self.value) >= p_other.value;
    return ((panda$core$Bit) { $tmp108 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp109 = ((int64_t) self.value) >= p_other.value;
    return ((panda$core$Bit) { $tmp109 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp110 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp110 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp111 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp111 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp112 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp112 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp113 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp113 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp114 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp114 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp115 = ((int32_t) self.value) <= p_other.value;
    return ((panda$core$Bit) { $tmp115 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp116 = ((int64_t) self.value) <= p_other.value;
    return ((panda$core$Bit) { $tmp116 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp117 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp117 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp118 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp118 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp119 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp119 });
}
panda$core$Int16 panda$core$Int16$abs$R$panda$core$Int16(panda$core$Int16 self) {
    panda$core$Bit $tmp120 = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16) { 0 }));
    if ($tmp120.value) {
    {
        panda$core$Int16 $tmp121 = panda$core$Int16$$SUB$R$panda$core$Int16(self);
        return $tmp121;
    }
    }
    return self;
}
panda$core$Int32 panda$core$Int16$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp122 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp122 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp123 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp123 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp124 = ((int32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp124 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { p_other.value });
}
panda$core$Int64 panda$core$Int16$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp125 = ((int64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp125 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { p_other.value });
}
panda$core$Int32 panda$core$Int16$min$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp126 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp126 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$min$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp127 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp127 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int64 panda$core$Int16$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp128 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp128 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp129 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp129 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp130 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp130 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp131 = ((int32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp131 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { p_other.value });
}
panda$core$Int64 panda$core$Int16$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp132 = ((int64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp132 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { p_other.value });
}
panda$core$Int32 panda$core$Int16$max$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp133 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp133 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$max$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp134 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp134 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int64 panda$core$Int16$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp135 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp135 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp136 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp137 = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp136);
    panda$core$Bit $tmp138 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp137, ((panda$core$Int32) { 0 }));
    return $tmp138;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp139 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp140 = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp139);
    panda$core$Bit $tmp141 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp140, ((panda$core$Int32) { 0 }));
    return $tmp141;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp142 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp143 = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp142);
    panda$core$Bit $tmp144 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp143, ((panda$core$Int32) { 0 }));
    return $tmp144;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp145 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp146 = panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp145);
    panda$core$Bit $tmp147 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp146, ((panda$core$Int64) { 0 }));
    return $tmp147;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp148 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp149 = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp148);
    panda$core$Bit $tmp150 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp149, ((panda$core$UInt32) { 0 }));
    return $tmp150;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp151 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp152 = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp151);
    panda$core$Bit $tmp153 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp152, ((panda$core$UInt32) { 0 }));
    return $tmp153;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp154 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp155 = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp154);
    panda$core$Bit $tmp156 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp155, ((panda$core$UInt32) { 0 }));
    return $tmp156;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp157 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp158 = panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp157);
    panda$core$Bit $tmp159 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp158, ((panda$core$UInt64) { 0 }));
    return $tmp159;
}
panda$core$Int64 panda$core$Int16$hash$R$panda$core$Int64(panda$core$Int16 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$Int16$nullable panda$core$Int16$parse$panda$core$String$panda$core$Int64$R$panda$core$Int16$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs162;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp163;
    panda$core$UInt64$nullable result168;
    panda$core$Bit $tmp161 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s160);
    if ($tmp161.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp163, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp164 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp163);
        panda$core$UInt64$nullable $tmp165 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp164, p_radix);
        abs162 = $tmp165;
        if (((panda$core$Bit) { !abs162.nonnull }).value) {
        {
            return ((panda$core$Int16$nullable) { .nonnull = false });
        }
        }
        panda$core$Int16 $tmp166 = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64) abs162.value));
        panda$core$Int16 $tmp167 = panda$core$Int16$$SUB$R$panda$core$Int16($tmp166);
        return ((panda$core$Int16$nullable) { $tmp167, true });
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp169 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result168 = $tmp169;
        if (((panda$core$Bit) { !result168.nonnull }).value) {
        {
            return ((panda$core$Int16$nullable) { .nonnull = false });
        }
        }
        panda$core$Int16 $tmp170 = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64) result168.value));
        return ((panda$core$Int16$nullable) { $tmp170, true });
    }
    }
}
panda$core$Int8 panda$core$Int16$convert$R$panda$core$Int8(panda$core$Int16 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int32 panda$core$Int16$convert$R$panda$core$Int32(panda$core$Int16 self) {
    return ((panda$core$Int32) { ((int32_t) self.value) });
}
panda$core$Int64 panda$core$Int16$convert$R$panda$core$Int64(panda$core$Int16 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8 panda$core$Int16$convert$R$panda$core$UInt8(panda$core$Int16 self) {
    return ((panda$core$UInt8) { ((uint8_t) self.value) });
}
panda$core$UInt16 panda$core$Int16$convert$R$panda$core$UInt16(panda$core$Int16 self) {
    return ((panda$core$UInt16) { ((uint16_t) self.value) });
}
panda$core$UInt32 panda$core$Int16$convert$R$panda$core$UInt32(panda$core$Int16 self) {
    return ((panda$core$UInt32) { ((uint32_t) self.value) });
}
panda$core$UInt64 panda$core$Int16$convert$R$panda$core$UInt64(panda$core$Int16 self) {
    return ((panda$core$UInt64) { ((uint64_t) self.value) });
}
panda$core$Real32 panda$core$Int16$convert$R$panda$core$Real32(panda$core$Int16 self) {
    return ((panda$core$Real32) { ((float) self.value) });
}
panda$core$Real64 panda$core$Int16$convert$R$panda$core$Real64(panda$core$Int16 self) {
    return ((panda$core$Real64) { ((double) self.value) });
}
panda$core$String* panda$core$Int16$convert$R$panda$core$String(panda$core$Int16 self) {
    panda$core$Int64 max171;
    panda$core$Char8* chars172;
    panda$core$Int64 index173;
    panda$core$Int16 value175;
    panda$core$Char8 $tmp179;
    panda$core$Char8 $tmp190;
    panda$core$Char8 $tmp198;
    panda$core$Int64 size199;
    panda$core$Range$LTpanda$core$Int64$GT $tmp201;
    max171 = ((panda$core$Int64) { 6 });
    chars172 = ((panda$core$Char8*) malloc(max171.value * 1));
    panda$core$Int64 $tmp174 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max171, ((panda$core$Int64) { 1 }));
    index173 = $tmp174;
    value175 = self;
    panda$core$Bit $tmp176 = panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(value175, ((panda$core$Int16) { 0 }));
    if ($tmp176.value) {
    {
        $l177:;
        {
            panda$core$Int32 $tmp180 = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(value175, ((panda$core$Int16) { 10 }));
            panda$core$Int32 $tmp181 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp180, ((panda$core$Int32) { 48 }));
            panda$core$UInt8 $tmp182 = panda$core$Int32$convert$R$panda$core$UInt8($tmp181);
            panda$core$Char8$init$panda$core$UInt8(&$tmp179, $tmp182);
            chars172[index173.value] = $tmp179;
            panda$core$Int32 $tmp183 = panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(value175, ((panda$core$Int16) { 10 }));
            panda$core$Int16 $tmp184 = panda$core$Int32$convert$R$panda$core$Int16($tmp183);
            value175 = $tmp184;
            panda$core$Int64 $tmp185 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index173, ((panda$core$Int64) { 1 }));
            index173 = $tmp185;
        }
        panda$core$Bit $tmp186 = panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(value175, ((panda$core$Int16) { 0 }));
        if ($tmp186.value) goto $l177;
        $l178:;
        panda$core$Int64 $tmp187 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index173, ((panda$core$Int64) { 1 }));
        index173 = $tmp187;
    }
    }
    else {
    {
        $l188:;
        {
            panda$core$Int32 $tmp191 = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(value175, ((panda$core$Int16) { 10 }));
            panda$core$Int32 $tmp192 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 48 }), $tmp191);
            panda$core$UInt8 $tmp193 = panda$core$Int32$convert$R$panda$core$UInt8($tmp192);
            panda$core$Char8$init$panda$core$UInt8(&$tmp190, $tmp193);
            chars172[index173.value] = $tmp190;
            panda$core$Int32 $tmp194 = panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(value175, ((panda$core$Int16) { 10 }));
            panda$core$Int16 $tmp195 = panda$core$Int32$convert$R$panda$core$Int16($tmp194);
            value175 = $tmp195;
            panda$core$Int64 $tmp196 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index173, ((panda$core$Int64) { 1 }));
            index173 = $tmp196;
        }
        panda$core$Bit $tmp197 = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(value175, ((panda$core$Int16) { 0 }));
        if ($tmp197.value) goto $l188;
        $l189:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp198, ((panda$core$UInt8) { 45 }));
        chars172[index173.value] = $tmp198;
    }
    }
    panda$core$Int64 $tmp200 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max171, index173);
    size199 = $tmp200;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp201, ((panda$core$Int64) { 0 }), size199, ((panda$core$Bit) { false }));
    int64_t $tmp203 = $tmp201.min.value;
    panda$core$Int64 i202 = { $tmp203 };
    int64_t $tmp205 = $tmp201.max.value;
    bool $tmp206 = $tmp201.inclusive.value;
    if ($tmp206) goto $l213; else goto $l214;
    $l213:;
    if ($tmp203 <= $tmp205) goto $l207; else goto $l209;
    $l214:;
    if ($tmp203 < $tmp205) goto $l207; else goto $l209;
    $l207:;
    {
        panda$core$Int64 $tmp215 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i202, index173);
        chars172[i202.value] = chars172[$tmp215.value];
    }
    $l210:;
    int64_t $tmp217 = $tmp205 - i202.value;
    if ($tmp206) goto $l218; else goto $l219;
    $l218:;
    if ($tmp217 >= 1) goto $l216; else goto $l209;
    $l219:;
    if ($tmp217 > 1) goto $l216; else goto $l209;
    $l216:;
    i202.value += 1;
    goto $l207;
    $l209:;
    panda$core$String* $tmp222 = (panda$core$String*) malloc(48);
    $tmp222->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp222->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp222, chars172, size199);
    return $tmp222;
}
panda$core$String* panda$core$Int16$format$panda$core$String$R$panda$core$String(panda$core$Int16 self, panda$core$String* p_fmt) {
    bool $tmp224 = self.value < 0;
    panda$core$Int16 $tmp225 = panda$core$Int16$abs$R$panda$core$Int16(self);
    panda$core$UInt64 $tmp226 = panda$core$Int16$convert$R$panda$core$UInt64($tmp225);
    panda$core$String* $tmp227 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { $tmp224 }), $tmp226, ((panda$core$UInt64) { 65535 }), p_fmt);
    return $tmp227;
}

