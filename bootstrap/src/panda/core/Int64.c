#include "panda/core/Int64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Object.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/core/Comparable.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Key.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real32.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/panda/Int64List.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Char8.h"
__attribute__((weak)) panda$core$Int64 panda$core$Int64$get_count$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int64$get_count$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$Int64$format$panda$core$String$R$panda$core$String(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, ((panda$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, ((panda$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, ((panda$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, ((panda$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, ((panda$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, ((panda$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int64$hash$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Int64$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$ADD$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SUB$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int64$$SUB$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$Int8$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$Int16$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$Int32$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$UInt8$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$UInt16$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$UInt32$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BNOT$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int64$$BNOT$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$abs$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int64$abs$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int64 result = panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int64 result = panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int64$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Int64$convert$R$panda$core$Int8(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int64$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Int64$convert$R$panda$core$Int16(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int64$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Int64$convert$R$panda$core$Int32(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$Int64$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$Int64$convert$R$panda$core$UInt8(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$Int64$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$Int64$convert$R$panda$core$UInt16(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int64$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$Int64$convert$R$panda$core$UInt32(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$Int64$convert$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int64$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Int64$convert$R$panda$core$Real32(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$Int64$convert$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Int64$cleanup$shim(panda$core$Object* p0) {
    panda$core$Int64$cleanup(((panda$core$Int64$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int64$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int64$_panda$collections$CollectionView, { panda$core$Int64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int64$_panda$core$Formattable, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$_panda$core$Equatable, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$core$Int64$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int64$_panda$core$Comparable, { panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int64$_panda$collections$ListView, { panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$_panda$collections$Iterable, { panda$core$Int64$hash$R$panda$core$Int64$shim} };

static panda$core$String $s1;
panda$core$Int64$class_type panda$core$Int64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$_panda$collections$Key, { panda$core$Int64$convert$R$panda$core$String$shim, panda$core$Value$cleanup, panda$core$Int64$$ADD$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SUB$R$panda$core$Int64$shim, panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$DIV$panda$core$Int8$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Int16$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Int32$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Int64$$BNOT$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$abs$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$Int64$get_count$R$panda$core$Int64$shim, panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$Int64$hash$R$panda$core$Int64$shim, panda$core$Int64$convert$R$panda$core$Int8$shim, panda$core$Int64$convert$R$panda$core$Int16$shim, panda$core$Int64$convert$R$panda$core$Int32$shim, panda$core$Int64$convert$R$panda$core$UInt8$shim, panda$core$Int64$convert$R$panda$core$UInt16$shim, panda$core$Int64$convert$R$panda$core$UInt32$shim, panda$core$Int64$convert$R$panda$core$UInt64$shim, panda$core$Int64$convert$R$panda$core$Real32$shim, panda$core$Int64$convert$R$panda$core$Real64$shim, panda$core$Int64$format$panda$core$String$R$panda$core$String$shim, panda$core$Int64$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int64$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$CollectionView, { panda$core$Int64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Formattable, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Equatable, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[8]; } panda$core$Int64$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Comparable, { panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$ListView, { panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$Iterable, { panda$core$Int64$hash$R$panda$core$Int64$shim} };

static panda$core$String $s3;
panda$core$Int64$wrapperclass_type panda$core$Int64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$Key, { panda$core$Int64$convert$R$panda$core$String$shim, panda$core$Value$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s484 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 11, -8642212167383230416, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -5285770296737947933, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 11, -8642212167383230416, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f", 121, 6013435374676263418, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

void panda$core$Int64$init$builtin_int64(panda$core$Int64* self, int64_t p_value) {
    self->value = p_value;
}
void panda$core$Int64$init$panda$core$Int8(panda$core$Int64* self, panda$core$Int8 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$Int16(panda$core$Int64* self, panda$core$Int16 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$Int32(panda$core$Int64* self, panda$core$Int32 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$UInt8(panda$core$Int64* self, panda$core$UInt8 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$UInt16(panda$core$Int64* self, panda$core$UInt16 p_value) {
    self->value = ((int64_t) p_value.value);
}
void panda$core$Int64$init$panda$core$UInt32(panda$core$Int64* self, panda$core$UInt32 p_value) {
    self->value = ((int64_t) p_value.value);
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue4;
    panda$core$Int64 $tmp5;
    int64_t $tmp6 = self.value + ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp5, $tmp6);
    $returnValue4 = $tmp5;
    return $returnValue4;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue8;
    panda$core$Int64 $tmp9;
    int64_t $tmp10 = self.value + ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp9, $tmp10);
    $returnValue8 = $tmp9;
    return $returnValue8;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue12;
    panda$core$Int64 $tmp13;
    int64_t $tmp14 = self.value + ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp13, $tmp14);
    $returnValue12 = $tmp13;
    return $returnValue12;
}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue16;
    panda$core$Int64 $tmp17;
    int64_t $tmp18 = self.value + p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp17, $tmp18);
    $returnValue16 = $tmp17;
    return $returnValue16;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue20;
    panda$core$Int64 $tmp21;
    int64_t $tmp22 = self.value - ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp21, $tmp22);
    $returnValue20 = $tmp21;
    return $returnValue20;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue24;
    panda$core$Int64 $tmp25;
    int64_t $tmp26 = self.value - ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp25, $tmp26);
    $returnValue24 = $tmp25;
    return $returnValue24;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue28;
    panda$core$Int64 $tmp29;
    int64_t $tmp30 = self.value - ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp29, $tmp30);
    $returnValue28 = $tmp29;
    return $returnValue28;
}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue32;
    panda$core$Int64 $tmp33;
    int64_t $tmp34 = self.value - p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp33, $tmp34);
    $returnValue32 = $tmp33;
    return $returnValue32;
}
panda$core$Int64 panda$core$Int64$$SUB$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $returnValue36;
    panda$core$Int64 $tmp37;
    panda$core$Int64$init$builtin_int64(&$tmp37, -self.value);
    $returnValue36 = $tmp37;
    return $returnValue36;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue40;
    panda$core$Int64 $tmp41;
    int64_t $tmp42 = self.value * ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp41, $tmp42);
    $returnValue40 = $tmp41;
    return $returnValue40;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue44;
    panda$core$Int64 $tmp45;
    int64_t $tmp46 = self.value * ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp45, $tmp46);
    $returnValue44 = $tmp45;
    return $returnValue44;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue48;
    panda$core$Int64 $tmp49;
    int64_t $tmp50 = self.value * ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp49, $tmp50);
    $returnValue48 = $tmp49;
    return $returnValue48;
}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue52;
    panda$core$Int64 $tmp53;
    int64_t $tmp54 = self.value * p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp53, $tmp54);
    $returnValue52 = $tmp53;
    return $returnValue52;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue56;
    panda$core$Int64 $tmp57;
    int64_t $tmp58 = self.value / ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp57, $tmp58);
    $returnValue56 = $tmp57;
    return $returnValue56;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue60;
    panda$core$Int64 $tmp61;
    int64_t $tmp62 = self.value / ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp61, $tmp62);
    $returnValue60 = $tmp61;
    return $returnValue60;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue64;
    panda$core$Int64 $tmp65;
    int64_t $tmp66 = self.value / ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp65, $tmp66);
    $returnValue64 = $tmp65;
    return $returnValue64;
}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue68;
    panda$core$Int64 $tmp69;
    int64_t $tmp70 = self.value / p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp69, $tmp70);
    $returnValue68 = $tmp69;
    return $returnValue68;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue72;
    panda$core$Int64 $tmp73;
    int64_t $tmp74 = self.value % ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp73, $tmp74);
    $returnValue72 = $tmp73;
    return $returnValue72;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue76;
    panda$core$Int64 $tmp77;
    int64_t $tmp78 = self.value % ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp77, $tmp78);
    $returnValue76 = $tmp77;
    return $returnValue76;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue80;
    panda$core$Int64 $tmp81;
    int64_t $tmp82 = self.value % ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp81, $tmp82);
    $returnValue80 = $tmp81;
    return $returnValue80;
}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue84;
    panda$core$Int64 $tmp85;
    int64_t $tmp86 = self.value % p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp85, $tmp86);
    $returnValue84 = $tmp85;
    return $returnValue84;
}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int8$R$panda$core$Real64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Real64 $returnValue88;
    panda$core$Real64 $tmp89;
    double $tmp90 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp89, $tmp90);
    $returnValue88 = $tmp89;
    return $returnValue88;
}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int16$R$panda$core$Real64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Real64 $returnValue92;
    panda$core$Real64 $tmp93;
    double $tmp94 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp93, $tmp94);
    $returnValue92 = $tmp93;
    return $returnValue92;
}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int32$R$panda$core$Real64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Real64 $returnValue96;
    panda$core$Real64 $tmp97;
    double $tmp98 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp97, $tmp98);
    $returnValue96 = $tmp97;
    return $returnValue96;
}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Real64 $returnValue100;
    panda$core$Real64 $tmp101;
    double $tmp102 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp101, $tmp102);
    $returnValue100 = $tmp101;
    return $returnValue100;
}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt8$R$panda$core$Real64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Real64 $returnValue104;
    panda$core$Real64 $tmp105;
    double $tmp106 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp105, $tmp106);
    $returnValue104 = $tmp105;
    return $returnValue104;
}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt16$R$panda$core$Real64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Real64 $returnValue108;
    panda$core$Real64 $tmp109;
    double $tmp110 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp109, $tmp110);
    $returnValue108 = $tmp109;
    return $returnValue108;
}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt32$R$panda$core$Real64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Real64 $returnValue112;
    panda$core$Real64 $tmp113;
    double $tmp114 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp113, $tmp114);
    $returnValue112 = $tmp113;
    return $returnValue112;
}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$Real64 $returnValue116;
    panda$core$Real64 $tmp117;
    double $tmp118 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp117, $tmp118);
    $returnValue116 = $tmp117;
    return $returnValue116;
}
panda$core$Int64 panda$core$Int64$$BNOT$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $returnValue120;
    panda$core$Int64 $tmp121;
    panda$core$Int64$init$builtin_int64(&$tmp121, ~self.value);
    $returnValue120 = $tmp121;
    return $returnValue120;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue124;
    panda$core$Int64 $tmp125;
    int64_t $tmp126 = self.value & ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp125, $tmp126);
    $returnValue124 = $tmp125;
    return $returnValue124;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue128;
    panda$core$Int64 $tmp129;
    int64_t $tmp130 = self.value & ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp129, $tmp130);
    $returnValue128 = $tmp129;
    return $returnValue128;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue132;
    panda$core$Int64 $tmp133;
    int64_t $tmp134 = self.value & ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp133, $tmp134);
    $returnValue132 = $tmp133;
    return $returnValue132;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue136;
    panda$core$Int64 $tmp137;
    int64_t $tmp138 = self.value & p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp137, $tmp138);
    $returnValue136 = $tmp137;
    return $returnValue136;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue140;
    panda$core$Int64 $tmp141;
    int64_t $tmp142 = self.value & ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp141, $tmp142);
    $returnValue140 = $tmp141;
    return $returnValue140;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue144;
    panda$core$Int64 $tmp145;
    int64_t $tmp146 = self.value & ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp145, $tmp146);
    $returnValue144 = $tmp145;
    return $returnValue144;
}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue148;
    panda$core$Int64 $tmp149;
    int64_t $tmp150 = self.value & ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp149, $tmp150);
    $returnValue148 = $tmp149;
    return $returnValue148;
}
panda$core$UInt64 panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue152;
    panda$core$UInt64 $tmp153;
    uint64_t $tmp154 = ((uint64_t) self.value) & p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp153, $tmp154);
    $returnValue152 = $tmp153;
    return $returnValue152;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue156;
    panda$core$Int64 $tmp157;
    int64_t $tmp158 = self.value | ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp157, $tmp158);
    $returnValue156 = $tmp157;
    return $returnValue156;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue160;
    panda$core$Int64 $tmp161;
    int64_t $tmp162 = self.value | ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp161, $tmp162);
    $returnValue160 = $tmp161;
    return $returnValue160;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue164;
    panda$core$Int64 $tmp165;
    int64_t $tmp166 = self.value | ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp165, $tmp166);
    $returnValue164 = $tmp165;
    return $returnValue164;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue168;
    panda$core$Int64 $tmp169;
    int64_t $tmp170 = self.value | p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp169, $tmp170);
    $returnValue168 = $tmp169;
    return $returnValue168;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue172;
    panda$core$Int64 $tmp173;
    int64_t $tmp174 = self.value | ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp173, $tmp174);
    $returnValue172 = $tmp173;
    return $returnValue172;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue176;
    panda$core$Int64 $tmp177;
    int64_t $tmp178 = self.value | ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp177, $tmp178);
    $returnValue176 = $tmp177;
    return $returnValue176;
}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue180;
    panda$core$Int64 $tmp181;
    int64_t $tmp182 = self.value | ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp181, $tmp182);
    $returnValue180 = $tmp181;
    return $returnValue180;
}
panda$core$UInt64 panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue184;
    panda$core$UInt64 $tmp185;
    uint64_t $tmp186 = ((uint64_t) self.value) | p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp185, $tmp186);
    $returnValue184 = $tmp185;
    return $returnValue184;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue188;
    panda$core$Int64 $tmp189;
    int64_t $tmp190 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp189, $tmp190);
    $returnValue188 = $tmp189;
    return $returnValue188;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue192;
    panda$core$Int64 $tmp193;
    int64_t $tmp194 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp193, $tmp194);
    $returnValue192 = $tmp193;
    return $returnValue192;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue196;
    panda$core$Int64 $tmp197;
    int64_t $tmp198 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp197, $tmp198);
    $returnValue196 = $tmp197;
    return $returnValue196;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue200;
    panda$core$Int64 $tmp201;
    int64_t $tmp202 = self.value ^ p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp201, $tmp202);
    $returnValue200 = $tmp201;
    return $returnValue200;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue204;
    panda$core$Int64 $tmp205;
    int64_t $tmp206 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp205, $tmp206);
    $returnValue204 = $tmp205;
    return $returnValue204;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue208;
    panda$core$Int64 $tmp209;
    int64_t $tmp210 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp209, $tmp210);
    $returnValue208 = $tmp209;
    return $returnValue208;
}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue212;
    panda$core$Int64 $tmp213;
    int64_t $tmp214 = self.value ^ ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp213, $tmp214);
    $returnValue212 = $tmp213;
    return $returnValue212;
}
panda$core$UInt64 panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue216;
    panda$core$UInt64 $tmp217;
    uint64_t $tmp218 = ((uint64_t) self.value) ^ p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp217, $tmp218);
    $returnValue216 = $tmp217;
    return $returnValue216;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue220;
    panda$core$Int64 $tmp221;
    int64_t $tmp222 = self.value << ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp221, $tmp222);
    $returnValue220 = $tmp221;
    return $returnValue220;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue224;
    panda$core$Int64 $tmp225;
    int64_t $tmp226 = self.value << ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp225, $tmp226);
    $returnValue224 = $tmp225;
    return $returnValue224;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue228;
    panda$core$Int64 $tmp229;
    int64_t $tmp230 = self.value << ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp229, $tmp230);
    $returnValue228 = $tmp229;
    return $returnValue228;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue232;
    panda$core$Int64 $tmp233;
    int64_t $tmp234 = self.value << p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp233, $tmp234);
    $returnValue232 = $tmp233;
    return $returnValue232;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue236;
    panda$core$Int64 $tmp237;
    int64_t $tmp238 = self.value << ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp237, $tmp238);
    $returnValue236 = $tmp237;
    return $returnValue236;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue240;
    panda$core$Int64 $tmp241;
    int64_t $tmp242 = self.value << ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp241, $tmp242);
    $returnValue240 = $tmp241;
    return $returnValue240;
}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue244;
    panda$core$Int64 $tmp245;
    int64_t $tmp246 = self.value << ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp245, $tmp246);
    $returnValue244 = $tmp245;
    return $returnValue244;
}
panda$core$UInt64 panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue248;
    panda$core$UInt64 $tmp249;
    uint64_t $tmp250 = ((uint64_t) self.value) << p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp249, $tmp250);
    $returnValue248 = $tmp249;
    return $returnValue248;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Int64 $returnValue252;
    panda$core$Int64 $tmp253;
    int64_t $tmp254 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp253, $tmp254);
    $returnValue252 = $tmp253;
    return $returnValue252;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Int64 $returnValue256;
    panda$core$Int64 $tmp257;
    int64_t $tmp258 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp257, $tmp258);
    $returnValue256 = $tmp257;
    return $returnValue256;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Int64 $returnValue260;
    panda$core$Int64 $tmp261;
    int64_t $tmp262 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp261, $tmp262);
    $returnValue260 = $tmp261;
    return $returnValue260;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue264;
    panda$core$Int64 $tmp265;
    int64_t $tmp266 = self.value >> p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp265, $tmp266);
    $returnValue264 = $tmp265;
    return $returnValue264;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt8$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue268;
    panda$core$Int64 $tmp269;
    int64_t $tmp270 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp269, $tmp270);
    $returnValue268 = $tmp269;
    return $returnValue268;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt16$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue272;
    panda$core$Int64 $tmp273;
    int64_t $tmp274 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp273, $tmp274);
    $returnValue272 = $tmp273;
    return $returnValue272;
}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$UInt32$R$panda$core$Int64(panda$core$Int64 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue276;
    panda$core$Int64 $tmp277;
    int64_t $tmp278 = self.value >> ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp277, $tmp278);
    $returnValue276 = $tmp277;
    return $returnValue276;
}
panda$core$UInt64 panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue280;
    panda$core$UInt64 $tmp281;
    uint64_t $tmp282 = ((uint64_t) self.value) >> p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp281, $tmp282);
    $returnValue280 = $tmp281;
    return $returnValue280;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue284;
    panda$core$Bit $tmp285;
    bool $tmp286 = self.value == ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp285, $tmp286);
    $returnValue284 = $tmp285;
    return $returnValue284;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue288;
    panda$core$Bit $tmp289;
    bool $tmp290 = self.value == ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp289, $tmp290);
    $returnValue288 = $tmp289;
    return $returnValue288;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue292;
    panda$core$Bit $tmp293;
    bool $tmp294 = self.value == ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp293, $tmp294);
    $returnValue292 = $tmp293;
    return $returnValue292;
}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue296;
    panda$core$Bit $tmp297;
    bool $tmp298 = self.value == p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp297, $tmp298);
    $returnValue296 = $tmp297;
    return $returnValue296;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue300;
    panda$core$Bit $tmp301;
    bool $tmp302 = self.value != ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp301, $tmp302);
    $returnValue300 = $tmp301;
    return $returnValue300;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue304;
    panda$core$Bit $tmp305;
    bool $tmp306 = self.value != ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp305, $tmp306);
    $returnValue304 = $tmp305;
    return $returnValue304;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue308;
    panda$core$Bit $tmp309;
    bool $tmp310 = self.value != ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp309, $tmp310);
    $returnValue308 = $tmp309;
    return $returnValue308;
}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue312;
    panda$core$Bit $tmp313;
    bool $tmp314 = self.value != p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp313, $tmp314);
    $returnValue312 = $tmp313;
    return $returnValue312;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue316;
    panda$core$Bit $tmp317;
    bool $tmp318 = self.value < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp317, $tmp318);
    $returnValue316 = $tmp317;
    return $returnValue316;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue320;
    panda$core$Bit $tmp321;
    bool $tmp322 = self.value < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp321, $tmp322);
    $returnValue320 = $tmp321;
    return $returnValue320;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue324;
    panda$core$Bit $tmp325;
    bool $tmp326 = self.value < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp325, $tmp326);
    $returnValue324 = $tmp325;
    return $returnValue324;
}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue328;
    panda$core$Bit $tmp329;
    bool $tmp330 = self.value < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp329, $tmp330);
    $returnValue328 = $tmp329;
    return $returnValue328;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue332;
    panda$core$Bit $tmp333;
    bool $tmp334 = self.value > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp333, $tmp334);
    $returnValue332 = $tmp333;
    return $returnValue332;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue336;
    panda$core$Bit $tmp337;
    bool $tmp338 = self.value > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp337, $tmp338);
    $returnValue336 = $tmp337;
    return $returnValue336;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue340;
    panda$core$Bit $tmp341;
    bool $tmp342 = self.value > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp341, $tmp342);
    $returnValue340 = $tmp341;
    return $returnValue340;
}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue344;
    panda$core$Bit $tmp345;
    bool $tmp346 = self.value > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp345, $tmp346);
    $returnValue344 = $tmp345;
    return $returnValue344;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue348;
    panda$core$Bit $tmp349;
    bool $tmp350 = self.value >= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp349, $tmp350);
    $returnValue348 = $tmp349;
    return $returnValue348;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue352;
    panda$core$Bit $tmp353;
    bool $tmp354 = self.value >= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp353, $tmp354);
    $returnValue352 = $tmp353;
    return $returnValue352;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue356;
    panda$core$Bit $tmp357;
    bool $tmp358 = self.value >= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp357, $tmp358);
    $returnValue356 = $tmp357;
    return $returnValue356;
}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue360;
    panda$core$Bit $tmp361;
    bool $tmp362 = self.value >= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp361, $tmp362);
    $returnValue360 = $tmp361;
    return $returnValue360;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue364;
    panda$core$Bit $tmp365;
    bool $tmp366 = self.value <= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp365, $tmp366);
    $returnValue364 = $tmp365;
    return $returnValue364;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue368;
    panda$core$Bit $tmp369;
    bool $tmp370 = self.value <= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp369, $tmp370);
    $returnValue368 = $tmp369;
    return $returnValue368;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue372;
    panda$core$Bit $tmp373;
    bool $tmp374 = self.value <= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp373, $tmp374);
    $returnValue372 = $tmp373;
    return $returnValue372;
}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue376;
    panda$core$Bit $tmp377;
    bool $tmp378 = self.value <= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp377, $tmp378);
    $returnValue376 = $tmp377;
    return $returnValue376;
}
panda$core$Int64 panda$core$Int64$abs$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $tmp380;
    panda$core$Int64 $returnValue382;
    panda$core$Int64$init$builtin_int64(&$tmp380, 0);
    panda$core$Bit $tmp381 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self, $tmp380);
    if ($tmp381.value) {
    {
        panda$core$Int64 $tmp383 = panda$core$Int64$$SUB$R$panda$core$Int64(self);
        $returnValue382 = $tmp383;
        return $returnValue382;
    }
    }
    $returnValue382 = self;
    return $returnValue382;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $tmp386;
    panda$core$Int64 $returnValue388;
    panda$core$Int64 $tmp389;
    panda$core$Int64 $tmp391;
    bool $tmp387 = self.value < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp386, $tmp387);
    if ($tmp386.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp389, self.value);
        $returnValue388 = $tmp389;
        return $returnValue388;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp391, ((int64_t) p_other.value));
    $returnValue388 = $tmp391;
    return $returnValue388;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $tmp393;
    panda$core$Int64 $returnValue395;
    panda$core$Int64 $tmp396;
    panda$core$Int64 $tmp398;
    bool $tmp394 = self.value < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp393, $tmp394);
    if ($tmp393.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp396, self.value);
        $returnValue395 = $tmp396;
        return $returnValue395;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp398, ((int64_t) p_other.value));
    $returnValue395 = $tmp398;
    return $returnValue395;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $tmp400;
    panda$core$Int64 $returnValue402;
    panda$core$Int64 $tmp403;
    panda$core$Int64 $tmp405;
    bool $tmp401 = self.value < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp400, $tmp401);
    if ($tmp400.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp403, self.value);
        $returnValue402 = $tmp403;
        return $returnValue402;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp405, ((int64_t) p_other.value));
    $returnValue402 = $tmp405;
    return $returnValue402;
}
panda$core$Int64 panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $tmp407;
    panda$core$Int64 $returnValue409;
    panda$core$Int64 $tmp410;
    panda$core$Int64 $tmp412;
    bool $tmp408 = self.value < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp407, $tmp408);
    if ($tmp407.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp410, self.value);
        $returnValue409 = $tmp410;
        return $returnValue409;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp412, p_other.value);
    $returnValue409 = $tmp412;
    return $returnValue409;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int8 p_other) {
    panda$core$Bit $tmp414;
    panda$core$Int64 $returnValue416;
    panda$core$Int64 $tmp417;
    panda$core$Int64 $tmp419;
    bool $tmp415 = self.value > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp414, $tmp415);
    if ($tmp414.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp417, self.value);
        $returnValue416 = $tmp417;
        return $returnValue416;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp419, ((int64_t) p_other.value));
    $returnValue416 = $tmp419;
    return $returnValue416;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int16 p_other) {
    panda$core$Bit $tmp421;
    panda$core$Int64 $returnValue423;
    panda$core$Int64 $tmp424;
    panda$core$Int64 $tmp426;
    bool $tmp422 = self.value > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp421, $tmp422);
    if ($tmp421.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp424, self.value);
        $returnValue423 = $tmp424;
        return $returnValue423;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp426, ((int64_t) p_other.value));
    $returnValue423 = $tmp426;
    return $returnValue423;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int32 p_other) {
    panda$core$Bit $tmp428;
    panda$core$Int64 $returnValue430;
    panda$core$Int64 $tmp431;
    panda$core$Int64 $tmp433;
    bool $tmp429 = self.value > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp428, $tmp429);
    if ($tmp428.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp431, self.value);
        $returnValue430 = $tmp431;
        return $returnValue430;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp433, ((int64_t) p_other.value));
    $returnValue430 = $tmp433;
    return $returnValue430;
}
panda$core$Int64 panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 self, panda$core$Int64 p_other) {
    panda$core$Bit $tmp435;
    panda$core$Int64 $returnValue437;
    panda$core$Int64 $tmp438;
    panda$core$Int64 $tmp440;
    bool $tmp436 = self.value > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp435, $tmp436);
    if ($tmp435.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp438, self.value);
        $returnValue437 = $tmp438;
        return $returnValue437;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp440, p_other.value);
    $returnValue437 = $tmp440;
    return $returnValue437;
}
panda$collections$ListView* panda$core$Int64$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$core$Int64$GT(panda$core$Range$LTpanda$core$Int64$GT p_range) {
    panda$collections$ListView* $returnValue442;
    panda$collections$ListView* $tmp443;
    org$pandalanguage$panda$Int64List* $tmp444;
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp446;
    panda$core$Int64 $tmp447;
    org$pandalanguage$panda$Int64List* $tmp445 = (org$pandalanguage$panda$Int64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$Int64List$class);
    panda$core$Int64$init$builtin_int64(&$tmp447, 1);
    panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp446, p_range.min, p_range.max, $tmp447, p_range.inclusive);
    org$pandalanguage$panda$Int64List$init$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT($tmp445, $tmp446);
    $tmp444 = $tmp445;
    $tmp443 = ((panda$collections$ListView*) $tmp444);
    $returnValue442 = $tmp443;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp443));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
    return $returnValue442;
}
panda$collections$ListView* panda$core$Int64$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$core$Int64$GT(panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT p_range) {
    panda$collections$ListView* $returnValue449;
    panda$collections$ListView* $tmp450;
    org$pandalanguage$panda$Int64List* $tmp451;
    org$pandalanguage$panda$Int64List* $tmp452 = (org$pandalanguage$panda$Int64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$Int64List$class);
    org$pandalanguage$panda$Int64List$init$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT($tmp452, p_range);
    $tmp451 = $tmp452;
    $tmp450 = ((panda$collections$ListView*) $tmp451);
    $returnValue449 = $tmp450;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp450));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
    return $returnValue449;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue454;
    panda$core$Int8 $tmp455;
    panda$core$Int64 $tmp458;
    panda$core$Int8$init$builtin_int8(&$tmp455, 1);
    panda$core$Int32 $tmp456 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32($tmp455, p_index);
    panda$core$Int64 $tmp457 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp456);
    panda$core$Int64$init$builtin_int64(&$tmp458, 0);
    panda$core$Bit $tmp459 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp457, $tmp458);
    $returnValue454 = $tmp459;
    return $returnValue454;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue461;
    panda$core$Int16 $tmp462;
    panda$core$Int64 $tmp465;
    panda$core$Int16$init$builtin_int16(&$tmp462, 1);
    panda$core$Int32 $tmp463 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32($tmp462, p_index);
    panda$core$Int64 $tmp464 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp463);
    panda$core$Int64$init$builtin_int64(&$tmp465, 0);
    panda$core$Bit $tmp466 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp464, $tmp465);
    $returnValue461 = $tmp466;
    return $returnValue461;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue468;
    panda$core$Int32 $tmp469;
    panda$core$Int64 $tmp472;
    panda$core$Int32$init$builtin_int32(&$tmp469, 1);
    panda$core$Int32 $tmp470 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp469, p_index);
    panda$core$Int64 $tmp471 = panda$core$Int64$$BAND$panda$core$Int32$R$panda$core$Int64(self, $tmp470);
    panda$core$Int64$init$builtin_int64(&$tmp472, 0);
    panda$core$Bit $tmp473 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp471, $tmp472);
    $returnValue468 = $tmp473;
    return $returnValue468;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp476;
    panda$core$Bit $returnValue486;
    panda$core$Int64 $tmp487;
    panda$core$Int64 $tmp490;
    panda$core$Int64$init$builtin_int64(&$tmp476, 0);
    panda$core$Bit $tmp477 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp476);
    bool $tmp475 = $tmp477.value;
    if (!$tmp475) goto $l478;
    panda$core$Int64 $tmp479 = panda$core$Int64$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp480 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp479);
    $tmp475 = $tmp480.value;
    $l478:;
    panda$core$Bit $tmp481 = { $tmp475 };
    if ($tmp481.value) goto $l482; else goto $l483;
    $l483:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s484, (panda$core$Int64) { 646 }, &$s485);
    abort();
    $l482:;
    panda$core$Int64$init$builtin_int64(&$tmp487, 1);
    panda$core$Int64 $tmp488 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp487, p_index);
    panda$core$Int64 $tmp489 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp488);
    panda$core$Int64$init$builtin_int64(&$tmp490, 0);
    panda$core$Bit $tmp491 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp489, $tmp490);
    $returnValue486 = $tmp491;
    return $returnValue486;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue493;
    panda$core$UInt8 $tmp494;
    panda$core$Int64 $tmp497;
    panda$core$UInt8$init$builtin_uint8(&$tmp494, 1);
    panda$core$UInt32 $tmp495 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32($tmp494, p_index);
    panda$core$Int64 $tmp496 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp495);
    panda$core$Int64$init$builtin_int64(&$tmp497, 0);
    panda$core$Bit $tmp498 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp496, $tmp497);
    $returnValue493 = $tmp498;
    return $returnValue493;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue500;
    panda$core$UInt16 $tmp501;
    panda$core$Int64 $tmp504;
    panda$core$UInt16$init$builtin_uint16(&$tmp501, 1);
    panda$core$UInt32 $tmp502 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32($tmp501, p_index);
    panda$core$Int64 $tmp503 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp502);
    panda$core$Int64$init$builtin_int64(&$tmp504, 0);
    panda$core$Bit $tmp505 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp503, $tmp504);
    $returnValue500 = $tmp505;
    return $returnValue500;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue507;
    panda$core$UInt32 $tmp508;
    panda$core$Int64 $tmp511;
    panda$core$UInt32$init$builtin_uint32(&$tmp508, 1);
    panda$core$UInt32 $tmp509 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32($tmp508, p_index);
    panda$core$Int64 $tmp510 = panda$core$Int64$$BAND$panda$core$UInt32$R$panda$core$Int64(self, $tmp509);
    panda$core$Int64$init$builtin_int64(&$tmp511, 0);
    panda$core$Bit $tmp512 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp510, $tmp511);
    $returnValue507 = $tmp512;
    return $returnValue507;
}
panda$core$Bit panda$core$Int64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int64 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue514;
    panda$core$UInt64 $tmp515;
    panda$core$UInt64 $tmp518;
    panda$core$UInt64$init$builtin_uint64(&$tmp515, 1);
    panda$core$UInt64 $tmp516 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64($tmp515, p_index);
    panda$core$UInt64 $tmp517 = panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp516);
    panda$core$UInt64$init$builtin_uint64(&$tmp518, 0);
    panda$core$Bit $tmp519 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp517, $tmp518);
    $returnValue514 = $tmp519;
    return $returnValue514;
}
panda$core$Int64 panda$core$Int64$get_count$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $returnValue521;
    panda$core$Int64 $tmp522;
    panda$core$Int64$init$builtin_int64(&$tmp522, 64);
    $returnValue521 = $tmp522;
    return $returnValue521;
}
panda$collections$Iterator* panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$Int64 self) {
    panda$collections$Iterator* $returnValue524;
    panda$collections$Iterator* $tmp525;
    org$pandalanguage$panda$IntBitIterator* $tmp526;
    panda$core$UInt64 $tmp529;
    org$pandalanguage$panda$IntBitIterator* $tmp527 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
    panda$core$UInt64 $tmp528 = panda$core$Int64$convert$R$panda$core$UInt64(self);
    panda$core$UInt64$init$builtin_uint64(&$tmp529, 9223372036854775808u);
    org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp527, $tmp528, $tmp529);
    $tmp526 = $tmp527;
    $tmp525 = ((panda$collections$Iterator*) $tmp526);
    $returnValue524 = $tmp525;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp525));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp526));
    return $returnValue524;
}
panda$core$Int64 panda$core$Int64$hash$R$panda$core$Int64(panda$core$Int64 self) {
    panda$core$Int64 $returnValue531;
    panda$core$Int64 $tmp532;
    panda$core$Int64$init$builtin_int64(&$tmp532, self.value);
    $returnValue531 = $tmp532;
    return $returnValue531;
}
panda$core$Int64$nullable panda$core$Int64$parse$panda$core$String$panda$core$Int64$R$panda$core$Int64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$Int64 $tmp535;
    panda$core$Int64 $tmp538;
    panda$core$UInt64$nullable abs547;
    panda$core$String* $tmp548;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp549;
    panda$core$Int64 $tmp550;
    panda$core$Bit $tmp551;
    panda$core$Int64$nullable $returnValue554;
    panda$core$UInt64$nullable result559;
    panda$core$Int64$init$builtin_int64(&$tmp535, 2);
    panda$core$Bit $tmp536 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_radix, $tmp535);
    bool $tmp534 = $tmp536.value;
    if (!$tmp534) goto $l537;
    panda$core$Int64$init$builtin_int64(&$tmp538, 36);
    panda$core$Bit $tmp539 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_radix, $tmp538);
    $tmp534 = $tmp539.value;
    $l537:;
    panda$core$Bit $tmp540 = { $tmp534 };
    if ($tmp540.value) goto $l541; else goto $l542;
    $l542:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s543, (panda$core$Int64) { 689 }, &$s544);
    abort();
    $l541:;
    panda$core$Bit $tmp546 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s545);
    if ($tmp546.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp550, 1);
        panda$core$Bit$init$builtin_bit(&$tmp551, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp549, ((panda$core$Int64$nullable) { $tmp550, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp551);
        panda$core$String* $tmp552 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp549);
        $tmp548 = $tmp552;
        panda$core$UInt64$nullable $tmp553 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp548, p_radix);
        abs547 = $tmp553;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
        if (((panda$core$Bit) { !abs547.nonnull }).value) {
        {
            $returnValue554 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue554;
        }
        }
        panda$core$Int64 $tmp556 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) abs547.value));
        panda$core$Int64 $tmp557 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp556);
        $returnValue554 = ((panda$core$Int64$nullable) { $tmp557, true });
        return $returnValue554;
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp560 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result559 = $tmp560;
        if (((panda$core$Bit) { !result559.nonnull }).value) {
        {
            $returnValue554 = ((panda$core$Int64$nullable) { .nonnull = false });
            return $returnValue554;
        }
        }
        panda$core$Int64 $tmp562 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) result559.value));
        $returnValue554 = ((panda$core$Int64$nullable) { $tmp562, true });
        return $returnValue554;
    }
    }
    abort();
}
panda$core$Int8 panda$core$Int64$convert$R$panda$core$Int8(panda$core$Int64 self) {
    panda$core$Int8 $returnValue564;
    panda$core$Int8 $tmp565;
    panda$core$Int8$init$builtin_int8(&$tmp565, ((int8_t) self.value));
    $returnValue564 = $tmp565;
    return $returnValue564;
}
panda$core$Int16 panda$core$Int64$convert$R$panda$core$Int16(panda$core$Int64 self) {
    panda$core$Int16 $returnValue567;
    panda$core$Int16 $tmp568;
    panda$core$Int16$init$builtin_int16(&$tmp568, ((int16_t) self.value));
    $returnValue567 = $tmp568;
    return $returnValue567;
}
panda$core$Int32 panda$core$Int64$convert$R$panda$core$Int32(panda$core$Int64 self) {
    panda$core$Int32 $returnValue570;
    panda$core$Int32 $tmp571;
    panda$core$Int32$init$builtin_int32(&$tmp571, ((int32_t) self.value));
    $returnValue570 = $tmp571;
    return $returnValue570;
}
panda$core$UInt8 panda$core$Int64$convert$R$panda$core$UInt8(panda$core$Int64 self) {
    panda$core$UInt8 $returnValue573;
    panda$core$UInt8 $tmp574;
    panda$core$UInt8$init$builtin_uint8(&$tmp574, ((uint8_t) self.value));
    $returnValue573 = $tmp574;
    return $returnValue573;
}
panda$core$UInt16 panda$core$Int64$convert$R$panda$core$UInt16(panda$core$Int64 self) {
    panda$core$UInt16 $returnValue576;
    panda$core$UInt16 $tmp577;
    panda$core$UInt16$init$builtin_uint16(&$tmp577, ((uint16_t) self.value));
    $returnValue576 = $tmp577;
    return $returnValue576;
}
panda$core$UInt32 panda$core$Int64$convert$R$panda$core$UInt32(panda$core$Int64 self) {
    panda$core$UInt32 $returnValue579;
    panda$core$UInt32 $tmp580;
    panda$core$UInt32$init$builtin_uint32(&$tmp580, ((uint32_t) self.value));
    $returnValue579 = $tmp580;
    return $returnValue579;
}
panda$core$UInt64 panda$core$Int64$convert$R$panda$core$UInt64(panda$core$Int64 self) {
    panda$core$UInt64 $returnValue582;
    panda$core$UInt64 $tmp583;
    panda$core$UInt64$init$builtin_uint64(&$tmp583, ((uint64_t) self.value));
    $returnValue582 = $tmp583;
    return $returnValue582;
}
panda$core$Real32 panda$core$Int64$convert$R$panda$core$Real32(panda$core$Int64 self) {
    panda$core$Real32 $returnValue585;
    panda$core$Real32 $tmp586;
    panda$core$Real32$init$builtin_float32(&$tmp586, ((float) self.value));
    $returnValue585 = $tmp586;
    return $returnValue585;
}
panda$core$Real64 panda$core$Int64$convert$R$panda$core$Real64(panda$core$Int64 self) {
    panda$core$Real64 $returnValue588;
    panda$core$Real64 $tmp589;
    panda$core$Real64$init$builtin_float64(&$tmp589, ((double) self.value));
    $returnValue588 = $tmp589;
    return $returnValue588;
}
panda$core$String* panda$core$Int64$convert$R$panda$core$String(panda$core$Int64 self) {
    panda$core$Int64 max591;
    panda$core$Int64 $tmp592;
    panda$core$Char8* chars593;
    panda$core$Int64 index594;
    panda$core$Int64 $tmp595;
    panda$core$Int64 value597;
    panda$core$Int64 $tmp598;
    panda$core$Char8 $tmp602;
    panda$core$Int64 $tmp603;
    panda$core$Int64 $tmp605;
    panda$core$Int64 $tmp608;
    panda$core$Int64 $tmp610;
    panda$core$Int64 $tmp613;
    panda$core$Int64 $tmp615;
    panda$core$Char8 $tmp619;
    panda$core$Int64 $tmp620;
    panda$core$Int64 $tmp621;
    panda$core$Int64 $tmp625;
    panda$core$Int64 $tmp627;
    panda$core$Int64 $tmp630;
    panda$core$Char8 $tmp632;
    panda$core$UInt8 $tmp633;
    panda$core$Int64 size634;
    panda$core$Range$LTpanda$core$Int64$GT $tmp636;
    panda$core$Int64 $tmp637;
    panda$core$Bit $tmp638;
    panda$core$String* $returnValue659;
    panda$core$String* $tmp660;
    panda$core$String* $tmp661;
    panda$core$Int64$init$builtin_int64(&$tmp592, 20);
    max591 = $tmp592;
    chars593 = ((panda$core$Char8*) pandaZAlloc(max591.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp595, 1);
    panda$core$Int64 $tmp596 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max591, $tmp595);
    index594 = $tmp596;
    value597 = self;
    panda$core$Int64$init$builtin_int64(&$tmp598, 0);
    panda$core$Bit $tmp599 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(value597, $tmp598);
    if ($tmp599.value) {
    {
        $l600:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp603, 10);
            panda$core$Int64 $tmp604 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value597, $tmp603);
            panda$core$Int64$init$builtin_int64(&$tmp605, 48);
            panda$core$Int64 $tmp606 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp604, $tmp605);
            panda$core$UInt8 $tmp607 = panda$core$Int64$convert$R$panda$core$UInt8($tmp606);
            panda$core$Char8$init$panda$core$UInt8(&$tmp602, $tmp607);
            chars593[index594.value] = $tmp602;
            panda$core$Int64$init$builtin_int64(&$tmp608, 10);
            panda$core$Int64 $tmp609 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value597, $tmp608);
            value597 = $tmp609;
            panda$core$Int64$init$builtin_int64(&$tmp610, 1);
            panda$core$Int64 $tmp611 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index594, $tmp610);
            index594 = $tmp611;
        }
        panda$core$Int64$init$builtin_int64(&$tmp613, 0);
        panda$core$Bit $tmp614 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(value597, $tmp613);
        bool $tmp612 = $tmp614.value;
        if ($tmp612) goto $l600;
        $l601:;
        panda$core$Int64$init$builtin_int64(&$tmp615, 1);
        panda$core$Int64 $tmp616 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index594, $tmp615);
        index594 = $tmp616;
    }
    }
    else {
    {
        $l617:;
        {
            panda$core$Int64$init$builtin_int64(&$tmp620, 48);
            panda$core$Int64$init$builtin_int64(&$tmp621, 10);
            panda$core$Int64 $tmp622 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(value597, $tmp621);
            panda$core$Int64 $tmp623 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp620, $tmp622);
            panda$core$UInt8 $tmp624 = panda$core$Int64$convert$R$panda$core$UInt8($tmp623);
            panda$core$Char8$init$panda$core$UInt8(&$tmp619, $tmp624);
            chars593[index594.value] = $tmp619;
            panda$core$Int64$init$builtin_int64(&$tmp625, 10);
            panda$core$Int64 $tmp626 = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(value597, $tmp625);
            value597 = $tmp626;
            panda$core$Int64$init$builtin_int64(&$tmp627, 1);
            panda$core$Int64 $tmp628 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index594, $tmp627);
            index594 = $tmp628;
        }
        panda$core$Int64$init$builtin_int64(&$tmp630, 0);
        panda$core$Bit $tmp631 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(value597, $tmp630);
        bool $tmp629 = $tmp631.value;
        if ($tmp629) goto $l617;
        $l618:;
        panda$core$UInt8$init$builtin_uint8(&$tmp633, 45);
        panda$core$Char8$init$panda$core$UInt8(&$tmp632, $tmp633);
        chars593[index594.value] = $tmp632;
    }
    }
    panda$core$Int64 $tmp635 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max591, index594);
    size634 = $tmp635;
    panda$core$Int64$init$builtin_int64(&$tmp637, 0);
    panda$core$Bit$init$builtin_bit(&$tmp638, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp636, $tmp637, size634, $tmp638);
    int64_t $tmp640 = $tmp636.min.value;
    panda$core$Int64 i639 = { $tmp640 };
    int64_t $tmp642 = $tmp636.max.value;
    bool $tmp643 = $tmp636.inclusive.value;
    if ($tmp643) goto $l650; else goto $l651;
    $l650:;
    if ($tmp640 <= $tmp642) goto $l644; else goto $l646;
    $l651:;
    if ($tmp640 < $tmp642) goto $l644; else goto $l646;
    $l644:;
    {
        panda$core$Int64 $tmp652 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i639, index594);
        chars593[i639.value] = chars593[$tmp652.value];
    }
    $l647:;
    int64_t $tmp654 = $tmp642 - i639.value;
    if ($tmp643) goto $l655; else goto $l656;
    $l655:;
    if ((uint64_t) $tmp654 >= 1) goto $l653; else goto $l646;
    $l656:;
    if ((uint64_t) $tmp654 > 1) goto $l653; else goto $l646;
    $l653:;
    i639.value += 1;
    goto $l644;
    $l646:;
    panda$core$String* $tmp662 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp662, chars593, size634);
    $tmp661 = $tmp662;
    $tmp660 = $tmp661;
    $returnValue659 = $tmp660;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp660));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
    return $returnValue659;
}
panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String(panda$core$Int64 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue664;
    panda$core$String* $tmp665;
    panda$core$String* $tmp666;
    panda$core$Bit $tmp667;
    panda$core$UInt64 $tmp671;
    bool $tmp668 = self.value < 0;
    panda$core$Bit$init$builtin_bit(&$tmp667, $tmp668);
    panda$core$Int64 $tmp669 = panda$core$Int64$abs$R$panda$core$Int64(self);
    panda$core$UInt64 $tmp670 = panda$core$Int64$convert$R$panda$core$UInt64($tmp669);
    panda$core$UInt64$init$builtin_uint64(&$tmp671, 18446744073709551615u);
    panda$core$String* $tmp672 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp667, $tmp670, $tmp671, p_fmt);
    $tmp666 = $tmp672;
    $tmp665 = $tmp666;
    $returnValue664 = $tmp665;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp665));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp666));
    return $returnValue664;
}
void panda$core$Int64$cleanup(panda$core$Int64 self) {
}

