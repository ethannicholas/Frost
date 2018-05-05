#include "panda/core/Int8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
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
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Int8 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$Int8$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$Int8$wrapper* self, panda$core$String* fmt) {
    return panda$core$Int8$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Object* other) {
    return panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Object* other) {
    return panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Object* other) {
    return panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Object* other) {
    return panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Object* other) {
    return panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(self->value, ((panda$core$Int8$wrapper*) other)->value);
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$wrappershim(panda$core$Int8$wrapper* self, panda$core$Object* other) {
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
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

void panda$core$Int8$init$builtin_int8(panda$core$Int8* self, int8_t p_value) {
    self->value = p_value;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp4 = ((int32_t) self.value) + ((int32_t) p_other.value);
    panda$core$Int32 $tmp3 = ((panda$core$Int32) { $tmp4 });
    return $tmp3;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp6 = ((int32_t) self.value) + ((int32_t) p_other.value);
    panda$core$Int32 $tmp5 = ((panda$core$Int32) { $tmp6 });
    return $tmp5;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp8 = ((int32_t) self.value) + p_other.value;
    panda$core$Int32 $tmp7 = ((panda$core$Int32) { $tmp8 });
    return $tmp7;
}
panda$core$Int64 panda$core$Int8$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp10 = ((int64_t) self.value) + p_other.value;
    panda$core$Int64 $tmp9 = ((panda$core$Int64) { $tmp10 });
    return $tmp9;
}
panda$core$Int16 panda$core$Int8$$ADD$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    int16_t $tmp12 = ((int16_t) self.value) + ((int16_t) p_other.value);
    panda$core$Int16 $tmp11 = ((panda$core$Int16) { $tmp12 });
    return $tmp11;
}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    int32_t $tmp14 = ((int32_t) self.value) + ((int32_t) p_other.value);
    panda$core$Int32 $tmp13 = ((panda$core$Int32) { $tmp14 });
    return $tmp13;
}
panda$core$Int64 panda$core$Int8$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    int64_t $tmp16 = ((int64_t) self.value) + ((int64_t) p_other.value);
    panda$core$Int64 $tmp15 = ((panda$core$Int64) { $tmp16 });
    return $tmp15;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp18 = ((int32_t) self.value) - ((int32_t) p_other.value);
    panda$core$Int32 $tmp17 = ((panda$core$Int32) { $tmp18 });
    return $tmp17;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp20 = ((int32_t) self.value) - ((int32_t) p_other.value);
    panda$core$Int32 $tmp19 = ((panda$core$Int32) { $tmp20 });
    return $tmp19;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp22 = ((int32_t) self.value) - p_other.value;
    panda$core$Int32 $tmp21 = ((panda$core$Int32) { $tmp22 });
    return $tmp21;
}
panda$core$Int64 panda$core$Int8$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp24 = ((int64_t) self.value) - p_other.value;
    panda$core$Int64 $tmp23 = ((panda$core$Int64) { $tmp24 });
    return $tmp23;
}
panda$core$Int16 panda$core$Int8$$SUB$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    int16_t $tmp26 = ((int16_t) self.value) - ((int16_t) p_other.value);
    panda$core$Int16 $tmp25 = ((panda$core$Int16) { $tmp26 });
    return $tmp25;
}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    int32_t $tmp28 = ((int32_t) self.value) - ((int32_t) p_other.value);
    panda$core$Int32 $tmp27 = ((panda$core$Int32) { $tmp28 });
    return $tmp27;
}
panda$core$Int64 panda$core$Int8$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    int64_t $tmp30 = ((int64_t) self.value) - ((int64_t) p_other.value);
    panda$core$Int64 $tmp29 = ((panda$core$Int64) { $tmp30 });
    return $tmp29;
}
panda$core$Int8 panda$core$Int8$$SUB$R$panda$core$Int8(panda$core$Int8 self) {
    panda$core$Int8 $tmp31 = ((panda$core$Int8) { -self.value });
    return $tmp31;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp34 = ((int32_t) self.value) * ((int32_t) p_other.value);
    panda$core$Int32 $tmp33 = ((panda$core$Int32) { $tmp34 });
    return $tmp33;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp36 = ((int32_t) self.value) * ((int32_t) p_other.value);
    panda$core$Int32 $tmp35 = ((panda$core$Int32) { $tmp36 });
    return $tmp35;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp38 = ((int32_t) self.value) * p_other.value;
    panda$core$Int32 $tmp37 = ((panda$core$Int32) { $tmp38 });
    return $tmp37;
}
panda$core$Int64 panda$core$Int8$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp40 = ((int64_t) self.value) * p_other.value;
    panda$core$Int64 $tmp39 = ((panda$core$Int64) { $tmp40 });
    return $tmp39;
}
panda$core$Int16 panda$core$Int8$$MUL$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    int16_t $tmp42 = ((int16_t) self.value) * ((int16_t) p_other.value);
    panda$core$Int16 $tmp41 = ((panda$core$Int16) { $tmp42 });
    return $tmp41;
}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    int32_t $tmp44 = ((int32_t) self.value) * ((int32_t) p_other.value);
    panda$core$Int32 $tmp43 = ((panda$core$Int32) { $tmp44 });
    return $tmp43;
}
panda$core$Int64 panda$core$Int8$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    int64_t $tmp46 = ((int64_t) self.value) * ((int64_t) p_other.value);
    panda$core$Int64 $tmp45 = ((panda$core$Int64) { $tmp46 });
    return $tmp45;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp48 = ((int32_t) self.value) / ((int32_t) p_other.value);
    panda$core$Int32 $tmp47 = ((panda$core$Int32) { $tmp48 });
    return $tmp47;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp50 = ((int32_t) self.value) / ((int32_t) p_other.value);
    panda$core$Int32 $tmp49 = ((panda$core$Int32) { $tmp50 });
    return $tmp49;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp52 = ((int32_t) self.value) / p_other.value;
    panda$core$Int32 $tmp51 = ((panda$core$Int32) { $tmp52 });
    return $tmp51;
}
panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp54 = ((int64_t) self.value) / p_other.value;
    panda$core$Int64 $tmp53 = ((panda$core$Int64) { $tmp54 });
    return $tmp53;
}
panda$core$Int16 panda$core$Int8$$INTDIV$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    int16_t $tmp56 = ((int16_t) self.value) / ((int16_t) p_other.value);
    panda$core$Int16 $tmp55 = ((panda$core$Int16) { $tmp56 });
    return $tmp55;
}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    int32_t $tmp58 = ((int32_t) self.value) / ((int32_t) p_other.value);
    panda$core$Int32 $tmp57 = ((panda$core$Int32) { $tmp58 });
    return $tmp57;
}
panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    int64_t $tmp60 = ((int64_t) self.value) / ((int64_t) p_other.value);
    panda$core$Int64 $tmp59 = ((panda$core$Int64) { $tmp60 });
    return $tmp59;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp62 = ((int32_t) self.value) % ((int32_t) p_other.value);
    panda$core$Int32 $tmp61 = ((panda$core$Int32) { $tmp62 });
    return $tmp61;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp64 = ((int32_t) self.value) % ((int32_t) p_other.value);
    panda$core$Int32 $tmp63 = ((panda$core$Int32) { $tmp64 });
    return $tmp63;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp66 = ((int32_t) self.value) % p_other.value;
    panda$core$Int32 $tmp65 = ((panda$core$Int32) { $tmp66 });
    return $tmp65;
}
panda$core$Int64 panda$core$Int8$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp68 = ((int64_t) self.value) % p_other.value;
    panda$core$Int64 $tmp67 = ((panda$core$Int64) { $tmp68 });
    return $tmp67;
}
panda$core$Int16 panda$core$Int8$$REM$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    int16_t $tmp70 = ((int16_t) self.value) % ((int16_t) p_other.value);
    panda$core$Int16 $tmp69 = ((panda$core$Int16) { $tmp70 });
    return $tmp69;
}
panda$core$Int32 panda$core$Int8$$REM$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    int32_t $tmp72 = ((int32_t) self.value) % ((int32_t) p_other.value);
    panda$core$Int32 $tmp71 = ((panda$core$Int32) { $tmp72 });
    return $tmp71;
}
panda$core$Int64 panda$core$Int8$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    int64_t $tmp74 = ((int64_t) self.value) % ((int64_t) p_other.value);
    panda$core$Int64 $tmp73 = ((panda$core$Int64) { $tmp74 });
    return $tmp73;
}
panda$core$Int8 panda$core$Int8$$BNOT$R$panda$core$Int8(panda$core$Int8 self) {
    panda$core$Int8 $tmp75 = ((panda$core$Int8) { ~self.value });
    return $tmp75;
}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp78 = ((int32_t) self.value) & ((int32_t) p_other.value);
    panda$core$Int32 $tmp77 = ((panda$core$Int32) { $tmp78 });
    return $tmp77;
}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp80 = ((int32_t) self.value) & ((int32_t) p_other.value);
    panda$core$Int32 $tmp79 = ((panda$core$Int32) { $tmp80 });
    return $tmp79;
}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp82 = ((int32_t) self.value) & p_other.value;
    panda$core$Int32 $tmp81 = ((panda$core$Int32) { $tmp82 });
    return $tmp81;
}
panda$core$Int64 panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp84 = ((int64_t) self.value) & p_other.value;
    panda$core$Int64 $tmp83 = ((panda$core$Int64) { $tmp84 });
    return $tmp83;
}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp86 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp85 = ((panda$core$UInt32) { $tmp86 });
    return $tmp85;
}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp88 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp87 = ((panda$core$UInt32) { $tmp88 });
    return $tmp87;
}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp90 = ((uint32_t) self.value) & p_other.value;
    panda$core$UInt32 $tmp89 = ((panda$core$UInt32) { $tmp90 });
    return $tmp89;
}
panda$core$UInt64 panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp92 = ((uint64_t) self.value) & p_other.value;
    panda$core$UInt64 $tmp91 = ((panda$core$UInt64) { $tmp92 });
    return $tmp91;
}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp94 = ((int32_t) self.value) | ((int32_t) p_other.value);
    panda$core$Int32 $tmp93 = ((panda$core$Int32) { $tmp94 });
    return $tmp93;
}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp96 = ((int32_t) self.value) | ((int32_t) p_other.value);
    panda$core$Int32 $tmp95 = ((panda$core$Int32) { $tmp96 });
    return $tmp95;
}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp98 = ((int32_t) self.value) | p_other.value;
    panda$core$Int32 $tmp97 = ((panda$core$Int32) { $tmp98 });
    return $tmp97;
}
panda$core$Int64 panda$core$Int8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp100 = ((int64_t) self.value) | p_other.value;
    panda$core$Int64 $tmp99 = ((panda$core$Int64) { $tmp100 });
    return $tmp99;
}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp102 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp101 = ((panda$core$UInt32) { $tmp102 });
    return $tmp101;
}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp104 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp103 = ((panda$core$UInt32) { $tmp104 });
    return $tmp103;
}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp106 = ((uint32_t) self.value) | p_other.value;
    panda$core$UInt32 $tmp105 = ((panda$core$UInt32) { $tmp106 });
    return $tmp105;
}
panda$core$UInt64 panda$core$Int8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp108 = ((uint64_t) self.value) | p_other.value;
    panda$core$UInt64 $tmp107 = ((panda$core$UInt64) { $tmp108 });
    return $tmp107;
}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp110 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    panda$core$Int32 $tmp109 = ((panda$core$Int32) { $tmp110 });
    return $tmp109;
}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp112 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    panda$core$Int32 $tmp111 = ((panda$core$Int32) { $tmp112 });
    return $tmp111;
}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp114 = ((int32_t) self.value) ^ p_other.value;
    panda$core$Int32 $tmp113 = ((panda$core$Int32) { $tmp114 });
    return $tmp113;
}
panda$core$Int64 panda$core$Int8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp116 = ((int64_t) self.value) ^ p_other.value;
    panda$core$Int64 $tmp115 = ((panda$core$Int64) { $tmp116 });
    return $tmp115;
}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp118 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp117 = ((panda$core$UInt32) { $tmp118 });
    return $tmp117;
}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp120 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp119 = ((panda$core$UInt32) { $tmp120 });
    return $tmp119;
}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp122 = ((uint32_t) self.value) ^ p_other.value;
    panda$core$UInt32 $tmp121 = ((panda$core$UInt32) { $tmp122 });
    return $tmp121;
}
panda$core$UInt64 panda$core$Int8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp124 = ((uint64_t) self.value) ^ p_other.value;
    panda$core$UInt64 $tmp123 = ((panda$core$UInt64) { $tmp124 });
    return $tmp123;
}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp126 = ((int32_t) self.value) << ((int32_t) p_other.value);
    panda$core$Int32 $tmp125 = ((panda$core$Int32) { $tmp126 });
    return $tmp125;
}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp128 = ((int32_t) self.value) << ((int32_t) p_other.value);
    panda$core$Int32 $tmp127 = ((panda$core$Int32) { $tmp128 });
    return $tmp127;
}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp130 = ((int32_t) self.value) << p_other.value;
    panda$core$Int32 $tmp129 = ((panda$core$Int32) { $tmp130 });
    return $tmp129;
}
panda$core$Int64 panda$core$Int8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp132 = ((int64_t) self.value) << p_other.value;
    panda$core$Int64 $tmp131 = ((panda$core$Int64) { $tmp132 });
    return $tmp131;
}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp134 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp133 = ((panda$core$UInt32) { $tmp134 });
    return $tmp133;
}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp136 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp135 = ((panda$core$UInt32) { $tmp136 });
    return $tmp135;
}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp138 = ((uint32_t) self.value) << p_other.value;
    panda$core$UInt32 $tmp137 = ((panda$core$UInt32) { $tmp138 });
    return $tmp137;
}
panda$core$UInt64 panda$core$Int8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp140 = ((uint64_t) self.value) << p_other.value;
    panda$core$UInt64 $tmp139 = ((panda$core$UInt64) { $tmp140 });
    return $tmp139;
}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    int32_t $tmp142 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    panda$core$Int32 $tmp141 = ((panda$core$Int32) { $tmp142 });
    return $tmp141;
}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    int32_t $tmp144 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    panda$core$Int32 $tmp143 = ((panda$core$Int32) { $tmp144 });
    return $tmp143;
}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    int32_t $tmp146 = ((int32_t) self.value) >> p_other.value;
    panda$core$Int32 $tmp145 = ((panda$core$Int32) { $tmp146 });
    return $tmp145;
}
panda$core$Int64 panda$core$Int8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    int64_t $tmp148 = ((int64_t) self.value) >> p_other.value;
    panda$core$Int64 $tmp147 = ((panda$core$Int64) { $tmp148 });
    return $tmp147;
}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt8 p_other) {
    uint32_t $tmp150 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp149 = ((panda$core$UInt32) { $tmp150 });
    return $tmp149;
}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    uint32_t $tmp152 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    panda$core$UInt32 $tmp151 = ((panda$core$UInt32) { $tmp152 });
    return $tmp151;
}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 self, panda$core$UInt32 p_other) {
    uint32_t $tmp154 = ((uint32_t) self.value) >> p_other.value;
    panda$core$UInt32 $tmp153 = ((panda$core$UInt32) { $tmp154 });
    return $tmp153;
}
panda$core$UInt64 panda$core$Int8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 self, panda$core$UInt64 p_other) {
    uint64_t $tmp156 = ((uint64_t) self.value) >> p_other.value;
    panda$core$UInt64 $tmp155 = ((panda$core$UInt64) { $tmp156 });
    return $tmp155;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    bool $tmp158 = ((int32_t) self.value) == ((int32_t) p_other.value);
    panda$core$Bit $tmp157 = ((panda$core$Bit) { $tmp158 });
    return $tmp157;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    bool $tmp160 = ((int32_t) self.value) == ((int32_t) p_other.value);
    panda$core$Bit $tmp159 = ((panda$core$Bit) { $tmp160 });
    return $tmp159;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    bool $tmp162 = ((int32_t) self.value) == p_other.value;
    panda$core$Bit $tmp161 = ((panda$core$Bit) { $tmp162 });
    return $tmp161;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    bool $tmp164 = ((int64_t) self.value) == p_other.value;
    panda$core$Bit $tmp163 = ((panda$core$Bit) { $tmp164 });
    return $tmp163;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    bool $tmp166 = ((int16_t) self.value) == ((int16_t) p_other.value);
    panda$core$Bit $tmp165 = ((panda$core$Bit) { $tmp166 });
    return $tmp165;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    bool $tmp168 = ((int32_t) self.value) == ((int32_t) p_other.value);
    panda$core$Bit $tmp167 = ((panda$core$Bit) { $tmp168 });
    return $tmp167;
}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    bool $tmp170 = ((int64_t) self.value) == ((int64_t) p_other.value);
    panda$core$Bit $tmp169 = ((panda$core$Bit) { $tmp170 });
    return $tmp169;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    bool $tmp172 = ((int32_t) self.value) != ((int32_t) p_other.value);
    panda$core$Bit $tmp171 = ((panda$core$Bit) { $tmp172 });
    return $tmp171;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    bool $tmp174 = ((int32_t) self.value) != ((int32_t) p_other.value);
    panda$core$Bit $tmp173 = ((panda$core$Bit) { $tmp174 });
    return $tmp173;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    bool $tmp176 = ((int32_t) self.value) != p_other.value;
    panda$core$Bit $tmp175 = ((panda$core$Bit) { $tmp176 });
    return $tmp175;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    bool $tmp178 = ((int64_t) self.value) != p_other.value;
    panda$core$Bit $tmp177 = ((panda$core$Bit) { $tmp178 });
    return $tmp177;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    bool $tmp180 = ((int16_t) self.value) != ((int16_t) p_other.value);
    panda$core$Bit $tmp179 = ((panda$core$Bit) { $tmp180 });
    return $tmp179;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    bool $tmp182 = ((int32_t) self.value) != ((int32_t) p_other.value);
    panda$core$Bit $tmp181 = ((panda$core$Bit) { $tmp182 });
    return $tmp181;
}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    bool $tmp184 = ((int64_t) self.value) != ((int64_t) p_other.value);
    panda$core$Bit $tmp183 = ((panda$core$Bit) { $tmp184 });
    return $tmp183;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    bool $tmp186 = ((int32_t) self.value) < ((int32_t) p_other.value);
    panda$core$Bit $tmp185 = ((panda$core$Bit) { $tmp186 });
    return $tmp185;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    bool $tmp188 = ((int32_t) self.value) < ((int32_t) p_other.value);
    panda$core$Bit $tmp187 = ((panda$core$Bit) { $tmp188 });
    return $tmp187;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    bool $tmp190 = ((int32_t) self.value) < p_other.value;
    panda$core$Bit $tmp189 = ((panda$core$Bit) { $tmp190 });
    return $tmp189;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    bool $tmp192 = ((int64_t) self.value) < p_other.value;
    panda$core$Bit $tmp191 = ((panda$core$Bit) { $tmp192 });
    return $tmp191;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    bool $tmp194 = ((int16_t) self.value) < ((int16_t) p_other.value);
    panda$core$Bit $tmp193 = ((panda$core$Bit) { $tmp194 });
    return $tmp193;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    bool $tmp196 = ((int32_t) self.value) < ((int32_t) p_other.value);
    panda$core$Bit $tmp195 = ((panda$core$Bit) { $tmp196 });
    return $tmp195;
}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    bool $tmp198 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit $tmp197 = ((panda$core$Bit) { $tmp198 });
    return $tmp197;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    bool $tmp200 = ((int32_t) self.value) > ((int32_t) p_other.value);
    panda$core$Bit $tmp199 = ((panda$core$Bit) { $tmp200 });
    return $tmp199;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    bool $tmp202 = ((int32_t) self.value) > ((int32_t) p_other.value);
    panda$core$Bit $tmp201 = ((panda$core$Bit) { $tmp202 });
    return $tmp201;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    bool $tmp204 = ((int32_t) self.value) > p_other.value;
    panda$core$Bit $tmp203 = ((panda$core$Bit) { $tmp204 });
    return $tmp203;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    bool $tmp206 = ((int64_t) self.value) > p_other.value;
    panda$core$Bit $tmp205 = ((panda$core$Bit) { $tmp206 });
    return $tmp205;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    bool $tmp208 = ((int16_t) self.value) > ((int16_t) p_other.value);
    panda$core$Bit $tmp207 = ((panda$core$Bit) { $tmp208 });
    return $tmp207;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    bool $tmp210 = ((int32_t) self.value) > ((int32_t) p_other.value);
    panda$core$Bit $tmp209 = ((panda$core$Bit) { $tmp210 });
    return $tmp209;
}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    bool $tmp212 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit $tmp211 = ((panda$core$Bit) { $tmp212 });
    return $tmp211;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    bool $tmp214 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    panda$core$Bit $tmp213 = ((panda$core$Bit) { $tmp214 });
    return $tmp213;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    bool $tmp216 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    panda$core$Bit $tmp215 = ((panda$core$Bit) { $tmp216 });
    return $tmp215;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    bool $tmp218 = ((int32_t) self.value) >= p_other.value;
    panda$core$Bit $tmp217 = ((panda$core$Bit) { $tmp218 });
    return $tmp217;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    bool $tmp220 = ((int64_t) self.value) >= p_other.value;
    panda$core$Bit $tmp219 = ((panda$core$Bit) { $tmp220 });
    return $tmp219;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    bool $tmp222 = ((int16_t) self.value) >= ((int16_t) p_other.value);
    panda$core$Bit $tmp221 = ((panda$core$Bit) { $tmp222 });
    return $tmp221;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    bool $tmp224 = ((int32_t) self.value) >= ((int32_t) p_other.value);
    panda$core$Bit $tmp223 = ((panda$core$Bit) { $tmp224 });
    return $tmp223;
}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    bool $tmp226 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    panda$core$Bit $tmp225 = ((panda$core$Bit) { $tmp226 });
    return $tmp225;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_other) {
    bool $tmp228 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    panda$core$Bit $tmp227 = ((panda$core$Bit) { $tmp228 });
    return $tmp227;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_other) {
    bool $tmp230 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    panda$core$Bit $tmp229 = ((panda$core$Bit) { $tmp230 });
    return $tmp229;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_other) {
    bool $tmp232 = ((int32_t) self.value) <= p_other.value;
    panda$core$Bit $tmp231 = ((panda$core$Bit) { $tmp232 });
    return $tmp231;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_other) {
    bool $tmp234 = ((int64_t) self.value) <= p_other.value;
    panda$core$Bit $tmp233 = ((panda$core$Bit) { $tmp234 });
    return $tmp233;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_other) {
    bool $tmp236 = ((int16_t) self.value) <= ((int16_t) p_other.value);
    panda$core$Bit $tmp235 = ((panda$core$Bit) { $tmp236 });
    return $tmp235;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_other) {
    bool $tmp238 = ((int32_t) self.value) <= ((int32_t) p_other.value);
    panda$core$Bit $tmp237 = ((panda$core$Bit) { $tmp238 });
    return $tmp237;
}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_other) {
    bool $tmp240 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    panda$core$Bit $tmp239 = ((panda$core$Bit) { $tmp240 });
    return $tmp239;
}
panda$core$Int8 panda$core$Int8$abs$R$panda$core$Int8(panda$core$Int8 self) {
    panda$core$Bit $tmp241 = panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(self, ((panda$core$Int8) { 0 }));
    if ($tmp241.value) {
    {
        panda$core$Int8 $tmp243 = panda$core$Int8$$SUB$R$panda$core$Int8(self);
        panda$core$Int8 $tmp242 = $tmp243;
        return $tmp242;
    }
    }
    panda$core$Int8 $tmp244 = self;
    return $tmp244;
}
panda$core$Int32 panda$core$Int8$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    bool $tmp245 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp245 }).value) {
    {
        panda$core$Int32 $tmp246 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp246;
    }
    }
    panda$core$Int32 $tmp247 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $tmp247;
}
panda$core$Int32 panda$core$Int8$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    bool $tmp248 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp248 }).value) {
    {
        panda$core$Int32 $tmp249 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp249;
    }
    }
    panda$core$Int32 $tmp250 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $tmp250;
}
panda$core$Int32 panda$core$Int8$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    bool $tmp251 = ((int32_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp251 }).value) {
    {
        panda$core$Int32 $tmp252 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp252;
    }
    }
    panda$core$Int32 $tmp253 = ((panda$core$Int32) { p_other.value });
    return $tmp253;
}
panda$core$Int64 panda$core$Int8$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    bool $tmp254 = ((int64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp254 }).value) {
    {
        panda$core$Int64 $tmp255 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $tmp255;
    }
    }
    panda$core$Int64 $tmp256 = ((panda$core$Int64) { p_other.value });
    return $tmp256;
}
panda$core$Int16 panda$core$Int8$min$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    bool $tmp257 = ((int16_t) self.value) < ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp257 }).value) {
    {
        panda$core$Int16 $tmp258 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $tmp258;
    }
    }
    panda$core$Int16 $tmp259 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $tmp259;
}
panda$core$Int32 panda$core$Int8$min$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    bool $tmp260 = ((int32_t) self.value) < ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp260 }).value) {
    {
        panda$core$Int32 $tmp261 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp261;
    }
    }
    panda$core$Int32 $tmp262 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $tmp262;
}
panda$core$Int64 panda$core$Int8$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    bool $tmp263 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp263 }).value) {
    {
        panda$core$Int64 $tmp264 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $tmp264;
    }
    }
    panda$core$Int64 $tmp265 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp265;
}
panda$core$Int32 panda$core$Int8$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int8 p_other) {
    bool $tmp266 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp266 }).value) {
    {
        panda$core$Int32 $tmp267 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp267;
    }
    }
    panda$core$Int32 $tmp268 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $tmp268;
}
panda$core$Int32 panda$core$Int8$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int16 p_other) {
    bool $tmp269 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp269 }).value) {
    {
        panda$core$Int32 $tmp270 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp270;
    }
    }
    panda$core$Int32 $tmp271 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $tmp271;
}
panda$core$Int32 panda$core$Int8$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 self, panda$core$Int32 p_other) {
    bool $tmp272 = ((int32_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp272 }).value) {
    {
        panda$core$Int32 $tmp273 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp273;
    }
    }
    panda$core$Int32 $tmp274 = ((panda$core$Int32) { p_other.value });
    return $tmp274;
}
panda$core$Int64 panda$core$Int8$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 self, panda$core$Int64 p_other) {
    bool $tmp275 = ((int64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp275 }).value) {
    {
        panda$core$Int64 $tmp276 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $tmp276;
    }
    }
    panda$core$Int64 $tmp277 = ((panda$core$Int64) { p_other.value });
    return $tmp277;
}
panda$core$Int16 panda$core$Int8$max$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 self, panda$core$UInt8 p_other) {
    bool $tmp278 = ((int16_t) self.value) > ((int16_t) p_other.value);
    if (((panda$core$Bit) { $tmp278 }).value) {
    {
        panda$core$Int16 $tmp279 = ((panda$core$Int16) { ((int16_t) self.value) });
        return $tmp279;
    }
    }
    panda$core$Int16 $tmp280 = ((panda$core$Int16) { ((int16_t) p_other.value) });
    return $tmp280;
}
panda$core$Int32 panda$core$Int8$max$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 self, panda$core$UInt16 p_other) {
    bool $tmp281 = ((int32_t) self.value) > ((int32_t) p_other.value);
    if (((panda$core$Bit) { $tmp281 }).value) {
    {
        panda$core$Int32 $tmp282 = ((panda$core$Int32) { ((int32_t) self.value) });
        return $tmp282;
    }
    }
    panda$core$Int32 $tmp283 = ((panda$core$Int32) { ((int32_t) p_other.value) });
    return $tmp283;
}
panda$core$Int64 panda$core$Int8$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 self, panda$core$UInt32 p_other) {
    bool $tmp284 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp284 }).value) {
    {
        panda$core$Int64 $tmp285 = ((panda$core$Int64) { ((int64_t) self.value) });
        return $tmp285;
    }
    }
    panda$core$Int64 $tmp286 = ((panda$core$Int64) { ((int64_t) p_other.value) });
    return $tmp286;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp288 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp289 = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp288);
    panda$core$Bit $tmp290 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp289, ((panda$core$Int32) { 0 }));
    panda$core$Bit $tmp287 = $tmp290;
    return $tmp287;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp292 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp293 = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp292);
    panda$core$Bit $tmp294 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp293, ((panda$core$Int32) { 0 }));
    panda$core$Bit $tmp291 = $tmp294;
    return $tmp291;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp296 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp297 = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp296);
    panda$core$Bit $tmp298 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp297, ((panda$core$Int32) { 0 }));
    panda$core$Bit $tmp295 = $tmp298;
    return $tmp295;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp300 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp301 = panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp300);
    panda$core$Bit $tmp302 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp301, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp299 = $tmp302;
    return $tmp299;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp304 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp305 = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp304);
    panda$core$Bit $tmp306 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp305, ((panda$core$UInt32) { 0 }));
    panda$core$Bit $tmp303 = $tmp306;
    return $tmp303;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp308 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp309 = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp308);
    panda$core$Bit $tmp310 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp309, ((panda$core$UInt32) { 0 }));
    panda$core$Bit $tmp307 = $tmp310;
    return $tmp307;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp312 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp313 = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp312);
    panda$core$Bit $tmp314 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp313, ((panda$core$UInt32) { 0 }));
    panda$core$Bit $tmp311 = $tmp314;
    return $tmp311;
}
panda$core$Bit panda$core$Int8$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int8 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp316 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp317 = panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp316);
    panda$core$Bit $tmp318 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp317, ((panda$core$UInt64) { 0 }));
    panda$core$Bit $tmp315 = $tmp318;
    return $tmp315;
}
panda$core$Int64 panda$core$Int8$hash$R$panda$core$Int64(panda$core$Int8 self) {
    panda$core$Int64 $tmp319 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $tmp319;
}
panda$core$Int8$nullable panda$core$Int8$parse$panda$core$String$panda$core$Int64$R$panda$core$Int8$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs322;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp324;
    panda$core$UInt64$nullable result331;
    panda$core$Bit $tmp321 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s320);
    if ($tmp321.value) {
    {
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp324, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Int64$nullable) { .nonnull = false }), ((panda$core$Bit) { false }));
        panda$core$String* $tmp325 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp324);
        panda$core$String* $tmp323 = $tmp325;
        panda$core$UInt64$nullable $tmp326 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp323, p_radix);
        abs322 = $tmp326;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
        if (((panda$core$Bit) { !abs322.nonnull }).value) {
        {
            panda$core$Int8$nullable $tmp327 = ((panda$core$Int8$nullable) { .nonnull = false });
            return $tmp327;
        }
        }
        panda$core$Int8 $tmp329 = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64) abs322.value));
        panda$core$Int8 $tmp330 = panda$core$Int8$$SUB$R$panda$core$Int8($tmp329);
        panda$core$Int8$nullable $tmp328 = ((panda$core$Int8$nullable) { $tmp330, true });
        return $tmp328;
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp332 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result331 = $tmp332;
        if (((panda$core$Bit) { !result331.nonnull }).value) {
        {
            panda$core$Int8$nullable $tmp333 = ((panda$core$Int8$nullable) { .nonnull = false });
            return $tmp333;
        }
        }
        panda$core$Int8 $tmp335 = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64) result331.value));
        panda$core$Int8$nullable $tmp334 = ((panda$core$Int8$nullable) { $tmp335, true });
        return $tmp334;
    }
    }
}
panda$core$Int16 panda$core$Int8$convert$R$panda$core$Int16(panda$core$Int8 self) {
    panda$core$Int16 $tmp336 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $tmp336;
}
panda$core$Int32 panda$core$Int8$convert$R$panda$core$Int32(panda$core$Int8 self) {
    panda$core$Int32 $tmp337 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $tmp337;
}
panda$core$Int64 panda$core$Int8$convert$R$panda$core$Int64(panda$core$Int8 self) {
    panda$core$Int64 $tmp338 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $tmp338;
}
panda$core$UInt8 panda$core$Int8$convert$R$panda$core$UInt8(panda$core$Int8 self) {
    panda$core$UInt8 $tmp339 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $tmp339;
}
panda$core$UInt16 panda$core$Int8$convert$R$panda$core$UInt16(panda$core$Int8 self) {
    panda$core$UInt16 $tmp340 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $tmp340;
}
panda$core$UInt32 panda$core$Int8$convert$R$panda$core$UInt32(panda$core$Int8 self) {
    panda$core$UInt32 $tmp341 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $tmp341;
}
panda$core$UInt64 panda$core$Int8$convert$R$panda$core$UInt64(panda$core$Int8 self) {
    panda$core$UInt64 $tmp342 = ((panda$core$UInt64) { ((uint64_t) self.value) });
    return $tmp342;
}
panda$core$Real32 panda$core$Int8$convert$R$panda$core$Real32(panda$core$Int8 self) {
    panda$core$Real32 $tmp343 = ((panda$core$Real32) { ((float) self.value) });
    return $tmp343;
}
panda$core$Real64 panda$core$Int8$convert$R$panda$core$Real64(panda$core$Int8 self) {
    panda$core$Real64 $tmp344 = ((panda$core$Real64) { ((double) self.value) });
    return $tmp344;
}
panda$core$String* panda$core$Int8$convert$R$panda$core$String(panda$core$Int8 self) {
    panda$core$Int64 max345;
    panda$core$Char8* chars346;
    panda$core$Int64 index347;
    panda$core$Int8 value349;
    panda$core$Char8 $tmp353;
    panda$core$Char8 $tmp365;
    panda$core$Char8 $tmp374;
    panda$core$Int64 size375;
    panda$core$Range$LTpanda$core$Int64$GT $tmp377;
    max345 = ((panda$core$Int64) { 4 });
    chars346 = ((panda$core$Char8*) pandaZAlloc(max345.value * 1));
    panda$core$Int64 $tmp348 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max345, ((panda$core$Int64) { 1 }));
    index347 = $tmp348;
    value349 = self;
    panda$core$Bit $tmp350 = panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(value349, ((panda$core$Int8) { 0 }));
    if ($tmp350.value) {
    {
        $l351:;
        {
            panda$core$Int32 $tmp354 = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(value349, ((panda$core$Int8) { 10 }));
            panda$core$Int32 $tmp355 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp354, ((panda$core$Int32) { 48 }));
            panda$core$UInt8 $tmp356 = panda$core$Int32$convert$R$panda$core$UInt8($tmp355);
            panda$core$Char8$init$panda$core$UInt8(&$tmp353, $tmp356);
            chars346[index347.value] = $tmp353;
            panda$core$Int32 $tmp357 = panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(value349, ((panda$core$Int8) { 10 }));
            panda$core$Int8 $tmp358 = panda$core$Int32$convert$R$panda$core$Int8($tmp357);
            value349 = $tmp358;
            panda$core$Int64 $tmp359 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index347, ((panda$core$Int64) { 1 }));
            index347 = $tmp359;
        }
        panda$core$Bit $tmp361 = panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(value349, ((panda$core$Int8) { 0 }));
        bool $tmp360 = $tmp361.value;
        if ($tmp360) goto $l351;
        $l352:;
        panda$core$Int64 $tmp362 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index347, ((panda$core$Int64) { 1 }));
        index347 = $tmp362;
    }
    }
    else {
    {
        $l363:;
        {
            panda$core$Int32 $tmp366 = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(value349, ((panda$core$Int8) { 10 }));
            panda$core$Int32 $tmp367 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 48 }), $tmp366);
            panda$core$UInt8 $tmp368 = panda$core$Int32$convert$R$panda$core$UInt8($tmp367);
            panda$core$Char8$init$panda$core$UInt8(&$tmp365, $tmp368);
            chars346[index347.value] = $tmp365;
            panda$core$Int32 $tmp369 = panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(value349, ((panda$core$Int8) { 10 }));
            panda$core$Int8 $tmp370 = panda$core$Int32$convert$R$panda$core$Int8($tmp369);
            value349 = $tmp370;
            panda$core$Int64 $tmp371 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index347, ((panda$core$Int64) { 1 }));
            index347 = $tmp371;
        }
        panda$core$Bit $tmp373 = panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(value349, ((panda$core$Int8) { 0 }));
        bool $tmp372 = $tmp373.value;
        if ($tmp372) goto $l363;
        $l364:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp374, ((panda$core$UInt8) { 45 }));
        chars346[index347.value] = $tmp374;
    }
    }
    panda$core$Int64 $tmp376 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max345, index347);
    size375 = $tmp376;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp377, ((panda$core$Int64) { 0 }), size375, ((panda$core$Bit) { false }));
    int64_t $tmp379 = $tmp377.min.value;
    panda$core$Int64 i378 = { $tmp379 };
    int64_t $tmp381 = $tmp377.max.value;
    bool $tmp382 = $tmp377.inclusive.value;
    if ($tmp382) goto $l389; else goto $l390;
    $l389:;
    if ($tmp379 <= $tmp381) goto $l383; else goto $l385;
    $l390:;
    if ($tmp379 < $tmp381) goto $l383; else goto $l385;
    $l383:;
    {
        panda$core$Int64 $tmp391 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i378, index347);
        chars346[i378.value] = chars346[$tmp391.value];
    }
    $l386:;
    int64_t $tmp393 = $tmp381 - i378.value;
    if ($tmp382) goto $l394; else goto $l395;
    $l394:;
    if ((uint64_t) $tmp393 >= 1) goto $l392; else goto $l385;
    $l395:;
    if ((uint64_t) $tmp393 > 1) goto $l392; else goto $l385;
    $l392:;
    i378.value += 1;
    goto $l383;
    $l385:;
    panda$core$String* $tmp401 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp401, chars346, size375);
    panda$core$String* $tmp400 = $tmp401;
    panda$core$String* $tmp399 = $tmp400;
    panda$core$String* $tmp398 = $tmp399;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp399));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
    return $tmp398;
}
panda$core$String* panda$core$Int8$format$panda$core$String$R$panda$core$String(panda$core$Int8 self, panda$core$String* p_fmt) {
    bool $tmp405 = self.value < 0;
    panda$core$Int8 $tmp406 = panda$core$Int8$abs$R$panda$core$Int8(self);
    panda$core$UInt64 $tmp407 = panda$core$Int8$convert$R$panda$core$UInt64($tmp406);
    panda$core$String* $tmp408 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { $tmp405 }), $tmp407, ((panda$core$UInt64) { 255 }), p_fmt);
    panda$core$String* $tmp404 = $tmp408;
    panda$core$String* $tmp403 = $tmp404;
    panda$core$String* $tmp402 = $tmp403;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
    return $tmp402;
}
void panda$core$Int8$cleanup(panda$core$Int8 self) {
}

