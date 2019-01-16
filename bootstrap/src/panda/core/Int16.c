#include "panda/core/Int16.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Formattable.h"
#include "panda/collections/Key.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Comparable.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real32.h"
#include "panda/core/Int8.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int16.GT.h"
#include "org/pandalanguage/panda/Int16List.h"
#include "panda/core/SteppedRange.LTpanda/core/Int16.Cpanda/core/Int16.GT.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

__attribute__((weak)) panda$core$Int64 panda$core$Int16$get_count$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int16$get_count$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Int16$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$Int16$format$panda$core$String$R$panda$core$String(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int16$get_hash$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, ((panda$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, ((panda$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, ((panda$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, ((panda$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$Int16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$Int16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, ((panda$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, ((panda$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Int16$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Int16$convert$R$panda$core$String(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$ADD$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$ADD$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int16$$ADD$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$ADD$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int16$$ADD$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$SUB$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$SUB$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int16$$SUB$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$SUB$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int16$$SUB$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$SUB$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Int16$$SUB$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$MUL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$MUL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$MUL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$MUL$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int16$$MUL$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$MUL$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int16$$MUL$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$INTDIV$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$INTDIV$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int16$$INTDIV$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int16$$INTDIV$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$REM$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$REM$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$REM$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$REM$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$REM$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int16$$REM$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$REM$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int16$$REM$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int16$$DIV$panda$core$Int8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real32 result = panda$core$Int16$$DIV$panda$core$Int8$R$panda$core$Real32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int16$$DIV$panda$core$Int16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real32 result = panda$core$Int16$$DIV$panda$core$Int16$R$panda$core$Real32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int16$$DIV$panda$core$Int32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real32 result = panda$core$Int16$$DIV$panda$core$Int32$R$panda$core$Real32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int16$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Int16$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int16$$DIV$panda$core$UInt8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real32 result = panda$core$Int16$$DIV$panda$core$UInt8$R$panda$core$Real32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int16$$DIV$panda$core$UInt16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real32 result = panda$core$Int16$$DIV$panda$core$UInt16$R$panda$core$Real32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int16$$DIV$panda$core$UInt32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real32 result = panda$core$Int16$$DIV$panda$core$UInt32$R$panda$core$Real32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int16$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Int16$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int16$$DIV$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Int16$$DIV$panda$core$Real32$R$panda$core$Real32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int16$$DIV$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Int16$$DIV$panda$core$Real64$R$panda$core$Real64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$BNOT$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Int16$$BNOT$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int16$$BAND$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$BOR$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int16$$BOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int16$$BOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int16$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int16$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int16$$BXOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int16$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int16$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int16$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int16$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int16$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int16$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int16$$SHR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int16$$SHR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int16$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int16$$SHR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$EQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int16$$EQ$panda$core$Int8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$EQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int16$$EQ$panda$core$Int32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$EQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int16$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int16$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int16$$EQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int16$$EQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int16$$NEQ$panda$core$Int8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int16$$NEQ$panda$core$Int32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int16$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int16$$NEQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int16$$NEQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int16$$NEQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int16$$LT$panda$core$Int8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int16$$LT$panda$core$Int32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int16$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int16$$LT$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int16$$LT$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int16$$LT$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int16$$GT$panda$core$Int8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int16$$GT$panda$core$Int32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int16$$GT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int16$$GT$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int16$$GT$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int16$$GT$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int16$$GE$panda$core$Int8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int16$$GE$panda$core$Int32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int16$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int16$$GE$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int16$$GE$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int16$$GE$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int16$$LE$panda$core$Int8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int16$$LE$panda$core$Int32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int16$$LE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int16$$LE$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int16$$LE$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int16$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int16$$LE$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$get_abs$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Int16$get_abs$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$min$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$Int16$min$panda$core$Int8$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$min$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$min$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$min$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$min$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$min$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$min$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$min$panda$core$UInt8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int32 result = panda$core$Int16$min$panda$core$UInt8$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$min$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int16$min$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$min$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int16$min$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$max$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$Int16$max$panda$core$Int8$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int16$max$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int16$max$panda$core$Int16$R$panda$core$Int16(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$max$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int16$max$panda$core$Int32$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$max$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int16$max$panda$core$Int64$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$max$panda$core$UInt8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int32 result = panda$core$Int16$max$panda$core$UInt8$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$max$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int16$max$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$max$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int16$max$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int16$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Int16$convert$R$panda$core$Int8(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int16$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Int16$convert$R$panda$core$Int32(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int16$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int16$convert$R$panda$core$Int64(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$Int16$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$Int16$convert$R$panda$core$UInt8(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$Int16$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$Int16$convert$R$panda$core$UInt16(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int16$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$Int16$convert$R$panda$core$UInt32(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int16$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$Int16$convert$R$panda$core$UInt64(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int16$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Int16$convert$R$panda$core$Real32(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int16$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$Int16$convert$R$panda$core$Real64(((panda$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Int16$cleanup$shim(panda$core$Object* p0) {
    panda$core$Int16$cleanup(((panda$core$Int16$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$Int16$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int16$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int16$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int16$_panda$collections$CollectionView, { panda$core$Int16$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int16$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int16$_panda$core$Formattable, { panda$core$Int16$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$Int16$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int16$_panda$collections$Key, { panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int16$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int16$_panda$collections$ListView, { panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int16$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int16$_panda$core$Comparable, { panda$core$Int16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int16$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int16$_panda$collections$Iterable, { panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim} };

static panda$core$String $s1;
panda$core$Int16$class_type panda$core$Int16$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int16$_panda$core$Equatable, { panda$core$Int16$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$ADD$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$ADD$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int16$$ADD$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$SUB$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$SUB$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$SUB$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int16$$SUB$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int16$$SUB$R$panda$core$Int16$shim, panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$MUL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$MUL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$MUL$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int16$$MUL$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$INTDIV$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$INTDIV$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int16$$INTDIV$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$REM$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$REM$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$REM$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int16$$REM$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int16$$DIV$panda$core$Int8$R$panda$core$Real32$shim, panda$core$Int16$$DIV$panda$core$Int16$R$panda$core$Real32$shim, panda$core$Int16$$DIV$panda$core$Int32$R$panda$core$Real32$shim, panda$core$Int16$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Int16$$DIV$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$Int16$$DIV$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$Int16$$DIV$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$Int16$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Int16$$DIV$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Int16$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Int16$$BNOT$R$panda$core$Int16$shim, panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$BOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int16$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int16$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$BXOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int16$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int16$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$SHL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int16$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int16$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$$SHR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int16$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int16$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int16$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int16$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int16$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int16$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int16$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int16$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int16$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int16$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int16$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int16$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int16$get_abs$R$panda$core$Int16$shim, panda$core$Int16$min$panda$core$Int8$R$panda$core$Int16$shim, panda$core$Int16$min$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$min$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$min$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$min$panda$core$UInt8$R$panda$core$Int32$shim, panda$core$Int16$min$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int16$min$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int16$max$panda$core$Int8$R$panda$core$Int16$shim, panda$core$Int16$max$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int16$max$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int16$max$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int16$max$panda$core$UInt8$R$panda$core$Int32$shim, panda$core$Int16$max$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int16$max$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int16$get_count$R$panda$core$Int64$shim, panda$core$Int16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$Int16$get_hash$R$panda$core$Int64$shim, panda$core$Int16$convert$R$panda$core$Int8$shim, panda$core$Int16$convert$R$panda$core$Int32$shim, panda$core$Int16$convert$R$panda$core$Int64$shim, panda$core$Int16$convert$R$panda$core$UInt8$shim, panda$core$Int16$convert$R$panda$core$UInt16$shim, panda$core$Int16$convert$R$panda$core$UInt32$shim, panda$core$Int16$convert$R$panda$core$UInt64$shim, panda$core$Int16$convert$R$panda$core$Real32$shim, panda$core$Int16$convert$R$panda$core$Real64$shim, panda$core$Int16$format$panda$core$String$R$panda$core$String$shim, panda$core$Int16$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[7]; } panda$core$Int16$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int16$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int16$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int16$wrapper_panda$collections$CollectionView, { panda$core$Int16$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int16$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int16$wrapper_panda$core$Formattable, { panda$core$Int16$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[7]; } panda$core$Int16$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int16$wrapper_panda$collections$Key, { panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int16$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int16$wrapper_panda$collections$ListView, { panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int16$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int16$wrapper_panda$core$Comparable, { panda$core$Int16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int16$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int16$wrapper_panda$collections$Iterable, { panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim} };

static panda$core$String $s3;
panda$core$Int16$wrapperclass_type panda$core$Int16$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int16$wrapper_panda$core$Equatable, { panda$core$Int16$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn635)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -4218233432987190872, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -3982251950977361948, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f", 121, 5775817131615041468, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static panda$core$String $s692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x27", 73, -4164323057498451277, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x27", 73, -4164323057498451277, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, -7128650349011053128, NULL };

panda$core$Int16 panda$core$Int16$init$builtin_int16(int16_t param0) {

panda$core$Int16 local0;
// line 30
int16_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
panda$core$Int16 $tmp5 = *(&local0);
return $tmp5;

}
panda$core$Int16 panda$core$Int16$init$panda$core$Int8(panda$core$Int8 param0) {

panda$core$Int16 local0;
// line 36
int8_t $tmp6 = param0.value;
int16_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int16_t) $tmp6);
panda$core$Int16 $tmp8 = *(&local0);
return $tmp8;

}
panda$core$Int16 panda$core$Int16$init$panda$core$UInt8(panda$core$UInt8 param0) {

panda$core$Int16 local0;
// line 42
uint8_t $tmp9 = param0.value;
int16_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int16_t) $tmp9);
panda$core$Int16 $tmp11 = *(&local0);
return $tmp11;

}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 48
int16_t $tmp12 = param0.value;
int16_t $tmp13 = param1.value;
int32_t $tmp14 = ((int32_t) $tmp12) + ((int32_t) $tmp13);
panda$core$Int32 $tmp15 = panda$core$Int32$init$builtin_int32($tmp14);
return $tmp15;

}
panda$core$Int16 panda$core$Int16$$ADD$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 53
int16_t $tmp16 = param0.value;
int16_t $tmp17 = param1.value;
int16_t $tmp18 = $tmp16 + $tmp17;
panda$core$Int16 $tmp19 = panda$core$Int16$init$builtin_int16($tmp18);
return $tmp19;

}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 59
int16_t $tmp20 = param0.value;
int32_t $tmp21 = param1.value;
int32_t $tmp22 = ((int32_t) $tmp20) + $tmp21;
panda$core$Int32 $tmp23 = panda$core$Int32$init$builtin_int32($tmp22);
return $tmp23;

}
panda$core$Int64 panda$core$Int16$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 65
int16_t $tmp24 = param0.value;
int64_t $tmp25 = param1.value;
int64_t $tmp26 = ((int64_t) $tmp24) + $tmp25;
panda$core$Int64 $tmp27 = panda$core$Int64$init$builtin_int64($tmp26);
return $tmp27;

}
panda$core$Int32 panda$core$Int16$$ADD$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 71
int16_t $tmp28 = param0.value;
uint16_t $tmp29 = param1.value;
int32_t $tmp30 = ((int32_t) $tmp28) + ((int32_t) $tmp29);
panda$core$Int32 $tmp31 = panda$core$Int32$init$builtin_int32($tmp30);
return $tmp31;

}
panda$core$Int64 panda$core$Int16$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 77
int16_t $tmp32 = param0.value;
uint32_t $tmp33 = param1.value;
int64_t $tmp34 = ((int64_t) $tmp32) + ((int64_t) $tmp33);
panda$core$Int64 $tmp35 = panda$core$Int64$init$builtin_int64($tmp34);
return $tmp35;

}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 83
int16_t $tmp36 = param0.value;
int16_t $tmp37 = param1.value;
int32_t $tmp38 = ((int32_t) $tmp36) - ((int32_t) $tmp37);
panda$core$Int32 $tmp39 = panda$core$Int32$init$builtin_int32($tmp38);
return $tmp39;

}
panda$core$Int16 panda$core$Int16$$SUB$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 88
int16_t $tmp40 = param0.value;
int16_t $tmp41 = param1.value;
int16_t $tmp42 = $tmp40 - $tmp41;
panda$core$Int16 $tmp43 = panda$core$Int16$init$builtin_int16($tmp42);
return $tmp43;

}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 94
int16_t $tmp44 = param0.value;
int32_t $tmp45 = param1.value;
int32_t $tmp46 = ((int32_t) $tmp44) - $tmp45;
panda$core$Int32 $tmp47 = panda$core$Int32$init$builtin_int32($tmp46);
return $tmp47;

}
panda$core$Int64 panda$core$Int16$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 100
int16_t $tmp48 = param0.value;
int64_t $tmp49 = param1.value;
int64_t $tmp50 = ((int64_t) $tmp48) - $tmp49;
panda$core$Int64 $tmp51 = panda$core$Int64$init$builtin_int64($tmp50);
return $tmp51;

}
panda$core$Int32 panda$core$Int16$$SUB$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 106
int16_t $tmp52 = param0.value;
uint16_t $tmp53 = param1.value;
int32_t $tmp54 = ((int32_t) $tmp52) - ((int32_t) $tmp53);
panda$core$Int32 $tmp55 = panda$core$Int32$init$builtin_int32($tmp54);
return $tmp55;

}
panda$core$Int64 panda$core$Int16$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 112
int16_t $tmp56 = param0.value;
uint32_t $tmp57 = param1.value;
int64_t $tmp58 = ((int64_t) $tmp56) - ((int64_t) $tmp57);
panda$core$Int64 $tmp59 = panda$core$Int64$init$builtin_int64($tmp58);
return $tmp59;

}
panda$core$Int16 panda$core$Int16$$SUB$R$panda$core$Int16(panda$core$Int16 param0) {

// line 117
int16_t $tmp60 = param0.value;
int16_t $tmp61 = -$tmp60;
panda$core$Int16 $tmp62 = (panda$core$Int16) {$tmp61};
return $tmp62;

}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 123
int16_t $tmp63 = param0.value;
int16_t $tmp64 = param1.value;
int32_t $tmp65 = ((int32_t) $tmp63) * ((int32_t) $tmp64);
panda$core$Int32 $tmp66 = panda$core$Int32$init$builtin_int32($tmp65);
return $tmp66;

}
panda$core$Int16 panda$core$Int16$$MUL$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 128
int16_t $tmp67 = param0.value;
int16_t $tmp68 = param1.value;
int16_t $tmp69 = $tmp67 * $tmp68;
panda$core$Int16 $tmp70 = panda$core$Int16$init$builtin_int16($tmp69);
return $tmp70;

}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 134
int16_t $tmp71 = param0.value;
int32_t $tmp72 = param1.value;
int32_t $tmp73 = ((int32_t) $tmp71) * $tmp72;
panda$core$Int32 $tmp74 = panda$core$Int32$init$builtin_int32($tmp73);
return $tmp74;

}
panda$core$Int64 panda$core$Int16$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 140
int16_t $tmp75 = param0.value;
int64_t $tmp76 = param1.value;
int64_t $tmp77 = ((int64_t) $tmp75) * $tmp76;
panda$core$Int64 $tmp78 = panda$core$Int64$init$builtin_int64($tmp77);
return $tmp78;

}
panda$core$Int32 panda$core$Int16$$MUL$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 146
int16_t $tmp79 = param0.value;
uint16_t $tmp80 = param1.value;
int32_t $tmp81 = ((int32_t) $tmp79) * ((int32_t) $tmp80);
panda$core$Int32 $tmp82 = panda$core$Int32$init$builtin_int32($tmp81);
return $tmp82;

}
panda$core$Int64 panda$core$Int16$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 152
int16_t $tmp83 = param0.value;
uint32_t $tmp84 = param1.value;
int64_t $tmp85 = ((int64_t) $tmp83) * ((int64_t) $tmp84);
panda$core$Int64 $tmp86 = panda$core$Int64$init$builtin_int64($tmp85);
return $tmp86;

}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 158
int16_t $tmp87 = param0.value;
int16_t $tmp88 = param1.value;
int32_t $tmp89 = ((int32_t) $tmp87) / ((int32_t) $tmp88);
panda$core$Int32 $tmp90 = panda$core$Int32$init$builtin_int32($tmp89);
return $tmp90;

}
panda$core$Int16 panda$core$Int16$$INTDIV$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 163
int16_t $tmp91 = param0.value;
int16_t $tmp92 = param1.value;
int16_t $tmp93 = $tmp91 / $tmp92;
panda$core$Int16 $tmp94 = panda$core$Int16$init$builtin_int16($tmp93);
return $tmp94;

}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 169
int16_t $tmp95 = param0.value;
int32_t $tmp96 = param1.value;
int32_t $tmp97 = ((int32_t) $tmp95) / $tmp96;
panda$core$Int32 $tmp98 = panda$core$Int32$init$builtin_int32($tmp97);
return $tmp98;

}
panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 175
int16_t $tmp99 = param0.value;
int64_t $tmp100 = param1.value;
int64_t $tmp101 = ((int64_t) $tmp99) / $tmp100;
panda$core$Int64 $tmp102 = panda$core$Int64$init$builtin_int64($tmp101);
return $tmp102;

}
panda$core$Int32 panda$core$Int16$$INTDIV$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 181
int16_t $tmp103 = param0.value;
uint16_t $tmp104 = param1.value;
int32_t $tmp105 = ((int32_t) $tmp103) / ((int32_t) $tmp104);
panda$core$Int32 $tmp106 = panda$core$Int32$init$builtin_int32($tmp105);
return $tmp106;

}
panda$core$Int64 panda$core$Int16$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 187
int16_t $tmp107 = param0.value;
uint32_t $tmp108 = param1.value;
int64_t $tmp109 = ((int64_t) $tmp107) / ((int64_t) $tmp108);
panda$core$Int64 $tmp110 = panda$core$Int64$init$builtin_int64($tmp109);
return $tmp110;

}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 193
int16_t $tmp111 = param0.value;
int16_t $tmp112 = param1.value;
int32_t $tmp113 = ((int32_t) $tmp111) % ((int32_t) $tmp112);
panda$core$Int32 $tmp114 = panda$core$Int32$init$builtin_int32($tmp113);
return $tmp114;

}
panda$core$Int16 panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 198
int16_t $tmp115 = param0.value;
int16_t $tmp116 = param1.value;
int16_t $tmp117 = $tmp115 % $tmp116;
panda$core$Int16 $tmp118 = panda$core$Int16$init$builtin_int16($tmp117);
return $tmp118;

}
panda$core$Int32 panda$core$Int16$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 204
int16_t $tmp119 = param0.value;
int32_t $tmp120 = param1.value;
int32_t $tmp121 = ((int32_t) $tmp119) % $tmp120;
panda$core$Int32 $tmp122 = panda$core$Int32$init$builtin_int32($tmp121);
return $tmp122;

}
panda$core$Int64 panda$core$Int16$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 210
int16_t $tmp123 = param0.value;
int64_t $tmp124 = param1.value;
int64_t $tmp125 = ((int64_t) $tmp123) % $tmp124;
panda$core$Int64 $tmp126 = panda$core$Int64$init$builtin_int64($tmp125);
return $tmp126;

}
panda$core$Int32 panda$core$Int16$$REM$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 216
int16_t $tmp127 = param0.value;
uint16_t $tmp128 = param1.value;
int32_t $tmp129 = ((int32_t) $tmp127) % ((int32_t) $tmp128);
panda$core$Int32 $tmp130 = panda$core$Int32$init$builtin_int32($tmp129);
return $tmp130;

}
panda$core$Int64 panda$core$Int16$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 222
int16_t $tmp131 = param0.value;
uint32_t $tmp132 = param1.value;
int64_t $tmp133 = ((int64_t) $tmp131) % ((int64_t) $tmp132);
panda$core$Int64 $tmp134 = panda$core$Int64$init$builtin_int64($tmp133);
return $tmp134;

}
panda$core$Real32 panda$core$Int16$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$Int16 param0, panda$core$Int8 param1) {

// line 228
int16_t $tmp135 = param0.value;
int8_t $tmp136 = param1.value;
float $tmp137 = ((float) $tmp135) / ((float) $tmp136);
panda$core$Real32 $tmp138 = panda$core$Real32$init$builtin_float32($tmp137);
return $tmp138;

}
panda$core$Real32 panda$core$Int16$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 234
int16_t $tmp139 = param0.value;
int16_t $tmp140 = param1.value;
float $tmp141 = ((float) $tmp139) / ((float) $tmp140);
panda$core$Real32 $tmp142 = panda$core$Real32$init$builtin_float32($tmp141);
return $tmp142;

}
panda$core$Real32 panda$core$Int16$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 240
int16_t $tmp143 = param0.value;
int32_t $tmp144 = param1.value;
float $tmp145 = ((float) $tmp143) / ((float) $tmp144);
panda$core$Real32 $tmp146 = panda$core$Real32$init$builtin_float32($tmp145);
return $tmp146;

}
panda$core$Real64 panda$core$Int16$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 246
int16_t $tmp147 = param0.value;
int64_t $tmp148 = param1.value;
double $tmp149 = ((double) $tmp147) / ((double) $tmp148);
panda$core$Real64 $tmp150 = panda$core$Real64$init$builtin_float64($tmp149);
return $tmp150;

}
panda$core$Real32 panda$core$Int16$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$Int16 param0, panda$core$UInt8 param1) {

// line 252
int16_t $tmp151 = param0.value;
uint8_t $tmp152 = param1.value;
float $tmp153 = ((float) $tmp151) / ((float) $tmp152);
panda$core$Real32 $tmp154 = panda$core$Real32$init$builtin_float32($tmp153);
return $tmp154;

}
panda$core$Real32 panda$core$Int16$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 258
int16_t $tmp155 = param0.value;
uint16_t $tmp156 = param1.value;
float $tmp157 = ((float) $tmp155) / ((float) $tmp156);
panda$core$Real32 $tmp158 = panda$core$Real32$init$builtin_float32($tmp157);
return $tmp158;

}
panda$core$Real32 panda$core$Int16$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 264
int16_t $tmp159 = param0.value;
uint32_t $tmp160 = param1.value;
float $tmp161 = ((float) $tmp159) / ((float) $tmp160);
panda$core$Real32 $tmp162 = panda$core$Real32$init$builtin_float32($tmp161);
return $tmp162;

}
panda$core$Real64 panda$core$Int16$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Int16 param0, panda$core$UInt64 param1) {

// line 270
int16_t $tmp163 = param0.value;
uint64_t $tmp164 = param1.value;
double $tmp165 = ((double) $tmp163) / ((double) $tmp164);
panda$core$Real64 $tmp166 = panda$core$Real64$init$builtin_float64($tmp165);
return $tmp166;

}
panda$core$Real32 panda$core$Int16$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Int16 param0, panda$core$Real32 param1) {

// line 276
int16_t $tmp167 = param0.value;
float $tmp168 = param1.value;
float $tmp169 = ((float) $tmp167) / $tmp168;
panda$core$Real32 $tmp170 = panda$core$Real32$init$builtin_float32($tmp169);
return $tmp170;

}
panda$core$Real64 panda$core$Int16$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Int16 param0, panda$core$Real64 param1) {

// line 282
int16_t $tmp171 = param0.value;
double $tmp172 = param1.value;
double $tmp173 = ((double) $tmp171) / $tmp172;
panda$core$Real64 $tmp174 = panda$core$Real64$init$builtin_float64($tmp173);
return $tmp174;

}
panda$core$Int16 panda$core$Int16$$BNOT$R$panda$core$Int16(panda$core$Int16 param0) {

// line 287
int16_t $tmp175 = param0.value;
int16_t $tmp176 = !$tmp175;
panda$core$Int16 $tmp177 = (panda$core$Int16) {$tmp176};
return $tmp177;

}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 293
int16_t $tmp178 = param0.value;
int16_t $tmp179 = param1.value;
int32_t $tmp180 = ((int32_t) $tmp178) & ((int32_t) $tmp179);
panda$core$Int32 $tmp181 = panda$core$Int32$init$builtin_int32($tmp180);
return $tmp181;

}
panda$core$Int16 panda$core$Int16$$BAND$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 298
int16_t $tmp182 = param0.value;
int16_t $tmp183 = param1.value;
int16_t $tmp184 = $tmp182 & $tmp183;
panda$core$Int16 $tmp185 = panda$core$Int16$init$builtin_int16($tmp184);
return $tmp185;

}
panda$core$Int32 panda$core$Int16$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 304
int16_t $tmp186 = param0.value;
int32_t $tmp187 = param1.value;
int32_t $tmp188 = ((int32_t) $tmp186) & $tmp187;
panda$core$Int32 $tmp189 = panda$core$Int32$init$builtin_int32($tmp188);
return $tmp189;

}
panda$core$Int64 panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 310
int16_t $tmp190 = param0.value;
int64_t $tmp191 = param1.value;
int64_t $tmp192 = ((int64_t) $tmp190) & $tmp191;
panda$core$Int64 $tmp193 = panda$core$Int64$init$builtin_int64($tmp192);
return $tmp193;

}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 316
int16_t $tmp194 = param0.value;
uint16_t $tmp195 = param1.value;
uint32_t $tmp196 = ((uint32_t) $tmp194) & ((uint32_t) $tmp195);
panda$core$UInt32 $tmp197 = panda$core$UInt32$init$builtin_uint32($tmp196);
return $tmp197;

}
panda$core$UInt32 panda$core$Int16$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 322
int16_t $tmp198 = param0.value;
uint32_t $tmp199 = param1.value;
uint32_t $tmp200 = ((uint32_t) $tmp198) & $tmp199;
panda$core$UInt32 $tmp201 = panda$core$UInt32$init$builtin_uint32($tmp200);
return $tmp201;

}
panda$core$UInt64 panda$core$Int16$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 param0, panda$core$UInt64 param1) {

// line 328
int16_t $tmp202 = param0.value;
uint64_t $tmp203 = param1.value;
uint64_t $tmp204 = ((uint64_t) $tmp202) & $tmp203;
panda$core$UInt64 $tmp205 = panda$core$UInt64$init$builtin_uint64($tmp204);
return $tmp205;

}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 334
int16_t $tmp206 = param0.value;
int16_t $tmp207 = param1.value;
int32_t $tmp208 = ((int32_t) $tmp206) | ((int32_t) $tmp207);
panda$core$Int32 $tmp209 = panda$core$Int32$init$builtin_int32($tmp208);
return $tmp209;

}
panda$core$Int16 panda$core$Int16$$BOR$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 339
int16_t $tmp210 = param0.value;
int16_t $tmp211 = param1.value;
int16_t $tmp212 = $tmp210 | $tmp211;
panda$core$Int16 $tmp213 = panda$core$Int16$init$builtin_int16($tmp212);
return $tmp213;

}
panda$core$Int32 panda$core$Int16$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 345
int16_t $tmp214 = param0.value;
int32_t $tmp215 = param1.value;
int32_t $tmp216 = ((int32_t) $tmp214) | $tmp215;
panda$core$Int32 $tmp217 = panda$core$Int32$init$builtin_int32($tmp216);
return $tmp217;

}
panda$core$Int64 panda$core$Int16$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 351
int16_t $tmp218 = param0.value;
int64_t $tmp219 = param1.value;
int64_t $tmp220 = ((int64_t) $tmp218) | $tmp219;
panda$core$Int64 $tmp221 = panda$core$Int64$init$builtin_int64($tmp220);
return $tmp221;

}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 357
int16_t $tmp222 = param0.value;
uint16_t $tmp223 = param1.value;
uint32_t $tmp224 = ((uint32_t) $tmp222) | ((uint32_t) $tmp223);
panda$core$UInt32 $tmp225 = panda$core$UInt32$init$builtin_uint32($tmp224);
return $tmp225;

}
panda$core$UInt32 panda$core$Int16$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 363
int16_t $tmp226 = param0.value;
uint32_t $tmp227 = param1.value;
uint32_t $tmp228 = ((uint32_t) $tmp226) | $tmp227;
panda$core$UInt32 $tmp229 = panda$core$UInt32$init$builtin_uint32($tmp228);
return $tmp229;

}
panda$core$UInt64 panda$core$Int16$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 param0, panda$core$UInt64 param1) {

// line 369
int16_t $tmp230 = param0.value;
uint64_t $tmp231 = param1.value;
uint64_t $tmp232 = ((uint64_t) $tmp230) | $tmp231;
panda$core$UInt64 $tmp233 = panda$core$UInt64$init$builtin_uint64($tmp232);
return $tmp233;

}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 375
int16_t $tmp234 = param0.value;
int16_t $tmp235 = param1.value;
int32_t $tmp236 = ((int32_t) $tmp234) ^ ((int32_t) $tmp235);
panda$core$Int32 $tmp237 = panda$core$Int32$init$builtin_int32($tmp236);
return $tmp237;

}
panda$core$Int16 panda$core$Int16$$BXOR$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 380
int16_t $tmp238 = param0.value;
int16_t $tmp239 = param1.value;
int16_t $tmp240 = $tmp238 ^ $tmp239;
panda$core$Int16 $tmp241 = panda$core$Int16$init$builtin_int16($tmp240);
return $tmp241;

}
panda$core$Int32 panda$core$Int16$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 386
int16_t $tmp242 = param0.value;
int32_t $tmp243 = param1.value;
int32_t $tmp244 = ((int32_t) $tmp242) ^ $tmp243;
panda$core$Int32 $tmp245 = panda$core$Int32$init$builtin_int32($tmp244);
return $tmp245;

}
panda$core$Int64 panda$core$Int16$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 392
int16_t $tmp246 = param0.value;
int64_t $tmp247 = param1.value;
int64_t $tmp248 = ((int64_t) $tmp246) ^ $tmp247;
panda$core$Int64 $tmp249 = panda$core$Int64$init$builtin_int64($tmp248);
return $tmp249;

}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 398
int16_t $tmp250 = param0.value;
uint16_t $tmp251 = param1.value;
uint32_t $tmp252 = ((uint32_t) $tmp250) ^ ((uint32_t) $tmp251);
panda$core$UInt32 $tmp253 = panda$core$UInt32$init$builtin_uint32($tmp252);
return $tmp253;

}
panda$core$UInt32 panda$core$Int16$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 404
int16_t $tmp254 = param0.value;
uint32_t $tmp255 = param1.value;
uint32_t $tmp256 = ((uint32_t) $tmp254) ^ $tmp255;
panda$core$UInt32 $tmp257 = panda$core$UInt32$init$builtin_uint32($tmp256);
return $tmp257;

}
panda$core$UInt64 panda$core$Int16$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 param0, panda$core$UInt64 param1) {

// line 410
int16_t $tmp258 = param0.value;
uint64_t $tmp259 = param1.value;
uint64_t $tmp260 = ((uint64_t) $tmp258) ^ $tmp259;
panda$core$UInt64 $tmp261 = panda$core$UInt64$init$builtin_uint64($tmp260);
return $tmp261;

}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 416
int16_t $tmp262 = param0.value;
int16_t $tmp263 = param1.value;
int32_t $tmp264 = ((int32_t) $tmp262) << ((int32_t) $tmp263);
panda$core$Int32 $tmp265 = panda$core$Int32$init$builtin_int32($tmp264);
return $tmp265;

}
panda$core$Int16 panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 421
int16_t $tmp266 = param0.value;
int16_t $tmp267 = param1.value;
int16_t $tmp268 = $tmp266 << $tmp267;
panda$core$Int16 $tmp269 = panda$core$Int16$init$builtin_int16($tmp268);
return $tmp269;

}
panda$core$Int32 panda$core$Int16$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 427
int16_t $tmp270 = param0.value;
int32_t $tmp271 = param1.value;
int32_t $tmp272 = ((int32_t) $tmp270) << $tmp271;
panda$core$Int32 $tmp273 = panda$core$Int32$init$builtin_int32($tmp272);
return $tmp273;

}
panda$core$Int64 panda$core$Int16$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 433
int16_t $tmp274 = param0.value;
int64_t $tmp275 = param1.value;
int64_t $tmp276 = ((int64_t) $tmp274) << $tmp275;
panda$core$Int64 $tmp277 = panda$core$Int64$init$builtin_int64($tmp276);
return $tmp277;

}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 439
int16_t $tmp278 = param0.value;
uint16_t $tmp279 = param1.value;
uint32_t $tmp280 = ((uint32_t) $tmp278) << ((uint32_t) $tmp279);
panda$core$UInt32 $tmp281 = panda$core$UInt32$init$builtin_uint32($tmp280);
return $tmp281;

}
panda$core$UInt32 panda$core$Int16$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 445
int16_t $tmp282 = param0.value;
uint32_t $tmp283 = param1.value;
uint32_t $tmp284 = ((uint32_t) $tmp282) << $tmp283;
panda$core$UInt32 $tmp285 = panda$core$UInt32$init$builtin_uint32($tmp284);
return $tmp285;

}
panda$core$UInt64 panda$core$Int16$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 param0, panda$core$UInt64 param1) {

// line 451
int16_t $tmp286 = param0.value;
uint64_t $tmp287 = param1.value;
uint64_t $tmp288 = ((uint64_t) $tmp286) << $tmp287;
panda$core$UInt64 $tmp289 = panda$core$UInt64$init$builtin_uint64($tmp288);
return $tmp289;

}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 457
int16_t $tmp290 = param0.value;
int16_t $tmp291 = param1.value;
int32_t $tmp292 = ((int32_t) $tmp290) >> ((int32_t) $tmp291);
panda$core$Int32 $tmp293 = panda$core$Int32$init$builtin_int32($tmp292);
return $tmp293;

}
panda$core$Int16 panda$core$Int16$$SHR$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 462
int16_t $tmp294 = param0.value;
int16_t $tmp295 = param1.value;
int16_t $tmp296 = $tmp294 >> $tmp295;
panda$core$Int16 $tmp297 = panda$core$Int16$init$builtin_int16($tmp296);
return $tmp297;

}
panda$core$Int32 panda$core$Int16$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 468
int16_t $tmp298 = param0.value;
int32_t $tmp299 = param1.value;
int32_t $tmp300 = ((int32_t) $tmp298) >> $tmp299;
panda$core$Int32 $tmp301 = panda$core$Int32$init$builtin_int32($tmp300);
return $tmp301;

}
panda$core$Int64 panda$core$Int16$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 474
int16_t $tmp302 = param0.value;
int64_t $tmp303 = param1.value;
int64_t $tmp304 = ((int64_t) $tmp302) >> $tmp303;
panda$core$Int64 $tmp305 = panda$core$Int64$init$builtin_int64($tmp304);
return $tmp305;

}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 480
int16_t $tmp306 = param0.value;
uint16_t $tmp307 = param1.value;
uint32_t $tmp308 = ((uint32_t) $tmp306) >> ((uint32_t) $tmp307);
panda$core$UInt32 $tmp309 = panda$core$UInt32$init$builtin_uint32($tmp308);
return $tmp309;

}
panda$core$UInt32 panda$core$Int16$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 486
int16_t $tmp310 = param0.value;
uint32_t $tmp311 = param1.value;
uint32_t $tmp312 = ((uint32_t) $tmp310) >> $tmp311;
panda$core$UInt32 $tmp313 = panda$core$UInt32$init$builtin_uint32($tmp312);
return $tmp313;

}
panda$core$UInt64 panda$core$Int16$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int16 param0, panda$core$UInt64 param1) {

// line 492
int16_t $tmp314 = param0.value;
uint64_t $tmp315 = param1.value;
uint64_t $tmp316 = ((uint64_t) $tmp314) >> $tmp315;
panda$core$UInt64 $tmp317 = panda$core$UInt64$init$builtin_uint64($tmp316);
return $tmp317;

}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int8 param1) {

// line 498
int16_t $tmp318 = param0.value;
int8_t $tmp319 = param1.value;
bool $tmp320 = $tmp318 == ((int16_t) $tmp319);
panda$core$Bit $tmp321 = panda$core$Bit$init$builtin_bit($tmp320);
return $tmp321;

}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 505
int16_t $tmp322 = param0.value;
int16_t $tmp323 = param1.value;
bool $tmp324 = $tmp322 == $tmp323;
panda$core$Bit $tmp325 = panda$core$Bit$init$builtin_bit($tmp324);
return $tmp325;

}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 511
int16_t $tmp326 = param0.value;
int32_t $tmp327 = param1.value;
bool $tmp328 = ((int32_t) $tmp326) == $tmp327;
panda$core$Bit $tmp329 = panda$core$Bit$init$builtin_bit($tmp328);
return $tmp329;

}
panda$core$Bit panda$core$Int16$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 517
int16_t $tmp330 = param0.value;
int64_t $tmp331 = param1.value;
bool $tmp332 = ((int64_t) $tmp330) == $tmp331;
panda$core$Bit $tmp333 = panda$core$Bit$init$builtin_bit($tmp332);
return $tmp333;

}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt8 param1) {

// line 523
int16_t $tmp334 = param0.value;
uint8_t $tmp335 = param1.value;
bool $tmp336 = ((int32_t) $tmp334) == ((int32_t) $tmp335);
panda$core$Bit $tmp337 = panda$core$Bit$init$builtin_bit($tmp336);
return $tmp337;

}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 529
int16_t $tmp338 = param0.value;
uint16_t $tmp339 = param1.value;
bool $tmp340 = ((int32_t) $tmp338) == ((int32_t) $tmp339);
panda$core$Bit $tmp341 = panda$core$Bit$init$builtin_bit($tmp340);
return $tmp341;

}
panda$core$Bit panda$core$Int16$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 535
int16_t $tmp342 = param0.value;
uint32_t $tmp343 = param1.value;
bool $tmp344 = ((int64_t) $tmp342) == ((int64_t) $tmp343);
panda$core$Bit $tmp345 = panda$core$Bit$init$builtin_bit($tmp344);
return $tmp345;

}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int8 param1) {

// line 541
int16_t $tmp346 = param0.value;
int8_t $tmp347 = param1.value;
bool $tmp348 = $tmp346 != ((int16_t) $tmp347);
panda$core$Bit $tmp349 = panda$core$Bit$init$builtin_bit($tmp348);
return $tmp349;

}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 548
int16_t $tmp350 = param0.value;
int16_t $tmp351 = param1.value;
bool $tmp352 = $tmp350 != $tmp351;
panda$core$Bit $tmp353 = panda$core$Bit$init$builtin_bit($tmp352);
return $tmp353;

}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 554
int16_t $tmp354 = param0.value;
int32_t $tmp355 = param1.value;
bool $tmp356 = ((int32_t) $tmp354) != $tmp355;
panda$core$Bit $tmp357 = panda$core$Bit$init$builtin_bit($tmp356);
return $tmp357;

}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 560
int16_t $tmp358 = param0.value;
int64_t $tmp359 = param1.value;
bool $tmp360 = ((int64_t) $tmp358) != $tmp359;
panda$core$Bit $tmp361 = panda$core$Bit$init$builtin_bit($tmp360);
return $tmp361;

}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt8 param1) {

// line 566
int16_t $tmp362 = param0.value;
uint8_t $tmp363 = param1.value;
bool $tmp364 = ((int32_t) $tmp362) != ((int32_t) $tmp363);
panda$core$Bit $tmp365 = panda$core$Bit$init$builtin_bit($tmp364);
return $tmp365;

}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 572
int16_t $tmp366 = param0.value;
uint16_t $tmp367 = param1.value;
bool $tmp368 = ((int32_t) $tmp366) != ((int32_t) $tmp367);
panda$core$Bit $tmp369 = panda$core$Bit$init$builtin_bit($tmp368);
return $tmp369;

}
panda$core$Bit panda$core$Int16$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 578
int16_t $tmp370 = param0.value;
uint32_t $tmp371 = param1.value;
bool $tmp372 = ((int64_t) $tmp370) != ((int64_t) $tmp371);
panda$core$Bit $tmp373 = panda$core$Bit$init$builtin_bit($tmp372);
return $tmp373;

}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int8 param1) {

// line 584
int16_t $tmp374 = param0.value;
int8_t $tmp375 = param1.value;
bool $tmp376 = $tmp374 < ((int16_t) $tmp375);
panda$core$Bit $tmp377 = panda$core$Bit$init$builtin_bit($tmp376);
return $tmp377;

}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 591
int16_t $tmp378 = param0.value;
int16_t $tmp379 = param1.value;
bool $tmp380 = $tmp378 < $tmp379;
panda$core$Bit $tmp381 = panda$core$Bit$init$builtin_bit($tmp380);
return $tmp381;

}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 597
int16_t $tmp382 = param0.value;
int32_t $tmp383 = param1.value;
bool $tmp384 = ((int32_t) $tmp382) < $tmp383;
panda$core$Bit $tmp385 = panda$core$Bit$init$builtin_bit($tmp384);
return $tmp385;

}
panda$core$Bit panda$core$Int16$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 603
int16_t $tmp386 = param0.value;
int64_t $tmp387 = param1.value;
bool $tmp388 = ((int64_t) $tmp386) < $tmp387;
panda$core$Bit $tmp389 = panda$core$Bit$init$builtin_bit($tmp388);
return $tmp389;

}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt8 param1) {

// line 609
int16_t $tmp390 = param0.value;
uint8_t $tmp391 = param1.value;
bool $tmp392 = ((int32_t) $tmp390) < ((int32_t) $tmp391);
panda$core$Bit $tmp393 = panda$core$Bit$init$builtin_bit($tmp392);
return $tmp393;

}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 615
int16_t $tmp394 = param0.value;
uint16_t $tmp395 = param1.value;
bool $tmp396 = ((int32_t) $tmp394) < ((int32_t) $tmp395);
panda$core$Bit $tmp397 = panda$core$Bit$init$builtin_bit($tmp396);
return $tmp397;

}
panda$core$Bit panda$core$Int16$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 621
int16_t $tmp398 = param0.value;
uint32_t $tmp399 = param1.value;
bool $tmp400 = ((int64_t) $tmp398) < ((int64_t) $tmp399);
panda$core$Bit $tmp401 = panda$core$Bit$init$builtin_bit($tmp400);
return $tmp401;

}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int8 param1) {

// line 627
int16_t $tmp402 = param0.value;
int8_t $tmp403 = param1.value;
bool $tmp404 = $tmp402 > ((int16_t) $tmp403);
panda$core$Bit $tmp405 = panda$core$Bit$init$builtin_bit($tmp404);
return $tmp405;

}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 634
int16_t $tmp406 = param0.value;
int16_t $tmp407 = param1.value;
bool $tmp408 = $tmp406 > $tmp407;
panda$core$Bit $tmp409 = panda$core$Bit$init$builtin_bit($tmp408);
return $tmp409;

}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 640
int16_t $tmp410 = param0.value;
int32_t $tmp411 = param1.value;
bool $tmp412 = ((int32_t) $tmp410) > $tmp411;
panda$core$Bit $tmp413 = panda$core$Bit$init$builtin_bit($tmp412);
return $tmp413;

}
panda$core$Bit panda$core$Int16$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 646
int16_t $tmp414 = param0.value;
int64_t $tmp415 = param1.value;
bool $tmp416 = ((int64_t) $tmp414) > $tmp415;
panda$core$Bit $tmp417 = panda$core$Bit$init$builtin_bit($tmp416);
return $tmp417;

}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt8 param1) {

// line 652
int16_t $tmp418 = param0.value;
uint8_t $tmp419 = param1.value;
bool $tmp420 = ((int32_t) $tmp418) > ((int32_t) $tmp419);
panda$core$Bit $tmp421 = panda$core$Bit$init$builtin_bit($tmp420);
return $tmp421;

}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 658
int16_t $tmp422 = param0.value;
uint16_t $tmp423 = param1.value;
bool $tmp424 = ((int32_t) $tmp422) > ((int32_t) $tmp423);
panda$core$Bit $tmp425 = panda$core$Bit$init$builtin_bit($tmp424);
return $tmp425;

}
panda$core$Bit panda$core$Int16$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 664
int16_t $tmp426 = param0.value;
uint32_t $tmp427 = param1.value;
bool $tmp428 = ((int64_t) $tmp426) > ((int64_t) $tmp427);
panda$core$Bit $tmp429 = panda$core$Bit$init$builtin_bit($tmp428);
return $tmp429;

}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int8 param1) {

// line 670
int16_t $tmp430 = param0.value;
int8_t $tmp431 = param1.value;
bool $tmp432 = $tmp430 >= ((int16_t) $tmp431);
panda$core$Bit $tmp433 = panda$core$Bit$init$builtin_bit($tmp432);
return $tmp433;

}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 677
int16_t $tmp434 = param0.value;
int16_t $tmp435 = param1.value;
bool $tmp436 = $tmp434 >= $tmp435;
panda$core$Bit $tmp437 = panda$core$Bit$init$builtin_bit($tmp436);
return $tmp437;

}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 683
int16_t $tmp438 = param0.value;
int32_t $tmp439 = param1.value;
bool $tmp440 = ((int32_t) $tmp438) >= $tmp439;
panda$core$Bit $tmp441 = panda$core$Bit$init$builtin_bit($tmp440);
return $tmp441;

}
panda$core$Bit panda$core$Int16$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 689
int16_t $tmp442 = param0.value;
int64_t $tmp443 = param1.value;
bool $tmp444 = ((int64_t) $tmp442) >= $tmp443;
panda$core$Bit $tmp445 = panda$core$Bit$init$builtin_bit($tmp444);
return $tmp445;

}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt8 param1) {

// line 695
int16_t $tmp446 = param0.value;
uint8_t $tmp447 = param1.value;
bool $tmp448 = ((int32_t) $tmp446) >= ((int32_t) $tmp447);
panda$core$Bit $tmp449 = panda$core$Bit$init$builtin_bit($tmp448);
return $tmp449;

}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 701
int16_t $tmp450 = param0.value;
uint16_t $tmp451 = param1.value;
bool $tmp452 = ((int32_t) $tmp450) >= ((int32_t) $tmp451);
panda$core$Bit $tmp453 = panda$core$Bit$init$builtin_bit($tmp452);
return $tmp453;

}
panda$core$Bit panda$core$Int16$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 707
int16_t $tmp454 = param0.value;
uint32_t $tmp455 = param1.value;
bool $tmp456 = ((int64_t) $tmp454) >= ((int64_t) $tmp455);
panda$core$Bit $tmp457 = panda$core$Bit$init$builtin_bit($tmp456);
return $tmp457;

}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int8 param1) {

// line 713
int16_t $tmp458 = param0.value;
int8_t $tmp459 = param1.value;
bool $tmp460 = $tmp458 <= ((int16_t) $tmp459);
panda$core$Bit $tmp461 = panda$core$Bit$init$builtin_bit($tmp460);
return $tmp461;

}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 720
int16_t $tmp462 = param0.value;
int16_t $tmp463 = param1.value;
bool $tmp464 = $tmp462 <= $tmp463;
panda$core$Bit $tmp465 = panda$core$Bit$init$builtin_bit($tmp464);
return $tmp465;

}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 726
int16_t $tmp466 = param0.value;
int32_t $tmp467 = param1.value;
bool $tmp468 = ((int32_t) $tmp466) <= $tmp467;
panda$core$Bit $tmp469 = panda$core$Bit$init$builtin_bit($tmp468);
return $tmp469;

}
panda$core$Bit panda$core$Int16$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 732
int16_t $tmp470 = param0.value;
int64_t $tmp471 = param1.value;
bool $tmp472 = ((int64_t) $tmp470) <= $tmp471;
panda$core$Bit $tmp473 = panda$core$Bit$init$builtin_bit($tmp472);
return $tmp473;

}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt8 param1) {

// line 738
int16_t $tmp474 = param0.value;
uint8_t $tmp475 = param1.value;
bool $tmp476 = ((int32_t) $tmp474) <= ((int32_t) $tmp475);
panda$core$Bit $tmp477 = panda$core$Bit$init$builtin_bit($tmp476);
return $tmp477;

}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 744
int16_t $tmp478 = param0.value;
uint16_t $tmp479 = param1.value;
bool $tmp480 = ((int32_t) $tmp478) <= ((int32_t) $tmp479);
panda$core$Bit $tmp481 = panda$core$Bit$init$builtin_bit($tmp480);
return $tmp481;

}
panda$core$Bit panda$core$Int16$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 750
int16_t $tmp482 = param0.value;
uint32_t $tmp483 = param1.value;
bool $tmp484 = ((int64_t) $tmp482) <= ((int64_t) $tmp483);
panda$core$Bit $tmp485 = panda$core$Bit$init$builtin_bit($tmp484);
return $tmp485;

}
panda$core$Int16 panda$core$Int16$get_abs$R$panda$core$Int16(panda$core$Int16 param0) {

// line 756
panda$core$Int16 $tmp486 = (panda$core$Int16) {0};
int16_t $tmp487 = param0.value;
int16_t $tmp488 = $tmp486.value;
bool $tmp489 = $tmp487 < $tmp488;
panda$core$Bit $tmp490 = (panda$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block1; else goto block2;
block1:;
// line 757
panda$core$Int16 $tmp492 = panda$core$Int16$$SUB$R$panda$core$Int16(param0);
return $tmp492;
block2:;
// line 759
return param0;

}
panda$core$Int16 panda$core$Int16$min$panda$core$Int8$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int8 param1) {

// line 765
int16_t $tmp493 = param0.value;
int8_t $tmp494 = param1.value;
bool $tmp495 = $tmp493 < ((int16_t) $tmp494);
panda$core$Bit $tmp496 = panda$core$Bit$init$builtin_bit($tmp495);
bool $tmp497 = $tmp496.value;
if ($tmp497) goto block1; else goto block2;
block1:;
// line 766
int16_t $tmp498 = param0.value;
panda$core$Int16 $tmp499 = panda$core$Int16$init$builtin_int16($tmp498);
return $tmp499;
block2:;
// line 768
int8_t $tmp500 = param1.value;
panda$core$Int16 $tmp501 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp500));
return $tmp501;

}
panda$core$Int16 panda$core$Int16$min$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 774
int16_t $tmp502 = param0.value;
int16_t $tmp503 = param1.value;
bool $tmp504 = $tmp502 < $tmp503;
panda$core$Bit $tmp505 = panda$core$Bit$init$builtin_bit($tmp504);
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block1; else goto block2;
block1:;
// line 775
int16_t $tmp507 = param0.value;
panda$core$Int16 $tmp508 = panda$core$Int16$init$builtin_int16($tmp507);
return $tmp508;
block2:;
// line 777
int16_t $tmp509 = param1.value;
panda$core$Int16 $tmp510 = panda$core$Int16$init$builtin_int16($tmp509);
return $tmp510;

}
panda$core$Int32 panda$core$Int16$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 783
int16_t $tmp511 = param0.value;
int32_t $tmp512 = param1.value;
bool $tmp513 = ((int32_t) $tmp511) < $tmp512;
panda$core$Bit $tmp514 = panda$core$Bit$init$builtin_bit($tmp513);
bool $tmp515 = $tmp514.value;
if ($tmp515) goto block1; else goto block2;
block1:;
// line 784
int16_t $tmp516 = param0.value;
panda$core$Int32 $tmp517 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp516));
return $tmp517;
block2:;
// line 786
int32_t $tmp518 = param1.value;
panda$core$Int32 $tmp519 = panda$core$Int32$init$builtin_int32($tmp518);
return $tmp519;

}
panda$core$Int64 panda$core$Int16$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 792
int16_t $tmp520 = param0.value;
int64_t $tmp521 = param1.value;
bool $tmp522 = ((int64_t) $tmp520) < $tmp521;
panda$core$Bit $tmp523 = panda$core$Bit$init$builtin_bit($tmp522);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block1; else goto block2;
block1:;
// line 793
int16_t $tmp525 = param0.value;
panda$core$Int64 $tmp526 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp525));
return $tmp526;
block2:;
// line 795
int64_t $tmp527 = param1.value;
panda$core$Int64 $tmp528 = panda$core$Int64$init$builtin_int64($tmp527);
return $tmp528;

}
panda$core$Int32 panda$core$Int16$min$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 param0, panda$core$UInt8 param1) {

// line 801
int16_t $tmp529 = param0.value;
uint8_t $tmp530 = param1.value;
bool $tmp531 = ((int32_t) $tmp529) < ((int32_t) $tmp530);
panda$core$Bit $tmp532 = panda$core$Bit$init$builtin_bit($tmp531);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block1; else goto block2;
block1:;
// line 802
int16_t $tmp534 = param0.value;
panda$core$Int32 $tmp535 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp534));
return $tmp535;
block2:;
// line 804
uint8_t $tmp536 = param1.value;
panda$core$Int32 $tmp537 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp536));
return $tmp537;

}
panda$core$Int32 panda$core$Int16$min$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 810
int16_t $tmp538 = param0.value;
uint16_t $tmp539 = param1.value;
bool $tmp540 = ((int32_t) $tmp538) < ((int32_t) $tmp539);
panda$core$Bit $tmp541 = panda$core$Bit$init$builtin_bit($tmp540);
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block1; else goto block2;
block1:;
// line 811
int16_t $tmp543 = param0.value;
panda$core$Int32 $tmp544 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp543));
return $tmp544;
block2:;
// line 813
uint16_t $tmp545 = param1.value;
panda$core$Int32 $tmp546 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp545));
return $tmp546;

}
panda$core$Int64 panda$core$Int16$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 819
int16_t $tmp547 = param0.value;
uint32_t $tmp548 = param1.value;
bool $tmp549 = ((int64_t) $tmp547) < ((int64_t) $tmp548);
panda$core$Bit $tmp550 = panda$core$Bit$init$builtin_bit($tmp549);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block1; else goto block2;
block1:;
// line 820
int16_t $tmp552 = param0.value;
panda$core$Int64 $tmp553 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp552));
return $tmp553;
block2:;
// line 822
uint32_t $tmp554 = param1.value;
panda$core$Int64 $tmp555 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp554));
return $tmp555;

}
panda$core$Int16 panda$core$Int16$max$panda$core$Int8$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int8 param1) {

// line 829
int16_t $tmp556 = param0.value;
int8_t $tmp557 = param1.value;
bool $tmp558 = $tmp556 > ((int16_t) $tmp557);
panda$core$Bit $tmp559 = panda$core$Bit$init$builtin_bit($tmp558);
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block1; else goto block2;
block1:;
// line 830
int16_t $tmp561 = param0.value;
panda$core$Int16 $tmp562 = panda$core$Int16$init$builtin_int16($tmp561);
return $tmp562;
block2:;
// line 832
int8_t $tmp563 = param1.value;
panda$core$Int16 $tmp564 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp563));
return $tmp564;

}
panda$core$Int16 panda$core$Int16$max$panda$core$Int16$R$panda$core$Int16(panda$core$Int16 param0, panda$core$Int16 param1) {

// line 838
int16_t $tmp565 = param0.value;
int16_t $tmp566 = param1.value;
bool $tmp567 = $tmp565 > $tmp566;
panda$core$Bit $tmp568 = panda$core$Bit$init$builtin_bit($tmp567);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block1; else goto block2;
block1:;
// line 839
int16_t $tmp570 = param0.value;
panda$core$Int16 $tmp571 = panda$core$Int16$init$builtin_int16($tmp570);
return $tmp571;
block2:;
// line 841
int16_t $tmp572 = param1.value;
panda$core$Int16 $tmp573 = panda$core$Int16$init$builtin_int16($tmp572);
return $tmp573;

}
panda$core$Int32 panda$core$Int16$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int16 param0, panda$core$Int32 param1) {

// line 847
int16_t $tmp574 = param0.value;
int32_t $tmp575 = param1.value;
bool $tmp576 = ((int32_t) $tmp574) > $tmp575;
panda$core$Bit $tmp577 = panda$core$Bit$init$builtin_bit($tmp576);
bool $tmp578 = $tmp577.value;
if ($tmp578) goto block1; else goto block2;
block1:;
// line 848
int16_t $tmp579 = param0.value;
panda$core$Int32 $tmp580 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp579));
return $tmp580;
block2:;
// line 850
int32_t $tmp581 = param1.value;
panda$core$Int32 $tmp582 = panda$core$Int32$init$builtin_int32($tmp581);
return $tmp582;

}
panda$core$Int64 panda$core$Int16$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int16 param0, panda$core$Int64 param1) {

// line 856
int16_t $tmp583 = param0.value;
int64_t $tmp584 = param1.value;
bool $tmp585 = ((int64_t) $tmp583) > $tmp584;
panda$core$Bit $tmp586 = panda$core$Bit$init$builtin_bit($tmp585);
bool $tmp587 = $tmp586.value;
if ($tmp587) goto block1; else goto block2;
block1:;
// line 857
int16_t $tmp588 = param0.value;
panda$core$Int64 $tmp589 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp588));
return $tmp589;
block2:;
// line 859
int64_t $tmp590 = param1.value;
panda$core$Int64 $tmp591 = panda$core$Int64$init$builtin_int64($tmp590);
return $tmp591;

}
panda$core$Int32 panda$core$Int16$max$panda$core$UInt8$R$panda$core$Int32(panda$core$Int16 param0, panda$core$UInt8 param1) {

// line 865
int16_t $tmp592 = param0.value;
uint8_t $tmp593 = param1.value;
bool $tmp594 = ((int32_t) $tmp592) > ((int32_t) $tmp593);
panda$core$Bit $tmp595 = panda$core$Bit$init$builtin_bit($tmp594);
bool $tmp596 = $tmp595.value;
if ($tmp596) goto block1; else goto block2;
block1:;
// line 866
int16_t $tmp597 = param0.value;
panda$core$Int32 $tmp598 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp597));
return $tmp598;
block2:;
// line 868
uint8_t $tmp599 = param1.value;
panda$core$Int32 $tmp600 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp599));
return $tmp600;

}
panda$core$Int32 panda$core$Int16$max$panda$core$UInt16$R$panda$core$Int32(panda$core$Int16 param0, panda$core$UInt16 param1) {

// line 874
int16_t $tmp601 = param0.value;
uint16_t $tmp602 = param1.value;
bool $tmp603 = ((int32_t) $tmp601) > ((int32_t) $tmp602);
panda$core$Bit $tmp604 = panda$core$Bit$init$builtin_bit($tmp603);
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block1; else goto block2;
block1:;
// line 875
int16_t $tmp606 = param0.value;
panda$core$Int32 $tmp607 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp606));
return $tmp607;
block2:;
// line 877
uint16_t $tmp608 = param1.value;
panda$core$Int32 $tmp609 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp608));
return $tmp609;

}
panda$core$Int64 panda$core$Int16$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int16 param0, panda$core$UInt32 param1) {

// line 883
int16_t $tmp610 = param0.value;
uint32_t $tmp611 = param1.value;
bool $tmp612 = ((int64_t) $tmp610) > ((int64_t) $tmp611);
panda$core$Bit $tmp613 = panda$core$Bit$init$builtin_bit($tmp612);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block1; else goto block2;
block1:;
// line 884
int16_t $tmp615 = param0.value;
panda$core$Int64 $tmp616 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp615));
return $tmp616;
block2:;
// line 886
uint32_t $tmp617 = param1.value;
panda$core$Int64 $tmp618 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp617));
return $tmp618;

}
panda$collections$ListView* panda$core$Int16$$IDX$panda$core$Range$LTpanda$core$Int16$GT$R$panda$collections$ListView$LTpanda$core$Int16$GT(panda$core$Range$LTpanda$core$Int16$GT param0) {

// line 892
org$pandalanguage$panda$Int16List* $tmp619 = (org$pandalanguage$panda$Int16List*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$Int16List$class);
panda$core$Int16 $tmp620 = param0.min;
panda$core$Int16 $tmp621 = param0.max;
panda$core$Int16 $tmp622 = (panda$core$Int16) {1};
panda$core$Bit $tmp623 = param0.inclusive;
panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT $tmp624 = panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT$init$panda$core$Int16$panda$core$Int16$panda$core$Int16$panda$core$Bit($tmp620, $tmp621, $tmp622, $tmp623);
org$pandalanguage$panda$Int16List$init$panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT($tmp619, $tmp624);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp619)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing REF($1:org.pandalanguage.panda.Int16List)
return ((panda$collections$ListView*) $tmp619);

}
panda$collections$ListView* panda$core$Int16$$IDX$panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT$R$panda$collections$ListView$LTpanda$core$Int16$GT(panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT param0) {

// line 897
org$pandalanguage$panda$Int16List* $tmp625 = (org$pandalanguage$panda$Int16List*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$Int16List$class);
org$pandalanguage$panda$Int16List$init$panda$core$SteppedRange$LTpanda$core$Int16$Cpanda$core$Int16$GT($tmp625, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp625)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp625));
// unreffing REF($1:org.pandalanguage.panda.Int16List)
return ((panda$collections$ListView*) $tmp625);

}
panda$core$Bit panda$core$Int16$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int16 param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp626 = (panda$core$Int64) {0};
int64_t $tmp627 = param1.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 >= $tmp628;
panda$core$Bit $tmp630 = (panda$core$Bit) {$tmp629};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block1; else goto block2;
block1:;
panda$core$Int16$wrapper* $tmp632;
$tmp632 = (panda$core$Int16$wrapper*) frostObjectAlloc(14, (panda$core$Class*) &panda$core$Int16$wrapperclass);
$tmp632->value = param0;
ITable* $tmp633 = ((panda$collections$CollectionView*) $tmp632)->$class->itable;
while ($tmp633->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp633 = $tmp633->next;
}
$fn635 $tmp634 = $tmp633->methods[0];
panda$core$Int64 $tmp636 = $tmp634(((panda$collections$CollectionView*) $tmp632));
int64_t $tmp637 = param1.value;
int64_t $tmp638 = $tmp636.value;
bool $tmp639 = $tmp637 < $tmp638;
panda$core$Bit $tmp640 = (panda$core$Bit) {$tmp639};
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$CollectionView*) $tmp632)));
// unreffing REF($7:panda.collections.CollectionView)
*(&local0) = $tmp640;
goto block3;
block2:;
*(&local0) = $tmp630;
goto block3;
block3:;
panda$core$Bit $tmp641 = *(&local0);
bool $tmp642 = $tmp641.value;
if ($tmp642) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp643 = (panda$core$Int64) {902};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s644, $tmp643, &$s645);
abort(); // unreachable
block4:;
// line 903
panda$core$Int64 $tmp646 = (panda$core$Int64) {1};
panda$core$Int64 $tmp647 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp646, param1);
panda$core$Int64 $tmp648 = panda$core$Int16$$BAND$panda$core$Int64$R$panda$core$Int64(param0, $tmp647);
panda$core$Int64 $tmp649 = (panda$core$Int64) {0};
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649.value;
bool $tmp652 = $tmp650 != $tmp651;
panda$core$Bit $tmp653 = (panda$core$Bit) {$tmp652};
return $tmp653;

}
panda$core$Int64 panda$core$Int16$get_count$R$panda$core$Int64(panda$core$Int16 param0) {

// line 909
panda$core$Int64 $tmp654 = (panda$core$Int64) {16};
return $tmp654;

}
panda$collections$Iterator* panda$core$Int16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$Int16 param0) {

// line 914
org$pandalanguage$panda$IntBitIterator* $tmp655 = (org$pandalanguage$panda$IntBitIterator*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
panda$core$UInt64 $tmp656 = panda$core$Int16$convert$R$panda$core$UInt64(param0);
panda$core$UInt64 $tmp657 = (panda$core$UInt64) {32768};
org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp655, $tmp656, $tmp657);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp655)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
// unreffing REF($1:org.pandalanguage.panda.IntBitIterator)
return ((panda$collections$Iterator*) $tmp655);

}
panda$core$Int64 panda$core$Int16$get_hash$R$panda$core$Int64(panda$core$Int16 param0) {

// line 919
int16_t $tmp658 = param0.value;
panda$core$Int64 $tmp659 = (panda$core$Int64) {((int64_t) $tmp658)};
return $tmp659;

}
panda$core$Int16$nullable panda$core$Int16$parse$panda$core$String$panda$core$Int64$R$panda$core$Int16$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$UInt64$nullable local1;
panda$core$UInt64$nullable local2;
panda$core$Int64 $tmp660 = (panda$core$Int64) {2};
int64_t $tmp661 = param1.value;
int64_t $tmp662 = $tmp660.value;
bool $tmp663 = $tmp661 >= $tmp662;
panda$core$Bit $tmp664 = (panda$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp666 = (panda$core$Int64) {36};
int64_t $tmp667 = param1.value;
int64_t $tmp668 = $tmp666.value;
bool $tmp669 = $tmp667 <= $tmp668;
panda$core$Bit $tmp670 = (panda$core$Bit) {$tmp669};
*(&local0) = $tmp670;
goto block3;
block2:;
*(&local0) = $tmp664;
goto block3;
block3:;
panda$core$Bit $tmp671 = *(&local0);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp673 = (panda$core$Int64) {925};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s674, $tmp673, &$s675);
abort(); // unreachable
block4:;
// line 926
panda$core$Bit $tmp676 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(param0, &$s677);
bool $tmp678 = $tmp676.value;
if ($tmp678) goto block6; else goto block8;
block6:;
// line 927
panda$core$Int64 $tmp679 = (panda$core$Int64) {1};
panda$core$Bit $tmp680 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp681 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp679, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp680);
panda$core$String* $tmp682 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(param0, $tmp681);
panda$core$UInt64$nullable $tmp683 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp682, param1);
*(&local1) = $tmp683;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
// unreffing REF($31:panda.core.String)
// line 928
panda$core$UInt64$nullable $tmp684 = *(&local1);
panda$core$Bit $tmp685 = panda$core$Bit$init$builtin_bit(!$tmp684.nonnull);
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block9; else goto block10;
block9:;
// line 929
return ((panda$core$Int16$nullable) { .nonnull = false });
block10:;
// line 931
panda$core$UInt64$nullable $tmp687 = *(&local1);
panda$core$Bit $tmp688 = panda$core$Bit$init$builtin_bit($tmp687.nonnull);
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp690 = (panda$core$Int64) {931};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s691, $tmp690, &$s692);
abort(); // unreachable
block11:;
panda$core$Int16 $tmp693 = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64) $tmp687.value));
panda$core$Int16 $tmp694 = panda$core$Int16$$SUB$R$panda$core$Int16($tmp693);
return ((panda$core$Int16$nullable) { $tmp694, true });
block8:;
// line 1
// line 934
panda$core$UInt64$nullable $tmp695 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(param0, param1);
*(&local2) = $tmp695;
// line 935
panda$core$UInt64$nullable $tmp696 = *(&local2);
panda$core$Bit $tmp697 = panda$core$Bit$init$builtin_bit(!$tmp696.nonnull);
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block13; else goto block14;
block13:;
// line 936
return ((panda$core$Int16$nullable) { .nonnull = false });
block14:;
// line 938
panda$core$UInt64$nullable $tmp699 = *(&local2);
panda$core$Bit $tmp700 = panda$core$Bit$init$builtin_bit($tmp699.nonnull);
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp702 = (panda$core$Int64) {938};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s703, $tmp702, &$s704);
abort(); // unreachable
block15:;
panda$core$Int16 $tmp705 = panda$core$UInt64$convert$R$panda$core$Int16(((panda$core$UInt64) $tmp699.value));
return ((panda$core$Int16$nullable) { $tmp705, true });
block7:;
panda$core$Bit $tmp706 = panda$core$Bit$init$builtin_bit(false);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp708 = (panda$core$Int64) {925};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s709, $tmp708, &$s710);
abort(); // unreachable
block17:;
abort(); // unreachable

}
panda$core$Int8 panda$core$Int16$convert$R$panda$core$Int8(panda$core$Int16 param0) {

// line 944
int16_t $tmp711 = param0.value;
panda$core$Int8 $tmp712 = (panda$core$Int8) {((int8_t) $tmp711)};
return $tmp712;

}
panda$core$Int32 panda$core$Int16$convert$R$panda$core$Int32(panda$core$Int16 param0) {

// line 949
int16_t $tmp713 = param0.value;
panda$core$Int32 $tmp714 = (panda$core$Int32) {((int32_t) $tmp713)};
return $tmp714;

}
panda$core$Int64 panda$core$Int16$convert$R$panda$core$Int64(panda$core$Int16 param0) {

// line 954
int16_t $tmp715 = param0.value;
panda$core$Int64 $tmp716 = (panda$core$Int64) {((int64_t) $tmp715)};
return $tmp716;

}
panda$core$UInt8 panda$core$Int16$convert$R$panda$core$UInt8(panda$core$Int16 param0) {

// line 959
int16_t $tmp717 = param0.value;
panda$core$UInt8 $tmp718 = (panda$core$UInt8) {((uint8_t) $tmp717)};
return $tmp718;

}
panda$core$UInt16 panda$core$Int16$convert$R$panda$core$UInt16(panda$core$Int16 param0) {

// line 964
int16_t $tmp719 = param0.value;
panda$core$UInt16 $tmp720 = (panda$core$UInt16) {((uint16_t) $tmp719)};
return $tmp720;

}
panda$core$UInt32 panda$core$Int16$convert$R$panda$core$UInt32(panda$core$Int16 param0) {

// line 969
int16_t $tmp721 = param0.value;
panda$core$UInt32 $tmp722 = (panda$core$UInt32) {((uint32_t) $tmp721)};
return $tmp722;

}
panda$core$UInt64 panda$core$Int16$convert$R$panda$core$UInt64(panda$core$Int16 param0) {

// line 974
int16_t $tmp723 = param0.value;
panda$core$UInt64 $tmp724 = (panda$core$UInt64) {((uint64_t) $tmp723)};
return $tmp724;

}
panda$core$Real32 panda$core$Int16$convert$R$panda$core$Real32(panda$core$Int16 param0) {

// line 979
int16_t $tmp725 = param0.value;
panda$core$Real32 $tmp726 = (panda$core$Real32) {((float) $tmp725)};
return $tmp726;

}
panda$core$Real64 panda$core$Int16$convert$R$panda$core$Real64(panda$core$Int16 param0) {

// line 984
int16_t $tmp727 = param0.value;
panda$core$Real64 $tmp728 = (panda$core$Real64) {((double) $tmp727)};
return $tmp728;

}
panda$core$String* panda$core$Int16$convert$R$panda$core$String(panda$core$Int16 param0) {

panda$core$Int64 local0;
panda$core$Char8* local1;
panda$core$Int64 local2;
panda$core$Int16 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 990
panda$core$Int64 $tmp729 = (panda$core$Int64) {6};
*(&local0) = $tmp729;
// line 991
panda$core$Int64 $tmp730 = *(&local0);
int64_t $tmp731 = $tmp730.value;
panda$core$Char8* $tmp732 = ((panda$core$Char8*) frostAlloc($tmp731 * 1));
*(&local1) = $tmp732;
// line 992
panda$core$Int64 $tmp733 = *(&local0);
panda$core$Int64 $tmp734 = (panda$core$Int64) {1};
int64_t $tmp735 = $tmp733.value;
int64_t $tmp736 = $tmp734.value;
int64_t $tmp737 = $tmp735 - $tmp736;
panda$core$Int64 $tmp738 = (panda$core$Int64) {$tmp737};
*(&local2) = $tmp738;
// line 993
*(&local3) = param0;
// line 994
panda$core$Int16 $tmp739 = *(&local3);
panda$core$Int16 $tmp740 = (panda$core$Int16) {0};
int16_t $tmp741 = $tmp739.value;
int16_t $tmp742 = $tmp740.value;
bool $tmp743 = $tmp741 >= $tmp742;
panda$core$Bit $tmp744 = (panda$core$Bit) {$tmp743};
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block1; else goto block3;
block1:;
// line 995
goto block4;
block4:;
// line 996
panda$core$Char8* $tmp746 = *(&local1);
panda$core$Int64 $tmp747 = *(&local2);
panda$core$Int16 $tmp748 = *(&local3);
panda$core$Int16 $tmp749 = (panda$core$Int16) {10};
panda$core$Int32 $tmp750 = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32($tmp748, $tmp749);
panda$core$Int32 $tmp751 = (panda$core$Int32) {48};
int32_t $tmp752 = $tmp750.value;
int32_t $tmp753 = $tmp751.value;
int32_t $tmp754 = $tmp752 + $tmp753;
panda$core$Int32 $tmp755 = (panda$core$Int32) {$tmp754};
panda$core$UInt8 $tmp756 = panda$core$Int32$convert$R$panda$core$UInt8($tmp755);
panda$core$Char8 $tmp757 = panda$core$Char8$init$panda$core$UInt8($tmp756);
int64_t $tmp758 = $tmp747.value;
$tmp746[$tmp758] = $tmp757;
// line 997
panda$core$Int16 $tmp759 = *(&local3);
panda$core$Int32 $tmp760 = panda$core$Int32$init$panda$core$Int16($tmp759);
panda$core$Int32 $tmp761 = (panda$core$Int32) {10};
int32_t $tmp762 = $tmp760.value;
int32_t $tmp763 = $tmp761.value;
int32_t $tmp764 = $tmp762 / $tmp763;
panda$core$Int32 $tmp765 = (panda$core$Int32) {$tmp764};
panda$core$Int16 $tmp766 = panda$core$Int32$convert$R$panda$core$Int16($tmp765);
*(&local3) = $tmp766;
// line 998
panda$core$Int64 $tmp767 = *(&local2);
panda$core$Int64 $tmp768 = (panda$core$Int64) {1};
int64_t $tmp769 = $tmp767.value;
int64_t $tmp770 = $tmp768.value;
int64_t $tmp771 = $tmp769 - $tmp770;
panda$core$Int64 $tmp772 = (panda$core$Int64) {$tmp771};
*(&local2) = $tmp772;
goto block5;
block5:;
panda$core$Int16 $tmp773 = *(&local3);
panda$core$Int16 $tmp774 = (panda$core$Int16) {0};
int16_t $tmp775 = $tmp773.value;
int16_t $tmp776 = $tmp774.value;
bool $tmp777 = $tmp775 > $tmp776;
panda$core$Bit $tmp778 = (panda$core$Bit) {$tmp777};
bool $tmp779 = $tmp778.value;
if ($tmp779) goto block4; else goto block6;
block6:;
// line 1001
panda$core$Int64 $tmp780 = *(&local2);
panda$core$Int64 $tmp781 = (panda$core$Int64) {1};
int64_t $tmp782 = $tmp780.value;
int64_t $tmp783 = $tmp781.value;
int64_t $tmp784 = $tmp782 + $tmp783;
panda$core$Int64 $tmp785 = (panda$core$Int64) {$tmp784};
*(&local2) = $tmp785;
goto block2;
block3:;
// line 1
// line 1004
goto block7;
block7:;
// line 1005
panda$core$Char8* $tmp786 = *(&local1);
panda$core$Int64 $tmp787 = *(&local2);
panda$core$Int32 $tmp788 = (panda$core$Int32) {48};
panda$core$Int16 $tmp789 = *(&local3);
panda$core$Int16 $tmp790 = (panda$core$Int16) {10};
panda$core$Int32 $tmp791 = panda$core$Int16$$REM$panda$core$Int16$R$panda$core$Int32($tmp789, $tmp790);
int32_t $tmp792 = $tmp788.value;
int32_t $tmp793 = $tmp791.value;
int32_t $tmp794 = $tmp792 - $tmp793;
panda$core$Int32 $tmp795 = (panda$core$Int32) {$tmp794};
panda$core$UInt8 $tmp796 = panda$core$Int32$convert$R$panda$core$UInt8($tmp795);
panda$core$Char8 $tmp797 = panda$core$Char8$init$panda$core$UInt8($tmp796);
int64_t $tmp798 = $tmp787.value;
$tmp786[$tmp798] = $tmp797;
// line 1006
panda$core$Int16 $tmp799 = *(&local3);
panda$core$Int32 $tmp800 = panda$core$Int32$init$panda$core$Int16($tmp799);
panda$core$Int32 $tmp801 = (panda$core$Int32) {10};
int32_t $tmp802 = $tmp800.value;
int32_t $tmp803 = $tmp801.value;
int32_t $tmp804 = $tmp802 / $tmp803;
panda$core$Int32 $tmp805 = (panda$core$Int32) {$tmp804};
panda$core$Int16 $tmp806 = panda$core$Int32$convert$R$panda$core$Int16($tmp805);
*(&local3) = $tmp806;
// line 1007
panda$core$Int64 $tmp807 = *(&local2);
panda$core$Int64 $tmp808 = (panda$core$Int64) {1};
int64_t $tmp809 = $tmp807.value;
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = $tmp809 - $tmp810;
panda$core$Int64 $tmp812 = (panda$core$Int64) {$tmp811};
*(&local2) = $tmp812;
goto block8;
block8:;
panda$core$Int16 $tmp813 = *(&local3);
panda$core$Int16 $tmp814 = (panda$core$Int16) {0};
int16_t $tmp815 = $tmp813.value;
int16_t $tmp816 = $tmp814.value;
bool $tmp817 = $tmp815 < $tmp816;
panda$core$Bit $tmp818 = (panda$core$Bit) {$tmp817};
bool $tmp819 = $tmp818.value;
if ($tmp819) goto block7; else goto block9;
block9:;
// line 1010
panda$core$Char8* $tmp820 = *(&local1);
panda$core$Int64 $tmp821 = *(&local2);
panda$core$UInt8 $tmp822 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp823 = panda$core$Char8$init$panda$core$UInt8($tmp822);
int64_t $tmp824 = $tmp821.value;
$tmp820[$tmp824] = $tmp823;
goto block2;
block2:;
// line 1012
panda$core$Int64 $tmp825 = *(&local0);
panda$core$Int64 $tmp826 = *(&local2);
int64_t $tmp827 = $tmp825.value;
int64_t $tmp828 = $tmp826.value;
int64_t $tmp829 = $tmp827 - $tmp828;
panda$core$Int64 $tmp830 = (panda$core$Int64) {$tmp829};
*(&local4) = $tmp830;
// line 1013
panda$core$Int64 $tmp831 = (panda$core$Int64) {0};
panda$core$Int64 $tmp832 = *(&local4);
panda$core$Bit $tmp833 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp834 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp831, $tmp832, $tmp833);
panda$core$Int64 $tmp835 = $tmp834.min;
*(&local5) = $tmp835;
panda$core$Int64 $tmp836 = $tmp834.max;
panda$core$Bit $tmp837 = $tmp834.inclusive;
bool $tmp838 = $tmp837.value;
panda$core$Int64 $tmp839 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp840 = panda$core$Int64$convert$R$panda$core$UInt64($tmp839);
if ($tmp838) goto block13; else goto block14;
block13:;
int64_t $tmp841 = $tmp835.value;
int64_t $tmp842 = $tmp836.value;
bool $tmp843 = $tmp841 <= $tmp842;
panda$core$Bit $tmp844 = (panda$core$Bit) {$tmp843};
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block10; else goto block11;
block14:;
int64_t $tmp846 = $tmp835.value;
int64_t $tmp847 = $tmp836.value;
bool $tmp848 = $tmp846 < $tmp847;
panda$core$Bit $tmp849 = (panda$core$Bit) {$tmp848};
bool $tmp850 = $tmp849.value;
if ($tmp850) goto block10; else goto block11;
block10:;
// line 1014
panda$core$Char8* $tmp851 = *(&local1);
panda$core$Int64 $tmp852 = *(&local5);
panda$core$Char8* $tmp853 = *(&local1);
panda$core$Int64 $tmp854 = *(&local5);
panda$core$Int64 $tmp855 = *(&local2);
int64_t $tmp856 = $tmp854.value;
int64_t $tmp857 = $tmp855.value;
int64_t $tmp858 = $tmp856 + $tmp857;
panda$core$Int64 $tmp859 = (panda$core$Int64) {$tmp858};
int64_t $tmp860 = $tmp859.value;
panda$core$Char8 $tmp861 = $tmp853[$tmp860];
int64_t $tmp862 = $tmp852.value;
$tmp851[$tmp862] = $tmp861;
goto block12;
block12:;
panda$core$Int64 $tmp863 = *(&local5);
int64_t $tmp864 = $tmp836.value;
int64_t $tmp865 = $tmp863.value;
int64_t $tmp866 = $tmp864 - $tmp865;
panda$core$Int64 $tmp867 = (panda$core$Int64) {$tmp866};
panda$core$UInt64 $tmp868 = panda$core$Int64$convert$R$panda$core$UInt64($tmp867);
if ($tmp838) goto block16; else goto block17;
block16:;
uint64_t $tmp869 = $tmp868.value;
uint64_t $tmp870 = $tmp840.value;
bool $tmp871 = $tmp869 >= $tmp870;
panda$core$Bit $tmp872 = (panda$core$Bit) {$tmp871};
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block15; else goto block11;
block17:;
uint64_t $tmp874 = $tmp868.value;
uint64_t $tmp875 = $tmp840.value;
bool $tmp876 = $tmp874 > $tmp875;
panda$core$Bit $tmp877 = (panda$core$Bit) {$tmp876};
bool $tmp878 = $tmp877.value;
if ($tmp878) goto block15; else goto block11;
block15:;
int64_t $tmp879 = $tmp863.value;
int64_t $tmp880 = $tmp839.value;
int64_t $tmp881 = $tmp879 + $tmp880;
panda$core$Int64 $tmp882 = (panda$core$Int64) {$tmp881};
*(&local5) = $tmp882;
goto block10;
block11:;
// line 1016
panda$core$String* $tmp883 = (panda$core$String*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp884 = *(&local1);
panda$core$Int64 $tmp885 = *(&local4);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp883, $tmp884, $tmp885);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
// unreffing REF($207:panda.core.String)
return $tmp883;

}
panda$core$String* panda$core$Int16$format$panda$core$String$R$panda$core$String(panda$core$Int16 param0, panda$core$String* param1) {

// line 1022
int16_t $tmp886 = param0.value;
bool $tmp887 = $tmp886 < 0;
panda$core$Bit $tmp888 = panda$core$Bit$init$builtin_bit($tmp887);
panda$core$Int16 $tmp889 = panda$core$Int16$get_abs$R$panda$core$Int16(param0);
panda$core$UInt64 $tmp890 = panda$core$Int16$convert$R$panda$core$UInt64($tmp889);
panda$core$UInt64 $tmp891 = (panda$core$UInt64) {65535};
panda$core$String* $tmp892 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp888, $tmp890, $tmp891, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp892));
// unreffing REF($7:panda.core.String)
return $tmp892;

}
void panda$core$Int16$cleanup(panda$core$Int16 param0) {

return;

}

