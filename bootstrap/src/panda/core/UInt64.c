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
#include "panda/core/Real64.h"
#include "panda/core/Int8.h"
#include "panda/core/Int16.h"
#include "panda/core/Int32.h"
#include "panda/core/UInt8.h"
#include "panda/core/UInt16.h"
#include "panda/core/UInt32.h"
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
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

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
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$get_hash$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$UInt64$get_hash$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value);

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
__attribute__((weak)) panda$collections$Iterator* panda$core$UInt64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$UInt64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$String* panda$core$UInt64$convert$R$panda$core$String$shim(panda$core$Object* p0) {
    panda$core$String* result = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void panda$core$Value$cleanup$shim(panda$core$Value* p0) {
    panda$core$Value$cleanup(p0);

}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Real32$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real32 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Real32$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Real64$R$panda$core$Real64$shim(panda$core$Object* p0, panda$core$Real64 p1) {
    panda$core$Real64 result = panda$core$UInt64$$DIV$panda$core$Real64$R$panda$core$Real64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64$shim(panda$core$Object* p0) {
    panda$core$UInt64 result = panda$core$UInt64$$BNOT$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim(panda$core$Object* p0, panda$core$UInt64 p1) {
    panda$core$UInt64 result = panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(((panda$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64$shim(panda$core$Object* p0, panda$core$Int64 p1) {
    panda$core$Int64 result = panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p0)->value, p1);

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

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$UInt64$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt64$_panda$collections$CollectionView, { panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$UInt64$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt64$_panda$core$Formattable, { panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$UInt64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt64$_panda$collections$ListView, { panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt64$_panda$core$Equatable, { panda$core$UInt64$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$UInt64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt64$_panda$collections$Key, { panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$UInt64$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt64$_panda$core$Comparable, { panda$core$UInt64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s1;
panda$core$UInt64$class_type panda$core$UInt64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt64$_panda$collections$Iterable, { panda$core$UInt64$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SUB$R$panda$core$UInt64$shim, panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Real32$R$panda$core$Real64$shim, panda$core$UInt64$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$UInt64$$BNOT$R$panda$core$UInt64$shim, panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64$shim, panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$UInt64$get_count$R$panda$core$Int64$shim, panda$core$UInt64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$UInt64$get_hash$R$panda$core$Int64$shim, panda$core$UInt64$convert$R$panda$core$Int8$shim, panda$core$UInt64$convert$R$panda$core$Int16$shim, panda$core$UInt64$convert$R$panda$core$Int32$shim, panda$core$UInt64$convert$R$panda$core$Int64$shim, panda$core$UInt64$convert$R$panda$core$UInt8$shim, panda$core$UInt64$convert$R$panda$core$UInt16$shim, panda$core$UInt64$convert$R$panda$core$UInt32$shim, panda$core$UInt64$convert$R$panda$core$Real32$shim, panda$core$UInt64$convert$R$panda$core$Real64$shim, panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim, panda$core$UInt64$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[7]; } panda$core$UInt64$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$UInt64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$CollectionView, { panda$core$UInt64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[7]; } panda$core$UInt64$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Formattable, { panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$UInt64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$ListView, { panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Equatable, { panda$core$UInt64$get_hash$R$panda$core$Int64$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$UInt64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$Key, { panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit$shim, panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$UInt64$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$UInt64$wrapper_panda$core$Comparable, { panda$core$UInt64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

static panda$core$String $s3;
panda$core$UInt64$wrapperclass_type panda$core$UInt64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$Iterable, { panda$core$UInt64$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn305)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 12, 8498199453932512261, NULL };
static panda$core$String $s315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, 8839777452243195848, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 12, 8498199453932512261, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f", 123, -9161369319874412180, NULL };

panda$core$UInt64 panda$core$UInt64$init$builtin_uint64(uint64_t param0) {

panda$core$UInt64 local0;
// line 30
uint64_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
panda$core$UInt64 $tmp5 = *(&local0);
return $tmp5;

}
panda$core$UInt64 panda$core$UInt64$init$panda$core$UInt8(panda$core$UInt8 param0) {

panda$core$UInt64 local0;
// line 36
uint8_t $tmp6 = param0.value;
uint64_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint64_t) $tmp6);
panda$core$UInt64 $tmp8 = *(&local0);
return $tmp8;

}
panda$core$UInt64 panda$core$UInt64$init$panda$core$UInt16(panda$core$UInt16 param0) {

panda$core$UInt64 local0;
// line 42
uint16_t $tmp9 = param0.value;
uint64_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((uint64_t) $tmp9);
panda$core$UInt64 $tmp11 = *(&local0);
return $tmp11;

}
panda$core$UInt64 panda$core$UInt64$init$panda$core$UInt32(panda$core$UInt32 param0) {

panda$core$UInt64 local0;
// line 48
uint32_t $tmp12 = param0.value;
uint64_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((uint64_t) $tmp12);
panda$core$UInt64 $tmp14 = *(&local0);
return $tmp14;

}
panda$core$UInt64 panda$core$UInt64$$ADD$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 54
uint64_t $tmp15 = param0.value;
uint64_t $tmp16 = param1.value;
uint64_t $tmp17 = $tmp15 + $tmp16;
panda$core$UInt64 $tmp18 = panda$core$UInt64$init$builtin_uint64($tmp17);
return $tmp18;

}
panda$core$UInt64 panda$core$UInt64$$SUB$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 60
uint64_t $tmp19 = param0.value;
uint64_t $tmp20 = param1.value;
uint64_t $tmp21 = $tmp19 - $tmp20;
panda$core$UInt64 $tmp22 = panda$core$UInt64$init$builtin_uint64($tmp21);
return $tmp22;

}
panda$core$UInt64 panda$core$UInt64$$SUB$R$panda$core$UInt64(panda$core$UInt64 param0) {

// line 65
uint64_t $tmp23 = param0.value;
uint64_t $tmp24 = -$tmp23;
panda$core$UInt64 $tmp25 = (panda$core$UInt64) {$tmp24};
return $tmp25;

}
panda$core$UInt64 panda$core$UInt64$$MUL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 71
uint64_t $tmp26 = param0.value;
uint64_t $tmp27 = param1.value;
uint64_t $tmp28 = $tmp26 * $tmp27;
panda$core$UInt64 $tmp29 = panda$core$UInt64$init$builtin_uint64($tmp28);
return $tmp29;

}
panda$core$UInt64 panda$core$UInt64$$INTDIV$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 77
uint64_t $tmp30 = param0.value;
uint64_t $tmp31 = param1.value;
uint64_t $tmp32 = $tmp30 / $tmp31;
panda$core$UInt64 $tmp33 = panda$core$UInt64$init$builtin_uint64($tmp32);
return $tmp33;

}
panda$core$UInt64 panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 83
uint64_t $tmp34 = param0.value;
uint64_t $tmp35 = param1.value;
uint64_t $tmp36 = $tmp34 % $tmp35;
panda$core$UInt64 $tmp37 = panda$core$UInt64$init$builtin_uint64($tmp36);
return $tmp37;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int8$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$Int8 param1) {

// line 89
uint64_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
double $tmp40 = ((double) $tmp38) / ((double) $tmp39);
panda$core$Real64 $tmp41 = panda$core$Real64$init$builtin_float64($tmp40);
return $tmp41;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int16$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$Int16 param1) {

// line 95
uint64_t $tmp42 = param0.value;
int16_t $tmp43 = param1.value;
double $tmp44 = ((double) $tmp42) / ((double) $tmp43);
panda$core$Real64 $tmp45 = panda$core$Real64$init$builtin_float64($tmp44);
return $tmp45;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int32$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$Int32 param1) {

// line 101
uint64_t $tmp46 = param0.value;
int32_t $tmp47 = param1.value;
double $tmp48 = ((double) $tmp46) / ((double) $tmp47);
panda$core$Real64 $tmp49 = panda$core$Real64$init$builtin_float64($tmp48);
return $tmp49;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Int64$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$Int64 param1) {

// line 107
uint64_t $tmp50 = param0.value;
int64_t $tmp51 = param1.value;
double $tmp52 = ((double) $tmp50) / ((double) $tmp51);
panda$core$Real64 $tmp53 = panda$core$Real64$init$builtin_float64($tmp52);
return $tmp53;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt8$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$UInt8 param1) {

// line 113
uint64_t $tmp54 = param0.value;
uint8_t $tmp55 = param1.value;
double $tmp56 = ((double) $tmp54) / ((double) $tmp55);
panda$core$Real64 $tmp57 = panda$core$Real64$init$builtin_float64($tmp56);
return $tmp57;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt16$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$UInt16 param1) {

// line 119
uint64_t $tmp58 = param0.value;
uint16_t $tmp59 = param1.value;
double $tmp60 = ((double) $tmp58) / ((double) $tmp59);
panda$core$Real64 $tmp61 = panda$core$Real64$init$builtin_float64($tmp60);
return $tmp61;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt32$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$UInt32 param1) {

// line 125
uint64_t $tmp62 = param0.value;
uint32_t $tmp63 = param1.value;
double $tmp64 = ((double) $tmp62) / ((double) $tmp63);
panda$core$Real64 $tmp65 = panda$core$Real64$init$builtin_float64($tmp64);
return $tmp65;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$UInt64$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 131
uint64_t $tmp66 = param0.value;
uint64_t $tmp67 = param1.value;
double $tmp68 = ((double) $tmp66) / ((double) $tmp67);
panda$core$Real64 $tmp69 = panda$core$Real64$init$builtin_float64($tmp68);
return $tmp69;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Real32$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$Real32 param1) {

// line 137
uint64_t $tmp70 = param0.value;
float $tmp71 = param1.value;
double $tmp72 = ((double) $tmp70) / ((double) $tmp71);
panda$core$Real64 $tmp73 = panda$core$Real64$init$builtin_float64($tmp72);
return $tmp73;

}
panda$core$Real64 panda$core$UInt64$$DIV$panda$core$Real64$R$panda$core$Real64(panda$core$UInt64 param0, panda$core$Real64 param1) {

// line 143
uint64_t $tmp74 = param0.value;
double $tmp75 = param1.value;
double $tmp76 = ((double) $tmp74) / $tmp75;
panda$core$Real64 $tmp77 = panda$core$Real64$init$builtin_float64($tmp76);
return $tmp77;

}
panda$core$UInt64 panda$core$UInt64$$BNOT$R$panda$core$UInt64(panda$core$UInt64 param0) {

// line 148
uint64_t $tmp78 = param0.value;
uint64_t $tmp79 = !$tmp78;
panda$core$UInt64 $tmp80 = (panda$core$UInt64) {$tmp79};
return $tmp80;

}
panda$core$Int64 panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 param0, panda$core$Int64 param1) {

// line 154
uint64_t $tmp81 = param0.value;
int64_t $tmp82 = param1.value;
int64_t $tmp83 = ((int64_t) $tmp81) & $tmp82;
panda$core$Int64 $tmp84 = panda$core$Int64$init$builtin_int64($tmp83);
return $tmp84;

}
panda$core$UInt64 panda$core$UInt64$$BAND$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 160
uint64_t $tmp85 = param0.value;
uint64_t $tmp86 = param1.value;
uint64_t $tmp87 = $tmp85 & $tmp86;
panda$core$UInt64 $tmp88 = panda$core$UInt64$init$builtin_uint64($tmp87);
return $tmp88;

}
panda$core$Int64 panda$core$UInt64$$BOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 param0, panda$core$Int64 param1) {

// line 166
uint64_t $tmp89 = param0.value;
int64_t $tmp90 = param1.value;
int64_t $tmp91 = ((int64_t) $tmp89) | $tmp90;
panda$core$Int64 $tmp92 = panda$core$Int64$init$builtin_int64($tmp91);
return $tmp92;

}
panda$core$UInt64 panda$core$UInt64$$BOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 172
uint64_t $tmp93 = param0.value;
uint64_t $tmp94 = param1.value;
uint64_t $tmp95 = $tmp93 | $tmp94;
panda$core$UInt64 $tmp96 = panda$core$UInt64$init$builtin_uint64($tmp95);
return $tmp96;

}
panda$core$Int64 panda$core$UInt64$$BXOR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 param0, panda$core$Int64 param1) {

// line 178
uint64_t $tmp97 = param0.value;
int64_t $tmp98 = param1.value;
int64_t $tmp99 = ((int64_t) $tmp97) ^ $tmp98;
panda$core$Int64 $tmp100 = panda$core$Int64$init$builtin_int64($tmp99);
return $tmp100;

}
panda$core$UInt64 panda$core$UInt64$$BXOR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 184
uint64_t $tmp101 = param0.value;
uint64_t $tmp102 = param1.value;
uint64_t $tmp103 = $tmp101 ^ $tmp102;
panda$core$UInt64 $tmp104 = panda$core$UInt64$init$builtin_uint64($tmp103);
return $tmp104;

}
panda$core$Int64 panda$core$UInt64$$SHL$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 param0, panda$core$Int64 param1) {

// line 190
uint64_t $tmp105 = param0.value;
int64_t $tmp106 = param1.value;
int64_t $tmp107 = ((int64_t) $tmp105) << $tmp106;
panda$core$Int64 $tmp108 = panda$core$Int64$init$builtin_int64($tmp107);
return $tmp108;

}
panda$core$UInt64 panda$core$UInt64$$SHL$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 196
uint64_t $tmp109 = param0.value;
uint64_t $tmp110 = param1.value;
uint64_t $tmp111 = $tmp109 << $tmp110;
panda$core$UInt64 $tmp112 = panda$core$UInt64$init$builtin_uint64($tmp111);
return $tmp112;

}
panda$core$Int64 panda$core$UInt64$$SHR$panda$core$Int64$R$panda$core$Int64(panda$core$UInt64 param0, panda$core$Int64 param1) {

// line 202
uint64_t $tmp113 = param0.value;
int64_t $tmp114 = param1.value;
int64_t $tmp115 = ((int64_t) $tmp113) >> $tmp114;
panda$core$Int64 $tmp116 = panda$core$Int64$init$builtin_int64($tmp115);
return $tmp116;

}
panda$core$UInt64 panda$core$UInt64$$SHR$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 208
uint64_t $tmp117 = param0.value;
uint64_t $tmp118 = param1.value;
uint64_t $tmp119 = $tmp117 >> $tmp118;
panda$core$UInt64 $tmp120 = panda$core$UInt64$init$builtin_uint64($tmp119);
return $tmp120;

}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt8 param1) {

// line 214
uint64_t $tmp121 = param0.value;
uint8_t $tmp122 = param1.value;
bool $tmp123 = $tmp121 == ((uint64_t) $tmp122);
panda$core$Bit $tmp124 = panda$core$Bit$init$builtin_bit($tmp123);
return $tmp124;

}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt16 param1) {

// line 220
uint64_t $tmp125 = param0.value;
uint16_t $tmp126 = param1.value;
bool $tmp127 = $tmp125 == ((uint64_t) $tmp126);
panda$core$Bit $tmp128 = panda$core$Bit$init$builtin_bit($tmp127);
return $tmp128;

}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt32 param1) {

// line 226
uint64_t $tmp129 = param0.value;
uint32_t $tmp130 = param1.value;
bool $tmp131 = $tmp129 == ((uint64_t) $tmp130);
panda$core$Bit $tmp132 = panda$core$Bit$init$builtin_bit($tmp131);
return $tmp132;

}
panda$core$Bit panda$core$UInt64$$EQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 233
uint64_t $tmp133 = param0.value;
uint64_t $tmp134 = param1.value;
bool $tmp135 = $tmp133 == $tmp134;
panda$core$Bit $tmp136 = panda$core$Bit$init$builtin_bit($tmp135);
return $tmp136;

}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt8 param1) {

// line 239
uint64_t $tmp137 = param0.value;
uint8_t $tmp138 = param1.value;
bool $tmp139 = $tmp137 != ((uint64_t) $tmp138);
panda$core$Bit $tmp140 = panda$core$Bit$init$builtin_bit($tmp139);
return $tmp140;

}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt16 param1) {

// line 245
uint64_t $tmp141 = param0.value;
uint16_t $tmp142 = param1.value;
bool $tmp143 = $tmp141 != ((uint64_t) $tmp142);
panda$core$Bit $tmp144 = panda$core$Bit$init$builtin_bit($tmp143);
return $tmp144;

}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt32 param1) {

// line 251
uint64_t $tmp145 = param0.value;
uint32_t $tmp146 = param1.value;
bool $tmp147 = $tmp145 != ((uint64_t) $tmp146);
panda$core$Bit $tmp148 = panda$core$Bit$init$builtin_bit($tmp147);
return $tmp148;

}
panda$core$Bit panda$core$UInt64$$NEQ$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 258
uint64_t $tmp149 = param0.value;
uint64_t $tmp150 = param1.value;
bool $tmp151 = $tmp149 != $tmp150;
panda$core$Bit $tmp152 = panda$core$Bit$init$builtin_bit($tmp151);
return $tmp152;

}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt8 param1) {

// line 264
uint64_t $tmp153 = param0.value;
uint8_t $tmp154 = param1.value;
bool $tmp155 = $tmp153 < ((uint64_t) $tmp154);
panda$core$Bit $tmp156 = panda$core$Bit$init$builtin_bit($tmp155);
return $tmp156;

}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt16 param1) {

// line 270
uint64_t $tmp157 = param0.value;
uint16_t $tmp158 = param1.value;
bool $tmp159 = $tmp157 < ((uint64_t) $tmp158);
panda$core$Bit $tmp160 = panda$core$Bit$init$builtin_bit($tmp159);
return $tmp160;

}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt32 param1) {

// line 276
uint64_t $tmp161 = param0.value;
uint32_t $tmp162 = param1.value;
bool $tmp163 = $tmp161 < ((uint64_t) $tmp162);
panda$core$Bit $tmp164 = panda$core$Bit$init$builtin_bit($tmp163);
return $tmp164;

}
panda$core$Bit panda$core$UInt64$$LT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 283
uint64_t $tmp165 = param0.value;
uint64_t $tmp166 = param1.value;
bool $tmp167 = $tmp165 < $tmp166;
panda$core$Bit $tmp168 = panda$core$Bit$init$builtin_bit($tmp167);
return $tmp168;

}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt8 param1) {

// line 289
uint64_t $tmp169 = param0.value;
uint8_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 > ((uint64_t) $tmp170);
panda$core$Bit $tmp172 = panda$core$Bit$init$builtin_bit($tmp171);
return $tmp172;

}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt16 param1) {

// line 295
uint64_t $tmp173 = param0.value;
uint16_t $tmp174 = param1.value;
bool $tmp175 = $tmp173 > ((uint64_t) $tmp174);
panda$core$Bit $tmp176 = panda$core$Bit$init$builtin_bit($tmp175);
return $tmp176;

}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt32 param1) {

// line 301
uint64_t $tmp177 = param0.value;
uint32_t $tmp178 = param1.value;
bool $tmp179 = $tmp177 > ((uint64_t) $tmp178);
panda$core$Bit $tmp180 = panda$core$Bit$init$builtin_bit($tmp179);
return $tmp180;

}
panda$core$Bit panda$core$UInt64$$GT$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 308
uint64_t $tmp181 = param0.value;
uint64_t $tmp182 = param1.value;
bool $tmp183 = $tmp181 > $tmp182;
panda$core$Bit $tmp184 = panda$core$Bit$init$builtin_bit($tmp183);
return $tmp184;

}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt8 param1) {

// line 314
uint64_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
bool $tmp187 = $tmp185 >= ((uint64_t) $tmp186);
panda$core$Bit $tmp188 = panda$core$Bit$init$builtin_bit($tmp187);
return $tmp188;

}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt16 param1) {

// line 320
uint64_t $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
bool $tmp191 = $tmp189 >= ((uint64_t) $tmp190);
panda$core$Bit $tmp192 = panda$core$Bit$init$builtin_bit($tmp191);
return $tmp192;

}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt32 param1) {

// line 326
uint64_t $tmp193 = param0.value;
uint32_t $tmp194 = param1.value;
bool $tmp195 = $tmp193 >= ((uint64_t) $tmp194);
panda$core$Bit $tmp196 = panda$core$Bit$init$builtin_bit($tmp195);
return $tmp196;

}
panda$core$Bit panda$core$UInt64$$GE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 333
uint64_t $tmp197 = param0.value;
uint64_t $tmp198 = param1.value;
bool $tmp199 = $tmp197 >= $tmp198;
panda$core$Bit $tmp200 = panda$core$Bit$init$builtin_bit($tmp199);
return $tmp200;

}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt8$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt8 param1) {

// line 339
uint64_t $tmp201 = param0.value;
uint8_t $tmp202 = param1.value;
bool $tmp203 = $tmp201 <= ((uint64_t) $tmp202);
panda$core$Bit $tmp204 = panda$core$Bit$init$builtin_bit($tmp203);
return $tmp204;

}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt16$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt16 param1) {

// line 345
uint64_t $tmp205 = param0.value;
uint16_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 <= ((uint64_t) $tmp206);
panda$core$Bit $tmp208 = panda$core$Bit$init$builtin_bit($tmp207);
return $tmp208;

}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt32$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt32 param1) {

// line 351
uint64_t $tmp209 = param0.value;
uint32_t $tmp210 = param1.value;
bool $tmp211 = $tmp209 <= ((uint64_t) $tmp210);
panda$core$Bit $tmp212 = panda$core$Bit$init$builtin_bit($tmp211);
return $tmp212;

}
panda$core$Bit panda$core$UInt64$$LE$panda$core$UInt64$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 358
uint64_t $tmp213 = param0.value;
uint64_t $tmp214 = param1.value;
bool $tmp215 = $tmp213 <= $tmp214;
panda$core$Bit $tmp216 = panda$core$Bit$init$builtin_bit($tmp215);
return $tmp216;

}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt8 param1) {

// line 368
uint64_t $tmp217 = param0.value;
uint8_t $tmp218 = param1.value;
bool $tmp219 = $tmp217 < ((uint64_t) $tmp218);
panda$core$Bit $tmp220 = panda$core$Bit$init$builtin_bit($tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block1; else goto block2;
block1:;
// line 369
uint64_t $tmp222 = param0.value;
panda$core$UInt64 $tmp223 = panda$core$UInt64$init$builtin_uint64($tmp222);
return $tmp223;
block2:;
// line 371
uint8_t $tmp224 = param1.value;
panda$core$UInt64 $tmp225 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp224));
return $tmp225;

}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt16 param1) {

// line 377
uint64_t $tmp226 = param0.value;
uint16_t $tmp227 = param1.value;
bool $tmp228 = $tmp226 < ((uint64_t) $tmp227);
panda$core$Bit $tmp229 = panda$core$Bit$init$builtin_bit($tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block1; else goto block2;
block1:;
// line 378
uint64_t $tmp231 = param0.value;
panda$core$UInt64 $tmp232 = panda$core$UInt64$init$builtin_uint64($tmp231);
return $tmp232;
block2:;
// line 380
uint16_t $tmp233 = param1.value;
panda$core$UInt64 $tmp234 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp233));
return $tmp234;

}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt32 param1) {

// line 386
uint64_t $tmp235 = param0.value;
uint32_t $tmp236 = param1.value;
bool $tmp237 = $tmp235 < ((uint64_t) $tmp236);
panda$core$Bit $tmp238 = panda$core$Bit$init$builtin_bit($tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block1; else goto block2;
block1:;
// line 387
uint64_t $tmp240 = param0.value;
panda$core$UInt64 $tmp241 = panda$core$UInt64$init$builtin_uint64($tmp240);
return $tmp241;
block2:;
// line 389
uint32_t $tmp242 = param1.value;
panda$core$UInt64 $tmp243 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp242));
return $tmp243;

}
panda$core$UInt64 panda$core$UInt64$min$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 395
uint64_t $tmp244 = param0.value;
uint64_t $tmp245 = param1.value;
bool $tmp246 = $tmp244 < $tmp245;
panda$core$Bit $tmp247 = panda$core$Bit$init$builtin_bit($tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block1; else goto block2;
block1:;
// line 396
uint64_t $tmp249 = param0.value;
panda$core$UInt64 $tmp250 = panda$core$UInt64$init$builtin_uint64($tmp249);
return $tmp250;
block2:;
// line 398
uint64_t $tmp251 = param1.value;
panda$core$UInt64 $tmp252 = panda$core$UInt64$init$builtin_uint64($tmp251);
return $tmp252;

}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt8$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt8 param1) {

// line 408
uint64_t $tmp253 = param0.value;
uint8_t $tmp254 = param1.value;
bool $tmp255 = $tmp253 > ((uint64_t) $tmp254);
panda$core$Bit $tmp256 = panda$core$Bit$init$builtin_bit($tmp255);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block1; else goto block2;
block1:;
// line 409
uint64_t $tmp258 = param0.value;
panda$core$UInt64 $tmp259 = panda$core$UInt64$init$builtin_uint64($tmp258);
return $tmp259;
block2:;
// line 411
uint8_t $tmp260 = param1.value;
panda$core$UInt64 $tmp261 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp260));
return $tmp261;

}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt16$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt16 param1) {

// line 417
uint64_t $tmp262 = param0.value;
uint16_t $tmp263 = param1.value;
bool $tmp264 = $tmp262 > ((uint64_t) $tmp263);
panda$core$Bit $tmp265 = panda$core$Bit$init$builtin_bit($tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block1; else goto block2;
block1:;
// line 418
uint64_t $tmp267 = param0.value;
panda$core$UInt64 $tmp268 = panda$core$UInt64$init$builtin_uint64($tmp267);
return $tmp268;
block2:;
// line 420
uint16_t $tmp269 = param1.value;
panda$core$UInt64 $tmp270 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp269));
return $tmp270;

}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt32$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt32 param1) {

// line 426
uint64_t $tmp271 = param0.value;
uint32_t $tmp272 = param1.value;
bool $tmp273 = $tmp271 > ((uint64_t) $tmp272);
panda$core$Bit $tmp274 = panda$core$Bit$init$builtin_bit($tmp273);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block1; else goto block2;
block1:;
// line 427
uint64_t $tmp276 = param0.value;
panda$core$UInt64 $tmp277 = panda$core$UInt64$init$builtin_uint64($tmp276);
return $tmp277;
block2:;
// line 429
uint32_t $tmp278 = param1.value;
panda$core$UInt64 $tmp279 = panda$core$UInt64$init$builtin_uint64(((uint64_t) $tmp278));
return $tmp279;

}
panda$core$UInt64 panda$core$UInt64$max$panda$core$UInt64$R$panda$core$UInt64(panda$core$UInt64 param0, panda$core$UInt64 param1) {

// line 435
uint64_t $tmp280 = param0.value;
uint64_t $tmp281 = param1.value;
bool $tmp282 = $tmp280 > $tmp281;
panda$core$Bit $tmp283 = panda$core$Bit$init$builtin_bit($tmp282);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block1; else goto block2;
block1:;
// line 436
uint64_t $tmp285 = param0.value;
panda$core$UInt64 $tmp286 = panda$core$UInt64$init$builtin_uint64($tmp285);
return $tmp286;
block2:;
// line 438
uint64_t $tmp287 = param1.value;
panda$core$UInt64 $tmp288 = panda$core$UInt64$init$builtin_uint64($tmp287);
return $tmp288;

}
panda$collections$ListView* panda$core$UInt64$$IDX$panda$core$Range$LTpanda$core$UInt64$GT$R$panda$collections$ListView$LTpanda$core$UInt64$GT(panda$core$Range$LTpanda$core$UInt64$GT param0) {

// line 443
org$pandalanguage$panda$UInt64List* $tmp289 = (org$pandalanguage$panda$UInt64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$UInt64List$class);
panda$core$UInt64 $tmp290 = param0.min;
panda$core$UInt64 $tmp291 = param0.max;
panda$core$UInt64 $tmp292 = (panda$core$UInt64) {1};
panda$core$Bit $tmp293 = param0.inclusive;
panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT $tmp294 = panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$init$panda$core$UInt64$panda$core$UInt64$panda$core$UInt64$panda$core$Bit($tmp290, $tmp291, $tmp292, $tmp293);
org$pandalanguage$panda$UInt64List$init$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT($tmp289, $tmp294);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp289)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing REF($1:org.pandalanguage.panda.UInt64List)
return ((panda$collections$ListView*) $tmp289);

}
panda$collections$ListView* panda$core$UInt64$$IDX$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$R$panda$collections$ListView$LTpanda$core$UInt64$GT(panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT param0) {

// line 448
org$pandalanguage$panda$UInt64List* $tmp295 = (org$pandalanguage$panda$UInt64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$UInt64List$class);
org$pandalanguage$panda$UInt64List$init$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT($tmp295, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp295)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp295));
// unreffing REF($1:org.pandalanguage.panda.UInt64List)
return ((panda$collections$ListView*) $tmp295);

}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp296 = (panda$core$Int64) {0};
int64_t $tmp297 = param1.value;
int64_t $tmp298 = $tmp296.value;
bool $tmp299 = $tmp297 >= $tmp298;
panda$core$Bit $tmp300 = (panda$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block1; else goto block2;
block1:;
panda$core$UInt64$wrapper* $tmp302;
$tmp302 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp302->value = param0;
ITable* $tmp303 = ((panda$collections$CollectionView*) $tmp302)->$class->itable;
while ($tmp303->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp303 = $tmp303->next;
}
$fn305 $tmp304 = $tmp303->methods[0];
panda$core$Int64 $tmp306 = $tmp304(((panda$collections$CollectionView*) $tmp302));
int64_t $tmp307 = param1.value;
int64_t $tmp308 = $tmp306.value;
bool $tmp309 = $tmp307 < $tmp308;
panda$core$Bit $tmp310 = (panda$core$Bit) {$tmp309};
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$CollectionView*) $tmp302)));
// unreffing REF($7:panda.collections.CollectionView)
*(&local0) = $tmp310;
goto block3;
block2:;
*(&local0) = $tmp300;
goto block3;
block3:;
panda$core$Bit $tmp311 = *(&local0);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp313 = (panda$core$Int64) {453};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s314, $tmp313, &$s315);
abort(); // unreachable
block4:;
// line 454
panda$core$Int64 $tmp316 = (panda$core$Int64) {1};
panda$core$Int64 $tmp317 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp316, param1);
panda$core$Int64 $tmp318 = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(param0, $tmp317);
panda$core$Int64 $tmp319 = (panda$core$Int64) {0};
int64_t $tmp320 = $tmp318.value;
int64_t $tmp321 = $tmp319.value;
bool $tmp322 = $tmp320 != $tmp321;
panda$core$Bit $tmp323 = (panda$core$Bit) {$tmp322};
return $tmp323;

}
panda$core$Int64 panda$core$UInt64$get_count$R$panda$core$Int64(panda$core$UInt64 param0) {

// line 460
panda$core$Int64 $tmp324 = (panda$core$Int64) {64};
return $tmp324;

}
panda$collections$Iterator* panda$core$UInt64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$UInt64 param0) {

// line 465
org$pandalanguage$panda$IntBitIterator* $tmp325 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
panda$core$UInt64 $tmp326 = (panda$core$UInt64) {9223372036854775808};
org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp325, param0, $tmp326);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp325)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp325));
// unreffing REF($1:org.pandalanguage.panda.IntBitIterator)
return ((panda$collections$Iterator*) $tmp325);

}
panda$core$Int64 panda$core$UInt64$get_hash$R$panda$core$Int64(panda$core$UInt64 param0) {

// line 470
uint64_t $tmp327 = param0.value;
panda$core$Int64 $tmp328 = (panda$core$Int64) {((int64_t) $tmp327)};
return $tmp328;

}
panda$core$UInt64$nullable panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$UInt64$nullable local1;
panda$core$Int64 $tmp329 = (panda$core$Int64) {2};
int64_t $tmp330 = param1.value;
int64_t $tmp331 = $tmp329.value;
bool $tmp332 = $tmp330 >= $tmp331;
panda$core$Bit $tmp333 = (panda$core$Bit) {$tmp332};
bool $tmp334 = $tmp333.value;
if ($tmp334) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp335 = (panda$core$Int64) {36};
int64_t $tmp336 = param1.value;
int64_t $tmp337 = $tmp335.value;
bool $tmp338 = $tmp336 <= $tmp337;
panda$core$Bit $tmp339 = (panda$core$Bit) {$tmp338};
*(&local0) = $tmp339;
goto block3;
block2:;
*(&local0) = $tmp333;
goto block3;
block3:;
panda$core$Bit $tmp340 = *(&local0);
bool $tmp341 = $tmp340.value;
if ($tmp341) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp342 = (panda$core$Int64) {476};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s343, $tmp342, &$s344);
abort(); // unreachable
block4:;
// line 477
panda$core$UInt64$nullable $tmp345 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(param0, param1);
*(&local1) = $tmp345;
// line 478
panda$core$UInt64$nullable $tmp346 = *(&local1);
panda$core$Bit $tmp347 = panda$core$Bit$init$builtin_bit(!$tmp346.nonnull);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block6; else goto block7;
block6:;
// line 479
return ((panda$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 481
panda$core$UInt64$nullable $tmp349 = *(&local1);
return $tmp349;

}
panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8(panda$core$UInt64 param0) {

// line 486
uint64_t $tmp350 = param0.value;
panda$core$Int8 $tmp351 = (panda$core$Int8) {((int8_t) $tmp350)};
return $tmp351;

}
panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16(panda$core$UInt64 param0) {

// line 491
uint64_t $tmp352 = param0.value;
panda$core$Int16 $tmp353 = (panda$core$Int16) {((int16_t) $tmp352)};
return $tmp353;

}
panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32(panda$core$UInt64 param0) {

// line 496
uint64_t $tmp354 = param0.value;
panda$core$Int32 $tmp355 = (panda$core$Int32) {((int32_t) $tmp354)};
return $tmp355;

}
panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64(panda$core$UInt64 param0) {

// line 501
uint64_t $tmp356 = param0.value;
panda$core$Int64 $tmp357 = (panda$core$Int64) {((int64_t) $tmp356)};
return $tmp357;

}
panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8(panda$core$UInt64 param0) {

// line 506
uint64_t $tmp358 = param0.value;
panda$core$UInt8 $tmp359 = (panda$core$UInt8) {((uint8_t) $tmp358)};
return $tmp359;

}
panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16(panda$core$UInt64 param0) {

// line 511
uint64_t $tmp360 = param0.value;
panda$core$UInt16 $tmp361 = (panda$core$UInt16) {((uint16_t) $tmp360)};
return $tmp361;

}
panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32(panda$core$UInt64 param0) {

// line 516
uint64_t $tmp362 = param0.value;
panda$core$UInt32 $tmp363 = (panda$core$UInt32) {((uint32_t) $tmp362)};
return $tmp363;

}
panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32(panda$core$UInt64 param0) {

// line 521
uint64_t $tmp364 = param0.value;
panda$core$Real32 $tmp365 = (panda$core$Real32) {((float) $tmp364)};
return $tmp365;

}
panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64(panda$core$UInt64 param0) {

// line 526
uint64_t $tmp366 = param0.value;
panda$core$Real64 $tmp367 = (panda$core$Real64) {((double) $tmp366)};
return $tmp367;

}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String(panda$core$UInt64 param0) {

panda$core$Int64 local0;
panda$core$Char8* local1;
panda$core$Int64 local2;
panda$core$UInt64 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 532
panda$core$Int64 $tmp368 = (panda$core$Int64) {20};
*(&local0) = $tmp368;
// line 533
panda$core$Int64 $tmp369 = *(&local0);
int64_t $tmp370 = $tmp369.value;
panda$core$Char8* $tmp371 = ((panda$core$Char8*) pandaZAlloc($tmp370 * 1));
*(&local1) = $tmp371;
// line 534
panda$core$Int64 $tmp372 = *(&local0);
panda$core$Int64 $tmp373 = (panda$core$Int64) {1};
int64_t $tmp374 = $tmp372.value;
int64_t $tmp375 = $tmp373.value;
int64_t $tmp376 = $tmp374 - $tmp375;
panda$core$Int64 $tmp377 = (panda$core$Int64) {$tmp376};
*(&local2) = $tmp377;
// line 535
*(&local3) = param0;
// line 536
panda$core$UInt64 $tmp378 = *(&local3);
panda$core$UInt64 $tmp379 = (panda$core$UInt64) {0};
uint64_t $tmp380 = $tmp378.value;
uint64_t $tmp381 = $tmp379.value;
bool $tmp382 = $tmp380 >= $tmp381;
panda$core$Bit $tmp383 = (panda$core$Bit) {$tmp382};
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block1; else goto block3;
block1:;
// line 537
goto block4;
block4:;
// line 538
panda$core$Char8* $tmp385 = *(&local1);
panda$core$Int64 $tmp386 = *(&local2);
panda$core$UInt64 $tmp387 = *(&local3);
panda$core$UInt64 $tmp388 = (panda$core$UInt64) {10};
panda$core$UInt64 $tmp389 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64($tmp387, $tmp388);
panda$core$UInt64 $tmp390 = (panda$core$UInt64) {48};
uint64_t $tmp391 = $tmp389.value;
uint64_t $tmp392 = $tmp390.value;
uint64_t $tmp393 = $tmp391 + $tmp392;
panda$core$UInt64 $tmp394 = (panda$core$UInt64) {$tmp393};
panda$core$UInt8 $tmp395 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp394);
panda$core$Char8 $tmp396 = panda$core$Char8$init$panda$core$UInt8($tmp395);
int64_t $tmp397 = $tmp386.value;
$tmp385[$tmp397] = $tmp396;
// line 539
panda$core$UInt64 $tmp398 = *(&local3);
panda$core$UInt64 $tmp399 = (panda$core$UInt64) {10};
uint64_t $tmp400 = $tmp398.value;
uint64_t $tmp401 = $tmp399.value;
uint64_t $tmp402 = $tmp400 / $tmp401;
panda$core$UInt64 $tmp403 = (panda$core$UInt64) {$tmp402};
*(&local3) = $tmp403;
// line 540
panda$core$Int64 $tmp404 = *(&local2);
panda$core$Int64 $tmp405 = (panda$core$Int64) {1};
int64_t $tmp406 = $tmp404.value;
int64_t $tmp407 = $tmp405.value;
int64_t $tmp408 = $tmp406 - $tmp407;
panda$core$Int64 $tmp409 = (panda$core$Int64) {$tmp408};
*(&local2) = $tmp409;
goto block5;
block5:;
panda$core$UInt64 $tmp410 = *(&local3);
panda$core$UInt64 $tmp411 = (panda$core$UInt64) {0};
uint64_t $tmp412 = $tmp410.value;
uint64_t $tmp413 = $tmp411.value;
bool $tmp414 = $tmp412 > $tmp413;
panda$core$Bit $tmp415 = (panda$core$Bit) {$tmp414};
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block4; else goto block6;
block6:;
// line 543
panda$core$Int64 $tmp417 = *(&local2);
panda$core$Int64 $tmp418 = (panda$core$Int64) {1};
int64_t $tmp419 = $tmp417.value;
int64_t $tmp420 = $tmp418.value;
int64_t $tmp421 = $tmp419 + $tmp420;
panda$core$Int64 $tmp422 = (panda$core$Int64) {$tmp421};
*(&local2) = $tmp422;
goto block2;
block3:;
// line 1
// line 546
goto block7;
block7:;
// line 547
panda$core$Char8* $tmp423 = *(&local1);
panda$core$Int64 $tmp424 = *(&local2);
panda$core$UInt64 $tmp425 = (panda$core$UInt64) {48};
panda$core$UInt64 $tmp426 = *(&local3);
panda$core$UInt64 $tmp427 = (panda$core$UInt64) {10};
panda$core$UInt64 $tmp428 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64($tmp426, $tmp427);
uint64_t $tmp429 = $tmp425.value;
uint64_t $tmp430 = $tmp428.value;
uint64_t $tmp431 = $tmp429 - $tmp430;
panda$core$UInt64 $tmp432 = (panda$core$UInt64) {$tmp431};
panda$core$UInt8 $tmp433 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp432);
panda$core$Char8 $tmp434 = panda$core$Char8$init$panda$core$UInt8($tmp433);
int64_t $tmp435 = $tmp424.value;
$tmp423[$tmp435] = $tmp434;
// line 548
panda$core$UInt64 $tmp436 = *(&local3);
panda$core$UInt64 $tmp437 = (panda$core$UInt64) {10};
uint64_t $tmp438 = $tmp436.value;
uint64_t $tmp439 = $tmp437.value;
uint64_t $tmp440 = $tmp438 / $tmp439;
panda$core$UInt64 $tmp441 = (panda$core$UInt64) {$tmp440};
*(&local3) = $tmp441;
// line 549
panda$core$Int64 $tmp442 = *(&local2);
panda$core$Int64 $tmp443 = (panda$core$Int64) {1};
int64_t $tmp444 = $tmp442.value;
int64_t $tmp445 = $tmp443.value;
int64_t $tmp446 = $tmp444 - $tmp445;
panda$core$Int64 $tmp447 = (panda$core$Int64) {$tmp446};
*(&local2) = $tmp447;
goto block8;
block8:;
panda$core$UInt64 $tmp448 = *(&local3);
panda$core$UInt64 $tmp449 = (panda$core$UInt64) {0};
uint64_t $tmp450 = $tmp448.value;
uint64_t $tmp451 = $tmp449.value;
bool $tmp452 = $tmp450 < $tmp451;
panda$core$Bit $tmp453 = (panda$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block7; else goto block9;
block9:;
// line 552
panda$core$Char8* $tmp455 = *(&local1);
panda$core$Int64 $tmp456 = *(&local2);
panda$core$UInt8 $tmp457 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp458 = panda$core$Char8$init$panda$core$UInt8($tmp457);
int64_t $tmp459 = $tmp456.value;
$tmp455[$tmp459] = $tmp458;
goto block2;
block2:;
// line 554
panda$core$Int64 $tmp460 = *(&local0);
panda$core$Int64 $tmp461 = *(&local2);
int64_t $tmp462 = $tmp460.value;
int64_t $tmp463 = $tmp461.value;
int64_t $tmp464 = $tmp462 - $tmp463;
panda$core$Int64 $tmp465 = (panda$core$Int64) {$tmp464};
*(&local4) = $tmp465;
// line 555
panda$core$Int64 $tmp466 = (panda$core$Int64) {0};
panda$core$Int64 $tmp467 = *(&local4);
panda$core$Bit $tmp468 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp469 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp466, $tmp467, $tmp468);
panda$core$Int64 $tmp470 = $tmp469.min;
*(&local5) = $tmp470;
panda$core$Int64 $tmp471 = $tmp469.max;
panda$core$Bit $tmp472 = $tmp469.inclusive;
bool $tmp473 = $tmp472.value;
panda$core$Int64 $tmp474 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp475 = panda$core$Int64$convert$R$panda$core$UInt64($tmp474);
if ($tmp473) goto block13; else goto block14;
block13:;
int64_t $tmp476 = $tmp470.value;
int64_t $tmp477 = $tmp471.value;
bool $tmp478 = $tmp476 <= $tmp477;
panda$core$Bit $tmp479 = (panda$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block10; else goto block11;
block14:;
int64_t $tmp481 = $tmp470.value;
int64_t $tmp482 = $tmp471.value;
bool $tmp483 = $tmp481 < $tmp482;
panda$core$Bit $tmp484 = (panda$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block10; else goto block11;
block10:;
// line 556
panda$core$Char8* $tmp486 = *(&local1);
panda$core$Int64 $tmp487 = *(&local5);
panda$core$Char8* $tmp488 = *(&local1);
panda$core$Int64 $tmp489 = *(&local5);
panda$core$Int64 $tmp490 = *(&local2);
int64_t $tmp491 = $tmp489.value;
int64_t $tmp492 = $tmp490.value;
int64_t $tmp493 = $tmp491 + $tmp492;
panda$core$Int64 $tmp494 = (panda$core$Int64) {$tmp493};
int64_t $tmp495 = $tmp494.value;
panda$core$Char8 $tmp496 = $tmp488[$tmp495];
int64_t $tmp497 = $tmp487.value;
$tmp486[$tmp497] = $tmp496;
goto block12;
block12:;
panda$core$Int64 $tmp498 = *(&local5);
int64_t $tmp499 = $tmp471.value;
int64_t $tmp500 = $tmp498.value;
int64_t $tmp501 = $tmp499 - $tmp500;
panda$core$Int64 $tmp502 = (panda$core$Int64) {$tmp501};
panda$core$UInt64 $tmp503 = panda$core$Int64$convert$R$panda$core$UInt64($tmp502);
if ($tmp473) goto block16; else goto block17;
block16:;
uint64_t $tmp504 = $tmp503.value;
uint64_t $tmp505 = $tmp475.value;
bool $tmp506 = $tmp504 >= $tmp505;
panda$core$Bit $tmp507 = (panda$core$Bit) {$tmp506};
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block15; else goto block11;
block17:;
uint64_t $tmp509 = $tmp503.value;
uint64_t $tmp510 = $tmp475.value;
bool $tmp511 = $tmp509 > $tmp510;
panda$core$Bit $tmp512 = (panda$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block15; else goto block11;
block15:;
int64_t $tmp514 = $tmp498.value;
int64_t $tmp515 = $tmp474.value;
int64_t $tmp516 = $tmp514 + $tmp515;
panda$core$Int64 $tmp517 = (panda$core$Int64) {$tmp516};
*(&local5) = $tmp517;
goto block10;
block11:;
// line 558
panda$core$String* $tmp518 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp519 = *(&local1);
panda$core$Int64 $tmp520 = *(&local4);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp518, $tmp519, $tmp520);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
// unreffing REF($203:panda.core.String)
return $tmp518;

}
panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String(panda$core$UInt64 param0, panda$core$String* param1) {

// line 564
panda$core$Bit $tmp521 = panda$core$Bit$init$builtin_bit(false);
panda$core$UInt64 $tmp522 = (panda$core$UInt64) {18446744073709551615};
panda$core$String* $tmp523 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp521, param0, $tmp522, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
// unreffing REF($3:panda.core.String)
return $tmp523;

}
void panda$core$UInt64$cleanup(panda$core$UInt64 param0) {

return;

}

