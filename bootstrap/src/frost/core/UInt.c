#include "frost/core/UInt.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Equatable.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int64.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/Range.LTfrost/core/UInt.GT.h"
#include "org/frostlang/frost/UIntList.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt.Cfrost/core/UInt.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/unsafe/Pointer.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, ((frost$core$UInt$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, ((frost$core$UInt$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, ((frost$core$UInt$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, ((frost$core$UInt$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$UInt$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt$format$frost$core$String$R$frost$core$String(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt$get_count$R$frost$core$Int(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, ((frost$core$UInt$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, ((frost$core$UInt$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt$get_hash$R$frost$core$Int(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt$get_asString$R$frost$core$String(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$ADD$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt$$ADD$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$ADD$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt$$ADD$frost$core$Int$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$$ADD$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$ADD$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$ADD$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$SUB$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt$$SUB$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$SUB$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt$$SUB$frost$core$Int$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$$SUB$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$SUB$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$SUB$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$SUB$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$UInt$$SUB$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$MUL$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt$$MUL$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$MUL$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt$$MUL$frost$core$Int$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$$MUL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$MUL$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$MUL$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt$$INTDIV$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$INTDIV$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt$$INTDIV$frost$core$Int$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$INTDIV$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$REM$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt$$REM$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$REM$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt$$REM$frost$core$Int$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$$REM$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$$REM$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$REM$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$REM$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$UInt$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$UInt$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$UInt$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$UInt$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$UInt$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$UInt$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$UInt$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$BNOT$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$UInt$$BNOT$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt$$BAND$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt$$BAND$frost$core$Int$R$frost$core$Int(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$BAND$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$BAND$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt$$BOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt$$BOR$frost$core$Int$R$frost$core$Int(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$BOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$BOR$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt$$BXOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt$$BXOR$frost$core$Int$R$frost$core$Int(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$BXOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$BXOR$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$SHL$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$SHL$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$$SHR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$$SHR$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$EQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt$$EQ$frost$core$Int$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt$$NEQ$frost$core$Int$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt$$LT$frost$core$Int$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt$$GT$frost$core$Int$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt$$GE$frost$core$Int$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt$$LE$frost$core$Int$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$min$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$UInt$min$frost$core$Int8$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$min$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$UInt$min$frost$core$Int16$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$min$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt$min$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$min$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt$min$frost$core$Int$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$min$frost$core$UInt8$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt result = frost$core$UInt$min$frost$core$UInt8$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$min$frost$core$UInt16$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt result = frost$core$UInt$min$frost$core$UInt16$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$min$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$min$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$min$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$min$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$max$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$UInt$max$frost$core$Int8$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$max$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$UInt$max$frost$core$Int16$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$max$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt$max$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$max$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt$max$frost$core$Int$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$max$frost$core$UInt8$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt result = frost$core$UInt$max$frost$core$UInt8$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$max$frost$core$UInt16$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt result = frost$core$UInt$max$frost$core$UInt16$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$max$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt$max$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt$max$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt$max$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$UInt$get_bitCount$R$frost$core$UInt$shim(frost$core$UInt* sret, frost$core$Object* p0) {
    frost$core$UInt$get_bitCount$R$frost$core$UInt(sret, ((frost$core$UInt$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$UInt$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt$get_asInt$R$frost$core$Int(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$UInt$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt$get_asInt8$R$frost$core$Int8(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt$get_asInt16$R$frost$core$Int16(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt$get_asInt32$R$frost$core$Int32(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt$get_asInt64$R$frost$core$Int64(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt$get_asUInt8$R$frost$core$UInt8(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt$get_asUInt32$R$frost$core$UInt32(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt$get_asUInt64$R$frost$core$UInt64(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt$get_asReal32$R$frost$core$Real32(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt$get_asReal64$R$frost$core$Real64(((frost$core$UInt$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt$cleanup(((frost$core$UInt$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$UInt$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$UInt$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$core$UInt$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt$_frost$core$Comparable, { frost$core$UInt$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt$_frost$collections$ListView, { frost$core$UInt$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt$_frost$collections$Iterable, { frost$core$UInt$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$UInt$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt$_frost$core$Formattable, { frost$core$UInt$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt$_frost$collections$CollectionView, { frost$core$UInt$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$UInt$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt$_frost$core$Equatable, { frost$core$UInt$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
frost$core$UInt$class_type frost$core$UInt$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt$_frost$collections$HashKey, { frost$core$UInt$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt$$ADD$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$$ADD$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt$$SUB$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$$SUB$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$SUB$R$frost$core$UInt$shim, frost$core$UInt$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt$$MUL$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$$MUL$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt$$INTDIV$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt$$REM$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$$REM$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt$$BNOT$R$frost$core$UInt$shim, frost$core$UInt$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$SHL$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$SHR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt$min$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt$min$frost$core$UInt8$R$frost$core$UInt$shim, frost$core$UInt$min$frost$core$UInt16$R$frost$core$UInt$shim, frost$core$UInt$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$min$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt$max$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt$max$frost$core$UInt8$R$frost$core$UInt$shim, frost$core$UInt$max$frost$core$UInt16$R$frost$core$UInt$shim, frost$core$UInt$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt$max$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt$get_count$R$frost$core$Int$shim, frost$core$UInt$get_bitCount$R$frost$core$UInt$shim, frost$core$UInt$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt$get_hash$R$frost$core$Int$shim, frost$core$UInt$get_asInt$R$frost$core$Int$shim, frost$core$UInt$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$UInt$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$LE$frost$core$UInt$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[17]; } frost$core$UInt$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt$wrapper_frost$core$Comparable, { frost$core$UInt$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt$wrapper_frost$collections$ListView, { frost$core$UInt$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt$wrapper_frost$collections$Iterable, { frost$core$UInt$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$UInt$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt$wrapper_frost$core$Formattable, { frost$core$UInt$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt$wrapper_frost$collections$CollectionView, { frost$core$UInt$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt$$NEQ$frost$core$UInt$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt$wrapper_frost$core$Equatable, { frost$core$UInt$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s3;
frost$core$UInt$wrapperclass_type frost$core$UInt$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt$wrapper_frost$collections$HashKey, { frost$core$UInt$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, -8998979431191354836, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x49\x6e\x74\x2e\x66\x72\x6f\x73\x74", 10, 4510174160346722501, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 89, 2173511581317468028, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x49\x6e\x74\x2e\x66\x72\x6f\x73\x74", 10, 4510174160346722501, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x3f", 117, -3400824469154348684, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x49\x6e\x74\x2e\x66\x72\x6f\x73\x74", 10, 4510174160346722501, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$UInt frost$core$UInt$init$builtin_uint(uint64_t param0) {

frost$core$UInt local0;
uint64_t* _1;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:30
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$UInt frost$core$UInt$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt local0;
uint8_t _1;
uint64_t _2;
uint64_t* _3;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:36
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$UInt frost$core$UInt$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt local0;
uint16_t _1;
uint64_t _2;
uint64_t* _3;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:42
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int64 frost$core$UInt$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:48
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt$$ADD$frost$core$Int$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:54
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:60
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:66
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt$$ADD$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:72
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$Int64 frost$core$UInt$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:78
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt$$SUB$frost$core$Int$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:84
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:90
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:96
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt$$SUB$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:102
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$UInt frost$core$UInt$$SUB$R$frost$core$UInt(frost$core$UInt param0) {

uint64_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:107
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$Int64 frost$core$UInt$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:113
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt$$MUL$frost$core$Int$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:119
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:125
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:131
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt$$MUL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:137
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$Int64 frost$core$UInt$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:143
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt$$INTDIV$frost$core$Int$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:149
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:155
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:161
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt$$INTDIV$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:167
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$Int64 frost$core$UInt$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:173
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt$$REM$frost$core$Int$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:179
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:185
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:191
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt$$REM$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:197
_1 = param0.value;
_2 = param1.value;
_3 = _1 % _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$Real32 frost$core$UInt$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt param0, frost$core$Int8 param1) {

uint64_t _1;
float _2;
int8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:203
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt param0, frost$core$Int16 param1) {

uint64_t _1;
float _2;
int16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:209
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
float _2;
int32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:215
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt param0, frost$core$Int64 param1) {

uint64_t _1;
double _2;
int64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:221
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt param0, frost$core$UInt8 param1) {

uint64_t _1;
float _2;
uint8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:227
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt param0, frost$core$UInt16 param1) {

uint64_t _1;
float _2;
uint16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:233
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
float _2;
uint32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:239
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
double _2;
uint64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:245
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt param0, frost$core$Real32 param1) {

uint64_t _1;
float _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:251
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real64 frost$core$UInt$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt param0, frost$core$Real64 param1) {

uint64_t _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:257
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt$$BNOT$R$frost$core$UInt(frost$core$UInt param0) {

uint64_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:262
_1 = param0.value;
_2 = ~_1;
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:268
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int64 param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:274
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt$$BAND$frost$core$Int$R$frost$core$Int(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:280
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:286
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:292
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:298
_1 = param0.value;
_2 = param1.value;
_3 = _1 & _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$Int32 frost$core$UInt$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:304
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int64 param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:310
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt$$BOR$frost$core$Int$R$frost$core$Int(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:316
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:322
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:328
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:334
_1 = param0.value;
_2 = param1.value;
_3 = _1 | _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$Int32 frost$core$UInt$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:340
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int64 param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:346
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:352
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:358
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:364
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:370
_1 = param0.value;
_2 = param1.value;
_3 = _1 ^ _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$UInt frost$core$UInt$$SHL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:376
_1 = param0.value;
_2 = param1.value;
_3 = _1 << _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$UInt frost$core$UInt$$SHR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
frost$core$UInt _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:382
_1 = param0.value;
_2 = param1.value;
_3 = _1 >> _2;
_4 = (frost$core$UInt) {_3};
return _4;

}
frost$core$Bit frost$core$UInt$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int8 param1) {

uint64_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:388
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int16 param1) {

uint64_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:394
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:400
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:406
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:412
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:418
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:424
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:430
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:437
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int8 param1) {

uint64_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:443
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int16 param1) {

uint64_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:449
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:455
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:461
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:467
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:473
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:479
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:485
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:492
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int8 param1) {

uint64_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:498
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int16 param1) {

uint64_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:504
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:510
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$LT$frost$core$Int$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:516
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:522
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:528
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:534
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:540
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:547
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int8 param1) {

uint64_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:553
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int16 param1) {

uint64_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:559
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:565
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$GT$frost$core$Int$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:571
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:577
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:583
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:589
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:595
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:602
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int8 param1) {

uint64_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:608
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int16 param1) {

uint64_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:614
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:620
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$GE$frost$core$Int$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:626
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:632
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:638
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:644
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:650
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:657
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int8 param1) {

uint64_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:663
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int16 param1) {

uint64_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:669
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:675
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$LE$frost$core$Int$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:681
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:687
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:693
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:699
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:705
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:712
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Int64 frost$core$UInt$min$frost$core$Int8$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int8 param1) {

uint64_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint64_t _10;
int64_t _11;
frost$core$Int64 _12;
int8_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:718
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:719
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:721
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt$min$frost$core$Int16$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int16 param1) {

uint64_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint64_t _10;
int64_t _11;
frost$core$Int64 _12;
int16_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:727
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:728
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:730
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint64_t _10;
int64_t _11;
frost$core$Int64 _12;
int32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:736
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:737
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:739
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt$min$frost$core$Int$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint64_t _10;
int64_t _11;
frost$core$Int64 _12;
int64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:746
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:747
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:749
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$UInt frost$core$UInt$min$frost$core$UInt8$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt _10;
uint8_t _13;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:755
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:756
_9 = param0.value;
_10 = (frost$core$UInt) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:758
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$core$UInt frost$core$UInt$min$frost$core$UInt16$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt _10;
uint16_t _13;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:764
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:765
_9 = param0.value;
_10 = (frost$core$UInt) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:767
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$core$UInt32 frost$core$UInt$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
uint32_t _10;
frost$core$UInt32 _11;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:773
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:774
_9 = param0.value;
_10 = ((uint32_t) _9);
_11 = (frost$core$UInt32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:776
_14 = param1.value;
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
uint64_t _10;
frost$core$UInt64 _11;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:782
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:783
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:785
_14 = param1.value;
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt frost$core$UInt$min$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint64_t _8;
frost$core$UInt _9;
uint64_t _12;
frost$core$UInt _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:791
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:792
_8 = param0.value;
_9 = (frost$core$UInt) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:794
_12 = param1.value;
_13 = (frost$core$UInt) {_12};
return _13;

}
frost$core$Int64 frost$core$UInt$max$frost$core$Int8$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int8 param1) {

uint64_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint64_t _10;
int64_t _11;
frost$core$Int64 _12;
int8_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:800
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:801
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:803
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt$max$frost$core$Int16$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int16 param1) {

uint64_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint64_t _10;
int64_t _11;
frost$core$Int64 _12;
int16_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:809
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:810
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:812
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int32 param1) {

uint64_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint64_t _10;
int64_t _11;
frost$core$Int64 _12;
int32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:818
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:819
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:821
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt$max$frost$core$Int$R$frost$core$Int64(frost$core$UInt param0, frost$core$Int param1) {

uint64_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint64_t _10;
int64_t _11;
frost$core$Int64 _12;
int64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:828
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:829
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:831
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$UInt frost$core$UInt$max$frost$core$UInt8$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt8 param1) {

uint64_t _1;
uint8_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt _10;
uint8_t _13;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:837
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:838
_9 = param0.value;
_10 = (frost$core$UInt) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:840
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$core$UInt frost$core$UInt$max$frost$core$UInt16$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt16 param1) {

uint64_t _1;
uint16_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
frost$core$UInt _10;
uint16_t _13;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:846
_1 = param0.value;
_2 = param1.value;
_3 = ((uint64_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:847
_9 = param0.value;
_10 = (frost$core$UInt) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:849
_13 = param1.value;
_14 = ((uint64_t) _13);
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$core$UInt32 frost$core$UInt$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt param0, frost$core$UInt32 param1) {

uint64_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
uint32_t _10;
frost$core$UInt32 _11;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:855
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:856
_9 = param0.value;
_10 = ((uint32_t) _9);
_11 = (frost$core$UInt32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:858
_14 = param1.value;
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt param0, frost$core$UInt64 param1) {

uint64_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint64_t _9;
uint64_t _10;
frost$core$UInt64 _11;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:864
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:865
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:867
_14 = param1.value;
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt frost$core$UInt$max$frost$core$UInt$R$frost$core$UInt(frost$core$UInt param0, frost$core$UInt param1) {

uint64_t _1;
uint64_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint64_t _8;
frost$core$UInt _9;
uint64_t _12;
frost$core$UInt _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:873
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:874
_8 = param0.value;
_9 = (frost$core$UInt) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:876
_12 = param1.value;
_13 = (frost$core$UInt) {_12};
return _13;

}
frost$collections$ListView* frost$core$UInt$$IDX$frost$core$Range$LTfrost$core$UInt$GT$R$frost$collections$ListView$LTfrost$core$UInt$GT(frost$core$Range$LTfrost$core$UInt$GT param0) {

org$frostlang$frost$UIntList* _1;
frost$core$UInt _2;
frost$core$UInt _3;
frost$core$UInt _4;
frost$core$Bit _5;
frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT _6;
frost$collections$ListView* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:881
_1 = (org$frostlang$frost$UIntList*) frostObjectAlloc(sizeof(org$frostlang$frost$UIntList), (frost$core$Class*) &org$frostlang$frost$UIntList$class);
_2 = param0.min;
_3 = param0.max;
_4 = (frost$core$UInt) {1u};
_5 = param0.inclusive;
_6 = frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$init$frost$core$UInt$frost$core$UInt$frost$core$UInt$frost$core$Bit(_2, _3, _4, _5);
org$frostlang$frost$UIntList$init$frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT(_1, _6);
_8 = ((frost$collections$ListView*) _1);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$collections$ListView* frost$core$UInt$$IDX$frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT$R$frost$collections$ListView$LTfrost$core$UInt$GT(frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT param0) {

org$frostlang$frost$UIntList* _1;
frost$collections$ListView* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:886
_1 = (org$frostlang$frost$UIntList*) frostObjectAlloc(sizeof(org$frostlang$frost$UIntList), (frost$core$Class*) &org$frostlang$frost$UIntList$class);
org$frostlang$frost$UIntList$init$frost$core$SteppedRange$LTfrost$core$UInt$Cfrost$core$UInt$GT(_1, param0);
_3 = ((frost$collections$ListView*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Bit frost$core$UInt$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt param0, frost$core$Int param1) {

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
uint64_t _32;
int64_t _33;
int64_t _34;
int64_t _35;
frost$core$Int _36;
frost$core$Int _38;
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
frost$core$UInt$wrapper* $tmp5;
$tmp5 = (frost$core$UInt$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt$wrapper), (frost$core$Class*) &frost$core$UInt$wrapperclass);
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
_18 = (frost$core$Int) {891u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _18, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:892
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt.frost:892:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_25 = _22.value;
_26 = param1.value;
_27 = _25 << _26;
_28 = (frost$core$Int) {_27};
// begin inline call to function frost.core.UInt.&&(other:frost.core.Int):frost.core.Int from UInt.frost:892:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:280
_32 = param0.value;
_33 = ((int64_t) _32);
_34 = _28.value;
_35 = _33 & _34;
_36 = (frost$core$Int) {_35};
_38 = (frost$core$Int) {0u};
_39 = _36.value;
_40 = _38.value;
_41 = _39 != _40;
_42 = (frost$core$Bit) {_41};
return _42;

}
frost$core$Int frost$core$UInt$get_count$R$frost$core$Int(frost$core$UInt param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:898
_1 = (frost$core$Int) {32u};
return _1;

}
frost$collections$Iterator* frost$core$UInt$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt param0) {

org$frostlang$frost$IntBitIterator* _1;
uint64_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$collections$Iterator* _10;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:908
_1 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(sizeof(org$frostlang$frost$IntBitIterator), (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.UInt.get_asUInt64():frost.core.UInt64 from UInt.frost:908:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:978
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
frost$core$Int frost$core$UInt$get_hash$R$frost$core$Int(frost$core$UInt param0) {

uint64_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:913
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$UInt$nullable frost$core$UInt$parse$frost$core$String$frost$core$Int$R$frost$core$UInt$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
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
frost$core$UInt64$nullable _18;
frost$core$UInt64$nullable _21;
bool _22;
frost$core$Bit _23;
bool _24;
frost$core$UInt64$nullable _29;
bool _30;
frost$core$Bit _31;
bool _32;
frost$core$Int _34;
frost$core$UInt64 _37;
uint64_t _40;
uint64_t _41;
frost$core$UInt _42;
frost$core$UInt$nullable _44;
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
_14 = (frost$core$Int) {919u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _14, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:920
_18 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:921
_21 = *(&local0);
_22 = !_21.nonnull;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:922
return ((frost$core$UInt$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:924
_29 = *(&local0);
_30 = _29.nonnull;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block6; else goto block7;
block7:;
_34 = (frost$core$Int) {924u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _34, &$s12);
abort(); // unreachable
block6:;
_37 = ((frost$core$UInt64) _29.value);
// begin inline call to function frost.core.UInt64.get_asUInt():frost.core.UInt from UInt.frost:924:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:574
_40 = _37.value;
_41 = ((uint64_t) _40);
_42 = (frost$core$UInt) {_41};
_44 = ((frost$core$UInt$nullable) { _42, true });
return _44;

}
frost$core$Int frost$core$UInt$get_asInt$R$frost$core$Int(frost$core$UInt param0) {

uint64_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:930
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8 frost$core$UInt$get_asInt8$R$frost$core$Int8(frost$core$UInt param0) {

uint64_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:936
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$UInt$get_asInt16$R$frost$core$Int16(frost$core$UInt param0) {

uint64_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:942
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt$get_asInt32$R$frost$core$Int32(frost$core$UInt param0) {

uint64_t _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:948
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$UInt$get_asInt64$R$frost$core$Int64(frost$core$UInt param0) {

uint64_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:954
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$UInt8 frost$core$UInt$get_asUInt8$R$frost$core$UInt8(frost$core$UInt param0) {

uint64_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:960
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$UInt$get_asUInt16$R$frost$core$UInt16(frost$core$UInt param0) {

uint64_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:966
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$UInt$get_asUInt32$R$frost$core$UInt32(frost$core$UInt param0) {

uint64_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:972
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$UInt$get_asUInt64$R$frost$core$UInt64(frost$core$UInt param0) {

uint64_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:978
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Real32 frost$core$UInt$get_asReal32$R$frost$core$Real32(frost$core$UInt param0) {

uint64_t _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:984
_1 = param0.value;
_2 = ((float) _1);
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real64 frost$core$UInt$get_asReal64$R$frost$core$Real64(frost$core$UInt param0) {

uint64_t _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:990
_1 = param0.value;
_2 = ((double) _1);
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$String* frost$core$UInt$get_asString$R$frost$core$String(frost$core$UInt param0) {

frost$core$Int local0;
frost$unsafe$Pointer local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$core$Int local4;
frost$core$UInt local5;
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
frost$core$UInt _31;
frost$core$UInt _32;
uint64_t _33;
uint64_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$unsafe$Pointer _42;
int64_t _43;
frost$core$Int _44;
frost$core$Int64 _45;
frost$core$UInt _46;
frost$core$UInt _47;
uint64_t _50;
uint64_t _51;
uint64_t _52;
frost$core$UInt _53;
frost$core$UInt _55;
uint64_t _56;
uint64_t _57;
uint64_t _58;
frost$core$UInt _59;
uint64_t _62;
uint8_t _63;
frost$core$UInt8 _64;
frost$core$Char8 _66;
int64_t _67;
frost$core$UInt _70;
frost$core$UInt _71;
uint64_t _72;
uint64_t _73;
uint64_t _74;
frost$core$UInt _75;
frost$core$Int _78;
frost$core$Int _79;
int64_t _80;
int64_t _81;
int64_t _82;
frost$core$Int _83;
frost$core$UInt _86;
frost$core$UInt _87;
uint64_t _88;
uint64_t _89;
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
frost$core$UInt _111;
frost$core$UInt _112;
frost$core$UInt _113;
uint64_t _116;
uint64_t _117;
uint64_t _118;
frost$core$UInt _119;
uint64_t _121;
uint64_t _122;
uint64_t _123;
frost$core$UInt _124;
uint64_t _127;
uint8_t _128;
frost$core$UInt8 _129;
frost$core$Char8 _131;
int64_t _132;
frost$core$UInt _135;
frost$core$UInt _136;
uint64_t _137;
uint64_t _138;
uint64_t _139;
frost$core$UInt _140;
frost$core$Int _143;
frost$core$Int _144;
int64_t _145;
int64_t _146;
int64_t _147;
frost$core$Int _148;
frost$core$UInt _151;
frost$core$UInt _152;
uint64_t _153;
uint64_t _154;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:996
_1 = (frost$core$Int) {20u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:997
_4 = *(&local0);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from UInt.frost:997:42
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:998
_21 = *(&local0);
_22 = (frost$core$Int) {1u};
_23 = _21.value;
_24 = _22.value;
_25 = _23 - _24;
_26 = (frost$core$Int) {_25};
*(&local4) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:999
*(&local5) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1000
_31 = *(&local5);
_32 = (frost$core$UInt) {0u};
_33 = _31.value;
_34 = _32.value;
_35 = _33 >= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1001
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1002
_42 = *(&local3);
_43 = _42.value;
_44 = *(&local4);
_45 = frost$core$Int64$init$frost$core$Int(_44);
_46 = *(&local5);
_47 = (frost$core$UInt) {10u};
// begin inline call to function frost.core.UInt.%(other:frost.core.UInt):frost.core.UInt from UInt.frost:1002:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:197
_50 = _46.value;
_51 = _47.value;
_52 = _50 % _51;
_53 = (frost$core$UInt) {_52};
_55 = (frost$core$UInt) {48u};
_56 = _53.value;
_57 = _55.value;
_58 = _56 + _57;
_59 = (frost$core$UInt) {_58};
// begin inline call to function frost.core.UInt.get_asUInt8():frost.core.UInt8 from UInt.frost:1002:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:960
_62 = _59.value;
_63 = ((uint8_t) _62);
_64 = (frost$core$UInt8) {_63};
_66 = frost$core$Char8$init$frost$core$UInt8(_64);
_67 = _45.value;
((frost$core$Char8*)_43)[_67] = _66;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1003
_70 = *(&local5);
_71 = (frost$core$UInt) {10u};
_72 = _70.value;
_73 = _71.value;
_74 = _72 / _73;
_75 = (frost$core$UInt) {_74};
*(&local5) = _75;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1004
_78 = *(&local4);
_79 = (frost$core$Int) {1u};
_80 = _78.value;
_81 = _79.value;
_82 = _80 - _81;
_83 = (frost$core$Int) {_82};
*(&local4) = _83;
_86 = *(&local5);
_87 = (frost$core$UInt) {0u};
_88 = _86.value;
_89 = _87.value;
_90 = _88 > _89;
_91 = (frost$core$Bit) {_90};
_92 = _91.value;
if (_92) goto block6; else goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1007
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1010
goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1011
_107 = *(&local3);
_108 = _107.value;
_109 = *(&local4);
_110 = frost$core$Int64$init$frost$core$Int(_109);
_111 = (frost$core$UInt) {48u};
_112 = *(&local5);
_113 = (frost$core$UInt) {10u};
// begin inline call to function frost.core.UInt.%(other:frost.core.UInt):frost.core.UInt from UInt.frost:1011:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:197
_116 = _112.value;
_117 = _113.value;
_118 = _116 % _117;
_119 = (frost$core$UInt) {_118};
_121 = _111.value;
_122 = _119.value;
_123 = _121 - _122;
_124 = (frost$core$UInt) {_123};
// begin inline call to function frost.core.UInt.get_asUInt8():frost.core.UInt8 from UInt.frost:1011:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:960
_127 = _124.value;
_128 = ((uint8_t) _127);
_129 = (frost$core$UInt8) {_128};
_131 = frost$core$Char8$init$frost$core$UInt8(_129);
_132 = _110.value;
((frost$core$Char8*)_108)[_132] = _131;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1012
_135 = *(&local5);
_136 = (frost$core$UInt) {10u};
_137 = _135.value;
_138 = _136.value;
_139 = _137 / _138;
_140 = (frost$core$UInt) {_139};
*(&local5) = _140;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1013
_143 = *(&local4);
_144 = (frost$core$Int) {1u};
_145 = _143.value;
_146 = _144.value;
_147 = _145 - _146;
_148 = (frost$core$Int) {_147};
*(&local4) = _148;
_151 = *(&local5);
_152 = (frost$core$UInt) {0u};
_153 = _151.value;
_154 = _152.value;
_155 = _153 < _154;
_156 = (frost$core$Bit) {_155};
_157 = _156.value;
if (_157) goto block11; else goto block13;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1016
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1018
_170 = *(&local0);
_171 = *(&local4);
_172 = _170.value;
_173 = _171.value;
_174 = _172 - _173;
_175 = (frost$core$Int) {_174};
*(&local6) = _175;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1019
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1020
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1022
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
frost$core$String* frost$core$UInt$format$frost$core$String$R$frost$core$String(frost$core$UInt param0, frost$core$String* param1) {

frost$core$Bit _1;
uint64_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:1028
_1 = (frost$core$Bit) {false};
// begin inline call to function frost.core.UInt.get_asUInt64():frost.core.UInt64 from UInt.frost:1028:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt.frost:978
_4 = param0.value;
_5 = ((uint64_t) _4);
_6 = (frost$core$UInt64) {_5};
_8 = (frost$core$UInt64) {4294967295u};
_9 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_1, _6, _8, param1);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
return _9;

}
void frost$core$UInt$cleanup(frost$core$UInt param0) {

return;

}

