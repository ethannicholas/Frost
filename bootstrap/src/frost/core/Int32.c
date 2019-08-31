#include "frost/core/Int32.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/HashKey.h"
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
#include "frost/core/Range.LTfrost/core/Int32.GT.h"
#include "org/frostlang/frost/Int32List.h"
#include "frost/core/SteppedRange.LTfrost/core/Int32.Cfrost/core/Int32.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Int32$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int32$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int32$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int32$format$frost$core$String$R$frost$core$String(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int32$get_count$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int32$get_hash$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int32$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Int32$get_asString$R$frost$core$String(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$$ADD$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$$ADD$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$ADD$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int32$$ADD$frost$core$UInt$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$$SUB$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$$SUB$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$SUB$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int32$$SUB$frost$core$UInt$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$SUB$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int32$$SUB$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$$MUL$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$$MUL$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$MUL$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int32$$MUL$frost$core$UInt$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$$INTDIV$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$$INTDIV$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int32$$INTDIV$frost$core$UInt$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$$REM$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$$REM$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$REM$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int32$$REM$frost$core$UInt$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$BNOT$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int32$$BNOT$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$$BAND$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$$BAND$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int32$$BAND$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int32$$BAND$frost$core$UInt$R$frost$core$UInt(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$$BOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$$BOR$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int32$$BOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int32$$BOR$frost$core$UInt$R$frost$core$UInt(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$$BXOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$$BXOR$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int32$$BXOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int32$$BXOR$frost$core$UInt$R$frost$core$UInt(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$Int$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$Int$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$Int$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$Int$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$get_abs$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int32$get_abs$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$min$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$min$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int64 result = frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int64 result = frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$min$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int32$min$frost$core$UInt$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int32$max$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int32$max$frost$core$Int$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int64 result = frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int64 result = frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$max$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int32$max$frost$core$UInt$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$Int32$get_bitCount$R$frost$core$Int32$shim(frost$core$Int32* sret, frost$core$Object* p0) {
    frost$core$Int32$get_bitCount$R$frost$core$Int32(sret, ((frost$core$Int32$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$Int32$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int32$get_asInt$R$frost$core$Int(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int32$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int32$get_asInt8$R$frost$core$Int8(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int32$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int32$get_asInt16$R$frost$core$Int16(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int32$get_asInt64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int32$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$Int32$get_asUInt$R$frost$core$UInt(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Int32$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Int32$get_asUInt8$R$frost$core$UInt8(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Int32$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Int32$get_asUInt16$R$frost$core$UInt16(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Int32$get_asUInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Int32$get_asUInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Int32$get_asReal32$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int32$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Int32$get_asReal64$R$frost$core$Real64(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Int32$cleanup$shim(frost$core$Object* p0) {
    frost$core$Int32$cleanup(((frost$core$Int32$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$core$Int32$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int32$_frost$core$Equatable, { frost$core$Int32$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int32$_frost$collections$ListView, { frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int32$_frost$core$Comparable, { frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int32$_frost$collections$Iterable, { frost$core$Int32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$Int32$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int32$_frost$core$Formattable, { frost$core$Int32$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Int32$_frost$collections$CollectionView, { frost$core$Int32$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
frost$core$Int32$class_type frost$core$Int32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int32$_frost$collections$HashKey, { frost$core$Int32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$ADD$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$ADD$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$SUB$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$SUB$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int32$$SUB$R$frost$core$Int32$shim, frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$MUL$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$MUL$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$INTDIV$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$INTDIV$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$REM$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$REM$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int32$$BNOT$R$frost$core$Int32$shim, frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int32$get_abs$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$Int$R$frost$core$Int$shim, frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int32$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int32$get_count$R$frost$core$Int$shim, frost$core$Int32$get_bitCount$R$frost$core$Int32$shim, frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int32$get_hash$R$frost$core$Int$shim, frost$core$Int32$get_asInt$R$frost$core$Int$shim, frost$core$Int32$get_asInt8$R$frost$core$Int8$shim, frost$core$Int32$get_asInt16$R$frost$core$Int16$shim, frost$core$Int32$get_asInt64$R$frost$core$Int64$shim, frost$core$Int32$get_asUInt$R$frost$core$UInt$shim, frost$core$Int32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int32$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int32$get_asReal32$R$frost$core$Real32$shim, frost$core$Int32$get_asReal64$R$frost$core$Real64$shim, frost$core$Int32$format$frost$core$String$R$frost$core$String$shim, frost$core$Int32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[16]; } frost$core$Int32$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Equatable, { frost$core$Int32$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$ListView, { frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Comparable, { frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$Iterable, { frost$core$Int32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$Int32$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Formattable, { frost$core$Int32$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$CollectionView, { frost$core$Int32$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s3;
frost$core$Int32$wrapperclass_type frost$core$Int32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$HashKey, { frost$core$Int32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn647)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, 163427487060978696, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, 163427487060978696, NULL };
static frost$core$String $s655 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -1858408941383958353, NULL };
static frost$core$String $s656 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 90, -2358390129674994946, NULL };
static frost$core$String $s691 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -1858408941383958353, NULL };
static frost$core$String $s692 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f", 119, -3704831298910860484, NULL };
static frost$core$String $s694 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s708 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -1858408941383958353, NULL };
static frost$core$String $s709 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s723 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -1858408941383958353, NULL };
static frost$core$String $s724 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$Int32 frost$core$Int32$init$builtin_int32(int32_t param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:30
int32_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int32 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int32 frost$core$Int32$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:36
int8_t $tmp6 = param0.value;
int32_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int32_t) $tmp6);
frost$core$Int32 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int32 frost$core$Int32$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:42
int16_t $tmp9 = param0.value;
int32_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int32_t) $tmp9);
frost$core$Int32 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int32 frost$core$Int32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:48
uint8_t $tmp12 = param0.value;
int32_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((int32_t) $tmp12);
frost$core$Int32 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$Int32 frost$core$Int32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:54
uint16_t $tmp15 = param0.value;
int32_t* $tmp16 = &(&local0)->value;
*$tmp16 = ((int32_t) $tmp15);
frost$core$Int32 $tmp17 = *(&local0);
return $tmp17;

}
frost$core$Int32 frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:60
int32_t $tmp18 = param0.value;
int32_t $tmp19 = param1.value;
int32_t $tmp20 = $tmp18 + $tmp19;
frost$core$Int32 $tmp21 = (frost$core$Int32) {$tmp20};
return $tmp21;

}
frost$core$Int64 frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:66
int32_t $tmp22 = param0.value;
int64_t $tmp23 = param1.value;
int64_t $tmp24 = ((int64_t) $tmp22) + $tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {$tmp24};
return $tmp25;

}
frost$core$Int frost$core$Int32$$ADD$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:72
int32_t $tmp26 = param0.value;
int64_t $tmp27 = param1.value;
int64_t $tmp28 = ((int64_t) $tmp26) + $tmp27;
frost$core$Int $tmp29 = (frost$core$Int) {$tmp28};
return $tmp29;

}
frost$core$Int64 frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:78
int32_t $tmp30 = param0.value;
uint32_t $tmp31 = param1.value;
int64_t $tmp32 = ((int64_t) $tmp30) + ((int64_t) $tmp31);
frost$core$Int64 $tmp33 = (frost$core$Int64) {$tmp32};
return $tmp33;

}
frost$core$Int64 frost$core$Int32$$ADD$frost$core$UInt$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:84
int32_t $tmp34 = param0.value;
uint64_t $tmp35 = param1.value;
int64_t $tmp36 = ((int64_t) $tmp34) + ((int64_t) $tmp35);
frost$core$Int64 $tmp37 = (frost$core$Int64) {$tmp36};
return $tmp37;

}
frost$core$Int32 frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:90
int32_t $tmp38 = param0.value;
int32_t $tmp39 = param1.value;
int32_t $tmp40 = $tmp38 - $tmp39;
frost$core$Int32 $tmp41 = (frost$core$Int32) {$tmp40};
return $tmp41;

}
frost$core$Int64 frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:96
int32_t $tmp42 = param0.value;
int64_t $tmp43 = param1.value;
int64_t $tmp44 = ((int64_t) $tmp42) - $tmp43;
frost$core$Int64 $tmp45 = (frost$core$Int64) {$tmp44};
return $tmp45;

}
frost$core$Int frost$core$Int32$$SUB$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:102
int32_t $tmp46 = param0.value;
int64_t $tmp47 = param1.value;
int64_t $tmp48 = ((int64_t) $tmp46) - $tmp47;
frost$core$Int $tmp49 = (frost$core$Int) {$tmp48};
return $tmp49;

}
frost$core$Int64 frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:108
int32_t $tmp50 = param0.value;
uint32_t $tmp51 = param1.value;
int64_t $tmp52 = ((int64_t) $tmp50) - ((int64_t) $tmp51);
frost$core$Int64 $tmp53 = (frost$core$Int64) {$tmp52};
return $tmp53;

}
frost$core$Int64 frost$core$Int32$$SUB$frost$core$UInt$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:114
int32_t $tmp54 = param0.value;
uint64_t $tmp55 = param1.value;
int64_t $tmp56 = ((int64_t) $tmp54) - ((int64_t) $tmp55);
frost$core$Int64 $tmp57 = (frost$core$Int64) {$tmp56};
return $tmp57;

}
frost$core$Int32 frost$core$Int32$$SUB$R$frost$core$Int32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:119
int32_t $tmp58 = param0.value;
int32_t $tmp59 = -$tmp58;
frost$core$Int32 $tmp60 = (frost$core$Int32) {$tmp59};
return $tmp60;

}
frost$core$Int32 frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:125
int32_t $tmp61 = param0.value;
int32_t $tmp62 = param1.value;
int32_t $tmp63 = $tmp61 * $tmp62;
frost$core$Int32 $tmp64 = (frost$core$Int32) {$tmp63};
return $tmp64;

}
frost$core$Int64 frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:131
int32_t $tmp65 = param0.value;
int64_t $tmp66 = param1.value;
int64_t $tmp67 = ((int64_t) $tmp65) * $tmp66;
frost$core$Int64 $tmp68 = (frost$core$Int64) {$tmp67};
return $tmp68;

}
frost$core$Int frost$core$Int32$$MUL$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:137
int32_t $tmp69 = param0.value;
int64_t $tmp70 = param1.value;
int64_t $tmp71 = ((int64_t) $tmp69) * $tmp70;
frost$core$Int $tmp72 = (frost$core$Int) {$tmp71};
return $tmp72;

}
frost$core$Int64 frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:143
int32_t $tmp73 = param0.value;
uint32_t $tmp74 = param1.value;
int64_t $tmp75 = ((int64_t) $tmp73) * ((int64_t) $tmp74);
frost$core$Int64 $tmp76 = (frost$core$Int64) {$tmp75};
return $tmp76;

}
frost$core$Int64 frost$core$Int32$$MUL$frost$core$UInt$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:149
int32_t $tmp77 = param0.value;
uint64_t $tmp78 = param1.value;
int64_t $tmp79 = ((int64_t) $tmp77) * ((int64_t) $tmp78);
frost$core$Int64 $tmp80 = (frost$core$Int64) {$tmp79};
return $tmp80;

}
frost$core$Int32 frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:155
int32_t $tmp81 = param0.value;
int32_t $tmp82 = param1.value;
int32_t $tmp83 = $tmp81 / $tmp82;
frost$core$Int32 $tmp84 = (frost$core$Int32) {$tmp83};
return $tmp84;

}
frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:161
int32_t $tmp85 = param0.value;
int64_t $tmp86 = param1.value;
int64_t $tmp87 = ((int64_t) $tmp85) / $tmp86;
frost$core$Int64 $tmp88 = (frost$core$Int64) {$tmp87};
return $tmp88;

}
frost$core$Int frost$core$Int32$$INTDIV$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:167
int32_t $tmp89 = param0.value;
int64_t $tmp90 = param1.value;
int64_t $tmp91 = ((int64_t) $tmp89) / $tmp90;
frost$core$Int $tmp92 = (frost$core$Int) {$tmp91};
return $tmp92;

}
frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:173
int32_t $tmp93 = param0.value;
uint32_t $tmp94 = param1.value;
int64_t $tmp95 = ((int64_t) $tmp93) / ((int64_t) $tmp94);
frost$core$Int64 $tmp96 = (frost$core$Int64) {$tmp95};
return $tmp96;

}
frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$UInt$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:179
int32_t $tmp97 = param0.value;
uint64_t $tmp98 = param1.value;
int64_t $tmp99 = ((int64_t) $tmp97) / ((int64_t) $tmp98);
frost$core$Int64 $tmp100 = (frost$core$Int64) {$tmp99};
return $tmp100;

}
frost$core$Int32 frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:185
int32_t $tmp101 = param0.value;
int32_t $tmp102 = param1.value;
int32_t $tmp103 = $tmp101 % $tmp102;
frost$core$Int32 $tmp104 = (frost$core$Int32) {$tmp103};
return $tmp104;

}
frost$core$Int64 frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:191
int32_t $tmp105 = param0.value;
int64_t $tmp106 = param1.value;
int64_t $tmp107 = ((int64_t) $tmp105) % $tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {$tmp107};
return $tmp108;

}
frost$core$Int frost$core$Int32$$REM$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:197
int32_t $tmp109 = param0.value;
int64_t $tmp110 = param1.value;
int64_t $tmp111 = ((int64_t) $tmp109) % $tmp110;
frost$core$Int $tmp112 = (frost$core$Int) {$tmp111};
return $tmp112;

}
frost$core$Int64 frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:203
int32_t $tmp113 = param0.value;
uint32_t $tmp114 = param1.value;
int64_t $tmp115 = ((int64_t) $tmp113) % ((int64_t) $tmp114);
frost$core$Int64 $tmp116 = (frost$core$Int64) {$tmp115};
return $tmp116;

}
frost$core$Int64 frost$core$Int32$$REM$frost$core$UInt$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:209
int32_t $tmp117 = param0.value;
uint64_t $tmp118 = param1.value;
int64_t $tmp119 = ((int64_t) $tmp117) % ((int64_t) $tmp118);
frost$core$Int64 $tmp120 = (frost$core$Int64) {$tmp119};
return $tmp120;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:215
int32_t $tmp121 = param0.value;
int8_t $tmp122 = param1.value;
float $tmp123 = ((float) $tmp121) / ((float) $tmp122);
frost$core$Real32 $tmp124 = (frost$core$Real32) {$tmp123};
return $tmp124;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:221
int32_t $tmp125 = param0.value;
int16_t $tmp126 = param1.value;
float $tmp127 = ((float) $tmp125) / ((float) $tmp126);
frost$core$Real32 $tmp128 = (frost$core$Real32) {$tmp127};
return $tmp128;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:227
int32_t $tmp129 = param0.value;
int32_t $tmp130 = param1.value;
float $tmp131 = ((float) $tmp129) / ((float) $tmp130);
frost$core$Real32 $tmp132 = (frost$core$Real32) {$tmp131};
return $tmp132;

}
frost$core$Real64 frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:233
int32_t $tmp133 = param0.value;
int64_t $tmp134 = param1.value;
double $tmp135 = ((double) $tmp133) / ((double) $tmp134);
frost$core$Real64 $tmp136 = (frost$core$Real64) {$tmp135};
return $tmp136;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:239
int32_t $tmp137 = param0.value;
uint8_t $tmp138 = param1.value;
float $tmp139 = ((float) $tmp137) / ((float) $tmp138);
frost$core$Real32 $tmp140 = (frost$core$Real32) {$tmp139};
return $tmp140;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:245
int32_t $tmp141 = param0.value;
uint16_t $tmp142 = param1.value;
float $tmp143 = ((float) $tmp141) / ((float) $tmp142);
frost$core$Real32 $tmp144 = (frost$core$Real32) {$tmp143};
return $tmp144;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:251
int32_t $tmp145 = param0.value;
uint32_t $tmp146 = param1.value;
float $tmp147 = ((float) $tmp145) / ((float) $tmp146);
frost$core$Real32 $tmp148 = (frost$core$Real32) {$tmp147};
return $tmp148;

}
frost$core$Real64 frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:257
int32_t $tmp149 = param0.value;
uint64_t $tmp150 = param1.value;
double $tmp151 = ((double) $tmp149) / ((double) $tmp150);
frost$core$Real64 $tmp152 = (frost$core$Real64) {$tmp151};
return $tmp152;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:263
int32_t $tmp153 = param0.value;
float $tmp154 = param1.value;
float $tmp155 = ((float) $tmp153) / $tmp154;
frost$core$Real32 $tmp156 = (frost$core$Real32) {$tmp155};
return $tmp156;

}
frost$core$Real64 frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:269
int32_t $tmp157 = param0.value;
double $tmp158 = param1.value;
double $tmp159 = ((double) $tmp157) / $tmp158;
frost$core$Real64 $tmp160 = (frost$core$Real64) {$tmp159};
return $tmp160;

}
frost$core$Int32 frost$core$Int32$$BNOT$R$frost$core$Int32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:274
int32_t $tmp161 = param0.value;
int32_t $tmp162 = !$tmp161;
frost$core$Int32 $tmp163 = (frost$core$Int32) {$tmp162};
return $tmp163;

}
frost$core$Int32 frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:280
int32_t $tmp164 = param0.value;
int32_t $tmp165 = param1.value;
int32_t $tmp166 = $tmp164 & $tmp165;
frost$core$Int32 $tmp167 = (frost$core$Int32) {$tmp166};
return $tmp167;

}
frost$core$Int64 frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:286
int32_t $tmp168 = param0.value;
int64_t $tmp169 = param1.value;
int64_t $tmp170 = ((int64_t) $tmp168) & $tmp169;
frost$core$Int64 $tmp171 = (frost$core$Int64) {$tmp170};
return $tmp171;

}
frost$core$Int frost$core$Int32$$BAND$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:292
int32_t $tmp172 = param0.value;
int64_t $tmp173 = param1.value;
int64_t $tmp174 = ((int64_t) $tmp172) & $tmp173;
frost$core$Int $tmp175 = (frost$core$Int) {$tmp174};
return $tmp175;

}
frost$core$UInt32 frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:298
int32_t $tmp176 = param0.value;
uint32_t $tmp177 = param1.value;
uint32_t $tmp178 = ((uint32_t) $tmp176) & $tmp177;
frost$core$UInt32 $tmp179 = (frost$core$UInt32) {$tmp178};
return $tmp179;

}
frost$core$UInt64 frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:304
int32_t $tmp180 = param0.value;
uint64_t $tmp181 = param1.value;
uint64_t $tmp182 = ((uint64_t) $tmp180) & $tmp181;
frost$core$UInt64 $tmp183 = (frost$core$UInt64) {$tmp182};
return $tmp183;

}
frost$core$UInt frost$core$Int32$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:310
int32_t $tmp184 = param0.value;
uint64_t $tmp185 = param1.value;
uint64_t $tmp186 = ((uint64_t) $tmp184) & $tmp185;
frost$core$UInt $tmp187 = (frost$core$UInt) {$tmp186};
return $tmp187;

}
frost$core$Int32 frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:316
int32_t $tmp188 = param0.value;
int32_t $tmp189 = param1.value;
int32_t $tmp190 = $tmp188 | $tmp189;
frost$core$Int32 $tmp191 = (frost$core$Int32) {$tmp190};
return $tmp191;

}
frost$core$Int64 frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:322
int32_t $tmp192 = param0.value;
int64_t $tmp193 = param1.value;
int64_t $tmp194 = ((int64_t) $tmp192) | $tmp193;
frost$core$Int64 $tmp195 = (frost$core$Int64) {$tmp194};
return $tmp195;

}
frost$core$Int frost$core$Int32$$BOR$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:328
int32_t $tmp196 = param0.value;
int64_t $tmp197 = param1.value;
int64_t $tmp198 = ((int64_t) $tmp196) | $tmp197;
frost$core$Int $tmp199 = (frost$core$Int) {$tmp198};
return $tmp199;

}
frost$core$UInt32 frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:334
int32_t $tmp200 = param0.value;
uint32_t $tmp201 = param1.value;
uint32_t $tmp202 = ((uint32_t) $tmp200) | $tmp201;
frost$core$UInt32 $tmp203 = (frost$core$UInt32) {$tmp202};
return $tmp203;

}
frost$core$UInt64 frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:340
int32_t $tmp204 = param0.value;
uint64_t $tmp205 = param1.value;
uint64_t $tmp206 = ((uint64_t) $tmp204) | $tmp205;
frost$core$UInt64 $tmp207 = (frost$core$UInt64) {$tmp206};
return $tmp207;

}
frost$core$UInt frost$core$Int32$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:346
int32_t $tmp208 = param0.value;
uint64_t $tmp209 = param1.value;
uint64_t $tmp210 = ((uint64_t) $tmp208) | $tmp209;
frost$core$UInt $tmp211 = (frost$core$UInt) {$tmp210};
return $tmp211;

}
frost$core$Int32 frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:352
int32_t $tmp212 = param0.value;
int32_t $tmp213 = param1.value;
int32_t $tmp214 = $tmp212 ^ $tmp213;
frost$core$Int32 $tmp215 = (frost$core$Int32) {$tmp214};
return $tmp215;

}
frost$core$Int64 frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:358
int32_t $tmp216 = param0.value;
int64_t $tmp217 = param1.value;
int64_t $tmp218 = ((int64_t) $tmp216) ^ $tmp217;
frost$core$Int64 $tmp219 = (frost$core$Int64) {$tmp218};
return $tmp219;

}
frost$core$Int frost$core$Int32$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:364
int32_t $tmp220 = param0.value;
int64_t $tmp221 = param1.value;
int64_t $tmp222 = ((int64_t) $tmp220) ^ $tmp221;
frost$core$Int $tmp223 = (frost$core$Int) {$tmp222};
return $tmp223;

}
frost$core$UInt32 frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:370
int32_t $tmp224 = param0.value;
uint32_t $tmp225 = param1.value;
uint32_t $tmp226 = ((uint32_t) $tmp224) ^ $tmp225;
frost$core$UInt32 $tmp227 = (frost$core$UInt32) {$tmp226};
return $tmp227;

}
frost$core$UInt64 frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:376
int32_t $tmp228 = param0.value;
uint64_t $tmp229 = param1.value;
uint64_t $tmp230 = ((uint64_t) $tmp228) ^ $tmp229;
frost$core$UInt64 $tmp231 = (frost$core$UInt64) {$tmp230};
return $tmp231;

}
frost$core$UInt frost$core$Int32$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:382
int32_t $tmp232 = param0.value;
uint64_t $tmp233 = param1.value;
uint64_t $tmp234 = ((uint64_t) $tmp232) ^ $tmp233;
frost$core$UInt $tmp235 = (frost$core$UInt) {$tmp234};
return $tmp235;

}
frost$core$Int32 frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:388
int32_t $tmp236 = param0.value;
int32_t $tmp237 = param1.value;
int32_t $tmp238 = $tmp236 << $tmp237;
frost$core$Int32 $tmp239 = (frost$core$Int32) {$tmp238};
return $tmp239;

}
frost$core$Int32 frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:394
int32_t $tmp240 = param0.value;
int32_t $tmp241 = param1.value;
int32_t $tmp242 = $tmp240 >> $tmp241;
frost$core$Int32 $tmp243 = (frost$core$Int32) {$tmp242};
return $tmp243;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:400
int32_t $tmp244 = param0.value;
int8_t $tmp245 = param1.value;
bool $tmp246 = $tmp244 == ((int32_t) $tmp245);
frost$core$Bit $tmp247 = (frost$core$Bit) {$tmp246};
return $tmp247;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:406
int32_t $tmp248 = param0.value;
int16_t $tmp249 = param1.value;
bool $tmp250 = $tmp248 == ((int32_t) $tmp249);
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
return $tmp251;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:413
int32_t $tmp252 = param0.value;
int32_t $tmp253 = param1.value;
bool $tmp254 = $tmp252 == $tmp253;
frost$core$Bit $tmp255 = (frost$core$Bit) {$tmp254};
return $tmp255;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:419
int32_t $tmp256 = param0.value;
int64_t $tmp257 = param1.value;
bool $tmp258 = ((int64_t) $tmp256) == $tmp257;
frost$core$Bit $tmp259 = (frost$core$Bit) {$tmp258};
return $tmp259;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:425
int32_t $tmp260 = param0.value;
int64_t $tmp261 = param1.value;
bool $tmp262 = ((int64_t) $tmp260) == $tmp261;
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
return $tmp263;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:431
int32_t $tmp264 = param0.value;
uint8_t $tmp265 = param1.value;
bool $tmp266 = ((int64_t) $tmp264) == ((int64_t) $tmp265);
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266};
return $tmp267;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:437
int32_t $tmp268 = param0.value;
uint16_t $tmp269 = param1.value;
bool $tmp270 = ((int64_t) $tmp268) == ((int64_t) $tmp269);
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
return $tmp271;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:443
int32_t $tmp272 = param0.value;
uint32_t $tmp273 = param1.value;
bool $tmp274 = ((int64_t) $tmp272) == ((int64_t) $tmp273);
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
return $tmp275;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:449
int32_t $tmp276 = param0.value;
uint64_t $tmp277 = param1.value;
bool $tmp278 = ((int64_t) $tmp276) == ((int64_t) $tmp277);
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
return $tmp279;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:455
int32_t $tmp280 = param0.value;
int8_t $tmp281 = param1.value;
bool $tmp282 = $tmp280 != ((int32_t) $tmp281);
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
return $tmp283;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:461
int32_t $tmp284 = param0.value;
int16_t $tmp285 = param1.value;
bool $tmp286 = $tmp284 != ((int32_t) $tmp285);
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
return $tmp287;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:468
int32_t $tmp288 = param0.value;
int32_t $tmp289 = param1.value;
bool $tmp290 = $tmp288 != $tmp289;
frost$core$Bit $tmp291 = (frost$core$Bit) {$tmp290};
return $tmp291;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:474
int32_t $tmp292 = param0.value;
int64_t $tmp293 = param1.value;
bool $tmp294 = ((int64_t) $tmp292) != $tmp293;
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294};
return $tmp295;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:480
int32_t $tmp296 = param0.value;
int64_t $tmp297 = param1.value;
bool $tmp298 = ((int64_t) $tmp296) != $tmp297;
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298};
return $tmp299;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:486
int32_t $tmp300 = param0.value;
uint8_t $tmp301 = param1.value;
bool $tmp302 = ((int64_t) $tmp300) != ((int64_t) $tmp301);
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
return $tmp303;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:492
int32_t $tmp304 = param0.value;
uint16_t $tmp305 = param1.value;
bool $tmp306 = ((int64_t) $tmp304) != ((int64_t) $tmp305);
frost$core$Bit $tmp307 = (frost$core$Bit) {$tmp306};
return $tmp307;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:498
int32_t $tmp308 = param0.value;
uint32_t $tmp309 = param1.value;
bool $tmp310 = ((int64_t) $tmp308) != ((int64_t) $tmp309);
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
return $tmp311;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:504
int32_t $tmp312 = param0.value;
uint64_t $tmp313 = param1.value;
bool $tmp314 = ((int64_t) $tmp312) != ((int64_t) $tmp313);
frost$core$Bit $tmp315 = (frost$core$Bit) {$tmp314};
return $tmp315;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:510
int32_t $tmp316 = param0.value;
int8_t $tmp317 = param1.value;
bool $tmp318 = $tmp316 < ((int32_t) $tmp317);
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
return $tmp319;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:516
int32_t $tmp320 = param0.value;
int16_t $tmp321 = param1.value;
bool $tmp322 = $tmp320 < ((int32_t) $tmp321);
frost$core$Bit $tmp323 = (frost$core$Bit) {$tmp322};
return $tmp323;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:523
int32_t $tmp324 = param0.value;
int32_t $tmp325 = param1.value;
bool $tmp326 = $tmp324 < $tmp325;
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
return $tmp327;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:529
int32_t $tmp328 = param0.value;
int64_t $tmp329 = param1.value;
bool $tmp330 = ((int64_t) $tmp328) < $tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
return $tmp331;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:535
int32_t $tmp332 = param0.value;
int64_t $tmp333 = param1.value;
bool $tmp334 = ((int64_t) $tmp332) < $tmp333;
frost$core$Bit $tmp335 = (frost$core$Bit) {$tmp334};
return $tmp335;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:541
int32_t $tmp336 = param0.value;
uint8_t $tmp337 = param1.value;
bool $tmp338 = ((int64_t) $tmp336) < ((int64_t) $tmp337);
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338};
return $tmp339;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:547
int32_t $tmp340 = param0.value;
uint16_t $tmp341 = param1.value;
bool $tmp342 = ((int64_t) $tmp340) < ((int64_t) $tmp341);
frost$core$Bit $tmp343 = (frost$core$Bit) {$tmp342};
return $tmp343;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:553
int32_t $tmp344 = param0.value;
uint32_t $tmp345 = param1.value;
bool $tmp346 = ((int64_t) $tmp344) < ((int64_t) $tmp345);
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
return $tmp347;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:559
int32_t $tmp348 = param0.value;
uint64_t $tmp349 = param1.value;
bool $tmp350 = ((int64_t) $tmp348) < ((int64_t) $tmp349);
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
return $tmp351;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:565
int32_t $tmp352 = param0.value;
int8_t $tmp353 = param1.value;
bool $tmp354 = $tmp352 > ((int32_t) $tmp353);
frost$core$Bit $tmp355 = (frost$core$Bit) {$tmp354};
return $tmp355;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:571
int32_t $tmp356 = param0.value;
int16_t $tmp357 = param1.value;
bool $tmp358 = $tmp356 > ((int32_t) $tmp357);
frost$core$Bit $tmp359 = (frost$core$Bit) {$tmp358};
return $tmp359;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:578
int32_t $tmp360 = param0.value;
int32_t $tmp361 = param1.value;
bool $tmp362 = $tmp360 > $tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
return $tmp363;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:584
int32_t $tmp364 = param0.value;
int64_t $tmp365 = param1.value;
bool $tmp366 = ((int64_t) $tmp364) > $tmp365;
frost$core$Bit $tmp367 = (frost$core$Bit) {$tmp366};
return $tmp367;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:590
int32_t $tmp368 = param0.value;
int64_t $tmp369 = param1.value;
bool $tmp370 = ((int64_t) $tmp368) > $tmp369;
frost$core$Bit $tmp371 = (frost$core$Bit) {$tmp370};
return $tmp371;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:596
int32_t $tmp372 = param0.value;
uint8_t $tmp373 = param1.value;
bool $tmp374 = ((int64_t) $tmp372) > ((int64_t) $tmp373);
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
return $tmp375;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:602
int32_t $tmp376 = param0.value;
uint16_t $tmp377 = param1.value;
bool $tmp378 = ((int64_t) $tmp376) > ((int64_t) $tmp377);
frost$core$Bit $tmp379 = (frost$core$Bit) {$tmp378};
return $tmp379;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:608
int32_t $tmp380 = param0.value;
uint32_t $tmp381 = param1.value;
bool $tmp382 = ((int64_t) $tmp380) > ((int64_t) $tmp381);
frost$core$Bit $tmp383 = (frost$core$Bit) {$tmp382};
return $tmp383;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:614
int32_t $tmp384 = param0.value;
uint64_t $tmp385 = param1.value;
bool $tmp386 = ((int64_t) $tmp384) > ((int64_t) $tmp385);
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
return $tmp387;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:620
int32_t $tmp388 = param0.value;
int8_t $tmp389 = param1.value;
bool $tmp390 = $tmp388 >= ((int32_t) $tmp389);
frost$core$Bit $tmp391 = (frost$core$Bit) {$tmp390};
return $tmp391;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:626
int32_t $tmp392 = param0.value;
int16_t $tmp393 = param1.value;
bool $tmp394 = $tmp392 >= ((int32_t) $tmp393);
frost$core$Bit $tmp395 = (frost$core$Bit) {$tmp394};
return $tmp395;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:633
int32_t $tmp396 = param0.value;
int32_t $tmp397 = param1.value;
bool $tmp398 = $tmp396 >= $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
return $tmp399;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:639
int32_t $tmp400 = param0.value;
int64_t $tmp401 = param1.value;
bool $tmp402 = ((int64_t) $tmp400) >= $tmp401;
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
return $tmp403;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:645
int32_t $tmp404 = param0.value;
int64_t $tmp405 = param1.value;
bool $tmp406 = ((int64_t) $tmp404) >= $tmp405;
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406};
return $tmp407;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:651
int32_t $tmp408 = param0.value;
uint8_t $tmp409 = param1.value;
bool $tmp410 = ((int64_t) $tmp408) >= ((int64_t) $tmp409);
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
return $tmp411;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:657
int32_t $tmp412 = param0.value;
uint16_t $tmp413 = param1.value;
bool $tmp414 = ((int64_t) $tmp412) >= ((int64_t) $tmp413);
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
return $tmp415;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:663
int32_t $tmp416 = param0.value;
uint32_t $tmp417 = param1.value;
bool $tmp418 = ((int64_t) $tmp416) >= ((int64_t) $tmp417);
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418};
return $tmp419;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:669
int32_t $tmp420 = param0.value;
uint64_t $tmp421 = param1.value;
bool $tmp422 = ((int64_t) $tmp420) >= ((int64_t) $tmp421);
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
return $tmp423;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:675
int32_t $tmp424 = param0.value;
int8_t $tmp425 = param1.value;
bool $tmp426 = $tmp424 <= ((int32_t) $tmp425);
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
return $tmp427;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:681
int32_t $tmp428 = param0.value;
int16_t $tmp429 = param1.value;
bool $tmp430 = $tmp428 <= ((int32_t) $tmp429);
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
return $tmp431;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:688
int32_t $tmp432 = param0.value;
int32_t $tmp433 = param1.value;
bool $tmp434 = $tmp432 <= $tmp433;
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
return $tmp435;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:694
int32_t $tmp436 = param0.value;
int64_t $tmp437 = param1.value;
bool $tmp438 = ((int64_t) $tmp436) <= $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
return $tmp439;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:700
int32_t $tmp440 = param0.value;
int64_t $tmp441 = param1.value;
bool $tmp442 = ((int64_t) $tmp440) <= $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
return $tmp443;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:706
int32_t $tmp444 = param0.value;
uint8_t $tmp445 = param1.value;
bool $tmp446 = ((int64_t) $tmp444) <= ((int64_t) $tmp445);
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
return $tmp447;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:712
int32_t $tmp448 = param0.value;
uint16_t $tmp449 = param1.value;
bool $tmp450 = ((int64_t) $tmp448) <= ((int64_t) $tmp449);
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
return $tmp451;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:718
int32_t $tmp452 = param0.value;
uint32_t $tmp453 = param1.value;
bool $tmp454 = ((int64_t) $tmp452) <= ((int64_t) $tmp453);
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp454};
return $tmp455;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:724
int32_t $tmp456 = param0.value;
uint64_t $tmp457 = param1.value;
bool $tmp458 = ((int64_t) $tmp456) <= ((int64_t) $tmp457);
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
return $tmp459;

}
frost$core$Int32 frost$core$Int32$get_abs$R$frost$core$Int32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:730
frost$core$Int32 $tmp460 = (frost$core$Int32) {0u};
int32_t $tmp461 = param0.value;
int32_t $tmp462 = $tmp460.value;
bool $tmp463 = $tmp461 < $tmp462;
frost$core$Bit $tmp464 = (frost$core$Bit) {$tmp463};
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:731
// begin inline call to function frost.core.Int32.-():frost.core.Int32 from Int32.frost:731:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:119
int32_t $tmp466 = param0.value;
int32_t $tmp467 = -$tmp466;
frost$core$Int32 $tmp468 = (frost$core$Int32) {$tmp467};
return $tmp468;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:733
return param0;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:739
int32_t $tmp469 = param0.value;
int8_t $tmp470 = param1.value;
bool $tmp471 = $tmp469 < ((int32_t) $tmp470);
frost$core$Bit $tmp472 = (frost$core$Bit) {$tmp471};
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:740
int32_t $tmp474 = param0.value;
frost$core$Int32 $tmp475 = (frost$core$Int32) {$tmp474};
return $tmp475;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:742
int8_t $tmp476 = param1.value;
frost$core$Int32 $tmp477 = (frost$core$Int32) {((int32_t) $tmp476)};
return $tmp477;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:748
int32_t $tmp478 = param0.value;
int16_t $tmp479 = param1.value;
bool $tmp480 = $tmp478 < ((int32_t) $tmp479);
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:749
int32_t $tmp483 = param0.value;
frost$core$Int32 $tmp484 = (frost$core$Int32) {$tmp483};
return $tmp484;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:751
int16_t $tmp485 = param1.value;
frost$core$Int32 $tmp486 = (frost$core$Int32) {((int32_t) $tmp485)};
return $tmp486;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:757
int32_t $tmp487 = param0.value;
int32_t $tmp488 = param1.value;
bool $tmp489 = $tmp487 < $tmp488;
frost$core$Bit $tmp490 = (frost$core$Bit) {$tmp489};
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:758
int32_t $tmp492 = param0.value;
frost$core$Int32 $tmp493 = (frost$core$Int32) {$tmp492};
return $tmp493;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:760
int32_t $tmp494 = param1.value;
frost$core$Int32 $tmp495 = (frost$core$Int32) {$tmp494};
return $tmp495;

}
frost$core$Int64 frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:766
int32_t $tmp496 = param0.value;
int64_t $tmp497 = param1.value;
bool $tmp498 = ((int64_t) $tmp496) < $tmp497;
frost$core$Bit $tmp499 = (frost$core$Bit) {$tmp498};
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:767
int32_t $tmp501 = param0.value;
frost$core$Int64 $tmp502 = (frost$core$Int64) {((int64_t) $tmp501)};
return $tmp502;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:769
int64_t $tmp503 = param1.value;
frost$core$Int64 $tmp504 = (frost$core$Int64) {$tmp503};
return $tmp504;

}
frost$core$Int frost$core$Int32$min$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:775
int32_t $tmp505 = param0.value;
int64_t $tmp506 = param1.value;
bool $tmp507 = ((int64_t) $tmp505) < $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:776
int32_t $tmp510 = param0.value;
frost$core$Int $tmp511 = (frost$core$Int) {((int64_t) $tmp510)};
return $tmp511;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:778
int64_t $tmp512 = param1.value;
frost$core$Int $tmp513 = (frost$core$Int) {$tmp512};
return $tmp513;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:784
int32_t $tmp514 = param0.value;
uint8_t $tmp515 = param1.value;
bool $tmp516 = ((int64_t) $tmp514) < ((int64_t) $tmp515);
frost$core$Bit $tmp517 = (frost$core$Bit) {$tmp516};
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:785
int32_t $tmp519 = param0.value;
frost$core$Int64 $tmp520 = (frost$core$Int64) {((int64_t) $tmp519)};
return $tmp520;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:787
uint8_t $tmp521 = param1.value;
frost$core$Int64 $tmp522 = (frost$core$Int64) {((int64_t) $tmp521)};
return $tmp522;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:793
int32_t $tmp523 = param0.value;
uint16_t $tmp524 = param1.value;
bool $tmp525 = ((int64_t) $tmp523) < ((int64_t) $tmp524);
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
bool $tmp527 = $tmp526.value;
if ($tmp527) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:794
int32_t $tmp528 = param0.value;
frost$core$Int64 $tmp529 = (frost$core$Int64) {((int64_t) $tmp528)};
return $tmp529;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:796
uint16_t $tmp530 = param1.value;
frost$core$Int64 $tmp531 = (frost$core$Int64) {((int64_t) $tmp530)};
return $tmp531;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:802
int32_t $tmp532 = param0.value;
uint32_t $tmp533 = param1.value;
bool $tmp534 = ((int64_t) $tmp532) < ((int64_t) $tmp533);
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
bool $tmp536 = $tmp535.value;
if ($tmp536) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:803
int32_t $tmp537 = param0.value;
frost$core$Int64 $tmp538 = (frost$core$Int64) {((int64_t) $tmp537)};
return $tmp538;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:805
uint32_t $tmp539 = param1.value;
frost$core$Int64 $tmp540 = (frost$core$Int64) {((int64_t) $tmp539)};
return $tmp540;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:812
int32_t $tmp541 = param0.value;
uint64_t $tmp542 = param1.value;
bool $tmp543 = ((int64_t) $tmp541) < ((int64_t) $tmp542);
frost$core$Bit $tmp544 = (frost$core$Bit) {$tmp543};
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:813
int32_t $tmp546 = param0.value;
frost$core$Int64 $tmp547 = (frost$core$Int64) {((int64_t) $tmp546)};
return $tmp547;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:815
uint64_t $tmp548 = param1.value;
frost$core$Int64 $tmp549 = (frost$core$Int64) {((int64_t) $tmp548)};
return $tmp549;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:821
int32_t $tmp550 = param0.value;
int8_t $tmp551 = param1.value;
bool $tmp552 = $tmp550 > ((int32_t) $tmp551);
frost$core$Bit $tmp553 = (frost$core$Bit) {$tmp552};
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:822
int32_t $tmp555 = param0.value;
frost$core$Int32 $tmp556 = (frost$core$Int32) {$tmp555};
return $tmp556;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:824
int8_t $tmp557 = param1.value;
frost$core$Int32 $tmp558 = (frost$core$Int32) {((int32_t) $tmp557)};
return $tmp558;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:830
int32_t $tmp559 = param0.value;
int16_t $tmp560 = param1.value;
bool $tmp561 = $tmp559 > ((int32_t) $tmp560);
frost$core$Bit $tmp562 = (frost$core$Bit) {$tmp561};
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:831
int32_t $tmp564 = param0.value;
frost$core$Int32 $tmp565 = (frost$core$Int32) {$tmp564};
return $tmp565;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:833
int16_t $tmp566 = param1.value;
frost$core$Int32 $tmp567 = (frost$core$Int32) {((int32_t) $tmp566)};
return $tmp567;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:839
int32_t $tmp568 = param0.value;
int32_t $tmp569 = param1.value;
bool $tmp570 = $tmp568 > $tmp569;
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570};
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:840
int32_t $tmp573 = param0.value;
frost$core$Int32 $tmp574 = (frost$core$Int32) {$tmp573};
return $tmp574;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:842
int32_t $tmp575 = param1.value;
frost$core$Int32 $tmp576 = (frost$core$Int32) {$tmp575};
return $tmp576;

}
frost$core$Int64 frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:848
int32_t $tmp577 = param0.value;
int64_t $tmp578 = param1.value;
bool $tmp579 = ((int64_t) $tmp577) > $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:849
int32_t $tmp582 = param0.value;
frost$core$Int64 $tmp583 = (frost$core$Int64) {((int64_t) $tmp582)};
return $tmp583;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:851
int64_t $tmp584 = param1.value;
frost$core$Int64 $tmp585 = (frost$core$Int64) {$tmp584};
return $tmp585;

}
frost$core$Int frost$core$Int32$max$frost$core$Int$R$frost$core$Int(frost$core$Int32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:857
int32_t $tmp586 = param0.value;
int64_t $tmp587 = param1.value;
bool $tmp588 = ((int64_t) $tmp586) > $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:858
int32_t $tmp591 = param0.value;
frost$core$Int $tmp592 = (frost$core$Int) {((int64_t) $tmp591)};
return $tmp592;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:860
int64_t $tmp593 = param1.value;
frost$core$Int $tmp594 = (frost$core$Int) {$tmp593};
return $tmp594;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:866
int32_t $tmp595 = param0.value;
uint8_t $tmp596 = param1.value;
bool $tmp597 = ((int64_t) $tmp595) > ((int64_t) $tmp596);
frost$core$Bit $tmp598 = (frost$core$Bit) {$tmp597};
bool $tmp599 = $tmp598.value;
if ($tmp599) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:867
int32_t $tmp600 = param0.value;
frost$core$Int64 $tmp601 = (frost$core$Int64) {((int64_t) $tmp600)};
return $tmp601;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:869
uint8_t $tmp602 = param1.value;
frost$core$Int64 $tmp603 = (frost$core$Int64) {((int64_t) $tmp602)};
return $tmp603;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:875
int32_t $tmp604 = param0.value;
uint16_t $tmp605 = param1.value;
bool $tmp606 = ((int64_t) $tmp604) > ((int64_t) $tmp605);
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
bool $tmp608 = $tmp607.value;
if ($tmp608) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:876
int32_t $tmp609 = param0.value;
frost$core$Int64 $tmp610 = (frost$core$Int64) {((int64_t) $tmp609)};
return $tmp610;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:878
uint16_t $tmp611 = param1.value;
frost$core$Int64 $tmp612 = (frost$core$Int64) {((int64_t) $tmp611)};
return $tmp612;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:884
int32_t $tmp613 = param0.value;
uint32_t $tmp614 = param1.value;
bool $tmp615 = ((int64_t) $tmp613) > ((int64_t) $tmp614);
frost$core$Bit $tmp616 = (frost$core$Bit) {$tmp615};
bool $tmp617 = $tmp616.value;
if ($tmp617) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:885
int32_t $tmp618 = param0.value;
frost$core$Int64 $tmp619 = (frost$core$Int64) {((int64_t) $tmp618)};
return $tmp619;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:887
uint32_t $tmp620 = param1.value;
frost$core$Int64 $tmp621 = (frost$core$Int64) {((int64_t) $tmp620)};
return $tmp621;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:894
int32_t $tmp622 = param0.value;
uint64_t $tmp623 = param1.value;
bool $tmp624 = ((int64_t) $tmp622) > ((int64_t) $tmp623);
frost$core$Bit $tmp625 = (frost$core$Bit) {$tmp624};
bool $tmp626 = $tmp625.value;
if ($tmp626) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:895
int32_t $tmp627 = param0.value;
frost$core$Int64 $tmp628 = (frost$core$Int64) {((int64_t) $tmp627)};
return $tmp628;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:897
uint64_t $tmp629 = param1.value;
frost$core$Int64 $tmp630 = (frost$core$Int64) {((int64_t) $tmp629)};
return $tmp630;

}
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$Range$LTfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$Range$LTfrost$core$Int32$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:902
FROST_ASSERT(40 == sizeof(org$frostlang$frost$Int32List));
org$frostlang$frost$Int32List* $tmp631 = (org$frostlang$frost$Int32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$Int32List$class);
frost$core$Int32 $tmp632 = param0.min;
frost$core$Int32 $tmp633 = param0.max;
frost$core$Int32 $tmp634 = (frost$core$Int32) {1u};
frost$core$Bit $tmp635 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT $tmp636 = frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$init$frost$core$Int32$frost$core$Int32$frost$core$Int32$frost$core$Bit($tmp632, $tmp633, $tmp634, $tmp635);
org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT($tmp631, $tmp636);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp631)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp631));
return ((frost$collections$ListView*) $tmp631);

}
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:907
FROST_ASSERT(40 == sizeof(org$frostlang$frost$Int32List));
org$frostlang$frost$Int32List* $tmp637 = (org$frostlang$frost$Int32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$Int32List$class);
org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT($tmp637, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp637)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp637));
return ((frost$collections$ListView*) $tmp637);

}
frost$core$Bit frost$core$Int32$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int param1) {

frost$core$Int $tmp638 = (frost$core$Int) {0u};
int64_t $tmp639 = param1.value;
int64_t $tmp640 = $tmp638.value;
bool $tmp641 = $tmp639 >= $tmp640;
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block3; else goto block2;
block3:;
frost$core$Int32$wrapper* $tmp644;
$tmp644 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp644->value = param0;
ITable* $tmp645 = ((frost$collections$CollectionView*) $tmp644)->$class->itable;
while ($tmp645->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp645 = $tmp645->next;
}
$fn647 $tmp646 = $tmp645->methods[0];
frost$core$Int $tmp648 = $tmp646(((frost$collections$CollectionView*) $tmp644));
int64_t $tmp649 = param1.value;
int64_t $tmp650 = $tmp648.value;
bool $tmp651 = $tmp649 < $tmp650;
frost$core$Bit $tmp652 = (frost$core$Bit) {$tmp651};
bool $tmp653 = $tmp652.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp644)));
if ($tmp653) goto block1; else goto block2;
block2:;
frost$core$Int $tmp654 = (frost$core$Int) {912u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s655, $tmp654, &$s656);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:913
frost$core$Int $tmp657 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from Int32.frost:913:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
int64_t $tmp658 = $tmp657.value;
int64_t $tmp659 = param1.value;
int64_t $tmp660 = $tmp658 << $tmp659;
frost$core$Int $tmp661 = (frost$core$Int) {$tmp660};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int):frost.core.Int from Int32.frost:913:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:292
int32_t $tmp662 = param0.value;
int64_t $tmp663 = $tmp661.value;
int64_t $tmp664 = ((int64_t) $tmp662) & $tmp663;
frost$core$Int $tmp665 = (frost$core$Int) {$tmp664};
frost$core$Int $tmp666 = (frost$core$Int) {0u};
int64_t $tmp667 = $tmp665.value;
int64_t $tmp668 = $tmp666.value;
bool $tmp669 = $tmp667 != $tmp668;
frost$core$Bit $tmp670 = (frost$core$Bit) {$tmp669};
return $tmp670;

}
frost$core$Int frost$core$Int32$get_count$R$frost$core$Int(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:919
frost$core$Int $tmp671 = (frost$core$Int) {32u};
return $tmp671;

}
frost$collections$Iterator* frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:929
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp672 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int32.get_asUInt64():frost.core.UInt64 from Int32.frost:929:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1008
int32_t $tmp673 = param0.value;
frost$core$UInt64 $tmp674 = (frost$core$UInt64) {((uint64_t) $tmp673)};
frost$core$UInt64 $tmp675 = (frost$core$UInt64) {2147483648u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp672, $tmp674, $tmp675);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp672)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp672));
return ((frost$collections$Iterator*) $tmp672);

}
frost$core$Int frost$core$Int32$get_hash$R$frost$core$Int(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:934
int32_t $tmp676 = param0.value;
frost$core$Int $tmp677 = (frost$core$Int) {((int64_t) $tmp676)};
return $tmp677;

}
frost$core$Int32$nullable frost$core$Int32$parse$frost$core$String$frost$core$Int$R$frost$core$Int32$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int $tmp678 = (frost$core$Int) {2u};
int64_t $tmp679 = param1.value;
int64_t $tmp680 = $tmp678.value;
bool $tmp681 = $tmp679 >= $tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block3; else goto block2;
block3:;
frost$core$Int $tmp684 = (frost$core$Int) {36u};
int64_t $tmp685 = param1.value;
int64_t $tmp686 = $tmp684.value;
bool $tmp687 = $tmp685 <= $tmp686;
frost$core$Bit $tmp688 = (frost$core$Bit) {$tmp687};
bool $tmp689 = $tmp688.value;
if ($tmp689) goto block1; else goto block2;
block2:;
frost$core$Int $tmp690 = (frost$core$Int) {940u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s691, $tmp690, &$s692);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:941
frost$core$Bit $tmp693 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s694);
bool $tmp695 = $tmp693.value;
if ($tmp695) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:942
frost$core$Int $tmp696 = (frost$core$Int) {1u};
frost$core$Bit $tmp697 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp698 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp696, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp697);
frost$core$String* $tmp699 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(param0, $tmp698);
frost$core$UInt64$nullable $tmp700 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q($tmp699, param1);
*(&local0) = $tmp700;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp699));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:943
frost$core$UInt64$nullable $tmp701 = *(&local0);
frost$core$Bit $tmp702 = (frost$core$Bit) {!$tmp701.nonnull};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:944
return ((frost$core$Int32$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:946
frost$core$UInt64$nullable $tmp704 = *(&local0);
frost$core$Bit $tmp705 = (frost$core$Bit) {$tmp704.nonnull};
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block9; else goto block10;
block10:;
frost$core$Int $tmp707 = (frost$core$Int) {946u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s708, $tmp707, &$s709);
abort(); // unreachable
block9:;
// begin inline call to function frost.core.UInt64.get_asInt32():frost.core.Int32 from Int32.frost:946:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:562
uint64_t $tmp710 = ((frost$core$UInt64) $tmp704.value).value;
frost$core$Int32 $tmp711 = (frost$core$Int32) {((int32_t) $tmp710)};
// begin inline call to function frost.core.Int32.-():frost.core.Int32 from Int32.frost:946:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:119
int32_t $tmp712 = $tmp711.value;
int32_t $tmp713 = -$tmp712;
frost$core$Int32 $tmp714 = (frost$core$Int32) {$tmp713};
return ((frost$core$Int32$nullable) { $tmp714, true });
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:949
frost$core$UInt64$nullable $tmp715 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp715;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:950
frost$core$UInt64$nullable $tmp716 = *(&local1);
frost$core$Bit $tmp717 = (frost$core$Bit) {!$tmp716.nonnull};
bool $tmp718 = $tmp717.value;
if ($tmp718) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:951
return ((frost$core$Int32$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:953
frost$core$UInt64$nullable $tmp719 = *(&local1);
frost$core$Bit $tmp720 = (frost$core$Bit) {$tmp719.nonnull};
bool $tmp721 = $tmp720.value;
if ($tmp721) goto block15; else goto block16;
block16:;
frost$core$Int $tmp722 = (frost$core$Int) {953u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s723, $tmp722, &$s724);
abort(); // unreachable
block15:;
// begin inline call to function frost.core.UInt64.get_asInt32():frost.core.Int32 from Int32.frost:953:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:562
uint64_t $tmp725 = ((frost$core$UInt64) $tmp719.value).value;
frost$core$Int32 $tmp726 = (frost$core$Int32) {((int32_t) $tmp725)};
return ((frost$core$Int32$nullable) { $tmp726, true });
block5:;
goto block18;
block18:;

}
frost$core$Int frost$core$Int32$get_asInt$R$frost$core$Int(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:960
int32_t $tmp727 = param0.value;
frost$core$Int $tmp728 = (frost$core$Int) {((int64_t) $tmp727)};
return $tmp728;

}
frost$core$Int8 frost$core$Int32$get_asInt8$R$frost$core$Int8(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:966
int32_t $tmp729 = param0.value;
frost$core$Int8 $tmp730 = (frost$core$Int8) {((int8_t) $tmp729)};
return $tmp730;

}
frost$core$Int16 frost$core$Int32$get_asInt16$R$frost$core$Int16(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:972
int32_t $tmp731 = param0.value;
frost$core$Int16 $tmp732 = (frost$core$Int16) {((int16_t) $tmp731)};
return $tmp732;

}
frost$core$Int64 frost$core$Int32$get_asInt64$R$frost$core$Int64(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:978
int32_t $tmp733 = param0.value;
frost$core$Int64 $tmp734 = (frost$core$Int64) {((int64_t) $tmp733)};
return $tmp734;

}
frost$core$UInt frost$core$Int32$get_asUInt$R$frost$core$UInt(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:984
int32_t $tmp735 = param0.value;
frost$core$UInt $tmp736 = (frost$core$UInt) {((uint64_t) $tmp735)};
return $tmp736;

}
frost$core$UInt8 frost$core$Int32$get_asUInt8$R$frost$core$UInt8(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:990
int32_t $tmp737 = param0.value;
frost$core$UInt8 $tmp738 = (frost$core$UInt8) {((uint8_t) $tmp737)};
return $tmp738;

}
frost$core$UInt16 frost$core$Int32$get_asUInt16$R$frost$core$UInt16(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:996
int32_t $tmp739 = param0.value;
frost$core$UInt16 $tmp740 = (frost$core$UInt16) {((uint16_t) $tmp739)};
return $tmp740;

}
frost$core$UInt32 frost$core$Int32$get_asUInt32$R$frost$core$UInt32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1002
int32_t $tmp741 = param0.value;
frost$core$UInt32 $tmp742 = (frost$core$UInt32) {((uint32_t) $tmp741)};
return $tmp742;

}
frost$core$UInt64 frost$core$Int32$get_asUInt64$R$frost$core$UInt64(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1008
int32_t $tmp743 = param0.value;
frost$core$UInt64 $tmp744 = (frost$core$UInt64) {((uint64_t) $tmp743)};
return $tmp744;

}
frost$core$Real32 frost$core$Int32$get_asReal32$R$frost$core$Real32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1014
int32_t $tmp745 = param0.value;
frost$core$Real32 $tmp746 = (frost$core$Real32) {((float) $tmp745)};
return $tmp746;

}
frost$core$Real64 frost$core$Int32$get_asReal64$R$frost$core$Real64(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1020
int32_t $tmp747 = param0.value;
frost$core$Real64 $tmp748 = (frost$core$Real64) {((double) $tmp747)};
return $tmp748;

}
frost$core$String* frost$core$Int32$get_asString$R$frost$core$String(frost$core$Int32 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$Int32 local3;
frost$core$Int local4;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1026
frost$core$Int $tmp749 = (frost$core$Int) {11u};
*(&local0) = $tmp749;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1027
frost$core$Int $tmp750 = *(&local0);
frost$core$Int64 $tmp751 = frost$core$Int64$init$frost$core$Int($tmp750);
int64_t $tmp752 = $tmp751.value;
frost$core$Char8* $tmp753 = ((frost$core$Char8*) frostAlloc($tmp752 * 1));
*(&local1) = $tmp753;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1028
frost$core$Int $tmp754 = *(&local0);
frost$core$Int $tmp755 = (frost$core$Int) {1u};
int64_t $tmp756 = $tmp754.value;
int64_t $tmp757 = $tmp755.value;
int64_t $tmp758 = $tmp756 - $tmp757;
frost$core$Int $tmp759 = (frost$core$Int) {$tmp758};
*(&local2) = $tmp759;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1029
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1030
frost$core$Int32 $tmp760 = *(&local3);
frost$core$Int32 $tmp761 = (frost$core$Int32) {0u};
int32_t $tmp762 = $tmp760.value;
int32_t $tmp763 = $tmp761.value;
bool $tmp764 = $tmp762 >= $tmp763;
frost$core$Bit $tmp765 = (frost$core$Bit) {$tmp764};
bool $tmp766 = $tmp765.value;
if ($tmp766) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1031
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1032
frost$core$Char8* $tmp767 = *(&local1);
frost$core$Int $tmp768 = *(&local2);
frost$core$Int64 $tmp769 = frost$core$Int64$init$frost$core$Int($tmp768);
frost$core$Int32 $tmp770 = *(&local3);
frost$core$Int32 $tmp771 = (frost$core$Int32) {10u};
// begin inline call to function frost.core.Int32.%(other:frost.core.Int32):frost.core.Int32 from Int32.frost:1032:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:185
int32_t $tmp772 = $tmp770.value;
int32_t $tmp773 = $tmp771.value;
int32_t $tmp774 = $tmp772 % $tmp773;
frost$core$Int32 $tmp775 = (frost$core$Int32) {$tmp774};
frost$core$Int32 $tmp776 = (frost$core$Int32) {48u};
int32_t $tmp777 = $tmp775.value;
int32_t $tmp778 = $tmp776.value;
int32_t $tmp779 = $tmp777 + $tmp778;
frost$core$Int32 $tmp780 = (frost$core$Int32) {$tmp779};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int32.frost:1032:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:990
int32_t $tmp781 = $tmp780.value;
frost$core$UInt8 $tmp782 = (frost$core$UInt8) {((uint8_t) $tmp781)};
frost$core$Char8 $tmp783 = frost$core$Char8$init$frost$core$UInt8($tmp782);
int64_t $tmp784 = $tmp769.value;
$tmp767[$tmp784] = $tmp783;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1033
frost$core$Int32 $tmp785 = *(&local3);
frost$core$Int32 $tmp786 = (frost$core$Int32) {10u};
int32_t $tmp787 = $tmp785.value;
int32_t $tmp788 = $tmp786.value;
int32_t $tmp789 = $tmp787 / $tmp788;
frost$core$Int32 $tmp790 = (frost$core$Int32) {$tmp789};
*(&local3) = $tmp790;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1034
frost$core$Int $tmp791 = *(&local2);
frost$core$Int $tmp792 = (frost$core$Int) {1u};
int64_t $tmp793 = $tmp791.value;
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793 - $tmp794;
frost$core$Int $tmp796 = (frost$core$Int) {$tmp795};
*(&local2) = $tmp796;
frost$core$Int32 $tmp797 = *(&local3);
frost$core$Int32 $tmp798 = (frost$core$Int32) {0u};
int32_t $tmp799 = $tmp797.value;
int32_t $tmp800 = $tmp798.value;
bool $tmp801 = $tmp799 > $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1037
frost$core$Int $tmp804 = *(&local2);
frost$core$Int $tmp805 = (frost$core$Int) {1u};
int64_t $tmp806 = $tmp804.value;
int64_t $tmp807 = $tmp805.value;
int64_t $tmp808 = $tmp806 + $tmp807;
frost$core$Int $tmp809 = (frost$core$Int) {$tmp808};
*(&local2) = $tmp809;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1040
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1041
frost$core$Char8* $tmp810 = *(&local1);
frost$core$Int $tmp811 = *(&local2);
frost$core$Int64 $tmp812 = frost$core$Int64$init$frost$core$Int($tmp811);
frost$core$Int32 $tmp813 = (frost$core$Int32) {48u};
frost$core$Int32 $tmp814 = *(&local3);
frost$core$Int32 $tmp815 = (frost$core$Int32) {10u};
// begin inline call to function frost.core.Int32.%(other:frost.core.Int32):frost.core.Int32 from Int32.frost:1041:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:185
int32_t $tmp816 = $tmp814.value;
int32_t $tmp817 = $tmp815.value;
int32_t $tmp818 = $tmp816 % $tmp817;
frost$core$Int32 $tmp819 = (frost$core$Int32) {$tmp818};
int32_t $tmp820 = $tmp813.value;
int32_t $tmp821 = $tmp819.value;
int32_t $tmp822 = $tmp820 - $tmp821;
frost$core$Int32 $tmp823 = (frost$core$Int32) {$tmp822};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int32.frost:1041:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:990
int32_t $tmp824 = $tmp823.value;
frost$core$UInt8 $tmp825 = (frost$core$UInt8) {((uint8_t) $tmp824)};
frost$core$Char8 $tmp826 = frost$core$Char8$init$frost$core$UInt8($tmp825);
int64_t $tmp827 = $tmp812.value;
$tmp810[$tmp827] = $tmp826;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1042
frost$core$Int32 $tmp828 = *(&local3);
frost$core$Int32 $tmp829 = (frost$core$Int32) {10u};
int32_t $tmp830 = $tmp828.value;
int32_t $tmp831 = $tmp829.value;
int32_t $tmp832 = $tmp830 / $tmp831;
frost$core$Int32 $tmp833 = (frost$core$Int32) {$tmp832};
*(&local3) = $tmp833;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1043
frost$core$Int $tmp834 = *(&local2);
frost$core$Int $tmp835 = (frost$core$Int) {1u};
int64_t $tmp836 = $tmp834.value;
int64_t $tmp837 = $tmp835.value;
int64_t $tmp838 = $tmp836 - $tmp837;
frost$core$Int $tmp839 = (frost$core$Int) {$tmp838};
*(&local2) = $tmp839;
frost$core$Int32 $tmp840 = *(&local3);
frost$core$Int32 $tmp841 = (frost$core$Int32) {0u};
int32_t $tmp842 = $tmp840.value;
int32_t $tmp843 = $tmp841.value;
bool $tmp844 = $tmp842 < $tmp843;
frost$core$Bit $tmp845 = (frost$core$Bit) {$tmp844};
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1046
frost$core$Char8* $tmp847 = *(&local1);
frost$core$Int $tmp848 = *(&local2);
frost$core$Int64 $tmp849 = frost$core$Int64$init$frost$core$Int($tmp848);
frost$core$UInt8 $tmp850 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp851 = frost$core$Char8$init$frost$core$UInt8($tmp850);
int64_t $tmp852 = $tmp849.value;
$tmp847[$tmp852] = $tmp851;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1048
frost$core$Int $tmp853 = *(&local0);
frost$core$Int $tmp854 = *(&local2);
int64_t $tmp855 = $tmp853.value;
int64_t $tmp856 = $tmp854.value;
int64_t $tmp857 = $tmp855 - $tmp856;
frost$core$Int $tmp858 = (frost$core$Int) {$tmp857};
*(&local4) = $tmp858;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1049
frost$core$Int $tmp859 = (frost$core$Int) {0u};
frost$core$Int $tmp860 = *(&local4);
frost$core$Bit $tmp861 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp862 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp859, $tmp860, $tmp861);
frost$core$Int $tmp863 = $tmp862.min;
*(&local5) = $tmp863;
frost$core$Int $tmp864 = $tmp862.max;
frost$core$Bit $tmp865 = $tmp862.inclusive;
bool $tmp866 = $tmp865.value;
frost$core$Int $tmp867 = (frost$core$Int) {1u};
if ($tmp866) goto block17; else goto block18;
block17:;
int64_t $tmp868 = $tmp863.value;
int64_t $tmp869 = $tmp864.value;
bool $tmp870 = $tmp868 <= $tmp869;
frost$core$Bit $tmp871 = (frost$core$Bit) {$tmp870};
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block14; else goto block15;
block18:;
int64_t $tmp873 = $tmp863.value;
int64_t $tmp874 = $tmp864.value;
bool $tmp875 = $tmp873 < $tmp874;
frost$core$Bit $tmp876 = (frost$core$Bit) {$tmp875};
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1050
frost$core$Char8* $tmp878 = *(&local1);
frost$core$Int $tmp879 = *(&local5);
frost$core$Int64 $tmp880 = frost$core$Int64$init$frost$core$Int($tmp879);
frost$core$Char8* $tmp881 = *(&local1);
frost$core$Int $tmp882 = *(&local5);
frost$core$Int $tmp883 = *(&local2);
int64_t $tmp884 = $tmp882.value;
int64_t $tmp885 = $tmp883.value;
int64_t $tmp886 = $tmp884 + $tmp885;
frost$core$Int $tmp887 = (frost$core$Int) {$tmp886};
frost$core$Int64 $tmp888 = frost$core$Int64$init$frost$core$Int($tmp887);
int64_t $tmp889 = $tmp888.value;
frost$core$Char8 $tmp890 = $tmp881[$tmp889];
int64_t $tmp891 = $tmp880.value;
$tmp878[$tmp891] = $tmp890;
frost$core$Int $tmp892 = *(&local5);
int64_t $tmp893 = $tmp864.value;
int64_t $tmp894 = $tmp892.value;
int64_t $tmp895 = $tmp893 - $tmp894;
frost$core$Int $tmp896 = (frost$core$Int) {$tmp895};
if ($tmp866) goto block20; else goto block21;
block20:;
int64_t $tmp897 = $tmp896.value;
int64_t $tmp898 = $tmp867.value;
bool $tmp899 = $tmp897 >= $tmp898;
frost$core$Bit $tmp900 = (frost$core$Bit) {$tmp899};
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block19; else goto block15;
block21:;
int64_t $tmp902 = $tmp896.value;
int64_t $tmp903 = $tmp867.value;
bool $tmp904 = $tmp902 > $tmp903;
frost$core$Bit $tmp905 = (frost$core$Bit) {$tmp904};
bool $tmp906 = $tmp905.value;
if ($tmp906) goto block19; else goto block15;
block19:;
int64_t $tmp907 = $tmp892.value;
int64_t $tmp908 = $tmp867.value;
int64_t $tmp909 = $tmp907 + $tmp908;
frost$core$Int $tmp910 = (frost$core$Int) {$tmp909};
*(&local5) = $tmp910;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1052
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp911 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp912 = *(&local1);
frost$core$Int $tmp913 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp911, $tmp912, $tmp913);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp911));
return $tmp911;

}
frost$core$String* frost$core$Int32$format$frost$core$String$R$frost$core$String(frost$core$Int32 param0, frost$core$String* param1) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1058
int32_t $tmp914 = param0.value;
bool $tmp915 = $tmp914 < 0u;
frost$core$Bit $tmp916 = (frost$core$Bit) {$tmp915};
// begin inline call to function frost.core.Int32.get_abs():frost.core.Int32 from Int32.frost:1058:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:730
frost$core$Int32 $tmp917 = (frost$core$Int32) {0u};
int32_t $tmp918 = param0.value;
int32_t $tmp919 = $tmp917.value;
bool $tmp920 = $tmp918 < $tmp919;
frost$core$Bit $tmp921 = (frost$core$Bit) {$tmp920};
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:731
// begin inline call to function frost.core.Int32.-():frost.core.Int32 from Int32.frost:731:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:119
int32_t $tmp923 = param0.value;
int32_t $tmp924 = -$tmp923;
frost$core$Int32 $tmp925 = (frost$core$Int32) {$tmp924};
*(&local0) = $tmp925;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:733
*(&local0) = param0;
goto block1;
block1:;
frost$core$Int32 $tmp926 = *(&local0);
// begin inline call to function frost.core.Int32.get_asUInt64():frost.core.UInt64 from Int32.frost:1058:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:1008
int32_t $tmp927 = $tmp926.value;
frost$core$UInt64 $tmp928 = (frost$core$UInt64) {((uint64_t) $tmp927)};
frost$core$UInt64 $tmp929 = (frost$core$UInt64) {4294967295u};
frost$core$String* $tmp930 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp916, $tmp928, $tmp929, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp930));
return $tmp930;

}
void frost$core$Int32$cleanup(frost$core$Int32 param0) {

return;

}

