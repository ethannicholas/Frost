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
#include "frost/collections/Key.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
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
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt32$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt32$get_hash$R$frost$core$Int(((frost$core$UInt32$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$UInt32$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt32$_frost$core$Comparable, { frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt32$_frost$collections$ListView, { frost$core$UInt32$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt32$_frost$collections$Key, { frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt32$_frost$core$Equatable, { frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt32$_frost$collections$Iterable, { frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt32$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt32$_frost$core$Formattable, { frost$core$UInt32$get_count$R$frost$core$Int$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$UInt32$class_type frost$core$UInt32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt32$_frost$collections$CollectionView, { frost$core$UInt32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$ADD$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$ADD$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$SUB$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$SUB$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$SUB$R$frost$core$UInt32$shim, frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$MUL$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$MUL$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$INTDIV$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$$REM$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$REM$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt32$$BNOT$R$frost$core$UInt32$shim, frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt32$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$min$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt32$max$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt32$get_count$R$frost$core$Int$shim, frost$core$UInt32$get_bitCount$R$frost$core$UInt32$shim, frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt32$get_hash$R$frost$core$Int$shim, frost$core$UInt32$get_asInt$R$frost$core$Int$shim, frost$core$UInt32$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt32$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt32$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt32$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt32$get_asUInt$R$frost$core$UInt$shim, frost$core$UInt32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt32$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt32$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$UInt32$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Comparable, { frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$ListView, { frost$core$UInt32$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$Key, { frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Equatable, { frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$Iterable, { frost$core$UInt32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt32$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt32$wrapper_frost$core$Formattable, { frost$core$UInt32$get_count$R$frost$core$Int$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$UInt32$wrapperclass_type frost$core$UInt32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt32$wrapper_frost$collections$CollectionView, { frost$core$UInt32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn632)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -3969265259549713363, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32", 17, -3969265259549713363, NULL };
static frost$core$String $s640 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 7225265477699224004, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, 3042765502446704409, NULL };
static frost$core$String $s676 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 12, 7225265477699224004, NULL };
static frost$core$String $s677 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x33\x32\x3f", 121, -171680697208125098, NULL };

frost$core$UInt32 frost$core$UInt32$init$builtin_uint32(uint32_t param0) {

frost$core$UInt32 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:30
uint32_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt32 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt32 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:36
uint8_t $tmp6 = param0.value;
uint32_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint32_t) $tmp6);
frost$core$UInt32 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$UInt32 frost$core$UInt32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt32 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:42
uint16_t $tmp9 = param0.value;
uint32_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((uint32_t) $tmp9);
frost$core$UInt32 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:48
uint32_t $tmp12 = param0.value;
int32_t $tmp13 = param1.value;
int64_t $tmp14 = ((int64_t) $tmp12) + ((int64_t) $tmp13);
frost$core$Int64 $tmp15 = (frost$core$Int64) {$tmp14};
return $tmp15;

}
frost$core$Int64 frost$core$UInt32$$ADD$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:54
uint32_t $tmp16 = param0.value;
int64_t $tmp17 = param1.value;
int64_t $tmp18 = ((int64_t) $tmp16) + ((int64_t) $tmp17);
frost$core$Int64 $tmp19 = (frost$core$Int64) {$tmp18};
return $tmp19;

}
frost$core$UInt32 frost$core$UInt32$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:60
uint32_t $tmp20 = param0.value;
uint32_t $tmp21 = param1.value;
uint32_t $tmp22 = $tmp20 + $tmp21;
frost$core$UInt32 $tmp23 = (frost$core$UInt32) {$tmp22};
return $tmp23;

}
frost$core$UInt64 frost$core$UInt32$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:66
uint32_t $tmp24 = param0.value;
uint64_t $tmp25 = param1.value;
uint64_t $tmp26 = ((uint64_t) $tmp24) + $tmp25;
frost$core$UInt64 $tmp27 = (frost$core$UInt64) {$tmp26};
return $tmp27;

}
frost$core$UInt frost$core$UInt32$$ADD$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:72
uint32_t $tmp28 = param0.value;
uint64_t $tmp29 = param1.value;
uint64_t $tmp30 = ((uint64_t) $tmp28) + $tmp29;
frost$core$UInt $tmp31 = (frost$core$UInt) {$tmp30};
return $tmp31;

}
frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:78
uint32_t $tmp32 = param0.value;
int32_t $tmp33 = param1.value;
int64_t $tmp34 = ((int64_t) $tmp32) - ((int64_t) $tmp33);
frost$core$Int64 $tmp35 = (frost$core$Int64) {$tmp34};
return $tmp35;

}
frost$core$Int64 frost$core$UInt32$$SUB$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:84
uint32_t $tmp36 = param0.value;
int64_t $tmp37 = param1.value;
int64_t $tmp38 = ((int64_t) $tmp36) - ((int64_t) $tmp37);
frost$core$Int64 $tmp39 = (frost$core$Int64) {$tmp38};
return $tmp39;

}
frost$core$UInt32 frost$core$UInt32$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:90
uint32_t $tmp40 = param0.value;
uint32_t $tmp41 = param1.value;
uint32_t $tmp42 = $tmp40 - $tmp41;
frost$core$UInt32 $tmp43 = (frost$core$UInt32) {$tmp42};
return $tmp43;

}
frost$core$UInt64 frost$core$UInt32$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:96
uint32_t $tmp44 = param0.value;
uint64_t $tmp45 = param1.value;
uint64_t $tmp46 = ((uint64_t) $tmp44) - $tmp45;
frost$core$UInt64 $tmp47 = (frost$core$UInt64) {$tmp46};
return $tmp47;

}
frost$core$UInt frost$core$UInt32$$SUB$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:102
uint32_t $tmp48 = param0.value;
uint64_t $tmp49 = param1.value;
uint64_t $tmp50 = ((uint64_t) $tmp48) - $tmp49;
frost$core$UInt $tmp51 = (frost$core$UInt) {$tmp50};
return $tmp51;

}
frost$core$UInt32 frost$core$UInt32$$SUB$R$frost$core$UInt32(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:107
uint32_t $tmp52 = param0.value;
uint32_t $tmp53 = -$tmp52;
frost$core$UInt32 $tmp54 = (frost$core$UInt32) {$tmp53};
return $tmp54;

}
frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:113
uint32_t $tmp55 = param0.value;
int32_t $tmp56 = param1.value;
int64_t $tmp57 = ((int64_t) $tmp55) * ((int64_t) $tmp56);
frost$core$Int64 $tmp58 = (frost$core$Int64) {$tmp57};
return $tmp58;

}
frost$core$Int64 frost$core$UInt32$$MUL$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:119
uint32_t $tmp59 = param0.value;
int64_t $tmp60 = param1.value;
int64_t $tmp61 = ((int64_t) $tmp59) * ((int64_t) $tmp60);
frost$core$Int64 $tmp62 = (frost$core$Int64) {$tmp61};
return $tmp62;

}
frost$core$UInt32 frost$core$UInt32$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:125
uint32_t $tmp63 = param0.value;
uint32_t $tmp64 = param1.value;
uint32_t $tmp65 = $tmp63 * $tmp64;
frost$core$UInt32 $tmp66 = (frost$core$UInt32) {$tmp65};
return $tmp66;

}
frost$core$UInt64 frost$core$UInt32$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:131
uint32_t $tmp67 = param0.value;
uint64_t $tmp68 = param1.value;
uint64_t $tmp69 = ((uint64_t) $tmp67) * $tmp68;
frost$core$UInt64 $tmp70 = (frost$core$UInt64) {$tmp69};
return $tmp70;

}
frost$core$UInt frost$core$UInt32$$MUL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:137
uint32_t $tmp71 = param0.value;
uint64_t $tmp72 = param1.value;
uint64_t $tmp73 = ((uint64_t) $tmp71) * $tmp72;
frost$core$UInt $tmp74 = (frost$core$UInt) {$tmp73};
return $tmp74;

}
frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:143
uint32_t $tmp75 = param0.value;
int32_t $tmp76 = param1.value;
int64_t $tmp77 = ((int64_t) $tmp75) / ((int64_t) $tmp76);
frost$core$Int64 $tmp78 = (frost$core$Int64) {$tmp77};
return $tmp78;

}
frost$core$Int64 frost$core$UInt32$$INTDIV$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:149
uint32_t $tmp79 = param0.value;
int64_t $tmp80 = param1.value;
int64_t $tmp81 = ((int64_t) $tmp79) / ((int64_t) $tmp80);
frost$core$Int64 $tmp82 = (frost$core$Int64) {$tmp81};
return $tmp82;

}
frost$core$UInt32 frost$core$UInt32$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:155
uint32_t $tmp83 = param0.value;
uint32_t $tmp84 = param1.value;
uint32_t $tmp85 = $tmp83 / $tmp84;
frost$core$UInt32 $tmp86 = (frost$core$UInt32) {$tmp85};
return $tmp86;

}
frost$core$UInt64 frost$core$UInt32$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:161
uint32_t $tmp87 = param0.value;
uint64_t $tmp88 = param1.value;
uint64_t $tmp89 = ((uint64_t) $tmp87) / $tmp88;
frost$core$UInt64 $tmp90 = (frost$core$UInt64) {$tmp89};
return $tmp90;

}
frost$core$UInt frost$core$UInt32$$INTDIV$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:167
uint32_t $tmp91 = param0.value;
uint64_t $tmp92 = param1.value;
uint64_t $tmp93 = ((uint64_t) $tmp91) / $tmp92;
frost$core$UInt $tmp94 = (frost$core$UInt) {$tmp93};
return $tmp94;

}
frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:173
uint32_t $tmp95 = param0.value;
int32_t $tmp96 = param1.value;
int64_t $tmp97 = ((int64_t) $tmp95) % ((int64_t) $tmp96);
frost$core$Int64 $tmp98 = (frost$core$Int64) {$tmp97};
return $tmp98;

}
frost$core$Int64 frost$core$UInt32$$REM$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:179
uint32_t $tmp99 = param0.value;
int64_t $tmp100 = param1.value;
int64_t $tmp101 = ((int64_t) $tmp99) % ((int64_t) $tmp100);
frost$core$Int64 $tmp102 = (frost$core$Int64) {$tmp101};
return $tmp102;

}
frost$core$UInt32 frost$core$UInt32$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:185
uint32_t $tmp103 = param0.value;
uint32_t $tmp104 = param1.value;
uint32_t $tmp105 = $tmp103 % $tmp104;
frost$core$UInt32 $tmp106 = (frost$core$UInt32) {$tmp105};
return $tmp106;

}
frost$core$UInt64 frost$core$UInt32$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:191
uint32_t $tmp107 = param0.value;
uint64_t $tmp108 = param1.value;
uint64_t $tmp109 = ((uint64_t) $tmp107) % $tmp108;
frost$core$UInt64 $tmp110 = (frost$core$UInt64) {$tmp109};
return $tmp110;

}
frost$core$UInt frost$core$UInt32$$REM$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:197
uint32_t $tmp111 = param0.value;
uint64_t $tmp112 = param1.value;
uint64_t $tmp113 = ((uint64_t) $tmp111) % $tmp112;
frost$core$UInt $tmp114 = (frost$core$UInt) {$tmp113};
return $tmp114;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:203
uint32_t $tmp115 = param0.value;
int8_t $tmp116 = param1.value;
float $tmp117 = ((float) $tmp115) / ((float) $tmp116);
frost$core$Real32 $tmp118 = (frost$core$Real32) {$tmp117};
return $tmp118;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:209
uint32_t $tmp119 = param0.value;
int16_t $tmp120 = param1.value;
float $tmp121 = ((float) $tmp119) / ((float) $tmp120);
frost$core$Real32 $tmp122 = (frost$core$Real32) {$tmp121};
return $tmp122;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:215
uint32_t $tmp123 = param0.value;
int32_t $tmp124 = param1.value;
float $tmp125 = ((float) $tmp123) / ((float) $tmp124);
frost$core$Real32 $tmp126 = (frost$core$Real32) {$tmp125};
return $tmp126;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:221
uint32_t $tmp127 = param0.value;
int64_t $tmp128 = param1.value;
double $tmp129 = ((double) $tmp127) / ((double) $tmp128);
frost$core$Real64 $tmp130 = (frost$core$Real64) {$tmp129};
return $tmp130;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:227
uint32_t $tmp131 = param0.value;
uint8_t $tmp132 = param1.value;
float $tmp133 = ((float) $tmp131) / ((float) $tmp132);
frost$core$Real32 $tmp134 = (frost$core$Real32) {$tmp133};
return $tmp134;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:233
uint32_t $tmp135 = param0.value;
uint16_t $tmp136 = param1.value;
float $tmp137 = ((float) $tmp135) / ((float) $tmp136);
frost$core$Real32 $tmp138 = (frost$core$Real32) {$tmp137};
return $tmp138;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:239
uint32_t $tmp139 = param0.value;
uint32_t $tmp140 = param1.value;
float $tmp141 = ((float) $tmp139) / ((float) $tmp140);
frost$core$Real32 $tmp142 = (frost$core$Real32) {$tmp141};
return $tmp142;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:245
uint32_t $tmp143 = param0.value;
uint64_t $tmp144 = param1.value;
double $tmp145 = ((double) $tmp143) / ((double) $tmp144);
frost$core$Real64 $tmp146 = (frost$core$Real64) {$tmp145};
return $tmp146;

}
frost$core$Real32 frost$core$UInt32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:251
uint32_t $tmp147 = param0.value;
float $tmp148 = param1.value;
float $tmp149 = ((float) $tmp147) / $tmp148;
frost$core$Real32 $tmp150 = (frost$core$Real32) {$tmp149};
return $tmp150;

}
frost$core$Real64 frost$core$UInt32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:257
uint32_t $tmp151 = param0.value;
double $tmp152 = param1.value;
double $tmp153 = ((double) $tmp151) / $tmp152;
frost$core$Real64 $tmp154 = (frost$core$Real64) {$tmp153};
return $tmp154;

}
frost$core$UInt32 frost$core$UInt32$$BNOT$R$frost$core$UInt32(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:262
uint32_t $tmp155 = param0.value;
uint32_t $tmp156 = !$tmp155;
frost$core$UInt32 $tmp157 = (frost$core$UInt32) {$tmp156};
return $tmp157;

}
frost$core$Int32 frost$core$UInt32$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:268
uint32_t $tmp158 = param0.value;
int32_t $tmp159 = param1.value;
int32_t $tmp160 = ((int32_t) $tmp158) & $tmp159;
frost$core$Int32 $tmp161 = (frost$core$Int32) {$tmp160};
return $tmp161;

}
frost$core$Int64 frost$core$UInt32$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:274
uint32_t $tmp162 = param0.value;
int64_t $tmp163 = param1.value;
int64_t $tmp164 = ((int64_t) $tmp162) & $tmp163;
frost$core$Int64 $tmp165 = (frost$core$Int64) {$tmp164};
return $tmp165;

}
frost$core$Int frost$core$UInt32$$BAND$frost$core$Int$R$frost$core$Int(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:280
uint32_t $tmp166 = param0.value;
int64_t $tmp167 = param1.value;
int64_t $tmp168 = ((int64_t) $tmp166) & $tmp167;
frost$core$Int $tmp169 = (frost$core$Int) {$tmp168};
return $tmp169;

}
frost$core$UInt32 frost$core$UInt32$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:286
uint32_t $tmp170 = param0.value;
uint32_t $tmp171 = param1.value;
uint32_t $tmp172 = $tmp170 & $tmp171;
frost$core$UInt32 $tmp173 = (frost$core$UInt32) {$tmp172};
return $tmp173;

}
frost$core$UInt64 frost$core$UInt32$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:292
uint32_t $tmp174 = param0.value;
uint64_t $tmp175 = param1.value;
uint64_t $tmp176 = ((uint64_t) $tmp174) & $tmp175;
frost$core$UInt64 $tmp177 = (frost$core$UInt64) {$tmp176};
return $tmp177;

}
frost$core$UInt frost$core$UInt32$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:298
uint32_t $tmp178 = param0.value;
uint64_t $tmp179 = param1.value;
uint64_t $tmp180 = ((uint64_t) $tmp178) & $tmp179;
frost$core$UInt $tmp181 = (frost$core$UInt) {$tmp180};
return $tmp181;

}
frost$core$Int32 frost$core$UInt32$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:304
uint32_t $tmp182 = param0.value;
int32_t $tmp183 = param1.value;
int32_t $tmp184 = ((int32_t) $tmp182) | $tmp183;
frost$core$Int32 $tmp185 = (frost$core$Int32) {$tmp184};
return $tmp185;

}
frost$core$Int64 frost$core$UInt32$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:310
uint32_t $tmp186 = param0.value;
int64_t $tmp187 = param1.value;
int64_t $tmp188 = ((int64_t) $tmp186) | $tmp187;
frost$core$Int64 $tmp189 = (frost$core$Int64) {$tmp188};
return $tmp189;

}
frost$core$Int frost$core$UInt32$$BOR$frost$core$Int$R$frost$core$Int(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:316
uint32_t $tmp190 = param0.value;
int64_t $tmp191 = param1.value;
int64_t $tmp192 = ((int64_t) $tmp190) | $tmp191;
frost$core$Int $tmp193 = (frost$core$Int) {$tmp192};
return $tmp193;

}
frost$core$UInt32 frost$core$UInt32$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:322
uint32_t $tmp194 = param0.value;
uint32_t $tmp195 = param1.value;
uint32_t $tmp196 = $tmp194 | $tmp195;
frost$core$UInt32 $tmp197 = (frost$core$UInt32) {$tmp196};
return $tmp197;

}
frost$core$UInt64 frost$core$UInt32$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:328
uint32_t $tmp198 = param0.value;
uint64_t $tmp199 = param1.value;
uint64_t $tmp200 = ((uint64_t) $tmp198) | $tmp199;
frost$core$UInt64 $tmp201 = (frost$core$UInt64) {$tmp200};
return $tmp201;

}
frost$core$UInt frost$core$UInt32$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:334
uint32_t $tmp202 = param0.value;
uint64_t $tmp203 = param1.value;
uint64_t $tmp204 = ((uint64_t) $tmp202) | $tmp203;
frost$core$UInt $tmp205 = (frost$core$UInt) {$tmp204};
return $tmp205;

}
frost$core$Int32 frost$core$UInt32$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:340
uint32_t $tmp206 = param0.value;
int32_t $tmp207 = param1.value;
int32_t $tmp208 = ((int32_t) $tmp206) ^ $tmp207;
frost$core$Int32 $tmp209 = (frost$core$Int32) {$tmp208};
return $tmp209;

}
frost$core$Int64 frost$core$UInt32$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:346
uint32_t $tmp210 = param0.value;
int64_t $tmp211 = param1.value;
int64_t $tmp212 = ((int64_t) $tmp210) ^ $tmp211;
frost$core$Int64 $tmp213 = (frost$core$Int64) {$tmp212};
return $tmp213;

}
frost$core$Int frost$core$UInt32$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:352
uint32_t $tmp214 = param0.value;
int64_t $tmp215 = param1.value;
int64_t $tmp216 = ((int64_t) $tmp214) ^ $tmp215;
frost$core$Int $tmp217 = (frost$core$Int) {$tmp216};
return $tmp217;

}
frost$core$UInt32 frost$core$UInt32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:358
uint32_t $tmp218 = param0.value;
uint32_t $tmp219 = param1.value;
uint32_t $tmp220 = $tmp218 ^ $tmp219;
frost$core$UInt32 $tmp221 = (frost$core$UInt32) {$tmp220};
return $tmp221;

}
frost$core$UInt64 frost$core$UInt32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:364
uint32_t $tmp222 = param0.value;
uint64_t $tmp223 = param1.value;
uint64_t $tmp224 = ((uint64_t) $tmp222) ^ $tmp223;
frost$core$UInt64 $tmp225 = (frost$core$UInt64) {$tmp224};
return $tmp225;

}
frost$core$UInt frost$core$UInt32$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:370
uint32_t $tmp226 = param0.value;
uint64_t $tmp227 = param1.value;
uint64_t $tmp228 = ((uint64_t) $tmp226) ^ $tmp227;
frost$core$UInt $tmp229 = (frost$core$UInt) {$tmp228};
return $tmp229;

}
frost$core$UInt32 frost$core$UInt32$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:376
uint32_t $tmp230 = param0.value;
uint32_t $tmp231 = param1.value;
uint32_t $tmp232 = $tmp230 << $tmp231;
frost$core$UInt32 $tmp233 = (frost$core$UInt32) {$tmp232};
return $tmp233;

}
frost$core$UInt32 frost$core$UInt32$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:382
uint32_t $tmp234 = param0.value;
uint32_t $tmp235 = param1.value;
uint32_t $tmp236 = $tmp234 >> $tmp235;
frost$core$UInt32 $tmp237 = (frost$core$UInt32) {$tmp236};
return $tmp237;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:388
uint32_t $tmp238 = param0.value;
int8_t $tmp239 = param1.value;
bool $tmp240 = ((int64_t) $tmp238) == ((int64_t) $tmp239);
frost$core$Bit $tmp241 = (frost$core$Bit) {$tmp240};
return $tmp241;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:394
uint32_t $tmp242 = param0.value;
int16_t $tmp243 = param1.value;
bool $tmp244 = ((int64_t) $tmp242) == ((int64_t) $tmp243);
frost$core$Bit $tmp245 = (frost$core$Bit) {$tmp244};
return $tmp245;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:400
uint32_t $tmp246 = param0.value;
int32_t $tmp247 = param1.value;
bool $tmp248 = ((int64_t) $tmp246) == ((int64_t) $tmp247);
frost$core$Bit $tmp249 = (frost$core$Bit) {$tmp248};
return $tmp249;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:406
uint32_t $tmp250 = param0.value;
int64_t $tmp251 = param1.value;
bool $tmp252 = ((int64_t) $tmp250) == ((int64_t) $tmp251);
frost$core$Bit $tmp253 = (frost$core$Bit) {$tmp252};
return $tmp253;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:412
uint32_t $tmp254 = param0.value;
uint8_t $tmp255 = param1.value;
bool $tmp256 = $tmp254 == ((uint32_t) $tmp255);
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
return $tmp257;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:418
uint32_t $tmp258 = param0.value;
uint16_t $tmp259 = param1.value;
bool $tmp260 = $tmp258 == ((uint32_t) $tmp259);
frost$core$Bit $tmp261 = (frost$core$Bit) {$tmp260};
return $tmp261;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:425
uint32_t $tmp262 = param0.value;
uint32_t $tmp263 = param1.value;
bool $tmp264 = $tmp262 == $tmp263;
frost$core$Bit $tmp265 = (frost$core$Bit) {$tmp264};
return $tmp265;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:431
uint32_t $tmp266 = param0.value;
uint64_t $tmp267 = param1.value;
bool $tmp268 = ((uint64_t) $tmp266) == $tmp267;
frost$core$Bit $tmp269 = (frost$core$Bit) {$tmp268};
return $tmp269;

}
frost$core$Bit frost$core$UInt32$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:437
uint32_t $tmp270 = param0.value;
uint64_t $tmp271 = param1.value;
bool $tmp272 = ((uint64_t) $tmp270) == $tmp271;
frost$core$Bit $tmp273 = (frost$core$Bit) {$tmp272};
return $tmp273;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:443
uint32_t $tmp274 = param0.value;
int8_t $tmp275 = param1.value;
bool $tmp276 = ((int64_t) $tmp274) != ((int64_t) $tmp275);
frost$core$Bit $tmp277 = (frost$core$Bit) {$tmp276};
return $tmp277;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:449
uint32_t $tmp278 = param0.value;
int16_t $tmp279 = param1.value;
bool $tmp280 = ((int64_t) $tmp278) != ((int64_t) $tmp279);
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
return $tmp281;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:455
uint32_t $tmp282 = param0.value;
int32_t $tmp283 = param1.value;
bool $tmp284 = ((int64_t) $tmp282) != ((int64_t) $tmp283);
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
return $tmp285;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:461
uint32_t $tmp286 = param0.value;
int64_t $tmp287 = param1.value;
bool $tmp288 = ((int64_t) $tmp286) != ((int64_t) $tmp287);
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
return $tmp289;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:467
uint32_t $tmp290 = param0.value;
uint8_t $tmp291 = param1.value;
bool $tmp292 = $tmp290 != ((uint32_t) $tmp291);
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
return $tmp293;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:473
uint32_t $tmp294 = param0.value;
uint16_t $tmp295 = param1.value;
bool $tmp296 = $tmp294 != ((uint32_t) $tmp295);
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
return $tmp297;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:480
uint32_t $tmp298 = param0.value;
uint32_t $tmp299 = param1.value;
bool $tmp300 = $tmp298 != $tmp299;
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
return $tmp301;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:486
uint32_t $tmp302 = param0.value;
uint64_t $tmp303 = param1.value;
bool $tmp304 = ((uint64_t) $tmp302) != $tmp303;
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304};
return $tmp305;

}
frost$core$Bit frost$core$UInt32$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:492
uint32_t $tmp306 = param0.value;
uint64_t $tmp307 = param1.value;
bool $tmp308 = ((uint64_t) $tmp306) != $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
return $tmp309;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:498
uint32_t $tmp310 = param0.value;
int8_t $tmp311 = param1.value;
bool $tmp312 = ((int64_t) $tmp310) < ((int64_t) $tmp311);
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
return $tmp313;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:504
uint32_t $tmp314 = param0.value;
int16_t $tmp315 = param1.value;
bool $tmp316 = ((int64_t) $tmp314) < ((int64_t) $tmp315);
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
return $tmp317;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:510
uint32_t $tmp318 = param0.value;
int32_t $tmp319 = param1.value;
bool $tmp320 = ((int64_t) $tmp318) < ((int64_t) $tmp319);
frost$core$Bit $tmp321 = (frost$core$Bit) {$tmp320};
return $tmp321;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:516
uint32_t $tmp322 = param0.value;
int64_t $tmp323 = param1.value;
bool $tmp324 = ((int64_t) $tmp322) < ((int64_t) $tmp323);
frost$core$Bit $tmp325 = (frost$core$Bit) {$tmp324};
return $tmp325;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:522
uint32_t $tmp326 = param0.value;
uint8_t $tmp327 = param1.value;
bool $tmp328 = $tmp326 < ((uint32_t) $tmp327);
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
return $tmp329;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:528
uint32_t $tmp330 = param0.value;
uint16_t $tmp331 = param1.value;
bool $tmp332 = $tmp330 < ((uint32_t) $tmp331);
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332};
return $tmp333;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:535
uint32_t $tmp334 = param0.value;
uint32_t $tmp335 = param1.value;
bool $tmp336 = $tmp334 < $tmp335;
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336};
return $tmp337;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:541
uint32_t $tmp338 = param0.value;
uint64_t $tmp339 = param1.value;
bool $tmp340 = ((uint64_t) $tmp338) < $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
return $tmp341;

}
frost$core$Bit frost$core$UInt32$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:547
uint32_t $tmp342 = param0.value;
uint64_t $tmp343 = param1.value;
bool $tmp344 = ((uint64_t) $tmp342) < $tmp343;
frost$core$Bit $tmp345 = (frost$core$Bit) {$tmp344};
return $tmp345;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:553
uint32_t $tmp346 = param0.value;
int8_t $tmp347 = param1.value;
bool $tmp348 = ((int64_t) $tmp346) > ((int64_t) $tmp347);
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
return $tmp349;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:559
uint32_t $tmp350 = param0.value;
int16_t $tmp351 = param1.value;
bool $tmp352 = ((int64_t) $tmp350) > ((int64_t) $tmp351);
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
return $tmp353;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:565
uint32_t $tmp354 = param0.value;
int32_t $tmp355 = param1.value;
bool $tmp356 = ((int64_t) $tmp354) > ((int64_t) $tmp355);
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
return $tmp357;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:571
uint32_t $tmp358 = param0.value;
int64_t $tmp359 = param1.value;
bool $tmp360 = ((int64_t) $tmp358) > ((int64_t) $tmp359);
frost$core$Bit $tmp361 = (frost$core$Bit) {$tmp360};
return $tmp361;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:577
uint32_t $tmp362 = param0.value;
uint8_t $tmp363 = param1.value;
bool $tmp364 = $tmp362 > ((uint32_t) $tmp363);
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
return $tmp365;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:583
uint32_t $tmp366 = param0.value;
uint16_t $tmp367 = param1.value;
bool $tmp368 = $tmp366 > ((uint32_t) $tmp367);
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
return $tmp369;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:590
uint32_t $tmp370 = param0.value;
uint32_t $tmp371 = param1.value;
bool $tmp372 = $tmp370 > $tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372};
return $tmp373;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:596
uint32_t $tmp374 = param0.value;
uint64_t $tmp375 = param1.value;
bool $tmp376 = ((uint64_t) $tmp374) > $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
return $tmp377;

}
frost$core$Bit frost$core$UInt32$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:602
uint32_t $tmp378 = param0.value;
uint64_t $tmp379 = param1.value;
bool $tmp380 = ((uint64_t) $tmp378) > $tmp379;
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
return $tmp381;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:608
uint32_t $tmp382 = param0.value;
int8_t $tmp383 = param1.value;
bool $tmp384 = ((int64_t) $tmp382) >= ((int64_t) $tmp383);
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
return $tmp385;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:614
uint32_t $tmp386 = param0.value;
int16_t $tmp387 = param1.value;
bool $tmp388 = ((int64_t) $tmp386) >= ((int64_t) $tmp387);
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
return $tmp389;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:620
uint32_t $tmp390 = param0.value;
int32_t $tmp391 = param1.value;
bool $tmp392 = ((int64_t) $tmp390) >= ((int64_t) $tmp391);
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392};
return $tmp393;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:626
uint32_t $tmp394 = param0.value;
int64_t $tmp395 = param1.value;
bool $tmp396 = ((int64_t) $tmp394) >= ((int64_t) $tmp395);
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
return $tmp397;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:632
uint32_t $tmp398 = param0.value;
uint8_t $tmp399 = param1.value;
bool $tmp400 = $tmp398 >= ((uint32_t) $tmp399);
frost$core$Bit $tmp401 = (frost$core$Bit) {$tmp400};
return $tmp401;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:638
uint32_t $tmp402 = param0.value;
uint16_t $tmp403 = param1.value;
bool $tmp404 = $tmp402 >= ((uint32_t) $tmp403);
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404};
return $tmp405;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:645
uint32_t $tmp406 = param0.value;
uint32_t $tmp407 = param1.value;
bool $tmp408 = $tmp406 >= $tmp407;
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
return $tmp409;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:651
uint32_t $tmp410 = param0.value;
uint64_t $tmp411 = param1.value;
bool $tmp412 = ((uint64_t) $tmp410) >= $tmp411;
frost$core$Bit $tmp413 = (frost$core$Bit) {$tmp412};
return $tmp413;

}
frost$core$Bit frost$core$UInt32$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:657
uint32_t $tmp414 = param0.value;
uint64_t $tmp415 = param1.value;
bool $tmp416 = ((uint64_t) $tmp414) >= $tmp415;
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
return $tmp417;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:663
uint32_t $tmp418 = param0.value;
int8_t $tmp419 = param1.value;
bool $tmp420 = ((int64_t) $tmp418) <= ((int64_t) $tmp419);
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
return $tmp421;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:669
uint32_t $tmp422 = param0.value;
int16_t $tmp423 = param1.value;
bool $tmp424 = ((int64_t) $tmp422) <= ((int64_t) $tmp423);
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
return $tmp425;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:675
uint32_t $tmp426 = param0.value;
int32_t $tmp427 = param1.value;
bool $tmp428 = ((int64_t) $tmp426) <= ((int64_t) $tmp427);
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
return $tmp429;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:681
uint32_t $tmp430 = param0.value;
int64_t $tmp431 = param1.value;
bool $tmp432 = ((int64_t) $tmp430) <= ((int64_t) $tmp431);
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
return $tmp433;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:687
uint32_t $tmp434 = param0.value;
uint8_t $tmp435 = param1.value;
bool $tmp436 = $tmp434 <= ((uint32_t) $tmp435);
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436};
return $tmp437;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:693
uint32_t $tmp438 = param0.value;
uint16_t $tmp439 = param1.value;
bool $tmp440 = $tmp438 <= ((uint32_t) $tmp439);
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
return $tmp441;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:700
uint32_t $tmp442 = param0.value;
uint32_t $tmp443 = param1.value;
bool $tmp444 = $tmp442 <= $tmp443;
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
return $tmp445;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:706
uint32_t $tmp446 = param0.value;
uint64_t $tmp447 = param1.value;
bool $tmp448 = ((uint64_t) $tmp446) <= $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
return $tmp449;

}
frost$core$Bit frost$core$UInt32$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:712
uint32_t $tmp450 = param0.value;
uint64_t $tmp451 = param1.value;
bool $tmp452 = ((uint64_t) $tmp450) <= $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
return $tmp453;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:718
uint32_t $tmp454 = param0.value;
int8_t $tmp455 = param1.value;
bool $tmp456 = ((int64_t) $tmp454) < ((int64_t) $tmp455);
frost$core$Bit $tmp457 = (frost$core$Bit) {$tmp456};
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:719
uint32_t $tmp459 = param0.value;
frost$core$Int64 $tmp460 = (frost$core$Int64) {((int64_t) $tmp459)};
return $tmp460;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:721
int8_t $tmp461 = param1.value;
frost$core$Int64 $tmp462 = (frost$core$Int64) {((int64_t) $tmp461)};
return $tmp462;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:727
uint32_t $tmp463 = param0.value;
int16_t $tmp464 = param1.value;
bool $tmp465 = ((int64_t) $tmp463) < ((int64_t) $tmp464);
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465};
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:728
uint32_t $tmp468 = param0.value;
frost$core$Int64 $tmp469 = (frost$core$Int64) {((int64_t) $tmp468)};
return $tmp469;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:730
int16_t $tmp470 = param1.value;
frost$core$Int64 $tmp471 = (frost$core$Int64) {((int64_t) $tmp470)};
return $tmp471;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:736
uint32_t $tmp472 = param0.value;
int32_t $tmp473 = param1.value;
bool $tmp474 = ((int64_t) $tmp472) < ((int64_t) $tmp473);
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:737
uint32_t $tmp477 = param0.value;
frost$core$Int64 $tmp478 = (frost$core$Int64) {((int64_t) $tmp477)};
return $tmp478;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:739
int32_t $tmp479 = param1.value;
frost$core$Int64 $tmp480 = (frost$core$Int64) {((int64_t) $tmp479)};
return $tmp480;

}
frost$core$Int64 frost$core$UInt32$min$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:746
uint32_t $tmp481 = param0.value;
int64_t $tmp482 = param1.value;
bool $tmp483 = ((int64_t) $tmp481) < ((int64_t) $tmp482);
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:747
uint32_t $tmp486 = param0.value;
frost$core$Int64 $tmp487 = (frost$core$Int64) {((int64_t) $tmp486)};
return $tmp487;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:749
int64_t $tmp488 = param1.value;
frost$core$Int64 $tmp489 = (frost$core$Int64) {((int64_t) $tmp488)};
return $tmp489;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:755
uint32_t $tmp490 = param0.value;
uint8_t $tmp491 = param1.value;
bool $tmp492 = $tmp490 < ((uint32_t) $tmp491);
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp492};
bool $tmp494 = $tmp493.value;
if ($tmp494) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:756
uint32_t $tmp495 = param0.value;
frost$core$UInt32 $tmp496 = (frost$core$UInt32) {$tmp495};
return $tmp496;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:758
uint8_t $tmp497 = param1.value;
frost$core$UInt32 $tmp498 = (frost$core$UInt32) {((uint32_t) $tmp497)};
return $tmp498;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:764
uint32_t $tmp499 = param0.value;
uint16_t $tmp500 = param1.value;
bool $tmp501 = $tmp499 < ((uint32_t) $tmp500);
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:765
uint32_t $tmp504 = param0.value;
frost$core$UInt32 $tmp505 = (frost$core$UInt32) {$tmp504};
return $tmp505;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:767
uint16_t $tmp506 = param1.value;
frost$core$UInt32 $tmp507 = (frost$core$UInt32) {((uint32_t) $tmp506)};
return $tmp507;

}
frost$core$UInt32 frost$core$UInt32$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:773
uint32_t $tmp508 = param0.value;
uint32_t $tmp509 = param1.value;
bool $tmp510 = $tmp508 < $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:774
uint32_t $tmp513 = param0.value;
frost$core$UInt32 $tmp514 = (frost$core$UInt32) {$tmp513};
return $tmp514;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:776
uint32_t $tmp515 = param1.value;
frost$core$UInt32 $tmp516 = (frost$core$UInt32) {$tmp515};
return $tmp516;

}
frost$core$UInt64 frost$core$UInt32$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:782
uint32_t $tmp517 = param0.value;
uint64_t $tmp518 = param1.value;
bool $tmp519 = ((uint64_t) $tmp517) < $tmp518;
frost$core$Bit $tmp520 = (frost$core$Bit) {$tmp519};
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:783
uint32_t $tmp522 = param0.value;
frost$core$UInt64 $tmp523 = (frost$core$UInt64) {((uint64_t) $tmp522)};
return $tmp523;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:785
uint64_t $tmp524 = param1.value;
frost$core$UInt64 $tmp525 = (frost$core$UInt64) {$tmp524};
return $tmp525;

}
frost$core$UInt frost$core$UInt32$min$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:791
uint32_t $tmp526 = param0.value;
uint64_t $tmp527 = param1.value;
bool $tmp528 = ((uint64_t) $tmp526) < $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:792
uint32_t $tmp531 = param0.value;
frost$core$UInt $tmp532 = (frost$core$UInt) {((uint64_t) $tmp531)};
return $tmp532;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:794
uint64_t $tmp533 = param1.value;
frost$core$UInt $tmp534 = (frost$core$UInt) {$tmp533};
return $tmp534;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int8$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:800
uint32_t $tmp535 = param0.value;
int8_t $tmp536 = param1.value;
bool $tmp537 = ((int64_t) $tmp535) > ((int64_t) $tmp536);
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
bool $tmp539 = $tmp538.value;
if ($tmp539) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:801
uint32_t $tmp540 = param0.value;
frost$core$Int64 $tmp541 = (frost$core$Int64) {((int64_t) $tmp540)};
return $tmp541;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:803
int8_t $tmp542 = param1.value;
frost$core$Int64 $tmp543 = (frost$core$Int64) {((int64_t) $tmp542)};
return $tmp543;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int16$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:809
uint32_t $tmp544 = param0.value;
int16_t $tmp545 = param1.value;
bool $tmp546 = ((int64_t) $tmp544) > ((int64_t) $tmp545);
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:810
uint32_t $tmp549 = param0.value;
frost$core$Int64 $tmp550 = (frost$core$Int64) {((int64_t) $tmp549)};
return $tmp550;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:812
int16_t $tmp551 = param1.value;
frost$core$Int64 $tmp552 = (frost$core$Int64) {((int64_t) $tmp551)};
return $tmp552;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:818
uint32_t $tmp553 = param0.value;
int32_t $tmp554 = param1.value;
bool $tmp555 = ((int64_t) $tmp553) > ((int64_t) $tmp554);
frost$core$Bit $tmp556 = (frost$core$Bit) {$tmp555};
bool $tmp557 = $tmp556.value;
if ($tmp557) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:819
uint32_t $tmp558 = param0.value;
frost$core$Int64 $tmp559 = (frost$core$Int64) {((int64_t) $tmp558)};
return $tmp559;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:821
int32_t $tmp560 = param1.value;
frost$core$Int64 $tmp561 = (frost$core$Int64) {((int64_t) $tmp560)};
return $tmp561;

}
frost$core$Int64 frost$core$UInt32$max$frost$core$Int$R$frost$core$Int64(frost$core$UInt32 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:828
uint32_t $tmp562 = param0.value;
int64_t $tmp563 = param1.value;
bool $tmp564 = ((int64_t) $tmp562) > ((int64_t) $tmp563);
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:829
uint32_t $tmp567 = param0.value;
frost$core$Int64 $tmp568 = (frost$core$Int64) {((int64_t) $tmp567)};
return $tmp568;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:831
int64_t $tmp569 = param1.value;
frost$core$Int64 $tmp570 = (frost$core$Int64) {((int64_t) $tmp569)};
return $tmp570;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:837
uint32_t $tmp571 = param0.value;
uint8_t $tmp572 = param1.value;
bool $tmp573 = $tmp571 > ((uint32_t) $tmp572);
frost$core$Bit $tmp574 = (frost$core$Bit) {$tmp573};
bool $tmp575 = $tmp574.value;
if ($tmp575) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:838
uint32_t $tmp576 = param0.value;
frost$core$UInt32 $tmp577 = (frost$core$UInt32) {$tmp576};
return $tmp577;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:840
uint8_t $tmp578 = param1.value;
frost$core$UInt32 $tmp579 = (frost$core$UInt32) {((uint32_t) $tmp578)};
return $tmp579;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:846
uint32_t $tmp580 = param0.value;
uint16_t $tmp581 = param1.value;
bool $tmp582 = $tmp580 > ((uint32_t) $tmp581);
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:847
uint32_t $tmp585 = param0.value;
frost$core$UInt32 $tmp586 = (frost$core$UInt32) {$tmp585};
return $tmp586;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:849
uint16_t $tmp587 = param1.value;
frost$core$UInt32 $tmp588 = (frost$core$UInt32) {((uint32_t) $tmp587)};
return $tmp588;

}
frost$core$UInt32 frost$core$UInt32$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:855
uint32_t $tmp589 = param0.value;
uint32_t $tmp590 = param1.value;
bool $tmp591 = $tmp589 > $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:856
uint32_t $tmp594 = param0.value;
frost$core$UInt32 $tmp595 = (frost$core$UInt32) {$tmp594};
return $tmp595;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:858
uint32_t $tmp596 = param1.value;
frost$core$UInt32 $tmp597 = (frost$core$UInt32) {$tmp596};
return $tmp597;

}
frost$core$UInt64 frost$core$UInt32$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:864
uint32_t $tmp598 = param0.value;
uint64_t $tmp599 = param1.value;
bool $tmp600 = ((uint64_t) $tmp598) > $tmp599;
frost$core$Bit $tmp601 = (frost$core$Bit) {$tmp600};
bool $tmp602 = $tmp601.value;
if ($tmp602) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:865
uint32_t $tmp603 = param0.value;
frost$core$UInt64 $tmp604 = (frost$core$UInt64) {((uint64_t) $tmp603)};
return $tmp604;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:867
uint64_t $tmp605 = param1.value;
frost$core$UInt64 $tmp606 = (frost$core$UInt64) {$tmp605};
return $tmp606;

}
frost$core$UInt frost$core$UInt32$max$frost$core$UInt$R$frost$core$UInt(frost$core$UInt32 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:873
uint32_t $tmp607 = param0.value;
uint64_t $tmp608 = param1.value;
bool $tmp609 = ((uint64_t) $tmp607) > $tmp608;
frost$core$Bit $tmp610 = (frost$core$Bit) {$tmp609};
bool $tmp611 = $tmp610.value;
if ($tmp611) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:874
uint32_t $tmp612 = param0.value;
frost$core$UInt $tmp613 = (frost$core$UInt) {((uint64_t) $tmp612)};
return $tmp613;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:876
uint64_t $tmp614 = param1.value;
frost$core$UInt $tmp615 = (frost$core$UInt) {$tmp614};
return $tmp615;

}
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$Range$LTfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$Range$LTfrost$core$UInt32$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:881
FROST_ASSERT(40 == sizeof(org$frostlang$frost$UInt32List));
org$frostlang$frost$UInt32List* $tmp616 = (org$frostlang$frost$UInt32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$UInt32List$class);
frost$core$UInt32 $tmp617 = param0.min;
frost$core$UInt32 $tmp618 = param0.max;
frost$core$UInt32 $tmp619 = (frost$core$UInt32) {1u};
frost$core$Bit $tmp620 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT $tmp621 = frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$init$frost$core$UInt32$frost$core$UInt32$frost$core$UInt32$frost$core$Bit($tmp617, $tmp618, $tmp619, $tmp620);
org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT($tmp616, $tmp621);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp616)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp616));
return ((frost$collections$ListView*) $tmp616);

}
frost$collections$ListView* frost$core$UInt32$$IDX$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT$R$frost$collections$ListView$LTfrost$core$UInt32$GT(frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:886
FROST_ASSERT(40 == sizeof(org$frostlang$frost$UInt32List));
org$frostlang$frost$UInt32List* $tmp622 = (org$frostlang$frost$UInt32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$UInt32List$class);
org$frostlang$frost$UInt32List$init$frost$core$SteppedRange$LTfrost$core$UInt32$Cfrost$core$UInt32$GT($tmp622, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp622)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
return ((frost$collections$ListView*) $tmp622);

}
frost$core$Bit frost$core$UInt32$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt32 param0, frost$core$Int param1) {

frost$core$Int $tmp623 = (frost$core$Int) {0u};
int64_t $tmp624 = param1.value;
int64_t $tmp625 = $tmp623.value;
bool $tmp626 = $tmp624 >= $tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block3; else goto block2;
block3:;
frost$core$UInt32$wrapper* $tmp629;
$tmp629 = (frost$core$UInt32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$UInt32$wrapperclass);
$tmp629->value = param0;
ITable* $tmp630 = ((frost$collections$CollectionView*) $tmp629)->$class->itable;
while ($tmp630->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp630 = $tmp630->next;
}
$fn632 $tmp631 = $tmp630->methods[0];
frost$core$Int $tmp633 = $tmp631(((frost$collections$CollectionView*) $tmp629));
int64_t $tmp634 = param1.value;
int64_t $tmp635 = $tmp633.value;
bool $tmp636 = $tmp634 < $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp629)));
if ($tmp638) goto block1; else goto block2;
block2:;
frost$core$Int $tmp639 = (frost$core$Int) {891u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s640, $tmp639, &$s641);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:892
frost$core$Int $tmp642 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt32.frost:892:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:389
int64_t $tmp643 = $tmp642.value;
int64_t $tmp644 = param1.value;
int64_t $tmp645 = $tmp643 << $tmp644;
frost$core$Int $tmp646 = (frost$core$Int) {$tmp645};
// begin inline call to function frost.core.UInt32.&&(other:frost.core.Int):frost.core.Int from UInt32.frost:892:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:280
uint32_t $tmp647 = param0.value;
int64_t $tmp648 = $tmp646.value;
int64_t $tmp649 = ((int64_t) $tmp647) & $tmp648;
frost$core$Int $tmp650 = (frost$core$Int) {$tmp649};
frost$core$Int $tmp651 = (frost$core$Int) {0u};
int64_t $tmp652 = $tmp650.value;
int64_t $tmp653 = $tmp651.value;
bool $tmp654 = $tmp652 != $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
return $tmp655;

}
frost$core$Int frost$core$UInt32$get_count$R$frost$core$Int(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:898
frost$core$Int $tmp656 = (frost$core$Int) {32u};
return $tmp656;

}
frost$collections$Iterator* frost$core$UInt32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:908
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp657 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.UInt32.get_asUInt64():frost.core.UInt64 from UInt32.frost:908:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:978
uint32_t $tmp658 = param0.value;
frost$core$UInt64 $tmp659 = (frost$core$UInt64) {((uint64_t) $tmp658)};
frost$core$UInt64 $tmp660 = (frost$core$UInt64) {2147483648u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp657, $tmp659, $tmp660);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp657)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
return ((frost$collections$Iterator*) $tmp657);

}
frost$core$Int frost$core$UInt32$get_hash$R$frost$core$Int(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:913
uint32_t $tmp661 = param0.value;
frost$core$Int $tmp662 = (frost$core$Int) {((int64_t) $tmp661)};
return $tmp662;

}
frost$core$UInt32$nullable frost$core$UInt32$parse$frost$core$String$frost$core$Int$R$frost$core$UInt32$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$Int $tmp663 = (frost$core$Int) {2u};
int64_t $tmp664 = param1.value;
int64_t $tmp665 = $tmp663.value;
bool $tmp666 = $tmp664 >= $tmp665;
frost$core$Bit $tmp667 = (frost$core$Bit) {$tmp666};
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block3; else goto block2;
block3:;
frost$core$Int $tmp669 = (frost$core$Int) {36u};
int64_t $tmp670 = param1.value;
int64_t $tmp671 = $tmp669.value;
bool $tmp672 = $tmp670 <= $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block1; else goto block2;
block2:;
frost$core$Int $tmp675 = (frost$core$Int) {919u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s676, $tmp675, &$s677);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:920
frost$core$UInt64$nullable $tmp678 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp678;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:921
frost$core$UInt64$nullable $tmp679 = *(&local0);
frost$core$Bit $tmp680 = (frost$core$Bit) {!$tmp679.nonnull};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:922
return ((frost$core$UInt32$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:924
frost$core$UInt64$nullable $tmp682 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asUInt32():frost.core.UInt32 from UInt32.frost:924:22
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:592
uint64_t $tmp683 = ((frost$core$UInt64) $tmp682.value).value;
frost$core$UInt32 $tmp684 = (frost$core$UInt32) {((uint32_t) $tmp683)};
return ((frost$core$UInt32$nullable) { $tmp684, true });

}
frost$core$Int frost$core$UInt32$get_asInt$R$frost$core$Int(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:930
uint32_t $tmp685 = param0.value;
frost$core$Int $tmp686 = (frost$core$Int) {((int64_t) $tmp685)};
return $tmp686;

}
frost$core$Int8 frost$core$UInt32$get_asInt8$R$frost$core$Int8(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:936
uint32_t $tmp687 = param0.value;
frost$core$Int8 $tmp688 = (frost$core$Int8) {((int8_t) $tmp687)};
return $tmp688;

}
frost$core$Int16 frost$core$UInt32$get_asInt16$R$frost$core$Int16(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:942
uint32_t $tmp689 = param0.value;
frost$core$Int16 $tmp690 = (frost$core$Int16) {((int16_t) $tmp689)};
return $tmp690;

}
frost$core$Int32 frost$core$UInt32$get_asInt32$R$frost$core$Int32(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:948
uint32_t $tmp691 = param0.value;
frost$core$Int32 $tmp692 = (frost$core$Int32) {((int32_t) $tmp691)};
return $tmp692;

}
frost$core$Int64 frost$core$UInt32$get_asInt64$R$frost$core$Int64(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:954
uint32_t $tmp693 = param0.value;
frost$core$Int64 $tmp694 = (frost$core$Int64) {((int64_t) $tmp693)};
return $tmp694;

}
frost$core$UInt frost$core$UInt32$get_asUInt$R$frost$core$UInt(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:960
uint32_t $tmp695 = param0.value;
frost$core$UInt $tmp696 = (frost$core$UInt) {((uint64_t) $tmp695)};
return $tmp696;

}
frost$core$UInt8 frost$core$UInt32$get_asUInt8$R$frost$core$UInt8(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:966
uint32_t $tmp697 = param0.value;
frost$core$UInt8 $tmp698 = (frost$core$UInt8) {((uint8_t) $tmp697)};
return $tmp698;

}
frost$core$UInt16 frost$core$UInt32$get_asUInt16$R$frost$core$UInt16(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:972
uint32_t $tmp699 = param0.value;
frost$core$UInt16 $tmp700 = (frost$core$UInt16) {((uint16_t) $tmp699)};
return $tmp700;

}
frost$core$UInt64 frost$core$UInt32$get_asUInt64$R$frost$core$UInt64(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:978
uint32_t $tmp701 = param0.value;
frost$core$UInt64 $tmp702 = (frost$core$UInt64) {((uint64_t) $tmp701)};
return $tmp702;

}
frost$core$Real32 frost$core$UInt32$get_asReal32$R$frost$core$Real32(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:984
uint32_t $tmp703 = param0.value;
frost$core$Real32 $tmp704 = (frost$core$Real32) {((float) $tmp703)};
return $tmp704;

}
frost$core$Real64 frost$core$UInt32$get_asReal64$R$frost$core$Real64(frost$core$UInt32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:990
uint32_t $tmp705 = param0.value;
frost$core$Real64 $tmp706 = (frost$core$Real64) {((double) $tmp705)};
return $tmp706;

}
frost$core$String* frost$core$UInt32$get_asString$R$frost$core$String(frost$core$UInt32 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$UInt32 local3;
frost$core$Int local4;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:996
frost$core$Int $tmp707 = (frost$core$Int) {10u};
*(&local0) = $tmp707;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:997
frost$core$Int $tmp708 = *(&local0);
frost$core$Int64 $tmp709 = frost$core$Int64$init$frost$core$Int($tmp708);
int64_t $tmp710 = $tmp709.value;
frost$core$Char8* $tmp711 = ((frost$core$Char8*) frostAlloc($tmp710 * 1));
*(&local1) = $tmp711;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:998
frost$core$Int $tmp712 = *(&local0);
frost$core$Int $tmp713 = (frost$core$Int) {1u};
int64_t $tmp714 = $tmp712.value;
int64_t $tmp715 = $tmp713.value;
int64_t $tmp716 = $tmp714 - $tmp715;
frost$core$Int $tmp717 = (frost$core$Int) {$tmp716};
*(&local2) = $tmp717;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:999
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1000
frost$core$UInt32 $tmp718 = *(&local3);
frost$core$UInt32 $tmp719 = (frost$core$UInt32) {0u};
uint32_t $tmp720 = $tmp718.value;
uint32_t $tmp721 = $tmp719.value;
bool $tmp722 = $tmp720 >= $tmp721;
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1001
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1002
frost$core$Char8* $tmp725 = *(&local1);
frost$core$Int $tmp726 = *(&local2);
frost$core$Int64 $tmp727 = frost$core$Int64$init$frost$core$Int($tmp726);
frost$core$UInt32 $tmp728 = *(&local3);
frost$core$UInt32 $tmp729 = (frost$core$UInt32) {10u};
// begin inline call to function frost.core.UInt32.%(other:frost.core.UInt32):frost.core.UInt32 from UInt32.frost:1002:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:185
uint32_t $tmp730 = $tmp728.value;
uint32_t $tmp731 = $tmp729.value;
uint32_t $tmp732 = $tmp730 % $tmp731;
frost$core$UInt32 $tmp733 = (frost$core$UInt32) {$tmp732};
frost$core$UInt32 $tmp734 = (frost$core$UInt32) {48u};
uint32_t $tmp735 = $tmp733.value;
uint32_t $tmp736 = $tmp734.value;
uint32_t $tmp737 = $tmp735 + $tmp736;
frost$core$UInt32 $tmp738 = (frost$core$UInt32) {$tmp737};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt32.frost:1002:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:966
uint32_t $tmp739 = $tmp738.value;
frost$core$UInt8 $tmp740 = (frost$core$UInt8) {((uint8_t) $tmp739)};
frost$core$Char8 $tmp741 = frost$core$Char8$init$frost$core$UInt8($tmp740);
int64_t $tmp742 = $tmp727.value;
$tmp725[$tmp742] = $tmp741;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1003
frost$core$UInt32 $tmp743 = *(&local3);
frost$core$UInt32 $tmp744 = (frost$core$UInt32) {10u};
uint32_t $tmp745 = $tmp743.value;
uint32_t $tmp746 = $tmp744.value;
uint32_t $tmp747 = $tmp745 / $tmp746;
frost$core$UInt32 $tmp748 = (frost$core$UInt32) {$tmp747};
*(&local3) = $tmp748;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1004
frost$core$Int $tmp749 = *(&local2);
frost$core$Int $tmp750 = (frost$core$Int) {1u};
int64_t $tmp751 = $tmp749.value;
int64_t $tmp752 = $tmp750.value;
int64_t $tmp753 = $tmp751 - $tmp752;
frost$core$Int $tmp754 = (frost$core$Int) {$tmp753};
*(&local2) = $tmp754;
frost$core$UInt32 $tmp755 = *(&local3);
frost$core$UInt32 $tmp756 = (frost$core$UInt32) {0u};
uint32_t $tmp757 = $tmp755.value;
uint32_t $tmp758 = $tmp756.value;
bool $tmp759 = $tmp757 > $tmp758;
frost$core$Bit $tmp760 = (frost$core$Bit) {$tmp759};
bool $tmp761 = $tmp760.value;
if ($tmp761) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1007
frost$core$Int $tmp762 = *(&local2);
frost$core$Int $tmp763 = (frost$core$Int) {1u};
int64_t $tmp764 = $tmp762.value;
int64_t $tmp765 = $tmp763.value;
int64_t $tmp766 = $tmp764 + $tmp765;
frost$core$Int $tmp767 = (frost$core$Int) {$tmp766};
*(&local2) = $tmp767;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1010
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1011
frost$core$Char8* $tmp768 = *(&local1);
frost$core$Int $tmp769 = *(&local2);
frost$core$Int64 $tmp770 = frost$core$Int64$init$frost$core$Int($tmp769);
frost$core$UInt32 $tmp771 = (frost$core$UInt32) {48u};
frost$core$UInt32 $tmp772 = *(&local3);
frost$core$UInt32 $tmp773 = (frost$core$UInt32) {10u};
// begin inline call to function frost.core.UInt32.%(other:frost.core.UInt32):frost.core.UInt32 from UInt32.frost:1011:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:185
uint32_t $tmp774 = $tmp772.value;
uint32_t $tmp775 = $tmp773.value;
uint32_t $tmp776 = $tmp774 % $tmp775;
frost$core$UInt32 $tmp777 = (frost$core$UInt32) {$tmp776};
uint32_t $tmp778 = $tmp771.value;
uint32_t $tmp779 = $tmp777.value;
uint32_t $tmp780 = $tmp778 - $tmp779;
frost$core$UInt32 $tmp781 = (frost$core$UInt32) {$tmp780};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt32.frost:1011:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:966
uint32_t $tmp782 = $tmp781.value;
frost$core$UInt8 $tmp783 = (frost$core$UInt8) {((uint8_t) $tmp782)};
frost$core$Char8 $tmp784 = frost$core$Char8$init$frost$core$UInt8($tmp783);
int64_t $tmp785 = $tmp770.value;
$tmp768[$tmp785] = $tmp784;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1012
frost$core$UInt32 $tmp786 = *(&local3);
frost$core$UInt32 $tmp787 = (frost$core$UInt32) {10u};
uint32_t $tmp788 = $tmp786.value;
uint32_t $tmp789 = $tmp787.value;
uint32_t $tmp790 = $tmp788 / $tmp789;
frost$core$UInt32 $tmp791 = (frost$core$UInt32) {$tmp790};
*(&local3) = $tmp791;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1013
frost$core$Int $tmp792 = *(&local2);
frost$core$Int $tmp793 = (frost$core$Int) {1u};
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793.value;
int64_t $tmp796 = $tmp794 - $tmp795;
frost$core$Int $tmp797 = (frost$core$Int) {$tmp796};
*(&local2) = $tmp797;
frost$core$UInt32 $tmp798 = *(&local3);
frost$core$UInt32 $tmp799 = (frost$core$UInt32) {0u};
uint32_t $tmp800 = $tmp798.value;
uint32_t $tmp801 = $tmp799.value;
bool $tmp802 = $tmp800 < $tmp801;
frost$core$Bit $tmp803 = (frost$core$Bit) {$tmp802};
bool $tmp804 = $tmp803.value;
if ($tmp804) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1016
frost$core$Char8* $tmp805 = *(&local1);
frost$core$Int $tmp806 = *(&local2);
frost$core$Int64 $tmp807 = frost$core$Int64$init$frost$core$Int($tmp806);
frost$core$UInt8 $tmp808 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp809 = frost$core$Char8$init$frost$core$UInt8($tmp808);
int64_t $tmp810 = $tmp807.value;
$tmp805[$tmp810] = $tmp809;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1018
frost$core$Int $tmp811 = *(&local0);
frost$core$Int $tmp812 = *(&local2);
int64_t $tmp813 = $tmp811.value;
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813 - $tmp814;
frost$core$Int $tmp816 = (frost$core$Int) {$tmp815};
*(&local4) = $tmp816;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1019
frost$core$Int $tmp817 = (frost$core$Int) {0u};
frost$core$Int $tmp818 = *(&local4);
frost$core$Bit $tmp819 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp820 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp817, $tmp818, $tmp819);
frost$core$Int $tmp821 = $tmp820.min;
*(&local5) = $tmp821;
frost$core$Int $tmp822 = $tmp820.max;
frost$core$Bit $tmp823 = $tmp820.inclusive;
bool $tmp824 = $tmp823.value;
frost$core$Int $tmp825 = (frost$core$Int) {1u};
if ($tmp824) goto block17; else goto block18;
block17:;
int64_t $tmp826 = $tmp821.value;
int64_t $tmp827 = $tmp822.value;
bool $tmp828 = $tmp826 <= $tmp827;
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block14; else goto block15;
block18:;
int64_t $tmp831 = $tmp821.value;
int64_t $tmp832 = $tmp822.value;
bool $tmp833 = $tmp831 < $tmp832;
frost$core$Bit $tmp834 = (frost$core$Bit) {$tmp833};
bool $tmp835 = $tmp834.value;
if ($tmp835) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1020
frost$core$Char8* $tmp836 = *(&local1);
frost$core$Int $tmp837 = *(&local5);
frost$core$Int64 $tmp838 = frost$core$Int64$init$frost$core$Int($tmp837);
frost$core$Char8* $tmp839 = *(&local1);
frost$core$Int $tmp840 = *(&local5);
frost$core$Int $tmp841 = *(&local2);
int64_t $tmp842 = $tmp840.value;
int64_t $tmp843 = $tmp841.value;
int64_t $tmp844 = $tmp842 + $tmp843;
frost$core$Int $tmp845 = (frost$core$Int) {$tmp844};
frost$core$Int64 $tmp846 = frost$core$Int64$init$frost$core$Int($tmp845);
int64_t $tmp847 = $tmp846.value;
frost$core$Char8 $tmp848 = $tmp839[$tmp847];
int64_t $tmp849 = $tmp838.value;
$tmp836[$tmp849] = $tmp848;
frost$core$Int $tmp850 = *(&local5);
int64_t $tmp851 = $tmp822.value;
int64_t $tmp852 = $tmp850.value;
int64_t $tmp853 = $tmp851 - $tmp852;
frost$core$Int $tmp854 = (frost$core$Int) {$tmp853};
if ($tmp824) goto block20; else goto block21;
block20:;
int64_t $tmp855 = $tmp854.value;
int64_t $tmp856 = $tmp825.value;
bool $tmp857 = $tmp855 >= $tmp856;
frost$core$Bit $tmp858 = (frost$core$Bit) {$tmp857};
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block19; else goto block15;
block21:;
int64_t $tmp860 = $tmp854.value;
int64_t $tmp861 = $tmp825.value;
bool $tmp862 = $tmp860 > $tmp861;
frost$core$Bit $tmp863 = (frost$core$Bit) {$tmp862};
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block19; else goto block15;
block19:;
int64_t $tmp865 = $tmp850.value;
int64_t $tmp866 = $tmp825.value;
int64_t $tmp867 = $tmp865 + $tmp866;
frost$core$Int $tmp868 = (frost$core$Int) {$tmp867};
*(&local5) = $tmp868;
goto block14;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1022
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp869 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp870 = *(&local1);
frost$core$Int $tmp871 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp869, $tmp870, $tmp871);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp869));
return $tmp869;

}
frost$core$String* frost$core$UInt32$format$frost$core$String$R$frost$core$String(frost$core$UInt32 param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:1028
frost$core$Bit $tmp872 = (frost$core$Bit) {false};
// begin inline call to function frost.core.UInt32.get_asUInt64():frost.core.UInt64 from UInt32.frost:1028:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt32.frost:978
uint32_t $tmp873 = param0.value;
frost$core$UInt64 $tmp874 = (frost$core$UInt64) {((uint64_t) $tmp873)};
frost$core$UInt64 $tmp875 = (frost$core$UInt64) {4294967295u};
frost$core$String* $tmp876 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp872, $tmp874, $tmp875, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp876));
return $tmp876;

}
void frost$core$UInt32$cleanup(frost$core$UInt32 param0) {

return;

}

