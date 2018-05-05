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
    int16_t $tmp4 = ((int16_t) self.value) + ((int16_t) p_other.value);
    panda$core$Int16 $tmp3 = ((panda$core$Int16) { $tmp4 });
    return $tmp3;
}
panda$core$Int32 panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp6 = ((int32_t) self.value) + ((int32_t) p_other.value);
    panda$core$Int32 $tmp5 = ((panda$core$Int32) { $tmp6 });
    return $tmp5;
}
panda$core$Int64 panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp8 = ((int64_t) self.value) + ((int64_t) p_other.value);
    panda$core$Int64 $tmp7 = ((panda$core$Int64) { $tmp8 });
    return $tmp7;
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp10 = ((uint32_t) self.value) + ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp9 = ((panda$core$UInt32) { $tmp10 });
    return $tmp9;
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp12 = ((uint32_t) self.value) + ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp11 = ((panda$core$UInt32) { $tmp12 });
    return $tmp11;
}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp14 = ((uint32_t) self.value) + p_other.value;
    panda$core$UInt32 $tmp13 = ((panda$core$UInt32) { $tmp14 });
    return $tmp13;
}
panda$core$UInt64 panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp16 = ((uint64_t) self.value) + p_other.value;
    panda$core$UInt64 $tmp15 = ((panda$core$UInt64) { $tmp16 });
    return $tmp15;
}
panda$core$Int16 panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int16_t $tmp18 = ((int16_t) self.value) - ((int16_t) p_other.value);
    panda$core$Int16 $tmp17 = ((panda$core$Int16) { $tmp18 });
    return $tmp17;
}
panda$core$Int32 panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp20 = ((int32_t) self.value) - ((int32_t) p_other.value);
    panda$core$Int32 $tmp19 = ((panda$core$Int32) { $tmp20 });
    return $tmp19;
}
panda$core$Int64 panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp22 = ((int64_t) self.value) - ((int64_t) p_other.value);
    panda$core$Int64 $tmp21 = ((panda$core$Int64) { $tmp22 });
    return $tmp21;
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp24 = ((uint32_t) self.value) - ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp23 = ((panda$core$UInt32) { $tmp24 });
    return $tmp23;
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp26 = ((uint32_t) self.value) - ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp25 = ((panda$core$UInt32) { $tmp26 });
    return $tmp25;
}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp28 = ((uint32_t) self.value) - p_other.value;
    panda$core$UInt32 $tmp27 = ((panda$core$UInt32) { $tmp28 });
    return $tmp27;
}
panda$core$UInt64 panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp30 = ((uint64_t) self.value) - p_other.value;
    panda$core$UInt64 $tmp29 = ((panda$core$UInt64) { $tmp30 });
    return $tmp29;
}
panda$core$UInt8 panda$core$UInt8$$SUB$R$panda$core$UInt8(panda$core$UInt8 self) {
    panda$core$UInt8 $tmp31 = ((panda$core$UInt8) { -self.value });
    return $tmp31;
}
panda$core$Int16 panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int16_t $tmp34 = ((int16_t) self.value) * ((int16_t) p_other.value);
    panda$core$Int16 $tmp33 = ((panda$core$Int16) { $tmp34 });
    return $tmp33;
}
panda$core$Int32 panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp36 = ((int32_t) self.value) * ((int32_t) p_other.value);
    panda$core$Int32 $tmp35 = ((panda$core$Int32) { $tmp36 });
    return $tmp35;
}
panda$core$Int64 panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp38 = ((int64_t) self.value) * ((int64_t) p_other.value);
    panda$core$Int64 $tmp37 = ((panda$core$Int64) { $tmp38 });
    return $tmp37;
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp40 = ((uint32_t) self.value) * ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp39 = ((panda$core$UInt32) { $tmp40 });
    return $tmp39;
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp42 = ((uint32_t) self.value) * ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp41 = ((panda$core$UInt32) { $tmp42 });
    return $tmp41;
}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp44 = ((uint32_t) self.value) * p_other.value;
    panda$core$UInt32 $tmp43 = ((panda$core$UInt32) { $tmp44 });
    return $tmp43;
}
panda$core$UInt64 panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp46 = ((uint64_t) self.value) * p_other.value;
    panda$core$UInt64 $tmp45 = ((panda$core$UInt64) { $tmp46 });
    return $tmp45;
}
panda$core$Int16 panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int16_t $tmp48 = ((int16_t) self.value) / ((int16_t) p_other.value);
    panda$core$Int16 $tmp47 = ((panda$core$Int16) { $tmp48 });
    return $tmp47;
}
panda$core$Int32 panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp50 = ((int32_t) self.value) / ((int32_t) p_other.value);
    panda$core$Int32 $tmp49 = ((panda$core$Int32) { $tmp50 });
    return $tmp49;
}
panda$core$Int64 panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp52 = ((int64_t) self.value) / ((int64_t) p_other.value);
    panda$core$Int64 $tmp51 = ((panda$core$Int64) { $tmp52 });
    return $tmp51;
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp54 = ((uint32_t) self.value) / ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp53 = ((panda$core$UInt32) { $tmp54 });
    return $tmp53;
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp56 = ((uint32_t) self.value) / ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp55 = ((panda$core$UInt32) { $tmp56 });
    return $tmp55;
}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp58 = ((uint32_t) self.value) / p_other.value;
    panda$core$UInt32 $tmp57 = ((panda$core$UInt32) { $tmp58 });
    return $tmp57;
}
panda$core$UInt64 panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp60 = ((uint64_t) self.value) / p_other.value;
    panda$core$UInt64 $tmp59 = ((panda$core$UInt64) { $tmp60 });
    return $tmp59;
}
panda$core$Int16 panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int16_t $tmp62 = ((int16_t) self.value) % ((int16_t) p_other.value);
    panda$core$Int16 $tmp61 = ((panda$core$Int16) { $tmp62 });
    return $tmp61;
}
panda$core$Int32 panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp64 = ((int32_t) self.value) % ((int32_t) p_other.value);
    panda$core$Int32 $tmp63 = ((panda$core$Int32) { $tmp64 });
    return $tmp63;
}
panda$core$Int64 panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int64_t $tmp66 = ((int64_t) self.value) % ((int64_t) p_other.value);
    panda$core$Int64 $tmp65 = ((panda$core$Int64) { $tmp66 });
    return $tmp65;
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp68 = ((uint32_t) self.value) % ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp67 = ((panda$core$UInt32) { $tmp68 });
    return $tmp67;
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp70 = ((uint32_t) self.value) % ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp69 = ((panda$core$UInt32) { $tmp70 });
    return $tmp69;
}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp72 = ((uint32_t) self.value) % p_other.value;
    panda$core$UInt32 $tmp71 = ((panda$core$UInt32) { $tmp72 });
    return $tmp71;
}
panda$core$UInt64 panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp74 = ((uint64_t) self.value) % p_other.value;
    panda$core$UInt64 $tmp73 = ((panda$core$UInt64) { $tmp74 });
    return $tmp73;
}
panda$core$UInt8 panda$core$UInt8$$BNOT$R$panda$core$UInt8(panda$core$UInt8 self) {
    panda$core$UInt8 $tmp75 = ((panda$core$UInt8) { ~self.value });
    return $tmp75;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp78 = ((int32_t) self.value) & ((int32_t) p_other.value);
    panda$core$Int32 $tmp77 = ((panda$core$Int32) { $tmp78 });
    return $tmp77;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp80 = ((int32_t) self.value) & ((int32_t) p_other.value);
    panda$core$Int32 $tmp79 = ((panda$core$Int32) { $tmp80 });
    return $tmp79;
}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp82 = ((int32_t) self.value) & p_other.value;
    panda$core$Int32 $tmp81 = ((panda$core$Int32) { $tmp82 });
    return $tmp81;
}
panda$core$Int64 panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp84 = ((int64_t) self.value) & p_other.value;
    panda$core$Int64 $tmp83 = ((panda$core$Int64) { $tmp84 });
    return $tmp83;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp86 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp85 = ((panda$core$UInt32) { $tmp86 });
    return $tmp85;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp88 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp87 = ((panda$core$UInt32) { $tmp88 });
    return $tmp87;
}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp90 = ((uint32_t) self.value) & p_other.value;
    panda$core$UInt32 $tmp89 = ((panda$core$UInt32) { $tmp90 });
    return $tmp89;
}
panda$core$UInt64 panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp92 = ((uint64_t) self.value) & p_other.value;
    panda$core$UInt64 $tmp91 = ((panda$core$UInt64) { $tmp92 });
    return $tmp91;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp94 = ((int32_t) self.value) | ((int32_t) p_other.value);
    panda$core$Int32 $tmp93 = ((panda$core$Int32) { $tmp94 });
    return $tmp93;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp96 = ((int32_t) self.value) | ((int32_t) p_other.value);
    panda$core$Int32 $tmp95 = ((panda$core$Int32) { $tmp96 });
    return $tmp95;
}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp98 = ((int32_t) self.value) | p_other.value;
    panda$core$Int32 $tmp97 = ((panda$core$Int32) { $tmp98 });
    return $tmp97;
}
panda$core$Int64 panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp100 = ((int64_t) self.value) | p_other.value;
    panda$core$Int64 $tmp99 = ((panda$core$Int64) { $tmp100 });
    return $tmp99;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp102 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp101 = ((panda$core$UInt32) { $tmp102 });
    return $tmp101;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp104 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp103 = ((panda$core$UInt32) { $tmp104 });
    return $tmp103;
}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp106 = ((uint32_t) self.value) | p_other.value;
    panda$core$UInt32 $tmp105 = ((panda$core$UInt32) { $tmp106 });
    return $tmp105;
}
panda$core$UInt64 panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp108 = ((uint64_t) self.value) | p_other.value;
    panda$core$UInt64 $tmp107 = ((panda$core$UInt64) { $tmp108 });
    return $tmp107;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp110 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    panda$core$Int32 $tmp109 = ((panda$core$Int32) { $tmp110 });
    return $tmp109;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp112 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    panda$core$Int32 $tmp111 = ((panda$core$Int32) { $tmp112 });
    return $tmp111;
}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp114 = ((int32_t) self.value) ^ p_other.value;
    panda$core$Int32 $tmp113 = ((panda$core$Int32) { $tmp114 });
    return $tmp113;
}
panda$core$Int64 panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp116 = ((int64_t) self.value) ^ p_other.value;
    panda$core$Int64 $tmp115 = ((panda$core$Int64) { $tmp116 });
    return $tmp115;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp118 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp117 = ((panda$core$UInt32) { $tmp118 });
    return $tmp117;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp120 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp119 = ((panda$core$UInt32) { $tmp120 });
    return $tmp119;
}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp122 = ((uint32_t) self.value) ^ p_other.value;
    panda$core$UInt32 $tmp121 = ((panda$core$UInt32) { $tmp122 });
    return $tmp121;
}
panda$core$UInt64 panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp124 = ((uint64_t) self.value) ^ p_other.value;
    panda$core$UInt64 $tmp123 = ((panda$core$UInt64) { $tmp124 });
    return $tmp123;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp126 = ((int32_t) self.value) << ((int32_t) p_other.value);
    panda$core$Int32 $tmp125 = ((panda$core$Int32) { $tmp126 });
    return $tmp125;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp128 = ((int32_t) self.value) << ((int32_t) p_other.value);
    panda$core$Int32 $tmp127 = ((panda$core$Int32) { $tmp128 });
    return $tmp127;
}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp130 = ((int32_t) self.value) << p_other.value;
    panda$core$Int32 $tmp129 = ((panda$core$Int32) { $tmp130 });
    return $tmp129;
}
panda$core$Int64 panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp132 = ((int64_t) self.value) << p_other.value;
    panda$core$Int64 $tmp131 = ((panda$core$Int64) { $tmp132 });
    return $tmp131;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp134 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp133 = ((panda$core$UInt32) { $tmp134 });
    return $tmp133;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp136 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp135 = ((panda$core$UInt32) { $tmp136 });
    return $tmp135;
}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp138 = ((uint32_t) self.value) << p_other.value;
    panda$core$UInt32 $tmp137 = ((panda$core$UInt32) { $tmp138 });
    return $tmp137;
}
panda$core$UInt64 panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp140 = ((uint64_t) self.value) << p_other.value;
    panda$core$UInt64 $tmp139 = ((panda$core$UInt64) { $tmp140 });
    return $tmp139;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int8 p_other) {
    int32_t $tmp142 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    panda$core$Int32 $tmp141 = ((panda$core$Int32) { $tmp142 });
    return $tmp141;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    int32_t $tmp144 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    panda$core$Int32 $tmp143 = ((panda$core$Int32) { $tmp144 });
    return $tmp143;
}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int32 p_other) {
    int32_t $tmp146 = ((int32_t) self.value) >> p_other.value;
    panda$core$Int32 $tmp145 = ((panda$core$Int32) { $tmp146 });
    return $tmp145;
}
panda$core$Int64 panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int64 p_other) {
    int64_t $tmp148 = ((int64_t) self.value) >> p_other.value;
    panda$core$Int64 $tmp147 = ((panda$core$Int64) { $tmp148 });
    return $tmp147;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp150 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp149 = ((panda$core$UInt32) { $tmp150 });
    return $tmp149;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp152 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp151 = ((panda$core$UInt32) { $tmp152 });
    return $tmp151;
}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp154 = ((uint32_t) self.value) >> p_other.value;
    panda$core$UInt32 $tmp153 = ((panda$core$UInt32) { $tmp154 });
    return $tmp153;
}
panda$core$UInt64 panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp156 = ((uint64_t) self.value) >> p_other.value;
    panda$core$UInt64 $tmp155 = ((panda$core$UInt64) { $tmp156 });
    return $tmp155;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp158 = ((int16_t) self.value) == ((int16_t) p_other.value);
    panda$core$Bit $tmp157 = ((panda$core$Bit) { $tmp158 });
    return $tmp157;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp160 = ((int32_t) self.value) == ((int32_t) p_other.value);
    panda$core$Bit $tmp159 = ((panda$core$Bit) { $tmp160 });
    return $tmp159;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp162 = ((int64_t) self.value) == ((int64_t) p_other.value);
    panda$core$Bit $tmp161 = ((panda$core$Bit) { $tmp162 });
    return $tmp161;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp164 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    panda$core$Bit $tmp163 = ((panda$core$Bit) { $tmp164 });
    return $tmp163;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp166 = ((uint32_t) self.value) == ((uint32_t) p_other.value);
    panda$core$Bit $tmp165 = ((panda$core$Bit) { $tmp166 });
    return $tmp165;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp168 = ((uint32_t) self.value) == p_other.value;
    panda$core$Bit $tmp167 = ((panda$core$Bit) { $tmp168 });
    return $tmp167;
}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp170 = ((uint64_t) self.value) == p_other.value;
    panda$core$Bit $tmp169 = ((panda$core$Bit) { $tmp170 });
    return $tmp169;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp172 = ((int16_t) self.value) != ((int16_t) p_other.value);
    panda$core$Bit $tmp171 = ((panda$core$Bit) { $tmp172 });
    return $tmp171;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp174 = ((int32_t) self.value) != ((int32_t) p_other.value);
    panda$core$Bit $tmp173 = ((panda$core$Bit) { $tmp174 });
    return $tmp173;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp176 = ((int64_t) self.value) != ((int64_t) p_other.value);
    panda$core$Bit $tmp175 = ((panda$core$Bit) { $tmp176 });
    return $tmp175;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp178 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    panda$core$Bit $tmp177 = ((panda$core$Bit) { $tmp178 });
    return $tmp177;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp180 = ((uint32_t) self.value) != ((uint32_t) p_other.value);
    panda$core$Bit $tmp179 = ((panda$core$Bit) { $tmp180 });
    return $tmp179;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp182 = ((uint32_t) self.value) != p_other.value;
    panda$core$Bit $tmp181 = ((panda$core$Bit) { $tmp182 });
    return $tmp181;
}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp184 = ((uint64_t) self.value) != p_other.value;
    panda$core$Bit $tmp183 = ((panda$core$Bit) { $tmp184 });
    return $tmp183;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp186 = ((int16_t) self.value) < ((int16_t) p_other.value);
    panda$core$Bit $tmp185 = ((panda$core$Bit) { $tmp186 });
    return $tmp185;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp188 = ((int32_t) self.value) < ((int32_t) p_other.value);
    panda$core$Bit $tmp187 = ((panda$core$Bit) { $tmp188 });
    return $tmp187;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp190 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit $tmp189 = ((panda$core$Bit) { $tmp190 });
    return $tmp189;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp192 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    panda$core$Bit $tmp191 = ((panda$core$Bit) { $tmp192 });
    return $tmp191;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp194 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    panda$core$Bit $tmp193 = ((panda$core$Bit) { $tmp194 });
    return $tmp193;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp196 = ((uint32_t) self.value) < p_other.value;
    panda$core$Bit $tmp195 = ((panda$core$Bit) { $tmp196 });
    return $tmp195;
}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp198 = ((uint64_t) self.value) < p_other.value;
    panda$core$Bit $tmp197 = ((panda$core$Bit) { $tmp198 });
    return $tmp197;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp200 = ((int16_t) self.value) > ((int16_t) p_other.value);
    panda$core$Bit $tmp199 = ((panda$core$Bit) { $tmp200 });
    return $tmp199;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp202 = ((int32_t) self.value) > ((int32_t) p_other.value);
    panda$core$Bit $tmp201 = ((panda$core$Bit) { $tmp202 });
    return $tmp201;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp204 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit $tmp203 = ((panda$core$Bit) { $tmp204 });
    return $tmp203;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp206 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    panda$core$Bit $tmp205 = ((panda$core$Bit) { $tmp206 });
    return $tmp205;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp208 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    panda$core$Bit $tmp207 = ((panda$core$Bit) { $tmp208 });
    return $tmp207;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp210 = ((uint32_t) self.value) > p_other.value;
    panda$core$Bit $tmp209 = ((panda$core$Bit) { $tmp210 });
    return $tmp209;
}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp212 = ((uint64_t) self.value) > p_other.value;
    panda$core$Bit $tmp211 = ((panda$core$Bit) { $tmp212 });
    return $tmp211;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp214 = ((int16_t) self.value) >= ((int16_t) p_other.value);
    panda$core$Bit $tmp213 = ((panda$core$Bit) { $tmp214 });
    return $tmp213;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp216 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    panda$core$Bit $tmp215 = ((panda$core$Bit) { $tmp216 });
    return $tmp215;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp218 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    panda$core$Bit $tmp217 = ((panda$core$Bit) { $tmp218 });
    return $tmp217;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp220 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    panda$core$Bit $tmp219 = ((panda$core$Bit) { $tmp220 });
    return $tmp219;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp222 = ((uint32_t) self.value) >= ((uint32_t) p_other.value);
    panda$core$Bit $tmp221 = ((panda$core$Bit) { $tmp222 });
    return $tmp221;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp224 = ((uint32_t) self.value) >= p_other.value;
    panda$core$Bit $tmp223 = ((panda$core$Bit) { $tmp224 });
    return $tmp223;
}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp226 = ((uint64_t) self.value) >= p_other.value;
    panda$core$Bit $tmp225 = ((panda$core$Bit) { $tmp226 });
    return $tmp225;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp228 = ((int16_t) self.value) <= ((int16_t) p_other.value);
    panda$core$Bit $tmp227 = ((panda$core$Bit) { $tmp228 });
    return $tmp227;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp230 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    panda$core$Bit $tmp229 = ((panda$core$Bit) { $tmp230 });
    return $tmp229;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp232 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    panda$core$Bit $tmp231 = ((panda$core$Bit) { $tmp232 });
    return $tmp231;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp234 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    panda$core$Bit $tmp233 = ((panda$core$Bit) { $tmp234 });
    return $tmp233;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp236 = ((uint32_t) self.value) <= ((uint32_t) p_other.value);
    panda$core$Bit $tmp235 = ((panda$core$Bit) { $tmp236 });
    return $tmp235;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp238 = ((uint32_t) self.value) <= p_other.value;
    panda$core$Bit $tmp237 = ((panda$core$Bit) { $tmp238 });
    return $tmp237;
}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp240 = ((uint64_t) self.value) <= p_other.value;
    panda$core$Bit $tmp239 = ((panda$core$Bit) { $tmp240 });
    return $tmp239;
}
panda$core$Int16 panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp241 = ((int16_t) self.value) < ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp241 }).value) {
    {
        panda$core$Int16 $tmp242 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $tmp242;
    }
    }
    panda$core$Int16 $tmp243 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $tmp243;
}
panda$core$Int32 panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp244 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp244 }).value) {
    {
        panda$core$Int32 $tmp245 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp245;
    }
    }
    panda$core$Int32 $tmp246 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $tmp246;
}
panda$core$Int64 panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp247 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp247 }).value) {
    {
        panda$core$Int64 $tmp248 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $tmp248;
    }
    }
    panda$core$Int64 $tmp249 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp249;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp250 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp250 }).value) {
    {
        panda$core$UInt32 $tmp251 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $tmp251;
    }
    }
    panda$core$UInt32 $tmp252 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $tmp252;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp253 = ((uint32_t) self.value) < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp253 }).value) {
    {
        panda$core$UInt32 $tmp254 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $tmp254;
    }
    }
    panda$core$UInt32 $tmp255 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $tmp255;
}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp256 = ((uint32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp256 }).value) {
    {
        panda$core$UInt32 $tmp257 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $tmp257;
    }
    }
    panda$core$UInt32 $tmp258 = ((panda$core$UInt32) { p_other.value });
    return $tmp258;
}
panda$core$UInt64 panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp259 = ((uint64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp259 }).value) {
    {
        panda$core$UInt64 $tmp260 = ((panda$core$UInt64) { ((uint64_t) self.value) });
        return $tmp260;
    }
    }
    panda$core$UInt64 $tmp261 = ((panda$core$UInt64) { p_other.value });
    return $tmp261;
}
panda$core$Int16 panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 self, panda$core$Int8 p_other) {
    bool $tmp262 = ((int16_t) self.value) > ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp262 }).value) {
    {
        panda$core$Int16 $tmp263 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $tmp263;
    }
    }
    panda$core$Int16 $tmp264 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $tmp264;
}
panda$core$Int32 panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 self, panda$core$Int16 p_other) {
    bool $tmp265 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp265 }).value) {
    {
        panda$core$Int32 $tmp266 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp266;
    }
    }
    panda$core$Int32 $tmp267 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $tmp267;
}
panda$core$Int64 panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 self, panda$core$Int32 p_other) {
    bool $tmp268 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp268 }).value) {
    {
        panda$core$Int64 $tmp269 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $tmp269;
    }
    }
    panda$core$Int64 $tmp270 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp270;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt8 p_other) {
    bool $tmp271 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp271 }).value) {
    {
        panda$core$UInt32 $tmp272 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $tmp272;
    }
    }
    panda$core$UInt32 $tmp273 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $tmp273;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt16 p_other) {
    bool $tmp274 = ((uint32_t) self.value) > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp274 }).value) {
    {
        panda$core$UInt32 $tmp275 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $tmp275;
    }
    }
    panda$core$UInt32 $tmp276 = ((panda$core$UInt32) { ((uint32_t) p_other.value) });
    return $tmp276;
}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 self, panda$core$UInt32 p_other) {
    bool $tmp277 = ((uint32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp277 }).value) {
    {
        panda$core$UInt32 $tmp278 = ((panda$core$UInt32) { ((uint32_t) self.value) });
        return $tmp278;
    }
    }
    panda$core$UInt32 $tmp279 = ((panda$core$UInt32) { p_other.value });
    return $tmp279;
}
panda$core$UInt64 panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 self, panda$core$UInt64 p_other) {
    bool $tmp280 = ((uint64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp280 }).value) {
    {
        panda$core$UInt64 $tmp281 = ((panda$core$UInt64) { ((uint64_t) self.value) });
        return $tmp281;
    }
    }
    panda$core$UInt64 $tmp282 = ((panda$core$UInt64) { p_other.value });
    return $tmp282;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp284 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp285 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp284);
    panda$core$Bit $tmp286 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp285, ((panda$core$Int32) { 0 }));
    panda$core$Bit $tmp283 = $tmp286;
    return $tmp283;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp288 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp289 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp288);
    panda$core$Bit $tmp290 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp289, ((panda$core$Int32) { 0 }));
    panda$core$Bit $tmp287 = $tmp290;
    return $tmp287;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp292 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp293 = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp292);
    panda$core$Bit $tmp294 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp293, ((panda$core$Int32) { 0 }));
    panda$core$Bit $tmp291 = $tmp294;
    return $tmp291;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp296 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp297 = panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp296);
    panda$core$Bit $tmp298 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp297, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp295 = $tmp298;
    return $tmp295;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp300 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp301 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp300);
    panda$core$Bit $tmp302 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp301, ((panda$core$UInt32) { 0 }));
    panda$core$Bit $tmp299 = $tmp302;
    return $tmp299;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp304 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp305 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp304);
    panda$core$Bit $tmp306 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp305, ((panda$core$UInt32) { 0 }));
    panda$core$Bit $tmp303 = $tmp306;
    return $tmp303;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp308 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp309 = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp308);
    panda$core$Bit $tmp310 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp309, ((panda$core$UInt32) { 0 }));
    panda$core$Bit $tmp307 = $tmp310;
    return $tmp307;
}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp312 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp313 = panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp312);
    panda$core$Bit $tmp314 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp313, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp311 = $tmp314;
    return $tmp311;
}
panda$core$Int64 panda$core$UInt8$hash$R$panda$core$Int64(panda$core$UInt8 self) {
    panda$core$Int64 $tmp315 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $tmp315;
}
panda$core$UInt8$nullable panda$core$UInt8$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt8$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result316;
    panda$core$UInt64$nullable $tmp317 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result316 = $tmp317;
    if (((panda$core$Bit) { !result316.nonnull }).value) {
    {
        panda$core$UInt8$nullable $tmp318 = ((panda$core$UInt8$nullable) { .nonnull = false });
        return $tmp318;
    }
    }
    panda$core$UInt8 $tmp320 = panda$core$UInt64$convert$R$panda$core$UInt8(((panda$core$UInt64) result316.value));
    panda$core$UInt8$nullable $tmp319 = ((panda$core$UInt8$nullable) { $tmp320, true });
    return $tmp319;
}
panda$core$Int8 panda$core$UInt8$convert$R$panda$core$Int8(panda$core$UInt8 self) {
    panda$core$Int8 $tmp321 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $tmp321;
}
panda$core$Int16 panda$core$UInt8$convert$R$panda$core$Int16(panda$core$UInt8 self) {
    panda$core$Int16 $tmp322 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $tmp322;
}
panda$core$Int32 panda$core$UInt8$convert$R$panda$core$Int32(panda$core$UInt8 self) {
    panda$core$Int32 $tmp323 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $tmp323;
}
panda$core$Int64 panda$core$UInt8$convert$R$panda$core$Int64(panda$core$UInt8 self) {
    panda$core$Int64 $tmp324 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $tmp324;
}
panda$core$UInt16 panda$core$UInt8$convert$R$panda$core$UInt16(panda$core$UInt8 self) {
    panda$core$UInt16 $tmp325 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $tmp325;
}
panda$core$UInt32 panda$core$UInt8$convert$R$panda$core$UInt32(panda$core$UInt8 self) {
    panda$core$UInt32 $tmp326 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $tmp326;
}
panda$core$UInt64 panda$core$UInt8$convert$R$panda$core$UInt64(panda$core$UInt8 self) {
    panda$core$UInt64 $tmp327 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $tmp327;
}
panda$core$Real32 panda$core$UInt8$convert$R$panda$core$Real32(panda$core$UInt8 self) {
    panda$core$Real32 $tmp328 = ((panda$core$Real32) { ((float) self.value) });
    return $tmp328;
}
panda$core$Real64 panda$core$UInt8$convert$R$panda$core$Real64(panda$core$UInt8 self) {
    panda$core$Real64 $tmp329 = ((panda$core$Real64) { ((double) self.value) });
    return $tmp329;
}
panda$core$String* panda$core$UInt8$convert$R$panda$core$String(panda$core$UInt8 self) {
    panda$core$Int64 max330;
    panda$core$Char8* chars331;
    panda$core$Int64 index332;
    panda$core$UInt8 value334;
    panda$core$Char8 $tmp338;
    panda$core$Char8 $tmp350;
    panda$core$Char8 $tmp359;
    panda$core$Int64 size360;
    panda$core$Range$LTpanda$core$Int64$GT $tmp362;
    max330 = ((panda$core$Int64) { 3 });
    chars331 = ((panda$core$Char8*) pandaZAlloc(max330.value * 1));
    panda$core$Int64 $tmp333 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max330, ((panda$core$Int64) { 1 }));
    index332 = $tmp333;
    value334 = self;
    panda$core$Bit $tmp335 = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(value334, ((panda$core$UInt8) { 0 }));
    if ($tmp335.value) {
    {
        $l336:;
        {
            panda$core$UInt32 $tmp339 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value334, ((panda$core$UInt8) { 10 }));
            panda$core$UInt32 $tmp340 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp339, ((panda$core$UInt32) { 48 }));
            panda$core$UInt8 $tmp341 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp340);
            panda$core$Char8$init$panda$core$UInt8(&$tmp338, $tmp341);
            chars331[index332.value] = $tmp338;
            panda$core$UInt32 $tmp342 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value334, ((panda$core$UInt8) { 10 }));
            panda$core$UInt8 $tmp343 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp342);
            value334 = $tmp343;
            panda$core$Int64 $tmp344 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index332, ((panda$core$Int64) { 1 }));
            index332 = $tmp344;
        }
        panda$core$Bit $tmp346 = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(value334, ((panda$core$UInt8) { 0 }));
        bool $tmp345 = $tmp346.value;
        if ($tmp345) goto $l336;
        $l337:;
        panda$core$Int64 $tmp347 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index332, ((panda$core$Int64) { 1 }));
        index332 = $tmp347;
    }
    }
    else {
    {
        $l348:;
        {
            panda$core$UInt32 $tmp351 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(value334, ((panda$core$UInt8) { 10 }));
            panda$core$UInt32 $tmp352 = panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 48 }), $tmp351);
            panda$core$UInt8 $tmp353 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp352);
            panda$core$Char8$init$panda$core$UInt8(&$tmp350, $tmp353);
            chars331[index332.value] = $tmp350;
            panda$core$UInt32 $tmp354 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(value334, ((panda$core$UInt8) { 10 }));
            panda$core$UInt8 $tmp355 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp354);
            value334 = $tmp355;
            panda$core$Int64 $tmp356 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index332, ((panda$core$Int64) { 1 }));
            index332 = $tmp356;
        }
        panda$core$Bit $tmp358 = panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(value334, ((panda$core$UInt8) { 0 }));
        bool $tmp357 = $tmp358.value;
        if ($tmp357) goto $l348;
        $l349:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp359, ((panda$core$UInt8) { 45 }));
        chars331[index332.value] = $tmp359;
    }
    }
    panda$core$Int64 $tmp361 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max330, index332);
    size360 = $tmp361;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp362, ((panda$core$Int64) { 0 }), size360, ((panda$core$Bit) { false }));
    int64_t $tmp364 = $tmp362.min.value;
    panda$core$Int64 i363 = { $tmp364 };
    int64_t $tmp366 = $tmp362.max.value;
    bool $tmp367 = $tmp362.inclusive.value;
    if ($tmp367) goto $l374; else goto $l375;
    $l374:;
    if ($tmp364 <= $tmp366) goto $l368; else goto $l370;
    $l375:;
    if ($tmp364 < $tmp366) goto $l368; else goto $l370;
    $l368:;
    {
        panda$core$Int64 $tmp376 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i363, index332);
        chars331[i363.value] = chars331[$tmp376.value];
    }
    $l371:;
    int64_t $tmp378 = $tmp366 - i363.value;
    if ($tmp367) goto $l379; else goto $l380;
    $l379:;
    if ((uint64_t) $tmp378 >= 1) goto $l377; else goto $l370;
    $l380:;
    if ((uint64_t) $tmp378 > 1) goto $l377; else goto $l370;
    $l377:;
    i363.value += 1;
    goto $l368;
    $l370:;
    panda$core$String* $tmp386 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp386, chars331, size360);
    panda$core$String* $tmp385 = $tmp386;
    panda$core$String* $tmp384 = $tmp385;
    panda$core$String* $tmp383 = $tmp384;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp384));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp385));
    return $tmp383;
}
panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String(panda$core$UInt8 self, panda$core$String* p_fmt) {
    panda$core$UInt64 $tmp390 = panda$core$UInt8$convert$R$panda$core$UInt64(self);
    panda$core$String* $tmp391 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), $tmp390, ((panda$core$UInt64) { 255 }), p_fmt);
    panda$core$String* $tmp389 = $tmp391;
    panda$core$String* $tmp388 = $tmp389;
    panda$core$String* $tmp387 = $tmp388;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp388));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp389));
    return $tmp387;
}
void panda$core$UInt8$cleanup(panda$core$UInt8 self) {
}

