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
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/UInt64List.h"
#include "panda/core/SteppedRange.LTpanda/core/UInt64.Cpanda/core/UInt64.GT.h"
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
panda$core$UInt64$wrapperclass_type panda$core$UInt64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$UInt64$wrapper_panda$collections$Iterable, { panda$core$UInt64$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn331)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -1766462914121118016, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 12, 8498199453932512261, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 143, -8960774395503396771, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 12, 8498199453932512261, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 169, 5268811869377932933, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 12, 8498199453932512261, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, 8839777452243195848, NULL };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x6e\x64\x61", 12, 8498199453932512261, NULL };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f", 123, -9161369319874412180, NULL };

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

panda$core$UInt64 $tmp289 = param0.max;
panda$core$UInt64 $tmp290 = param0.min;
uint64_t $tmp291 = $tmp289.value;
uint64_t $tmp292 = $tmp290.value;
uint64_t $tmp293 = $tmp291 - $tmp292;
panda$core$UInt64 $tmp294 = (panda$core$UInt64) {$tmp293};
panda$core$Int64 $tmp295 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp296 = panda$core$Int64$convert$R$panda$core$UInt64($tmp295);
uint64_t $tmp297 = $tmp294.value;
uint64_t $tmp298 = $tmp296.value;
bool $tmp299 = $tmp297 < $tmp298;
panda$core$Bit $tmp300 = (panda$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp302 = (panda$core$Int64) {443};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s303, $tmp302, &$s304);
abort(); // unreachable
block1:;
// line 444
org$pandalanguage$panda$UInt64List* $tmp305 = (org$pandalanguage$panda$UInt64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$UInt64List$class);
panda$core$UInt64 $tmp306 = param0.min;
panda$core$UInt64 $tmp307 = param0.max;
panda$core$UInt64 $tmp308 = (panda$core$UInt64) {1};
panda$core$Bit $tmp309 = param0.inclusive;
panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT $tmp310 = panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$init$panda$core$UInt64$panda$core$UInt64$panda$core$UInt64$panda$core$Bit($tmp306, $tmp307, $tmp308, $tmp309);
org$pandalanguage$panda$UInt64List$init$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT($tmp305, $tmp310);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp305)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp305));
// unreffing REF($18:org.pandalanguage.panda.UInt64List)
return ((panda$collections$ListView*) $tmp305);

}
panda$collections$ListView* panda$core$UInt64$$IDX$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$R$panda$collections$ListView$LTpanda$core$UInt64$GT(panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT param0) {

panda$core$Int64 $tmp311 = org$pandalanguage$panda$UInt64List$computeCount$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT$R$panda$core$Int64(param0);
panda$core$Int64 $tmp312 = (panda$core$Int64) {0};
int64_t $tmp313 = $tmp311.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 > $tmp314;
panda$core$Bit $tmp316 = (panda$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp318 = (panda$core$Int64) {449};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s319, $tmp318, &$s320);
abort(); // unreachable
block1:;
// line 450
org$pandalanguage$panda$UInt64List* $tmp321 = (org$pandalanguage$panda$UInt64List*) pandaObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$UInt64List$class);
org$pandalanguage$panda$UInt64List$init$panda$core$SteppedRange$LTpanda$core$UInt64$Cpanda$core$UInt64$GT($tmp321, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp321)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp321));
// unreffing REF($12:org.pandalanguage.panda.UInt64List)
return ((panda$collections$ListView*) $tmp321);

}
panda$core$Bit panda$core$UInt64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$UInt64 param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp322 = (panda$core$Int64) {0};
int64_t $tmp323 = param1.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 >= $tmp324;
panda$core$Bit $tmp326 = (panda$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block1; else goto block2;
block1:;
panda$core$UInt64$wrapper* $tmp328;
$tmp328 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
$tmp328->value = param0;
ITable* $tmp329 = ((panda$collections$CollectionView*) $tmp328)->$class->itable;
while ($tmp329->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp329 = $tmp329->next;
}
$fn331 $tmp330 = $tmp329->methods[0];
panda$core$Int64 $tmp332 = $tmp330(((panda$collections$CollectionView*) $tmp328));
int64_t $tmp333 = param1.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 < $tmp334;
panda$core$Bit $tmp336 = (panda$core$Bit) {$tmp335};
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$CollectionView*) $tmp328)));
// unreffing REF($7:panda.collections.CollectionView)
*(&local0) = $tmp336;
goto block3;
block2:;
*(&local0) = $tmp326;
goto block3;
block3:;
panda$core$Bit $tmp337 = *(&local0);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp339 = (panda$core$Int64) {455};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s340, $tmp339, &$s341);
abort(); // unreachable
block4:;
// line 456
panda$core$Int64 $tmp342 = (panda$core$Int64) {1};
panda$core$Int64 $tmp343 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp342, param1);
panda$core$Int64 $tmp344 = panda$core$UInt64$$BAND$panda$core$Int64$R$panda$core$Int64(param0, $tmp343);
panda$core$Int64 $tmp345 = (panda$core$Int64) {0};
int64_t $tmp346 = $tmp344.value;
int64_t $tmp347 = $tmp345.value;
bool $tmp348 = $tmp346 != $tmp347;
panda$core$Bit $tmp349 = (panda$core$Bit) {$tmp348};
return $tmp349;

}
panda$core$Int64 panda$core$UInt64$get_count$R$panda$core$Int64(panda$core$UInt64 param0) {

// line 462
panda$core$Int64 $tmp350 = (panda$core$Int64) {64};
return $tmp350;

}
panda$collections$Iterator* panda$core$UInt64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$UInt64 param0) {

// line 467
org$pandalanguage$panda$IntBitIterator* $tmp351 = (org$pandalanguage$panda$IntBitIterator*) pandaObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
panda$core$UInt64 $tmp352 = (panda$core$UInt64) {9223372036854775808};
org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp351, param0, $tmp352);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp351)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp351));
// unreffing REF($1:org.pandalanguage.panda.IntBitIterator)
return ((panda$collections$Iterator*) $tmp351);

}
panda$core$Int64 panda$core$UInt64$get_hash$R$panda$core$Int64(panda$core$UInt64 param0) {

// line 472
uint64_t $tmp353 = param0.value;
panda$core$Int64 $tmp354 = (panda$core$Int64) {((int64_t) $tmp353)};
return $tmp354;

}
panda$core$UInt64$nullable panda$core$UInt64$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$UInt64$nullable local1;
panda$core$Int64 $tmp355 = (panda$core$Int64) {2};
int64_t $tmp356 = param1.value;
int64_t $tmp357 = $tmp355.value;
bool $tmp358 = $tmp356 >= $tmp357;
panda$core$Bit $tmp359 = (panda$core$Bit) {$tmp358};
bool $tmp360 = $tmp359.value;
if ($tmp360) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp361 = (panda$core$Int64) {36};
int64_t $tmp362 = param1.value;
int64_t $tmp363 = $tmp361.value;
bool $tmp364 = $tmp362 <= $tmp363;
panda$core$Bit $tmp365 = (panda$core$Bit) {$tmp364};
*(&local0) = $tmp365;
goto block3;
block2:;
*(&local0) = $tmp359;
goto block3;
block3:;
panda$core$Bit $tmp366 = *(&local0);
bool $tmp367 = $tmp366.value;
if ($tmp367) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp368 = (panda$core$Int64) {478};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s369, $tmp368, &$s370);
abort(); // unreachable
block4:;
// line 479
panda$core$UInt64$nullable $tmp371 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(param0, param1);
*(&local1) = $tmp371;
// line 480
panda$core$UInt64$nullable $tmp372 = *(&local1);
panda$core$Bit $tmp373 = panda$core$Bit$init$builtin_bit(!$tmp372.nonnull);
bool $tmp374 = $tmp373.value;
if ($tmp374) goto block6; else goto block7;
block6:;
// line 481
return ((panda$core$UInt64$nullable) { .nonnull = false });
block7:;
// line 483
panda$core$UInt64$nullable $tmp375 = *(&local1);
return $tmp375;

}
panda$core$Int8 panda$core$UInt64$convert$R$panda$core$Int8(panda$core$UInt64 param0) {

// line 488
uint64_t $tmp376 = param0.value;
panda$core$Int8 $tmp377 = (panda$core$Int8) {((int8_t) $tmp376)};
return $tmp377;

}
panda$core$Int16 panda$core$UInt64$convert$R$panda$core$Int16(panda$core$UInt64 param0) {

// line 493
uint64_t $tmp378 = param0.value;
panda$core$Int16 $tmp379 = (panda$core$Int16) {((int16_t) $tmp378)};
return $tmp379;

}
panda$core$Int32 panda$core$UInt64$convert$R$panda$core$Int32(panda$core$UInt64 param0) {

// line 498
uint64_t $tmp380 = param0.value;
panda$core$Int32 $tmp381 = (panda$core$Int32) {((int32_t) $tmp380)};
return $tmp381;

}
panda$core$Int64 panda$core$UInt64$convert$R$panda$core$Int64(panda$core$UInt64 param0) {

// line 503
uint64_t $tmp382 = param0.value;
panda$core$Int64 $tmp383 = (panda$core$Int64) {((int64_t) $tmp382)};
return $tmp383;

}
panda$core$UInt8 panda$core$UInt64$convert$R$panda$core$UInt8(panda$core$UInt64 param0) {

// line 508
uint64_t $tmp384 = param0.value;
panda$core$UInt8 $tmp385 = (panda$core$UInt8) {((uint8_t) $tmp384)};
return $tmp385;

}
panda$core$UInt16 panda$core$UInt64$convert$R$panda$core$UInt16(panda$core$UInt64 param0) {

// line 513
uint64_t $tmp386 = param0.value;
panda$core$UInt16 $tmp387 = (panda$core$UInt16) {((uint16_t) $tmp386)};
return $tmp387;

}
panda$core$UInt32 panda$core$UInt64$convert$R$panda$core$UInt32(panda$core$UInt64 param0) {

// line 518
uint64_t $tmp388 = param0.value;
panda$core$UInt32 $tmp389 = (panda$core$UInt32) {((uint32_t) $tmp388)};
return $tmp389;

}
panda$core$Real32 panda$core$UInt64$convert$R$panda$core$Real32(panda$core$UInt64 param0) {

// line 523
uint64_t $tmp390 = param0.value;
panda$core$Real32 $tmp391 = (panda$core$Real32) {((float) $tmp390)};
return $tmp391;

}
panda$core$Real64 panda$core$UInt64$convert$R$panda$core$Real64(panda$core$UInt64 param0) {

// line 528
uint64_t $tmp392 = param0.value;
panda$core$Real64 $tmp393 = (panda$core$Real64) {((double) $tmp392)};
return $tmp393;

}
panda$core$String* panda$core$UInt64$convert$R$panda$core$String(panda$core$UInt64 param0) {

panda$core$Int64 local0;
panda$core$Char8* local1;
panda$core$Int64 local2;
panda$core$UInt64 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 534
panda$core$Int64 $tmp394 = (panda$core$Int64) {20};
*(&local0) = $tmp394;
// line 535
panda$core$Int64 $tmp395 = *(&local0);
int64_t $tmp396 = $tmp395.value;
panda$core$Char8* $tmp397 = ((panda$core$Char8*) pandaZAlloc($tmp396 * 1));
*(&local1) = $tmp397;
// line 536
panda$core$Int64 $tmp398 = *(&local0);
panda$core$Int64 $tmp399 = (panda$core$Int64) {1};
int64_t $tmp400 = $tmp398.value;
int64_t $tmp401 = $tmp399.value;
int64_t $tmp402 = $tmp400 - $tmp401;
panda$core$Int64 $tmp403 = (panda$core$Int64) {$tmp402};
*(&local2) = $tmp403;
// line 537
*(&local3) = param0;
// line 538
panda$core$UInt64 $tmp404 = *(&local3);
panda$core$UInt64 $tmp405 = (panda$core$UInt64) {0};
uint64_t $tmp406 = $tmp404.value;
uint64_t $tmp407 = $tmp405.value;
bool $tmp408 = $tmp406 >= $tmp407;
panda$core$Bit $tmp409 = (panda$core$Bit) {$tmp408};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block1; else goto block3;
block1:;
// line 539
goto block4;
block4:;
// line 540
panda$core$Char8* $tmp411 = *(&local1);
panda$core$Int64 $tmp412 = *(&local2);
panda$core$UInt64 $tmp413 = *(&local3);
panda$core$UInt64 $tmp414 = (panda$core$UInt64) {10};
panda$core$UInt64 $tmp415 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64($tmp413, $tmp414);
panda$core$UInt64 $tmp416 = (panda$core$UInt64) {48};
uint64_t $tmp417 = $tmp415.value;
uint64_t $tmp418 = $tmp416.value;
uint64_t $tmp419 = $tmp417 + $tmp418;
panda$core$UInt64 $tmp420 = (panda$core$UInt64) {$tmp419};
panda$core$UInt8 $tmp421 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp420);
panda$core$Char8 $tmp422 = panda$core$Char8$init$panda$core$UInt8($tmp421);
int64_t $tmp423 = $tmp412.value;
$tmp411[$tmp423] = $tmp422;
// line 541
panda$core$UInt64 $tmp424 = *(&local3);
panda$core$UInt64 $tmp425 = (panda$core$UInt64) {10};
uint64_t $tmp426 = $tmp424.value;
uint64_t $tmp427 = $tmp425.value;
uint64_t $tmp428 = $tmp426 / $tmp427;
panda$core$UInt64 $tmp429 = (panda$core$UInt64) {$tmp428};
*(&local3) = $tmp429;
// line 542
panda$core$Int64 $tmp430 = *(&local2);
panda$core$Int64 $tmp431 = (panda$core$Int64) {1};
int64_t $tmp432 = $tmp430.value;
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432 - $tmp433;
panda$core$Int64 $tmp435 = (panda$core$Int64) {$tmp434};
*(&local2) = $tmp435;
goto block5;
block5:;
panda$core$UInt64 $tmp436 = *(&local3);
panda$core$UInt64 $tmp437 = (panda$core$UInt64) {0};
uint64_t $tmp438 = $tmp436.value;
uint64_t $tmp439 = $tmp437.value;
bool $tmp440 = $tmp438 > $tmp439;
panda$core$Bit $tmp441 = (panda$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block4; else goto block6;
block6:;
// line 545
panda$core$Int64 $tmp443 = *(&local2);
panda$core$Int64 $tmp444 = (panda$core$Int64) {1};
int64_t $tmp445 = $tmp443.value;
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445 + $tmp446;
panda$core$Int64 $tmp448 = (panda$core$Int64) {$tmp447};
*(&local2) = $tmp448;
goto block2;
block3:;
// line 1
// line 548
goto block7;
block7:;
// line 549
panda$core$Char8* $tmp449 = *(&local1);
panda$core$Int64 $tmp450 = *(&local2);
panda$core$UInt64 $tmp451 = (panda$core$UInt64) {48};
panda$core$UInt64 $tmp452 = *(&local3);
panda$core$UInt64 $tmp453 = (panda$core$UInt64) {10};
panda$core$UInt64 $tmp454 = panda$core$UInt64$$REM$panda$core$UInt64$R$panda$core$UInt64($tmp452, $tmp453);
uint64_t $tmp455 = $tmp451.value;
uint64_t $tmp456 = $tmp454.value;
uint64_t $tmp457 = $tmp455 - $tmp456;
panda$core$UInt64 $tmp458 = (panda$core$UInt64) {$tmp457};
panda$core$UInt8 $tmp459 = panda$core$UInt64$convert$R$panda$core$UInt8($tmp458);
panda$core$Char8 $tmp460 = panda$core$Char8$init$panda$core$UInt8($tmp459);
int64_t $tmp461 = $tmp450.value;
$tmp449[$tmp461] = $tmp460;
// line 550
panda$core$UInt64 $tmp462 = *(&local3);
panda$core$UInt64 $tmp463 = (panda$core$UInt64) {10};
uint64_t $tmp464 = $tmp462.value;
uint64_t $tmp465 = $tmp463.value;
uint64_t $tmp466 = $tmp464 / $tmp465;
panda$core$UInt64 $tmp467 = (panda$core$UInt64) {$tmp466};
*(&local3) = $tmp467;
// line 551
panda$core$Int64 $tmp468 = *(&local2);
panda$core$Int64 $tmp469 = (panda$core$Int64) {1};
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
int64_t $tmp472 = $tmp470 - $tmp471;
panda$core$Int64 $tmp473 = (panda$core$Int64) {$tmp472};
*(&local2) = $tmp473;
goto block8;
block8:;
panda$core$UInt64 $tmp474 = *(&local3);
panda$core$UInt64 $tmp475 = (panda$core$UInt64) {0};
uint64_t $tmp476 = $tmp474.value;
uint64_t $tmp477 = $tmp475.value;
bool $tmp478 = $tmp476 < $tmp477;
panda$core$Bit $tmp479 = (panda$core$Bit) {$tmp478};
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block7; else goto block9;
block9:;
// line 554
panda$core$Char8* $tmp481 = *(&local1);
panda$core$Int64 $tmp482 = *(&local2);
panda$core$UInt8 $tmp483 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp484 = panda$core$Char8$init$panda$core$UInt8($tmp483);
int64_t $tmp485 = $tmp482.value;
$tmp481[$tmp485] = $tmp484;
goto block2;
block2:;
// line 556
panda$core$Int64 $tmp486 = *(&local0);
panda$core$Int64 $tmp487 = *(&local2);
int64_t $tmp488 = $tmp486.value;
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488 - $tmp489;
panda$core$Int64 $tmp491 = (panda$core$Int64) {$tmp490};
*(&local4) = $tmp491;
// line 557
panda$core$Int64 $tmp492 = (panda$core$Int64) {0};
panda$core$Int64 $tmp493 = *(&local4);
panda$core$Bit $tmp494 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp495 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp492, $tmp493, $tmp494);
panda$core$Int64 $tmp496 = $tmp495.min;
*(&local5) = $tmp496;
panda$core$Int64 $tmp497 = $tmp495.max;
panda$core$Bit $tmp498 = $tmp495.inclusive;
bool $tmp499 = $tmp498.value;
panda$core$Int64 $tmp500 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp501 = panda$core$Int64$convert$R$panda$core$UInt64($tmp500);
if ($tmp499) goto block13; else goto block14;
block13:;
int64_t $tmp502 = $tmp496.value;
int64_t $tmp503 = $tmp497.value;
bool $tmp504 = $tmp502 <= $tmp503;
panda$core$Bit $tmp505 = (panda$core$Bit) {$tmp504};
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block10; else goto block11;
block14:;
int64_t $tmp507 = $tmp496.value;
int64_t $tmp508 = $tmp497.value;
bool $tmp509 = $tmp507 < $tmp508;
panda$core$Bit $tmp510 = (panda$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block10; else goto block11;
block10:;
// line 558
panda$core$Char8* $tmp512 = *(&local1);
panda$core$Int64 $tmp513 = *(&local5);
panda$core$Char8* $tmp514 = *(&local1);
panda$core$Int64 $tmp515 = *(&local5);
panda$core$Int64 $tmp516 = *(&local2);
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517 + $tmp518;
panda$core$Int64 $tmp520 = (panda$core$Int64) {$tmp519};
int64_t $tmp521 = $tmp520.value;
panda$core$Char8 $tmp522 = $tmp514[$tmp521];
int64_t $tmp523 = $tmp513.value;
$tmp512[$tmp523] = $tmp522;
goto block12;
block12:;
panda$core$Int64 $tmp524 = *(&local5);
int64_t $tmp525 = $tmp497.value;
int64_t $tmp526 = $tmp524.value;
int64_t $tmp527 = $tmp525 - $tmp526;
panda$core$Int64 $tmp528 = (panda$core$Int64) {$tmp527};
panda$core$UInt64 $tmp529 = panda$core$Int64$convert$R$panda$core$UInt64($tmp528);
if ($tmp499) goto block16; else goto block17;
block16:;
uint64_t $tmp530 = $tmp529.value;
uint64_t $tmp531 = $tmp501.value;
bool $tmp532 = $tmp530 >= $tmp531;
panda$core$Bit $tmp533 = (panda$core$Bit) {$tmp532};
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block15; else goto block11;
block17:;
uint64_t $tmp535 = $tmp529.value;
uint64_t $tmp536 = $tmp501.value;
bool $tmp537 = $tmp535 > $tmp536;
panda$core$Bit $tmp538 = (panda$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block15; else goto block11;
block15:;
int64_t $tmp540 = $tmp524.value;
int64_t $tmp541 = $tmp500.value;
int64_t $tmp542 = $tmp540 + $tmp541;
panda$core$Int64 $tmp543 = (panda$core$Int64) {$tmp542};
*(&local5) = $tmp543;
goto block10;
block11:;
// line 560
panda$core$String* $tmp544 = (panda$core$String*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp545 = *(&local1);
panda$core$Int64 $tmp546 = *(&local4);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp544, $tmp545, $tmp546);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing REF($203:panda.core.String)
return $tmp544;

}
panda$core$String* panda$core$UInt64$format$panda$core$String$R$panda$core$String(panda$core$UInt64 param0, panda$core$String* param1) {

// line 566
panda$core$Bit $tmp547 = panda$core$Bit$init$builtin_bit(false);
panda$core$UInt64 $tmp548 = (panda$core$UInt64) {18446744073709551615};
panda$core$String* $tmp549 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp547, param0, $tmp548, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
// unreffing REF($3:panda.core.String)
return $tmp549;

}
void panda$core$UInt64$cleanup(panda$core$UInt64 param0) {

return;

}

