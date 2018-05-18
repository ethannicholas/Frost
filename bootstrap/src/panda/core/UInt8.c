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
#include "panda/core/Panda.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
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
panda$core$UInt8$class_type panda$core$UInt8$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt8$_panda$core$Equatable, { panda$core$UInt8$convert$R$panda$core$String, panda$core$UInt8$cleanup, panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$SUB$R$panda$core$UInt8, panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$BNOT$R$panda$core$UInt8, panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16, panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32, panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64, panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt8$hash$R$panda$core$Int64, panda$core$UInt8$convert$R$panda$core$Int8, panda$core$UInt8$convert$R$panda$core$Int16, panda$core$UInt8$convert$R$panda$core$Int32, panda$core$UInt8$convert$R$panda$core$Int64, panda$core$UInt8$convert$R$panda$core$UInt16, panda$core$UInt8$convert$R$panda$core$UInt32, panda$core$UInt8$convert$R$panda$core$UInt64, panda$core$UInt8$convert$R$panda$core$Real32, panda$core$UInt8$convert$R$panda$core$Real64, panda$core$UInt8$format$panda$core$String$R$panda$core$String} };

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
panda$core$UInt8 panda$core$UInt8$$BNOT$R$panda$core$UInt8(panda$core$UInt8 self) {
    panda$core$UInt8 $returnValue111;
    $returnValue111 = ((panda$core$UInt8) { ~self.value });
    return $returnValue111;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue114;
    int32_t $tmp115 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $returnValue114 = ((panda$core$Int32) { $tmp115 });
    return $returnValue114;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue117;
    int32_t $tmp118 = ((int32_t) self.value) & ((int32_t) p_other.value);
    $returnValue117 = ((panda$core$Int32) { $tmp118 });
    return $returnValue117;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue120;
    int32_t $tmp121 = ((int32_t) self.value) & p_other.value;
    $returnValue120 = ((panda$core$Int32) { $tmp121 });
    return $returnValue120;
}
panda$core$Int64 panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue123;
    int64_t $tmp124 = ((int64_t) self.value) & p_other.value;
    $returnValue123 = ((panda$core$Int64) { $tmp124 });
    return $returnValue123;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue126;
    uint32_t $tmp127 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $returnValue126 = ((panda$core$UInt32) { $tmp127 });
    return $returnValue126;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue129;
    uint32_t $tmp130 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    $returnValue129 = ((panda$core$UInt32) { $tmp130 });
    return $returnValue129;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue132;
    uint32_t $tmp133 = ((uint32_t) self.value) & p_other.value;
    $returnValue132 = ((panda$core$UInt32) { $tmp133 });
    return $returnValue132;
}
panda$core$UInt64 panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue135;
    uint64_t $tmp136 = ((uint64_t) self.value) & p_other.value;
    $returnValue135 = ((panda$core$UInt64) { $tmp136 });
    return $returnValue135;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue138;
    int32_t $tmp139 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $returnValue138 = ((panda$core$Int32) { $tmp139 });
    return $returnValue138;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue141;
    int32_t $tmp142 = ((int32_t) self.value) | ((int32_t) p_other.value);
    $returnValue141 = ((panda$core$Int32) { $tmp142 });
    return $returnValue141;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue144;
    int32_t $tmp145 = ((int32_t) self.value) | p_other.value;
    $returnValue144 = ((panda$core$Int32) { $tmp145 });
    return $returnValue144;
}
panda$core$Int64 panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue147;
    int64_t $tmp148 = ((int64_t) self.value) | p_other.value;
    $returnValue147 = ((panda$core$Int64) { $tmp148 });
    return $returnValue147;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue150;
    uint32_t $tmp151 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $returnValue150 = ((panda$core$UInt32) { $tmp151 });
    return $returnValue150;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue153;
    uint32_t $tmp154 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    $returnValue153 = ((panda$core$UInt32) { $tmp154 });
    return $returnValue153;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue156;
    uint32_t $tmp157 = ((uint32_t) self.value) | p_other.value;
    $returnValue156 = ((panda$core$UInt32) { $tmp157 });
    return $returnValue156;
}
panda$core$UInt64 panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue159;
    uint64_t $tmp160 = ((uint64_t) self.value) | p_other.value;
    $returnValue159 = ((panda$core$UInt64) { $tmp160 });
    return $returnValue159;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue162;
    int32_t $tmp163 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $returnValue162 = ((panda$core$Int32) { $tmp163 });
    return $returnValue162;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue165;
    int32_t $tmp166 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    $returnValue165 = ((panda$core$Int32) { $tmp166 });
    return $returnValue165;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue168;
    int32_t $tmp169 = ((int32_t) self.value) ^ p_other.value;
    $returnValue168 = ((panda$core$Int32) { $tmp169 });
    return $returnValue168;
}
panda$core$Int64 panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue171;
    int64_t $tmp172 = ((int64_t) self.value) ^ p_other.value;
    $returnValue171 = ((panda$core$Int64) { $tmp172 });
    return $returnValue171;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue174;
    uint32_t $tmp175 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $returnValue174 = ((panda$core$UInt32) { $tmp175 });
    return $returnValue174;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue177;
    uint32_t $tmp178 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    $returnValue177 = ((panda$core$UInt32) { $tmp178 });
    return $returnValue177;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue180;
    uint32_t $tmp181 = ((uint32_t) self.value) ^ p_other.value;
    $returnValue180 = ((panda$core$UInt32) { $tmp181 });
    return $returnValue180;
}
panda$core$UInt64 panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue183;
    uint64_t $tmp184 = ((uint64_t) self.value) ^ p_other.value;
    $returnValue183 = ((panda$core$UInt64) { $tmp184 });
    return $returnValue183;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue186;
    int32_t $tmp187 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $returnValue186 = ((panda$core$Int32) { $tmp187 });
    return $returnValue186;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue189;
    int32_t $tmp190 = ((int32_t) self.value) << ((int32_t) p_other.value);
    $returnValue189 = ((panda$core$Int32) { $tmp190 });
    return $returnValue189;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue192;
    int32_t $tmp193 = ((int32_t) self.value) << p_other.value;
    $returnValue192 = ((panda$core$Int32) { $tmp193 });
    return $returnValue192;
}
panda$core$Int64 panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue195;
    int64_t $tmp196 = ((int64_t) self.value) << p_other.value;
    $returnValue195 = ((panda$core$Int64) { $tmp196 });
    return $returnValue195;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue198;
    uint32_t $tmp199 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $returnValue198 = ((panda$core$UInt32) { $tmp199 });
    return $returnValue198;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue201;
    uint32_t $tmp202 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    $returnValue201 = ((panda$core$UInt32) { $tmp202 });
    return $returnValue201;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue204;
    uint32_t $tmp205 = ((uint32_t) self.value) << p_other.value;
    $returnValue204 = ((panda$core$UInt32) { $tmp205 });
    return $returnValue204;
}
panda$core$UInt64 panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue207;
    uint64_t $tmp208 = ((uint64_t) self.value) << p_other.value;
    $returnValue207 = ((panda$core$UInt64) { $tmp208 });
    return $returnValue207;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue210;
    int32_t $tmp211 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $returnValue210 = ((panda$core$Int32) { $tmp211 });
    return $returnValue210;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue213;
    int32_t $tmp214 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    $returnValue213 = ((panda$core$Int32) { $tmp214 });
    return $returnValue213;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue216;
    int32_t $tmp217 = ((int32_t) self.value) >> p_other.value;
    $returnValue216 = ((panda$core$Int32) { $tmp217 });
    return $returnValue216;
}
panda$core$Int64 panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue219;
    int64_t $tmp220 = ((int64_t) self.value) >> p_other.value;
    $returnValue219 = ((panda$core$Int64) { $tmp220 });
    return $returnValue219;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue222;
    uint32_t $tmp223 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $returnValue222 = ((panda$core$UInt32) { $tmp223 });
    return $returnValue222;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue225;
    uint32_t $tmp226 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    $returnValue225 = ((panda$core$UInt32) { $tmp226 });
    return $returnValue225;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue228;
    uint32_t $tmp229 = ((uint32_t) self.value) >> p_other.value;
    $returnValue228 = ((panda$core$UInt32) { $tmp229 });
    return $returnValue228;
}
panda$core$UInt64 panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue231;
    uint64_t $tmp232 = ((uint64_t) self.value) >> p_other.value;
    $returnValue231 = ((panda$core$UInt64) { $tmp232 });
    return $returnValue231;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue234;
    bool $tmp235 = ((int16_t) self.value) == ((int16_t) p_other.value);
    $returnValue234 = ((panda$core$Bit) { $tmp235 });
    return $returnValue234;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue237;
    bool $tmp238 = ((int32_t) self.value) == ((int32_t) p_other.value);
    $returnValue237 = ((panda$core$Bit) { $tmp238 });
    return $returnValue237;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue240;
    bool $tmp241 = ((int64_t) self.value) == ((int64_t) p_other.value);
    $returnValue240 = ((panda$core$Bit) { $tmp241 });
    return $returnValue240;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue243;
    bool $tmp244 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    $returnValue243 = ((panda$core$Bit) { $tmp244 });
    return $returnValue243;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue246;
    bool $tmp247 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    $returnValue246 = ((panda$core$Bit) { $tmp247 });
    return $returnValue246;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue249;
    bool $tmp250 = ((uint32_t) self.value) == p_other.value;
    $returnValue249 = ((panda$core$Bit) { $tmp250 });
    return $returnValue249;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue252;
    bool $tmp253 = ((uint64_t) self.value) == p_other.value;
    $returnValue252 = ((panda$core$Bit) { $tmp253 });
    return $returnValue252;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue255;
    bool $tmp256 = ((int16_t) self.value) != ((int16_t) p_other.value);
    $returnValue255 = ((panda$core$Bit) { $tmp256 });
    return $returnValue255;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue258;
    bool $tmp259 = ((int32_t) self.value) != ((int32_t) p_other.value);
    $returnValue258 = ((panda$core$Bit) { $tmp259 });
    return $returnValue258;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue261;
    bool $tmp262 = ((int64_t) self.value) != ((int64_t) p_other.value);
    $returnValue261 = ((panda$core$Bit) { $tmp262 });
    return $returnValue261;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue264;
    bool $tmp265 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    $returnValue264 = ((panda$core$Bit) { $tmp265 });
    return $returnValue264;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue267;
    bool $tmp268 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    $returnValue267 = ((panda$core$Bit) { $tmp268 });
    return $returnValue267;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue270;
    bool $tmp271 = ((uint32_t) self.value) != p_other.value;
    $returnValue270 = ((panda$core$Bit) { $tmp271 });
    return $returnValue270;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue273;
    bool $tmp274 = ((uint64_t) self.value) != p_other.value;
    $returnValue273 = ((panda$core$Bit) { $tmp274 });
    return $returnValue273;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue276;
    bool $tmp277 = ((int16_t) self.value) < ((int16_t) p_other.value);
    $returnValue276 = ((panda$core$Bit) { $tmp277 });
    return $returnValue276;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue279;
    bool $tmp280 = ((int32_t) self.value) < ((int32_t) p_other.value);
    $returnValue279 = ((panda$core$Bit) { $tmp280 });
    return $returnValue279;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue282;
    bool $tmp283 = ((int64_t) self.value) < ((int64_t) p_other.value);
    $returnValue282 = ((panda$core$Bit) { $tmp283 });
    return $returnValue282;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue285;
    bool $tmp286 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    $returnValue285 = ((panda$core$Bit) { $tmp286 });
    return $returnValue285;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue288;
    bool $tmp289 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    $returnValue288 = ((panda$core$Bit) { $tmp289 });
    return $returnValue288;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue291;
    bool $tmp292 = ((uint32_t) self.value) < p_other.value;
    $returnValue291 = ((panda$core$Bit) { $tmp292 });
    return $returnValue291;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue294;
    bool $tmp295 = ((uint64_t) self.value) < p_other.value;
    $returnValue294 = ((panda$core$Bit) { $tmp295 });
    return $returnValue294;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue297;
    bool $tmp298 = ((int16_t) self.value) > ((int16_t) p_other.value);
    $returnValue297 = ((panda$core$Bit) { $tmp298 });
    return $returnValue297;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue300;
    bool $tmp301 = ((int32_t) self.value) > ((int32_t) p_other.value);
    $returnValue300 = ((panda$core$Bit) { $tmp301 });
    return $returnValue300;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue303;
    bool $tmp304 = ((int64_t) self.value) > ((int64_t) p_other.value);
    $returnValue303 = ((panda$core$Bit) { $tmp304 });
    return $returnValue303;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue306;
    bool $tmp307 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    $returnValue306 = ((panda$core$Bit) { $tmp307 });
    return $returnValue306;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue309;
    bool $tmp310 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    $returnValue309 = ((panda$core$Bit) { $tmp310 });
    return $returnValue309;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue312;
    bool $tmp313 = ((uint32_t) self.value) > p_other.value;
    $returnValue312 = ((panda$core$Bit) { $tmp313 });
    return $returnValue312;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue315;
    bool $tmp316 = ((uint64_t) self.value) > p_other.value;
    $returnValue315 = ((panda$core$Bit) { $tmp316 });
    return $returnValue315;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue318;
    bool $tmp319 = ((int16_t) self.value) >= ((int16_t) p_other.value);
    $returnValue318 = ((panda$core$Bit) { $tmp319 });
    return $returnValue318;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue321;
    bool $tmp322 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    $returnValue321 = ((panda$core$Bit) { $tmp322 });
    return $returnValue321;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue324;
    bool $tmp325 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    $returnValue324 = ((panda$core$Bit) { $tmp325 });
    return $returnValue324;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue327;
    bool $tmp328 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    $returnValue327 = ((panda$core$Bit) { $tmp328 });
    return $returnValue327;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue330;
    bool $tmp331 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    $returnValue330 = ((panda$core$Bit) { $tmp331 });
    return $returnValue330;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue333;
    bool $tmp334 = ((uint32_t) self.value) >= p_other.value;
    $returnValue333 = ((panda$core$Bit) { $tmp334 });
    return $returnValue333;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue336;
    bool $tmp337 = ((uint64_t) self.value) >= p_other.value;
    $returnValue336 = ((panda$core$Bit) { $tmp337 });
    return $returnValue336;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue339;
    bool $tmp340 = ((int16_t) self.value) <= ((int16_t) p_other.value);
    $returnValue339 = ((panda$core$Bit) { $tmp340 });
    return $returnValue339;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue342;
    bool $tmp343 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    $returnValue342 = ((panda$core$Bit) { $tmp343 });
    return $returnValue342;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue345;
    bool $tmp346 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    $returnValue345 = ((panda$core$Bit) { $tmp346 });
    return $returnValue345;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue348;
    bool $tmp349 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    $returnValue348 = ((panda$core$Bit) { $tmp349 });
    return $returnValue348;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue351;
    bool $tmp352 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    $returnValue351 = ((panda$core$Bit) { $tmp352 });
    return $returnValue351;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue354;
    bool $tmp355 = ((uint32_t) self.value) <= p_other.value;
    $returnValue354 = ((panda$core$Bit) { $tmp355 });
    return $returnValue354;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue357;
    bool $tmp358 = ((uint64_t) self.value) <= p_other.value;
    $returnValue357 = ((panda$core$Bit) { $tmp358 });
    return $returnValue357;
}
panda$core$Int16 panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue361;
    bool $tmp360 = ((int16_t) self.value) < ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp360 }).value) {
    {
        $returnValue361 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $returnValue361;
    }
    }
    $returnValue361 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $returnValue361;
}
panda$core$Int32 panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue365;
    bool $tmp364 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp364 }).value) {
    {
        $returnValue365 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue365;
    }
    }
    $returnValue365 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue365;
}
panda$core$Int64 panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue369;
    bool $tmp368 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp368 }).value) {
    {
        $returnValue369 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue369;
    }
    }
    $returnValue369 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue369;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue373;
    bool $tmp372 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp372 }).value) {
    {
        $returnValue373 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue373;
    }
    }
    $returnValue373 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $returnValue373;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue377;
    bool $tmp376 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp376 }).value) {
    {
        $returnValue377 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue377;
    }
    }
    $returnValue377 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $returnValue377;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue381;
    bool $tmp380 = ((uint32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp380 }).value) {
    {
        $returnValue381 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue381;
    }
    }
    $returnValue381 = ((panda$core$UInt32) { p_other.value });
    return $returnValue381;
}
panda$core$UInt64 panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue385;
    bool $tmp384 = ((uint64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp384 }).value) {
    {
        $returnValue385 = ((panda$core$UInt64) { ((uint64_t) self.value) });
        return $returnValue385;
    }
    }
    $returnValue385 = ((panda$core$UInt64) { p_other.value });
    return $returnValue385;
}
panda$core$Int16 panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    panda$core$Int16 $returnValue389;
    bool $tmp388 = ((int16_t) self.value) > ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp388 }).value) {
    {
        $returnValue389 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $returnValue389;
    }
    }
    $returnValue389 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $returnValue389;
}
panda$core$Int32 panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue393;
    bool $tmp392 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp392 }).value) {
    {
        $returnValue393 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $returnValue393;
    }
    }
    $returnValue393 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $returnValue393;
}
panda$core$Int64 panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue397;
    bool $tmp396 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp396 }).value) {
    {
        $returnValue397 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $returnValue397;
    }
    }
    $returnValue397 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $returnValue397;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue401;
    bool $tmp400 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp400 }).value) {
    {
        $returnValue401 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue401;
    }
    }
    $returnValue401 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $returnValue401;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue405;
    bool $tmp404 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp404 }).value) {
    {
        $returnValue405 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue405;
    }
    }
    $returnValue405 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $returnValue405;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue409;
    bool $tmp408 = ((uint32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp408 }).value) {
    {
        $returnValue409 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $returnValue409;
    }
    }
    $returnValue409 = ((panda$core$UInt32) { p_other.value });
    return $returnValue409;
}
panda$core$UInt64 panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue413;
    bool $tmp412 = ((uint64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp412 }).value) {
    {
        $returnValue413 = ((panda$core$UInt64) { ((uint64_t) self.value) });
        return $returnValue413;
    }
    }
    $returnValue413 = ((panda$core$UInt64) { p_other.value });
    return $returnValue413;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue416;
    panda$core$Int32 $tmp417 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp418 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp417);
    panda$core$Bit $tmp419 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp418, ((panda$core$Int32) { 0 }));
    $returnValue416 = $tmp419;
    return $returnValue416;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue421;
    panda$core$Int32 $tmp422 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp423 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp422);
    panda$core$Bit $tmp424 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp423, ((panda$core$Int32) { 0 }));
    $returnValue421 = $tmp424;
    return $returnValue421;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue426;
    panda$core$Int32 $tmp427 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp428 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp427);
    panda$core$Bit $tmp429 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp428, ((panda$core$Int32) { 0 }));
    $returnValue426 = $tmp429;
    return $returnValue426;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int64 p_index) {
    panda$core$Bit $returnValue431;
    panda$core$Int64 $tmp432 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp433 = panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp432);
    panda$core$Bit $tmp434 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp433, ((panda$core$Int64) { 0 }));
    $returnValue431 = $tmp434;
    return $returnValue431;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue436;
    panda$core$UInt32 $tmp437 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp438 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp437);
    panda$core$Bit $tmp439 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp438, ((panda$core$UInt32) { 0 }));
    $returnValue436 = $tmp439;
    return $returnValue436;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue441;
    panda$core$UInt32 $tmp442 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp443 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp442);
    panda$core$Bit $tmp444 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp443, ((panda$core$UInt32) { 0 }));
    $returnValue441 = $tmp444;
    return $returnValue441;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue446;
    panda$core$UInt32 $tmp447 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp448 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp447);
    panda$core$Bit $tmp449 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp448, ((panda$core$UInt32) { 0 }));
    $returnValue446 = $tmp449;
    return $returnValue446;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue451;
    panda$core$UInt64 $tmp452 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp453 = panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp452);
    panda$core$Bit $tmp454 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp453, ((panda$core$UInt64) { 0 }));
    $returnValue451 = $tmp454;
    return $returnValue451;
}
panda$core$Int64 panda$core$UInt8$hash$R$panda$core$Int64(panda$core$UInt8 self) {
    panda$core$Int64 $returnValue456;
    $returnValue456 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue456;
}
panda$core$UInt8$nullable panda$core$UInt8$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt8$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result458;
    panda$core$UInt8$nullable $returnValue460;
    panda$core$UInt64$nullable $tmp459 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result458 = $tmp459;
    if (((panda$core$Bit) { !result458.nonnull }).value) {
    {
        $returnValue460 = ((panda$core$UInt8$nullable) { .nonnull = false });
        return $returnValue460;
    }
    }
    panda$core$UInt8 $tmp462 = panda$core$UInt64$convert$R$panda$core$UInt8(((panda$core$UInt64) result458.value));
    $returnValue460 = ((panda$core$UInt8$nullable) { $tmp462, true });
    return $returnValue460;
}
panda$core$Int8 panda$core$UInt8$convert$R$panda$core$Int8(panda$core$UInt8 self) {
    panda$core$Int8 $returnValue464;
    $returnValue464 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $returnValue464;
}
panda$core$Int16 panda$core$UInt8$convert$R$panda$core$Int16(panda$core$UInt8 self) {
    panda$core$Int16 $returnValue466;
    $returnValue466 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $returnValue466;
}
panda$core$Int32 panda$core$UInt8$convert$R$panda$core$Int32(panda$core$UInt8 self) {
    panda$core$Int32 $returnValue468;
    $returnValue468 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $returnValue468;
}
panda$core$Int64 panda$core$UInt8$convert$R$panda$core$Int64(panda$core$UInt8 self) {
    panda$core$Int64 $returnValue470;
    $returnValue470 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue470;
}
panda$core$UInt16 panda$core$UInt8$convert$R$panda$core$UInt16(panda$core$UInt8 self) {
    panda$core$UInt16 $returnValue472;
    $returnValue472 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $returnValue472;
}
panda$core$UInt32 panda$core$UInt8$convert$R$panda$core$UInt32(panda$core$UInt8 self) {
    panda$core$UInt32 $returnValue474;
    $returnValue474 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $returnValue474;
}
panda$core$UInt64 panda$core$UInt8$convert$R$panda$core$UInt64(panda$core$UInt8 self) {
    panda$core$UInt64 $returnValue476;
    $returnValue476 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $returnValue476;
}
panda$core$Real32 panda$core$UInt8$convert$R$panda$core$Real32(panda$core$UInt8 self) {
    panda$core$Real32 $returnValue478;
    $returnValue478 = ((panda$core$Real32) { ((float) self.value) });
    return $returnValue478;
}
panda$core$Real64 panda$core$UInt8$convert$R$panda$core$Real64(panda$core$UInt8 self) {
    panda$core$Real64 $returnValue480;
    $returnValue480 = ((panda$core$Real64) { ((double) self.value) });
    return $returnValue480;
}
panda$core$String* panda$core$UInt8$convert$R$panda$core$String(panda$core$UInt8 self) {
    panda$core$Int64 max482;
    panda$core$Char8* chars483;
    panda$core$Int64 index484;
    panda$core$UInt8 value486;
    panda$core$Char8 $tmp490;
    panda$core$Char8 $tmp502;
    panda$core$Char8 $tmp511;
    panda$core$Int64 size512;
    panda$core$Range$LTpanda$core$Int64$GT $tmp514;
    panda$core$String* $returnValue535;
    panda$core$String* $tmp536;
    panda$core$String* $tmp537;
    max482 = ((panda$core$Int64) { 3 });
    chars483 = ((panda$core$Char8*) pandaZAlloc(max482.value * 1));
    panda$core$Int64 $tmp485 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max482, ((panda$core$Int64) { 1 }));
    index484 = $tmp485;
    value486 = self;
    panda$core$Bit $tmp487 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(value486, ((panda$core$UInt8) { 0 }));
    if ($tmp487.value) {
    {
        $l488:;
        {
            panda$core$UInt32 $tmp491 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value486, ((panda$core$UInt8) { 10 }));
            panda$core$UInt32 $tmp492 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp491, ((panda$core$UInt32) { 48 }));
            panda$core$UInt8 $tmp493 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp492);
            panda$core$Char8$init$panda$core$UInt8(&$tmp490, $tmp493);
            chars483[index484.value] = $tmp490;
            panda$core$UInt32 $tmp494 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value486, ((panda$core$UInt8) { 10 }));
            panda$core$UInt8 $tmp495 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp494);
            value486 = $tmp495;
            panda$core$Int64 $tmp496 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index484, ((panda$core$Int64) { 1 }));
            index484 = $tmp496;
        }
        panda$core$Bit $tmp498 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(value486, ((panda$core$UInt8) { 0 }));
        bool $tmp497 = $tmp498.value;
        if ($tmp497) goto $l488;
        $l489:;
        panda$core$Int64 $tmp499 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index484, ((panda$core$Int64) { 1 }));
        index484 = $tmp499;
    }
    }
    else {
    {
        $l500:;
        {
            panda$core$UInt32 $tmp503 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value486, ((panda$core$UInt8) { 10 }));
            panda$core$UInt32 $tmp504 = panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 48 }), $tmp503);
            panda$core$UInt8 $tmp505 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp504);
            panda$core$Char8$init$panda$core$UInt8(&$tmp502, $tmp505);
            chars483[index484.value] = $tmp502;
            panda$core$UInt32 $tmp506 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value486, ((panda$core$UInt8) { 10 }));
            panda$core$UInt8 $tmp507 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp506);
            value486 = $tmp507;
            panda$core$Int64 $tmp508 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index484, ((panda$core$Int64) { 1 }));
            index484 = $tmp508;
        }
        panda$core$Bit $tmp510 = panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(value486, ((panda$core$UInt8) { 0 }));
        bool $tmp509 = $tmp510.value;
        if ($tmp509) goto $l500;
        $l501:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp511, ((panda$core$UInt8) { 45 }));
        chars483[index484.value] = $tmp511;
    }
    }
    panda$core$Int64 $tmp513 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max482, index484);
    size512 = $tmp513;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp514, ((panda$core$Int64) { 0 }), size512, ((panda$core$Bit) { false }));
    int64_t $tmp516 = $tmp514.min.value;
    panda$core$Int64 i515 = { $tmp516 };
    int64_t $tmp518 = $tmp514.max.value;
    bool $tmp519 = $tmp514.inclusive.value;
    if ($tmp519) goto $l526; else goto $l527;
    $l526:;
    if ($tmp516 <= $tmp518) goto $l520; else goto $l522;
    $l527:;
    if ($tmp516 < $tmp518) goto $l520; else goto $l522;
    $l520:;
    {
        panda$core$Int64 $tmp528 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i515, index484);
        chars483[i515.value] = chars483[$tmp528.value];
    }
    $l523:;
    int64_t $tmp530 = $tmp518 - i515.value;
    if ($tmp519) goto $l531; else goto $l532;
    $l531:;
    if ((uint64_t) $tmp530 >= 1) goto $l529; else goto $l522;
    $l532:;
    if ((uint64_t) $tmp530 > 1) goto $l529; else goto $l522;
    $l529:;
    i515.value += 1;
    goto $l520;
    $l522:;
    panda$core$String* $tmp538 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp538, chars483, size512);
    $tmp537 = $tmp538;
    $tmp536 = $tmp537;
    $returnValue535 = $tmp536;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp536));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
    return $returnValue535;
}
panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String(panda$core$UInt8 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue540;
    panda$core$String* $tmp541;
    panda$core$String* $tmp542;
    panda$core$UInt64 $tmp543 = panda$core$UInt8$convert$R$panda$core$UInt64(self);
    panda$core$String* $tmp544 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), $tmp543, ((panda$core$UInt64) { 255 }), p_fmt);
    $tmp542 = $tmp544;
    $tmp541 = $tmp542;
    $returnValue540 = $tmp541;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
    return $returnValue540;
}
void panda$core$UInt8$cleanup(panda$core$UInt8 self) {
}

