#include "panda/core/Int32.h"
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
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/core/Comparable.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int32.GT.h"
#include "org/pandalanguage/panda/Int32List.h"
#include "panda/core/SteppedRange.LTpanda/core/Int32.Cpanda/core/Int32.GT.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
__attribute__((weak)) panda$core$Int64 panda$core$Int32$get_count$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int32$get_count$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Int32$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$Int32$format$panda$core$String$R$panda$core$String(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int32$hash$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, ((panda$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, ((panda$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, ((panda$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, ((panda$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, ((panda$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, ((panda$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Int32$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Int32$convert$R$panda$core$String(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$ADD$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int32$$ADD$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int32$$ADD$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$SUB$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$SUB$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$SUB$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int32$$SUB$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int32$$SUB$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SUB$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Int32$$SUB$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$MUL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$MUL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$MUL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$MUL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int32$$MUL$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int32$$MUL$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$INTDIV$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$INTDIV$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$INTDIV$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int32$$INTDIV$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int32$$INTDIV$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$REM$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$REM$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$REM$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$REM$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$REM$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$REM$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int32$$REM$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int32$$REM$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$$REM$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int32$$DIV$panda$core$Int8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real32 result = panda$core$Int32$$DIV$panda$core$Int8$R$panda$core$Real32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int32$$DIV$panda$core$Int16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real32 result = panda$core$Int32$$DIV$panda$core$Int16$R$panda$core$Real32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int32$$DIV$panda$core$Int32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real32 result = panda$core$Int32$$DIV$panda$core$Int32$R$panda$core$Real32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int32$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Int32$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int32$$DIV$panda$core$UInt8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real32 result = panda$core$Int32$$DIV$panda$core$UInt8$R$panda$core$Real32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int32$$DIV$panda$core$UInt16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real32 result = panda$core$Int32$$DIV$panda$core$UInt16$R$panda$core$Real32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int32$$DIV$panda$core$UInt32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real32 result = panda$core$Int32$$DIV$panda$core$UInt32$R$panda$core$Real32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int32$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Int32$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BNOT$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Int32$$BNOT$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$BAND$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$BAND$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BAND$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BAND$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$BOR$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$BOR$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$BOR$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BOR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$BXOR$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$BXOR$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BXOR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BXOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int32$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int32$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$$SHR$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$$SHR$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int32$$SHR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int32$$SHR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int32$$SHR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int32$$SHR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$EQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int32$$EQ$panda$core$Int8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$EQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int32$$EQ$panda$core$Int16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$EQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int32$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int32$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int32$$EQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int32$$EQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int32$$NEQ$panda$core$Int8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int32$$NEQ$panda$core$Int16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int32$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int32$$NEQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int32$$NEQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int32$$NEQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int32$$LT$panda$core$Int8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int32$$LT$panda$core$Int16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int32$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int32$$LT$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int32$$LT$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int32$$LT$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int32$$GT$panda$core$Int8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int32$$GT$panda$core$Int16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int32$$GT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int32$$GT$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int32$$GT$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int32$$GT$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int32$$GE$panda$core$Int8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int32$$GE$panda$core$Int16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int32$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int32$$GE$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int32$$GE$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int32$$GE$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int32$$LE$panda$core$Int8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int32$$LE$panda$core$Int16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int32$$LE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int32$$LE$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int32$$LE$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int32$$LE$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$abs$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Int32$abs$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$min$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$min$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$min$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$min$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$min$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$min$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$min$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$min$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$min$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int32$min$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$min$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int32$min$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$min$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$min$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$max$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int32$max$panda$core$Int8$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$max$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int32$max$panda$core$Int16$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$max$panda$core$UInt8$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int64 result = panda$core$Int32$max$panda$core$UInt8$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$max$panda$core$UInt16$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int64 result = panda$core$Int32$max$panda$core$UInt16$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$max$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$max$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$IDX$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$Int32$$IDX$panda$core$Int8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$IDX$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int32$$IDX$panda$core$Int16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$IDX$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int32$$IDX$panda$core$Int32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int32$$IDX$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int32$$IDX$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int32$$IDX$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$Int32$$IDX$panda$core$UInt64$R$panda$core$Bit(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int32$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Int32$convert$R$panda$core$Int8(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int32$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Int32$convert$R$panda$core$Int16(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int32$convert$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$Int32$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$Int32$convert$R$panda$core$UInt8(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$Int32$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$Int32$convert$R$panda$core$UInt16(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$Int32$convert$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$Int32$convert$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int32$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Int32$convert$R$panda$core$Real32(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int32$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$Int32$convert$R$panda$core$Real64(((panda$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Int32$cleanup$shim(panda$core$Object* p0) {
    panda$core$Int32$cleanup(((panda$core$Int32$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int32$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int32$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int32$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int32$_panda$collections$CollectionView, { panda$core$Int32$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[8]; } panda$core$Int32$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int32$_panda$core$Formattable, { panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int32$_panda$collections$ListView, { panda$core$Int32$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int32$_panda$collections$Key, { panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int32$_panda$core$Equatable, { panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int32$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int32$_panda$core$Comparable, { panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s1;
panda$core$Int32$class_type panda$core$Int32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int32$_panda$collections$Iterable, { panda$core$Int32$convert$R$panda$core$String$shim, panda$core$Value$cleanup, panda$core$Int32$$ADD$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$ADD$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int32$$ADD$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$SUB$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$SUB$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$SUB$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$SUB$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int32$$SUB$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$SUB$R$panda$core$Int32$shim, panda$core$Int32$$MUL$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$MUL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$MUL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$MUL$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int32$$MUL$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$INTDIV$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$INTDIV$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int32$$INTDIV$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$REM$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$REM$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$REM$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$REM$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int32$$REM$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int32$$REM$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$DIV$panda$core$Int8$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$Int16$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$Int32$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Int32$$DIV$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Int32$$BNOT$R$panda$core$Int32$shim, panda$core$Int32$$BAND$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$BAND$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$BAND$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int32$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$BOR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$BOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$BOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$BOR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int32$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$BXOR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$BXOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$BXOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$BXOR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int32$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$SHL$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$SHL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$SHL$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int32$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$SHR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$$SHR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$$SHR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$SHR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int32$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int32$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$abs$R$panda$core$Int32$shim, panda$core$Int32$min$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$min$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$min$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$min$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$min$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int32$min$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int32$min$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$max$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$max$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$max$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int32$max$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int32$max$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$IDX$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$IDX$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$IDX$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$IDX$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$IDX$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$IDX$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$IDX$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$Int32$get_count$R$panda$core$Int64$shim, panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$Int32$hash$R$panda$core$Int64$shim, panda$core$Int32$convert$R$panda$core$Int8$shim, panda$core$Int32$convert$R$panda$core$Int16$shim, panda$core$Int32$convert$R$panda$core$Int64$shim, panda$core$Int32$convert$R$panda$core$UInt8$shim, panda$core$Int32$convert$R$panda$core$UInt16$shim, panda$core$Int32$convert$R$panda$core$UInt32$shim, panda$core$Int32$convert$R$panda$core$UInt64$shim, panda$core$Int32$convert$R$panda$core$Real32$shim, panda$core$Int32$convert$R$panda$core$Real64$shim, panda$core$Int32$format$panda$core$String$R$panda$core$String$shim, panda$core$Int32$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int32$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int32$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int32$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int32$wrapper_panda$collections$CollectionView, { panda$core$Int32$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[8]; } panda$core$Int32$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int32$wrapper_panda$core$Formattable, { panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$join$R$panda$core$String, panda$collections$ListView$join$panda$core$String$R$panda$core$String, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int32$wrapper_panda$collections$ListView, { panda$core$Int32$hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int32$wrapper_panda$collections$Key, { panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int32$wrapper_panda$core$Equatable, { panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int32$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int32$wrapper_panda$core$Comparable, { panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s3;
panda$core$Int32$wrapperclass_type panda$core$Int32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int32$wrapper_panda$collections$Iterable, { panda$core$Int32$convert$R$panda$core$String$shim, panda$core$Value$cleanup} };
static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x70\x61\x6e\x64\x61", 11, -8642535931029163721, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -3871917921568880134, NULL };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };

void panda$core$Int32$init$builtin_int32(panda$core$Int32* self, int32_t p_value) {
    self->value = p_value;
}
void panda$core$Int32$init$panda$core$Int8(panda$core$Int32* self, panda$core$Int8 p_value) {
    self->value = ((int32_t) p_value.value);
}
void panda$core$Int32$init$panda$core$Int16(panda$core$Int32* self, panda$core$Int16 p_value) {
    self->value = ((int32_t) p_value.value);
}
void panda$core$Int32$init$panda$core$UInt8(panda$core$Int32* self, panda$core$UInt8 p_value) {
    self->value = ((int32_t) p_value.value);
}
void panda$core$Int32$init$panda$core$UInt16(panda$core$Int32* self, panda$core$UInt16 p_value) {
    self->value = ((int32_t) p_value.value);
}
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue4;
    panda$core$Int32 $tmp5;
    int32_t $tmp6 = self.value + ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp5, $tmp6);
    $returnValue4 = $tmp5;
    return $returnValue4;
}
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue8;
    panda$core$Int32 $tmp9;
    int32_t $tmp10 = self.value + ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp9, $tmp10);
    $returnValue8 = $tmp9;
    return $returnValue8;
}
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue12;
    panda$core$Int32 $tmp13;
    int32_t $tmp14 = self.value + p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp13, $tmp14);
    $returnValue12 = $tmp13;
    return $returnValue12;
}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue16;
    panda$core$Int64 $tmp17;
    int64_t $tmp18 = ((int64_t) self.value) + p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp17, $tmp18);
    $returnValue16 = $tmp17;
    return $returnValue16;
}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue20;
    panda$core$Int64 $tmp21;
    int64_t $tmp22 = ((int64_t) self.value) + ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp21, $tmp22);
    $returnValue20 = $tmp21;
    return $returnValue20;
}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue24;
    panda$core$Int64 $tmp25;
    int64_t $tmp26 = ((int64_t) self.value) + ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp25, $tmp26);
    $returnValue24 = $tmp25;
    return $returnValue24;
}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue28;
    panda$core$Int64 $tmp29;
    int64_t $tmp30 = ((int64_t) self.value) + ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp29, $tmp30);
    $returnValue28 = $tmp29;
    return $returnValue28;
}
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue32;
    panda$core$Int32 $tmp33;
    int32_t $tmp34 = self.value - ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp33, $tmp34);
    $returnValue32 = $tmp33;
    return $returnValue32;
}
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue36;
    panda$core$Int32 $tmp37;
    int32_t $tmp38 = self.value - ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp37, $tmp38);
    $returnValue36 = $tmp37;
    return $returnValue36;
}
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue40;
    panda$core$Int32 $tmp41;
    int32_t $tmp42 = self.value - p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp41, $tmp42);
    $returnValue40 = $tmp41;
    return $returnValue40;
}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue44;
    panda$core$Int64 $tmp45;
    int64_t $tmp46 = ((int64_t) self.value) - p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp45, $tmp46);
    $returnValue44 = $tmp45;
    return $returnValue44;
}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue48;
    panda$core$Int64 $tmp49;
    int64_t $tmp50 = ((int64_t) self.value) - ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp49, $tmp50);
    $returnValue48 = $tmp49;
    return $returnValue48;
}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue52;
    panda$core$Int64 $tmp53;
    int64_t $tmp54 = ((int64_t) self.value) - ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp53, $tmp54);
    $returnValue52 = $tmp53;
    return $returnValue52;
}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue56;
    panda$core$Int64 $tmp57;
    int64_t $tmp58 = ((int64_t) self.value) - ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp57, $tmp58);
    $returnValue56 = $tmp57;
    return $returnValue56;
}
panda$core$Int32 panda$core$Int32$$SUB$R$panda$core$Int32(panda$core$Int32 self) {
    panda$core$Int32 $returnValue60;
    panda$core$Int32 $tmp61;
    panda$core$Int32$init$builtin_int32(&$tmp61, -self.value);
    $returnValue60 = $tmp61;
    return $returnValue60;
}
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue64;
    panda$core$Int32 $tmp65;
    int32_t $tmp66 = self.value * ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp65, $tmp66);
    $returnValue64 = $tmp65;
    return $returnValue64;
}
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue68;
    panda$core$Int32 $tmp69;
    int32_t $tmp70 = self.value * ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp69, $tmp70);
    $returnValue68 = $tmp69;
    return $returnValue68;
}
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue72;
    panda$core$Int32 $tmp73;
    int32_t $tmp74 = self.value * p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp73, $tmp74);
    $returnValue72 = $tmp73;
    return $returnValue72;
}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue76;
    panda$core$Int64 $tmp77;
    int64_t $tmp78 = ((int64_t) self.value) * p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp77, $tmp78);
    $returnValue76 = $tmp77;
    return $returnValue76;
}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue80;
    panda$core$Int64 $tmp81;
    int64_t $tmp82 = ((int64_t) self.value) * ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp81, $tmp82);
    $returnValue80 = $tmp81;
    return $returnValue80;
}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue84;
    panda$core$Int64 $tmp85;
    int64_t $tmp86 = ((int64_t) self.value) * ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp85, $tmp86);
    $returnValue84 = $tmp85;
    return $returnValue84;
}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue88;
    panda$core$Int64 $tmp89;
    int64_t $tmp90 = ((int64_t) self.value) * ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp89, $tmp90);
    $returnValue88 = $tmp89;
    return $returnValue88;
}
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue92;
    panda$core$Int32 $tmp93;
    int32_t $tmp94 = self.value / ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp93, $tmp94);
    $returnValue92 = $tmp93;
    return $returnValue92;
}
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue96;
    panda$core$Int32 $tmp97;
    int32_t $tmp98 = self.value / ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp97, $tmp98);
    $returnValue96 = $tmp97;
    return $returnValue96;
}
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue100;
    panda$core$Int32 $tmp101;
    int32_t $tmp102 = self.value / p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp101, $tmp102);
    $returnValue100 = $tmp101;
    return $returnValue100;
}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue104;
    panda$core$Int64 $tmp105;
    int64_t $tmp106 = ((int64_t) self.value) / p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp105, $tmp106);
    $returnValue104 = $tmp105;
    return $returnValue104;
}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue108;
    panda$core$Int64 $tmp109;
    int64_t $tmp110 = ((int64_t) self.value) / ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp109, $tmp110);
    $returnValue108 = $tmp109;
    return $returnValue108;
}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue112;
    panda$core$Int64 $tmp113;
    int64_t $tmp114 = ((int64_t) self.value) / ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp113, $tmp114);
    $returnValue112 = $tmp113;
    return $returnValue112;
}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue116;
    panda$core$Int64 $tmp117;
    int64_t $tmp118 = ((int64_t) self.value) / ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp117, $tmp118);
    $returnValue116 = $tmp117;
    return $returnValue116;
}
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue120;
    panda$core$Int32 $tmp121;
    int32_t $tmp122 = self.value % ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp121, $tmp122);
    $returnValue120 = $tmp121;
    return $returnValue120;
}
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue124;
    panda$core$Int32 $tmp125;
    int32_t $tmp126 = self.value % ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp125, $tmp126);
    $returnValue124 = $tmp125;
    return $returnValue124;
}
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue128;
    panda$core$Int32 $tmp129;
    int32_t $tmp130 = self.value % p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp129, $tmp130);
    $returnValue128 = $tmp129;
    return $returnValue128;
}
panda$core$Int64 panda$core$Int32$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue132;
    panda$core$Int64 $tmp133;
    int64_t $tmp134 = ((int64_t) self.value) % p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp133, $tmp134);
    $returnValue132 = $tmp133;
    return $returnValue132;
}
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Int64 $returnValue136;
    panda$core$Int64 $tmp137;
    int64_t $tmp138 = ((int64_t) self.value) % ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp137, $tmp138);
    $returnValue136 = $tmp137;
    return $returnValue136;
}
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Int64 $returnValue140;
    panda$core$Int64 $tmp141;
    int64_t $tmp142 = ((int64_t) self.value) % ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp141, $tmp142);
    $returnValue140 = $tmp141;
    return $returnValue140;
}
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Int64 $returnValue144;
    panda$core$Int64 $tmp145;
    int64_t $tmp146 = ((int64_t) self.value) % ((int64_t) p_other.value);
    panda$core$Int64$init$builtin_int64(&$tmp145, $tmp146);
    $returnValue144 = $tmp145;
    return $returnValue144;
}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Real32 $returnValue148;
    panda$core$Real32 $tmp149;
    float $tmp150 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp149, $tmp150);
    $returnValue148 = $tmp149;
    return $returnValue148;
}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Real32 $returnValue152;
    panda$core$Real32 $tmp153;
    float $tmp154 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp153, $tmp154);
    $returnValue152 = $tmp153;
    return $returnValue152;
}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Real32 $returnValue156;
    panda$core$Real32 $tmp157;
    float $tmp158 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp157, $tmp158);
    $returnValue156 = $tmp157;
    return $returnValue156;
}
panda$core$Real64 panda$core$Int32$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Real64 $returnValue160;
    panda$core$Real64 $tmp161;
    double $tmp162 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp161, $tmp162);
    $returnValue160 = $tmp161;
    return $returnValue160;
}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Real32 $returnValue164;
    panda$core$Real32 $tmp165;
    float $tmp166 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp165, $tmp166);
    $returnValue164 = $tmp165;
    return $returnValue164;
}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Real32 $returnValue168;
    panda$core$Real32 $tmp169;
    float $tmp170 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp169, $tmp170);
    $returnValue168 = $tmp169;
    return $returnValue168;
}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Real32 $returnValue172;
    panda$core$Real32 $tmp173;
    float $tmp174 = ((float) self.value) / ((float) p_other.value);
    panda$core$Real32$init$builtin_float32(&$tmp173, $tmp174);
    $returnValue172 = $tmp173;
    return $returnValue172;
}
panda$core$Real64 panda$core$Int32$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    panda$core$Real64 $returnValue176;
    panda$core$Real64 $tmp177;
    double $tmp178 = ((double) self.value) / ((double) p_other.value);
    panda$core$Real64$init$builtin_float64(&$tmp177, $tmp178);
    $returnValue176 = $tmp177;
    return $returnValue176;
}
panda$core$Int32 panda$core$Int32$$BNOT$R$panda$core$Int32(panda$core$Int32 self) {
    panda$core$Int32 $returnValue180;
    panda$core$Int32 $tmp181;
    panda$core$Int32$init$builtin_int32(&$tmp181, ~self.value);
    $returnValue180 = $tmp181;
    return $returnValue180;
}
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue184;
    panda$core$Int32 $tmp185;
    int32_t $tmp186 = self.value & ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp185, $tmp186);
    $returnValue184 = $tmp185;
    return $returnValue184;
}
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue188;
    panda$core$Int32 $tmp189;
    int32_t $tmp190 = self.value & ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp189, $tmp190);
    $returnValue188 = $tmp189;
    return $returnValue188;
}
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue192;
    panda$core$Int32 $tmp193;
    int32_t $tmp194 = self.value & p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp193, $tmp194);
    $returnValue192 = $tmp193;
    return $returnValue192;
}
panda$core$Int64 panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue196;
    panda$core$Int64 $tmp197;
    int64_t $tmp198 = ((int64_t) self.value) & p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp197, $tmp198);
    $returnValue196 = $tmp197;
    return $returnValue196;
}
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue200;
    panda$core$UInt32 $tmp201;
    uint32_t $tmp202 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp201, $tmp202);
    $returnValue200 = $tmp201;
    return $returnValue200;
}
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue204;
    panda$core$UInt32 $tmp205;
    uint32_t $tmp206 = ((uint32_t) self.value) & ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp205, $tmp206);
    $returnValue204 = $tmp205;
    return $returnValue204;
}
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue208;
    panda$core$UInt32 $tmp209;
    uint32_t $tmp210 = ((uint32_t) self.value) & p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp209, $tmp210);
    $returnValue208 = $tmp209;
    return $returnValue208;
}
panda$core$UInt64 panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue212;
    panda$core$UInt64 $tmp213;
    uint64_t $tmp214 = ((uint64_t) self.value) & p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp213, $tmp214);
    $returnValue212 = $tmp213;
    return $returnValue212;
}
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue216;
    panda$core$Int32 $tmp217;
    int32_t $tmp218 = self.value | ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp217, $tmp218);
    $returnValue216 = $tmp217;
    return $returnValue216;
}
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue220;
    panda$core$Int32 $tmp221;
    int32_t $tmp222 = self.value | ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp221, $tmp222);
    $returnValue220 = $tmp221;
    return $returnValue220;
}
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue224;
    panda$core$Int32 $tmp225;
    int32_t $tmp226 = self.value | p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp225, $tmp226);
    $returnValue224 = $tmp225;
    return $returnValue224;
}
panda$core$Int64 panda$core$Int32$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue228;
    panda$core$Int64 $tmp229;
    int64_t $tmp230 = ((int64_t) self.value) | p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp229, $tmp230);
    $returnValue228 = $tmp229;
    return $returnValue228;
}
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue232;
    panda$core$UInt32 $tmp233;
    uint32_t $tmp234 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp233, $tmp234);
    $returnValue232 = $tmp233;
    return $returnValue232;
}
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue236;
    panda$core$UInt32 $tmp237;
    uint32_t $tmp238 = ((uint32_t) self.value) | ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp237, $tmp238);
    $returnValue236 = $tmp237;
    return $returnValue236;
}
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue240;
    panda$core$UInt32 $tmp241;
    uint32_t $tmp242 = ((uint32_t) self.value) | p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp241, $tmp242);
    $returnValue240 = $tmp241;
    return $returnValue240;
}
panda$core$UInt64 panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue244;
    panda$core$UInt64 $tmp245;
    uint64_t $tmp246 = ((uint64_t) self.value) | p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp245, $tmp246);
    $returnValue244 = $tmp245;
    return $returnValue244;
}
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue248;
    panda$core$Int32 $tmp249;
    int32_t $tmp250 = self.value ^ ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp249, $tmp250);
    $returnValue248 = $tmp249;
    return $returnValue248;
}
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue252;
    panda$core$Int32 $tmp253;
    int32_t $tmp254 = self.value ^ ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp253, $tmp254);
    $returnValue252 = $tmp253;
    return $returnValue252;
}
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue256;
    panda$core$Int32 $tmp257;
    int32_t $tmp258 = self.value ^ p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp257, $tmp258);
    $returnValue256 = $tmp257;
    return $returnValue256;
}
panda$core$Int64 panda$core$Int32$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue260;
    panda$core$Int64 $tmp261;
    int64_t $tmp262 = ((int64_t) self.value) ^ p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp261, $tmp262);
    $returnValue260 = $tmp261;
    return $returnValue260;
}
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue264;
    panda$core$UInt32 $tmp265;
    uint32_t $tmp266 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp265, $tmp266);
    $returnValue264 = $tmp265;
    return $returnValue264;
}
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue268;
    panda$core$UInt32 $tmp269;
    uint32_t $tmp270 = ((uint32_t) self.value) ^ ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp269, $tmp270);
    $returnValue268 = $tmp269;
    return $returnValue268;
}
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue272;
    panda$core$UInt32 $tmp273;
    uint32_t $tmp274 = ((uint32_t) self.value) ^ p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp273, $tmp274);
    $returnValue272 = $tmp273;
    return $returnValue272;
}
panda$core$UInt64 panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue276;
    panda$core$UInt64 $tmp277;
    uint64_t $tmp278 = ((uint64_t) self.value) ^ p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp277, $tmp278);
    $returnValue276 = $tmp277;
    return $returnValue276;
}
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue280;
    panda$core$Int32 $tmp281;
    int32_t $tmp282 = self.value << ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp281, $tmp282);
    $returnValue280 = $tmp281;
    return $returnValue280;
}
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue284;
    panda$core$Int32 $tmp285;
    int32_t $tmp286 = self.value << ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp285, $tmp286);
    $returnValue284 = $tmp285;
    return $returnValue284;
}
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue288;
    panda$core$Int32 $tmp289;
    int32_t $tmp290 = self.value << p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp289, $tmp290);
    $returnValue288 = $tmp289;
    return $returnValue288;
}
panda$core$Int64 panda$core$Int32$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue292;
    panda$core$Int64 $tmp293;
    int64_t $tmp294 = ((int64_t) self.value) << p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp293, $tmp294);
    $returnValue292 = $tmp293;
    return $returnValue292;
}
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue296;
    panda$core$UInt32 $tmp297;
    uint32_t $tmp298 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp297, $tmp298);
    $returnValue296 = $tmp297;
    return $returnValue296;
}
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue300;
    panda$core$UInt32 $tmp301;
    uint32_t $tmp302 = ((uint32_t) self.value) << ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp301, $tmp302);
    $returnValue300 = $tmp301;
    return $returnValue300;
}
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue304;
    panda$core$UInt32 $tmp305;
    uint32_t $tmp306 = ((uint32_t) self.value) << p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp305, $tmp306);
    $returnValue304 = $tmp305;
    return $returnValue304;
}
panda$core$UInt64 panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue308;
    panda$core$UInt64 $tmp309;
    uint64_t $tmp310 = ((uint64_t) self.value) << p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp309, $tmp310);
    $returnValue308 = $tmp309;
    return $returnValue308;
}
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Int32 $returnValue312;
    panda$core$Int32 $tmp313;
    int32_t $tmp314 = self.value >> ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp313, $tmp314);
    $returnValue312 = $tmp313;
    return $returnValue312;
}
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Int32 $returnValue316;
    panda$core$Int32 $tmp317;
    int32_t $tmp318 = self.value >> ((int32_t) p_other.value);
    panda$core$Int32$init$builtin_int32(&$tmp317, $tmp318);
    $returnValue316 = $tmp317;
    return $returnValue316;
}
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Int32 $returnValue320;
    panda$core$Int32 $tmp321;
    int32_t $tmp322 = self.value >> p_other.value;
    panda$core$Int32$init$builtin_int32(&$tmp321, $tmp322);
    $returnValue320 = $tmp321;
    return $returnValue320;
}
panda$core$Int64 panda$core$Int32$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Int64 $returnValue324;
    panda$core$Int64 $tmp325;
    int64_t $tmp326 = ((int64_t) self.value) >> p_other.value;
    panda$core$Int64$init$builtin_int64(&$tmp325, $tmp326);
    $returnValue324 = $tmp325;
    return $returnValue324;
}
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$UInt32 $returnValue328;
    panda$core$UInt32 $tmp329;
    uint32_t $tmp330 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp329, $tmp330);
    $returnValue328 = $tmp329;
    return $returnValue328;
}
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$UInt32 $returnValue332;
    panda$core$UInt32 $tmp333;
    uint32_t $tmp334 = ((uint32_t) self.value) >> ((uint32_t) p_other.value);
    panda$core$UInt32$init$builtin_uint32(&$tmp333, $tmp334);
    $returnValue332 = $tmp333;
    return $returnValue332;
}
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$UInt32 $returnValue336;
    panda$core$UInt32 $tmp337;
    uint32_t $tmp338 = ((uint32_t) self.value) >> p_other.value;
    panda$core$UInt32$init$builtin_uint32(&$tmp337, $tmp338);
    $returnValue336 = $tmp337;
    return $returnValue336;
}
panda$core$UInt64 panda$core$Int32$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 self, panda$core$UInt64 p_other) {
    panda$core$UInt64 $returnValue340;
    panda$core$UInt64 $tmp341;
    uint64_t $tmp342 = ((uint64_t) self.value) >> p_other.value;
    panda$core$UInt64$init$builtin_uint64(&$tmp341, $tmp342);
    $returnValue340 = $tmp341;
    return $returnValue340;
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue344;
    panda$core$Bit $tmp345;
    bool $tmp346 = self.value == ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp345, $tmp346);
    $returnValue344 = $tmp345;
    return $returnValue344;
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue348;
    panda$core$Bit $tmp349;
    bool $tmp350 = self.value == ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp349, $tmp350);
    $returnValue348 = $tmp349;
    return $returnValue348;
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue352;
    panda$core$Bit $tmp353;
    bool $tmp354 = self.value == p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp353, $tmp354);
    $returnValue352 = $tmp353;
    return $returnValue352;
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue356;
    panda$core$Bit $tmp357;
    bool $tmp358 = ((int64_t) self.value) == p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp357, $tmp358);
    $returnValue356 = $tmp357;
    return $returnValue356;
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue360;
    panda$core$Bit $tmp361;
    bool $tmp362 = ((int64_t) self.value) == ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp361, $tmp362);
    $returnValue360 = $tmp361;
    return $returnValue360;
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue364;
    panda$core$Bit $tmp365;
    bool $tmp366 = ((int64_t) self.value) == ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp365, $tmp366);
    $returnValue364 = $tmp365;
    return $returnValue364;
}
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue368;
    panda$core$Bit $tmp369;
    bool $tmp370 = ((int64_t) self.value) == ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp369, $tmp370);
    $returnValue368 = $tmp369;
    return $returnValue368;
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue372;
    panda$core$Bit $tmp373;
    bool $tmp374 = self.value != ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp373, $tmp374);
    $returnValue372 = $tmp373;
    return $returnValue372;
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue376;
    panda$core$Bit $tmp377;
    bool $tmp378 = self.value != ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp377, $tmp378);
    $returnValue376 = $tmp377;
    return $returnValue376;
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue380;
    panda$core$Bit $tmp381;
    bool $tmp382 = self.value != p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp381, $tmp382);
    $returnValue380 = $tmp381;
    return $returnValue380;
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue384;
    panda$core$Bit $tmp385;
    bool $tmp386 = ((int64_t) self.value) != p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp385, $tmp386);
    $returnValue384 = $tmp385;
    return $returnValue384;
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue388;
    panda$core$Bit $tmp389;
    bool $tmp390 = ((int64_t) self.value) != ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp389, $tmp390);
    $returnValue388 = $tmp389;
    return $returnValue388;
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue392;
    panda$core$Bit $tmp393;
    bool $tmp394 = ((int64_t) self.value) != ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp393, $tmp394);
    $returnValue392 = $tmp393;
    return $returnValue392;
}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue396;
    panda$core$Bit $tmp397;
    bool $tmp398 = ((int64_t) self.value) != ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp397, $tmp398);
    $returnValue396 = $tmp397;
    return $returnValue396;
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue400;
    panda$core$Bit $tmp401;
    bool $tmp402 = self.value < ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp401, $tmp402);
    $returnValue400 = $tmp401;
    return $returnValue400;
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue404;
    panda$core$Bit $tmp405;
    bool $tmp406 = self.value < ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp405, $tmp406);
    $returnValue404 = $tmp405;
    return $returnValue404;
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue408;
    panda$core$Bit $tmp409;
    bool $tmp410 = self.value < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp409, $tmp410);
    $returnValue408 = $tmp409;
    return $returnValue408;
}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue412;
    panda$core$Bit $tmp413;
    bool $tmp414 = ((int64_t) self.value) < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp413, $tmp414);
    $returnValue412 = $tmp413;
    return $returnValue412;
}
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue416;
    panda$core$Bit $tmp417;
    bool $tmp418 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp417, $tmp418);
    $returnValue416 = $tmp417;
    return $returnValue416;
}
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue420;
    panda$core$Bit $tmp421;
    bool $tmp422 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp421, $tmp422);
    $returnValue420 = $tmp421;
    return $returnValue420;
}
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue424;
    panda$core$Bit $tmp425;
    bool $tmp426 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp425, $tmp426);
    $returnValue424 = $tmp425;
    return $returnValue424;
}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue428;
    panda$core$Bit $tmp429;
    bool $tmp430 = self.value > ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp429, $tmp430);
    $returnValue428 = $tmp429;
    return $returnValue428;
}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue432;
    panda$core$Bit $tmp433;
    bool $tmp434 = self.value > ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp433, $tmp434);
    $returnValue432 = $tmp433;
    return $returnValue432;
}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue436;
    panda$core$Bit $tmp437;
    bool $tmp438 = self.value > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp437, $tmp438);
    $returnValue436 = $tmp437;
    return $returnValue436;
}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue440;
    panda$core$Bit $tmp441;
    bool $tmp442 = ((int64_t) self.value) > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp441, $tmp442);
    $returnValue440 = $tmp441;
    return $returnValue440;
}
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue444;
    panda$core$Bit $tmp445;
    bool $tmp446 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp445, $tmp446);
    $returnValue444 = $tmp445;
    return $returnValue444;
}
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue448;
    panda$core$Bit $tmp449;
    bool $tmp450 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp449, $tmp450);
    $returnValue448 = $tmp449;
    return $returnValue448;
}
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue452;
    panda$core$Bit $tmp453;
    bool $tmp454 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp453, $tmp454);
    $returnValue452 = $tmp453;
    return $returnValue452;
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue456;
    panda$core$Bit $tmp457;
    bool $tmp458 = self.value >= ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp457, $tmp458);
    $returnValue456 = $tmp457;
    return $returnValue456;
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue460;
    panda$core$Bit $tmp461;
    bool $tmp462 = self.value >= ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp461, $tmp462);
    $returnValue460 = $tmp461;
    return $returnValue460;
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue464;
    panda$core$Bit $tmp465;
    bool $tmp466 = self.value >= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp465, $tmp466);
    $returnValue464 = $tmp465;
    return $returnValue464;
}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue468;
    panda$core$Bit $tmp469;
    bool $tmp470 = ((int64_t) self.value) >= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp469, $tmp470);
    $returnValue468 = $tmp469;
    return $returnValue468;
}
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue472;
    panda$core$Bit $tmp473;
    bool $tmp474 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp473, $tmp474);
    $returnValue472 = $tmp473;
    return $returnValue472;
}
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue476;
    panda$core$Bit $tmp477;
    bool $tmp478 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp477, $tmp478);
    $returnValue476 = $tmp477;
    return $returnValue476;
}
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue480;
    panda$core$Bit $tmp481;
    bool $tmp482 = ((int64_t) self.value) >= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp481, $tmp482);
    $returnValue480 = $tmp481;
    return $returnValue480;
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Bit $returnValue484;
    panda$core$Bit $tmp485;
    bool $tmp486 = self.value <= ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp485, $tmp486);
    $returnValue484 = $tmp485;
    return $returnValue484;
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Bit $returnValue488;
    panda$core$Bit $tmp489;
    bool $tmp490 = self.value <= ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp489, $tmp490);
    $returnValue488 = $tmp489;
    return $returnValue488;
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Bit $returnValue492;
    panda$core$Bit $tmp493;
    bool $tmp494 = self.value <= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp493, $tmp494);
    $returnValue492 = $tmp493;
    return $returnValue492;
}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Bit $returnValue496;
    panda$core$Bit $tmp497;
    bool $tmp498 = ((int64_t) self.value) <= p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp497, $tmp498);
    $returnValue496 = $tmp497;
    return $returnValue496;
}
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $returnValue500;
    panda$core$Bit $tmp501;
    bool $tmp502 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp501, $tmp502);
    $returnValue500 = $tmp501;
    return $returnValue500;
}
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $returnValue504;
    panda$core$Bit $tmp505;
    bool $tmp506 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp505, $tmp506);
    $returnValue504 = $tmp505;
    return $returnValue504;
}
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $returnValue508;
    panda$core$Bit $tmp509;
    bool $tmp510 = ((int64_t) self.value) <= ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp509, $tmp510);
    $returnValue508 = $tmp509;
    return $returnValue508;
}
panda$core$Int32 panda$core$Int32$abs$R$panda$core$Int32(panda$core$Int32 self) {
    panda$core$Int32 $tmp512;
    panda$core$Int32 $returnValue514;
    panda$core$Int32$init$builtin_int32(&$tmp512, 0);
    panda$core$Bit $tmp513 = panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(self, $tmp512);
    if ($tmp513.value) {
    {
        panda$core$Int32 $tmp515 = panda$core$Int32$$SUB$R$panda$core$Int32(self);
        $returnValue514 = $tmp515;
        return $returnValue514;
    }
    }
    $returnValue514 = self;
    return $returnValue514;
}
panda$core$Int32 panda$core$Int32$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Bit $tmp518;
    panda$core$Int32 $returnValue520;
    panda$core$Int32 $tmp521;
    panda$core$Int32 $tmp523;
    bool $tmp519 = self.value < ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp518, $tmp519);
    if ($tmp518.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp521, self.value);
        $returnValue520 = $tmp521;
        return $returnValue520;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp523, ((int32_t) p_other.value));
    $returnValue520 = $tmp523;
    return $returnValue520;
}
panda$core$Int32 panda$core$Int32$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Bit $tmp525;
    panda$core$Int32 $returnValue527;
    panda$core$Int32 $tmp528;
    panda$core$Int32 $tmp530;
    bool $tmp526 = self.value < ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp525, $tmp526);
    if ($tmp525.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp528, self.value);
        $returnValue527 = $tmp528;
        return $returnValue527;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp530, ((int32_t) p_other.value));
    $returnValue527 = $tmp530;
    return $returnValue527;
}
panda$core$Int32 panda$core$Int32$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Bit $tmp532;
    panda$core$Int32 $returnValue534;
    panda$core$Int32 $tmp535;
    panda$core$Int32 $tmp537;
    bool $tmp533 = self.value < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp532, $tmp533);
    if ($tmp532.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp535, self.value);
        $returnValue534 = $tmp535;
        return $returnValue534;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp537, p_other.value);
    $returnValue534 = $tmp537;
    return $returnValue534;
}
panda$core$Int64 panda$core$Int32$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Bit $tmp539;
    panda$core$Int64 $returnValue541;
    panda$core$Int64 $tmp542;
    panda$core$Int64 $tmp544;
    bool $tmp540 = ((int64_t) self.value) < p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp539, $tmp540);
    if ($tmp539.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp542, ((int64_t) self.value));
        $returnValue541 = $tmp542;
        return $returnValue541;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp544, p_other.value);
    $returnValue541 = $tmp544;
    return $returnValue541;
}
panda$core$Int64 panda$core$Int32$min$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $tmp546;
    panda$core$Int64 $returnValue548;
    panda$core$Int64 $tmp549;
    panda$core$Int64 $tmp551;
    bool $tmp547 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp546, $tmp547);
    if ($tmp546.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp549, ((int64_t) self.value));
        $returnValue548 = $tmp549;
        return $returnValue548;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp551, ((int64_t) p_other.value));
    $returnValue548 = $tmp551;
    return $returnValue548;
}
panda$core$Int64 panda$core$Int32$min$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $tmp553;
    panda$core$Int64 $returnValue555;
    panda$core$Int64 $tmp556;
    panda$core$Int64 $tmp558;
    bool $tmp554 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp553, $tmp554);
    if ($tmp553.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp556, ((int64_t) self.value));
        $returnValue555 = $tmp556;
        return $returnValue555;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp558, ((int64_t) p_other.value));
    $returnValue555 = $tmp558;
    return $returnValue555;
}
panda$core$Int64 panda$core$Int32$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $tmp560;
    panda$core$Int64 $returnValue562;
    panda$core$Int64 $tmp563;
    panda$core$Int64 $tmp565;
    bool $tmp561 = ((int64_t) self.value) < ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp560, $tmp561);
    if ($tmp560.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp563, ((int64_t) self.value));
        $returnValue562 = $tmp563;
        return $returnValue562;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp565, ((int64_t) p_other.value));
    $returnValue562 = $tmp565;
    return $returnValue562;
}
panda$core$Int32 panda$core$Int32$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int8 p_other) {
    panda$core$Bit $tmp567;
    panda$core$Int32 $returnValue569;
    panda$core$Int32 $tmp570;
    panda$core$Int32 $tmp572;
    bool $tmp568 = self.value > ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp567, $tmp568);
    if ($tmp567.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp570, self.value);
        $returnValue569 = $tmp570;
        return $returnValue569;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp572, ((int32_t) p_other.value));
    $returnValue569 = $tmp572;
    return $returnValue569;
}
panda$core$Int32 panda$core$Int32$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int16 p_other) {
    panda$core$Bit $tmp574;
    panda$core$Int32 $returnValue576;
    panda$core$Int32 $tmp577;
    panda$core$Int32 $tmp579;
    bool $tmp575 = self.value > ((int32_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp574, $tmp575);
    if ($tmp574.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp577, self.value);
        $returnValue576 = $tmp577;
        return $returnValue576;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp579, ((int32_t) p_other.value));
    $returnValue576 = $tmp579;
    return $returnValue576;
}
panda$core$Int32 panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 self, panda$core$Int32 p_other) {
    panda$core$Bit $tmp581;
    panda$core$Int32 $returnValue583;
    panda$core$Int32 $tmp584;
    panda$core$Int32 $tmp586;
    bool $tmp582 = self.value > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp581, $tmp582);
    if ($tmp581.value) {
    {
        panda$core$Int32$init$builtin_int32(&$tmp584, self.value);
        $returnValue583 = $tmp584;
        return $returnValue583;
    }
    }
    panda$core$Int32$init$builtin_int32(&$tmp586, p_other.value);
    $returnValue583 = $tmp586;
    return $returnValue583;
}
panda$core$Int64 panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 self, panda$core$Int64 p_other) {
    panda$core$Bit $tmp588;
    panda$core$Int64 $returnValue590;
    panda$core$Int64 $tmp591;
    panda$core$Int64 $tmp593;
    bool $tmp589 = ((int64_t) self.value) > p_other.value;
    panda$core$Bit$init$builtin_bit(&$tmp588, $tmp589);
    if ($tmp588.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp591, ((int64_t) self.value));
        $returnValue590 = $tmp591;
        return $returnValue590;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp593, p_other.value);
    $returnValue590 = $tmp593;
    return $returnValue590;
}
panda$core$Int64 panda$core$Int32$max$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt8 p_other) {
    panda$core$Bit $tmp595;
    panda$core$Int64 $returnValue597;
    panda$core$Int64 $tmp598;
    panda$core$Int64 $tmp600;
    bool $tmp596 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp595, $tmp596);
    if ($tmp595.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp598, ((int64_t) self.value));
        $returnValue597 = $tmp598;
        return $returnValue597;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp600, ((int64_t) p_other.value));
    $returnValue597 = $tmp600;
    return $returnValue597;
}
panda$core$Int64 panda$core$Int32$max$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt16 p_other) {
    panda$core$Bit $tmp602;
    panda$core$Int64 $returnValue604;
    panda$core$Int64 $tmp605;
    panda$core$Int64 $tmp607;
    bool $tmp603 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp602, $tmp603);
    if ($tmp602.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp605, ((int64_t) self.value));
        $returnValue604 = $tmp605;
        return $returnValue604;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp607, ((int64_t) p_other.value));
    $returnValue604 = $tmp607;
    return $returnValue604;
}
panda$core$Int64 panda$core$Int32$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 self, panda$core$UInt32 p_other) {
    panda$core$Bit $tmp609;
    panda$core$Int64 $returnValue611;
    panda$core$Int64 $tmp612;
    panda$core$Int64 $tmp614;
    bool $tmp610 = ((int64_t) self.value) > ((int64_t) p_other.value);
    panda$core$Bit$init$builtin_bit(&$tmp609, $tmp610);
    if ($tmp609.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp612, ((int64_t) self.value));
        $returnValue611 = $tmp612;
        return $returnValue611;
    }
    }
    panda$core$Int64$init$builtin_int64(&$tmp614, ((int64_t) p_other.value));
    $returnValue611 = $tmp614;
    return $returnValue611;
}
panda$collections$ListView* panda$core$Int32$$IDX$panda$core$Range$LTpanda$core$Int32$GT$R$panda$collections$ListView$LTpanda$core$Int32$GT(panda$core$Range$LTpanda$core$Int32$GT p_range) {
    panda$collections$ListView* $returnValue616;
    panda$collections$ListView* $tmp617;
    org$pandalanguage$panda$Int32List* $tmp618;
    panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp620;
    panda$core$Int32 $tmp621;
    org$pandalanguage$panda$Int32List* $tmp619 = (org$pandalanguage$panda$Int32List*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$panda$Int32List$class);
    panda$core$Int32$init$builtin_int32(&$tmp621, 1);
    panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT$init$panda$core$Int32$panda$core$Int32$panda$core$Int32$panda$core$Bit(&$tmp620, p_range.min, p_range.max, $tmp621, p_range.inclusive);
    org$pandalanguage$panda$Int32List$init$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT($tmp619, $tmp620);
    $tmp618 = $tmp619;
    $tmp617 = ((panda$collections$ListView*) $tmp618);
    $returnValue616 = $tmp617;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
    return $returnValue616;
}
panda$collections$ListView* panda$core$Int32$$IDX$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT$R$panda$collections$ListView$LTpanda$core$Int32$GT(panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT p_range) {
    panda$collections$ListView* $returnValue623;
    panda$collections$ListView* $tmp624;
    org$pandalanguage$panda$Int32List* $tmp625;
    org$pandalanguage$panda$Int32List* $tmp626 = (org$pandalanguage$panda$Int32List*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$panda$Int32List$class);
    org$pandalanguage$panda$Int32List$init$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT($tmp626, p_range);
    $tmp625 = $tmp626;
    $tmp624 = ((panda$collections$ListView*) $tmp625);
    $returnValue623 = $tmp624;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
    return $returnValue623;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int8 p_index) {
    panda$core$Bit $returnValue628;
    panda$core$Int8 $tmp629;
    panda$core$Int32 $tmp632;
    panda$core$Int8$init$builtin_int8(&$tmp629, 1);
    panda$core$Int32 $tmp630 = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32($tmp629, p_index);
    panda$core$Int32 $tmp631 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp630);
    panda$core$Int32$init$builtin_int32(&$tmp632, 0);
    panda$core$Bit $tmp633 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp631, $tmp632);
    $returnValue628 = $tmp633;
    return $returnValue628;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int16 p_index) {
    panda$core$Bit $returnValue635;
    panda$core$Int16 $tmp636;
    panda$core$Int32 $tmp639;
    panda$core$Int16$init$builtin_int16(&$tmp636, 1);
    panda$core$Int32 $tmp637 = panda$core$Int16$$SHL$panda$core$Int16$R$panda$core$Int32($tmp636, p_index);
    panda$core$Int32 $tmp638 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp637);
    panda$core$Int32$init$builtin_int32(&$tmp639, 0);
    panda$core$Bit $tmp640 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp638, $tmp639);
    $returnValue635 = $tmp640;
    return $returnValue635;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int32 p_index) {
    panda$core$Bit $returnValue642;
    panda$core$Int32 $tmp643;
    panda$core$Int32 $tmp646;
    panda$core$Int32$init$builtin_int32(&$tmp643, 1);
    panda$core$Int32 $tmp644 = panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32($tmp643, p_index);
    panda$core$Int32 $tmp645 = panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(self, $tmp644);
    panda$core$Int32$init$builtin_int32(&$tmp646, 0);
    panda$core$Bit $tmp647 = panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit($tmp645, $tmp646);
    $returnValue642 = $tmp647;
    return $returnValue642;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 self, panda$core$Int64 p_index) {
    panda$core$Int64 $tmp650;
    panda$core$Bit $returnValue660;
    panda$core$Int64 $tmp661;
    panda$core$Int64 $tmp664;
    panda$core$Int64$init$builtin_int64(&$tmp650, 0);
    panda$core$Bit $tmp651 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(p_index, $tmp650);
    bool $tmp649 = $tmp651.value;
    if (!$tmp649) goto $l652;
    panda$core$Int64 $tmp653 = panda$core$Int32$get_count$R$panda$core$Int64(self);
    panda$core$Bit $tmp654 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(p_index, $tmp653);
    $tmp649 = $tmp654.value;
    $l652:;
    panda$core$Bit $tmp655 = { $tmp649 };
    if ($tmp655.value) goto $l656; else goto $l657;
    $l657:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s658, (panda$core$Int64) { 683 }, &$s659);
    abort();
    $l656:;
    panda$core$Int64$init$builtin_int64(&$tmp661, 1);
    panda$core$Int64 $tmp662 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp661, p_index);
    panda$core$Int64 $tmp663 = panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64(self, $tmp662);
    panda$core$Int64$init$builtin_int64(&$tmp664, 0);
    panda$core$Bit $tmp665 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp663, $tmp664);
    $returnValue660 = $tmp665;
    return $returnValue660;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt8 p_index) {
    panda$core$Bit $returnValue667;
    panda$core$UInt8 $tmp668;
    panda$core$UInt32 $tmp671;
    panda$core$UInt8$init$builtin_uint8(&$tmp668, 1);
    panda$core$UInt32 $tmp669 = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32($tmp668, p_index);
    panda$core$UInt32 $tmp670 = panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp669);
    panda$core$UInt32$init$builtin_uint32(&$tmp671, 0);
    panda$core$Bit $tmp672 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp670, $tmp671);
    $returnValue667 = $tmp672;
    return $returnValue667;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt16 p_index) {
    panda$core$Bit $returnValue674;
    panda$core$UInt16 $tmp675;
    panda$core$UInt32 $tmp678;
    panda$core$UInt16$init$builtin_uint16(&$tmp675, 1);
    panda$core$UInt32 $tmp676 = panda$core$UInt16$$SHL$panda$core$UInt16$R$panda$core$UInt32($tmp675, p_index);
    panda$core$UInt32 $tmp677 = panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp676);
    panda$core$UInt32$init$builtin_uint32(&$tmp678, 0);
    panda$core$Bit $tmp679 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp677, $tmp678);
    $returnValue674 = $tmp679;
    return $returnValue674;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt32 p_index) {
    panda$core$Bit $returnValue681;
    panda$core$UInt32 $tmp682;
    panda$core$UInt32 $tmp685;
    panda$core$UInt32$init$builtin_uint32(&$tmp682, 1);
    panda$core$UInt32 $tmp683 = panda$core$UInt32$$SHL$panda$core$UInt32$R$panda$core$UInt32($tmp682, p_index);
    panda$core$UInt32 $tmp684 = panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(self, $tmp683);
    panda$core$UInt32$init$builtin_uint32(&$tmp685, 0);
    panda$core$Bit $tmp686 = panda$core$UInt32$$NEQ$panda$core$UInt32$R$panda$core$Bit($tmp684, $tmp685);
    $returnValue681 = $tmp686;
    return $returnValue681;
}
panda$core$Bit panda$core$Int32$$IDX$panda$core$UInt64$R$panda$core$Bit(panda$core$Int32 self, panda$core$UInt64 p_index) {
    panda$core$Bit $returnValue688;
    panda$core$UInt64 $tmp689;
    panda$core$UInt64 $tmp692;
    panda$core$UInt64$init$builtin_uint64(&$tmp689, 1);
    panda$core$UInt64 $tmp690 = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64($tmp689, p_index);
    panda$core$UInt64 $tmp691 = panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64(self, $tmp690);
    panda$core$UInt64$init$builtin_uint64(&$tmp692, 0);
    panda$core$Bit $tmp693 = panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit($tmp691, $tmp692);
    $returnValue688 = $tmp693;
    return $returnValue688;
}
panda$core$Int64 panda$core$Int32$get_count$R$panda$core$Int64(panda$core$Int32 self) {
    panda$core$Int64 $returnValue695;
    panda$core$Int64 $tmp696;
    panda$core$Int64$init$builtin_int64(&$tmp696, 32);
    $returnValue695 = $tmp696;
    return $returnValue695;
}
panda$collections$Iterator* panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$Int32 self) {
    panda$collections$Iterator* $returnValue698;
    panda$collections$Iterator* $tmp699;
    org$pandalanguage$panda$IntBitIterator* $tmp700;
    panda$core$UInt64 $tmp703;
    org$pandalanguage$panda$IntBitIterator* $tmp701 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
    panda$core$UInt64 $tmp702 = panda$core$Int32$convert$R$panda$core$UInt64(self);
    panda$core$UInt64$init$builtin_uint64(&$tmp703, 2147483648);
    org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp701, $tmp702, $tmp703);
    $tmp700 = $tmp701;
    $tmp699 = ((panda$collections$Iterator*) $tmp700);
    $returnValue698 = $tmp699;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp699));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp700));
    return $returnValue698;
}
panda$core$Int64 panda$core$Int32$hash$R$panda$core$Int64(panda$core$Int32 self) {
    panda$core$Int64 $returnValue705;
    panda$core$Int64 $tmp706;
    panda$core$Int64$init$builtin_int64(&$tmp706, ((int64_t) self.value));
    $returnValue705 = $tmp706;
    return $returnValue705;
}
panda$core$Int32$nullable panda$core$Int32$parse$panda$core$String$panda$core$Int64$R$panda$core$Int32$Q(panda$core$String* p_str, panda$core$Int64 p_radix) {
    panda$core$UInt64$nullable abs710;
    panda$core$String* $tmp711;
    panda$core$Range$LTpanda$core$Int64$Q$GT $tmp712;
    panda$core$Int64 $tmp713;
    panda$core$Bit $tmp714;
    panda$core$Int32$nullable $returnValue717;
    panda$core$UInt64$nullable result722;
    panda$core$Bit $tmp709 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(p_str, &$s708);
    if ($tmp709.value) {
    {
        panda$core$Int64$init$builtin_int64(&$tmp713, 1);
        panda$core$Bit$init$builtin_bit(&$tmp714, false);
        panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp712, ((panda$core$Int64$nullable) { $tmp713, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp714);
        panda$core$String* $tmp715 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(p_str, $tmp712);
        $tmp711 = $tmp715;
        panda$core$UInt64$nullable $tmp716 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp711, p_radix);
        abs710 = $tmp716;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp711));
        if (((panda$core$Bit) { !abs710.nonnull }).value) {
        {
            $returnValue717 = ((panda$core$Int32$nullable) { .nonnull = false });
            return $returnValue717;
        }
        }
        panda$core$Int32 $tmp719 = panda$core$UInt64$convert$R$panda$core$Int32(((panda$core$UInt64) abs710.value));
        panda$core$Int32 $tmp720 = panda$core$Int32$$SUB$R$panda$core$Int32($tmp719);
        $returnValue717 = ((panda$core$Int32$nullable) { $tmp720, true });
        return $returnValue717;
    }
    }
    else {
    {
        panda$core$UInt64$nullable $tmp723 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(p_str, p_radix);
        result722 = $tmp723;
        if (((panda$core$Bit) { !result722.nonnull }).value) {
        {
            $returnValue717 = ((panda$core$Int32$nullable) { .nonnull = false });
            return $returnValue717;
        }
        }
        panda$core$Int32 $tmp725 = panda$core$UInt64$convert$R$panda$core$Int32(((panda$core$UInt64) result722.value));
        $returnValue717 = ((panda$core$Int32$nullable) { $tmp725, true });
        return $returnValue717;
    }
    }
    abort();
}
panda$core$Int8 panda$core$Int32$convert$R$panda$core$Int8(panda$core$Int32 self) {
    panda$core$Int8 $returnValue727;
    panda$core$Int8 $tmp728;
    panda$core$Int8$init$builtin_int8(&$tmp728, ((int8_t) self.value));
    $returnValue727 = $tmp728;
    return $returnValue727;
}
panda$core$Int16 panda$core$Int32$convert$R$panda$core$Int16(panda$core$Int32 self) {
    panda$core$Int16 $returnValue730;
    panda$core$Int16 $tmp731;
    panda$core$Int16$init$builtin_int16(&$tmp731, ((int16_t) self.value));
    $returnValue730 = $tmp731;
    return $returnValue730;
}
panda$core$Int64 panda$core$Int32$convert$R$panda$core$Int64(panda$core$Int32 self) {
    panda$core$Int64 $returnValue733;
    panda$core$Int64 $tmp734;
    panda$core$Int64$init$builtin_int64(&$tmp734, ((int64_t) self.value));
    $returnValue733 = $tmp734;
    return $returnValue733;
}
panda$core$UInt8 panda$core$Int32$convert$R$panda$core$UInt8(panda$core$Int32 self) {
    panda$core$UInt8 $returnValue736;
    panda$core$UInt8 $tmp737;
    panda$core$UInt8$init$builtin_uint8(&$tmp737, ((uint8_t) self.value));
    $returnValue736 = $tmp737;
    return $returnValue736;
}
panda$core$UInt16 panda$core$Int32$convert$R$panda$core$UInt16(panda$core$Int32 self) {
    panda$core$UInt16 $returnValue739;
    panda$core$UInt16 $tmp740;
    panda$core$UInt16$init$builtin_uint16(&$tmp740, ((uint16_t) self.value));
    $returnValue739 = $tmp740;
    return $returnValue739;
}
panda$core$UInt32 panda$core$Int32$convert$R$panda$core$UInt32(panda$core$Int32 self) {
    panda$core$UInt32 $returnValue742;
    panda$core$UInt32 $tmp743;
    panda$core$UInt32$init$builtin_uint32(&$tmp743, ((uint32_t) self.value));
    $returnValue742 = $tmp743;
    return $returnValue742;
}
panda$core$UInt64 panda$core$Int32$convert$R$panda$core$UInt64(panda$core$Int32 self) {
    panda$core$UInt64 $returnValue745;
    panda$core$UInt64 $tmp746;
    panda$core$UInt64$init$builtin_uint64(&$tmp746, ((uint64_t) self.value));
    $returnValue745 = $tmp746;
    return $returnValue745;
}
panda$core$Real32 panda$core$Int32$convert$R$panda$core$Real32(panda$core$Int32 self) {
    panda$core$Real32 $returnValue748;
    panda$core$Real32 $tmp749;
    panda$core$Real32$init$builtin_float32(&$tmp749, ((float) self.value));
    $returnValue748 = $tmp749;
    return $returnValue748;
}
panda$core$Real64 panda$core$Int32$convert$R$panda$core$Real64(panda$core$Int32 self) {
    panda$core$Real64 $returnValue751;
    panda$core$Real64 $tmp752;
    panda$core$Real64$init$builtin_float64(&$tmp752, ((double) self.value));
    $returnValue751 = $tmp752;
    return $returnValue751;
}
panda$core$String* panda$core$Int32$convert$R$panda$core$String(panda$core$Int32 self) {
    panda$core$Int64 max754;
    panda$core$Int64 $tmp755;
    panda$core$Char8* chars756;
    panda$core$Int64 index757;
    panda$core$Int64 $tmp758;
    panda$core$Int32 value760;
    panda$core$Int32 $tmp761;
    panda$core$Char8 $tmp765;
    panda$core$Int32 $tmp766;
    panda$core$Int32 $tmp768;
    panda$core$Int32 $tmp771;
    panda$core$Int64 $tmp773;
    panda$core$Int32 $tmp776;
    panda$core$Int64 $tmp778;
    panda$core$Char8 $tmp782;
    panda$core$Int32 $tmp783;
    panda$core$Int32 $tmp784;
    panda$core$Int32 $tmp788;
    panda$core$Int64 $tmp790;
    panda$core$Int32 $tmp793;
    panda$core$Char8 $tmp795;
    panda$core$UInt8 $tmp796;
    panda$core$Int64 size797;
    panda$core$Range$LTpanda$core$Int64$GT $tmp799;
    panda$core$Int64 $tmp800;
    panda$core$Bit $tmp801;
    panda$core$String* $returnValue822;
    panda$core$String* $tmp823;
    panda$core$String* $tmp824;
    panda$core$Int64$init$builtin_int64(&$tmp755, 11);
    max754 = $tmp755;
    chars756 = ((panda$core$Char8*) pandaZAlloc(max754.value * 1));
    panda$core$Int64$init$builtin_int64(&$tmp758, 1);
    panda$core$Int64 $tmp759 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max754, $tmp758);
    index757 = $tmp759;
    value760 = self;
    panda$core$Int32$init$builtin_int32(&$tmp761, 0);
    panda$core$Bit $tmp762 = panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(value760, $tmp761);
    if ($tmp762.value) {
    {
        $l763:;
        {
            panda$core$Int32$init$builtin_int32(&$tmp766, 10);
            panda$core$Int32 $tmp767 = panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32(value760, $tmp766);
            panda$core$Int32$init$builtin_int32(&$tmp768, 48);
            panda$core$Int32 $tmp769 = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32($tmp767, $tmp768);
            panda$core$UInt8 $tmp770 = panda$core$Int32$convert$R$panda$core$UInt8($tmp769);
            panda$core$Char8$init$panda$core$UInt8(&$tmp765, $tmp770);
            chars756[index757.value] = $tmp765;
            panda$core$Int32$init$builtin_int32(&$tmp771, 10);
            panda$core$Int32 $tmp772 = panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32(value760, $tmp771);
            value760 = $tmp772;
            panda$core$Int64$init$builtin_int64(&$tmp773, 1);
            panda$core$Int64 $tmp774 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index757, $tmp773);
            index757 = $tmp774;
        }
        panda$core$Int32$init$builtin_int32(&$tmp776, 0);
        panda$core$Bit $tmp777 = panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(value760, $tmp776);
        bool $tmp775 = $tmp777.value;
        if ($tmp775) goto $l763;
        $l764:;
        panda$core$Int64$init$builtin_int64(&$tmp778, 1);
        panda$core$Int64 $tmp779 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(index757, $tmp778);
        index757 = $tmp779;
    }
    }
    else {
    {
        $l780:;
        {
            panda$core$Int32$init$builtin_int32(&$tmp783, 48);
            panda$core$Int32$init$builtin_int32(&$tmp784, 10);
            panda$core$Int32 $tmp785 = panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32(value760, $tmp784);
            panda$core$Int32 $tmp786 = panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32($tmp783, $tmp785);
            panda$core$UInt8 $tmp787 = panda$core$Int32$convert$R$panda$core$UInt8($tmp786);
            panda$core$Char8$init$panda$core$UInt8(&$tmp782, $tmp787);
            chars756[index757.value] = $tmp782;
            panda$core$Int32$init$builtin_int32(&$tmp788, 10);
            panda$core$Int32 $tmp789 = panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32(value760, $tmp788);
            value760 = $tmp789;
            panda$core$Int64$init$builtin_int64(&$tmp790, 1);
            panda$core$Int64 $tmp791 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index757, $tmp790);
            index757 = $tmp791;
        }
        panda$core$Int32$init$builtin_int32(&$tmp793, 0);
        panda$core$Bit $tmp794 = panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(value760, $tmp793);
        bool $tmp792 = $tmp794.value;
        if ($tmp792) goto $l780;
        $l781:;
        panda$core$UInt8$init$builtin_uint8(&$tmp796, 45);
        panda$core$Char8$init$panda$core$UInt8(&$tmp795, $tmp796);
        chars756[index757.value] = $tmp795;
    }
    }
    panda$core$Int64 $tmp798 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(max754, index757);
    size797 = $tmp798;
    panda$core$Int64$init$builtin_int64(&$tmp800, 0);
    panda$core$Bit$init$builtin_bit(&$tmp801, false);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp799, $tmp800, size797, $tmp801);
    int64_t $tmp803 = $tmp799.min.value;
    panda$core$Int64 i802 = { $tmp803 };
    int64_t $tmp805 = $tmp799.max.value;
    bool $tmp806 = $tmp799.inclusive.value;
    if ($tmp806) goto $l813; else goto $l814;
    $l813:;
    if ($tmp803 <= $tmp805) goto $l807; else goto $l809;
    $l814:;
    if ($tmp803 < $tmp805) goto $l807; else goto $l809;
    $l807:;
    {
        panda$core$Int64 $tmp815 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(i802, index757);
        chars756[i802.value] = chars756[$tmp815.value];
    }
    $l810:;
    int64_t $tmp817 = $tmp805 - i802.value;
    if ($tmp806) goto $l818; else goto $l819;
    $l818:;
    if ((uint64_t) $tmp817 >= 1) goto $l816; else goto $l809;
    $l819:;
    if ((uint64_t) $tmp817 > 1) goto $l816; else goto $l809;
    $l816:;
    i802.value += 1;
    goto $l807;
    $l809:;
    panda$core$String* $tmp825 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
    panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp825, chars756, size797);
    $tmp824 = $tmp825;
    $tmp823 = $tmp824;
    $returnValue822 = $tmp823;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp823));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
    return $returnValue822;
}
panda$core$String* panda$core$Int32$format$panda$core$String$R$panda$core$String(panda$core$Int32 self, panda$core$String* p_fmt) {
    panda$core$String* $returnValue827;
    panda$core$String* $tmp828;
    panda$core$String* $tmp829;
    panda$core$Bit $tmp830;
    panda$core$UInt64 $tmp834;
    bool $tmp831 = self.value < 0;
    panda$core$Bit$init$builtin_bit(&$tmp830, $tmp831);
    panda$core$Int32 $tmp832 = panda$core$Int32$abs$R$panda$core$Int32(self);
    panda$core$UInt64 $tmp833 = panda$core$Int32$convert$R$panda$core$UInt64($tmp832);
    panda$core$UInt64$init$builtin_uint64(&$tmp834, 4294967295);
    panda$core$String* $tmp835 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp830, $tmp833, $tmp834, p_fmt);
    $tmp829 = $tmp835;
    $tmp828 = $tmp829;
    $returnValue827 = $tmp828;
    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp828));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp829));
    return $returnValue827;
}
void panda$core$Int32$cleanup(panda$core$Int32 self) {
}

