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
#include "panda/core/UInt32.h"
#include "panda/core/Real32.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Real64.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
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
__attribute__((weak)) panda$core$Int64 panda$core$Int32$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int32$get_hash$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value);

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
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32$shim(panda$core$Object* p0, panda$core$Int32 p1) {
    panda$core$Int32 result = panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$SUB$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Int32$$SUB$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value);

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
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$Int64 result = panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64(((panda$core$Int32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$Real32 panda$core$Int32$$DIV$panda$core$Real32$R$panda$core$Real32$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real32 result = panda$core$Int32$$DIV$panda$core$Real32$R$panda$core$Real32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int32$$DIV$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Int32$$DIV$panda$core$Real64$R$panda$core$Real64(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int32 panda$core$Int32$$BNOT$R$panda$core$Int32$shim(panda$core$Object* p0) {
    panda$core$Int32 result = panda$core$Int32$$BNOT$R$panda$core$Int32(((panda$core$Int32$wrapper*) p0)->value);

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
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim(panda$core$Object* p0, panda$core$UInt32 p1) {
    panda$core$UInt32 result = panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32(((panda$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int32$wrapper*) p0)->value, p1);

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

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$Int32$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int32$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int32$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int32$_panda$collections$CollectionView, { panda$core$Int32$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$Int32$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int32$_panda$core$Formattable, { panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int32$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int32$_panda$collections$ListView, { panda$core$Int32$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int32$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int32$_panda$collections$Key, { panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int32$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int32$_panda$core$Equatable, { panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int32$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int32$_panda$core$Comparable, { panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s1;
panda$core$Int32$class_type panda$core$Int32$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int32$_panda$collections$Iterable, { panda$core$Int32$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$SUB$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$SUB$R$panda$core$Int32$shim, panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$MUL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$REM$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$REM$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$DIV$panda$core$Int8$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$Int16$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$Int32$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Int32$$DIV$panda$core$UInt8$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$UInt16$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$UInt32$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Int32$$DIV$panda$core$Real32$R$panda$core$Real32$shim, panda$core$Int32$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Int32$$BNOT$R$panda$core$Int32$shim, panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$BOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$BXOR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$SHR$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$$SHR$panda$core$UInt32$R$panda$core$UInt32$shim, panda$core$Int32$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int32$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$Int32$abs$R$panda$core$Int32$shim, panda$core$Int32$min$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$min$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$min$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$min$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$min$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int32$min$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int32$min$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$max$panda$core$Int8$R$panda$core$Int32$shim, panda$core$Int32$max$panda$core$Int16$R$panda$core$Int32$shim, panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32$shim, panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int32$max$panda$core$UInt8$R$panda$core$Int64$shim, panda$core$Int32$max$panda$core$UInt16$R$panda$core$Int64$shim, panda$core$Int32$max$panda$core$UInt32$R$panda$core$Int64$shim, panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int32$get_count$R$panda$core$Int64$shim, panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$Int32$get_hash$R$panda$core$Int64$shim, panda$core$Int32$convert$R$panda$core$Int8$shim, panda$core$Int32$convert$R$panda$core$Int16$shim, panda$core$Int32$convert$R$panda$core$Int64$shim, panda$core$Int32$convert$R$panda$core$UInt8$shim, panda$core$Int32$convert$R$panda$core$UInt16$shim, panda$core$Int32$convert$R$panda$core$UInt32$shim, panda$core$Int32$convert$R$panda$core$UInt64$shim, panda$core$Int32$convert$R$panda$core$Real32$shim, panda$core$Int32$convert$R$panda$core$Real64$shim, panda$core$Int32$format$panda$core$String$R$panda$core$String$shim, panda$core$Int32$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$Int32$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int32$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int32$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int32$wrapper_panda$collections$CollectionView, { panda$core$Int32$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$Int32$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int32$wrapper_panda$core$Formattable, { panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int32$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int32$wrapper_panda$collections$ListView, { panda$core$Int32$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int32$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int32$wrapper_panda$collections$Key, { panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int32$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int32$wrapper_panda$core$Equatable, { panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int32$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int32$wrapper_panda$core$Comparable, { panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s3;
panda$core$Int32$wrapperclass_type panda$core$Int32$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int32$wrapper_panda$collections$Iterable, { panda$core$Int32$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn521)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -4218233432987190674, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x70\x61\x6e\x64\x61", 11, -8642535931029163721, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -3871917921568880134, NULL };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x70\x61\x6e\x64\x61", 11, -8642535931029163721, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f", 121, 4989190003100315240, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x70\x61\x6e\x64\x61", 11, -8642535931029163721, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, -4495018837913695980, NULL };

panda$core$Int32 panda$core$Int32$init$builtin_int32(int32_t param0) {

panda$core$Int32 local0;
// line 30
int32_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
panda$core$Int32 $tmp5 = *(&local0);
return $tmp5;

}
panda$core$Int32 panda$core$Int32$init$panda$core$Int8(panda$core$Int8 param0) {

panda$core$Int32 local0;
// line 36
int8_t $tmp6 = param0.value;
int32_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int32_t) $tmp6);
panda$core$Int32 $tmp8 = *(&local0);
return $tmp8;

}
panda$core$Int32 panda$core$Int32$init$panda$core$Int16(panda$core$Int16 param0) {

panda$core$Int32 local0;
// line 42
int16_t $tmp9 = param0.value;
int32_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int32_t) $tmp9);
panda$core$Int32 $tmp11 = *(&local0);
return $tmp11;

}
panda$core$Int32 panda$core$Int32$init$panda$core$UInt8(panda$core$UInt8 param0) {

panda$core$Int32 local0;
// line 48
uint8_t $tmp12 = param0.value;
int32_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((int32_t) $tmp12);
panda$core$Int32 $tmp14 = *(&local0);
return $tmp14;

}
panda$core$Int32 panda$core$Int32$init$panda$core$UInt16(panda$core$UInt16 param0) {

panda$core$Int32 local0;
// line 54
uint16_t $tmp15 = param0.value;
int32_t* $tmp16 = &(&local0)->value;
*$tmp16 = ((int32_t) $tmp15);
panda$core$Int32 $tmp17 = *(&local0);
return $tmp17;

}
panda$core$Int32 panda$core$Int32$$ADD$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 60
int32_t $tmp18 = param0.value;
int32_t $tmp19 = param1.value;
int32_t $tmp20 = $tmp18 + $tmp19;
panda$core$Int32 $tmp21 = panda$core$Int32$init$builtin_int32($tmp20);
return $tmp21;

}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 66
int32_t $tmp22 = param0.value;
int64_t $tmp23 = param1.value;
int64_t $tmp24 = ((int64_t) $tmp22) + $tmp23;
panda$core$Int64 $tmp25 = panda$core$Int64$init$builtin_int64($tmp24);
return $tmp25;

}
panda$core$Int64 panda$core$Int32$$ADD$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 72
int32_t $tmp26 = param0.value;
uint32_t $tmp27 = param1.value;
int64_t $tmp28 = ((int64_t) $tmp26) + ((int64_t) $tmp27);
panda$core$Int64 $tmp29 = panda$core$Int64$init$builtin_int64($tmp28);
return $tmp29;

}
panda$core$Int32 panda$core$Int32$$SUB$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 78
int32_t $tmp30 = param0.value;
int32_t $tmp31 = param1.value;
int32_t $tmp32 = $tmp30 - $tmp31;
panda$core$Int32 $tmp33 = panda$core$Int32$init$builtin_int32($tmp32);
return $tmp33;

}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 84
int32_t $tmp34 = param0.value;
int64_t $tmp35 = param1.value;
int64_t $tmp36 = ((int64_t) $tmp34) - $tmp35;
panda$core$Int64 $tmp37 = panda$core$Int64$init$builtin_int64($tmp36);
return $tmp37;

}
panda$core$Int64 panda$core$Int32$$SUB$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 90
int32_t $tmp38 = param0.value;
uint32_t $tmp39 = param1.value;
int64_t $tmp40 = ((int64_t) $tmp38) - ((int64_t) $tmp39);
panda$core$Int64 $tmp41 = panda$core$Int64$init$builtin_int64($tmp40);
return $tmp41;

}
panda$core$Int32 panda$core$Int32$$SUB$R$panda$core$Int32(panda$core$Int32 param0) {

// line 95
int32_t $tmp42 = param0.value;
int32_t $tmp43 = -$tmp42;
panda$core$Int32 $tmp44 = (panda$core$Int32) {$tmp43};
return $tmp44;

}
panda$core$Int32 panda$core$Int32$$MUL$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 101
int32_t $tmp45 = param0.value;
int32_t $tmp46 = param1.value;
int32_t $tmp47 = $tmp45 * $tmp46;
panda$core$Int32 $tmp48 = panda$core$Int32$init$builtin_int32($tmp47);
return $tmp48;

}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 107
int32_t $tmp49 = param0.value;
int64_t $tmp50 = param1.value;
int64_t $tmp51 = ((int64_t) $tmp49) * $tmp50;
panda$core$Int64 $tmp52 = panda$core$Int64$init$builtin_int64($tmp51);
return $tmp52;

}
panda$core$Int64 panda$core$Int32$$MUL$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 113
int32_t $tmp53 = param0.value;
uint32_t $tmp54 = param1.value;
int64_t $tmp55 = ((int64_t) $tmp53) * ((int64_t) $tmp54);
panda$core$Int64 $tmp56 = panda$core$Int64$init$builtin_int64($tmp55);
return $tmp56;

}
panda$core$Int32 panda$core$Int32$$INTDIV$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 119
int32_t $tmp57 = param0.value;
int32_t $tmp58 = param1.value;
int32_t $tmp59 = $tmp57 / $tmp58;
panda$core$Int32 $tmp60 = panda$core$Int32$init$builtin_int32($tmp59);
return $tmp60;

}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 125
int32_t $tmp61 = param0.value;
int64_t $tmp62 = param1.value;
int64_t $tmp63 = ((int64_t) $tmp61) / $tmp62;
panda$core$Int64 $tmp64 = panda$core$Int64$init$builtin_int64($tmp63);
return $tmp64;

}
panda$core$Int64 panda$core$Int32$$INTDIV$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 131
int32_t $tmp65 = param0.value;
uint32_t $tmp66 = param1.value;
int64_t $tmp67 = ((int64_t) $tmp65) / ((int64_t) $tmp66);
panda$core$Int64 $tmp68 = panda$core$Int64$init$builtin_int64($tmp67);
return $tmp68;

}
panda$core$Int32 panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 137
int32_t $tmp69 = param0.value;
int32_t $tmp70 = param1.value;
int32_t $tmp71 = $tmp69 % $tmp70;
panda$core$Int32 $tmp72 = panda$core$Int32$init$builtin_int32($tmp71);
return $tmp72;

}
panda$core$Int64 panda$core$Int32$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 143
int32_t $tmp73 = param0.value;
int64_t $tmp74 = param1.value;
int64_t $tmp75 = ((int64_t) $tmp73) % $tmp74;
panda$core$Int64 $tmp76 = panda$core$Int64$init$builtin_int64($tmp75);
return $tmp76;

}
panda$core$Int64 panda$core$Int32$$REM$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 149
int32_t $tmp77 = param0.value;
uint32_t $tmp78 = param1.value;
int64_t $tmp79 = ((int64_t) $tmp77) % ((int64_t) $tmp78);
panda$core$Int64 $tmp80 = panda$core$Int64$init$builtin_int64($tmp79);
return $tmp80;

}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$Int8$R$panda$core$Real32(panda$core$Int32 param0, panda$core$Int8 param1) {

// line 155
int32_t $tmp81 = param0.value;
int8_t $tmp82 = param1.value;
float $tmp83 = ((float) $tmp81) / ((float) $tmp82);
panda$core$Real32 $tmp84 = panda$core$Real32$init$builtin_float32($tmp83);
return $tmp84;

}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$Int16$R$panda$core$Real32(panda$core$Int32 param0, panda$core$Int16 param1) {

// line 161
int32_t $tmp85 = param0.value;
int16_t $tmp86 = param1.value;
float $tmp87 = ((float) $tmp85) / ((float) $tmp86);
panda$core$Real32 $tmp88 = panda$core$Real32$init$builtin_float32($tmp87);
return $tmp88;

}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$Int32$R$panda$core$Real32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 167
int32_t $tmp89 = param0.value;
int32_t $tmp90 = param1.value;
float $tmp91 = ((float) $tmp89) / ((float) $tmp90);
panda$core$Real32 $tmp92 = panda$core$Real32$init$builtin_float32($tmp91);
return $tmp92;

}
panda$core$Real64 panda$core$Int32$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 173
int32_t $tmp93 = param0.value;
int64_t $tmp94 = param1.value;
double $tmp95 = ((double) $tmp93) / ((double) $tmp94);
panda$core$Real64 $tmp96 = panda$core$Real64$init$builtin_float64($tmp95);
return $tmp96;

}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$UInt8$R$panda$core$Real32(panda$core$Int32 param0, panda$core$UInt8 param1) {

// line 179
int32_t $tmp97 = param0.value;
uint8_t $tmp98 = param1.value;
float $tmp99 = ((float) $tmp97) / ((float) $tmp98);
panda$core$Real32 $tmp100 = panda$core$Real32$init$builtin_float32($tmp99);
return $tmp100;

}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$UInt16$R$panda$core$Real32(panda$core$Int32 param0, panda$core$UInt16 param1) {

// line 185
int32_t $tmp101 = param0.value;
uint16_t $tmp102 = param1.value;
float $tmp103 = ((float) $tmp101) / ((float) $tmp102);
panda$core$Real32 $tmp104 = panda$core$Real32$init$builtin_float32($tmp103);
return $tmp104;

}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$UInt32$R$panda$core$Real32(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 191
int32_t $tmp105 = param0.value;
uint32_t $tmp106 = param1.value;
float $tmp107 = ((float) $tmp105) / ((float) $tmp106);
panda$core$Real32 $tmp108 = panda$core$Real32$init$builtin_float32($tmp107);
return $tmp108;

}
panda$core$Real64 panda$core$Int32$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Int32 param0, panda$core$UInt64 param1) {

// line 197
int32_t $tmp109 = param0.value;
uint64_t $tmp110 = param1.value;
double $tmp111 = ((double) $tmp109) / ((double) $tmp110);
panda$core$Real64 $tmp112 = panda$core$Real64$init$builtin_float64($tmp111);
return $tmp112;

}
panda$core$Real32 panda$core$Int32$$DIV$panda$core$Real32$R$panda$core$Real32(panda$core$Int32 param0, panda$core$Real32 param1) {

// line 203
int32_t $tmp113 = param0.value;
float $tmp114 = param1.value;
float $tmp115 = ((float) $tmp113) / $tmp114;
panda$core$Real32 $tmp116 = panda$core$Real32$init$builtin_float32($tmp115);
return $tmp116;

}
panda$core$Real64 panda$core$Int32$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Int32 param0, panda$core$Real64 param1) {

// line 209
int32_t $tmp117 = param0.value;
double $tmp118 = param1.value;
double $tmp119 = ((double) $tmp117) / $tmp118;
panda$core$Real64 $tmp120 = panda$core$Real64$init$builtin_float64($tmp119);
return $tmp120;

}
panda$core$Int32 panda$core$Int32$$BNOT$R$panda$core$Int32(panda$core$Int32 param0) {

// line 214
int32_t $tmp121 = param0.value;
int32_t $tmp122 = !$tmp121;
panda$core$Int32 $tmp123 = (panda$core$Int32) {$tmp122};
return $tmp123;

}
panda$core$Int32 panda$core$Int32$$BAND$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 220
int32_t $tmp124 = param0.value;
int32_t $tmp125 = param1.value;
int32_t $tmp126 = $tmp124 & $tmp125;
panda$core$Int32 $tmp127 = panda$core$Int32$init$builtin_int32($tmp126);
return $tmp127;

}
panda$core$Int64 panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 226
int32_t $tmp128 = param0.value;
int64_t $tmp129 = param1.value;
int64_t $tmp130 = ((int64_t) $tmp128) & $tmp129;
panda$core$Int64 $tmp131 = panda$core$Int64$init$builtin_int64($tmp130);
return $tmp131;

}
panda$core$UInt32 panda$core$Int32$$BAND$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 232
int32_t $tmp132 = param0.value;
uint32_t $tmp133 = param1.value;
uint32_t $tmp134 = ((uint32_t) $tmp132) & $tmp133;
panda$core$UInt32 $tmp135 = panda$core$UInt32$init$builtin_uint32($tmp134);
return $tmp135;

}
panda$core$UInt64 panda$core$Int32$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 param0, panda$core$UInt64 param1) {

// line 238
int32_t $tmp136 = param0.value;
uint64_t $tmp137 = param1.value;
uint64_t $tmp138 = ((uint64_t) $tmp136) & $tmp137;
panda$core$UInt64 $tmp139 = panda$core$UInt64$init$builtin_uint64($tmp138);
return $tmp139;

}
panda$core$Int32 panda$core$Int32$$BOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 244
int32_t $tmp140 = param0.value;
int32_t $tmp141 = param1.value;
int32_t $tmp142 = $tmp140 | $tmp141;
panda$core$Int32 $tmp143 = panda$core$Int32$init$builtin_int32($tmp142);
return $tmp143;

}
panda$core$Int64 panda$core$Int32$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 250
int32_t $tmp144 = param0.value;
int64_t $tmp145 = param1.value;
int64_t $tmp146 = ((int64_t) $tmp144) | $tmp145;
panda$core$Int64 $tmp147 = panda$core$Int64$init$builtin_int64($tmp146);
return $tmp147;

}
panda$core$UInt32 panda$core$Int32$$BOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 256
int32_t $tmp148 = param0.value;
uint32_t $tmp149 = param1.value;
uint32_t $tmp150 = ((uint32_t) $tmp148) | $tmp149;
panda$core$UInt32 $tmp151 = panda$core$UInt32$init$builtin_uint32($tmp150);
return $tmp151;

}
panda$core$UInt64 panda$core$Int32$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 param0, panda$core$UInt64 param1) {

// line 262
int32_t $tmp152 = param0.value;
uint64_t $tmp153 = param1.value;
uint64_t $tmp154 = ((uint64_t) $tmp152) | $tmp153;
panda$core$UInt64 $tmp155 = panda$core$UInt64$init$builtin_uint64($tmp154);
return $tmp155;

}
panda$core$Int32 panda$core$Int32$$BXOR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 268
int32_t $tmp156 = param0.value;
int32_t $tmp157 = param1.value;
int32_t $tmp158 = $tmp156 ^ $tmp157;
panda$core$Int32 $tmp159 = panda$core$Int32$init$builtin_int32($tmp158);
return $tmp159;

}
panda$core$Int64 panda$core$Int32$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 274
int32_t $tmp160 = param0.value;
int64_t $tmp161 = param1.value;
int64_t $tmp162 = ((int64_t) $tmp160) ^ $tmp161;
panda$core$Int64 $tmp163 = panda$core$Int64$init$builtin_int64($tmp162);
return $tmp163;

}
panda$core$UInt32 panda$core$Int32$$BXOR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 280
int32_t $tmp164 = param0.value;
uint32_t $tmp165 = param1.value;
uint32_t $tmp166 = ((uint32_t) $tmp164) ^ $tmp165;
panda$core$UInt32 $tmp167 = panda$core$UInt32$init$builtin_uint32($tmp166);
return $tmp167;

}
panda$core$UInt64 panda$core$Int32$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 param0, panda$core$UInt64 param1) {

// line 286
int32_t $tmp168 = param0.value;
uint64_t $tmp169 = param1.value;
uint64_t $tmp170 = ((uint64_t) $tmp168) ^ $tmp169;
panda$core$UInt64 $tmp171 = panda$core$UInt64$init$builtin_uint64($tmp170);
return $tmp171;

}
panda$core$Int32 panda$core$Int32$$SHL$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 292
int32_t $tmp172 = param0.value;
int32_t $tmp173 = param1.value;
int32_t $tmp174 = $tmp172 << $tmp173;
panda$core$Int32 $tmp175 = panda$core$Int32$init$builtin_int32($tmp174);
return $tmp175;

}
panda$core$Int64 panda$core$Int32$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 298
int32_t $tmp176 = param0.value;
int64_t $tmp177 = param1.value;
int64_t $tmp178 = ((int64_t) $tmp176) << $tmp177;
panda$core$Int64 $tmp179 = panda$core$Int64$init$builtin_int64($tmp178);
return $tmp179;

}
panda$core$UInt32 panda$core$Int32$$SHL$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 304
int32_t $tmp180 = param0.value;
uint32_t $tmp181 = param1.value;
uint32_t $tmp182 = ((uint32_t) $tmp180) << $tmp181;
panda$core$UInt32 $tmp183 = panda$core$UInt32$init$builtin_uint32($tmp182);
return $tmp183;

}
panda$core$UInt64 panda$core$Int32$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 param0, panda$core$UInt64 param1) {

// line 310
int32_t $tmp184 = param0.value;
uint64_t $tmp185 = param1.value;
uint64_t $tmp186 = ((uint64_t) $tmp184) << $tmp185;
panda$core$UInt64 $tmp187 = panda$core$UInt64$init$builtin_uint64($tmp186);
return $tmp187;

}
panda$core$Int32 panda$core$Int32$$SHR$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 316
int32_t $tmp188 = param0.value;
int32_t $tmp189 = param1.value;
int32_t $tmp190 = $tmp188 >> $tmp189;
panda$core$Int32 $tmp191 = panda$core$Int32$init$builtin_int32($tmp190);
return $tmp191;

}
panda$core$Int64 panda$core$Int32$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 322
int32_t $tmp192 = param0.value;
int64_t $tmp193 = param1.value;
int64_t $tmp194 = ((int64_t) $tmp192) >> $tmp193;
panda$core$Int64 $tmp195 = panda$core$Int64$init$builtin_int64($tmp194);
return $tmp195;

}
panda$core$UInt32 panda$core$Int32$$SHR$panda$core$UInt32$R$panda$core$UInt32(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 328
int32_t $tmp196 = param0.value;
uint32_t $tmp197 = param1.value;
uint32_t $tmp198 = ((uint32_t) $tmp196) >> $tmp197;
panda$core$UInt32 $tmp199 = panda$core$UInt32$init$builtin_uint32($tmp198);
return $tmp199;

}
panda$core$UInt64 panda$core$Int32$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int32 param0, panda$core$UInt64 param1) {

// line 334
int32_t $tmp200 = param0.value;
uint64_t $tmp201 = param1.value;
uint64_t $tmp202 = ((uint64_t) $tmp200) >> $tmp201;
panda$core$UInt64 $tmp203 = panda$core$UInt64$init$builtin_uint64($tmp202);
return $tmp203;

}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int8 param1) {

// line 340
int32_t $tmp204 = param0.value;
int8_t $tmp205 = param1.value;
bool $tmp206 = $tmp204 == ((int32_t) $tmp205);
panda$core$Bit $tmp207 = panda$core$Bit$init$builtin_bit($tmp206);
return $tmp207;

}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int16 param1) {

// line 346
int32_t $tmp208 = param0.value;
int16_t $tmp209 = param1.value;
bool $tmp210 = $tmp208 == ((int32_t) $tmp209);
panda$core$Bit $tmp211 = panda$core$Bit$init$builtin_bit($tmp210);
return $tmp211;

}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 353
int32_t $tmp212 = param0.value;
int32_t $tmp213 = param1.value;
bool $tmp214 = $tmp212 == $tmp213;
panda$core$Bit $tmp215 = panda$core$Bit$init$builtin_bit($tmp214);
return $tmp215;

}
panda$core$Bit panda$core$Int32$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 359
int32_t $tmp216 = param0.value;
int64_t $tmp217 = param1.value;
bool $tmp218 = ((int64_t) $tmp216) == $tmp217;
panda$core$Bit $tmp219 = panda$core$Bit$init$builtin_bit($tmp218);
return $tmp219;

}
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt8 param1) {

// line 365
int32_t $tmp220 = param0.value;
uint8_t $tmp221 = param1.value;
bool $tmp222 = ((int64_t) $tmp220) == ((int64_t) $tmp221);
panda$core$Bit $tmp223 = panda$core$Bit$init$builtin_bit($tmp222);
return $tmp223;

}
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt16 param1) {

// line 371
int32_t $tmp224 = param0.value;
uint16_t $tmp225 = param1.value;
bool $tmp226 = ((int64_t) $tmp224) == ((int64_t) $tmp225);
panda$core$Bit $tmp227 = panda$core$Bit$init$builtin_bit($tmp226);
return $tmp227;

}
panda$core$Bit panda$core$Int32$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 377
int32_t $tmp228 = param0.value;
uint32_t $tmp229 = param1.value;
bool $tmp230 = ((int64_t) $tmp228) == ((int64_t) $tmp229);
panda$core$Bit $tmp231 = panda$core$Bit$init$builtin_bit($tmp230);
return $tmp231;

}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int8 param1) {

// line 383
int32_t $tmp232 = param0.value;
int8_t $tmp233 = param1.value;
bool $tmp234 = $tmp232 != ((int32_t) $tmp233);
panda$core$Bit $tmp235 = panda$core$Bit$init$builtin_bit($tmp234);
return $tmp235;

}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int16 param1) {

// line 389
int32_t $tmp236 = param0.value;
int16_t $tmp237 = param1.value;
bool $tmp238 = $tmp236 != ((int32_t) $tmp237);
panda$core$Bit $tmp239 = panda$core$Bit$init$builtin_bit($tmp238);
return $tmp239;

}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 396
int32_t $tmp240 = param0.value;
int32_t $tmp241 = param1.value;
bool $tmp242 = $tmp240 != $tmp241;
panda$core$Bit $tmp243 = panda$core$Bit$init$builtin_bit($tmp242);
return $tmp243;

}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 402
int32_t $tmp244 = param0.value;
int64_t $tmp245 = param1.value;
bool $tmp246 = ((int64_t) $tmp244) != $tmp245;
panda$core$Bit $tmp247 = panda$core$Bit$init$builtin_bit($tmp246);
return $tmp247;

}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt8 param1) {

// line 408
int32_t $tmp248 = param0.value;
uint8_t $tmp249 = param1.value;
bool $tmp250 = ((int64_t) $tmp248) != ((int64_t) $tmp249);
panda$core$Bit $tmp251 = panda$core$Bit$init$builtin_bit($tmp250);
return $tmp251;

}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt16 param1) {

// line 414
int32_t $tmp252 = param0.value;
uint16_t $tmp253 = param1.value;
bool $tmp254 = ((int64_t) $tmp252) != ((int64_t) $tmp253);
panda$core$Bit $tmp255 = panda$core$Bit$init$builtin_bit($tmp254);
return $tmp255;

}
panda$core$Bit panda$core$Int32$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 420
int32_t $tmp256 = param0.value;
uint32_t $tmp257 = param1.value;
bool $tmp258 = ((int64_t) $tmp256) != ((int64_t) $tmp257);
panda$core$Bit $tmp259 = panda$core$Bit$init$builtin_bit($tmp258);
return $tmp259;

}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int8 param1) {

// line 426
int32_t $tmp260 = param0.value;
int8_t $tmp261 = param1.value;
bool $tmp262 = $tmp260 < ((int32_t) $tmp261);
panda$core$Bit $tmp263 = panda$core$Bit$init$builtin_bit($tmp262);
return $tmp263;

}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int16 param1) {

// line 432
int32_t $tmp264 = param0.value;
int16_t $tmp265 = param1.value;
bool $tmp266 = $tmp264 < ((int32_t) $tmp265);
panda$core$Bit $tmp267 = panda$core$Bit$init$builtin_bit($tmp266);
return $tmp267;

}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 439
int32_t $tmp268 = param0.value;
int32_t $tmp269 = param1.value;
bool $tmp270 = $tmp268 < $tmp269;
panda$core$Bit $tmp271 = panda$core$Bit$init$builtin_bit($tmp270);
return $tmp271;

}
panda$core$Bit panda$core$Int32$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 445
int32_t $tmp272 = param0.value;
int64_t $tmp273 = param1.value;
bool $tmp274 = ((int64_t) $tmp272) < $tmp273;
panda$core$Bit $tmp275 = panda$core$Bit$init$builtin_bit($tmp274);
return $tmp275;

}
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt8 param1) {

// line 451
int32_t $tmp276 = param0.value;
uint8_t $tmp277 = param1.value;
bool $tmp278 = ((int64_t) $tmp276) < ((int64_t) $tmp277);
panda$core$Bit $tmp279 = panda$core$Bit$init$builtin_bit($tmp278);
return $tmp279;

}
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt16 param1) {

// line 457
int32_t $tmp280 = param0.value;
uint16_t $tmp281 = param1.value;
bool $tmp282 = ((int64_t) $tmp280) < ((int64_t) $tmp281);
panda$core$Bit $tmp283 = panda$core$Bit$init$builtin_bit($tmp282);
return $tmp283;

}
panda$core$Bit panda$core$Int32$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 463
int32_t $tmp284 = param0.value;
uint32_t $tmp285 = param1.value;
bool $tmp286 = ((int64_t) $tmp284) < ((int64_t) $tmp285);
panda$core$Bit $tmp287 = panda$core$Bit$init$builtin_bit($tmp286);
return $tmp287;

}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int8 param1) {

// line 469
int32_t $tmp288 = param0.value;
int8_t $tmp289 = param1.value;
bool $tmp290 = $tmp288 > ((int32_t) $tmp289);
panda$core$Bit $tmp291 = panda$core$Bit$init$builtin_bit($tmp290);
return $tmp291;

}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int16 param1) {

// line 475
int32_t $tmp292 = param0.value;
int16_t $tmp293 = param1.value;
bool $tmp294 = $tmp292 > ((int32_t) $tmp293);
panda$core$Bit $tmp295 = panda$core$Bit$init$builtin_bit($tmp294);
return $tmp295;

}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 482
int32_t $tmp296 = param0.value;
int32_t $tmp297 = param1.value;
bool $tmp298 = $tmp296 > $tmp297;
panda$core$Bit $tmp299 = panda$core$Bit$init$builtin_bit($tmp298);
return $tmp299;

}
panda$core$Bit panda$core$Int32$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 488
int32_t $tmp300 = param0.value;
int64_t $tmp301 = param1.value;
bool $tmp302 = ((int64_t) $tmp300) > $tmp301;
panda$core$Bit $tmp303 = panda$core$Bit$init$builtin_bit($tmp302);
return $tmp303;

}
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt8 param1) {

// line 494
int32_t $tmp304 = param0.value;
uint8_t $tmp305 = param1.value;
bool $tmp306 = ((int64_t) $tmp304) > ((int64_t) $tmp305);
panda$core$Bit $tmp307 = panda$core$Bit$init$builtin_bit($tmp306);
return $tmp307;

}
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt16 param1) {

// line 500
int32_t $tmp308 = param0.value;
uint16_t $tmp309 = param1.value;
bool $tmp310 = ((int64_t) $tmp308) > ((int64_t) $tmp309);
panda$core$Bit $tmp311 = panda$core$Bit$init$builtin_bit($tmp310);
return $tmp311;

}
panda$core$Bit panda$core$Int32$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 506
int32_t $tmp312 = param0.value;
uint32_t $tmp313 = param1.value;
bool $tmp314 = ((int64_t) $tmp312) > ((int64_t) $tmp313);
panda$core$Bit $tmp315 = panda$core$Bit$init$builtin_bit($tmp314);
return $tmp315;

}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int8 param1) {

// line 512
int32_t $tmp316 = param0.value;
int8_t $tmp317 = param1.value;
bool $tmp318 = $tmp316 >= ((int32_t) $tmp317);
panda$core$Bit $tmp319 = panda$core$Bit$init$builtin_bit($tmp318);
return $tmp319;

}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int16 param1) {

// line 518
int32_t $tmp320 = param0.value;
int16_t $tmp321 = param1.value;
bool $tmp322 = $tmp320 >= ((int32_t) $tmp321);
panda$core$Bit $tmp323 = panda$core$Bit$init$builtin_bit($tmp322);
return $tmp323;

}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 525
int32_t $tmp324 = param0.value;
int32_t $tmp325 = param1.value;
bool $tmp326 = $tmp324 >= $tmp325;
panda$core$Bit $tmp327 = panda$core$Bit$init$builtin_bit($tmp326);
return $tmp327;

}
panda$core$Bit panda$core$Int32$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 531
int32_t $tmp328 = param0.value;
int64_t $tmp329 = param1.value;
bool $tmp330 = ((int64_t) $tmp328) >= $tmp329;
panda$core$Bit $tmp331 = panda$core$Bit$init$builtin_bit($tmp330);
return $tmp331;

}
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt8 param1) {

// line 537
int32_t $tmp332 = param0.value;
uint8_t $tmp333 = param1.value;
bool $tmp334 = ((int64_t) $tmp332) >= ((int64_t) $tmp333);
panda$core$Bit $tmp335 = panda$core$Bit$init$builtin_bit($tmp334);
return $tmp335;

}
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt16 param1) {

// line 543
int32_t $tmp336 = param0.value;
uint16_t $tmp337 = param1.value;
bool $tmp338 = ((int64_t) $tmp336) >= ((int64_t) $tmp337);
panda$core$Bit $tmp339 = panda$core$Bit$init$builtin_bit($tmp338);
return $tmp339;

}
panda$core$Bit panda$core$Int32$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 549
int32_t $tmp340 = param0.value;
uint32_t $tmp341 = param1.value;
bool $tmp342 = ((int64_t) $tmp340) >= ((int64_t) $tmp341);
panda$core$Bit $tmp343 = panda$core$Bit$init$builtin_bit($tmp342);
return $tmp343;

}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int8 param1) {

// line 555
int32_t $tmp344 = param0.value;
int8_t $tmp345 = param1.value;
bool $tmp346 = $tmp344 <= ((int32_t) $tmp345);
panda$core$Bit $tmp347 = panda$core$Bit$init$builtin_bit($tmp346);
return $tmp347;

}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int16 param1) {

// line 561
int32_t $tmp348 = param0.value;
int16_t $tmp349 = param1.value;
bool $tmp350 = $tmp348 <= ((int32_t) $tmp349);
panda$core$Bit $tmp351 = panda$core$Bit$init$builtin_bit($tmp350);
return $tmp351;

}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 568
int32_t $tmp352 = param0.value;
int32_t $tmp353 = param1.value;
bool $tmp354 = $tmp352 <= $tmp353;
panda$core$Bit $tmp355 = panda$core$Bit$init$builtin_bit($tmp354);
return $tmp355;

}
panda$core$Bit panda$core$Int32$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 574
int32_t $tmp356 = param0.value;
int64_t $tmp357 = param1.value;
bool $tmp358 = ((int64_t) $tmp356) <= $tmp357;
panda$core$Bit $tmp359 = panda$core$Bit$init$builtin_bit($tmp358);
return $tmp359;

}
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt8 param1) {

// line 580
int32_t $tmp360 = param0.value;
uint8_t $tmp361 = param1.value;
bool $tmp362 = ((int64_t) $tmp360) <= ((int64_t) $tmp361);
panda$core$Bit $tmp363 = panda$core$Bit$init$builtin_bit($tmp362);
return $tmp363;

}
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt16 param1) {

// line 586
int32_t $tmp364 = param0.value;
uint16_t $tmp365 = param1.value;
bool $tmp366 = ((int64_t) $tmp364) <= ((int64_t) $tmp365);
panda$core$Bit $tmp367 = panda$core$Bit$init$builtin_bit($tmp366);
return $tmp367;

}
panda$core$Bit panda$core$Int32$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 592
int32_t $tmp368 = param0.value;
uint32_t $tmp369 = param1.value;
bool $tmp370 = ((int64_t) $tmp368) <= ((int64_t) $tmp369);
panda$core$Bit $tmp371 = panda$core$Bit$init$builtin_bit($tmp370);
return $tmp371;

}
panda$core$Int32 panda$core$Int32$abs$R$panda$core$Int32(panda$core$Int32 param0) {

// line 597
panda$core$Int32 $tmp372 = (panda$core$Int32) {0};
int32_t $tmp373 = param0.value;
int32_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 < $tmp374;
panda$core$Bit $tmp376 = (panda$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block1; else goto block2;
block1:;
// line 598
panda$core$Int32 $tmp378 = panda$core$Int32$$SUB$R$panda$core$Int32(param0);
return $tmp378;
block2:;
// line 600
return param0;

}
panda$core$Int32 panda$core$Int32$min$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int8 param1) {

// line 606
int32_t $tmp379 = param0.value;
int8_t $tmp380 = param1.value;
bool $tmp381 = $tmp379 < ((int32_t) $tmp380);
panda$core$Bit $tmp382 = panda$core$Bit$init$builtin_bit($tmp381);
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block1; else goto block2;
block1:;
// line 607
int32_t $tmp384 = param0.value;
panda$core$Int32 $tmp385 = panda$core$Int32$init$builtin_int32($tmp384);
return $tmp385;
block2:;
// line 609
int8_t $tmp386 = param1.value;
panda$core$Int32 $tmp387 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp386));
return $tmp387;

}
panda$core$Int32 panda$core$Int32$min$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int16 param1) {

// line 615
int32_t $tmp388 = param0.value;
int16_t $tmp389 = param1.value;
bool $tmp390 = $tmp388 < ((int32_t) $tmp389);
panda$core$Bit $tmp391 = panda$core$Bit$init$builtin_bit($tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block1; else goto block2;
block1:;
// line 616
int32_t $tmp393 = param0.value;
panda$core$Int32 $tmp394 = panda$core$Int32$init$builtin_int32($tmp393);
return $tmp394;
block2:;
// line 618
int16_t $tmp395 = param1.value;
panda$core$Int32 $tmp396 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp395));
return $tmp396;

}
panda$core$Int32 panda$core$Int32$min$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 624
int32_t $tmp397 = param0.value;
int32_t $tmp398 = param1.value;
bool $tmp399 = $tmp397 < $tmp398;
panda$core$Bit $tmp400 = panda$core$Bit$init$builtin_bit($tmp399);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block1; else goto block2;
block1:;
// line 625
int32_t $tmp402 = param0.value;
panda$core$Int32 $tmp403 = panda$core$Int32$init$builtin_int32($tmp402);
return $tmp403;
block2:;
// line 627
int32_t $tmp404 = param1.value;
panda$core$Int32 $tmp405 = panda$core$Int32$init$builtin_int32($tmp404);
return $tmp405;

}
panda$core$Int64 panda$core$Int32$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 633
int32_t $tmp406 = param0.value;
int64_t $tmp407 = param1.value;
bool $tmp408 = ((int64_t) $tmp406) < $tmp407;
panda$core$Bit $tmp409 = panda$core$Bit$init$builtin_bit($tmp408);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block1; else goto block2;
block1:;
// line 634
int32_t $tmp411 = param0.value;
panda$core$Int64 $tmp412 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp411));
return $tmp412;
block2:;
// line 636
int64_t $tmp413 = param1.value;
panda$core$Int64 $tmp414 = panda$core$Int64$init$builtin_int64($tmp413);
return $tmp414;

}
panda$core$Int64 panda$core$Int32$min$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt8 param1) {

// line 642
int32_t $tmp415 = param0.value;
uint8_t $tmp416 = param1.value;
bool $tmp417 = ((int64_t) $tmp415) < ((int64_t) $tmp416);
panda$core$Bit $tmp418 = panda$core$Bit$init$builtin_bit($tmp417);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block1; else goto block2;
block1:;
// line 643
int32_t $tmp420 = param0.value;
panda$core$Int64 $tmp421 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp420));
return $tmp421;
block2:;
// line 645
uint8_t $tmp422 = param1.value;
panda$core$Int64 $tmp423 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp422));
return $tmp423;

}
panda$core$Int64 panda$core$Int32$min$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt16 param1) {

// line 651
int32_t $tmp424 = param0.value;
uint16_t $tmp425 = param1.value;
bool $tmp426 = ((int64_t) $tmp424) < ((int64_t) $tmp425);
panda$core$Bit $tmp427 = panda$core$Bit$init$builtin_bit($tmp426);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block1; else goto block2;
block1:;
// line 652
int32_t $tmp429 = param0.value;
panda$core$Int64 $tmp430 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp429));
return $tmp430;
block2:;
// line 654
uint16_t $tmp431 = param1.value;
panda$core$Int64 $tmp432 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp431));
return $tmp432;

}
panda$core$Int64 panda$core$Int32$min$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 660
int32_t $tmp433 = param0.value;
uint32_t $tmp434 = param1.value;
bool $tmp435 = ((int64_t) $tmp433) < ((int64_t) $tmp434);
panda$core$Bit $tmp436 = panda$core$Bit$init$builtin_bit($tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block1; else goto block2;
block1:;
// line 661
int32_t $tmp438 = param0.value;
panda$core$Int64 $tmp439 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp438));
return $tmp439;
block2:;
// line 663
uint32_t $tmp440 = param1.value;
panda$core$Int64 $tmp441 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp440));
return $tmp441;

}
panda$core$Int32 panda$core$Int32$max$panda$core$Int8$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int8 param1) {

// line 670
int32_t $tmp442 = param0.value;
int8_t $tmp443 = param1.value;
bool $tmp444 = $tmp442 > ((int32_t) $tmp443);
panda$core$Bit $tmp445 = panda$core$Bit$init$builtin_bit($tmp444);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block1; else goto block2;
block1:;
// line 671
int32_t $tmp447 = param0.value;
panda$core$Int32 $tmp448 = panda$core$Int32$init$builtin_int32($tmp447);
return $tmp448;
block2:;
// line 673
int8_t $tmp449 = param1.value;
panda$core$Int32 $tmp450 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp449));
return $tmp450;

}
panda$core$Int32 panda$core$Int32$max$panda$core$Int16$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int16 param1) {

// line 679
int32_t $tmp451 = param0.value;
int16_t $tmp452 = param1.value;
bool $tmp453 = $tmp451 > ((int32_t) $tmp452);
panda$core$Bit $tmp454 = panda$core$Bit$init$builtin_bit($tmp453);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block1; else goto block2;
block1:;
// line 680
int32_t $tmp456 = param0.value;
panda$core$Int32 $tmp457 = panda$core$Int32$init$builtin_int32($tmp456);
return $tmp457;
block2:;
// line 682
int16_t $tmp458 = param1.value;
panda$core$Int32 $tmp459 = panda$core$Int32$init$builtin_int32(((int32_t) $tmp458));
return $tmp459;

}
panda$core$Int32 panda$core$Int32$max$panda$core$Int32$R$panda$core$Int32(panda$core$Int32 param0, panda$core$Int32 param1) {

// line 688
int32_t $tmp460 = param0.value;
int32_t $tmp461 = param1.value;
bool $tmp462 = $tmp460 > $tmp461;
panda$core$Bit $tmp463 = panda$core$Bit$init$builtin_bit($tmp462);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block1; else goto block2;
block1:;
// line 689
int32_t $tmp465 = param0.value;
panda$core$Int32 $tmp466 = panda$core$Int32$init$builtin_int32($tmp465);
return $tmp466;
block2:;
// line 691
int32_t $tmp467 = param1.value;
panda$core$Int32 $tmp468 = panda$core$Int32$init$builtin_int32($tmp467);
return $tmp468;

}
panda$core$Int64 panda$core$Int32$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int32 param0, panda$core$Int64 param1) {

// line 697
int32_t $tmp469 = param0.value;
int64_t $tmp470 = param1.value;
bool $tmp471 = ((int64_t) $tmp469) > $tmp470;
panda$core$Bit $tmp472 = panda$core$Bit$init$builtin_bit($tmp471);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block1; else goto block2;
block1:;
// line 698
int32_t $tmp474 = param0.value;
panda$core$Int64 $tmp475 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp474));
return $tmp475;
block2:;
// line 700
int64_t $tmp476 = param1.value;
panda$core$Int64 $tmp477 = panda$core$Int64$init$builtin_int64($tmp476);
return $tmp477;

}
panda$core$Int64 panda$core$Int32$max$panda$core$UInt8$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt8 param1) {

// line 706
int32_t $tmp478 = param0.value;
uint8_t $tmp479 = param1.value;
bool $tmp480 = ((int64_t) $tmp478) > ((int64_t) $tmp479);
panda$core$Bit $tmp481 = panda$core$Bit$init$builtin_bit($tmp480);
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block1; else goto block2;
block1:;
// line 707
int32_t $tmp483 = param0.value;
panda$core$Int64 $tmp484 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp483));
return $tmp484;
block2:;
// line 709
uint8_t $tmp485 = param1.value;
panda$core$Int64 $tmp486 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp485));
return $tmp486;

}
panda$core$Int64 panda$core$Int32$max$panda$core$UInt16$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt16 param1) {

// line 715
int32_t $tmp487 = param0.value;
uint16_t $tmp488 = param1.value;
bool $tmp489 = ((int64_t) $tmp487) > ((int64_t) $tmp488);
panda$core$Bit $tmp490 = panda$core$Bit$init$builtin_bit($tmp489);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block1; else goto block2;
block1:;
// line 716
int32_t $tmp492 = param0.value;
panda$core$Int64 $tmp493 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp492));
return $tmp493;
block2:;
// line 718
uint16_t $tmp494 = param1.value;
panda$core$Int64 $tmp495 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp494));
return $tmp495;

}
panda$core$Int64 panda$core$Int32$max$panda$core$UInt32$R$panda$core$Int64(panda$core$Int32 param0, panda$core$UInt32 param1) {

// line 724
int32_t $tmp496 = param0.value;
uint32_t $tmp497 = param1.value;
bool $tmp498 = ((int64_t) $tmp496) > ((int64_t) $tmp497);
panda$core$Bit $tmp499 = panda$core$Bit$init$builtin_bit($tmp498);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block1; else goto block2;
block1:;
// line 725
int32_t $tmp501 = param0.value;
panda$core$Int64 $tmp502 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp501));
return $tmp502;
block2:;
// line 727
uint32_t $tmp503 = param1.value;
panda$core$Int64 $tmp504 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp503));
return $tmp504;

}
panda$collections$ListView* panda$core$Int32$$IDX$panda$core$Range$LTpanda$core$Int32$GT$R$panda$collections$ListView$LTpanda$core$Int32$GT(panda$core$Range$LTpanda$core$Int32$GT param0) {

// line 733
org$pandalanguage$panda$Int32List* $tmp505 = (org$pandalanguage$panda$Int32List*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$panda$Int32List$class);
panda$core$Int32 $tmp506 = param0.min;
panda$core$Int32 $tmp507 = param0.max;
panda$core$Int32 $tmp508 = (panda$core$Int32) {1};
panda$core$Bit $tmp509 = param0.inclusive;
panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT $tmp510 = panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT$init$panda$core$Int32$panda$core$Int32$panda$core$Int32$panda$core$Bit($tmp506, $tmp507, $tmp508, $tmp509);
org$pandalanguage$panda$Int32List$init$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT($tmp505, $tmp510);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp505)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
return ((panda$collections$ListView*) $tmp505);

}
panda$collections$ListView* panda$core$Int32$$IDX$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT$R$panda$collections$ListView$LTpanda$core$Int32$GT(panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT param0) {

// line 738
org$pandalanguage$panda$Int32List* $tmp511 = (org$pandalanguage$panda$Int32List*) pandaObjectAlloc(40, (panda$core$Class*) &org$pandalanguage$panda$Int32List$class);
org$pandalanguage$panda$Int32List$init$panda$core$SteppedRange$LTpanda$core$Int32$Cpanda$core$Int32$GT($tmp511, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp511)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
return ((panda$collections$ListView*) $tmp511);

}
panda$core$Bit panda$core$Int32$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int32 param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp512 = (panda$core$Int64) {0};
int64_t $tmp513 = param1.value;
int64_t $tmp514 = $tmp512.value;
bool $tmp515 = $tmp513 >= $tmp514;
panda$core$Bit $tmp516 = (panda$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block1; else goto block2;
block1:;
panda$core$Int32$wrapper* $tmp518;
$tmp518 = (panda$core$Int32$wrapper*) pandaObjectAlloc(16, (panda$core$Class*) &panda$core$Int32$wrapperclass);
$tmp518->value = param0;
ITable* $tmp519 = ((panda$collections$CollectionView*) $tmp518)->$class->itable;
while ($tmp519->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp519 = $tmp519->next;
}
$fn521 $tmp520 = $tmp519->methods[0];
panda$core$Int64 $tmp522 = $tmp520(((panda$collections$CollectionView*) $tmp518));
int64_t $tmp523 = param1.value;
int64_t $tmp524 = $tmp522.value;
bool $tmp525 = $tmp523 < $tmp524;
panda$core$Bit $tmp526 = (panda$core$Bit) {$tmp525};
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$CollectionView*) $tmp518)));
*(&local0) = $tmp526;
goto block3;
block2:;
*(&local0) = $tmp516;
goto block3;
block3:;
panda$core$Bit $tmp527 = *(&local0);
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp529 = (panda$core$Int64) {743};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s530, $tmp529, &$s531);
abort(); // unreachable
block4:;
// line 744
panda$core$Int64 $tmp532 = (panda$core$Int64) {1};
panda$core$Int64 $tmp533 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp532, param1);
panda$core$Int64 $tmp534 = panda$core$Int32$$BAND$panda$core$Int64$R$panda$core$Int64(param0, $tmp533);
panda$core$Int64 $tmp535 = (panda$core$Int64) {0};
panda$core$Bit $tmp536 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp534, $tmp535);
return $tmp536;

}
panda$core$Int64 panda$core$Int32$get_count$R$panda$core$Int64(panda$core$Int32 param0) {

// line 750
panda$core$Int64 $tmp537 = (panda$core$Int64) {32};
return $tmp537;

}
panda$collections$Iterator* panda$core$Int32$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$Int32 param0) {

// line 755
org$pandalanguage$panda$IntBitIterator* $tmp538 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
panda$core$UInt64 $tmp539 = panda$core$Int32$convert$R$panda$core$UInt64(param0);
panda$core$UInt64 $tmp540 = (panda$core$UInt64) {2147483648};
org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp538, $tmp539, $tmp540);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp538)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
return ((panda$collections$Iterator*) $tmp538);

}
panda$core$Int64 panda$core$Int32$get_hash$R$panda$core$Int64(panda$core$Int32 param0) {

// line 760
int32_t $tmp541 = param0.value;
panda$core$Int64 $tmp542 = (panda$core$Int64) {((int64_t) $tmp541)};
return $tmp542;

}
panda$core$Int32$nullable panda$core$Int32$parse$panda$core$String$panda$core$Int64$R$panda$core$Int32$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$UInt64$nullable local1;
panda$core$UInt64$nullable local2;
panda$core$Int64 $tmp543 = (panda$core$Int64) {2};
int64_t $tmp544 = param1.value;
int64_t $tmp545 = $tmp543.value;
bool $tmp546 = $tmp544 >= $tmp545;
panda$core$Bit $tmp547 = (panda$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp549 = (panda$core$Int64) {36};
int64_t $tmp550 = param1.value;
int64_t $tmp551 = $tmp549.value;
bool $tmp552 = $tmp550 <= $tmp551;
panda$core$Bit $tmp553 = (panda$core$Bit) {$tmp552};
*(&local0) = $tmp553;
goto block3;
block2:;
*(&local0) = $tmp547;
goto block3;
block3:;
panda$core$Bit $tmp554 = *(&local0);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp556 = (panda$core$Int64) {766};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s557, $tmp556, &$s558);
abort(); // unreachable
block4:;
// line 767
panda$core$Bit $tmp559 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(param0, &$s560);
bool $tmp561 = $tmp559.value;
if ($tmp561) goto block6; else goto block8;
block6:;
// line 768
panda$core$Int64 $tmp562 = (panda$core$Int64) {1};
panda$core$Bit $tmp563 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp564 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp562, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp563);
panda$core$String* $tmp565 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(param0, $tmp564);
panda$core$UInt64$nullable $tmp566 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp565, param1);
*(&local1) = $tmp566;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// line 769
panda$core$UInt64$nullable $tmp567 = *(&local1);
panda$core$Bit $tmp568 = panda$core$Bit$init$builtin_bit(!$tmp567.nonnull);
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block9; else goto block10;
block9:;
// line 770
return ((panda$core$Int32$nullable) { .nonnull = false });
block10:;
// line 772
panda$core$UInt64$nullable $tmp570 = *(&local1);
panda$core$Int32 $tmp571 = panda$core$UInt64$convert$R$panda$core$Int32(((panda$core$UInt64) $tmp570.value));
panda$core$Int32 $tmp572 = panda$core$Int32$$SUB$R$panda$core$Int32($tmp571);
return ((panda$core$Int32$nullable) { $tmp572, true });
block8:;
// line 1
// line 775
panda$core$UInt64$nullable $tmp573 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(param0, param1);
*(&local2) = $tmp573;
// line 776
panda$core$UInt64$nullable $tmp574 = *(&local2);
panda$core$Bit $tmp575 = panda$core$Bit$init$builtin_bit(!$tmp574.nonnull);
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block11; else goto block12;
block11:;
// line 777
return ((panda$core$Int32$nullable) { .nonnull = false });
block12:;
// line 779
panda$core$UInt64$nullable $tmp577 = *(&local2);
panda$core$Int32 $tmp578 = panda$core$UInt64$convert$R$panda$core$Int32(((panda$core$UInt64) $tmp577.value));
return ((panda$core$Int32$nullable) { $tmp578, true });
block7:;
panda$core$Bit $tmp579 = panda$core$Bit$init$builtin_bit(false);
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp581 = (panda$core$Int64) {766};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s582, $tmp581, &$s583);
abort(); // unreachable
block13:;
abort(); // unreachable

}
panda$core$Int8 panda$core$Int32$convert$R$panda$core$Int8(panda$core$Int32 param0) {

// line 785
int32_t $tmp584 = param0.value;
panda$core$Int8 $tmp585 = (panda$core$Int8) {((int8_t) $tmp584)};
return $tmp585;

}
panda$core$Int16 panda$core$Int32$convert$R$panda$core$Int16(panda$core$Int32 param0) {

// line 790
int32_t $tmp586 = param0.value;
panda$core$Int16 $tmp587 = (panda$core$Int16) {((int16_t) $tmp586)};
return $tmp587;

}
panda$core$Int64 panda$core$Int32$convert$R$panda$core$Int64(panda$core$Int32 param0) {

// line 795
int32_t $tmp588 = param0.value;
panda$core$Int64 $tmp589 = (panda$core$Int64) {((int64_t) $tmp588)};
return $tmp589;

}
panda$core$UInt8 panda$core$Int32$convert$R$panda$core$UInt8(panda$core$Int32 param0) {

// line 800
int32_t $tmp590 = param0.value;
panda$core$UInt8 $tmp591 = (panda$core$UInt8) {((uint8_t) $tmp590)};
return $tmp591;

}
panda$core$UInt16 panda$core$Int32$convert$R$panda$core$UInt16(panda$core$Int32 param0) {

// line 805
int32_t $tmp592 = param0.value;
panda$core$UInt16 $tmp593 = (panda$core$UInt16) {((uint16_t) $tmp592)};
return $tmp593;

}
panda$core$UInt32 panda$core$Int32$convert$R$panda$core$UInt32(panda$core$Int32 param0) {

// line 810
int32_t $tmp594 = param0.value;
panda$core$UInt32 $tmp595 = (panda$core$UInt32) {((uint32_t) $tmp594)};
return $tmp595;

}
panda$core$UInt64 panda$core$Int32$convert$R$panda$core$UInt64(panda$core$Int32 param0) {

// line 815
int32_t $tmp596 = param0.value;
panda$core$UInt64 $tmp597 = (panda$core$UInt64) {((uint64_t) $tmp596)};
return $tmp597;

}
panda$core$Real32 panda$core$Int32$convert$R$panda$core$Real32(panda$core$Int32 param0) {

// line 820
int32_t $tmp598 = param0.value;
panda$core$Real32 $tmp599 = (panda$core$Real32) {((float) $tmp598)};
return $tmp599;

}
panda$core$Real64 panda$core$Int32$convert$R$panda$core$Real64(panda$core$Int32 param0) {

// line 825
int32_t $tmp600 = param0.value;
panda$core$Real64 $tmp601 = (panda$core$Real64) {((double) $tmp600)};
return $tmp601;

}
panda$core$String* panda$core$Int32$convert$R$panda$core$String(panda$core$Int32 param0) {

panda$core$Int64 local0;
panda$core$Char8* local1;
panda$core$Int64 local2;
panda$core$Int32 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 831
panda$core$Int64 $tmp602 = (panda$core$Int64) {11};
*(&local0) = $tmp602;
// line 832
panda$core$Int64 $tmp603 = *(&local0);
int64_t $tmp604 = $tmp603.value;
panda$core$Char8* $tmp605 = ((panda$core$Char8*) pandaZAlloc($tmp604 * 1));
*(&local1) = $tmp605;
// line 833
panda$core$Int64 $tmp606 = *(&local0);
panda$core$Int64 $tmp607 = (panda$core$Int64) {1};
int64_t $tmp608 = $tmp606.value;
int64_t $tmp609 = $tmp607.value;
int64_t $tmp610 = $tmp608 - $tmp609;
panda$core$Int64 $tmp611 = (panda$core$Int64) {$tmp610};
*(&local2) = $tmp611;
// line 834
*(&local3) = param0;
// line 835
panda$core$Int32 $tmp612 = *(&local3);
panda$core$Int32 $tmp613 = (panda$core$Int32) {0};
int32_t $tmp614 = $tmp612.value;
int32_t $tmp615 = $tmp613.value;
bool $tmp616 = $tmp614 >= $tmp615;
panda$core$Bit $tmp617 = (panda$core$Bit) {$tmp616};
bool $tmp618 = $tmp617.value;
if ($tmp618) goto block1; else goto block3;
block1:;
// line 836
goto block4;
block4:;
// line 837
panda$core$Char8* $tmp619 = *(&local1);
panda$core$Int32 $tmp620 = *(&local3);
panda$core$Int32 $tmp621 = (panda$core$Int32) {10};
panda$core$Int32 $tmp622 = panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32($tmp620, $tmp621);
panda$core$Int32 $tmp623 = (panda$core$Int32) {48};
int32_t $tmp624 = $tmp622.value;
int32_t $tmp625 = $tmp623.value;
int32_t $tmp626 = $tmp624 + $tmp625;
panda$core$Int32 $tmp627 = (panda$core$Int32) {$tmp626};
panda$core$UInt8 $tmp628 = panda$core$Int32$convert$R$panda$core$UInt8($tmp627);
panda$core$Char8 $tmp629 = panda$core$Char8$init$panda$core$UInt8($tmp628);
panda$core$Int64 $tmp630 = *(&local2);
int64_t $tmp631 = $tmp630.value;
$tmp619[$tmp631] = $tmp629;
// line 838
panda$core$Int32 $tmp632 = *(&local3);
panda$core$Int32 $tmp633 = (panda$core$Int32) {10};
int32_t $tmp634 = $tmp632.value;
int32_t $tmp635 = $tmp633.value;
int32_t $tmp636 = $tmp634 / $tmp635;
panda$core$Int32 $tmp637 = (panda$core$Int32) {$tmp636};
*(&local3) = $tmp637;
// line 839
panda$core$Int64 $tmp638 = *(&local2);
panda$core$Int64 $tmp639 = (panda$core$Int64) {1};
int64_t $tmp640 = $tmp638.value;
int64_t $tmp641 = $tmp639.value;
int64_t $tmp642 = $tmp640 - $tmp641;
panda$core$Int64 $tmp643 = (panda$core$Int64) {$tmp642};
*(&local2) = $tmp643;
goto block5;
block5:;
panda$core$Int32 $tmp644 = *(&local3);
panda$core$Int32 $tmp645 = (panda$core$Int32) {0};
int32_t $tmp646 = $tmp644.value;
int32_t $tmp647 = $tmp645.value;
bool $tmp648 = $tmp646 > $tmp647;
panda$core$Bit $tmp649 = (panda$core$Bit) {$tmp648};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block4; else goto block6;
block6:;
// line 842
panda$core$Int64 $tmp651 = *(&local2);
panda$core$Int64 $tmp652 = (panda$core$Int64) {1};
int64_t $tmp653 = $tmp651.value;
int64_t $tmp654 = $tmp652.value;
int64_t $tmp655 = $tmp653 + $tmp654;
panda$core$Int64 $tmp656 = (panda$core$Int64) {$tmp655};
*(&local2) = $tmp656;
goto block2;
block3:;
// line 1
// line 845
goto block7;
block7:;
// line 846
panda$core$Char8* $tmp657 = *(&local1);
panda$core$Int32 $tmp658 = (panda$core$Int32) {48};
panda$core$Int32 $tmp659 = *(&local3);
panda$core$Int32 $tmp660 = (panda$core$Int32) {10};
panda$core$Int32 $tmp661 = panda$core$Int32$$REM$panda$core$Int32$R$panda$core$Int32($tmp659, $tmp660);
int32_t $tmp662 = $tmp658.value;
int32_t $tmp663 = $tmp661.value;
int32_t $tmp664 = $tmp662 - $tmp663;
panda$core$Int32 $tmp665 = (panda$core$Int32) {$tmp664};
panda$core$UInt8 $tmp666 = panda$core$Int32$convert$R$panda$core$UInt8($tmp665);
panda$core$Char8 $tmp667 = panda$core$Char8$init$panda$core$UInt8($tmp666);
panda$core$Int64 $tmp668 = *(&local2);
int64_t $tmp669 = $tmp668.value;
$tmp657[$tmp669] = $tmp667;
// line 847
panda$core$Int32 $tmp670 = *(&local3);
panda$core$Int32 $tmp671 = (panda$core$Int32) {10};
int32_t $tmp672 = $tmp670.value;
int32_t $tmp673 = $tmp671.value;
int32_t $tmp674 = $tmp672 / $tmp673;
panda$core$Int32 $tmp675 = (panda$core$Int32) {$tmp674};
*(&local3) = $tmp675;
// line 848
panda$core$Int64 $tmp676 = *(&local2);
panda$core$Int64 $tmp677 = (panda$core$Int64) {1};
int64_t $tmp678 = $tmp676.value;
int64_t $tmp679 = $tmp677.value;
int64_t $tmp680 = $tmp678 - $tmp679;
panda$core$Int64 $tmp681 = (panda$core$Int64) {$tmp680};
*(&local2) = $tmp681;
goto block8;
block8:;
panda$core$Int32 $tmp682 = *(&local3);
panda$core$Int32 $tmp683 = (panda$core$Int32) {0};
int32_t $tmp684 = $tmp682.value;
int32_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 < $tmp685;
panda$core$Bit $tmp687 = (panda$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block7; else goto block9;
block9:;
// line 851
panda$core$Char8* $tmp689 = *(&local1);
panda$core$UInt8 $tmp690 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp691 = panda$core$Char8$init$panda$core$UInt8($tmp690);
panda$core$Int64 $tmp692 = *(&local2);
int64_t $tmp693 = $tmp692.value;
$tmp689[$tmp693] = $tmp691;
goto block2;
block2:;
// line 853
panda$core$Int64 $tmp694 = *(&local0);
panda$core$Int64 $tmp695 = *(&local2);
int64_t $tmp696 = $tmp694.value;
int64_t $tmp697 = $tmp695.value;
int64_t $tmp698 = $tmp696 - $tmp697;
panda$core$Int64 $tmp699 = (panda$core$Int64) {$tmp698};
*(&local4) = $tmp699;
// line 854
panda$core$Int64 $tmp700 = (panda$core$Int64) {0};
panda$core$Int64 $tmp701 = *(&local4);
panda$core$Bit $tmp702 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp703 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp700, $tmp701, $tmp702);
panda$core$Int64 $tmp704 = $tmp703.min;
*(&local5) = $tmp704;
panda$core$Int64 $tmp705 = $tmp703.max;
panda$core$Bit $tmp706 = $tmp703.inclusive;
bool $tmp707 = $tmp706.value;
panda$core$Int64 $tmp708 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp709 = panda$core$Int64$convert$R$panda$core$UInt64($tmp708);
if ($tmp707) goto block13; else goto block14;
block13:;
int64_t $tmp710 = $tmp704.value;
int64_t $tmp711 = $tmp705.value;
bool $tmp712 = $tmp710 <= $tmp711;
panda$core$Bit $tmp713 = (panda$core$Bit) {$tmp712};
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block10; else goto block11;
block14:;
int64_t $tmp715 = $tmp704.value;
int64_t $tmp716 = $tmp705.value;
bool $tmp717 = $tmp715 < $tmp716;
panda$core$Bit $tmp718 = (panda$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block10; else goto block11;
block10:;
// line 855
panda$core$Char8* $tmp720 = *(&local1);
panda$core$Char8* $tmp721 = *(&local1);
panda$core$Int64 $tmp722 = *(&local5);
panda$core$Int64 $tmp723 = *(&local2);
int64_t $tmp724 = $tmp722.value;
int64_t $tmp725 = $tmp723.value;
int64_t $tmp726 = $tmp724 + $tmp725;
panda$core$Int64 $tmp727 = (panda$core$Int64) {$tmp726};
int64_t $tmp728 = $tmp727.value;
panda$core$Char8 $tmp729 = $tmp721[$tmp728];
panda$core$Int64 $tmp730 = *(&local5);
int64_t $tmp731 = $tmp730.value;
$tmp720[$tmp731] = $tmp729;
goto block12;
block12:;
panda$core$Int64 $tmp732 = *(&local5);
int64_t $tmp733 = $tmp705.value;
int64_t $tmp734 = $tmp732.value;
int64_t $tmp735 = $tmp733 - $tmp734;
panda$core$Int64 $tmp736 = (panda$core$Int64) {$tmp735};
panda$core$UInt64 $tmp737 = panda$core$Int64$convert$R$panda$core$UInt64($tmp736);
if ($tmp707) goto block16; else goto block17;
block16:;
uint64_t $tmp738 = $tmp737.value;
uint64_t $tmp739 = $tmp709.value;
bool $tmp740 = $tmp738 >= $tmp739;
panda$core$Bit $tmp741 = (panda$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block15; else goto block11;
block17:;
uint64_t $tmp743 = $tmp737.value;
uint64_t $tmp744 = $tmp709.value;
bool $tmp745 = $tmp743 > $tmp744;
panda$core$Bit $tmp746 = (panda$core$Bit) {$tmp745};
bool $tmp747 = $tmp746.value;
if ($tmp747) goto block15; else goto block11;
block15:;
int64_t $tmp748 = $tmp732.value;
int64_t $tmp749 = $tmp708.value;
int64_t $tmp750 = $tmp748 + $tmp749;
panda$core$Int64 $tmp751 = (panda$core$Int64) {$tmp750};
*(&local5) = $tmp751;
goto block10;
block11:;
// line 857
panda$core$String* $tmp752 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp753 = *(&local1);
panda$core$Int64 $tmp754 = *(&local4);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp752, $tmp753, $tmp754);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
return $tmp752;

}
panda$core$String* panda$core$Int32$format$panda$core$String$R$panda$core$String(panda$core$Int32 param0, panda$core$String* param1) {

// line 863
int32_t $tmp755 = param0.value;
bool $tmp756 = $tmp755 < 0;
panda$core$Bit $tmp757 = panda$core$Bit$init$builtin_bit($tmp756);
panda$core$Int32 $tmp758 = panda$core$Int32$abs$R$panda$core$Int32(param0);
panda$core$UInt64 $tmp759 = panda$core$Int32$convert$R$panda$core$UInt64($tmp758);
panda$core$UInt64 $tmp760 = (panda$core$UInt64) {4294967295};
panda$core$String* $tmp761 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp757, $tmp759, $tmp760, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
return $tmp761;

}
void panda$core$Int32$cleanup(panda$core$Int32 param0) {

return;

}

