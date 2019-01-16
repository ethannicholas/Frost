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
#include "panda/core/Panda.h"
#include "org/pandalanguage/panda/Int64List.h"
#include "panda/core/SteppedRange.LTpanda/core/Int64.Cpanda/core/Int64.GT.h"
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
    $tmp2 = (panda$core$Bit$wrapper*) frostObjectAlloc(13, (panda$core$Class*) &panda$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((panda$core$Object*) $tmp2);
}
__attribute__((weak)) panda$collections$Iterator* panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim(panda$collections$ListView* p0) {
    panda$collections$Iterator* result = panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) panda$collections$Iterator* panda$core$Int64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim(panda$core$Object* p0) {
    panda$collections$Iterator* result = panda$core$Int64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(((panda$core$Int64$wrapper*) p0)->value);

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
__attribute__((weak)) panda$core$Int64 panda$core$Int64$get_abs$R$panda$core$Int64$shim(panda$core$Object* p0) {
    panda$core$Int64 result = panda$core$Int64$get_abs$R$panda$core$Int64(((panda$core$Int64$wrapper*) p0)->value);

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

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$Int64$_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int64$_panda$collections$CollectionView, { panda$core$Int64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[2]; } panda$core$Int64$_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int64$_panda$core$Formattable, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[4]; } panda$core$Int64$_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$_panda$core$Equatable, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[7]; } panda$core$Int64$_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int64$_panda$core$Comparable, { panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int64$_panda$collections$ListView, { panda$core$Int64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* next; void* methods[1]; } panda$core$Int64$_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$_panda$collections$Iterable, { panda$core$Int64$get_hash$R$panda$core$Int64$shim} };

static panda$core$String $s1;
panda$core$Int64$class_type panda$core$Int64$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$_panda$collections$Key, { panda$core$Int64$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim, panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SUB$R$panda$core$Int64$shim, panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$INTDIV$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$DIV$panda$core$Int8$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Int16$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Int32$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Int64$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt8$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt16$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt32$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$UInt64$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Real32$R$panda$core$Real64$shim, panda$core$Int64$$DIV$panda$core$Real64$R$panda$core$Real64$shim, panda$core$Int64$$BNOT$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$BAND$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$BOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$BOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$BXOR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$BXOR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SHL$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$SHR$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$SHR$panda$core$UInt64$R$panda$core$UInt64$shim, panda$core$Int64$$EQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$EQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$EQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int8$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int16$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int32$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$get_abs$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64$shim, panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64$shim, panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$get_count$R$panda$core$Int64$shim, panda$core$Int64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim, panda$core$Int64$get_hash$R$panda$core$Int64$shim, panda$core$Int64$convert$R$panda$core$Int8$shim, panda$core$Int64$convert$R$panda$core$Int16$shim, panda$core$Int64$convert$R$panda$core$Int32$shim, panda$core$Int64$convert$R$panda$core$UInt8$shim, panda$core$Int64$convert$R$panda$core$UInt16$shim, panda$core$Int64$convert$R$panda$core$UInt32$shim, panda$core$Int64$convert$R$panda$core$UInt64$shim, panda$core$Int64$convert$R$panda$core$Real32$shim, panda$core$Int64$convert$R$panda$core$Real64$shim, panda$core$Int64$format$panda$core$String$R$panda$core$String$shim, panda$core$Int64$cleanup$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[7]; } panda$core$Int64$wrapper_panda$collections$CollectionView = { (panda$core$Class*) &panda$collections$CollectionView$class, NULL, { panda$core$Int64$get_count$R$panda$core$Int64$shim, panda$collections$CollectionView$join$R$panda$core$String, panda$collections$CollectionView$join$panda$core$String$R$panda$core$String, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$R$panda$collections$CollectionView$T, panda$collections$CollectionView$fold$$LPpanda$collections$CollectionView$T$Cpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$T$RP$panda$collections$CollectionView$T$R$panda$collections$CollectionView$T, panda$collections$CollectionView$apply$$LPpanda$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, panda$collections$CollectionView$map$$LPpanda$collections$CollectionView$T$RP$EQ$GT$LPpanda$collections$CollectionView$map$U$RP$R$panda$collections$Array$LTpanda$collections$CollectionView$map$U$GT} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$core$Formattable = { (panda$core$Class*) &panda$core$Formattable$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$CollectionView, { panda$core$Int64$format$panda$core$String$R$panda$core$String$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[2]; } panda$core$Int64$wrapper_panda$core$Equatable = { (panda$core$Class*) &panda$core$Equatable$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Formattable, { panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[4]; } panda$core$Int64$wrapper_panda$core$Comparable = { (panda$core$Class*) &panda$core$Comparable$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Equatable, { panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit$shim, panda$core$Int64$$LE$panda$core$Int64$R$panda$core$Bit$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[7]; } panda$core$Int64$wrapper_panda$collections$ListView = { (panda$core$Class*) &panda$collections$ListView$class, (ITable*) &panda$core$Int64$wrapper_panda$core$Comparable, { panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit$shim, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Q$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$filter$$LPpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT, panda$collections$ListView$get_iterator$R$panda$collections$Iterator$LTpanda$collections$ListView$T$GT$shim, panda$collections$ListView$sort$$LPpanda$collections$ListView$T$Cpanda$collections$ListView$T$RP$EQ$GT$LPpanda$core$Bit$RP$R$panda$collections$ListView$LTpanda$collections$ListView$T$GT} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$collections$Iterable = { (panda$core$Class*) &panda$collections$Iterable$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$ListView, { panda$core$Int64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT$shim} };

struct { panda$core$Class* cl; ITable* itable; void* methods[1]; } panda$core$Int64$wrapper_panda$collections$Key = { (panda$core$Class*) &panda$collections$Key$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$Iterable, { panda$core$Int64$get_hash$R$panda$core$Int64$shim} };

static panda$core$String $s3;
panda$core$Int64$wrapperclass_type panda$core$Int64$wrapperclass = { (panda$core$Class*) &panda$core$Class$class, -999, &$s3, (panda$core$Class*) &panda$core$Value$class, (ITable*) &panda$core$Int64$wrapper_panda$collections$Key, { panda$core$Int64$convert$R$panda$core$String$shim, panda$core$Value$cleanup$shim} };typedef panda$core$Int64 (*$fn349)(panda$collections$CollectionView*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s3 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -4218233432987190369, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 140, 6228313074009646902, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 165, 6272311348984350941, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -5285770296737947933, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f", 121, 6013435374676263418, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x27", 73, -4164323057498451277, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x27", 73, -4164323057498451277, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static panda$core$String $s424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 121, -2674131195915389458, NULL };

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
panda$core$Int64 panda$core$Int64$get_abs$R$panda$core$Int64(panda$core$Int64 param0) {

// line 383
panda$core$Int64 $tmp226 = (panda$core$Int64) {0};
int64_t $tmp227 = param0.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 < $tmp228;
panda$core$Bit $tmp230 = (panda$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block1; else goto block2;
block1:;
// line 384
panda$core$Int64 $tmp232 = panda$core$Int64$$SUB$R$panda$core$Int64(param0);
return $tmp232;
block2:;
// line 386
return param0;

}
panda$core$Int64 panda$core$Int64$min$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 392
int64_t $tmp233 = param0.value;
int8_t $tmp234 = param1.value;
bool $tmp235 = $tmp233 < ((int64_t) $tmp234);
panda$core$Bit $tmp236 = panda$core$Bit$init$builtin_bit($tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block1; else goto block2;
block1:;
// line 393
int64_t $tmp238 = param0.value;
panda$core$Int64 $tmp239 = panda$core$Int64$init$builtin_int64($tmp238);
return $tmp239;
block2:;
// line 395
int8_t $tmp240 = param1.value;
panda$core$Int64 $tmp241 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp240));
return $tmp241;

}
panda$core$Int64 panda$core$Int64$min$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 401
int64_t $tmp242 = param0.value;
int16_t $tmp243 = param1.value;
bool $tmp244 = $tmp242 < ((int64_t) $tmp243);
panda$core$Bit $tmp245 = panda$core$Bit$init$builtin_bit($tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block1; else goto block2;
block1:;
// line 402
int64_t $tmp247 = param0.value;
panda$core$Int64 $tmp248 = panda$core$Int64$init$builtin_int64($tmp247);
return $tmp248;
block2:;
// line 404
int16_t $tmp249 = param1.value;
panda$core$Int64 $tmp250 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp249));
return $tmp250;

}
panda$core$Int64 panda$core$Int64$min$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 410
int64_t $tmp251 = param0.value;
int32_t $tmp252 = param1.value;
bool $tmp253 = $tmp251 < ((int64_t) $tmp252);
panda$core$Bit $tmp254 = panda$core$Bit$init$builtin_bit($tmp253);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block1; else goto block2;
block1:;
// line 411
int64_t $tmp256 = param0.value;
panda$core$Int64 $tmp257 = panda$core$Int64$init$builtin_int64($tmp256);
return $tmp257;
block2:;
// line 413
int32_t $tmp258 = param1.value;
panda$core$Int64 $tmp259 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp258));
return $tmp259;

}
panda$core$Int64 panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 419
int64_t $tmp260 = param0.value;
int64_t $tmp261 = param1.value;
bool $tmp262 = $tmp260 < $tmp261;
panda$core$Bit $tmp263 = panda$core$Bit$init$builtin_bit($tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block1; else goto block2;
block1:;
// line 420
int64_t $tmp265 = param0.value;
panda$core$Int64 $tmp266 = panda$core$Int64$init$builtin_int64($tmp265);
return $tmp266;
block2:;
// line 422
int64_t $tmp267 = param1.value;
panda$core$Int64 $tmp268 = panda$core$Int64$init$builtin_int64($tmp267);
return $tmp268;

}
panda$core$Int64 panda$core$Int64$max$panda$core$Int8$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int8 param1) {

// line 432
int64_t $tmp269 = param0.value;
int8_t $tmp270 = param1.value;
bool $tmp271 = $tmp269 > ((int64_t) $tmp270);
panda$core$Bit $tmp272 = panda$core$Bit$init$builtin_bit($tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block1; else goto block2;
block1:;
// line 433
int64_t $tmp274 = param0.value;
panda$core$Int64 $tmp275 = panda$core$Int64$init$builtin_int64($tmp274);
return $tmp275;
block2:;
// line 435
int8_t $tmp276 = param1.value;
panda$core$Int64 $tmp277 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp276));
return $tmp277;

}
panda$core$Int64 panda$core$Int64$max$panda$core$Int16$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int16 param1) {

// line 441
int64_t $tmp278 = param0.value;
int16_t $tmp279 = param1.value;
bool $tmp280 = $tmp278 > ((int64_t) $tmp279);
panda$core$Bit $tmp281 = panda$core$Bit$init$builtin_bit($tmp280);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block1; else goto block2;
block1:;
// line 442
int64_t $tmp283 = param0.value;
panda$core$Int64 $tmp284 = panda$core$Int64$init$builtin_int64($tmp283);
return $tmp284;
block2:;
// line 444
int16_t $tmp285 = param1.value;
panda$core$Int64 $tmp286 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp285));
return $tmp286;

}
panda$core$Int64 panda$core$Int64$max$panda$core$Int32$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int32 param1) {

// line 450
int64_t $tmp287 = param0.value;
int32_t $tmp288 = param1.value;
bool $tmp289 = $tmp287 > ((int64_t) $tmp288);
panda$core$Bit $tmp290 = panda$core$Bit$init$builtin_bit($tmp289);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block1; else goto block2;
block1:;
// line 451
int64_t $tmp292 = param0.value;
panda$core$Int64 $tmp293 = panda$core$Int64$init$builtin_int64($tmp292);
return $tmp293;
block2:;
// line 453
int32_t $tmp294 = param1.value;
panda$core$Int64 $tmp295 = panda$core$Int64$init$builtin_int64(((int64_t) $tmp294));
return $tmp295;

}
panda$core$Int64 panda$core$Int64$max$panda$core$Int64$R$panda$core$Int64(panda$core$Int64 param0, panda$core$Int64 param1) {

// line 459
int64_t $tmp296 = param0.value;
int64_t $tmp297 = param1.value;
bool $tmp298 = $tmp296 > $tmp297;
panda$core$Bit $tmp299 = panda$core$Bit$init$builtin_bit($tmp298);
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block1; else goto block2;
block1:;
// line 460
int64_t $tmp301 = param0.value;
panda$core$Int64 $tmp302 = panda$core$Int64$init$builtin_int64($tmp301);
return $tmp302;
block2:;
// line 462
int64_t $tmp303 = param1.value;
panda$core$Int64 $tmp304 = panda$core$Int64$init$builtin_int64($tmp303);
return $tmp304;

}
panda$collections$ListView* panda$core$Int64$$IDX$panda$core$Range$LTpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$core$Int64$GT(panda$core$Range$LTpanda$core$Int64$GT param0) {

panda$core$Int64 $tmp305 = param0.max;
panda$core$UInt64 $tmp306 = panda$core$Int64$convert$R$panda$core$UInt64($tmp305);
panda$core$Int64 $tmp307 = param0.min;
panda$core$UInt64 $tmp308 = panda$core$Int64$convert$R$panda$core$UInt64($tmp307);
uint64_t $tmp309 = $tmp306.value;
uint64_t $tmp310 = $tmp308.value;
uint64_t $tmp311 = $tmp309 - $tmp310;
panda$core$UInt64 $tmp312 = (panda$core$UInt64) {$tmp311};
panda$core$Int64 $tmp313 = (panda$core$Int64) {9223372036854775807};
panda$core$UInt64 $tmp314 = panda$core$Int64$convert$R$panda$core$UInt64($tmp313);
uint64_t $tmp315 = $tmp312.value;
uint64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 < $tmp316;
panda$core$Bit $tmp318 = (panda$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp320 = (panda$core$Int64) {471};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s321, $tmp320, &$s322);
abort(); // unreachable
block1:;
// line 472
org$pandalanguage$panda$Int64List* $tmp323 = (org$pandalanguage$panda$Int64List*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$Int64List$class);
panda$core$Int64 $tmp324 = param0.min;
panda$core$Int64 $tmp325 = param0.max;
panda$core$Int64 $tmp326 = (panda$core$Int64) {1};
panda$core$Bit $tmp327 = param0.inclusive;
panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT $tmp328 = panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp324, $tmp325, $tmp326, $tmp327);
org$pandalanguage$panda$Int64List$init$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT($tmp323, $tmp328);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp323)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp323));
// unreffing REF($20:org.pandalanguage.panda.Int64List)
return ((panda$collections$ListView*) $tmp323);

}
panda$collections$ListView* panda$core$Int64$$IDX$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$R$panda$collections$ListView$LTpanda$core$Int64$GT(panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT param0) {

panda$core$Int64 $tmp329 = org$pandalanguage$panda$Int64List$computeCount$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT$R$panda$core$Int64(param0);
panda$core$Int64 $tmp330 = (panda$core$Int64) {0};
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330.value;
bool $tmp333 = $tmp331 > $tmp332;
panda$core$Bit $tmp334 = (panda$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp336 = (panda$core$Int64) {477};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s337, $tmp336, &$s338);
abort(); // unreachable
block1:;
// line 478
org$pandalanguage$panda$Int64List* $tmp339 = (org$pandalanguage$panda$Int64List*) frostObjectAlloc(64, (panda$core$Class*) &org$pandalanguage$panda$Int64List$class);
org$pandalanguage$panda$Int64List$init$panda$core$SteppedRange$LTpanda$core$Int64$Cpanda$core$Int64$GT($tmp339, param0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$ListView*) $tmp339)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($12:org.pandalanguage.panda.Int64List)
return ((panda$collections$ListView*) $tmp339);

}
panda$core$Bit panda$core$Int64$$IDX$panda$core$Int64$R$panda$core$Bit(panda$core$Int64 param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$Int64 $tmp340 = (panda$core$Int64) {0};
int64_t $tmp341 = param1.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 >= $tmp342;
panda$core$Bit $tmp344 = (panda$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block1; else goto block2;
block1:;
panda$core$Int64$wrapper* $tmp346;
$tmp346 = (panda$core$Int64$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp346->value = param0;
ITable* $tmp347 = ((panda$collections$CollectionView*) $tmp346)->$class->itable;
while ($tmp347->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp347 = $tmp347->next;
}
$fn349 $tmp348 = $tmp347->methods[0];
panda$core$Int64 $tmp350 = $tmp348(((panda$collections$CollectionView*) $tmp346));
int64_t $tmp351 = param1.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 < $tmp352;
panda$core$Bit $tmp354 = (panda$core$Bit) {$tmp353};
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$CollectionView*) $tmp346)));
// unreffing REF($7:panda.collections.CollectionView)
*(&local0) = $tmp354;
goto block3;
block2:;
*(&local0) = $tmp344;
goto block3;
block3:;
panda$core$Bit $tmp355 = *(&local0);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp357 = (panda$core$Int64) {483};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s358, $tmp357, &$s359);
abort(); // unreachable
block4:;
// line 484
panda$core$Int64 $tmp360 = (panda$core$Int64) {1};
panda$core$Int64 $tmp361 = panda$core$Int64$$SHL$panda$core$Int64$R$panda$core$Int64($tmp360, param1);
panda$core$Int64 $tmp362 = panda$core$Int64$$BAND$panda$core$Int64$R$panda$core$Int64(param0, $tmp361);
panda$core$Int64 $tmp363 = (panda$core$Int64) {0};
int64_t $tmp364 = $tmp362.value;
int64_t $tmp365 = $tmp363.value;
bool $tmp366 = $tmp364 != $tmp365;
panda$core$Bit $tmp367 = (panda$core$Bit) {$tmp366};
return $tmp367;

}
panda$core$Int64 panda$core$Int64$get_count$R$panda$core$Int64(panda$core$Int64 param0) {

// line 490
panda$core$Int64 $tmp368 = (panda$core$Int64) {64};
return $tmp368;

}
panda$collections$Iterator* panda$core$Int64$get_iterator$R$panda$collections$Iterator$LTpanda$core$Bit$GT(panda$core$Int64 param0) {

// line 495
org$pandalanguage$panda$IntBitIterator* $tmp369 = (org$pandalanguage$panda$IntBitIterator*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$panda$IntBitIterator$class);
panda$core$UInt64 $tmp370 = panda$core$Int64$convert$R$panda$core$UInt64(param0);
panda$core$UInt64 $tmp371 = (panda$core$UInt64) {9223372036854775808};
org$pandalanguage$panda$IntBitIterator$init$panda$core$UInt64$panda$core$UInt64($tmp369, $tmp370, $tmp371);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$collections$Iterator*) $tmp369)));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing REF($1:org.pandalanguage.panda.IntBitIterator)
return ((panda$collections$Iterator*) $tmp369);

}
panda$core$Int64 panda$core$Int64$get_hash$R$panda$core$Int64(panda$core$Int64 param0) {

// line 500
int64_t $tmp372 = param0.value;
panda$core$Int64 $tmp373 = (panda$core$Int64) {$tmp372};
return $tmp373;

}
panda$core$Int64$nullable panda$core$Int64$parse$panda$core$String$panda$core$Int64$R$panda$core$Int64$Q(panda$core$String* param0, panda$core$Int64 param1) {

panda$core$Bit local0;
panda$core$UInt64$nullable local1;
panda$core$UInt64$nullable local2;
panda$core$Int64 $tmp374 = (panda$core$Int64) {2};
int64_t $tmp375 = param1.value;
int64_t $tmp376 = $tmp374.value;
bool $tmp377 = $tmp375 >= $tmp376;
panda$core$Bit $tmp378 = (panda$core$Bit) {$tmp377};
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block1; else goto block2;
block1:;
panda$core$Int64 $tmp380 = (panda$core$Int64) {36};
int64_t $tmp381 = param1.value;
int64_t $tmp382 = $tmp380.value;
bool $tmp383 = $tmp381 <= $tmp382;
panda$core$Bit $tmp384 = (panda$core$Bit) {$tmp383};
*(&local0) = $tmp384;
goto block3;
block2:;
*(&local0) = $tmp378;
goto block3;
block3:;
panda$core$Bit $tmp385 = *(&local0);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp387 = (panda$core$Int64) {506};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s388, $tmp387, &$s389);
abort(); // unreachable
block4:;
// line 507
panda$core$Bit $tmp390 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(param0, &$s391);
bool $tmp392 = $tmp390.value;
if ($tmp392) goto block6; else goto block8;
block6:;
// line 508
panda$core$Int64 $tmp393 = (panda$core$Int64) {1};
panda$core$Bit $tmp394 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp395 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp393, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp394);
panda$core$String* $tmp396 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(param0, $tmp395);
panda$core$UInt64$nullable $tmp397 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q($tmp396, param1);
*(&local1) = $tmp397;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp396));
// unreffing REF($31:panda.core.String)
// line 509
panda$core$UInt64$nullable $tmp398 = *(&local1);
panda$core$Bit $tmp399 = panda$core$Bit$init$builtin_bit(!$tmp398.nonnull);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block9; else goto block10;
block9:;
// line 510
return ((panda$core$Int64$nullable) { .nonnull = false });
block10:;
// line 512
panda$core$UInt64$nullable $tmp401 = *(&local1);
panda$core$Bit $tmp402 = panda$core$Bit$init$builtin_bit($tmp401.nonnull);
bool $tmp403 = $tmp402.value;
if ($tmp403) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp404 = (panda$core$Int64) {512};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s405, $tmp404, &$s406);
abort(); // unreachable
block11:;
panda$core$Int64 $tmp407 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) $tmp401.value));
panda$core$Int64 $tmp408 = panda$core$Int64$$SUB$R$panda$core$Int64($tmp407);
return ((panda$core$Int64$nullable) { $tmp408, true });
block8:;
// line 1
// line 515
panda$core$UInt64$nullable $tmp409 = panda$core$Panda$parse$panda$core$String$panda$core$Int64$R$panda$core$UInt64$Q(param0, param1);
*(&local2) = $tmp409;
// line 516
panda$core$UInt64$nullable $tmp410 = *(&local2);
panda$core$Bit $tmp411 = panda$core$Bit$init$builtin_bit(!$tmp410.nonnull);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block13; else goto block14;
block13:;
// line 517
return ((panda$core$Int64$nullable) { .nonnull = false });
block14:;
// line 519
panda$core$UInt64$nullable $tmp413 = *(&local2);
panda$core$Bit $tmp414 = panda$core$Bit$init$builtin_bit($tmp413.nonnull);
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block15; else goto block16;
block16:;
panda$core$Int64 $tmp416 = (panda$core$Int64) {519};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s417, $tmp416, &$s418);
abort(); // unreachable
block15:;
panda$core$Int64 $tmp419 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64) $tmp413.value));
return ((panda$core$Int64$nullable) { $tmp419, true });
block7:;
panda$core$Bit $tmp420 = panda$core$Bit$init$builtin_bit(false);
bool $tmp421 = $tmp420.value;
if ($tmp421) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp422 = (panda$core$Int64) {506};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s423, $tmp422, &$s424);
abort(); // unreachable
block17:;
abort(); // unreachable

}
panda$core$Int8 panda$core$Int64$convert$R$panda$core$Int8(panda$core$Int64 param0) {

// line 525
int64_t $tmp425 = param0.value;
panda$core$Int8 $tmp426 = (panda$core$Int8) {((int8_t) $tmp425)};
return $tmp426;

}
panda$core$Int16 panda$core$Int64$convert$R$panda$core$Int16(panda$core$Int64 param0) {

// line 530
int64_t $tmp427 = param0.value;
panda$core$Int16 $tmp428 = (panda$core$Int16) {((int16_t) $tmp427)};
return $tmp428;

}
panda$core$Int32 panda$core$Int64$convert$R$panda$core$Int32(panda$core$Int64 param0) {

// line 535
int64_t $tmp429 = param0.value;
panda$core$Int32 $tmp430 = (panda$core$Int32) {((int32_t) $tmp429)};
return $tmp430;

}
panda$core$UInt8 panda$core$Int64$convert$R$panda$core$UInt8(panda$core$Int64 param0) {

// line 540
int64_t $tmp431 = param0.value;
panda$core$UInt8 $tmp432 = (panda$core$UInt8) {((uint8_t) $tmp431)};
return $tmp432;

}
panda$core$UInt16 panda$core$Int64$convert$R$panda$core$UInt16(panda$core$Int64 param0) {

// line 545
int64_t $tmp433 = param0.value;
panda$core$UInt16 $tmp434 = (panda$core$UInt16) {((uint16_t) $tmp433)};
return $tmp434;

}
panda$core$UInt32 panda$core$Int64$convert$R$panda$core$UInt32(panda$core$Int64 param0) {

// line 550
int64_t $tmp435 = param0.value;
panda$core$UInt32 $tmp436 = (panda$core$UInt32) {((uint32_t) $tmp435)};
return $tmp436;

}
panda$core$UInt64 panda$core$Int64$convert$R$panda$core$UInt64(panda$core$Int64 param0) {

// line 555
int64_t $tmp437 = param0.value;
panda$core$UInt64 $tmp438 = (panda$core$UInt64) {((uint64_t) $tmp437)};
return $tmp438;

}
panda$core$Real32 panda$core$Int64$convert$R$panda$core$Real32(panda$core$Int64 param0) {

// line 560
int64_t $tmp439 = param0.value;
panda$core$Real32 $tmp440 = (panda$core$Real32) {((float) $tmp439)};
return $tmp440;

}
panda$core$Real64 panda$core$Int64$convert$R$panda$core$Real64(panda$core$Int64 param0) {

// line 565
int64_t $tmp441 = param0.value;
panda$core$Real64 $tmp442 = (panda$core$Real64) {((double) $tmp441)};
return $tmp442;

}
panda$core$String* panda$core$Int64$convert$R$panda$core$String(panda$core$Int64 param0) {

panda$core$Int64 local0;
panda$core$Char8* local1;
panda$core$Int64 local2;
panda$core$Int64 local3;
panda$core$Int64 local4;
panda$core$Int64 local5;
// line 571
panda$core$Int64 $tmp443 = (panda$core$Int64) {20};
*(&local0) = $tmp443;
// line 572
panda$core$Int64 $tmp444 = *(&local0);
int64_t $tmp445 = $tmp444.value;
panda$core$Char8* $tmp446 = ((panda$core$Char8*) frostAlloc($tmp445 * 1));
*(&local1) = $tmp446;
// line 573
panda$core$Int64 $tmp447 = *(&local0);
panda$core$Int64 $tmp448 = (panda$core$Int64) {1};
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448.value;
int64_t $tmp451 = $tmp449 - $tmp450;
panda$core$Int64 $tmp452 = (panda$core$Int64) {$tmp451};
*(&local2) = $tmp452;
// line 574
*(&local3) = param0;
// line 575
panda$core$Int64 $tmp453 = *(&local3);
panda$core$Int64 $tmp454 = (panda$core$Int64) {0};
int64_t $tmp455 = $tmp453.value;
int64_t $tmp456 = $tmp454.value;
bool $tmp457 = $tmp455 >= $tmp456;
panda$core$Bit $tmp458 = (panda$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block1; else goto block3;
block1:;
// line 576
goto block4;
block4:;
// line 577
panda$core$Char8* $tmp460 = *(&local1);
panda$core$Int64 $tmp461 = *(&local2);
panda$core$Int64 $tmp462 = *(&local3);
panda$core$Int64 $tmp463 = (panda$core$Int64) {10};
panda$core$Int64 $tmp464 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp462, $tmp463);
panda$core$Int64 $tmp465 = (panda$core$Int64) {48};
int64_t $tmp466 = $tmp464.value;
int64_t $tmp467 = $tmp465.value;
int64_t $tmp468 = $tmp466 + $tmp467;
panda$core$Int64 $tmp469 = (panda$core$Int64) {$tmp468};
panda$core$UInt8 $tmp470 = panda$core$Int64$convert$R$panda$core$UInt8($tmp469);
panda$core$Char8 $tmp471 = panda$core$Char8$init$panda$core$UInt8($tmp470);
int64_t $tmp472 = $tmp461.value;
$tmp460[$tmp472] = $tmp471;
// line 578
panda$core$Int64 $tmp473 = *(&local3);
panda$core$Int64 $tmp474 = (panda$core$Int64) {10};
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475 / $tmp476;
panda$core$Int64 $tmp478 = (panda$core$Int64) {$tmp477};
*(&local3) = $tmp478;
// line 579
panda$core$Int64 $tmp479 = *(&local2);
panda$core$Int64 $tmp480 = (panda$core$Int64) {1};
int64_t $tmp481 = $tmp479.value;
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481 - $tmp482;
panda$core$Int64 $tmp484 = (panda$core$Int64) {$tmp483};
*(&local2) = $tmp484;
goto block5;
block5:;
panda$core$Int64 $tmp485 = *(&local3);
panda$core$Int64 $tmp486 = (panda$core$Int64) {0};
int64_t $tmp487 = $tmp485.value;
int64_t $tmp488 = $tmp486.value;
bool $tmp489 = $tmp487 > $tmp488;
panda$core$Bit $tmp490 = (panda$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block4; else goto block6;
block6:;
// line 582
panda$core$Int64 $tmp492 = *(&local2);
panda$core$Int64 $tmp493 = (panda$core$Int64) {1};
int64_t $tmp494 = $tmp492.value;
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494 + $tmp495;
panda$core$Int64 $tmp497 = (panda$core$Int64) {$tmp496};
*(&local2) = $tmp497;
goto block2;
block3:;
// line 1
// line 585
goto block7;
block7:;
// line 586
panda$core$Char8* $tmp498 = *(&local1);
panda$core$Int64 $tmp499 = *(&local2);
panda$core$Int64 $tmp500 = (panda$core$Int64) {48};
panda$core$Int64 $tmp501 = *(&local3);
panda$core$Int64 $tmp502 = (panda$core$Int64) {10};
panda$core$Int64 $tmp503 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64($tmp501, $tmp502);
int64_t $tmp504 = $tmp500.value;
int64_t $tmp505 = $tmp503.value;
int64_t $tmp506 = $tmp504 - $tmp505;
panda$core$Int64 $tmp507 = (panda$core$Int64) {$tmp506};
panda$core$UInt8 $tmp508 = panda$core$Int64$convert$R$panda$core$UInt8($tmp507);
panda$core$Char8 $tmp509 = panda$core$Char8$init$panda$core$UInt8($tmp508);
int64_t $tmp510 = $tmp499.value;
$tmp498[$tmp510] = $tmp509;
// line 587
panda$core$Int64 $tmp511 = *(&local3);
panda$core$Int64 $tmp512 = (panda$core$Int64) {10};
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512.value;
int64_t $tmp515 = $tmp513 / $tmp514;
panda$core$Int64 $tmp516 = (panda$core$Int64) {$tmp515};
*(&local3) = $tmp516;
// line 588
panda$core$Int64 $tmp517 = *(&local2);
panda$core$Int64 $tmp518 = (panda$core$Int64) {1};
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519 - $tmp520;
panda$core$Int64 $tmp522 = (panda$core$Int64) {$tmp521};
*(&local2) = $tmp522;
goto block8;
block8:;
panda$core$Int64 $tmp523 = *(&local3);
panda$core$Int64 $tmp524 = (panda$core$Int64) {0};
int64_t $tmp525 = $tmp523.value;
int64_t $tmp526 = $tmp524.value;
bool $tmp527 = $tmp525 < $tmp526;
panda$core$Bit $tmp528 = (panda$core$Bit) {$tmp527};
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block7; else goto block9;
block9:;
// line 591
panda$core$Char8* $tmp530 = *(&local1);
panda$core$Int64 $tmp531 = *(&local2);
panda$core$UInt8 $tmp532 = (panda$core$UInt8) {45};
panda$core$Char8 $tmp533 = panda$core$Char8$init$panda$core$UInt8($tmp532);
int64_t $tmp534 = $tmp531.value;
$tmp530[$tmp534] = $tmp533;
goto block2;
block2:;
// line 593
panda$core$Int64 $tmp535 = *(&local0);
panda$core$Int64 $tmp536 = *(&local2);
int64_t $tmp537 = $tmp535.value;
int64_t $tmp538 = $tmp536.value;
int64_t $tmp539 = $tmp537 - $tmp538;
panda$core$Int64 $tmp540 = (panda$core$Int64) {$tmp539};
*(&local4) = $tmp540;
// line 594
panda$core$Int64 $tmp541 = (panda$core$Int64) {0};
panda$core$Int64 $tmp542 = *(&local4);
panda$core$Bit $tmp543 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp544 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp541, $tmp542, $tmp543);
panda$core$Int64 $tmp545 = $tmp544.min;
*(&local5) = $tmp545;
panda$core$Int64 $tmp546 = $tmp544.max;
panda$core$Bit $tmp547 = $tmp544.inclusive;
bool $tmp548 = $tmp547.value;
panda$core$Int64 $tmp549 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp550 = panda$core$Int64$convert$R$panda$core$UInt64($tmp549);
if ($tmp548) goto block13; else goto block14;
block13:;
int64_t $tmp551 = $tmp545.value;
int64_t $tmp552 = $tmp546.value;
bool $tmp553 = $tmp551 <= $tmp552;
panda$core$Bit $tmp554 = (panda$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block10; else goto block11;
block14:;
int64_t $tmp556 = $tmp545.value;
int64_t $tmp557 = $tmp546.value;
bool $tmp558 = $tmp556 < $tmp557;
panda$core$Bit $tmp559 = (panda$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block10; else goto block11;
block10:;
// line 595
panda$core$Char8* $tmp561 = *(&local1);
panda$core$Int64 $tmp562 = *(&local5);
panda$core$Char8* $tmp563 = *(&local1);
panda$core$Int64 $tmp564 = *(&local5);
panda$core$Int64 $tmp565 = *(&local2);
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565.value;
int64_t $tmp568 = $tmp566 + $tmp567;
panda$core$Int64 $tmp569 = (panda$core$Int64) {$tmp568};
int64_t $tmp570 = $tmp569.value;
panda$core$Char8 $tmp571 = $tmp563[$tmp570];
int64_t $tmp572 = $tmp562.value;
$tmp561[$tmp572] = $tmp571;
goto block12;
block12:;
panda$core$Int64 $tmp573 = *(&local5);
int64_t $tmp574 = $tmp546.value;
int64_t $tmp575 = $tmp573.value;
int64_t $tmp576 = $tmp574 - $tmp575;
panda$core$Int64 $tmp577 = (panda$core$Int64) {$tmp576};
panda$core$UInt64 $tmp578 = panda$core$Int64$convert$R$panda$core$UInt64($tmp577);
if ($tmp548) goto block16; else goto block17;
block16:;
uint64_t $tmp579 = $tmp578.value;
uint64_t $tmp580 = $tmp550.value;
bool $tmp581 = $tmp579 >= $tmp580;
panda$core$Bit $tmp582 = (panda$core$Bit) {$tmp581};
bool $tmp583 = $tmp582.value;
if ($tmp583) goto block15; else goto block11;
block17:;
uint64_t $tmp584 = $tmp578.value;
uint64_t $tmp585 = $tmp550.value;
bool $tmp586 = $tmp584 > $tmp585;
panda$core$Bit $tmp587 = (panda$core$Bit) {$tmp586};
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block15; else goto block11;
block15:;
int64_t $tmp589 = $tmp573.value;
int64_t $tmp590 = $tmp549.value;
int64_t $tmp591 = $tmp589 + $tmp590;
panda$core$Int64 $tmp592 = (panda$core$Int64) {$tmp591};
*(&local5) = $tmp592;
goto block10;
block11:;
// line 597
panda$core$String* $tmp593 = (panda$core$String*) frostObjectAlloc(48, (panda$core$Class*) &panda$core$String$class);
panda$core$Char8* $tmp594 = *(&local1);
panda$core$Int64 $tmp595 = *(&local4);
panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64($tmp593, $tmp594, $tmp595);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp593));
// unreffing REF($203:panda.core.String)
return $tmp593;

}
panda$core$String* panda$core$Int64$format$panda$core$String$R$panda$core$String(panda$core$Int64 param0, panda$core$String* param1) {

// line 603
int64_t $tmp596 = param0.value;
bool $tmp597 = $tmp596 < 0;
panda$core$Bit $tmp598 = panda$core$Bit$init$builtin_bit($tmp597);
panda$core$Int64 $tmp599 = panda$core$Int64$get_abs$R$panda$core$Int64(param0);
panda$core$UInt64 $tmp600 = panda$core$Int64$convert$R$panda$core$UInt64($tmp599);
panda$core$UInt64 $tmp601 = (panda$core$UInt64) {18446744073709551615};
panda$core$String* $tmp602 = panda$core$Panda$format$panda$core$Bit$panda$core$UInt64$panda$core$UInt64$panda$core$String$R$panda$core$String($tmp598, $tmp600, $tmp601, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
// unreffing REF($7:panda.core.String)
return $tmp602;

}
void panda$core$Int64$cleanup(panda$core$Int64 param0) {

return;

}

