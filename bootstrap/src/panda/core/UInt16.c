#include "panda/core/UInt16.h"
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
#include "panda/core/Comparable.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Int32.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real32.h"
#include "panda/core/Int8.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt8.h"
#include "panda/core/Range.LTpanda/core/UInt16.GT.h"
#include "org/pandalanguage/panda/UInt16List.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt16.Cpanda/core/UInt16.GT.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

__attribute__((weak)) panda$core$Int64 panda$core$UInt16$get_count$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt16$get_count$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$UInt16$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$UInt16$format$panda$core$String$R$panda$core$String(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$core$UInt16$$IDX$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$UInt16$$IDX$panda$core$Int64$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt16$$GT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, ((panda$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt16$$LT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, ((panda$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt16$$GE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, ((panda$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt16$$LE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, ((panda$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt16$get_hash$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt16$$EQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, ((panda$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt16$$NEQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, ((panda$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$UInt16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$UInt16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$UInt16$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$UInt16$convert$R$panda$core$String(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$ADD$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$ADD$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$ADD$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt16$$ADD$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$ADD$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$ADD$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$ADD$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$ADD$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$ADD$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$ADD$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$ADD$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$SUB$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$SUB$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$SUB$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt16$$SUB$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$SUB$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$SUB$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$SUB$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$SUB$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$SUB$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$SUB$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$SUB$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$UInt16$$SUB$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$MUL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$MUL$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$MUL$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt16$$MUL$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$MUL$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$MUL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$MUL$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$MUL$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$MUL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$MUL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$MUL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$INTDIV$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$INTDIV$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt16$$INTDIV$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$INTDIV$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$INTDIV$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$INTDIV$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$INTDIV$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$REM$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$REM$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$REM$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt16$$REM$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$REM$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$REM$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$REM$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$REM$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt16$$DIV$panda$core$Int8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real32 result = panda$core$UInt16$$DIV$panda$core$Int8$R$panda$core$Real32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt16$$DIV$panda$core$Int16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real32 result = panda$core$UInt16$$DIV$panda$core$Int16$R$panda$core$Real32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt16$$DIV$panda$core$Int32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real32 result = panda$core$UInt16$$DIV$panda$core$Int32$R$panda$core$Real32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt16$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$UInt16$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt16$$DIV$panda$core$UInt8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real32 result = panda$core$UInt16$$DIV$panda$core$UInt8$R$panda$core$Real32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt16$$DIV$panda$core$UInt16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real32 result = panda$core$UInt16$$DIV$panda$core$UInt16$R$panda$core$Real32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt16$$DIV$panda$core$UInt32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real32 result = panda$core$UInt16$$DIV$panda$core$UInt32$R$panda$core$Real32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt16$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$UInt16$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt16$$DIV$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$UInt16$$DIV$panda$core$Real32$R$panda$core$Real32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt16$$DIV$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$UInt16$$DIV$panda$core$Real64$R$panda$core$Real64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$BNOT$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$UInt16$$BNOT$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$BAND$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$BAND$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$BAND$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt16$$BAND$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt16$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$BAND$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$BAND$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$BAND$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$BOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$BOR$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$BOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt16$$BOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt16$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$BOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$BOR$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$BOR$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$BOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$BXOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$BXOR$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$BXOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt16$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt16$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$BXOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$BXOR$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$BXOR$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$SHL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$SHL$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt16$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt16$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$SHR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$$SHR$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$$SHR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt16$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt16$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$$SHR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$$SHR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$EQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt16$$EQ$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$EQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt16$$EQ$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$EQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt16$$EQ$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt16$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt16$$EQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt16$$EQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$NEQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt16$$NEQ$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt16$$NEQ$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$NEQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt16$$NEQ$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt16$$NEQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt16$$NEQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt16$$NEQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt16$$LT$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt16$$LT$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt16$$LT$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt16$$LT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt16$$LT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt16$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt16$$GT$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt16$$GT$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt16$$GT$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt16$$GT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt16$$GT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt16$$GT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt16$$GE$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt16$$GE$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt16$$GE$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt16$$GE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt16$$GE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt16$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt16$$LE$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt16$$LE$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt16$$LE$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$UInt16$$LE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt16$$LE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt16$$LE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$min$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt16$min$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$min$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$min$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$min$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt16$min$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$min$panda$core$UInt8$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt16 result = panda$core$UInt16$min$panda$core$UInt8$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$min$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$min$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$min$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$min$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$min$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$min$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$max$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt16$max$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$max$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt16$max$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$max$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt16$max$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$max$panda$core$UInt8$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt16 result = panda$core$UInt16$max$panda$core$UInt8$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt16$max$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt16$max$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$max$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt16$max$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$max$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt16$max$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$UInt16$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$UInt16$convert$R$panda$core$Int8(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt16$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$UInt16$convert$R$panda$core$Int16(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt16$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$UInt16$convert$R$panda$core$Int32(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt16$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt16$convert$R$panda$core$Int64(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt16$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$UInt16$convert$R$panda$core$UInt8(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt16$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$UInt16$convert$R$panda$core$UInt32(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt16$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$UInt16$convert$R$panda$core$UInt64(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt16$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$UInt16$convert$R$panda$core$Real32(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt16$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$UInt16$convert$R$panda$core$Real64(((panda$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$UInt16$cleanup$shim(panda$core$Object* p0) {
    panda$core$UInt16$cleanup(((panda$core$UInt16$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$UInt16$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt16$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt16$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt16$_panda$collections$CollectionView, { panda$core$UInt16$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$UInt16$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt16$_panda$core$Formattable, { panda$core$UInt16$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt16$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt16$_panda$collections$ListView, { panda$core$UInt16$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$LE$panda$core$UInt16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt16$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt16$_panda$core$Comparable, { panda$core$UInt16$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt16$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt16$_panda$collections$Key, { panda$core$UInt16$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt16$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt16$_panda$core$Equatable, { panda$core$UInt16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s1;
panda$core$UInt16$class_type panda$core$UInt16$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt16$_panda$collections$Iterable, { panda$core$UInt16$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$UInt16$$ADD$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$ADD$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt16$$ADD$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$ADD$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$ADD$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$SUB$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$SUB$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt16$$SUB$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$SUB$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$SUB$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$SUB$R$panda$core$UInt16$shim, panda$core$UInt16$$MUL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$MUL$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt16$$MUL$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$MUL$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$MUL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$INTDIV$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt16$$INTDIV$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$INTDIV$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$INTDIV$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$REM$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$REM$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$REM$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$REM$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$DIV$panda$core$Int8$R$panda$core$Real32$shim, panda$core$UInt16$$DIV$panda$core$Int16$R$panda$core$Real32$shim, panda$core$UInt16$$DIV$panda$core$Int32$R$panda$core$Real32$shim, panda$core$UInt16$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$UInt16$$DIV$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$UInt16$$DIV$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$UInt16$$DIV$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$UInt16$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$UInt16$$DIV$panda$core$Real32$R$panda$core$Real32$shim, panda$core$UInt16$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$UInt16$$BNOT$R$panda$core$UInt16$shim, panda$core$UInt16$$BAND$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$BAND$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt16$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt16$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$BAND$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$BOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$BOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt16$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt16$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$BOR$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$BXOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$BXOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt16$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt16$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$BXOR$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$SHL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$SHL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt16$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$SHR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$$SHR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt16$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt16$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt16$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt16$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt16$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt16$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt16$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt16$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt16$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt16$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt16$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt16$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt16$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt16$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt16$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt16$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt16$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt16$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt16$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt16$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt16$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt16$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt16$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt16$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt16$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt16$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt16$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt16$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt16$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt16$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt16$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt16$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt16$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt16$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt16$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt16$$LE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt16$min$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt16$min$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$min$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt16$min$panda$core$UInt8$R$panda$core$UInt16$shim, panda$core$UInt16$min$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$min$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$min$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$max$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt16$max$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt16$max$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt16$max$panda$core$UInt8$R$panda$core$UInt16$shim, panda$core$UInt16$max$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt16$max$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt16$max$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt16$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$UInt16$get_count$R$panda$core$Int64$shim, panda$core$UInt16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$UInt16$get_hash$R$panda$core$Int64$shim, panda$core$UInt16$convert$R$panda$core$Int8$shim, panda$core$UInt16$convert$R$panda$core$Int16$shim, panda$core$UInt16$convert$R$panda$core$Int32$shim, panda$core$UInt16$convert$R$panda$core$Int64$shim, panda$core$UInt16$convert$R$panda$core$UInt8$shim, panda$core$UInt16$convert$R$panda$core$UInt32$shim, panda$core$UInt16$convert$R$panda$core$UInt64$shim, panda$core$UInt16$convert$R$panda$core$Real32$shim, panda$core$UInt16$convert$R$panda$core$Real64$shim, panda$core$UInt16$format$panda$core$String$R$panda$core$String$shim, panda$core$UInt16$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[7]; } panda$core$UInt16$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt16$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt16$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt16$wrapper_panda$collections$CollectionView, { panda$core$UInt16$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[7]; } panda$core$UInt16$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt16$wrapper_panda$core$Formattable, { panda$core$UInt16$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt16$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt16$wrapper_panda$collections$ListView, { panda$core$UInt16$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$LE$panda$core$UInt16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt16$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt16$wrapper_panda$core$Comparable, { panda$core$UInt16$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt16$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt16$wrapper_panda$collections$Key, { panda$core$UInt16$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt16$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt16$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt16$wrapper_panda$core$Equatable, { panda$core$UInt16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s3;
panda$core$UInt16$wrapperclass_type panda$core$UInt16$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt16$wrapper_panda$collections$Iterable, { panda$core$UInt16$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn625)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -1766462914121118519, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 8497665508273682800, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, -8303448275705769783, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 8497665508273682800, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x3f", 123, 3732676278366354402, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 8497665508273682800, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x27", 73, -4164323057498451277, NULL };

panda$core$UInt16 panda$core$UInt16$init$builtin_uint16(uint16_t param0) {

panda$core$UInt16 local0;
// line 30
uint16_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
panda$core$UInt16 $tmp5 = *(&local0);
return $tmp5;

}
panda$core$UInt16 panda$core$UInt16$init$panda$core$UInt8(panda$core$UInt8 param0) {

panda$core$UInt16 local0;
// line 36
uint8_t $tmp6 = param0.value;
uint16_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint16_t) $tmp6);
panda$core$UInt16 $tmp8 = *(&local0);
return $tmp8;

}
panda$core$Int32 panda$core$UInt16$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 42
uint16_t $tmp9 = param0.value;
int16_t $tmp10 = param1.value;
int32_t $tmp11 = ((int32_t) $tmp9) + ((int32_t) $tmp10);
panda$core$Int32 $tmp12 = panda$core$Int32$init$builtin_int32($tmp11);
return $tmp12;

}
panda$core$Int64 panda$core$UInt16$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 48
uint16_t $tmp13 = param0.value;
int32_t $tmp14 = param1.value;
int64_t $tmp15 = ((int64_t) $tmp13) + ((int64_t) $tmp14);
panda$core$Int64 $tmp16 = panda$core$Int64$init$builtin_int64($tmp15);
return $tmp16;

}
panda$core$UInt32 panda$core$UInt16$$ADD$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 54
uint16_t $tmp17 = param0.value;
uint16_t $tmp18 = param1.value;
uint32_t $tmp19 = ((uint32_t) $tmp17) + ((uint32_t) $tmp18);
panda$core$UInt32 $tmp20 = panda$core$UInt32$init$builtin_uint32($tmp19);
return $tmp20;

}
panda$core$UInt16 panda$core$UInt16$$ADD$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 59
uint16_t $tmp21 = param0.value;
uint16_t $tmp22 = param1.value;
uint16_t $tmp23 = $tmp21 + $tmp22;
panda$core$UInt16 $tmp24 = panda$core$UInt16$init$builtin_uint16($tmp23);
return $tmp24;

}
panda$core$UInt32 panda$core$UInt16$$ADD$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 65
uint16_t $tmp25 = param0.value;
uint32_t $tmp26 = param1.value;
uint32_t $tmp27 = ((uint32_t) $tmp25) + $tmp26;
panda$core$UInt32 $tmp28 = panda$core$UInt32$init$builtin_uint32($tmp27);
return $tmp28;

}
panda$core$UInt64 panda$core$UInt16$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 71
uint16_t $tmp29 = param0.value;
uint64_t $tmp30 = param1.value;
uint64_t $tmp31 = ((uint64_t) $tmp29) + $tmp30;
panda$core$UInt64 $tmp32 = panda$core$UInt64$init$builtin_uint64($tmp31);
return $tmp32;

}
panda$core$Int32 panda$core$UInt16$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 77
uint16_t $tmp33 = param0.value;
int16_t $tmp34 = param1.value;
int32_t $tmp35 = ((int32_t) $tmp33) - ((int32_t) $tmp34);
panda$core$Int32 $tmp36 = panda$core$Int32$init$builtin_int32($tmp35);
return $tmp36;

}
panda$core$Int64 panda$core$UInt16$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 83
uint16_t $tmp37 = param0.value;
int32_t $tmp38 = param1.value;
int64_t $tmp39 = ((int64_t) $tmp37) - ((int64_t) $tmp38);
panda$core$Int64 $tmp40 = panda$core$Int64$init$builtin_int64($tmp39);
return $tmp40;

}
panda$core$UInt32 panda$core$UInt16$$SUB$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 89
uint16_t $tmp41 = param0.value;
uint16_t $tmp42 = param1.value;
uint32_t $tmp43 = ((uint32_t) $tmp41) - ((uint32_t) $tmp42);
panda$core$UInt32 $tmp44 = panda$core$UInt32$init$builtin_uint32($tmp43);
return $tmp44;

}
panda$core$UInt16 panda$core$UInt16$$SUB$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 94
uint16_t $tmp45 = param0.value;
uint16_t $tmp46 = param1.value;
uint16_t $tmp47 = $tmp45 - $tmp46;
panda$core$UInt16 $tmp48 = panda$core$UInt16$init$builtin_uint16($tmp47);
return $tmp48;

}
panda$core$UInt32 panda$core$UInt16$$SUB$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 100
uint16_t $tmp49 = param0.value;
uint32_t $tmp50 = param1.value;
uint32_t $tmp51 = ((uint32_t) $tmp49) - $tmp50;
panda$core$UInt32 $tmp52 = panda$core$UInt32$init$builtin_uint32($tmp51);
return $tmp52;

}
panda$core$UInt64 panda$core$UInt16$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 106
uint16_t $tmp53 = param0.value;
uint64_t $tmp54 = param1.value;
uint64_t $tmp55 = ((uint64_t) $tmp53) - $tmp54;
panda$core$UInt64 $tmp56 = panda$core$UInt64$init$builtin_uint64($tmp55);
return $tmp56;

}
panda$core$UInt16 panda$core$UInt16$$SUB$R$panda$core$UInt16(panda$core$UInt16 param0) {

// line 111
uint16_t $tmp57 = param0.value;
uint16_t $tmp58 = -$tmp57;
panda$core$UInt16 $tmp59 = (panda$core$UInt16) {$tmp58};
return $tmp59;

}
panda$core$Int32 panda$core$UInt16$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 117
uint16_t $tmp60 = param0.value;
int16_t $tmp61 = param1.value;
int32_t $tmp62 = ((int32_t) $tmp60) * ((int32_t) $tmp61);
panda$core$Int32 $tmp63 = panda$core$Int32$init$builtin_int32($tmp62);
return $tmp63;

}
panda$core$Int64 panda$core$UInt16$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 123
uint16_t $tmp64 = param0.value;
int32_t $tmp65 = param1.value;
int64_t $tmp66 = ((int64_t) $tmp64) * ((int64_t) $tmp65);
panda$core$Int64 $tmp67 = panda$core$Int64$init$builtin_int64($tmp66);
return $tmp67;

}
panda$core$UInt32 panda$core$UInt16$$MUL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 129
uint16_t $tmp68 = param0.value;
uint16_t $tmp69 = param1.value;
uint32_t $tmp70 = ((uint32_t) $tmp68) * ((uint32_t) $tmp69);
panda$core$UInt32 $tmp71 = panda$core$UInt32$init$builtin_uint32($tmp70);
return $tmp71;

}
panda$core$UInt16 panda$core$UInt16$$MUL$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 134
uint16_t $tmp72 = param0.value;
uint16_t $tmp73 = param1.value;
uint16_t $tmp74 = $tmp72 * $tmp73;
panda$core$UInt16 $tmp75 = panda$core$UInt16$init$builtin_uint16($tmp74);
return $tmp75;

}
panda$core$UInt32 panda$core$UInt16$$MUL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 140
uint16_t $tmp76 = param0.value;
uint32_t $tmp77 = param1.value;
uint32_t $tmp78 = ((uint32_t) $tmp76) * $tmp77;
panda$core$UInt32 $tmp79 = panda$core$UInt32$init$builtin_uint32($tmp78);
return $tmp79;

}
panda$core$UInt64 panda$core$UInt16$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 146
uint16_t $tmp80 = param0.value;
uint64_t $tmp81 = param1.value;
uint64_t $tmp82 = ((uint64_t) $tmp80) * $tmp81;
panda$core$UInt64 $tmp83 = panda$core$UInt64$init$builtin_uint64($tmp82);
return $tmp83;

}
panda$core$Int32 panda$core$UInt16$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 152
uint16_t $tmp84 = param0.value;
int16_t $tmp85 = param1.value;
int32_t $tmp86 = ((int32_t) $tmp84) / ((int32_t) $tmp85);
panda$core$Int32 $tmp87 = panda$core$Int32$init$builtin_int32($tmp86);
return $tmp87;

}
panda$core$Int64 panda$core$UInt16$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 158
uint16_t $tmp88 = param0.value;
int32_t $tmp89 = param1.value;
int64_t $tmp90 = ((int64_t) $tmp88) / ((int64_t) $tmp89);
panda$core$Int64 $tmp91 = panda$core$Int64$init$builtin_int64($tmp90);
return $tmp91;

}
panda$core$UInt32 panda$core$UInt16$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 164
uint16_t $tmp92 = param0.value;
uint16_t $tmp93 = param1.value;
uint32_t $tmp94 = ((uint32_t) $tmp92) / ((uint32_t) $tmp93);
panda$core$UInt32 $tmp95 = panda$core$UInt32$init$builtin_uint32($tmp94);
return $tmp95;

}
panda$core$UInt16 panda$core$UInt16$$INTDIV$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 169
uint16_t $tmp96 = param0.value;
uint16_t $tmp97 = param1.value;
uint16_t $tmp98 = $tmp96 / $tmp97;
panda$core$UInt16 $tmp99 = panda$core$UInt16$init$builtin_uint16($tmp98);
return $tmp99;

}
panda$core$UInt32 panda$core$UInt16$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 175
uint16_t $tmp100 = param0.value;
uint32_t $tmp101 = param1.value;
uint32_t $tmp102 = ((uint32_t) $tmp100) / $tmp101;
panda$core$UInt32 $tmp103 = panda$core$UInt32$init$builtin_uint32($tmp102);
return $tmp103;

}
panda$core$UInt64 panda$core$UInt16$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 181
uint16_t $tmp104 = param0.value;
uint64_t $tmp105 = param1.value;
uint64_t $tmp106 = ((uint64_t) $tmp104) / $tmp105;
panda$core$UInt64 $tmp107 = panda$core$UInt64$init$builtin_uint64($tmp106);
return $tmp107;

}
panda$core$Int32 panda$core$UInt16$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 187
uint16_t $tmp108 = param0.value;
int16_t $tmp109 = param1.value;
int32_t $tmp110 = ((int32_t) $tmp108) % ((int32_t) $tmp109);
panda$core$Int32 $tmp111 = panda$core$Int32$init$builtin_int32($tmp110);
return $tmp111;

}
panda$core$Int64 panda$core$UInt16$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 193
uint16_t $tmp112 = param0.value;
int32_t $tmp113 = param1.value;
int64_t $tmp114 = ((int64_t) $tmp112) % ((int64_t) $tmp113);
panda$core$Int64 $tmp115 = panda$core$Int64$init$builtin_int64($tmp114);
return $tmp115;

}
panda$core$UInt32 panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 199
uint16_t $tmp116 = param0.value;
uint16_t $tmp117 = param1.value;
uint32_t $tmp118 = ((uint32_t) $tmp116) % ((uint32_t) $tmp117);
panda$core$UInt32 $tmp119 = panda$core$UInt32$init$builtin_uint32($tmp118);
return $tmp119;

}
panda$core$UInt16 panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 204
uint16_t $tmp120 = param0.value;
uint16_t $tmp121 = param1.value;
uint16_t $tmp122 = $tmp120 % $tmp121;
panda$core$UInt16 $tmp123 = panda$core$UInt16$init$builtin_uint16($tmp122);
return $tmp123;

}
panda$core$UInt32 panda$core$UInt16$$REM$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 210
uint16_t $tmp124 = param0.value;
uint32_t $tmp125 = param1.value;
uint32_t $tmp126 = ((uint32_t) $tmp124) % $tmp125;
panda$core$UInt32 $tmp127 = panda$core$UInt32$init$builtin_uint32($tmp126);
return $tmp127;

}
panda$core$UInt64 panda$core$UInt16$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 216
uint16_t $tmp128 = param0.value;
uint64_t $tmp129 = param1.value;
uint64_t $tmp130 = ((uint64_t) $tmp128) % $tmp129;
panda$core$UInt64 $tmp131 = panda$core$UInt64$init$builtin_uint64($tmp130);
return $tmp131;

}
panda$core$Real32 panda$core$UInt16$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$UInt16 param0, panda$core$Int8 param1) {

// line 222
uint16_t $tmp132 = param0.value;
int8_t $tmp133 = param1.value;
float $tmp134 = ((float) $tmp132) / ((float) $tmp133);
panda$core$Real32 $tmp135 = panda$core$Real32$init$builtin_float32($tmp134);
return $tmp135;

}
panda$core$Real32 panda$core$UInt16$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 228
uint16_t $tmp136 = param0.value;
int16_t $tmp137 = param1.value;
float $tmp138 = ((float) $tmp136) / ((float) $tmp137);
panda$core$Real32 $tmp139 = panda$core$Real32$init$builtin_float32($tmp138);
return $tmp139;

}
panda$core$Real32 panda$core$UInt16$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 234
uint16_t $tmp140 = param0.value;
int32_t $tmp141 = param1.value;
float $tmp142 = ((float) $tmp140) / ((float) $tmp141);
panda$core$Real32 $tmp143 = panda$core$Real32$init$builtin_float32($tmp142);
return $tmp143;

}
panda$core$Real64 panda$core$UInt16$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$UInt16 param0, panda$core$Int64 param1) {

// line 240
uint16_t $tmp144 = param0.value;
int64_t $tmp145 = param1.value;
double $tmp146 = ((double) $tmp144) / ((double) $tmp145);
panda$core$Real64 $tmp147 = panda$core$Real64$init$builtin_float64($tmp146);
return $tmp147;

}
panda$core$Real32 panda$core$UInt16$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$UInt16 param0, panda$core$UInt8 param1) {

// line 246
uint16_t $tmp148 = param0.value;
uint8_t $tmp149 = param1.value;
float $tmp150 = ((float) $tmp148) / ((float) $tmp149);
panda$core$Real32 $tmp151 = panda$core$Real32$init$builtin_float32($tmp150);
return $tmp151;

}
panda$core$Real32 panda$core$UInt16$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 252
uint16_t $tmp152 = param0.value;
uint16_t $tmp153 = param1.value;
float $tmp154 = ((float) $tmp152) / ((float) $tmp153);
panda$core$Real32 $tmp155 = panda$core$Real32$init$builtin_float32($tmp154);
return $tmp155;

}
panda$core$Real32 panda$core$UInt16$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 258
uint16_t $tmp156 = param0.value;
uint32_t $tmp157 = param1.value;
float $tmp158 = ((float) $tmp156) / ((float) $tmp157);
panda$core$Real32 $tmp159 = panda$core$Real32$init$builtin_float32($tmp158);
return $tmp159;

}
panda$core$Real64 panda$core$UInt16$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 264
uint16_t $tmp160 = param0.value;
uint64_t $tmp161 = param1.value;
double $tmp162 = ((double) $tmp160) / ((double) $tmp161);
panda$core$Real64 $tmp163 = panda$core$Real64$init$builtin_float64($tmp162);
return $tmp163;

}
panda$core$Real32 panda$core$UInt16$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$UInt16 param0, panda$core$Real32 param1) {

// line 270
uint16_t $tmp164 = param0.value;
float $tmp165 = param1.value;
float $tmp166 = ((float) $tmp164) / $tmp165;
panda$core$Real32 $tmp167 = panda$core$Real32$init$builtin_float32($tmp166);
return $tmp167;

}
panda$core$Real64 panda$core$UInt16$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$UInt16 param0, panda$core$Real64 param1) {

// line 276
uint16_t $tmp168 = param0.value;
double $tmp169 = param1.value;
double $tmp170 = ((double) $tmp168) / $tmp169;
panda$core$Real64 $tmp171 = panda$core$Real64$init$builtin_float64($tmp170);
return $tmp171;

}
panda$core$UInt16 panda$core$UInt16$$BNOT$R$panda$core$UInt16(panda$core$UInt16 param0) {

// line 281
uint16_t $tmp172 = param0.value;
uint16_t $tmp173 = !$tmp172;
panda$core$UInt16 $tmp174 = (panda$core$UInt16) {$tmp173};
return $tmp174;

}
panda$core$Int32 panda$core$UInt16$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 287
uint16_t $tmp175 = param0.value;
int16_t $tmp176 = param1.value;
int32_t $tmp177 = ((int32_t) $tmp175) & ((int32_t) $tmp176);
panda$core$Int32 $tmp178 = panda$core$Int32$init$builtin_int32($tmp177);
return $tmp178;

}
panda$core$Int32 panda$core$UInt16$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 293
uint16_t $tmp179 = param0.value;
int32_t $tmp180 = param1.value;
int32_t $tmp181 = ((int32_t) $tmp179) & $tmp180;
panda$core$Int32 $tmp182 = panda$core$Int32$init$builtin_int32($tmp181);
return $tmp182;

}
panda$core$Int64 panda$core$UInt16$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int64 param1) {

// line 299
uint16_t $tmp183 = param0.value;
int64_t $tmp184 = param1.value;
int64_t $tmp185 = ((int64_t) $tmp183) & $tmp184;
panda$core$Int64 $tmp186 = panda$core$Int64$init$builtin_int64($tmp185);
return $tmp186;

}
panda$core$UInt32 panda$core$UInt16$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 305
uint16_t $tmp187 = param0.value;
uint16_t $tmp188 = param1.value;
uint32_t $tmp189 = ((uint32_t) $tmp187) & ((uint32_t) $tmp188);
panda$core$UInt32 $tmp190 = panda$core$UInt32$init$builtin_uint32($tmp189);
return $tmp190;

}
panda$core$UInt16 panda$core$UInt16$$BAND$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 310
uint16_t $tmp191 = param0.value;
uint16_t $tmp192 = param1.value;
uint16_t $tmp193 = $tmp191 & $tmp192;
panda$core$UInt16 $tmp194 = panda$core$UInt16$init$builtin_uint16($tmp193);
return $tmp194;

}
panda$core$UInt32 panda$core$UInt16$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 316
uint16_t $tmp195 = param0.value;
uint32_t $tmp196 = param1.value;
uint32_t $tmp197 = ((uint32_t) $tmp195) & $tmp196;
panda$core$UInt32 $tmp198 = panda$core$UInt32$init$builtin_uint32($tmp197);
return $tmp198;

}
panda$core$UInt64 panda$core$UInt16$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 322
uint16_t $tmp199 = param0.value;
uint64_t $tmp200 = param1.value;
uint64_t $tmp201 = ((uint64_t) $tmp199) & $tmp200;
panda$core$UInt64 $tmp202 = panda$core$UInt64$init$builtin_uint64($tmp201);
return $tmp202;

}
panda$core$Int32 panda$core$UInt16$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 328
uint16_t $tmp203 = param0.value;
int16_t $tmp204 = param1.value;
int32_t $tmp205 = ((int32_t) $tmp203) | ((int32_t) $tmp204);
panda$core$Int32 $tmp206 = panda$core$Int32$init$builtin_int32($tmp205);
return $tmp206;

}
panda$core$Int32 panda$core$UInt16$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 334
uint16_t $tmp207 = param0.value;
int32_t $tmp208 = param1.value;
int32_t $tmp209 = ((int32_t) $tmp207) | $tmp208;
panda$core$Int32 $tmp210 = panda$core$Int32$init$builtin_int32($tmp209);
return $tmp210;

}
panda$core$Int64 panda$core$UInt16$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int64 param1) {

// line 340
uint16_t $tmp211 = param0.value;
int64_t $tmp212 = param1.value;
int64_t $tmp213 = ((int64_t) $tmp211) | $tmp212;
panda$core$Int64 $tmp214 = panda$core$Int64$init$builtin_int64($tmp213);
return $tmp214;

}
panda$core$UInt32 panda$core$UInt16$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 346
uint16_t $tmp215 = param0.value;
uint16_t $tmp216 = param1.value;
uint32_t $tmp217 = ((uint32_t) $tmp215) | ((uint32_t) $tmp216);
panda$core$UInt32 $tmp218 = panda$core$UInt32$init$builtin_uint32($tmp217);
return $tmp218;

}
panda$core$UInt16 panda$core$UInt16$$BOR$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 351
uint16_t $tmp219 = param0.value;
uint16_t $tmp220 = param1.value;
uint16_t $tmp221 = $tmp219 | $tmp220;
panda$core$UInt16 $tmp222 = panda$core$UInt16$init$builtin_uint16($tmp221);
return $tmp222;

}
panda$core$UInt32 panda$core$UInt16$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 357
uint16_t $tmp223 = param0.value;
uint32_t $tmp224 = param1.value;
uint32_t $tmp225 = ((uint32_t) $tmp223) | $tmp224;
panda$core$UInt32 $tmp226 = panda$core$UInt32$init$builtin_uint32($tmp225);
return $tmp226;

}
panda$core$UInt64 panda$core$UInt16$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 363
uint16_t $tmp227 = param0.value;
uint64_t $tmp228 = param1.value;
uint64_t $tmp229 = ((uint64_t) $tmp227) | $tmp228;
panda$core$UInt64 $tmp230 = panda$core$UInt64$init$builtin_uint64($tmp229);
return $tmp230;

}
panda$core$Int32 panda$core$UInt16$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 369
uint16_t $tmp231 = param0.value;
int16_t $tmp232 = param1.value;
int32_t $tmp233 = ((int32_t) $tmp231) ^ ((int32_t) $tmp232);
panda$core$Int32 $tmp234 = panda$core$Int32$init$builtin_int32($tmp233);
return $tmp234;

}
panda$core$Int32 panda$core$UInt16$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 375
uint16_t $tmp235 = param0.value;
int32_t $tmp236 = param1.value;
int32_t $tmp237 = ((int32_t) $tmp235) ^ $tmp236;
panda$core$Int32 $tmp238 = panda$core$Int32$init$builtin_int32($tmp237);
return $tmp238;

}
panda$core$Int64 panda$core$UInt16$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int64 param1) {

// line 381
uint16_t $tmp239 = param0.value;
int64_t $tmp240 = param1.value;
int64_t $tmp241 = ((int64_t) $tmp239) ^ $tmp240;
panda$core$Int64 $tmp242 = panda$core$Int64$init$builtin_int64($tmp241);
return $tmp242;

}
panda$core$UInt32 panda$core$UInt16$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 387
uint16_t $tmp243 = param0.value;
uint16_t $tmp244 = param1.value;
uint32_t $tmp245 = ((uint32_t) $tmp243) ^ ((uint32_t) $tmp244);
panda$core$UInt32 $tmp246 = panda$core$UInt32$init$builtin_uint32($tmp245);
return $tmp246;

}
panda$core$UInt16 panda$core$UInt16$$BXOR$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 392
uint16_t $tmp247 = param0.value;
uint16_t $tmp248 = param1.value;
uint16_t $tmp249 = $tmp247 ^ $tmp248;
panda$core$UInt16 $tmp250 = panda$core$UInt16$init$builtin_uint16($tmp249);
return $tmp250;

}
panda$core$UInt32 panda$core$UInt16$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 398
uint16_t $tmp251 = param0.value;
uint32_t $tmp252 = param1.value;
uint32_t $tmp253 = ((uint32_t) $tmp251) ^ $tmp252;
panda$core$UInt32 $tmp254 = panda$core$UInt32$init$builtin_uint32($tmp253);
return $tmp254;

}
panda$core$UInt64 panda$core$UInt16$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 404
uint16_t $tmp255 = param0.value;
uint64_t $tmp256 = param1.value;
uint64_t $tmp257 = ((uint64_t) $tmp255) ^ $tmp256;
panda$core$UInt64 $tmp258 = panda$core$UInt64$init$builtin_uint64($tmp257);
return $tmp258;

}
panda$core$Int32 panda$core$UInt16$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 410
uint16_t $tmp259 = param0.value;
int16_t $tmp260 = param1.value;
int32_t $tmp261 = ((int32_t) $tmp259) << ((int32_t) $tmp260);
panda$core$Int32 $tmp262 = panda$core$Int32$init$builtin_int32($tmp261);
return $tmp262;

}
panda$core$Int32 panda$core$UInt16$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 416
uint16_t $tmp263 = param0.value;
int32_t $tmp264 = param1.value;
int32_t $tmp265 = ((int32_t) $tmp263) << $tmp264;
panda$core$Int32 $tmp266 = panda$core$Int32$init$builtin_int32($tmp265);
return $tmp266;

}
panda$core$Int64 panda$core$UInt16$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int64 param1) {

// line 422
uint16_t $tmp267 = param0.value;
int64_t $tmp268 = param1.value;
int64_t $tmp269 = ((int64_t) $tmp267) << $tmp268;
panda$core$Int64 $tmp270 = panda$core$Int64$init$builtin_int64($tmp269);
return $tmp270;

}
panda$core$UInt32 panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 428
uint16_t $tmp271 = param0.value;
uint16_t $tmp272 = param1.value;
uint32_t $tmp273 = ((uint32_t) $tmp271) << ((uint32_t) $tmp272);
panda$core$UInt32 $tmp274 = panda$core$UInt32$init$builtin_uint32($tmp273);
return $tmp274;

}
panda$core$UInt16 panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 433
uint16_t $tmp275 = param0.value;
uint16_t $tmp276 = param1.value;
uint16_t $tmp277 = $tmp275 << $tmp276;
panda$core$UInt16 $tmp278 = panda$core$UInt16$init$builtin_uint16($tmp277);
return $tmp278;

}
panda$core$UInt32 panda$core$UInt16$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 439
uint16_t $tmp279 = param0.value;
uint32_t $tmp280 = param1.value;
uint32_t $tmp281 = ((uint32_t) $tmp279) << $tmp280;
panda$core$UInt32 $tmp282 = panda$core$UInt32$init$builtin_uint32($tmp281);
return $tmp282;

}
panda$core$UInt64 panda$core$UInt16$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 445
uint16_t $tmp283 = param0.value;
uint64_t $tmp284 = param1.value;
uint64_t $tmp285 = ((uint64_t) $tmp283) << $tmp284;
panda$core$UInt64 $tmp286 = panda$core$UInt64$init$builtin_uint64($tmp285);
return $tmp286;

}
panda$core$Int32 panda$core$UInt16$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 451
uint16_t $tmp287 = param0.value;
int16_t $tmp288 = param1.value;
int32_t $tmp289 = ((int32_t) $tmp287) >> ((int32_t) $tmp288);
panda$core$Int32 $tmp290 = panda$core$Int32$init$builtin_int32($tmp289);
return $tmp290;

}
panda$core$Int32 panda$core$UInt16$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 457
uint16_t $tmp291 = param0.value;
int32_t $tmp292 = param1.value;
int32_t $tmp293 = ((int32_t) $tmp291) >> $tmp292;
panda$core$Int32 $tmp294 = panda$core$Int32$init$builtin_int32($tmp293);
return $tmp294;

}
panda$core$Int64 panda$core$UInt16$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int64 param1) {

// line 463
uint16_t $tmp295 = param0.value;
int64_t $tmp296 = param1.value;
int64_t $tmp297 = ((int64_t) $tmp295) >> $tmp296;
panda$core$Int64 $tmp298 = panda$core$Int64$init$builtin_int64($tmp297);
return $tmp298;

}
panda$core$UInt32 panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 469
uint16_t $tmp299 = param0.value;
uint16_t $tmp300 = param1.value;
uint32_t $tmp301 = ((uint32_t) $tmp299) >> ((uint32_t) $tmp300);
panda$core$UInt32 $tmp302 = panda$core$UInt32$init$builtin_uint32($tmp301);
return $tmp302;

}
panda$core$UInt16 panda$core$UInt16$$SHR$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 474
uint16_t $tmp303 = param0.value;
uint16_t $tmp304 = param1.value;
uint16_t $tmp305 = $tmp303 >> $tmp304;
panda$core$UInt16 $tmp306 = panda$core$UInt16$init$builtin_uint16($tmp305);
return $tmp306;

}
panda$core$UInt32 panda$core$UInt16$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 480
uint16_t $tmp307 = param0.value;
uint32_t $tmp308 = param1.value;
uint32_t $tmp309 = ((uint32_t) $tmp307) >> $tmp308;
panda$core$UInt32 $tmp310 = panda$core$UInt32$init$builtin_uint32($tmp309);
return $tmp310;

}
panda$core$UInt64 panda$core$UInt16$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 486
uint16_t $tmp311 = param0.value;
uint64_t $tmp312 = param1.value;
uint64_t $tmp313 = ((uint64_t) $tmp311) >> $tmp312;
panda$core$UInt64 $tmp314 = panda$core$UInt64$init$builtin_uint64($tmp313);
return $tmp314;

}
panda$core$Bit panda$core$UInt16$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int8 param1) {

// line 492
uint16_t $tmp315 = param0.value;
int8_t $tmp316 = param1.value;
bool $tmp317 = ((int32_t) $tmp315) == ((int32_t) $tmp316);
panda$core$Bit $tmp318 = panda$core$Bit$init$builtin_bit($tmp317);
return $tmp318;

}
panda$core$Bit panda$core$UInt16$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 498
uint16_t $tmp319 = param0.value;
int16_t $tmp320 = param1.value;
bool $tmp321 = ((int32_t) $tmp319) == ((int32_t) $tmp320);
panda$core$Bit $tmp322 = panda$core$Bit$init$builtin_bit($tmp321);
return $tmp322;

}
panda$core$Bit panda$core$UInt16$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 504
uint16_t $tmp323 = param0.value;
int32_t $tmp324 = param1.value;
bool $tmp325 = ((int64_t) $tmp323) == ((int64_t) $tmp324);
panda$core$Bit $tmp326 = panda$core$Bit$init$builtin_bit($tmp325);
return $tmp326;

}
panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt8 param1) {

// line 510
uint16_t $tmp327 = param0.value;
uint8_t $tmp328 = param1.value;
bool $tmp329 = $tmp327 == ((uint16_t) $tmp328);
panda$core$Bit $tmp330 = panda$core$Bit$init$builtin_bit($tmp329);
return $tmp330;

}
panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 517
uint16_t $tmp331 = param0.value;
uint16_t $tmp332 = param1.value;
bool $tmp333 = $tmp331 == $tmp332;
panda$core$Bit $tmp334 = panda$core$Bit$init$builtin_bit($tmp333);
return $tmp334;

}
panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 523
uint16_t $tmp335 = param0.value;
uint32_t $tmp336 = param1.value;
bool $tmp337 = ((uint32_t) $tmp335) == $tmp336;
panda$core$Bit $tmp338 = panda$core$Bit$init$builtin_bit($tmp337);
return $tmp338;

}
panda$core$Bit panda$core$UInt16$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 529
uint16_t $tmp339 = param0.value;
uint64_t $tmp340 = param1.value;
bool $tmp341 = ((uint64_t) $tmp339) == $tmp340;
panda$core$Bit $tmp342 = panda$core$Bit$init$builtin_bit($tmp341);
return $tmp342;

}
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int8 param1) {

// line 535
uint16_t $tmp343 = param0.value;
int8_t $tmp344 = param1.value;
bool $tmp345 = ((int32_t) $tmp343) != ((int32_t) $tmp344);
panda$core$Bit $tmp346 = panda$core$Bit$init$builtin_bit($tmp345);
return $tmp346;

}
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 541
uint16_t $tmp347 = param0.value;
int16_t $tmp348 = param1.value;
bool $tmp349 = ((int32_t) $tmp347) != ((int32_t) $tmp348);
panda$core$Bit $tmp350 = panda$core$Bit$init$builtin_bit($tmp349);
return $tmp350;

}
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 547
uint16_t $tmp351 = param0.value;
int32_t $tmp352 = param1.value;
bool $tmp353 = ((int64_t) $tmp351) != ((int64_t) $tmp352);
panda$core$Bit $tmp354 = panda$core$Bit$init$builtin_bit($tmp353);
return $tmp354;

}
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt8 param1) {

// line 553
uint16_t $tmp355 = param0.value;
uint8_t $tmp356 = param1.value;
bool $tmp357 = $tmp355 != ((uint16_t) $tmp356);
panda$core$Bit $tmp358 = panda$core$Bit$init$builtin_bit($tmp357);
return $tmp358;

}
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 560
uint16_t $tmp359 = param0.value;
uint16_t $tmp360 = param1.value;
bool $tmp361 = $tmp359 != $tmp360;
panda$core$Bit $tmp362 = panda$core$Bit$init$builtin_bit($tmp361);
return $tmp362;

}
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 566
uint16_t $tmp363 = param0.value;
uint32_t $tmp364 = param1.value;
bool $tmp365 = ((uint32_t) $tmp363) != $tmp364;
panda$core$Bit $tmp366 = panda$core$Bit$init$builtin_bit($tmp365);
return $tmp366;

}
panda$core$Bit panda$core$UInt16$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 572
uint16_t $tmp367 = param0.value;
uint64_t $tmp368 = param1.value;
bool $tmp369 = ((uint64_t) $tmp367) != $tmp368;
panda$core$Bit $tmp370 = panda$core$Bit$init$builtin_bit($tmp369);
return $tmp370;

}
panda$core$Bit panda$core$UInt16$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int8 param1) {

// line 578
uint16_t $tmp371 = param0.value;
int8_t $tmp372 = param1.value;
bool $tmp373 = ((int32_t) $tmp371) < ((int32_t) $tmp372);
panda$core$Bit $tmp374 = panda$core$Bit$init$builtin_bit($tmp373);
return $tmp374;

}
panda$core$Bit panda$core$UInt16$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 584
uint16_t $tmp375 = param0.value;
int16_t $tmp376 = param1.value;
bool $tmp377 = ((int32_t) $tmp375) < ((int32_t) $tmp376);
panda$core$Bit $tmp378 = panda$core$Bit$init$builtin_bit($tmp377);
return $tmp378;

}
panda$core$Bit panda$core$UInt16$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 590
uint16_t $tmp379 = param0.value;
int32_t $tmp380 = param1.value;
bool $tmp381 = ((int64_t) $tmp379) < ((int64_t) $tmp380);
panda$core$Bit $tmp382 = panda$core$Bit$init$builtin_bit($tmp381);
return $tmp382;

}
panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt8 param1) {

// line 596
uint16_t $tmp383 = param0.value;
uint8_t $tmp384 = param1.value;
bool $tmp385 = $tmp383 < ((uint16_t) $tmp384);
panda$core$Bit $tmp386 = panda$core$Bit$init$builtin_bit($tmp385);
return $tmp386;

}
panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 603
uint16_t $tmp387 = param0.value;
uint16_t $tmp388 = param1.value;
bool $tmp389 = $tmp387 < $tmp388;
panda$core$Bit $tmp390 = panda$core$Bit$init$builtin_bit($tmp389);
return $tmp390;

}
panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 609
uint16_t $tmp391 = param0.value;
uint32_t $tmp392 = param1.value;
bool $tmp393 = ((uint32_t) $tmp391) < $tmp392;
panda$core$Bit $tmp394 = panda$core$Bit$init$builtin_bit($tmp393);
return $tmp394;

}
panda$core$Bit panda$core$UInt16$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 615
uint16_t $tmp395 = param0.value;
uint64_t $tmp396 = param1.value;
bool $tmp397 = ((uint64_t) $tmp395) < $tmp396;
panda$core$Bit $tmp398 = panda$core$Bit$init$builtin_bit($tmp397);
return $tmp398;

}
panda$core$Bit panda$core$UInt16$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int8 param1) {

// line 621
uint16_t $tmp399 = param0.value;
int8_t $tmp400 = param1.value;
bool $tmp401 = ((int32_t) $tmp399) > ((int32_t) $tmp400);
panda$core$Bit $tmp402 = panda$core$Bit$init$builtin_bit($tmp401);
return $tmp402;

}
panda$core$Bit panda$core$UInt16$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 627
uint16_t $tmp403 = param0.value;
int16_t $tmp404 = param1.value;
bool $tmp405 = ((int32_t) $tmp403) > ((int32_t) $tmp404);
panda$core$Bit $tmp406 = panda$core$Bit$init$builtin_bit($tmp405);
return $tmp406;

}
panda$core$Bit panda$core$UInt16$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 633
uint16_t $tmp407 = param0.value;
int32_t $tmp408 = param1.value;
bool $tmp409 = ((int64_t) $tmp407) > ((int64_t) $tmp408);
panda$core$Bit $tmp410 = panda$core$Bit$init$builtin_bit($tmp409);
return $tmp410;

}
panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt8 param1) {

// line 639
uint16_t $tmp411 = param0.value;
uint8_t $tmp412 = param1.value;
bool $tmp413 = $tmp411 > ((uint16_t) $tmp412);
panda$core$Bit $tmp414 = panda$core$Bit$init$builtin_bit($tmp413);
return $tmp414;

}
panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 646
uint16_t $tmp415 = param0.value;
uint16_t $tmp416 = param1.value;
bool $tmp417 = $tmp415 > $tmp416;
panda$core$Bit $tmp418 = panda$core$Bit$init$builtin_bit($tmp417);
return $tmp418;

}
panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 652
uint16_t $tmp419 = param0.value;
uint32_t $tmp420 = param1.value;
bool $tmp421 = ((uint32_t) $tmp419) > $tmp420;
panda$core$Bit $tmp422 = panda$core$Bit$init$builtin_bit($tmp421);
return $tmp422;

}
panda$core$Bit panda$core$UInt16$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 658
uint16_t $tmp423 = param0.value;
uint64_t $tmp424 = param1.value;
bool $tmp425 = ((uint64_t) $tmp423) > $tmp424;
panda$core$Bit $tmp426 = panda$core$Bit$init$builtin_bit($tmp425);
return $tmp426;

}
panda$core$Bit panda$core$UInt16$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int8 param1) {

// line 664
uint16_t $tmp427 = param0.value;
int8_t $tmp428 = param1.value;
bool $tmp429 = ((int32_t) $tmp427) >= ((int32_t) $tmp428);
panda$core$Bit $tmp430 = panda$core$Bit$init$builtin_bit($tmp429);
return $tmp430;

}
panda$core$Bit panda$core$UInt16$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 670
uint16_t $tmp431 = param0.value;
int16_t $tmp432 = param1.value;
bool $tmp433 = ((int32_t) $tmp431) >= ((int32_t) $tmp432);
panda$core$Bit $tmp434 = panda$core$Bit$init$builtin_bit($tmp433);
return $tmp434;

}
panda$core$Bit panda$core$UInt16$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 676
uint16_t $tmp435 = param0.value;
int32_t $tmp436 = param1.value;
bool $tmp437 = ((int64_t) $tmp435) >= ((int64_t) $tmp436);
panda$core$Bit $tmp438 = panda$core$Bit$init$builtin_bit($tmp437);
return $tmp438;

}
panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt8 param1) {

// line 682
uint16_t $tmp439 = param0.value;
uint8_t $tmp440 = param1.value;
bool $tmp441 = $tmp439 >= ((uint16_t) $tmp440);
panda$core$Bit $tmp442 = panda$core$Bit$init$builtin_bit($tmp441);
return $tmp442;

}
panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 689
uint16_t $tmp443 = param0.value;
uint16_t $tmp444 = param1.value;
bool $tmp445 = $tmp443 >= $tmp444;
panda$core$Bit $tmp446 = panda$core$Bit$init$builtin_bit($tmp445);
return $tmp446;

}
panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 695
uint16_t $tmp447 = param0.value;
uint32_t $tmp448 = param1.value;
bool $tmp449 = ((uint32_t) $tmp447) >= $tmp448;
panda$core$Bit $tmp450 = panda$core$Bit$init$builtin_bit($tmp449);
return $tmp450;

}
panda$core$Bit panda$core$UInt16$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 701
uint16_t $tmp451 = param0.value;
uint64_t $tmp452 = param1.value;
bool $tmp453 = ((uint64_t) $tmp451) >= $tmp452;
panda$core$Bit $tmp454 = panda$core$Bit$init$builtin_bit($tmp453);
return $tmp454;

}
panda$core$Bit panda$core$UInt16$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int8 param1) {

// line 707
uint16_t $tmp455 = param0.value;
int8_t $tmp456 = param1.value;
bool $tmp457 = ((int32_t) $tmp455) <= ((int32_t) $tmp456);
panda$core$Bit $tmp458 = panda$core$Bit$init$builtin_bit($tmp457);
return $tmp458;

}
panda$core$Bit panda$core$UInt16$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 713
uint16_t $tmp459 = param0.value;
int16_t $tmp460 = param1.value;
bool $tmp461 = ((int32_t) $tmp459) <= ((int32_t) $tmp460);
panda$core$Bit $tmp462 = panda$core$Bit$init$builtin_bit($tmp461);
return $tmp462;

}
panda$core$Bit panda$core$UInt16$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 719
uint16_t $tmp463 = param0.value;
int32_t $tmp464 = param1.value;
bool $tmp465 = ((int64_t) $tmp463) <= ((int64_t) $tmp464);
panda$core$Bit $tmp466 = panda$core$Bit$init$builtin_bit($tmp465);
return $tmp466;

}
panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt8 param1) {

// line 725
uint16_t $tmp467 = param0.value;
uint8_t $tmp468 = param1.value;
bool $tmp469 = $tmp467 <= ((uint16_t) $tmp468);
panda$core$Bit $tmp470 = panda$core$Bit$init$builtin_bit($tmp469);
return $tmp470;

}
panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 732
uint16_t $tmp471 = param0.value;
uint16_t $tmp472 = param1.value;
bool $tmp473 = $tmp471 <= $tmp472;
panda$core$Bit $tmp474 = panda$core$Bit$init$builtin_bit($tmp473);
return $tmp474;

}
panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 738
uint16_t $tmp475 = param0.value;
uint32_t $tmp476 = param1.value;
bool $tmp477 = ((uint32_t) $tmp475) <= $tmp476;
panda$core$Bit $tmp478 = panda$core$Bit$init$builtin_bit($tmp477);
return $tmp478;

}
panda$core$Bit panda$core$UInt16$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 744
uint16_t $tmp479 = param0.value;
uint64_t $tmp480 = param1.value;
bool $tmp481 = ((uint64_t) $tmp479) <= $tmp480;
panda$core$Bit $tmp482 = panda$core$Bit$init$builtin_bit($tmp481);
return $tmp482;

}
panda$core$Int32 panda$core$UInt16$min$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int8 param1) {

// line 750
uint16_t $tmp483 = param0.value;
int8_t $tmp484 = param1.value;
bool $tmp485 = ((int32_t) $tmp483) < ((int32_t) $tmp484);
panda$core$Bit $tmp486 = panda$core$Bit$init$builtin_bit($tmp485);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block1; else goto block2;
block1:;
// line 751
uint16_t $tmp488 = param0.value;
panda$core$Int32 $tmp489 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp488));
return $tmp489;
block2:;
// line 753
int8_t $tmp490 = param1.value;
panda$core$Int32 $tmp491 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp490));
return $tmp491;

}
panda$core$Int32 panda$core$UInt16$min$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 759
uint16_t $tmp492 = param0.value;
int16_t $tmp493 = param1.value;
bool $tmp494 = ((int32_t) $tmp492) < ((int32_t) $tmp493);
panda$core$Bit $tmp495 = panda$core$Bit$init$builtin_bit($tmp494);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block1; else goto block2;
block1:;
// line 760
uint16_t $tmp497 = param0.value;
panda$core$Int32 $tmp498 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp497));
return $tmp498;
block2:;
// line 762
int16_t $tmp499 = param1.value;
panda$core$Int32 $tmp500 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp499));
return $tmp500;

}
panda$core$Int64 panda$core$UInt16$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 768
uint16_t $tmp501 = param0.value;
int32_t $tmp502 = param1.value;
bool $tmp503 = ((int64_t) $tmp501) < ((int64_t) $tmp502);
panda$core$Bit $tmp504 = panda$core$Bit$init$builtin_bit($tmp503);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block1; else goto block2;
block1:;
// line 769
uint16_t $tmp506 = param0.value;
panda$core$Int64 $tmp507 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp506));
return $tmp507;
block2:;
// line 771
int32_t $tmp508 = param1.value;
panda$core$Int64 $tmp509 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp508));
return $tmp509;

}
panda$core$UInt16 panda$core$UInt16$min$panda$core$UInt8$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt8 param1) {

// line 778
uint16_t $tmp510 = param0.value;
uint8_t $tmp511 = param1.value;
bool $tmp512 = $tmp510 < ((uint16_t) $tmp511);
panda$core$Bit $tmp513 = panda$core$Bit$init$builtin_bit($tmp512);
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block1; else goto block2;
block1:;
// line 779
uint16_t $tmp515 = param0.value;
panda$core$UInt16 $tmp516 = panda$core$UInt16$init$builtin_uint16($tmp515);
return $tmp516;
block2:;
// line 781
uint8_t $tmp517 = param1.value;
panda$core$UInt16 $tmp518 = panda$core$UInt16$init$builtin_uint16(((uint16_t) $tmp517));
return $tmp518;

}
panda$core$UInt16 panda$core$UInt16$min$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 787
uint16_t $tmp519 = param0.value;
uint16_t $tmp520 = param1.value;
bool $tmp521 = $tmp519 < $tmp520;
panda$core$Bit $tmp522 = panda$core$Bit$init$builtin_bit($tmp521);
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block1; else goto block2;
block1:;
// line 788
uint16_t $tmp524 = param0.value;
panda$core$UInt16 $tmp525 = panda$core$UInt16$init$builtin_uint16($tmp524);
return $tmp525;
block2:;
// line 790
uint16_t $tmp526 = param1.value;
panda$core$UInt16 $tmp527 = panda$core$UInt16$init$builtin_uint16($tmp526);
return $tmp527;

}
panda$core$UInt32 panda$core$UInt16$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 796
uint16_t $tmp528 = param0.value;
uint32_t $tmp529 = param1.value;
bool $tmp530 = ((uint32_t) $tmp528) < $tmp529;
panda$core$Bit $tmp531 = panda$core$Bit$init$builtin_bit($tmp530);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block1; else goto block2;
block1:;
// line 797
uint16_t $tmp533 = param0.value;
panda$core$UInt32 $tmp534 = panda$core$UInt32$init$builtin_uint32(((uint32_t) $tmp533));
return $tmp534;
block2:;
// line 799
uint32_t $tmp535 = param1.value;
panda$core$UInt32 $tmp536 = panda$core$UInt32$init$builtin_uint32($tmp535);
return $tmp536;

}
panda$core$UInt64 panda$core$UInt16$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 805
uint16_t $tmp537 = param0.value;
uint64_t $tmp538 = param1.value;
bool $tmp539 = ((uint64_t) $tmp537) < $tmp538;
panda$core$Bit $tmp540 = panda$core$Bit$init$builtin_bit($tmp539);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block1; else goto block2;
block1:;
// line 806
uint16_t $tmp542 = param0.value;
panda$core$UInt64 $tmp543 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp542));
return $tmp543;
block2:;
// line 808
uint64_t $tmp544 = param1.value;
panda$core$UInt64 $tmp545 = panda$core$UInt64$init$builtin_uint64($tmp544);
return $tmp545;

}
panda$core$Int32 panda$core$UInt16$max$panda$core$Int8$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int8 param1) {

// line 814
uint16_t $tmp546 = param0.value;
int8_t $tmp547 = param1.value;
bool $tmp548 = ((int32_t) $tmp546) > ((int32_t) $tmp547);
panda$core$Bit $tmp549 = panda$core$Bit$init$builtin_bit($tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block1; else goto block2;
block1:;
// line 815
uint16_t $tmp551 = param0.value;
panda$core$Int32 $tmp552 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp551));
return $tmp552;
block2:;
// line 817
int8_t $tmp553 = param1.value;
panda$core$Int32 $tmp554 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp553));
return $tmp554;

}
panda$core$Int32 panda$core$UInt16$max$panda$core$Int16$R$panda$core$Int32(panda$core$UInt16 param0, panda$core$Int16 param1) {

// line 823
uint16_t $tmp555 = param0.value;
int16_t $tmp556 = param1.value;
bool $tmp557 = ((int32_t) $tmp555) > ((int32_t) $tmp556);
panda$core$Bit $tmp558 = panda$core$Bit$init$builtin_bit($tmp557);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block1; else goto block2;
block1:;
// line 824
uint16_t $tmp560 = param0.value;
panda$core$Int32 $tmp561 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp560));
return $tmp561;
block2:;
// line 826
int16_t $tmp562 = param1.value;
panda$core$Int32 $tmp563 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp562));
return $tmp563;

}
panda$core$Int64 panda$core$UInt16$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt16 param0, panda$core$Int32 param1) {

// line 832
uint16_t $tmp564 = param0.value;
int32_t $tmp565 = param1.value;
bool $tmp566 = ((int64_t) $tmp564) > ((int64_t) $tmp565);
panda$core$Bit $tmp567 = panda$core$Bit$init$builtin_bit($tmp566);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block1; else goto block2;
block1:;
// line 833
uint16_t $tmp569 = param0.value;
panda$core$Int64 $tmp570 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp569));
return $tmp570;
block2:;
// line 835
int32_t $tmp571 = param1.value;
panda$core$Int64 $tmp572 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp571));
return $tmp572;

}
panda$core$UInt16 panda$core$UInt16$max$panda$core$UInt8$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt8 param1) {

// line 842
uint16_t $tmp573 = param0.value;
uint8_t $tmp574 = param1.value;
bool $tmp575 = $tmp573 > ((uint16_t) $tmp574);
panda$core$Bit $tmp576 = panda$core$Bit$init$builtin_bit($tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block1; else goto block2;
block1:;
// line 843
uint16_t $tmp578 = param0.value;
panda$core$UInt16 $tmp579 = panda$core$UInt16$init$builtin_uint16($tmp578);
return $tmp579;
block2:;
// line 845
uint8_t $tmp580 = param1.value;
panda$core$UInt16 $tmp581 = panda$core$UInt16$init$builtin_uint16(((uint16_t) $tmp580));
return $tmp581;

}
panda$core$UInt16 panda$core$UInt16$max$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt16 param0, panda$core$UInt16 param1) {

// line 851
uint16_t $tmp582 = param0.value;
uint16_t $tmp583 = param1.value;
bool $tmp584 = $tmp582 > $tmp583;
panda$core$Bit $tmp585 = panda$core$Bit$init$builtin_bit($tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block1; else goto block2;
block1:;
// line 852
uint16_t $tmp587 = param0.value;
panda$core$UInt16 $tmp588 = panda$core$UInt16$init$builtin_uint16($tmp587);
return $tmp588;
block2:;
// line 854
uint16_t $tmp589 = param1.value;
panda$core$UInt16 $tmp590 = panda$core$UInt16$init$builtin_uint16($tmp589);
return $tmp590;

}
panda$core$UInt32 panda$core$UInt16$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt16 param0, panda$core$UInt32 param1) {

// line 860
uint16_t $tmp591 = param0.value;
uint32_t $tmp592 = param1.value;
bool $tmp593 = ((uint32_t) $tmp591) > $tmp592;
panda$core$Bit $tmp594 = panda$core$Bit$init$builtin_bit($tmp593);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block1; else goto block2;
block1:;
// line 861
uint16_t $tmp596 = param0.value;
panda$core$UInt32 $tmp597 = panda$core$UInt32$init$builtin_uint32(((uint32_t) $tmp596));
return $tmp597;
block2:;
// line 863
uint32_t $tmp598 = param1.value;
panda$core$UInt32 $tmp599 = panda$core$UInt32$init$builtin_uint32($tmp598);
return $tmp599;

}
panda$core$UInt64 panda$core$UInt16$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt16 param0, panda$core$UInt64 param1) {

// line 869
uint16_t $tmp600 = param0.value;
uint64_t $tmp601 = param1.value;
bool $tmp602 = ((uint64_t) $tmp600) > $tmp601;
panda$core$Bit $tmp603 = panda$core$Bit$init$builtin_bit($tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block1; else goto block2;
block1:;
// line 870
uint16_t $tmp605 = param0.value;
panda$core$UInt64 $tmp606 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp605));
return $tmp606;
block2:;
// line 872
uint64_t $tmp607 = param1.value;
panda$core$UInt64 $tmp608 = panda$core$UInt64$init$builtin_uint64($tmp607);
return $tmp608;

}
panda$collections$ListView* panda$core$UInt16$$IDX$panda$core$Range$LTpanda$core$UInt16$GT$R$panda$collections$ListView$LTpanda$core$UInt16$GT(panda$core$Range$LTpanda$core$UInt16$GT param0) {

// line 877
org$pandalanguage$panda$UInt16List* $tmp609 = (org$pandalanguage$panda$UInt16List*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$UInt16List$class);
panda$core$UInt16 $tmp610 = param0.min;
panda$core$UInt16 $tmp611 = param0.max;
panda$core$UInt16 $tmp612 = (panda$core$UInt16) {1};
panda$core$Bit $tmp613 = param0.inclusive;
panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT $tmp614 = panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT$init$panda$core$UInt16$panda$core$UInt16$panda$core$UInt16$panda$core$Bit($tmp610, $tmp611, $tmp612, $tmp613);
org$pandalanguage$panda$UInt16List$init$panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT($tmp609, $tmp614);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp609)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing REF($1:org.pandalanguage.panda.UInt16List)
return ((panda$collections$ListView*) $tmp609);

}
panda$collections$ListView* panda$core$UInt16$$IDX$panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT$R$panda$collections$ListView$LTpanda$core$UInt16$GT(panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT param0) {

// line 882
org$pandalanguage$panda$UInt16List* $tmp615 = (org$pandalanguage$panda$UInt16List*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$UInt16List$class);
org$pandalanguage$panda$UInt16List$init$panda$core$SteppedRange$LTpanda$core$UInt16$Cpanda$core$UInt16$GT($tmp615, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp615)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing REF($1:org.pandalanguage.panda.UInt16List)
return ((panda$collections$ListView*) $tmp615);

}
panda$core$Bit panda$core$UInt16$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt16 param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp616 = (panda$core$Int64) {0};
int64_t $tmp617 = param1.value;
int64_t $tmp618 = $tmp616.value;
bool $tmp619 = $tmp617 >= $tmp618;
panda$core$Bit $tmp620 = (panda$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block1; else goto block2;
block1:;
panda$core$UInt16$wrapper* $tmp622;
$tmp622 = (panda$core$UInt16$wrapper*) frostObjectAlloc(14, (panda$core$Class*) &panda$core$UInt16$wrapperclass);
$tmp622->value = param0;
ITable* $tmp623 = ((panda$collections$CollectionView*) $tmp622)->$class->itable;
while ($tmp623->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp623 = $tmp623->next;
}
$fn625 $tmp624 = $tmp623->methods[0];
panda$core$Int64 $tmp626 = $tmp624(((panda$collections$CollectionView*) $tmp622));
int64_t $tmp627 = param1.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 < $tmp628;
panda$core$Bit $tmp630 = (panda$core$Bit) {$tmp629};
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$CollectionView*) $tmp622)));
// unreffing REF($7:panda.collections.CollectionView)
*(&local0) = $tmp630;
goto block3;
block2:;
*(&local0) = $tmp620;
goto block3;
block3:;
panda$core$Bit $tmp631 = *(&local0);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp633 = (panda$core$Int64) {887};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s634, $tmp633, &$s635);
abort(); // unreachable
block4:;
// line 888
panda$core$Int64 $tmp636 = (panda$core$Int64) {1};
panda$core$Int64 $tmp637 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp636, param1);
panda$core$Int64 $tmp638 = panda$core$UInt16$$BAND$panda$core$Int64$R$panda$core$Int64(param0, $tmp637);
panda$core$Int64 $tmp639 = (panda$core$Int64) {0};
int64_t $tmp640 = $tmp638.value;
int64_t $tmp641 = $tmp639.value;
bool $tmp642 = $tmp640 != $tmp641;
panda$core$Bit $tmp643 = (panda$core$Bit) {$tmp642};
return $tmp643;

}
panda$core$Int64 panda$core$UInt16$get_count$R$panda$core$Int64(panda$core$UInt16 param0) {

// line 894
panda$core$Int64 $tmp644 = (panda$core$Int64) {16};
return $tmp644;

}
panda$collections$Iterator* panda$core$UInt16$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$UInt16 param0) {

// line 899
org$pandalanguage$panda$IntBitIterator* $tmp645 = (org$pandalanguage$panda$IntBitIterator*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
panda$core$UInt64 $tmp646 = panda$core$UInt16$convert$R$panda$core$UInt64(param0);
panda$core$UInt64 $tmp647 = (panda$core$UInt64) {32768};
org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp645, $tmp646, $tmp647);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp645)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
// unreffing REF($1:org.pandalanguage.panda.IntBitIterator)
return ((panda$collections$Iterator*) $tmp645);

}
panda$core$Int64 panda$core$UInt16$get_hash$R$panda$core$Int64(panda$core$UInt16 param0) {

// line 904
uint16_t $tmp648 = param0.value;
panda$core$Int64 $tmp649 = (panda$core$Int64) {((int64_t) $tmp648)};
return $tmp649;

}
panda$core$UInt16$nullable panda$core$UInt16$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt16$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$UInt64$nullable local1;
panda$core$Int64 $tmp650 = (panda$core$Int64) {2};
int64_t $tmp651 = param1.value;
int64_t $tmp652 = $tmp650.value;
bool $tmp653 = $tmp651 >= $tmp652;
panda$core$Bit $tmp654 = (panda$core$Bit) {$tmp653};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp656 = (panda$core$Int64) {36};
int64_t $tmp657 = param1.value;
int64_t $tmp658 = $tmp656.value;
bool $tmp659 = $tmp657 <= $tmp658;
panda$core$Bit $tmp660 = (panda$core$Bit) {$tmp659};
*(&local0) = $tmp660;
goto block3;
block2:;
*(&local0) = $tmp654;
goto block3;
block3:;
panda$core$Bit $tmp661 = *(&local0);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp663 = (panda$core$Int64) {910};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s664, $tmp663, &$s665);
abort(); // unreachable
block4:;
// line 911
panda$core$UInt64$nullable $tmp666 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(param0, param1);
*(&local1) = $tmp666;
// line 912
panda$core$UInt64$nullable $tmp667 = *(&local1);
panda$core$Bit $tmp668 = panda$core$Bit$init$builtin_bit(!$tmp667.nonnull);
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block6; else goto block7;
block6:;
// line 913
return ((panda$core$UInt16$nullable) { .nonnull = false });
block7:;
// line 915
panda$core$UInt64$nullable $tmp670 = *(&local1);
panda$core$Bit $tmp671 = panda$core$Bit$init$builtin_bit($tmp670.nonnull);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp673 = (panda$core$Int64) {915};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s674, $tmp673, &$s675);
abort(); // unreachable
block8:;
panda$core$UInt16 $tmp676 = panda$core$UInt64$convert$R$panda$core$UInt16(((panda$core$UInt64) $tmp670.value));
return ((panda$core$UInt16$nullable) { $tmp676, true });

}
panda$core$Int8 panda$core$UInt16$convert$R$panda$core$Int8(panda$core$UInt16 param0) {

// line 920
uint16_t $tmp677 = param0.value;
panda$core$Int8 $tmp678 = (panda$core$Int8) {((int8_t) $tmp677)};
return $tmp678;

}
panda$core$Int16 panda$core$UInt16$convert$R$panda$core$Int16(panda$core$UInt16 param0) {

// line 925
uint16_t $tmp679 = param0.value;
panda$core$Int16 $tmp680 = (panda$core$Int16) {((int16_t) $tmp679)};
return $tmp680;

}
panda$core$Int32 panda$core$UInt16$convert$R$panda$core$Int32(panda$core$UInt16 param0) {

// line 930
uint16_t $tmp681 = param0.value;
panda$core$Int32 $tmp682 = (panda$core$Int32) {((int32_t) $tmp681)};
return $tmp682;

}
panda$core$Int64 panda$core$UInt16$convert$R$panda$core$Int64(panda$core$UInt16 param0) {

// line 935
uint16_t $tmp683 = param0.value;
panda$core$Int64 $tmp684 = (panda$core$Int64) {((int64_t) $tmp683)};
return $tmp684;

}
panda$core$UInt8 panda$core$UInt16$convert$R$panda$core$UInt8(panda$core$UInt16 param0) {

// line 940
uint16_t $tmp685 = param0.value;
panda$core$UInt8 $tmp686 = (panda$core$UInt8) {((uint8_t) $tmp685)};
return $tmp686;

}
panda$core$UInt32 panda$core$UInt16$convert$R$panda$core$UInt32(panda$core$UInt16 param0) {

// line 945
uint16_t $tmp687 = param0.value;
panda$core$UInt32 $tmp688 = (panda$core$UInt32) {((uint32_t) $tmp687)};
return $tmp688;

}
panda$core$UInt64 panda$core$UInt16$convert$R$panda$core$UInt64(panda$core$UInt16 param0) {

// line 950
uint16_t $tmp689 = param0.value;
panda$core$UInt64 $tmp690 = (panda$core$UInt64) {((uint64_t) $tmp689)};
return $tmp690;

}
panda$core$Real32 panda$core$UInt16$convert$R$panda$core$Real32(panda$core$UInt16 param0) {

// line 955
uint16_t $tmp691 = param0.value;
panda$core$Real32 $tmp692 = (panda$core$Real32) {((float) $tmp691)};
return $tmp692;

}
panda$core$Real64 panda$core$UInt16$convert$R$panda$core$Real64(panda$core$UInt16 param0) {

// line 960
uint16_t $tmp693 = param0.value;
panda$core$Real64 $tmp694 = (panda$core$Real64) {((double) $tmp693)};
return $tmp694;

}
panda$core$String* panda$core$UInt16$convert$R$panda$core$String(panda$core$UInt16 param0) {

panda$core$Int64 local0;
panda$core$Char8* local1;
panda$core$Int64 local2;
panda$core$UInt16 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 966
panda$core$Int64 $tmp695 = (panda$core$Int64) {5};
*(&local0) = $tmp695;
// line 967
panda$core$Int64 $tmp696 = *(&local0);
int64_t $tmp697 = $tmp696.value;
panda$core$Char8* $tmp698 = ((panda$core$Char8*) frostAlloc($tmp697 * 1));
*(&local1) = $tmp698;
// line 968
panda$core$Int64 $tmp699 = *(&local0);
panda$core$Int64 $tmp700 = (panda$core$Int64) {1};
int64_t $tmp701 = $tmp699.value;
int64_t $tmp702 = $tmp700.value;
int64_t $tmp703 = $tmp701 - $tmp702;
panda$core$Int64 $tmp704 = (panda$core$Int64) {$tmp703};
*(&local2) = $tmp704;
// line 969
*(&local3) = param0;
// line 970
panda$core$UInt16 $tmp705 = *(&local3);
panda$core$UInt16 $tmp706 = (panda$core$UInt16) {0};
uint16_t $tmp707 = $tmp705.value;
uint16_t $tmp708 = $tmp706.value;
bool $tmp709 = $tmp707 >= $tmp708;
panda$core$Bit $tmp710 = (panda$core$Bit) {$tmp709};
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block1; else goto block3;
block1:;
// line 971
goto block4;
block4:;
// line 972
panda$core$Char8* $tmp712 = *(&local1);
panda$core$Int64 $tmp713 = *(&local2);
panda$core$UInt16 $tmp714 = *(&local3);
panda$core$UInt16 $tmp715 = (panda$core$UInt16) {10};
panda$core$UInt32 $tmp716 = panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt32($tmp714, $tmp715);
panda$core$UInt32 $tmp717 = (panda$core$UInt32) {48};
uint32_t $tmp718 = $tmp716.value;
uint32_t $tmp719 = $tmp717.value;
uint32_t $tmp720 = $tmp718 + $tmp719;
panda$core$UInt32 $tmp721 = (panda$core$UInt32) {$tmp720};
panda$core$UInt8 $tmp722 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp721);
panda$core$Char8 $tmp723 = panda$core$Char8$init$panda$core$UInt8($tmp722);
int64_t $tmp724 = $tmp713.value;
$tmp712[$tmp724] = $tmp723;
// line 973
panda$core$UInt16 $tmp725 = *(&local3);
panda$core$UInt32 $tmp726 = panda$core$UInt32$init$panda$core$UInt16($tmp725);
panda$core$UInt32 $tmp727 = (panda$core$UInt32) {10};
uint32_t $tmp728 = $tmp726.value;
uint32_t $tmp729 = $tmp727.value;
uint32_t $tmp730 = $tmp728 / $tmp729;
panda$core$UInt32 $tmp731 = (panda$core$UInt32) {$tmp730};
panda$core$UInt16 $tmp732 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp731);
*(&local3) = $tmp732;
// line 974
panda$core$Int64 $tmp733 = *(&local2);
panda$core$Int64 $tmp734 = (panda$core$Int64) {1};
int64_t $tmp735 = $tmp733.value;
int64_t $tmp736 = $tmp734.value;
int64_t $tmp737 = $tmp735 - $tmp736;
panda$core$Int64 $tmp738 = (panda$core$Int64) {$tmp737};
*(&local2) = $tmp738;
goto block5;
block5:;
panda$core$UInt16 $tmp739 = *(&local3);
panda$core$UInt16 $tmp740 = (panda$core$UInt16) {0};
uint16_t $tmp741 = $tmp739.value;
uint16_t $tmp742 = $tmp740.value;
bool $tmp743 = $tmp741 > $tmp742;
panda$core$Bit $tmp744 = (panda$core$Bit) {$tmp743};
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block4; else goto block6;
block6:;
// line 977
panda$core$Int64 $tmp746 = *(&local2);
panda$core$Int64 $tmp747 = (panda$core$Int64) {1};
int64_t $tmp748 = $tmp746.value;
int64_t $tmp749 = $tmp747.value;
int64_t $tmp750 = $tmp748 + $tmp749;
panda$core$Int64 $tmp751 = (panda$core$Int64) {$tmp750};
*(&local2) = $tmp751;
goto block2;
block3:;
// line 1
// line 980
goto block7;
block7:;
// line 981
panda$core$Char8* $tmp752 = *(&local1);
panda$core$Int64 $tmp753 = *(&local2);
panda$core$UInt32 $tmp754 = (panda$core$UInt32) {48};
panda$core$UInt16 $tmp755 = *(&local3);
panda$core$UInt16 $tmp756 = (panda$core$UInt16) {10};
panda$core$UInt32 $tmp757 = panda$core$UInt16$$REM$panda$core$UInt16$R$panda$core$UInt32($tmp755, $tmp756);
uint32_t $tmp758 = $tmp754.value;
uint32_t $tmp759 = $tmp757.value;
uint32_t $tmp760 = $tmp758 - $tmp759;
panda$core$UInt32 $tmp761 = (panda$core$UInt32) {$tmp760};
panda$core$UInt8 $tmp762 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp761);
panda$core$Char8 $tmp763 = panda$core$Char8$init$panda$core$UInt8($tmp762);
int64_t $tmp764 = $tmp753.value;
$tmp752[$tmp764] = $tmp763;
// line 982
panda$core$UInt16 $tmp765 = *(&local3);
panda$core$UInt32 $tmp766 = panda$core$UInt32$init$panda$core$UInt16($tmp765);
panda$core$UInt32 $tmp767 = (panda$core$UInt32) {10};
uint32_t $tmp768 = $tmp766.value;
uint32_t $tmp769 = $tmp767.value;
uint32_t $tmp770 = $tmp768 / $tmp769;
panda$core$UInt32 $tmp771 = (panda$core$UInt32) {$tmp770};
panda$core$UInt16 $tmp772 = panda$core$UInt32$convert$R$panda$core$UInt16($tmp771);
*(&local3) = $tmp772;
// line 983
panda$core$Int64 $tmp773 = *(&local2);
panda$core$Int64 $tmp774 = (panda$core$Int64) {1};
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774.value;
int64_t $tmp777 = $tmp775 - $tmp776;
panda$core$Int64 $tmp778 = (panda$core$Int64) {$tmp777};
*(&local2) = $tmp778;
goto block8;
block8:;
panda$core$UInt16 $tmp779 = *(&local3);
panda$core$UInt16 $tmp780 = (panda$core$UInt16) {0};
uint16_t $tmp781 = $tmp779.value;
uint16_t $tmp782 = $tmp780.value;
bool $tmp783 = $tmp781 < $tmp782;
panda$core$Bit $tmp784 = (panda$core$Bit) {$tmp783};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block7; else goto block9;
block9:;
// line 986
panda$core$Char8* $tmp786 = *(&local1);
panda$core$Int64 $tmp787 = *(&local2);
panda$core$UInt8 $tmp788 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp789 = panda$core$Char8$init$panda$core$UInt8($tmp788);
int64_t $tmp790 = $tmp787.value;
$tmp786[$tmp790] = $tmp789;
goto block2;
block2:;
// line 988
panda$core$Int64 $tmp791 = *(&local0);
panda$core$Int64 $tmp792 = *(&local2);
int64_t $tmp793 = $tmp791.value;
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793 - $tmp794;
panda$core$Int64 $tmp796 = (panda$core$Int64) {$tmp795};
*(&local4) = $tmp796;
// line 989
panda$core$Int64 $tmp797 = (panda$core$Int64) {0};
panda$core$Int64 $tmp798 = *(&local4);
panda$core$Bit $tmp799 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp800 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp797, $tmp798, $tmp799);
panda$core$Int64 $tmp801 = $tmp800.min;
*(&local5) = $tmp801;
panda$core$Int64 $tmp802 = $tmp800.max;
panda$core$Bit $tmp803 = $tmp800.inclusive;
bool $tmp804 = $tmp803.value;
panda$core$Int64 $tmp805 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp806 = panda$core$Int64$convert$R$panda$core$UInt64($tmp805);
if ($tmp804) goto block13; else goto block14;
block13:;
int64_t $tmp807 = $tmp801.value;
int64_t $tmp808 = $tmp802.value;
bool $tmp809 = $tmp807 <= $tmp808;
panda$core$Bit $tmp810 = (panda$core$Bit) {$tmp809};
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block10; else goto block11;
block14:;
int64_t $tmp812 = $tmp801.value;
int64_t $tmp813 = $tmp802.value;
bool $tmp814 = $tmp812 < $tmp813;
panda$core$Bit $tmp815 = (panda$core$Bit) {$tmp814};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block10; else goto block11;
block10:;
// line 990
panda$core$Char8* $tmp817 = *(&local1);
panda$core$Int64 $tmp818 = *(&local5);
panda$core$Char8* $tmp819 = *(&local1);
panda$core$Int64 $tmp820 = *(&local5);
panda$core$Int64 $tmp821 = *(&local2);
int64_t $tmp822 = $tmp820.value;
int64_t $tmp823 = $tmp821.value;
int64_t $tmp824 = $tmp822 + $tmp823;
panda$core$Int64 $tmp825 = (panda$core$Int64) {$tmp824};
int64_t $tmp826 = $tmp825.value;
panda$core$Char8 $tmp827 = $tmp819[$tmp826];
int64_t $tmp828 = $tmp818.value;
$tmp817[$tmp828] = $tmp827;
goto block12;
block12:;
panda$core$Int64 $tmp829 = *(&local5);
int64_t $tmp830 = $tmp802.value;
int64_t $tmp831 = $tmp829.value;
int64_t $tmp832 = $tmp830 - $tmp831;
panda$core$Int64 $tmp833 = (panda$core$Int64) {$tmp832};
panda$core$UInt64 $tmp834 = panda$core$Int64$convert$R$panda$core$UInt64($tmp833);
if ($tmp804) goto block16; else goto block17;
block16:;
uint64_t $tmp835 = $tmp834.value;
uint64_t $tmp836 = $tmp806.value;
bool $tmp837 = $tmp835 >= $tmp836;
panda$core$Bit $tmp838 = (panda$core$Bit) {$tmp837};
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block15; else goto block11;
block17:;
uint64_t $tmp840 = $tmp834.value;
uint64_t $tmp841 = $tmp806.value;
bool $tmp842 = $tmp840 > $tmp841;
panda$core$Bit $tmp843 = (panda$core$Bit) {$tmp842};
bool $tmp844 = $tmp843.value;
if ($tmp844) goto block15; else goto block11;
block15:;
int64_t $tmp845 = $tmp829.value;
int64_t $tmp846 = $tmp805.value;
int64_t $tmp847 = $tmp845 + $tmp846;
panda$core$Int64 $tmp848 = (panda$core$Int64) {$tmp847};
*(&local5) = $tmp848;
goto block10;
block11:;
// line 992
panda$core$String* $tmp849 = (panda$core$String*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp850 = *(&local1);
panda$core$Int64 $tmp851 = *(&local4);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp849, $tmp850, $tmp851);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
// unreffing REF($207:panda.core.String)
return $tmp849;

}
panda$core$String* panda$core$UInt16$format$panda$core$String$R$panda$core$String(panda$core$UInt16 param0, panda$core$String* param1) {

// line 998
panda$core$Bit $tmp852 = panda$core$Bit$init$builtin_bit(false);
panda$core$UInt64 $tmp853 = panda$core$UInt16$convert$R$panda$core$UInt64(param0);
panda$core$UInt64 $tmp854 = (panda$core$UInt64) {65535};
panda$core$String* $tmp855 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp852, $tmp853, $tmp854, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing REF($4:panda.core.String)
return $tmp855;

}
void panda$core$UInt16$cleanup(panda$core$UInt16 param0) {

return;

}

