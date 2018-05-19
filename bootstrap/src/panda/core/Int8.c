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
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Object.h"
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
panda$core$Int8$class_type panda$core$Int8$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int8$_panda$collections$Key, { panda$core$Int8$convert$R$panda$core$String, panda$core$Int8$cleanup, panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$ADD$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$ADD$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$ADD$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$ADD$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$ADD$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$ADD$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$SUB$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$SUB$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$SUB$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$SUB$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$SUB$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$SUB$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$SUB$R$panda$core$Int8, panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$MUL$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$MUL$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$MUL$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$MUL$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$MUL$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$MUL$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$INTDIV$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$INTDIV$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$INTDIV$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$INTDIV$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$INTDIV$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$INTDIV$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$REM$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$REM$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$REM$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$REM$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$$REM$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$$REM$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$DIV$panda$core$Int8$R$panda$core$Real32, panda$core$Int8$$DIV$panda$core$Int16$R$panda$core$Real32, panda$core$Int8$$DIV$panda$core$Int32$R$panda$core$Real32, panda$core$Int8$$DIV$panda$core$Int64$R$panda$core$Real64, panda$core$Int8$$DIV$panda$core$UInt8$R$panda$core$Real32, panda$core$Int8$$DIV$panda$core$UInt16$R$panda$core$Real32, panda$core$Int8$$DIV$panda$core$UInt32$R$panda$core$Real32, panda$core$Int8$$DIV$panda$core$UInt64$R$panda$core$Real64, panda$core$Int8$$BNOT$R$panda$core$Int8, panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$BAND$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$BAND$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$BAND$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$BOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$BOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$BOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$BOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$BOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$BXOR$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$BXOR$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$BXOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$BXOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$BXOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$SHL$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$SHL$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$SHL$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$SHL$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$SHL$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$$SHR$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$$SHR$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$$SHR$panda$core$UInt8$R$panda$core$UInt32, panda$core$Int8$$SHR$panda$core$UInt16$R$panda$core$UInt32, panda$core$Int8$$SHR$panda$core$UInt32$R$panda$core$UInt32, panda$core$Int8$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$EQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$EQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$NEQ$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$LT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$GT$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$GT$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$GE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$LE$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$abs$R$panda$core$Int8, panda$core$Int8$min$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$min$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$min$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$min$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$min$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$min$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$min$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$max$panda$core$Int8$R$panda$core$Int32, panda$core$Int8$max$panda$core$Int16$R$panda$core$Int32, panda$core$Int8$max$panda$core$Int32$R$panda$core$Int32, panda$core$Int8$max$panda$core$Int64$R$panda$core$Int64, panda$core$Int8$max$panda$core$UInt8$R$panda$core$Int16, panda$core$Int8$max$panda$core$UInt16$R$panda$core$Int32, panda$core$Int8$max$panda$core$UInt32$R$panda$core$Int64, panda$core$Int8$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$Int8$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$Int8$hash$R$panda$core$Int64, panda$core$Int8$convert$R$panda$core$Int16, panda$core$Int8$convert$R$panda$core$Int32, panda$core$Int8$convert$R$panda$core$Int64, panda$core$Int8$convert$R$panda$core$UInt8, panda$core$Int8$convert$R$panda$core$UInt16, panda$core$Int8$convert$R$panda$core$UInt32, panda$core$Int8$convert$R$panda$core$UInt64, panda$core$Int8$convert$R$panda$core$Real32, panda$core$Int8$convert$R$panda$core$Real64, panda$core$Int8$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int8$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$Int8$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int8$wrapper_panda$core$Formattable, { panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$wrappershim, panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int8$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int8$wrapper_panda$core$Equatable, { panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$wrappershim, panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$wrappershim, panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$wrappershim, panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int8$wrapper_panda$core$Comparable, { panda$core$Int8$hash$R$panda$core$Int64$wrappershim} };

static panda$core$String $s2;
panda$core$Int8$wrapperclass_type panda$core$Int8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int8$wrapper_panda$collections$Key, { panda$core$Int8$convert$R$panda$core$String$wrappershim, panda$core$Int8$cleanup$wrappershim} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

void panda$core$Int8$init$builtin_int8(panda$core$Int8* self, int8_t p_value) {
    self->value = p_value;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue3;
    int32_t $tmp4 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $returnValue3 = ((panda$core$Int32) { $tmp4 });
    return $returnValue3;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue6;
    int32_t $tmp7 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $returnValue6 = ((panda$core$Int32) { $tmp7 });
    return $returnValue6;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue9;
    int32_t $tmp10 = ((int32_t) self.value) + p_other.value;
    $returnValue9 = ((panda$core$Int32) { $tmp10 });
    return $returnValue9;
}
panda$core$Int64 panda$core$Int8$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue12;
    int64_t $tmp13 = ((int64_t) self.value) + p_other.value;
    $returnValue12 = ((panda$core$Int64) { $tmp13 });
    return $returnValue12;
}
panda$core$Int16 panda$core$Int8$$ADD$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $returnValue15;
    int16_t $tmp16 = ((int16_t) self.value) + ((int16_t) p_other.value);
    $returnValue15 = ((panda$core$Int16) { $tmp16 });
    return $returnValue15;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue18;
    int32_t $tmp19 = ((int32_t) self.value) + ((int32_t) p_other.value);
    $returnValue18 = ((panda$core$Int32) { $tmp19 });
    return $returnValue18;
}
panda$core$Int64 panda$core$Int8$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue21;
    int64_t $tmp22 = ((int64_t) self.value) + ((int64_t) p_other.value);
    $returnValue21 = ((panda$core$Int64) { $tmp22 });
    return $returnValue21;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue24;
    int32_t $tmp25 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $returnValue24 = ((panda$core$Int32) { $tmp25 });
    return $returnValue24;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue27;
    int32_t $tmp28 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $returnValue27 = ((panda$core$Int32) { $tmp28 });
    return $returnValue27;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue30;
    int32_t $tmp31 = ((int32_t) self.value) - p_other.value;
    $returnValue30 = ((panda$core$Int32) { $tmp31 });
    return $returnValue30;
}
panda$core$Int64 panda$core$Int8$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue33;
    int64_t $tmp34 = ((int64_t) self.value) - p_other.value;
    $returnValue33 = ((panda$core$Int64) { $tmp34 });
    return $returnValue33;
}
panda$core$Int16 panda$core$Int8$$SUB$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $returnValue36;
    int16_t $tmp37 = ((int16_t) self.value) - ((int16_t) p_other.value);
    $returnValue36 = ((panda$core$Int16) { $tmp37 });
    return $returnValue36;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue39;
    int32_t $tmp40 = ((int32_t) self.value) - ((int32_t) p_other.value);
    $returnValue39 = ((panda$core$Int32) { $tmp40 });
    return $returnValue39;
}
panda$core$Int64 panda$core$Int8$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue42;
    int64_t $tmp43 = ((int64_t) self.value) - ((int64_t) p_other.value);
    $returnValue42 = ((panda$core$Int64) { $tmp43 });
    return $returnValue42;
}
panda$core$Int8 panda$core$Int8$$SUB$R$panda$core$Int8(panda$core$Int8 self) {
    panda$core$Int8 $returnValue45;
    $returnValue45 = ((panda$core$Int8) { -self.value });
    return $returnValue45;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue48;
    int32_t $tmp49 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $returnValue48 = ((panda$core$Int32) { $tmp49 });
    return $returnValue48;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue51;
    int32_t $tmp52 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $returnValue51 = ((panda$core$Int32) { $tmp52 });
    return $returnValue51;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue54;
    int32_t $tmp55 = ((int32_t) self.value) * p_other.value;
    $returnValue54 = ((panda$core$Int32) { $tmp55 });
    return $returnValue54;
}
panda$core$Int64 panda$core$Int8$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue57;
    int64_t $tmp58 = ((int64_t) self.value) * p_other.value;
    $returnValue57 = ((panda$core$Int64) { $tmp58 });
    return $returnValue57;
}
panda$core$Int16 panda$core$Int8$$MUL$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $returnValue60;
    int16_t $tmp61 = ((int16_t) self.value) * ((int16_t) p_other.value);
    $returnValue60 = ((panda$core$Int16) { $tmp61 });
    return $returnValue60;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue63;
    int32_t $tmp64 = ((int32_t) self.value) * ((int32_t) p_other.value);
    $returnValue63 = ((panda$core$Int32) { $tmp64 });
    return $returnValue63;
}
panda$core$Int64 panda$core$Int8$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue66;
    int64_t $tmp67 = ((int64_t) self.value) * ((int64_t) p_other.value);
    $returnValue66 = ((panda$core$Int64) { $tmp67 });
    return $returnValue66;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue69;
    int32_t $tmp70 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $returnValue69 = ((panda$core$Int32) { $tmp70 });
    return $returnValue69;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue72;
    int32_t $tmp73 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $returnValue72 = ((panda$core$Int32) { $tmp73 });
    return $returnValue72;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue75;
    int32_t $tmp76 = ((int32_t) self.value) / p_other.value;
    $returnValue75 = ((panda$core$Int32) { $tmp76 });
    return $returnValue75;
}
panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue78;
    int64_t $tmp79 = ((int64_t) self.value) / p_other.value;
    $returnValue78 = ((panda$core$Int64) { $tmp79 });
    return $returnValue78;
}
panda$core$Int16 panda$core$Int8$$INTDIV$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $returnValue81;
    int16_t $tmp82 = ((int16_t) self.value) / ((int16_t) p_other.value);
    $returnValue81 = ((panda$core$Int16) { $tmp82 });
    return $returnValue81;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue84;
    int32_t $tmp85 = ((int32_t) self.value) / ((int32_t) p_other.value);
    $returnValue84 = ((panda$core$Int32) { $tmp85 });
    return $returnValue84;
}
panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue87;
    int64_t $tmp88 = ((int64_t) self.value) / ((int64_t) p_other.value);
    $returnValue87 = ((panda$core$Int64) { $tmp88 });
    return $returnValue87;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue90;
    int32_t $tmp91 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $returnValue90 = ((panda$core$Int32) { $tmp91 });
    return $returnValue90;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue93;
    int32_t $tmp94 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $returnValue93 = ((panda$core$Int32) { $tmp94 });
    return $returnValue93;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue96;
    int32_t $tmp97 = ((int32_t) self.value) % p_other.value;
    $returnValue96 = ((panda$core$Int32) { $tmp97 });
    return $returnValue96;
}
panda$core$Int64 panda$core$Int8$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue99;
    int64_t $tmp100 = ((int64_t) self.value) % p_other.value;
    $returnValue99 = ((panda$core$Int64) { $tmp100 });
    return $returnValue99;
}
panda$core$Int16 panda$core$Int8$$REM$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $returnValue102;
    int16_t $tmp103 = ((int16_t) self.value) % ((int16_t) p_other.value);
    $returnValue102 = ((panda$core$Int16) { $tmp103 });
    return $returnValue102;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue105;
    int32_t $tmp106 = ((int32_t) self.value) % ((int32_t) p_other.value);
    $returnValue105 = ((panda$core$Int32) { $tmp106 });
    return $returnValue105;
}
panda$core$Int64 panda$core$Int8$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue108;
    int64_t $tmp109 = ((int64_t) self.value) % ((int64_t) p_other.value);
    $returnValue108 = ((panda$core$Int64) { $tmp109 });
    return $returnValue108;
}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Real32 $returnValue111;
    float $tmp112 = ((float) self.value) / ((float) p_other.value);
    $returnValue111 = ((panda$core$Real32) { $tmp112 });
    return $returnValue111;
}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Real32 $returnValue114;
    float $tmp115 = ((float) self.value) / ((float) p_other.value);
    $returnValue114 = ((panda$core$Real32) { $tmp115 });
    return $returnValue114;
}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Real32 $returnValue117;
    float $tmp118 = ((float) self.value) / ((float) p_other.value);
    $returnValue117 = ((panda$core$Real32) { $tmp118 });
    return $returnValue117;
}
panda$core$Real64 panda$core$Int8$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Real64 $returnValue120;
    double $tmp121 = ((double) self.value) / ((double) p_other.value);
    $returnValue120 = ((panda$core$Real64) { $tmp121 });
    return $returnValue120;
}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Real32 $returnValue123;
    float $tmp124 = ((float) self.value) / ((float) p_other.value);
    $returnValue123 = ((panda$core$Real32) { $tmp124 });
    return $returnValue123;
}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Real32 $returnValue126;
    float $tmp127 = ((float) self.value) / ((float) p_other.value);
    $returnValue126 = ((panda$core$Real32) { $tmp127 });
    return $returnValue126;
}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Real32 $returnValue129;
    float $tmp130 = ((float) self.value) / ((float) p_other.value);
    $returnValue129 = ((panda$core$Real32) { $tmp130 });
    return $returnValue129;
}
panda$core$Real64 panda$core$Int8$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$Real64 $returnValue132;
    double $tmp133 = ((double) self.value) / ((double) p_other.value);
    $returnValue132 = ((panda$core$Real64) { $tmp133 });
    return $returnValue132;
}
panda$core$Int8 panda$core$Int8$$BNOT$R$panda$core$Int8(panda$core$Int8 self) {
    panda$core$Int8 $returnValue135;
    $returnValue135 = ((panda$core$Int8) { ~self.value });
    return $returnValue135;
}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue138;
    int32_t $tmp139 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $returnValue138 = ((panda$core$Int32) { $tmp139 });
    return $returnValue138;
}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue141;
    int32_t $tmp142 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $returnValue141 = ((panda$core$Int32) { $tmp142 });
    return $returnValue141;
}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue144;
    int32_t $tmp145 = ((int32_t) self.value) & p_other.value;
    $returnValue144 = ((panda$core$Int32) { $tmp145 });
    return $returnValue144;
}
panda$core$Int64 panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue147;
    int64_t $tmp148 = ((int64_t) self.value) & p_other.value;
    $returnValue147 = ((panda$core$Int64) { $tmp148 });
    return $returnValue147;
}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue150;
    uint32_t $tmp151 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $returnValue150 = ((panda$core$UInt32) { $tmp151 });
    return $returnValue150;
}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue153;
    uint32_t $tmp154 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $returnValue153 = ((panda$core$UInt32) { $tmp154 });
    return $returnValue153;
}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue156;
    uint32_t $tmp157 = ((uint32_t) self.value) & p_other.value;
    $returnValue156 = ((panda$core$UInt32) { $tmp157 });
    return $returnValue156;
}
panda$core$UInt64 panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue159;
    uint64_t $tmp160 = ((uint64_t) self.value) & p_other.value;
    $returnValue159 = ((panda$core$UInt64) { $tmp160 });
    return $returnValue159;
}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue162;
    int32_t $tmp163 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $returnValue162 = ((panda$core$Int32) { $tmp163 });
    return $returnValue162;
}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue165;
    int32_t $tmp166 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $returnValue165 = ((panda$core$Int32) { $tmp166 });
    return $returnValue165;
}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue168;
    int32_t $tmp169 = ((int32_t) self.value) | p_other.value;
    $returnValue168 = ((panda$core$Int32) { $tmp169 });
    return $returnValue168;
}
panda$core$Int64 panda$core$Int8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue171;
    int64_t $tmp172 = ((int64_t) self.value) | p_other.value;
    $returnValue171 = ((panda$core$Int64) { $tmp172 });
    return $returnValue171;
}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue174;
    uint32_t $tmp175 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $returnValue174 = ((panda$core$UInt32) { $tmp175 });
    return $returnValue174;
}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue177;
    uint32_t $tmp178 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $returnValue177 = ((panda$core$UInt32) { $tmp178 });
    return $returnValue177;
}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue180;
    uint32_t $tmp181 = ((uint32_t) self.value) | p_other.value;
    $returnValue180 = ((panda$core$UInt32) { $tmp181 });
    return $returnValue180;
}
panda$core$UInt64 panda$core$Int8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue183;
    uint64_t $tmp184 = ((uint64_t) self.value) | p_other.value;
    $returnValue183 = ((panda$core$UInt64) { $tmp184 });
    return $returnValue183;
}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue186;
    int32_t $tmp187 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $returnValue186 = ((panda$core$Int32) { $tmp187 });
    return $returnValue186;
}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue189;
    int32_t $tmp190 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $returnValue189 = ((panda$core$Int32) { $tmp190 });
    return $returnValue189;
}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue192;
    int32_t $tmp193 = ((int32_t) self.value) ^ p_other.value;
    $returnValue192 = ((panda$core$Int32) { $tmp193 });
    return $returnValue192;
}
panda$core$Int64 panda$core$Int8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue195;
    int64_t $tmp196 = ((int64_t) self.value) ^ p_other.value;
    $returnValue195 = ((panda$core$Int64) { $tmp196 });
    return $returnValue195;
}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue198;
    uint32_t $tmp199 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $returnValue198 = ((panda$core$UInt32) { $tmp199 });
    return $returnValue198;
}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue201;
    uint32_t $tmp202 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $returnValue201 = ((panda$core$UInt32) { $tmp202 });
    return $returnValue201;
}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue204;
    uint32_t $tmp205 = ((uint32_t) self.value) ^ p_other.value;
    $returnValue204 = ((panda$core$UInt32) { $tmp205 });
    return $returnValue204;
}
panda$core$UInt64 panda$core$Int8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue207;
    uint64_t $tmp208 = ((uint64_t) self.value) ^ p_other.value;
    $returnValue207 = ((panda$core$UInt64) { $tmp208 });
    return $returnValue207;
}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue210;
    int32_t $tmp211 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $returnValue210 = ((panda$core$Int32) { $tmp211 });
    return $returnValue210;
}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue213;
    int32_t $tmp214 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $returnValue213 = ((panda$core$Int32) { $tmp214 });
    return $returnValue213;
}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue216;
    int32_t $tmp217 = ((int32_t) self.value) << p_other.value;
    $returnValue216 = ((panda$core$Int32) { $tmp217 });
    return $returnValue216;
}
panda$core$Int64 panda$core$Int8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue219;
    int64_t $tmp220 = ((int64_t) self.value) << p_other.value;
    $returnValue219 = ((panda$core$Int64) { $tmp220 });
    return $returnValue219;
}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue222;
    uint32_t $tmp223 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $returnValue222 = ((panda$core$UInt32) { $tmp223 });
    return $returnValue222;
}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue225;
    uint32_t $tmp226 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $returnValue225 = ((panda$core$UInt32) { $tmp226 });
    return $returnValue225;
}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue228;
    uint32_t $tmp229 = ((uint32_t) self.value) << p_other.value;
    $returnValue228 = ((panda$core$UInt32) { $tmp229 });
    return $returnValue228;
}
panda$core$UInt64 panda$core$Int8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue231;
    uint64_t $tmp232 = ((uint64_t) self.value) << p_other.value;
    $returnValue231 = ((panda$core$UInt64) { $tmp232 });
    return $returnValue231;
}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue234;
    int32_t $tmp235 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $returnValue234 = ((panda$core$Int32) { $tmp235 });
    return $returnValue234;
}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue237;
    int32_t $tmp238 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $returnValue237 = ((panda$core$Int32) { $tmp238 });
    return $returnValue237;
}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue240;
    int32_t $tmp241 = ((int32_t) self.value) >> p_other.value;
    $returnValue240 = ((panda$core$Int32) { $tmp241 });
    return $returnValue240;
}
panda$core$Int64 panda$core$Int8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue243;
    int64_t $tmp244 = ((int64_t) self.value) >> p_other.value;
    $returnValue243 = ((panda$core$Int64) { $tmp244 });
    return $returnValue243;
}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue246;
    uint32_t $tmp247 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $returnValue246 = ((panda$core$UInt32) { $tmp247 });
    return $returnValue246;
}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue249;
    uint32_t $tmp250 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $returnValue249 = ((panda$core$UInt32) { $tmp250 });
    return $returnValue249;
}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue252;
    uint32_t $tmp253 = ((uint32_t) self.value) >> p_other.value;
    $returnValue252 = ((panda$core$UInt32) { $tmp253 });
    return $returnValue252;
}
panda$core$UInt64 panda$core$Int8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue255;
    uint64_t $tmp256 = ((uint64_t) self.value) >> p_other.value;
    $returnValue255 = ((panda$core$UInt64) { $tmp256 });
    return $returnValue255;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue258;
    bool $tmp259 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $returnValue258 = ((panda$core$Bit) { $tmp259 });
    return $returnValue258;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue261;
    bool $tmp262 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $returnValue261 = ((panda$core$Bit) { $tmp262 });
    return $returnValue261;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue264;
    bool $tmp265 = ((int32_t) self.value) == p_other.value;
    $returnValue264 = ((panda$core$Bit) { $tmp265 });
    return $returnValue264;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue267;
    bool $tmp268 = ((int64_t) self.value) == p_other.value;
    $returnValue267 = ((panda$core$Bit) { $tmp268 });
    return $returnValue267;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue270;
    bool $tmp271 = ((int16_t) self.value) == ((int16_t) p_other.value);
    $returnValue270 = ((panda$core$Bit) { $tmp271 });
    return $returnValue270;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue273;
    bool $tmp274 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $returnValue273 = ((panda$core$Bit) { $tmp274 });
    return $returnValue273;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue276;
    bool $tmp277 = ((int64_t) self.value) == ((int64_t) p_other.value);
    $returnValue276 = ((panda$core$Bit) { $tmp277 });
    return $returnValue276;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue279;
    bool $tmp280 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $returnValue279 = ((panda$core$Bit) { $tmp280 });
    return $returnValue279;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue282;
    bool $tmp283 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $returnValue282 = ((panda$core$Bit) { $tmp283 });
    return $returnValue282;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue285;
    bool $tmp286 = ((int32_t) self.value) != p_other.value;
    $returnValue285 = ((panda$core$Bit) { $tmp286 });
    return $returnValue285;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue288;
    bool $tmp289 = ((int64_t) self.value) != p_other.value;
    $returnValue288 = ((panda$core$Bit) { $tmp289 });
    return $returnValue288;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue291;
    bool $tmp292 = ((int16_t) self.value) != ((int16_t) p_other.value);
    $returnValue291 = ((panda$core$Bit) { $tmp292 });
    return $returnValue291;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue294;
    bool $tmp295 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $returnValue294 = ((panda$core$Bit) { $tmp295 });
    return $returnValue294;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue297;
    bool $tmp298 = ((int64_t) self.value) != ((int64_t) p_other.value);
    $returnValue297 = ((panda$core$Bit) { $tmp298 });
    return $returnValue297;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue300;
    bool $tmp301 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $returnValue300 = ((panda$core$Bit) { $tmp301 });
    return $returnValue300;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue303;
    bool $tmp304 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $returnValue303 = ((panda$core$Bit) { $tmp304 });
    return $returnValue303;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue306;
    bool $tmp307 = ((int32_t) self.value) < p_other.value;
    $returnValue306 = ((panda$core$Bit) { $tmp307 });
    return $returnValue306;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue309;
    bool $tmp310 = ((int64_t) self.value) < p_other.value;
    $returnValue309 = ((panda$core$Bit) { $tmp310 });
    return $returnValue309;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue312;
    bool $tmp313 = ((int16_t) self.value) < ((int16_t) p_other.value);
    $returnValue312 = ((panda$core$Bit) { $tmp313 });
    return $returnValue312;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue315;
    bool $tmp316 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $returnValue315 = ((panda$core$Bit) { $tmp316 });
    return $returnValue315;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue318;
    bool $tmp319 = ((int64_t) self.value) < ((int64_t) p_other.value);
    $returnValue318 = ((panda$core$Bit) { $tmp319 });
    return $returnValue318;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue321;
    bool $tmp322 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $returnValue321 = ((panda$core$Bit) { $tmp322 });
    return $returnValue321;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue324;
    bool $tmp325 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $returnValue324 = ((panda$core$Bit) { $tmp325 });
    return $returnValue324;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue327;
    bool $tmp328 = ((int32_t) self.value) > p_other.value;
    $returnValue327 = ((panda$core$Bit) { $tmp328 });
    return $returnValue327;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue330;
    bool $tmp331 = ((int64_t) self.value) > p_other.value;
    $returnValue330 = ((panda$core$Bit) { $tmp331 });
    return $returnValue330;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue333;
    bool $tmp334 = ((int16_t) self.value) > ((int16_t) p_other.value);
    $returnValue333 = ((panda$core$Bit) { $tmp334 });
    return $returnValue333;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue336;
    bool $tmp337 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $returnValue336 = ((panda$core$Bit) { $tmp337 });
    return $returnValue336;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue339;
    bool $tmp340 = ((int64_t) self.value) > ((int64_t) p_other.value);
    $returnValue339 = ((panda$core$Bit) { $tmp340 });
    return $returnValue339;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue342;
    bool $tmp343 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $returnValue342 = ((panda$core$Bit) { $tmp343 });
    return $returnValue342;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue345;
    bool $tmp346 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $returnValue345 = ((panda$core$Bit) { $tmp346 });
    return $returnValue345;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue348;
    bool $tmp349 = ((int32_t) self.value) >= p_other.value;
    $returnValue348 = ((panda$core$Bit) { $tmp349 });
    return $returnValue348;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue351;
    bool $tmp352 = ((int64_t) self.value) >= p_other.value;
    $returnValue351 = ((panda$core$Bit) { $tmp352 });
    return $returnValue351;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue354;
    bool $tmp355 = ((int16_t) self.value) >= ((int16_t) p_other.value);
    $returnValue354 = ((panda$core$Bit) { $tmp355 });
    return $returnValue354;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue357;
    bool $tmp358 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $returnValue357 = ((panda$core$Bit) { $tmp358 });
    return $returnValue357;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue360;
    bool $tmp361 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    $returnValue360 = ((panda$core$Bit) { $tmp361 });
    return $returnValue360;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue363;
    bool $tmp364 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $returnValue363 = ((panda$core$Bit) { $tmp364 });
    return $returnValue363;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue366;
    bool $tmp367 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $returnValue366 = ((panda$core$Bit) { $tmp367 });
    return $returnValue366;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue369;
    bool $tmp370 = ((int32_t) self.value) <= p_other.value;
    $returnValue369 = ((panda$core$Bit) { $tmp370 });
    return $returnValue369;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue372;
    bool $tmp373 = ((int64_t) self.value) <= p_other.value;
    $returnValue372 = ((panda$core$Bit) { $tmp373 });
    return $returnValue372;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue375;
    bool $tmp376 = ((int16_t) self.value) <= ((int16_t) p_other.value);
    $returnValue375 = ((panda$core$Bit) { $tmp376 });
    return $returnValue375;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue378;
    bool $tmp379 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $returnValue378 = ((panda$core$Bit) { $tmp379 });
    return $returnValue378;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue381;
    bool $tmp382 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    $returnValue381 = ((panda$core$Bit) { $tmp382 });
    return $returnValue381;
}
panda$core$Int8 panda$core$Int8$abs$R$panda$core$Int8(panda$core$Int8 self) {
    panda$core$Int8 $returnValue385;
    panda$core$Bit $tmp384 = panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8) { 0 }));
    if ($tmp384.value) {
    {
        panda$core$Int8 $tmp386 = panda$core$Int8$$SUB$R$panda$core$Int8(self);
        $returnValue385 = $tmp386;
        return $returnValue385;
    }
    }
    $returnValue385 = self;
    return $returnValue385;
}
panda$core$Int32 panda$core$Int8$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue390;
    bool $tmp389 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp389 }).value) {
    {
        $returnValue390 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue390;
    }
    }
    $returnValue390 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue390;
}
panda$core$Int32 panda$core$Int8$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue394;
    bool $tmp393 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp393 }).value) {
    {
        $returnValue394 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue394;
    }
    }
    $returnValue394 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue394;
}
panda$core$Int32 panda$core$Int8$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue398;
    bool $tmp397 = ((int32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp397 }).value) {
    {
        $returnValue398 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue398;
    }
    }
    $returnValue398 = ((panda$core$Int32) { p_other.value });
    return $returnValue398;
}
panda$core$Int64 panda$core$Int8$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue402;
    bool $tmp401 = ((int64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp401 }).value) {
    {
        $returnValue402 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue402;
    }
    }
    $returnValue402 = ((panda$core$Int64) { p_other.value });
    return $returnValue402;
}
panda$core$Int16 panda$core$Int8$min$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $returnValue406;
    bool $tmp405 = ((int16_t) self.value) < ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp405 }).value) {
    {
        $returnValue406 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $returnValue406;
    }
    }
    $returnValue406 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $returnValue406;
}
panda$core$Int32 panda$core$Int8$min$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue410;
    bool $tmp409 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp409 }).value) {
    {
        $returnValue410 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue410;
    }
    }
    $returnValue410 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue410;
}
panda$core$Int64 panda$core$Int8$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue414;
    bool $tmp413 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp413 }).value) {
    {
        $returnValue414 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue414;
    }
    }
    $returnValue414 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue414;
}
panda$core$Int32 panda$core$Int8$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue418;
    bool $tmp417 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp417 }).value) {
    {
        $returnValue418 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue418;
    }
    }
    $returnValue418 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue418;
}
panda$core$Int32 panda$core$Int8$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue422;
    bool $tmp421 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp421 }).value) {
    {
        $returnValue422 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue422;
    }
    }
    $returnValue422 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue422;
}
panda$core$Int32 panda$core$Int8$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue426;
    bool $tmp425 = ((int32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp425 }).value) {
    {
        $returnValue426 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue426;
    }
    }
    $returnValue426 = ((panda$core$Int32) { p_other.value });
    return $returnValue426;
}
panda$core$Int64 panda$core$Int8$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue430;
    bool $tmp429 = ((int64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp429 }).value) {
    {
        $returnValue430 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue430;
    }
    }
    $returnValue430 = ((panda$core$Int64) { p_other.value });
    return $returnValue430;
}
panda$core$Int16 panda$core$Int8$max$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    panda$core$Int16 $returnValue434;
    bool $tmp433 = ((int16_t) self.value) > ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp433 }).value) {
    {
        $returnValue434 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $returnValue434;
    }
    }
    $returnValue434 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $returnValue434;
}
panda$core$Int32 panda$core$Int8$max$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    panda$core$Int32 $returnValue438;
    bool $tmp437 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp437 }).value) {
    {
        $returnValue438 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue438;
    }
    }
    $returnValue438 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue438;
}
panda$core$Int64 panda$core$Int8$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue442;
    bool $tmp441 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp441 }).value) {
    {
        $returnValue442 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue442;
    }
    }
    $returnValue442 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue442;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue445;
    panda$core$Int32 $tmp446 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp447 = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp446);
    panda$core$Bit $tmp448 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp447, ((panda$core$Int32) { 0 }));
    $returnValue445 = $tmp448;
    return $returnValue445;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue450;
    panda$core$Int32 $tmp451 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp452 = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp451);
    panda$core$Bit $tmp453 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp452, ((panda$core$Int32) { 0 }));
    $returnValue450 = $tmp453;
    return $returnValue450;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue455;
    panda$core$Int32 $tmp456 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp457 = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp456);
    panda$core$Bit $tmp458 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp457, ((panda$core$Int32) { 0 }));
    $returnValue455 = $tmp458;
    return $returnValue455;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_index) {
    panda$core$Bit $returnValue460;
    panda$core$Int64 $tmp461 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp462 = panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp461);
    panda$core$Bit $tmp463 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp462, ((panda$core$Int64) { 0 }));
    $returnValue460 = $tmp463;
    return $returnValue460;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue465;
    panda$core$UInt32 $tmp466 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp467 = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp466);
    panda$core$Bit $tmp468 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp467, ((panda$core$UInt32) { 0 }));
    $returnValue465 = $tmp468;
    return $returnValue465;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue470;
    panda$core$UInt32 $tmp471 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp472 = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp471);
    panda$core$Bit $tmp473 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp472, ((panda$core$UInt32) { 0 }));
    $returnValue470 = $tmp473;
    return $returnValue470;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue475;
    panda$core$UInt32 $tmp476 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp477 = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp476);
    panda$core$Bit $tmp478 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp477, ((panda$core$UInt32) { 0 }));
    $returnValue475 = $tmp478;
    return $returnValue475;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue480;
    panda$core$UInt64 $tmp481 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp482 = panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp481);
    panda$core$Bit $tmp483 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp482, ((panda$core$UInt64) { 0 }));
    $returnValue480 = $tmp483;
    return $returnValue480;
}
panda$core$Int64 panda$core$Int8$hash$R$panda$core$Int64(panda$core$Int8 self) {
    panda$core$Int64 $returnValue485;
    $returnValue485 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue485;
}
panda$core$Int8$nullable panda$core$Int8$parse$panda$core$String$panda$core$Int64$R$panda$core$Int8$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs489;
    panda$core$String* $tmp490;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp491;
    panda$core$Int8$nullable $returnValue494;
    panda$core$UInt64$nullable result499;
    panda$core$Bit $tmp488 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s487);
    if ($tmp488.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp491, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp492 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp491);
        $tmp490 = $tmp492;
        panda$core$UInt64$nullable $tmp493 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp490, p_radix);
        abs489 = $tmp493;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
        if (((panda$core$Bit) { !abs489.nonnull }).value) {
        {
            $returnValue494 = ((panda$core$Int8$nullable) { .nonnull = false });
            return $returnValue494;
        }
        }
        panda$core$Int8 $tmp496 = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64) abs489.value));
        panda$core$Int8 $tmp497 = panda$core$Int8$$SUB$R$panda$core$Int8($tmp496);
        $returnValue494 = ((panda$core$Int8$nullable) { $tmp497, true });
        return $returnValue494;
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp500 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result499 = $tmp500;
        if (((panda$core$Bit) { !result499.nonnull }).value) {
        {
            $returnValue494 = ((panda$core$Int8$nullable) { .nonnull = false });
            return $returnValue494;
        }
        }
        panda$core$Int8 $tmp502 = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64) result499.value));
        $returnValue494 = ((panda$core$Int8$nullable) { $tmp502, true });
        return $returnValue494;
    }
    }
}
panda$core$Int16 panda$core$Int8$convert$R$panda$core$Int16(panda$core$Int8 self) {
    panda$core$Int16 $returnValue504;
    $returnValue504 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $returnValue504;
}
panda$core$Int32 panda$core$Int8$convert$R$panda$core$Int32(panda$core$Int8 self) {
    panda$core$Int32 $returnValue506;
    $returnValue506 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $returnValue506;
}
panda$core$Int64 panda$core$Int8$convert$R$panda$core$Int64(panda$core$Int8 self) {
    panda$core$Int64 $returnValue508;
    $returnValue508 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue508;
}
panda$core$UInt8 panda$core$Int8$convert$R$panda$core$UInt8(panda$core$Int8 self) {
    panda$core$UInt8 $returnValue510;
    $returnValue510 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $returnValue510;
}
panda$core$UInt16 panda$core$Int8$convert$R$panda$core$UInt16(panda$core$Int8 self) {
    panda$core$UInt16 $returnValue512;
    $returnValue512 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $returnValue512;
}
panda$core$UInt32 panda$core$Int8$convert$R$panda$core$UInt32(panda$core$Int8 self) {
    panda$core$UInt32 $returnValue514;
    $returnValue514 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $returnValue514;
}
panda$core$UInt64 panda$core$Int8$convert$R$panda$core$UInt64(panda$core$Int8 self) {
    panda$core$UInt64 $returnValue516;
    $returnValue516 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $returnValue516;
}
panda$core$Real32 panda$core$Int8$convert$R$panda$core$Real32(panda$core$Int8 self) {
    panda$core$Real32 $returnValue518;
    $returnValue518 = ((panda$core$Real32) { ((float) self.value) });
    return $returnValue518;
}
panda$core$Real64 panda$core$Int8$convert$R$panda$core$Real64(panda$core$Int8 self) {
    panda$core$Real64 $returnValue520;
    $returnValue520 = ((panda$core$Real64) { ((double) self.value) });
    return $returnValue520;
}
panda$core$String* panda$core$Int8$convert$R$panda$core$String(panda$core$Int8 self) {
    panda$core$Int64 max522;
    panda$core$Char8* chars523;
    panda$core$Int64 index524;
    panda$core$Int8 value526;
    panda$core$Char8 $tmp530;
    panda$core$Char8 $tmp542;
    panda$core$Char8 $tmp551;
    panda$core$Int64 size552;
    panda$core$Range$LTpanda$core$Int64$GT $tmp554;
    panda$core$String* $returnValue575;
    panda$core$String* $tmp576;
    panda$core$String* $tmp577;
    max522 = ((panda$core$Int64) { 4 });
    chars523 = ((panda$core$Char8*) pandaZAlloc(max522.value * 1));
    panda$core$Int64 $tmp525 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max522, ((panda$core$Int64) { 1 }));
    index524 = $tmp525;
    value526 = self;
    panda$core$Bit $tmp527 = panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(value526, ((panda$core$Int8) { 0 }));
    if ($tmp527.value) {
    {
        $l528:;
        {
            panda$core$Int32 $tmp531 = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(value526, ((panda$core$Int8) { 10 }));
            panda$core$Int32 $tmp532 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp531, ((panda$core$Int32) { 48 }));
            panda$core$UInt8 $tmp533 = panda$core$Int32$convert$R$panda$core$UInt8($tmp532);
            panda$core$Char8$init$panda$core$UInt8(&$tmp530, $tmp533);
            chars523[index524.value] = $tmp530;
            panda$core$Int32 $tmp534 = panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(value526, ((panda$core$Int8) { 10 }));
            panda$core$Int8 $tmp535 = panda$core$Int32$convert$R$panda$core$Int8($tmp534);
            value526 = $tmp535;
            panda$core$Int64 $tmp536 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index524, ((panda$core$Int64) { 1 }));
            index524 = $tmp536;
        }
        panda$core$Bit $tmp538 = panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(value526, ((panda$core$Int8) { 0 }));
        bool $tmp537 = $tmp538.value;
        if ($tmp537) goto $l528;
        $l529:;
        panda$core$Int64 $tmp539 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index524, ((panda$core$Int64) { 1 }));
        index524 = $tmp539;
    }
    }
    else {
    {
        $l540:;
        {
            panda$core$Int32 $tmp543 = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(value526, ((panda$core$Int8) { 10 }));
            panda$core$Int32 $tmp544 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 48 }), $tmp543);
            panda$core$UInt8 $tmp545 = panda$core$Int32$convert$R$panda$core$UInt8($tmp544);
            panda$core$Char8$init$panda$core$UInt8(&$tmp542, $tmp545);
            chars523[index524.value] = $tmp542;
            panda$core$Int32 $tmp546 = panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(value526, ((panda$core$Int8) { 10 }));
            panda$core$Int8 $tmp547 = panda$core$Int32$convert$R$panda$core$Int8($tmp546);
            value526 = $tmp547;
            panda$core$Int64 $tmp548 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index524, ((panda$core$Int64) { 1 }));
            index524 = $tmp548;
        }
        panda$core$Bit $tmp550 = panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(value526, ((panda$core$Int8) { 0 }));
        bool $tmp549 = $tmp550.value;
        if ($tmp549) goto $l540;
        $l541:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp551, ((panda$core$UInt8) { 45 }));
        chars523[index524.value] = $tmp551;
    }
    }
    panda$core$Int64 $tmp553 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max522, index524);
    size552 = $tmp553;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp554, ((panda$core$Int64) { 0 }), size552, ((panda$core$Bit) { false }));
    int64_t $tmp556 = $tmp554.min.value;
    panda$core$Int64 i555 = { $tmp556 };
    int64_t $tmp558 = $tmp554.max.value;
    bool $tmp559 = $tmp554.inclusive.value;
    if ($tmp559) goto $l566; else goto $l567;
    $l566:;
    if ($tmp556 <= $tmp558) goto $l560; else goto $l562;
    $l567:;
    if ($tmp556 < $tmp558) goto $l560; else goto $l562;
    $l560:;
    {
        panda$core$Int64 $tmp568 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i555, index524);
        chars523[i555.value] = chars523[$tmp568.value];
    }
    $l563:;
    int64_t $tmp570 = $tmp558 - i555.value;
    if ($tmp559) goto $l571; else goto $l572;
    $l571:;
    if ((uint64_t) $tmp570 >= 1) goto $l569; else goto $l562;
    $l572:;
    if ((uint64_t) $tmp570 > 1) goto $l569; else goto $l562;
    $l569:;
    i555.value += 1;
    goto $l560;
    $l562:;
    panda$core$String* $tmp578 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp578, chars523, size552);
    $tmp577 = $tmp578;
    $tmp576 = $tmp577;
    $returnValue575 = $tmp576;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp576));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
    return $returnValue575;
}
panda$core$String* panda$core$Int8$format$panda$core$String$R$panda$core$String(panda$core$Int8 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue580;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    bool $tmp583 = self.value < 0;
    panda$core$Int8 $tmp584 = panda$core$Int8$abs$R$panda$core$Int8(self);
    panda$core$UInt64 $tmp585 = panda$core$Int8$convert$R$panda$core$UInt64($tmp584);
    panda$core$String* $tmp586 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { $tmp583 }), $tmp585, ((panda$core$UInt64) { 255 }), p_fmt);
    $tmp582 = $tmp586;
    $tmp581 = $tmp582;
    $returnValue580 = $tmp581;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp581));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp582));
    return $returnValue580;
}
void panda$core$Int8$cleanup(panda$core$Int8 self) {
}

