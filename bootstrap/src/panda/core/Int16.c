#include "panda/core/Int16.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
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
static panda$core$String $s162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

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
    int32_t $tmp3 = ((int32_t) self.value) + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp3 });
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp4 = ((int32_t) self.value) + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp4 });
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp5 = ((int32_t) self.value) + p_other.value;
    return ((panda$core$Int32) { $tmp5 });
}
panda$core$Int64 panda$core$Int16$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp6 = ((int64_t) self.value) + p_other.value;
    return ((panda$core$Int64) { $tmp6 });
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp7 = ((int32_t) self.value) + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp7 });
}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp8 = ((int32_t) self.value) + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp8 });
}
panda$core$Int64 panda$core$Int16$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp9 = ((int64_t) self.value) + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp9 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp10 = ((int32_t) self.value) - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp10 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp11 = ((int32_t) self.value) - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp11 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp12 = ((int32_t) self.value) - p_other.value;
    return ((panda$core$Int32) { $tmp12 });
}
panda$core$Int64 panda$core$Int16$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp13 = ((int64_t) self.value) - p_other.value;
    return ((panda$core$Int64) { $tmp13 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp14 = ((int32_t) self.value) - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp14 });
}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp15 = ((int32_t) self.value) - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp15 });
}
panda$core$Int64 panda$core$Int16$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp16 = ((int64_t) self.value) - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp16 });
}
panda$core$Int16 panda$core$Int16$$SUB$R$panda$core$Int16(panda$core$Int16 self) {
    return ((panda$core$Int16) { -self.value });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp18 = ((int32_t) self.value) * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp18 });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp19 = ((int32_t) self.value) * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp19 });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp20 = ((int32_t) self.value) * p_other.value;
    return ((panda$core$Int32) { $tmp20 });
}
panda$core$Int64 panda$core$Int16$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp21 = ((int64_t) self.value) * p_other.value;
    return ((panda$core$Int64) { $tmp21 });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp22 = ((int32_t) self.value) * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp22 });
}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp23 = ((int32_t) self.value) * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp23 });
}
panda$core$Int64 panda$core$Int16$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp24 = ((int64_t) self.value) * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp24 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp25 = ((int32_t) self.value) / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp25 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp26 = ((int32_t) self.value) / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp26 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp27 = ((int32_t) self.value) / p_other.value;
    return ((panda$core$Int32) { $tmp27 });
}
panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp28 = ((int64_t) self.value) / p_other.value;
    return ((panda$core$Int64) { $tmp28 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp29 = ((int32_t) self.value) / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp29 });
}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp30 = ((int32_t) self.value) / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp30 });
}
panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp31 = ((int64_t) self.value) / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp31 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp32 = ((int32_t) self.value) % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp32 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp33 = ((int32_t) self.value) % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp33 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp34 = ((int32_t) self.value) % p_other.value;
    return ((panda$core$Int32) { $tmp34 });
}
panda$core$Int64 panda$core$Int16$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp35 = ((int64_t) self.value) % p_other.value;
    return ((panda$core$Int64) { $tmp35 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    int32_t $tmp36 = ((int32_t) self.value) % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp36 });
}
panda$core$Int32 panda$core$Int16$$REM$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    int32_t $tmp37 = ((int32_t) self.value) % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp37 });
}
panda$core$Int64 panda$core$Int16$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    int64_t $tmp38 = ((int64_t) self.value) % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp38 });
}
panda$core$Int16 panda$core$Int16$$BNOT$R$panda$core$Int16(panda$core$Int16 self) {
    return ((panda$core$Int16) { ~self.value });
}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp40 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp40 });
}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp41 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp41 });
}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp42 = ((int32_t) self.value) & p_other.value;
    return ((panda$core$Int32) { $tmp42 });
}
panda$core$Int64 panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp43 = ((int64_t) self.value) & p_other.value;
    return ((panda$core$Int64) { $tmp43 });
}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp44 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp44 });
}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp45 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp45 });
}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp46 = ((uint32_t) self.value) & p_other.value;
    return ((panda$core$UInt32) { $tmp46 });
}
panda$core$UInt64 panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp47 = ((uint64_t) self.value) & p_other.value;
    return ((panda$core$UInt64) { $tmp47 });
}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp48 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp48 });
}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp49 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp49 });
}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp50 = ((int32_t) self.value) | p_other.value;
    return ((panda$core$Int32) { $tmp50 });
}
panda$core$Int64 panda$core$Int16$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp51 = ((int64_t) self.value) | p_other.value;
    return ((panda$core$Int64) { $tmp51 });
}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp52 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp52 });
}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp53 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp53 });
}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp54 = ((uint32_t) self.value) | p_other.value;
    return ((panda$core$UInt32) { $tmp54 });
}
panda$core$UInt64 panda$core$Int16$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp55 = ((uint64_t) self.value) | p_other.value;
    return ((panda$core$UInt64) { $tmp55 });
}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp56 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp56 });
}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp57 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp57 });
}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp58 = ((int32_t) self.value) ^ p_other.value;
    return ((panda$core$Int32) { $tmp58 });
}
panda$core$Int64 panda$core$Int16$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp59 = ((int64_t) self.value) ^ p_other.value;
    return ((panda$core$Int64) { $tmp59 });
}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp60 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp60 });
}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp61 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp61 });
}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp62 = ((uint32_t) self.value) ^ p_other.value;
    return ((panda$core$UInt32) { $tmp62 });
}
panda$core$UInt64 panda$core$Int16$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp63 = ((uint64_t) self.value) ^ p_other.value;
    return ((panda$core$UInt64) { $tmp63 });
}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp64 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp64 });
}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp65 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp65 });
}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp66 = ((int32_t) self.value) << p_other.value;
    return ((panda$core$Int32) { $tmp66 });
}
panda$core$Int64 panda$core$Int16$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp67 = ((int64_t) self.value) << p_other.value;
    return ((panda$core$Int64) { $tmp67 });
}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp68 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp68 });
}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp69 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp69 });
}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp70 = ((uint32_t) self.value) << p_other.value;
    return ((panda$core$UInt32) { $tmp70 });
}
panda$core$UInt64 panda$core$Int16$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp71 = ((uint64_t) self.value) << p_other.value;
    return ((panda$core$UInt64) { $tmp71 });
}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    int32_t $tmp72 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp72 });
}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    int32_t $tmp73 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp73 });
}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    int32_t $tmp74 = ((int32_t) self.value) >> p_other.value;
    return ((panda$core$Int32) { $tmp74 });
}
panda$core$Int64 panda$core$Int16$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    int64_t $tmp75 = ((int64_t) self.value) >> p_other.value;
    return ((panda$core$Int64) { $tmp75 });
}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    uint32_t $tmp76 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp76 });
}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    uint32_t $tmp77 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp77 });
}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 self, panda$core$UInt32 p_other) {
    uint32_t $tmp78 = ((uint32_t) self.value) >> p_other.value;
    return ((panda$core$UInt32) { $tmp78 });
}
panda$core$UInt64 panda$core$Int16$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 self, panda$core$UInt64 p_other) {
    uint64_t $tmp79 = ((uint64_t) self.value) >> p_other.value;
    return ((panda$core$UInt64) { $tmp79 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp80 = ((int32_t) self.value) == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp80 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp81 = ((int32_t) self.value) == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp81 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp82 = ((int32_t) self.value) == p_other.value;
    return ((panda$core$Bit) { $tmp82 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp83 = ((int64_t) self.value) == p_other.value;
    return ((panda$core$Bit) { $tmp83 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp84 = ((int32_t) self.value) == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp84 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp85 = ((int32_t) self.value) == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp85 });
}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp86 = ((int64_t) self.value) == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp86 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp87 = ((int32_t) self.value) != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp87 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp88 = ((int32_t) self.value) != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp88 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp89 = ((int32_t) self.value) != p_other.value;
    return ((panda$core$Bit) { $tmp89 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp90 = ((int64_t) self.value) != p_other.value;
    return ((panda$core$Bit) { $tmp90 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp91 = ((int32_t) self.value) != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp91 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp92 = ((int32_t) self.value) != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp92 });
}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp93 = ((int64_t) self.value) != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp93 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp94 = ((int32_t) self.value) < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp94 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp95 = ((int32_t) self.value) < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp95 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp96 = ((int32_t) self.value) < p_other.value;
    return ((panda$core$Bit) { $tmp96 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp97 = ((int64_t) self.value) < p_other.value;
    return ((panda$core$Bit) { $tmp97 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp98 = ((int32_t) self.value) < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp98 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp99 = ((int32_t) self.value) < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp99 });
}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp100 = ((int64_t) self.value) < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp100 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp101 = ((int32_t) self.value) > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp101 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp102 = ((int32_t) self.value) > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp102 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp103 = ((int32_t) self.value) > p_other.value;
    return ((panda$core$Bit) { $tmp103 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp104 = ((int64_t) self.value) > p_other.value;
    return ((panda$core$Bit) { $tmp104 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp105 = ((int32_t) self.value) > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp105 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp106 = ((int32_t) self.value) > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp106 });
}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp107 = ((int64_t) self.value) > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp107 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp108 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp108 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp109 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp109 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp110 = ((int32_t) self.value) >= p_other.value;
    return ((panda$core$Bit) { $tmp110 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp111 = ((int64_t) self.value) >= p_other.value;
    return ((panda$core$Bit) { $tmp111 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp112 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp112 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp113 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp113 });
}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp114 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp114 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp115 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp115 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp116 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp116 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp117 = ((int32_t) self.value) <= p_other.value;
    return ((panda$core$Bit) { $tmp117 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp118 = ((int64_t) self.value) <= p_other.value;
    return ((panda$core$Bit) { $tmp118 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp119 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp119 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp120 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp120 });
}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp121 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp121 });
}
panda$core$Int16 panda$core$Int16$abs$R$panda$core$Int16(panda$core$Int16 self) {
    panda$core$Bit $tmp122 = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(self, ((panda$core$Int16) { 0 }));
    if ($tmp122.value) {
    {
        panda$core$Int16 $tmp123 = panda$core$Int16$$SUB$R$panda$core$Int16(self);
        return $tmp123;
    }
    }
    return self;
}
panda$core$Int32 panda$core$Int16$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp124 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp124 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp125 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp125 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp126 = ((int32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp126 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { p_other.value });
}
panda$core$Int64 panda$core$Int16$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp127 = ((int64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp127 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { p_other.value });
}
panda$core$Int32 panda$core$Int16$min$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp128 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp128 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$min$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp129 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp129 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int64 panda$core$Int16$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp130 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp130 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int8 p_other) {
    bool $tmp131 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp131 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int16 p_other) {
    bool $tmp132 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp132 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 self, panda$core$Int32 p_other) {
    bool $tmp133 = ((int32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp133 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { p_other.value });
}
panda$core$Int64 panda$core$Int16$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 self, panda$core$Int64 p_other) {
    bool $tmp134 = ((int64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp134 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { p_other.value });
}
panda$core$Int32 panda$core$Int16$max$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt8 p_other) {
    bool $tmp135 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp135 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int32 panda$core$Int16$max$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 self, panda$core$UInt16 p_other) {
    bool $tmp136 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp136 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int64 panda$core$Int16$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 self, panda$core$UInt32 p_other) {
    bool $tmp137 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp137 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp138 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp139 = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp138);
    panda$core$Bit $tmp140 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp139, ((panda$core$Int32) { 0 }));
    return $tmp140;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp141 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp142 = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp141);
    panda$core$Bit $tmp143 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp142, ((panda$core$Int32) { 0 }));
    return $tmp143;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp144 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp145 = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp144);
    panda$core$Bit $tmp146 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp145, ((panda$core$Int32) { 0 }));
    return $tmp146;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp147 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp148 = panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp147);
    panda$core$Bit $tmp149 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp148, ((panda$core$Int64) { 0 }));
    return $tmp149;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp150 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp151 = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp150);
    panda$core$Bit $tmp152 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp151, ((panda$core$UInt32) { 0 }));
    return $tmp152;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp153 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp154 = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp153);
    panda$core$Bit $tmp155 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp154, ((panda$core$UInt32) { 0 }));
    return $tmp155;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp156 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp157 = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp156);
    panda$core$Bit $tmp158 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp157, ((panda$core$UInt32) { 0 }));
    return $tmp158;
}
panda$core$Bit panda$core$Int16$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int16 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp159 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp160 = panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp159);
    panda$core$Bit $tmp161 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp160, ((panda$core$UInt64) { 0 }));
    return $tmp161;
}
panda$core$Int64 panda$core$Int16$hash$R$panda$core$Int64(panda$core$Int16 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$Int16$nullable panda$core$Int16$parse$panda$core$String$panda$core$Int64$R$panda$core$Int16$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs164;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp165;
    panda$core$UInt64$nullable result170;
    panda$core$Bit $tmp163 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s162);
    if ($tmp163.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp165, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp166 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp165);
        panda$core$UInt64$nullable $tmp167 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp166, p_radix);
        abs164 = $tmp167;
        if (((panda$core$Bit) { !abs164.nonnull }).value) {
        {
            return ((panda$core$Int16$nullable) { .nonnull = false });
        }
        }
        panda$core$Int16 $tmp168 = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64) abs164.value));
        panda$core$Int16 $tmp169 = panda$core$Int16$$SUB$R$panda$core$Int16($tmp168);
        return ((panda$core$Int16$nullable) { $tmp169, true });
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp171 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result170 = $tmp171;
        if (((panda$core$Bit) { !result170.nonnull }).value) {
        {
            return ((panda$core$Int16$nullable) { .nonnull = false });
        }
        }
        panda$core$Int16 $tmp172 = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64) result170.value));
        return ((panda$core$Int16$nullable) { $tmp172, true });
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
    panda$core$Int64 max173;
    panda$core$Char8* chars174;
    panda$core$Int64 index175;
    panda$core$Int16 value177;
    panda$core$Char8 $tmp181;
    panda$core$Char8 $tmp192;
    panda$core$Char8 $tmp200;
    panda$core$Int64 size201;
    panda$core$Range$LTpanda$core$Int64$GT $tmp203;
    max173 = ((panda$core$Int64) { 6 });
    chars174 = ((panda$core$Char8*) pandaZAlloc(max173.value * 1));
    panda$core$Int64 $tmp176 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max173, ((panda$core$Int64) { 1 }));
    index175 = $tmp176;
    value177 = self;
    panda$core$Bit $tmp178 = panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(value177, ((panda$core$Int16) { 0 }));
    if ($tmp178.value) {
    {
        $l179:;
        {
            panda$core$Int32 $tmp182 = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(value177, ((panda$core$Int16) { 10 }));
            panda$core$Int32 $tmp183 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp182, ((panda$core$Int32) { 48 }));
            panda$core$UInt8 $tmp184 = panda$core$Int32$convert$R$panda$core$UInt8($tmp183);
            panda$core$Char8$init$panda$core$UInt8(&$tmp181, $tmp184);
            chars174[index175.value] = $tmp181;
            panda$core$Int32 $tmp185 = panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(value177, ((panda$core$Int16) { 10 }));
            panda$core$Int16 $tmp186 = panda$core$Int32$convert$R$panda$core$Int16($tmp185);
            value177 = $tmp186;
            panda$core$Int64 $tmp187 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index175, ((panda$core$Int64) { 1 }));
            index175 = $tmp187;
        }
        panda$core$Bit $tmp188 = panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(value177, ((panda$core$Int16) { 0 }));
        if ($tmp188.value) goto $l179;
        $l180:;
        panda$core$Int64 $tmp189 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index175, ((panda$core$Int64) { 1 }));
        index175 = $tmp189;
    }
    }
    else {
    {
        $l190:;
        {
            panda$core$Int32 $tmp193 = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(value177, ((panda$core$Int16) { 10 }));
            panda$core$Int32 $tmp194 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 48 }), $tmp193);
            panda$core$UInt8 $tmp195 = panda$core$Int32$convert$R$panda$core$UInt8($tmp194);
            panda$core$Char8$init$panda$core$UInt8(&$tmp192, $tmp195);
            chars174[index175.value] = $tmp192;
            panda$core$Int32 $tmp196 = panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(value177, ((panda$core$Int16) { 10 }));
            panda$core$Int16 $tmp197 = panda$core$Int32$convert$R$panda$core$Int16($tmp196);
            value177 = $tmp197;
            panda$core$Int64 $tmp198 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index175, ((panda$core$Int64) { 1 }));
            index175 = $tmp198;
        }
        panda$core$Bit $tmp199 = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(value177, ((panda$core$Int16) { 0 }));
        if ($tmp199.value) goto $l190;
        $l191:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp200, ((panda$core$UInt8) { 45 }));
        chars174[index175.value] = $tmp200;
    }
    }
    panda$core$Int64 $tmp202 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max173, index175);
    size201 = $tmp202;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp203, ((panda$core$Int64) { 0 }), size201, ((panda$core$Bit) { false }));
    int64_t $tmp205 = $tmp203.min.value;
    panda$core$Int64 i204 = { $tmp205 };
    int64_t $tmp207 = $tmp203.max.value;
    bool $tmp208 = $tmp203.inclusive.value;
    if ($tmp208) goto $l215; else goto $l216;
    $l215:;
    if ($tmp205 <= $tmp207) goto $l209; else goto $l211;
    $l216:;
    if ($tmp205 < $tmp207) goto $l209; else goto $l211;
    $l209:;
    {
        panda$core$Int64 $tmp217 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i204, index175);
        chars174[i204.value] = chars174[$tmp217.value];
    }
    $l212:;
    int64_t $tmp219 = $tmp207 - i204.value;
    if ($tmp208) goto $l220; else goto $l221;
    $l220:;
    if ((uint64_t) $tmp219 >= 1) goto $l218; else goto $l211;
    $l221:;
    if ((uint64_t) $tmp219 > 1) goto $l218; else goto $l211;
    $l218:;
    i204.value += 1;
    goto $l209;
    $l211:;
    panda$core$String* $tmp224 = (panda$core$String*) pandaZAlloc(48);
    $tmp224->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp224->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp224, chars174, size201);
    return $tmp224;
}
panda$core$String* panda$core$Int16$format$panda$core$String$R$panda$core$String(panda$core$Int16 self, panda$core$String* p_fmt) {
    bool $tmp226 = self.value < 0;
    panda$core$Int16 $tmp227 = panda$core$Int16$abs$R$panda$core$Int16(self);
    panda$core$UInt64 $tmp228 = panda$core$Int16$convert$R$panda$core$UInt64($tmp227);
    panda$core$String* $tmp229 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { $tmp226 }), $tmp228, ((panda$core$UInt64) { 65535 }), p_fmt);
    return $tmp229;
}
void panda$core$Int16$cleanup(panda$core$Int16 self) {
}

