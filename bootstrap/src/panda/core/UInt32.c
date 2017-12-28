#include "panda/core/UInt32.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Object.h"
#include "panda/collections/Key.h"
#include "panda/core/Comparable.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Panda.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$UInt32 self, panda$core$Object* p0) {
    panda$core$Bit result = panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit(self, ((panda$core$UInt32$wrapper*) p0)->value);
    return result;
}

panda$core$String* panda$core$UInt32$format$panda$core$String$R$panda$core$String$wrappershim(panda$core$UInt32$wrapper* self, panda$core$String* fmt) {
    return panda$core$UInt32$format$panda$core$String$R$panda$core$String(self->value, fmt);
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Int64 panda$core$UInt32$hash$R$panda$core$Int64$wrappershim(panda$core$UInt32$wrapper* self) {
    return panda$core$UInt32$hash$R$panda$core$Int64(self->value);
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$wrappershim(panda$core$UInt32$wrapper* self, panda$core$Object* other) {
    return panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit(self->value, ((panda$core$UInt32$wrapper*) other)->value);
}
panda$core$String* panda$core$UInt32$convert$R$panda$core$String$wrappershim(panda$core$UInt32$wrapper* self) {
    return panda$core$UInt32$convert$R$panda$core$String(self->value);
}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt32$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt32$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt32$_panda$core$Formattable, { panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt32$_panda$core$Equatable, { panda$core$UInt32$hash$R$panda$core$Int64} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt32$_panda$collections$Key, { panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$shim} };

panda$core$UInt32$class_type panda$core$UInt32$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt32$_panda$core$Comparable, { panda$core$UInt32$convert$R$panda$core$String, panda$core$Object$cleanup, panda$core$UInt32$$ADD$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$ADD$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$ADD$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$ADD$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$ADD$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$SUB$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$SUB$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$SUB$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$SUB$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$SUB$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$SUB$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$SUB$R$panda$core$UInt32, panda$core$UInt32$$MUL$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$MUL$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$MUL$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$MUL$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$MUL$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$MUL$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$MUL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$INTDIV$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$INTDIV$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$INTDIV$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$INTDIV$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$INTDIV$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$INTDIV$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$INTDIV$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$REM$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$$REM$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$$REM$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$$REM$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$REM$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$REM$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$BNOT$R$panda$core$UInt32, panda$core$UInt32$$BAND$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$BAND$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$BAND$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$BAND$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$BAND$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$BAND$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$BOR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$BOR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$BOR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$BOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$BOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$BOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$BOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$BOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$BXOR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$BXOR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$BXOR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$BXOR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$BXOR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$BXOR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$SHL$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$SHL$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$SHL$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$SHL$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$SHL$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$SHL$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$SHL$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$SHR$panda$core$Int8$R$panda$core$Int32, panda$core$UInt32$$SHR$panda$core$Int16$R$panda$core$Int32, panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32, panda$core$UInt32$$SHR$panda$core$Int64$R$panda$core$Int64, panda$core$UInt32$$SHR$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$$SHR$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$$SHR$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$EQ$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$EQ$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$NEQ$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$LT$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$GT$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$GE$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt32$$LE$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$min$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$min$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$min$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$min$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$min$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$min$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$min$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$max$panda$core$Int8$R$panda$core$Int64, panda$core$UInt32$max$panda$core$Int16$R$panda$core$Int64, panda$core$UInt32$max$panda$core$Int32$R$panda$core$Int64, panda$core$UInt32$max$panda$core$UInt8$R$panda$core$UInt32, panda$core$UInt32$max$panda$core$UInt16$R$panda$core$UInt32, panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32, panda$core$UInt32$max$panda$core$UInt64$R$panda$core$UInt64, panda$core$UInt32$$IDX$panda$core$Int8$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$Int16$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$Int32$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$Int64$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$UInt8$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$UInt16$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$UInt32$R$panda$core$Bit, panda$core$UInt32$$IDX$panda$core$UInt64$R$panda$core$Bit, panda$core$UInt32$hash$R$panda$core$Int64, panda$core$UInt32$convert$R$panda$core$Int8, panda$core$UInt32$convert$R$panda$core$Int16, panda$core$UInt32$convert$R$panda$core$Int32, panda$core$UInt32$convert$R$panda$core$Int64, panda$core$UInt32$convert$R$panda$core$UInt8, panda$core$UInt32$convert$R$panda$core$UInt16, panda$core$UInt32$convert$R$panda$core$UInt64, panda$core$UInt32$convert$R$panda$core$Real32, panda$core$UInt32$convert$R$panda$core$Real64, panda$core$UInt32$format$panda$core$String$R$panda$core$String} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt32$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt32$format$panda$core$String$R$panda$core$String$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt32$wrapper_panda$core$Formattable, { panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit$wrappershim, panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt32$wrapper_panda$core$Equatable, { panda$core$UInt32$hash$R$panda$core$Int64$wrappershim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt32$wrapper_panda$collections$Key, { panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit$wrappershim, panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit$wrappershim, panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit$wrappershim, panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit$wrappershim} };

panda$core$UInt32$wrapperclass_type panda$core$UInt32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt32$wrapper_panda$core$Comparable, { panda$core$UInt32$convert$R$panda$core$String$wrappershim, panda$core$Object$cleanup} };

void panda$core$UInt32$init$builtin_uint32(panda$core$UInt32* self, uint32_t p_value) {
    self->value = p_value;
}
void panda$core$UInt32$init$panda$core$UInt8(panda$core$UInt32* self, panda$core$UInt8 p_value) {
    self->value = ((uint32_t) p_value.value);
}
void panda$core$UInt32$init$panda$core$UInt16(panda$core$UInt32* self, panda$core$UInt16 p_value) {
    self->value = ((uint32_t) p_value.value);
}
panda$core$Int64 panda$core$UInt32$$ADD$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int64_t $tmp1 = ((int64_t) self.value) + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp1 });
}
panda$core$Int64 panda$core$UInt32$$ADD$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int64_t $tmp2 = ((int64_t) self.value) + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp2 });
}
panda$core$Int64 panda$core$UInt32$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int64_t $tmp3 = ((int64_t) self.value) + ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp3 });
}
panda$core$UInt32 panda$core$UInt32$$ADD$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp4 = self.value + ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp4 });
}
panda$core$UInt32 panda$core$UInt32$$ADD$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp5 = self.value + ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp5 });
}
panda$core$UInt32 panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp6 = self.value + p_other.value;
    return ((panda$core$UInt32) { $tmp6 });
}
panda$core$UInt64 panda$core$UInt32$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp7 = ((uint64_t) self.value) + p_other.value;
    return ((panda$core$UInt64) { $tmp7 });
}
panda$core$Int64 panda$core$UInt32$$SUB$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int64_t $tmp8 = ((int64_t) self.value) - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp8 });
}
panda$core$Int64 panda$core$UInt32$$SUB$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int64_t $tmp9 = ((int64_t) self.value) - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp9 });
}
panda$core$Int64 panda$core$UInt32$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int64_t $tmp10 = ((int64_t) self.value) - ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp10 });
}
panda$core$UInt32 panda$core$UInt32$$SUB$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp11 = self.value - ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp11 });
}
panda$core$UInt32 panda$core$UInt32$$SUB$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp12 = self.value - ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp12 });
}
panda$core$UInt32 panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp13 = self.value - p_other.value;
    return ((panda$core$UInt32) { $tmp13 });
}
panda$core$UInt64 panda$core$UInt32$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp14 = ((uint64_t) self.value) - p_other.value;
    return ((panda$core$UInt64) { $tmp14 });
}
panda$core$UInt32 panda$core$UInt32$$SUB$R$panda$core$UInt32(panda$core$UInt32 self) {
    return ((panda$core$UInt32) { -self.value });
}
panda$core$Int64 panda$core$UInt32$$MUL$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int64_t $tmp16 = ((int64_t) self.value) * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp16 });
}
panda$core$Int64 panda$core$UInt32$$MUL$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int64_t $tmp17 = ((int64_t) self.value) * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp17 });
}
panda$core$Int64 panda$core$UInt32$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int64_t $tmp18 = ((int64_t) self.value) * ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp18 });
}
panda$core$UInt32 panda$core$UInt32$$MUL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp19 = self.value * ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp19 });
}
panda$core$UInt32 panda$core$UInt32$$MUL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp20 = self.value * ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp20 });
}
panda$core$UInt32 panda$core$UInt32$$MUL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp21 = self.value * p_other.value;
    return ((panda$core$UInt32) { $tmp21 });
}
panda$core$UInt64 panda$core$UInt32$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp22 = ((uint64_t) self.value) * p_other.value;
    return ((panda$core$UInt64) { $tmp22 });
}
panda$core$Int64 panda$core$UInt32$$INTDIV$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int64_t $tmp23 = ((int64_t) self.value) / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp23 });
}
panda$core$Int64 panda$core$UInt32$$INTDIV$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int64_t $tmp24 = ((int64_t) self.value) / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp24 });
}
panda$core$Int64 panda$core$UInt32$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int64_t $tmp25 = ((int64_t) self.value) / ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp25 });
}
panda$core$UInt32 panda$core$UInt32$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp26 = self.value / ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp26 });
}
panda$core$UInt32 panda$core$UInt32$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp27 = self.value / ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp27 });
}
panda$core$UInt32 panda$core$UInt32$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp28 = self.value / p_other.value;
    return ((panda$core$UInt32) { $tmp28 });
}
panda$core$UInt64 panda$core$UInt32$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp29 = ((uint64_t) self.value) / p_other.value;
    return ((panda$core$UInt64) { $tmp29 });
}
panda$core$Int64 panda$core$UInt32$$REM$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int64_t $tmp30 = ((int64_t) self.value) % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp30 });
}
panda$core$Int64 panda$core$UInt32$$REM$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int64_t $tmp31 = ((int64_t) self.value) % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp31 });
}
panda$core$Int64 panda$core$UInt32$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int64_t $tmp32 = ((int64_t) self.value) % ((int64_t) p_other.value);
    return ((panda$core$Int64) { $tmp32 });
}
panda$core$UInt32 panda$core$UInt32$$REM$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp33 = self.value % ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp33 });
}
panda$core$UInt32 panda$core$UInt32$$REM$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp34 = self.value % ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp34 });
}
panda$core$UInt32 panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp35 = self.value % p_other.value;
    return ((panda$core$UInt32) { $tmp35 });
}
panda$core$UInt64 panda$core$UInt32$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp36 = ((uint64_t) self.value) % p_other.value;
    return ((panda$core$UInt64) { $tmp36 });
}
panda$core$UInt32 panda$core$UInt32$$BNOT$R$panda$core$UInt32(panda$core$UInt32 self) {
    return ((panda$core$UInt32) { ~self.value });
}
panda$core$Int32 panda$core$UInt32$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int32_t $tmp38 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp38 });
}
panda$core$Int32 panda$core$UInt32$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int32_t $tmp39 = ((int32_t) self.value) & ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp39 });
}
panda$core$Int32 panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int32_t $tmp40 = ((int32_t) self.value) & p_other.value;
    return ((panda$core$Int32) { $tmp40 });
}
panda$core$Int64 panda$core$UInt32$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    int64_t $tmp41 = ((int64_t) self.value) & p_other.value;
    return ((panda$core$Int64) { $tmp41 });
}
panda$core$UInt32 panda$core$UInt32$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp42 = self.value & ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp42 });
}
panda$core$UInt32 panda$core$UInt32$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp43 = self.value & ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp43 });
}
panda$core$UInt32 panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp44 = self.value & p_other.value;
    return ((panda$core$UInt32) { $tmp44 });
}
panda$core$UInt64 panda$core$UInt32$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp45 = ((uint64_t) self.value) & p_other.value;
    return ((panda$core$UInt64) { $tmp45 });
}
panda$core$Int32 panda$core$UInt32$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int32_t $tmp46 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp46 });
}
panda$core$Int32 panda$core$UInt32$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int32_t $tmp47 = ((int32_t) self.value) | ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp47 });
}
panda$core$Int32 panda$core$UInt32$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int32_t $tmp48 = ((int32_t) self.value) | p_other.value;
    return ((panda$core$Int32) { $tmp48 });
}
panda$core$Int64 panda$core$UInt32$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    int64_t $tmp49 = ((int64_t) self.value) | p_other.value;
    return ((panda$core$Int64) { $tmp49 });
}
panda$core$UInt32 panda$core$UInt32$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp50 = self.value | ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp50 });
}
panda$core$UInt32 panda$core$UInt32$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp51 = self.value | ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp51 });
}
panda$core$UInt32 panda$core$UInt32$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp52 = self.value | p_other.value;
    return ((panda$core$UInt32) { $tmp52 });
}
panda$core$UInt64 panda$core$UInt32$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp53 = ((uint64_t) self.value) | p_other.value;
    return ((panda$core$UInt64) { $tmp53 });
}
panda$core$Int32 panda$core$UInt32$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int32_t $tmp54 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp54 });
}
panda$core$Int32 panda$core$UInt32$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int32_t $tmp55 = ((int32_t) self.value) ^ ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp55 });
}
panda$core$Int32 panda$core$UInt32$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int32_t $tmp56 = ((int32_t) self.value) ^ p_other.value;
    return ((panda$core$Int32) { $tmp56 });
}
panda$core$Int64 panda$core$UInt32$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    int64_t $tmp57 = ((int64_t) self.value) ^ p_other.value;
    return ((panda$core$Int64) { $tmp57 });
}
panda$core$UInt32 panda$core$UInt32$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp58 = self.value ^ ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp58 });
}
panda$core$UInt32 panda$core$UInt32$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp59 = self.value ^ ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp59 });
}
panda$core$UInt32 panda$core$UInt32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp60 = self.value ^ p_other.value;
    return ((panda$core$UInt32) { $tmp60 });
}
panda$core$UInt64 panda$core$UInt32$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp61 = ((uint64_t) self.value) ^ p_other.value;
    return ((panda$core$UInt64) { $tmp61 });
}
panda$core$Int32 panda$core$UInt32$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int32_t $tmp62 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp62 });
}
panda$core$Int32 panda$core$UInt32$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int32_t $tmp63 = ((int32_t) self.value) << ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp63 });
}
panda$core$Int32 panda$core$UInt32$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int32_t $tmp64 = ((int32_t) self.value) << p_other.value;
    return ((panda$core$Int32) { $tmp64 });
}
panda$core$Int64 panda$core$UInt32$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    int64_t $tmp65 = ((int64_t) self.value) << p_other.value;
    return ((panda$core$Int64) { $tmp65 });
}
panda$core$UInt32 panda$core$UInt32$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp66 = self.value << ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp66 });
}
panda$core$UInt32 panda$core$UInt32$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp67 = self.value << ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp67 });
}
panda$core$UInt32 panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp68 = self.value << p_other.value;
    return ((panda$core$UInt32) { $tmp68 });
}
panda$core$UInt64 panda$core$UInt32$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp69 = ((uint64_t) self.value) << p_other.value;
    return ((panda$core$UInt64) { $tmp69 });
}
panda$core$Int32 panda$core$UInt32$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int8 p_other) {
    int32_t $tmp70 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp70 });
}
panda$core$Int32 panda$core$UInt32$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int16 p_other) {
    int32_t $tmp71 = ((int32_t) self.value) >> ((int32_t) p_other.value);
    return ((panda$core$Int32) { $tmp71 });
}
panda$core$Int32 panda$core$UInt32$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt32 self, panda$core$Int32 p_other) {
    int32_t $tmp72 = ((int32_t) self.value) >> p_other.value;
    return ((panda$core$Int32) { $tmp72 });
}
panda$core$Int64 panda$core$UInt32$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int64 p_other) {
    int64_t $tmp73 = ((int64_t) self.value) >> p_other.value;
    return ((panda$core$Int64) { $tmp73 });
}
panda$core$UInt32 panda$core$UInt32$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    uint32_t $tmp74 = self.value >> ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp74 });
}
panda$core$UInt32 panda$core$UInt32$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    uint32_t $tmp75 = self.value >> ((uint32_t) p_other.value);
    return ((panda$core$UInt32) { $tmp75 });
}
panda$core$UInt32 panda$core$UInt32$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    uint32_t $tmp76 = self.value >> p_other.value;
    return ((panda$core$UInt32) { $tmp76 });
}
panda$core$UInt64 panda$core$UInt32$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    uint64_t $tmp77 = ((uint64_t) self.value) >> p_other.value;
    return ((panda$core$UInt64) { $tmp77 });
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    bool $tmp78 = ((int64_t) self.value) == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp78 });
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    bool $tmp79 = ((int64_t) self.value) == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp79 });
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    bool $tmp80 = ((int64_t) self.value) == ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp80 });
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    bool $tmp81 = self.value == ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp81 });
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    bool $tmp82 = self.value == ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp82 });
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    bool $tmp83 = self.value == p_other.value;
    return ((panda$core$Bit) { $tmp83 });
}
panda$core$Bit panda$core$UInt32$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    bool $tmp84 = ((uint64_t) self.value) == p_other.value;
    return ((panda$core$Bit) { $tmp84 });
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    bool $tmp85 = ((int64_t) self.value) != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp85 });
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    bool $tmp86 = ((int64_t) self.value) != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp86 });
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    bool $tmp87 = ((int64_t) self.value) != ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp87 });
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    bool $tmp88 = self.value != ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp88 });
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    bool $tmp89 = self.value != ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp89 });
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    bool $tmp90 = self.value != p_other.value;
    return ((panda$core$Bit) { $tmp90 });
}
panda$core$Bit panda$core$UInt32$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    bool $tmp91 = ((uint64_t) self.value) != p_other.value;
    return ((panda$core$Bit) { $tmp91 });
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    bool $tmp92 = ((int64_t) self.value) < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp92 });
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    bool $tmp93 = ((int64_t) self.value) < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp93 });
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    bool $tmp94 = ((int64_t) self.value) < ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp94 });
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    bool $tmp95 = self.value < ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp95 });
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    bool $tmp96 = self.value < ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp96 });
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    bool $tmp97 = self.value < p_other.value;
    return ((panda$core$Bit) { $tmp97 });
}
panda$core$Bit panda$core$UInt32$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    bool $tmp98 = ((uint64_t) self.value) < p_other.value;
    return ((panda$core$Bit) { $tmp98 });
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    bool $tmp99 = ((int64_t) self.value) > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp99 });
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    bool $tmp100 = ((int64_t) self.value) > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp100 });
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    bool $tmp101 = ((int64_t) self.value) > ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp101 });
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    bool $tmp102 = self.value > ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp102 });
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    bool $tmp103 = self.value > ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp103 });
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    bool $tmp104 = self.value > p_other.value;
    return ((panda$core$Bit) { $tmp104 });
}
panda$core$Bit panda$core$UInt32$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    bool $tmp105 = ((uint64_t) self.value) > p_other.value;
    return ((panda$core$Bit) { $tmp105 });
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    bool $tmp106 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp106 });
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    bool $tmp107 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp107 });
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    bool $tmp108 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp108 });
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    bool $tmp109 = self.value >= ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp109 });
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    bool $tmp110 = self.value >= ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp110 });
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    bool $tmp111 = self.value >= p_other.value;
    return ((panda$core$Bit) { $tmp111 });
}
panda$core$Bit panda$core$UInt32$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    bool $tmp112 = ((uint64_t) self.value) >= p_other.value;
    return ((panda$core$Bit) { $tmp112 });
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_other) {
    bool $tmp113 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp113 });
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_other) {
    bool $tmp114 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp114 });
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_other) {
    bool $tmp115 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    return ((panda$core$Bit) { $tmp115 });
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    bool $tmp116 = self.value <= ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp116 });
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    bool $tmp117 = self.value <= ((uint32_t) p_other.value);
    return ((panda$core$Bit) { $tmp117 });
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    bool $tmp118 = self.value <= p_other.value;
    return ((panda$core$Bit) { $tmp118 });
}
panda$core$Bit panda$core$UInt32$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    bool $tmp119 = ((uint64_t) self.value) <= p_other.value;
    return ((panda$core$Bit) { $tmp119 });
}
panda$core$Int64 panda$core$UInt32$min$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    bool $tmp120 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp120 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$UInt32$min$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    bool $tmp121 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp121 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$UInt32$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    bool $tmp122 = ((int64_t) self.value) < ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp122 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt32$min$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    bool $tmp123 = self.value < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp123 }).value) {
    {
        return ((panda$core$UInt32) { self.value });
    }
    }
    return ((panda$core$UInt32) { ((uint32_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt32$min$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    bool $tmp124 = self.value < ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp124 }).value) {
    {
        return ((panda$core$UInt32) { self.value });
    }
    }
    return ((panda$core$UInt32) { ((uint32_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt32$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    bool $tmp125 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp125 }).value) {
    {
        return ((panda$core$UInt32) { self.value });
    }
    }
    return ((panda$core$UInt32) { p_other.value });
}
panda$core$UInt64 panda$core$UInt32$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    bool $tmp126 = ((uint64_t) self.value) < p_other.value;
    if (((panda$core$Bit) { $tmp126 }).value) {
    {
        return ((panda$core$UInt64) { ((uint64_t) self.value) });
    }
    }
    return ((panda$core$UInt64) { p_other.value });
}
panda$core$Int64 panda$core$UInt32$max$panda$core$Int8$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int8 p_other) {
    bool $tmp127 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp127 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$UInt32$max$panda$core$Int16$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int16 p_other) {
    bool $tmp128 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp128 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$Int64 panda$core$UInt32$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt32 self, panda$core$Int32 p_other) {
    bool $tmp129 = ((int64_t) self.value) > ((int64_t) p_other.value);
    if (((panda$core$Bit) { $tmp129 }).value) {
    {
        return ((panda$core$Int64) { ((int64_t) self.value) });
    }
    }
    return ((panda$core$Int64) { ((int64_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt32$max$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt8 p_other) {
    bool $tmp130 = self.value > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp130 }).value) {
    {
        return ((panda$core$UInt32) { self.value });
    }
    }
    return ((panda$core$UInt32) { ((uint32_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt32$max$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt16 p_other) {
    bool $tmp131 = self.value > ((uint32_t) p_other.value);
    if (((panda$core$Bit) { $tmp131 }).value) {
    {
        return ((panda$core$UInt32) { self.value });
    }
    }
    return ((panda$core$UInt32) { ((uint32_t) p_other.value) });
}
panda$core$UInt32 panda$core$UInt32$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt32 self, panda$core$UInt32 p_other) {
    bool $tmp132 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp132 }).value) {
    {
        return ((panda$core$UInt32) { self.value });
    }
    }
    return ((panda$core$UInt32) { p_other.value });
}
panda$core$UInt64 panda$core$UInt32$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt32 self, panda$core$UInt64 p_other) {
    bool $tmp133 = ((uint64_t) self.value) > p_other.value;
    if (((panda$core$Bit) { $tmp133 }).value) {
    {
        return ((panda$core$UInt64) { ((uint64_t) self.value) });
    }
    }
    return ((panda$core$UInt64) { p_other.value });
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int8 p_index) {
    panda$core$Int32 $tmp134 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$Int32 $tmp135 = panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp134);
    panda$core$Bit $tmp136 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp135, ((panda$core$Int32) { 0 }));
    return $tmp136;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int16 p_index) {
    panda$core$Int32 $tmp137 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$Int32 $tmp138 = panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp137);
    panda$core$Bit $tmp139 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp138, ((panda$core$Int32) { 0 }));
    return $tmp139;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int32 p_index) {
    panda$core$Int32 $tmp140 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$Int32 $tmp141 = panda$core$UInt32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp140);
    panda$core$Bit $tmp142 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp141, ((panda$core$Int32) { 0 }));
    return $tmp142;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp143 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp144 = panda$core$UInt32$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp143);
    panda$core$Bit $tmp145 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp144, ((panda$core$Int64) { 0 }));
    return $tmp145;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt8 p_index) {
    panda$core$UInt32 $tmp146 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt32 $tmp147 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp146);
    panda$core$Bit $tmp148 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp147, ((panda$core$UInt32) { 0 }));
    return $tmp148;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt16 p_index) {
    panda$core$UInt32 $tmp149 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt32 $tmp150 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp149);
    panda$core$Bit $tmp151 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp150, ((panda$core$UInt32) { 0 }));
    return $tmp151;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt32 p_index) {
    panda$core$UInt32 $tmp152 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt32 $tmp153 = panda$core$UInt32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp152);
    panda$core$Bit $tmp154 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp153, ((panda$core$UInt32) { 0 }));
    return $tmp154;
}
panda$core$Bit panda$core$UInt32$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt32 self, panda$core$UInt64 p_index) {
    panda$core$UInt64 $tmp155 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp156 = panda$core$UInt32$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp155);
    panda$core$Bit $tmp157 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp156, ((panda$core$UInt64) { 0 }));
    return $tmp157;
}
panda$core$Int64 panda$core$UInt32$hash$R$panda$core$Int64(panda$core$UInt32 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt32$nullable panda$core$UInt32$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt32$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result158;
    panda$core$UInt64$nullable $tmp159 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result158 = $tmp159;
    if (((panda$core$Bit) { !result158.nonnull }).value) {
    {
        return ((panda$core$UInt32$nullable) { .nonnull = false });
    }
    }
    panda$core$UInt32 $tmp160 = panda$core$UInt64$convert$R$panda$core$UInt32(((panda$core$UInt64) result158.value));
    return ((panda$core$UInt32$nullable) { $tmp160, true });
}
panda$core$Int8 panda$core$UInt32$convert$R$panda$core$Int8(panda$core$UInt32 self) {
    return ((panda$core$Int8) { ((int8_t) self.value) });
}
panda$core$Int16 panda$core$UInt32$convert$R$panda$core$Int16(panda$core$UInt32 self) {
    return ((panda$core$Int16) { ((int16_t) self.value) });
}
panda$core$Int32 panda$core$UInt32$convert$R$panda$core$Int32(panda$core$UInt32 self) {
    return ((panda$core$Int32) { ((int32_t) self.value) });
}
panda$core$Int64 panda$core$UInt32$convert$R$panda$core$Int64(panda$core$UInt32 self) {
    return ((panda$core$Int64) { ((int64_t) self.value) });
}
panda$core$UInt8 panda$core$UInt32$convert$R$panda$core$UInt8(panda$core$UInt32 self) {
    return ((panda$core$UInt8) { ((uint8_t) self.value) });
}
panda$core$UInt16 panda$core$UInt32$convert$R$panda$core$UInt16(panda$core$UInt32 self) {
    return ((panda$core$UInt16) { ((uint16_t) self.value) });
}
panda$core$UInt64 panda$core$UInt32$convert$R$panda$core$UInt64(panda$core$UInt32 self) {
    return ((panda$core$UInt64) { ((uint64_t) self.value) });
}
panda$core$Real32 panda$core$UInt32$convert$R$panda$core$Real32(panda$core$UInt32 self) {
    return ((panda$core$Real32) { ((float) self.value) });
}
panda$core$Real64 panda$core$UInt32$convert$R$panda$core$Real64(panda$core$UInt32 self) {
    return ((panda$core$Real64) { ((double) self.value) });
}
panda$core$String* panda$core$UInt32$convert$R$panda$core$String(panda$core$UInt32 self) {
    panda$core$Int64 max161;
    panda$core$Char8* chars162;
    panda$core$Int64 index163;
    panda$core$UInt32 value165;
    panda$core$Char8 $tmp169;
    panda$core$Char8 $tmp179;
    panda$core$Char8 $tmp186;
    panda$core$Int64 size187;
    panda$core$Range$LTpanda$core$Int64$GT $tmp189;
    max161 = ((panda$core$Int64) { 10 });
    chars162 = ((panda$core$Char8*) pandaAlloc(max161.value * 1));
    panda$core$Int64 $tmp164 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max161, ((panda$core$Int64) { 1 }));
    index163 = $tmp164;
    value165 = self;
    panda$core$Bit $tmp166 = panda$core$UInt32$$GE$panda$core$UInt32$R$panda$core$Bit(value165, ((panda$core$UInt32) { 0 }));
    if ($tmp166.value) {
    {
        $l167:;
        {
            panda$core$UInt32 $tmp170 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(value165, ((panda$core$UInt32) { 10 }));
            panda$core$UInt32 $tmp171 = panda$core$UInt32$$ADD$panda$core$UInt32$R$panda$core$UInt32($tmp170, ((panda$core$UInt32) { 48 }));
            panda$core$UInt8 $tmp172 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp171);
            panda$core$Char8$init$panda$core$UInt8(&$tmp169, $tmp172);
            chars162[index163.value] = $tmp169;
            panda$core$UInt32 $tmp173 = panda$core$UInt32$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(value165, ((panda$core$UInt32) { 10 }));
            value165 = $tmp173;
            panda$core$Int64 $tmp174 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index163, ((panda$core$Int64) { 1 }));
            index163 = $tmp174;
        }
        panda$core$Bit $tmp175 = panda$core$UInt32$$GT$panda$core$UInt32$R$panda$core$Bit(value165, ((panda$core$UInt32) { 0 }));
        if ($tmp175.value) goto $l167;
        $l168:;
        panda$core$Int64 $tmp176 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index163, ((panda$core$Int64) { 1 }));
        index163 = $tmp176;
    }
    }
    else {
    {
        $l177:;
        {
            panda$core$UInt32 $tmp180 = panda$core$UInt32$$REM$panda$core$UInt32$R$panda$core$UInt32(value165, ((panda$core$UInt32) { 10 }));
            panda$core$UInt32 $tmp181 = panda$core$UInt32$$SUB$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 48 }), $tmp180);
            panda$core$UInt8 $tmp182 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp181);
            panda$core$Char8$init$panda$core$UInt8(&$tmp179, $tmp182);
            chars162[index163.value] = $tmp179;
            panda$core$UInt32 $tmp183 = panda$core$UInt32$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(value165, ((panda$core$UInt32) { 10 }));
            value165 = $tmp183;
            panda$core$Int64 $tmp184 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index163, ((panda$core$Int64) { 1 }));
            index163 = $tmp184;
        }
        panda$core$Bit $tmp185 = panda$core$UInt32$$LT$panda$core$UInt32$R$panda$core$Bit(value165, ((panda$core$UInt32) { 0 }));
        if ($tmp185.value) goto $l177;
        $l178:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp186, ((panda$core$UInt8) { 45 }));
        chars162[index163.value] = $tmp186;
    }
    }
    panda$core$Int64 $tmp188 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max161, index163);
    size187 = $tmp188;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp189, ((panda$core$Int64) { 0 }), size187, ((panda$core$Bit) { false }));
    int64_t $tmp191 = $tmp189.min.value;
    panda$core$Int64 i190 = { $tmp191 };
    int64_t $tmp193 = $tmp189.max.value;
    bool $tmp194 = $tmp189.inclusive.value;
    if ($tmp194) goto $l201; else goto $l202;
    $l201:;
    if ($tmp191 <= $tmp193) goto $l195; else goto $l197;
    $l202:;
    if ($tmp191 < $tmp193) goto $l195; else goto $l197;
    $l195:;
    {
        panda$core$Int64 $tmp203 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i190, index163);
        chars162[i190.value] = chars162[$tmp203.value];
    }
    $l198:;
    int64_t $tmp205 = $tmp193 - i190.value;
    if ($tmp194) goto $l206; else goto $l207;
    $l206:;
    if ((uint64_t) $tmp205 >= 1) goto $l204; else goto $l197;
    $l207:;
    if ((uint64_t) $tmp205 > 1) goto $l204; else goto $l197;
    $l204:;
    i190.value += 1;
    goto $l195;
    $l197:;
    panda$core$String* $tmp210 = (panda$core$String*) pandaAlloc(48);
    $tmp210->$class = (panda$core$Class*) &panda$core$String$class;
    $tmp210->refCount.value = 1;
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp210, chars162, size187);
    return $tmp210;
}
panda$core$String* panda$core$UInt32$format$panda$core$String$R$panda$core$String(panda$core$UInt32 self, panda$core$String* p_fmt) {
    panda$core$UInt64 $tmp212 = panda$core$UInt32$convert$R$panda$core$UInt64(self);
    panda$core$String* $tmp213 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), $tmp212, ((panda$core$UInt64) { 4294967295 }), p_fmt);
    return $tmp213;
}

