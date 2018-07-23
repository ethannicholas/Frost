#include "panda/core/UInt64.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Formattable.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Key.h"
#include "panda/core/Comparable.h"
#include "panda/collections/Iterable.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/Real32.h"
#include "panda/core/Range.LTpanda/core/UInt64.GT.h"
#include "org/pandalanguage/panda/UInt64List.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt64.Cpanda/core/UInt64.GT.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$get_count$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt64$get_count$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$UInt64$format$panda$core$String$R$panda$core$String(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt64$hash$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, ((panda$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$UInt64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$UInt64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$UInt64$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$ADD$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SUB$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$UInt64$$SUB$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$UInt64$$BNOT$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt64 result = panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt64 result = panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt64 result = panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$UInt64$convert$R$panda$core$Int32(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$UInt64$convert$R$panda$core$UInt8(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$UInt64$convert$R$panda$core$UInt16(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$UInt64$convert$R$panda$core$UInt32(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$UInt64$convert$R$panda$core$Real32(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$UInt64$convert$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$UInt64$cleanup$shim(panda$core$Object* p0) {
    panda$core$UInt64$cleanup(((panda$core$UInt64$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$UInt64$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt64$_panda$collections$CollectionView, { panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$UInt64$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt64$_panda$core$Formattable, { panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt64$_panda$collections$ListView, { panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt64$_panda$core$Equatable, { panda$core$UInt64$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt64$_panda$collections$Key, { panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt64$_panda$core$Comparable, { panda$core$UInt64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s1;
panda$core$UInt64$class_type panda$core$UInt64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt64$_panda$collections$Iterable, { panda$core$UInt64$convert$R$panda$core$String$shim, panda$core$Value$cleanup, panda$core$UInt64$$ADD$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$R$panda$core$UInt64$shim, panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$UInt64$$BNOT$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$get_count$R$panda$core$Int64$shim, panda$core$UInt64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$UInt64$hash$R$panda$core$Int64$shim, panda$core$UInt64$convert$R$panda$core$Int8$shim, panda$core$UInt64$convert$R$panda$core$Int16$shim, panda$core$UInt64$convert$R$panda$core$Int32$shim, panda$core$UInt64$convert$R$panda$core$Int64$shim, panda$core$UInt64$convert$R$panda$core$UInt8$shim, panda$core$UInt64$convert$R$panda$core$UInt16$shim, panda$core$UInt64$convert$R$panda$core$UInt32$shim, panda$core$UInt64$convert$R$panda$core$Real32$shim, panda$core$UInt64$convert$R$panda$core$Real64$shim, panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim, panda$core$UInt64$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$UInt64$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$CollectionView, { panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$UInt64$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Formattable, { panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$ListView, { panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Equatable, { panda$core$UInt64$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$Key, { panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Comparable, { panda$core$UInt64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s3;
panda$core$UInt64$wrapperclass_type panda$core$UInt64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$Iterable, { panda$core$UInt64$convert$R$panda$core$String$shim, panda$core$Value$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 12, 8498199453932512261, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, 8839777452243195848, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 12, 8498199453932512261, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f", 123, -9161369319874412180, NULL };

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
    panda$core$UInt64 $returnValue4;
    panda$core$UInt64 $tmp5;
    uint64_t $tmp6 = self.value + ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp5, $tmp6);
    $returnValue4 = $tmp5;
    return $returnValue4;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue8;
    panda$core$UInt64 $tmp9;
    uint64_t $tmp10 = self.value + ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp9, $tmp10);
    $returnValue8 = $tmp9;
    return $returnValue8;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue12;
    panda$core$UInt64 $tmp13;
    uint64_t $tmp14 = self.value + ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp13, $tmp14);
    $returnValue12 = $tmp13;
    return $returnValue12;
}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue16;
    panda$core$UInt64 $tmp17;
    uint64_t $tmp18 = self.value + p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp17, $tmp18);
    $returnValue16 = $tmp17;
    return $returnValue16;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue20;
    panda$core$UInt64 $tmp21;
    uint64_t $tmp22 = self.value - ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp21, $tmp22);
    $returnValue20 = $tmp21;
    return $returnValue20;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue24;
    panda$core$UInt64 $tmp25;
    uint64_t $tmp26 = self.value - ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp25, $tmp26);
    $returnValue24 = $tmp25;
    return $returnValue24;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue28;
    panda$core$UInt64 $tmp29;
    uint64_t $tmp30 = self.value - ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp29, $tmp30);
    $returnValue28 = $tmp29;
    return $returnValue28;
}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue32;
    panda$core$UInt64 $tmp33;
    uint64_t $tmp34 = self.value - p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp33, $tmp34);
    $returnValue32 = $tmp33;
    return $returnValue32;
}
panda$core$UInt64 panda$core$UInt64$$SUB$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $returnValue36;
    panda$core$UInt64 $tmp37;
    panda$core$UInt64$init$builtin_uint64(&$tmp37, -self.value);
    $returnValue36 = $tmp37;
    return $returnValue36;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue40;
    panda$core$UInt64 $tmp41;
    uint64_t $tmp42 = self.value * ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp41, $tmp42);
    $returnValue40 = $tmp41;
    return $returnValue40;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue44;
    panda$core$UInt64 $tmp45;
    uint64_t $tmp46 = self.value * ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp45, $tmp46);
    $returnValue44 = $tmp45;
    return $returnValue44;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue48;
    panda$core$UInt64 $tmp49;
    uint64_t $tmp50 = self.value * ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp49, $tmp50);
    $returnValue48 = $tmp49;
    return $returnValue48;
}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue52;
    panda$core$UInt64 $tmp53;
    uint64_t $tmp54 = self.value * p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp53, $tmp54);
    $returnValue52 = $tmp53;
    return $returnValue52;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue56;
    panda$core$UInt64 $tmp57;
    uint64_t $tmp58 = self.value / ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp57, $tmp58);
    $returnValue56 = $tmp57;
    return $returnValue56;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue60;
    panda$core$UInt64 $tmp61;
    uint64_t $tmp62 = self.value / ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp61, $tmp62);
    $returnValue60 = $tmp61;
    return $returnValue60;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue64;
    panda$core$UInt64 $tmp65;
    uint64_t $tmp66 = self.value / ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp65, $tmp66);
    $returnValue64 = $tmp65;
    return $returnValue64;
}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue68;
    panda$core$UInt64 $tmp69;
    uint64_t $tmp70 = self.value / p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp69, $tmp70);
    $returnValue68 = $tmp69;
    return $returnValue68;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue72;
    panda$core$UInt64 $tmp73;
    uint64_t $tmp74 = self.value % ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp73, $tmp74);
    $returnValue72 = $tmp73;
    return $returnValue72;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue76;
    panda$core$UInt64 $tmp77;
    uint64_t $tmp78 = self.value % ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp77, $tmp78);
    $returnValue76 = $tmp77;
    return $returnValue76;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue80;
    panda$core$UInt64 $tmp81;
    uint64_t $tmp82 = self.value % ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp81, $tmp82);
    $returnValue80 = $tmp81;
    return $returnValue80;
}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue84;
    panda$core$UInt64 $tmp85;
    uint64_t $tmp86 = self.value % p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp85, $tmp86);
    $returnValue84 = $tmp85;
    return $returnValue84;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$Real64 $returnValue88;
    panda$core$Real64 $tmp89;
    double $tmp90 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp89, $tmp90);
    $returnValue88 = $tmp89;
    return $returnValue88;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$Real64 $returnValue92;
    panda$core$Real64 $tmp93;
    double $tmp94 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp93, $tmp94);
    $returnValue92 = $tmp93;
    return $returnValue92;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$Real64 $returnValue96;
    panda$core$Real64 $tmp97;
    double $tmp98 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp97, $tmp98);
    $returnValue96 = $tmp97;
    return $returnValue96;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Real64 $returnValue100;
    panda$core$Real64 $tmp101;
    double $tmp102 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp101, $tmp102);
    $returnValue100 = $tmp101;
    return $returnValue100;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Real64 $returnValue104;
    panda$core$Real64 $tmp105;
    double $tmp106 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp105, $tmp106);
    $returnValue104 = $tmp105;
    return $returnValue104;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Real64 $returnValue108;
    panda$core$Real64 $tmp109;
    double $tmp110 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp109, $tmp110);
    $returnValue108 = $tmp109;
    return $returnValue108;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Real64 $returnValue112;
    panda$core$Real64 $tmp113;
    double $tmp114 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp113, $tmp114);
    $returnValue112 = $tmp113;
    return $returnValue112;
}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Real64 $returnValue116;
    panda$core$Real64 $tmp117;
    double $tmp118 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp117, $tmp118);
    $returnValue116 = $tmp117;
    return $returnValue116;
}
panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64(panda$core$UInt64 self) {
    panda$core$UInt64 $returnValue120;
    panda$core$UInt64 $tmp121;
    panda$core$UInt64$init$builtin_uint64(&$tmp121, ~self.value);
    $returnValue120 = $tmp121;
    return $returnValue120;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue124;
    panda$core$UInt64 $tmp125;
    uint64_t $tmp126 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp125, $tmp126);
    $returnValue124 = $tmp125;
    return $returnValue124;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue128;
    panda$core$UInt64 $tmp129;
    uint64_t $tmp130 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp129, $tmp130);
    $returnValue128 = $tmp129;
    return $returnValue128;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue132;
    panda$core$UInt64 $tmp133;
    uint64_t $tmp134 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp133, $tmp134);
    $returnValue132 = $tmp133;
    return $returnValue132;
}
panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue136;
    panda$core$Int64 $tmp137;
    int64_t $tmp138 = ((int64_t) self.value) & p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp137, $tmp138);
    $returnValue136 = $tmp137;
    return $returnValue136;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue140;
    panda$core$UInt64 $tmp141;
    uint64_t $tmp142 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp141, $tmp142);
    $returnValue140 = $tmp141;
    return $returnValue140;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue144;
    panda$core$UInt64 $tmp145;
    uint64_t $tmp146 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp145, $tmp146);
    $returnValue144 = $tmp145;
    return $returnValue144;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue148;
    panda$core$UInt64 $tmp149;
    uint64_t $tmp150 = self.value & ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp149, $tmp150);
    $returnValue148 = $tmp149;
    return $returnValue148;
}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue152;
    panda$core$UInt64 $tmp153;
    uint64_t $tmp154 = self.value & p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp153, $tmp154);
    $returnValue152 = $tmp153;
    return $returnValue152;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue156;
    panda$core$UInt64 $tmp157;
    uint64_t $tmp158 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp157, $tmp158);
    $returnValue156 = $tmp157;
    return $returnValue156;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue160;
    panda$core$UInt64 $tmp161;
    uint64_t $tmp162 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp161, $tmp162);
    $returnValue160 = $tmp161;
    return $returnValue160;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue164;
    panda$core$UInt64 $tmp165;
    uint64_t $tmp166 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp165, $tmp166);
    $returnValue164 = $tmp165;
    return $returnValue164;
}
panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue168;
    panda$core$Int64 $tmp169;
    int64_t $tmp170 = ((int64_t) self.value) | p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp169, $tmp170);
    $returnValue168 = $tmp169;
    return $returnValue168;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue172;
    panda$core$UInt64 $tmp173;
    uint64_t $tmp174 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp173, $tmp174);
    $returnValue172 = $tmp173;
    return $returnValue172;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue176;
    panda$core$UInt64 $tmp177;
    uint64_t $tmp178 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp177, $tmp178);
    $returnValue176 = $tmp177;
    return $returnValue176;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue180;
    panda$core$UInt64 $tmp181;
    uint64_t $tmp182 = self.value | ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp181, $tmp182);
    $returnValue180 = $tmp181;
    return $returnValue180;
}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue184;
    panda$core$UInt64 $tmp185;
    uint64_t $tmp186 = self.value | p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp185, $tmp186);
    $returnValue184 = $tmp185;
    return $returnValue184;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue188;
    panda$core$UInt64 $tmp189;
    uint64_t $tmp190 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp189, $tmp190);
    $returnValue188 = $tmp189;
    return $returnValue188;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue192;
    panda$core$UInt64 $tmp193;
    uint64_t $tmp194 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp193, $tmp194);
    $returnValue192 = $tmp193;
    return $returnValue192;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue196;
    panda$core$UInt64 $tmp197;
    uint64_t $tmp198 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp197, $tmp198);
    $returnValue196 = $tmp197;
    return $returnValue196;
}
panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue200;
    panda$core$Int64 $tmp201;
    int64_t $tmp202 = ((int64_t) self.value) ^ p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp201, $tmp202);
    $returnValue200 = $tmp201;
    return $returnValue200;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue204;
    panda$core$UInt64 $tmp205;
    uint64_t $tmp206 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp205, $tmp206);
    $returnValue204 = $tmp205;
    return $returnValue204;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue208;
    panda$core$UInt64 $tmp209;
    uint64_t $tmp210 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp209, $tmp210);
    $returnValue208 = $tmp209;
    return $returnValue208;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue212;
    panda$core$UInt64 $tmp213;
    uint64_t $tmp214 = self.value ^ ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp213, $tmp214);
    $returnValue212 = $tmp213;
    return $returnValue212;
}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue216;
    panda$core$UInt64 $tmp217;
    uint64_t $tmp218 = self.value ^ p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp217, $tmp218);
    $returnValue216 = $tmp217;
    return $returnValue216;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue220;
    panda$core$UInt64 $tmp221;
    uint64_t $tmp222 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp221, $tmp222);
    $returnValue220 = $tmp221;
    return $returnValue220;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue224;
    panda$core$UInt64 $tmp225;
    uint64_t $tmp226 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp225, $tmp226);
    $returnValue224 = $tmp225;
    return $returnValue224;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue228;
    panda$core$UInt64 $tmp229;
    uint64_t $tmp230 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp229, $tmp230);
    $returnValue228 = $tmp229;
    return $returnValue228;
}
panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue232;
    panda$core$Int64 $tmp233;
    int64_t $tmp234 = ((int64_t) self.value) << p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp233, $tmp234);
    $returnValue232 = $tmp233;
    return $returnValue232;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue236;
    panda$core$UInt64 $tmp237;
    uint64_t $tmp238 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp237, $tmp238);
    $returnValue236 = $tmp237;
    return $returnValue236;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue240;
    panda$core$UInt64 $tmp241;
    uint64_t $tmp242 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp241, $tmp242);
    $returnValue240 = $tmp241;
    return $returnValue240;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue244;
    panda$core$UInt64 $tmp245;
    uint64_t $tmp246 = self.value << ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp245, $tmp246);
    $returnValue244 = $tmp245;
    return $returnValue244;
}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue248;
    panda$core$UInt64 $tmp249;
    uint64_t $tmp250 = self.value << p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp249, $tmp250);
    $returnValue248 = $tmp249;
    return $returnValue248;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int8 p_other) {
    panda$core$UInt64 $returnValue252;
    panda$core$UInt64 $tmp253;
    uint64_t $tmp254 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp253, $tmp254);
    $returnValue252 = $tmp253;
    return $returnValue252;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int16 p_other) {
    panda$core$UInt64 $returnValue256;
    panda$core$UInt64 $tmp257;
    uint64_t $tmp258 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp257, $tmp258);
    $returnValue256 = $tmp257;
    return $returnValue256;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$Int32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$Int32 p_other) {
    panda$core$UInt64 $returnValue260;
    panda$core$UInt64 $tmp261;
    uint64_t $tmp262 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp261, $tmp262);
    $returnValue260 = $tmp261;
    return $returnValue260;
}
panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue264;
    panda$core$Int64 $tmp265;
    int64_t $tmp266 = ((int64_t) self.value) >> p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp265, $tmp266);
    $returnValue264 = $tmp265;
    return $returnValue264;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$UInt64 $returnValue268;
    panda$core$UInt64 $tmp269;
    uint64_t $tmp270 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp269, $tmp270);
    $returnValue268 = $tmp269;
    return $returnValue268;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$UInt64 $returnValue272;
    panda$core$UInt64 $tmp273;
    uint64_t $tmp274 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp273, $tmp274);
    $returnValue272 = $tmp273;
    return $returnValue272;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$UInt64 $returnValue276;
    panda$core$UInt64 $tmp277;
    uint64_t $tmp278 = self.value >> ((uint64_t) p_other.value);
    panda$core$UInt64$init$builtin_uint64(&$tmp277, $tmp278);
    $returnValue276 = $tmp277;
    return $returnValue276;
}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue280;
    panda$core$UInt64 $tmp281;
    uint64_t $tmp282 = self.value >> p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp281, $tmp282);
    $returnValue280 = $tmp281;
    return $returnValue280;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue284;
    panda$core$Bit $tmp285;
    bool $tmp286 = self.value == ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp285, $tmp286);
    $returnValue284 = $tmp285;
    return $returnValue284;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue288;
    panda$core$Bit $tmp289;
    bool $tmp290 = self.value == ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp289, $tmp290);
    $returnValue288 = $tmp289;
    return $returnValue288;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue292;
    panda$core$Bit $tmp293;
    bool $tmp294 = self.value == ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp293, $tmp294);
    $returnValue292 = $tmp293;
    return $returnValue292;
}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue296;
    panda$core$Bit $tmp297;
    bool $tmp298 = self.value == p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp297, $tmp298);
    $returnValue296 = $tmp297;
    return $returnValue296;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue300;
    panda$core$Bit $tmp301;
    bool $tmp302 = self.value != ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp301, $tmp302);
    $returnValue300 = $tmp301;
    return $returnValue300;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue304;
    panda$core$Bit $tmp305;
    bool $tmp306 = self.value != ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp305, $tmp306);
    $returnValue304 = $tmp305;
    return $returnValue304;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue308;
    panda$core$Bit $tmp309;
    bool $tmp310 = self.value != ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp309, $tmp310);
    $returnValue308 = $tmp309;
    return $returnValue308;
}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue312;
    panda$core$Bit $tmp313;
    bool $tmp314 = self.value != p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp313, $tmp314);
    $returnValue312 = $tmp313;
    return $returnValue312;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue316;
    panda$core$Bit $tmp317;
    bool $tmp318 = self.value < ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp317, $tmp318);
    $returnValue316 = $tmp317;
    return $returnValue316;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue320;
    panda$core$Bit $tmp321;
    bool $tmp322 = self.value < ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp321, $tmp322);
    $returnValue320 = $tmp321;
    return $returnValue320;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue324;
    panda$core$Bit $tmp325;
    bool $tmp326 = self.value < ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp325, $tmp326);
    $returnValue324 = $tmp325;
    return $returnValue324;
}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue328;
    panda$core$Bit $tmp329;
    bool $tmp330 = self.value < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp329, $tmp330);
    $returnValue328 = $tmp329;
    return $returnValue328;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue332;
    panda$core$Bit $tmp333;
    bool $tmp334 = self.value > ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp333, $tmp334);
    $returnValue332 = $tmp333;
    return $returnValue332;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue336;
    panda$core$Bit $tmp337;
    bool $tmp338 = self.value > ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp337, $tmp338);
    $returnValue336 = $tmp337;
    return $returnValue336;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue340;
    panda$core$Bit $tmp341;
    bool $tmp342 = self.value > ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp341, $tmp342);
    $returnValue340 = $tmp341;
    return $returnValue340;
}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue344;
    panda$core$Bit $tmp345;
    bool $tmp346 = self.value > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp345, $tmp346);
    $returnValue344 = $tmp345;
    return $returnValue344;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue348;
    panda$core$Bit $tmp349;
    bool $tmp350 = self.value >= ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp349, $tmp350);
    $returnValue348 = $tmp349;
    return $returnValue348;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue352;
    panda$core$Bit $tmp353;
    bool $tmp354 = self.value >= ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp353, $tmp354);
    $returnValue352 = $tmp353;
    return $returnValue352;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue356;
    panda$core$Bit $tmp357;
    bool $tmp358 = self.value >= ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp357, $tmp358);
    $returnValue356 = $tmp357;
    return $returnValue356;
}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue360;
    panda$core$Bit $tmp361;
    bool $tmp362 = self.value >= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp361, $tmp362);
    $returnValue360 = $tmp361;
    return $returnValue360;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue364;
    panda$core$Bit $tmp365;
    bool $tmp366 = self.value <= ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp365, $tmp366);
    $returnValue364 = $tmp365;
    return $returnValue364;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue368;
    panda$core$Bit $tmp369;
    bool $tmp370 = self.value <= ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp369, $tmp370);
    $returnValue368 = $tmp369;
    return $returnValue368;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue372;
    panda$core$Bit $tmp373;
    bool $tmp374 = self.value <= ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp373, $tmp374);
    $returnValue372 = $tmp373;
    return $returnValue372;
}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $returnValue376;
    panda$core$Bit $tmp377;
    bool $tmp378 = self.value <= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp377, $tmp378);
    $returnValue376 = $tmp377;
    return $returnValue376;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $tmp380;
    panda$core$UInt64 $returnValue382;
    panda$core$UInt64 $tmp383;
    panda$core$UInt64 $tmp385;
    bool $tmp381 = self.value < ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp380, $tmp381);
    if ($tmp380.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp383, self.value);
        $returnValue382 = $tmp383;
        return $returnValue382;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp385, ((uint64_t) p_other.value));
    $returnValue382 = $tmp385;
    return $returnValue382;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $tmp387;
    panda$core$UInt64 $returnValue389;
    panda$core$UInt64 $tmp390;
    panda$core$UInt64 $tmp392;
    bool $tmp388 = self.value < ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp387, $tmp388);
    if ($tmp387.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp390, self.value);
        $returnValue389 = $tmp390;
        return $returnValue389;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp392, ((uint64_t) p_other.value));
    $returnValue389 = $tmp392;
    return $returnValue389;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $tmp394;
    panda$core$UInt64 $returnValue396;
    panda$core$UInt64 $tmp397;
    panda$core$UInt64 $tmp399;
    bool $tmp395 = self.value < ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp394, $tmp395);
    if ($tmp394.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp397, self.value);
        $returnValue396 = $tmp397;
        return $returnValue396;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp399, ((uint64_t) p_other.value));
    $returnValue396 = $tmp399;
    return $returnValue396;
}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $tmp401;
    panda$core$UInt64 $returnValue403;
    panda$core$UInt64 $tmp404;
    panda$core$UInt64 $tmp406;
    bool $tmp402 = self.value < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp401, $tmp402);
    if ($tmp401.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp404, self.value);
        $returnValue403 = $tmp404;
        return $returnValue403;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp406, p_other.value);
    $returnValue403 = $tmp406;
    return $returnValue403;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt8 p_other) {
    panda$core$Bit $tmp408;
    panda$core$UInt64 $returnValue410;
    panda$core$UInt64 $tmp411;
    panda$core$UInt64 $tmp413;
    bool $tmp409 = self.value > ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp408, $tmp409);
    if ($tmp408.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp411, self.value);
        $returnValue410 = $tmp411;
        return $returnValue410;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp413, ((uint64_t) p_other.value));
    $returnValue410 = $tmp413;
    return $returnValue410;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt16 p_other) {
    panda$core$Bit $tmp415;
    panda$core$UInt64 $returnValue417;
    panda$core$UInt64 $tmp418;
    panda$core$UInt64 $tmp420;
    bool $tmp416 = self.value > ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp415, $tmp416);
    if ($tmp415.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp418, self.value);
        $returnValue417 = $tmp418;
        return $returnValue417;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp420, ((uint64_t) p_other.value));
    $returnValue417 = $tmp420;
    return $returnValue417;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt32 p_other) {
    panda$core$Bit $tmp422;
    panda$core$UInt64 $returnValue424;
    panda$core$UInt64 $tmp425;
    panda$core$UInt64 $tmp427;
    bool $tmp423 = self.value > ((uint64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp422, $tmp423);
    if ($tmp422.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp425, self.value);
        $returnValue424 = $tmp425;
        return $returnValue424;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp427, ((uint64_t) p_other.value));
    $returnValue424 = $tmp427;
    return $returnValue424;
}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 self, panda$core$UInt64 p_other) {
    panda$core$Bit $tmp429;
    panda$core$UInt64 $returnValue431;
    panda$core$UInt64 $tmp432;
    panda$core$UInt64 $tmp434;
    bool $tmp430 = self.value > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp429, $tmp430);
    if ($tmp429.value) {
    {
        panda$core$UInt64$init$builtin_uint64(&$tmp432, self.value);
        $returnValue431 = $tmp432;
        return $returnValue431;
    }
    }
    panda$core$UInt64$init$builtin_uint64(&$tmp434, p_other.value);
    $returnValue431 = $tmp434;
    return $returnValue431;
}
panda$collections$ListView* panda$core$UInt64$$IDX$panda$core$Range$LTpanda$core$UInt64$GT$R$panda$collections$ListView$LTpanda$core$UInt64$GT(panda$core$Range$LTpanda$core$UInt64$GT p_range) {
    panda$collections$ListView* $returnValue436;
    panda$collections$ListView* $tmp437;
    org$pandalanguage$panda$UInt64List* $tmp438;
    panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT $tmp440;
    panda$core$UInt64 $tmp441;
    org$pandalanguage$panda$UInt64List* $tmp439 = (org$pandalanguage$panda$UInt64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$UInt64List$class);
    panda$core$UInt64$init$builtin_uint64(&$tmp441, 1);
    panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$init$panda$core$UInt64$panda$core$UInt64$panda$core$UInt64$panda$core$Bit(&$tmp440, p_range.min, p_range.max, $tmp441, p_range.inclusive);
    org$pandalanguage$panda$UInt64List$init$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT($tmp439, $tmp440);
    $tmp438 = $tmp439;
    $tmp437 = ((panda$collections$ListView*) $tmp438);
    $returnValue436 = $tmp437;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp437));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp438));
    return $returnValue436;
}
panda$collections$ListView* panda$core$UInt64$$IDX$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$R$panda$collections$ListView$LTpanda$core$UInt64$GT(panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT p_range) {
    panda$collections$ListView* $returnValue443;
    panda$collections$ListView* $tmp444;
    org$pandalanguage$panda$UInt64List* $tmp445;
    org$pandalanguage$panda$UInt64List* $tmp446 = (org$pandalanguage$panda$UInt64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$UInt64List$class);
    org$pandalanguage$panda$UInt64List$init$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT($tmp446, p_range);
    $tmp445 = $tmp446;
    $tmp444 = ((panda$collections$ListView*) $tmp445);
    $returnValue443 = $tmp444;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp444));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp445));
    return $returnValue443;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue448;
    panda$core$Int8 $tmp449;
    panda$core$UInt64 $tmp452;
    panda$core$Int8$init$builtin_int8(&$tmp449, 1);
    panda$core$Int32 $tmp450 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32($tmp449, p_index);
    panda$core$UInt64 $tmp451 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp450);
    panda$core$UInt64$init$builtin_uint64(&$tmp452, 0);
    panda$core$Bit $tmp453 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp451, $tmp452);
    $returnValue448 = $tmp453;
    return $returnValue448;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue455;
    panda$core$Int16 $tmp456;
    panda$core$UInt64 $tmp459;
    panda$core$Int16$init$builtin_int16(&$tmp456, 1);
    panda$core$Int32 $tmp457 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32($tmp456, p_index);
    panda$core$UInt64 $tmp458 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp457);
    panda$core$UInt64$init$builtin_uint64(&$tmp459, 0);
    panda$core$Bit $tmp460 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp458, $tmp459);
    $returnValue455 = $tmp460;
    return $returnValue455;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue462;
    panda$core$Int32 $tmp463;
    panda$core$UInt64 $tmp466;
    panda$core$Int32$init$builtin_int32(&$tmp463, 1);
    panda$core$Int32 $tmp464 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp463, p_index);
    panda$core$UInt64 $tmp465 = panda$core$UInt64$$BAND$panda$core$Int32$R$panda$core$UInt64(self, $tmp464);
    panda$core$UInt64$init$builtin_uint64(&$tmp466, 0);
    panda$core$Bit $tmp467 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp465, $tmp466);
    $returnValue462 = $tmp467;
    return $returnValue462;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp470;
    panda$core$Bit $returnValue480;
    panda$core$Int64 $tmp481;
    panda$core$Int64 $tmp484;
    panda$core$Int64$init$builtin_int64(&$tmp470, 0);
    panda$core$Bit $tmp471 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp470);
    bool $tmp469 = $tmp471.value;
    if (!$tmp469) goto $l472;
    panda$core$Int64 $tmp473 = panda$core$UInt64$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp474 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp473);
    $tmp469 = $tmp474.value;
    $l472:;
    panda$core$Bit $tmp475 = { $tmp469 };
    if ($tmp475.value) goto $l476; else goto $l477;
    $l477:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s478, (panda$core$Int64) { 633 }, &$s479);
    abort();
    $l476:;
    panda$core$Int64$init$builtin_int64(&$tmp481, 1);
    panda$core$Int64 $tmp482 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp481, p_index);
    panda$core$Int64 $tmp483 = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp482);
    panda$core$Int64$init$builtin_int64(&$tmp484, 0);
    panda$core$Bit $tmp485 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp483, $tmp484);
    $returnValue480 = $tmp485;
    return $returnValue480;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue487;
    panda$core$UInt8 $tmp488;
    panda$core$UInt64 $tmp491;
    panda$core$UInt8$init$builtin_uint8(&$tmp488, 1);
    panda$core$UInt32 $tmp489 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32($tmp488, p_index);
    panda$core$UInt64 $tmp490 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp489);
    panda$core$UInt64$init$builtin_uint64(&$tmp491, 0);
    panda$core$Bit $tmp492 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp490, $tmp491);
    $returnValue487 = $tmp492;
    return $returnValue487;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue494;
    panda$core$UInt16 $tmp495;
    panda$core$UInt64 $tmp498;
    panda$core$UInt16$init$builtin_uint16(&$tmp495, 1);
    panda$core$UInt32 $tmp496 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32($tmp495, p_index);
    panda$core$UInt64 $tmp497 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp496);
    panda$core$UInt64$init$builtin_uint64(&$tmp498, 0);
    panda$core$Bit $tmp499 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp497, $tmp498);
    $returnValue494 = $tmp499;
    return $returnValue494;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue501;
    panda$core$UInt32 $tmp502;
    panda$core$UInt64 $tmp505;
    panda$core$UInt32$init$builtin_uint32(&$tmp502, 1);
    panda$core$UInt32 $tmp503 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32($tmp502, p_index);
    panda$core$UInt64 $tmp504 = panda$core$UInt64$$BAND$panda$core$UInt32$R$panda$core$UInt64(self, $tmp503);
    panda$core$UInt64$init$builtin_uint64(&$tmp505, 0);
    panda$core$Bit $tmp506 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp504, $tmp505);
    $returnValue501 = $tmp506;
    return $returnValue501;
}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue508;
    panda$core$UInt64 $tmp509;
    panda$core$UInt64 $tmp512;
    panda$core$UInt64$init$builtin_uint64(&$tmp509, 1);
    panda$core$UInt64 $tmp510 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64($tmp509, p_index);
    panda$core$UInt64 $tmp511 = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp510);
    panda$core$UInt64$init$builtin_uint64(&$tmp512, 0);
    panda$core$Bit $tmp513 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp511, $tmp512);
    $returnValue508 = $tmp513;
    return $returnValue508;
}
panda$core$Int64 panda$core$UInt64$get_count$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $returnValue515;
    panda$core$Int64 $tmp516;
    panda$core$Int64$init$builtin_int64(&$tmp516, 64);
    $returnValue515 = $tmp516;
    return $returnValue515;
}
panda$collections$Iterator* panda$core$UInt64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$UInt64 self) {
    panda$collections$Iterator* $returnValue518;
    panda$collections$Iterator* $tmp519;
    org$pandalanguage$panda$IntBitIterator* $tmp520;
    panda$core$UInt64 $tmp522;
    org$pandalanguage$panda$IntBitIterator* $tmp521 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
    panda$core$UInt64$init$builtin_uint64(&$tmp522, 9223372036854775808u);
    org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp521, self, $tmp522);
    $tmp520 = $tmp521;
    $tmp519 = ((panda$collections$Iterator*) $tmp520);
    $returnValue518 = $tmp519;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp519));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
    return $returnValue518;
}
panda$core$Int64 panda$core$UInt64$hash$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $returnValue524;
    panda$core$Int64 $tmp525;
    panda$core$Int64$init$builtin_int64(&$tmp525, ((int64_t) self.value));
    $returnValue524 = $tmp525;
    return $returnValue524;
}
panda$core$UInt64$nullable panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$Int64 $tmp528;
    panda$core$Int64 $tmp531;
    panda$core$UInt64$nullable result538;
    panda$core$UInt64$nullable $returnValue540;
    panda$core$Int64$init$builtin_int64(&$tmp528, 2);
    panda$core$Bit $tmp529 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_radix, $tmp528);
    bool $tmp527 = $tmp529.value;
    if (!$tmp527) goto $l530;
    panda$core$Int64$init$builtin_int64(&$tmp531, 36);
    panda$core$Bit $tmp532 = panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(p_radix, $tmp531);
    $tmp527 = $tmp532.value;
    $l530:;
    panda$core$Bit $tmp533 = { $tmp527 };
    if ($tmp533.value) goto $l534; else goto $l535;
    $l535:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s536, (panda$core$Int64) { 676 }, &$s537);
    abort();
    $l534:;
    panda$core$UInt64$nullable $tmp539 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
    result538 = $tmp539;
    if (((panda$core$Bit) { !result538.nonnull }).value) {
    {
        $returnValue540 = ((panda$core$UInt64$nullable) { .nonnull = false });
        return $returnValue540;
    }
    }
    $returnValue540 = result538;
    return $returnValue540;
}
panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8(panda$core$UInt64 self) {
    panda$core$Int8 $returnValue543;
    panda$core$Int8 $tmp544;
    panda$core$Int8$init$builtin_int8(&$tmp544, ((int8_t) self.value));
    $returnValue543 = $tmp544;
    return $returnValue543;
}
panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16(panda$core$UInt64 self) {
    panda$core$Int16 $returnValue546;
    panda$core$Int16 $tmp547;
    panda$core$Int16$init$builtin_int16(&$tmp547, ((int16_t) self.value));
    $returnValue546 = $tmp547;
    return $returnValue546;
}
panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32(panda$core$UInt64 self) {
    panda$core$Int32 $returnValue549;
    panda$core$Int32 $tmp550;
    panda$core$Int32$init$builtin_int32(&$tmp550, ((int32_t) self.value));
    $returnValue549 = $tmp550;
    return $returnValue549;
}
panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64(panda$core$UInt64 self) {
    panda$core$Int64 $returnValue552;
    panda$core$Int64 $tmp553;
    panda$core$Int64$init$builtin_int64(&$tmp553, ((int64_t) self.value));
    $returnValue552 = $tmp553;
    return $returnValue552;
}
panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8(panda$core$UInt64 self) {
    panda$core$UInt8 $returnValue555;
    panda$core$UInt8 $tmp556;
    panda$core$UInt8$init$builtin_uint8(&$tmp556, ((uint8_t) self.value));
    $returnValue555 = $tmp556;
    return $returnValue555;
}
panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16(panda$core$UInt64 self) {
    panda$core$UInt16 $returnValue558;
    panda$core$UInt16 $tmp559;
    panda$core$UInt16$init$builtin_uint16(&$tmp559, ((uint16_t) self.value));
    $returnValue558 = $tmp559;
    return $returnValue558;
}
panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32(panda$core$UInt64 self) {
    panda$core$UInt32 $returnValue561;
    panda$core$UInt32 $tmp562;
    panda$core$UInt32$init$builtin_uint32(&$tmp562, ((uint32_t) self.value));
    $returnValue561 = $tmp562;
    return $returnValue561;
}
panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32(panda$core$UInt64 self) {
    panda$core$Real32 $returnValue564;
    panda$core$Real32 $tmp565;
    panda$core$Real32$init$builtin_float32(&$tmp565, ((float) self.value));
    $returnValue564 = $tmp565;
    return $returnValue564;
}
panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64(panda$core$UInt64 self) {
    panda$core$Real64 $returnValue567;
    panda$core$Real64 $tmp568;
    panda$core$Real64$init$builtin_float64(&$tmp568, ((double) self.value));
    $returnValue567 = $tmp568;
    return $returnValue567;
}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String(panda$core$UInt64 self) {
    panda$core$Int64 max570;
    panda$core$Int64 $tmp571;
    panda$core$Char8* chars572;
    panda$core$Int64 index573;
    panda$core$Int64 $tmp574;
    panda$core$UInt64 value576;
    panda$core$UInt64 $tmp577;
    panda$core$Char8 $tmp581;
    panda$core$UInt64 $tmp582;
    panda$core$UInt64 $tmp584;
    panda$core$UInt64 $tmp587;
    panda$core$Int64 $tmp589;
    panda$core$UInt64 $tmp592;
    panda$core$Int64 $tmp594;
    panda$core$Char8 $tmp598;
    panda$core$UInt64 $tmp599;
    panda$core$UInt64 $tmp600;
    panda$core$UInt64 $tmp604;
    panda$core$Int64 $tmp606;
    panda$core$UInt64 $tmp609;
    panda$core$Char8 $tmp611;
    panda$core$UInt8 $tmp612;
    panda$core$Int64 size613;
    panda$core$Range$LTpanda$core$Int64$GT $tmp615;
    panda$core$Int64 $tmp616;
    panda$core$Bit $tmp617;
    panda$core$String* $returnValue638;
    panda$core$String* $tmp639;
    panda$core$String* $tmp640;
    panda$core$Int64$init$builtin_int64(&$tmp571, 20);
    max570 = $tmp571;
    chars572 = ((panda$core$Char8*) pandaZAlloc(max570.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp574, 1);
    panda$core$Int64 $tmp575 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max570, $tmp574);
    index573 = $tmp575;
    value576 = self;
    panda$core$UInt64$init$builtin_uint64(&$tmp577, 0);
    panda$core$Bit $tmp578 = panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(value576, $tmp577);
    if ($tmp578.value) {
    {
        $l579:;
        {
            panda$core$UInt64$init$builtin_uint64(&$tmp582, 10);
            panda$core$UInt64 $tmp583 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value576, $tmp582);
            panda$core$UInt64$init$builtin_uint64(&$tmp584, 48);
            panda$core$UInt64 $tmp585 = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64($tmp583, $tmp584);
            panda$core$UInt8 $tmp586 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp585);
            panda$core$Char8$init$panda$core$UInt8(&$tmp581, $tmp586);
            chars572[index573.value] = $tmp581;
            panda$core$UInt64$init$builtin_uint64(&$tmp587, 10);
            panda$core$UInt64 $tmp588 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value576, $tmp587);
            value576 = $tmp588;
            panda$core$Int64$init$builtin_int64(&$tmp589, 1);
            panda$core$Int64 $tmp590 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index573, $tmp589);
            index573 = $tmp590;
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp592, 0);
        panda$core$Bit $tmp593 = panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(value576, $tmp592);
        bool $tmp591 = $tmp593.value;
        if ($tmp591) goto $l579;
        $l580:;
        panda$core$Int64$init$builtin_int64(&$tmp594, 1);
        panda$core$Int64 $tmp595 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index573, $tmp594);
        index573 = $tmp595;
    }
    }
    else {
    {
        $l596:;
        {
            panda$core$UInt64$init$builtin_uint64(&$tmp599, 48);
            panda$core$UInt64$init$builtin_uint64(&$tmp600, 10);
            panda$core$UInt64 $tmp601 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(value576, $tmp600);
            panda$core$UInt64 $tmp602 = panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64($tmp599, $tmp601);
            panda$core$UInt8 $tmp603 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp602);
            panda$core$Char8$init$panda$core$UInt8(&$tmp598, $tmp603);
            chars572[index573.value] = $tmp598;
            panda$core$UInt64$init$builtin_uint64(&$tmp604, 10);
            panda$core$UInt64 $tmp605 = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(value576, $tmp604);
            value576 = $tmp605;
            panda$core$Int64$init$builtin_int64(&$tmp606, 1);
            panda$core$Int64 $tmp607 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index573, $tmp606);
            index573 = $tmp607;
        }
        panda$core$UInt64$init$builtin_uint64(&$tmp609, 0);
        panda$core$Bit $tmp610 = panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(value576, $tmp609);
        bool $tmp608 = $tmp610.value;
        if ($tmp608) goto $l596;
        $l597:;
        panda$core$UInt8$init$builtin_uint8(&$tmp612, 45);
        panda$core$Char8$init$panda$core$UInt8(&$tmp611, $tmp612);
        chars572[index573.value] = $tmp611;
    }
    }
    panda$core$Int64 $tmp614 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max570, index573);
    size613 = $tmp614;
    panda$core$Int64$init$builtin_int64(&$tmp616, 0);
    panda$core$Bit$init$builtin_bit(&$tmp617, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp615, $tmp616, size613, $tmp617);
    int64_t $tmp619 = $tmp615.min.value;
    panda$core$Int64 i618 = { $tmp619 };
    int64_t $tmp621 = $tmp615.max.value;
    bool $tmp622 = $tmp615.inclusive.value;
    if ($tmp622) goto $l629; else goto $l630;
    $l629:;
    if ($tmp619 <= $tmp621) goto $l623; else goto $l625;
    $l630:;
    if ($tmp619 < $tmp621) goto $l623; else goto $l625;
    $l623:;
    {
        panda$core$Int64 $tmp631 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i618, index573);
        chars572[i618.value] = chars572[$tmp631.value];
    }
    $l626:;
    int64_t $tmp633 = $tmp621 - i618.value;
    if ($tmp622) goto $l634; else goto $l635;
    $l634:;
    if ((uint64_t) $tmp633 >= 1) goto $l632; else goto $l625;
    $l635:;
    if ((uint64_t) $tmp633 > 1) goto $l632; else goto $l625;
    $l632:;
    i618.value += 1;
    goto $l623;
    $l625:;
    panda$core$String* $tmp641 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp641, chars572, size613);
    $tmp640 = $tmp641;
    $tmp639 = $tmp640;
    $returnValue638 = $tmp639;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp640));
    return $returnValue638;
}
panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String(panda$core$UInt64 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue643;
    panda$core$String* $tmp644;
    panda$core$String* $tmp645;
    panda$core$Bit $tmp646;
    panda$core$UInt64 $tmp647;
    panda$core$Bit$init$builtin_bit(&$tmp646, false);
    panda$core$UInt64$init$builtin_uint64(&$tmp647, 18446744073709551615u);
    panda$core$String* $tmp648 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp646, self, $tmp647, p_fmt);
    $tmp645 = $tmp648;
    $tmp644 = $tmp645;
    $returnValue643 = $tmp644;
    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
    return $returnValue643;
}
void panda$core$UInt64$cleanup(panda$core$UInt64 self) {
}

