#include "frost/core/UInt64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"
#include "frost/core/Comparable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real32.h"
#include "frost/core/UInt.h"
#include "frost/core/Range.LTfrost/core/UInt64.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/UInt64List.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Object* frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$core$Object* frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim(frost$collections$ListView* p0) {
    frost$core$Object* result = frost$collections$ListView$get_first$R$frost$collections$ListView$T(p0);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt64$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt64$get_hash$R$frost$core$Int(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt64$format$frost$core$String$R$frost$core$String(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt64$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt64$get_count$R$frost$core$Int(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt64$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt64$get_asString$R$frost$core$String(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt64$$SUB$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt64$$BNOT$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$UInt64$get_bitCount$R$frost$core$UInt64$shim(frost$core$UInt64* sret, frost$core$Object* p0) {
    frost$core$UInt64$get_bitCount$R$frost$core$UInt64(sret, ((frost$core$UInt64$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$UInt64$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt64$get_asInt$R$frost$core$Int(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$UInt64$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt64$get_asInt8$R$frost$core$Int8(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt64$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt64$get_asInt16$R$frost$core$Int16(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt64$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt64$get_asInt32$R$frost$core$Int32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$get_asInt64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt64$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$UInt64$get_asUInt$R$frost$core$UInt(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt64$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt64$get_asUInt8$R$frost$core$UInt8(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt64$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt64$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt64$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt64$get_asReal32$R$frost$core$Real32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt64$get_asReal64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt64$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt64$cleanup(((frost$core$UInt64$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$core$UInt64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt64$_frost$collections$ListView, { frost$core$UInt64$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$_frost$collections$Key, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$_frost$core$Comparable, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$_frost$core$Equatable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$UInt64$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt64$_frost$core$Formattable, { frost$core$UInt64$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$UInt64$class_type frost$core$UInt64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$_frost$collections$CollectionView, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$R$frost$core$UInt64$shim, frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim, frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt$R$frost$core$UInt64$shim, frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt64$get_count$R$frost$core$Int$shim, frost$core$UInt64$get_bitCount$R$frost$core$UInt64$shim, frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt64$get_hash$R$frost$core$Int$shim, frost$core$UInt64$get_asInt$R$frost$core$Int$shim, frost$core$UInt64$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt64$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt64$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt64$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt64$get_asUInt$R$frost$core$UInt$shim, frost$core$UInt64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt64$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt64$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[16]; } frost$core$UInt64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$ListView, { frost$core$UInt64$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Key, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Comparable, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Equatable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$UInt64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Formattable, { frost$core$UInt64$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$UInt64$wrapperclass_type frost$core$UInt64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$CollectionView, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn369)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -3974054732201254354, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -3974054732201254354, NULL };
static frost$core$String $s341 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s342 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 143, 927876898115167035, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 169, 7504487529883524065, NULL };
static frost$core$String $s377 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, -4057673255977011726, NULL };
static frost$core$String $s412 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s413 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f", 121, -7196161859593174948, NULL };

frost$core$UInt64 frost$core$UInt64$init$builtin_uint64(uint64_t param0) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:30
uint64_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt64 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:36
uint8_t $tmp6 = param0.value;
uint64_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint64_t) $tmp6);
frost$core$UInt64 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:42
uint16_t $tmp9 = param0.value;
uint64_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((uint64_t) $tmp9);
frost$core$UInt64 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:48
uint32_t $tmp12 = param0.value;
uint64_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((uint64_t) $tmp12);
frost$core$UInt64 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt(frost$core$UInt param0) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:54
uint64_t $tmp15 = param0.value;
uint64_t* $tmp16 = &(&local0)->value;
*$tmp16 = ((uint64_t) $tmp15);
frost$core$UInt64 $tmp17 = *(&local0);
return $tmp17;

}
frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:60
uint64_t $tmp18 = param0.value;
uint64_t $tmp19 = param1.value;
uint64_t $tmp20 = $tmp18 + $tmp19;
frost$core$UInt64 $tmp21 = (frost$core$UInt64) {$tmp20};
return $tmp21;

}
frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:66
uint64_t $tmp22 = param0.value;
uint64_t $tmp23 = param1.value;
uint64_t $tmp24 = $tmp22 - $tmp23;
frost$core$UInt64 $tmp25 = (frost$core$UInt64) {$tmp24};
return $tmp25;

}
frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:71
uint64_t $tmp26 = param0.value;
uint64_t $tmp27 = -$tmp26;
frost$core$UInt64 $tmp28 = (frost$core$UInt64) {$tmp27};
return $tmp28;

}
frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:77
uint64_t $tmp29 = param0.value;
uint64_t $tmp30 = param1.value;
uint64_t $tmp31 = $tmp29 * $tmp30;
frost$core$UInt64 $tmp32 = (frost$core$UInt64) {$tmp31};
return $tmp32;

}
frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:83
uint64_t $tmp33 = param0.value;
uint64_t $tmp34 = param1.value;
uint64_t $tmp35 = $tmp33 / $tmp34;
frost$core$UInt64 $tmp36 = (frost$core$UInt64) {$tmp35};
return $tmp36;

}
frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
uint64_t $tmp37 = param0.value;
uint64_t $tmp38 = param1.value;
uint64_t $tmp39 = $tmp37 % $tmp38;
frost$core$UInt64 $tmp40 = (frost$core$UInt64) {$tmp39};
return $tmp40;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:95
uint64_t $tmp41 = param0.value;
int8_t $tmp42 = param1.value;
double $tmp43 = ((double) $tmp41) / ((double) $tmp42);
frost$core$Real64 $tmp44 = (frost$core$Real64) {$tmp43};
return $tmp44;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:101
uint64_t $tmp45 = param0.value;
int16_t $tmp46 = param1.value;
double $tmp47 = ((double) $tmp45) / ((double) $tmp46);
frost$core$Real64 $tmp48 = (frost$core$Real64) {$tmp47};
return $tmp48;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:107
uint64_t $tmp49 = param0.value;
int32_t $tmp50 = param1.value;
double $tmp51 = ((double) $tmp49) / ((double) $tmp50);
frost$core$Real64 $tmp52 = (frost$core$Real64) {$tmp51};
return $tmp52;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:113
uint64_t $tmp53 = param0.value;
int64_t $tmp54 = param1.value;
double $tmp55 = ((double) $tmp53) / ((double) $tmp54);
frost$core$Real64 $tmp56 = (frost$core$Real64) {$tmp55};
return $tmp56;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:119
uint64_t $tmp57 = param0.value;
uint8_t $tmp58 = param1.value;
double $tmp59 = ((double) $tmp57) / ((double) $tmp58);
frost$core$Real64 $tmp60 = (frost$core$Real64) {$tmp59};
return $tmp60;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:125
uint64_t $tmp61 = param0.value;
uint16_t $tmp62 = param1.value;
double $tmp63 = ((double) $tmp61) / ((double) $tmp62);
frost$core$Real64 $tmp64 = (frost$core$Real64) {$tmp63};
return $tmp64;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:131
uint64_t $tmp65 = param0.value;
uint32_t $tmp66 = param1.value;
double $tmp67 = ((double) $tmp65) / ((double) $tmp66);
frost$core$Real64 $tmp68 = (frost$core$Real64) {$tmp67};
return $tmp68;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:137
uint64_t $tmp69 = param0.value;
uint64_t $tmp70 = param1.value;
double $tmp71 = ((double) $tmp69) / ((double) $tmp70);
frost$core$Real64 $tmp72 = (frost$core$Real64) {$tmp71};
return $tmp72;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:143
uint64_t $tmp73 = param0.value;
float $tmp74 = param1.value;
double $tmp75 = ((double) $tmp73) / ((double) $tmp74);
frost$core$Real64 $tmp76 = (frost$core$Real64) {$tmp75};
return $tmp76;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:149
uint64_t $tmp77 = param0.value;
double $tmp78 = param1.value;
double $tmp79 = ((double) $tmp77) / $tmp78;
frost$core$Real64 $tmp80 = (frost$core$Real64) {$tmp79};
return $tmp80;

}
frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:154
uint64_t $tmp81 = param0.value;
uint64_t $tmp82 = !$tmp81;
frost$core$UInt64 $tmp83 = (frost$core$UInt64) {$tmp82};
return $tmp83;

}
frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:160
uint64_t $tmp84 = param0.value;
int64_t $tmp85 = param1.value;
int64_t $tmp86 = ((int64_t) $tmp84) & $tmp85;
frost$core$Int64 $tmp87 = (frost$core$Int64) {$tmp86};
return $tmp87;

}
frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
uint64_t $tmp88 = param0.value;
uint64_t $tmp89 = param1.value;
uint64_t $tmp90 = $tmp88 & $tmp89;
frost$core$UInt64 $tmp91 = (frost$core$UInt64) {$tmp90};
return $tmp91;

}
frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:172
uint64_t $tmp92 = param0.value;
int64_t $tmp93 = param1.value;
int64_t $tmp94 = ((int64_t) $tmp92) | $tmp93;
frost$core$Int64 $tmp95 = (frost$core$Int64) {$tmp94};
return $tmp95;

}
frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:178
uint64_t $tmp96 = param0.value;
uint64_t $tmp97 = param1.value;
uint64_t $tmp98 = $tmp96 | $tmp97;
frost$core$UInt64 $tmp99 = (frost$core$UInt64) {$tmp98};
return $tmp99;

}
frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:184
uint64_t $tmp100 = param0.value;
int64_t $tmp101 = param1.value;
int64_t $tmp102 = ((int64_t) $tmp100) ^ $tmp101;
frost$core$Int64 $tmp103 = (frost$core$Int64) {$tmp102};
return $tmp103;

}
frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:190
uint64_t $tmp104 = param0.value;
uint64_t $tmp105 = param1.value;
uint64_t $tmp106 = $tmp104 ^ $tmp105;
frost$core$UInt64 $tmp107 = (frost$core$UInt64) {$tmp106};
return $tmp107;

}
frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:196
uint64_t $tmp108 = param0.value;
uint64_t $tmp109 = param1.value;
uint64_t $tmp110 = $tmp108 << $tmp109;
frost$core$UInt64 $tmp111 = (frost$core$UInt64) {$tmp110};
return $tmp111;

}
frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
uint64_t $tmp112 = param0.value;
uint64_t $tmp113 = param1.value;
uint64_t $tmp114 = $tmp112 >> $tmp113;
frost$core$UInt64 $tmp115 = (frost$core$UInt64) {$tmp114};
return $tmp115;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:208
uint64_t $tmp116 = param0.value;
uint8_t $tmp117 = param1.value;
bool $tmp118 = $tmp116 == ((uint64_t) $tmp117);
frost$core$Bit $tmp119 = (frost$core$Bit) {$tmp118};
return $tmp119;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:214
uint64_t $tmp120 = param0.value;
uint16_t $tmp121 = param1.value;
bool $tmp122 = $tmp120 == ((uint64_t) $tmp121);
frost$core$Bit $tmp123 = (frost$core$Bit) {$tmp122};
return $tmp123;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:220
uint64_t $tmp124 = param0.value;
uint32_t $tmp125 = param1.value;
bool $tmp126 = $tmp124 == ((uint64_t) $tmp125);
frost$core$Bit $tmp127 = (frost$core$Bit) {$tmp126};
return $tmp127;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp128 = param0.value;
uint64_t $tmp129 = param1.value;
bool $tmp130 = $tmp128 == $tmp129;
frost$core$Bit $tmp131 = (frost$core$Bit) {$tmp130};
return $tmp131;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:233
uint64_t $tmp132 = param0.value;
uint64_t $tmp133 = param1.value;
bool $tmp134 = $tmp132 == ((uint64_t) $tmp133);
frost$core$Bit $tmp135 = (frost$core$Bit) {$tmp134};
return $tmp135;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:239
uint64_t $tmp136 = param0.value;
uint8_t $tmp137 = param1.value;
bool $tmp138 = $tmp136 != ((uint64_t) $tmp137);
frost$core$Bit $tmp139 = (frost$core$Bit) {$tmp138};
return $tmp139;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:245
uint64_t $tmp140 = param0.value;
uint16_t $tmp141 = param1.value;
bool $tmp142 = $tmp140 != ((uint64_t) $tmp141);
frost$core$Bit $tmp143 = (frost$core$Bit) {$tmp142};
return $tmp143;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:251
uint64_t $tmp144 = param0.value;
uint32_t $tmp145 = param1.value;
bool $tmp146 = $tmp144 != ((uint64_t) $tmp145);
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
return $tmp147;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:258
uint64_t $tmp148 = param0.value;
uint64_t $tmp149 = param1.value;
bool $tmp150 = $tmp148 != $tmp149;
frost$core$Bit $tmp151 = (frost$core$Bit) {$tmp150};
return $tmp151;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:264
uint64_t $tmp152 = param0.value;
uint64_t $tmp153 = param1.value;
bool $tmp154 = $tmp152 != ((uint64_t) $tmp153);
frost$core$Bit $tmp155 = (frost$core$Bit) {$tmp154};
return $tmp155;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:270
uint64_t $tmp156 = param0.value;
uint8_t $tmp157 = param1.value;
bool $tmp158 = $tmp156 < ((uint64_t) $tmp157);
frost$core$Bit $tmp159 = (frost$core$Bit) {$tmp158};
return $tmp159;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:276
uint64_t $tmp160 = param0.value;
uint16_t $tmp161 = param1.value;
bool $tmp162 = $tmp160 < ((uint64_t) $tmp161);
frost$core$Bit $tmp163 = (frost$core$Bit) {$tmp162};
return $tmp163;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:282
uint64_t $tmp164 = param0.value;
uint32_t $tmp165 = param1.value;
bool $tmp166 = $tmp164 < ((uint64_t) $tmp165);
frost$core$Bit $tmp167 = (frost$core$Bit) {$tmp166};
return $tmp167;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:289
uint64_t $tmp168 = param0.value;
uint64_t $tmp169 = param1.value;
bool $tmp170 = $tmp168 < $tmp169;
frost$core$Bit $tmp171 = (frost$core$Bit) {$tmp170};
return $tmp171;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:295
uint64_t $tmp172 = param0.value;
uint64_t $tmp173 = param1.value;
bool $tmp174 = $tmp172 < ((uint64_t) $tmp173);
frost$core$Bit $tmp175 = (frost$core$Bit) {$tmp174};
return $tmp175;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:301
uint64_t $tmp176 = param0.value;
uint8_t $tmp177 = param1.value;
bool $tmp178 = $tmp176 > ((uint64_t) $tmp177);
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178};
return $tmp179;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:307
uint64_t $tmp180 = param0.value;
uint16_t $tmp181 = param1.value;
bool $tmp182 = $tmp180 > ((uint64_t) $tmp181);
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
return $tmp183;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:313
uint64_t $tmp184 = param0.value;
uint32_t $tmp185 = param1.value;
bool $tmp186 = $tmp184 > ((uint64_t) $tmp185);
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186};
return $tmp187;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:320
uint64_t $tmp188 = param0.value;
uint64_t $tmp189 = param1.value;
bool $tmp190 = $tmp188 > $tmp189;
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190};
return $tmp191;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:326
uint64_t $tmp192 = param0.value;
uint64_t $tmp193 = param1.value;
bool $tmp194 = $tmp192 > ((uint64_t) $tmp193);
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
return $tmp195;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:332
uint64_t $tmp196 = param0.value;
uint8_t $tmp197 = param1.value;
bool $tmp198 = $tmp196 >= ((uint64_t) $tmp197);
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
return $tmp199;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:338
uint64_t $tmp200 = param0.value;
uint16_t $tmp201 = param1.value;
bool $tmp202 = $tmp200 >= ((uint64_t) $tmp201);
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
return $tmp203;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:344
uint64_t $tmp204 = param0.value;
uint32_t $tmp205 = param1.value;
bool $tmp206 = $tmp204 >= ((uint64_t) $tmp205);
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
return $tmp207;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:351
uint64_t $tmp208 = param0.value;
uint64_t $tmp209 = param1.value;
bool $tmp210 = $tmp208 >= $tmp209;
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210};
return $tmp211;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:357
uint64_t $tmp212 = param0.value;
uint64_t $tmp213 = param1.value;
bool $tmp214 = $tmp212 >= ((uint64_t) $tmp213);
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214};
return $tmp215;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:363
uint64_t $tmp216 = param0.value;
uint8_t $tmp217 = param1.value;
bool $tmp218 = $tmp216 <= ((uint64_t) $tmp217);
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
return $tmp219;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:369
uint64_t $tmp220 = param0.value;
uint16_t $tmp221 = param1.value;
bool $tmp222 = $tmp220 <= ((uint64_t) $tmp221);
frost$core$Bit $tmp223 = (frost$core$Bit) {$tmp222};
return $tmp223;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:375
uint64_t $tmp224 = param0.value;
uint32_t $tmp225 = param1.value;
bool $tmp226 = $tmp224 <= ((uint64_t) $tmp225);
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
return $tmp227;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:382
uint64_t $tmp228 = param0.value;
uint64_t $tmp229 = param1.value;
bool $tmp230 = $tmp228 <= $tmp229;
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
return $tmp231;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:388
uint64_t $tmp232 = param0.value;
uint64_t $tmp233 = param1.value;
bool $tmp234 = $tmp232 <= ((uint64_t) $tmp233);
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
return $tmp235;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:399
uint64_t $tmp236 = param0.value;
uint8_t $tmp237 = param1.value;
bool $tmp238 = $tmp236 < ((uint64_t) $tmp237);
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:400
uint64_t $tmp241 = param0.value;
frost$core$UInt64 $tmp242 = (frost$core$UInt64) {$tmp241};
return $tmp242;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:402
uint8_t $tmp243 = param1.value;
frost$core$UInt64 $tmp244 = (frost$core$UInt64) {((uint64_t) $tmp243)};
return $tmp244;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:408
uint64_t $tmp245 = param0.value;
uint16_t $tmp246 = param1.value;
bool $tmp247 = $tmp245 < ((uint64_t) $tmp246);
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:409
uint64_t $tmp250 = param0.value;
frost$core$UInt64 $tmp251 = (frost$core$UInt64) {$tmp250};
return $tmp251;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:411
uint16_t $tmp252 = param1.value;
frost$core$UInt64 $tmp253 = (frost$core$UInt64) {((uint64_t) $tmp252)};
return $tmp253;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:417
uint64_t $tmp254 = param0.value;
uint32_t $tmp255 = param1.value;
bool $tmp256 = $tmp254 < ((uint64_t) $tmp255);
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:418
uint64_t $tmp259 = param0.value;
frost$core$UInt64 $tmp260 = (frost$core$UInt64) {$tmp259};
return $tmp260;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:420
uint32_t $tmp261 = param1.value;
frost$core$UInt64 $tmp262 = (frost$core$UInt64) {((uint64_t) $tmp261)};
return $tmp262;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:426
uint64_t $tmp263 = param0.value;
uint64_t $tmp264 = param1.value;
bool $tmp265 = $tmp263 < $tmp264;
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:427
uint64_t $tmp268 = param0.value;
frost$core$UInt64 $tmp269 = (frost$core$UInt64) {$tmp268};
return $tmp269;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:429
uint64_t $tmp270 = param1.value;
frost$core$UInt64 $tmp271 = (frost$core$UInt64) {$tmp270};
return $tmp271;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:435
uint64_t $tmp272 = param0.value;
uint64_t $tmp273 = param1.value;
bool $tmp274 = $tmp272 < ((uint64_t) $tmp273);
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:436
uint64_t $tmp277 = param0.value;
frost$core$UInt64 $tmp278 = (frost$core$UInt64) {$tmp277};
return $tmp278;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:438
uint64_t $tmp279 = param1.value;
frost$core$UInt64 $tmp280 = (frost$core$UInt64) {((uint64_t) $tmp279)};
return $tmp280;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:449
uint64_t $tmp281 = param0.value;
uint8_t $tmp282 = param1.value;
bool $tmp283 = $tmp281 > ((uint64_t) $tmp282);
frost$core$Bit $tmp284 = (frost$core$Bit) {$tmp283};
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:450
uint64_t $tmp286 = param0.value;
frost$core$UInt64 $tmp287 = (frost$core$UInt64) {$tmp286};
return $tmp287;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:452
uint8_t $tmp288 = param1.value;
frost$core$UInt64 $tmp289 = (frost$core$UInt64) {((uint64_t) $tmp288)};
return $tmp289;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:458
uint64_t $tmp290 = param0.value;
uint16_t $tmp291 = param1.value;
bool $tmp292 = $tmp290 > ((uint64_t) $tmp291);
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:459
uint64_t $tmp295 = param0.value;
frost$core$UInt64 $tmp296 = (frost$core$UInt64) {$tmp295};
return $tmp296;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:461
uint16_t $tmp297 = param1.value;
frost$core$UInt64 $tmp298 = (frost$core$UInt64) {((uint64_t) $tmp297)};
return $tmp298;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:467
uint64_t $tmp299 = param0.value;
uint32_t $tmp300 = param1.value;
bool $tmp301 = $tmp299 > ((uint64_t) $tmp300);
frost$core$Bit $tmp302 = (frost$core$Bit) {$tmp301};
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:468
uint64_t $tmp304 = param0.value;
frost$core$UInt64 $tmp305 = (frost$core$UInt64) {$tmp304};
return $tmp305;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:470
uint32_t $tmp306 = param1.value;
frost$core$UInt64 $tmp307 = (frost$core$UInt64) {((uint64_t) $tmp306)};
return $tmp307;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:476
uint64_t $tmp308 = param0.value;
uint64_t $tmp309 = param1.value;
bool $tmp310 = $tmp308 > $tmp309;
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:477
uint64_t $tmp313 = param0.value;
frost$core$UInt64 $tmp314 = (frost$core$UInt64) {$tmp313};
return $tmp314;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:479
uint64_t $tmp315 = param1.value;
frost$core$UInt64 $tmp316 = (frost$core$UInt64) {$tmp315};
return $tmp316;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:485
uint64_t $tmp317 = param0.value;
uint64_t $tmp318 = param1.value;
bool $tmp319 = $tmp317 > ((uint64_t) $tmp318);
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:486
uint64_t $tmp322 = param0.value;
frost$core$UInt64 $tmp323 = (frost$core$UInt64) {$tmp322};
return $tmp323;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:488
uint64_t $tmp324 = param1.value;
frost$core$UInt64 $tmp325 = (frost$core$UInt64) {((uint64_t) $tmp324)};
return $tmp325;

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$Range$LTfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$Range$LTfrost$core$UInt64$GT param0) {

frost$core$UInt64 $tmp326 = param0.max;
frost$core$UInt64 $tmp327 = param0.min;
uint64_t $tmp328 = $tmp326.value;
uint64_t $tmp329 = $tmp327.value;
uint64_t $tmp330 = $tmp328 - $tmp329;
frost$core$UInt64 $tmp331 = (frost$core$UInt64) {$tmp330};
frost$core$Int64 $tmp332 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from UInt64.frost:492:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp333 = $tmp332.value;
frost$core$UInt64 $tmp334 = (frost$core$UInt64) {((uint64_t) $tmp333)};
uint64_t $tmp335 = $tmp331.value;
uint64_t $tmp336 = $tmp334.value;
bool $tmp337 = $tmp335 < $tmp336;
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block1; else goto block2;
block2:;
frost$core$Int $tmp340 = (frost$core$Int) {493u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s341, $tmp340, &$s342);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:494
FROST_ASSERT(56 == sizeof(org$frostlang$frost$UInt64List));
org$frostlang$frost$UInt64List* $tmp343 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
frost$core$UInt64 $tmp344 = param0.min;
frost$core$UInt64 $tmp345 = param0.max;
frost$core$UInt64 $tmp346 = (frost$core$UInt64) {1u};
frost$core$Bit $tmp347 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT $tmp348 = frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$init$frost$core$UInt64$frost$core$UInt64$frost$core$UInt64$frost$core$Bit($tmp344, $tmp345, $tmp346, $tmp347);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp343, $tmp348);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp343)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp343));
return ((frost$collections$ListView*) $tmp343);

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

frost$core$Int $tmp349 = org$frostlang$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int(param0);
frost$core$Int $tmp350 = (frost$core$Int) {0u};
int64_t $tmp351 = $tmp349.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 > $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block1; else goto block2;
block2:;
frost$core$Int $tmp356 = (frost$core$Int) {499u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s357, $tmp356, &$s358);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:500
FROST_ASSERT(56 == sizeof(org$frostlang$frost$UInt64List));
org$frostlang$frost$UInt64List* $tmp359 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp359, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp359)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp359));
return ((frost$collections$ListView*) $tmp359);

}
frost$core$Bit frost$core$UInt64$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$Int param1) {

frost$core$Int $tmp360 = (frost$core$Int) {0u};
int64_t $tmp361 = param1.value;
int64_t $tmp362 = $tmp360.value;
bool $tmp363 = $tmp361 >= $tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block3; else goto block2;
block3:;
frost$core$UInt64$wrapper* $tmp366;
$tmp366 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp366->value = param0;
ITable* $tmp367 = ((frost$collections$CollectionView*) $tmp366)->$class->itable;
while ($tmp367->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp367 = $tmp367->next;
}
$fn369 $tmp368 = $tmp367->methods[0];
frost$core$Int $tmp370 = $tmp368(((frost$collections$CollectionView*) $tmp366));
int64_t $tmp371 = param1.value;
int64_t $tmp372 = $tmp370.value;
bool $tmp373 = $tmp371 < $tmp372;
frost$core$Bit $tmp374 = (frost$core$Bit) {$tmp373};
bool $tmp375 = $tmp374.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp366)));
if ($tmp375) goto block1; else goto block2;
block2:;
frost$core$Int $tmp376 = (frost$core$Int) {505u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s377, $tmp376, &$s378);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:506
frost$core$Int $tmp379 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt64.frost:506:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
int64_t $tmp380 = $tmp379.value;
int64_t $tmp381 = param1.value;
int64_t $tmp382 = $tmp380 << $tmp381;
frost$core$Int $tmp383 = (frost$core$Int) {$tmp382};
frost$core$Int64 $tmp384 = frost$core$Int64$init$frost$core$Int($tmp383);
// begin inline call to function frost.core.UInt64.&&(other:frost.core.Int64):frost.core.Int64 from UInt64.frost:506:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:160
uint64_t $tmp385 = param0.value;
int64_t $tmp386 = $tmp384.value;
int64_t $tmp387 = ((int64_t) $tmp385) & $tmp386;
frost$core$Int64 $tmp388 = (frost$core$Int64) {$tmp387};
frost$core$Int64 $tmp389 = (frost$core$Int64) {0u};
int64_t $tmp390 = $tmp388.value;
int64_t $tmp391 = $tmp389.value;
bool $tmp392 = $tmp390 != $tmp391;
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392};
return $tmp393;

}
frost$core$Int frost$core$UInt64$get_count$R$frost$core$Int(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:512
frost$core$Int $tmp394 = (frost$core$Int) {64u};
return $tmp394;

}
frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:522
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp395 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp396 = (frost$core$UInt64) {9223372036854775808u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp395, param0, $tmp396);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp395)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp395));
return ((frost$collections$Iterator*) $tmp395);

}
frost$core$Int frost$core$UInt64$get_hash$R$frost$core$Int(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:527
uint64_t $tmp397 = param0.value;
frost$core$Int $tmp398 = (frost$core$Int) {((int64_t) $tmp397)};
return $tmp398;

}
frost$core$UInt64$nullable frost$core$UInt64$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$Int $tmp399 = (frost$core$Int) {2u};
int64_t $tmp400 = param1.value;
int64_t $tmp401 = $tmp399.value;
bool $tmp402 = $tmp400 >= $tmp401;
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block3; else goto block2;
block3:;
frost$core$Int $tmp405 = (frost$core$Int) {36u};
int64_t $tmp406 = param1.value;
int64_t $tmp407 = $tmp405.value;
bool $tmp408 = $tmp406 <= $tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block1; else goto block2;
block2:;
frost$core$Int $tmp411 = (frost$core$Int) {533u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s412, $tmp411, &$s413);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:534
frost$core$UInt64$nullable $tmp414 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp414;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:535
frost$core$UInt64$nullable $tmp415 = *(&local0);
frost$core$Bit $tmp416 = (frost$core$Bit) {!$tmp415.nonnull};
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:536
return ((frost$core$UInt64$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:538
frost$core$UInt64$nullable $tmp418 = *(&local0);
return $tmp418;

}
frost$core$Int frost$core$UInt64$get_asInt$R$frost$core$Int(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
uint64_t $tmp419 = param0.value;
frost$core$Int $tmp420 = (frost$core$Int) {((int64_t) $tmp419)};
return $tmp420;

}
frost$core$Int8 frost$core$UInt64$get_asInt8$R$frost$core$Int8(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:550
uint64_t $tmp421 = param0.value;
frost$core$Int8 $tmp422 = (frost$core$Int8) {((int8_t) $tmp421)};
return $tmp422;

}
frost$core$Int16 frost$core$UInt64$get_asInt16$R$frost$core$Int16(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:556
uint64_t $tmp423 = param0.value;
frost$core$Int16 $tmp424 = (frost$core$Int16) {((int16_t) $tmp423)};
return $tmp424;

}
frost$core$Int32 frost$core$UInt64$get_asInt32$R$frost$core$Int32(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:562
uint64_t $tmp425 = param0.value;
frost$core$Int32 $tmp426 = (frost$core$Int32) {((int32_t) $tmp425)};
return $tmp426;

}
frost$core$Int64 frost$core$UInt64$get_asInt64$R$frost$core$Int64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp427 = param0.value;
frost$core$Int64 $tmp428 = (frost$core$Int64) {((int64_t) $tmp427)};
return $tmp428;

}
frost$core$UInt frost$core$UInt64$get_asUInt$R$frost$core$UInt(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:574
uint64_t $tmp429 = param0.value;
frost$core$UInt $tmp430 = (frost$core$UInt) {((uint64_t) $tmp429)};
return $tmp430;

}
frost$core$UInt8 frost$core$UInt64$get_asUInt8$R$frost$core$UInt8(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:580
uint64_t $tmp431 = param0.value;
frost$core$UInt8 $tmp432 = (frost$core$UInt8) {((uint8_t) $tmp431)};
return $tmp432;

}
frost$core$UInt16 frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:586
uint64_t $tmp433 = param0.value;
frost$core$UInt16 $tmp434 = (frost$core$UInt16) {((uint16_t) $tmp433)};
return $tmp434;

}
frost$core$UInt32 frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
uint64_t $tmp435 = param0.value;
frost$core$UInt32 $tmp436 = (frost$core$UInt32) {((uint32_t) $tmp435)};
return $tmp436;

}
frost$core$Real32 frost$core$UInt64$get_asReal32$R$frost$core$Real32(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:598
uint64_t $tmp437 = param0.value;
frost$core$Real32 $tmp438 = (frost$core$Real32) {((float) $tmp437)};
return $tmp438;

}
frost$core$Real64 frost$core$UInt64$get_asReal64$R$frost$core$Real64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:604
uint64_t $tmp439 = param0.value;
frost$core$Real64 $tmp440 = (frost$core$Real64) {((double) $tmp439)};
return $tmp440;

}
frost$core$String* frost$core$UInt64$get_asString$R$frost$core$String(frost$core$UInt64 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$UInt64 local3;
frost$core$Int local4;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:610
frost$core$Int $tmp441 = (frost$core$Int) {20u};
*(&local0) = $tmp441;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:611
frost$core$Int $tmp442 = *(&local0);
frost$core$Int64 $tmp443 = frost$core$Int64$init$frost$core$Int($tmp442);
int64_t $tmp444 = $tmp443.value;
frost$core$Char8* $tmp445 = ((frost$core$Char8*) frostAlloc($tmp444 * 1));
*(&local1) = $tmp445;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:612
frost$core$Int $tmp446 = *(&local0);
frost$core$Int $tmp447 = (frost$core$Int) {1u};
int64_t $tmp448 = $tmp446.value;
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448 - $tmp449;
frost$core$Int $tmp451 = (frost$core$Int) {$tmp450};
*(&local2) = $tmp451;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:613
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:614
frost$core$UInt64 $tmp452 = *(&local3);
frost$core$UInt64 $tmp453 = (frost$core$UInt64) {0u};
uint64_t $tmp454 = $tmp452.value;
uint64_t $tmp455 = $tmp453.value;
bool $tmp456 = $tmp454 >= $tmp455;
frost$core$Bit $tmp457 = (frost$core$Bit) {$tmp456};
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:615
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:616
frost$core$Char8* $tmp459 = *(&local1);
frost$core$Int $tmp460 = *(&local2);
frost$core$Int64 $tmp461 = frost$core$Int64$init$frost$core$Int($tmp460);
frost$core$UInt64 $tmp462 = *(&local3);
frost$core$UInt64 $tmp463 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from UInt64.frost:616:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
uint64_t $tmp464 = $tmp462.value;
uint64_t $tmp465 = $tmp463.value;
uint64_t $tmp466 = $tmp464 % $tmp465;
frost$core$UInt64 $tmp467 = (frost$core$UInt64) {$tmp466};
frost$core$UInt64 $tmp468 = (frost$core$UInt64) {48u};
uint64_t $tmp469 = $tmp467.value;
uint64_t $tmp470 = $tmp468.value;
uint64_t $tmp471 = $tmp469 + $tmp470;
frost$core$UInt64 $tmp472 = (frost$core$UInt64) {$tmp471};
// begin inline call to function frost.core.UInt64.get_asUInt8():frost.core.UInt8 from UInt64.frost:616:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:580
uint64_t $tmp473 = $tmp472.value;
frost$core$UInt8 $tmp474 = (frost$core$UInt8) {((uint8_t) $tmp473)};
frost$core$Char8 $tmp475 = frost$core$Char8$init$frost$core$UInt8($tmp474);
int64_t $tmp476 = $tmp461.value;
$tmp459[$tmp476] = $tmp475;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:617
frost$core$UInt64 $tmp477 = *(&local3);
frost$core$UInt64 $tmp478 = (frost$core$UInt64) {10u};
uint64_t $tmp479 = $tmp477.value;
uint64_t $tmp480 = $tmp478.value;
uint64_t $tmp481 = $tmp479 / $tmp480;
frost$core$UInt64 $tmp482 = (frost$core$UInt64) {$tmp481};
*(&local3) = $tmp482;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:618
frost$core$Int $tmp483 = *(&local2);
frost$core$Int $tmp484 = (frost$core$Int) {1u};
int64_t $tmp485 = $tmp483.value;
int64_t $tmp486 = $tmp484.value;
int64_t $tmp487 = $tmp485 - $tmp486;
frost$core$Int $tmp488 = (frost$core$Int) {$tmp487};
*(&local2) = $tmp488;
frost$core$UInt64 $tmp489 = *(&local3);
frost$core$UInt64 $tmp490 = (frost$core$UInt64) {0u};
uint64_t $tmp491 = $tmp489.value;
uint64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 > $tmp492;
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:621
frost$core$Int $tmp496 = *(&local2);
frost$core$Int $tmp497 = (frost$core$Int) {1u};
int64_t $tmp498 = $tmp496.value;
int64_t $tmp499 = $tmp497.value;
int64_t $tmp500 = $tmp498 + $tmp499;
frost$core$Int $tmp501 = (frost$core$Int) {$tmp500};
*(&local2) = $tmp501;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:624
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:625
frost$core$Char8* $tmp502 = *(&local1);
frost$core$Int $tmp503 = *(&local2);
frost$core$Int64 $tmp504 = frost$core$Int64$init$frost$core$Int($tmp503);
frost$core$UInt64 $tmp505 = (frost$core$UInt64) {48u};
frost$core$UInt64 $tmp506 = *(&local3);
frost$core$UInt64 $tmp507 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from UInt64.frost:625:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
uint64_t $tmp508 = $tmp506.value;
uint64_t $tmp509 = $tmp507.value;
uint64_t $tmp510 = $tmp508 % $tmp509;
frost$core$UInt64 $tmp511 = (frost$core$UInt64) {$tmp510};
uint64_t $tmp512 = $tmp505.value;
uint64_t $tmp513 = $tmp511.value;
uint64_t $tmp514 = $tmp512 - $tmp513;
frost$core$UInt64 $tmp515 = (frost$core$UInt64) {$tmp514};
// begin inline call to function frost.core.UInt64.get_asUInt8():frost.core.UInt8 from UInt64.frost:625:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:580
uint64_t $tmp516 = $tmp515.value;
frost$core$UInt8 $tmp517 = (frost$core$UInt8) {((uint8_t) $tmp516)};
frost$core$Char8 $tmp518 = frost$core$Char8$init$frost$core$UInt8($tmp517);
int64_t $tmp519 = $tmp504.value;
$tmp502[$tmp519] = $tmp518;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:626
frost$core$UInt64 $tmp520 = *(&local3);
frost$core$UInt64 $tmp521 = (frost$core$UInt64) {10u};
uint64_t $tmp522 = $tmp520.value;
uint64_t $tmp523 = $tmp521.value;
uint64_t $tmp524 = $tmp522 / $tmp523;
frost$core$UInt64 $tmp525 = (frost$core$UInt64) {$tmp524};
*(&local3) = $tmp525;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:627
frost$core$Int $tmp526 = *(&local2);
frost$core$Int $tmp527 = (frost$core$Int) {1u};
int64_t $tmp528 = $tmp526.value;
int64_t $tmp529 = $tmp527.value;
int64_t $tmp530 = $tmp528 - $tmp529;
frost$core$Int $tmp531 = (frost$core$Int) {$tmp530};
*(&local2) = $tmp531;
frost$core$UInt64 $tmp532 = *(&local3);
frost$core$UInt64 $tmp533 = (frost$core$UInt64) {0u};
uint64_t $tmp534 = $tmp532.value;
uint64_t $tmp535 = $tmp533.value;
bool $tmp536 = $tmp534 < $tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:630
frost$core$Char8* $tmp539 = *(&local1);
frost$core$Int $tmp540 = *(&local2);
frost$core$Int64 $tmp541 = frost$core$Int64$init$frost$core$Int($tmp540);
frost$core$UInt8 $tmp542 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp543 = frost$core$Char8$init$frost$core$UInt8($tmp542);
int64_t $tmp544 = $tmp541.value;
$tmp539[$tmp544] = $tmp543;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:632
frost$core$Int $tmp545 = *(&local0);
frost$core$Int $tmp546 = *(&local2);
int64_t $tmp547 = $tmp545.value;
int64_t $tmp548 = $tmp546.value;
int64_t $tmp549 = $tmp547 - $tmp548;
frost$core$Int $tmp550 = (frost$core$Int) {$tmp549};
*(&local4) = $tmp550;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:633
frost$core$Int $tmp551 = (frost$core$Int) {0u};
frost$core$Int $tmp552 = *(&local4);
frost$core$Bit $tmp553 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp554 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp551, $tmp552, $tmp553);
frost$core$Int $tmp555 = $tmp554.min;
*(&local5) = $tmp555;
frost$core$Int $tmp556 = $tmp554.max;
frost$core$Bit $tmp557 = $tmp554.inclusive;
bool $tmp558 = $tmp557.value;
frost$core$Int $tmp559 = (frost$core$Int) {1u};
if ($tmp558) goto block17; else goto block18;
block17:;
int64_t $tmp560 = $tmp555.value;
int64_t $tmp561 = $tmp556.value;
bool $tmp562 = $tmp560 <= $tmp561;
frost$core$Bit $tmp563 = (frost$core$Bit) {$tmp562};
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block14; else goto block15;
block18:;
int64_t $tmp565 = $tmp555.value;
int64_t $tmp566 = $tmp556.value;
bool $tmp567 = $tmp565 < $tmp566;
frost$core$Bit $tmp568 = (frost$core$Bit) {$tmp567};
bool $tmp569 = $tmp568.value;
if ($tmp569) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:634
frost$core$Char8* $tmp570 = *(&local1);
frost$core$Int $tmp571 = *(&local5);
frost$core$Int64 $tmp572 = frost$core$Int64$init$frost$core$Int($tmp571);
frost$core$Char8* $tmp573 = *(&local1);
frost$core$Int $tmp574 = *(&local5);
frost$core$Int $tmp575 = *(&local2);
int64_t $tmp576 = $tmp574.value;
int64_t $tmp577 = $tmp575.value;
int64_t $tmp578 = $tmp576 + $tmp577;
frost$core$Int $tmp579 = (frost$core$Int) {$tmp578};
frost$core$Int64 $tmp580 = frost$core$Int64$init$frost$core$Int($tmp579);
int64_t $tmp581 = $tmp580.value;
frost$core$Char8 $tmp582 = $tmp573[$tmp581];
int64_t $tmp583 = $tmp572.value;
$tmp570[$tmp583] = $tmp582;
frost$core$Int $tmp584 = *(&local5);
int64_t $tmp585 = $tmp556.value;
int64_t $tmp586 = $tmp584.value;
int64_t $tmp587 = $tmp585 - $tmp586;
frost$core$Int $tmp588 = (frost$core$Int) {$tmp587};
if ($tmp558) goto block20; else goto block21;
block20:;
int64_t $tmp589 = $tmp588.value;
int64_t $tmp590 = $tmp559.value;
bool $tmp591 = $tmp589 >= $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block19; else goto block15;
block21:;
int64_t $tmp594 = $tmp588.value;
int64_t $tmp595 = $tmp559.value;
bool $tmp596 = $tmp594 > $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block19; else goto block15;
block19:;
int64_t $tmp599 = $tmp584.value;
int64_t $tmp600 = $tmp559.value;
int64_t $tmp601 = $tmp599 + $tmp600;
frost$core$Int $tmp602 = (frost$core$Int) {$tmp601};
*(&local5) = $tmp602;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:636
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp603 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp604 = *(&local1);
frost$core$Int $tmp605 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp603, $tmp604, $tmp605);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
return $tmp603;

}
frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String(frost$core$UInt64 param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:642
frost$core$Bit $tmp606 = (frost$core$Bit) {false};
frost$core$UInt64 $tmp607 = (frost$core$UInt64) {18446744073709551615u};
frost$core$String* $tmp608 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp606, param0, $tmp607, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp608));
return $tmp608;

}
void frost$core$UInt64$cleanup(frost$core$UInt64 param0) {

return;

}

