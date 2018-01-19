#include "panda/core/UInt8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
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
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$UInt8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(self, ((panda$core$UInt8$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$UInt8$wrapper* self, panda$core$String* fmt) {
    return panda$core$UInt8$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Int64 panda$core$UInt8$hash$R$panda$core$Int64$wrappershim(panda$core$UInt8$wrapper* self) {
    return panda$core$UInt8$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(self->value, ((panda$core$UInt8$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$wrappershim(panda$core$UInt8$wrapper* self, panda$core$Object* other) {
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
    int16_t $tmp3 = ((int16_t) self.value) + ((int16_t) p_other.value);
    return ((panda$core$Int16) { $tmp3 });
}
panda$core$Int32 panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp4 = ((int32_t) self.value) + ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp4 });
}
panda$core$Int64 panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp5 = ((int64_t) self.value) + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp5 });
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp6 = ((uint32_t) self.value) + ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp6 });
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp7 = ((uint32_t) self.value) + ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp7 });
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp8 = ((uint32_t) self.value) + p_other.value;
    return ((panda$core$UInt32) { $tmp8 });
}
panda$core$UInt64 panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp9 = ((uint64_t) self.value) + p_other.value;
    return ((panda$core$UInt64) { $tmp9 });
}
panda$core$Int16 panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int16_t $tmp10 = ((int16_t) self.value) - ((int16_t) p_other.value);
    return ((panda$core$Int16) { $tmp10 });
}
panda$core$Int32 panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp11 = ((int32_t) self.value) - ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp11 });
}
panda$core$Int64 panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp12 = ((int64_t) self.value) - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp12 });
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp13 = ((uint32_t) self.value) - ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp13 });
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp14 = ((uint32_t) self.value) - ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp14 });
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp15 = ((uint32_t) self.value) - p_other.value;
    return ((panda$core$UInt32) { $tmp15 });
}
panda$core$UInt64 panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp16 = ((uint64_t) self.value) - p_other.value;
    return ((panda$core$UInt64) { $tmp16 });
}
panda$core$UInt8 panda$core$UInt8$$SUB$R$panda$core$UInt8(panda$core$UInt8 self) {
    return ((panda$core$UInt8) { -self.value });
}
panda$core$Int16 panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int16_t $tmp18 = ((int16_t) self.value) * ((int16_t) p_other.value);
    return ((panda$core$Int16) { $tmp18 });
}
panda$core$Int32 panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp19 = ((int32_t) self.value) * ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp19 });
}
panda$core$Int64 panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp20 = ((int64_t) self.value) * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp20 });
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp21 = ((uint32_t) self.value) * ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp21 });
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp22 = ((uint32_t) self.value) * ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp22 });
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp23 = ((uint32_t) self.value) * p_other.value;
    return ((panda$core$UInt32) { $tmp23 });
}
panda$core$UInt64 panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp24 = ((uint64_t) self.value) * p_other.value;
    return ((panda$core$UInt64) { $tmp24 });
}
panda$core$Int16 panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int16_t $tmp25 = ((int16_t) self.value) / ((int16_t) p_other.value);
    return ((panda$core$Int16) { $tmp25 });
}
panda$core$Int32 panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp26 = ((int32_t) self.value) / ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp26 });
}
panda$core$Int64 panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp27 = ((int64_t) self.value) / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp27 });
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp28 = ((uint32_t) self.value) / ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp28 });
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp29 = ((uint32_t) self.value) / ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp29 });
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp30 = ((uint32_t) self.value) / p_other.value;
    return ((panda$core$UInt32) { $tmp30 });
}
panda$core$UInt64 panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp31 = ((uint64_t) self.value) / p_other.value;
    return ((panda$core$UInt64) { $tmp31 });
}
panda$core$Int16 panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int16_t $tmp32 = ((int16_t) self.value) % ((int16_t) p_other.value);
    return ((panda$core$Int16) { $tmp32 });
}
panda$core$Int32 panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp33 = ((int32_t) self.value) % ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp33 });
}
panda$core$Int64 panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp34 = ((int64_t) self.value) % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp34 });
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp35 = ((uint32_t) self.value) % ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp35 });
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp36 = ((uint32_t) self.value) % ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp36 });
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp37 = ((uint32_t) self.value) % p_other.value;
    return ((panda$core$UInt32) { $tmp37 });
}
panda$core$UInt64 panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp38 = ((uint64_t) self.value) % p_other.value;
    return ((panda$core$UInt64) { $tmp38 });
}
panda$core$UInt8 panda$core$UInt8$$BNOT$R$panda$core$UInt8(panda$core$UInt8 self) {
    return ((panda$core$UInt8) { ~self.value });
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp40 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp40 });
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp41 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp41 });
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp42 = ((int32_t) self.value) & p_other.value;
    return ((panda$core$Int32) { $tmp42 });
}
panda$core$Int64 panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp43 = ((int64_t) self.value) & p_other.value;
    return ((panda$core$Int64) { $tmp43 });
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp44 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp44 });
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp45 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp45 });
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp46 = ((uint32_t) self.value) & p_other.value;
    return ((panda$core$UInt32) { $tmp46 });
}
panda$core$UInt64 panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp47 = ((uint64_t) self.value) & p_other.value;
    return ((panda$core$UInt64) { $tmp47 });
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp48 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp48 });
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp49 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp49 });
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp50 = ((int32_t) self.value) | p_other.value;
    return ((panda$core$Int32) { $tmp50 });
}
panda$core$Int64 panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp51 = ((int64_t) self.value) | p_other.value;
    return ((panda$core$Int64) { $tmp51 });
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp52 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp52 });
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp53 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp53 });
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp54 = ((uint32_t) self.value) | p_other.value;
    return ((panda$core$UInt32) { $tmp54 });
}
panda$core$UInt64 panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp55 = ((uint64_t) self.value) | p_other.value;
    return ((panda$core$UInt64) { $tmp55 });
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp56 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp56 });
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp57 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp57 });
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp58 = ((int32_t) self.value) ^ p_other.value;
    return ((panda$core$Int32) { $tmp58 });
}
panda$core$Int64 panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp59 = ((int64_t) self.value) ^ p_other.value;
    return ((panda$core$Int64) { $tmp59 });
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp60 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp60 });
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp61 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp61 });
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp62 = ((uint32_t) self.value) ^ p_other.value;
    return ((panda$core$UInt32) { $tmp62 });
}
panda$core$UInt64 panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp63 = ((uint64_t) self.value) ^ p_other.value;
    return ((panda$core$UInt64) { $tmp63 });
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp64 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp64 });
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp65 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp65 });
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp66 = ((int32_t) self.value) << p_other.value;
    return ((panda$core$Int32) { $tmp66 });
}
panda$core$Int64 panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp67 = ((int64_t) self.value) << p_other.value;
    return ((panda$core$Int64) { $tmp67 });
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp68 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp68 });
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp69 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp69 });
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp70 = ((uint32_t) self.value) << p_other.value;
    return ((panda$core$UInt32) { $tmp70 });
}
panda$core$UInt64 panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp71 = ((uint64_t) self.value) << p_other.value;
    return ((panda$core$UInt64) { $tmp71 });
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp72 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp72 });
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp73 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp73 });
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp74 = ((int32_t) self.value) >> p_other.value;
    return ((panda$core$Int32) { $tmp74 });
}
panda$core$Int64 panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp75 = ((int64_t) self.value) >> p_other.value;
    return ((panda$core$Int64) { $tmp75 });
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp76 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp76 });
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp77 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp77 });
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp78 = ((uint32_t) self.value) >> p_other.value;
    return ((panda$core$UInt32) { $tmp78 });
}
panda$core$UInt64 panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp79 = ((uint64_t) self.value) >> p_other.value;
    return ((panda$core$UInt64) { $tmp79 });
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp80 = ((int16_t) self.value) == ((int16_t) p_other.value);
    return ((panda$core$Bit) { $tmp80 });
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp81 = ((int32_t) self.value) == ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp81 });
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp82 = ((int64_t) self.value) == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp82 });
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp83 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp83 });
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp84 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp84 });
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp85 = ((uint32_t) self.value) == p_other.value;
    return ((panda$core$Bit) { $tmp85 });
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp86 = ((uint64_t) self.value) == p_other.value;
    return ((panda$core$Bit) { $tmp86 });
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp87 = ((int16_t) self.value) != ((int16_t) p_other.value);
    return ((panda$core$Bit) { $tmp87 });
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp88 = ((int32_t) self.value) != ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp88 });
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp89 = ((int64_t) self.value) != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp89 });
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp90 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp90 });
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp91 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp91 });
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp92 = ((uint32_t) self.value) != p_other.value;
    return ((panda$core$Bit) { $tmp92 });
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp93 = ((uint64_t) self.value) != p_other.value;
    return ((panda$core$Bit) { $tmp93 });
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp94 = ((int16_t) self.value) < ((int16_t) p_other.value);
    return ((panda$core$Bit) { $tmp94 });
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp95 = ((int32_t) self.value) < ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp95 });
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp96 = ((int64_t) self.value) < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp96 });
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp97 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp97 });
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp98 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp98 });
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp99 = ((uint32_t) self.value) < p_other.value;
    return ((panda$core$Bit) { $tmp99 });
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp100 = ((uint64_t) self.value) < p_other.value;
    return ((panda$core$Bit) { $tmp100 });
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp101 = ((int16_t) self.value) > ((int16_t) p_other.value);
    return ((panda$core$Bit) { $tmp101 });
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp102 = ((int32_t) self.value) > ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp102 });
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp103 = ((int64_t) self.value) > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp103 });
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp104 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp104 });
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp105 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp105 });
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp106 = ((uint32_t) self.value) > p_other.value;
    return ((panda$core$Bit) { $tmp106 });
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp107 = ((uint64_t) self.value) > p_other.value;
    return ((panda$core$Bit) { $tmp107 });
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp108 = ((int16_t) self.value) >= ((int16_t) p_other.value);
    return ((panda$core$Bit) { $tmp108 });
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp109 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp109 });
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp110 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp110 });
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp111 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp111 });
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp112 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp112 });
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp113 = ((uint32_t) self.value) >= p_other.value;
    return ((panda$core$Bit) { $tmp113 });
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp114 = ((uint64_t) self.value) >= p_other.value;
    return ((panda$core$Bit) { $tmp114 });
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp115 = ((int16_t) self.value) <= ((int16_t) p_other.value);
    return ((panda$core$Bit) { $tmp115 });
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp116 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    return ((panda$core$Bit) { $tmp116 });
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp117 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp117 });
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp118 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp118 });
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp119 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp119 });
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp120 = ((uint32_t) self.value) <= p_other.value;
    return ((panda$core$Bit) { $tmp120 });
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp121 = ((uint64_t) self.value) <= p_other.value;
    return ((panda$core$Bit) { $tmp121 });
}
panda$core$Int16 panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp122 = ((int16_t) self.value) < ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp122 }).value) {
    {
        return ((panda$core$Int16) { ((int16_t) self.value) });
    }
    }
    return ((panda$core$Int16) { ((int16_t) p_other.value) });
}
panda$core$Int32 panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp123 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp123 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int64 panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp124 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp124 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp125 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp125 }).value) {
    {
        return ((panda$core$UInt32) { ((uint32_t) self.value) });
    }
    }
    return ((panda$core$UInt32) { ((uint32_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp126 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp126 }).value) {
    {
        return ((panda$core$UInt32) { ((uint32_t) self.value) });
    }
    }
    return ((panda$core$UInt32) { ((uint32_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp127 = ((uint32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp127 }).value) {
    {
        return ((panda$core$UInt32) { ((uint32_t) self.value) });
    }
    }
    return ((panda$core$UInt32) { p_other.value });
}
panda$core$UInt64 panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp128 = ((uint64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp128 }).value) {
    {
        return ((panda$core$UInt64) { ((uint64_t) self.value) });
    }
    }
    return ((panda$core$UInt64) { p_other.value });
}
panda$core$Int16 panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp129 = ((int16_t) self.value) > ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp129 }).value) {
    {
        return ((panda$core$Int16) { ((int16_t) self.value) });
    }
    }
    return ((panda$core$Int16) { ((int16_t) p_other.value) });
}
panda$core$Int32 panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp130 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp130 }).value) {
    {
        return ((panda$core$Int32) { ((int32_t) self.value) });
    }
    }
    return ((panda$core$Int32) { ((int32_t) p_other.value) });
}
panda$core$Int64 panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp131 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp131 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp132 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp132 }).value) {
    {
        return ((panda$core$UInt32) { ((uint32_t) self.value) });
    }
    }
    return ((panda$core$UInt32) { ((uint32_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp133 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp133 }).value) {
    {
        return ((panda$core$UInt32) { ((uint32_t) self.value) });
    }
    }
    return ((panda$core$UInt32) { ((uint32_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp134 = ((uint32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp134 }).value) {
    {
        return ((panda$core$UInt32) { ((uint32_t) self.value) });
    }
    }
    return ((panda$core$UInt32) { p_other.value });
}
panda$core$UInt64 panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp135 = ((uint64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp135 }).value) {
    {
        return ((panda$core$UInt64) { ((uint64_t) self.value) });
    }
    }
    return ((panda$core$UInt64) { p_other.value });
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp136 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp137 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp136);
    panda$core$Bit $tmp138 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp137, ((panda$core$Int32) { 0 }));
    return $tmp138;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp139 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp140 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp139);
    panda$core$Bit $tmp141 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp140, ((panda$core$Int32) { 0 }));
    return $tmp141;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp142 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp143 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp142);
    panda$core$Bit $tmp144 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp143, ((panda$core$Int32) { 0 }));
    return $tmp144;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp145 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp146 = panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp145);
    panda$core$Bit $tmp147 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp146, ((panda$core$Int64) { 0 }));
    return $tmp147;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp148 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp149 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp148);
    panda$core$Bit $tmp150 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp149, ((panda$core$UInt32) { 0 }));
    return $tmp150;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp151 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp152 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp151);
    panda$core$Bit $tmp153 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp152, ((panda$core$UInt32) { 0 }));
    return $tmp153;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp154 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp155 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp154);
    panda$core$Bit $tmp156 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp155, ((panda$core$UInt32) { 0 }));
    return $tmp156;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp157 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp158 = panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp157);
    panda$core$Bit $tmp159 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp158, ((panda$core$UInt64) { 0 }));
    return $tmp159;
}
panda$core$Int64 panda$core$UInt8$hash$R$panda$core$Int64(panda$core$UInt8 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8$nullable panda$core$UInt8$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt8$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result160;
    panda$core$UInt64$nullable $tmp161 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result160 = $tmp161;
    if (((panda$core$Bit) { !result160.nonnull }).value) {
    {
        return ((panda$core$UInt8$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt8 $tmp162 = panda$core$UInt64$convert$R$panda$core$UInt8(((panda$core$UInt64) result160.value));
    return ((panda$core$UInt8$nullable) { $tmp162, true });
}
panda$core$Int8 panda$core$UInt8$convert$R$panda$core$Int8(panda$core$UInt8 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$UInt8$convert$R$panda$core$Int16(panda$core$UInt8 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$UInt8$convert$R$panda$core$Int32(panda$core$UInt8 self) {
    return ((panda$core$Int32) { ((int32_t) self.value) });
}
panda$core$Int64 panda$core$UInt8$convert$R$panda$core$Int64(panda$core$UInt8 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt16 panda$core$UInt8$convert$R$panda$core$UInt16(panda$core$UInt8 self) {
    return ((panda$core$UInt16) { ((uint16_t) self.value) });
}
panda$core$UInt32 panda$core$UInt8$convert$R$panda$core$UInt32(panda$core$UInt8 self) {
    return ((panda$core$UInt32) { ((uint32_t) self.value) });
}
panda$core$UInt64 panda$core$UInt8$convert$R$panda$core$UInt64(panda$core$UInt8 self) {
    return ((panda$core$UInt64) { ((uint64_t) self.value) });
}
panda$core$Real32 panda$core$UInt8$convert$R$panda$core$Real32(panda$core$UInt8 self) {
    return ((panda$core$Real32) { ((float) self.value) });
}
panda$core$Real64 panda$core$UInt8$convert$R$panda$core$Real64(panda$core$UInt8 self) {
    return ((panda$core$Real64) { ((double) self.value) });
}
panda$core$String* panda$core$UInt8$convert$R$panda$core$String(panda$core$UInt8 self) {
    panda$core$Int64 max163;
    panda$core$Char8* chars164;
    panda$core$Int64 index165;
    panda$core$UInt8 value167;
    panda$core$Char8 $tmp171;
    panda$core$Char8 $tmp182;
    panda$core$Char8 $tmp190;
    panda$core$Int64 size191;
    panda$core$Range$LTpanda$core$Int64$GT $tmp193;
    max163 = ((panda$core$Int64) { 3 });
    chars164 = ((panda$core$Char8*) pandaZAlloc(max163.value * 1));
    panda$core$Int64 $tmp166 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max163, ((panda$core$Int64) { 1 }));
    index165 = $tmp166;
    value167 = self;
    panda$core$Bit $tmp168 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(value167, ((panda$core$UInt8) { 0 }));
    if ($tmp168.value) {
    {
        $l169:;
        {
            panda$core$UInt32 $tmp172 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value167, ((panda$core$UInt8) { 10 }));
            panda$core$UInt32 $tmp173 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp172, ((panda$core$UInt32) { 48 }));
            panda$core$UInt8 $tmp174 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp173);
            panda$core$Char8$init$panda$core$UInt8(&$tmp171, $tmp174);
            chars164[index165.value] = $tmp171;
            panda$core$UInt32 $tmp175 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value167, ((panda$core$UInt8) { 10 }));
            panda$core$UInt8 $tmp176 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp175);
            value167 = $tmp176;
            panda$core$Int64 $tmp177 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index165, ((panda$core$Int64) { 1 }));
            index165 = $tmp177;
        }
        panda$core$Bit $tmp178 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(value167, ((panda$core$UInt8) { 0 }));
        if ($tmp178.value) goto $l169;
        $l170:;
        panda$core$Int64 $tmp179 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index165, ((panda$core$Int64) { 1 }));
        index165 = $tmp179;
    }
    }
    else {
    {
        $l180:;
        {
            panda$core$UInt32 $tmp183 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value167, ((panda$core$UInt8) { 10 }));
            panda$core$UInt32 $tmp184 = panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 48 }), $tmp183);
            panda$core$UInt8 $tmp185 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp184);
            panda$core$Char8$init$panda$core$UInt8(&$tmp182, $tmp185);
            chars164[index165.value] = $tmp182;
            panda$core$UInt32 $tmp186 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value167, ((panda$core$UInt8) { 10 }));
            panda$core$UInt8 $tmp187 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp186);
            value167 = $tmp187;
            panda$core$Int64 $tmp188 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index165, ((panda$core$Int64) { 1 }));
            index165 = $tmp188;
        }
        panda$core$Bit $tmp189 = panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(value167, ((panda$core$UInt8) { 0 }));
        if ($tmp189.value) goto $l180;
        $l181:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp190, ((panda$core$UInt8) { 45 }));
        chars164[index165.value] = $tmp190;
    }
    }
    panda$core$Int64 $tmp192 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max163, index165);
    size191 = $tmp192;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp193, ((panda$core$Int64) { 0 }), size191, ((panda$core$Bit) { false }));
    int64_t $tmp195 = $tmp193.min.value;
    panda$core$Int64 i194 = { $tmp195 };
    int64_t $tmp197 = $tmp193.max.value;
    bool $tmp198 = $tmp193.inclusive.value;
    if ($tmp198) goto $l205; else goto $l206;
    $l205:;
    if ($tmp195 <= $tmp197) goto $l199; else goto $l201;
    $l206:;
    if ($tmp195 < $tmp197) goto $l199; else goto $l201;
    $l199:;
    {
        panda$core$Int64 $tmp207 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i194, index165);
        chars164[i194.value] = chars164[$tmp207.value];
    }
    $l202:;
    int64_t $tmp209 = $tmp197 - i194.value;
    if ($tmp198) goto $l210; else goto $l211;
    $l210:;
    if ((uint64_t) $tmp209 >= 1) goto $l208; else goto $l201;
    $l211:;
    if ((uint64_t) $tmp209 > 1) goto $l208; else goto $l201;
    $l208:;
    i194.value += 1;
    goto $l199;
    $l201:;
    panda$core$String* $tmp214 = (panda$core$String*) pandaZAlloc(48);
    $tmp214->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp214->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp214, chars164, size191);
    return $tmp214;
}
panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String(panda$core$UInt8 self, panda$core$String* p_fmt) {
    panda$core$UInt64 $tmp216 = panda$core$UInt8$convert$R$panda$core$UInt64(self);
    panda$core$String* $tmp217 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), $tmp216, ((panda$core$UInt64) { 255 }), p_fmt);
    return $tmp217;
}
void panda$core$UInt8$cleanup(panda$core$UInt8 self) {
}

