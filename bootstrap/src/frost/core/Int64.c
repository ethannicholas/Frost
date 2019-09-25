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
#include "org/frostlang/frost/Int64List.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(sizeof(frost$core$Bit$wrapper), (frost$core$Class*) &frost$core$Bit$wrapperclass);
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

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$core$Int64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int64$_frost$collections$ListView, { frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int64$_frost$core$Comparable, { frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Int64$_frost$collections$Iterable, { frost$core$Int64$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$_frost$collections$HashKey, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$Int64$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int64$_frost$core$Formattable, { frost$core$Int64$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$_frost$collections$CollectionView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Int64$class_type frost$core$Int64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$_frost$core$Equatable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$R$frost$core$Int64$shim, frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int64$$BNOT$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$get_abs$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int$R$frost$core$Int64$shim, frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int64$get_count$R$frost$core$Int$shim, frost$core$Int64$get_bitCount$R$frost$core$Int64$shim, frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int64$get_hash$R$frost$core$Int$shim, frost$core$Int64$get_asInt$R$frost$core$Int$shim, frost$core$Int64$get_asInt8$R$frost$core$Int8$shim, frost$core$Int64$get_asInt16$R$frost$core$Int16$shim, frost$core$Int64$get_asInt32$R$frost$core$Int32$shim, frost$core$Int64$get_asUInt$R$frost$core$UInt$shim, frost$core$Int64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int64$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int64$get_asReal32$R$frost$core$Real32$shim, frost$core$Int64$get_asReal64$R$frost$core$Real64$shim, frost$core$Int64$format$frost$core$String$R$frost$core$String$shim, frost$core$Int64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[17]; } frost$core$Int64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$ListView, { frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Comparable, { frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$Iterable, { frost$core$Int64$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$HashKey, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$Int64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Formattable, { frost$core$Int64$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$CollectionView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

static frost$core$String $s3;
frost$core$Int64$wrapperclass_type frost$core$Int64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Equatable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn8)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, 160599543153787679, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, 160599543153787679, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s5 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 140, 254499716960505976, NULL };
static frost$core$String $s6 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 165, 7013620419859298807, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 90, 5833762640749122721, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f", 119, -2331079943571138136, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$Int64 frost$core$Int64$init$builtin_int64(int64_t param0) {

frost$core$Int64 local0;
int64_t* _1;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:30
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int64 local0;
int8_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:36
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Int64 local0;
int16_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:42
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Int64 local0;
int32_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:48
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int64 local0;
uint8_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:54
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Int64 local0;
uint16_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:60
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Int64 local0;
uint32_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:66
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int(frost$core$Int param0) {

frost$core$Int64 local0;
int64_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:72
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int64 frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:78
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$Int64 frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:84
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$Int64 frost$core$Int64$$SUB$R$frost$core$Int64(frost$core$Int64 param0) {

int64_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$Int64 frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:95
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$Int64 frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:101
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$Int64 frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
_1 = param0.value;
_2 = param1.value;
_3 = _1 % _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int8 param1) {

int64_t _1;
double _2;
int8_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:113
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int16 param1) {

int64_t _1;
double _2;
int16_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:119
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int32 param1) {

int64_t _1;
double _2;
int32_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:125
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
double _2;
int64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:131
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt8 param1) {

int64_t _1;
double _2;
uint8_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:137
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt16 param1) {

int64_t _1;
double _2;
uint16_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:143
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt32 param1) {

int64_t _1;
double _2;
uint32_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:149
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt64 param1) {

int64_t _1;
double _2;
uint64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:155
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Real32 param1) {

int64_t _1;
double _2;
float _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:161
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Real64 param1) {

int64_t _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:167
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Int64 frost$core$Int64$$BNOT$R$frost$core$Int64(frost$core$Int64 param0) {

int64_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:172
_1 = param0.value;
_2 = ~_1;
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$Int64 frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
_1 = param0.value;
_2 = param1.value;
_3 = _1 & _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$UInt64 frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

int64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:184
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$Int64 frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:190
_1 = param0.value;
_2 = param1.value;
_3 = _1 | _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$UInt64 frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

int64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:196
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$Int64 frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:202
_1 = param0.value;
_2 = param1.value;
_3 = _1 ^ _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$UInt64 frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

int64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:208
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$Int64 frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:214
_1 = param0.value;
_2 = param1.value;
_3 = _1 << _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$Int64 frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int64 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:220
_1 = param0.value;
_2 = param1.value;
_3 = _1 >> _2;
_4 = (frost$core$Int64) {_3};
return _4;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:226
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:232
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:238
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:245
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:251
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:257
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:263
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:269
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:276
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:282
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:288
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:294
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:300
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:307
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:313
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:319
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:325
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:331
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:338
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:344
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:350
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:356
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:362
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:369
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:375
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:381
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:387
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:393
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:400
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:406
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Int64 frost$core$Int64$get_abs$R$frost$core$Int64(frost$core$Int64 param0) {

frost$core$Int64 _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _11;
int64_t _12;
frost$core$Int64 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:412
_1 = (frost$core$Int64) {0u};
_2 = param0.value;
_3 = _1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:413
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Int64.frost:413:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_11 = param0.value;
_12 = -_11;
_13 = (frost$core$Int64) {_12};
return _13;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:415
return param0;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int64 _10;
int8_t _13;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:421
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:422
_9 = param0.value;
_10 = (frost$core$Int64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:424
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int64 _10;
int16_t _13;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:430
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:431
_9 = param0.value;
_10 = (frost$core$Int64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:433
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int64 _10;
int32_t _13;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:439
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:440
_9 = param0.value;
_10 = (frost$core$Int64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:442
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
int64_t _8;
frost$core$Int64 _9;
int64_t _12;
frost$core$Int64 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:448
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:449
_8 = param0.value;
_9 = (frost$core$Int64) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:451
_12 = param1.value;
_13 = (frost$core$Int64) {_12};
return _13;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int64 _10;
int64_t _13;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:457
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:458
_9 = param0.value;
_10 = (frost$core$Int64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:460
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int64 _10;
int8_t _13;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:471
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:472
_9 = param0.value;
_10 = (frost$core$Int64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:474
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int64 _10;
int16_t _13;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:480
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:481
_9 = param0.value;
_10 = (frost$core$Int64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:483
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int64 _10;
int32_t _13;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:489
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:490
_9 = param0.value;
_10 = (frost$core$Int64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:492
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
int64_t _8;
frost$core$Int64 _9;
int64_t _12;
frost$core$Int64 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:498
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:499
_8 = param0.value;
_9 = (frost$core$Int64) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:501
_12 = param1.value;
_13 = (frost$core$Int64) {_12};
return _13;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int64 _10;
int64_t _13;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:507
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:508
_9 = param0.value;
_10 = (frost$core$Int64) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:510
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$Range$LTfrost$core$Int64$GT param0) {

frost$core$Int64 _0;
int64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
frost$core$Int64 _7;
int64_t _10;
uint64_t _11;
frost$core$UInt64 _12;
uint64_t _14;
uint64_t _15;
uint64_t _16;
frost$core$UInt64 _17;
frost$core$Int64 _18;
int64_t _21;
uint64_t _22;
frost$core$UInt64 _23;
uint64_t _25;
uint64_t _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$core$Int _31;
org$frostlang$frost$Int64List* _35;
frost$core$Int64 _36;
frost$core$Int64 _37;
frost$core$Int64 _38;
frost$core$Bit _39;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT _40;
frost$collections$ListView* _42;
frost$core$Object* _43;
frost$core$Object* _45;
_0 = param0.max;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:519:19
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_3 = _0.value;
_4 = ((uint64_t) _3);
_5 = (frost$core$UInt64) {_4};
_7 = param0.min;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:519:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_10 = _7.value;
_11 = ((uint64_t) _10);
_12 = (frost$core$UInt64) {_11};
_14 = _5.value;
_15 = _12.value;
_16 = _14 - _15;
_17 = (frost$core$UInt64) {_16};
_18 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:519:61
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_21 = _18.value;
_22 = ((uint64_t) _21);
_23 = (frost$core$UInt64) {_22};
_25 = _17.value;
_26 = _23.value;
_27 = _25 < _26;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block1; else goto block2;
block2:;
_31 = (frost$core$Int) {520u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s4, _31, &$s5);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:521
_35 = (org$frostlang$frost$Int64List*) frostObjectAlloc(sizeof(org$frostlang$frost$Int64List), (frost$core$Class*) &org$frostlang$frost$Int64List$class);
_36 = param0.min;
_37 = param0.max;
_38 = (frost$core$Int64) {1u};
_39 = param0.inclusive;
_40 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit(_36, _37, _38, _39);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT(_35, _40);
_42 = ((frost$collections$ListView*) _35);
_43 = ((frost$core$Object*) _42);
frost$core$Frost$ref$frost$core$Object$Q(_43);
_45 = ((frost$core$Object*) _35);
frost$core$Frost$unref$frost$core$Object$Q(_45);
return _42;

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param0) {

frost$core$Int _0;
frost$core$Int _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
frost$core$Int _8;
org$frostlang$frost$Int64List* _12;
frost$collections$ListView* _14;
frost$core$Object* _15;
frost$core$Object* _17;
_0 = org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int(param0);
_1 = (frost$core$Int) {0u};
_2 = _0.value;
_3 = _1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block2:;
_8 = (frost$core$Int) {526u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s6, _8, &$s7);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:527
_12 = (org$frostlang$frost$Int64List*) frostObjectAlloc(sizeof(org$frostlang$frost$Int64List), (frost$core$Class*) &org$frostlang$frost$Int64List$class);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT(_12, param0);
_14 = ((frost$collections$ListView*) _12);
_15 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_15);
_17 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_17);
return _14;

}
frost$core$Bit frost$core$Int64$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int param1) {

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn8 _8;
frost$core$Int _9;
int64_t _10;
int64_t _11;
bool _12;
frost$core$Bit _13;
bool _14;
frost$core$Object* _15;
frost$core$Int _18;
frost$core$Int _22;
int64_t _25;
int64_t _26;
int64_t _27;
frost$core$Int _28;
frost$core$Int64 _30;
int64_t _33;
int64_t _34;
int64_t _35;
frost$core$Int64 _36;
frost$core$Int64 _38;
int64_t _39;
int64_t _40;
bool _41;
frost$core$Bit _42;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
frost$core$Int64$wrapper* $tmp9;
$tmp9 = (frost$core$Int64$wrapper*) frostObjectAlloc(sizeof(frost$core$Int64$wrapper), (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp9->value = param0;
_7 = ((frost$collections$CollectionView*) $tmp9);
ITable* $tmp10 = _7->$class->itable;
while ($tmp10->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp10 = $tmp10->next;
}
_8 = $tmp10->methods[0];
_9 = _8(_7);
_10 = param1.value;
_11 = _9.value;
_12 = _10 < _11;
_13 = (frost$core$Bit) {_12};
_14 = _13.value;
_15 = ((frost$core$Object*) _7);
frost$core$Frost$unref$frost$core$Object$Q(_15);
if (_14) goto block1; else goto block2;
block2:;
_18 = (frost$core$Int) {532u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _18, &$s12);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:533
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from Int64.frost:533:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_25 = _22.value;
_26 = param1.value;
_27 = _25 << _26;
_28 = (frost$core$Int) {_27};
_30 = frost$core$Int64$init$frost$core$Int(_28);
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Int64.frost:533:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:178
_33 = param0.value;
_34 = _30.value;
_35 = _33 & _34;
_36 = (frost$core$Int64) {_35};
_38 = (frost$core$Int64) {0u};
_39 = _36.value;
_40 = _38.value;
_41 = _39 != _40;
_42 = (frost$core$Bit) {_41};
return _42;

}
frost$core$Int frost$core$Int64$get_count$R$frost$core$Int(frost$core$Int64 param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:539
_1 = (frost$core$Int) {64u};
return _1;

}
frost$collections$Iterator* frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int64 param0) {

org$frostlang$frost$IntBitIterator* _1;
int64_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$collections$Iterator* _10;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:549
_1 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(sizeof(org$frostlang$frost$IntBitIterator), (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:549:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_4 = param0.value;
_5 = ((uint64_t) _4);
_6 = (frost$core$UInt64) {_5};
_8 = (frost$core$UInt64) {9223372036854775808u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(_1, _6, _8);
_10 = ((frost$collections$Iterator*) _1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return _10;

}
frost$core$Int frost$core$Int64$get_hash$R$frost$core$Int(frost$core$Int64 param0) {

int64_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:554
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int64$nullable frost$core$Int64$parse$frost$core$String$frost$core$Int$R$frost$core$Int64$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$core$Int _7;
int64_t _8;
int64_t _9;
bool _10;
frost$core$Bit _11;
bool _12;
frost$core$Int _14;
frost$core$Bit _18;
bool _19;
frost$core$Int _22;
frost$core$Int$nullable _23;
frost$core$Bit _24;
frost$core$Range$LTfrost$core$Int$Q$GT _25;
frost$core$String* _26;
frost$core$UInt64$nullable _27;
frost$core$Object* _29;
frost$core$UInt64$nullable _32;
bool _33;
frost$core$Bit _34;
bool _35;
frost$core$UInt64$nullable _40;
bool _41;
frost$core$Bit _42;
bool _43;
frost$core$Int _45;
frost$core$UInt64 _48;
uint64_t _51;
int64_t _52;
frost$core$Int64 _53;
int64_t _57;
int64_t _58;
frost$core$Int64 _59;
frost$core$Int64$nullable _61;
frost$core$UInt64$nullable _65;
frost$core$UInt64$nullable _68;
bool _69;
frost$core$Bit _70;
bool _71;
frost$core$UInt64$nullable _76;
bool _77;
frost$core$Bit _78;
bool _79;
frost$core$Int _81;
frost$core$UInt64 _84;
uint64_t _87;
int64_t _88;
frost$core$Int64 _89;
frost$core$Int64$nullable _91;
_0 = (frost$core$Int) {2u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
_7 = (frost$core$Int) {36u};
_8 = param1.value;
_9 = _7.value;
_10 = _8 <= _9;
_11 = (frost$core$Bit) {_10};
_12 = _11.value;
if (_12) goto block1; else goto block2;
block2:;
_14 = (frost$core$Int) {560u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _14, &$s14);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:561
_18 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s15);
_19 = _18.value;
if (_19) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:562
_22 = (frost$core$Int) {1u};
_23 = ((frost$core$Int$nullable) { _22, true });
_24 = (frost$core$Bit) {false};
_25 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_23, ((frost$core$Int$nullable) { .nonnull = false }), _24);
_26 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(param0, _25);
_27 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(_26, param1);
*(&local0) = _27;
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:563
_32 = *(&local0);
_33 = !_32.nonnull;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:564
return ((frost$core$Int64$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:566
_40 = *(&local0);
_41 = _40.nonnull;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block9; else goto block10;
block10:;
_45 = (frost$core$Int) {566u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s16, _45, &$s17);
abort(); // unreachable
block9:;
_48 = ((frost$core$UInt64) _40.value);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Int64.frost:566:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_51 = _48.value;
_52 = ((int64_t) _51);
_53 = (frost$core$Int64) {_52};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Int64.frost:566:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_57 = _53.value;
_58 = -_57;
_59 = (frost$core$Int64) {_58};
_61 = ((frost$core$Int64$nullable) { _59, true });
return _61;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:569
_65 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = _65;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:570
_68 = *(&local1);
_69 = !_68.nonnull;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:571
return ((frost$core$Int64$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:573
_76 = *(&local1);
_77 = _76.nonnull;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block15; else goto block16;
block16:;
_81 = (frost$core$Int) {573u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s18, _81, &$s19);
abort(); // unreachable
block15:;
_84 = ((frost$core$UInt64) _76.value);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Int64.frost:573:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
_87 = _84.value;
_88 = ((int64_t) _87);
_89 = (frost$core$Int64) {_88};
_91 = ((frost$core$Int64$nullable) { _89, true });
return _91;
block5:;
goto block18;
block18:;

}
frost$core$Int frost$core$Int64$get_asInt$R$frost$core$Int(frost$core$Int64 param0) {

int64_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8 frost$core$Int64$get_asInt8$R$frost$core$Int8(frost$core$Int64 param0) {

int64_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:586
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$Int64$get_asInt16$R$frost$core$Int16(frost$core$Int64 param0) {

int64_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:592
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$Int64$get_asInt32$R$frost$core$Int32(frost$core$Int64 param0) {

int64_t _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:598
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$UInt frost$core$Int64$get_asUInt$R$frost$core$UInt(frost$core$Int64 param0) {

int64_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:604
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$UInt8 frost$core$Int64$get_asUInt8$R$frost$core$UInt8(frost$core$Int64 param0) {

int64_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$Int64$get_asUInt16$R$frost$core$UInt16(frost$core$Int64 param0) {

int64_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:616
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$Int64$get_asUInt32$R$frost$core$UInt32(frost$core$Int64 param0) {

int64_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:622
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$Int64$get_asUInt64$R$frost$core$UInt64(frost$core$Int64 param0) {

int64_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Real32 frost$core$Int64$get_asReal32$R$frost$core$Real32(frost$core$Int64 param0) {

int64_t _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:634
_1 = param0.value;
_2 = ((float) _1);
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real64 frost$core$Int64$get_asReal64$R$frost$core$Real64(frost$core$Int64 param0) {

int64_t _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:640
_1 = param0.value;
_2 = ((double) _1);
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$String* frost$core$Int64$get_asString$R$frost$core$String(frost$core$Int64 param0) {

frost$core$Int local0;
frost$unsafe$Pointer local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$core$Int local4;
frost$core$Int64 local5;
frost$core$Int local6;
frost$core$Int local7;
frost$core$Int _1;
frost$core$Int _4;
int64_t _7;
int64_t _8;
int64_t _9;
int64_t* _12;
frost$unsafe$Pointer _14;
frost$unsafe$Pointer _17;
frost$core$Int _21;
frost$core$Int _22;
int64_t _23;
int64_t _24;
int64_t _25;
frost$core$Int _26;
frost$core$Int64 _31;
frost$core$Int64 _32;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$unsafe$Pointer _42;
int64_t _43;
frost$core$Int _44;
frost$core$Int64 _45;
frost$core$Int64 _46;
frost$core$Int64 _47;
int64_t _50;
int64_t _51;
int64_t _52;
frost$core$Int64 _53;
frost$core$Int64 _55;
int64_t _56;
int64_t _57;
int64_t _58;
frost$core$Int64 _59;
int64_t _62;
uint8_t _63;
frost$core$UInt8 _64;
frost$core$Char8 _66;
int64_t _67;
frost$core$Int64 _70;
frost$core$Int64 _71;
int64_t _72;
int64_t _73;
int64_t _74;
frost$core$Int64 _75;
frost$core$Int _78;
frost$core$Int _79;
int64_t _80;
int64_t _81;
int64_t _82;
frost$core$Int _83;
frost$core$Int64 _86;
frost$core$Int64 _87;
int64_t _88;
int64_t _89;
bool _90;
frost$core$Bit _91;
bool _92;
frost$core$Int _95;
frost$core$Int _96;
int64_t _97;
int64_t _98;
int64_t _99;
frost$core$Int _100;
frost$unsafe$Pointer _107;
int64_t _108;
frost$core$Int _109;
frost$core$Int64 _110;
frost$core$Int64 _111;
frost$core$Int64 _112;
frost$core$Int64 _113;
int64_t _116;
int64_t _117;
int64_t _118;
frost$core$Int64 _119;
int64_t _121;
int64_t _122;
int64_t _123;
frost$core$Int64 _124;
int64_t _127;
uint8_t _128;
frost$core$UInt8 _129;
frost$core$Char8 _131;
int64_t _132;
frost$core$Int64 _135;
frost$core$Int64 _136;
int64_t _137;
int64_t _138;
int64_t _139;
frost$core$Int64 _140;
frost$core$Int _143;
frost$core$Int _144;
int64_t _145;
int64_t _146;
int64_t _147;
frost$core$Int _148;
frost$core$Int64 _151;
frost$core$Int64 _152;
int64_t _153;
int64_t _154;
bool _155;
frost$core$Bit _156;
bool _157;
frost$unsafe$Pointer _160;
int64_t _161;
frost$core$Int _162;
frost$core$Int64 _163;
frost$core$UInt8 _164;
frost$core$Char8 _165;
int64_t _166;
frost$core$Int _170;
frost$core$Int _171;
int64_t _172;
int64_t _173;
int64_t _174;
frost$core$Int _175;
frost$core$Int _178;
frost$core$Int _179;
frost$core$Bit _180;
frost$core$Range$LTfrost$core$Int$GT _181;
frost$core$Int _182;
frost$core$Int _184;
frost$core$Bit _185;
bool _186;
frost$core$Int _187;
int64_t _189;
int64_t _190;
bool _191;
frost$core$Bit _192;
bool _193;
int64_t _195;
int64_t _196;
bool _197;
frost$core$Bit _198;
bool _199;
frost$unsafe$Pointer _202;
int64_t _203;
frost$core$Int _204;
frost$core$Int64 _205;
frost$unsafe$Pointer _206;
int64_t _207;
frost$core$Int _208;
frost$core$Int _209;
int64_t _210;
int64_t _211;
int64_t _212;
frost$core$Int _213;
frost$core$Int64 _214;
int64_t _215;
frost$core$Char8 _216;
int64_t _217;
frost$core$Int _220;
int64_t _221;
int64_t _222;
int64_t _223;
frost$core$Int _224;
int64_t _226;
int64_t _227;
bool _228;
frost$core$Bit _229;
bool _230;
int64_t _232;
int64_t _233;
bool _234;
frost$core$Bit _235;
bool _236;
int64_t _238;
int64_t _239;
int64_t _240;
frost$core$Int _241;
frost$core$String* _245;
frost$unsafe$Pointer _246;
frost$core$Int _247;
frost$core$Object* _249;
frost$core$Object* _251;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:646
_1 = (frost$core$Int) {20u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:647
_4 = *(&local0);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Int64.frost:647:42
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:49
_7 = _4.value;
_8 = _7 * 1u;
_9 = frost$core$Frost$alloc$builtin_int$R$builtin_int(_8);
// begin inline call to frost.unsafe.Pointer.init(value:builtin_int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Pointer.frost:49:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/unsafe/Pointer.frost:31
_12 = &(&local2)->value;
*_12 = _9;
_14 = *(&local2);
*(&local1) = _14;
_17 = *(&local1);
*(&local3) = _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:648
_21 = *(&local0);
_22 = (frost$core$Int) {1u};
_23 = _21.value;
_24 = _22.value;
_25 = _23 - _24;
_26 = (frost$core$Int) {_25};
*(&local4) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:649
*(&local5) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:650
_31 = *(&local5);
_32 = (frost$core$Int64) {0u};
_33 = _31.value;
_34 = _32.value;
_35 = _33 >= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:651
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:652
_42 = *(&local3);
_43 = _42.value;
_44 = *(&local4);
_45 = frost$core$Int64$init$frost$core$Int(_44);
_46 = *(&local5);
_47 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Int64.frost:652:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
_50 = _46.value;
_51 = _47.value;
_52 = _50 % _51;
_53 = (frost$core$Int64) {_52};
_55 = (frost$core$Int64) {48u};
_56 = _53.value;
_57 = _55.value;
_58 = _56 + _57;
_59 = (frost$core$Int64) {_58};
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Int64.frost:652:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
_62 = _59.value;
_63 = ((uint8_t) _62);
_64 = (frost$core$UInt8) {_63};
_66 = frost$core$Char8$init$frost$core$UInt8(_64);
_67 = _45.value;
((frost$core$Char8*)_43)[_67] = _66;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:653
_70 = *(&local5);
_71 = (frost$core$Int64) {10u};
_72 = _70.value;
_73 = _71.value;
_74 = _72 / _73;
_75 = (frost$core$Int64) {_74};
*(&local5) = _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:654
_78 = *(&local4);
_79 = (frost$core$Int) {1u};
_80 = _78.value;
_81 = _79.value;
_82 = _80 - _81;
_83 = (frost$core$Int) {_82};
*(&local4) = _83;
_86 = *(&local5);
_87 = (frost$core$Int64) {0u};
_88 = _86.value;
_89 = _87.value;
_90 = _88 > _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block6; else goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:657
_95 = *(&local4);
_96 = (frost$core$Int) {1u};
_97 = _95.value;
_98 = _96.value;
_99 = _97 + _98;
_100 = (frost$core$Int) {_99};
*(&local4) = _100;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:660
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:661
_107 = *(&local3);
_108 = _107.value;
_109 = *(&local4);
_110 = frost$core$Int64$init$frost$core$Int(_109);
_111 = (frost$core$Int64) {48u};
_112 = *(&local5);
_113 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Int64.frost:661:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:107
_116 = _112.value;
_117 = _113.value;
_118 = _116 % _117;
_119 = (frost$core$Int64) {_118};
_121 = _111.value;
_122 = _119.value;
_123 = _121 - _122;
_124 = (frost$core$Int64) {_123};
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Int64.frost:661:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:610
_127 = _124.value;
_128 = ((uint8_t) _127);
_129 = (frost$core$UInt8) {_128};
_131 = frost$core$Char8$init$frost$core$UInt8(_129);
_132 = _110.value;
((frost$core$Char8*)_108)[_132] = _131;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:662
_135 = *(&local5);
_136 = (frost$core$Int64) {10u};
_137 = _135.value;
_138 = _136.value;
_139 = _137 / _138;
_140 = (frost$core$Int64) {_139};
*(&local5) = _140;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:663
_143 = *(&local4);
_144 = (frost$core$Int) {1u};
_145 = _143.value;
_146 = _144.value;
_147 = _145 - _146;
_148 = (frost$core$Int) {_147};
*(&local4) = _148;
_151 = *(&local5);
_152 = (frost$core$Int64) {0u};
_153 = _151.value;
_154 = _152.value;
_155 = _153 < _154;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block11; else goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:666
_160 = *(&local3);
_161 = _160.value;
_162 = *(&local4);
_163 = frost$core$Int64$init$frost$core$Int(_162);
_164 = (frost$core$UInt8) {45u};
_165 = frost$core$Char8$init$frost$core$UInt8(_164);
_166 = _163.value;
((frost$core$Char8*)_161)[_166] = _165;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:668
_170 = *(&local0);
_171 = *(&local4);
_172 = _170.value;
_173 = _171.value;
_174 = _172 - _173;
_175 = (frost$core$Int) {_174};
*(&local6) = _175;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:669
_178 = (frost$core$Int) {0u};
_179 = *(&local6);
_180 = (frost$core$Bit) {false};
_181 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_178, _179, _180);
_182 = _181.min;
*(&local7) = _182;
_184 = _181.max;
_185 = _181.inclusive;
_186 = _185.value;
_187 = (frost$core$Int) {1u};
if (_186) goto block19; else goto block20;
block19:;
_189 = _182.value;
_190 = _184.value;
_191 = _189 <= _190;
_192 = (frost$core$Bit) {_191};
_193 = _192.value;
if (_193) goto block16; else goto block17;
block20:;
_195 = _182.value;
_196 = _184.value;
_197 = _195 < _196;
_198 = (frost$core$Bit) {_197};
_199 = _198.value;
if (_199) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:670
_202 = *(&local3);
_203 = _202.value;
_204 = *(&local7);
_205 = frost$core$Int64$init$frost$core$Int(_204);
_206 = *(&local3);
_207 = _206.value;
_208 = *(&local7);
_209 = *(&local4);
_210 = _208.value;
_211 = _209.value;
_212 = _210 + _211;
_213 = (frost$core$Int) {_212};
_214 = frost$core$Int64$init$frost$core$Int(_213);
_215 = _214.value;
_216 = ((frost$core$Char8*)_207)[_215];
_217 = _205.value;
((frost$core$Char8*)_203)[_217] = _216;
_220 = *(&local7);
_221 = _184.value;
_222 = _220.value;
_223 = _221 - _222;
_224 = (frost$core$Int) {_223};
if (_186) goto block22; else goto block23;
block22:;
_226 = _224.value;
_227 = _187.value;
_228 = _226 >= _227;
_229 = (frost$core$Bit) {_228};
_230 = _229.value;
if (_230) goto block21; else goto block17;
block23:;
_232 = _224.value;
_233 = _187.value;
_234 = _232 > _233;
_235 = (frost$core$Bit) {_234};
_236 = _235.value;
if (_236) goto block21; else goto block17;
block21:;
_238 = _220.value;
_239 = _187.value;
_240 = _238 + _239;
_241 = (frost$core$Int) {_240};
*(&local7) = _241;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:672
_245 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_246 = *(&local3);
_247 = *(&local6);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_245, _246, _247);
_249 = ((frost$core$Object*) _245);
frost$core$Frost$ref$frost$core$Object$Q(_249);
_251 = ((frost$core$Object*) _245);
frost$core$Frost$unref$frost$core$Object$Q(_251);
return _245;

}
frost$core$String* frost$core$Int64$format$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

frost$core$Int64 local0;
int64_t _1;
bool _2;
frost$core$Bit _3;
frost$core$Int64 _6;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
int64_t _16;
int64_t _17;
frost$core$Int64 _18;
frost$core$Int64 _25;
int64_t _28;
uint64_t _29;
frost$core$UInt64 _30;
frost$core$UInt64 _32;
frost$core$String* _33;
frost$core$Object* _34;
frost$core$Object* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:678
_1 = param0.value;
_2 = _1 < 0u;
_3 = (frost$core$Bit) {_2};
// begin inline call to function frost.core.Int64.get_abs():frost.core.Int64 from Int64.frost:678:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:412
_6 = (frost$core$Int64) {0u};
_7 = param0.value;
_8 = _6.value;
_9 = _7 < _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:413
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Int64.frost:413:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:89
_16 = param0.value;
_17 = -_16;
_18 = (frost$core$Int64) {_17};
*(&local0) = _18;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:415
*(&local0) = param0;
goto block1;
block1:;
_25 = *(&local0);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:678:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:628
_28 = _25.value;
_29 = ((uint64_t) _28);
_30 = (frost$core$UInt64) {_29};
_32 = (frost$core$UInt64) {18446744073709551615u};
_33 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_3, _30, _32, param1);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_36);
return _33;

}
void frost$core$Int64$cleanup(frost$core$Int64 param0) {

return;

}

