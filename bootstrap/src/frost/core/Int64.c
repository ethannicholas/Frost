#include "frost/core/Int64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Equatable.h"
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real32.h"
#include "frost/core/UInt.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/Int64List.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Object* frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int64$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int64$get_hash$R$frost$core$Int(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int64$format$frost$core$String$R$frost$core$String(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int64$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int64$get_count$R$frost$core$Int(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int64$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Int64$get_asString$R$frost$core$String(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$SUB$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$$SUB$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$BNOT$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$$BNOT$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$EQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int64$$EQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int64$$NEQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int64$$LT$frost$core$Int$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int64$$GT$frost$core$Int$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int64$$GE$frost$core$Int$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int64$$LE$frost$core$Int$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$get_abs$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$get_abs$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$min$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$Int64$min$frost$core$Int$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$max$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$Int64$max$frost$core$Int$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$Int64$get_bitCount$R$frost$core$Int64$shim(frost$core$Int64* sret, frost$core$Object* p0) {
    frost$core$Int64$get_bitCount$R$frost$core$Int64(sret, ((frost$core$Int64$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$Int64$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int64$get_asInt$R$frost$core$Int(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int64$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int64$get_asInt8$R$frost$core$Int8(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int64$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int64$get_asInt16$R$frost$core$Int16(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int64$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int64$get_asInt32$R$frost$core$Int32(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int64$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$Int64$get_asUInt$R$frost$core$UInt(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Int64$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Int64$get_asUInt8$R$frost$core$UInt8(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Int64$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Int64$get_asUInt16$R$frost$core$UInt16(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int64$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Int64$get_asUInt32$R$frost$core$UInt32(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int64$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Int64$get_asReal32$R$frost$core$Real32(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Int64$get_asReal64$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Int64$cleanup$shim(frost$core$Object* p0) {
    frost$core$Int64$cleanup(((frost$core$Int64$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$core$Int64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int64$_frost$collections$ListView, { frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int64$_frost$core$Comparable, { frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Int64$_frost$collections$Iterable, { frost$core$Int64$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$_frost$collections$HashKey, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$Int64$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int64$_frost$core$Formattable, { frost$core$Int64$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$_frost$collections$CollectionView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Int64$class_type frost$core$Int64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$_frost$core$Equatable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$R$frost$core$Int64$shim, frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int64$$BNOT$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$get_abs$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int$R$frost$core$Int64$shim, frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$get_count$R$frost$core$Int$shim, frost$core$Int64$get_bitCount$R$frost$core$Int64$shim, frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int64$get_hash$R$frost$core$Int$shim, frost$core$Int64$get_asInt$R$frost$core$Int$shim, frost$core$Int64$get_asInt8$R$frost$core$Int8$shim, frost$core$Int64$get_asInt16$R$frost$core$Int16$shim, frost$core$Int64$get_asInt32$R$frost$core$Int32$shim, frost$core$Int64$get_asUInt$R$frost$core$UInt$shim, frost$core$Int64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int64$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int64$get_asReal32$R$frost$core$Real32$shim, frost$core$Int64$get_asReal64$R$frost$core$Real64$shim, frost$core$Int64$format$frost$core$String$R$frost$core$String$shim, frost$core$Int64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[16]; } frost$core$Int64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$ListView, { frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Comparable, { frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$Iterable, { frost$core$Int64$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$HashKey, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$Int64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Formattable, { frost$core$Int64$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$CollectionView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

static frost$core$String $s3;
frost$core$Int64$wrapperclass_type frost$core$Int64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Equatable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn391)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, 160599543153787679, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, 160599543153787679, NULL };
static frost$core$String $s363 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s364 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 140, 254499716960505976, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s380 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 165, 7013620419859298807, NULL };
static frost$core$String $s399 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s400 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 90, 5833762640749122721, NULL };
static frost$core$String $s436 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s437 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f", 119, -2331079943571138136, NULL };
static frost$core$String $s439 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s453 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s454 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s468 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s469 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$Int64 frost$core$Int64$init$builtin_int64(int64_t param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:30
int64_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int64 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:36
int8_t $tmp6 = param0.value;
int64_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int64_t) $tmp6);
frost$core$Int64 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:42
int16_t $tmp9 = param0.value;
int64_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int64_t) $tmp9);
frost$core$Int64 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:48
int32_t $tmp12 = param0.value;
int64_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((int64_t) $tmp12);
frost$core$Int64 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:54
uint8_t $tmp15 = param0.value;
int64_t* $tmp16 = &(&local0)->value;
*$tmp16 = ((int64_t) $tmp15);
frost$core$Int64 $tmp17 = *(&local0);
return $tmp17;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:60
uint16_t $tmp18 = param0.value;
int64_t* $tmp19 = &(&local0)->value;
*$tmp19 = ((int64_t) $tmp18);
frost$core$Int64 $tmp20 = *(&local0);
return $tmp20;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:66
uint32_t $tmp21 = param0.value;
int64_t* $tmp22 = &(&local0)->value;
*$tmp22 = ((int64_t) $tmp21);
frost$core$Int64 $tmp23 = *(&local0);
return $tmp23;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int(frost$core$Int param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:72
int64_t $tmp24 = param0.value;
int64_t* $tmp25 = &(&local0)->value;
*$tmp25 = ((int64_t) $tmp24);
frost$core$Int64 $tmp26 = *(&local0);
return $tmp26;

}
frost$core$Int64 frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:78
int64_t $tmp27 = param0.value;
int64_t $tmp28 = param1.value;
int64_t $tmp29 = $tmp27 + $tmp28;
frost$core$Int64 $tmp30 = (frost$core$Int64) {$tmp29};
return $tmp30;

}
frost$core$Int64 frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:84
int64_t $tmp31 = param0.value;
int64_t $tmp32 = param1.value;
int64_t $tmp33 = $tmp31 - $tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {$tmp33};
return $tmp34;

}
frost$core$Int64 frost$core$Int64$$SUB$R$frost$core$Int64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp35 = param0.value;
int64_t $tmp36 = -$tmp35;
frost$core$Int64 $tmp37 = (frost$core$Int64) {$tmp36};
return $tmp37;

}
frost$core$Int64 frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:95
int64_t $tmp38 = param0.value;
int64_t $tmp39 = param1.value;
int64_t $tmp40 = $tmp38 * $tmp39;
frost$core$Int64 $tmp41 = (frost$core$Int64) {$tmp40};
return $tmp41;

}
frost$core$Int64 frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:101
int64_t $tmp42 = param0.value;
int64_t $tmp43 = param1.value;
int64_t $tmp44 = $tmp42 / $tmp43;
frost$core$Int64 $tmp45 = (frost$core$Int64) {$tmp44};
return $tmp45;

}
frost$core$Int64 frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
int64_t $tmp46 = param0.value;
int64_t $tmp47 = param1.value;
int64_t $tmp48 = $tmp46 % $tmp47;
frost$core$Int64 $tmp49 = (frost$core$Int64) {$tmp48};
return $tmp49;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:113
int64_t $tmp50 = param0.value;
int8_t $tmp51 = param1.value;
double $tmp52 = ((double) $tmp50) / ((double) $tmp51);
frost$core$Real64 $tmp53 = (frost$core$Real64) {$tmp52};
return $tmp53;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:119
int64_t $tmp54 = param0.value;
int16_t $tmp55 = param1.value;
double $tmp56 = ((double) $tmp54) / ((double) $tmp55);
frost$core$Real64 $tmp57 = (frost$core$Real64) {$tmp56};
return $tmp57;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:125
int64_t $tmp58 = param0.value;
int32_t $tmp59 = param1.value;
double $tmp60 = ((double) $tmp58) / ((double) $tmp59);
frost$core$Real64 $tmp61 = (frost$core$Real64) {$tmp60};
return $tmp61;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:131
int64_t $tmp62 = param0.value;
int64_t $tmp63 = param1.value;
double $tmp64 = ((double) $tmp62) / ((double) $tmp63);
frost$core$Real64 $tmp65 = (frost$core$Real64) {$tmp64};
return $tmp65;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:137
int64_t $tmp66 = param0.value;
uint8_t $tmp67 = param1.value;
double $tmp68 = ((double) $tmp66) / ((double) $tmp67);
frost$core$Real64 $tmp69 = (frost$core$Real64) {$tmp68};
return $tmp69;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:143
int64_t $tmp70 = param0.value;
uint16_t $tmp71 = param1.value;
double $tmp72 = ((double) $tmp70) / ((double) $tmp71);
frost$core$Real64 $tmp73 = (frost$core$Real64) {$tmp72};
return $tmp73;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:149
int64_t $tmp74 = param0.value;
uint32_t $tmp75 = param1.value;
double $tmp76 = ((double) $tmp74) / ((double) $tmp75);
frost$core$Real64 $tmp77 = (frost$core$Real64) {$tmp76};
return $tmp77;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:155
int64_t $tmp78 = param0.value;
uint64_t $tmp79 = param1.value;
double $tmp80 = ((double) $tmp78) / ((double) $tmp79);
frost$core$Real64 $tmp81 = (frost$core$Real64) {$tmp80};
return $tmp81;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:161
int64_t $tmp82 = param0.value;
float $tmp83 = param1.value;
double $tmp84 = ((double) $tmp82) / ((double) $tmp83);
frost$core$Real64 $tmp85 = (frost$core$Real64) {$tmp84};
return $tmp85;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:167
int64_t $tmp86 = param0.value;
double $tmp87 = param1.value;
double $tmp88 = ((double) $tmp86) / $tmp87;
frost$core$Real64 $tmp89 = (frost$core$Real64) {$tmp88};
return $tmp89;

}
frost$core$Int64 frost$core$Int64$$BNOT$R$frost$core$Int64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:172
int64_t $tmp90 = param0.value;
int64_t $tmp91 = !$tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
return $tmp92;

}
frost$core$Int64 frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
int64_t $tmp93 = param0.value;
int64_t $tmp94 = param1.value;
int64_t $tmp95 = $tmp93 & $tmp94;
frost$core$Int64 $tmp96 = (frost$core$Int64) {$tmp95};
return $tmp96;

}
frost$core$UInt64 frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:184
int64_t $tmp97 = param0.value;
uint64_t $tmp98 = param1.value;
uint64_t $tmp99 = ((uint64_t) $tmp97) & $tmp98;
frost$core$UInt64 $tmp100 = (frost$core$UInt64) {$tmp99};
return $tmp100;

}
frost$core$Int64 frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:190
int64_t $tmp101 = param0.value;
int64_t $tmp102 = param1.value;
int64_t $tmp103 = $tmp101 | $tmp102;
frost$core$Int64 $tmp104 = (frost$core$Int64) {$tmp103};
return $tmp104;

}
frost$core$UInt64 frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:196
int64_t $tmp105 = param0.value;
uint64_t $tmp106 = param1.value;
uint64_t $tmp107 = ((uint64_t) $tmp105) | $tmp106;
frost$core$UInt64 $tmp108 = (frost$core$UInt64) {$tmp107};
return $tmp108;

}
frost$core$Int64 frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
int64_t $tmp109 = param0.value;
int64_t $tmp110 = param1.value;
int64_t $tmp111 = $tmp109 ^ $tmp110;
frost$core$Int64 $tmp112 = (frost$core$Int64) {$tmp111};
return $tmp112;

}
frost$core$UInt64 frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:208
int64_t $tmp113 = param0.value;
uint64_t $tmp114 = param1.value;
uint64_t $tmp115 = ((uint64_t) $tmp113) ^ $tmp114;
frost$core$UInt64 $tmp116 = (frost$core$UInt64) {$tmp115};
return $tmp116;

}
frost$core$Int64 frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
int64_t $tmp117 = param0.value;
int64_t $tmp118 = param1.value;
int64_t $tmp119 = $tmp117 << $tmp118;
frost$core$Int64 $tmp120 = (frost$core$Int64) {$tmp119};
return $tmp120;

}
frost$core$Int64 frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:220
int64_t $tmp121 = param0.value;
int64_t $tmp122 = param1.value;
int64_t $tmp123 = $tmp121 >> $tmp122;
frost$core$Int64 $tmp124 = (frost$core$Int64) {$tmp123};
return $tmp124;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:226
int64_t $tmp125 = param0.value;
int8_t $tmp126 = param1.value;
bool $tmp127 = $tmp125 == ((int64_t) $tmp126);
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
return $tmp128;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:232
int64_t $tmp129 = param0.value;
int16_t $tmp130 = param1.value;
bool $tmp131 = $tmp129 == ((int64_t) $tmp130);
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
return $tmp132;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:238
int64_t $tmp133 = param0.value;
int32_t $tmp134 = param1.value;
bool $tmp135 = $tmp133 == ((int64_t) $tmp134);
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
return $tmp136;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
int64_t $tmp137 = param0.value;
int64_t $tmp138 = param1.value;
bool $tmp139 = $tmp137 == $tmp138;
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
return $tmp140;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:251
int64_t $tmp141 = param0.value;
int64_t $tmp142 = param1.value;
bool $tmp143 = $tmp141 == ((int64_t) $tmp142);
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
return $tmp144;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:257
int64_t $tmp145 = param0.value;
int8_t $tmp146 = param1.value;
bool $tmp147 = $tmp145 != ((int64_t) $tmp146);
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
return $tmp148;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:263
int64_t $tmp149 = param0.value;
int16_t $tmp150 = param1.value;
bool $tmp151 = $tmp149 != ((int64_t) $tmp150);
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
return $tmp152;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:269
int64_t $tmp153 = param0.value;
int32_t $tmp154 = param1.value;
bool $tmp155 = $tmp153 != ((int64_t) $tmp154);
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
return $tmp156;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:276
int64_t $tmp157 = param0.value;
int64_t $tmp158 = param1.value;
bool $tmp159 = $tmp157 != $tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159};
return $tmp160;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:282
int64_t $tmp161 = param0.value;
int64_t $tmp162 = param1.value;
bool $tmp163 = $tmp161 != ((int64_t) $tmp162);
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
return $tmp164;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:288
int64_t $tmp165 = param0.value;
int8_t $tmp166 = param1.value;
bool $tmp167 = $tmp165 < ((int64_t) $tmp166);
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
return $tmp168;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:294
int64_t $tmp169 = param0.value;
int16_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 < ((int64_t) $tmp170);
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
return $tmp172;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:300
int64_t $tmp173 = param0.value;
int32_t $tmp174 = param1.value;
bool $tmp175 = $tmp173 < ((int64_t) $tmp174);
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
return $tmp176;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:307
int64_t $tmp177 = param0.value;
int64_t $tmp178 = param1.value;
bool $tmp179 = $tmp177 < $tmp178;
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
return $tmp180;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:313
int64_t $tmp181 = param0.value;
int64_t $tmp182 = param1.value;
bool $tmp183 = $tmp181 < ((int64_t) $tmp182);
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
return $tmp184;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:319
int64_t $tmp185 = param0.value;
int8_t $tmp186 = param1.value;
bool $tmp187 = $tmp185 > ((int64_t) $tmp186);
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
return $tmp188;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:325
int64_t $tmp189 = param0.value;
int16_t $tmp190 = param1.value;
bool $tmp191 = $tmp189 > ((int64_t) $tmp190);
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
return $tmp192;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:331
int64_t $tmp193 = param0.value;
int32_t $tmp194 = param1.value;
bool $tmp195 = $tmp193 > ((int64_t) $tmp194);
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195};
return $tmp196;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:338
int64_t $tmp197 = param0.value;
int64_t $tmp198 = param1.value;
bool $tmp199 = $tmp197 > $tmp198;
frost$core$Bit $tmp200 = (frost$core$Bit) {$tmp199};
return $tmp200;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:344
int64_t $tmp201 = param0.value;
int64_t $tmp202 = param1.value;
bool $tmp203 = $tmp201 > ((int64_t) $tmp202);
frost$core$Bit $tmp204 = (frost$core$Bit) {$tmp203};
return $tmp204;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:350
int64_t $tmp205 = param0.value;
int8_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 >= ((int64_t) $tmp206);
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207};
return $tmp208;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:356
int64_t $tmp209 = param0.value;
int16_t $tmp210 = param1.value;
bool $tmp211 = $tmp209 >= ((int64_t) $tmp210);
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
return $tmp212;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:362
int64_t $tmp213 = param0.value;
int32_t $tmp214 = param1.value;
bool $tmp215 = $tmp213 >= ((int64_t) $tmp214);
frost$core$Bit $tmp216 = (frost$core$Bit) {$tmp215};
return $tmp216;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:369
int64_t $tmp217 = param0.value;
int64_t $tmp218 = param1.value;
bool $tmp219 = $tmp217 >= $tmp218;
frost$core$Bit $tmp220 = (frost$core$Bit) {$tmp219};
return $tmp220;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:375
int64_t $tmp221 = param0.value;
int64_t $tmp222 = param1.value;
bool $tmp223 = $tmp221 >= ((int64_t) $tmp222);
frost$core$Bit $tmp224 = (frost$core$Bit) {$tmp223};
return $tmp224;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:381
int64_t $tmp225 = param0.value;
int8_t $tmp226 = param1.value;
bool $tmp227 = $tmp225 <= ((int64_t) $tmp226);
frost$core$Bit $tmp228 = (frost$core$Bit) {$tmp227};
return $tmp228;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:387
int64_t $tmp229 = param0.value;
int16_t $tmp230 = param1.value;
bool $tmp231 = $tmp229 <= ((int64_t) $tmp230);
frost$core$Bit $tmp232 = (frost$core$Bit) {$tmp231};
return $tmp232;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:393
int64_t $tmp233 = param0.value;
int32_t $tmp234 = param1.value;
bool $tmp235 = $tmp233 <= ((int64_t) $tmp234);
frost$core$Bit $tmp236 = (frost$core$Bit) {$tmp235};
return $tmp236;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:400
int64_t $tmp237 = param0.value;
int64_t $tmp238 = param1.value;
bool $tmp239 = $tmp237 <= $tmp238;
frost$core$Bit $tmp240 = (frost$core$Bit) {$tmp239};
return $tmp240;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:406
int64_t $tmp241 = param0.value;
int64_t $tmp242 = param1.value;
bool $tmp243 = $tmp241 <= ((int64_t) $tmp242);
frost$core$Bit $tmp244 = (frost$core$Bit) {$tmp243};
return $tmp244;

}
frost$core$Int64 frost$core$Int64$get_abs$R$frost$core$Int64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:412
frost$core$Int64 $tmp245 = (frost$core$Int64) {0u};
int64_t $tmp246 = param0.value;
int64_t $tmp247 = $tmp245.value;
bool $tmp248 = $tmp246 < $tmp247;
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:413
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Int64.frost:413:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp251 = param0.value;
int64_t $tmp252 = -$tmp251;
frost$core$Int64 $tmp253 = (frost$core$Int64) {$tmp252};
return $tmp253;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:415
return param0;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:421
int64_t $tmp254 = param0.value;
int8_t $tmp255 = param1.value;
bool $tmp256 = $tmp254 < ((int64_t) $tmp255);
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:422
int64_t $tmp259 = param0.value;
frost$core$Int64 $tmp260 = (frost$core$Int64) {$tmp259};
return $tmp260;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:424
int8_t $tmp261 = param1.value;
frost$core$Int64 $tmp262 = (frost$core$Int64) {((int64_t) $tmp261)};
return $tmp262;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:430
int64_t $tmp263 = param0.value;
int16_t $tmp264 = param1.value;
bool $tmp265 = $tmp263 < ((int64_t) $tmp264);
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:431
int64_t $tmp268 = param0.value;
frost$core$Int64 $tmp269 = (frost$core$Int64) {$tmp268};
return $tmp269;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:433
int16_t $tmp270 = param1.value;
frost$core$Int64 $tmp271 = (frost$core$Int64) {((int64_t) $tmp270)};
return $tmp271;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:439
int64_t $tmp272 = param0.value;
int32_t $tmp273 = param1.value;
bool $tmp274 = $tmp272 < ((int64_t) $tmp273);
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:440
int64_t $tmp277 = param0.value;
frost$core$Int64 $tmp278 = (frost$core$Int64) {$tmp277};
return $tmp278;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:442
int32_t $tmp279 = param1.value;
frost$core$Int64 $tmp280 = (frost$core$Int64) {((int64_t) $tmp279)};
return $tmp280;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:448
int64_t $tmp281 = param0.value;
int64_t $tmp282 = param1.value;
bool $tmp283 = $tmp281 < $tmp282;
frost$core$Bit $tmp284 = (frost$core$Bit) {$tmp283};
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:449
int64_t $tmp286 = param0.value;
frost$core$Int64 $tmp287 = (frost$core$Int64) {$tmp286};
return $tmp287;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:451
int64_t $tmp288 = param1.value;
frost$core$Int64 $tmp289 = (frost$core$Int64) {$tmp288};
return $tmp289;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:457
int64_t $tmp290 = param0.value;
int64_t $tmp291 = param1.value;
bool $tmp292 = $tmp290 < ((int64_t) $tmp291);
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:458
int64_t $tmp295 = param0.value;
frost$core$Int64 $tmp296 = (frost$core$Int64) {$tmp295};
return $tmp296;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:460
int64_t $tmp297 = param1.value;
frost$core$Int64 $tmp298 = (frost$core$Int64) {((int64_t) $tmp297)};
return $tmp298;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:471
int64_t $tmp299 = param0.value;
int8_t $tmp300 = param1.value;
bool $tmp301 = $tmp299 > ((int64_t) $tmp300);
frost$core$Bit $tmp302 = (frost$core$Bit) {$tmp301};
bool $tmp303 = $tmp302.value;
if ($tmp303) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:472
int64_t $tmp304 = param0.value;
frost$core$Int64 $tmp305 = (frost$core$Int64) {$tmp304};
return $tmp305;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:474
int8_t $tmp306 = param1.value;
frost$core$Int64 $tmp307 = (frost$core$Int64) {((int64_t) $tmp306)};
return $tmp307;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:480
int64_t $tmp308 = param0.value;
int16_t $tmp309 = param1.value;
bool $tmp310 = $tmp308 > ((int64_t) $tmp309);
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:481
int64_t $tmp313 = param0.value;
frost$core$Int64 $tmp314 = (frost$core$Int64) {$tmp313};
return $tmp314;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:483
int16_t $tmp315 = param1.value;
frost$core$Int64 $tmp316 = (frost$core$Int64) {((int64_t) $tmp315)};
return $tmp316;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:489
int64_t $tmp317 = param0.value;
int32_t $tmp318 = param1.value;
bool $tmp319 = $tmp317 > ((int64_t) $tmp318);
frost$core$Bit $tmp320 = (frost$core$Bit) {$tmp319};
bool $tmp321 = $tmp320.value;
if ($tmp321) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:490
int64_t $tmp322 = param0.value;
frost$core$Int64 $tmp323 = (frost$core$Int64) {$tmp322};
return $tmp323;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:492
int32_t $tmp324 = param1.value;
frost$core$Int64 $tmp325 = (frost$core$Int64) {((int64_t) $tmp324)};
return $tmp325;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:498
int64_t $tmp326 = param0.value;
int64_t $tmp327 = param1.value;
bool $tmp328 = $tmp326 > $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:499
int64_t $tmp331 = param0.value;
frost$core$Int64 $tmp332 = (frost$core$Int64) {$tmp331};
return $tmp332;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:501
int64_t $tmp333 = param1.value;
frost$core$Int64 $tmp334 = (frost$core$Int64) {$tmp333};
return $tmp334;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:507
int64_t $tmp335 = param0.value;
int64_t $tmp336 = param1.value;
bool $tmp337 = $tmp335 > ((int64_t) $tmp336);
frost$core$Bit $tmp338 = (frost$core$Bit) {$tmp337};
bool $tmp339 = $tmp338.value;
if ($tmp339) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:508
int64_t $tmp340 = param0.value;
frost$core$Int64 $tmp341 = (frost$core$Int64) {$tmp340};
return $tmp341;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:510
int64_t $tmp342 = param1.value;
frost$core$Int64 $tmp343 = (frost$core$Int64) {((int64_t) $tmp342)};
return $tmp343;

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$Range$LTfrost$core$Int64$GT param0) {

frost$core$Int64 $tmp344 = param0.max;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:519:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp345 = $tmp344.value;
frost$core$UInt64 $tmp346 = (frost$core$UInt64) {((uint64_t) $tmp345)};
frost$core$Int64 $tmp347 = param0.min;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:519:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp348 = $tmp347.value;
frost$core$UInt64 $tmp349 = (frost$core$UInt64) {((uint64_t) $tmp348)};
uint64_t $tmp350 = $tmp346.value;
uint64_t $tmp351 = $tmp349.value;
uint64_t $tmp352 = $tmp350 - $tmp351;
frost$core$UInt64 $tmp353 = (frost$core$UInt64) {$tmp352};
frost$core$Int64 $tmp354 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:519:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp355 = $tmp354.value;
frost$core$UInt64 $tmp356 = (frost$core$UInt64) {((uint64_t) $tmp355)};
uint64_t $tmp357 = $tmp353.value;
uint64_t $tmp358 = $tmp356.value;
bool $tmp359 = $tmp357 < $tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block1; else goto block2;
block2:;
frost$core$Int $tmp362 = (frost$core$Int) {520u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s363, $tmp362, &$s364);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:521
FROST_ASSERT(56 == sizeof(org$frostlang$frost$Int64List));
org$frostlang$frost$Int64List* $tmp365 = (org$frostlang$frost$Int64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$Int64List$class);
frost$core$Int64 $tmp366 = param0.min;
frost$core$Int64 $tmp367 = param0.max;
frost$core$Int64 $tmp368 = (frost$core$Int64) {1u};
frost$core$Bit $tmp369 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp370 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp366, $tmp367, $tmp368, $tmp369);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT($tmp365, $tmp370);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp365)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp365));
return ((frost$collections$ListView*) $tmp365);

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param0) {

frost$core$Int $tmp371 = org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int(param0);
frost$core$Int $tmp372 = (frost$core$Int) {0u};
int64_t $tmp373 = $tmp371.value;
int64_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 > $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block1; else goto block2;
block2:;
frost$core$Int $tmp378 = (frost$core$Int) {526u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s379, $tmp378, &$s380);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:527
FROST_ASSERT(56 == sizeof(org$frostlang$frost$Int64List));
org$frostlang$frost$Int64List* $tmp381 = (org$frostlang$frost$Int64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$Int64List$class);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT($tmp381, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp381)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp381));
return ((frost$collections$ListView*) $tmp381);

}
frost$core$Bit frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

frost$core$Int $tmp382 = (frost$core$Int) {0u};
int64_t $tmp383 = param1.value;
int64_t $tmp384 = $tmp382.value;
bool $tmp385 = $tmp383 >= $tmp384;
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
bool $tmp387 = $tmp386.value;
if ($tmp387) goto block3; else goto block2;
block3:;
frost$core$Int64$wrapper* $tmp388;
$tmp388 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp388->value = param0;
ITable* $tmp389 = ((frost$collections$CollectionView*) $tmp388)->$class->itable;
while ($tmp389->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp389 = $tmp389->next;
}
$fn391 $tmp390 = $tmp389->methods[0];
frost$core$Int $tmp392 = $tmp390(((frost$collections$CollectionView*) $tmp388));
int64_t $tmp393 = param1.value;
int64_t $tmp394 = $tmp392.value;
bool $tmp395 = $tmp393 < $tmp394;
frost$core$Bit $tmp396 = (frost$core$Bit) {$tmp395};
bool $tmp397 = $tmp396.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp388)));
if ($tmp397) goto block1; else goto block2;
block2:;
frost$core$Int $tmp398 = (frost$core$Int) {532u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s399, $tmp398, &$s400);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:533
frost$core$Int $tmp401 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from Int64.frost:533:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
int64_t $tmp402 = $tmp401.value;
int64_t $tmp403 = param1.value;
int64_t $tmp404 = $tmp402 << $tmp403;
frost$core$Int $tmp405 = (frost$core$Int) {$tmp404};
frost$core$Int64 $tmp406 = frost$core$Int64$init$frost$core$Int($tmp405);
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Int64.frost:533:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
int64_t $tmp407 = param0.value;
int64_t $tmp408 = $tmp406.value;
int64_t $tmp409 = $tmp407 & $tmp408;
frost$core$Int64 $tmp410 = (frost$core$Int64) {$tmp409};
frost$core$Int64 $tmp411 = (frost$core$Int64) {0u};
int64_t $tmp412 = $tmp410.value;
int64_t $tmp413 = $tmp411.value;
bool $tmp414 = $tmp412 != $tmp413;
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
return $tmp415;

}
frost$core$Int frost$core$Int64$get_count$R$frost$core$Int(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:539
frost$core$Int $tmp416 = (frost$core$Int) {64u};
return $tmp416;

}
frost$collections$Iterator* frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:549
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp417 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:549:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp418 = param0.value;
frost$core$UInt64 $tmp419 = (frost$core$UInt64) {((uint64_t) $tmp418)};
frost$core$UInt64 $tmp420 = (frost$core$UInt64) {9223372036854775808u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp417, $tmp419, $tmp420);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp417)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp417));
return ((frost$collections$Iterator*) $tmp417);

}
frost$core$Int frost$core$Int64$get_hash$R$frost$core$Int(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:554
int64_t $tmp421 = param0.value;
frost$core$Int $tmp422 = (frost$core$Int) {((int64_t) $tmp421)};
return $tmp422;

}
frost$core$Int64$nullable frost$core$Int64$parse$frost$core$String$frost$core$Int$R$frost$core$Int64$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int $tmp423 = (frost$core$Int) {2u};
int64_t $tmp424 = param1.value;
int64_t $tmp425 = $tmp423.value;
bool $tmp426 = $tmp424 >= $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block3; else goto block2;
block3:;
frost$core$Int $tmp429 = (frost$core$Int) {36u};
int64_t $tmp430 = param1.value;
int64_t $tmp431 = $tmp429.value;
bool $tmp432 = $tmp430 <= $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block1; else goto block2;
block2:;
frost$core$Int $tmp435 = (frost$core$Int) {560u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s436, $tmp435, &$s437);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:561
frost$core$Bit $tmp438 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s439);
bool $tmp440 = $tmp438.value;
if ($tmp440) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:562
frost$core$Int $tmp441 = (frost$core$Int) {1u};
frost$core$Bit $tmp442 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp443 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp441, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp442);
frost$core$String* $tmp444 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(param0, $tmp443);
frost$core$UInt64$nullable $tmp445 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q($tmp444, param1);
*(&local0) = $tmp445;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp444));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:563
frost$core$UInt64$nullable $tmp446 = *(&local0);
frost$core$Bit $tmp447 = (frost$core$Bit) {!$tmp446.nonnull};
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:564
return ((frost$core$Int64$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:566
frost$core$UInt64$nullable $tmp449 = *(&local0);
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449.nonnull};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block9; else goto block10;
block10:;
frost$core$Int $tmp452 = (frost$core$Int) {566u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s453, $tmp452, &$s454);
abort(); // unreachable
block9:;
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Int64.frost:566:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp455 = ((frost$core$UInt64) $tmp449.value).value;
frost$core$Int64 $tmp456 = (frost$core$Int64) {((int64_t) $tmp455)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Int64.frost:566:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp457 = $tmp456.value;
int64_t $tmp458 = -$tmp457;
frost$core$Int64 $tmp459 = (frost$core$Int64) {$tmp458};
return ((frost$core$Int64$nullable) { $tmp459, true });
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:569
frost$core$UInt64$nullable $tmp460 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp460;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:570
frost$core$UInt64$nullable $tmp461 = *(&local1);
frost$core$Bit $tmp462 = (frost$core$Bit) {!$tmp461.nonnull};
bool $tmp463 = $tmp462.value;
if ($tmp463) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:571
return ((frost$core$Int64$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:573
frost$core$UInt64$nullable $tmp464 = *(&local1);
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464.nonnull};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block15; else goto block16;
block16:;
frost$core$Int $tmp467 = (frost$core$Int) {573u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s468, $tmp467, &$s469);
abort(); // unreachable
block15:;
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Int64.frost:573:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
uint64_t $tmp470 = ((frost$core$UInt64) $tmp464.value).value;
frost$core$Int64 $tmp471 = (frost$core$Int64) {((int64_t) $tmp470)};
return ((frost$core$Int64$nullable) { $tmp471, true });
block5:;
goto block18;
block18:;

}
frost$core$Int frost$core$Int64$get_asInt$R$frost$core$Int(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
int64_t $tmp472 = param0.value;
frost$core$Int $tmp473 = (frost$core$Int) {((int64_t) $tmp472)};
return $tmp473;

}
frost$core$Int8 frost$core$Int64$get_asInt8$R$frost$core$Int8(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:586
int64_t $tmp474 = param0.value;
frost$core$Int8 $tmp475 = (frost$core$Int8) {((int8_t) $tmp474)};
return $tmp475;

}
frost$core$Int16 frost$core$Int64$get_asInt16$R$frost$core$Int16(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:592
int64_t $tmp476 = param0.value;
frost$core$Int16 $tmp477 = (frost$core$Int16) {((int16_t) $tmp476)};
return $tmp477;

}
frost$core$Int32 frost$core$Int64$get_asInt32$R$frost$core$Int32(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:598
int64_t $tmp478 = param0.value;
frost$core$Int32 $tmp479 = (frost$core$Int32) {((int32_t) $tmp478)};
return $tmp479;

}
frost$core$UInt frost$core$Int64$get_asUInt$R$frost$core$UInt(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:604
int64_t $tmp480 = param0.value;
frost$core$UInt $tmp481 = (frost$core$UInt) {((uint64_t) $tmp480)};
return $tmp481;

}
frost$core$UInt8 frost$core$Int64$get_asUInt8$R$frost$core$UInt8(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
int64_t $tmp482 = param0.value;
frost$core$UInt8 $tmp483 = (frost$core$UInt8) {((uint8_t) $tmp482)};
return $tmp483;

}
frost$core$UInt16 frost$core$Int64$get_asUInt16$R$frost$core$UInt16(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:616
int64_t $tmp484 = param0.value;
frost$core$UInt16 $tmp485 = (frost$core$UInt16) {((uint16_t) $tmp484)};
return $tmp485;

}
frost$core$UInt32 frost$core$Int64$get_asUInt32$R$frost$core$UInt32(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:622
int64_t $tmp486 = param0.value;
frost$core$UInt32 $tmp487 = (frost$core$UInt32) {((uint32_t) $tmp486)};
return $tmp487;

}
frost$core$UInt64 frost$core$Int64$get_asUInt64$R$frost$core$UInt64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp488 = param0.value;
frost$core$UInt64 $tmp489 = (frost$core$UInt64) {((uint64_t) $tmp488)};
return $tmp489;

}
frost$core$Real32 frost$core$Int64$get_asReal32$R$frost$core$Real32(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:634
int64_t $tmp490 = param0.value;
frost$core$Real32 $tmp491 = (frost$core$Real32) {((float) $tmp490)};
return $tmp491;

}
frost$core$Real64 frost$core$Int64$get_asReal64$R$frost$core$Real64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:640
int64_t $tmp492 = param0.value;
frost$core$Real64 $tmp493 = (frost$core$Real64) {((double) $tmp492)};
return $tmp493;

}
frost$core$String* frost$core$Int64$get_asString$R$frost$core$String(frost$core$Int64 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$Int64 local3;
frost$core$Int local4;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:646
frost$core$Int $tmp494 = (frost$core$Int) {20u};
*(&local0) = $tmp494;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:647
frost$core$Int $tmp495 = *(&local0);
frost$core$Int64 $tmp496 = frost$core$Int64$init$frost$core$Int($tmp495);
int64_t $tmp497 = $tmp496.value;
frost$core$Char8* $tmp498 = ((frost$core$Char8*) frostAlloc($tmp497 * 1));
*(&local1) = $tmp498;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:648
frost$core$Int $tmp499 = *(&local0);
frost$core$Int $tmp500 = (frost$core$Int) {1u};
int64_t $tmp501 = $tmp499.value;
int64_t $tmp502 = $tmp500.value;
int64_t $tmp503 = $tmp501 - $tmp502;
frost$core$Int $tmp504 = (frost$core$Int) {$tmp503};
*(&local2) = $tmp504;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:649
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:650
frost$core$Int64 $tmp505 = *(&local3);
frost$core$Int64 $tmp506 = (frost$core$Int64) {0u};
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506.value;
bool $tmp509 = $tmp507 >= $tmp508;
frost$core$Bit $tmp510 = (frost$core$Bit) {$tmp509};
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:651
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:652
frost$core$Char8* $tmp512 = *(&local1);
frost$core$Int $tmp513 = *(&local2);
frost$core$Int64 $tmp514 = frost$core$Int64$init$frost$core$Int($tmp513);
frost$core$Int64 $tmp515 = *(&local3);
frost$core$Int64 $tmp516 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Int64.frost:652:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517 % $tmp518;
frost$core$Int64 $tmp520 = (frost$core$Int64) {$tmp519};
frost$core$Int64 $tmp521 = (frost$core$Int64) {48u};
int64_t $tmp522 = $tmp520.value;
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522 + $tmp523;
frost$core$Int64 $tmp525 = (frost$core$Int64) {$tmp524};
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Int64.frost:652:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
int64_t $tmp526 = $tmp525.value;
frost$core$UInt8 $tmp527 = (frost$core$UInt8) {((uint8_t) $tmp526)};
frost$core$Char8 $tmp528 = frost$core$Char8$init$frost$core$UInt8($tmp527);
int64_t $tmp529 = $tmp514.value;
$tmp512[$tmp529] = $tmp528;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:653
frost$core$Int64 $tmp530 = *(&local3);
frost$core$Int64 $tmp531 = (frost$core$Int64) {10u};
int64_t $tmp532 = $tmp530.value;
int64_t $tmp533 = $tmp531.value;
int64_t $tmp534 = $tmp532 / $tmp533;
frost$core$Int64 $tmp535 = (frost$core$Int64) {$tmp534};
*(&local3) = $tmp535;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:654
frost$core$Int $tmp536 = *(&local2);
frost$core$Int $tmp537 = (frost$core$Int) {1u};
int64_t $tmp538 = $tmp536.value;
int64_t $tmp539 = $tmp537.value;
int64_t $tmp540 = $tmp538 - $tmp539;
frost$core$Int $tmp541 = (frost$core$Int) {$tmp540};
*(&local2) = $tmp541;
frost$core$Int64 $tmp542 = *(&local3);
frost$core$Int64 $tmp543 = (frost$core$Int64) {0u};
int64_t $tmp544 = $tmp542.value;
int64_t $tmp545 = $tmp543.value;
bool $tmp546 = $tmp544 > $tmp545;
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:657
frost$core$Int $tmp549 = *(&local2);
frost$core$Int $tmp550 = (frost$core$Int) {1u};
int64_t $tmp551 = $tmp549.value;
int64_t $tmp552 = $tmp550.value;
int64_t $tmp553 = $tmp551 + $tmp552;
frost$core$Int $tmp554 = (frost$core$Int) {$tmp553};
*(&local2) = $tmp554;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:660
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:661
frost$core$Char8* $tmp555 = *(&local1);
frost$core$Int $tmp556 = *(&local2);
frost$core$Int64 $tmp557 = frost$core$Int64$init$frost$core$Int($tmp556);
frost$core$Int64 $tmp558 = (frost$core$Int64) {48u};
frost$core$Int64 $tmp559 = *(&local3);
frost$core$Int64 $tmp560 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Int64.frost:661:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560.value;
int64_t $tmp563 = $tmp561 % $tmp562;
frost$core$Int64 $tmp564 = (frost$core$Int64) {$tmp563};
int64_t $tmp565 = $tmp558.value;
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565 - $tmp566;
frost$core$Int64 $tmp568 = (frost$core$Int64) {$tmp567};
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Int64.frost:661:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
int64_t $tmp569 = $tmp568.value;
frost$core$UInt8 $tmp570 = (frost$core$UInt8) {((uint8_t) $tmp569)};
frost$core$Char8 $tmp571 = frost$core$Char8$init$frost$core$UInt8($tmp570);
int64_t $tmp572 = $tmp557.value;
$tmp555[$tmp572] = $tmp571;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:662
frost$core$Int64 $tmp573 = *(&local3);
frost$core$Int64 $tmp574 = (frost$core$Int64) {10u};
int64_t $tmp575 = $tmp573.value;
int64_t $tmp576 = $tmp574.value;
int64_t $tmp577 = $tmp575 / $tmp576;
frost$core$Int64 $tmp578 = (frost$core$Int64) {$tmp577};
*(&local3) = $tmp578;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:663
frost$core$Int $tmp579 = *(&local2);
frost$core$Int $tmp580 = (frost$core$Int) {1u};
int64_t $tmp581 = $tmp579.value;
int64_t $tmp582 = $tmp580.value;
int64_t $tmp583 = $tmp581 - $tmp582;
frost$core$Int $tmp584 = (frost$core$Int) {$tmp583};
*(&local2) = $tmp584;
frost$core$Int64 $tmp585 = *(&local3);
frost$core$Int64 $tmp586 = (frost$core$Int64) {0u};
int64_t $tmp587 = $tmp585.value;
int64_t $tmp588 = $tmp586.value;
bool $tmp589 = $tmp587 < $tmp588;
frost$core$Bit $tmp590 = (frost$core$Bit) {$tmp589};
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:666
frost$core$Char8* $tmp592 = *(&local1);
frost$core$Int $tmp593 = *(&local2);
frost$core$Int64 $tmp594 = frost$core$Int64$init$frost$core$Int($tmp593);
frost$core$UInt8 $tmp595 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp596 = frost$core$Char8$init$frost$core$UInt8($tmp595);
int64_t $tmp597 = $tmp594.value;
$tmp592[$tmp597] = $tmp596;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:668
frost$core$Int $tmp598 = *(&local0);
frost$core$Int $tmp599 = *(&local2);
int64_t $tmp600 = $tmp598.value;
int64_t $tmp601 = $tmp599.value;
int64_t $tmp602 = $tmp600 - $tmp601;
frost$core$Int $tmp603 = (frost$core$Int) {$tmp602};
*(&local4) = $tmp603;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:669
frost$core$Int $tmp604 = (frost$core$Int) {0u};
frost$core$Int $tmp605 = *(&local4);
frost$core$Bit $tmp606 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp607 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp604, $tmp605, $tmp606);
frost$core$Int $tmp608 = $tmp607.min;
*(&local5) = $tmp608;
frost$core$Int $tmp609 = $tmp607.max;
frost$core$Bit $tmp610 = $tmp607.inclusive;
bool $tmp611 = $tmp610.value;
frost$core$Int $tmp612 = (frost$core$Int) {1u};
if ($tmp611) goto block17; else goto block18;
block17:;
int64_t $tmp613 = $tmp608.value;
int64_t $tmp614 = $tmp609.value;
bool $tmp615 = $tmp613 <= $tmp614;
frost$core$Bit $tmp616 = (frost$core$Bit) {$tmp615};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block14; else goto block15;
block18:;
int64_t $tmp618 = $tmp608.value;
int64_t $tmp619 = $tmp609.value;
bool $tmp620 = $tmp618 < $tmp619;
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:670
frost$core$Char8* $tmp623 = *(&local1);
frost$core$Int $tmp624 = *(&local5);
frost$core$Int64 $tmp625 = frost$core$Int64$init$frost$core$Int($tmp624);
frost$core$Char8* $tmp626 = *(&local1);
frost$core$Int $tmp627 = *(&local5);
frost$core$Int $tmp628 = *(&local2);
int64_t $tmp629 = $tmp627.value;
int64_t $tmp630 = $tmp628.value;
int64_t $tmp631 = $tmp629 + $tmp630;
frost$core$Int $tmp632 = (frost$core$Int) {$tmp631};
frost$core$Int64 $tmp633 = frost$core$Int64$init$frost$core$Int($tmp632);
int64_t $tmp634 = $tmp633.value;
frost$core$Char8 $tmp635 = $tmp626[$tmp634];
int64_t $tmp636 = $tmp625.value;
$tmp623[$tmp636] = $tmp635;
frost$core$Int $tmp637 = *(&local5);
int64_t $tmp638 = $tmp609.value;
int64_t $tmp639 = $tmp637.value;
int64_t $tmp640 = $tmp638 - $tmp639;
frost$core$Int $tmp641 = (frost$core$Int) {$tmp640};
if ($tmp611) goto block20; else goto block21;
block20:;
int64_t $tmp642 = $tmp641.value;
int64_t $tmp643 = $tmp612.value;
bool $tmp644 = $tmp642 >= $tmp643;
frost$core$Bit $tmp645 = (frost$core$Bit) {$tmp644};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block19; else goto block15;
block21:;
int64_t $tmp647 = $tmp641.value;
int64_t $tmp648 = $tmp612.value;
bool $tmp649 = $tmp647 > $tmp648;
frost$core$Bit $tmp650 = (frost$core$Bit) {$tmp649};
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block19; else goto block15;
block19:;
int64_t $tmp652 = $tmp637.value;
int64_t $tmp653 = $tmp612.value;
int64_t $tmp654 = $tmp652 + $tmp653;
frost$core$Int $tmp655 = (frost$core$Int) {$tmp654};
*(&local5) = $tmp655;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:672
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp656 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp657 = *(&local1);
frost$core$Int $tmp658 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp656, $tmp657, $tmp658);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
return $tmp656;

}
frost$core$String* frost$core$Int64$format$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:678
int64_t $tmp659 = param0.value;
bool $tmp660 = $tmp659 < 0u;
frost$core$Bit $tmp661 = (frost$core$Bit) {$tmp660};
// begin inline call to function frost.core.Int64.get_abs():frost.core.Int64 from Int64.frost:678:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:412
frost$core$Int64 $tmp662 = (frost$core$Int64) {0u};
int64_t $tmp663 = param0.value;
int64_t $tmp664 = $tmp662.value;
bool $tmp665 = $tmp663 < $tmp664;
frost$core$Bit $tmp666 = (frost$core$Bit) {$tmp665};
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:413
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Int64.frost:413:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
int64_t $tmp668 = param0.value;
int64_t $tmp669 = -$tmp668;
frost$core$Int64 $tmp670 = (frost$core$Int64) {$tmp669};
*(&local0) = $tmp670;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:415
*(&local0) = param0;
goto block1;
block1:;
frost$core$Int64 $tmp671 = *(&local0);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:678:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
int64_t $tmp672 = $tmp671.value;
frost$core$UInt64 $tmp673 = (frost$core$UInt64) {((uint64_t) $tmp672)};
frost$core$UInt64 $tmp674 = (frost$core$UInt64) {18446744073709551615u};
frost$core$String* $tmp675 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp661, $tmp673, $tmp674, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp675));
return $tmp675;

}
void frost$core$Int64$cleanup(frost$core$Int64 param0) {

return;

}

