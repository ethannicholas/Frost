#include "panda/core/UInt8.h"
#include "panda/core/Value.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Int64.h"
#include "panda/core/Object.h"
#include "panda/core/Formattable.h"
#include "panda/core/Comparable.h"
#include "panda/core/Bit.h"
#include "panda/collections/ListView.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Key.h"
#include "panda/core/Equatable.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Int32.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt64.h"
#include "panda/core/Real32.h"
#include "panda/core/Real64.h"
#include "panda/core/Range.LTpanda/core/UInt8.GT.h"
#include "org/pandalanguage/panda/UInt8List.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt8.Cpanda/core/UInt8.GT.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/IntBitIterator.h"
#include "panda/core/Char8.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"

__attribute__((weak)) panda$core$Int64 panda$core$UInt8$get_count$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt8$get_count$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String$shim(panda$core$Object* p0, panda$core$String* p1) {
    panda$core$String* result = panda$core$UInt8$format$panda$core$String$R$panda$core$String(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Comparable* p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Object* panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Bit result = panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    panda$core$Bit$wrapper* $tmp2;
    $tmp2 = (panda$core$Bit$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt8$get_hash$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Equatable* p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, ((panda$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$UInt8$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$UInt8$convert$R$panda$core$String(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$SUB$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$UInt8$$SUB$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Real64 result = panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Real64 result = panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$UInt8$$DIV$panda$core$Real32$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt8$$DIV$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$UInt8$$DIV$panda$core$Real64$R$panda$core$Real64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$BNOT$R$panda$core$UInt8$shim(panda$core$Object* p0) {
    panda$core$UInt8 result = panda$core$UInt8$$BNOT$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$Bit result = panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16$shim(panda$core$Object* p0, panda$core$Int8 p1) {
    panda$core$Int16 result = panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int16 p1) {
    panda$core$Int32 result = panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int64 result = panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt8 panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt8$shim(panda$core$Object* p0, panda$core$UInt8 p1) {
    panda$core$UInt8 result = panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt8(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt16$shim(panda$core$Object* p0, panda$core$UInt16 p1) {
    panda$core$UInt16 result = panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt16(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int8 panda$core$UInt8$convert$R$panda$core$Int8$shim(panda$core$Object* p0) {
    panda$core$Int8 result = panda$core$UInt8$convert$R$panda$core$Int8(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int16 panda$core$UInt8$convert$R$panda$core$Int16$shim(panda$core$Object* p0) {
    panda$core$Int16 result = panda$core$UInt8$convert$R$panda$core$Int16(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$UInt8$convert$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$UInt8$convert$R$panda$core$Int32(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt8$convert$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt8$convert$R$panda$core$Int64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt16 panda$core$UInt8$convert$R$panda$core$UInt16$shim(panda$core$Object* p0) {
    panda$core$UInt16 result = panda$core$UInt8$convert$R$panda$core$UInt16(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt32 panda$core$UInt8$convert$R$panda$core$UInt32$shim(panda$core$Object* p0) {
    panda$core$UInt32 result = panda$core$UInt8$convert$R$panda$core$UInt32(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt8$convert$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$UInt8$convert$R$panda$core$UInt64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real32 panda$core$UInt8$convert$R$panda$core$Real32$shim(panda$core$Object* p0) {
    panda$core$Real32 result = panda$core$UInt8$convert$R$panda$core$Real32(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt8$convert$R$panda$core$Real64$shim(panda$core$Object* p0) {
    panda$core$Real64 result = panda$core$UInt8$convert$R$panda$core$Real64(((panda$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$UInt8$cleanup$shim(panda$core$Object* p0) {
    panda$core$UInt8$cleanup(((panda$core$UInt8$wrapper*) p0)->value);

}

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$UInt8$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt8$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt8$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt8$_panda$collections$CollectionView, { panda$core$UInt8$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt8$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt8$_panda$core$Formattable, { panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$UInt8$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt8$_panda$core$Comparable, { panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt8$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt8$_panda$collections$ListView, { panda$core$UInt8$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt8$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt8$_panda$collections$Key, { panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt8$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt8$_panda$core$Equatable, { panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s1;
panda$core$UInt8$class_type panda$core$UInt8$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt8$_panda$collections$Iterable, { panda$core$UInt8$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$SUB$R$panda$core$UInt8$shim, panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$UInt8$$DIV$panda$core$Real32$R$panda$core$Real32$shim, panda$core$UInt8$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$UInt8$$BNOT$R$panda$core$UInt8$shim, panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32$shim, panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32$shim, panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32$shim, panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16$shim, panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16$shim, panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32$shim, panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64$shim, panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt8$shim, panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt16$shim, panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$UInt8$get_count$R$panda$core$Int64$shim, panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$UInt8$get_hash$R$panda$core$Int64$shim, panda$core$UInt8$convert$R$panda$core$Int8$shim, panda$core$UInt8$convert$R$panda$core$Int16$shim, panda$core$UInt8$convert$R$panda$core$Int32$shim, panda$core$UInt8$convert$R$panda$core$Int64$shim, panda$core$UInt8$convert$R$panda$core$UInt16$shim, panda$core$UInt8$convert$R$panda$core$UInt32$shim, panda$core$UInt8$convert$R$panda$core$UInt64$shim, panda$core$UInt8$convert$R$panda$core$Real32$shim, panda$core$UInt8$convert$R$panda$core$Real64$shim, panda$core$UInt8$format$panda$core$String$R$panda$core$String$shim, panda$core$UInt8$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$UInt8$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt8$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt8$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt8$wrapper_panda$collections$CollectionView, { panda$core$UInt8$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt8$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt8$wrapper_panda$core$Formattable, { panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$UInt8$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt8$wrapper_panda$core$Comparable, { panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt8$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt8$wrapper_panda$collections$ListView, { panda$core$UInt8$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt8$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt8$wrapper_panda$collections$Key, { panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt8$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt8$wrapper_panda$core$Equatable, { panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s3;
panda$core$UInt8$wrapperclass_type panda$core$UInt8$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt8$wrapper_panda$collections$Iterable, { panda$core$UInt8$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn702)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -4218233431776641634, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x38\x2e\x70\x61\x6e\x64\x61", 11, 3554322233707747815, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -5754874742162034774, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x38\x2e\x70\x61\x6e\x64\x61", 11, 3554322233707747815, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f", 121, 3059561124748168648, NULL };

panda$core$UInt8 panda$core$UInt8$init$builtin_uint8(uint8_t param0) {

panda$core$UInt8 local0;
// line 30
uint8_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
panda$core$UInt8 $tmp5 = *(&local0);
return $tmp5;

}
panda$core$Int32 panda$core$UInt8$$ADD$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 36
uint8_t $tmp6 = param0.value;
int8_t $tmp7 = param1.value;
int32_t $tmp8 = ((int32_t) $tmp6) + ((int32_t) $tmp7);
panda$core$Int32 $tmp9 = panda$core$Int32$init$builtin_int32($tmp8);
return $tmp9;

}
panda$core$Int32 panda$core$UInt8$$ADD$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 42
uint8_t $tmp10 = param0.value;
int16_t $tmp11 = param1.value;
int32_t $tmp12 = ((int32_t) $tmp10) + ((int32_t) $tmp11);
panda$core$Int32 $tmp13 = panda$core$Int32$init$builtin_int32($tmp12);
return $tmp13;

}
panda$core$Int64 panda$core$UInt8$$ADD$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 48
uint8_t $tmp14 = param0.value;
int32_t $tmp15 = param1.value;
int64_t $tmp16 = ((int64_t) $tmp14) + ((int64_t) $tmp15);
panda$core$Int64 $tmp17 = panda$core$Int64$init$builtin_int64($tmp16);
return $tmp17;

}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 54
uint8_t $tmp18 = param0.value;
uint8_t $tmp19 = param1.value;
uint32_t $tmp20 = ((uint32_t) $tmp18) + ((uint32_t) $tmp19);
panda$core$UInt32 $tmp21 = panda$core$UInt32$init$builtin_uint32($tmp20);
return $tmp21;

}
panda$core$UInt8 panda$core$UInt8$$ADD$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 59
uint8_t $tmp22 = param0.value;
uint8_t $tmp23 = param1.value;
uint8_t $tmp24 = $tmp22 + $tmp23;
panda$core$UInt8 $tmp25 = panda$core$UInt8$init$builtin_uint8($tmp24);
return $tmp25;

}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 65
uint8_t $tmp26 = param0.value;
uint16_t $tmp27 = param1.value;
uint32_t $tmp28 = ((uint32_t) $tmp26) + ((uint32_t) $tmp27);
panda$core$UInt32 $tmp29 = panda$core$UInt32$init$builtin_uint32($tmp28);
return $tmp29;

}
panda$core$UInt32 panda$core$UInt8$$ADD$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 71
uint8_t $tmp30 = param0.value;
uint32_t $tmp31 = param1.value;
uint32_t $tmp32 = ((uint32_t) $tmp30) + $tmp31;
panda$core$UInt32 $tmp33 = panda$core$UInt32$init$builtin_uint32($tmp32);
return $tmp33;

}
panda$core$UInt64 panda$core$UInt8$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 77
uint8_t $tmp34 = param0.value;
uint64_t $tmp35 = param1.value;
uint64_t $tmp36 = ((uint64_t) $tmp34) + $tmp35;
panda$core$UInt64 $tmp37 = panda$core$UInt64$init$builtin_uint64($tmp36);
return $tmp37;

}
panda$core$Int32 panda$core$UInt8$$SUB$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 83
uint8_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
int32_t $tmp40 = ((int32_t) $tmp38) - ((int32_t) $tmp39);
panda$core$Int32 $tmp41 = panda$core$Int32$init$builtin_int32($tmp40);
return $tmp41;

}
panda$core$Int32 panda$core$UInt8$$SUB$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 89
uint8_t $tmp42 = param0.value;
int16_t $tmp43 = param1.value;
int32_t $tmp44 = ((int32_t) $tmp42) - ((int32_t) $tmp43);
panda$core$Int32 $tmp45 = panda$core$Int32$init$builtin_int32($tmp44);
return $tmp45;

}
panda$core$Int64 panda$core$UInt8$$SUB$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 95
uint8_t $tmp46 = param0.value;
int32_t $tmp47 = param1.value;
int64_t $tmp48 = ((int64_t) $tmp46) - ((int64_t) $tmp47);
panda$core$Int64 $tmp49 = panda$core$Int64$init$builtin_int64($tmp48);
return $tmp49;

}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 101
uint8_t $tmp50 = param0.value;
uint8_t $tmp51 = param1.value;
uint32_t $tmp52 = ((uint32_t) $tmp50) - ((uint32_t) $tmp51);
panda$core$UInt32 $tmp53 = panda$core$UInt32$init$builtin_uint32($tmp52);
return $tmp53;

}
panda$core$UInt8 panda$core$UInt8$$SUB$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 106
uint8_t $tmp54 = param0.value;
uint8_t $tmp55 = param1.value;
uint8_t $tmp56 = $tmp54 - $tmp55;
panda$core$UInt8 $tmp57 = panda$core$UInt8$init$builtin_uint8($tmp56);
return $tmp57;

}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 112
uint8_t $tmp58 = param0.value;
uint16_t $tmp59 = param1.value;
uint32_t $tmp60 = ((uint32_t) $tmp58) - ((uint32_t) $tmp59);
panda$core$UInt32 $tmp61 = panda$core$UInt32$init$builtin_uint32($tmp60);
return $tmp61;

}
panda$core$UInt32 panda$core$UInt8$$SUB$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 118
uint8_t $tmp62 = param0.value;
uint32_t $tmp63 = param1.value;
uint32_t $tmp64 = ((uint32_t) $tmp62) - $tmp63;
panda$core$UInt32 $tmp65 = panda$core$UInt32$init$builtin_uint32($tmp64);
return $tmp65;

}
panda$core$UInt64 panda$core$UInt8$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 124
uint8_t $tmp66 = param0.value;
uint64_t $tmp67 = param1.value;
uint64_t $tmp68 = ((uint64_t) $tmp66) - $tmp67;
panda$core$UInt64 $tmp69 = panda$core$UInt64$init$builtin_uint64($tmp68);
return $tmp69;

}
panda$core$UInt8 panda$core$UInt8$$SUB$R$panda$core$UInt8(panda$core$UInt8 param0) {

// line 129
uint8_t $tmp70 = param0.value;
uint8_t $tmp71 = -$tmp70;
panda$core$UInt8 $tmp72 = (panda$core$UInt8) {$tmp71};
return $tmp72;

}
panda$core$Int32 panda$core$UInt8$$MUL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 135
uint8_t $tmp73 = param0.value;
int8_t $tmp74 = param1.value;
int32_t $tmp75 = ((int32_t) $tmp73) * ((int32_t) $tmp74);
panda$core$Int32 $tmp76 = panda$core$Int32$init$builtin_int32($tmp75);
return $tmp76;

}
panda$core$Int32 panda$core$UInt8$$MUL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 141
uint8_t $tmp77 = param0.value;
int16_t $tmp78 = param1.value;
int32_t $tmp79 = ((int32_t) $tmp77) * ((int32_t) $tmp78);
panda$core$Int32 $tmp80 = panda$core$Int32$init$builtin_int32($tmp79);
return $tmp80;

}
panda$core$Int64 panda$core$UInt8$$MUL$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 147
uint8_t $tmp81 = param0.value;
int32_t $tmp82 = param1.value;
int64_t $tmp83 = ((int64_t) $tmp81) * ((int64_t) $tmp82);
panda$core$Int64 $tmp84 = panda$core$Int64$init$builtin_int64($tmp83);
return $tmp84;

}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 153
uint8_t $tmp85 = param0.value;
uint8_t $tmp86 = param1.value;
uint32_t $tmp87 = ((uint32_t) $tmp85) * ((uint32_t) $tmp86);
panda$core$UInt32 $tmp88 = panda$core$UInt32$init$builtin_uint32($tmp87);
return $tmp88;

}
panda$core$UInt8 panda$core$UInt8$$MUL$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 158
uint8_t $tmp89 = param0.value;
uint8_t $tmp90 = param1.value;
uint8_t $tmp91 = $tmp89 * $tmp90;
panda$core$UInt8 $tmp92 = panda$core$UInt8$init$builtin_uint8($tmp91);
return $tmp92;

}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 164
uint8_t $tmp93 = param0.value;
uint16_t $tmp94 = param1.value;
uint32_t $tmp95 = ((uint32_t) $tmp93) * ((uint32_t) $tmp94);
panda$core$UInt32 $tmp96 = panda$core$UInt32$init$builtin_uint32($tmp95);
return $tmp96;

}
panda$core$UInt32 panda$core$UInt8$$MUL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 170
uint8_t $tmp97 = param0.value;
uint32_t $tmp98 = param1.value;
uint32_t $tmp99 = ((uint32_t) $tmp97) * $tmp98;
panda$core$UInt32 $tmp100 = panda$core$UInt32$init$builtin_uint32($tmp99);
return $tmp100;

}
panda$core$UInt64 panda$core$UInt8$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 176
uint8_t $tmp101 = param0.value;
uint64_t $tmp102 = param1.value;
uint64_t $tmp103 = ((uint64_t) $tmp101) * $tmp102;
panda$core$UInt64 $tmp104 = panda$core$UInt64$init$builtin_uint64($tmp103);
return $tmp104;

}
panda$core$Int32 panda$core$UInt8$$INTDIV$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 182
uint8_t $tmp105 = param0.value;
int8_t $tmp106 = param1.value;
int32_t $tmp107 = ((int32_t) $tmp105) / ((int32_t) $tmp106);
panda$core$Int32 $tmp108 = panda$core$Int32$init$builtin_int32($tmp107);
return $tmp108;

}
panda$core$Int32 panda$core$UInt8$$INTDIV$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 188
uint8_t $tmp109 = param0.value;
int16_t $tmp110 = param1.value;
int32_t $tmp111 = ((int32_t) $tmp109) / ((int32_t) $tmp110);
panda$core$Int32 $tmp112 = panda$core$Int32$init$builtin_int32($tmp111);
return $tmp112;

}
panda$core$Int64 panda$core$UInt8$$INTDIV$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 194
uint8_t $tmp113 = param0.value;
int32_t $tmp114 = param1.value;
int64_t $tmp115 = ((int64_t) $tmp113) / ((int64_t) $tmp114);
panda$core$Int64 $tmp116 = panda$core$Int64$init$builtin_int64($tmp115);
return $tmp116;

}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 200
uint8_t $tmp117 = param0.value;
uint8_t $tmp118 = param1.value;
uint32_t $tmp119 = ((uint32_t) $tmp117) / ((uint32_t) $tmp118);
panda$core$UInt32 $tmp120 = panda$core$UInt32$init$builtin_uint32($tmp119);
return $tmp120;

}
panda$core$UInt8 panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 205
uint8_t $tmp121 = param0.value;
uint8_t $tmp122 = param1.value;
uint8_t $tmp123 = $tmp121 / $tmp122;
panda$core$UInt8 $tmp124 = panda$core$UInt8$init$builtin_uint8($tmp123);
return $tmp124;

}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 211
uint8_t $tmp125 = param0.value;
uint16_t $tmp126 = param1.value;
uint32_t $tmp127 = ((uint32_t) $tmp125) / ((uint32_t) $tmp126);
panda$core$UInt32 $tmp128 = panda$core$UInt32$init$builtin_uint32($tmp127);
return $tmp128;

}
panda$core$UInt32 panda$core$UInt8$$INTDIV$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 217
uint8_t $tmp129 = param0.value;
uint32_t $tmp130 = param1.value;
uint32_t $tmp131 = ((uint32_t) $tmp129) / $tmp130;
panda$core$UInt32 $tmp132 = panda$core$UInt32$init$builtin_uint32($tmp131);
return $tmp132;

}
panda$core$UInt64 panda$core$UInt8$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 223
uint8_t $tmp133 = param0.value;
uint64_t $tmp134 = param1.value;
uint64_t $tmp135 = ((uint64_t) $tmp133) / $tmp134;
panda$core$UInt64 $tmp136 = panda$core$UInt64$init$builtin_uint64($tmp135);
return $tmp136;

}
panda$core$Int32 panda$core$UInt8$$REM$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 229
uint8_t $tmp137 = param0.value;
int8_t $tmp138 = param1.value;
int32_t $tmp139 = ((int32_t) $tmp137) % ((int32_t) $tmp138);
panda$core$Int32 $tmp140 = panda$core$Int32$init$builtin_int32($tmp139);
return $tmp140;

}
panda$core$Int32 panda$core$UInt8$$REM$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 235
uint8_t $tmp141 = param0.value;
int16_t $tmp142 = param1.value;
int32_t $tmp143 = ((int32_t) $tmp141) % ((int32_t) $tmp142);
panda$core$Int32 $tmp144 = panda$core$Int32$init$builtin_int32($tmp143);
return $tmp144;

}
panda$core$Int64 panda$core$UInt8$$REM$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 241
uint8_t $tmp145 = param0.value;
int32_t $tmp146 = param1.value;
int64_t $tmp147 = ((int64_t) $tmp145) % ((int64_t) $tmp146);
panda$core$Int64 $tmp148 = panda$core$Int64$init$builtin_int64($tmp147);
return $tmp148;

}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 247
uint8_t $tmp149 = param0.value;
uint8_t $tmp150 = param1.value;
uint32_t $tmp151 = ((uint32_t) $tmp149) % ((uint32_t) $tmp150);
panda$core$UInt32 $tmp152 = panda$core$UInt32$init$builtin_uint32($tmp151);
return $tmp152;

}
panda$core$UInt8 panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 252
uint8_t $tmp153 = param0.value;
uint8_t $tmp154 = param1.value;
uint8_t $tmp155 = $tmp153 % $tmp154;
panda$core$UInt8 $tmp156 = panda$core$UInt8$init$builtin_uint8($tmp155);
return $tmp156;

}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 258
uint8_t $tmp157 = param0.value;
uint16_t $tmp158 = param1.value;
uint32_t $tmp159 = ((uint32_t) $tmp157) % ((uint32_t) $tmp158);
panda$core$UInt32 $tmp160 = panda$core$UInt32$init$builtin_uint32($tmp159);
return $tmp160;

}
panda$core$UInt32 panda$core$UInt8$$REM$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 264
uint8_t $tmp161 = param0.value;
uint32_t $tmp162 = param1.value;
uint32_t $tmp163 = ((uint32_t) $tmp161) % $tmp162;
panda$core$UInt32 $tmp164 = panda$core$UInt32$init$builtin_uint32($tmp163);
return $tmp164;

}
panda$core$UInt64 panda$core$UInt8$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 270
uint8_t $tmp165 = param0.value;
uint64_t $tmp166 = param1.value;
uint64_t $tmp167 = ((uint64_t) $tmp165) % $tmp166;
panda$core$UInt64 $tmp168 = panda$core$UInt64$init$builtin_uint64($tmp167);
return $tmp168;

}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 276
uint8_t $tmp169 = param0.value;
int8_t $tmp170 = param1.value;
float $tmp171 = ((float) $tmp169) / ((float) $tmp170);
panda$core$Real32 $tmp172 = panda$core$Real32$init$builtin_float32($tmp171);
return $tmp172;

}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 282
uint8_t $tmp173 = param0.value;
int16_t $tmp174 = param1.value;
float $tmp175 = ((float) $tmp173) / ((float) $tmp174);
panda$core$Real32 $tmp176 = panda$core$Real32$init$builtin_float32($tmp175);
return $tmp176;

}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 288
uint8_t $tmp177 = param0.value;
int32_t $tmp178 = param1.value;
float $tmp179 = ((float) $tmp177) / ((float) $tmp178);
panda$core$Real32 $tmp180 = panda$core$Real32$init$builtin_float32($tmp179);
return $tmp180;

}
panda$core$Real64 panda$core$UInt8$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$UInt8 param0, panda$core$Int64 param1) {

// line 294
uint8_t $tmp181 = param0.value;
int64_t $tmp182 = param1.value;
double $tmp183 = ((double) $tmp181) / ((double) $tmp182);
panda$core$Real64 $tmp184 = panda$core$Real64$init$builtin_float64($tmp183);
return $tmp184;

}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 300
uint8_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
float $tmp187 = ((float) $tmp185) / ((float) $tmp186);
panda$core$Real32 $tmp188 = panda$core$Real32$init$builtin_float32($tmp187);
return $tmp188;

}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 306
uint8_t $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
float $tmp191 = ((float) $tmp189) / ((float) $tmp190);
panda$core$Real32 $tmp192 = panda$core$Real32$init$builtin_float32($tmp191);
return $tmp192;

}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 312
uint8_t $tmp193 = param0.value;
uint32_t $tmp194 = param1.value;
float $tmp195 = ((float) $tmp193) / ((float) $tmp194);
panda$core$Real32 $tmp196 = panda$core$Real32$init$builtin_float32($tmp195);
return $tmp196;

}
panda$core$Real64 panda$core$UInt8$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 318
uint8_t $tmp197 = param0.value;
uint64_t $tmp198 = param1.value;
double $tmp199 = ((double) $tmp197) / ((double) $tmp198);
panda$core$Real64 $tmp200 = panda$core$Real64$init$builtin_float64($tmp199);
return $tmp200;

}
panda$core$Real32 panda$core$UInt8$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$UInt8 param0, panda$core$Real32 param1) {

// line 324
uint8_t $tmp201 = param0.value;
float $tmp202 = param1.value;
float $tmp203 = ((float) $tmp201) / $tmp202;
panda$core$Real32 $tmp204 = panda$core$Real32$init$builtin_float32($tmp203);
return $tmp204;

}
panda$core$Real64 panda$core$UInt8$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$UInt8 param0, panda$core$Real64 param1) {

// line 330
uint8_t $tmp205 = param0.value;
double $tmp206 = param1.value;
double $tmp207 = ((double) $tmp205) / $tmp206;
panda$core$Real64 $tmp208 = panda$core$Real64$init$builtin_float64($tmp207);
return $tmp208;

}
panda$core$UInt8 panda$core$UInt8$$BNOT$R$panda$core$UInt8(panda$core$UInt8 param0) {

// line 335
uint8_t $tmp209 = param0.value;
uint8_t $tmp210 = !$tmp209;
panda$core$UInt8 $tmp211 = (panda$core$UInt8) {$tmp210};
return $tmp211;

}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 341
uint8_t $tmp212 = param0.value;
int8_t $tmp213 = param1.value;
int32_t $tmp214 = ((int32_t) $tmp212) & ((int32_t) $tmp213);
panda$core$Int32 $tmp215 = panda$core$Int32$init$builtin_int32($tmp214);
return $tmp215;

}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 347
uint8_t $tmp216 = param0.value;
int16_t $tmp217 = param1.value;
int32_t $tmp218 = ((int32_t) $tmp216) & ((int32_t) $tmp217);
panda$core$Int32 $tmp219 = panda$core$Int32$init$builtin_int32($tmp218);
return $tmp219;

}
panda$core$Int32 panda$core$UInt8$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 353
uint8_t $tmp220 = param0.value;
int32_t $tmp221 = param1.value;
int32_t $tmp222 = ((int32_t) $tmp220) & $tmp221;
panda$core$Int32 $tmp223 = panda$core$Int32$init$builtin_int32($tmp222);
return $tmp223;

}
panda$core$Int64 panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int64 param1) {

// line 359
uint8_t $tmp224 = param0.value;
int64_t $tmp225 = param1.value;
int64_t $tmp226 = ((int64_t) $tmp224) & $tmp225;
panda$core$Int64 $tmp227 = panda$core$Int64$init$builtin_int64($tmp226);
return $tmp227;

}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 365
uint8_t $tmp228 = param0.value;
uint8_t $tmp229 = param1.value;
uint32_t $tmp230 = ((uint32_t) $tmp228) & ((uint32_t) $tmp229);
panda$core$UInt32 $tmp231 = panda$core$UInt32$init$builtin_uint32($tmp230);
return $tmp231;

}
panda$core$UInt8 panda$core$UInt8$$BAND$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 370
uint8_t $tmp232 = param0.value;
uint8_t $tmp233 = param1.value;
uint8_t $tmp234 = $tmp232 & $tmp233;
panda$core$UInt8 $tmp235 = panda$core$UInt8$init$builtin_uint8($tmp234);
return $tmp235;

}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 376
uint8_t $tmp236 = param0.value;
uint16_t $tmp237 = param1.value;
uint32_t $tmp238 = ((uint32_t) $tmp236) & ((uint32_t) $tmp237);
panda$core$UInt32 $tmp239 = panda$core$UInt32$init$builtin_uint32($tmp238);
return $tmp239;

}
panda$core$UInt32 panda$core$UInt8$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 382
uint8_t $tmp240 = param0.value;
uint32_t $tmp241 = param1.value;
uint32_t $tmp242 = ((uint32_t) $tmp240) & $tmp241;
panda$core$UInt32 $tmp243 = panda$core$UInt32$init$builtin_uint32($tmp242);
return $tmp243;

}
panda$core$UInt64 panda$core$UInt8$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 388
uint8_t $tmp244 = param0.value;
uint64_t $tmp245 = param1.value;
uint64_t $tmp246 = ((uint64_t) $tmp244) & $tmp245;
panda$core$UInt64 $tmp247 = panda$core$UInt64$init$builtin_uint64($tmp246);
return $tmp247;

}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 394
uint8_t $tmp248 = param0.value;
int8_t $tmp249 = param1.value;
int32_t $tmp250 = ((int32_t) $tmp248) | ((int32_t) $tmp249);
panda$core$Int32 $tmp251 = panda$core$Int32$init$builtin_int32($tmp250);
return $tmp251;

}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 400
uint8_t $tmp252 = param0.value;
int16_t $tmp253 = param1.value;
int32_t $tmp254 = ((int32_t) $tmp252) | ((int32_t) $tmp253);
panda$core$Int32 $tmp255 = panda$core$Int32$init$builtin_int32($tmp254);
return $tmp255;

}
panda$core$Int32 panda$core$UInt8$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 406
uint8_t $tmp256 = param0.value;
int32_t $tmp257 = param1.value;
int32_t $tmp258 = ((int32_t) $tmp256) | $tmp257;
panda$core$Int32 $tmp259 = panda$core$Int32$init$builtin_int32($tmp258);
return $tmp259;

}
panda$core$Int64 panda$core$UInt8$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int64 param1) {

// line 412
uint8_t $tmp260 = param0.value;
int64_t $tmp261 = param1.value;
int64_t $tmp262 = ((int64_t) $tmp260) | $tmp261;
panda$core$Int64 $tmp263 = panda$core$Int64$init$builtin_int64($tmp262);
return $tmp263;

}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 418
uint8_t $tmp264 = param0.value;
uint8_t $tmp265 = param1.value;
uint32_t $tmp266 = ((uint32_t) $tmp264) | ((uint32_t) $tmp265);
panda$core$UInt32 $tmp267 = panda$core$UInt32$init$builtin_uint32($tmp266);
return $tmp267;

}
panda$core$UInt8 panda$core$UInt8$$BOR$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 423
uint8_t $tmp268 = param0.value;
uint8_t $tmp269 = param1.value;
uint8_t $tmp270 = $tmp268 | $tmp269;
panda$core$UInt8 $tmp271 = panda$core$UInt8$init$builtin_uint8($tmp270);
return $tmp271;

}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 429
uint8_t $tmp272 = param0.value;
uint16_t $tmp273 = param1.value;
uint32_t $tmp274 = ((uint32_t) $tmp272) | ((uint32_t) $tmp273);
panda$core$UInt32 $tmp275 = panda$core$UInt32$init$builtin_uint32($tmp274);
return $tmp275;

}
panda$core$UInt32 panda$core$UInt8$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 435
uint8_t $tmp276 = param0.value;
uint32_t $tmp277 = param1.value;
uint32_t $tmp278 = ((uint32_t) $tmp276) | $tmp277;
panda$core$UInt32 $tmp279 = panda$core$UInt32$init$builtin_uint32($tmp278);
return $tmp279;

}
panda$core$UInt64 panda$core$UInt8$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 441
uint8_t $tmp280 = param0.value;
uint64_t $tmp281 = param1.value;
uint64_t $tmp282 = ((uint64_t) $tmp280) | $tmp281;
panda$core$UInt64 $tmp283 = panda$core$UInt64$init$builtin_uint64($tmp282);
return $tmp283;

}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 447
uint8_t $tmp284 = param0.value;
int8_t $tmp285 = param1.value;
int32_t $tmp286 = ((int32_t) $tmp284) ^ ((int32_t) $tmp285);
panda$core$Int32 $tmp287 = panda$core$Int32$init$builtin_int32($tmp286);
return $tmp287;

}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 453
uint8_t $tmp288 = param0.value;
int16_t $tmp289 = param1.value;
int32_t $tmp290 = ((int32_t) $tmp288) ^ ((int32_t) $tmp289);
panda$core$Int32 $tmp291 = panda$core$Int32$init$builtin_int32($tmp290);
return $tmp291;

}
panda$core$Int32 panda$core$UInt8$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 459
uint8_t $tmp292 = param0.value;
int32_t $tmp293 = param1.value;
int32_t $tmp294 = ((int32_t) $tmp292) ^ $tmp293;
panda$core$Int32 $tmp295 = panda$core$Int32$init$builtin_int32($tmp294);
return $tmp295;

}
panda$core$Int64 panda$core$UInt8$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int64 param1) {

// line 465
uint8_t $tmp296 = param0.value;
int64_t $tmp297 = param1.value;
int64_t $tmp298 = ((int64_t) $tmp296) ^ $tmp297;
panda$core$Int64 $tmp299 = panda$core$Int64$init$builtin_int64($tmp298);
return $tmp299;

}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 471
uint8_t $tmp300 = param0.value;
uint8_t $tmp301 = param1.value;
uint32_t $tmp302 = ((uint32_t) $tmp300) ^ ((uint32_t) $tmp301);
panda$core$UInt32 $tmp303 = panda$core$UInt32$init$builtin_uint32($tmp302);
return $tmp303;

}
panda$core$UInt8 panda$core$UInt8$$BXOR$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 476
uint8_t $tmp304 = param0.value;
uint8_t $tmp305 = param1.value;
uint8_t $tmp306 = $tmp304 ^ $tmp305;
panda$core$UInt8 $tmp307 = panda$core$UInt8$init$builtin_uint8($tmp306);
return $tmp307;

}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 482
uint8_t $tmp308 = param0.value;
uint16_t $tmp309 = param1.value;
uint32_t $tmp310 = ((uint32_t) $tmp308) ^ ((uint32_t) $tmp309);
panda$core$UInt32 $tmp311 = panda$core$UInt32$init$builtin_uint32($tmp310);
return $tmp311;

}
panda$core$UInt32 panda$core$UInt8$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 488
uint8_t $tmp312 = param0.value;
uint32_t $tmp313 = param1.value;
uint32_t $tmp314 = ((uint32_t) $tmp312) ^ $tmp313;
panda$core$UInt32 $tmp315 = panda$core$UInt32$init$builtin_uint32($tmp314);
return $tmp315;

}
panda$core$UInt64 panda$core$UInt8$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 494
uint8_t $tmp316 = param0.value;
uint64_t $tmp317 = param1.value;
uint64_t $tmp318 = ((uint64_t) $tmp316) ^ $tmp317;
panda$core$UInt64 $tmp319 = panda$core$UInt64$init$builtin_uint64($tmp318);
return $tmp319;

}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 500
uint8_t $tmp320 = param0.value;
int8_t $tmp321 = param1.value;
int32_t $tmp322 = ((int32_t) $tmp320) << ((int32_t) $tmp321);
panda$core$Int32 $tmp323 = panda$core$Int32$init$builtin_int32($tmp322);
return $tmp323;

}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 506
uint8_t $tmp324 = param0.value;
int16_t $tmp325 = param1.value;
int32_t $tmp326 = ((int32_t) $tmp324) << ((int32_t) $tmp325);
panda$core$Int32 $tmp327 = panda$core$Int32$init$builtin_int32($tmp326);
return $tmp327;

}
panda$core$Int32 panda$core$UInt8$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 512
uint8_t $tmp328 = param0.value;
int32_t $tmp329 = param1.value;
int32_t $tmp330 = ((int32_t) $tmp328) << $tmp329;
panda$core$Int32 $tmp331 = panda$core$Int32$init$builtin_int32($tmp330);
return $tmp331;

}
panda$core$Int64 panda$core$UInt8$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int64 param1) {

// line 518
uint8_t $tmp332 = param0.value;
int64_t $tmp333 = param1.value;
int64_t $tmp334 = ((int64_t) $tmp332) << $tmp333;
panda$core$Int64 $tmp335 = panda$core$Int64$init$builtin_int64($tmp334);
return $tmp335;

}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 524
uint8_t $tmp336 = param0.value;
uint8_t $tmp337 = param1.value;
uint32_t $tmp338 = ((uint32_t) $tmp336) << ((uint32_t) $tmp337);
panda$core$UInt32 $tmp339 = panda$core$UInt32$init$builtin_uint32($tmp338);
return $tmp339;

}
panda$core$UInt8 panda$core$UInt8$$SHL$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 529
uint8_t $tmp340 = param0.value;
uint8_t $tmp341 = param1.value;
uint8_t $tmp342 = $tmp340 << $tmp341;
panda$core$UInt8 $tmp343 = panda$core$UInt8$init$builtin_uint8($tmp342);
return $tmp343;

}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 535
uint8_t $tmp344 = param0.value;
uint16_t $tmp345 = param1.value;
uint32_t $tmp346 = ((uint32_t) $tmp344) << ((uint32_t) $tmp345);
panda$core$UInt32 $tmp347 = panda$core$UInt32$init$builtin_uint32($tmp346);
return $tmp347;

}
panda$core$UInt32 panda$core$UInt8$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 541
uint8_t $tmp348 = param0.value;
uint32_t $tmp349 = param1.value;
uint32_t $tmp350 = ((uint32_t) $tmp348) << $tmp349;
panda$core$UInt32 $tmp351 = panda$core$UInt32$init$builtin_uint32($tmp350);
return $tmp351;

}
panda$core$UInt64 panda$core$UInt8$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 547
uint8_t $tmp352 = param0.value;
uint64_t $tmp353 = param1.value;
uint64_t $tmp354 = ((uint64_t) $tmp352) << $tmp353;
panda$core$UInt64 $tmp355 = panda$core$UInt64$init$builtin_uint64($tmp354);
return $tmp355;

}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int8$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 553
uint8_t $tmp356 = param0.value;
int8_t $tmp357 = param1.value;
int32_t $tmp358 = ((int32_t) $tmp356) >> ((int32_t) $tmp357);
panda$core$Int32 $tmp359 = panda$core$Int32$init$builtin_int32($tmp358);
return $tmp359;

}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 559
uint8_t $tmp360 = param0.value;
int16_t $tmp361 = param1.value;
int32_t $tmp362 = ((int32_t) $tmp360) >> ((int32_t) $tmp361);
panda$core$Int32 $tmp363 = panda$core$Int32$init$builtin_int32($tmp362);
return $tmp363;

}
panda$core$Int32 panda$core$UInt8$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 565
uint8_t $tmp364 = param0.value;
int32_t $tmp365 = param1.value;
int32_t $tmp366 = ((int32_t) $tmp364) >> $tmp365;
panda$core$Int32 $tmp367 = panda$core$Int32$init$builtin_int32($tmp366);
return $tmp367;

}
panda$core$Int64 panda$core$UInt8$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int64 param1) {

// line 571
uint8_t $tmp368 = param0.value;
int64_t $tmp369 = param1.value;
int64_t $tmp370 = ((int64_t) $tmp368) >> $tmp369;
panda$core$Int64 $tmp371 = panda$core$Int64$init$builtin_int64($tmp370);
return $tmp371;

}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 577
uint8_t $tmp372 = param0.value;
uint8_t $tmp373 = param1.value;
uint32_t $tmp374 = ((uint32_t) $tmp372) >> ((uint32_t) $tmp373);
panda$core$UInt32 $tmp375 = panda$core$UInt32$init$builtin_uint32($tmp374);
return $tmp375;

}
panda$core$UInt8 panda$core$UInt8$$SHR$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 582
uint8_t $tmp376 = param0.value;
uint8_t $tmp377 = param1.value;
uint8_t $tmp378 = $tmp376 >> $tmp377;
panda$core$UInt8 $tmp379 = panda$core$UInt8$init$builtin_uint8($tmp378);
return $tmp379;

}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt16$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 588
uint8_t $tmp380 = param0.value;
uint16_t $tmp381 = param1.value;
uint32_t $tmp382 = ((uint32_t) $tmp380) >> ((uint32_t) $tmp381);
panda$core$UInt32 $tmp383 = panda$core$UInt32$init$builtin_uint32($tmp382);
return $tmp383;

}
panda$core$UInt32 panda$core$UInt8$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 594
uint8_t $tmp384 = param0.value;
uint32_t $tmp385 = param1.value;
uint32_t $tmp386 = ((uint32_t) $tmp384) >> $tmp385;
panda$core$UInt32 $tmp387 = panda$core$UInt32$init$builtin_uint32($tmp386);
return $tmp387;

}
panda$core$UInt64 panda$core$UInt8$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 600
uint8_t $tmp388 = param0.value;
uint64_t $tmp389 = param1.value;
uint64_t $tmp390 = ((uint64_t) $tmp388) >> $tmp389;
panda$core$UInt64 $tmp391 = panda$core$UInt64$init$builtin_uint64($tmp390);
return $tmp391;

}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 606
uint8_t $tmp392 = param0.value;
int8_t $tmp393 = param1.value;
bool $tmp394 = ((int16_t) $tmp392) == ((int16_t) $tmp393);
panda$core$Bit $tmp395 = panda$core$Bit$init$builtin_bit($tmp394);
return $tmp395;

}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 612
uint8_t $tmp396 = param0.value;
int16_t $tmp397 = param1.value;
bool $tmp398 = ((int32_t) $tmp396) == ((int32_t) $tmp397);
panda$core$Bit $tmp399 = panda$core$Bit$init$builtin_bit($tmp398);
return $tmp399;

}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 618
uint8_t $tmp400 = param0.value;
int32_t $tmp401 = param1.value;
bool $tmp402 = ((int64_t) $tmp400) == ((int64_t) $tmp401);
panda$core$Bit $tmp403 = panda$core$Bit$init$builtin_bit($tmp402);
return $tmp403;

}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 625
uint8_t $tmp404 = param0.value;
uint8_t $tmp405 = param1.value;
bool $tmp406 = $tmp404 == $tmp405;
panda$core$Bit $tmp407 = panda$core$Bit$init$builtin_bit($tmp406);
return $tmp407;

}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 631
uint8_t $tmp408 = param0.value;
uint16_t $tmp409 = param1.value;
bool $tmp410 = ((uint16_t) $tmp408) == $tmp409;
panda$core$Bit $tmp411 = panda$core$Bit$init$builtin_bit($tmp410);
return $tmp411;

}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 637
uint8_t $tmp412 = param0.value;
uint32_t $tmp413 = param1.value;
bool $tmp414 = ((uint32_t) $tmp412) == $tmp413;
panda$core$Bit $tmp415 = panda$core$Bit$init$builtin_bit($tmp414);
return $tmp415;

}
panda$core$Bit panda$core$UInt8$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 643
uint8_t $tmp416 = param0.value;
uint64_t $tmp417 = param1.value;
bool $tmp418 = ((uint64_t) $tmp416) == $tmp417;
panda$core$Bit $tmp419 = panda$core$Bit$init$builtin_bit($tmp418);
return $tmp419;

}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 649
uint8_t $tmp420 = param0.value;
int8_t $tmp421 = param1.value;
bool $tmp422 = ((int16_t) $tmp420) != ((int16_t) $tmp421);
panda$core$Bit $tmp423 = panda$core$Bit$init$builtin_bit($tmp422);
return $tmp423;

}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 655
uint8_t $tmp424 = param0.value;
int16_t $tmp425 = param1.value;
bool $tmp426 = ((int32_t) $tmp424) != ((int32_t) $tmp425);
panda$core$Bit $tmp427 = panda$core$Bit$init$builtin_bit($tmp426);
return $tmp427;

}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 661
uint8_t $tmp428 = param0.value;
int32_t $tmp429 = param1.value;
bool $tmp430 = ((int64_t) $tmp428) != ((int64_t) $tmp429);
panda$core$Bit $tmp431 = panda$core$Bit$init$builtin_bit($tmp430);
return $tmp431;

}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 668
uint8_t $tmp432 = param0.value;
uint8_t $tmp433 = param1.value;
bool $tmp434 = $tmp432 != $tmp433;
panda$core$Bit $tmp435 = panda$core$Bit$init$builtin_bit($tmp434);
return $tmp435;

}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 674
uint8_t $tmp436 = param0.value;
uint16_t $tmp437 = param1.value;
bool $tmp438 = ((uint16_t) $tmp436) != $tmp437;
panda$core$Bit $tmp439 = panda$core$Bit$init$builtin_bit($tmp438);
return $tmp439;

}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 680
uint8_t $tmp440 = param0.value;
uint32_t $tmp441 = param1.value;
bool $tmp442 = ((uint32_t) $tmp440) != $tmp441;
panda$core$Bit $tmp443 = panda$core$Bit$init$builtin_bit($tmp442);
return $tmp443;

}
panda$core$Bit panda$core$UInt8$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 686
uint8_t $tmp444 = param0.value;
uint64_t $tmp445 = param1.value;
bool $tmp446 = ((uint64_t) $tmp444) != $tmp445;
panda$core$Bit $tmp447 = panda$core$Bit$init$builtin_bit($tmp446);
return $tmp447;

}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 692
uint8_t $tmp448 = param0.value;
int8_t $tmp449 = param1.value;
bool $tmp450 = ((int16_t) $tmp448) < ((int16_t) $tmp449);
panda$core$Bit $tmp451 = panda$core$Bit$init$builtin_bit($tmp450);
return $tmp451;

}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 698
uint8_t $tmp452 = param0.value;
int16_t $tmp453 = param1.value;
bool $tmp454 = ((int32_t) $tmp452) < ((int32_t) $tmp453);
panda$core$Bit $tmp455 = panda$core$Bit$init$builtin_bit($tmp454);
return $tmp455;

}
panda$core$Bit panda$core$UInt8$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 704
uint8_t $tmp456 = param0.value;
int32_t $tmp457 = param1.value;
bool $tmp458 = ((int64_t) $tmp456) < ((int64_t) $tmp457);
panda$core$Bit $tmp459 = panda$core$Bit$init$builtin_bit($tmp458);
return $tmp459;

}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 711
uint8_t $tmp460 = param0.value;
uint8_t $tmp461 = param1.value;
bool $tmp462 = $tmp460 < $tmp461;
panda$core$Bit $tmp463 = panda$core$Bit$init$builtin_bit($tmp462);
return $tmp463;

}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 717
uint8_t $tmp464 = param0.value;
uint16_t $tmp465 = param1.value;
bool $tmp466 = ((uint16_t) $tmp464) < $tmp465;
panda$core$Bit $tmp467 = panda$core$Bit$init$builtin_bit($tmp466);
return $tmp467;

}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 723
uint8_t $tmp468 = param0.value;
uint32_t $tmp469 = param1.value;
bool $tmp470 = ((uint32_t) $tmp468) < $tmp469;
panda$core$Bit $tmp471 = panda$core$Bit$init$builtin_bit($tmp470);
return $tmp471;

}
panda$core$Bit panda$core$UInt8$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 729
uint8_t $tmp472 = param0.value;
uint64_t $tmp473 = param1.value;
bool $tmp474 = ((uint64_t) $tmp472) < $tmp473;
panda$core$Bit $tmp475 = panda$core$Bit$init$builtin_bit($tmp474);
return $tmp475;

}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 735
uint8_t $tmp476 = param0.value;
int8_t $tmp477 = param1.value;
bool $tmp478 = ((int16_t) $tmp476) > ((int16_t) $tmp477);
panda$core$Bit $tmp479 = panda$core$Bit$init$builtin_bit($tmp478);
return $tmp479;

}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 741
uint8_t $tmp480 = param0.value;
int16_t $tmp481 = param1.value;
bool $tmp482 = ((int32_t) $tmp480) > ((int32_t) $tmp481);
panda$core$Bit $tmp483 = panda$core$Bit$init$builtin_bit($tmp482);
return $tmp483;

}
panda$core$Bit panda$core$UInt8$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 747
uint8_t $tmp484 = param0.value;
int32_t $tmp485 = param1.value;
bool $tmp486 = ((int64_t) $tmp484) > ((int64_t) $tmp485);
panda$core$Bit $tmp487 = panda$core$Bit$init$builtin_bit($tmp486);
return $tmp487;

}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 754
uint8_t $tmp488 = param0.value;
uint8_t $tmp489 = param1.value;
bool $tmp490 = $tmp488 > $tmp489;
panda$core$Bit $tmp491 = panda$core$Bit$init$builtin_bit($tmp490);
return $tmp491;

}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 760
uint8_t $tmp492 = param0.value;
uint16_t $tmp493 = param1.value;
bool $tmp494 = ((uint16_t) $tmp492) > $tmp493;
panda$core$Bit $tmp495 = panda$core$Bit$init$builtin_bit($tmp494);
return $tmp495;

}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 766
uint8_t $tmp496 = param0.value;
uint32_t $tmp497 = param1.value;
bool $tmp498 = ((uint32_t) $tmp496) > $tmp497;
panda$core$Bit $tmp499 = panda$core$Bit$init$builtin_bit($tmp498);
return $tmp499;

}
panda$core$Bit panda$core$UInt8$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 772
uint8_t $tmp500 = param0.value;
uint64_t $tmp501 = param1.value;
bool $tmp502 = ((uint64_t) $tmp500) > $tmp501;
panda$core$Bit $tmp503 = panda$core$Bit$init$builtin_bit($tmp502);
return $tmp503;

}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 778
uint8_t $tmp504 = param0.value;
int8_t $tmp505 = param1.value;
bool $tmp506 = ((int16_t) $tmp504) >= ((int16_t) $tmp505);
panda$core$Bit $tmp507 = panda$core$Bit$init$builtin_bit($tmp506);
return $tmp507;

}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 784
uint8_t $tmp508 = param0.value;
int16_t $tmp509 = param1.value;
bool $tmp510 = ((int32_t) $tmp508) >= ((int32_t) $tmp509);
panda$core$Bit $tmp511 = panda$core$Bit$init$builtin_bit($tmp510);
return $tmp511;

}
panda$core$Bit panda$core$UInt8$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 790
uint8_t $tmp512 = param0.value;
int32_t $tmp513 = param1.value;
bool $tmp514 = ((int64_t) $tmp512) >= ((int64_t) $tmp513);
panda$core$Bit $tmp515 = panda$core$Bit$init$builtin_bit($tmp514);
return $tmp515;

}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 797
uint8_t $tmp516 = param0.value;
uint8_t $tmp517 = param1.value;
bool $tmp518 = $tmp516 >= $tmp517;
panda$core$Bit $tmp519 = panda$core$Bit$init$builtin_bit($tmp518);
return $tmp519;

}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 803
uint8_t $tmp520 = param0.value;
uint16_t $tmp521 = param1.value;
bool $tmp522 = ((uint16_t) $tmp520) >= $tmp521;
panda$core$Bit $tmp523 = panda$core$Bit$init$builtin_bit($tmp522);
return $tmp523;

}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 809
uint8_t $tmp524 = param0.value;
uint32_t $tmp525 = param1.value;
bool $tmp526 = ((uint32_t) $tmp524) >= $tmp525;
panda$core$Bit $tmp527 = panda$core$Bit$init$builtin_bit($tmp526);
return $tmp527;

}
panda$core$Bit panda$core$UInt8$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 815
uint8_t $tmp528 = param0.value;
uint64_t $tmp529 = param1.value;
bool $tmp530 = ((uint64_t) $tmp528) >= $tmp529;
panda$core$Bit $tmp531 = panda$core$Bit$init$builtin_bit($tmp530);
return $tmp531;

}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 821
uint8_t $tmp532 = param0.value;
int8_t $tmp533 = param1.value;
bool $tmp534 = ((int16_t) $tmp532) <= ((int16_t) $tmp533);
panda$core$Bit $tmp535 = panda$core$Bit$init$builtin_bit($tmp534);
return $tmp535;

}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 827
uint8_t $tmp536 = param0.value;
int16_t $tmp537 = param1.value;
bool $tmp538 = ((int32_t) $tmp536) <= ((int32_t) $tmp537);
panda$core$Bit $tmp539 = panda$core$Bit$init$builtin_bit($tmp538);
return $tmp539;

}
panda$core$Bit panda$core$UInt8$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 833
uint8_t $tmp540 = param0.value;
int32_t $tmp541 = param1.value;
bool $tmp542 = ((int64_t) $tmp540) <= ((int64_t) $tmp541);
panda$core$Bit $tmp543 = panda$core$Bit$init$builtin_bit($tmp542);
return $tmp543;

}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 840
uint8_t $tmp544 = param0.value;
uint8_t $tmp545 = param1.value;
bool $tmp546 = $tmp544 <= $tmp545;
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit($tmp546);
return $tmp547;

}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 846
uint8_t $tmp548 = param0.value;
uint16_t $tmp549 = param1.value;
bool $tmp550 = ((uint16_t) $tmp548) <= $tmp549;
panda$core$Bit $tmp551 = panda$core$Bit$init$builtin_bit($tmp550);
return $tmp551;

}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 852
uint8_t $tmp552 = param0.value;
uint32_t $tmp553 = param1.value;
bool $tmp554 = ((uint32_t) $tmp552) <= $tmp553;
panda$core$Bit $tmp555 = panda$core$Bit$init$builtin_bit($tmp554);
return $tmp555;

}
panda$core$Bit panda$core$UInt8$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 858
uint8_t $tmp556 = param0.value;
uint64_t $tmp557 = param1.value;
bool $tmp558 = ((uint64_t) $tmp556) <= $tmp557;
panda$core$Bit $tmp559 = panda$core$Bit$init$builtin_bit($tmp558);
return $tmp559;

}
panda$core$Int16 panda$core$UInt8$min$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 864
uint8_t $tmp560 = param0.value;
int8_t $tmp561 = param1.value;
bool $tmp562 = ((int16_t) $tmp560) < ((int16_t) $tmp561);
panda$core$Bit $tmp563 = panda$core$Bit$init$builtin_bit($tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block1; else goto block2;
block1:;
// line 865
uint8_t $tmp565 = param0.value;
panda$core$Int16 $tmp566 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp565));
return $tmp566;
block2:;
// line 867
int8_t $tmp567 = param1.value;
panda$core$Int16 $tmp568 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp567));
return $tmp568;

}
panda$core$Int32 panda$core$UInt8$min$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 873
uint8_t $tmp569 = param0.value;
int16_t $tmp570 = param1.value;
bool $tmp571 = ((int32_t) $tmp569) < ((int32_t) $tmp570);
panda$core$Bit $tmp572 = panda$core$Bit$init$builtin_bit($tmp571);
bool $tmp573 = $tmp572.value;
if ($tmp573) goto block1; else goto block2;
block1:;
// line 874
uint8_t $tmp574 = param0.value;
panda$core$Int32 $tmp575 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp574));
return $tmp575;
block2:;
// line 876
int16_t $tmp576 = param1.value;
panda$core$Int32 $tmp577 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp576));
return $tmp577;

}
panda$core$Int64 panda$core$UInt8$min$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 882
uint8_t $tmp578 = param0.value;
int32_t $tmp579 = param1.value;
bool $tmp580 = ((int64_t) $tmp578) < ((int64_t) $tmp579);
panda$core$Bit $tmp581 = panda$core$Bit$init$builtin_bit($tmp580);
bool $tmp582 = $tmp581.value;
if ($tmp582) goto block1; else goto block2;
block1:;
// line 883
uint8_t $tmp583 = param0.value;
panda$core$Int64 $tmp584 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp583));
return $tmp584;
block2:;
// line 885
int32_t $tmp585 = param1.value;
panda$core$Int64 $tmp586 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp585));
return $tmp586;

}
panda$core$UInt8 panda$core$UInt8$min$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 892
uint8_t $tmp587 = param0.value;
uint8_t $tmp588 = param1.value;
bool $tmp589 = $tmp587 < $tmp588;
panda$core$Bit $tmp590 = panda$core$Bit$init$builtin_bit($tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block1; else goto block2;
block1:;
// line 893
uint8_t $tmp592 = param0.value;
panda$core$UInt8 $tmp593 = panda$core$UInt8$init$builtin_uint8($tmp592);
return $tmp593;
block2:;
// line 895
uint8_t $tmp594 = param1.value;
panda$core$UInt8 $tmp595 = panda$core$UInt8$init$builtin_uint8($tmp594);
return $tmp595;

}
panda$core$UInt16 panda$core$UInt8$min$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 901
uint8_t $tmp596 = param0.value;
uint16_t $tmp597 = param1.value;
bool $tmp598 = ((uint16_t) $tmp596) < $tmp597;
panda$core$Bit $tmp599 = panda$core$Bit$init$builtin_bit($tmp598);
bool $tmp600 = $tmp599.value;
if ($tmp600) goto block1; else goto block2;
block1:;
// line 902
uint8_t $tmp601 = param0.value;
panda$core$UInt16 $tmp602 = panda$core$UInt16$init$builtin_uint16(((uint16_t) $tmp601));
return $tmp602;
block2:;
// line 904
uint16_t $tmp603 = param1.value;
panda$core$UInt16 $tmp604 = panda$core$UInt16$init$builtin_uint16($tmp603);
return $tmp604;

}
panda$core$UInt32 panda$core$UInt8$min$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 910
uint8_t $tmp605 = param0.value;
uint32_t $tmp606 = param1.value;
bool $tmp607 = ((uint32_t) $tmp605) < $tmp606;
panda$core$Bit $tmp608 = panda$core$Bit$init$builtin_bit($tmp607);
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block1; else goto block2;
block1:;
// line 911
uint8_t $tmp610 = param0.value;
panda$core$UInt32 $tmp611 = panda$core$UInt32$init$builtin_uint32(((uint32_t) $tmp610));
return $tmp611;
block2:;
// line 913
uint32_t $tmp612 = param1.value;
panda$core$UInt32 $tmp613 = panda$core$UInt32$init$builtin_uint32($tmp612);
return $tmp613;

}
panda$core$UInt64 panda$core$UInt8$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 919
uint8_t $tmp614 = param0.value;
uint64_t $tmp615 = param1.value;
bool $tmp616 = ((uint64_t) $tmp614) < $tmp615;
panda$core$Bit $tmp617 = panda$core$Bit$init$builtin_bit($tmp616);
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block1; else goto block2;
block1:;
// line 920
uint8_t $tmp619 = param0.value;
panda$core$UInt64 $tmp620 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp619));
return $tmp620;
block2:;
// line 922
uint64_t $tmp621 = param1.value;
panda$core$UInt64 $tmp622 = panda$core$UInt64$init$builtin_uint64($tmp621);
return $tmp622;

}
panda$core$Int16 panda$core$UInt8$max$panda$core$Int8$R$panda$core$Int16(panda$core$UInt8 param0, panda$core$Int8 param1) {

// line 928
uint8_t $tmp623 = param0.value;
int8_t $tmp624 = param1.value;
bool $tmp625 = ((int16_t) $tmp623) > ((int16_t) $tmp624);
panda$core$Bit $tmp626 = panda$core$Bit$init$builtin_bit($tmp625);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block1; else goto block2;
block1:;
// line 929
uint8_t $tmp628 = param0.value;
panda$core$Int16 $tmp629 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp628));
return $tmp629;
block2:;
// line 931
int8_t $tmp630 = param1.value;
panda$core$Int16 $tmp631 = panda$core$Int16$init$builtin_int16(((int16_t) $tmp630));
return $tmp631;

}
panda$core$Int32 panda$core$UInt8$max$panda$core$Int16$R$panda$core$Int32(panda$core$UInt8 param0, panda$core$Int16 param1) {

// line 937
uint8_t $tmp632 = param0.value;
int16_t $tmp633 = param1.value;
bool $tmp634 = ((int32_t) $tmp632) > ((int32_t) $tmp633);
panda$core$Bit $tmp635 = panda$core$Bit$init$builtin_bit($tmp634);
bool $tmp636 = $tmp635.value;
if ($tmp636) goto block1; else goto block2;
block1:;
// line 938
uint8_t $tmp637 = param0.value;
panda$core$Int32 $tmp638 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp637));
return $tmp638;
block2:;
// line 940
int16_t $tmp639 = param1.value;
panda$core$Int32 $tmp640 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp639));
return $tmp640;

}
panda$core$Int64 panda$core$UInt8$max$panda$core$Int32$R$panda$core$Int64(panda$core$UInt8 param0, panda$core$Int32 param1) {

// line 946
uint8_t $tmp641 = param0.value;
int32_t $tmp642 = param1.value;
bool $tmp643 = ((int64_t) $tmp641) > ((int64_t) $tmp642);
panda$core$Bit $tmp644 = panda$core$Bit$init$builtin_bit($tmp643);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block1; else goto block2;
block1:;
// line 947
uint8_t $tmp646 = param0.value;
panda$core$Int64 $tmp647 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp646));
return $tmp647;
block2:;
// line 949
int32_t $tmp648 = param1.value;
panda$core$Int64 $tmp649 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp648));
return $tmp649;

}
panda$core$UInt8 panda$core$UInt8$max$panda$core$UInt8$R$panda$core$UInt8(panda$core$UInt8 param0, panda$core$UInt8 param1) {

// line 956
uint8_t $tmp650 = param0.value;
uint8_t $tmp651 = param1.value;
bool $tmp652 = $tmp650 > $tmp651;
panda$core$Bit $tmp653 = panda$core$Bit$init$builtin_bit($tmp652);
bool $tmp654 = $tmp653.value;
if ($tmp654) goto block1; else goto block2;
block1:;
// line 957
uint8_t $tmp655 = param0.value;
panda$core$UInt8 $tmp656 = panda$core$UInt8$init$builtin_uint8($tmp655);
return $tmp656;
block2:;
// line 959
uint8_t $tmp657 = param1.value;
panda$core$UInt8 $tmp658 = panda$core$UInt8$init$builtin_uint8($tmp657);
return $tmp658;

}
panda$core$UInt16 panda$core$UInt8$max$panda$core$UInt16$R$panda$core$UInt16(panda$core$UInt8 param0, panda$core$UInt16 param1) {

// line 965
uint8_t $tmp659 = param0.value;
uint16_t $tmp660 = param1.value;
bool $tmp661 = ((uint16_t) $tmp659) > $tmp660;
panda$core$Bit $tmp662 = panda$core$Bit$init$builtin_bit($tmp661);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block1; else goto block2;
block1:;
// line 966
uint8_t $tmp664 = param0.value;
panda$core$UInt16 $tmp665 = panda$core$UInt16$init$builtin_uint16(((uint16_t) $tmp664));
return $tmp665;
block2:;
// line 968
uint16_t $tmp666 = param1.value;
panda$core$UInt16 $tmp667 = panda$core$UInt16$init$builtin_uint16($tmp666);
return $tmp667;

}
panda$core$UInt32 panda$core$UInt8$max$panda$core$UInt32$R$panda$core$UInt32(panda$core$UInt8 param0, panda$core$UInt32 param1) {

// line 974
uint8_t $tmp668 = param0.value;
uint32_t $tmp669 = param1.value;
bool $tmp670 = ((uint32_t) $tmp668) > $tmp669;
panda$core$Bit $tmp671 = panda$core$Bit$init$builtin_bit($tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block1; else goto block2;
block1:;
// line 975
uint8_t $tmp673 = param0.value;
panda$core$UInt32 $tmp674 = panda$core$UInt32$init$builtin_uint32(((uint32_t) $tmp673));
return $tmp674;
block2:;
// line 977
uint32_t $tmp675 = param1.value;
panda$core$UInt32 $tmp676 = panda$core$UInt32$init$builtin_uint32($tmp675);
return $tmp676;

}
panda$core$UInt64 panda$core$UInt8$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt8 param0, panda$core$UInt64 param1) {

// line 983
uint8_t $tmp677 = param0.value;
uint64_t $tmp678 = param1.value;
bool $tmp679 = ((uint64_t) $tmp677) > $tmp678;
panda$core$Bit $tmp680 = panda$core$Bit$init$builtin_bit($tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block1; else goto block2;
block1:;
// line 984
uint8_t $tmp682 = param0.value;
panda$core$UInt64 $tmp683 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp682));
return $tmp683;
block2:;
// line 986
uint64_t $tmp684 = param1.value;
panda$core$UInt64 $tmp685 = panda$core$UInt64$init$builtin_uint64($tmp684);
return $tmp685;

}
panda$collections$ListView* panda$core$UInt8$$IDX$panda$core$Range$LTpanda$core$UInt8$GT$R$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$core$Range$LTpanda$core$UInt8$GT param0) {

// line 991
org$pandalanguage$panda$UInt8List* $tmp686 = (org$pandalanguage$panda$UInt8List*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$panda$UInt8List$class);
panda$core$UInt8 $tmp687 = param0.min;
panda$core$UInt8 $tmp688 = param0.max;
panda$core$UInt8 $tmp689 = (panda$core$UInt8) {1};
panda$core$Bit $tmp690 = param0.inclusive;
panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT $tmp691 = panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$init$panda$core$UInt8$panda$core$UInt8$panda$core$UInt8$panda$core$Bit($tmp687, $tmp688, $tmp689, $tmp690);
org$pandalanguage$panda$UInt8List$init$panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT($tmp686, $tmp691);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp686)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp686));
return ((panda$collections$ListView*) $tmp686);

}
panda$collections$ListView* panda$core$UInt8$$IDX$panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT$R$panda$collections$ListView$LTpanda$core$UInt8$GT(panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT param0) {

// line 996
org$pandalanguage$panda$UInt8List* $tmp692 = (org$pandalanguage$panda$UInt8List*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$panda$UInt8List$class);
org$pandalanguage$panda$UInt8List$init$panda$core$SteppedRange$LTpanda$core$UInt8$Cpanda$core$UInt8$GT($tmp692, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp692)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
return ((panda$collections$ListView*) $tmp692);

}
panda$core$Bit panda$core$UInt8$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt8 param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp693 = (panda$core$Int64) {0};
int64_t $tmp694 = param1.value;
int64_t $tmp695 = $tmp693.value;
bool $tmp696 = $tmp694 >= $tmp695;
panda$core$Bit $tmp697 = (panda$core$Bit) {$tmp696};
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block1; else goto block2;
block1:;
panda$core$UInt8$wrapper* $tmp699;
$tmp699 = (panda$core$UInt8$wrapper*) pandaObjectAlloc(13, (panda$core$Class*) &panda$core$UInt8$wrapperclass);
$tmp699->value = param0;
ITable* $tmp700 = ((panda$collections$CollectionView*) $tmp699)->$class->itable;
while ($tmp700->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp700 = $tmp700->next;
}
$fn702 $tmp701 = $tmp700->methods[0];
panda$core$Int64 $tmp703 = $tmp701(((panda$collections$CollectionView*) $tmp699));
int64_t $tmp704 = param1.value;
int64_t $tmp705 = $tmp703.value;
bool $tmp706 = $tmp704 < $tmp705;
panda$core$Bit $tmp707 = (panda$core$Bit) {$tmp706};
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$CollectionView*) $tmp699)));
*(&local0) = $tmp707;
goto block3;
block2:;
*(&local0) = $tmp697;
goto block3;
block3:;
panda$core$Bit $tmp708 = *(&local0);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp710 = (panda$core$Int64) {1001};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s711, $tmp710, &$s712);
abort(); // unreachable
block4:;
// line 1002
panda$core$Int64 $tmp713 = (panda$core$Int64) {1};
panda$core$Int64 $tmp714 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp713, param1);
panda$core$Int64 $tmp715 = panda$core$UInt8$$BAND$panda$core$Int64$R$panda$core$Int64(param0, $tmp714);
panda$core$Int64 $tmp716 = (panda$core$Int64) {0};
panda$core$Bit $tmp717 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp715, $tmp716);
return $tmp717;

}
panda$core$Int64 panda$core$UInt8$get_count$R$panda$core$Int64(panda$core$UInt8 param0) {

// line 1008
panda$core$Int64 $tmp718 = (panda$core$Int64) {8};
return $tmp718;

}
panda$collections$Iterator* panda$core$UInt8$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$UInt8 param0) {

// line 1013
org$pandalanguage$panda$IntBitIterator* $tmp719 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
panda$core$UInt64 $tmp720 = panda$core$UInt8$convert$R$panda$core$UInt64(param0);
panda$core$UInt64 $tmp721 = (panda$core$UInt64) {128};
org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp719, $tmp720, $tmp721);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp719)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
return ((panda$collections$Iterator*) $tmp719);

}
panda$core$Int64 panda$core$UInt8$get_hash$R$panda$core$Int64(panda$core$UInt8 param0) {

// line 1018
uint8_t $tmp722 = param0.value;
panda$core$Int64 $tmp723 = (panda$core$Int64) {((int64_t) $tmp722)};
return $tmp723;

}
panda$core$UInt8$nullable panda$core$UInt8$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt8$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$UInt64$nullable local1;
panda$core$Int64 $tmp724 = (panda$core$Int64) {2};
int64_t $tmp725 = param1.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 >= $tmp726;
panda$core$Bit $tmp728 = (panda$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp730 = (panda$core$Int64) {36};
int64_t $tmp731 = param1.value;
int64_t $tmp732 = $tmp730.value;
bool $tmp733 = $tmp731 <= $tmp732;
panda$core$Bit $tmp734 = (panda$core$Bit) {$tmp733};
*(&local0) = $tmp734;
goto block3;
block2:;
*(&local0) = $tmp728;
goto block3;
block3:;
panda$core$Bit $tmp735 = *(&local0);
bool $tmp736 = $tmp735.value;
if ($tmp736) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp737 = (panda$core$Int64) {1024};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s738, $tmp737, &$s739);
abort(); // unreachable
block4:;
// line 1025
panda$core$UInt64$nullable $tmp740 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(param0, param1);
*(&local1) = $tmp740;
// line 1026
panda$core$UInt64$nullable $tmp741 = *(&local1);
panda$core$Bit $tmp742 = panda$core$Bit$init$builtin_bit(!$tmp741.nonnull);
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block6; else goto block7;
block6:;
// line 1027
return ((panda$core$UInt8$nullable) { .nonnull = false });
block7:;
// line 1029
panda$core$UInt64$nullable $tmp744 = *(&local1);
panda$core$UInt8 $tmp745 = panda$core$UInt64$convert$R$panda$core$UInt8(((panda$core$UInt64) $tmp744.value));
return ((panda$core$UInt8$nullable) { $tmp745, true });

}
panda$core$Int8 panda$core$UInt8$convert$R$panda$core$Int8(panda$core$UInt8 param0) {

// line 1034
uint8_t $tmp746 = param0.value;
panda$core$Int8 $tmp747 = (panda$core$Int8) {((int8_t) $tmp746)};
return $tmp747;

}
panda$core$Int16 panda$core$UInt8$convert$R$panda$core$Int16(panda$core$UInt8 param0) {

// line 1039
uint8_t $tmp748 = param0.value;
panda$core$Int16 $tmp749 = (panda$core$Int16) {((int16_t) $tmp748)};
return $tmp749;

}
panda$core$Int32 panda$core$UInt8$convert$R$panda$core$Int32(panda$core$UInt8 param0) {

// line 1044
uint8_t $tmp750 = param0.value;
panda$core$Int32 $tmp751 = (panda$core$Int32) {((int32_t) $tmp750)};
return $tmp751;

}
panda$core$Int64 panda$core$UInt8$convert$R$panda$core$Int64(panda$core$UInt8 param0) {

// line 1049
uint8_t $tmp752 = param0.value;
panda$core$Int64 $tmp753 = (panda$core$Int64) {((int64_t) $tmp752)};
return $tmp753;

}
panda$core$UInt16 panda$core$UInt8$convert$R$panda$core$UInt16(panda$core$UInt8 param0) {

// line 1054
uint8_t $tmp754 = param0.value;
panda$core$UInt16 $tmp755 = (panda$core$UInt16) {((uint16_t) $tmp754)};
return $tmp755;

}
panda$core$UInt32 panda$core$UInt8$convert$R$panda$core$UInt32(panda$core$UInt8 param0) {

// line 1059
uint8_t $tmp756 = param0.value;
panda$core$UInt32 $tmp757 = (panda$core$UInt32) {((uint32_t) $tmp756)};
return $tmp757;

}
panda$core$UInt64 panda$core$UInt8$convert$R$panda$core$UInt64(panda$core$UInt8 param0) {

// line 1064
uint8_t $tmp758 = param0.value;
panda$core$UInt64 $tmp759 = (panda$core$UInt64) {((uint64_t) $tmp758)};
return $tmp759;

}
panda$core$Real32 panda$core$UInt8$convert$R$panda$core$Real32(panda$core$UInt8 param0) {

// line 1069
uint8_t $tmp760 = param0.value;
panda$core$Real32 $tmp761 = (panda$core$Real32) {((float) $tmp760)};
return $tmp761;

}
panda$core$Real64 panda$core$UInt8$convert$R$panda$core$Real64(panda$core$UInt8 param0) {

// line 1074
uint8_t $tmp762 = param0.value;
panda$core$Real64 $tmp763 = (panda$core$Real64) {((double) $tmp762)};
return $tmp763;

}
panda$core$String* panda$core$UInt8$convert$R$panda$core$String(panda$core$UInt8 param0) {

panda$core$Int64 local0;
panda$core$Char8* local1;
panda$core$Int64 local2;
panda$core$UInt8 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 1080
panda$core$Int64 $tmp764 = (panda$core$Int64) {3};
*(&local0) = $tmp764;
// line 1081
panda$core$Int64 $tmp765 = *(&local0);
int64_t $tmp766 = $tmp765.value;
panda$core$Char8* $tmp767 = ((panda$core$Char8*) pandaZAlloc($tmp766 * 1));
*(&local1) = $tmp767;
// line 1082
panda$core$Int64 $tmp768 = *(&local0);
panda$core$Int64 $tmp769 = (panda$core$Int64) {1};
int64_t $tmp770 = $tmp768.value;
int64_t $tmp771 = $tmp769.value;
int64_t $tmp772 = $tmp770 - $tmp771;
panda$core$Int64 $tmp773 = (panda$core$Int64) {$tmp772};
*(&local2) = $tmp773;
// line 1083
*(&local3) = param0;
// line 1084
panda$core$UInt8 $tmp774 = *(&local3);
panda$core$UInt8 $tmp775 = (panda$core$UInt8) {0};
uint8_t $tmp776 = $tmp774.value;
uint8_t $tmp777 = $tmp775.value;
bool $tmp778 = $tmp776 >= $tmp777;
panda$core$Bit $tmp779 = (panda$core$Bit) {$tmp778};
bool $tmp780 = $tmp779.value;
if ($tmp780) goto block1; else goto block3;
block1:;
// line 1085
goto block4;
block4:;
// line 1086
panda$core$Char8* $tmp781 = *(&local1);
panda$core$UInt8 $tmp782 = *(&local3);
panda$core$UInt8 $tmp783 = (panda$core$UInt8) {10};
panda$core$UInt32 $tmp784 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32($tmp782, $tmp783);
panda$core$UInt32 $tmp785 = (panda$core$UInt32) {48};
uint32_t $tmp786 = $tmp784.value;
uint32_t $tmp787 = $tmp785.value;
uint32_t $tmp788 = $tmp786 + $tmp787;
panda$core$UInt32 $tmp789 = (panda$core$UInt32) {$tmp788};
panda$core$UInt8 $tmp790 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp789);
panda$core$Char8 $tmp791 = panda$core$Char8$init$panda$core$UInt8($tmp790);
panda$core$Int64 $tmp792 = *(&local2);
int64_t $tmp793 = $tmp792.value;
$tmp781[$tmp793] = $tmp791;
// line 1087
panda$core$UInt8 $tmp794 = *(&local3);
panda$core$UInt32 $tmp795 = panda$core$UInt32$init$panda$core$UInt8($tmp794);
panda$core$UInt32 $tmp796 = (panda$core$UInt32) {10};
uint32_t $tmp797 = $tmp795.value;
uint32_t $tmp798 = $tmp796.value;
uint32_t $tmp799 = $tmp797 / $tmp798;
panda$core$UInt32 $tmp800 = (panda$core$UInt32) {$tmp799};
panda$core$UInt8 $tmp801 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp800);
*(&local3) = $tmp801;
// line 1088
panda$core$Int64 $tmp802 = *(&local2);
panda$core$Int64 $tmp803 = (panda$core$Int64) {1};
int64_t $tmp804 = $tmp802.value;
int64_t $tmp805 = $tmp803.value;
int64_t $tmp806 = $tmp804 - $tmp805;
panda$core$Int64 $tmp807 = (panda$core$Int64) {$tmp806};
*(&local2) = $tmp807;
goto block5;
block5:;
panda$core$UInt8 $tmp808 = *(&local3);
panda$core$UInt8 $tmp809 = (panda$core$UInt8) {0};
uint8_t $tmp810 = $tmp808.value;
uint8_t $tmp811 = $tmp809.value;
bool $tmp812 = $tmp810 > $tmp811;
panda$core$Bit $tmp813 = (panda$core$Bit) {$tmp812};
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block4; else goto block6;
block6:;
// line 1091
panda$core$Int64 $tmp815 = *(&local2);
panda$core$Int64 $tmp816 = (panda$core$Int64) {1};
int64_t $tmp817 = $tmp815.value;
int64_t $tmp818 = $tmp816.value;
int64_t $tmp819 = $tmp817 + $tmp818;
panda$core$Int64 $tmp820 = (panda$core$Int64) {$tmp819};
*(&local2) = $tmp820;
goto block2;
block3:;
// line 1
// line 1094
goto block7;
block7:;
// line 1095
panda$core$Char8* $tmp821 = *(&local1);
panda$core$UInt32 $tmp822 = (panda$core$UInt32) {48};
panda$core$UInt8 $tmp823 = *(&local3);
panda$core$UInt8 $tmp824 = (panda$core$UInt8) {10};
panda$core$UInt32 $tmp825 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32($tmp823, $tmp824);
uint32_t $tmp826 = $tmp822.value;
uint32_t $tmp827 = $tmp825.value;
uint32_t $tmp828 = $tmp826 - $tmp827;
panda$core$UInt32 $tmp829 = (panda$core$UInt32) {$tmp828};
panda$core$UInt8 $tmp830 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp829);
panda$core$Char8 $tmp831 = panda$core$Char8$init$panda$core$UInt8($tmp830);
panda$core$Int64 $tmp832 = *(&local2);
int64_t $tmp833 = $tmp832.value;
$tmp821[$tmp833] = $tmp831;
// line 1096
panda$core$UInt8 $tmp834 = *(&local3);
panda$core$UInt32 $tmp835 = panda$core$UInt32$init$panda$core$UInt8($tmp834);
panda$core$UInt32 $tmp836 = (panda$core$UInt32) {10};
uint32_t $tmp837 = $tmp835.value;
uint32_t $tmp838 = $tmp836.value;
uint32_t $tmp839 = $tmp837 / $tmp838;
panda$core$UInt32 $tmp840 = (panda$core$UInt32) {$tmp839};
panda$core$UInt8 $tmp841 = panda$core$UInt32$convert$R$panda$core$UInt8($tmp840);
*(&local3) = $tmp841;
// line 1097
panda$core$Int64 $tmp842 = *(&local2);
panda$core$Int64 $tmp843 = (panda$core$Int64) {1};
int64_t $tmp844 = $tmp842.value;
int64_t $tmp845 = $tmp843.value;
int64_t $tmp846 = $tmp844 - $tmp845;
panda$core$Int64 $tmp847 = (panda$core$Int64) {$tmp846};
*(&local2) = $tmp847;
goto block8;
block8:;
panda$core$UInt8 $tmp848 = *(&local3);
panda$core$UInt8 $tmp849 = (panda$core$UInt8) {0};
uint8_t $tmp850 = $tmp848.value;
uint8_t $tmp851 = $tmp849.value;
bool $tmp852 = $tmp850 < $tmp851;
panda$core$Bit $tmp853 = (panda$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block7; else goto block9;
block9:;
// line 1100
panda$core$Char8* $tmp855 = *(&local1);
panda$core$UInt8 $tmp856 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp857 = panda$core$Char8$init$panda$core$UInt8($tmp856);
panda$core$Int64 $tmp858 = *(&local2);
int64_t $tmp859 = $tmp858.value;
$tmp855[$tmp859] = $tmp857;
goto block2;
block2:;
// line 1102
panda$core$Int64 $tmp860 = *(&local0);
panda$core$Int64 $tmp861 = *(&local2);
int64_t $tmp862 = $tmp860.value;
int64_t $tmp863 = $tmp861.value;
int64_t $tmp864 = $tmp862 - $tmp863;
panda$core$Int64 $tmp865 = (panda$core$Int64) {$tmp864};
*(&local4) = $tmp865;
// line 1103
panda$core$Int64 $tmp866 = (panda$core$Int64) {0};
panda$core$Int64 $tmp867 = *(&local4);
panda$core$Bit $tmp868 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp869 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp866, $tmp867, $tmp868);
panda$core$Int64 $tmp870 = $tmp869.min;
*(&local5) = $tmp870;
panda$core$Int64 $tmp871 = $tmp869.max;
panda$core$Bit $tmp872 = $tmp869.inclusive;
bool $tmp873 = $tmp872.value;
panda$core$Int64 $tmp874 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp875 = panda$core$Int64$convert$R$panda$core$UInt64($tmp874);
if ($tmp873) goto block13; else goto block14;
block13:;
int64_t $tmp876 = $tmp870.value;
int64_t $tmp877 = $tmp871.value;
bool $tmp878 = $tmp876 <= $tmp877;
panda$core$Bit $tmp879 = (panda$core$Bit) {$tmp878};
bool $tmp880 = $tmp879.value;
if ($tmp880) goto block10; else goto block11;
block14:;
int64_t $tmp881 = $tmp870.value;
int64_t $tmp882 = $tmp871.value;
bool $tmp883 = $tmp881 < $tmp882;
panda$core$Bit $tmp884 = (panda$core$Bit) {$tmp883};
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block10; else goto block11;
block10:;
// line 1104
panda$core$Char8* $tmp886 = *(&local1);
panda$core$Char8* $tmp887 = *(&local1);
panda$core$Int64 $tmp888 = *(&local5);
panda$core$Int64 $tmp889 = *(&local2);
int64_t $tmp890 = $tmp888.value;
int64_t $tmp891 = $tmp889.value;
int64_t $tmp892 = $tmp890 + $tmp891;
panda$core$Int64 $tmp893 = (panda$core$Int64) {$tmp892};
int64_t $tmp894 = $tmp893.value;
panda$core$Char8 $tmp895 = $tmp887[$tmp894];
panda$core$Int64 $tmp896 = *(&local5);
int64_t $tmp897 = $tmp896.value;
$tmp886[$tmp897] = $tmp895;
goto block12;
block12:;
panda$core$Int64 $tmp898 = *(&local5);
int64_t $tmp899 = $tmp871.value;
int64_t $tmp900 = $tmp898.value;
int64_t $tmp901 = $tmp899 - $tmp900;
panda$core$Int64 $tmp902 = (panda$core$Int64) {$tmp901};
panda$core$UInt64 $tmp903 = panda$core$Int64$convert$R$panda$core$UInt64($tmp902);
if ($tmp873) goto block16; else goto block17;
block16:;
uint64_t $tmp904 = $tmp903.value;
uint64_t $tmp905 = $tmp875.value;
bool $tmp906 = $tmp904 >= $tmp905;
panda$core$Bit $tmp907 = (panda$core$Bit) {$tmp906};
bool $tmp908 = $tmp907.value;
if ($tmp908) goto block15; else goto block11;
block17:;
uint64_t $tmp909 = $tmp903.value;
uint64_t $tmp910 = $tmp875.value;
bool $tmp911 = $tmp909 > $tmp910;
panda$core$Bit $tmp912 = (panda$core$Bit) {$tmp911};
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block15; else goto block11;
block15:;
int64_t $tmp914 = $tmp898.value;
int64_t $tmp915 = $tmp874.value;
int64_t $tmp916 = $tmp914 + $tmp915;
panda$core$Int64 $tmp917 = (panda$core$Int64) {$tmp916};
*(&local5) = $tmp917;
goto block10;
block11:;
// line 1106
panda$core$String* $tmp918 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp919 = *(&local1);
panda$core$Int64 $tmp920 = *(&local4);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp918, $tmp919, $tmp920);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp918));
return $tmp918;

}
panda$core$String* panda$core$UInt8$format$panda$core$String$R$panda$core$String(panda$core$UInt8 param0, panda$core$String* param1) {

// line 1112
panda$core$Bit $tmp921 = panda$core$Bit$init$builtin_bit(false);
panda$core$UInt64 $tmp922 = panda$core$UInt8$convert$R$panda$core$UInt64(param0);
panda$core$UInt64 $tmp923 = (panda$core$UInt64) {255};
panda$core$String* $tmp924 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp921, $tmp922, $tmp923, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
return $tmp924;

}
void panda$core$UInt8$cleanup(panda$core$UInt8 param0) {

return;

}

