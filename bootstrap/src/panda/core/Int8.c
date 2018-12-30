#include "panda/core/Int8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Formattable.h"
#include "panda/core/Equatable.h"
#include "panda/core/Bit.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Comparable.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Key.h"
#include "panda/core/Int32.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt64.h"
#include "panda/core/Range.LTpanda/core/Int8.GT.h"
#include "org/pandalanguage/panda/Int8List.h"
#include "panda/core/SteppedRange.LTpanda/core/Int8.Cpanda/core/Int8.GT.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

__attribute__((weak)) panda$core$Int64 panda$core$Int8$get_count$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int8$get_count$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Int8$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$Int8$format$panda$core$String$R$panda$core$String(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, ((panda$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, ((panda$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, ((panda$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, ((panda$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, ((panda$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, ((panda$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$Int8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$Int8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int8$get_hash$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Int8$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Int8$convert$R$panda$core$String(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$ADD$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$ADD$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$ADD$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$ADD$panda$core$UInt8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int32 result = panda$core$Int8$$ADD$panda$core$UInt8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$ADD$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int8$$ADD$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$ADD$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int8$$ADD$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$SUB$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$SUB$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$SUB$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$SUB$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SUB$panda$core$UInt8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int32 result = panda$core$Int8$$SUB$panda$core$UInt8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SUB$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int8$$SUB$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$SUB$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int8$$SUB$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$SUB$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Int8$$SUB$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$MUL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$MUL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$MUL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$MUL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$MUL$panda$core$UInt8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int32 result = panda$core$Int8$$MUL$panda$core$UInt8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$MUL$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int8$$MUL$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$MUL$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int8$$MUL$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$INTDIV$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$INTDIV$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$INTDIV$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$UInt8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int32 result = panda$core$Int8$$INTDIV$panda$core$UInt8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int8$$INTDIV$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int8$$INTDIV$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$REM$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$REM$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$REM$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$REM$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$REM$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$REM$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$REM$panda$core$UInt8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int32 result = panda$core$Int8$$REM$panda$core$UInt8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$REM$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int8$$REM$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$REM$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int8$$REM$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int8$$DIV$panda$core$Int8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real32 result = panda$core$Int8$$DIV$panda$core$Int8$R$panda$core$Real32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int8$$DIV$panda$core$Int16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real32 result = panda$core$Int8$$DIV$panda$core$Int16$R$panda$core$Real32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int8$$DIV$panda$core$Int32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real32 result = panda$core$Int8$$DIV$panda$core$Int32$R$panda$core$Real32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int8$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$Int8$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int8$$DIV$panda$core$UInt8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real32 result = panda$core$Int8$$DIV$panda$core$UInt8$R$panda$core$Real32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int8$$DIV$panda$core$UInt16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real32 result = panda$core$Int8$$DIV$panda$core$UInt16$R$panda$core$Real32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int8$$DIV$panda$core$UInt32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real32 result = panda$core$Int8$$DIV$panda$core$UInt32$R$panda$core$Real32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int8$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$Int8$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int8$$DIV$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Int8$$DIV$panda$core$Real32$R$panda$core$Real32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int8$$DIV$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Int8$$DIV$panda$core$Real64$R$panda$core$Real64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$BNOT$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Int8$$BNOT$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$BAND$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int8$$BAND$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int8$$BAND$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$BOR$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$BOR$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int8$$BOR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int8$$BOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int8$$BOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int8$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int8$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$BXOR$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int8$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int8$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int8$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int8$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int8$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$Int8$$SHR$panda$core$Int16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$Int8$$SHR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$Int8$$SHR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int8$$SHR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int8$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int8$$SHR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$EQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int8$$EQ$panda$core$Int16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$EQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int8$$EQ$panda$core$Int32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$EQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int8$$EQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int8$$EQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int8$$EQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int8$$NEQ$panda$core$Int16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int8$$NEQ$panda$core$Int32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int8$$NEQ$panda$core$Int64$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int8$$NEQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int8$$NEQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int8$$NEQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int8$$LT$panda$core$Int16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int8$$LT$panda$core$Int32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int8$$LT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int8$$LT$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int8$$LT$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int8$$LT$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int8$$GT$panda$core$Int16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int8$$GT$panda$core$Int32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GT$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int8$$GT$panda$core$Int64$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int8$$GT$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int8$$GT$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int8$$GT$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int8$$GE$panda$core$Int16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int8$$GE$panda$core$Int32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int8$$GE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int8$$GE$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int8$$GE$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int8$$GE$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$Int8$$LE$panda$core$Int16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$Int8$$LE$panda$core$Int32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LE$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$Int8$$LE$panda$core$Int64$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Bit result = panda$core$Int8$$LE$panda$core$UInt8$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$Int8$$LE$panda$core$UInt16$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$Int8$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$Int8$$LE$panda$core$UInt32$R$panda$core$Bit(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$abs$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$Int8$abs$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$min$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$min$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int8$min$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int8$min$panda$core$Int16$R$panda$core$Int16(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$min$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$min$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$min$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$min$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int8$min$panda$core$UInt8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int16 result = panda$core$Int8$min$panda$core$UInt8$R$panda$core$Int16(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$min$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int8$min$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$min$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int8$min$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$Int8$max$panda$core$Int8$R$panda$core$Int8$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int8 result = panda$core$Int8$max$panda$core$Int8$R$panda$core$Int8(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int8$max$panda$core$Int16$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int16 result = panda$core$Int8$max$panda$core$Int16$R$panda$core$Int16(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$max$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int8$max$panda$core$Int32$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$max$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int8$max$panda$core$Int64$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int8$max$panda$core$UInt8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Int16 result = panda$core$Int8$max$panda$core$UInt8$R$panda$core$Int16(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$max$panda$core$UInt16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Int32 result = panda$core$Int8$max$panda$core$UInt16$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$max$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int8$max$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$Int8$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$Int8$convert$R$panda$core$Int16(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int8$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Int8$convert$R$panda$core$Int32(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int8$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int8$convert$R$panda$core$Int64(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$Int8$convert$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$Int8$convert$R$panda$core$UInt8(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$Int8$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$Int8$convert$R$panda$core$UInt16(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$Int8$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$Int8$convert$R$panda$core$UInt32(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int8$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$Int8$convert$R$panda$core$UInt64(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$Int8$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$Int8$convert$R$panda$core$Real32(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int8$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$Int8$convert$R$panda$core$Real64(((panda$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Int8$cleanup$shim(panda$core$Object* p0) {
    panda$core$Int8$cleanup(((panda$core$Int8$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$Int8$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int8$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int8$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int8$_panda$collections$CollectionView, { panda$core$Int8$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int8$_panda$core$Formattable, { panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$Int8$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int8$_panda$core$Equatable, { panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int8$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int8$_panda$collections$ListView, { panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int8$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int8$_panda$core$Comparable, { panda$core$Int8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int8$_panda$collections$Iterable, { panda$core$Int8$get_hash$R$panda$core$Int64$shim} };

static panda$core$String $s1;
panda$core$Int8$class_type panda$core$Int8$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int8$_panda$collections$Key, { panda$core$Int8$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$ADD$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$ADD$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$ADD$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$ADD$panda$core$UInt8$R$panda$core$Int32$shim, panda$core$Int8$$ADD$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int8$$ADD$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$SUB$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$SUB$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$SUB$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$SUB$panda$core$UInt8$R$panda$core$Int32$shim, panda$core$Int8$$SUB$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int8$$SUB$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int8$$SUB$R$panda$core$Int8$shim, panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$MUL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$MUL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$MUL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$MUL$panda$core$UInt8$R$panda$core$Int32$shim, panda$core$Int8$$MUL$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int8$$MUL$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$INTDIV$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$INTDIV$panda$core$UInt8$R$panda$core$Int32$shim, panda$core$Int8$$INTDIV$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int8$$INTDIV$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$REM$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$REM$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$REM$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$REM$panda$core$UInt8$R$panda$core$Int32$shim, panda$core$Int8$$REM$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int8$$REM$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int8$$DIV$panda$core$Int8$R$panda$core$Real32$shim, panda$core$Int8$$DIV$panda$core$Int16$R$panda$core$Real32$shim, panda$core$Int8$$DIV$panda$core$Int32$R$panda$core$Real32$shim, panda$core$Int8$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Int8$$DIV$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$Int8$$DIV$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$Int8$$DIV$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$Int8$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Int8$$DIV$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Int8$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Int8$$BNOT$R$panda$core$Int8$shim, panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$BAND$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$BAND$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int8$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$BOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$BOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$BOR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int8$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int8$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int8$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$BXOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$BXOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$BXOR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int8$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int8$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int8$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$SHL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$SHL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$SHL$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int8$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int8$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int8$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$$SHR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int8$$SHR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$$SHR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$Int8$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$Int8$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int8$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int8$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int8$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int8$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int8$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int8$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int8$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int8$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int8$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int8$abs$R$panda$core$Int8$shim, panda$core$Int8$min$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$min$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int8$min$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$min$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$min$panda$core$UInt8$R$panda$core$Int16$shim, panda$core$Int8$min$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int8$min$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int8$max$panda$core$Int8$R$panda$core$Int8$shim, panda$core$Int8$max$panda$core$Int16$R$panda$core$Int16$shim, panda$core$Int8$max$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int8$max$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int8$max$panda$core$UInt8$R$panda$core$Int16$shim, panda$core$Int8$max$panda$core$UInt16$R$panda$core$Int32$shim, panda$core$Int8$max$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int8$get_count$R$panda$core$Int64$shim, panda$core$Int8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$Int8$get_hash$R$panda$core$Int64$shim, panda$core$Int8$convert$R$panda$core$Int16$shim, panda$core$Int8$convert$R$panda$core$Int32$shim, panda$core$Int8$convert$R$panda$core$Int64$shim, panda$core$Int8$convert$R$panda$core$UInt8$shim, panda$core$Int8$convert$R$panda$core$UInt16$shim, panda$core$Int8$convert$R$panda$core$UInt32$shim, panda$core$Int8$convert$R$panda$core$UInt64$shim, panda$core$Int8$convert$R$panda$core$Real32$shim, panda$core$Int8$convert$R$panda$core$Real64$shim, panda$core$Int8$format$panda$core$String$R$panda$core$String$shim, panda$core$Int8$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$Int8$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int8$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int8$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int8$wrapper_panda$collections$CollectionView, { panda$core$Int8$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int8$wrapper_panda$core$Formattable, { panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$Int8$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int8$wrapper_panda$core$Equatable, { panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int8$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int8$wrapper_panda$collections$ListView, { panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int8$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int8$wrapper_panda$core$Comparable, { panda$core$Int8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int8$wrapper_panda$collections$Iterable, { panda$core$Int8$get_hash$R$panda$core$Int64$shim} };

static panda$core$String $s3;
panda$core$Int8$wrapperclass_type panda$core$Int8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int8$wrapper_panda$collections$Key, { panda$core$Int8$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn709)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, 1602004586439591825, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x38\x2e\x70\x61\x6e\x64\x61", 10, 7037435796607503158, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, -4068321346240110295, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x38\x2e\x70\x61\x6e\x64\x61", 10, 7037435796607503158, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3f", 119, -7332849367529290214, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x38\x2e\x70\x61\x6e\x64\x61", 10, 7037435796607503158, NULL };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 119, 1890246389723735430, NULL };

panda$core$Int8 panda$core$Int8$init$builtin_int8(int8_t param0) {

panda$core$Int8 local0;
// line 30
int8_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
panda$core$Int8 $tmp5 = *(&local0);
return $tmp5;

}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 36
int8_t $tmp6 = param0.value;
int8_t $tmp7 = param1.value;
int32_t $tmp8 = ((int32_t) $tmp6) + ((int32_t) $tmp7);
panda$core$Int32 $tmp9 = panda$core$Int32$init$builtin_int32($tmp8);
return $tmp9;

}
panda$core$Int8 panda$core$Int8$$ADD$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 41
int8_t $tmp10 = param0.value;
int8_t $tmp11 = param1.value;
int8_t $tmp12 = $tmp10 + $tmp11;
panda$core$Int8 $tmp13 = panda$core$Int8$init$builtin_int8($tmp12);
return $tmp13;

}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 47
int8_t $tmp14 = param0.value;
int16_t $tmp15 = param1.value;
int32_t $tmp16 = ((int32_t) $tmp14) + ((int32_t) $tmp15);
panda$core$Int32 $tmp17 = panda$core$Int32$init$builtin_int32($tmp16);
return $tmp17;

}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 53
int8_t $tmp18 = param0.value;
int32_t $tmp19 = param1.value;
int32_t $tmp20 = ((int32_t) $tmp18) + $tmp19;
panda$core$Int32 $tmp21 = panda$core$Int32$init$builtin_int32($tmp20);
return $tmp21;

}
panda$core$Int64 panda$core$Int8$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 59
int8_t $tmp22 = param0.value;
int64_t $tmp23 = param1.value;
int64_t $tmp24 = ((int64_t) $tmp22) + $tmp23;
panda$core$Int64 $tmp25 = panda$core$Int64$init$builtin_int64($tmp24);
return $tmp25;

}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$UInt8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 65
int8_t $tmp26 = param0.value;
uint8_t $tmp27 = param1.value;
int32_t $tmp28 = ((int32_t) $tmp26) + ((int32_t) $tmp27);
panda$core$Int32 $tmp29 = panda$core$Int32$init$builtin_int32($tmp28);
return $tmp29;

}
panda$core$Int32 panda$core$Int8$$ADD$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 71
int8_t $tmp30 = param0.value;
uint16_t $tmp31 = param1.value;
int32_t $tmp32 = ((int32_t) $tmp30) + ((int32_t) $tmp31);
panda$core$Int32 $tmp33 = panda$core$Int32$init$builtin_int32($tmp32);
return $tmp33;

}
panda$core$Int64 panda$core$Int8$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 77
int8_t $tmp34 = param0.value;
uint32_t $tmp35 = param1.value;
int64_t $tmp36 = ((int64_t) $tmp34) + ((int64_t) $tmp35);
panda$core$Int64 $tmp37 = panda$core$Int64$init$builtin_int64($tmp36);
return $tmp37;

}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 83
int8_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
int32_t $tmp40 = ((int32_t) $tmp38) - ((int32_t) $tmp39);
panda$core$Int32 $tmp41 = panda$core$Int32$init$builtin_int32($tmp40);
return $tmp41;

}
panda$core$Int8 panda$core$Int8$$SUB$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 88
int8_t $tmp42 = param0.value;
int8_t $tmp43 = param1.value;
int8_t $tmp44 = $tmp42 - $tmp43;
panda$core$Int8 $tmp45 = panda$core$Int8$init$builtin_int8($tmp44);
return $tmp45;

}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 94
int8_t $tmp46 = param0.value;
int16_t $tmp47 = param1.value;
int32_t $tmp48 = ((int32_t) $tmp46) - ((int32_t) $tmp47);
panda$core$Int32 $tmp49 = panda$core$Int32$init$builtin_int32($tmp48);
return $tmp49;

}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 100
int8_t $tmp50 = param0.value;
int32_t $tmp51 = param1.value;
int32_t $tmp52 = ((int32_t) $tmp50) - $tmp51;
panda$core$Int32 $tmp53 = panda$core$Int32$init$builtin_int32($tmp52);
return $tmp53;

}
panda$core$Int64 panda$core$Int8$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 106
int8_t $tmp54 = param0.value;
int64_t $tmp55 = param1.value;
int64_t $tmp56 = ((int64_t) $tmp54) - $tmp55;
panda$core$Int64 $tmp57 = panda$core$Int64$init$builtin_int64($tmp56);
return $tmp57;

}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$UInt8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 112
int8_t $tmp58 = param0.value;
uint8_t $tmp59 = param1.value;
int32_t $tmp60 = ((int32_t) $tmp58) - ((int32_t) $tmp59);
panda$core$Int32 $tmp61 = panda$core$Int32$init$builtin_int32($tmp60);
return $tmp61;

}
panda$core$Int32 panda$core$Int8$$SUB$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 118
int8_t $tmp62 = param0.value;
uint16_t $tmp63 = param1.value;
int32_t $tmp64 = ((int32_t) $tmp62) - ((int32_t) $tmp63);
panda$core$Int32 $tmp65 = panda$core$Int32$init$builtin_int32($tmp64);
return $tmp65;

}
panda$core$Int64 panda$core$Int8$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 124
int8_t $tmp66 = param0.value;
uint32_t $tmp67 = param1.value;
int64_t $tmp68 = ((int64_t) $tmp66) - ((int64_t) $tmp67);
panda$core$Int64 $tmp69 = panda$core$Int64$init$builtin_int64($tmp68);
return $tmp69;

}
panda$core$Int8 panda$core$Int8$$SUB$R$panda$core$Int8(panda$core$Int8 param0) {

// line 129
int8_t $tmp70 = param0.value;
int8_t $tmp71 = -$tmp70;
panda$core$Int8 $tmp72 = (panda$core$Int8) {$tmp71};
return $tmp72;

}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 135
int8_t $tmp73 = param0.value;
int8_t $tmp74 = param1.value;
int32_t $tmp75 = ((int32_t) $tmp73) * ((int32_t) $tmp74);
panda$core$Int32 $tmp76 = panda$core$Int32$init$builtin_int32($tmp75);
return $tmp76;

}
panda$core$Int8 panda$core$Int8$$MUL$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 140
int8_t $tmp77 = param0.value;
int8_t $tmp78 = param1.value;
int8_t $tmp79 = $tmp77 * $tmp78;
panda$core$Int8 $tmp80 = panda$core$Int8$init$builtin_int8($tmp79);
return $tmp80;

}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 146
int8_t $tmp81 = param0.value;
int16_t $tmp82 = param1.value;
int32_t $tmp83 = ((int32_t) $tmp81) * ((int32_t) $tmp82);
panda$core$Int32 $tmp84 = panda$core$Int32$init$builtin_int32($tmp83);
return $tmp84;

}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 152
int8_t $tmp85 = param0.value;
int32_t $tmp86 = param1.value;
int32_t $tmp87 = ((int32_t) $tmp85) * $tmp86;
panda$core$Int32 $tmp88 = panda$core$Int32$init$builtin_int32($tmp87);
return $tmp88;

}
panda$core$Int64 panda$core$Int8$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 158
int8_t $tmp89 = param0.value;
int64_t $tmp90 = param1.value;
int64_t $tmp91 = ((int64_t) $tmp89) * $tmp90;
panda$core$Int64 $tmp92 = panda$core$Int64$init$builtin_int64($tmp91);
return $tmp92;

}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$UInt8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 164
int8_t $tmp93 = param0.value;
uint8_t $tmp94 = param1.value;
int32_t $tmp95 = ((int32_t) $tmp93) * ((int32_t) $tmp94);
panda$core$Int32 $tmp96 = panda$core$Int32$init$builtin_int32($tmp95);
return $tmp96;

}
panda$core$Int32 panda$core$Int8$$MUL$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 170
int8_t $tmp97 = param0.value;
uint16_t $tmp98 = param1.value;
int32_t $tmp99 = ((int32_t) $tmp97) * ((int32_t) $tmp98);
panda$core$Int32 $tmp100 = panda$core$Int32$init$builtin_int32($tmp99);
return $tmp100;

}
panda$core$Int64 panda$core$Int8$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 176
int8_t $tmp101 = param0.value;
uint32_t $tmp102 = param1.value;
int64_t $tmp103 = ((int64_t) $tmp101) * ((int64_t) $tmp102);
panda$core$Int64 $tmp104 = panda$core$Int64$init$builtin_int64($tmp103);
return $tmp104;

}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 182
int8_t $tmp105 = param0.value;
int8_t $tmp106 = param1.value;
int32_t $tmp107 = ((int32_t) $tmp105) / ((int32_t) $tmp106);
panda$core$Int32 $tmp108 = panda$core$Int32$init$builtin_int32($tmp107);
return $tmp108;

}
panda$core$Int8 panda$core$Int8$$INTDIV$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 187
int8_t $tmp109 = param0.value;
int8_t $tmp110 = param1.value;
int8_t $tmp111 = $tmp109 / $tmp110;
panda$core$Int8 $tmp112 = panda$core$Int8$init$builtin_int8($tmp111);
return $tmp112;

}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 193
int8_t $tmp113 = param0.value;
int16_t $tmp114 = param1.value;
int32_t $tmp115 = ((int32_t) $tmp113) / ((int32_t) $tmp114);
panda$core$Int32 $tmp116 = panda$core$Int32$init$builtin_int32($tmp115);
return $tmp116;

}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 199
int8_t $tmp117 = param0.value;
int32_t $tmp118 = param1.value;
int32_t $tmp119 = ((int32_t) $tmp117) / $tmp118;
panda$core$Int32 $tmp120 = panda$core$Int32$init$builtin_int32($tmp119);
return $tmp120;

}
panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 205
int8_t $tmp121 = param0.value;
int64_t $tmp122 = param1.value;
int64_t $tmp123 = ((int64_t) $tmp121) / $tmp122;
panda$core$Int64 $tmp124 = panda$core$Int64$init$builtin_int64($tmp123);
return $tmp124;

}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$UInt8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 211
int8_t $tmp125 = param0.value;
uint8_t $tmp126 = param1.value;
int32_t $tmp127 = ((int32_t) $tmp125) / ((int32_t) $tmp126);
panda$core$Int32 $tmp128 = panda$core$Int32$init$builtin_int32($tmp127);
return $tmp128;

}
panda$core$Int32 panda$core$Int8$$INTDIV$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 217
int8_t $tmp129 = param0.value;
uint16_t $tmp130 = param1.value;
int32_t $tmp131 = ((int32_t) $tmp129) / ((int32_t) $tmp130);
panda$core$Int32 $tmp132 = panda$core$Int32$init$builtin_int32($tmp131);
return $tmp132;

}
panda$core$Int64 panda$core$Int8$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 223
int8_t $tmp133 = param0.value;
uint32_t $tmp134 = param1.value;
int64_t $tmp135 = ((int64_t) $tmp133) / ((int64_t) $tmp134);
panda$core$Int64 $tmp136 = panda$core$Int64$init$builtin_int64($tmp135);
return $tmp136;

}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 229
int8_t $tmp137 = param0.value;
int8_t $tmp138 = param1.value;
int32_t $tmp139 = ((int32_t) $tmp137) % ((int32_t) $tmp138);
panda$core$Int32 $tmp140 = panda$core$Int32$init$builtin_int32($tmp139);
return $tmp140;

}
panda$core$Int8 panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 234
int8_t $tmp141 = param0.value;
int8_t $tmp142 = param1.value;
int8_t $tmp143 = $tmp141 % $tmp142;
panda$core$Int8 $tmp144 = panda$core$Int8$init$builtin_int8($tmp143);
return $tmp144;

}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 240
int8_t $tmp145 = param0.value;
int16_t $tmp146 = param1.value;
int32_t $tmp147 = ((int32_t) $tmp145) % ((int32_t) $tmp146);
panda$core$Int32 $tmp148 = panda$core$Int32$init$builtin_int32($tmp147);
return $tmp148;

}
panda$core$Int32 panda$core$Int8$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 246
int8_t $tmp149 = param0.value;
int32_t $tmp150 = param1.value;
int32_t $tmp151 = ((int32_t) $tmp149) % $tmp150;
panda$core$Int32 $tmp152 = panda$core$Int32$init$builtin_int32($tmp151);
return $tmp152;

}
panda$core$Int64 panda$core$Int8$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 252
int8_t $tmp153 = param0.value;
int64_t $tmp154 = param1.value;
int64_t $tmp155 = ((int64_t) $tmp153) % $tmp154;
panda$core$Int64 $tmp156 = panda$core$Int64$init$builtin_int64($tmp155);
return $tmp156;

}
panda$core$Int32 panda$core$Int8$$REM$panda$core$UInt8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 258
int8_t $tmp157 = param0.value;
uint8_t $tmp158 = param1.value;
int32_t $tmp159 = ((int32_t) $tmp157) % ((int32_t) $tmp158);
panda$core$Int32 $tmp160 = panda$core$Int32$init$builtin_int32($tmp159);
return $tmp160;

}
panda$core$Int32 panda$core$Int8$$REM$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 264
int8_t $tmp161 = param0.value;
uint16_t $tmp162 = param1.value;
int32_t $tmp163 = ((int32_t) $tmp161) % ((int32_t) $tmp162);
panda$core$Int32 $tmp164 = panda$core$Int32$init$builtin_int32($tmp163);
return $tmp164;

}
panda$core$Int64 panda$core$Int8$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 270
int8_t $tmp165 = param0.value;
uint32_t $tmp166 = param1.value;
int64_t $tmp167 = ((int64_t) $tmp165) % ((int64_t) $tmp166);
panda$core$Int64 $tmp168 = panda$core$Int64$init$builtin_int64($tmp167);
return $tmp168;

}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 276
int8_t $tmp169 = param0.value;
int8_t $tmp170 = param1.value;
float $tmp171 = ((float) $tmp169) / ((float) $tmp170);
panda$core$Real32 $tmp172 = panda$core$Real32$init$builtin_float32($tmp171);
return $tmp172;

}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 282
int8_t $tmp173 = param0.value;
int16_t $tmp174 = param1.value;
float $tmp175 = ((float) $tmp173) / ((float) $tmp174);
panda$core$Real32 $tmp176 = panda$core$Real32$init$builtin_float32($tmp175);
return $tmp176;

}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 288
int8_t $tmp177 = param0.value;
int32_t $tmp178 = param1.value;
float $tmp179 = ((float) $tmp177) / ((float) $tmp178);
panda$core$Real32 $tmp180 = panda$core$Real32$init$builtin_float32($tmp179);
return $tmp180;

}
panda$core$Real64 panda$core$Int8$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 294
int8_t $tmp181 = param0.value;
int64_t $tmp182 = param1.value;
double $tmp183 = ((double) $tmp181) / ((double) $tmp182);
panda$core$Real64 $tmp184 = panda$core$Real64$init$builtin_float64($tmp183);
return $tmp184;

}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 300
int8_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
float $tmp187 = ((float) $tmp185) / ((float) $tmp186);
panda$core$Real32 $tmp188 = panda$core$Real32$init$builtin_float32($tmp187);
return $tmp188;

}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 306
int8_t $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
float $tmp191 = ((float) $tmp189) / ((float) $tmp190);
panda$core$Real32 $tmp192 = panda$core$Real32$init$builtin_float32($tmp191);
return $tmp192;

}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 312
int8_t $tmp193 = param0.value;
uint32_t $tmp194 = param1.value;
float $tmp195 = ((float) $tmp193) / ((float) $tmp194);
panda$core$Real32 $tmp196 = panda$core$Real32$init$builtin_float32($tmp195);
return $tmp196;

}
panda$core$Real64 panda$core$Int8$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Int8 param0, panda$core$UInt64 param1) {

// line 318
int8_t $tmp197 = param0.value;
uint64_t $tmp198 = param1.value;
double $tmp199 = ((double) $tmp197) / ((double) $tmp198);
panda$core$Real64 $tmp200 = panda$core$Real64$init$builtin_float64($tmp199);
return $tmp200;

}
panda$core$Real32 panda$core$Int8$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Int8 param0, panda$core$Real32 param1) {

// line 324
int8_t $tmp201 = param0.value;
float $tmp202 = param1.value;
float $tmp203 = ((float) $tmp201) / $tmp202;
panda$core$Real32 $tmp204 = panda$core$Real32$init$builtin_float32($tmp203);
return $tmp204;

}
panda$core$Real64 panda$core$Int8$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Int8 param0, panda$core$Real64 param1) {

// line 330
int8_t $tmp205 = param0.value;
double $tmp206 = param1.value;
double $tmp207 = ((double) $tmp205) / $tmp206;
panda$core$Real64 $tmp208 = panda$core$Real64$init$builtin_float64($tmp207);
return $tmp208;

}
panda$core$Int8 panda$core$Int8$$BNOT$R$panda$core$Int8(panda$core$Int8 param0) {

// line 335
int8_t $tmp209 = param0.value;
int8_t $tmp210 = !$tmp209;
panda$core$Int8 $tmp211 = (panda$core$Int8) {$tmp210};
return $tmp211;

}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 341
int8_t $tmp212 = param0.value;
int8_t $tmp213 = param1.value;
int32_t $tmp214 = ((int32_t) $tmp212) & ((int32_t) $tmp213);
panda$core$Int32 $tmp215 = panda$core$Int32$init$builtin_int32($tmp214);
return $tmp215;

}
panda$core$Int8 panda$core$Int8$$BAND$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 346
int8_t $tmp216 = param0.value;
int8_t $tmp217 = param1.value;
int8_t $tmp218 = $tmp216 & $tmp217;
panda$core$Int8 $tmp219 = panda$core$Int8$init$builtin_int8($tmp218);
return $tmp219;

}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 352
int8_t $tmp220 = param0.value;
int16_t $tmp221 = param1.value;
int32_t $tmp222 = ((int32_t) $tmp220) & ((int32_t) $tmp221);
panda$core$Int32 $tmp223 = panda$core$Int32$init$builtin_int32($tmp222);
return $tmp223;

}
panda$core$Int32 panda$core$Int8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 358
int8_t $tmp224 = param0.value;
int32_t $tmp225 = param1.value;
int32_t $tmp226 = ((int32_t) $tmp224) & $tmp225;
panda$core$Int32 $tmp227 = panda$core$Int32$init$builtin_int32($tmp226);
return $tmp227;

}
panda$core$Int64 panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 364
int8_t $tmp228 = param0.value;
int64_t $tmp229 = param1.value;
int64_t $tmp230 = ((int64_t) $tmp228) & $tmp229;
panda$core$Int64 $tmp231 = panda$core$Int64$init$builtin_int64($tmp230);
return $tmp231;

}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 370
int8_t $tmp232 = param0.value;
uint8_t $tmp233 = param1.value;
uint32_t $tmp234 = ((uint32_t) $tmp232) & ((uint32_t) $tmp233);
panda$core$UInt32 $tmp235 = panda$core$UInt32$init$builtin_uint32($tmp234);
return $tmp235;

}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 376
int8_t $tmp236 = param0.value;
uint16_t $tmp237 = param1.value;
uint32_t $tmp238 = ((uint32_t) $tmp236) & ((uint32_t) $tmp237);
panda$core$UInt32 $tmp239 = panda$core$UInt32$init$builtin_uint32($tmp238);
return $tmp239;

}
panda$core$UInt32 panda$core$Int8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 382
int8_t $tmp240 = param0.value;
uint32_t $tmp241 = param1.value;
uint32_t $tmp242 = ((uint32_t) $tmp240) & $tmp241;
panda$core$UInt32 $tmp243 = panda$core$UInt32$init$builtin_uint32($tmp242);
return $tmp243;

}
panda$core$UInt64 panda$core$Int8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 param0, panda$core$UInt64 param1) {

// line 388
int8_t $tmp244 = param0.value;
uint64_t $tmp245 = param1.value;
uint64_t $tmp246 = ((uint64_t) $tmp244) & $tmp245;
panda$core$UInt64 $tmp247 = panda$core$UInt64$init$builtin_uint64($tmp246);
return $tmp247;

}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 394
int8_t $tmp248 = param0.value;
int8_t $tmp249 = param1.value;
int32_t $tmp250 = ((int32_t) $tmp248) | ((int32_t) $tmp249);
panda$core$Int32 $tmp251 = panda$core$Int32$init$builtin_int32($tmp250);
return $tmp251;

}
panda$core$Int8 panda$core$Int8$$BOR$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 399
int8_t $tmp252 = param0.value;
int8_t $tmp253 = param1.value;
int8_t $tmp254 = $tmp252 | $tmp253;
panda$core$Int8 $tmp255 = panda$core$Int8$init$builtin_int8($tmp254);
return $tmp255;

}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 405
int8_t $tmp256 = param0.value;
int16_t $tmp257 = param1.value;
int32_t $tmp258 = ((int32_t) $tmp256) | ((int32_t) $tmp257);
panda$core$Int32 $tmp259 = panda$core$Int32$init$builtin_int32($tmp258);
return $tmp259;

}
panda$core$Int32 panda$core$Int8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 411
int8_t $tmp260 = param0.value;
int32_t $tmp261 = param1.value;
int32_t $tmp262 = ((int32_t) $tmp260) | $tmp261;
panda$core$Int32 $tmp263 = panda$core$Int32$init$builtin_int32($tmp262);
return $tmp263;

}
panda$core$Int64 panda$core$Int8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 417
int8_t $tmp264 = param0.value;
int64_t $tmp265 = param1.value;
int64_t $tmp266 = ((int64_t) $tmp264) | $tmp265;
panda$core$Int64 $tmp267 = panda$core$Int64$init$builtin_int64($tmp266);
return $tmp267;

}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 423
int8_t $tmp268 = param0.value;
uint8_t $tmp269 = param1.value;
uint32_t $tmp270 = ((uint32_t) $tmp268) | ((uint32_t) $tmp269);
panda$core$UInt32 $tmp271 = panda$core$UInt32$init$builtin_uint32($tmp270);
return $tmp271;

}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 429
int8_t $tmp272 = param0.value;
uint16_t $tmp273 = param1.value;
uint32_t $tmp274 = ((uint32_t) $tmp272) | ((uint32_t) $tmp273);
panda$core$UInt32 $tmp275 = panda$core$UInt32$init$builtin_uint32($tmp274);
return $tmp275;

}
panda$core$UInt32 panda$core$Int8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 435
int8_t $tmp276 = param0.value;
uint32_t $tmp277 = param1.value;
uint32_t $tmp278 = ((uint32_t) $tmp276) | $tmp277;
panda$core$UInt32 $tmp279 = panda$core$UInt32$init$builtin_uint32($tmp278);
return $tmp279;

}
panda$core$UInt64 panda$core$Int8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 param0, panda$core$UInt64 param1) {

// line 441
int8_t $tmp280 = param0.value;
uint64_t $tmp281 = param1.value;
uint64_t $tmp282 = ((uint64_t) $tmp280) | $tmp281;
panda$core$UInt64 $tmp283 = panda$core$UInt64$init$builtin_uint64($tmp282);
return $tmp283;

}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 447
int8_t $tmp284 = param0.value;
int8_t $tmp285 = param1.value;
int32_t $tmp286 = ((int32_t) $tmp284) ^ ((int32_t) $tmp285);
panda$core$Int32 $tmp287 = panda$core$Int32$init$builtin_int32($tmp286);
return $tmp287;

}
panda$core$Int8 panda$core$Int8$$BXOR$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 452
int8_t $tmp288 = param0.value;
int8_t $tmp289 = param1.value;
int8_t $tmp290 = $tmp288 ^ $tmp289;
panda$core$Int8 $tmp291 = panda$core$Int8$init$builtin_int8($tmp290);
return $tmp291;

}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 458
int8_t $tmp292 = param0.value;
int16_t $tmp293 = param1.value;
int32_t $tmp294 = ((int32_t) $tmp292) ^ ((int32_t) $tmp293);
panda$core$Int32 $tmp295 = panda$core$Int32$init$builtin_int32($tmp294);
return $tmp295;

}
panda$core$Int32 panda$core$Int8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 464
int8_t $tmp296 = param0.value;
int32_t $tmp297 = param1.value;
int32_t $tmp298 = ((int32_t) $tmp296) ^ $tmp297;
panda$core$Int32 $tmp299 = panda$core$Int32$init$builtin_int32($tmp298);
return $tmp299;

}
panda$core$Int64 panda$core$Int8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 470
int8_t $tmp300 = param0.value;
int64_t $tmp301 = param1.value;
int64_t $tmp302 = ((int64_t) $tmp300) ^ $tmp301;
panda$core$Int64 $tmp303 = panda$core$Int64$init$builtin_int64($tmp302);
return $tmp303;

}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 476
int8_t $tmp304 = param0.value;
uint8_t $tmp305 = param1.value;
uint32_t $tmp306 = ((uint32_t) $tmp304) ^ ((uint32_t) $tmp305);
panda$core$UInt32 $tmp307 = panda$core$UInt32$init$builtin_uint32($tmp306);
return $tmp307;

}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 482
int8_t $tmp308 = param0.value;
uint16_t $tmp309 = param1.value;
uint32_t $tmp310 = ((uint32_t) $tmp308) ^ ((uint32_t) $tmp309);
panda$core$UInt32 $tmp311 = panda$core$UInt32$init$builtin_uint32($tmp310);
return $tmp311;

}
panda$core$UInt32 panda$core$Int8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 488
int8_t $tmp312 = param0.value;
uint32_t $tmp313 = param1.value;
uint32_t $tmp314 = ((uint32_t) $tmp312) ^ $tmp313;
panda$core$UInt32 $tmp315 = panda$core$UInt32$init$builtin_uint32($tmp314);
return $tmp315;

}
panda$core$UInt64 panda$core$Int8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 param0, panda$core$UInt64 param1) {

// line 494
int8_t $tmp316 = param0.value;
uint64_t $tmp317 = param1.value;
uint64_t $tmp318 = ((uint64_t) $tmp316) ^ $tmp317;
panda$core$UInt64 $tmp319 = panda$core$UInt64$init$builtin_uint64($tmp318);
return $tmp319;

}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 500
int8_t $tmp320 = param0.value;
int8_t $tmp321 = param1.value;
int32_t $tmp322 = ((int32_t) $tmp320) << ((int32_t) $tmp321);
panda$core$Int32 $tmp323 = panda$core$Int32$init$builtin_int32($tmp322);
return $tmp323;

}
panda$core$Int8 panda$core$Int8$$SHL$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 505
int8_t $tmp324 = param0.value;
int8_t $tmp325 = param1.value;
int8_t $tmp326 = $tmp324 << $tmp325;
panda$core$Int8 $tmp327 = panda$core$Int8$init$builtin_int8($tmp326);
return $tmp327;

}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 511
int8_t $tmp328 = param0.value;
int16_t $tmp329 = param1.value;
int32_t $tmp330 = ((int32_t) $tmp328) << ((int32_t) $tmp329);
panda$core$Int32 $tmp331 = panda$core$Int32$init$builtin_int32($tmp330);
return $tmp331;

}
panda$core$Int32 panda$core$Int8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 517
int8_t $tmp332 = param0.value;
int32_t $tmp333 = param1.value;
int32_t $tmp334 = ((int32_t) $tmp332) << $tmp333;
panda$core$Int32 $tmp335 = panda$core$Int32$init$builtin_int32($tmp334);
return $tmp335;

}
panda$core$Int64 panda$core$Int8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 523
int8_t $tmp336 = param0.value;
int64_t $tmp337 = param1.value;
int64_t $tmp338 = ((int64_t) $tmp336) << $tmp337;
panda$core$Int64 $tmp339 = panda$core$Int64$init$builtin_int64($tmp338);
return $tmp339;

}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 529
int8_t $tmp340 = param0.value;
uint8_t $tmp341 = param1.value;
uint32_t $tmp342 = ((uint32_t) $tmp340) << ((uint32_t) $tmp341);
panda$core$UInt32 $tmp343 = panda$core$UInt32$init$builtin_uint32($tmp342);
return $tmp343;

}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 535
int8_t $tmp344 = param0.value;
uint16_t $tmp345 = param1.value;
uint32_t $tmp346 = ((uint32_t) $tmp344) << ((uint32_t) $tmp345);
panda$core$UInt32 $tmp347 = panda$core$UInt32$init$builtin_uint32($tmp346);
return $tmp347;

}
panda$core$UInt32 panda$core$Int8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 541
int8_t $tmp348 = param0.value;
uint32_t $tmp349 = param1.value;
uint32_t $tmp350 = ((uint32_t) $tmp348) << $tmp349;
panda$core$UInt32 $tmp351 = panda$core$UInt32$init$builtin_uint32($tmp350);
return $tmp351;

}
panda$core$UInt64 panda$core$Int8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 param0, panda$core$UInt64 param1) {

// line 547
int8_t $tmp352 = param0.value;
uint64_t $tmp353 = param1.value;
uint64_t $tmp354 = ((uint64_t) $tmp352) << $tmp353;
panda$core$UInt64 $tmp355 = panda$core$UInt64$init$builtin_uint64($tmp354);
return $tmp355;

}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 553
int8_t $tmp356 = param0.value;
int8_t $tmp357 = param1.value;
int32_t $tmp358 = ((int32_t) $tmp356) >> ((int32_t) $tmp357);
panda$core$Int32 $tmp359 = panda$core$Int32$init$builtin_int32($tmp358);
return $tmp359;

}
panda$core$Int8 panda$core$Int8$$SHR$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 558
int8_t $tmp360 = param0.value;
int8_t $tmp361 = param1.value;
int8_t $tmp362 = $tmp360 >> $tmp361;
panda$core$Int8 $tmp363 = panda$core$Int8$init$builtin_int8($tmp362);
return $tmp363;

}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 564
int8_t $tmp364 = param0.value;
int16_t $tmp365 = param1.value;
int32_t $tmp366 = ((int32_t) $tmp364) >> ((int32_t) $tmp365);
panda$core$Int32 $tmp367 = panda$core$Int32$init$builtin_int32($tmp366);
return $tmp367;

}
panda$core$Int32 panda$core$Int8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 570
int8_t $tmp368 = param0.value;
int32_t $tmp369 = param1.value;
int32_t $tmp370 = ((int32_t) $tmp368) >> $tmp369;
panda$core$Int32 $tmp371 = panda$core$Int32$init$builtin_int32($tmp370);
return $tmp371;

}
panda$core$Int64 panda$core$Int8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 576
int8_t $tmp372 = param0.value;
int64_t $tmp373 = param1.value;
int64_t $tmp374 = ((int64_t) $tmp372) >> $tmp373;
panda$core$Int64 $tmp375 = panda$core$Int64$init$builtin_int64($tmp374);
return $tmp375;

}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 582
int8_t $tmp376 = param0.value;
uint8_t $tmp377 = param1.value;
uint32_t $tmp378 = ((uint32_t) $tmp376) >> ((uint32_t) $tmp377);
panda$core$UInt32 $tmp379 = panda$core$UInt32$init$builtin_uint32($tmp378);
return $tmp379;

}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 588
int8_t $tmp380 = param0.value;
uint16_t $tmp381 = param1.value;
uint32_t $tmp382 = ((uint32_t) $tmp380) >> ((uint32_t) $tmp381);
panda$core$UInt32 $tmp383 = panda$core$UInt32$init$builtin_uint32($tmp382);
return $tmp383;

}
panda$core$UInt32 panda$core$Int8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 594
int8_t $tmp384 = param0.value;
uint32_t $tmp385 = param1.value;
uint32_t $tmp386 = ((uint32_t) $tmp384) >> $tmp385;
panda$core$UInt32 $tmp387 = panda$core$UInt32$init$builtin_uint32($tmp386);
return $tmp387;

}
panda$core$UInt64 panda$core$Int8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int8 param0, panda$core$UInt64 param1) {

// line 600
int8_t $tmp388 = param0.value;
uint64_t $tmp389 = param1.value;
uint64_t $tmp390 = ((uint64_t) $tmp388) >> $tmp389;
panda$core$UInt64 $tmp391 = panda$core$UInt64$init$builtin_uint64($tmp390);
return $tmp391;

}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 607
int8_t $tmp392 = param0.value;
int8_t $tmp393 = param1.value;
bool $tmp394 = $tmp392 == $tmp393;
panda$core$Bit $tmp395 = panda$core$Bit$init$builtin_bit($tmp394);
return $tmp395;

}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 613
int8_t $tmp396 = param0.value;
int16_t $tmp397 = param1.value;
bool $tmp398 = ((int16_t) $tmp396) == $tmp397;
panda$core$Bit $tmp399 = panda$core$Bit$init$builtin_bit($tmp398);
return $tmp399;

}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 619
int8_t $tmp400 = param0.value;
int32_t $tmp401 = param1.value;
bool $tmp402 = ((int32_t) $tmp400) == $tmp401;
panda$core$Bit $tmp403 = panda$core$Bit$init$builtin_bit($tmp402);
return $tmp403;

}
panda$core$Bit panda$core$Int8$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 625
int8_t $tmp404 = param0.value;
int64_t $tmp405 = param1.value;
bool $tmp406 = ((int64_t) $tmp404) == $tmp405;
panda$core$Bit $tmp407 = panda$core$Bit$init$builtin_bit($tmp406);
return $tmp407;

}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 631
int8_t $tmp408 = param0.value;
uint8_t $tmp409 = param1.value;
bool $tmp410 = ((int16_t) $tmp408) == ((int16_t) $tmp409);
panda$core$Bit $tmp411 = panda$core$Bit$init$builtin_bit($tmp410);
return $tmp411;

}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 637
int8_t $tmp412 = param0.value;
uint16_t $tmp413 = param1.value;
bool $tmp414 = ((int32_t) $tmp412) == ((int32_t) $tmp413);
panda$core$Bit $tmp415 = panda$core$Bit$init$builtin_bit($tmp414);
return $tmp415;

}
panda$core$Bit panda$core$Int8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 643
int8_t $tmp416 = param0.value;
uint32_t $tmp417 = param1.value;
bool $tmp418 = ((int64_t) $tmp416) == ((int64_t) $tmp417);
panda$core$Bit $tmp419 = panda$core$Bit$init$builtin_bit($tmp418);
return $tmp419;

}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 650
int8_t $tmp420 = param0.value;
int8_t $tmp421 = param1.value;
bool $tmp422 = $tmp420 != $tmp421;
panda$core$Bit $tmp423 = panda$core$Bit$init$builtin_bit($tmp422);
return $tmp423;

}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 656
int8_t $tmp424 = param0.value;
int16_t $tmp425 = param1.value;
bool $tmp426 = ((int16_t) $tmp424) != $tmp425;
panda$core$Bit $tmp427 = panda$core$Bit$init$builtin_bit($tmp426);
return $tmp427;

}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 662
int8_t $tmp428 = param0.value;
int32_t $tmp429 = param1.value;
bool $tmp430 = ((int32_t) $tmp428) != $tmp429;
panda$core$Bit $tmp431 = panda$core$Bit$init$builtin_bit($tmp430);
return $tmp431;

}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 668
int8_t $tmp432 = param0.value;
int64_t $tmp433 = param1.value;
bool $tmp434 = ((int64_t) $tmp432) != $tmp433;
panda$core$Bit $tmp435 = panda$core$Bit$init$builtin_bit($tmp434);
return $tmp435;

}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 674
int8_t $tmp436 = param0.value;
uint8_t $tmp437 = param1.value;
bool $tmp438 = ((int16_t) $tmp436) != ((int16_t) $tmp437);
panda$core$Bit $tmp439 = panda$core$Bit$init$builtin_bit($tmp438);
return $tmp439;

}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 680
int8_t $tmp440 = param0.value;
uint16_t $tmp441 = param1.value;
bool $tmp442 = ((int32_t) $tmp440) != ((int32_t) $tmp441);
panda$core$Bit $tmp443 = panda$core$Bit$init$builtin_bit($tmp442);
return $tmp443;

}
panda$core$Bit panda$core$Int8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 686
int8_t $tmp444 = param0.value;
uint32_t $tmp445 = param1.value;
bool $tmp446 = ((int64_t) $tmp444) != ((int64_t) $tmp445);
panda$core$Bit $tmp447 = panda$core$Bit$init$builtin_bit($tmp446);
return $tmp447;

}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 693
int8_t $tmp448 = param0.value;
int8_t $tmp449 = param1.value;
bool $tmp450 = $tmp448 < $tmp449;
panda$core$Bit $tmp451 = panda$core$Bit$init$builtin_bit($tmp450);
return $tmp451;

}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 699
int8_t $tmp452 = param0.value;
int16_t $tmp453 = param1.value;
bool $tmp454 = ((int16_t) $tmp452) < $tmp453;
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit($tmp454);
return $tmp455;

}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 705
int8_t $tmp456 = param0.value;
int32_t $tmp457 = param1.value;
bool $tmp458 = ((int32_t) $tmp456) < $tmp457;
panda$core$Bit $tmp459 = panda$core$Bit$init$builtin_bit($tmp458);
return $tmp459;

}
panda$core$Bit panda$core$Int8$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 711
int8_t $tmp460 = param0.value;
int64_t $tmp461 = param1.value;
bool $tmp462 = ((int64_t) $tmp460) < $tmp461;
panda$core$Bit $tmp463 = panda$core$Bit$init$builtin_bit($tmp462);
return $tmp463;

}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 717
int8_t $tmp464 = param0.value;
uint8_t $tmp465 = param1.value;
bool $tmp466 = ((int16_t) $tmp464) < ((int16_t) $tmp465);
panda$core$Bit $tmp467 = panda$core$Bit$init$builtin_bit($tmp466);
return $tmp467;

}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 723
int8_t $tmp468 = param0.value;
uint16_t $tmp469 = param1.value;
bool $tmp470 = ((int32_t) $tmp468) < ((int32_t) $tmp469);
panda$core$Bit $tmp471 = panda$core$Bit$init$builtin_bit($tmp470);
return $tmp471;

}
panda$core$Bit panda$core$Int8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 729
int8_t $tmp472 = param0.value;
uint32_t $tmp473 = param1.value;
bool $tmp474 = ((int64_t) $tmp472) < ((int64_t) $tmp473);
panda$core$Bit $tmp475 = panda$core$Bit$init$builtin_bit($tmp474);
return $tmp475;

}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 736
int8_t $tmp476 = param0.value;
int8_t $tmp477 = param1.value;
bool $tmp478 = $tmp476 > $tmp477;
panda$core$Bit $tmp479 = panda$core$Bit$init$builtin_bit($tmp478);
return $tmp479;

}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 742
int8_t $tmp480 = param0.value;
int16_t $tmp481 = param1.value;
bool $tmp482 = ((int16_t) $tmp480) > $tmp481;
panda$core$Bit $tmp483 = panda$core$Bit$init$builtin_bit($tmp482);
return $tmp483;

}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 748
int8_t $tmp484 = param0.value;
int32_t $tmp485 = param1.value;
bool $tmp486 = ((int32_t) $tmp484) > $tmp485;
panda$core$Bit $tmp487 = panda$core$Bit$init$builtin_bit($tmp486);
return $tmp487;

}
panda$core$Bit panda$core$Int8$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 754
int8_t $tmp488 = param0.value;
int64_t $tmp489 = param1.value;
bool $tmp490 = ((int64_t) $tmp488) > $tmp489;
panda$core$Bit $tmp491 = panda$core$Bit$init$builtin_bit($tmp490);
return $tmp491;

}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 760
int8_t $tmp492 = param0.value;
uint8_t $tmp493 = param1.value;
bool $tmp494 = ((int16_t) $tmp492) > ((int16_t) $tmp493);
panda$core$Bit $tmp495 = panda$core$Bit$init$builtin_bit($tmp494);
return $tmp495;

}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 766
int8_t $tmp496 = param0.value;
uint16_t $tmp497 = param1.value;
bool $tmp498 = ((int32_t) $tmp496) > ((int32_t) $tmp497);
panda$core$Bit $tmp499 = panda$core$Bit$init$builtin_bit($tmp498);
return $tmp499;

}
panda$core$Bit panda$core$Int8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 772
int8_t $tmp500 = param0.value;
uint32_t $tmp501 = param1.value;
bool $tmp502 = ((int64_t) $tmp500) > ((int64_t) $tmp501);
panda$core$Bit $tmp503 = panda$core$Bit$init$builtin_bit($tmp502);
return $tmp503;

}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 779
int8_t $tmp504 = param0.value;
int8_t $tmp505 = param1.value;
bool $tmp506 = $tmp504 >= $tmp505;
panda$core$Bit $tmp507 = panda$core$Bit$init$builtin_bit($tmp506);
return $tmp507;

}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 785
int8_t $tmp508 = param0.value;
int16_t $tmp509 = param1.value;
bool $tmp510 = ((int16_t) $tmp508) >= $tmp509;
panda$core$Bit $tmp511 = panda$core$Bit$init$builtin_bit($tmp510);
return $tmp511;

}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 791
int8_t $tmp512 = param0.value;
int32_t $tmp513 = param1.value;
bool $tmp514 = ((int32_t) $tmp512) >= $tmp513;
panda$core$Bit $tmp515 = panda$core$Bit$init$builtin_bit($tmp514);
return $tmp515;

}
panda$core$Bit panda$core$Int8$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 797
int8_t $tmp516 = param0.value;
int64_t $tmp517 = param1.value;
bool $tmp518 = ((int64_t) $tmp516) >= $tmp517;
panda$core$Bit $tmp519 = panda$core$Bit$init$builtin_bit($tmp518);
return $tmp519;

}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 803
int8_t $tmp520 = param0.value;
uint8_t $tmp521 = param1.value;
bool $tmp522 = ((int16_t) $tmp520) >= ((int16_t) $tmp521);
panda$core$Bit $tmp523 = panda$core$Bit$init$builtin_bit($tmp522);
return $tmp523;

}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 809
int8_t $tmp524 = param0.value;
uint16_t $tmp525 = param1.value;
bool $tmp526 = ((int32_t) $tmp524) >= ((int32_t) $tmp525);
panda$core$Bit $tmp527 = panda$core$Bit$init$builtin_bit($tmp526);
return $tmp527;

}
panda$core$Bit panda$core$Int8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 815
int8_t $tmp528 = param0.value;
uint32_t $tmp529 = param1.value;
bool $tmp530 = ((int64_t) $tmp528) >= ((int64_t) $tmp529);
panda$core$Bit $tmp531 = panda$core$Bit$init$builtin_bit($tmp530);
return $tmp531;

}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 822
int8_t $tmp532 = param0.value;
int8_t $tmp533 = param1.value;
bool $tmp534 = $tmp532 <= $tmp533;
panda$core$Bit $tmp535 = panda$core$Bit$init$builtin_bit($tmp534);
return $tmp535;

}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 828
int8_t $tmp536 = param0.value;
int16_t $tmp537 = param1.value;
bool $tmp538 = ((int16_t) $tmp536) <= $tmp537;
panda$core$Bit $tmp539 = panda$core$Bit$init$builtin_bit($tmp538);
return $tmp539;

}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 834
int8_t $tmp540 = param0.value;
int32_t $tmp541 = param1.value;
bool $tmp542 = ((int32_t) $tmp540) <= $tmp541;
panda$core$Bit $tmp543 = panda$core$Bit$init$builtin_bit($tmp542);
return $tmp543;

}
panda$core$Bit panda$core$Int8$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 840
int8_t $tmp544 = param0.value;
int64_t $tmp545 = param1.value;
bool $tmp546 = ((int64_t) $tmp544) <= $tmp545;
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit($tmp546);
return $tmp547;

}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 846
int8_t $tmp548 = param0.value;
uint8_t $tmp549 = param1.value;
bool $tmp550 = ((int16_t) $tmp548) <= ((int16_t) $tmp549);
panda$core$Bit $tmp551 = panda$core$Bit$init$builtin_bit($tmp550);
return $tmp551;

}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 852
int8_t $tmp552 = param0.value;
uint16_t $tmp553 = param1.value;
bool $tmp554 = ((int32_t) $tmp552) <= ((int32_t) $tmp553);
panda$core$Bit $tmp555 = panda$core$Bit$init$builtin_bit($tmp554);
return $tmp555;

}
panda$core$Bit panda$core$Int8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 858
int8_t $tmp556 = param0.value;
uint32_t $tmp557 = param1.value;
bool $tmp558 = ((int64_t) $tmp556) <= ((int64_t) $tmp557);
panda$core$Bit $tmp559 = panda$core$Bit$init$builtin_bit($tmp558);
return $tmp559;

}
panda$core$Int8 panda$core$Int8$abs$R$panda$core$Int8(panda$core$Int8 param0) {

// line 863
panda$core$Int8 $tmp560 = (panda$core$Int8) {0};
int8_t $tmp561 = param0.value;
int8_t $tmp562 = $tmp560.value;
bool $tmp563 = $tmp561 < $tmp562;
panda$core$Bit $tmp564 = (panda$core$Bit) {$tmp563};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block1; else goto block2;
block1:;
// line 864
panda$core$Int8 $tmp566 = panda$core$Int8$$SUB$R$panda$core$Int8(param0);
return $tmp566;
block2:;
// line 866
return param0;

}
panda$core$Int8 panda$core$Int8$min$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 872
int8_t $tmp567 = param0.value;
int8_t $tmp568 = param1.value;
bool $tmp569 = $tmp567 < $tmp568;
panda$core$Bit $tmp570 = panda$core$Bit$init$builtin_bit($tmp569);
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block1; else goto block2;
block1:;
// line 873
int8_t $tmp572 = param0.value;
panda$core$Int8 $tmp573 = panda$core$Int8$init$builtin_int8($tmp572);
return $tmp573;
block2:;
// line 875
int8_t $tmp574 = param1.value;
panda$core$Int8 $tmp575 = panda$core$Int8$init$builtin_int8($tmp574);
return $tmp575;

}
panda$core$Int16 panda$core$Int8$min$panda$core$Int16$R$panda$core$Int16(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 881
int8_t $tmp576 = param0.value;
int16_t $tmp577 = param1.value;
bool $tmp578 = ((int16_t) $tmp576) < $tmp577;
panda$core$Bit $tmp579 = panda$core$Bit$init$builtin_bit($tmp578);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block1:;
// line 882
int8_t $tmp581 = param0.value;
panda$core$Int16 $tmp582 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp581));
return $tmp582;
block2:;
// line 884
int16_t $tmp583 = param1.value;
panda$core$Int16 $tmp584 = panda$core$Int16$init$builtin_int16($tmp583);
return $tmp584;

}
panda$core$Int32 panda$core$Int8$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 890
int8_t $tmp585 = param0.value;
int32_t $tmp586 = param1.value;
bool $tmp587 = ((int32_t) $tmp585) < $tmp586;
panda$core$Bit $tmp588 = panda$core$Bit$init$builtin_bit($tmp587);
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block1; else goto block2;
block1:;
// line 891
int8_t $tmp590 = param0.value;
panda$core$Int32 $tmp591 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp590));
return $tmp591;
block2:;
// line 893
int32_t $tmp592 = param1.value;
panda$core$Int32 $tmp593 = panda$core$Int32$init$builtin_int32($tmp592);
return $tmp593;

}
panda$core$Int64 panda$core$Int8$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 899
int8_t $tmp594 = param0.value;
int64_t $tmp595 = param1.value;
bool $tmp596 = ((int64_t) $tmp594) < $tmp595;
panda$core$Bit $tmp597 = panda$core$Bit$init$builtin_bit($tmp596);
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block1; else goto block2;
block1:;
// line 900
int8_t $tmp599 = param0.value;
panda$core$Int64 $tmp600 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp599));
return $tmp600;
block2:;
// line 902
int64_t $tmp601 = param1.value;
panda$core$Int64 $tmp602 = panda$core$Int64$init$builtin_int64($tmp601);
return $tmp602;

}
panda$core$Int16 panda$core$Int8$min$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 908
int8_t $tmp603 = param0.value;
uint8_t $tmp604 = param1.value;
bool $tmp605 = ((int16_t) $tmp603) < ((int16_t) $tmp604);
panda$core$Bit $tmp606 = panda$core$Bit$init$builtin_bit($tmp605);
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block1; else goto block2;
block1:;
// line 909
int8_t $tmp608 = param0.value;
panda$core$Int16 $tmp609 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp608));
return $tmp609;
block2:;
// line 911
uint8_t $tmp610 = param1.value;
panda$core$Int16 $tmp611 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp610));
return $tmp611;

}
panda$core$Int32 panda$core$Int8$min$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 917
int8_t $tmp612 = param0.value;
uint16_t $tmp613 = param1.value;
bool $tmp614 = ((int32_t) $tmp612) < ((int32_t) $tmp613);
panda$core$Bit $tmp615 = panda$core$Bit$init$builtin_bit($tmp614);
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block1; else goto block2;
block1:;
// line 918
int8_t $tmp617 = param0.value;
panda$core$Int32 $tmp618 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp617));
return $tmp618;
block2:;
// line 920
uint16_t $tmp619 = param1.value;
panda$core$Int32 $tmp620 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp619));
return $tmp620;

}
panda$core$Int64 panda$core$Int8$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 926
int8_t $tmp621 = param0.value;
uint32_t $tmp622 = param1.value;
bool $tmp623 = ((int64_t) $tmp621) < ((int64_t) $tmp622);
panda$core$Bit $tmp624 = panda$core$Bit$init$builtin_bit($tmp623);
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block1; else goto block2;
block1:;
// line 927
int8_t $tmp626 = param0.value;
panda$core$Int64 $tmp627 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp626));
return $tmp627;
block2:;
// line 929
uint32_t $tmp628 = param1.value;
panda$core$Int64 $tmp629 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp628));
return $tmp629;

}
panda$core$Int8 panda$core$Int8$max$panda$core$Int8$R$panda$core$Int8(panda$core$Int8 param0, panda$core$Int8 param1) {

// line 936
int8_t $tmp630 = param0.value;
int8_t $tmp631 = param1.value;
bool $tmp632 = $tmp630 > $tmp631;
panda$core$Bit $tmp633 = panda$core$Bit$init$builtin_bit($tmp632);
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block1; else goto block2;
block1:;
// line 937
int8_t $tmp635 = param0.value;
panda$core$Int8 $tmp636 = panda$core$Int8$init$builtin_int8($tmp635);
return $tmp636;
block2:;
// line 939
int8_t $tmp637 = param1.value;
panda$core$Int8 $tmp638 = panda$core$Int8$init$builtin_int8($tmp637);
return $tmp638;

}
panda$core$Int16 panda$core$Int8$max$panda$core$Int16$R$panda$core$Int16(panda$core$Int8 param0, panda$core$Int16 param1) {

// line 945
int8_t $tmp639 = param0.value;
int16_t $tmp640 = param1.value;
bool $tmp641 = ((int16_t) $tmp639) > $tmp640;
panda$core$Bit $tmp642 = panda$core$Bit$init$builtin_bit($tmp641);
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block1; else goto block2;
block1:;
// line 946
int8_t $tmp644 = param0.value;
panda$core$Int16 $tmp645 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp644));
return $tmp645;
block2:;
// line 948
int16_t $tmp646 = param1.value;
panda$core$Int16 $tmp647 = panda$core$Int16$init$builtin_int16($tmp646);
return $tmp647;

}
panda$core$Int32 panda$core$Int8$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int8 param0, panda$core$Int32 param1) {

// line 954
int8_t $tmp648 = param0.value;
int32_t $tmp649 = param1.value;
bool $tmp650 = ((int32_t) $tmp648) > $tmp649;
panda$core$Bit $tmp651 = panda$core$Bit$init$builtin_bit($tmp650);
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block1; else goto block2;
block1:;
// line 955
int8_t $tmp653 = param0.value;
panda$core$Int32 $tmp654 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp653));
return $tmp654;
block2:;
// line 957
int32_t $tmp655 = param1.value;
panda$core$Int32 $tmp656 = panda$core$Int32$init$builtin_int32($tmp655);
return $tmp656;

}
panda$core$Int64 panda$core$Int8$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int8 param0, panda$core$Int64 param1) {

// line 963
int8_t $tmp657 = param0.value;
int64_t $tmp658 = param1.value;
bool $tmp659 = ((int64_t) $tmp657) > $tmp658;
panda$core$Bit $tmp660 = panda$core$Bit$init$builtin_bit($tmp659);
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block1; else goto block2;
block1:;
// line 964
int8_t $tmp662 = param0.value;
panda$core$Int64 $tmp663 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp662));
return $tmp663;
block2:;
// line 966
int64_t $tmp664 = param1.value;
panda$core$Int64 $tmp665 = panda$core$Int64$init$builtin_int64($tmp664);
return $tmp665;

}
panda$core$Int16 panda$core$Int8$max$panda$core$UInt8$R$panda$core$Int16(panda$core$Int8 param0, panda$core$UInt8 param1) {

// line 972
int8_t $tmp666 = param0.value;
uint8_t $tmp667 = param1.value;
bool $tmp668 = ((int16_t) $tmp666) > ((int16_t) $tmp667);
panda$core$Bit $tmp669 = panda$core$Bit$init$builtin_bit($tmp668);
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block1; else goto block2;
block1:;
// line 973
int8_t $tmp671 = param0.value;
panda$core$Int16 $tmp672 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp671));
return $tmp672;
block2:;
// line 975
uint8_t $tmp673 = param1.value;
panda$core$Int16 $tmp674 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp673));
return $tmp674;

}
panda$core$Int32 panda$core$Int8$max$panda$core$UInt16$R$panda$core$Int32(panda$core$Int8 param0, panda$core$UInt16 param1) {

// line 981
int8_t $tmp675 = param0.value;
uint16_t $tmp676 = param1.value;
bool $tmp677 = ((int32_t) $tmp675) > ((int32_t) $tmp676);
panda$core$Bit $tmp678 = panda$core$Bit$init$builtin_bit($tmp677);
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block1; else goto block2;
block1:;
// line 982
int8_t $tmp680 = param0.value;
panda$core$Int32 $tmp681 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp680));
return $tmp681;
block2:;
// line 984
uint16_t $tmp682 = param1.value;
panda$core$Int32 $tmp683 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp682));
return $tmp683;

}
panda$core$Int64 panda$core$Int8$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int8 param0, panda$core$UInt32 param1) {

// line 990
int8_t $tmp684 = param0.value;
uint32_t $tmp685 = param1.value;
bool $tmp686 = ((int64_t) $tmp684) > ((int64_t) $tmp685);
panda$core$Bit $tmp687 = panda$core$Bit$init$builtin_bit($tmp686);
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block1; else goto block2;
block1:;
// line 991
int8_t $tmp689 = param0.value;
panda$core$Int64 $tmp690 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp689));
return $tmp690;
block2:;
// line 993
uint32_t $tmp691 = param1.value;
panda$core$Int64 $tmp692 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp691));
return $tmp692;

}
panda$collections$ListView* panda$core$Int8$$IDX$panda$core$Range$LTpanda$core$Int8$GT$R$panda$collections$ListView$LTpanda$core$Int8$GT(panda$core$Range$LTpanda$core$Int8$GT param0) {

// line 999
org$pandalanguage$panda$Int8List* $tmp693 = (org$pandalanguage$panda$Int8List*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$panda$Int8List$class);
panda$core$Int8 $tmp694 = param0.min;
panda$core$Int8 $tmp695 = param0.max;
panda$core$Int8 $tmp696 = (panda$core$Int8) {1};
panda$core$Bit $tmp697 = param0.inclusive;
panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT $tmp698 = panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$init$panda$core$Int8$panda$core$Int8$panda$core$Int8$panda$core$Bit($tmp694, $tmp695, $tmp696, $tmp697);
org$pandalanguage$panda$Int8List$init$panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT($tmp693, $tmp698);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp693)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
return ((panda$collections$ListView*) $tmp693);

}
panda$collections$ListView* panda$core$Int8$$IDX$panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT$R$panda$collections$ListView$LTpanda$core$Int8$GT(panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT param0) {

// line 1004
org$pandalanguage$panda$Int8List* $tmp699 = (org$pandalanguage$panda$Int8List*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$panda$Int8List$class);
org$pandalanguage$panda$Int8List$init$panda$core$SteppedRange$LTpanda$core$Int8$Cpanda$core$Int8$GT($tmp699, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp699)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
return ((panda$collections$ListView*) $tmp699);

}
panda$core$Bit panda$core$Int8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int8 param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp700 = (panda$core$Int64) {0};
int64_t $tmp701 = param1.value;
int64_t $tmp702 = $tmp700.value;
bool $tmp703 = $tmp701 >= $tmp702;
panda$core$Bit $tmp704 = (panda$core$Bit) {$tmp703};
bool $tmp705 = $tmp704.value;
if ($tmp705) goto block1; else goto block2;
block1:;
panda$core$Int8$wrapper* $tmp706;
$tmp706 = (panda$core$Int8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Int8$wrapperclass);
$tmp706->value = param0;
ITable* $tmp707 = ((panda$collections$CollectionView*) $tmp706)->$class->itable;
while ($tmp707->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp707 = $tmp707->next;
}
$fn709 $tmp708 = $tmp707->methods[0];
panda$core$Int64 $tmp710 = $tmp708(((panda$collections$CollectionView*) $tmp706));
int64_t $tmp711 = param1.value;
int64_t $tmp712 = $tmp710.value;
bool $tmp713 = $tmp711 < $tmp712;
panda$core$Bit $tmp714 = (panda$core$Bit) {$tmp713};
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$CollectionView*) $tmp706)));
*(&local0) = $tmp714;
goto block3;
block2:;
*(&local0) = $tmp704;
goto block3;
block3:;
panda$core$Bit $tmp715 = *(&local0);
bool $tmp716 = $tmp715.value;
if ($tmp716) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp717 = (panda$core$Int64) {1009};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s718, $tmp717, &$s719);
abort(); // unreachable
block4:;
// line 1010
panda$core$Int64 $tmp720 = (panda$core$Int64) {1};
panda$core$Int64 $tmp721 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp720, param1);
panda$core$Int64 $tmp722 = panda$core$Int8$$BAND$panda$core$Int64$R$panda$core$Int64(param0, $tmp721);
panda$core$Int64 $tmp723 = (panda$core$Int64) {0};
panda$core$Bit $tmp724 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp722, $tmp723);
return $tmp724;

}
panda$core$Int64 panda$core$Int8$get_count$R$panda$core$Int64(panda$core$Int8 param0) {

// line 1016
panda$core$Int64 $tmp725 = (panda$core$Int64) {8};
return $tmp725;

}
panda$collections$Iterator* panda$core$Int8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$Int8 param0) {

// line 1021
org$pandalanguage$panda$IntBitIterator* $tmp726 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
panda$core$UInt64 $tmp727 = panda$core$Int8$convert$R$panda$core$UInt64(param0);
panda$core$UInt64 $tmp728 = (panda$core$UInt64) {128};
org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp726, $tmp727, $tmp728);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp726)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
return ((panda$collections$Iterator*) $tmp726);

}
panda$core$Int64 panda$core$Int8$get_hash$R$panda$core$Int64(panda$core$Int8 param0) {

// line 1026
int8_t $tmp729 = param0.value;
panda$core$Int64 $tmp730 = (panda$core$Int64) {((int64_t) $tmp729)};
return $tmp730;

}
panda$core$Int8$nullable panda$core$Int8$parse$panda$core$String$panda$core$Int64$R$panda$core$Int8$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$UInt64$nullable local1;
panda$core$UInt64$nullable local2;
panda$core$Int64 $tmp731 = (panda$core$Int64) {2};
int64_t $tmp732 = param1.value;
int64_t $tmp733 = $tmp731.value;
bool $tmp734 = $tmp732 >= $tmp733;
panda$core$Bit $tmp735 = (panda$core$Bit) {$tmp734};
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp737 = (panda$core$Int64) {36};
int64_t $tmp738 = param1.value;
int64_t $tmp739 = $tmp737.value;
bool $tmp740 = $tmp738 <= $tmp739;
panda$core$Bit $tmp741 = (panda$core$Bit) {$tmp740};
*(&local0) = $tmp741;
goto block3;
block2:;
*(&local0) = $tmp735;
goto block3;
block3:;
panda$core$Bit $tmp742 = *(&local0);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp744 = (panda$core$Int64) {1032};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s745, $tmp744, &$s746);
abort(); // unreachable
block4:;
// line 1033
panda$core$Bit $tmp747 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(param0, &$s748);
bool $tmp749 = $tmp747.value;
if ($tmp749) goto block6; else goto block8;
block6:;
// line 1034
panda$core$Int64 $tmp750 = (panda$core$Int64) {1};
panda$core$Bit $tmp751 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp752 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp750, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp751);
panda$core$String* $tmp753 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(param0, $tmp752);
panda$core$UInt64$nullable $tmp754 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp753, param1);
*(&local1) = $tmp754;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
// line 1035
panda$core$UInt64$nullable $tmp755 = *(&local1);
panda$core$Bit $tmp756 = panda$core$Bit$init$builtin_bit(!$tmp755.nonnull);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block9; else goto block10;
block9:;
// line 1036
return ((panda$core$Int8$nullable) { .nonnull = false });
block10:;
// line 1038
panda$core$UInt64$nullable $tmp758 = *(&local1);
panda$core$Int8 $tmp759 = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64) $tmp758.value));
panda$core$Int8 $tmp760 = panda$core$Int8$$SUB$R$panda$core$Int8($tmp759);
return ((panda$core$Int8$nullable) { $tmp760, true });
block8:;
// line 1
// line 1041
panda$core$UInt64$nullable $tmp761 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(param0, param1);
*(&local2) = $tmp761;
// line 1042
panda$core$UInt64$nullable $tmp762 = *(&local2);
panda$core$Bit $tmp763 = panda$core$Bit$init$builtin_bit(!$tmp762.nonnull);
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block11; else goto block12;
block11:;
// line 1043
return ((panda$core$Int8$nullable) { .nonnull = false });
block12:;
// line 1045
panda$core$UInt64$nullable $tmp765 = *(&local2);
panda$core$Int8 $tmp766 = panda$core$UInt64$convert$R$panda$core$Int8(((panda$core$UInt64) $tmp765.value));
return ((panda$core$Int8$nullable) { $tmp766, true });
block7:;
panda$core$Bit $tmp767 = panda$core$Bit$init$builtin_bit(false);
bool $tmp768 = $tmp767.value;
if ($tmp768) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp769 = (panda$core$Int64) {1032};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s770, $tmp769, &$s771);
abort(); // unreachable
block13:;
abort(); // unreachable

}
panda$core$Int16 panda$core$Int8$convert$R$panda$core$Int16(panda$core$Int8 param0) {

// line 1051
int8_t $tmp772 = param0.value;
panda$core$Int16 $tmp773 = (panda$core$Int16) {((int16_t) $tmp772)};
return $tmp773;

}
panda$core$Int32 panda$core$Int8$convert$R$panda$core$Int32(panda$core$Int8 param0) {

// line 1056
int8_t $tmp774 = param0.value;
panda$core$Int32 $tmp775 = (panda$core$Int32) {((int32_t) $tmp774)};
return $tmp775;

}
panda$core$Int64 panda$core$Int8$convert$R$panda$core$Int64(panda$core$Int8 param0) {

// line 1061
int8_t $tmp776 = param0.value;
panda$core$Int64 $tmp777 = (panda$core$Int64) {((int64_t) $tmp776)};
return $tmp777;

}
panda$core$UInt8 panda$core$Int8$convert$R$panda$core$UInt8(panda$core$Int8 param0) {

// line 1066
int8_t $tmp778 = param0.value;
panda$core$UInt8 $tmp779 = (panda$core$UInt8) {((uint8_t) $tmp778)};
return $tmp779;

}
panda$core$UInt16 panda$core$Int8$convert$R$panda$core$UInt16(panda$core$Int8 param0) {

// line 1071
int8_t $tmp780 = param0.value;
panda$core$UInt16 $tmp781 = (panda$core$UInt16) {((uint16_t) $tmp780)};
return $tmp781;

}
panda$core$UInt32 panda$core$Int8$convert$R$panda$core$UInt32(panda$core$Int8 param0) {

// line 1076
int8_t $tmp782 = param0.value;
panda$core$UInt32 $tmp783 = (panda$core$UInt32) {((uint32_t) $tmp782)};
return $tmp783;

}
panda$core$UInt64 panda$core$Int8$convert$R$panda$core$UInt64(panda$core$Int8 param0) {

// line 1081
int8_t $tmp784 = param0.value;
panda$core$UInt64 $tmp785 = (panda$core$UInt64) {((uint64_t) $tmp784)};
return $tmp785;

}
panda$core$Real32 panda$core$Int8$convert$R$panda$core$Real32(panda$core$Int8 param0) {

// line 1086
int8_t $tmp786 = param0.value;
panda$core$Real32 $tmp787 = (panda$core$Real32) {((float) $tmp786)};
return $tmp787;

}
panda$core$Real64 panda$core$Int8$convert$R$panda$core$Real64(panda$core$Int8 param0) {

// line 1091
int8_t $tmp788 = param0.value;
panda$core$Real64 $tmp789 = (panda$core$Real64) {((double) $tmp788)};
return $tmp789;

}
panda$core$String* panda$core$Int8$convert$R$panda$core$String(panda$core$Int8 param0) {

panda$core$Int64 local0;
panda$core$Char8* local1;
panda$core$Int64 local2;
panda$core$Int8 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 1097
panda$core$Int64 $tmp790 = (panda$core$Int64) {4};
*(&local0) = $tmp790;
// line 1098
panda$core$Int64 $tmp791 = *(&local0);
int64_t $tmp792 = $tmp791.value;
panda$core$Char8* $tmp793 = ((panda$core$Char8*) pandaZAlloc($tmp792 * 1));
*(&local1) = $tmp793;
// line 1099
panda$core$Int64 $tmp794 = *(&local0);
panda$core$Int64 $tmp795 = (panda$core$Int64) {1};
int64_t $tmp796 = $tmp794.value;
int64_t $tmp797 = $tmp795.value;
int64_t $tmp798 = $tmp796 - $tmp797;
panda$core$Int64 $tmp799 = (panda$core$Int64) {$tmp798};
*(&local2) = $tmp799;
// line 1100
*(&local3) = param0;
// line 1101
panda$core$Int8 $tmp800 = *(&local3);
panda$core$Int8 $tmp801 = (panda$core$Int8) {0};
int8_t $tmp802 = $tmp800.value;
int8_t $tmp803 = $tmp801.value;
bool $tmp804 = $tmp802 >= $tmp803;
panda$core$Bit $tmp805 = (panda$core$Bit) {$tmp804};
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block1; else goto block3;
block1:;
// line 1102
goto block4;
block4:;
// line 1103
panda$core$Char8* $tmp807 = *(&local1);
panda$core$Int8 $tmp808 = *(&local3);
panda$core$Int8 $tmp809 = (panda$core$Int8) {10};
panda$core$Int32 $tmp810 = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32($tmp808, $tmp809);
panda$core$Int32 $tmp811 = (panda$core$Int32) {48};
int32_t $tmp812 = $tmp810.value;
int32_t $tmp813 = $tmp811.value;
int32_t $tmp814 = $tmp812 + $tmp813;
panda$core$Int32 $tmp815 = (panda$core$Int32) {$tmp814};
panda$core$UInt8 $tmp816 = panda$core$Int32$convert$R$panda$core$UInt8($tmp815);
panda$core$Char8 $tmp817 = panda$core$Char8$init$panda$core$UInt8($tmp816);
panda$core$Int64 $tmp818 = *(&local2);
int64_t $tmp819 = $tmp818.value;
$tmp807[$tmp819] = $tmp817;
// line 1104
panda$core$Int8 $tmp820 = *(&local3);
panda$core$Int32 $tmp821 = panda$core$Int32$init$panda$core$Int8($tmp820);
panda$core$Int32 $tmp822 = (panda$core$Int32) {10};
int32_t $tmp823 = $tmp821.value;
int32_t $tmp824 = $tmp822.value;
int32_t $tmp825 = $tmp823 / $tmp824;
panda$core$Int32 $tmp826 = (panda$core$Int32) {$tmp825};
panda$core$Int8 $tmp827 = panda$core$Int32$convert$R$panda$core$Int8($tmp826);
*(&local3) = $tmp827;
// line 1105
panda$core$Int64 $tmp828 = *(&local2);
panda$core$Int64 $tmp829 = (panda$core$Int64) {1};
int64_t $tmp830 = $tmp828.value;
int64_t $tmp831 = $tmp829.value;
int64_t $tmp832 = $tmp830 - $tmp831;
panda$core$Int64 $tmp833 = (panda$core$Int64) {$tmp832};
*(&local2) = $tmp833;
goto block5;
block5:;
panda$core$Int8 $tmp834 = *(&local3);
panda$core$Int8 $tmp835 = (panda$core$Int8) {0};
int8_t $tmp836 = $tmp834.value;
int8_t $tmp837 = $tmp835.value;
bool $tmp838 = $tmp836 > $tmp837;
panda$core$Bit $tmp839 = (panda$core$Bit) {$tmp838};
bool $tmp840 = $tmp839.value;
if ($tmp840) goto block4; else goto block6;
block6:;
// line 1108
panda$core$Int64 $tmp841 = *(&local2);
panda$core$Int64 $tmp842 = (panda$core$Int64) {1};
int64_t $tmp843 = $tmp841.value;
int64_t $tmp844 = $tmp842.value;
int64_t $tmp845 = $tmp843 + $tmp844;
panda$core$Int64 $tmp846 = (panda$core$Int64) {$tmp845};
*(&local2) = $tmp846;
goto block2;
block3:;
// line 1
// line 1111
goto block7;
block7:;
// line 1112
panda$core$Char8* $tmp847 = *(&local1);
panda$core$Int32 $tmp848 = (panda$core$Int32) {48};
panda$core$Int8 $tmp849 = *(&local3);
panda$core$Int8 $tmp850 = (panda$core$Int8) {10};
panda$core$Int32 $tmp851 = panda$core$Int8$$REM$panda$core$Int8$R$panda$core$Int32($tmp849, $tmp850);
int32_t $tmp852 = $tmp848.value;
int32_t $tmp853 = $tmp851.value;
int32_t $tmp854 = $tmp852 - $tmp853;
panda$core$Int32 $tmp855 = (panda$core$Int32) {$tmp854};
panda$core$UInt8 $tmp856 = panda$core$Int32$convert$R$panda$core$UInt8($tmp855);
panda$core$Char8 $tmp857 = panda$core$Char8$init$panda$core$UInt8($tmp856);
panda$core$Int64 $tmp858 = *(&local2);
int64_t $tmp859 = $tmp858.value;
$tmp847[$tmp859] = $tmp857;
// line 1113
panda$core$Int8 $tmp860 = *(&local3);
panda$core$Int32 $tmp861 = panda$core$Int32$init$panda$core$Int8($tmp860);
panda$core$Int32 $tmp862 = (panda$core$Int32) {10};
int32_t $tmp863 = $tmp861.value;
int32_t $tmp864 = $tmp862.value;
int32_t $tmp865 = $tmp863 / $tmp864;
panda$core$Int32 $tmp866 = (panda$core$Int32) {$tmp865};
panda$core$Int8 $tmp867 = panda$core$Int32$convert$R$panda$core$Int8($tmp866);
*(&local3) = $tmp867;
// line 1114
panda$core$Int64 $tmp868 = *(&local2);
panda$core$Int64 $tmp869 = (panda$core$Int64) {1};
int64_t $tmp870 = $tmp868.value;
int64_t $tmp871 = $tmp869.value;
int64_t $tmp872 = $tmp870 - $tmp871;
panda$core$Int64 $tmp873 = (panda$core$Int64) {$tmp872};
*(&local2) = $tmp873;
goto block8;
block8:;
panda$core$Int8 $tmp874 = *(&local3);
panda$core$Int8 $tmp875 = (panda$core$Int8) {0};
int8_t $tmp876 = $tmp874.value;
int8_t $tmp877 = $tmp875.value;
bool $tmp878 = $tmp876 < $tmp877;
panda$core$Bit $tmp879 = (panda$core$Bit) {$tmp878};
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block7; else goto block9;
block9:;
// line 1117
panda$core$Char8* $tmp881 = *(&local1);
panda$core$UInt8 $tmp882 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp883 = panda$core$Char8$init$panda$core$UInt8($tmp882);
panda$core$Int64 $tmp884 = *(&local2);
int64_t $tmp885 = $tmp884.value;
$tmp881[$tmp885] = $tmp883;
goto block2;
block2:;
// line 1119
panda$core$Int64 $tmp886 = *(&local0);
panda$core$Int64 $tmp887 = *(&local2);
int64_t $tmp888 = $tmp886.value;
int64_t $tmp889 = $tmp887.value;
int64_t $tmp890 = $tmp888 - $tmp889;
panda$core$Int64 $tmp891 = (panda$core$Int64) {$tmp890};
*(&local4) = $tmp891;
// line 1120
panda$core$Int64 $tmp892 = (panda$core$Int64) {0};
panda$core$Int64 $tmp893 = *(&local4);
panda$core$Bit $tmp894 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp895 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp892, $tmp893, $tmp894);
panda$core$Int64 $tmp896 = $tmp895.min;
*(&local5) = $tmp896;
panda$core$Int64 $tmp897 = $tmp895.max;
panda$core$Bit $tmp898 = $tmp895.inclusive;
bool $tmp899 = $tmp898.value;
panda$core$Int64 $tmp900 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp901 = panda$core$Int64$convert$R$panda$core$UInt64($tmp900);
if ($tmp899) goto block13; else goto block14;
block13:;
int64_t $tmp902 = $tmp896.value;
int64_t $tmp903 = $tmp897.value;
bool $tmp904 = $tmp902 <= $tmp903;
panda$core$Bit $tmp905 = (panda$core$Bit) {$tmp904};
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block10; else goto block11;
block14:;
int64_t $tmp907 = $tmp896.value;
int64_t $tmp908 = $tmp897.value;
bool $tmp909 = $tmp907 < $tmp908;
panda$core$Bit $tmp910 = (panda$core$Bit) {$tmp909};
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block10; else goto block11;
block10:;
// line 1121
panda$core$Char8* $tmp912 = *(&local1);
panda$core$Char8* $tmp913 = *(&local1);
panda$core$Int64 $tmp914 = *(&local5);
panda$core$Int64 $tmp915 = *(&local2);
int64_t $tmp916 = $tmp914.value;
int64_t $tmp917 = $tmp915.value;
int64_t $tmp918 = $tmp916 + $tmp917;
panda$core$Int64 $tmp919 = (panda$core$Int64) {$tmp918};
int64_t $tmp920 = $tmp919.value;
panda$core$Char8 $tmp921 = $tmp913[$tmp920];
panda$core$Int64 $tmp922 = *(&local5);
int64_t $tmp923 = $tmp922.value;
$tmp912[$tmp923] = $tmp921;
goto block12;
block12:;
panda$core$Int64 $tmp924 = *(&local5);
int64_t $tmp925 = $tmp897.value;
int64_t $tmp926 = $tmp924.value;
int64_t $tmp927 = $tmp925 - $tmp926;
panda$core$Int64 $tmp928 = (panda$core$Int64) {$tmp927};
panda$core$UInt64 $tmp929 = panda$core$Int64$convert$R$panda$core$UInt64($tmp928);
if ($tmp899) goto block16; else goto block17;
block16:;
uint64_t $tmp930 = $tmp929.value;
uint64_t $tmp931 = $tmp901.value;
bool $tmp932 = $tmp930 >= $tmp931;
panda$core$Bit $tmp933 = (panda$core$Bit) {$tmp932};
bool $tmp934 = $tmp933.value;
if ($tmp934) goto block15; else goto block11;
block17:;
uint64_t $tmp935 = $tmp929.value;
uint64_t $tmp936 = $tmp901.value;
bool $tmp937 = $tmp935 > $tmp936;
panda$core$Bit $tmp938 = (panda$core$Bit) {$tmp937};
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block15; else goto block11;
block15:;
int64_t $tmp940 = $tmp924.value;
int64_t $tmp941 = $tmp900.value;
int64_t $tmp942 = $tmp940 + $tmp941;
panda$core$Int64 $tmp943 = (panda$core$Int64) {$tmp942};
*(&local5) = $tmp943;
goto block10;
block11:;
// line 1123
panda$core$String* $tmp944 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp945 = *(&local1);
panda$core$Int64 $tmp946 = *(&local4);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp944, $tmp945, $tmp946);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
return $tmp944;

}
panda$core$String* panda$core$Int8$format$panda$core$String$R$panda$core$String(panda$core$Int8 param0, panda$core$String* param1) {

// line 1129
int8_t $tmp947 = param0.value;
bool $tmp948 = $tmp947 < 0;
panda$core$Bit $tmp949 = panda$core$Bit$init$builtin_bit($tmp948);
panda$core$Int8 $tmp950 = panda$core$Int8$abs$R$panda$core$Int8(param0);
panda$core$UInt64 $tmp951 = panda$core$Int8$convert$R$panda$core$UInt64($tmp950);
panda$core$UInt64 $tmp952 = (panda$core$UInt64) {255};
panda$core$String* $tmp953 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp949, $tmp951, $tmp952, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
return $tmp953;

}
void panda$core$Int8$cleanup(panda$core$Int8 param0) {

return;

}

