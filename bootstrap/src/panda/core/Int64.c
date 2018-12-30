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
#include "panda/core/Real64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
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
__attribute__((weak)) panda$core$Int64 panda$core$Int64$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int64$get_hash$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$Int64$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$Real32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$Real32$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$Int64$$DIV$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$Int64$$DIV$panda$core$Real64$R$panda$core$Real64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BNOT$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int64$$BNOT$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value, p1);

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

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$Int64$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int64$_panda$collections$CollectionView, { panda$core$Int64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int64$_panda$core$Formattable, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$_panda$core$Equatable, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[6]; } panda$core$Int64$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int64$_panda$core$Comparable, { panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int64$_panda$collections$ListView, { panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$_panda$collections$Iterable, { panda$core$Int64$get_hash$R$panda$core$Int64$shim} };

static panda$core$String $s1;
panda$core$Int64$class_type panda$core$Int64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$_panda$collections$Key, { panda$core$Int64$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SUB$R$panda$core$Int64$shim, panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$DIV$panda$core$Int8$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Int16$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Int32$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Real32$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Int64$$BNOT$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$abs$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$get_count$R$panda$core$Int64$shim, panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$Int64$get_hash$R$panda$core$Int64$shim, panda$core$Int64$convert$R$panda$core$Int8$shim, panda$core$Int64$convert$R$panda$core$Int16$shim, panda$core$Int64$convert$R$panda$core$Int32$shim, panda$core$Int64$convert$R$panda$core$UInt8$shim, panda$core$Int64$convert$R$panda$core$UInt16$shim, panda$core$Int64$convert$R$panda$core$UInt32$shim, panda$core$Int64$convert$R$panda$core$UInt64$shim, panda$core$Int64$convert$R$panda$core$Real32$shim, panda$core$Int64$convert$R$panda$core$Real64$shim, panda$core$Int64$format$panda$core$String$R$panda$core$String$shim, panda$core$Int64$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$Int64$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$CollectionView, { panda$core$Int64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Formattable, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Equatable, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[6]; } panda$core$Int64$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Comparable, { panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$ListView, { panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$Iterable, { panda$core$Int64$get_hash$R$panda$core$Int64$shim} };

static panda$core$String $s3;
panda$core$Int64$wrapperclass_type panda$core$Int64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$Key, { panda$core$Int64$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn321)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 11, -8642212167383230416, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -5285770296737947933, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 11, -8642212167383230416, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f", 121, 6013435374676263418, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 11, -8642212167383230416, NULL };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, -2674131195915389458, NULL };

panda$core$Int64 panda$core$Int64$init$builtin_int64(int64_t param0) {

panda$core$Int64 local0;
// line 31
int64_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
panda$core$Int64 $tmp5 = *(&local0);
return $tmp5;

}
panda$core$Int64 panda$core$Int64$init$panda$core$Int8(panda$core$Int8 param0) {

panda$core$Int64 local0;
// line 37
int8_t $tmp6 = param0.value;
int64_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int64_t) $tmp6);
panda$core$Int64 $tmp8 = *(&local0);
return $tmp8;

}
panda$core$Int64 panda$core$Int64$init$panda$core$Int16(panda$core$Int16 param0) {

panda$core$Int64 local0;
// line 43
int16_t $tmp9 = param0.value;
int64_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int64_t) $tmp9);
panda$core$Int64 $tmp11 = *(&local0);
return $tmp11;

}
panda$core$Int64 panda$core$Int64$init$panda$core$Int32(panda$core$Int32 param0) {

panda$core$Int64 local0;
// line 49
int32_t $tmp12 = param0.value;
int64_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((int64_t) $tmp12);
panda$core$Int64 $tmp14 = *(&local0);
return $tmp14;

}
panda$core$Int64 panda$core$Int64$init$panda$core$UInt8(panda$core$UInt8 param0) {

panda$core$Int64 local0;
// line 55
uint8_t $tmp15 = param0.value;
int64_t* $tmp16 = &(&local0)->value;
*$tmp16 = ((int64_t) $tmp15);
panda$core$Int64 $tmp17 = *(&local0);
return $tmp17;

}
panda$core$Int64 panda$core$Int64$init$panda$core$UInt16(panda$core$UInt16 param0) {

panda$core$Int64 local0;
// line 61
uint16_t $tmp18 = param0.value;
int64_t* $tmp19 = &(&local0)->value;
*$tmp19 = ((int64_t) $tmp18);
panda$core$Int64 $tmp20 = *(&local0);
return $tmp20;

}
panda$core$Int64 panda$core$Int64$init$panda$core$UInt32(panda$core$UInt32 param0) {

panda$core$Int64 local0;
// line 67
uint32_t $tmp21 = param0.value;
int64_t* $tmp22 = &(&local0)->value;
*$tmp22 = ((int64_t) $tmp21);
panda$core$Int64 $tmp23 = *(&local0);
return $tmp23;

}
panda$core$Int64 panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 73
int64_t $tmp24 = param0.value;
int64_t $tmp25 = param1.value;
int64_t $tmp26 = $tmp24 + $tmp25;
panda$core$Int64 $tmp27 = panda$core$Int64$init$builtin_int64($tmp26);
return $tmp27;

}
panda$core$Int64 panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 79
int64_t $tmp28 = param0.value;
int64_t $tmp29 = param1.value;
int64_t $tmp30 = $tmp28 - $tmp29;
panda$core$Int64 $tmp31 = panda$core$Int64$init$builtin_int64($tmp30);
return $tmp31;

}
panda$core$Int64 panda$core$Int64$$SUB$R$panda$core$Int64(panda$core$Int64 param0) {

// line 84
int64_t $tmp32 = param0.value;
int64_t $tmp33 = -$tmp32;
panda$core$Int64 $tmp34 = (panda$core$Int64) {$tmp33};
return $tmp34;

}
panda$core$Int64 panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 90
int64_t $tmp35 = param0.value;
int64_t $tmp36 = param1.value;
int64_t $tmp37 = $tmp35 * $tmp36;
panda$core$Int64 $tmp38 = panda$core$Int64$init$builtin_int64($tmp37);
return $tmp38;

}
panda$core$Int64 panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 96
int64_t $tmp39 = param0.value;
int64_t $tmp40 = param1.value;
int64_t $tmp41 = $tmp39 / $tmp40;
panda$core$Int64 $tmp42 = panda$core$Int64$init$builtin_int64($tmp41);
return $tmp42;

}
panda$core$Int64 panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 102
int64_t $tmp43 = param0.value;
int64_t $tmp44 = param1.value;
int64_t $tmp45 = $tmp43 % $tmp44;
panda$core$Int64 $tmp46 = panda$core$Int64$init$builtin_int64($tmp45);
return $tmp46;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int8$R$panda$core$Real64(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 108
int64_t $tmp47 = param0.value;
int8_t $tmp48 = param1.value;
double $tmp49 = ((double) $tmp47) / ((double) $tmp48);
panda$core$Real64 $tmp50 = panda$core$Real64$init$builtin_float64($tmp49);
return $tmp50;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int16$R$panda$core$Real64(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 114
int64_t $tmp51 = param0.value;
int16_t $tmp52 = param1.value;
double $tmp53 = ((double) $tmp51) / ((double) $tmp52);
panda$core$Real64 $tmp54 = panda$core$Real64$init$builtin_float64($tmp53);
return $tmp54;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int32$R$panda$core$Real64(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 120
int64_t $tmp55 = param0.value;
int32_t $tmp56 = param1.value;
double $tmp57 = ((double) $tmp55) / ((double) $tmp56);
panda$core$Real64 $tmp58 = panda$core$Real64$init$builtin_float64($tmp57);
return $tmp58;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 126
int64_t $tmp59 = param0.value;
int64_t $tmp60 = param1.value;
double $tmp61 = ((double) $tmp59) / ((double) $tmp60);
panda$core$Real64 $tmp62 = panda$core$Real64$init$builtin_float64($tmp61);
return $tmp62;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt8$R$panda$core$Real64(panda$core$Int64 param0, panda$core$UInt8 param1) {

// line 132
int64_t $tmp63 = param0.value;
uint8_t $tmp64 = param1.value;
double $tmp65 = ((double) $tmp63) / ((double) $tmp64);
panda$core$Real64 $tmp66 = panda$core$Real64$init$builtin_float64($tmp65);
return $tmp66;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt16$R$panda$core$Real64(panda$core$Int64 param0, panda$core$UInt16 param1) {

// line 138
int64_t $tmp67 = param0.value;
uint16_t $tmp68 = param1.value;
double $tmp69 = ((double) $tmp67) / ((double) $tmp68);
panda$core$Real64 $tmp70 = panda$core$Real64$init$builtin_float64($tmp69);
return $tmp70;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt32$R$panda$core$Real64(panda$core$Int64 param0, panda$core$UInt32 param1) {

// line 144
int64_t $tmp71 = param0.value;
uint32_t $tmp72 = param1.value;
double $tmp73 = ((double) $tmp71) / ((double) $tmp72);
panda$core$Real64 $tmp74 = panda$core$Real64$init$builtin_float64($tmp73);
return $tmp74;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$Int64 param0, panda$core$UInt64 param1) {

// line 150
int64_t $tmp75 = param0.value;
uint64_t $tmp76 = param1.value;
double $tmp77 = ((double) $tmp75) / ((double) $tmp76);
panda$core$Real64 $tmp78 = panda$core$Real64$init$builtin_float64($tmp77);
return $tmp78;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Real32$R$panda$core$Real64(panda$core$Int64 param0, panda$core$Real32 param1) {

// line 156
int64_t $tmp79 = param0.value;
float $tmp80 = param1.value;
double $tmp81 = ((double) $tmp79) / ((double) $tmp80);
panda$core$Real64 $tmp82 = panda$core$Real64$init$builtin_float64($tmp81);
return $tmp82;

}
panda$core$Real64 panda$core$Int64$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$Int64 param0, panda$core$Real64 param1) {

// line 162
int64_t $tmp83 = param0.value;
double $tmp84 = param1.value;
double $tmp85 = ((double) $tmp83) / $tmp84;
panda$core$Real64 $tmp86 = panda$core$Real64$init$builtin_float64($tmp85);
return $tmp86;

}
panda$core$Int64 panda$core$Int64$$BNOT$R$panda$core$Int64(panda$core$Int64 param0) {

// line 167
int64_t $tmp87 = param0.value;
int64_t $tmp88 = !$tmp87;
panda$core$Int64 $tmp89 = (panda$core$Int64) {$tmp88};
return $tmp89;

}
panda$core$Int64 panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 173
int64_t $tmp90 = param0.value;
int64_t $tmp91 = param1.value;
int64_t $tmp92 = $tmp90 & $tmp91;
panda$core$Int64 $tmp93 = panda$core$Int64$init$builtin_int64($tmp92);
return $tmp93;

}
panda$core$UInt64 panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 param0, panda$core$UInt64 param1) {

// line 179
int64_t $tmp94 = param0.value;
uint64_t $tmp95 = param1.value;
uint64_t $tmp96 = ((uint64_t) $tmp94) & $tmp95;
panda$core$UInt64 $tmp97 = panda$core$UInt64$init$builtin_uint64($tmp96);
return $tmp97;

}
panda$core$Int64 panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 185
int64_t $tmp98 = param0.value;
int64_t $tmp99 = param1.value;
int64_t $tmp100 = $tmp98 | $tmp99;
panda$core$Int64 $tmp101 = panda$core$Int64$init$builtin_int64($tmp100);
return $tmp101;

}
panda$core$UInt64 panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 param0, panda$core$UInt64 param1) {

// line 191
int64_t $tmp102 = param0.value;
uint64_t $tmp103 = param1.value;
uint64_t $tmp104 = ((uint64_t) $tmp102) | $tmp103;
panda$core$UInt64 $tmp105 = panda$core$UInt64$init$builtin_uint64($tmp104);
return $tmp105;

}
panda$core$Int64 panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 197
int64_t $tmp106 = param0.value;
int64_t $tmp107 = param1.value;
int64_t $tmp108 = $tmp106 ^ $tmp107;
panda$core$Int64 $tmp109 = panda$core$Int64$init$builtin_int64($tmp108);
return $tmp109;

}
panda$core$UInt64 panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 param0, panda$core$UInt64 param1) {

// line 203
int64_t $tmp110 = param0.value;
uint64_t $tmp111 = param1.value;
uint64_t $tmp112 = ((uint64_t) $tmp110) ^ $tmp111;
panda$core$UInt64 $tmp113 = panda$core$UInt64$init$builtin_uint64($tmp112);
return $tmp113;

}
panda$core$Int64 panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 209
int64_t $tmp114 = param0.value;
int64_t $tmp115 = param1.value;
int64_t $tmp116 = $tmp114 << $tmp115;
panda$core$Int64 $tmp117 = panda$core$Int64$init$builtin_int64($tmp116);
return $tmp117;

}
panda$core$UInt64 panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 param0, panda$core$UInt64 param1) {

// line 215
int64_t $tmp118 = param0.value;
uint64_t $tmp119 = param1.value;
uint64_t $tmp120 = ((uint64_t) $tmp118) << $tmp119;
panda$core$UInt64 $tmp121 = panda$core$UInt64$init$builtin_uint64($tmp120);
return $tmp121;

}
panda$core$Int64 panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 221
int64_t $tmp122 = param0.value;
int64_t $tmp123 = param1.value;
int64_t $tmp124 = $tmp122 >> $tmp123;
panda$core$Int64 $tmp125 = panda$core$Int64$init$builtin_int64($tmp124);
return $tmp125;

}
panda$core$UInt64 panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$Int64 param0, panda$core$UInt64 param1) {

// line 227
int64_t $tmp126 = param0.value;
uint64_t $tmp127 = param1.value;
uint64_t $tmp128 = ((uint64_t) $tmp126) >> $tmp127;
panda$core$UInt64 $tmp129 = panda$core$UInt64$init$builtin_uint64($tmp128);
return $tmp129;

}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 233
int64_t $tmp130 = param0.value;
int8_t $tmp131 = param1.value;
bool $tmp132 = $tmp130 == ((int64_t) $tmp131);
panda$core$Bit $tmp133 = panda$core$Bit$init$builtin_bit($tmp132);
return $tmp133;

}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 239
int64_t $tmp134 = param0.value;
int16_t $tmp135 = param1.value;
bool $tmp136 = $tmp134 == ((int64_t) $tmp135);
panda$core$Bit $tmp137 = panda$core$Bit$init$builtin_bit($tmp136);
return $tmp137;

}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 245
int64_t $tmp138 = param0.value;
int32_t $tmp139 = param1.value;
bool $tmp140 = $tmp138 == ((int64_t) $tmp139);
panda$core$Bit $tmp141 = panda$core$Bit$init$builtin_bit($tmp140);
return $tmp141;

}
panda$core$Bit panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 252
int64_t $tmp142 = param0.value;
int64_t $tmp143 = param1.value;
bool $tmp144 = $tmp142 == $tmp143;
panda$core$Bit $tmp145 = panda$core$Bit$init$builtin_bit($tmp144);
return $tmp145;

}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 258
int64_t $tmp146 = param0.value;
int8_t $tmp147 = param1.value;
bool $tmp148 = $tmp146 != ((int64_t) $tmp147);
panda$core$Bit $tmp149 = panda$core$Bit$init$builtin_bit($tmp148);
return $tmp149;

}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 264
int64_t $tmp150 = param0.value;
int16_t $tmp151 = param1.value;
bool $tmp152 = $tmp150 != ((int64_t) $tmp151);
panda$core$Bit $tmp153 = panda$core$Bit$init$builtin_bit($tmp152);
return $tmp153;

}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 270
int64_t $tmp154 = param0.value;
int32_t $tmp155 = param1.value;
bool $tmp156 = $tmp154 != ((int64_t) $tmp155);
panda$core$Bit $tmp157 = panda$core$Bit$init$builtin_bit($tmp156);
return $tmp157;

}
panda$core$Bit panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 277
int64_t $tmp158 = param0.value;
int64_t $tmp159 = param1.value;
bool $tmp160 = $tmp158 != $tmp159;
panda$core$Bit $tmp161 = panda$core$Bit$init$builtin_bit($tmp160);
return $tmp161;

}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 283
int64_t $tmp162 = param0.value;
int8_t $tmp163 = param1.value;
bool $tmp164 = $tmp162 < ((int64_t) $tmp163);
panda$core$Bit $tmp165 = panda$core$Bit$init$builtin_bit($tmp164);
return $tmp165;

}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 289
int64_t $tmp166 = param0.value;
int16_t $tmp167 = param1.value;
bool $tmp168 = $tmp166 < ((int64_t) $tmp167);
panda$core$Bit $tmp169 = panda$core$Bit$init$builtin_bit($tmp168);
return $tmp169;

}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 295
int64_t $tmp170 = param0.value;
int32_t $tmp171 = param1.value;
bool $tmp172 = $tmp170 < ((int64_t) $tmp171);
panda$core$Bit $tmp173 = panda$core$Bit$init$builtin_bit($tmp172);
return $tmp173;

}
panda$core$Bit panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 302
int64_t $tmp174 = param0.value;
int64_t $tmp175 = param1.value;
bool $tmp176 = $tmp174 < $tmp175;
panda$core$Bit $tmp177 = panda$core$Bit$init$builtin_bit($tmp176);
return $tmp177;

}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 308
int64_t $tmp178 = param0.value;
int8_t $tmp179 = param1.value;
bool $tmp180 = $tmp178 > ((int64_t) $tmp179);
panda$core$Bit $tmp181 = panda$core$Bit$init$builtin_bit($tmp180);
return $tmp181;

}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 314
int64_t $tmp182 = param0.value;
int16_t $tmp183 = param1.value;
bool $tmp184 = $tmp182 > ((int64_t) $tmp183);
panda$core$Bit $tmp185 = panda$core$Bit$init$builtin_bit($tmp184);
return $tmp185;

}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 320
int64_t $tmp186 = param0.value;
int32_t $tmp187 = param1.value;
bool $tmp188 = $tmp186 > ((int64_t) $tmp187);
panda$core$Bit $tmp189 = panda$core$Bit$init$builtin_bit($tmp188);
return $tmp189;

}
panda$core$Bit panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 327
int64_t $tmp190 = param0.value;
int64_t $tmp191 = param1.value;
bool $tmp192 = $tmp190 > $tmp191;
panda$core$Bit $tmp193 = panda$core$Bit$init$builtin_bit($tmp192);
return $tmp193;

}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 333
int64_t $tmp194 = param0.value;
int8_t $tmp195 = param1.value;
bool $tmp196 = $tmp194 >= ((int64_t) $tmp195);
panda$core$Bit $tmp197 = panda$core$Bit$init$builtin_bit($tmp196);
return $tmp197;

}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 339
int64_t $tmp198 = param0.value;
int16_t $tmp199 = param1.value;
bool $tmp200 = $tmp198 >= ((int64_t) $tmp199);
panda$core$Bit $tmp201 = panda$core$Bit$init$builtin_bit($tmp200);
return $tmp201;

}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 345
int64_t $tmp202 = param0.value;
int32_t $tmp203 = param1.value;
bool $tmp204 = $tmp202 >= ((int64_t) $tmp203);
panda$core$Bit $tmp205 = panda$core$Bit$init$builtin_bit($tmp204);
return $tmp205;

}
panda$core$Bit panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 352
int64_t $tmp206 = param0.value;
int64_t $tmp207 = param1.value;
bool $tmp208 = $tmp206 >= $tmp207;
panda$core$Bit $tmp209 = panda$core$Bit$init$builtin_bit($tmp208);
return $tmp209;

}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 358
int64_t $tmp210 = param0.value;
int8_t $tmp211 = param1.value;
bool $tmp212 = $tmp210 <= ((int64_t) $tmp211);
panda$core$Bit $tmp213 = panda$core$Bit$init$builtin_bit($tmp212);
return $tmp213;

}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 364
int64_t $tmp214 = param0.value;
int16_t $tmp215 = param1.value;
bool $tmp216 = $tmp214 <= ((int64_t) $tmp215);
panda$core$Bit $tmp217 = panda$core$Bit$init$builtin_bit($tmp216);
return $tmp217;

}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 370
int64_t $tmp218 = param0.value;
int32_t $tmp219 = param1.value;
bool $tmp220 = $tmp218 <= ((int64_t) $tmp219);
panda$core$Bit $tmp221 = panda$core$Bit$init$builtin_bit($tmp220);
return $tmp221;

}
panda$core$Bit panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 377
int64_t $tmp222 = param0.value;
int64_t $tmp223 = param1.value;
bool $tmp224 = $tmp222 <= $tmp223;
panda$core$Bit $tmp225 = panda$core$Bit$init$builtin_bit($tmp224);
return $tmp225;

}
panda$core$Int64 panda$core$Int64$abs$R$panda$core$Int64(panda$core$Int64 param0) {

// line 382
panda$core$Int64 $tmp226 = (panda$core$Int64) {0};
int64_t $tmp227 = param0.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 < $tmp228;
panda$core$Bit $tmp230 = (panda$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block1; else goto block2;
block1:;
// line 383
panda$core$Int64 $tmp232 = panda$core$Int64$$SUB$R$panda$core$Int64(param0);
return $tmp232;
block2:;
// line 385
return param0;

}
panda$core$Int64 panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 391
int64_t $tmp233 = param0.value;
int8_t $tmp234 = param1.value;
bool $tmp235 = $tmp233 < ((int64_t) $tmp234);
panda$core$Bit $tmp236 = panda$core$Bit$init$builtin_bit($tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block1; else goto block2;
block1:;
// line 392
int64_t $tmp238 = param0.value;
panda$core$Int64 $tmp239 = panda$core$Int64$init$builtin_int64($tmp238);
return $tmp239;
block2:;
// line 394
int8_t $tmp240 = param1.value;
panda$core$Int64 $tmp241 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp240));
return $tmp241;

}
panda$core$Int64 panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 400
int64_t $tmp242 = param0.value;
int16_t $tmp243 = param1.value;
bool $tmp244 = $tmp242 < ((int64_t) $tmp243);
panda$core$Bit $tmp245 = panda$core$Bit$init$builtin_bit($tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block1; else goto block2;
block1:;
// line 401
int64_t $tmp247 = param0.value;
panda$core$Int64 $tmp248 = panda$core$Int64$init$builtin_int64($tmp247);
return $tmp248;
block2:;
// line 403
int16_t $tmp249 = param1.value;
panda$core$Int64 $tmp250 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp249));
return $tmp250;

}
panda$core$Int64 panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 409
int64_t $tmp251 = param0.value;
int32_t $tmp252 = param1.value;
bool $tmp253 = $tmp251 < ((int64_t) $tmp252);
panda$core$Bit $tmp254 = panda$core$Bit$init$builtin_bit($tmp253);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block1; else goto block2;
block1:;
// line 410
int64_t $tmp256 = param0.value;
panda$core$Int64 $tmp257 = panda$core$Int64$init$builtin_int64($tmp256);
return $tmp257;
block2:;
// line 412
int32_t $tmp258 = param1.value;
panda$core$Int64 $tmp259 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp258));
return $tmp259;

}
panda$core$Int64 panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 418
int64_t $tmp260 = param0.value;
int64_t $tmp261 = param1.value;
bool $tmp262 = $tmp260 < $tmp261;
panda$core$Bit $tmp263 = panda$core$Bit$init$builtin_bit($tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block1; else goto block2;
block1:;
// line 419
int64_t $tmp265 = param0.value;
panda$core$Int64 $tmp266 = panda$core$Int64$init$builtin_int64($tmp265);
return $tmp266;
block2:;
// line 421
int64_t $tmp267 = param1.value;
panda$core$Int64 $tmp268 = panda$core$Int64$init$builtin_int64($tmp267);
return $tmp268;

}
panda$core$Int64 panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 431
int64_t $tmp269 = param0.value;
int8_t $tmp270 = param1.value;
bool $tmp271 = $tmp269 > ((int64_t) $tmp270);
panda$core$Bit $tmp272 = panda$core$Bit$init$builtin_bit($tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block1; else goto block2;
block1:;
// line 432
int64_t $tmp274 = param0.value;
panda$core$Int64 $tmp275 = panda$core$Int64$init$builtin_int64($tmp274);
return $tmp275;
block2:;
// line 434
int8_t $tmp276 = param1.value;
panda$core$Int64 $tmp277 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp276));
return $tmp277;

}
panda$core$Int64 panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 440
int64_t $tmp278 = param0.value;
int16_t $tmp279 = param1.value;
bool $tmp280 = $tmp278 > ((int64_t) $tmp279);
panda$core$Bit $tmp281 = panda$core$Bit$init$builtin_bit($tmp280);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block1; else goto block2;
block1:;
// line 441
int64_t $tmp283 = param0.value;
panda$core$Int64 $tmp284 = panda$core$Int64$init$builtin_int64($tmp283);
return $tmp284;
block2:;
// line 443
int16_t $tmp285 = param1.value;
panda$core$Int64 $tmp286 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp285));
return $tmp286;

}
panda$core$Int64 panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 449
int64_t $tmp287 = param0.value;
int32_t $tmp288 = param1.value;
bool $tmp289 = $tmp287 > ((int64_t) $tmp288);
panda$core$Bit $tmp290 = panda$core$Bit$init$builtin_bit($tmp289);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block1; else goto block2;
block1:;
// line 450
int64_t $tmp292 = param0.value;
panda$core$Int64 $tmp293 = panda$core$Int64$init$builtin_int64($tmp292);
return $tmp293;
block2:;
// line 452
int32_t $tmp294 = param1.value;
panda$core$Int64 $tmp295 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp294));
return $tmp295;

}
panda$core$Int64 panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 458
int64_t $tmp296 = param0.value;
int64_t $tmp297 = param1.value;
bool $tmp298 = $tmp296 > $tmp297;
panda$core$Bit $tmp299 = panda$core$Bit$init$builtin_bit($tmp298);
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block1; else goto block2;
block1:;
// line 459
int64_t $tmp301 = param0.value;
panda$core$Int64 $tmp302 = panda$core$Int64$init$builtin_int64($tmp301);
return $tmp302;
block2:;
// line 461
int64_t $tmp303 = param1.value;
panda$core$Int64 $tmp304 = panda$core$Int64$init$builtin_int64($tmp303);
return $tmp304;

}
panda$collections$ListView* panda$core$Int64$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$core$Int64$GT(panda$core$Range$LTpanda$core$Int64$GT param0) {

// line 470
org$pandalanguage$panda$Int64List* $tmp305 = (org$pandalanguage$panda$Int64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$Int64List$class);
panda$core$Int64 $tmp306 = param0.min;
panda$core$Int64 $tmp307 = param0.max;
panda$core$Int64 $tmp308 = (panda$core$Int64) {1};
panda$core$Bit $tmp309 = param0.inclusive;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp310 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp306, $tmp307, $tmp308, $tmp309);
org$pandalanguage$panda$Int64List$init$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT($tmp305, $tmp310);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp305)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
return ((panda$collections$ListView*) $tmp305);

}
panda$collections$ListView* panda$core$Int64$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$core$Int64$GT(panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT param0) {

// line 475
org$pandalanguage$panda$Int64List* $tmp311 = (org$pandalanguage$panda$Int64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$Int64List$class);
org$pandalanguage$panda$Int64List$init$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT($tmp311, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp311)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp311));
return ((panda$collections$ListView*) $tmp311);

}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp312 = (panda$core$Int64) {0};
int64_t $tmp313 = param1.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 >= $tmp314;
panda$core$Bit $tmp316 = (panda$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block1; else goto block2;
block1:;
panda$core$Int64$wrapper* $tmp318;
$tmp318 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp318->value = param0;
ITable* $tmp319 = ((panda$collections$CollectionView*) $tmp318)->$class->itable;
while ($tmp319->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp319 = $tmp319->next;
}
$fn321 $tmp320 = $tmp319->methods[0];
panda$core$Int64 $tmp322 = $tmp320(((panda$collections$CollectionView*) $tmp318));
int64_t $tmp323 = param1.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 < $tmp324;
panda$core$Bit $tmp326 = (panda$core$Bit) {$tmp325};
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$CollectionView*) $tmp318)));
*(&local0) = $tmp326;
goto block3;
block2:;
*(&local0) = $tmp316;
goto block3;
block3:;
panda$core$Bit $tmp327 = *(&local0);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp329 = (panda$core$Int64) {480};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s330, $tmp329, &$s331);
abort(); // unreachable
block4:;
// line 481
panda$core$Int64 $tmp332 = (panda$core$Int64) {1};
panda$core$Int64 $tmp333 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp332, param1);
panda$core$Int64 $tmp334 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(param0, $tmp333);
panda$core$Int64 $tmp335 = (panda$core$Int64) {0};
panda$core$Bit $tmp336 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp334, $tmp335);
return $tmp336;

}
panda$core$Int64 panda$core$Int64$get_count$R$panda$core$Int64(panda$core$Int64 param0) {

// line 487
panda$core$Int64 $tmp337 = (panda$core$Int64) {64};
return $tmp337;

}
panda$collections$Iterator* panda$core$Int64$iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$Int64 param0) {

// line 492
org$pandalanguage$panda$IntBitIterator* $tmp338 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
panda$core$UInt64 $tmp339 = panda$core$Int64$convert$R$panda$core$UInt64(param0);
panda$core$UInt64 $tmp340 = (panda$core$UInt64) {9223372036854775808};
org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp338, $tmp339, $tmp340);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp338)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp338));
return ((panda$collections$Iterator*) $tmp338);

}
panda$core$Int64 panda$core$Int64$get_hash$R$panda$core$Int64(panda$core$Int64 param0) {

// line 497
int64_t $tmp341 = param0.value;
panda$core$Int64 $tmp342 = (panda$core$Int64) {$tmp341};
return $tmp342;

}
panda$core$Int64$nullable panda$core$Int64$parse$panda$core$String$panda$core$Int64$R$panda$core$Int64$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$UInt64$nullable local1;
panda$core$UInt64$nullable local2;
panda$core$Int64 $tmp343 = (panda$core$Int64) {2};
int64_t $tmp344 = param1.value;
int64_t $tmp345 = $tmp343.value;
bool $tmp346 = $tmp344 >= $tmp345;
panda$core$Bit $tmp347 = (panda$core$Bit) {$tmp346};
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp349 = (panda$core$Int64) {36};
int64_t $tmp350 = param1.value;
int64_t $tmp351 = $tmp349.value;
bool $tmp352 = $tmp350 <= $tmp351;
panda$core$Bit $tmp353 = (panda$core$Bit) {$tmp352};
*(&local0) = $tmp353;
goto block3;
block2:;
*(&local0) = $tmp347;
goto block3;
block3:;
panda$core$Bit $tmp354 = *(&local0);
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp356 = (panda$core$Int64) {503};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s357, $tmp356, &$s358);
abort(); // unreachable
block4:;
// line 504
panda$core$Bit $tmp359 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(param0, &$s360);
bool $tmp361 = $tmp359.value;
if ($tmp361) goto block6; else goto block8;
block6:;
// line 505
panda$core$Int64 $tmp362 = (panda$core$Int64) {1};
panda$core$Bit $tmp363 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp364 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp362, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp363);
panda$core$String* $tmp365 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(param0, $tmp364);
panda$core$UInt64$nullable $tmp366 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp365, param1);
*(&local1) = $tmp366;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
// line 506
panda$core$UInt64$nullable $tmp367 = *(&local1);
panda$core$Bit $tmp368 = panda$core$Bit$init$builtin_bit(!$tmp367.nonnull);
bool $tmp369 = $tmp368.value;
if ($tmp369) goto block9; else goto block10;
block9:;
// line 507
return ((panda$core$Int64$nullable) { .nonnull = false });
block10:;
// line 509
panda$core$UInt64$nullable $tmp370 = *(&local1);
panda$core$Int64 $tmp371 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) $tmp370.value));
panda$core$Int64 $tmp372 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp371);
return ((panda$core$Int64$nullable) { $tmp372, true });
block8:;
// line 1
// line 512
panda$core$UInt64$nullable $tmp373 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(param0, param1);
*(&local2) = $tmp373;
// line 513
panda$core$UInt64$nullable $tmp374 = *(&local2);
panda$core$Bit $tmp375 = panda$core$Bit$init$builtin_bit(!$tmp374.nonnull);
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block11; else goto block12;
block11:;
// line 514
return ((panda$core$Int64$nullable) { .nonnull = false });
block12:;
// line 516
panda$core$UInt64$nullable $tmp377 = *(&local2);
panda$core$Int64 $tmp378 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) $tmp377.value));
return ((panda$core$Int64$nullable) { $tmp378, true });
block7:;
panda$core$Bit $tmp379 = panda$core$Bit$init$builtin_bit(false);
bool $tmp380 = $tmp379.value;
if ($tmp380) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp381 = (panda$core$Int64) {503};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s382, $tmp381, &$s383);
abort(); // unreachable
block13:;
abort(); // unreachable

}
panda$core$Int8 panda$core$Int64$convert$R$panda$core$Int8(panda$core$Int64 param0) {

// line 522
int64_t $tmp384 = param0.value;
panda$core$Int8 $tmp385 = (panda$core$Int8) {((int8_t) $tmp384)};
return $tmp385;

}
panda$core$Int16 panda$core$Int64$convert$R$panda$core$Int16(panda$core$Int64 param0) {

// line 527
int64_t $tmp386 = param0.value;
panda$core$Int16 $tmp387 = (panda$core$Int16) {((int16_t) $tmp386)};
return $tmp387;

}
panda$core$Int32 panda$core$Int64$convert$R$panda$core$Int32(panda$core$Int64 param0) {

// line 532
int64_t $tmp388 = param0.value;
panda$core$Int32 $tmp389 = (panda$core$Int32) {((int32_t) $tmp388)};
return $tmp389;

}
panda$core$UInt8 panda$core$Int64$convert$R$panda$core$UInt8(panda$core$Int64 param0) {

// line 537
int64_t $tmp390 = param0.value;
panda$core$UInt8 $tmp391 = (panda$core$UInt8) {((uint8_t) $tmp390)};
return $tmp391;

}
panda$core$UInt16 panda$core$Int64$convert$R$panda$core$UInt16(panda$core$Int64 param0) {

// line 542
int64_t $tmp392 = param0.value;
panda$core$UInt16 $tmp393 = (panda$core$UInt16) {((uint16_t) $tmp392)};
return $tmp393;

}
panda$core$UInt32 panda$core$Int64$convert$R$panda$core$UInt32(panda$core$Int64 param0) {

// line 547
int64_t $tmp394 = param0.value;
panda$core$UInt32 $tmp395 = (panda$core$UInt32) {((uint32_t) $tmp394)};
return $tmp395;

}
panda$core$UInt64 panda$core$Int64$convert$R$panda$core$UInt64(panda$core$Int64 param0) {

// line 552
int64_t $tmp396 = param0.value;
panda$core$UInt64 $tmp397 = (panda$core$UInt64) {((uint64_t) $tmp396)};
return $tmp397;

}
panda$core$Real32 panda$core$Int64$convert$R$panda$core$Real32(panda$core$Int64 param0) {

// line 557
int64_t $tmp398 = param0.value;
panda$core$Real32 $tmp399 = (panda$core$Real32) {((float) $tmp398)};
return $tmp399;

}
panda$core$Real64 panda$core$Int64$convert$R$panda$core$Real64(panda$core$Int64 param0) {

// line 562
int64_t $tmp400 = param0.value;
panda$core$Real64 $tmp401 = (panda$core$Real64) {((double) $tmp400)};
return $tmp401;

}
panda$core$String* panda$core$Int64$convert$R$panda$core$String(panda$core$Int64 param0) {

panda$core$Int64 local0;
panda$core$Char8* local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 568
panda$core$Int64 $tmp402 = (panda$core$Int64) {20};
*(&local0) = $tmp402;
// line 569
panda$core$Int64 $tmp403 = *(&local0);
int64_t $tmp404 = $tmp403.value;
panda$core$Char8* $tmp405 = ((panda$core$Char8*) pandaZAlloc($tmp404 * 1));
*(&local1) = $tmp405;
// line 570
panda$core$Int64 $tmp406 = *(&local0);
panda$core$Int64 $tmp407 = (panda$core$Int64) {1};
int64_t $tmp408 = $tmp406.value;
int64_t $tmp409 = $tmp407.value;
int64_t $tmp410 = $tmp408 - $tmp409;
panda$core$Int64 $tmp411 = (panda$core$Int64) {$tmp410};
*(&local2) = $tmp411;
// line 571
*(&local3) = param0;
// line 572
panda$core$Int64 $tmp412 = *(&local3);
panda$core$Int64 $tmp413 = (panda$core$Int64) {0};
int64_t $tmp414 = $tmp412.value;
int64_t $tmp415 = $tmp413.value;
bool $tmp416 = $tmp414 >= $tmp415;
panda$core$Bit $tmp417 = (panda$core$Bit) {$tmp416};
bool $tmp418 = $tmp417.value;
if ($tmp418) goto block1; else goto block3;
block1:;
// line 573
goto block4;
block4:;
// line 574
panda$core$Char8* $tmp419 = *(&local1);
panda$core$Int64 $tmp420 = *(&local3);
panda$core$Int64 $tmp421 = (panda$core$Int64) {10};
panda$core$Int64 $tmp422 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp420, $tmp421);
panda$core$Int64 $tmp423 = (panda$core$Int64) {48};
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423.value;
int64_t $tmp426 = $tmp424 + $tmp425;
panda$core$Int64 $tmp427 = (panda$core$Int64) {$tmp426};
panda$core$UInt8 $tmp428 = panda$core$Int64$convert$R$panda$core$UInt8($tmp427);
panda$core$Char8 $tmp429 = panda$core$Char8$init$panda$core$UInt8($tmp428);
panda$core$Int64 $tmp430 = *(&local2);
int64_t $tmp431 = $tmp430.value;
$tmp419[$tmp431] = $tmp429;
// line 575
panda$core$Int64 $tmp432 = *(&local3);
panda$core$Int64 $tmp433 = (panda$core$Int64) {10};
int64_t $tmp434 = $tmp432.value;
int64_t $tmp435 = $tmp433.value;
int64_t $tmp436 = $tmp434 / $tmp435;
panda$core$Int64 $tmp437 = (panda$core$Int64) {$tmp436};
*(&local3) = $tmp437;
// line 576
panda$core$Int64 $tmp438 = *(&local2);
panda$core$Int64 $tmp439 = (panda$core$Int64) {1};
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440 - $tmp441;
panda$core$Int64 $tmp443 = (panda$core$Int64) {$tmp442};
*(&local2) = $tmp443;
goto block5;
block5:;
panda$core$Int64 $tmp444 = *(&local3);
panda$core$Int64 $tmp445 = (panda$core$Int64) {0};
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445.value;
bool $tmp448 = $tmp446 > $tmp447;
panda$core$Bit $tmp449 = (panda$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block4; else goto block6;
block6:;
// line 579
panda$core$Int64 $tmp451 = *(&local2);
panda$core$Int64 $tmp452 = (panda$core$Int64) {1};
int64_t $tmp453 = $tmp451.value;
int64_t $tmp454 = $tmp452.value;
int64_t $tmp455 = $tmp453 + $tmp454;
panda$core$Int64 $tmp456 = (panda$core$Int64) {$tmp455};
*(&local2) = $tmp456;
goto block2;
block3:;
// line 1
// line 582
goto block7;
block7:;
// line 583
panda$core$Char8* $tmp457 = *(&local1);
panda$core$Int64 $tmp458 = (panda$core$Int64) {48};
panda$core$Int64 $tmp459 = *(&local3);
panda$core$Int64 $tmp460 = (panda$core$Int64) {10};
panda$core$Int64 $tmp461 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp459, $tmp460);
int64_t $tmp462 = $tmp458.value;
int64_t $tmp463 = $tmp461.value;
int64_t $tmp464 = $tmp462 - $tmp463;
panda$core$Int64 $tmp465 = (panda$core$Int64) {$tmp464};
panda$core$UInt8 $tmp466 = panda$core$Int64$convert$R$panda$core$UInt8($tmp465);
panda$core$Char8 $tmp467 = panda$core$Char8$init$panda$core$UInt8($tmp466);
panda$core$Int64 $tmp468 = *(&local2);
int64_t $tmp469 = $tmp468.value;
$tmp457[$tmp469] = $tmp467;
// line 584
panda$core$Int64 $tmp470 = *(&local3);
panda$core$Int64 $tmp471 = (panda$core$Int64) {10};
int64_t $tmp472 = $tmp470.value;
int64_t $tmp473 = $tmp471.value;
int64_t $tmp474 = $tmp472 / $tmp473;
panda$core$Int64 $tmp475 = (panda$core$Int64) {$tmp474};
*(&local3) = $tmp475;
// line 585
panda$core$Int64 $tmp476 = *(&local2);
panda$core$Int64 $tmp477 = (panda$core$Int64) {1};
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477.value;
int64_t $tmp480 = $tmp478 - $tmp479;
panda$core$Int64 $tmp481 = (panda$core$Int64) {$tmp480};
*(&local2) = $tmp481;
goto block8;
block8:;
panda$core$Int64 $tmp482 = *(&local3);
panda$core$Int64 $tmp483 = (panda$core$Int64) {0};
int64_t $tmp484 = $tmp482.value;
int64_t $tmp485 = $tmp483.value;
bool $tmp486 = $tmp484 < $tmp485;
panda$core$Bit $tmp487 = (panda$core$Bit) {$tmp486};
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block7; else goto block9;
block9:;
// line 588
panda$core$Char8* $tmp489 = *(&local1);
panda$core$UInt8 $tmp490 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp491 = panda$core$Char8$init$panda$core$UInt8($tmp490);
panda$core$Int64 $tmp492 = *(&local2);
int64_t $tmp493 = $tmp492.value;
$tmp489[$tmp493] = $tmp491;
goto block2;
block2:;
// line 590
panda$core$Int64 $tmp494 = *(&local0);
panda$core$Int64 $tmp495 = *(&local2);
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496 - $tmp497;
panda$core$Int64 $tmp499 = (panda$core$Int64) {$tmp498};
*(&local4) = $tmp499;
// line 591
panda$core$Int64 $tmp500 = (panda$core$Int64) {0};
panda$core$Int64 $tmp501 = *(&local4);
panda$core$Bit $tmp502 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp503 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp500, $tmp501, $tmp502);
panda$core$Int64 $tmp504 = $tmp503.min;
*(&local5) = $tmp504;
panda$core$Int64 $tmp505 = $tmp503.max;
panda$core$Bit $tmp506 = $tmp503.inclusive;
bool $tmp507 = $tmp506.value;
panda$core$Int64 $tmp508 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp509 = panda$core$Int64$convert$R$panda$core$UInt64($tmp508);
if ($tmp507) goto block13; else goto block14;
block13:;
int64_t $tmp510 = $tmp504.value;
int64_t $tmp511 = $tmp505.value;
bool $tmp512 = $tmp510 <= $tmp511;
panda$core$Bit $tmp513 = (panda$core$Bit) {$tmp512};
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block10; else goto block11;
block14:;
int64_t $tmp515 = $tmp504.value;
int64_t $tmp516 = $tmp505.value;
bool $tmp517 = $tmp515 < $tmp516;
panda$core$Bit $tmp518 = (panda$core$Bit) {$tmp517};
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block10; else goto block11;
block10:;
// line 592
panda$core$Char8* $tmp520 = *(&local1);
panda$core$Char8* $tmp521 = *(&local1);
panda$core$Int64 $tmp522 = *(&local5);
panda$core$Int64 $tmp523 = *(&local2);
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523.value;
int64_t $tmp526 = $tmp524 + $tmp525;
panda$core$Int64 $tmp527 = (panda$core$Int64) {$tmp526};
int64_t $tmp528 = $tmp527.value;
panda$core$Char8 $tmp529 = $tmp521[$tmp528];
panda$core$Int64 $tmp530 = *(&local5);
int64_t $tmp531 = $tmp530.value;
$tmp520[$tmp531] = $tmp529;
goto block12;
block12:;
panda$core$Int64 $tmp532 = *(&local5);
int64_t $tmp533 = $tmp505.value;
int64_t $tmp534 = $tmp532.value;
int64_t $tmp535 = $tmp533 - $tmp534;
panda$core$Int64 $tmp536 = (panda$core$Int64) {$tmp535};
panda$core$UInt64 $tmp537 = panda$core$Int64$convert$R$panda$core$UInt64($tmp536);
if ($tmp507) goto block16; else goto block17;
block16:;
uint64_t $tmp538 = $tmp537.value;
uint64_t $tmp539 = $tmp509.value;
bool $tmp540 = $tmp538 >= $tmp539;
panda$core$Bit $tmp541 = (panda$core$Bit) {$tmp540};
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block15; else goto block11;
block17:;
uint64_t $tmp543 = $tmp537.value;
uint64_t $tmp544 = $tmp509.value;
bool $tmp545 = $tmp543 > $tmp544;
panda$core$Bit $tmp546 = (panda$core$Bit) {$tmp545};
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block15; else goto block11;
block15:;
int64_t $tmp548 = $tmp532.value;
int64_t $tmp549 = $tmp508.value;
int64_t $tmp550 = $tmp548 + $tmp549;
panda$core$Int64 $tmp551 = (panda$core$Int64) {$tmp550};
*(&local5) = $tmp551;
goto block10;
block11:;
// line 594
panda$core$String* $tmp552 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp553 = *(&local1);
panda$core$Int64 $tmp554 = *(&local4);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp552, $tmp553, $tmp554);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
return $tmp552;

}
panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String(panda$core$Int64 param0, panda$core$String* param1) {

// line 600
int64_t $tmp555 = param0.value;
bool $tmp556 = $tmp555 < 0;
panda$core$Bit $tmp557 = panda$core$Bit$init$builtin_bit($tmp556);
panda$core$Int64 $tmp558 = panda$core$Int64$abs$R$panda$core$Int64(param0);
panda$core$UInt64 $tmp559 = panda$core$Int64$convert$R$panda$core$UInt64($tmp558);
panda$core$UInt64 $tmp560 = (panda$core$UInt64) {18446744073709551615};
panda$core$String* $tmp561 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp557, $tmp559, $tmp560, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
return $tmp561;

}
void panda$core$Int64$cleanup(panda$core$Int64 param0) {

return;

}

