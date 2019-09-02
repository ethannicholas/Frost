#include "frost/core/UInt32.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Int64.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt64.h"
#include "frost/core/UInt.h"
#include "frost/core/Real32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/Range.LTfrost/core/UInt32.GT.h"
#include "org/frostlang/frost/UInt32List.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt32.Cfrost/core/UInt32.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, ((frost$core$UInt32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt32$format$frost$core$String$R$frost$core$String(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt32$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt32$get_count$R$frost$core$Int(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt32$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt32$get_hash$R$frost$core$Int(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt32$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt32$get_asString$R$frost$core$String(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt32$$ADD$frost$core$Int$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$$ADD$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$$ADD$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt32$$SUB$frost$core$Int$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$$SUB$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$$SUB$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SUB$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt32$$SUB$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt32$$MUL$frost$core$Int$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$$MUL$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$$MUL$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt32$$INTDIV$frost$core$Int$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$$INTDIV$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt32$$REM$frost$core$Int$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$$REM$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$$REM$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$BNOT$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt32$$BNOT$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt32$$BAND$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt32$$BAND$frost$core$Int$R$frost$core$Int(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$$BAND$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$$BAND$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt32$$BOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt32$$BOR$frost$core$Int$R$frost$core$Int(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$$BOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$$BOR$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt32$$BXOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt32$$BXOR$frost$core$Int$R$frost$core$Int(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$$BXOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$$BXOR$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$Int$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt32$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$Int$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt32$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$Int$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt32$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$Int$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt32$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$Int$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt32$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$Int$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt32$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$min$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt32$min$frost$core$Int$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$min$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$min$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$max$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt32$max$frost$core$Int$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$max$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt32$max$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$UInt32$get_bitCount$R$frost$core$UInt32$shim(frost$core$UInt32* sret, frost$core$Object* p0) {
    frost$core$UInt32$get_bitCount$R$frost$core$UInt32(sret, ((frost$core$UInt32$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$UInt32$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt32$get_asInt$R$frost$core$Int(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$UInt32$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt32$get_asInt8$R$frost$core$Int8(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt32$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt32$get_asInt16$R$frost$core$Int16(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt32$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt32$get_asInt32$R$frost$core$Int32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt32$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt32$get_asInt64$R$frost$core$Int64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt32$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$UInt32$get_asUInt$R$frost$core$UInt(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt32$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt32$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt32$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt32$get_asUInt64$R$frost$core$UInt64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt32$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt32$get_asReal32$R$frost$core$Real32(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt32$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt32$get_asReal64$R$frost$core$Real64(((frost$core$UInt32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt32$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt32$cleanup(((frost$core$UInt32$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$core$UInt32$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt32$_frost$core$Comparable, { frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt32$_frost$collections$ListView, { frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt32$_frost$core$Equatable, { frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt32$_frost$collections$Iterable, { frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$UInt32$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt32$_frost$core$Formattable, { frost$core$UInt32$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt32$_frost$collections$CollectionView, { frost$core$UInt32$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
frost$core$UInt32$class_type frost$core$UInt32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt32$_frost$collections$HashKey, { frost$core$UInt32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$ADD$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$ADD$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$SUB$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$SUB$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$SUB$R$frost$core$UInt32$shim, frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$MUL$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$MUL$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$INTDIV$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$REM$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$REM$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt32$$BNOT$R$frost$core$UInt32$shim, frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$min$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$max$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$get_count$R$frost$core$Int$shim, frost$core$UInt32$get_bitCount$R$frost$core$UInt32$shim, frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt32$get_hash$R$frost$core$Int$shim, frost$core$UInt32$get_asInt$R$frost$core$Int$shim, frost$core$UInt32$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt32$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt32$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt32$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt32$get_asUInt$R$frost$core$UInt$shim, frost$core$UInt32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt32$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt32$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[16]; } frost$core$UInt32$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Comparable, { frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$ListView, { frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Equatable, { frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$Iterable, { frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$UInt32$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Formattable, { frost$core$UInt32$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$CollectionView, { frost$core$UInt32$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s3;
frost$core$UInt32$wrapperclass_type frost$core$UInt32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$HashKey, { frost$core$UInt32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -3969265259549713363, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -3969265259549713363, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 7225265477699224004, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, 3042765502446704409, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 7225265477699224004, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x3f", 121, -171680697208125098, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 7225265477699224004, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$UInt32 frost$core$UInt32$init$builtin_uint32(uint32_t param0) {

frost$core$UInt32 local0;
uint32_t* _1;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:30
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt32 local0;
uint8_t _1;
uint32_t _2;
uint32_t* _3;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:36
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt32 local0;
uint16_t _1;
uint32_t _2;
uint32_t* _3;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:42
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:48
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:54
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:60
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:66
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt32$$ADD$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:72
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:78
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:84
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:90
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:96
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt32$$SUB$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:102
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt32$$SUB$R$frost$core$UInt32(frost$core$UInt32 param0) {

uint32_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:107
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:113
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:119
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:125
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:131
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt32$$MUL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:137
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:143
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:149
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:155
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:161
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt32$$INTDIV$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:167
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:173
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:179
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:185
_1 = param0.value;
_2 = param1.value;
_3 = _1 % _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:191
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt32$$REM$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:197
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int8 param1) {

uint32_t _1;
float _2;
int8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:203
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int16 param1) {

uint32_t _1;
float _2;
int16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:209
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
float _2;
int32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:215
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$Int64 param1) {

uint32_t _1;
double _2;
int64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:221
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

uint32_t _1;
float _2;
uint8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:227
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

uint32_t _1;
float _2;
uint16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:233
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
float _2;
uint32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:239
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
double _2;
uint64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:245
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Real32 param1) {

uint32_t _1;
float _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:251
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$Real64 param1) {

uint32_t _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:257
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt32$$BNOT$R$frost$core$UInt32(frost$core$UInt32 param0) {

uint32_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:262
_1 = param0.value;
_2 = !_1;
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:268
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:274
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt32$$BAND$frost$core$Int$R$frost$core$Int(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:280
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:286
_1 = param0.value;
_2 = param1.value;
_3 = _1 & _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:292
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt32$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:298
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:304
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:310
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt32$$BOR$frost$core$Int$R$frost$core$Int(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:316
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:322
_1 = param0.value;
_2 = param1.value;
_3 = _1 | _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:328
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt32$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:334
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:340
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:346
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt32$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:352
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:358
_1 = param0.value;
_2 = param1.value;
_3 = _1 ^ _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$UInt64 frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:364
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt32$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:370
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:376
_1 = param0.value;
_2 = param1.value;
_3 = _1 << _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
uint32_t _3;
frost$core$UInt32 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:382
_1 = param0.value;
_2 = param1.value;
_3 = _1 >> _2;
_4 = (frost$core$UInt32) {_3};
return _4;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

uint32_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:388
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

uint32_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:394
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:400
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:406
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

uint32_t _1;
uint8_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:412
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

uint32_t _1;
uint16_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:418
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:425
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:431
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:437
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

uint32_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:443
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

uint32_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:449
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:455
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:461
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

uint32_t _1;
uint8_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:467
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

uint32_t _1;
uint16_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:473
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:480
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:486
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:492
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

uint32_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:498
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

uint32_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:504
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:510
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:516
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

uint32_t _1;
uint8_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:522
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

uint32_t _1;
uint16_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:528
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:535
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:541
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:547
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

uint32_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:553
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

uint32_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:559
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:565
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:571
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

uint32_t _1;
uint8_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:577
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

uint32_t _1;
uint16_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:583
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:590
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:596
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:602
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

uint32_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:608
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

uint32_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:614
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:620
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:626
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

uint32_t _1;
uint8_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:632
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

uint32_t _1;
uint16_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:638
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:645
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:651
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:657
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

uint32_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:663
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

uint32_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:669
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:675
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:681
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

uint32_t _1;
uint8_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:687
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

uint32_t _1;
uint16_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:693
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:700
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:706
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:712
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int8 param1) {

uint32_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint32_t _10;
int64_t _11;
frost$core$Int64 _12;
int8_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:718
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:719
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:721
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int16 param1) {

uint32_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint32_t _10;
int64_t _11;
frost$core$Int64 _12;
int16_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:727
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:728
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:730
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint32_t _10;
int64_t _11;
frost$core$Int64 _12;
int32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:736
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:737
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:739
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint32_t _10;
int64_t _11;
frost$core$Int64 _12;
int64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:746
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:747
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:749
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

uint32_t _1;
uint8_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint32_t _9;
frost$core$UInt32 _10;
uint8_t _13;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:755
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:756
_9 = param0.value;
_10 = (frost$core$UInt32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:758
_13 = param1.value;
_14 = ((uint32_t) _13);
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

uint32_t _1;
uint16_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint32_t _9;
frost$core$UInt32 _10;
uint16_t _13;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:764
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:765
_9 = param0.value;
_10 = (frost$core$UInt32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:767
_13 = param1.value;
_14 = ((uint32_t) _13);
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint32_t _8;
frost$core$UInt32 _9;
uint32_t _12;
frost$core$UInt32 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:773
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:774
_8 = param0.value;
_9 = (frost$core$UInt32) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:776
_12 = param1.value;
_13 = (frost$core$UInt32) {_12};
return _13;

}
frost$core$UInt64 frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint32_t _9;
uint64_t _10;
frost$core$UInt64 _11;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:782
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:783
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:785
_14 = param1.value;
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt frost$core$UInt32$min$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint32_t _9;
uint64_t _10;
frost$core$UInt _11;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:791
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:792
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:794
_14 = param1.value;
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int8 param1) {

uint32_t _1;
int64_t _2;
int8_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint32_t _10;
int64_t _11;
frost$core$Int64 _12;
int8_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:800
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:801
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:803
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int16 param1) {

uint32_t _1;
int64_t _2;
int16_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint32_t _10;
int64_t _11;
frost$core$Int64 _12;
int16_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:809
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:810
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:812
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

uint32_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint32_t _10;
int64_t _11;
frost$core$Int64 _12;
int32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:818
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:819
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:821
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

uint32_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint32_t _10;
int64_t _11;
frost$core$Int64 _12;
int64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:828
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:829
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:831
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

uint32_t _1;
uint8_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint32_t _9;
frost$core$UInt32 _10;
uint8_t _13;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:837
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:838
_9 = param0.value;
_10 = (frost$core$UInt32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:840
_13 = param1.value;
_14 = ((uint32_t) _13);
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

uint32_t _1;
uint16_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint32_t _9;
frost$core$UInt32 _10;
uint16_t _13;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:846
_1 = param0.value;
_2 = param1.value;
_3 = ((uint32_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:847
_9 = param0.value;
_10 = (frost$core$UInt32) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:849
_13 = param1.value;
_14 = ((uint32_t) _13);
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

uint32_t _1;
uint32_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint32_t _8;
frost$core$UInt32 _9;
uint32_t _12;
frost$core$UInt32 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:855
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:856
_8 = param0.value;
_9 = (frost$core$UInt32) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:858
_12 = param1.value;
_13 = (frost$core$UInt32) {_12};
return _13;

}
frost$core$UInt64 frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint32_t _9;
uint64_t _10;
frost$core$UInt64 _11;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:864
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:865
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:867
_14 = param1.value;
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt frost$core$UInt32$max$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

uint32_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint32_t _9;
uint64_t _10;
frost$core$UInt _11;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:873
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:874
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:876
_14 = param1.value;
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$Range$LTfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$Range$LTfrost$core$UInt32$GT param0) {

org$frostlang$frost$UInt32List* _1;
frost$core$UInt32 _2;
frost$core$UInt32 _3;
frost$core$UInt32 _4;
frost$core$Bit _5;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT _6;
frost$collections$ListView* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:881
FROST_ASSERT(40 == sizeof(org$frostlang$frost$UInt32List));
_1 = (org$frostlang$frost$UInt32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$UInt32List$class);
_2 = param0.min;
_3 = param0.max;
_4 = (frost$core$UInt32) {1u};
_5 = param0.inclusive;
_6 = frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$init$frost$core$UInt32$frost$core$UInt32$frost$core$UInt32$frost$core$Bit(_2, _3, _4, _5);
org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT(_1, _6);
_8 = ((frost$collections$ListView*) _1);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

org$frostlang$frost$UInt32List* _1;
frost$collections$ListView* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:886
FROST_ASSERT(40 == sizeof(org$frostlang$frost$UInt32List));
_1 = (org$frostlang$frost$UInt32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$UInt32List$class);
org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT(_1, param0);
_3 = ((frost$collections$ListView*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Bit frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

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
uint32_t _32;
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
frost$core$UInt32$wrapper* $tmp5;
$tmp5 = (frost$core$UInt32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$UInt32$wrapperclass);
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:892
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt32.frost:892:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_25 = _22.value;
_26 = param1.value;
_27 = _25 << _26;
_28 = (frost$core$Int) {_27};
// begin inline call to function frost.core.UInt32.&&(other:frost.core.Int):frost.core.Int from UInt32.frost:892:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:280
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
frost$core$Int frost$core$UInt32$get_count$R$frost$core$Int(frost$core$UInt32 param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:898
_1 = (frost$core$Int) {32u};
return _1;

}
frost$collections$Iterator* frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt32 param0) {

org$frostlang$frost$IntBitIterator* _1;
uint32_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$collections$Iterator* _10;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:908
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
_1 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.UInt32.get_asUInt64():frost.core.UInt64 from UInt32.frost:908:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:978
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
frost$core$Int frost$core$UInt32$get_hash$R$frost$core$Int(frost$core$UInt32 param0) {

uint32_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:913
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$UInt32$nullable frost$core$UInt32$parse$frost$core$String$frost$core$Int$R$frost$core$UInt32$Q(frost$core$String* param0, frost$core$Int param1) {

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
uint32_t _41;
frost$core$UInt32 _42;
frost$core$UInt32$nullable _44;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:920
_18 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:921
_21 = *(&local0);
_22 = !_21.nonnull;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:922
return ((frost$core$UInt32$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:924
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
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from UInt32.frost:924:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:592
_40 = _37.value;
_41 = ((uint32_t) _40);
_42 = (frost$core$UInt32) {_41};
_44 = ((frost$core$UInt32$nullable) { _42, true });
return _44;

}
frost$core$Int frost$core$UInt32$get_asInt$R$frost$core$Int(frost$core$UInt32 param0) {

uint32_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:930
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8 frost$core$UInt32$get_asInt8$R$frost$core$Int8(frost$core$UInt32 param0) {

uint32_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:936
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$UInt32$get_asInt16$R$frost$core$Int16(frost$core$UInt32 param0) {

uint32_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:942
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt32$get_asInt32$R$frost$core$Int32(frost$core$UInt32 param0) {

uint32_t _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:948
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$UInt32$get_asInt64$R$frost$core$Int64(frost$core$UInt32 param0) {

uint32_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:954
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$UInt frost$core$UInt32$get_asUInt$R$frost$core$UInt(frost$core$UInt32 param0) {

uint32_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:960
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$UInt8 frost$core$UInt32$get_asUInt8$R$frost$core$UInt8(frost$core$UInt32 param0) {

uint32_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(frost$core$UInt32 param0) {

uint32_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt64 frost$core$UInt32$get_asUInt64$R$frost$core$UInt64(frost$core$UInt32 param0) {

uint32_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:978
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Real32 frost$core$UInt32$get_asReal32$R$frost$core$Real32(frost$core$UInt32 param0) {

uint32_t _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:984
_1 = param0.value;
_2 = ((float) _1);
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real64 frost$core$UInt32$get_asReal64$R$frost$core$Real64(frost$core$UInt32 param0) {

uint32_t _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:990
_1 = param0.value;
_2 = ((double) _1);
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$String* frost$core$UInt32$get_asString$R$frost$core$String(frost$core$UInt32 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$UInt32 local3;
frost$core$Int local4;
frost$core$Int local5;
frost$core$Int _1;
frost$core$Int _4;
frost$core$Int64 _5;
int64_t _6;
frost$core$Char8* _7;
frost$core$Int _10;
frost$core$Int _11;
int64_t _12;
int64_t _13;
int64_t _14;
frost$core$Int _15;
frost$core$UInt32 _20;
frost$core$UInt32 _21;
uint32_t _22;
uint32_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Char8* _31;
frost$core$Int _32;
frost$core$Int64 _33;
frost$core$UInt32 _34;
frost$core$UInt32 _35;
uint32_t _38;
uint32_t _39;
uint32_t _40;
frost$core$UInt32 _41;
frost$core$UInt32 _43;
uint32_t _44;
uint32_t _45;
uint32_t _46;
frost$core$UInt32 _47;
uint32_t _50;
uint8_t _51;
frost$core$UInt8 _52;
frost$core$Char8 _54;
int64_t _55;
frost$core$UInt32 _58;
frost$core$UInt32 _59;
uint32_t _60;
uint32_t _61;
uint32_t _62;
frost$core$UInt32 _63;
frost$core$Int _66;
frost$core$Int _67;
int64_t _68;
int64_t _69;
int64_t _70;
frost$core$Int _71;
frost$core$UInt32 _74;
frost$core$UInt32 _75;
uint32_t _76;
uint32_t _77;
bool _78;
frost$core$Bit _79;
bool _80;
frost$core$Int _83;
frost$core$Int _84;
int64_t _85;
int64_t _86;
int64_t _87;
frost$core$Int _88;
frost$core$Char8* _95;
frost$core$Int _96;
frost$core$Int64 _97;
frost$core$UInt32 _98;
frost$core$UInt32 _99;
frost$core$UInt32 _100;
uint32_t _103;
uint32_t _104;
uint32_t _105;
frost$core$UInt32 _106;
uint32_t _108;
uint32_t _109;
uint32_t _110;
frost$core$UInt32 _111;
uint32_t _114;
uint8_t _115;
frost$core$UInt8 _116;
frost$core$Char8 _118;
int64_t _119;
frost$core$UInt32 _122;
frost$core$UInt32 _123;
uint32_t _124;
uint32_t _125;
uint32_t _126;
frost$core$UInt32 _127;
frost$core$Int _130;
frost$core$Int _131;
int64_t _132;
int64_t _133;
int64_t _134;
frost$core$Int _135;
frost$core$UInt32 _138;
frost$core$UInt32 _139;
uint32_t _140;
uint32_t _141;
bool _142;
frost$core$Bit _143;
bool _144;
frost$core$Char8* _147;
frost$core$Int _148;
frost$core$Int64 _149;
frost$core$UInt8 _150;
frost$core$Char8 _151;
int64_t _152;
frost$core$Int _156;
frost$core$Int _157;
int64_t _158;
int64_t _159;
int64_t _160;
frost$core$Int _161;
frost$core$Int _164;
frost$core$Int _165;
frost$core$Bit _166;
frost$core$Range$LTfrost$core$Int$GT _167;
frost$core$Int _168;
frost$core$Int _170;
frost$core$Bit _171;
bool _172;
frost$core$Int _173;
int64_t _175;
int64_t _176;
bool _177;
frost$core$Bit _178;
bool _179;
int64_t _181;
int64_t _182;
bool _183;
frost$core$Bit _184;
bool _185;
frost$core$Char8* _188;
frost$core$Int _189;
frost$core$Int64 _190;
frost$core$Char8* _191;
frost$core$Int _192;
frost$core$Int _193;
int64_t _194;
int64_t _195;
int64_t _196;
frost$core$Int _197;
frost$core$Int64 _198;
int64_t _199;
frost$core$Char8 _200;
int64_t _201;
frost$core$Int _204;
int64_t _205;
int64_t _206;
int64_t _207;
frost$core$Int _208;
int64_t _210;
int64_t _211;
bool _212;
frost$core$Bit _213;
bool _214;
int64_t _216;
int64_t _217;
bool _218;
frost$core$Bit _219;
bool _220;
int64_t _222;
int64_t _223;
int64_t _224;
frost$core$Int _225;
frost$core$String* _229;
frost$core$Char8* _230;
frost$core$Int _231;
frost$core$Object* _233;
frost$core$Object* _235;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:996
_1 = (frost$core$Int) {10u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:997
_4 = *(&local0);
_5 = frost$core$Int64$init$frost$core$Int(_4);
_6 = _5.value;
_7 = ((frost$core$Char8*) frostAlloc(_6 * 1));
*(&local1) = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:998
_10 = *(&local0);
_11 = (frost$core$Int) {1u};
_12 = _10.value;
_13 = _11.value;
_14 = _12 - _13;
_15 = (frost$core$Int) {_14};
*(&local2) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:999
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1000
_20 = *(&local3);
_21 = (frost$core$UInt32) {0u};
_22 = _20.value;
_23 = _21.value;
_24 = _22 >= _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1001
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1002
_31 = *(&local1);
_32 = *(&local2);
_33 = frost$core$Int64$init$frost$core$Int(_32);
_34 = *(&local3);
_35 = (frost$core$UInt32) {10u};
// begin inline call to function frost.core.UInt32.%(other:frost.core.UInt32):frost.core.UInt32 from UInt32.frost:1002:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:185
_38 = _34.value;
_39 = _35.value;
_40 = _38 % _39;
_41 = (frost$core$UInt32) {_40};
_43 = (frost$core$UInt32) {48u};
_44 = _41.value;
_45 = _43.value;
_46 = _44 + _45;
_47 = (frost$core$UInt32) {_46};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt32.frost:1002:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_50 = _47.value;
_51 = ((uint8_t) _50);
_52 = (frost$core$UInt8) {_51};
_54 = frost$core$Char8$init$frost$core$UInt8(_52);
_55 = _33.value;
_31[_55] = _54;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1003
_58 = *(&local3);
_59 = (frost$core$UInt32) {10u};
_60 = _58.value;
_61 = _59.value;
_62 = _60 / _61;
_63 = (frost$core$UInt32) {_62};
*(&local3) = _63;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1004
_66 = *(&local2);
_67 = (frost$core$Int) {1u};
_68 = _66.value;
_69 = _67.value;
_70 = _68 - _69;
_71 = (frost$core$Int) {_70};
*(&local2) = _71;
_74 = *(&local3);
_75 = (frost$core$UInt32) {0u};
_76 = _74.value;
_77 = _75.value;
_78 = _76 > _77;
_79 = (frost$core$Bit) {_78};
_80 = _79.value;
if (_80) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1007
_83 = *(&local2);
_84 = (frost$core$Int) {1u};
_85 = _83.value;
_86 = _84.value;
_87 = _85 + _86;
_88 = (frost$core$Int) {_87};
*(&local2) = _88;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1010
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1011
_95 = *(&local1);
_96 = *(&local2);
_97 = frost$core$Int64$init$frost$core$Int(_96);
_98 = (frost$core$UInt32) {48u};
_99 = *(&local3);
_100 = (frost$core$UInt32) {10u};
// begin inline call to function frost.core.UInt32.%(other:frost.core.UInt32):frost.core.UInt32 from UInt32.frost:1011:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:185
_103 = _99.value;
_104 = _100.value;
_105 = _103 % _104;
_106 = (frost$core$UInt32) {_105};
_108 = _98.value;
_109 = _106.value;
_110 = _108 - _109;
_111 = (frost$core$UInt32) {_110};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt32.frost:1011:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_114 = _111.value;
_115 = ((uint8_t) _114);
_116 = (frost$core$UInt8) {_115};
_118 = frost$core$Char8$init$frost$core$UInt8(_116);
_119 = _97.value;
_95[_119] = _118;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1012
_122 = *(&local3);
_123 = (frost$core$UInt32) {10u};
_124 = _122.value;
_125 = _123.value;
_126 = _124 / _125;
_127 = (frost$core$UInt32) {_126};
*(&local3) = _127;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1013
_130 = *(&local2);
_131 = (frost$core$Int) {1u};
_132 = _130.value;
_133 = _131.value;
_134 = _132 - _133;
_135 = (frost$core$Int) {_134};
*(&local2) = _135;
_138 = *(&local3);
_139 = (frost$core$UInt32) {0u};
_140 = _138.value;
_141 = _139.value;
_142 = _140 < _141;
_143 = (frost$core$Bit) {_142};
_144 = _143.value;
if (_144) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1016
_147 = *(&local1);
_148 = *(&local2);
_149 = frost$core$Int64$init$frost$core$Int(_148);
_150 = (frost$core$UInt8) {45u};
_151 = frost$core$Char8$init$frost$core$UInt8(_150);
_152 = _149.value;
_147[_152] = _151;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1018
_156 = *(&local0);
_157 = *(&local2);
_158 = _156.value;
_159 = _157.value;
_160 = _158 - _159;
_161 = (frost$core$Int) {_160};
*(&local4) = _161;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1019
_164 = (frost$core$Int) {0u};
_165 = *(&local4);
_166 = (frost$core$Bit) {false};
_167 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_164, _165, _166);
_168 = _167.min;
*(&local5) = _168;
_170 = _167.max;
_171 = _167.inclusive;
_172 = _171.value;
_173 = (frost$core$Int) {1u};
if (_172) goto block17; else goto block18;
block17:;
_175 = _168.value;
_176 = _170.value;
_177 = _175 <= _176;
_178 = (frost$core$Bit) {_177};
_179 = _178.value;
if (_179) goto block14; else goto block15;
block18:;
_181 = _168.value;
_182 = _170.value;
_183 = _181 < _182;
_184 = (frost$core$Bit) {_183};
_185 = _184.value;
if (_185) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1020
_188 = *(&local1);
_189 = *(&local5);
_190 = frost$core$Int64$init$frost$core$Int(_189);
_191 = *(&local1);
_192 = *(&local5);
_193 = *(&local2);
_194 = _192.value;
_195 = _193.value;
_196 = _194 + _195;
_197 = (frost$core$Int) {_196};
_198 = frost$core$Int64$init$frost$core$Int(_197);
_199 = _198.value;
_200 = _191[_199];
_201 = _190.value;
_188[_201] = _200;
_204 = *(&local5);
_205 = _170.value;
_206 = _204.value;
_207 = _205 - _206;
_208 = (frost$core$Int) {_207};
if (_172) goto block20; else goto block21;
block20:;
_210 = _208.value;
_211 = _173.value;
_212 = _210 >= _211;
_213 = (frost$core$Bit) {_212};
_214 = _213.value;
if (_214) goto block19; else goto block15;
block21:;
_216 = _208.value;
_217 = _173.value;
_218 = _216 > _217;
_219 = (frost$core$Bit) {_218};
_220 = _219.value;
if (_220) goto block19; else goto block15;
block19:;
_222 = _204.value;
_223 = _173.value;
_224 = _222 + _223;
_225 = (frost$core$Int) {_224};
*(&local5) = _225;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1022
FROST_ASSERT(48 == sizeof(frost$core$String));
_229 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_230 = *(&local1);
_231 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_229, _230, _231);
_233 = ((frost$core$Object*) _229);
frost$core$Frost$ref$frost$core$Object$Q(_233);
_235 = ((frost$core$Object*) _229);
frost$core$Frost$unref$frost$core$Object$Q(_235);
return _229;

}
frost$core$String* frost$core$UInt32$format$frost$core$String$R$frost$core$String(frost$core$UInt32 param0, frost$core$String* param1) {

frost$core$Bit _1;
uint32_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:1028
_1 = (frost$core$Bit) {false};
// begin inline call to function frost.core.UInt32.get_asUInt64():frost.core.UInt64 from UInt32.frost:1028:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:978
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
void frost$core$UInt32$cleanup(frost$core$UInt32 param0) {

return;

}

