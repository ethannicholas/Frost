#include "panda/core/UInt64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Formattable.h"
#include "panda/core/Object.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/Key.h"
#include "panda/core/Int64.h"
#include "panda/core/Comparable.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/Real32.h"
#include "panda/core/Panda.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$UInt64$format$panda$core$String$R$panda$core$String(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt64$hash$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$ADD$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SUB$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$UInt64$$BNOT$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$UInt64$convert$R$panda$core$Int32(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$UInt64$convert$R$panda$core$UInt8(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$UInt64$convert$R$panda$core$UInt16(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$UInt64$convert$R$panda$core$UInt32(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$UInt64$convert$R$panda$core$Real32(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
void panda$core$UInt64$cleanup$shim(panda$core$Object* p0) {
    panda$core$UInt64$cleanup(((panda$core$UInt64$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt64$_panda$core$Formattable, { panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt64$_panda$core$Equatable, { panda$core$UInt64$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt64$_panda$collections$Key, { panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$UInt64$class_type panda$core$UInt64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt64$_panda$core$Comparable, { panda$core$UInt64$convert$R$panda$core$String$shim, panda$core$Value$cleanup, panda$core$UInt64$$ADD$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$R$panda$core$UInt64$shim, panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$UInt64$$BNOT$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$hash$R$panda$core$Int64$shim, panda$core$UInt64$convert$R$panda$core$Int8$shim, panda$core$UInt64$convert$R$panda$core$Int16$shim, panda$core$UInt64$convert$R$panda$core$Int32$shim, panda$core$UInt64$convert$R$panda$core$Int64$shim, panda$core$UInt64$convert$R$panda$core$UInt8$shim, panda$core$UInt64$convert$R$panda$core$UInt16$shim, panda$core$UInt64$convert$R$panda$core$UInt32$shim, panda$core$UInt64$convert$R$panda$core$Real32$shim, panda$core$UInt64$convert$R$panda$core$Real64$shim, panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim, panda$core$UInt64$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, NULL, { panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Formattable, { panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Equatable, { panda$core$UInt64$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$Key, { panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim} };

static panda$core$String $s2;
panda$core$UInt64$wrapperclass_type panda$core$UInt64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s2, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Comparable, { panda$core$UInt64$convert$R$panda$core$String$shim, panda$core$Value$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s2 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };

void panda$core$UInt64$init$builtin_uint64(panda$core$UInt64* self, uint64_t p_value) {
    self->value = p_value;
}
void panda$core$UInt64$init$panda$core$UInt8(panda$core$UInt64* self, panda$core$UInt8 p_value) {
    self->value = ((uint64_t) p_value.value);
}
void panda$core$UInt64$init$panda$core$UInt16(panda$core$UInt64* self, panda$core$UInt16 p_value) {
    self->value = ((uint64_t) p_value.value);
}
void panda$core$UInt64$init$panda$core$UInt32(panda$core$UInt64* self, panda$core$UInt32 p_value) {
    self->value = ((uint64_t) p_value.value);
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue3;
    uint64_t $tmp4 = self.value + ((uint64_t) p_other.value);
    $returnValue3 = ((panda$core$UInt64) { $tmp4 });
    return $returnValue3;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue6;
    uint64_t $tmp7 = self.value + ((uint64_t) p_other.value);
    $returnValue6 = ((panda$core$UInt64) { $tmp7 });
    return $returnValue6;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue9;
    uint64_t $tmp10 = self.value + ((uint64_t) p_other.value);
    $returnValue9 = ((panda$core$UInt64) { $tmp10 });
    return $returnValue9;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue12;
    uint64_t $tmp13 = self.value + p_other.value;
    $returnValue12 = ((panda$core$UInt64) { $tmp13 });
    return $returnValue12;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue15;
    uint64_t $tmp16 = self.value - ((uint64_t) p_other.value);
    $returnValue15 = ((panda$core$UInt64) { $tmp16 });
    return $returnValue15;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue18;
    uint64_t $tmp19 = self.value - ((uint64_t) p_other.value);
    $returnValue18 = ((panda$core$UInt64) { $tmp19 });
    return $returnValue18;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue21;
    uint64_t $tmp22 = self.value - ((uint64_t) p_other.value);
    $returnValue21 = ((panda$core$UInt64) { $tmp22 });
    return $returnValue21;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue24;
    uint64_t $tmp25 = self.value - p_other.value;
    $returnValue24 = ((panda$core$UInt64) { $tmp25 });
    return $returnValue24;
}
panda$core$UInt64 panda$core$UInt64$$SUB$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $returnValue27;
    $returnValue27 = ((panda$core$UInt64) { -self.value });
    return $returnValue27;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue30;
    uint64_t $tmp31 = self.value * ((uint64_t) p_other.value);
    $returnValue30 = ((panda$core$UInt64) { $tmp31 });
    return $returnValue30;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue33;
    uint64_t $tmp34 = self.value * ((uint64_t) p_other.value);
    $returnValue33 = ((panda$core$UInt64) { $tmp34 });
    return $returnValue33;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue36;
    uint64_t $tmp37 = self.value * ((uint64_t) p_other.value);
    $returnValue36 = ((panda$core$UInt64) { $tmp37 });
    return $returnValue36;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue39;
    uint64_t $tmp40 = self.value * p_other.value;
    $returnValue39 = ((panda$core$UInt64) { $tmp40 });
    return $returnValue39;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue42;
    uint64_t $tmp43 = self.value / ((uint64_t) p_other.value);
    $returnValue42 = ((panda$core$UInt64) { $tmp43 });
    return $returnValue42;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue45;
    uint64_t $tmp46 = self.value / ((uint64_t) p_other.value);
    $returnValue45 = ((panda$core$UInt64) { $tmp46 });
    return $returnValue45;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue48;
    uint64_t $tmp49 = self.value / ((uint64_t) p_other.value);
    $returnValue48 = ((panda$core$UInt64) { $tmp49 });
    return $returnValue48;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue51;
    uint64_t $tmp52 = self.value / p_other.value;
    $returnValue51 = ((panda$core$UInt64) { $tmp52 });
    return $returnValue51;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue54;
    uint64_t $tmp55 = self.value % ((uint64_t) p_other.value);
    $returnValue54 = ((panda$core$UInt64) { $tmp55 });
    return $returnValue54;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue57;
    uint64_t $tmp58 = self.value % ((uint64_t) p_other.value);
    $returnValue57 = ((panda$core$UInt64) { $tmp58 });
    return $returnValue57;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue60;
    uint64_t $tmp61 = self.value % ((uint64_t) p_other.value);
    $returnValue60 = ((panda$core$UInt64) { $tmp61 });
    return $returnValue60;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue63;
    uint64_t $tmp64 = self.value % p_other.value;
    $returnValue63 = ((panda$core$UInt64) { $tmp64 });
    return $returnValue63;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$Real64 $returnValue66;
    double $tmp67 = ((double) self.value) / ((double) p_other.value);
    $returnValue66 = ((panda$core$Real64) { $tmp67 });
    return $returnValue66;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$Real64 $returnValue69;
    double $tmp70 = ((double) self.value) / ((double) p_other.value);
    $returnValue69 = ((panda$core$Real64) { $tmp70 });
    return $returnValue69;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$Real64 $returnValue72;
    double $tmp73 = ((double) self.value) / ((double) p_other.value);
    $returnValue72 = ((panda$core$Real64) { $tmp73 });
    return $returnValue72;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Real64 $returnValue75;
    double $tmp76 = ((double) self.value) / ((double) p_other.value);
    $returnValue75 = ((panda$core$Real64) { $tmp76 });
    return $returnValue75;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Real64 $returnValue78;
    double $tmp79 = ((double) self.value) / ((double) p_other.value);
    $returnValue78 = ((panda$core$Real64) { $tmp79 });
    return $returnValue78;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Real64 $returnValue81;
    double $tmp82 = ((double) self.value) / ((double) p_other.value);
    $returnValue81 = ((panda$core$Real64) { $tmp82 });
    return $returnValue81;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Real64 $returnValue84;
    double $tmp85 = ((double) self.value) / ((double) p_other.value);
    $returnValue84 = ((panda$core$Real64) { $tmp85 });
    return $returnValue84;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Real64 $returnValue87;
    double $tmp88 = ((double) self.value) / ((double) p_other.value);
    $returnValue87 = ((panda$core$Real64) { $tmp88 });
    return $returnValue87;
}
panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $returnValue90;
    $returnValue90 = ((panda$core$UInt64) { ~self.value });
    return $returnValue90;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue93;
    uint64_t $tmp94 = self.value & ((uint64_t) p_other.value);
    $returnValue93 = ((panda$core$UInt64) { $tmp94 });
    return $returnValue93;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue96;
    uint64_t $tmp97 = self.value & ((uint64_t) p_other.value);
    $returnValue96 = ((panda$core$UInt64) { $tmp97 });
    return $returnValue96;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue99;
    uint64_t $tmp100 = self.value & ((uint64_t) p_other.value);
    $returnValue99 = ((panda$core$UInt64) { $tmp100 });
    return $returnValue99;
}
panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue102;
    int64_t $tmp103 = ((int64_t) self.value) & p_other.value;
    $returnValue102 = ((panda$core$Int64) { $tmp103 });
    return $returnValue102;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue105;
    uint64_t $tmp106 = self.value & ((uint64_t) p_other.value);
    $returnValue105 = ((panda$core$UInt64) { $tmp106 });
    return $returnValue105;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue108;
    uint64_t $tmp109 = self.value & ((uint64_t) p_other.value);
    $returnValue108 = ((panda$core$UInt64) { $tmp109 });
    return $returnValue108;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue111;
    uint64_t $tmp112 = self.value & ((uint64_t) p_other.value);
    $returnValue111 = ((panda$core$UInt64) { $tmp112 });
    return $returnValue111;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue114;
    uint64_t $tmp115 = self.value & p_other.value;
    $returnValue114 = ((panda$core$UInt64) { $tmp115 });
    return $returnValue114;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue117;
    uint64_t $tmp118 = self.value | ((uint64_t) p_other.value);
    $returnValue117 = ((panda$core$UInt64) { $tmp118 });
    return $returnValue117;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue120;
    uint64_t $tmp121 = self.value | ((uint64_t) p_other.value);
    $returnValue120 = ((panda$core$UInt64) { $tmp121 });
    return $returnValue120;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue123;
    uint64_t $tmp124 = self.value | ((uint64_t) p_other.value);
    $returnValue123 = ((panda$core$UInt64) { $tmp124 });
    return $returnValue123;
}
panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue126;
    int64_t $tmp127 = ((int64_t) self.value) | p_other.value;
    $returnValue126 = ((panda$core$Int64) { $tmp127 });
    return $returnValue126;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue129;
    uint64_t $tmp130 = self.value | ((uint64_t) p_other.value);
    $returnValue129 = ((panda$core$UInt64) { $tmp130 });
    return $returnValue129;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue132;
    uint64_t $tmp133 = self.value | ((uint64_t) p_other.value);
    $returnValue132 = ((panda$core$UInt64) { $tmp133 });
    return $returnValue132;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue135;
    uint64_t $tmp136 = self.value | ((uint64_t) p_other.value);
    $returnValue135 = ((panda$core$UInt64) { $tmp136 });
    return $returnValue135;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue138;
    uint64_t $tmp139 = self.value | p_other.value;
    $returnValue138 = ((panda$core$UInt64) { $tmp139 });
    return $returnValue138;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue141;
    uint64_t $tmp142 = self.value ^ ((uint64_t) p_other.value);
    $returnValue141 = ((panda$core$UInt64) { $tmp142 });
    return $returnValue141;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue144;
    uint64_t $tmp145 = self.value ^ ((uint64_t) p_other.value);
    $returnValue144 = ((panda$core$UInt64) { $tmp145 });
    return $returnValue144;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue147;
    uint64_t $tmp148 = self.value ^ ((uint64_t) p_other.value);
    $returnValue147 = ((panda$core$UInt64) { $tmp148 });
    return $returnValue147;
}
panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue150;
    int64_t $tmp151 = ((int64_t) self.value) ^ p_other.value;
    $returnValue150 = ((panda$core$Int64) { $tmp151 });
    return $returnValue150;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue153;
    uint64_t $tmp154 = self.value ^ ((uint64_t) p_other.value);
    $returnValue153 = ((panda$core$UInt64) { $tmp154 });
    return $returnValue153;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue156;
    uint64_t $tmp157 = self.value ^ ((uint64_t) p_other.value);
    $returnValue156 = ((panda$core$UInt64) { $tmp157 });
    return $returnValue156;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue159;
    uint64_t $tmp160 = self.value ^ ((uint64_t) p_other.value);
    $returnValue159 = ((panda$core$UInt64) { $tmp160 });
    return $returnValue159;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue162;
    uint64_t $tmp163 = self.value ^ p_other.value;
    $returnValue162 = ((panda$core$UInt64) { $tmp163 });
    return $returnValue162;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue165;
    uint64_t $tmp166 = self.value << ((uint64_t) p_other.value);
    $returnValue165 = ((panda$core$UInt64) { $tmp166 });
    return $returnValue165;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue168;
    uint64_t $tmp169 = self.value << ((uint64_t) p_other.value);
    $returnValue168 = ((panda$core$UInt64) { $tmp169 });
    return $returnValue168;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue171;
    uint64_t $tmp172 = self.value << ((uint64_t) p_other.value);
    $returnValue171 = ((panda$core$UInt64) { $tmp172 });
    return $returnValue171;
}
panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue174;
    int64_t $tmp175 = ((int64_t) self.value) << p_other.value;
    $returnValue174 = ((panda$core$Int64) { $tmp175 });
    return $returnValue174;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue177;
    uint64_t $tmp178 = self.value << ((uint64_t) p_other.value);
    $returnValue177 = ((panda$core$UInt64) { $tmp178 });
    return $returnValue177;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue180;
    uint64_t $tmp181 = self.value << ((uint64_t) p_other.value);
    $returnValue180 = ((panda$core$UInt64) { $tmp181 });
    return $returnValue180;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue183;
    uint64_t $tmp184 = self.value << ((uint64_t) p_other.value);
    $returnValue183 = ((panda$core$UInt64) { $tmp184 });
    return $returnValue183;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue186;
    uint64_t $tmp187 = self.value << p_other.value;
    $returnValue186 = ((panda$core$UInt64) { $tmp187 });
    return $returnValue186;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue189;
    uint64_t $tmp190 = self.value >> ((uint64_t) p_other.value);
    $returnValue189 = ((panda$core$UInt64) { $tmp190 });
    return $returnValue189;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue192;
    uint64_t $tmp193 = self.value >> ((uint64_t) p_other.value);
    $returnValue192 = ((panda$core$UInt64) { $tmp193 });
    return $returnValue192;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue195;
    uint64_t $tmp196 = self.value >> ((uint64_t) p_other.value);
    $returnValue195 = ((panda$core$UInt64) { $tmp196 });
    return $returnValue195;
}
panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue198;
    int64_t $tmp199 = ((int64_t) self.value) >> p_other.value;
    $returnValue198 = ((panda$core$Int64) { $tmp199 });
    return $returnValue198;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue201;
    uint64_t $tmp202 = self.value >> ((uint64_t) p_other.value);
    $returnValue201 = ((panda$core$UInt64) { $tmp202 });
    return $returnValue201;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue204;
    uint64_t $tmp205 = self.value >> ((uint64_t) p_other.value);
    $returnValue204 = ((panda$core$UInt64) { $tmp205 });
    return $returnValue204;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue207;
    uint64_t $tmp208 = self.value >> ((uint64_t) p_other.value);
    $returnValue207 = ((panda$core$UInt64) { $tmp208 });
    return $returnValue207;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue210;
    uint64_t $tmp211 = self.value >> p_other.value;
    $returnValue210 = ((panda$core$UInt64) { $tmp211 });
    return $returnValue210;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue213;
    bool $tmp214 = self.value == ((uint64_t) p_other.value);
    $returnValue213 = ((panda$core$Bit) { $tmp214 });
    return $returnValue213;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue216;
    bool $tmp217 = self.value == ((uint64_t) p_other.value);
    $returnValue216 = ((panda$core$Bit) { $tmp217 });
    return $returnValue216;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue219;
    bool $tmp220 = self.value == ((uint64_t) p_other.value);
    $returnValue219 = ((panda$core$Bit) { $tmp220 });
    return $returnValue219;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue222;
    bool $tmp223 = self.value == p_other.value;
    $returnValue222 = ((panda$core$Bit) { $tmp223 });
    return $returnValue222;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue225;
    bool $tmp226 = self.value != ((uint64_t) p_other.value);
    $returnValue225 = ((panda$core$Bit) { $tmp226 });
    return $returnValue225;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue228;
    bool $tmp229 = self.value != ((uint64_t) p_other.value);
    $returnValue228 = ((panda$core$Bit) { $tmp229 });
    return $returnValue228;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue231;
    bool $tmp232 = self.value != ((uint64_t) p_other.value);
    $returnValue231 = ((panda$core$Bit) { $tmp232 });
    return $returnValue231;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue234;
    bool $tmp235 = self.value != p_other.value;
    $returnValue234 = ((panda$core$Bit) { $tmp235 });
    return $returnValue234;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue237;
    bool $tmp238 = self.value < ((uint64_t) p_other.value);
    $returnValue237 = ((panda$core$Bit) { $tmp238 });
    return $returnValue237;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue240;
    bool $tmp241 = self.value < ((uint64_t) p_other.value);
    $returnValue240 = ((panda$core$Bit) { $tmp241 });
    return $returnValue240;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue243;
    bool $tmp244 = self.value < ((uint64_t) p_other.value);
    $returnValue243 = ((panda$core$Bit) { $tmp244 });
    return $returnValue243;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue246;
    bool $tmp247 = self.value < p_other.value;
    $returnValue246 = ((panda$core$Bit) { $tmp247 });
    return $returnValue246;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue249;
    bool $tmp250 = self.value > ((uint64_t) p_other.value);
    $returnValue249 = ((panda$core$Bit) { $tmp250 });
    return $returnValue249;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue252;
    bool $tmp253 = self.value > ((uint64_t) p_other.value);
    $returnValue252 = ((panda$core$Bit) { $tmp253 });
    return $returnValue252;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue255;
    bool $tmp256 = self.value > ((uint64_t) p_other.value);
    $returnValue255 = ((panda$core$Bit) { $tmp256 });
    return $returnValue255;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue258;
    bool $tmp259 = self.value > p_other.value;
    $returnValue258 = ((panda$core$Bit) { $tmp259 });
    return $returnValue258;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue261;
    bool $tmp262 = self.value >= ((uint64_t) p_other.value);
    $returnValue261 = ((panda$core$Bit) { $tmp262 });
    return $returnValue261;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue264;
    bool $tmp265 = self.value >= ((uint64_t) p_other.value);
    $returnValue264 = ((panda$core$Bit) { $tmp265 });
    return $returnValue264;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue267;
    bool $tmp268 = self.value >= ((uint64_t) p_other.value);
    $returnValue267 = ((panda$core$Bit) { $tmp268 });
    return $returnValue267;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue270;
    bool $tmp271 = self.value >= p_other.value;
    $returnValue270 = ((panda$core$Bit) { $tmp271 });
    return $returnValue270;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue273;
    bool $tmp274 = self.value <= ((uint64_t) p_other.value);
    $returnValue273 = ((panda$core$Bit) { $tmp274 });
    return $returnValue273;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue276;
    bool $tmp277 = self.value <= ((uint64_t) p_other.value);
    $returnValue276 = ((panda$core$Bit) { $tmp277 });
    return $returnValue276;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue279;
    bool $tmp280 = self.value <= ((uint64_t) p_other.value);
    $returnValue279 = ((panda$core$Bit) { $tmp280 });
    return $returnValue279;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue282;
    bool $tmp283 = self.value <= p_other.value;
    $returnValue282 = ((panda$core$Bit) { $tmp283 });
    return $returnValue282;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue286;
    bool $tmp285 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp285 }).value) {
    {
        $returnValue286 = ((panda$core$UInt64) { self.value });
        return $returnValue286;
    }
    }
    $returnValue286 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue286;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue290;
    bool $tmp289 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp289 }).value) {
    {
        $returnValue290 = ((panda$core$UInt64) { self.value });
        return $returnValue290;
    }
    }
    $returnValue290 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue290;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue294;
    bool $tmp293 = self.value < ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp293 }).value) {
    {
        $returnValue294 = ((panda$core$UInt64) { self.value });
        return $returnValue294;
    }
    }
    $returnValue294 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue294;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue298;
    bool $tmp297 = self.value < p_other.value;
    if (((panda$core$Bit) { $tmp297 }).value) {
    {
        $returnValue298 = ((panda$core$UInt64) { self.value });
        return $returnValue298;
    }
    }
    $returnValue298 = ((panda$core$UInt64) { p_other.value });
    return $returnValue298;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue302;
    bool $tmp301 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp301 }).value) {
    {
        $returnValue302 = ((panda$core$UInt64) { self.value });
        return $returnValue302;
    }
    }
    $returnValue302 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue302;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue306;
    bool $tmp305 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp305 }).value) {
    {
        $returnValue306 = ((panda$core$UInt64) { self.value });
        return $returnValue306;
    }
    }
    $returnValue306 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue306;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue310;
    bool $tmp309 = self.value > ((uint64_t) p_other.value);
    if (((panda$core$Bit) { $tmp309 }).value) {
    {
        $returnValue310 = ((panda$core$UInt64) { self.value });
        return $returnValue310;
    }
    }
    $returnValue310 = ((panda$core$UInt64) { ((uint64_t) p_other.value) });
    return $returnValue310;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue314;
    bool $tmp313 = self.value > p_other.value;
    if (((panda$core$Bit) { $tmp313 }).value) {
    {
        $returnValue314 = ((panda$core$UInt64) { self.value });
        return $returnValue314;
    }
    }
    $returnValue314 = ((panda$core$UInt64) { p_other.value });
    return $returnValue314;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue317;
    panda$core$Int32 $tmp318 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8) { 1 }), p_index);
    panda$core$UInt64 $tmp319 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp318);
    panda$core$Bit $tmp320 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp319, ((panda$core$UInt64) { 0 }));
    $returnValue317 = $tmp320;
    return $returnValue317;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue322;
    panda$core$Int32 $tmp323 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16) { 1 }), p_index);
    panda$core$UInt64 $tmp324 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp323);
    panda$core$Bit $tmp325 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp324, ((panda$core$UInt64) { 0 }));
    $returnValue322 = $tmp325;
    return $returnValue322;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue327;
    panda$core$Int32 $tmp328 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32) { 1 }), p_index);
    panda$core$UInt64 $tmp329 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp328);
    panda$core$Bit $tmp330 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp329, ((panda$core$UInt64) { 0 }));
    $returnValue327 = $tmp330;
    return $returnValue327;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int64 p_index) {
    panda$core$Bit $returnValue332;
    panda$core$Int64 $tmp333 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64) { 1 }), p_index);
    panda$core$Int64 $tmp334 = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp333);
    panda$core$Bit $tmp335 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp334, ((panda$core$Int64) { 0 }));
    $returnValue332 = $tmp335;
    return $returnValue332;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue337;
    panda$core$UInt32 $tmp338 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8) { 1 }), p_index);
    panda$core$UInt64 $tmp339 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp338);
    panda$core$Bit $tmp340 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp339, ((panda$core$UInt64) { 0 }));
    $returnValue337 = $tmp340;
    return $returnValue337;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue342;
    panda$core$UInt32 $tmp343 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16) { 1 }), p_index);
    panda$core$UInt64 $tmp344 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp343);
    panda$core$Bit $tmp345 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp344, ((panda$core$UInt64) { 0 }));
    $returnValue342 = $tmp345;
    return $returnValue342;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue347;
    panda$core$UInt32 $tmp348 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt32) { 1 }), p_index);
    panda$core$UInt64 $tmp349 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp348);
    panda$core$Bit $tmp350 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp349, ((panda$core$UInt64) { 0 }));
    $returnValue347 = $tmp350;
    return $returnValue347;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue352;
    panda$core$UInt64 $tmp353 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 1 }), p_index);
    panda$core$UInt64 $tmp354 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp353);
    panda$core$Bit $tmp355 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp354, ((panda$core$UInt64) { 0 }));
    $returnValue352 = $tmp355;
    return $returnValue352;
}
panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $returnValue357;
    $returnValue357 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue357;
}
panda$core$UInt64$nullable panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable result359;
    panda$core$UInt64$nullable $returnValue361;
    panda$core$UInt64$nullable $tmp360 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result359 = $tmp360;
    if (((panda$core$Bit) { !result359.nonnull }).value) {
    {
        $returnValue361 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue361;
    }
    }
    $returnValue361 = result359;
    return $returnValue361;
}
panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8(panda$core$UInt64 self) {
    panda$core$Int8 $returnValue364;
    $returnValue364 = ((panda$core$Int8) { ((int8_t) self.value) });
    return $returnValue364;
}
panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16(panda$core$UInt64 self) {
    panda$core$Int16 $returnValue366;
    $returnValue366 = ((panda$core$Int16) { ((int16_t) self.value) });
    return $returnValue366;
}
panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32(panda$core$UInt64 self) {
    panda$core$Int32 $returnValue368;
    $returnValue368 = ((panda$core$Int32) { ((int32_t) self.value) });
    return $returnValue368;
}
panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $returnValue370;
    $returnValue370 = ((panda$core$Int64) { ((int64_t) self.value) });
    return $returnValue370;
}
panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8(panda$core$UInt64 self) {
    panda$core$UInt8 $returnValue372;
    $returnValue372 = ((panda$core$UInt8) { ((uint8_t) self.value) });
    return $returnValue372;
}
panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16(panda$core$UInt64 self) {
    panda$core$UInt16 $returnValue374;
    $returnValue374 = ((panda$core$UInt16) { ((uint16_t) self.value) });
    return $returnValue374;
}
panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32(panda$core$UInt64 self) {
    panda$core$UInt32 $returnValue376;
    $returnValue376 = ((panda$core$UInt32) { ((uint32_t) self.value) });
    return $returnValue376;
}
panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32(panda$core$UInt64 self) {
    panda$core$Real32 $returnValue378;
    $returnValue378 = ((panda$core$Real32) { ((float) self.value) });
    return $returnValue378;
}
panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64(panda$core$UInt64 self) {
    panda$core$Real64 $returnValue380;
    $returnValue380 = ((panda$core$Real64) { ((double) self.value) });
    return $returnValue380;
}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String(panda$core$UInt64 self) {
    panda$core$Int64 max382;
    panda$core$Char8* chars383;
    panda$core$Int64 index384;
    panda$core$UInt64 value386;
    panda$core$Char8 $tmp390;
    panda$core$Char8 $tmp401;
    panda$core$Char8 $tmp409;
    panda$core$Int64 size410;
    panda$core$Range$LTpanda$core$Int64$GT $tmp412;
    panda$core$String* $returnValue433;
    panda$core$String* $tmp434;
    panda$core$String* $tmp435;
    max382 = ((panda$core$Int64) { 20 });
    chars383 = ((panda$core$Char8*) pandaZAlloc(max382.value * 1));
    panda$core$Int64 $tmp385 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max382, ((panda$core$Int64) { 1 }));
    index384 = $tmp385;
    value386 = self;
    panda$core$Bit $tmp387 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(value386, ((panda$core$UInt64) { 0 }));
    if ($tmp387.value) {
    {
        $l388:;
        {
            panda$core$UInt64 $tmp391 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value386, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp392 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp391, ((panda$core$UInt64) { 48 }));
            panda$core$UInt8 $tmp393 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp392);
            panda$core$Char8$init$panda$core$UInt8(&$tmp390, $tmp393);
            chars383[index384.value] = $tmp390;
            panda$core$UInt64 $tmp394 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value386, ((panda$core$UInt64) { 10 }));
            value386 = $tmp394;
            panda$core$Int64 $tmp395 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index384, ((panda$core$Int64) { 1 }));
            index384 = $tmp395;
        }
        panda$core$Bit $tmp397 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value386, ((panda$core$UInt64) { 0 }));
        bool $tmp396 = $tmp397.value;
        if ($tmp396) goto $l388;
        $l389:;
        panda$core$Int64 $tmp398 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index384, ((panda$core$Int64) { 1 }));
        index384 = $tmp398;
    }
    }
    else {
    {
        $l399:;
        {
            panda$core$UInt64 $tmp402 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value386, ((panda$core$UInt64) { 10 }));
            panda$core$UInt64 $tmp403 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64) { 48 }), $tmp402);
            panda$core$UInt8 $tmp404 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp403);
            panda$core$Char8$init$panda$core$UInt8(&$tmp401, $tmp404);
            chars383[index384.value] = $tmp401;
            panda$core$UInt64 $tmp405 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value386, ((panda$core$UInt64) { 10 }));
            value386 = $tmp405;
            panda$core$Int64 $tmp406 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index384, ((panda$core$Int64) { 1 }));
            index384 = $tmp406;
        }
        panda$core$Bit $tmp408 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(value386, ((panda$core$UInt64) { 0 }));
        bool $tmp407 = $tmp408.value;
        if ($tmp407) goto $l399;
        $l400:;
        panda$core$Char8$init$panda$core$UInt8(&$tmp409, ((panda$core$UInt8) { 45 }));
        chars383[index384.value] = $tmp409;
    }
    }
    panda$core$Int64 $tmp411 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max382, index384);
    size410 = $tmp411;
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp412, ((panda$core$Int64) { 0 }), size410, ((panda$core$Bit) { false }));
    int64_t $tmp414 = $tmp412.min.value;
    panda$core$Int64 i413 = { $tmp414 };
    int64_t $tmp416 = $tmp412.max.value;
    bool $tmp417 = $tmp412.inclusive.value;
    if ($tmp417) goto $l424; else goto $l425;
    $l424:;
    if ($tmp414 <= $tmp416) goto $l418; else goto $l420;
    $l425:;
    if ($tmp414 < $tmp416) goto $l418; else goto $l420;
    $l418:;
    {
        panda$core$Int64 $tmp426 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i413, index384);
        chars383[i413.value] = chars383[$tmp426.value];
    }
    $l421:;
    int64_t $tmp428 = $tmp416 - i413.value;
    if ($tmp417) goto $l429; else goto $l430;
    $l429:;
    if ((uint64_t) $tmp428 >= 1) goto $l427; else goto $l420;
    $l430:;
    if ((uint64_t) $tmp428 > 1) goto $l427; else goto $l420;
    $l427:;
    i413.value += 1;
    goto $l418;
    $l420:;
    panda$core$String* $tmp436 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp436, chars383, size410);
    $tmp435 = $tmp436;
    $tmp434 = $tmp435;
    $returnValue433 = $tmp434;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp434));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp435));
    return $returnValue433;
}
panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String(panda$core$UInt64 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue438;
    panda$core$String* $tmp439;
    panda$core$String* $tmp440;
    panda$core$String* $tmp441 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String(((panda$core$Bit) { false }), self, ((panda$core$UInt64) { 18446744073709551615u }), p_fmt);
    $tmp440 = $tmp441;
    $tmp439 = $tmp440;
    $returnValue438 = $tmp439;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
    return $returnValue438;
}
void panda$core$UInt64$cleanup(panda$core$UInt64 self) {
}

