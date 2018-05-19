#include "panda/core/UInt8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int64.h"
#include "panda/core/Int16.h"
#include "panda/core/Int8.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/Object.h"
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Comparable* p0) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Equatable* p0) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$UInt8$wrapper* self, panda$core$String* fmt) {
    return panda$core$UInt8$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Comparable* other) {
    return panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Int64 panda$core$UInt8$hash$R$panda$core$Int64$wrappershim(panda$core$UInt8$wrapper* self) {
    return panda$core$UInt8$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Equatable* other) {
    return panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Equatable* other) {
    return panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$String* panda$core$UInt8$convert$R$panda$core$String$wrappershim(panda$core$UInt8$wrapper* self) {
    return panda$core$UInt8$convert$R$panda$core$String(self->value);
}
void panda$core$UInt8$cleanup$wrappershim(panda$core$UInt8$wrapper* self) {
    panda$core$UInt8$cleanup(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt8$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt8$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt8$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt8$_panda$core$Formattable, { panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt8$_panda$core$Comparable, { panda$core$UInt8$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt8$_panda$collections$Key, { panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$UInt8$class_type panda$core$UInt8$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt8$_panda$core$Equatable, { panda$core$UInt8$convert$R$panda$core$String, panda$core$UInt8$cleanup, panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$SUB$R$panda$core$UInt8, panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32, panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32, panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32, panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64, panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32, panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32, panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32, panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64, panda$core$UInt8$$BNOT$R$panda$core$UInt8, panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$hash$R$panda$core$Int64, panda$core$UInt8$convert$R$panda$core$Int8, panda$core$UInt8$convert$R$panda$core$Int16, panda$core$UInt8$convert$R$panda$core$Int32, panda$core$UInt8$convert$R$panda$core$Int64, panda$core$UInt8$convert$R$panda$core$UInt16, panda$core$UInt8$convert$R$panda$core$UInt32, panda$core$UInt8$convert$R$panda$core$UInt64, panda$core$UInt8$convert$R$panda$core$Real32, panda$core$UInt8$convert$R$panda$core$Real64, panda$core$UInt8$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt8$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt8$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt8$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt8$wrapper_panda$core$Formattable, { panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$wrappershim, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$wrappershim, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$wrappershim, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt8$wrapper_panda$core$Comparable, { panda$core$UInt8$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt8$wrapper_panda$collections$Key, { panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$wrappershim, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$wrappershim} };

static panda$core$String $s2;
panda$core$UInt8$wrapperclass_type panda$core$UInt8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt8$wrapper_panda$core$Equatable, { panda$core$UInt8$convert$R$panda$core$String$wrappershim, panda$core$UInt8$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };

void panda$core$UInt8$init$builtin_uint8(panda$core$UInt8* self, uint8_t p_value) {
    self->value = p_value;
}
panda$core$Int16 panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue3;
    int16_t $tmp4 = ((int16_t) self.value) + ((int16_t) p_other.value);
    $returnValue3 = ((panda$core$Int16) { $tmp4 });
    return $returnValue3;
}
panda$core$Int32 panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue6;
    int32_t $tmp7 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $returnValue6 = ((panda$core$Int32) { $tmp7 });
    return $returnValue6;
}
panda$core$Int64 panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue9;
    int64_t $tmp10 = ((int64_t) self.value) + ((int64_t) p_other.value);
    $returnValue9 = ((panda$core$Int64) { $tmp10 });
    return $returnValue9;
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue12;
    uint32_t $tmp13 = ((uint32_t) self.value) + ((uint32_t) p_other.value);
    $returnValue12 = ((panda$core$UInt32) { $tmp13 });
    return $returnValue12;
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue15;
    uint32_t $tmp16 = ((uint32_t) self.value) + ((uint32_t) p_other.value);
    $returnValue15 = ((panda$core$UInt32) { $tmp16 });
    return $returnValue15;
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue18;
    uint32_t $tmp19 = ((uint32_t) self.value) + p_other.value;
    $returnValue18 = ((panda$core$UInt32) { $tmp19 });
    return $returnValue18;
}
panda$core$UInt64 panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue21;
    uint64_t $tmp22 = ((uint64_t) self.value) + p_other.value;
    $returnValue21 = ((panda$core$UInt64) { $tmp22 });
    return $returnValue21;
}
panda$core$Int16 panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue24;
    int16_t $tmp25 = ((int16_t) self.value) - ((int16_t) p_other.value);
    $returnValue24 = ((panda$core$Int16) { $tmp25 });
    return $returnValue24;
}
panda$core$Int32 panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue27;
    int32_t $tmp28 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $returnValue27 = ((panda$core$Int32) { $tmp28 });
    return $returnValue27;
}
panda$core$Int64 panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue30;
    int64_t $tmp31 = ((int64_t) self.value) - ((int64_t) p_other.value);
    $returnValue30 = ((panda$core$Int64) { $tmp31 });
    return $returnValue30;
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue33;
    uint32_t $tmp34 = ((uint32_t) self.value) - ((uint32_t) p_other.value);
    $returnValue33 = ((panda$core$UInt32) { $tmp34 });
    return $returnValue33;
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue36;
    uint32_t $tmp37 = ((uint32_t) self.value) - ((uint32_t) p_other.value);
    $returnValue36 = ((panda$core$UInt32) { $tmp37 });
    return $returnValue36;
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue39;
    uint32_t $tmp40 = ((uint32_t) self.value) - p_other.value;
    $returnValue39 = ((panda$core$UInt32) { $tmp40 });
    return $returnValue39;
}
panda$core$UInt64 panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue42;
    uint64_t $tmp43 = ((uint64_t) self.value) - p_other.value;
    $returnValue42 = ((panda$core$UInt64) { $tmp43 });
    return $returnValue42;
}
panda$core$UInt8 panda$core$UInt8$$SUB$R$panda$core$UInt8(panda$core$UInt8 self) {
    panda$core$UInt8 $returnValue45;
    $returnValue45 = ((panda$core$UInt8) { -self.value });
    return $returnValue45;
}
panda$core$Int16 panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue48;
    int16_t $tmp49 = ((int16_t) self.value) * ((int16_t) p_other.value);
    $returnValue48 = ((panda$core$Int16) { $tmp49 });
    return $returnValue48;
}
panda$core$Int32 panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue51;
    int32_t $tmp52 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $returnValue51 = ((panda$core$Int32) { $tmp52 });
    return $returnValue51;
}
panda$core$Int64 panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue54;
    int64_t $tmp55 = ((int64_t) self.value) * ((int64_t) p_other.value);
    $returnValue54 = ((panda$core$Int64) { $tmp55 });
    return $returnValue54;
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue57;
    uint32_t $tmp58 = ((uint32_t) self.value) * ((uint32_t) p_other.value);
    $returnValue57 = ((panda$core$UInt32) { $tmp58 });
    return $returnValue57;
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue60;
    uint32_t $tmp61 = ((uint32_t) self.value) * ((uint32_t) p_other.value);
    $returnValue60 = ((panda$core$UInt32) { $tmp61 });
    return $returnValue60;
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue63;
    uint32_t $tmp64 = ((uint32_t) self.value) * p_other.value;
    $returnValue63 = ((panda$core$UInt32) { $tmp64 });
    return $returnValue63;
}
panda$core$UInt64 panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue66;
    uint64_t $tmp67 = ((uint64_t) self.value) * p_other.value;
    $returnValue66 = ((panda$core$UInt64) { $tmp67 });
    return $returnValue66;
}
panda$core$Int16 panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue69;
    int16_t $tmp70 = ((int16_t) self.value) / ((int16_t) p_other.value);
    $returnValue69 = ((panda$core$Int16) { $tmp70 });
    return $returnValue69;
}
panda$core$Int32 panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue72;
    int32_t $tmp73 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $returnValue72 = ((panda$core$Int32) { $tmp73 });
    return $returnValue72;
}
panda$core$Int64 panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue75;
    int64_t $tmp76 = ((int64_t) self.value) / ((int64_t) p_other.value);
    $returnValue75 = ((panda$core$Int64) { $tmp76 });
    return $returnValue75;
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue78;
    uint32_t $tmp79 = ((uint32_t) self.value) / ((uint32_t) p_other.value);
    $returnValue78 = ((panda$core$UInt32) { $tmp79 });
    return $returnValue78;
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue81;
    uint32_t $tmp82 = ((uint32_t) self.value) / ((uint32_t) p_other.value);
    $returnValue81 = ((panda$core$UInt32) { $tmp82 });
    return $returnValue81;
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue84;
    uint32_t $tmp85 = ((uint32_t) self.value) / p_other.value;
    $returnValue84 = ((panda$core$UInt32) { $tmp85 });
    return $returnValue84;
}
panda$core$UInt64 panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue87;
    uint64_t $tmp88 = ((uint64_t) self.value) / p_other.value;
    $returnValue87 = ((panda$core$UInt64) { $tmp88 });
    return $returnValue87;
}
panda$core$Int16 panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue90;
    int16_t $tmp91 = ((int16_t) self.value) % ((int16_t) p_other.value);
    $returnValue90 = ((panda$core$Int16) { $tmp91 });
    return $returnValue90;
}
panda$core$Int32 panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue93;
    int32_t $tmp94 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $returnValue93 = ((panda$core$Int32) { $tmp94 });
    return $returnValue93;
}
panda$core$Int64 panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue96;
    int64_t $tmp97 = ((int64_t) self.value) % ((int64_t) p_other.value);
    $returnValue96 = ((panda$core$Int64) { $tmp97 });
    return $returnValue96;
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue99;
    uint32_t $tmp100 = ((uint32_t) self.value) % ((uint32_t) p_other.value);
    $returnValue99 = ((panda$core$UInt32) { $tmp100 });
    return $returnValue99;
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue102;
    uint32_t $tmp103 = ((uint32_t) self.value) % ((uint32_t) p_other.value);
    $returnValue102 = ((panda$core$UInt32) { $tmp103 });
    return $returnValue102;
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue105;
    uint32_t $tmp106 = ((uint32_t) self.value) % p_other.value;
    $returnValue105 = ((panda$core$UInt32) { $tmp106 });
    return $returnValue105;
}
panda$core$UInt64 panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue108;
    uint64_t $tmp109 = ((uint64_t) self.value) % p_other.value;
    $returnValue108 = ((panda$core$UInt64) { $tmp109 });
    return $returnValue108;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Real32 $returnValue111;
    float $tmp112 = ((float) self.value) / ((float) p_other.value);
    $returnValue111 = ((panda$core$Real32) { $tmp112 });
    return $returnValue111;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Real32 $returnValue114;
    float $tmp115 = ((float) self.value) / ((float) p_other.value);
    $returnValue114 = ((panda$core$Real32) { $tmp115 });
    return $returnValue114;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Real32 $returnValue117;
    float $tmp118 = ((float) self.value) / ((float) p_other.value);
    $returnValue117 = ((panda$core$Real32) { $tmp118 });
    return $returnValue117;
}
panda$core$Real64 panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Real64 $returnValue120;
    double $tmp121 = ((double) self.value) / ((double) p_other.value);
    $returnValue120 = ((panda$core$Real64) { $tmp121 });
    return $returnValue120;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Real32 $returnValue123;
    float $tmp124 = ((float) self.value) / ((float) p_other.value);
    $returnValue123 = ((panda$core$Real32) { $tmp124 });
    return $returnValue123;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Real32 $returnValue126;
    float $tmp127 = ((float) self.value) / ((float) p_other.value);
    $returnValue126 = ((panda$core$Real32) { $tmp127 });
    return $returnValue126;
}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Real32 $returnValue129;
    float $tmp130 = ((float) self.value) / ((float) p_other.value);
    $returnValue129 = ((panda$core$Real32) { $tmp130 });
    return $returnValue129;
}
panda$core$Real64 panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Real64 $returnValue132;
    double $tmp133 = ((double) self.value) / ((double) p_other.value);
    $returnValue132 = ((panda$core$Real64) { $tmp133 });
    return $returnValue132;
}
panda$core$UInt8 panda$core$UInt8$$BNOT$R$panda$core$UInt8(panda$core$UInt8 self) {
    panda$core$UInt8 $returnValue135;
    $returnValue135 = ((panda$core$UInt8) { ~self.value });
    return $returnValue135;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue138;
    int32_t $tmp139 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $returnValue138 = ((panda$core$Int32) { $tmp139 });
    return $returnValue138;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue141;
    int32_t $tmp142 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $returnValue141 = ((panda$core$Int32) { $tmp142 });
    return $returnValue141;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue144;
    int32_t $tmp145 = ((int32_t) self.value) & p_other.value;
    $returnValue144 = ((panda$core$Int32) { $tmp145 });
    return $returnValue144;
}
panda$core$Int64 panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue147;
    int64_t $tmp148 = ((int64_t) self.value) & p_other.value;
    $returnValue147 = ((panda$core$Int64) { $tmp148 });
    return $returnValue147;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue150;
    uint32_t $tmp151 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $returnValue150 = ((panda$core$UInt32) { $tmp151 });
    return $returnValue150;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue153;
    uint32_t $tmp154 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $returnValue153 = ((panda$core$UInt32) { $tmp154 });
    return $returnValue153;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue156;
    uint32_t $tmp157 = ((uint32_t) self.value) & p_other.value;
    $returnValue156 = ((panda$core$UInt32) { $tmp157 });
    return $returnValue156;
}
panda$core$UInt64 panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue159;
    uint64_t $tmp160 = ((uint64_t) self.value) & p_other.value;
    $returnValue159 = ((panda$core$UInt64) { $tmp160 });
    return $returnValue159;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue162;
    int32_t $tmp163 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $returnValue162 = ((panda$core$Int32) { $tmp163 });
    return $returnValue162;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue165;
    int32_t $tmp166 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $returnValue165 = ((panda$core$Int32) { $tmp166 });
    return $returnValue165;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue168;
    int32_t $tmp169 = ((int32_t) self.value) | p_other.value;
    $returnValue168 = ((panda$core$Int32) { $tmp169 });
    return $returnValue168;
}
panda$core$Int64 panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue171;
    int64_t $tmp172 = ((int64_t) self.value) | p_other.value;
    $returnValue171 = ((panda$core$Int64) { $tmp172 });
    return $returnValue171;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue174;
    uint32_t $tmp175 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $returnValue174 = ((panda$core$UInt32) { $tmp175 });
    return $returnValue174;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue177;
    uint32_t $tmp178 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $returnValue177 = ((panda$core$UInt32) { $tmp178 });
    return $returnValue177;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue180;
    uint32_t $tmp181 = ((uint32_t) self.value) | p_other.value;
    $returnValue180 = ((panda$core$UInt32) { $tmp181 });
    return $returnValue180;
}
panda$core$UInt64 panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue183;
    uint64_t $tmp184 = ((uint64_t) self.value) | p_other.value;
    $returnValue183 = ((panda$core$UInt64) { $tmp184 });
    return $returnValue183;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue186;
    int32_t $tmp187 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $returnValue186 = ((panda$core$Int32) { $tmp187 });
    return $returnValue186;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue189;
    int32_t $tmp190 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $returnValue189 = ((panda$core$Int32) { $tmp190 });
    return $returnValue189;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue192;
    int32_t $tmp193 = ((int32_t) self.value) ^ p_other.value;
    $returnValue192 = ((panda$core$Int32) { $tmp193 });
    return $returnValue192;
}
panda$core$Int64 panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue195;
    int64_t $tmp196 = ((int64_t) self.value) ^ p_other.value;
    $returnValue195 = ((panda$core$Int64) { $tmp196 });
    return $returnValue195;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue198;
    uint32_t $tmp199 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $returnValue198 = ((panda$core$UInt32) { $tmp199 });
    return $returnValue198;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue201;
    uint32_t $tmp202 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $returnValue201 = ((panda$core$UInt32) { $tmp202 });
    return $returnValue201;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue204;
    uint32_t $tmp205 = ((uint32_t) self.value) ^ p_other.value;
    $returnValue204 = ((panda$core$UInt32) { $tmp205 });
    return $returnValue204;
}
panda$core$UInt64 panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue207;
    uint64_t $tmp208 = ((uint64_t) self.value) ^ p_other.value;
    $returnValue207 = ((panda$core$UInt64) { $tmp208 });
    return $returnValue207;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue210;
    int32_t $tmp211 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $returnValue210 = ((panda$core$Int32) { $tmp211 });
    return $returnValue210;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue213;
    int32_t $tmp214 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $returnValue213 = ((panda$core$Int32) { $tmp214 });
    return $returnValue213;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue216;
    int32_t $tmp217 = ((int32_t) self.value) << p_other.value;
    $returnValue216 = ((panda$core$Int32) { $tmp217 });
    return $returnValue216;
}
panda$core$Int64 panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue219;
    int64_t $tmp220 = ((int64_t) self.value) << p_other.value;
    $returnValue219 = ((panda$core$Int64) { $tmp220 });
    return $returnValue219;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue222;
    uint32_t $tmp223 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $returnValue222 = ((panda$core$UInt32) { $tmp223 });
    return $returnValue222;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue225;
    uint32_t $tmp226 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $returnValue225 = ((panda$core$UInt32) { $tmp226 });
    return $returnValue225;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue228;
    uint32_t $tmp229 = ((uint32_t) self.value) << p_other.value;
    $returnValue228 = ((panda$core$UInt32) { $tmp229 });
    return $returnValue228;
}
panda$core$UInt64 panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue231;
    uint64_t $tmp232 = ((uint64_t) self.value) << p_other.value;
    $returnValue231 = ((panda$core$UInt64) { $tmp232 });
    return $returnValue231;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue234;
    int32_t $tmp235 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $returnValue234 = ((panda$core$Int32) { $tmp235 });
    return $returnValue234;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue237;
    int32_t $tmp238 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $returnValue237 = ((panda$core$Int32) { $tmp238 });
    return $returnValue237;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue240;
    int32_t $tmp241 = ((int32_t) self.value) >> p_other.value;
    $returnValue240 = ((panda$core$Int32) { $tmp241 });
    return $returnValue240;
}
panda$core$Int64 panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue243;
    int64_t $tmp244 = ((int64_t) self.value) >> p_other.value;
    $returnValue243 = ((panda$core$Int64) { $tmp244 });
    return $returnValue243;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue246;
    uint32_t $tmp247 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $returnValue246 = ((panda$core$UInt32) { $tmp247 });
    return $returnValue246;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue249;
    uint32_t $tmp250 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $returnValue249 = ((panda$core$UInt32) { $tmp250 });
    return $returnValue249;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue252;
    uint32_t $tmp253 = ((uint32_t) self.value) >> p_other.value;
    $returnValue252 = ((panda$core$UInt32) { $tmp253 });
    return $returnValue252;
}
panda$core$UInt64 panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue255;
    uint64_t $tmp256 = ((uint64_t) self.value) >> p_other.value;
    $returnValue255 = ((panda$core$UInt64) { $tmp256 });
    return $returnValue255;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue258;
    bool $tmp259 = ((int16_t) self.value) == ((int16_t) p_other.value);
    $returnValue258 = ((panda$core$Bit) { $tmp259 });
    return $returnValue258;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue261;
    bool $tmp262 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $returnValue261 = ((panda$core$Bit) { $tmp262 });
    return $returnValue261;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue264;
    bool $tmp265 = ((int64_t) self.value) == ((int64_t) p_other.value);
    $returnValue264 = ((panda$core$Bit) { $tmp265 });
    return $returnValue264;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue267;
    bool $tmp268 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    $returnValue267 = ((panda$core$Bit) { $tmp268 });
    return $returnValue267;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue270;
    bool $tmp271 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    $returnValue270 = ((panda$core$Bit) { $tmp271 });
    return $returnValue270;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue273;
    bool $tmp274 = ((uint32_t) self.value) == p_other.value;
    $returnValue273 = ((panda$core$Bit) { $tmp274 });
    return $returnValue273;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue276;
    bool $tmp277 = ((uint64_t) self.value) == p_other.value;
    $returnValue276 = ((panda$core$Bit) { $tmp277 });
    return $returnValue276;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue279;
    bool $tmp280 = ((int16_t) self.value) != ((int16_t) p_other.value);
    $returnValue279 = ((panda$core$Bit) { $tmp280 });
    return $returnValue279;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue282;
    bool $tmp283 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $returnValue282 = ((panda$core$Bit) { $tmp283 });
    return $returnValue282;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue285;
    bool $tmp286 = ((int64_t) self.value) != ((int64_t) p_other.value);
    $returnValue285 = ((panda$core$Bit) { $tmp286 });
    return $returnValue285;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue288;
    bool $tmp289 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    $returnValue288 = ((panda$core$Bit) { $tmp289 });
    return $returnValue288;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue291;
    bool $tmp292 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    $returnValue291 = ((panda$core$Bit) { $tmp292 });
    return $returnValue291;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue294;
    bool $tmp295 = ((uint32_t) self.value) != p_other.value;
    $returnValue294 = ((panda$core$Bit) { $tmp295 });
    return $returnValue294;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue297;
    bool $tmp298 = ((uint64_t) self.value) != p_other.value;
    $returnValue297 = ((panda$core$Bit) { $tmp298 });
    return $returnValue297;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue300;
    bool $tmp301 = ((int16_t) self.value) < ((int16_t) p_other.value);
    $returnValue300 = ((panda$core$Bit) { $tmp301 });
    return $returnValue300;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue303;
    bool $tmp304 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $returnValue303 = ((panda$core$Bit) { $tmp304 });
    return $returnValue303;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue306;
    bool $tmp307 = ((int64_t) self.value) < ((int64_t) p_other.value);
    $returnValue306 = ((panda$core$Bit) { $tmp307 });
    return $returnValue306;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue309;
    bool $tmp310 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    $returnValue309 = ((panda$core$Bit) { $tmp310 });
    return $returnValue309;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue312;
    bool $tmp313 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    $returnValue312 = ((panda$core$Bit) { $tmp313 });
    return $returnValue312;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue315;
    bool $tmp316 = ((uint32_t) self.value) < p_other.value;
    $returnValue315 = ((panda$core$Bit) { $tmp316 });
    return $returnValue315;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue318;
    bool $tmp319 = ((uint64_t) self.value) < p_other.value;
    $returnValue318 = ((panda$core$Bit) { $tmp319 });
    return $returnValue318;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue321;
    bool $tmp322 = ((int16_t) self.value) > ((int16_t) p_other.value);
    $returnValue321 = ((panda$core$Bit) { $tmp322 });
    return $returnValue321;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue324;
    bool $tmp325 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $returnValue324 = ((panda$core$Bit) { $tmp325 });
    return $returnValue324;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue327;
    bool $tmp328 = ((int64_t) self.value) > ((int64_t) p_other.value);
    $returnValue327 = ((panda$core$Bit) { $tmp328 });
    return $returnValue327;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue330;
    bool $tmp331 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    $returnValue330 = ((panda$core$Bit) { $tmp331 });
    return $returnValue330;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue333;
    bool $tmp334 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    $returnValue333 = ((panda$core$Bit) { $tmp334 });
    return $returnValue333;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue336;
    bool $tmp337 = ((uint32_t) self.value) > p_other.value;
    $returnValue336 = ((panda$core$Bit) { $tmp337 });
    return $returnValue336;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue339;
    bool $tmp340 = ((uint64_t) self.value) > p_other.value;
    $returnValue339 = ((panda$core$Bit) { $tmp340 });
    return $returnValue339;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue342;
    bool $tmp343 = ((int16_t) self.value) >= ((int16_t) p_other.value);
    $returnValue342 = ((panda$core$Bit) { $tmp343 });
    return $returnValue342;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue345;
    bool $tmp346 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $returnValue345 = ((panda$core$Bit) { $tmp346 });
    return $returnValue345;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue348;
    bool $tmp349 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    $returnValue348 = ((panda$core$Bit) { $tmp349 });
    return $returnValue348;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue351;
    bool $tmp352 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    $returnValue351 = ((panda$core$Bit) { $tmp352 });
    return $returnValue351;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue354;
    bool $tmp355 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    $returnValue354 = ((panda$core$Bit) { $tmp355 });
    return $returnValue354;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue357;
    bool $tmp358 = ((uint32_t) self.value) >= p_other.value;
    $returnValue357 = ((panda$core$Bit) { $tmp358 });
    return $returnValue357;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue360;
    bool $tmp361 = ((uint64_t) self.value) >= p_other.value;
    $returnValue360 = ((panda$core$Bit) { $tmp361 });
    return $returnValue360;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue363;
    bool $tmp364 = ((int16_t) self.value) <= ((int16_t) p_other.value);
    $returnValue363 = ((panda$core$Bit) { $tmp364 });
    return $returnValue363;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue366;
    bool $tmp367 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $returnValue366 = ((panda$core$Bit) { $tmp367 });
    return $returnValue366;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue369;
    bool $tmp370 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    $returnValue369 = ((panda$core$Bit) { $tmp370 });
    return $returnValue369;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue372;
    bool $tmp373 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    $returnValue372 = ((panda$core$Bit) { $tmp373 });
    return $returnValue372;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue375;
    bool $tmp376 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    $returnValue375 = ((panda$core$Bit) { $tmp376 });
    return $returnValue375;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue378;
    bool $tmp379 = ((uint32_t) self.value) <= p_other.value;
    $returnValue378 = ((panda$core$Bit) { $tmp379 });
    return $returnValue378;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue381;
    bool $tmp382 = ((uint64_t) self.value) <= p_other.value;
    $returnValue381 = ((panda$core$Bit) { $tmp382 });
    return $returnValue381;
}
panda$core$Int16 panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue385;
    bool $tmp384 = ((int16_t) self.value) < ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp384 }).value) {
    {
        $returnValue385 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $returnValue385;
    }
    }
    $returnValue385 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $returnValue385;
}
panda$core$Int32 panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue389;
    bool $tmp388 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp388 }).value) {
    {
        $returnValue389 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue389;
    }
    }
    $returnValue389 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue389;
}
panda$core$Int64 panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue393;
    bool $tmp392 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp392 }).value) {
    {
        $returnValue393 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue393;
    }
    }
    $returnValue393 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue393;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue397;
    bool $tmp396 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp396 }).value) {
    {
        $returnValue397 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue397;
    }
    }
    $returnValue397 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $returnValue397;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue401;
    bool $tmp400 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp400 }).value) {
    {
        $returnValue401 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue401;
    }
    }
    $returnValue401 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $returnValue401;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue405;
    bool $tmp404 = ((uint32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp404 }).value) {
    {
        $returnValue405 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue405;
    }
    }
    $returnValue405 = ((panda$core$UInt32) { p_other.value });
    return $returnValue405;
}
panda$core$UInt64 panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue409;
    bool $tmp408 = ((uint64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp408 }).value) {
    {
        $returnValue409 = ((panda$core$UInt64) { ((uint64_t) self.value) });
        return $returnValue409;
    }
    }
    $returnValue409 = ((panda$core$UInt64) { p_other.value });
    return $returnValue409;
}
panda$core$Int16 panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue413;
    bool $tmp412 = ((int16_t) self.value) > ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp412 }).value) {
    {
        $returnValue413 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $returnValue413;
    }
    }
    $returnValue413 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $returnValue413;
}
panda$core$Int32 panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue417;
    bool $tmp416 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp416 }).value) {
    {
        $returnValue417 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue417;
    }
    }
    $returnValue417 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue417;
}
panda$core$Int64 panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue421;
    bool $tmp420 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp420 }).value) {
    {
        $returnValue421 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue421;
    }
    }
    $returnValue421 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue421;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue425;
    bool $tmp424 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp424 }).value) {
    {
        $returnValue425 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue425;
    }
    }
    $returnValue425 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $returnValue425;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue429;
    bool $tmp428 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp428 }).value) {
    {
        $returnValue429 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue429;
    }
    }
    $returnValue429 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $returnValue429;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue433;
    bool $tmp432 = ((uint32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp432 }).value) {
    {
        $returnValue433 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue433;
    }
    }
    $returnValue433 = ((panda$core$UInt32) { p_other.value });
    return $returnValue433;
}
panda$core$UInt64 panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue437;
    bool $tmp436 = ((uint64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp436 }).value) {
    {
        $returnValue437 = ((panda$core$UInt64) { ((uint64_t) self.value) });
        return $returnValue437;
    }
    }
    $returnValue437 = ((panda$core$UInt64) { p_other.value });
    return $returnValue437;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue440;
    panda$core$Int32 $tmp441 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp442 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp441);
    panda$core$Bit $tmp443 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp442, ((panda$core$Int32) { 0 }));
    $returnValue440 = $tmp443;
    return $returnValue440;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue445;
    panda$core$Int32 $tmp446 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp447 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp446);
    panda$core$Bit $tmp448 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp447, ((panda$core$Int32) { 0 }));
    $returnValue445 = $tmp448;
    return $returnValue445;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue450;
    panda$core$Int32 $tmp451 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp452 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp451);
    panda$core$Bit $tmp453 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp452, ((panda$core$Int32) { 0 }));
    $returnValue450 = $tmp453;
    return $returnValue450;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int64 p_index) {
    panda$core$Bit $returnValue455;
    panda$core$Int64 $tmp456 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp457 = panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp456);
    panda$core$Bit $tmp458 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp457, ((panda$core$Int64) { 0 }));
    $returnValue455 = $tmp458;
    return $returnValue455;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue460;
    panda$core$UInt32 $tmp461 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp462 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp461);
    panda$core$Bit $tmp463 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp462, ((panda$core$UInt32) { 0 }));
    $returnValue460 = $tmp463;
    return $returnValue460;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue465;
    panda$core$UInt32 $tmp466 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp467 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp466);
    panda$core$Bit $tmp468 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp467, ((panda$core$UInt32) { 0 }));
    $returnValue465 = $tmp468;
    return $returnValue465;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue470;
    panda$core$UInt32 $tmp471 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp472 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp471);
    panda$core$Bit $tmp473 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp472, ((panda$core$UInt32) { 0 }));
    $returnValue470 = $tmp473;
    return $returnValue470;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue475;
    panda$core$UInt64 $tmp476 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp477 = panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp476);
    panda$core$Bit $tmp478 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp477, ((panda$core$UInt64) { 0 }));
    $returnValue475 = $tmp478;
    return $returnValue475;
}
panda$core$Int64 panda$core$UInt8$hash$R$panda$core$Int64(panda$core$UInt8 self) {
    panda$core$Int64 $returnValue480;
    $returnValue480 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue480;
}
panda$core$UInt8$nullable panda$core$UInt8$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt8$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result482;
    panda$core$UInt8$nullable $returnValue484;
    panda$core$UInt64$nullable $tmp483 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result482 = $tmp483;
    if (((panda$core$Bit) { !result482.nonnull }).value) {
    {
        $returnValue484 = ((panda$core$UInt8$nullable) { .nonnull = false });
        return $returnValue484;
    }
    }
    panda$core$UInt8 $tmp486 = panda$core$UInt64$convert$R$panda$core$UInt8(((panda$core$UInt64) result482.value));
    $returnValue484 = ((panda$core$UInt8$nullable) { $tmp486, true });
    return $returnValue484;
}
panda$core$Int8 panda$core$UInt8$convert$R$panda$core$Int8(panda$core$UInt8 self) {
    panda$core$Int8 $returnValue488;
    $returnValue488 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $returnValue488;
}
panda$core$Int16 panda$core$UInt8$convert$R$panda$core$Int16(panda$core$UInt8 self) {
    panda$core$Int16 $returnValue490;
    $returnValue490 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $returnValue490;
}
panda$core$Int32 panda$core$UInt8$convert$R$panda$core$Int32(panda$core$UInt8 self) {
    panda$core$Int32 $returnValue492;
    $returnValue492 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $returnValue492;
}
panda$core$Int64 panda$core$UInt8$convert$R$panda$core$Int64(panda$core$UInt8 self) {
    panda$core$Int64 $returnValue494;
    $returnValue494 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue494;
}
panda$core$UInt16 panda$core$UInt8$convert$R$panda$core$UInt16(panda$core$UInt8 self) {
    panda$core$UInt16 $returnValue496;
    $returnValue496 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $returnValue496;
}
panda$core$UInt32 panda$core$UInt8$convert$R$panda$core$UInt32(panda$core$UInt8 self) {
    panda$core$UInt32 $returnValue498;
    $returnValue498 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $returnValue498;
}
panda$core$UInt64 panda$core$UInt8$convert$R$panda$core$UInt64(panda$core$UInt8 self) {
    panda$core$UInt64 $returnValue500;
    $returnValue500 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $returnValue500;
}
panda$core$Real32 panda$core$UInt8$convert$R$panda$core$Real32(panda$core$UInt8 self) {
    panda$core$Real32 $returnValue502;
    $returnValue502 = ((panda$core$Real32) { ((float) self.value) });
    return $returnValue502;
}
panda$core$Real64 panda$core$UInt8$convert$R$panda$core$Real64(panda$core$UInt8 self) {
    panda$core$Real64 $returnValue504;
    $returnValue504 = ((panda$core$Real64) { ((double) self.value) });
    return $returnValue504;
}
panda$core$String* panda$core$UInt8$convert$R$panda$core$String(panda$core$UInt8 self) {
    panda$core$Int64 max506;
    panda$core$Char8* chars507;
    panda$core$Int64 index508;
    panda$core$UInt8 value510;
    panda$core$Char8 $tmp514;
    panda$core$Char8 $tmp526;
    panda$core$Char8 $tmp535;
    panda$core$Int64 size536;
    panda$core$Range$LTpanda$core$Int64$GT $tmp538;
    panda$core$String* $returnValue559;
    panda$core$String* $tmp560;
    panda$core$String* $tmp561;
    max506 = ((panda$core$Int64) { 3 });
    chars507 = ((panda$core$Char8*) pandaZAlloc(max506.value * 1));
    panda$core$Int64 $tmp509 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max506, ((panda$core$Int64) { 1 }));
    index508 = $tmp509;
    value510 = self;
    panda$core$Bit $tmp511 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(value510, ((panda$core$UInt8) { 0 }));
    if ($tmp511.value) {
    {
        $l512:;
        {
            panda$core$UInt32 $tmp515 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value510, ((panda$core$UInt8) { 10 }));
            panda$core$UInt32 $tmp516 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp515, ((panda$core$UInt32) { 48 }));
            panda$core$UInt8 $tmp517 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp516);
            panda$core$Char8$init$panda$core$UInt8(&$tmp514, $tmp517);
            chars507[index508.value] = $tmp514;
            panda$core$UInt32 $tmp518 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value510, ((panda$core$UInt8) { 10 }));
            panda$core$UInt8 $tmp519 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp518);
            value510 = $tmp519;
            panda$core$Int64 $tmp520 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index508, ((panda$core$Int64) { 1 }));
            index508 = $tmp520;
        }
        panda$core$Bit $tmp522 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(value510, ((panda$core$UInt8) { 0 }));
        bool $tmp521 = $tmp522.value;
        if ($tmp521) goto $l512;
        $l513:;
        panda$core$Int64 $tmp523 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index508, ((panda$core$Int64) { 1 }));
        index508 = $tmp523;
    }
    }
    else {
    {
        $l524:;
        {
            panda$core$UInt32 $tmp527 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value510, ((panda$core$UInt8) { 10 }));
            panda$core$UInt32 $tmp528 = panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 48 }), $tmp527);
            panda$core$UInt8 $tmp529 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp528);
            panda$core$Char8$init$panda$core$UInt8(&$tmp526, $tmp529);
            chars507[index508.value] = $tmp526;
            panda$core$UInt32 $tmp530 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value510, ((panda$core$UInt8) { 10 }));
            panda$core$UInt8 $tmp531 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp530);
            value510 = $tmp531;
            panda$core$Int64 $tmp532 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index508, ((panda$core$Int64) { 1 }));
            index508 = $tmp532;
        }
        panda$core$Bit $tmp534 = panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(value510, ((panda$core$UInt8) { 0 }));
        bool $tmp533 = $tmp534.value;
        if ($tmp533) goto $l524;
        $l525:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp535, ((panda$core$UInt8) { 45 }));
        chars507[index508.value] = $tmp535;
    }
    }
    panda$core$Int64 $tmp537 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max506, index508);
    size536 = $tmp537;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp538, ((panda$core$Int64) { 0 }), size536, ((panda$core$Bit) { false }));
    int64_t $tmp540 = $tmp538.min.value;
    panda$core$Int64 i539 = { $tmp540 };
    int64_t $tmp542 = $tmp538.max.value;
    bool $tmp543 = $tmp538.inclusive.value;
    if ($tmp543) goto $l550; else goto $l551;
    $l550:;
    if ($tmp540 <= $tmp542) goto $l544; else goto $l546;
    $l551:;
    if ($tmp540 < $tmp542) goto $l544; else goto $l546;
    $l544:;
    {
        panda$core$Int64 $tmp552 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i539, index508);
        chars507[i539.value] = chars507[$tmp552.value];
    }
    $l547:;
    int64_t $tmp554 = $tmp542 - i539.value;
    if ($tmp543) goto $l555; else goto $l556;
    $l555:;
    if ((uint64_t) $tmp554 >= 1) goto $l553; else goto $l546;
    $l556:;
    if ((uint64_t) $tmp554 > 1) goto $l553; else goto $l546;
    $l553:;
    i539.value += 1;
    goto $l544;
    $l546:;
    panda$core$String* $tmp562 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp562, chars507, size536);
    $tmp561 = $tmp562;
    $tmp560 = $tmp561;
    $returnValue559 = $tmp560;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp560));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp561));
    return $returnValue559;
}
panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String(panda$core$UInt8 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue564;
    panda$core$String* $tmp565;
    panda$core$String* $tmp566;
    panda$core$UInt64 $tmp567 = panda$core$UInt8$convert$R$panda$core$UInt64(self);
    panda$core$String* $tmp568 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), $tmp567, ((panda$core$UInt64) { 255 }), p_fmt);
    $tmp566 = $tmp568;
    $tmp565 = $tmp566;
    $returnValue564 = $tmp565;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp565));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
    return $returnValue564;
}
void panda$core$UInt8$cleanup(panda$core$UInt8 self) {
}

