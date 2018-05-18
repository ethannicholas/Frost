#include "panda/core/Int16.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt8.h"
#include "panda/core/Int32.h"
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
panda$core$Bit panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Int16 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$Int16$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$Int16$wrapper* self, panda$core$String* fmt) {
    return panda$core$Int16$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Int64 panda$core$Int16$hash$R$panda$core$Int64$wrappershim(panda$core$Int16$wrapper* self) {
    return panda$core$Int16$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Equatable* other) {
    return panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$wrappershim(panda$core$Int16$wrapper* self, panda$core$Equatable* other) {
    return panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit(self->value, ((panda$core$Int16$wrapper*) other)->value);
}
panda$core$String* panda$core$Int16$convert$R$panda$core$String$wrappershim(panda$core$Int16$wrapper* self) {
    return panda$core$Int16$convert$R$panda$core$String(self->value);
}
void panda$core$Int16$cleanup$wrappershim(panda$core$Int16$wrapper* self) {
    panda$core$Int16$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int16$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Int16$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int16$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int16$_panda$core$Formattable, { panda$core$Int16$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int16$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int16$_panda$collections$Key, { panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int16$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int16$_panda$core$Comparable, { panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Int16$class_type panda$core$Int16$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int16$_panda$core$Equatable, { panda$core$Int16$convert$R$panda$core$String, panda$core$Int16$cleanup, panda$core$Int16$$ADD$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$ADD$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$ADD$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$SUB$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$SUB$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$SUB$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$SUB$R$panda$core$Int16, panda$core$Int16$$MUL$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$MUL$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$MUL$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$INTDIV$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$INTDIV$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$INTDIV$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$REM$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$REM$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$$REM$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$BNOT$R$panda$core$Int16, panda$core$Int16$$BAND$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$BAND$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$BAND$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$BOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$BOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$BOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$BOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$BOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$BXOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$BXOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$BXOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$BXOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$BXOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$SHL$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$SHL$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$SHL$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$SHL$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$SHL$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$SHR$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$$SHR$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$$SHR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int16$$SHR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int16$$SHR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int16$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int16$$EQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$EQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$NEQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$LT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$GT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$GE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$LE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$abs$R$panda$core$Int16, panda$core$Int16$min$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$min$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$min$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$min$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$min$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$min$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$min$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$max$panda$core$Int8$R$panda$core$Int32, panda$core$Int16$max$panda$core$Int16$R$panda$core$Int32, panda$core$Int16$max$panda$core$Int32$R$panda$core$Int32, panda$core$Int16$max$panda$core$Int64$R$panda$core$Int64, panda$core$Int16$max$panda$core$UInt8$R$panda$core$Int32, panda$core$Int16$max$panda$core$UInt16$R$panda$core$Int32, panda$core$Int16$max$panda$core$UInt32$R$panda$core$Int64, panda$core$Int16$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$Int16$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$Int16$hash$R$panda$core$Int64, panda$core$Int16$convert$R$panda$core$Int8, panda$core$Int16$convert$R$panda$core$Int32, panda$core$Int16$convert$R$panda$core$Int64, panda$core$Int16$convert$R$panda$core$UInt8, panda$core$Int16$convert$R$panda$core$UInt16, panda$core$Int16$convert$R$panda$core$UInt32, panda$core$Int16$convert$R$panda$core$UInt64, panda$core$Int16$convert$R$panda$core$Real32, panda$core$Int16$convert$R$panda$core$Real64, panda$core$Int16$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int16$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Int16$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int16$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int16$wrapper_panda$core$Formattable, { panda$core$Int16$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int16$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int16$wrapper_panda$collections$Key, { panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$wrappershim, panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$wrappershim, panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$wrappershim, panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int16$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int16$wrapper_panda$core$Comparable, { panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$wrappershim, panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$Int16$wrapperclass_type panda$core$Int16$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int16$wrapper_panda$core$Equatable, { panda$core$Int16$convert$R$panda$core$String$wrappershim, panda$core$Int16$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

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
    panda$core$Int32 $returnValue3;
    int32_t $tmp4 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $returnValue3 = ((panda$core$Int32) { $tmp4 });
    return $returnValue3;
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue6;
    int32_t $tmp7 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $returnValue6 = ((panda$core$Int32) { $tmp7 });
    return $returnValue6;
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue9;
    int32_t $tmp10 = ((int32_t) self.value) + p_other.value;
    $returnValue9 = ((panda$core$Int32) { $tmp10 });
    return $returnValue9;
}
panda$core$Int64 panda$core$Int16$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue12;
    int64_t $tmp13 = ((int64_t) self.value) + p_other.value;
    $returnValue12 = ((panda$core$Int64) { $tmp13 });
    return $returnValue12;
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Int32 $returnValue15;
    int32_t $tmp16 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $returnValue15 = ((panda$core$Int32) { $tmp16 });
    return $returnValue15;
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue18;
    int32_t $tmp19 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $returnValue18 = ((panda$core$Int32) { $tmp19 });
    return $returnValue18;
}
panda$core$Int64 panda$core$Int16$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue21;
    int64_t $tmp22 = ((int64_t) self.value) + ((int64_t) p_other.value);
    $returnValue21 = ((panda$core$Int64) { $tmp22 });
    return $returnValue21;
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue24;
    int32_t $tmp25 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $returnValue24 = ((panda$core$Int32) { $tmp25 });
    return $returnValue24;
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue27;
    int32_t $tmp28 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $returnValue27 = ((panda$core$Int32) { $tmp28 });
    return $returnValue27;
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue30;
    int32_t $tmp31 = ((int32_t) self.value) - p_other.value;
    $returnValue30 = ((panda$core$Int32) { $tmp31 });
    return $returnValue30;
}
panda$core$Int64 panda$core$Int16$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue33;
    int64_t $tmp34 = ((int64_t) self.value) - p_other.value;
    $returnValue33 = ((panda$core$Int64) { $tmp34 });
    return $returnValue33;
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Int32 $returnValue36;
    int32_t $tmp37 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $returnValue36 = ((panda$core$Int32) { $tmp37 });
    return $returnValue36;
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue39;
    int32_t $tmp40 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $returnValue39 = ((panda$core$Int32) { $tmp40 });
    return $returnValue39;
}
panda$core$Int64 panda$core$Int16$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue42;
    int64_t $tmp43 = ((int64_t) self.value) - ((int64_t) p_other.value);
    $returnValue42 = ((panda$core$Int64) { $tmp43 });
    return $returnValue42;
}
panda$core$Int16 panda$core$Int16$$SUB$R$panda$core$Int16(panda$core$Int16 self) {
    panda$core$Int16 $returnValue45;
    $returnValue45 = ((panda$core$Int16) { -self.value });
    return $returnValue45;
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue48;
    int32_t $tmp49 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $returnValue48 = ((panda$core$Int32) { $tmp49 });
    return $returnValue48;
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue51;
    int32_t $tmp52 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $returnValue51 = ((panda$core$Int32) { $tmp52 });
    return $returnValue51;
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue54;
    int32_t $tmp55 = ((int32_t) self.value) * p_other.value;
    $returnValue54 = ((panda$core$Int32) { $tmp55 });
    return $returnValue54;
}
panda$core$Int64 panda$core$Int16$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue57;
    int64_t $tmp58 = ((int64_t) self.value) * p_other.value;
    $returnValue57 = ((panda$core$Int64) { $tmp58 });
    return $returnValue57;
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Int32 $returnValue60;
    int32_t $tmp61 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $returnValue60 = ((panda$core$Int32) { $tmp61 });
    return $returnValue60;
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue63;
    int32_t $tmp64 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $returnValue63 = ((panda$core$Int32) { $tmp64 });
    return $returnValue63;
}
panda$core$Int64 panda$core$Int16$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue66;
    int64_t $tmp67 = ((int64_t) self.value) * ((int64_t) p_other.value);
    $returnValue66 = ((panda$core$Int64) { $tmp67 });
    return $returnValue66;
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue69;
    int32_t $tmp70 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $returnValue69 = ((panda$core$Int32) { $tmp70 });
    return $returnValue69;
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue72;
    int32_t $tmp73 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $returnValue72 = ((panda$core$Int32) { $tmp73 });
    return $returnValue72;
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue75;
    int32_t $tmp76 = ((int32_t) self.value) / p_other.value;
    $returnValue75 = ((panda$core$Int32) { $tmp76 });
    return $returnValue75;
}
panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue78;
    int64_t $tmp79 = ((int64_t) self.value) / p_other.value;
    $returnValue78 = ((panda$core$Int64) { $tmp79 });
    return $returnValue78;
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Int32 $returnValue81;
    int32_t $tmp82 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $returnValue81 = ((panda$core$Int32) { $tmp82 });
    return $returnValue81;
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue84;
    int32_t $tmp85 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $returnValue84 = ((panda$core$Int32) { $tmp85 });
    return $returnValue84;
}
panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue87;
    int64_t $tmp88 = ((int64_t) self.value) / ((int64_t) p_other.value);
    $returnValue87 = ((panda$core$Int64) { $tmp88 });
    return $returnValue87;
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue90;
    int32_t $tmp91 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $returnValue90 = ((panda$core$Int32) { $tmp91 });
    return $returnValue90;
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue93;
    int32_t $tmp94 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $returnValue93 = ((panda$core$Int32) { $tmp94 });
    return $returnValue93;
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue96;
    int32_t $tmp97 = ((int32_t) self.value) % p_other.value;
    $returnValue96 = ((panda$core$Int32) { $tmp97 });
    return $returnValue96;
}
panda$core$Int64 panda$core$Int16$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue99;
    int64_t $tmp100 = ((int64_t) self.value) % p_other.value;
    $returnValue99 = ((panda$core$Int64) { $tmp100 });
    return $returnValue99;
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Int32 $returnValue102;
    int32_t $tmp103 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $returnValue102 = ((panda$core$Int32) { $tmp103 });
    return $returnValue102;
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue105;
    int32_t $tmp106 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $returnValue105 = ((panda$core$Int32) { $tmp106 });
    return $returnValue105;
}
panda$core$Int64 panda$core$Int16$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue108;
    int64_t $tmp109 = ((int64_t) self.value) % ((int64_t) p_other.value);
    $returnValue108 = ((panda$core$Int64) { $tmp109 });
    return $returnValue108;
}
panda$core$Int16 panda$core$Int16$$BNOT$R$panda$core$Int16(panda$core$Int16 self) {
    panda$core$Int16 $returnValue111;
    $returnValue111 = ((panda$core$Int16) { ~self.value });
    return $returnValue111;
}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue114;
    int32_t $tmp115 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $returnValue114 = ((panda$core$Int32) { $tmp115 });
    return $returnValue114;
}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue117;
    int32_t $tmp118 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $returnValue117 = ((panda$core$Int32) { $tmp118 });
    return $returnValue117;
}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue120;
    int32_t $tmp121 = ((int32_t) self.value) & p_other.value;
    $returnValue120 = ((panda$core$Int32) { $tmp121 });
    return $returnValue120;
}
panda$core$Int64 panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue123;
    int64_t $tmp124 = ((int64_t) self.value) & p_other.value;
    $returnValue123 = ((panda$core$Int64) { $tmp124 });
    return $returnValue123;
}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue126;
    uint32_t $tmp127 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $returnValue126 = ((panda$core$UInt32) { $tmp127 });
    return $returnValue126;
}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue129;
    uint32_t $tmp130 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $returnValue129 = ((panda$core$UInt32) { $tmp130 });
    return $returnValue129;
}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue132;
    uint32_t $tmp133 = ((uint32_t) self.value) & p_other.value;
    $returnValue132 = ((panda$core$UInt32) { $tmp133 });
    return $returnValue132;
}
panda$core$UInt64 panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue135;
    uint64_t $tmp136 = ((uint64_t) self.value) & p_other.value;
    $returnValue135 = ((panda$core$UInt64) { $tmp136 });
    return $returnValue135;
}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue138;
    int32_t $tmp139 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $returnValue138 = ((panda$core$Int32) { $tmp139 });
    return $returnValue138;
}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue141;
    int32_t $tmp142 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $returnValue141 = ((panda$core$Int32) { $tmp142 });
    return $returnValue141;
}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue144;
    int32_t $tmp145 = ((int32_t) self.value) | p_other.value;
    $returnValue144 = ((panda$core$Int32) { $tmp145 });
    return $returnValue144;
}
panda$core$Int64 panda$core$Int16$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue147;
    int64_t $tmp148 = ((int64_t) self.value) | p_other.value;
    $returnValue147 = ((panda$core$Int64) { $tmp148 });
    return $returnValue147;
}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue150;
    uint32_t $tmp151 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $returnValue150 = ((panda$core$UInt32) { $tmp151 });
    return $returnValue150;
}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue153;
    uint32_t $tmp154 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $returnValue153 = ((panda$core$UInt32) { $tmp154 });
    return $returnValue153;
}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue156;
    uint32_t $tmp157 = ((uint32_t) self.value) | p_other.value;
    $returnValue156 = ((panda$core$UInt32) { $tmp157 });
    return $returnValue156;
}
panda$core$UInt64 panda$core$Int16$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue159;
    uint64_t $tmp160 = ((uint64_t) self.value) | p_other.value;
    $returnValue159 = ((panda$core$UInt64) { $tmp160 });
    return $returnValue159;
}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue162;
    int32_t $tmp163 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $returnValue162 = ((panda$core$Int32) { $tmp163 });
    return $returnValue162;
}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue165;
    int32_t $tmp166 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $returnValue165 = ((panda$core$Int32) { $tmp166 });
    return $returnValue165;
}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue168;
    int32_t $tmp169 = ((int32_t) self.value) ^ p_other.value;
    $returnValue168 = ((panda$core$Int32) { $tmp169 });
    return $returnValue168;
}
panda$core$Int64 panda$core$Int16$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue171;
    int64_t $tmp172 = ((int64_t) self.value) ^ p_other.value;
    $returnValue171 = ((panda$core$Int64) { $tmp172 });
    return $returnValue171;
}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue174;
    uint32_t $tmp175 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $returnValue174 = ((panda$core$UInt32) { $tmp175 });
    return $returnValue174;
}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue177;
    uint32_t $tmp178 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $returnValue177 = ((panda$core$UInt32) { $tmp178 });
    return $returnValue177;
}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue180;
    uint32_t $tmp181 = ((uint32_t) self.value) ^ p_other.value;
    $returnValue180 = ((panda$core$UInt32) { $tmp181 });
    return $returnValue180;
}
panda$core$UInt64 panda$core$Int16$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue183;
    uint64_t $tmp184 = ((uint64_t) self.value) ^ p_other.value;
    $returnValue183 = ((panda$core$UInt64) { $tmp184 });
    return $returnValue183;
}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue186;
    int32_t $tmp187 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $returnValue186 = ((panda$core$Int32) { $tmp187 });
    return $returnValue186;
}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue189;
    int32_t $tmp190 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $returnValue189 = ((panda$core$Int32) { $tmp190 });
    return $returnValue189;
}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue192;
    int32_t $tmp193 = ((int32_t) self.value) << p_other.value;
    $returnValue192 = ((panda$core$Int32) { $tmp193 });
    return $returnValue192;
}
panda$core$Int64 panda$core$Int16$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue195;
    int64_t $tmp196 = ((int64_t) self.value) << p_other.value;
    $returnValue195 = ((panda$core$Int64) { $tmp196 });
    return $returnValue195;
}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue198;
    uint32_t $tmp199 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $returnValue198 = ((panda$core$UInt32) { $tmp199 });
    return $returnValue198;
}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue201;
    uint32_t $tmp202 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $returnValue201 = ((panda$core$UInt32) { $tmp202 });
    return $returnValue201;
}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue204;
    uint32_t $tmp205 = ((uint32_t) self.value) << p_other.value;
    $returnValue204 = ((panda$core$UInt32) { $tmp205 });
    return $returnValue204;
}
panda$core$UInt64 panda$core$Int16$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue207;
    uint64_t $tmp208 = ((uint64_t) self.value) << p_other.value;
    $returnValue207 = ((panda$core$UInt64) { $tmp208 });
    return $returnValue207;
}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue210;
    int32_t $tmp211 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $returnValue210 = ((panda$core$Int32) { $tmp211 });
    return $returnValue210;
}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue213;
    int32_t $tmp214 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $returnValue213 = ((panda$core$Int32) { $tmp214 });
    return $returnValue213;
}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue216;
    int32_t $tmp217 = ((int32_t) self.value) >> p_other.value;
    $returnValue216 = ((panda$core$Int32) { $tmp217 });
    return $returnValue216;
}
panda$core$Int64 panda$core$Int16$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue219;
    int64_t $tmp220 = ((int64_t) self.value) >> p_other.value;
    $returnValue219 = ((panda$core$Int64) { $tmp220 });
    return $returnValue219;
}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue222;
    uint32_t $tmp223 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $returnValue222 = ((panda$core$UInt32) { $tmp223 });
    return $returnValue222;
}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue225;
    uint32_t $tmp226 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $returnValue225 = ((panda$core$UInt32) { $tmp226 });
    return $returnValue225;
}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue228;
    uint32_t $tmp229 = ((uint32_t) self.value) >> p_other.value;
    $returnValue228 = ((panda$core$UInt32) { $tmp229 });
    return $returnValue228;
}
panda$core$UInt64 panda$core$Int16$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue231;
    uint64_t $tmp232 = ((uint64_t) self.value) >> p_other.value;
    $returnValue231 = ((panda$core$UInt64) { $tmp232 });
    return $returnValue231;
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue234;
    bool $tmp235 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $returnValue234 = ((panda$core$Bit) { $tmp235 });
    return $returnValue234;
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue237;
    bool $tmp238 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $returnValue237 = ((panda$core$Bit) { $tmp238 });
    return $returnValue237;
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue240;
    bool $tmp241 = ((int32_t) self.value) == p_other.value;
    $returnValue240 = ((panda$core$Bit) { $tmp241 });
    return $returnValue240;
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue243;
    bool $tmp244 = ((int64_t) self.value) == p_other.value;
    $returnValue243 = ((panda$core$Bit) { $tmp244 });
    return $returnValue243;
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue246;
    bool $tmp247 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $returnValue246 = ((panda$core$Bit) { $tmp247 });
    return $returnValue246;
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue249;
    bool $tmp250 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $returnValue249 = ((panda$core$Bit) { $tmp250 });
    return $returnValue249;
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue252;
    bool $tmp253 = ((int64_t) self.value) == ((int64_t) p_other.value);
    $returnValue252 = ((panda$core$Bit) { $tmp253 });
    return $returnValue252;
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue255;
    bool $tmp256 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $returnValue255 = ((panda$core$Bit) { $tmp256 });
    return $returnValue255;
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue258;
    bool $tmp259 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $returnValue258 = ((panda$core$Bit) { $tmp259 });
    return $returnValue258;
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue261;
    bool $tmp262 = ((int32_t) self.value) != p_other.value;
    $returnValue261 = ((panda$core$Bit) { $tmp262 });
    return $returnValue261;
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue264;
    bool $tmp265 = ((int64_t) self.value) != p_other.value;
    $returnValue264 = ((panda$core$Bit) { $tmp265 });
    return $returnValue264;
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue267;
    bool $tmp268 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $returnValue267 = ((panda$core$Bit) { $tmp268 });
    return $returnValue267;
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue270;
    bool $tmp271 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $returnValue270 = ((panda$core$Bit) { $tmp271 });
    return $returnValue270;
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue273;
    bool $tmp274 = ((int64_t) self.value) != ((int64_t) p_other.value);
    $returnValue273 = ((panda$core$Bit) { $tmp274 });
    return $returnValue273;
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue276;
    bool $tmp277 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $returnValue276 = ((panda$core$Bit) { $tmp277 });
    return $returnValue276;
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue279;
    bool $tmp280 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $returnValue279 = ((panda$core$Bit) { $tmp280 });
    return $returnValue279;
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue282;
    bool $tmp283 = ((int32_t) self.value) < p_other.value;
    $returnValue282 = ((panda$core$Bit) { $tmp283 });
    return $returnValue282;
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue285;
    bool $tmp286 = ((int64_t) self.value) < p_other.value;
    $returnValue285 = ((panda$core$Bit) { $tmp286 });
    return $returnValue285;
}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue288;
    bool $tmp289 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $returnValue288 = ((panda$core$Bit) { $tmp289 });
    return $returnValue288;
}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue291;
    bool $tmp292 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $returnValue291 = ((panda$core$Bit) { $tmp292 });
    return $returnValue291;
}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue294;
    bool $tmp295 = ((int64_t) self.value) < ((int64_t) p_other.value);
    $returnValue294 = ((panda$core$Bit) { $tmp295 });
    return $returnValue294;
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue297;
    bool $tmp298 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $returnValue297 = ((panda$core$Bit) { $tmp298 });
    return $returnValue297;
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue300;
    bool $tmp301 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $returnValue300 = ((panda$core$Bit) { $tmp301 });
    return $returnValue300;
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue303;
    bool $tmp304 = ((int32_t) self.value) > p_other.value;
    $returnValue303 = ((panda$core$Bit) { $tmp304 });
    return $returnValue303;
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue306;
    bool $tmp307 = ((int64_t) self.value) > p_other.value;
    $returnValue306 = ((panda$core$Bit) { $tmp307 });
    return $returnValue306;
}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue309;
    bool $tmp310 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $returnValue309 = ((panda$core$Bit) { $tmp310 });
    return $returnValue309;
}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue312;
    bool $tmp313 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $returnValue312 = ((panda$core$Bit) { $tmp313 });
    return $returnValue312;
}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue315;
    bool $tmp316 = ((int64_t) self.value) > ((int64_t) p_other.value);
    $returnValue315 = ((panda$core$Bit) { $tmp316 });
    return $returnValue315;
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue318;
    bool $tmp319 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $returnValue318 = ((panda$core$Bit) { $tmp319 });
    return $returnValue318;
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue321;
    bool $tmp322 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $returnValue321 = ((panda$core$Bit) { $tmp322 });
    return $returnValue321;
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue324;
    bool $tmp325 = ((int32_t) self.value) >= p_other.value;
    $returnValue324 = ((panda$core$Bit) { $tmp325 });
    return $returnValue324;
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue327;
    bool $tmp328 = ((int64_t) self.value) >= p_other.value;
    $returnValue327 = ((panda$core$Bit) { $tmp328 });
    return $returnValue327;
}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue330;
    bool $tmp331 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $returnValue330 = ((panda$core$Bit) { $tmp331 });
    return $returnValue330;
}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue333;
    bool $tmp334 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $returnValue333 = ((panda$core$Bit) { $tmp334 });
    return $returnValue333;
}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue336;
    bool $tmp337 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    $returnValue336 = ((panda$core$Bit) { $tmp337 });
    return $returnValue336;
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue339;
    bool $tmp340 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $returnValue339 = ((panda$core$Bit) { $tmp340 });
    return $returnValue339;
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue342;
    bool $tmp343 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $returnValue342 = ((panda$core$Bit) { $tmp343 });
    return $returnValue342;
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue345;
    bool $tmp346 = ((int32_t) self.value) <= p_other.value;
    $returnValue345 = ((panda$core$Bit) { $tmp346 });
    return $returnValue345;
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue348;
    bool $tmp349 = ((int64_t) self.value) <= p_other.value;
    $returnValue348 = ((panda$core$Bit) { $tmp349 });
    return $returnValue348;
}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue351;
    bool $tmp352 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $returnValue351 = ((panda$core$Bit) { $tmp352 });
    return $returnValue351;
}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue354;
    bool $tmp355 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $returnValue354 = ((panda$core$Bit) { $tmp355 });
    return $returnValue354;
}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue357;
    bool $tmp358 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    $returnValue357 = ((panda$core$Bit) { $tmp358 });
    return $returnValue357;
}
panda$core$Int16 panda$core$Int16$abs$R$panda$core$Int16(panda$core$Int16 self) {
    panda$core$Int16 $returnValue361;
    panda$core$Bit $tmp360 = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16) { 0 }));
    if ($tmp360.value) {
    {
        panda$core$Int16 $tmp362 = panda$core$Int16$$SUB$R$panda$core$Int16(self);
        $returnValue361 = $tmp362;
        return $returnValue361;
    }
    }
    $returnValue361 = self;
    return $returnValue361;
}
panda$core$Int32 panda$core$Int16$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue366;
    bool $tmp365 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp365 }).value) {
    {
        $returnValue366 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue366;
    }
    }
    $returnValue366 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue366;
}
panda$core$Int32 panda$core$Int16$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue370;
    bool $tmp369 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp369 }).value) {
    {
        $returnValue370 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue370;
    }
    }
    $returnValue370 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue370;
}
panda$core$Int32 panda$core$Int16$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue374;
    bool $tmp373 = ((int32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp373 }).value) {
    {
        $returnValue374 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue374;
    }
    }
    $returnValue374 = ((panda$core$Int32) { p_other.value });
    return $returnValue374;
}
panda$core$Int64 panda$core$Int16$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue378;
    bool $tmp377 = ((int64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp377 }).value) {
    {
        $returnValue378 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue378;
    }
    }
    $returnValue378 = ((panda$core$Int64) { p_other.value });
    return $returnValue378;
}
panda$core$Int32 panda$core$Int16$min$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Int32 $returnValue382;
    bool $tmp381 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp381 }).value) {
    {
        $returnValue382 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue382;
    }
    }
    $returnValue382 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue382;
}
panda$core$Int32 panda$core$Int16$min$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue386;
    bool $tmp385 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp385 }).value) {
    {
        $returnValue386 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue386;
    }
    }
    $returnValue386 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue386;
}
panda$core$Int64 panda$core$Int16$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue390;
    bool $tmp389 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp389 }).value) {
    {
        $returnValue390 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue390;
    }
    }
    $returnValue390 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue390;
}
panda$core$Int32 panda$core$Int16$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue394;
    bool $tmp393 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp393 }).value) {
    {
        $returnValue394 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue394;
    }
    }
    $returnValue394 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue394;
}
panda$core$Int32 panda$core$Int16$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue398;
    bool $tmp397 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp397 }).value) {
    {
        $returnValue398 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue398;
    }
    }
    $returnValue398 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue398;
}
panda$core$Int32 panda$core$Int16$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue402;
    bool $tmp401 = ((int32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp401 }).value) {
    {
        $returnValue402 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue402;
    }
    }
    $returnValue402 = ((panda$core$Int32) { p_other.value });
    return $returnValue402;
}
panda$core$Int64 panda$core$Int16$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue406;
    bool $tmp405 = ((int64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp405 }).value) {
    {
        $returnValue406 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue406;
    }
    }
    $returnValue406 = ((panda$core$Int64) { p_other.value });
    return $returnValue406;
}
panda$core$Int32 panda$core$Int16$max$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    panda$core$Int32 $returnValue410;
    bool $tmp409 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp409 }).value) {
    {
        $returnValue410 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue410;
    }
    }
    $returnValue410 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue410;
}
panda$core$Int32 panda$core$Int16$max$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue414;
    bool $tmp413 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp413 }).value) {
    {
        $returnValue414 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue414;
    }
    }
    $returnValue414 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue414;
}
panda$core$Int64 panda$core$Int16$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue418;
    bool $tmp417 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp417 }).value) {
    {
        $returnValue418 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue418;
    }
    }
    $returnValue418 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue418;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue421;
    panda$core$Int32 $tmp422 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp423 = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp422);
    panda$core$Bit $tmp424 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp423, ((panda$core$Int32) { 0 }));
    $returnValue421 = $tmp424;
    return $returnValue421;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue426;
    panda$core$Int32 $tmp427 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp428 = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp427);
    panda$core$Bit $tmp429 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp428, ((panda$core$Int32) { 0 }));
    $returnValue426 = $tmp429;
    return $returnValue426;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue431;
    panda$core$Int32 $tmp432 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp433 = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp432);
    panda$core$Bit $tmp434 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp433, ((panda$core$Int32) { 0 }));
    $returnValue431 = $tmp434;
    return $returnValue431;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_index) {
    panda$core$Bit $returnValue436;
    panda$core$Int64 $tmp437 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp438 = panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp437);
    panda$core$Bit $tmp439 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp438, ((panda$core$Int64) { 0 }));
    $returnValue436 = $tmp439;
    return $returnValue436;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue441;
    panda$core$UInt32 $tmp442 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp443 = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp442);
    panda$core$Bit $tmp444 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp443, ((panda$core$UInt32) { 0 }));
    $returnValue441 = $tmp444;
    return $returnValue441;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue446;
    panda$core$UInt32 $tmp447 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp448 = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp447);
    panda$core$Bit $tmp449 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp448, ((panda$core$UInt32) { 0 }));
    $returnValue446 = $tmp449;
    return $returnValue446;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue451;
    panda$core$UInt32 $tmp452 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp453 = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp452);
    panda$core$Bit $tmp454 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp453, ((panda$core$UInt32) { 0 }));
    $returnValue451 = $tmp454;
    return $returnValue451;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue456;
    panda$core$UInt64 $tmp457 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp458 = panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp457);
    panda$core$Bit $tmp459 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp458, ((panda$core$UInt64) { 0 }));
    $returnValue456 = $tmp459;
    return $returnValue456;
}
panda$core$Int64 panda$core$Int16$hash$R$panda$core$Int64(panda$core$Int16 self) {
    panda$core$Int64 $returnValue461;
    $returnValue461 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue461;
}
panda$core$Int16$nullable panda$core$Int16$parse$panda$core$String$panda$core$Int64$R$panda$core$Int16$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs465;
    panda$core$String* $tmp466;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp467;
    panda$core$Int16$nullable $returnValue470;
    panda$core$UInt64$nullable result475;
    panda$core$Bit $tmp464 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s463);
    if ($tmp464.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp467, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp468 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp467);
        $tmp466 = $tmp468;
        panda$core$UInt64$nullable $tmp469 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp466, p_radix);
        abs465 = $tmp469;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp466));
        if (((panda$core$Bit) { !abs465.nonnull }).value) {
        {
            $returnValue470 = ((panda$core$Int16$nullable) { .nonnull = false });
            return $returnValue470;
        }
        }
        panda$core$Int16 $tmp472 = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64) abs465.value));
        panda$core$Int16 $tmp473 = panda$core$Int16$$SUB$R$panda$core$Int16($tmp472);
        $returnValue470 = ((panda$core$Int16$nullable) { $tmp473, true });
        return $returnValue470;
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp476 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result475 = $tmp476;
        if (((panda$core$Bit) { !result475.nonnull }).value) {
        {
            $returnValue470 = ((panda$core$Int16$nullable) { .nonnull = false });
            return $returnValue470;
        }
        }
        panda$core$Int16 $tmp478 = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64) result475.value));
        $returnValue470 = ((panda$core$Int16$nullable) { $tmp478, true });
        return $returnValue470;
    }
    }
}
panda$core$Int8 panda$core$Int16$convert$R$panda$core$Int8(panda$core$Int16 self) {
    panda$core$Int8 $returnValue480;
    $returnValue480 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $returnValue480;
}
panda$core$Int32 panda$core$Int16$convert$R$panda$core$Int32(panda$core$Int16 self) {
    panda$core$Int32 $returnValue482;
    $returnValue482 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $returnValue482;
}
panda$core$Int64 panda$core$Int16$convert$R$panda$core$Int64(panda$core$Int16 self) {
    panda$core$Int64 $returnValue484;
    $returnValue484 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue484;
}
panda$core$UInt8 panda$core$Int16$convert$R$panda$core$UInt8(panda$core$Int16 self) {
    panda$core$UInt8 $returnValue486;
    $returnValue486 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $returnValue486;
}
panda$core$UInt16 panda$core$Int16$convert$R$panda$core$UInt16(panda$core$Int16 self) {
    panda$core$UInt16 $returnValue488;
    $returnValue488 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $returnValue488;
}
panda$core$UInt32 panda$core$Int16$convert$R$panda$core$UInt32(panda$core$Int16 self) {
    panda$core$UInt32 $returnValue490;
    $returnValue490 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $returnValue490;
}
panda$core$UInt64 panda$core$Int16$convert$R$panda$core$UInt64(panda$core$Int16 self) {
    panda$core$UInt64 $returnValue492;
    $returnValue492 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $returnValue492;
}
panda$core$Real32 panda$core$Int16$convert$R$panda$core$Real32(panda$core$Int16 self) {
    panda$core$Real32 $returnValue494;
    $returnValue494 = ((panda$core$Real32) { ((float) self.value) });
    return $returnValue494;
}
panda$core$Real64 panda$core$Int16$convert$R$panda$core$Real64(panda$core$Int16 self) {
    panda$core$Real64 $returnValue496;
    $returnValue496 = ((panda$core$Real64) { ((double) self.value) });
    return $returnValue496;
}
panda$core$String* panda$core$Int16$convert$R$panda$core$String(panda$core$Int16 self) {
    panda$core$Int64 max498;
    panda$core$Char8* chars499;
    panda$core$Int64 index500;
    panda$core$Int16 value502;
    panda$core$Char8 $tmp506;
    panda$core$Char8 $tmp518;
    panda$core$Char8 $tmp527;
    panda$core$Int64 size528;
    panda$core$Range$LTpanda$core$Int64$GT $tmp530;
    panda$core$String* $returnValue551;
    panda$core$String* $tmp552;
    panda$core$String* $tmp553;
    max498 = ((panda$core$Int64) { 6 });
    chars499 = ((panda$core$Char8*) pandaZAlloc(max498.value * 1));
    panda$core$Int64 $tmp501 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max498, ((panda$core$Int64) { 1 }));
    index500 = $tmp501;
    value502 = self;
    panda$core$Bit $tmp503 = panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(value502, ((panda$core$Int16) { 0 }));
    if ($tmp503.value) {
    {
        $l504:;
        {
            panda$core$Int32 $tmp507 = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(value502, ((panda$core$Int16) { 10 }));
            panda$core$Int32 $tmp508 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp507, ((panda$core$Int32) { 48 }));
            panda$core$UInt8 $tmp509 = panda$core$Int32$convert$R$panda$core$UInt8($tmp508);
            panda$core$Char8$init$panda$core$UInt8(&$tmp506, $tmp509);
            chars499[index500.value] = $tmp506;
            panda$core$Int32 $tmp510 = panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(value502, ((panda$core$Int16) { 10 }));
            panda$core$Int16 $tmp511 = panda$core$Int32$convert$R$panda$core$Int16($tmp510);
            value502 = $tmp511;
            panda$core$Int64 $tmp512 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index500, ((panda$core$Int64) { 1 }));
            index500 = $tmp512;
        }
        panda$core$Bit $tmp514 = panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(value502, ((panda$core$Int16) { 0 }));
        bool $tmp513 = $tmp514.value;
        if ($tmp513) goto $l504;
        $l505:;
        panda$core$Int64 $tmp515 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index500, ((panda$core$Int64) { 1 }));
        index500 = $tmp515;
    }
    }
    else {
    {
        $l516:;
        {
            panda$core$Int32 $tmp519 = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(value502, ((panda$core$Int16) { 10 }));
            panda$core$Int32 $tmp520 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 48 }), $tmp519);
            panda$core$UInt8 $tmp521 = panda$core$Int32$convert$R$panda$core$UInt8($tmp520);
            panda$core$Char8$init$panda$core$UInt8(&$tmp518, $tmp521);
            chars499[index500.value] = $tmp518;
            panda$core$Int32 $tmp522 = panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(value502, ((panda$core$Int16) { 10 }));
            panda$core$Int16 $tmp523 = panda$core$Int32$convert$R$panda$core$Int16($tmp522);
            value502 = $tmp523;
            panda$core$Int64 $tmp524 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index500, ((panda$core$Int64) { 1 }));
            index500 = $tmp524;
        }
        panda$core$Bit $tmp526 = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(value502, ((panda$core$Int16) { 0 }));
        bool $tmp525 = $tmp526.value;
        if ($tmp525) goto $l516;
        $l517:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp527, ((panda$core$UInt8) { 45 }));
        chars499[index500.value] = $tmp527;
    }
    }
    panda$core$Int64 $tmp529 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max498, index500);
    size528 = $tmp529;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp530, ((panda$core$Int64) { 0 }), size528, ((panda$core$Bit) { false }));
    int64_t $tmp532 = $tmp530.min.value;
    panda$core$Int64 i531 = { $tmp532 };
    int64_t $tmp534 = $tmp530.max.value;
    bool $tmp535 = $tmp530.inclusive.value;
    if ($tmp535) goto $l542; else goto $l543;
    $l542:;
    if ($tmp532 <= $tmp534) goto $l536; else goto $l538;
    $l543:;
    if ($tmp532 < $tmp534) goto $l536; else goto $l538;
    $l536:;
    {
        panda$core$Int64 $tmp544 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i531, index500);
        chars499[i531.value] = chars499[$tmp544.value];
    }
    $l539:;
    int64_t $tmp546 = $tmp534 - i531.value;
    if ($tmp535) goto $l547; else goto $l548;
    $l547:;
    if ((uint64_t) $tmp546 >= 1) goto $l545; else goto $l538;
    $l548:;
    if ((uint64_t) $tmp546 > 1) goto $l545; else goto $l538;
    $l545:;
    i531.value += 1;
    goto $l536;
    $l538:;
    panda$core$String* $tmp554 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp554, chars499, size528);
    $tmp553 = $tmp554;
    $tmp552 = $tmp553;
    $returnValue551 = $tmp552;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp552));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
    return $returnValue551;
}
panda$core$String* panda$core$Int16$format$panda$core$String$R$panda$core$String(panda$core$Int16 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue556;
    panda$core$String* $tmp557;
    panda$core$String* $tmp558;
    bool $tmp559 = self.value < 0;
    panda$core$Int16 $tmp560 = panda$core$Int16$abs$R$panda$core$Int16(self);
    panda$core$UInt64 $tmp561 = panda$core$Int16$convert$R$panda$core$UInt64($tmp560);
    panda$core$String* $tmp562 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { $tmp559 }), $tmp561, ((panda$core$UInt64) { 65535 }), p_fmt);
    $tmp558 = $tmp562;
    $tmp557 = $tmp558;
    $returnValue556 = $tmp557;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
    return $returnValue556;
}
void panda$core$Int16$cleanup(panda$core$Int16 self) {
}

