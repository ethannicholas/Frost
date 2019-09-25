#include "frost/core/Int.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt.h"
#include "frost/core/Real32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"
#include "org/frostlang/frost/IntList.h"
#include "frost/core/SteppedRange.LTfrost/core/Int.Cfrost/core/Int.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Char8.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Int frost$core$Int$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int$get_hash$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Int$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Bit frost$core$Int$$GT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int$$GT$frost$core$Int$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, ((frost$core$Int$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int$$LT$frost$core$Int$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, ((frost$core$Int$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int$$GE$frost$core$Int$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, ((frost$core$Int$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int$$LE$frost$core$Int$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, ((frost$core$Int$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$Int$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, ((frost$core$Int$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$NEQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int$$NEQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, ((frost$core$Int$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int$format$frost$core$String$R$frost$core$String(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int$get_count$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Int$get_asString$R$frost$core$String(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$Int$$ADD$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$$ADD$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$ADD$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$$ADD$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$ADD$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$ADD$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$ADD$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int$$ADD$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$ADD$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int$$ADD$frost$core$UInt$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$$SUB$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$$SUB$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$SUB$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$$SUB$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$SUB$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$SUB$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$SUB$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int$$SUB$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$SUB$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int$$SUB$frost$core$UInt$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$SUB$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int$$SUB$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$$MUL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$$MUL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$MUL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$$MUL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$MUL$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$MUL$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$MUL$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int$$MUL$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$MUL$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int$$MUL$frost$core$UInt$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$$INTDIV$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$$INTDIV$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$INTDIV$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$INTDIV$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int$$INTDIV$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$INTDIV$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int$$INTDIV$frost$core$UInt$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$$REM$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$$REM$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$REM$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$$REM$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$REM$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$REM$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$REM$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int$$REM$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$REM$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int$$REM$frost$core$UInt$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Int$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Int$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Int$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Int$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Int$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Int$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Int$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Int$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Int$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Int$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$BNOT$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int$$BNOT$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$BAND$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$BAND$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int$$BAND$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int$$BAND$frost$core$UInt$R$frost$core$UInt(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$BOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$BOR$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int$$BOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int$$BOR$frost$core$UInt$R$frost$core$UInt(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$BXOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$BXOR$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int$$BXOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int$$BXOR$frost$core$UInt$R$frost$core$UInt(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$SHL$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$SHL$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$$SHR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$$SHR$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$EQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$NEQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int$$NEQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int$$LT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int$$GT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int$$GE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int$$LE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$get_abs$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int$get_abs$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$min$frost$core$Int8$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int result = frost$core$Int$min$frost$core$Int8$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$min$frost$core$Int16$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int result = frost$core$Int$min$frost$core$Int16$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$min$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$min$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$min$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$min$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$min$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$min$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$min$frost$core$UInt8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int64 result = frost$core$Int$min$frost$core$UInt8$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$min$frost$core$UInt16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int64 result = frost$core$Int$min$frost$core$UInt16$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$min$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int$min$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$min$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int$min$frost$core$UInt$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$max$frost$core$Int8$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int result = frost$core$Int$max$frost$core$Int8$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$max$frost$core$Int16$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int result = frost$core$Int$max$frost$core$Int16$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$max$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int$max$frost$core$Int32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$max$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int$max$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int$max$frost$core$Int$R$frost$core$Int(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$max$frost$core$UInt8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int64 result = frost$core$Int$max$frost$core$UInt8$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$max$frost$core$UInt16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int64 result = frost$core$Int$max$frost$core$UInt16$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$max$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int$max$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$max$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int$max$frost$core$UInt$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$Int$get_bitCount$R$frost$core$Int$shim(frost$core$Int* sret, frost$core$Object* p0) {
    frost$core$Int$get_bitCount$R$frost$core$Int(sret, ((frost$core$Int$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int8 frost$core$Int$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int$get_asInt8$R$frost$core$Int8(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int$get_asInt16$R$frost$core$Int16(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int$get_asInt32$R$frost$core$Int32(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int$get_asInt64$R$frost$core$Int64(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$Int$get_asUInt$R$frost$core$UInt(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Int$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Int$get_asUInt8$R$frost$core$UInt8(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Int$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Int$get_asUInt16$R$frost$core$UInt16(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Int$get_asUInt32$R$frost$core$UInt32(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Int$get_asUInt64$R$frost$core$UInt64(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Int$get_asReal32$R$frost$core$Real32(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Int$get_asReal64$R$frost$core$Real64(((frost$core$Int$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Int$cleanup$shim(frost$core$Object* p0) {
    frost$core$Int$cleanup(((frost$core$Int$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Int$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$core$Int$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int$_frost$collections$HashKey, { frost$core$Int$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int$_frost$collections$ListView, { frost$core$Int$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$Int$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int$_frost$core$Comparable, { frost$core$Int$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int$_frost$collections$Iterable, { frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$Int$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int$_frost$core$Equatable, { frost$core$Int$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$Int$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int$_frost$core$Formattable, { frost$core$Int$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$Int$class_type frost$core$Int$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int$_frost$collections$CollectionView, { frost$core$Int$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$$ADD$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int$$ADD$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$$SUB$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int$$SUB$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int$$SUB$R$frost$core$Int$shim, frost$core$Int$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$$MUL$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int$$MUL$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$$INTDIV$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int$$INTDIV$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$$REM$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int$$REM$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int$$BNOT$R$frost$core$Int$shim, frost$core$Int$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int$$SHL$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$SHR$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int$get_abs$R$frost$core$Int$shim, frost$core$Int$min$frost$core$Int8$R$frost$core$Int$shim, frost$core$Int$min$frost$core$Int16$R$frost$core$Int$shim, frost$core$Int$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$min$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$min$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int$min$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int$min$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int$max$frost$core$Int8$R$frost$core$Int$shim, frost$core$Int$max$frost$core$Int16$R$frost$core$Int$shim, frost$core$Int$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int$max$frost$core$Int$R$frost$core$Int$shim, frost$core$Int$max$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int$max$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int$max$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$get_count$R$frost$core$Int$shim, frost$core$Int$get_bitCount$R$frost$core$Int$shim, frost$core$Int$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int$get_hash$R$frost$core$Int$shim, frost$core$Int$get_asInt8$R$frost$core$Int8$shim, frost$core$Int$get_asInt16$R$frost$core$Int16$shim, frost$core$Int$get_asInt32$R$frost$core$Int32$shim, frost$core$Int$get_asInt64$R$frost$core$Int64$shim, frost$core$Int$get_asUInt$R$frost$core$UInt$shim, frost$core$Int$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int$get_asReal32$R$frost$core$Real32$shim, frost$core$Int$get_asReal64$R$frost$core$Real64$shim, frost$core$Int$format$frost$core$String$R$frost$core$String$shim, frost$core$Int$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, NULL, { frost$core$Int$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[17]; } frost$core$Int$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int$wrapper_frost$collections$HashKey, { frost$core$Int$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int$wrapper_frost$collections$ListView, { frost$core$Int$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$LE$frost$core$Int$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int$wrapper_frost$core$Comparable, { frost$core$Int$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int$wrapper_frost$collections$Iterable, { frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int$$NEQ$frost$core$Int$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int$wrapper_frost$core$Equatable, { frost$core$Int$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$Int$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int$wrapper_frost$core$Formattable, { frost$core$Int$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$Int$wrapperclass_type frost$core$Int$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int$wrapper_frost$collections$CollectionView, { frost$core$Int$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, 6698344523302557533, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x2e\x66\x72\x6f\x73\x74", 9, 8151747255441739626, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 88, 1674058797499360199, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x2e\x66\x72\x6f\x73\x74", 9, 8151747255441739626, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f", 115, 6848741039913327344, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x2e\x66\x72\x6f\x73\x74", 9, 8151747255441739626, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x49\x6e\x74\x2e\x66\x72\x6f\x73\x74", 9, 8151747255441739626, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$Int frost$core$Int$init$builtin_int(int64_t param0) {

frost$core$Int local0;
int64_t* _1;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:31
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Int frost$core$Int$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int local0;
int8_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:37
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int frost$core$Int$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Int local0;
int16_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:43
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int frost$core$Int$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int local0;
uint8_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:49
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int frost$core$Int$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Int local0;
uint16_t _1;
int64_t _2;
int64_t* _3;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:55
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int32 frost$core$Int$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:61
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:67
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int$$ADD$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:73
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$Int64 frost$core$Int$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:79
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int$$ADD$frost$core$UInt$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:85
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int32 frost$core$Int$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:91
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:97
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int$$SUB$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:103
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$Int64 frost$core$Int$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:109
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int$$SUB$frost$core$UInt$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:115
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int frost$core$Int$$SUB$R$frost$core$Int(frost$core$Int param0) {

int64_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int32 frost$core$Int$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:126
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:132
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int$$MUL$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:138
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$Int64 frost$core$Int$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:144
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int$$MUL$frost$core$UInt$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:150
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int32 frost$core$Int$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:156
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:162
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int$$INTDIV$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:168
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$Int64 frost$core$Int$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:174
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int$$INTDIV$frost$core$UInt$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:180
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int32 frost$core$Int$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:186
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:192
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int$$REM$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_1 = param0.value;
_2 = param1.value;
_3 = _1 % _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$Int64 frost$core$Int$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:204
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int$$REM$frost$core$UInt$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:210
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Real32 frost$core$Int$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int param0, frost$core$Int8 param1) {

int64_t _1;
float _2;
int8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:216
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$Int$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int param0, frost$core$Int16 param1) {

int64_t _1;
float _2;
int16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:222
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$Int$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
float _2;
int32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:228
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$Int$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
double _2;
int64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:234
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$Int$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int param0, frost$core$UInt8 param1) {

int64_t _1;
float _2;
uint8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:240
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$Int$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int param0, frost$core$UInt16 param1) {

int64_t _1;
float _2;
uint16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:246
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$Int$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
float _2;
uint32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:252
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$Int$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int param0, frost$core$UInt64 param1) {

int64_t _1;
double _2;
uint64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:258
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$Int$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int param0, frost$core$Real32 param1) {

int64_t _1;
float _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:264
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real64 frost$core$Int$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int param0, frost$core$Real64 param1) {

int64_t _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:270
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Int frost$core$Int$$BNOT$R$frost$core$Int(frost$core$Int param0) {

int64_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:275
_1 = param0.value;
_2 = ~_1;
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int32 frost$core$Int$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:281
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:287
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int$$BAND$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_1 = param0.value;
_2 = param1.value;
_3 = _1 & _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$UInt32 frost$core$Int$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:299
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$Int$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int param0, frost$core$UInt64 param1) {

int64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:305
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$Int$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:311
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$Int$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:317
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:323
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int$$BOR$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:329
_1 = param0.value;
_2 = param1.value;
_3 = _1 | _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$UInt32 frost$core$Int$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:335
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$Int$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int param0, frost$core$UInt64 param1) {

int64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:341
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$Int$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:347
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$Int$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:353
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:359
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:365
_1 = param0.value;
_2 = param1.value;
_3 = _1 ^ _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$UInt32 frost$core$Int$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:371
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$Int$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int param0, frost$core$UInt64 param1) {

int64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:377
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$Int$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:383
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int frost$core$Int$$SHL$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_1 = param0.value;
_2 = param1.value;
_3 = _1 << _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$Int frost$core$Int$$SHR$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
int64_t _3;
frost$core$Int _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:395
_1 = param0.value;
_2 = param1.value;
_3 = _1 >> _2;
_4 = (frost$core$Int) {_3};
return _4;

}
frost$core$Bit frost$core$Int$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:401
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:407
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:413
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:419
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt8 param1) {

int64_t _1;
int64_t _2;
uint8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:432
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt16 param1) {

int64_t _1;
int64_t _2;
uint16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:438
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:444
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:450
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:456
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:462
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:468
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:474
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:481
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt8 param1) {

int64_t _1;
int64_t _2;
uint8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:487
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt16 param1) {

int64_t _1;
int64_t _2;
uint16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:493
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:499
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:505
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:511
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:517
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:523
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:529
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$LT$frost$core$Int$R$frost$core$Bit(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:536
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt8 param1) {

int64_t _1;
int64_t _2;
uint8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:542
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt16 param1) {

int64_t _1;
int64_t _2;
uint16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:548
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:554
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:560
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:566
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:572
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:578
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:584
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$GT$frost$core$Int$R$frost$core$Bit(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:591
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt8 param1) {

int64_t _1;
int64_t _2;
uint8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:597
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt16 param1) {

int64_t _1;
int64_t _2;
uint16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:603
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:609
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:615
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:621
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:627
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:633
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:639
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$GE$frost$core$Int$R$frost$core$Bit(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:646
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt8 param1) {

int64_t _1;
int64_t _2;
uint8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:652
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt16 param1) {

int64_t _1;
int64_t _2;
uint16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:658
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:664
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:670
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:676
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:682
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:688
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:694
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int$$LE$frost$core$Int$R$frost$core$Bit(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:701
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt8 param1) {

int64_t _1;
int64_t _2;
uint8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:707
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt16 param1) {

int64_t _1;
int64_t _2;
uint16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:713
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:719
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:725
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Int frost$core$Int$get_abs$R$frost$core$Int(frost$core$Int param0) {

frost$core$Int _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _11;
int64_t _12;
frost$core$Int _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:731
_1 = (frost$core$Int) {0u};
_2 = param0.value;
_3 = _1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:732
// begin inline call to function frost.core.Int.-():frost.core.Int from Int.frost:732:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_11 = param0.value;
_12 = -_11;
_13 = (frost$core$Int) {_12};
return _13;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:734
return param0;

}
frost$core$Int frost$core$Int$min$frost$core$Int8$R$frost$core$Int(frost$core$Int param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int _10;
int8_t _13;
int64_t _14;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:740
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:741
_9 = param0.value;
_10 = (frost$core$Int) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:743
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int) {_14};
return _15;

}
frost$core$Int frost$core$Int$min$frost$core$Int16$R$frost$core$Int(frost$core$Int param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int _10;
int16_t _13;
int64_t _14;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:749
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:750
_9 = param0.value;
_10 = (frost$core$Int) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:752
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int) {_14};
return _15;

}
frost$core$Int32 frost$core$Int$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
int32_t _10;
frost$core$Int32 _11;
int32_t _14;
frost$core$Int32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:758
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:759
_9 = param0.value;
_10 = ((int32_t) _9);
_11 = (frost$core$Int32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:761
_14 = param1.value;
_15 = (frost$core$Int32) {_14};
return _15;

}
frost$core$Int64 frost$core$Int$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
int64_t _10;
frost$core$Int64 _11;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:767
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:768
_9 = param0.value;
_10 = ((int64_t) _9);
_11 = (frost$core$Int64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:770
_14 = param1.value;
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int frost$core$Int$min$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
int64_t _8;
frost$core$Int _9;
int64_t _12;
frost$core$Int _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:776
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:777
_8 = param0.value;
_9 = (frost$core$Int) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:779
_12 = param1.value;
_13 = (frost$core$Int) {_12};
return _13;

}
frost$core$Int64 frost$core$Int$min$frost$core$UInt8$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt8 param1) {

int64_t _1;
int64_t _2;
uint8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int64_t _10;
int64_t _11;
frost$core$Int64 _12;
uint8_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:785
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:786
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:788
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$Int$min$frost$core$UInt16$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt16 param1) {

int64_t _1;
int64_t _2;
uint16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int64_t _10;
int64_t _11;
frost$core$Int64 _12;
uint16_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:794
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:795
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:797
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$Int$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int64_t _10;
int64_t _11;
frost$core$Int64 _12;
uint32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:803
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:804
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:806
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$Int$min$frost$core$UInt$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int64_t _10;
int64_t _11;
frost$core$Int64 _12;
uint64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:813
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:814
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:816
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int frost$core$Int$max$frost$core$Int8$R$frost$core$Int(frost$core$Int param0, frost$core$Int8 param1) {

int64_t _1;
int8_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int _10;
int8_t _13;
int64_t _14;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:822
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:823
_9 = param0.value;
_10 = (frost$core$Int) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:825
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int) {_14};
return _15;

}
frost$core$Int frost$core$Int$max$frost$core$Int16$R$frost$core$Int(frost$core$Int param0, frost$core$Int16 param1) {

int64_t _1;
int16_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
frost$core$Int _10;
int16_t _13;
int64_t _14;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:831
_1 = param0.value;
_2 = param1.value;
_3 = ((int64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:832
_9 = param0.value;
_10 = (frost$core$Int) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:834
_13 = param1.value;
_14 = ((int64_t) _13);
_15 = (frost$core$Int) {_14};
return _15;

}
frost$core$Int32 frost$core$Int$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int param0, frost$core$Int32 param1) {

int64_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
int32_t _10;
frost$core$Int32 _11;
int32_t _14;
frost$core$Int32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:840
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:841
_9 = param0.value;
_10 = ((int32_t) _9);
_11 = (frost$core$Int32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:843
_14 = param1.value;
_15 = (frost$core$Int32) {_14};
return _15;

}
frost$core$Int64 frost$core$Int$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int param0, frost$core$Int64 param1) {

int64_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int64_t _9;
int64_t _10;
frost$core$Int64 _11;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:849
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:850
_9 = param0.value;
_10 = ((int64_t) _9);
_11 = (frost$core$Int64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:852
_14 = param1.value;
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int frost$core$Int$max$frost$core$Int$R$frost$core$Int(frost$core$Int param0, frost$core$Int param1) {

int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
int64_t _8;
frost$core$Int _9;
int64_t _12;
frost$core$Int _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:858
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:859
_8 = param0.value;
_9 = (frost$core$Int) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:861
_12 = param1.value;
_13 = (frost$core$Int) {_12};
return _13;

}
frost$core$Int64 frost$core$Int$max$frost$core$UInt8$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt8 param1) {

int64_t _1;
int64_t _2;
uint8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int64_t _10;
int64_t _11;
frost$core$Int64 _12;
uint8_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:867
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:868
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:870
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$Int$max$frost$core$UInt16$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt16 param1) {

int64_t _1;
int64_t _2;
uint16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int64_t _10;
int64_t _11;
frost$core$Int64 _12;
uint16_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:876
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:877
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:879
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$Int$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt32 param1) {

int64_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int64_t _10;
int64_t _11;
frost$core$Int64 _12;
uint32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:885
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:886
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:888
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$Int$max$frost$core$UInt$R$frost$core$Int64(frost$core$Int param0, frost$core$UInt param1) {

int64_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int64_t _10;
int64_t _11;
frost$core$Int64 _12;
uint64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:895
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:896
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:898
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$collections$ListView* frost$core$Int$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$core$Int$GT(frost$core$Range$LTfrost$core$Int$GT param0) {

org$frostlang$frost$IntList* _1;
frost$core$Int _2;
frost$core$Int _3;
frost$core$Int _4;
frost$core$Bit _5;
frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT _6;
frost$collections$ListView* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:903
_1 = (org$frostlang$frost$IntList*) frostObjectAlloc(sizeof(org$frostlang$frost$IntList), (frost$core$Class*) &org$frostlang$frost$IntList$class);
_2 = param0.min;
_3 = param0.max;
_4 = (frost$core$Int) {1u};
_5 = param0.inclusive;
_6 = frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Int$frost$core$Bit(_2, _3, _4, _5);
org$frostlang$frost$IntList$init$frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT(_1, _6);
_8 = ((frost$collections$ListView*) _1);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$collections$ListView* frost$core$Int$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$core$Int$GT(frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT param0) {

org$frostlang$frost$IntList* _1;
frost$collections$ListView* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:908
_1 = (org$frostlang$frost$IntList*) frostObjectAlloc(sizeof(org$frostlang$frost$IntList), (frost$core$Class*) &org$frostlang$frost$IntList$class);
org$frostlang$frost$IntList$init$frost$core$SteppedRange$LTfrost$core$Int$Cfrost$core$Int$GT(_1, param0);
_3 = ((frost$collections$ListView*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Bit frost$core$Int$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$Int param0, frost$core$Int param1) {

frost$core$Int _0;
int64_t _1;
int64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
frost$collections$CollectionView* _7;
$fn4 _8;
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
int64_t _32;
int64_t _33;
int64_t _34;
frost$core$Int _35;
frost$core$Int _37;
int64_t _38;
int64_t _39;
bool _40;
frost$core$Bit _41;
_0 = (frost$core$Int) {0u};
_1 = param1.value;
_2 = _0.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block3; else goto block2;
block3:;
frost$core$Int$wrapper* $tmp5;
$tmp5 = (frost$core$Int$wrapper*) frostObjectAlloc(sizeof(frost$core$Int$wrapper), (frost$core$Class*) &frost$core$Int$wrapperclass);
$tmp5->value = param0;
_7 = ((frost$collections$CollectionView*) $tmp5);
ITable* $tmp6 = _7->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp6 = $tmp6->next;
}
_8 = $tmp6->methods[0];
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
_18 = (frost$core$Int) {913u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _18, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:914
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from Int.frost:914:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_25 = _22.value;
_26 = param1.value;
_27 = _25 << _26;
_28 = (frost$core$Int) {_27};
// begin inline call to function frost.core.Int.&&(other:frost.core.Int):frost.core.Int from Int.frost:914:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:293
_32 = param0.value;
_33 = _28.value;
_34 = _32 & _33;
_35 = (frost$core$Int) {_34};
_37 = (frost$core$Int) {0u};
_38 = _35.value;
_39 = _37.value;
_40 = _38 != _39;
_41 = (frost$core$Bit) {_40};
return _41;

}
frost$core$Int frost$core$Int$get_count$R$frost$core$Int(frost$core$Int param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:920
_1 = (frost$core$Int) {32u};
return _1;

}
frost$collections$Iterator* frost$core$Int$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int param0) {

org$frostlang$frost$IntBitIterator* _1;
int64_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$collections$Iterator* _10;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:930
_1 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(sizeof(org$frostlang$frost$IntBitIterator), (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Int.frost:930:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_4 = param0.value;
_5 = ((uint64_t) _4);
_6 = (frost$core$UInt64) {_5};
_8 = (frost$core$UInt64) {2147483648u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(_1, _6, _8);
_10 = ((frost$collections$Iterator*) _1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return _10;

}
frost$core$Int frost$core$Int$get_hash$R$frost$core$Int(frost$core$Int param0) {

int64_t _1;
frost$core$Int _2;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:935
_1 = param0.value;
_2 = (frost$core$Int) {_1};
return _2;

}
frost$core$Int$nullable frost$core$Int$parse$frost$core$String$frost$core$Int$R$frost$core$Int$Q(frost$core$String* param0, frost$core$Int param1) {

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
frost$core$Int _53;
int64_t _57;
int64_t _58;
frost$core$Int _59;
frost$core$Int$nullable _61;
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
frost$core$Int _89;
frost$core$Int$nullable _91;
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
_14 = (frost$core$Int) {941u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _14, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:942
_18 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s11);
_19 = _18.value;
if (_19) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:943
_22 = (frost$core$Int) {1u};
_23 = ((frost$core$Int$nullable) { _22, true });
_24 = (frost$core$Bit) {false};
_25 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_23, ((frost$core$Int$nullable) { .nonnull = false }), _24);
_26 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(param0, _25);
_27 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(_26, param1);
*(&local0) = _27;
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:944
_32 = *(&local0);
_33 = !_32.nonnull;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:945
return ((frost$core$Int$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:947
_40 = *(&local0);
_41 = _40.nonnull;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block9; else goto block10;
block10:;
_45 = (frost$core$Int) {947u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _45, &$s13);
abort(); // unreachable
block9:;
_48 = ((frost$core$UInt64) _40.value);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Int.frost:947:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_51 = _48.value;
_52 = ((int64_t) _51);
_53 = (frost$core$Int) {_52};
// begin inline call to function frost.core.Int.-():frost.core.Int from Int.frost:947:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_57 = _53.value;
_58 = -_57;
_59 = (frost$core$Int) {_58};
_61 = ((frost$core$Int$nullable) { _59, true });
return _61;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:950
_65 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = _65;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:951
_68 = *(&local1);
_69 = !_68.nonnull;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:952
return ((frost$core$Int$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:954
_76 = *(&local1);
_77 = _76.nonnull;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block15; else goto block16;
block16:;
_81 = (frost$core$Int) {954u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _81, &$s15);
abort(); // unreachable
block15:;
_84 = ((frost$core$UInt64) _76.value);
// begin inline call to function frost.core.UInt64.get_asInt():frost.core.Int from Int.frost:954:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
_87 = _84.value;
_88 = ((int64_t) _87);
_89 = (frost$core$Int) {_88};
_91 = ((frost$core$Int$nullable) { _89, true });
return _91;
block5:;
goto block18;
block18:;

}
frost$core$Int8 frost$core$Int$get_asInt8$R$frost$core$Int8(frost$core$Int param0) {

int64_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:961
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$Int$get_asInt16$R$frost$core$Int16(frost$core$Int param0) {

int64_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:967
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$Int$get_asInt32$R$frost$core$Int32(frost$core$Int param0) {

int64_t _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:973
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$Int$get_asInt64$R$frost$core$Int64(frost$core$Int param0) {

int64_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:979
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$UInt frost$core$Int$get_asUInt$R$frost$core$UInt(frost$core$Int param0) {

int64_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:985
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$UInt8 frost$core$Int$get_asUInt8$R$frost$core$UInt8(frost$core$Int param0) {

int64_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:991
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$Int$get_asUInt16$R$frost$core$UInt16(frost$core$Int param0) {

int64_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:997
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$Int$get_asUInt32$R$frost$core$UInt32(frost$core$Int param0) {

int64_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1003
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$Int$get_asUInt64$R$frost$core$UInt64(frost$core$Int param0) {

int64_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Real32 frost$core$Int$get_asReal32$R$frost$core$Real32(frost$core$Int param0) {

int64_t _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1015
_1 = param0.value;
_2 = ((float) _1);
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real64 frost$core$Int$get_asReal64$R$frost$core$Real64(frost$core$Int param0) {

int64_t _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1021
_1 = param0.value;
_2 = ((double) _1);
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$String* frost$core$Int$get_asString$R$frost$core$String(frost$core$Int param0) {

frost$core$Int local0;
frost$unsafe$Pointer local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$core$Int local4;
frost$core$Int local5;
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
frost$core$Int _31;
frost$core$Int _32;
int64_t _33;
int64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$unsafe$Pointer _42;
int64_t _43;
frost$core$Int _44;
frost$core$Int64 _45;
frost$core$Int _46;
frost$core$Int _47;
int64_t _50;
int64_t _51;
int64_t _52;
frost$core$Int _53;
frost$core$Int _55;
int64_t _56;
int64_t _57;
int64_t _58;
frost$core$Int _59;
int64_t _62;
uint8_t _63;
frost$core$UInt8 _64;
frost$core$Char8 _66;
int64_t _67;
frost$core$Int _70;
frost$core$Int _71;
int64_t _72;
int64_t _73;
int64_t _74;
frost$core$Int _75;
frost$core$Int _78;
frost$core$Int _79;
int64_t _80;
int64_t _81;
int64_t _82;
frost$core$Int _83;
frost$core$Int _86;
frost$core$Int _87;
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
frost$core$Int _111;
frost$core$Int _112;
frost$core$Int _113;
int64_t _116;
int64_t _117;
int64_t _118;
frost$core$Int _119;
int64_t _121;
int64_t _122;
int64_t _123;
frost$core$Int _124;
int64_t _127;
uint8_t _128;
frost$core$UInt8 _129;
frost$core$Char8 _131;
int64_t _132;
frost$core$Int _135;
frost$core$Int _136;
int64_t _137;
int64_t _138;
int64_t _139;
frost$core$Int _140;
frost$core$Int _143;
frost$core$Int _144;
int64_t _145;
int64_t _146;
int64_t _147;
frost$core$Int _148;
frost$core$Int _151;
frost$core$Int _152;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1027
_1 = (frost$core$Int) {20u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1028
_4 = *(&local0);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from Int.frost:1028:42
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1029
_21 = *(&local0);
_22 = (frost$core$Int) {1u};
_23 = _21.value;
_24 = _22.value;
_25 = _23 - _24;
_26 = (frost$core$Int) {_25};
*(&local4) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1030
*(&local5) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1031
_31 = *(&local5);
_32 = (frost$core$Int) {0u};
_33 = _31.value;
_34 = _32.value;
_35 = _33 >= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1032
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1033
_42 = *(&local3);
_43 = _42.value;
_44 = *(&local4);
_45 = frost$core$Int64$init$frost$core$Int(_44);
_46 = *(&local5);
_47 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Int.frost:1033:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_50 = _46.value;
_51 = _47.value;
_52 = _50 % _51;
_53 = (frost$core$Int) {_52};
_55 = (frost$core$Int) {48u};
_56 = _53.value;
_57 = _55.value;
_58 = _56 + _57;
_59 = (frost$core$Int) {_58};
// begin inline call to function frost.core.Int.get_asUInt8():frost.core.UInt8 from Int.frost:1033:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:991
_62 = _59.value;
_63 = ((uint8_t) _62);
_64 = (frost$core$UInt8) {_63};
_66 = frost$core$Char8$init$frost$core$UInt8(_64);
_67 = _45.value;
((frost$core$Char8*)_43)[_67] = _66;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1034
_70 = *(&local5);
_71 = (frost$core$Int) {10u};
_72 = _70.value;
_73 = _71.value;
_74 = _72 / _73;
_75 = (frost$core$Int) {_74};
*(&local5) = _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1035
_78 = *(&local4);
_79 = (frost$core$Int) {1u};
_80 = _78.value;
_81 = _79.value;
_82 = _80 - _81;
_83 = (frost$core$Int) {_82};
*(&local4) = _83;
_86 = *(&local5);
_87 = (frost$core$Int) {0u};
_88 = _86.value;
_89 = _87.value;
_90 = _88 > _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block6; else goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1038
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1041
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1042
_107 = *(&local3);
_108 = _107.value;
_109 = *(&local4);
_110 = frost$core$Int64$init$frost$core$Int(_109);
_111 = (frost$core$Int) {48u};
_112 = *(&local5);
_113 = (frost$core$Int) {10u};
// begin inline call to function frost.core.Int.%(other:frost.core.Int):frost.core.Int from Int.frost:1042:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:198
_116 = _112.value;
_117 = _113.value;
_118 = _116 % _117;
_119 = (frost$core$Int) {_118};
_121 = _111.value;
_122 = _119.value;
_123 = _121 - _122;
_124 = (frost$core$Int) {_123};
// begin inline call to function frost.core.Int.get_asUInt8():frost.core.UInt8 from Int.frost:1042:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:991
_127 = _124.value;
_128 = ((uint8_t) _127);
_129 = (frost$core$UInt8) {_128};
_131 = frost$core$Char8$init$frost$core$UInt8(_129);
_132 = _110.value;
((frost$core$Char8*)_108)[_132] = _131;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1043
_135 = *(&local5);
_136 = (frost$core$Int) {10u};
_137 = _135.value;
_138 = _136.value;
_139 = _137 / _138;
_140 = (frost$core$Int) {_139};
*(&local5) = _140;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1044
_143 = *(&local4);
_144 = (frost$core$Int) {1u};
_145 = _143.value;
_146 = _144.value;
_147 = _145 - _146;
_148 = (frost$core$Int) {_147};
*(&local4) = _148;
_151 = *(&local5);
_152 = (frost$core$Int) {0u};
_153 = _151.value;
_154 = _152.value;
_155 = _153 < _154;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block11; else goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1047
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1049
_170 = *(&local0);
_171 = *(&local4);
_172 = _170.value;
_173 = _171.value;
_174 = _172 - _173;
_175 = (frost$core$Int) {_174};
*(&local6) = _175;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1050
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1051
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1053
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
frost$core$String* frost$core$Int$format$frost$core$String$R$frost$core$String(frost$core$Int param0, frost$core$String* param1) {

frost$core$Int local0;
int64_t _1;
bool _2;
frost$core$Bit _3;
frost$core$Int _6;
int64_t _7;
int64_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
int64_t _16;
int64_t _17;
frost$core$Int _18;
frost$core$Int _25;
int64_t _28;
uint64_t _29;
frost$core$UInt64 _30;
frost$core$UInt64 _32;
frost$core$String* _33;
frost$core$Object* _34;
frost$core$Object* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1059
_1 = param0.value;
_2 = _1 < 0u;
_3 = (frost$core$Bit) {_2};
// begin inline call to function frost.core.Int.get_abs():frost.core.Int from Int.frost:1059:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:731
_6 = (frost$core$Int) {0u};
_7 = param0.value;
_8 = _6.value;
_9 = _7 < _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:732
// begin inline call to function frost.core.Int.-():frost.core.Int from Int.frost:732:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:120
_16 = param0.value;
_17 = -_16;
_18 = (frost$core$Int) {_17};
*(&local0) = _18;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:734
*(&local0) = param0;
goto block1;
block1:;
_25 = *(&local0);
// begin inline call to function frost.core.Int.get_asUInt64():frost.core.UInt64 from Int.frost:1059:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:1009
_28 = _25.value;
_29 = ((uint64_t) _28);
_30 = (frost$core$UInt64) {_29};
_32 = (frost$core$UInt64) {4294967295u};
_33 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_3, _30, _32, param1);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_36);
return _33;

}
void frost$core$Int$cleanup(frost$core$Int param0) {

return;

}

