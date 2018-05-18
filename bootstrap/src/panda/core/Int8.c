#include "panda/core/Int8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Comparable.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Int32.h"
#include "panda/core/Int16.h"
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
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$Int8$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$Int8$wrapper* self, panda$core$String* fmt) {
    return panda$core$Int8$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Equatable* other) {
    return panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Equatable* other) {
    return panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Int64 panda$core$Int8$hash$R$panda$core$Int64$wrappershim(panda$core$Int8$wrapper* self) {
    return panda$core$Int8$hash$R$panda$core$Int64(self->value);
}
panda$core$String* panda$core$Int8$convert$R$panda$core$String$wrappershim(panda$core$Int8$wrapper* self) {
    return panda$core$Int8$convert$R$panda$core$String(self->value);
}
void panda$core$Int8$cleanup$wrappershim(panda$core$Int8$wrapper* self) {
    panda$core$Int8$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int8$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Int8$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int8$_panda$core$Formattable, { panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int8$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int8$_panda$core$Equatable, { panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int8$_panda$core$Comparable, { panda$core$Int8$hash$R$panda$core$Int64} };

static panda$core$String $s1;
panda$core$Int8$class_type panda$core$Int8$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int8$_panda$collections$Key, { panda$core$Int8$convert$R$panda$core$String, panda$core$Int8$cleanup, panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$ADD$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$ADD$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$ADD$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$ADD$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$ADD$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$ADD$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$SUB$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$SUB$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$SUB$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$SUB$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$SUB$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$SUB$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$SUB$R$panda$core$Int8, panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$MUL$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$MUL$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$MUL$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$MUL$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$MUL$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$MUL$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$INTDIV$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$INTDIV$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$INTDIV$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$INTDIV$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$INTDIV$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$INTDIV$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$REM$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$REM$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$REM$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$REM$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$REM$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$REM$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$BNOT$R$panda$core$Int8, panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$BAND$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$BAND$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$BAND$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$BOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$BOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$BOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$BOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$BOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$BXOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$BXOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$BXOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$BXOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$BXOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$SHL$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$SHL$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$SHL$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$SHL$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$SHL$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$SHR$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$SHR$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$SHR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$SHR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$SHR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$EQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$GT$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$abs$R$panda$core$Int8, panda$core$Int8$min$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$min$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$min$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$min$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$min$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$min$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$min$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$max$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$max$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$max$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$max$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$max$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$max$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$max$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$Int8$hash$R$panda$core$Int64, panda$core$Int8$convert$R$panda$core$Int16, panda$core$Int8$convert$R$panda$core$Int32, panda$core$Int8$convert$R$panda$core$Int64, panda$core$Int8$convert$R$panda$core$UInt8, panda$core$Int8$convert$R$panda$core$UInt16, panda$core$Int8$convert$R$panda$core$UInt32, panda$core$Int8$convert$R$panda$core$UInt64, panda$core$Int8$convert$R$panda$core$Real32, panda$core$Int8$convert$R$panda$core$Real64, panda$core$Int8$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int8$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Int8$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int8$wrapper_panda$core$Formattable, { panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$wrappershim, panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int8$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int8$wrapper_panda$core$Equatable, { panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$wrappershim, panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$wrappershim, panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$wrappershim, panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int8$wrapper_panda$core$Comparable, { panda$core$Int8$hash$R$panda$core$Int64$wrappershim} };

static panda$core$String $s2;
panda$core$Int8$wrapperclass_type panda$core$Int8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int8$wrapper_panda$collections$Key, { panda$core$Int8$convert$R$panda$core$String$wrappershim, panda$core$Int8$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

void panda$core$Int8$init$builtin_int8(panda$core$Int8* self, int8_t p_value) {
    self->value = p_value;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn2;
    int32_t $tmp4 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $finallyReturn2 = ((panda$core$Int32) { $tmp4 });
    return $finallyReturn2;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn5;
    int32_t $tmp7 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $finallyReturn5 = ((panda$core$Int32) { $tmp7 });
    return $finallyReturn5;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn8;
    int32_t $tmp10 = ((int32_t) self.value) + p_other.value;
    $finallyReturn8 = ((panda$core$Int32) { $tmp10 });
    return $finallyReturn8;
}
panda$core$Int64 panda$core$Int8$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn11;
    int64_t $tmp13 = ((int64_t) self.value) + p_other.value;
    $finallyReturn11 = ((panda$core$Int64) { $tmp13 });
    return $finallyReturn11;
}
panda$core$Int16 panda$core$Int8$$ADD$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $finallyReturn14;
    int16_t $tmp16 = ((int16_t) self.value) + ((int16_t) p_other.value);
    $finallyReturn14 = ((panda$core$Int16) { $tmp16 });
    return $finallyReturn14;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $finallyReturn17;
    int32_t $tmp19 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $finallyReturn17 = ((panda$core$Int32) { $tmp19 });
    return $finallyReturn17;
}
panda$core$Int64 panda$core$Int8$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn20;
    int64_t $tmp22 = ((int64_t) self.value) + ((int64_t) p_other.value);
    $finallyReturn20 = ((panda$core$Int64) { $tmp22 });
    return $finallyReturn20;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn23;
    int32_t $tmp25 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $finallyReturn23 = ((panda$core$Int32) { $tmp25 });
    return $finallyReturn23;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn26;
    int32_t $tmp28 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $finallyReturn26 = ((panda$core$Int32) { $tmp28 });
    return $finallyReturn26;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn29;
    int32_t $tmp31 = ((int32_t) self.value) - p_other.value;
    $finallyReturn29 = ((panda$core$Int32) { $tmp31 });
    return $finallyReturn29;
}
panda$core$Int64 panda$core$Int8$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn32;
    int64_t $tmp34 = ((int64_t) self.value) - p_other.value;
    $finallyReturn32 = ((panda$core$Int64) { $tmp34 });
    return $finallyReturn32;
}
panda$core$Int16 panda$core$Int8$$SUB$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $finallyReturn35;
    int16_t $tmp37 = ((int16_t) self.value) - ((int16_t) p_other.value);
    $finallyReturn35 = ((panda$core$Int16) { $tmp37 });
    return $finallyReturn35;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $finallyReturn38;
    int32_t $tmp40 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $finallyReturn38 = ((panda$core$Int32) { $tmp40 });
    return $finallyReturn38;
}
panda$core$Int64 panda$core$Int8$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn41;
    int64_t $tmp43 = ((int64_t) self.value) - ((int64_t) p_other.value);
    $finallyReturn41 = ((panda$core$Int64) { $tmp43 });
    return $finallyReturn41;
}
panda$core$Int8 panda$core$Int8$$SUB$R$panda$core$Int8(panda$core$Int8 self) {
    panda$core$Int8 $finallyReturn44;
    $finallyReturn44 = ((panda$core$Int8) { -self.value });
    return $finallyReturn44;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn47;
    int32_t $tmp49 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $finallyReturn47 = ((panda$core$Int32) { $tmp49 });
    return $finallyReturn47;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn50;
    int32_t $tmp52 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $finallyReturn50 = ((panda$core$Int32) { $tmp52 });
    return $finallyReturn50;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn53;
    int32_t $tmp55 = ((int32_t) self.value) * p_other.value;
    $finallyReturn53 = ((panda$core$Int32) { $tmp55 });
    return $finallyReturn53;
}
panda$core$Int64 panda$core$Int8$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn56;
    int64_t $tmp58 = ((int64_t) self.value) * p_other.value;
    $finallyReturn56 = ((panda$core$Int64) { $tmp58 });
    return $finallyReturn56;
}
panda$core$Int16 panda$core$Int8$$MUL$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $finallyReturn59;
    int16_t $tmp61 = ((int16_t) self.value) * ((int16_t) p_other.value);
    $finallyReturn59 = ((panda$core$Int16) { $tmp61 });
    return $finallyReturn59;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $finallyReturn62;
    int32_t $tmp64 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $finallyReturn62 = ((panda$core$Int32) { $tmp64 });
    return $finallyReturn62;
}
panda$core$Int64 panda$core$Int8$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn65;
    int64_t $tmp67 = ((int64_t) self.value) * ((int64_t) p_other.value);
    $finallyReturn65 = ((panda$core$Int64) { $tmp67 });
    return $finallyReturn65;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn68;
    int32_t $tmp70 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $finallyReturn68 = ((panda$core$Int32) { $tmp70 });
    return $finallyReturn68;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn71;
    int32_t $tmp73 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $finallyReturn71 = ((panda$core$Int32) { $tmp73 });
    return $finallyReturn71;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn74;
    int32_t $tmp76 = ((int32_t) self.value) / p_other.value;
    $finallyReturn74 = ((panda$core$Int32) { $tmp76 });
    return $finallyReturn74;
}
panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn77;
    int64_t $tmp79 = ((int64_t) self.value) / p_other.value;
    $finallyReturn77 = ((panda$core$Int64) { $tmp79 });
    return $finallyReturn77;
}
panda$core$Int16 panda$core$Int8$$INTDIV$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $finallyReturn80;
    int16_t $tmp82 = ((int16_t) self.value) / ((int16_t) p_other.value);
    $finallyReturn80 = ((panda$core$Int16) { $tmp82 });
    return $finallyReturn80;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $finallyReturn83;
    int32_t $tmp85 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $finallyReturn83 = ((panda$core$Int32) { $tmp85 });
    return $finallyReturn83;
}
panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn86;
    int64_t $tmp88 = ((int64_t) self.value) / ((int64_t) p_other.value);
    $finallyReturn86 = ((panda$core$Int64) { $tmp88 });
    return $finallyReturn86;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn89;
    int32_t $tmp91 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $finallyReturn89 = ((panda$core$Int32) { $tmp91 });
    return $finallyReturn89;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn92;
    int32_t $tmp94 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $finallyReturn92 = ((panda$core$Int32) { $tmp94 });
    return $finallyReturn92;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn95;
    int32_t $tmp97 = ((int32_t) self.value) % p_other.value;
    $finallyReturn95 = ((panda$core$Int32) { $tmp97 });
    return $finallyReturn95;
}
panda$core$Int64 panda$core$Int8$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn98;
    int64_t $tmp100 = ((int64_t) self.value) % p_other.value;
    $finallyReturn98 = ((panda$core$Int64) { $tmp100 });
    return $finallyReturn98;
}
panda$core$Int16 panda$core$Int8$$REM$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $finallyReturn101;
    int16_t $tmp103 = ((int16_t) self.value) % ((int16_t) p_other.value);
    $finallyReturn101 = ((panda$core$Int16) { $tmp103 });
    return $finallyReturn101;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $finallyReturn104;
    int32_t $tmp106 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $finallyReturn104 = ((panda$core$Int32) { $tmp106 });
    return $finallyReturn104;
}
panda$core$Int64 panda$core$Int8$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn107;
    int64_t $tmp109 = ((int64_t) self.value) % ((int64_t) p_other.value);
    $finallyReturn107 = ((panda$core$Int64) { $tmp109 });
    return $finallyReturn107;
}
panda$core$Int8 panda$core$Int8$$BNOT$R$panda$core$Int8(panda$core$Int8 self) {
    panda$core$Int8 $finallyReturn110;
    $finallyReturn110 = ((panda$core$Int8) { ~self.value });
    return $finallyReturn110;
}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn113;
    int32_t $tmp115 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $finallyReturn113 = ((panda$core$Int32) { $tmp115 });
    return $finallyReturn113;
}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn116;
    int32_t $tmp118 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $finallyReturn116 = ((panda$core$Int32) { $tmp118 });
    return $finallyReturn116;
}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn119;
    int32_t $tmp121 = ((int32_t) self.value) & p_other.value;
    $finallyReturn119 = ((panda$core$Int32) { $tmp121 });
    return $finallyReturn119;
}
panda$core$Int64 panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn122;
    int64_t $tmp124 = ((int64_t) self.value) & p_other.value;
    $finallyReturn122 = ((panda$core$Int64) { $tmp124 });
    return $finallyReturn122;
}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn125;
    uint32_t $tmp127 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $finallyReturn125 = ((panda$core$UInt32) { $tmp127 });
    return $finallyReturn125;
}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn128;
    uint32_t $tmp130 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $finallyReturn128 = ((panda$core$UInt32) { $tmp130 });
    return $finallyReturn128;
}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn131;
    uint32_t $tmp133 = ((uint32_t) self.value) & p_other.value;
    $finallyReturn131 = ((panda$core$UInt32) { $tmp133 });
    return $finallyReturn131;
}
panda$core$UInt64 panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn134;
    uint64_t $tmp136 = ((uint64_t) self.value) & p_other.value;
    $finallyReturn134 = ((panda$core$UInt64) { $tmp136 });
    return $finallyReturn134;
}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn137;
    int32_t $tmp139 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $finallyReturn137 = ((panda$core$Int32) { $tmp139 });
    return $finallyReturn137;
}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn140;
    int32_t $tmp142 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $finallyReturn140 = ((panda$core$Int32) { $tmp142 });
    return $finallyReturn140;
}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn143;
    int32_t $tmp145 = ((int32_t) self.value) | p_other.value;
    $finallyReturn143 = ((panda$core$Int32) { $tmp145 });
    return $finallyReturn143;
}
panda$core$Int64 panda$core$Int8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn146;
    int64_t $tmp148 = ((int64_t) self.value) | p_other.value;
    $finallyReturn146 = ((panda$core$Int64) { $tmp148 });
    return $finallyReturn146;
}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn149;
    uint32_t $tmp151 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $finallyReturn149 = ((panda$core$UInt32) { $tmp151 });
    return $finallyReturn149;
}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn152;
    uint32_t $tmp154 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $finallyReturn152 = ((panda$core$UInt32) { $tmp154 });
    return $finallyReturn152;
}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn155;
    uint32_t $tmp157 = ((uint32_t) self.value) | p_other.value;
    $finallyReturn155 = ((panda$core$UInt32) { $tmp157 });
    return $finallyReturn155;
}
panda$core$UInt64 panda$core$Int8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn158;
    uint64_t $tmp160 = ((uint64_t) self.value) | p_other.value;
    $finallyReturn158 = ((panda$core$UInt64) { $tmp160 });
    return $finallyReturn158;
}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn161;
    int32_t $tmp163 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $finallyReturn161 = ((panda$core$Int32) { $tmp163 });
    return $finallyReturn161;
}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn164;
    int32_t $tmp166 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $finallyReturn164 = ((panda$core$Int32) { $tmp166 });
    return $finallyReturn164;
}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn167;
    int32_t $tmp169 = ((int32_t) self.value) ^ p_other.value;
    $finallyReturn167 = ((panda$core$Int32) { $tmp169 });
    return $finallyReturn167;
}
panda$core$Int64 panda$core$Int8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn170;
    int64_t $tmp172 = ((int64_t) self.value) ^ p_other.value;
    $finallyReturn170 = ((panda$core$Int64) { $tmp172 });
    return $finallyReturn170;
}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn173;
    uint32_t $tmp175 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $finallyReturn173 = ((panda$core$UInt32) { $tmp175 });
    return $finallyReturn173;
}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn176;
    uint32_t $tmp178 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $finallyReturn176 = ((panda$core$UInt32) { $tmp178 });
    return $finallyReturn176;
}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn179;
    uint32_t $tmp181 = ((uint32_t) self.value) ^ p_other.value;
    $finallyReturn179 = ((panda$core$UInt32) { $tmp181 });
    return $finallyReturn179;
}
panda$core$UInt64 panda$core$Int8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn182;
    uint64_t $tmp184 = ((uint64_t) self.value) ^ p_other.value;
    $finallyReturn182 = ((panda$core$UInt64) { $tmp184 });
    return $finallyReturn182;
}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn185;
    int32_t $tmp187 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $finallyReturn185 = ((panda$core$Int32) { $tmp187 });
    return $finallyReturn185;
}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn188;
    int32_t $tmp190 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $finallyReturn188 = ((panda$core$Int32) { $tmp190 });
    return $finallyReturn188;
}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn191;
    int32_t $tmp193 = ((int32_t) self.value) << p_other.value;
    $finallyReturn191 = ((panda$core$Int32) { $tmp193 });
    return $finallyReturn191;
}
panda$core$Int64 panda$core$Int8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn194;
    int64_t $tmp196 = ((int64_t) self.value) << p_other.value;
    $finallyReturn194 = ((panda$core$Int64) { $tmp196 });
    return $finallyReturn194;
}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn197;
    uint32_t $tmp199 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $finallyReturn197 = ((panda$core$UInt32) { $tmp199 });
    return $finallyReturn197;
}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn200;
    uint32_t $tmp202 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $finallyReturn200 = ((panda$core$UInt32) { $tmp202 });
    return $finallyReturn200;
}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn203;
    uint32_t $tmp205 = ((uint32_t) self.value) << p_other.value;
    $finallyReturn203 = ((panda$core$UInt32) { $tmp205 });
    return $finallyReturn203;
}
panda$core$UInt64 panda$core$Int8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn206;
    uint64_t $tmp208 = ((uint64_t) self.value) << p_other.value;
    $finallyReturn206 = ((panda$core$UInt64) { $tmp208 });
    return $finallyReturn206;
}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn209;
    int32_t $tmp211 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $finallyReturn209 = ((panda$core$Int32) { $tmp211 });
    return $finallyReturn209;
}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn212;
    int32_t $tmp214 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $finallyReturn212 = ((panda$core$Int32) { $tmp214 });
    return $finallyReturn212;
}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn215;
    int32_t $tmp217 = ((int32_t) self.value) >> p_other.value;
    $finallyReturn215 = ((panda$core$Int32) { $tmp217 });
    return $finallyReturn215;
}
panda$core$Int64 panda$core$Int8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn218;
    int64_t $tmp220 = ((int64_t) self.value) >> p_other.value;
    $finallyReturn218 = ((panda$core$Int64) { $tmp220 });
    return $finallyReturn218;
}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $finallyReturn221;
    uint32_t $tmp223 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $finallyReturn221 = ((panda$core$UInt32) { $tmp223 });
    return $finallyReturn221;
}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $finallyReturn224;
    uint32_t $tmp226 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $finallyReturn224 = ((panda$core$UInt32) { $tmp226 });
    return $finallyReturn224;
}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $finallyReturn227;
    uint32_t $tmp229 = ((uint32_t) self.value) >> p_other.value;
    $finallyReturn227 = ((panda$core$UInt32) { $tmp229 });
    return $finallyReturn227;
}
panda$core$UInt64 panda$core$Int8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $finallyReturn230;
    uint64_t $tmp232 = ((uint64_t) self.value) >> p_other.value;
    $finallyReturn230 = ((panda$core$UInt64) { $tmp232 });
    return $finallyReturn230;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn233;
    bool $tmp235 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $finallyReturn233 = ((panda$core$Bit) { $tmp235 });
    return $finallyReturn233;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn236;
    bool $tmp238 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $finallyReturn236 = ((panda$core$Bit) { $tmp238 });
    return $finallyReturn236;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn239;
    bool $tmp241 = ((int32_t) self.value) == p_other.value;
    $finallyReturn239 = ((panda$core$Bit) { $tmp241 });
    return $finallyReturn239;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn242;
    bool $tmp244 = ((int64_t) self.value) == p_other.value;
    $finallyReturn242 = ((panda$core$Bit) { $tmp244 });
    return $finallyReturn242;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn245;
    bool $tmp247 = ((int16_t) self.value) == ((int16_t) p_other.value);
    $finallyReturn245 = ((panda$core$Bit) { $tmp247 });
    return $finallyReturn245;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn248;
    bool $tmp250 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $finallyReturn248 = ((panda$core$Bit) { $tmp250 });
    return $finallyReturn248;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn251;
    bool $tmp253 = ((int64_t) self.value) == ((int64_t) p_other.value);
    $finallyReturn251 = ((panda$core$Bit) { $tmp253 });
    return $finallyReturn251;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn254;
    bool $tmp256 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $finallyReturn254 = ((panda$core$Bit) { $tmp256 });
    return $finallyReturn254;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn257;
    bool $tmp259 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $finallyReturn257 = ((panda$core$Bit) { $tmp259 });
    return $finallyReturn257;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn260;
    bool $tmp262 = ((int32_t) self.value) != p_other.value;
    $finallyReturn260 = ((panda$core$Bit) { $tmp262 });
    return $finallyReturn260;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn263;
    bool $tmp265 = ((int64_t) self.value) != p_other.value;
    $finallyReturn263 = ((panda$core$Bit) { $tmp265 });
    return $finallyReturn263;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn266;
    bool $tmp268 = ((int16_t) self.value) != ((int16_t) p_other.value);
    $finallyReturn266 = ((panda$core$Bit) { $tmp268 });
    return $finallyReturn266;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn269;
    bool $tmp271 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $finallyReturn269 = ((panda$core$Bit) { $tmp271 });
    return $finallyReturn269;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn272;
    bool $tmp274 = ((int64_t) self.value) != ((int64_t) p_other.value);
    $finallyReturn272 = ((panda$core$Bit) { $tmp274 });
    return $finallyReturn272;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn275;
    bool $tmp277 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $finallyReturn275 = ((panda$core$Bit) { $tmp277 });
    return $finallyReturn275;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn278;
    bool $tmp280 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $finallyReturn278 = ((panda$core$Bit) { $tmp280 });
    return $finallyReturn278;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn281;
    bool $tmp283 = ((int32_t) self.value) < p_other.value;
    $finallyReturn281 = ((panda$core$Bit) { $tmp283 });
    return $finallyReturn281;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn284;
    bool $tmp286 = ((int64_t) self.value) < p_other.value;
    $finallyReturn284 = ((panda$core$Bit) { $tmp286 });
    return $finallyReturn284;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn287;
    bool $tmp289 = ((int16_t) self.value) < ((int16_t) p_other.value);
    $finallyReturn287 = ((panda$core$Bit) { $tmp289 });
    return $finallyReturn287;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn290;
    bool $tmp292 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $finallyReturn290 = ((panda$core$Bit) { $tmp292 });
    return $finallyReturn290;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn293;
    bool $tmp295 = ((int64_t) self.value) < ((int64_t) p_other.value);
    $finallyReturn293 = ((panda$core$Bit) { $tmp295 });
    return $finallyReturn293;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn296;
    bool $tmp298 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $finallyReturn296 = ((panda$core$Bit) { $tmp298 });
    return $finallyReturn296;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn299;
    bool $tmp301 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $finallyReturn299 = ((panda$core$Bit) { $tmp301 });
    return $finallyReturn299;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn302;
    bool $tmp304 = ((int32_t) self.value) > p_other.value;
    $finallyReturn302 = ((panda$core$Bit) { $tmp304 });
    return $finallyReturn302;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn305;
    bool $tmp307 = ((int64_t) self.value) > p_other.value;
    $finallyReturn305 = ((panda$core$Bit) { $tmp307 });
    return $finallyReturn305;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn308;
    bool $tmp310 = ((int16_t) self.value) > ((int16_t) p_other.value);
    $finallyReturn308 = ((panda$core$Bit) { $tmp310 });
    return $finallyReturn308;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn311;
    bool $tmp313 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $finallyReturn311 = ((panda$core$Bit) { $tmp313 });
    return $finallyReturn311;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn314;
    bool $tmp316 = ((int64_t) self.value) > ((int64_t) p_other.value);
    $finallyReturn314 = ((panda$core$Bit) { $tmp316 });
    return $finallyReturn314;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn317;
    bool $tmp319 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $finallyReturn317 = ((panda$core$Bit) { $tmp319 });
    return $finallyReturn317;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn320;
    bool $tmp322 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $finallyReturn320 = ((panda$core$Bit) { $tmp322 });
    return $finallyReturn320;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn323;
    bool $tmp325 = ((int32_t) self.value) >= p_other.value;
    $finallyReturn323 = ((panda$core$Bit) { $tmp325 });
    return $finallyReturn323;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn326;
    bool $tmp328 = ((int64_t) self.value) >= p_other.value;
    $finallyReturn326 = ((panda$core$Bit) { $tmp328 });
    return $finallyReturn326;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn329;
    bool $tmp331 = ((int16_t) self.value) >= ((int16_t) p_other.value);
    $finallyReturn329 = ((panda$core$Bit) { $tmp331 });
    return $finallyReturn329;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn332;
    bool $tmp334 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $finallyReturn332 = ((panda$core$Bit) { $tmp334 });
    return $finallyReturn332;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn335;
    bool $tmp337 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    $finallyReturn335 = ((panda$core$Bit) { $tmp337 });
    return $finallyReturn335;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $finallyReturn338;
    bool $tmp340 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $finallyReturn338 = ((panda$core$Bit) { $tmp340 });
    return $finallyReturn338;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $finallyReturn341;
    bool $tmp343 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $finallyReturn341 = ((panda$core$Bit) { $tmp343 });
    return $finallyReturn341;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $finallyReturn344;
    bool $tmp346 = ((int32_t) self.value) <= p_other.value;
    $finallyReturn344 = ((panda$core$Bit) { $tmp346 });
    return $finallyReturn344;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $finallyReturn347;
    bool $tmp349 = ((int64_t) self.value) <= p_other.value;
    $finallyReturn347 = ((panda$core$Bit) { $tmp349 });
    return $finallyReturn347;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $finallyReturn350;
    bool $tmp352 = ((int16_t) self.value) <= ((int16_t) p_other.value);
    $finallyReturn350 = ((panda$core$Bit) { $tmp352 });
    return $finallyReturn350;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $finallyReturn353;
    bool $tmp355 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $finallyReturn353 = ((panda$core$Bit) { $tmp355 });
    return $finallyReturn353;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $finallyReturn356;
    bool $tmp358 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    $finallyReturn356 = ((panda$core$Bit) { $tmp358 });
    return $finallyReturn356;
}
panda$core$Int8 panda$core$Int8$abs$R$panda$core$Int8(panda$core$Int8 self) {
    panda$core$Int8 $finallyReturn360;
    panda$core$Int8 $finallyReturn363;
    panda$core$Bit $tmp360 = panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8) { 0 }));
    if ($tmp360.value) {
    {
        panda$core$Int8 $tmp362 = panda$core$Int8$$SUB$R$panda$core$Int8(self);
        $finallyReturn360 = $tmp362;
        return $finallyReturn360;
    }
    }
    $finallyReturn363 = self;
    return $finallyReturn363;
}
panda$core$Int32 panda$core$Int8$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn366;
    panda$core$Int32 $finallyReturn368;
    bool $tmp366 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp366 }).value) {
    {
        $finallyReturn366 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $finallyReturn366;
    }
    }
    $finallyReturn368 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $finallyReturn368;
}
panda$core$Int32 panda$core$Int8$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn371;
    panda$core$Int32 $finallyReturn373;
    bool $tmp371 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp371 }).value) {
    {
        $finallyReturn371 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $finallyReturn371;
    }
    }
    $finallyReturn373 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $finallyReturn373;
}
panda$core$Int32 panda$core$Int8$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn376;
    panda$core$Int32 $finallyReturn378;
    bool $tmp376 = ((int32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp376 }).value) {
    {
        $finallyReturn376 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $finallyReturn376;
    }
    }
    $finallyReturn378 = ((panda$core$Int32) { p_other.value });
    return $finallyReturn378;
}
panda$core$Int64 panda$core$Int8$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn381;
    panda$core$Int64 $finallyReturn383;
    bool $tmp381 = ((int64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp381 }).value) {
    {
        $finallyReturn381 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn381;
    }
    }
    $finallyReturn383 = ((panda$core$Int64) { p_other.value });
    return $finallyReturn383;
}
panda$core$Int16 panda$core$Int8$min$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $finallyReturn386;
    panda$core$Int16 $finallyReturn388;
    bool $tmp386 = ((int16_t) self.value) < ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp386 }).value) {
    {
        $finallyReturn386 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $finallyReturn386;
    }
    }
    $finallyReturn388 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $finallyReturn388;
}
panda$core$Int32 panda$core$Int8$min$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $finallyReturn391;
    panda$core$Int32 $finallyReturn393;
    bool $tmp391 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp391 }).value) {
    {
        $finallyReturn391 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $finallyReturn391;
    }
    }
    $finallyReturn393 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $finallyReturn393;
}
panda$core$Int64 panda$core$Int8$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn396;
    panda$core$Int64 $finallyReturn398;
    bool $tmp396 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp396 }).value) {
    {
        $finallyReturn396 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn396;
    }
    }
    $finallyReturn398 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn398;
}
panda$core$Int32 panda$core$Int8$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $finallyReturn401;
    panda$core$Int32 $finallyReturn403;
    bool $tmp401 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp401 }).value) {
    {
        $finallyReturn401 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $finallyReturn401;
    }
    }
    $finallyReturn403 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $finallyReturn403;
}
panda$core$Int32 panda$core$Int8$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $finallyReturn406;
    panda$core$Int32 $finallyReturn408;
    bool $tmp406 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp406 }).value) {
    {
        $finallyReturn406 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $finallyReturn406;
    }
    }
    $finallyReturn408 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $finallyReturn408;
}
panda$core$Int32 panda$core$Int8$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $finallyReturn411;
    panda$core$Int32 $finallyReturn413;
    bool $tmp411 = ((int32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp411 }).value) {
    {
        $finallyReturn411 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $finallyReturn411;
    }
    }
    $finallyReturn413 = ((panda$core$Int32) { p_other.value });
    return $finallyReturn413;
}
panda$core$Int64 panda$core$Int8$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $finallyReturn416;
    panda$core$Int64 $finallyReturn418;
    bool $tmp416 = ((int64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp416 }).value) {
    {
        $finallyReturn416 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn416;
    }
    }
    $finallyReturn418 = ((panda$core$Int64) { p_other.value });
    return $finallyReturn418;
}
panda$core$Int16 panda$core$Int8$max$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $finallyReturn421;
    panda$core$Int16 $finallyReturn423;
    bool $tmp421 = ((int16_t) self.value) > ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp421 }).value) {
    {
        $finallyReturn421 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $finallyReturn421;
    }
    }
    $finallyReturn423 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $finallyReturn423;
}
panda$core$Int32 panda$core$Int8$max$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $finallyReturn426;
    panda$core$Int32 $finallyReturn428;
    bool $tmp426 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp426 }).value) {
    {
        $finallyReturn426 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $finallyReturn426;
    }
    }
    $finallyReturn428 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $finallyReturn428;
}
panda$core$Int64 panda$core$Int8$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $finallyReturn431;
    panda$core$Int64 $finallyReturn433;
    bool $tmp431 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp431 }).value) {
    {
        $finallyReturn431 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $finallyReturn431;
    }
    }
    $finallyReturn433 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $finallyReturn433;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_index) {
    panda$core$Bit $finallyReturn435;
    panda$core$Int32 $tmp437 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp438 = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp437);
    panda$core$Bit $tmp439 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp438, ((panda$core$Int32) { 0 }));
    $finallyReturn435 = $tmp439;
    return $finallyReturn435;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_index) {
    panda$core$Bit $finallyReturn440;
    panda$core$Int32 $tmp442 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp443 = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp442);
    panda$core$Bit $tmp444 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp443, ((panda$core$Int32) { 0 }));
    $finallyReturn440 = $tmp444;
    return $finallyReturn440;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_index) {
    panda$core$Bit $finallyReturn445;
    panda$core$Int32 $tmp447 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp448 = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp447);
    panda$core$Bit $tmp449 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp448, ((panda$core$Int32) { 0 }));
    $finallyReturn445 = $tmp449;
    return $finallyReturn445;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_index) {
    panda$core$Bit $finallyReturn450;
    panda$core$Int64 $tmp452 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp453 = panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp452);
    panda$core$Bit $tmp454 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp453, ((panda$core$Int64) { 0 }));
    $finallyReturn450 = $tmp454;
    return $finallyReturn450;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_index) {
    panda$core$Bit $finallyReturn455;
    panda$core$UInt32 $tmp457 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp458 = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp457);
    panda$core$Bit $tmp459 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp458, ((panda$core$UInt32) { 0 }));
    $finallyReturn455 = $tmp459;
    return $finallyReturn455;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_index) {
    panda$core$Bit $finallyReturn460;
    panda$core$UInt32 $tmp462 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp463 = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp462);
    panda$core$Bit $tmp464 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp463, ((panda$core$UInt32) { 0 }));
    $finallyReturn460 = $tmp464;
    return $finallyReturn460;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_index) {
    panda$core$Bit $finallyReturn465;
    panda$core$UInt32 $tmp467 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp468 = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp467);
    panda$core$Bit $tmp469 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp468, ((panda$core$UInt32) { 0 }));
    $finallyReturn465 = $tmp469;
    return $finallyReturn465;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt64 p_index) {
    panda$core$Bit $finallyReturn470;
    panda$core$UInt64 $tmp472 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp473 = panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp472);
    panda$core$Bit $tmp474 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp473, ((panda$core$UInt64) { 0 }));
    $finallyReturn470 = $tmp474;
    return $finallyReturn470;
}
panda$core$Int64 panda$core$Int8$hash$R$panda$core$Int64(panda$core$Int8 self) {
    panda$core$Int64 $finallyReturn475;
    $finallyReturn475 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn475;
}
panda$core$Int8$nullable panda$core$Int8$parse$panda$core$String$panda$core$Int64$R$panda$core$Int8$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs480;
    panda$core$String* $tmp481;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp482;
    panda$core$Int8$nullable $finallyReturn484;
    panda$core$Int8$nullable $finallyReturn486;
    panda$core$UInt64$nullable result491;
    panda$core$Int8$nullable $finallyReturn492;
    panda$core$Int8$nullable $finallyReturn494;
    panda$core$Bit $tmp479 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s478);
    if ($tmp479.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp482, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp483 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp482);
        $tmp481 = $tmp483;
        panda$core$UInt64$nullable $tmp484 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp481, p_radix);
        abs480 = $tmp484;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
        if (((panda$core$Bit) { !abs480.nonnull }).value) {
        {
            $finallyReturn484 = ((panda$core$Int8$nullable) { .nonnull = false });
            return $finallyReturn484;
        }
        }
        panda$core$Int8 $tmp488 = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64) abs480.value));
        panda$core$Int8 $tmp489 = panda$core$Int8$$SUB$R$panda$core$Int8($tmp488);
        $finallyReturn486 = ((panda$core$Int8$nullable) { $tmp489, true });
        return $finallyReturn486;
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp492 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result491 = $tmp492;
        if (((panda$core$Bit) { !result491.nonnull }).value) {
        {
            $finallyReturn492 = ((panda$core$Int8$nullable) { .nonnull = false });
            return $finallyReturn492;
        }
        }
        panda$core$Int8 $tmp496 = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64) result491.value));
        $finallyReturn494 = ((panda$core$Int8$nullable) { $tmp496, true });
        return $finallyReturn494;
    }
    }
}
panda$core$Int16 panda$core$Int8$convert$R$panda$core$Int16(panda$core$Int8 self) {
    panda$core$Int16 $finallyReturn497;
    $finallyReturn497 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $finallyReturn497;
}
panda$core$Int32 panda$core$Int8$convert$R$panda$core$Int32(panda$core$Int8 self) {
    panda$core$Int32 $finallyReturn499;
    $finallyReturn499 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $finallyReturn499;
}
panda$core$Int64 panda$core$Int8$convert$R$panda$core$Int64(panda$core$Int8 self) {
    panda$core$Int64 $finallyReturn501;
    $finallyReturn501 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $finallyReturn501;
}
panda$core$UInt8 panda$core$Int8$convert$R$panda$core$UInt8(panda$core$Int8 self) {
    panda$core$UInt8 $finallyReturn503;
    $finallyReturn503 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $finallyReturn503;
}
panda$core$UInt16 panda$core$Int8$convert$R$panda$core$UInt16(panda$core$Int8 self) {
    panda$core$UInt16 $finallyReturn505;
    $finallyReturn505 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $finallyReturn505;
}
panda$core$UInt32 panda$core$Int8$convert$R$panda$core$UInt32(panda$core$Int8 self) {
    panda$core$UInt32 $finallyReturn507;
    $finallyReturn507 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $finallyReturn507;
}
panda$core$UInt64 panda$core$Int8$convert$R$panda$core$UInt64(panda$core$Int8 self) {
    panda$core$UInt64 $finallyReturn509;
    $finallyReturn509 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $finallyReturn509;
}
panda$core$Real32 panda$core$Int8$convert$R$panda$core$Real32(panda$core$Int8 self) {
    panda$core$Real32 $finallyReturn511;
    $finallyReturn511 = ((panda$core$Real32) { ((float) self.value) });
    return $finallyReturn511;
}
panda$core$Real64 panda$core$Int8$convert$R$panda$core$Real64(panda$core$Int8 self) {
    panda$core$Real64 $finallyReturn513;
    $finallyReturn513 = ((panda$core$Real64) { ((double) self.value) });
    return $finallyReturn513;
}
panda$core$String* panda$core$Int8$convert$R$panda$core$String(panda$core$Int8 self) {
    panda$core$Int64 max516;
    panda$core$Char8* chars517;
    panda$core$Int64 index518;
    panda$core$Int8 value520;
    panda$core$Char8 $tmp524;
    panda$core$Char8 $tmp536;
    panda$core$Char8 $tmp545;
    panda$core$Int64 size546;
    panda$core$Range$LTpanda$core$Int64$GT $tmp548;
    panda$core$String* $finallyReturn568;
    panda$core$String* $tmp570;
    panda$core$String* $tmp571;
    max516 = ((panda$core$Int64) { 4 });
    chars517 = ((panda$core$Char8*) pandaZAlloc(max516.value * 1));
    panda$core$Int64 $tmp519 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max516, ((panda$core$Int64) { 1 }));
    index518 = $tmp519;
    value520 = self;
    panda$core$Bit $tmp521 = panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(value520, ((panda$core$Int8) { 0 }));
    if ($tmp521.value) {
    {
        $l522:;
        {
            panda$core$Int32 $tmp525 = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(value520, ((panda$core$Int8) { 10 }));
            panda$core$Int32 $tmp526 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp525, ((panda$core$Int32) { 48 }));
            panda$core$UInt8 $tmp527 = panda$core$Int32$convert$R$panda$core$UInt8($tmp526);
            panda$core$Char8$init$panda$core$UInt8(&$tmp524, $tmp527);
            chars517[index518.value] = $tmp524;
            panda$core$Int32 $tmp528 = panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(value520, ((panda$core$Int8) { 10 }));
            panda$core$Int8 $tmp529 = panda$core$Int32$convert$R$panda$core$Int8($tmp528);
            value520 = $tmp529;
            panda$core$Int64 $tmp530 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index518, ((panda$core$Int64) { 1 }));
            index518 = $tmp530;
        }
        panda$core$Bit $tmp532 = panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(value520, ((panda$core$Int8) { 0 }));
        bool $tmp531 = $tmp532.value;
        if ($tmp531) goto $l522;
        $l523:;
        panda$core$Int64 $tmp533 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index518, ((panda$core$Int64) { 1 }));
        index518 = $tmp533;
    }
    }
    else {
    {
        $l534:;
        {
            panda$core$Int32 $tmp537 = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(value520, ((panda$core$Int8) { 10 }));
            panda$core$Int32 $tmp538 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 48 }), $tmp537);
            panda$core$UInt8 $tmp539 = panda$core$Int32$convert$R$panda$core$UInt8($tmp538);
            panda$core$Char8$init$panda$core$UInt8(&$tmp536, $tmp539);
            chars517[index518.value] = $tmp536;
            panda$core$Int32 $tmp540 = panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(value520, ((panda$core$Int8) { 10 }));
            panda$core$Int8 $tmp541 = panda$core$Int32$convert$R$panda$core$Int8($tmp540);
            value520 = $tmp541;
            panda$core$Int64 $tmp542 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index518, ((panda$core$Int64) { 1 }));
            index518 = $tmp542;
        }
        panda$core$Bit $tmp544 = panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(value520, ((panda$core$Int8) { 0 }));
        bool $tmp543 = $tmp544.value;
        if ($tmp543) goto $l534;
        $l535:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp545, ((panda$core$UInt8) { 45 }));
        chars517[index518.value] = $tmp545;
    }
    }
    panda$core$Int64 $tmp547 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max516, index518);
    size546 = $tmp547;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp548, ((panda$core$Int64) { 0 }), size546, ((panda$core$Bit) { false }));
    int64_t $tmp550 = $tmp548.min.value;
    panda$core$Int64 i549 = { $tmp550 };
    int64_t $tmp552 = $tmp548.max.value;
    bool $tmp553 = $tmp548.inclusive.value;
    if ($tmp553) goto $l560; else goto $l561;
    $l560:;
    if ($tmp550 <= $tmp552) goto $l554; else goto $l556;
    $l561:;
    if ($tmp550 < $tmp552) goto $l554; else goto $l556;
    $l554:;
    {
        panda$core$Int64 $tmp562 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i549, index518);
        chars517[i549.value] = chars517[$tmp562.value];
    }
    $l557:;
    int64_t $tmp564 = $tmp552 - i549.value;
    if ($tmp553) goto $l565; else goto $l566;
    $l565:;
    if ((uint64_t) $tmp564 >= 1) goto $l563; else goto $l556;
    $l566:;
    if ((uint64_t) $tmp564 > 1) goto $l563; else goto $l556;
    $l563:;
    i549.value += 1;
    goto $l554;
    $l556:;
    panda$core$String* $tmp572 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp572, chars517, size546);
    $tmp571 = $tmp572;
    $tmp570 = $tmp571;
    $finallyReturn568 = $tmp570;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp571));
    return $finallyReturn568;
}
panda$core$String* panda$core$Int8$format$panda$core$String$R$panda$core$String(panda$core$Int8 self, panda$core$String* p_fmt) {
    panda$core$String* $finallyReturn573;
    panda$core$String* $tmp575;
    panda$core$String* $tmp576;
    bool $tmp577 = self.value < 0;
    panda$core$Int8 $tmp578 = panda$core$Int8$abs$R$panda$core$Int8(self);
    panda$core$UInt64 $tmp579 = panda$core$Int8$convert$R$panda$core$UInt64($tmp578);
    panda$core$String* $tmp580 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { $tmp577 }), $tmp579, ((panda$core$UInt64) { 255 }), p_fmt);
    $tmp576 = $tmp580;
    $tmp575 = $tmp576;
    $finallyReturn573 = $tmp575;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
    return $finallyReturn573;
}
void panda$core$Int8$cleanup(panda$core$Int8 self) {
}

