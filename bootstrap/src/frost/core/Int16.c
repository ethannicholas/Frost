#include "frost/core/Int16.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int32.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt.h"
#include "frost/core/Real32.h"
#include "frost/core/Int8.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int16.GT.h"
#include "org/frostlang/frost/Int16List.h"
#include "frost/core/SteppedRange.LTfrost/core/Int16.Cfrost/core/Int16.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Int frost$core$Int16$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int16$get_hash$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Int16$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int16$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, ((frost$core$Int16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int16$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int16$format$frost$core$String$R$frost$core$String(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int16$get_count$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int16$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Int16$get_asString$R$frost$core$String(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$$ADD$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$$ADD$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$ADD$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int16$$ADD$frost$core$UInt$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$$SUB$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$$SUB$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$SUB$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int16$$SUB$frost$core$UInt$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$SUB$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int16$$SUB$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$$MUL$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$$MUL$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$MUL$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int16$$MUL$frost$core$UInt$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$$INTDIV$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$$INTDIV$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int16$$INTDIV$frost$core$UInt$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$$REM$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$$REM$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$REM$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int16$$REM$frost$core$UInt$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$BNOT$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int16$$BNOT$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$$BAND$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$$BAND$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int16$$BAND$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int16$$BAND$frost$core$UInt$R$frost$core$UInt(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$$BOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$$BOR$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int16$$BOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int16$$BOR$frost$core$UInt$R$frost$core$UInt(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$$BXOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$$BXOR$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int16$$BXOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int16$$BXOR$frost$core$UInt$R$frost$core$UInt(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int16$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int16$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$Int$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int16$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$Int$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int16$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$Int$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int16$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$Int$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int16$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int16$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$get_abs$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int16$get_abs$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int16 result = frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$min$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$min$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$min$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int16$min$frost$core$UInt$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int16 result = frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int16$max$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int16$max$frost$core$Int$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$max$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int16$max$frost$core$UInt$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$Int16$get_bitCount$R$frost$core$Int16$shim(frost$core$Int16* sret, frost$core$Object* p0) {
    frost$core$Int16$get_bitCount$R$frost$core$Int16(sret, ((frost$core$Int16$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$Int16$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int16$get_asInt$R$frost$core$Int(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int16$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int16$get_asInt8$R$frost$core$Int8(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int16$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int16$get_asInt32$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int16$get_asInt64$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int16$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$Int16$get_asUInt$R$frost$core$UInt(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Int16$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Int16$get_asUInt8$R$frost$core$UInt8(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Int16$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Int16$get_asUInt16$R$frost$core$UInt16(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int16$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Int16$get_asUInt32$R$frost$core$UInt32(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int16$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Int16$get_asUInt64$R$frost$core$UInt64(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int16$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Int16$get_asReal32$R$frost$core$Real32(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int16$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Int16$get_asReal64$R$frost$core$Real64(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Int16$cleanup$shim(frost$core$Object* p0) {
    frost$core$Int16$cleanup(((frost$core$Int16$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Int16$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$Int16$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int16$_frost$collections$Key, { frost$core$Int16$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int16$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int16$_frost$collections$ListView, { frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int16$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int16$_frost$core$Comparable, { frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int16$_frost$core$Equatable, { frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int16$_frost$collections$Iterable, { frost$core$Int16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int16$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int16$_frost$core$Formattable, { frost$core$Int16$get_count$R$frost$core$Int$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$Int16$class_type frost$core$Int16$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int16$_frost$collections$CollectionView, { frost$core$Int16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$ADD$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$ADD$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$SUB$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$SUB$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int16$$SUB$R$frost$core$Int16$shim, frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$MUL$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$MUL$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$INTDIV$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$INTDIV$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$REM$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$REM$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int16$$BNOT$R$frost$core$Int16$shim, frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int16$get_abs$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$min$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$min$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16$shim, frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$max$frost$core$Int$R$frost$core$Int$shim, frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$max$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int16$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int16$get_count$R$frost$core$Int$shim, frost$core$Int16$get_bitCount$R$frost$core$Int16$shim, frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int16$get_hash$R$frost$core$Int$shim, frost$core$Int16$get_asInt$R$frost$core$Int$shim, frost$core$Int16$get_asInt8$R$frost$core$Int8$shim, frost$core$Int16$get_asInt32$R$frost$core$Int32$shim, frost$core$Int16$get_asInt64$R$frost$core$Int64$shim, frost$core$Int16$get_asUInt$R$frost$core$UInt$shim, frost$core$Int16$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int16$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int16$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int16$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int16$get_asReal32$R$frost$core$Real32$shim, frost$core$Int16$get_asReal64$R$frost$core$Real64$shim, frost$core$Int16$format$frost$core$String$R$frost$core$String$shim, frost$core$Int16$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Int16$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$Int16$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$Key, { frost$core$Int16$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int16$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$ListView, { frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int16$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Comparable, { frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Equatable, { frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$Iterable, { frost$core$Int16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int16$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Formattable, { frost$core$Int16$get_count$R$frost$core$Int$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$Int16$wrapperclass_type frost$core$Int16$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$CollectionView, { frost$core$Int16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn745)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, 161584705572475510, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, 161584705572475510, NULL };
static frost$core$String $s753 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -1702292265505566123, NULL };
static frost$core$String $s754 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 90, -8658250755202885940, NULL };
static frost$core$String $s789 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -1702292265505566123, NULL };
static frost$core$String $s790 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f", 119, -8392059960964954692, NULL };
static frost$core$String $s792 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };

frost$core$Int16 frost$core$Int16$init$builtin_int16(int16_t param0) {

frost$core$Int16 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:30
int16_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int16 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int16 frost$core$Int16$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int16 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:36
int8_t $tmp6 = param0.value;
int16_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int16_t) $tmp6);
frost$core$Int16 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int16 frost$core$Int16$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int16 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:42
uint8_t $tmp9 = param0.value;
int16_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int16_t) $tmp9);
frost$core$Int16 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:48
int16_t $tmp12 = param0.value;
int16_t $tmp13 = param1.value;
int32_t $tmp14 = ((int32_t) $tmp12) + ((int32_t) $tmp13);
frost$core$Int32 $tmp15 = (frost$core$Int32) {$tmp14};
return $tmp15;

}
frost$core$Int16 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:53
int16_t $tmp16 = param0.value;
int16_t $tmp17 = param1.value;
int16_t $tmp18 = $tmp16 + $tmp17;
frost$core$Int16 $tmp19 = (frost$core$Int16) {$tmp18};
return $tmp19;

}
frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:59
int16_t $tmp20 = param0.value;
int32_t $tmp21 = param1.value;
int32_t $tmp22 = ((int32_t) $tmp20) + $tmp21;
frost$core$Int32 $tmp23 = (frost$core$Int32) {$tmp22};
return $tmp23;

}
frost$core$Int64 frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:65
int16_t $tmp24 = param0.value;
int64_t $tmp25 = param1.value;
int64_t $tmp26 = ((int64_t) $tmp24) + $tmp25;
frost$core$Int64 $tmp27 = (frost$core$Int64) {$tmp26};
return $tmp27;

}
frost$core$Int frost$core$Int16$$ADD$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:71
int16_t $tmp28 = param0.value;
int64_t $tmp29 = param1.value;
int64_t $tmp30 = ((int64_t) $tmp28) + $tmp29;
frost$core$Int $tmp31 = (frost$core$Int) {$tmp30};
return $tmp31;

}
frost$core$Int32 frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:77
int16_t $tmp32 = param0.value;
uint16_t $tmp33 = param1.value;
int32_t $tmp34 = ((int32_t) $tmp32) + ((int32_t) $tmp33);
frost$core$Int32 $tmp35 = (frost$core$Int32) {$tmp34};
return $tmp35;

}
frost$core$Int64 frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:83
int16_t $tmp36 = param0.value;
uint32_t $tmp37 = param1.value;
int64_t $tmp38 = ((int64_t) $tmp36) + ((int64_t) $tmp37);
frost$core$Int64 $tmp39 = (frost$core$Int64) {$tmp38};
return $tmp39;

}
frost$core$Int64 frost$core$Int16$$ADD$frost$core$UInt$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:89
int16_t $tmp40 = param0.value;
uint64_t $tmp41 = param1.value;
int64_t $tmp42 = ((int64_t) $tmp40) + ((int64_t) $tmp41);
frost$core$Int64 $tmp43 = (frost$core$Int64) {$tmp42};
return $tmp43;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:95
int16_t $tmp44 = param0.value;
int16_t $tmp45 = param1.value;
int32_t $tmp46 = ((int32_t) $tmp44) - ((int32_t) $tmp45);
frost$core$Int32 $tmp47 = (frost$core$Int32) {$tmp46};
return $tmp47;

}
frost$core$Int16 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:100
int16_t $tmp48 = param0.value;
int16_t $tmp49 = param1.value;
int16_t $tmp50 = $tmp48 - $tmp49;
frost$core$Int16 $tmp51 = (frost$core$Int16) {$tmp50};
return $tmp51;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:106
int16_t $tmp52 = param0.value;
int32_t $tmp53 = param1.value;
int32_t $tmp54 = ((int32_t) $tmp52) - $tmp53;
frost$core$Int32 $tmp55 = (frost$core$Int32) {$tmp54};
return $tmp55;

}
frost$core$Int64 frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:112
int16_t $tmp56 = param0.value;
int64_t $tmp57 = param1.value;
int64_t $tmp58 = ((int64_t) $tmp56) - $tmp57;
frost$core$Int64 $tmp59 = (frost$core$Int64) {$tmp58};
return $tmp59;

}
frost$core$Int frost$core$Int16$$SUB$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:118
int16_t $tmp60 = param0.value;
int64_t $tmp61 = param1.value;
int64_t $tmp62 = ((int64_t) $tmp60) - $tmp61;
frost$core$Int $tmp63 = (frost$core$Int) {$tmp62};
return $tmp63;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:124
int16_t $tmp64 = param0.value;
uint16_t $tmp65 = param1.value;
int32_t $tmp66 = ((int32_t) $tmp64) - ((int32_t) $tmp65);
frost$core$Int32 $tmp67 = (frost$core$Int32) {$tmp66};
return $tmp67;

}
frost$core$Int64 frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:130
int16_t $tmp68 = param0.value;
uint32_t $tmp69 = param1.value;
int64_t $tmp70 = ((int64_t) $tmp68) - ((int64_t) $tmp69);
frost$core$Int64 $tmp71 = (frost$core$Int64) {$tmp70};
return $tmp71;

}
frost$core$Int64 frost$core$Int16$$SUB$frost$core$UInt$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:136
int16_t $tmp72 = param0.value;
uint64_t $tmp73 = param1.value;
int64_t $tmp74 = ((int64_t) $tmp72) - ((int64_t) $tmp73);
frost$core$Int64 $tmp75 = (frost$core$Int64) {$tmp74};
return $tmp75;

}
frost$core$Int16 frost$core$Int16$$SUB$R$frost$core$Int16(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:141
int16_t $tmp76 = param0.value;
int16_t $tmp77 = -$tmp76;
frost$core$Int16 $tmp78 = (frost$core$Int16) {$tmp77};
return $tmp78;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:147
int16_t $tmp79 = param0.value;
int16_t $tmp80 = param1.value;
int32_t $tmp81 = ((int32_t) $tmp79) * ((int32_t) $tmp80);
frost$core$Int32 $tmp82 = (frost$core$Int32) {$tmp81};
return $tmp82;

}
frost$core$Int16 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:152
int16_t $tmp83 = param0.value;
int16_t $tmp84 = param1.value;
int16_t $tmp85 = $tmp83 * $tmp84;
frost$core$Int16 $tmp86 = (frost$core$Int16) {$tmp85};
return $tmp86;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:158
int16_t $tmp87 = param0.value;
int32_t $tmp88 = param1.value;
int32_t $tmp89 = ((int32_t) $tmp87) * $tmp88;
frost$core$Int32 $tmp90 = (frost$core$Int32) {$tmp89};
return $tmp90;

}
frost$core$Int64 frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:164
int16_t $tmp91 = param0.value;
int64_t $tmp92 = param1.value;
int64_t $tmp93 = ((int64_t) $tmp91) * $tmp92;
frost$core$Int64 $tmp94 = (frost$core$Int64) {$tmp93};
return $tmp94;

}
frost$core$Int frost$core$Int16$$MUL$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:170
int16_t $tmp95 = param0.value;
int64_t $tmp96 = param1.value;
int64_t $tmp97 = ((int64_t) $tmp95) * $tmp96;
frost$core$Int $tmp98 = (frost$core$Int) {$tmp97};
return $tmp98;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:176
int16_t $tmp99 = param0.value;
uint16_t $tmp100 = param1.value;
int32_t $tmp101 = ((int32_t) $tmp99) * ((int32_t) $tmp100);
frost$core$Int32 $tmp102 = (frost$core$Int32) {$tmp101};
return $tmp102;

}
frost$core$Int64 frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:182
int16_t $tmp103 = param0.value;
uint32_t $tmp104 = param1.value;
int64_t $tmp105 = ((int64_t) $tmp103) * ((int64_t) $tmp104);
frost$core$Int64 $tmp106 = (frost$core$Int64) {$tmp105};
return $tmp106;

}
frost$core$Int64 frost$core$Int16$$MUL$frost$core$UInt$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:188
int16_t $tmp107 = param0.value;
uint64_t $tmp108 = param1.value;
int64_t $tmp109 = ((int64_t) $tmp107) * ((int64_t) $tmp108);
frost$core$Int64 $tmp110 = (frost$core$Int64) {$tmp109};
return $tmp110;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:194
int16_t $tmp111 = param0.value;
int16_t $tmp112 = param1.value;
int32_t $tmp113 = ((int32_t) $tmp111) / ((int32_t) $tmp112);
frost$core$Int32 $tmp114 = (frost$core$Int32) {$tmp113};
return $tmp114;

}
frost$core$Int16 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:199
int16_t $tmp115 = param0.value;
int16_t $tmp116 = param1.value;
int16_t $tmp117 = $tmp115 / $tmp116;
frost$core$Int16 $tmp118 = (frost$core$Int16) {$tmp117};
return $tmp118;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:205
int16_t $tmp119 = param0.value;
int32_t $tmp120 = param1.value;
int32_t $tmp121 = ((int32_t) $tmp119) / $tmp120;
frost$core$Int32 $tmp122 = (frost$core$Int32) {$tmp121};
return $tmp122;

}
frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:211
int16_t $tmp123 = param0.value;
int64_t $tmp124 = param1.value;
int64_t $tmp125 = ((int64_t) $tmp123) / $tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {$tmp125};
return $tmp126;

}
frost$core$Int frost$core$Int16$$INTDIV$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:217
int16_t $tmp127 = param0.value;
int64_t $tmp128 = param1.value;
int64_t $tmp129 = ((int64_t) $tmp127) / $tmp128;
frost$core$Int $tmp130 = (frost$core$Int) {$tmp129};
return $tmp130;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:223
int16_t $tmp131 = param0.value;
uint16_t $tmp132 = param1.value;
int32_t $tmp133 = ((int32_t) $tmp131) / ((int32_t) $tmp132);
frost$core$Int32 $tmp134 = (frost$core$Int32) {$tmp133};
return $tmp134;

}
frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:229
int16_t $tmp135 = param0.value;
uint32_t $tmp136 = param1.value;
int64_t $tmp137 = ((int64_t) $tmp135) / ((int64_t) $tmp136);
frost$core$Int64 $tmp138 = (frost$core$Int64) {$tmp137};
return $tmp138;

}
frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$UInt$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:235
int16_t $tmp139 = param0.value;
uint64_t $tmp140 = param1.value;
int64_t $tmp141 = ((int64_t) $tmp139) / ((int64_t) $tmp140);
frost$core$Int64 $tmp142 = (frost$core$Int64) {$tmp141};
return $tmp142;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:241
int16_t $tmp143 = param0.value;
int16_t $tmp144 = param1.value;
int32_t $tmp145 = ((int32_t) $tmp143) % ((int32_t) $tmp144);
frost$core$Int32 $tmp146 = (frost$core$Int32) {$tmp145};
return $tmp146;

}
frost$core$Int16 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:246
int16_t $tmp147 = param0.value;
int16_t $tmp148 = param1.value;
int16_t $tmp149 = $tmp147 % $tmp148;
frost$core$Int16 $tmp150 = (frost$core$Int16) {$tmp149};
return $tmp150;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:252
int16_t $tmp151 = param0.value;
int32_t $tmp152 = param1.value;
int32_t $tmp153 = ((int32_t) $tmp151) % $tmp152;
frost$core$Int32 $tmp154 = (frost$core$Int32) {$tmp153};
return $tmp154;

}
frost$core$Int64 frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:258
int16_t $tmp155 = param0.value;
int64_t $tmp156 = param1.value;
int64_t $tmp157 = ((int64_t) $tmp155) % $tmp156;
frost$core$Int64 $tmp158 = (frost$core$Int64) {$tmp157};
return $tmp158;

}
frost$core$Int frost$core$Int16$$REM$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:264
int16_t $tmp159 = param0.value;
int64_t $tmp160 = param1.value;
int64_t $tmp161 = ((int64_t) $tmp159) % $tmp160;
frost$core$Int $tmp162 = (frost$core$Int) {$tmp161};
return $tmp162;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:270
int16_t $tmp163 = param0.value;
uint16_t $tmp164 = param1.value;
int32_t $tmp165 = ((int32_t) $tmp163) % ((int32_t) $tmp164);
frost$core$Int32 $tmp166 = (frost$core$Int32) {$tmp165};
return $tmp166;

}
frost$core$Int64 frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:276
int16_t $tmp167 = param0.value;
uint32_t $tmp168 = param1.value;
int64_t $tmp169 = ((int64_t) $tmp167) % ((int64_t) $tmp168);
frost$core$Int64 $tmp170 = (frost$core$Int64) {$tmp169};
return $tmp170;

}
frost$core$Int64 frost$core$Int16$$REM$frost$core$UInt$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:282
int16_t $tmp171 = param0.value;
uint64_t $tmp172 = param1.value;
int64_t $tmp173 = ((int64_t) $tmp171) % ((int64_t) $tmp172);
frost$core$Int64 $tmp174 = (frost$core$Int64) {$tmp173};
return $tmp174;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:288
int16_t $tmp175 = param0.value;
int8_t $tmp176 = param1.value;
float $tmp177 = ((float) $tmp175) / ((float) $tmp176);
frost$core$Real32 $tmp178 = (frost$core$Real32) {$tmp177};
return $tmp178;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:294
int16_t $tmp179 = param0.value;
int16_t $tmp180 = param1.value;
float $tmp181 = ((float) $tmp179) / ((float) $tmp180);
frost$core$Real32 $tmp182 = (frost$core$Real32) {$tmp181};
return $tmp182;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:300
int16_t $tmp183 = param0.value;
int32_t $tmp184 = param1.value;
float $tmp185 = ((float) $tmp183) / ((float) $tmp184);
frost$core$Real32 $tmp186 = (frost$core$Real32) {$tmp185};
return $tmp186;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:306
int16_t $tmp187 = param0.value;
int64_t $tmp188 = param1.value;
double $tmp189 = ((double) $tmp187) / ((double) $tmp188);
frost$core$Real64 $tmp190 = (frost$core$Real64) {$tmp189};
return $tmp190;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:312
int16_t $tmp191 = param0.value;
uint8_t $tmp192 = param1.value;
float $tmp193 = ((float) $tmp191) / ((float) $tmp192);
frost$core$Real32 $tmp194 = (frost$core$Real32) {$tmp193};
return $tmp194;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:318
int16_t $tmp195 = param0.value;
uint16_t $tmp196 = param1.value;
float $tmp197 = ((float) $tmp195) / ((float) $tmp196);
frost$core$Real32 $tmp198 = (frost$core$Real32) {$tmp197};
return $tmp198;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:324
int16_t $tmp199 = param0.value;
uint32_t $tmp200 = param1.value;
float $tmp201 = ((float) $tmp199) / ((float) $tmp200);
frost$core$Real32 $tmp202 = (frost$core$Real32) {$tmp201};
return $tmp202;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:330
int16_t $tmp203 = param0.value;
uint64_t $tmp204 = param1.value;
double $tmp205 = ((double) $tmp203) / ((double) $tmp204);
frost$core$Real64 $tmp206 = (frost$core$Real64) {$tmp205};
return $tmp206;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:336
int16_t $tmp207 = param0.value;
float $tmp208 = param1.value;
float $tmp209 = ((float) $tmp207) / $tmp208;
frost$core$Real32 $tmp210 = (frost$core$Real32) {$tmp209};
return $tmp210;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:342
int16_t $tmp211 = param0.value;
double $tmp212 = param1.value;
double $tmp213 = ((double) $tmp211) / $tmp212;
frost$core$Real64 $tmp214 = (frost$core$Real64) {$tmp213};
return $tmp214;

}
frost$core$Int16 frost$core$Int16$$BNOT$R$frost$core$Int16(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:347
int16_t $tmp215 = param0.value;
int16_t $tmp216 = !$tmp215;
frost$core$Int16 $tmp217 = (frost$core$Int16) {$tmp216};
return $tmp217;

}
frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:353
int16_t $tmp218 = param0.value;
int16_t $tmp219 = param1.value;
int32_t $tmp220 = ((int32_t) $tmp218) & ((int32_t) $tmp219);
frost$core$Int32 $tmp221 = (frost$core$Int32) {$tmp220};
return $tmp221;

}
frost$core$Int16 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:358
int16_t $tmp222 = param0.value;
int16_t $tmp223 = param1.value;
int16_t $tmp224 = $tmp222 & $tmp223;
frost$core$Int16 $tmp225 = (frost$core$Int16) {$tmp224};
return $tmp225;

}
frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:364
int16_t $tmp226 = param0.value;
int32_t $tmp227 = param1.value;
int32_t $tmp228 = ((int32_t) $tmp226) & $tmp227;
frost$core$Int32 $tmp229 = (frost$core$Int32) {$tmp228};
return $tmp229;

}
frost$core$Int64 frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:370
int16_t $tmp230 = param0.value;
int64_t $tmp231 = param1.value;
int64_t $tmp232 = ((int64_t) $tmp230) & $tmp231;
frost$core$Int64 $tmp233 = (frost$core$Int64) {$tmp232};
return $tmp233;

}
frost$core$Int frost$core$Int16$$BAND$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:376
int16_t $tmp234 = param0.value;
int64_t $tmp235 = param1.value;
int64_t $tmp236 = ((int64_t) $tmp234) & $tmp235;
frost$core$Int $tmp237 = (frost$core$Int) {$tmp236};
return $tmp237;

}
frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:382
int16_t $tmp238 = param0.value;
uint16_t $tmp239 = param1.value;
uint32_t $tmp240 = ((uint32_t) $tmp238) & ((uint32_t) $tmp239);
frost$core$UInt32 $tmp241 = (frost$core$UInt32) {$tmp240};
return $tmp241;

}
frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:388
int16_t $tmp242 = param0.value;
uint32_t $tmp243 = param1.value;
uint32_t $tmp244 = ((uint32_t) $tmp242) & $tmp243;
frost$core$UInt32 $tmp245 = (frost$core$UInt32) {$tmp244};
return $tmp245;

}
frost$core$UInt64 frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:394
int16_t $tmp246 = param0.value;
uint64_t $tmp247 = param1.value;
uint64_t $tmp248 = ((uint64_t) $tmp246) & $tmp247;
frost$core$UInt64 $tmp249 = (frost$core$UInt64) {$tmp248};
return $tmp249;

}
frost$core$UInt frost$core$Int16$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:400
int16_t $tmp250 = param0.value;
uint64_t $tmp251 = param1.value;
uint64_t $tmp252 = ((uint64_t) $tmp250) & $tmp251;
frost$core$UInt $tmp253 = (frost$core$UInt) {$tmp252};
return $tmp253;

}
frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:406
int16_t $tmp254 = param0.value;
int16_t $tmp255 = param1.value;
int32_t $tmp256 = ((int32_t) $tmp254) | ((int32_t) $tmp255);
frost$core$Int32 $tmp257 = (frost$core$Int32) {$tmp256};
return $tmp257;

}
frost$core$Int16 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:411
int16_t $tmp258 = param0.value;
int16_t $tmp259 = param1.value;
int16_t $tmp260 = $tmp258 | $tmp259;
frost$core$Int16 $tmp261 = (frost$core$Int16) {$tmp260};
return $tmp261;

}
frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:417
int16_t $tmp262 = param0.value;
int32_t $tmp263 = param1.value;
int32_t $tmp264 = ((int32_t) $tmp262) | $tmp263;
frost$core$Int32 $tmp265 = (frost$core$Int32) {$tmp264};
return $tmp265;

}
frost$core$Int64 frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:423
int16_t $tmp266 = param0.value;
int64_t $tmp267 = param1.value;
int64_t $tmp268 = ((int64_t) $tmp266) | $tmp267;
frost$core$Int64 $tmp269 = (frost$core$Int64) {$tmp268};
return $tmp269;

}
frost$core$Int frost$core$Int16$$BOR$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:429
int16_t $tmp270 = param0.value;
int64_t $tmp271 = param1.value;
int64_t $tmp272 = ((int64_t) $tmp270) | $tmp271;
frost$core$Int $tmp273 = (frost$core$Int) {$tmp272};
return $tmp273;

}
frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:435
int16_t $tmp274 = param0.value;
uint16_t $tmp275 = param1.value;
uint32_t $tmp276 = ((uint32_t) $tmp274) | ((uint32_t) $tmp275);
frost$core$UInt32 $tmp277 = (frost$core$UInt32) {$tmp276};
return $tmp277;

}
frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:441
int16_t $tmp278 = param0.value;
uint32_t $tmp279 = param1.value;
uint32_t $tmp280 = ((uint32_t) $tmp278) | $tmp279;
frost$core$UInt32 $tmp281 = (frost$core$UInt32) {$tmp280};
return $tmp281;

}
frost$core$UInt64 frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:447
int16_t $tmp282 = param0.value;
uint64_t $tmp283 = param1.value;
uint64_t $tmp284 = ((uint64_t) $tmp282) | $tmp283;
frost$core$UInt64 $tmp285 = (frost$core$UInt64) {$tmp284};
return $tmp285;

}
frost$core$UInt frost$core$Int16$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:453
int16_t $tmp286 = param0.value;
uint64_t $tmp287 = param1.value;
uint64_t $tmp288 = ((uint64_t) $tmp286) | $tmp287;
frost$core$UInt $tmp289 = (frost$core$UInt) {$tmp288};
return $tmp289;

}
frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:459
int16_t $tmp290 = param0.value;
int16_t $tmp291 = param1.value;
int32_t $tmp292 = ((int32_t) $tmp290) ^ ((int32_t) $tmp291);
frost$core$Int32 $tmp293 = (frost$core$Int32) {$tmp292};
return $tmp293;

}
frost$core$Int16 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:464
int16_t $tmp294 = param0.value;
int16_t $tmp295 = param1.value;
int16_t $tmp296 = $tmp294 ^ $tmp295;
frost$core$Int16 $tmp297 = (frost$core$Int16) {$tmp296};
return $tmp297;

}
frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:470
int16_t $tmp298 = param0.value;
int32_t $tmp299 = param1.value;
int32_t $tmp300 = ((int32_t) $tmp298) ^ $tmp299;
frost$core$Int32 $tmp301 = (frost$core$Int32) {$tmp300};
return $tmp301;

}
frost$core$Int64 frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:476
int16_t $tmp302 = param0.value;
int64_t $tmp303 = param1.value;
int64_t $tmp304 = ((int64_t) $tmp302) ^ $tmp303;
frost$core$Int64 $tmp305 = (frost$core$Int64) {$tmp304};
return $tmp305;

}
frost$core$Int frost$core$Int16$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:482
int16_t $tmp306 = param0.value;
int64_t $tmp307 = param1.value;
int64_t $tmp308 = ((int64_t) $tmp306) ^ $tmp307;
frost$core$Int $tmp309 = (frost$core$Int) {$tmp308};
return $tmp309;

}
frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:488
int16_t $tmp310 = param0.value;
uint16_t $tmp311 = param1.value;
uint32_t $tmp312 = ((uint32_t) $tmp310) ^ ((uint32_t) $tmp311);
frost$core$UInt32 $tmp313 = (frost$core$UInt32) {$tmp312};
return $tmp313;

}
frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:494
int16_t $tmp314 = param0.value;
uint32_t $tmp315 = param1.value;
uint32_t $tmp316 = ((uint32_t) $tmp314) ^ $tmp315;
frost$core$UInt32 $tmp317 = (frost$core$UInt32) {$tmp316};
return $tmp317;

}
frost$core$UInt64 frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:500
int16_t $tmp318 = param0.value;
uint64_t $tmp319 = param1.value;
uint64_t $tmp320 = ((uint64_t) $tmp318) ^ $tmp319;
frost$core$UInt64 $tmp321 = (frost$core$UInt64) {$tmp320};
return $tmp321;

}
frost$core$UInt frost$core$Int16$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:506
int16_t $tmp322 = param0.value;
uint64_t $tmp323 = param1.value;
uint64_t $tmp324 = ((uint64_t) $tmp322) ^ $tmp323;
frost$core$UInt $tmp325 = (frost$core$UInt) {$tmp324};
return $tmp325;

}
frost$core$Int32 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:512
int16_t $tmp326 = param0.value;
int16_t $tmp327 = param1.value;
int32_t $tmp328 = ((int32_t) $tmp326) << ((int32_t) $tmp327);
frost$core$Int32 $tmp329 = (frost$core$Int32) {$tmp328};
return $tmp329;

}
frost$core$Int16 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:517
int16_t $tmp330 = param0.value;
int16_t $tmp331 = param1.value;
int16_t $tmp332 = $tmp330 << $tmp331;
frost$core$Int16 $tmp333 = (frost$core$Int16) {$tmp332};
return $tmp333;

}
frost$core$Int32 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:523
int16_t $tmp334 = param0.value;
int16_t $tmp335 = param1.value;
int32_t $tmp336 = ((int32_t) $tmp334) >> ((int32_t) $tmp335);
frost$core$Int32 $tmp337 = (frost$core$Int32) {$tmp336};
return $tmp337;

}
frost$core$Int16 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:528
int16_t $tmp338 = param0.value;
int16_t $tmp339 = param1.value;
int16_t $tmp340 = $tmp338 >> $tmp339;
frost$core$Int16 $tmp341 = (frost$core$Int16) {$tmp340};
return $tmp341;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:534
int16_t $tmp342 = param0.value;
int8_t $tmp343 = param1.value;
bool $tmp344 = $tmp342 == ((int16_t) $tmp343);
frost$core$Bit $tmp345 = (frost$core$Bit) {$tmp344};
return $tmp345;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:541
int16_t $tmp346 = param0.value;
int16_t $tmp347 = param1.value;
bool $tmp348 = $tmp346 == $tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
return $tmp349;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:547
int16_t $tmp350 = param0.value;
int32_t $tmp351 = param1.value;
bool $tmp352 = ((int32_t) $tmp350) == $tmp351;
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
return $tmp353;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:553
int16_t $tmp354 = param0.value;
int64_t $tmp355 = param1.value;
bool $tmp356 = ((int64_t) $tmp354) == $tmp355;
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
return $tmp357;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:559
int16_t $tmp358 = param0.value;
int64_t $tmp359 = param1.value;
bool $tmp360 = ((int64_t) $tmp358) == $tmp359;
frost$core$Bit $tmp361 = (frost$core$Bit) {$tmp360};
return $tmp361;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:565
int16_t $tmp362 = param0.value;
uint8_t $tmp363 = param1.value;
bool $tmp364 = ((int32_t) $tmp362) == ((int32_t) $tmp363);
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
return $tmp365;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:571
int16_t $tmp366 = param0.value;
uint16_t $tmp367 = param1.value;
bool $tmp368 = ((int32_t) $tmp366) == ((int32_t) $tmp367);
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
return $tmp369;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:577
int16_t $tmp370 = param0.value;
uint32_t $tmp371 = param1.value;
bool $tmp372 = ((int64_t) $tmp370) == ((int64_t) $tmp371);
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372};
return $tmp373;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:583
int16_t $tmp374 = param0.value;
uint64_t $tmp375 = param1.value;
bool $tmp376 = ((int64_t) $tmp374) == ((int64_t) $tmp375);
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
return $tmp377;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:589
int16_t $tmp378 = param0.value;
int8_t $tmp379 = param1.value;
bool $tmp380 = $tmp378 != ((int16_t) $tmp379);
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
return $tmp381;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:596
int16_t $tmp382 = param0.value;
int16_t $tmp383 = param1.value;
bool $tmp384 = $tmp382 != $tmp383;
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
return $tmp385;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:602
int16_t $tmp386 = param0.value;
int32_t $tmp387 = param1.value;
bool $tmp388 = ((int32_t) $tmp386) != $tmp387;
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
return $tmp389;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:608
int16_t $tmp390 = param0.value;
int64_t $tmp391 = param1.value;
bool $tmp392 = ((int64_t) $tmp390) != $tmp391;
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392};
return $tmp393;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:614
int16_t $tmp394 = param0.value;
int64_t $tmp395 = param1.value;
bool $tmp396 = ((int64_t) $tmp394) != $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
return $tmp397;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:620
int16_t $tmp398 = param0.value;
uint8_t $tmp399 = param1.value;
bool $tmp400 = ((int32_t) $tmp398) != ((int32_t) $tmp399);
frost$core$Bit $tmp401 = (frost$core$Bit) {$tmp400};
return $tmp401;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:626
int16_t $tmp402 = param0.value;
uint16_t $tmp403 = param1.value;
bool $tmp404 = ((int32_t) $tmp402) != ((int32_t) $tmp403);
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404};
return $tmp405;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:632
int16_t $tmp406 = param0.value;
uint32_t $tmp407 = param1.value;
bool $tmp408 = ((int64_t) $tmp406) != ((int64_t) $tmp407);
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
return $tmp409;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:638
int16_t $tmp410 = param0.value;
uint64_t $tmp411 = param1.value;
bool $tmp412 = ((int64_t) $tmp410) != ((int64_t) $tmp411);
frost$core$Bit $tmp413 = (frost$core$Bit) {$tmp412};
return $tmp413;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:644
int16_t $tmp414 = param0.value;
int8_t $tmp415 = param1.value;
bool $tmp416 = $tmp414 < ((int16_t) $tmp415);
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
return $tmp417;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:651
int16_t $tmp418 = param0.value;
int16_t $tmp419 = param1.value;
bool $tmp420 = $tmp418 < $tmp419;
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
return $tmp421;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:657
int16_t $tmp422 = param0.value;
int32_t $tmp423 = param1.value;
bool $tmp424 = ((int32_t) $tmp422) < $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
return $tmp425;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:663
int16_t $tmp426 = param0.value;
int64_t $tmp427 = param1.value;
bool $tmp428 = ((int64_t) $tmp426) < $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
return $tmp429;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:669
int16_t $tmp430 = param0.value;
int64_t $tmp431 = param1.value;
bool $tmp432 = ((int64_t) $tmp430) < $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
return $tmp433;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:675
int16_t $tmp434 = param0.value;
uint8_t $tmp435 = param1.value;
bool $tmp436 = ((int32_t) $tmp434) < ((int32_t) $tmp435);
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436};
return $tmp437;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:681
int16_t $tmp438 = param0.value;
uint16_t $tmp439 = param1.value;
bool $tmp440 = ((int32_t) $tmp438) < ((int32_t) $tmp439);
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
return $tmp441;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:687
int16_t $tmp442 = param0.value;
uint32_t $tmp443 = param1.value;
bool $tmp444 = ((int64_t) $tmp442) < ((int64_t) $tmp443);
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
return $tmp445;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:693
int16_t $tmp446 = param0.value;
uint64_t $tmp447 = param1.value;
bool $tmp448 = ((int64_t) $tmp446) < ((int64_t) $tmp447);
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
return $tmp449;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:699
int16_t $tmp450 = param0.value;
int8_t $tmp451 = param1.value;
bool $tmp452 = $tmp450 > ((int16_t) $tmp451);
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
return $tmp453;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:706
int16_t $tmp454 = param0.value;
int16_t $tmp455 = param1.value;
bool $tmp456 = $tmp454 > $tmp455;
frost$core$Bit $tmp457 = (frost$core$Bit) {$tmp456};
return $tmp457;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:712
int16_t $tmp458 = param0.value;
int32_t $tmp459 = param1.value;
bool $tmp460 = ((int32_t) $tmp458) > $tmp459;
frost$core$Bit $tmp461 = (frost$core$Bit) {$tmp460};
return $tmp461;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:718
int16_t $tmp462 = param0.value;
int64_t $tmp463 = param1.value;
bool $tmp464 = ((int64_t) $tmp462) > $tmp463;
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464};
return $tmp465;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:724
int16_t $tmp466 = param0.value;
int64_t $tmp467 = param1.value;
bool $tmp468 = ((int64_t) $tmp466) > $tmp467;
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468};
return $tmp469;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:730
int16_t $tmp470 = param0.value;
uint8_t $tmp471 = param1.value;
bool $tmp472 = ((int32_t) $tmp470) > ((int32_t) $tmp471);
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
return $tmp473;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:736
int16_t $tmp474 = param0.value;
uint16_t $tmp475 = param1.value;
bool $tmp476 = ((int32_t) $tmp474) > ((int32_t) $tmp475);
frost$core$Bit $tmp477 = (frost$core$Bit) {$tmp476};
return $tmp477;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:742
int16_t $tmp478 = param0.value;
uint32_t $tmp479 = param1.value;
bool $tmp480 = ((int64_t) $tmp478) > ((int64_t) $tmp479);
frost$core$Bit $tmp481 = (frost$core$Bit) {$tmp480};
return $tmp481;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:748
int16_t $tmp482 = param0.value;
uint64_t $tmp483 = param1.value;
bool $tmp484 = ((int64_t) $tmp482) > ((int64_t) $tmp483);
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
return $tmp485;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:754
int16_t $tmp486 = param0.value;
int8_t $tmp487 = param1.value;
bool $tmp488 = $tmp486 >= ((int16_t) $tmp487);
frost$core$Bit $tmp489 = (frost$core$Bit) {$tmp488};
return $tmp489;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:761
int16_t $tmp490 = param0.value;
int16_t $tmp491 = param1.value;
bool $tmp492 = $tmp490 >= $tmp491;
frost$core$Bit $tmp493 = (frost$core$Bit) {$tmp492};
return $tmp493;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:767
int16_t $tmp494 = param0.value;
int32_t $tmp495 = param1.value;
bool $tmp496 = ((int32_t) $tmp494) >= $tmp495;
frost$core$Bit $tmp497 = (frost$core$Bit) {$tmp496};
return $tmp497;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:773
int16_t $tmp498 = param0.value;
int64_t $tmp499 = param1.value;
bool $tmp500 = ((int64_t) $tmp498) >= $tmp499;
frost$core$Bit $tmp501 = (frost$core$Bit) {$tmp500};
return $tmp501;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:779
int16_t $tmp502 = param0.value;
int64_t $tmp503 = param1.value;
bool $tmp504 = ((int64_t) $tmp502) >= $tmp503;
frost$core$Bit $tmp505 = (frost$core$Bit) {$tmp504};
return $tmp505;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:785
int16_t $tmp506 = param0.value;
uint8_t $tmp507 = param1.value;
bool $tmp508 = ((int32_t) $tmp506) >= ((int32_t) $tmp507);
frost$core$Bit $tmp509 = (frost$core$Bit) {$tmp508};
return $tmp509;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:791
int16_t $tmp510 = param0.value;
uint16_t $tmp511 = param1.value;
bool $tmp512 = ((int32_t) $tmp510) >= ((int32_t) $tmp511);
frost$core$Bit $tmp513 = (frost$core$Bit) {$tmp512};
return $tmp513;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:797
int16_t $tmp514 = param0.value;
uint32_t $tmp515 = param1.value;
bool $tmp516 = ((int64_t) $tmp514) >= ((int64_t) $tmp515);
frost$core$Bit $tmp517 = (frost$core$Bit) {$tmp516};
return $tmp517;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:803
int16_t $tmp518 = param0.value;
uint64_t $tmp519 = param1.value;
bool $tmp520 = ((int64_t) $tmp518) >= ((int64_t) $tmp519);
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520};
return $tmp521;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:809
int16_t $tmp522 = param0.value;
int8_t $tmp523 = param1.value;
bool $tmp524 = $tmp522 <= ((int16_t) $tmp523);
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
return $tmp525;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:816
int16_t $tmp526 = param0.value;
int16_t $tmp527 = param1.value;
bool $tmp528 = $tmp526 <= $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
return $tmp529;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:822
int16_t $tmp530 = param0.value;
int32_t $tmp531 = param1.value;
bool $tmp532 = ((int32_t) $tmp530) <= $tmp531;
frost$core$Bit $tmp533 = (frost$core$Bit) {$tmp532};
return $tmp533;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:828
int16_t $tmp534 = param0.value;
int64_t $tmp535 = param1.value;
bool $tmp536 = ((int64_t) $tmp534) <= $tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536};
return $tmp537;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:834
int16_t $tmp538 = param0.value;
int64_t $tmp539 = param1.value;
bool $tmp540 = ((int64_t) $tmp538) <= $tmp539;
frost$core$Bit $tmp541 = (frost$core$Bit) {$tmp540};
return $tmp541;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:840
int16_t $tmp542 = param0.value;
uint8_t $tmp543 = param1.value;
bool $tmp544 = ((int32_t) $tmp542) <= ((int32_t) $tmp543);
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
return $tmp545;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:846
int16_t $tmp546 = param0.value;
uint16_t $tmp547 = param1.value;
bool $tmp548 = ((int32_t) $tmp546) <= ((int32_t) $tmp547);
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548};
return $tmp549;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:852
int16_t $tmp550 = param0.value;
uint32_t $tmp551 = param1.value;
bool $tmp552 = ((int64_t) $tmp550) <= ((int64_t) $tmp551);
frost$core$Bit $tmp553 = (frost$core$Bit) {$tmp552};
return $tmp553;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:858
int16_t $tmp554 = param0.value;
uint64_t $tmp555 = param1.value;
bool $tmp556 = ((int64_t) $tmp554) <= ((int64_t) $tmp555);
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
return $tmp557;

}
frost$core$Int16 frost$core$Int16$get_abs$R$frost$core$Int16(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:864
frost$core$Int16 $tmp558 = (frost$core$Int16) {0u};
int16_t $tmp559 = param0.value;
int16_t $tmp560 = $tmp558.value;
bool $tmp561 = $tmp559 < $tmp560;
frost$core$Bit $tmp562 = (frost$core$Bit) {$tmp561};
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:865
// begin inline call to function frost.core.Int16.-():frost.core.Int16 from Int16.frost:865:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:141
int16_t $tmp564 = param0.value;
int16_t $tmp565 = -$tmp564;
frost$core$Int16 $tmp566 = (frost$core$Int16) {$tmp565};
return $tmp566;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:867
return param0;

}
frost$core$Int16 frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:873
int16_t $tmp567 = param0.value;
int8_t $tmp568 = param1.value;
bool $tmp569 = $tmp567 < ((int16_t) $tmp568);
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:874
int16_t $tmp572 = param0.value;
frost$core$Int16 $tmp573 = (frost$core$Int16) {$tmp572};
return $tmp573;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:876
int8_t $tmp574 = param1.value;
frost$core$Int16 $tmp575 = (frost$core$Int16) {((int16_t) $tmp574)};
return $tmp575;

}
frost$core$Int16 frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:882
int16_t $tmp576 = param0.value;
int16_t $tmp577 = param1.value;
bool $tmp578 = $tmp576 < $tmp577;
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:883
int16_t $tmp581 = param0.value;
frost$core$Int16 $tmp582 = (frost$core$Int16) {$tmp581};
return $tmp582;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:885
int16_t $tmp583 = param1.value;
frost$core$Int16 $tmp584 = (frost$core$Int16) {$tmp583};
return $tmp584;

}
frost$core$Int32 frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:891
int16_t $tmp585 = param0.value;
int32_t $tmp586 = param1.value;
bool $tmp587 = ((int32_t) $tmp585) < $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:892
int16_t $tmp590 = param0.value;
frost$core$Int32 $tmp591 = (frost$core$Int32) {((int32_t) $tmp590)};
return $tmp591;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:894
int32_t $tmp592 = param1.value;
frost$core$Int32 $tmp593 = (frost$core$Int32) {$tmp592};
return $tmp593;

}
frost$core$Int64 frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:900
int16_t $tmp594 = param0.value;
int64_t $tmp595 = param1.value;
bool $tmp596 = ((int64_t) $tmp594) < $tmp595;
frost$core$Bit $tmp597 = (frost$core$Bit) {$tmp596};
bool $tmp598 = $tmp597.value;
if ($tmp598) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:901
int16_t $tmp599 = param0.value;
frost$core$Int64 $tmp600 = (frost$core$Int64) {((int64_t) $tmp599)};
return $tmp600;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:903
int64_t $tmp601 = param1.value;
frost$core$Int64 $tmp602 = (frost$core$Int64) {$tmp601};
return $tmp602;

}
frost$core$Int frost$core$Int16$min$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:909
int16_t $tmp603 = param0.value;
int64_t $tmp604 = param1.value;
bool $tmp605 = ((int64_t) $tmp603) < $tmp604;
frost$core$Bit $tmp606 = (frost$core$Bit) {$tmp605};
bool $tmp607 = $tmp606.value;
if ($tmp607) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:910
int16_t $tmp608 = param0.value;
frost$core$Int $tmp609 = (frost$core$Int) {((int64_t) $tmp608)};
return $tmp609;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:912
int64_t $tmp610 = param1.value;
frost$core$Int $tmp611 = (frost$core$Int) {$tmp610};
return $tmp611;

}
frost$core$Int32 frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:918
int16_t $tmp612 = param0.value;
uint8_t $tmp613 = param1.value;
bool $tmp614 = ((int32_t) $tmp612) < ((int32_t) $tmp613);
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
bool $tmp616 = $tmp615.value;
if ($tmp616) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:919
int16_t $tmp617 = param0.value;
frost$core$Int32 $tmp618 = (frost$core$Int32) {((int32_t) $tmp617)};
return $tmp618;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:921
uint8_t $tmp619 = param1.value;
frost$core$Int32 $tmp620 = (frost$core$Int32) {((int32_t) $tmp619)};
return $tmp620;

}
frost$core$Int32 frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:927
int16_t $tmp621 = param0.value;
uint16_t $tmp622 = param1.value;
bool $tmp623 = ((int32_t) $tmp621) < ((int32_t) $tmp622);
frost$core$Bit $tmp624 = (frost$core$Bit) {$tmp623};
bool $tmp625 = $tmp624.value;
if ($tmp625) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:928
int16_t $tmp626 = param0.value;
frost$core$Int32 $tmp627 = (frost$core$Int32) {((int32_t) $tmp626)};
return $tmp627;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:930
uint16_t $tmp628 = param1.value;
frost$core$Int32 $tmp629 = (frost$core$Int32) {((int32_t) $tmp628)};
return $tmp629;

}
frost$core$Int64 frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:936
int16_t $tmp630 = param0.value;
uint32_t $tmp631 = param1.value;
bool $tmp632 = ((int64_t) $tmp630) < ((int64_t) $tmp631);
frost$core$Bit $tmp633 = (frost$core$Bit) {$tmp632};
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:937
int16_t $tmp635 = param0.value;
frost$core$Int64 $tmp636 = (frost$core$Int64) {((int64_t) $tmp635)};
return $tmp636;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:939
uint32_t $tmp637 = param1.value;
frost$core$Int64 $tmp638 = (frost$core$Int64) {((int64_t) $tmp637)};
return $tmp638;

}
frost$core$Int64 frost$core$Int16$min$frost$core$UInt$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:946
int16_t $tmp639 = param0.value;
uint64_t $tmp640 = param1.value;
bool $tmp641 = ((int64_t) $tmp639) < ((int64_t) $tmp640);
frost$core$Bit $tmp642 = (frost$core$Bit) {$tmp641};
bool $tmp643 = $tmp642.value;
if ($tmp643) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:947
int16_t $tmp644 = param0.value;
frost$core$Int64 $tmp645 = (frost$core$Int64) {((int64_t) $tmp644)};
return $tmp645;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:949
uint64_t $tmp646 = param1.value;
frost$core$Int64 $tmp647 = (frost$core$Int64) {((int64_t) $tmp646)};
return $tmp647;

}
frost$core$Int16 frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:955
int16_t $tmp648 = param0.value;
int8_t $tmp649 = param1.value;
bool $tmp650 = $tmp648 > ((int16_t) $tmp649);
frost$core$Bit $tmp651 = (frost$core$Bit) {$tmp650};
bool $tmp652 = $tmp651.value;
if ($tmp652) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:956
int16_t $tmp653 = param0.value;
frost$core$Int16 $tmp654 = (frost$core$Int16) {$tmp653};
return $tmp654;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:958
int8_t $tmp655 = param1.value;
frost$core$Int16 $tmp656 = (frost$core$Int16) {((int16_t) $tmp655)};
return $tmp656;

}
frost$core$Int16 frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:964
int16_t $tmp657 = param0.value;
int16_t $tmp658 = param1.value;
bool $tmp659 = $tmp657 > $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
bool $tmp661 = $tmp660.value;
if ($tmp661) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:965
int16_t $tmp662 = param0.value;
frost$core$Int16 $tmp663 = (frost$core$Int16) {$tmp662};
return $tmp663;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:967
int16_t $tmp664 = param1.value;
frost$core$Int16 $tmp665 = (frost$core$Int16) {$tmp664};
return $tmp665;

}
frost$core$Int32 frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:973
int16_t $tmp666 = param0.value;
int32_t $tmp667 = param1.value;
bool $tmp668 = ((int32_t) $tmp666) > $tmp667;
frost$core$Bit $tmp669 = (frost$core$Bit) {$tmp668};
bool $tmp670 = $tmp669.value;
if ($tmp670) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:974
int16_t $tmp671 = param0.value;
frost$core$Int32 $tmp672 = (frost$core$Int32) {((int32_t) $tmp671)};
return $tmp672;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:976
int32_t $tmp673 = param1.value;
frost$core$Int32 $tmp674 = (frost$core$Int32) {$tmp673};
return $tmp674;

}
frost$core$Int64 frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:982
int16_t $tmp675 = param0.value;
int64_t $tmp676 = param1.value;
bool $tmp677 = ((int64_t) $tmp675) > $tmp676;
frost$core$Bit $tmp678 = (frost$core$Bit) {$tmp677};
bool $tmp679 = $tmp678.value;
if ($tmp679) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:983
int16_t $tmp680 = param0.value;
frost$core$Int64 $tmp681 = (frost$core$Int64) {((int64_t) $tmp680)};
return $tmp681;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:985
int64_t $tmp682 = param1.value;
frost$core$Int64 $tmp683 = (frost$core$Int64) {$tmp682};
return $tmp683;

}
frost$core$Int frost$core$Int16$max$frost$core$Int$R$frost$core$Int(frost$core$Int16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:991
int16_t $tmp684 = param0.value;
int64_t $tmp685 = param1.value;
bool $tmp686 = ((int64_t) $tmp684) > $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:992
int16_t $tmp689 = param0.value;
frost$core$Int $tmp690 = (frost$core$Int) {((int64_t) $tmp689)};
return $tmp690;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:994
int64_t $tmp691 = param1.value;
frost$core$Int $tmp692 = (frost$core$Int) {$tmp691};
return $tmp692;

}
frost$core$Int32 frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1000
int16_t $tmp693 = param0.value;
uint8_t $tmp694 = param1.value;
bool $tmp695 = ((int32_t) $tmp693) > ((int32_t) $tmp694);
frost$core$Bit $tmp696 = (frost$core$Bit) {$tmp695};
bool $tmp697 = $tmp696.value;
if ($tmp697) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1001
int16_t $tmp698 = param0.value;
frost$core$Int32 $tmp699 = (frost$core$Int32) {((int32_t) $tmp698)};
return $tmp699;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1003
uint8_t $tmp700 = param1.value;
frost$core$Int32 $tmp701 = (frost$core$Int32) {((int32_t) $tmp700)};
return $tmp701;

}
frost$core$Int32 frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1009
int16_t $tmp702 = param0.value;
uint16_t $tmp703 = param1.value;
bool $tmp704 = ((int32_t) $tmp702) > ((int32_t) $tmp703);
frost$core$Bit $tmp705 = (frost$core$Bit) {$tmp704};
bool $tmp706 = $tmp705.value;
if ($tmp706) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1010
int16_t $tmp707 = param0.value;
frost$core$Int32 $tmp708 = (frost$core$Int32) {((int32_t) $tmp707)};
return $tmp708;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1012
uint16_t $tmp709 = param1.value;
frost$core$Int32 $tmp710 = (frost$core$Int32) {((int32_t) $tmp709)};
return $tmp710;

}
frost$core$Int64 frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1018
int16_t $tmp711 = param0.value;
uint32_t $tmp712 = param1.value;
bool $tmp713 = ((int64_t) $tmp711) > ((int64_t) $tmp712);
frost$core$Bit $tmp714 = (frost$core$Bit) {$tmp713};
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1019
int16_t $tmp716 = param0.value;
frost$core$Int64 $tmp717 = (frost$core$Int64) {((int64_t) $tmp716)};
return $tmp717;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1021
uint32_t $tmp718 = param1.value;
frost$core$Int64 $tmp719 = (frost$core$Int64) {((int64_t) $tmp718)};
return $tmp719;

}
frost$core$Int64 frost$core$Int16$max$frost$core$UInt$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1028
int16_t $tmp720 = param0.value;
uint64_t $tmp721 = param1.value;
bool $tmp722 = ((int64_t) $tmp720) > ((int64_t) $tmp721);
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1029
int16_t $tmp725 = param0.value;
frost$core$Int64 $tmp726 = (frost$core$Int64) {((int64_t) $tmp725)};
return $tmp726;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1031
uint64_t $tmp727 = param1.value;
frost$core$Int64 $tmp728 = (frost$core$Int64) {((int64_t) $tmp727)};
return $tmp728;

}
frost$collections$ListView* frost$core$Int16$$IDX$frost$core$Range$LTfrost$core$Int16$GT$R$frost$collections$ListView$LTfrost$core$Int16$GT(frost$core$Range$LTfrost$core$Int16$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1036
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int16List));
org$frostlang$frost$Int16List* $tmp729 = (org$frostlang$frost$Int16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int16List$class);
frost$core$Int16 $tmp730 = param0.min;
frost$core$Int16 $tmp731 = param0.max;
frost$core$Int16 $tmp732 = (frost$core$Int16) {1u};
frost$core$Bit $tmp733 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT $tmp734 = frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$init$frost$core$Int16$frost$core$Int16$frost$core$Int16$frost$core$Bit($tmp730, $tmp731, $tmp732, $tmp733);
org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT($tmp729, $tmp734);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp729)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp729));
return ((frost$collections$ListView*) $tmp729);

}
frost$collections$ListView* frost$core$Int16$$IDX$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$collections$ListView$LTfrost$core$Int16$GT(frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1041
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int16List));
org$frostlang$frost$Int16List* $tmp735 = (org$frostlang$frost$Int16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int16List$class);
org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT($tmp735, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp735)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp735));
return ((frost$collections$ListView*) $tmp735);

}
frost$core$Bit frost$core$Int16$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int param1) {

frost$core$Int $tmp736 = (frost$core$Int) {0u};
int64_t $tmp737 = param1.value;
int64_t $tmp738 = $tmp736.value;
bool $tmp739 = $tmp737 >= $tmp738;
frost$core$Bit $tmp740 = (frost$core$Bit) {$tmp739};
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block3; else goto block2;
block3:;
frost$core$Int16$wrapper* $tmp742;
$tmp742 = (frost$core$Int16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$Int16$wrapperclass);
$tmp742->value = param0;
ITable* $tmp743 = ((frost$collections$CollectionView*) $tmp742)->$class->itable;
while ($tmp743->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp743 = $tmp743->next;
}
$fn745 $tmp744 = $tmp743->methods[0];
frost$core$Int $tmp746 = $tmp744(((frost$collections$CollectionView*) $tmp742));
int64_t $tmp747 = param1.value;
int64_t $tmp748 = $tmp746.value;
bool $tmp749 = $tmp747 < $tmp748;
frost$core$Bit $tmp750 = (frost$core$Bit) {$tmp749};
bool $tmp751 = $tmp750.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp742)));
if ($tmp751) goto block1; else goto block2;
block2:;
frost$core$Int $tmp752 = (frost$core$Int) {1046u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s753, $tmp752, &$s754);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1047
frost$core$Int $tmp755 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from Int16.frost:1047:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int.frost:389
int64_t $tmp756 = $tmp755.value;
int64_t $tmp757 = param1.value;
int64_t $tmp758 = $tmp756 << $tmp757;
frost$core$Int $tmp759 = (frost$core$Int) {$tmp758};
// begin inline call to function frost.core.Int16.&&(other:frost.core.Int):frost.core.Int from Int16.frost:1047:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:376
int16_t $tmp760 = param0.value;
int64_t $tmp761 = $tmp759.value;
int64_t $tmp762 = ((int64_t) $tmp760) & $tmp761;
frost$core$Int $tmp763 = (frost$core$Int) {$tmp762};
frost$core$Int $tmp764 = (frost$core$Int) {0u};
int64_t $tmp765 = $tmp763.value;
int64_t $tmp766 = $tmp764.value;
bool $tmp767 = $tmp765 != $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
return $tmp768;

}
frost$core$Int frost$core$Int16$get_count$R$frost$core$Int(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1053
frost$core$Int $tmp769 = (frost$core$Int) {16u};
return $tmp769;

}
frost$collections$Iterator* frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1063
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp770 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int16.get_asUInt64():frost.core.UInt64 from Int16.frost:1063:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1142
int16_t $tmp771 = param0.value;
frost$core$UInt64 $tmp772 = (frost$core$UInt64) {((uint64_t) $tmp771)};
frost$core$UInt64 $tmp773 = (frost$core$UInt64) {32768u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp770, $tmp772, $tmp773);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp770)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp770));
return ((frost$collections$Iterator*) $tmp770);

}
frost$core$Int frost$core$Int16$get_hash$R$frost$core$Int(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1068
int16_t $tmp774 = param0.value;
frost$core$Int $tmp775 = (frost$core$Int) {((int64_t) $tmp774)};
return $tmp775;

}
frost$core$Int16$nullable frost$core$Int16$parse$frost$core$String$frost$core$Int$R$frost$core$Int16$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int $tmp776 = (frost$core$Int) {2u};
int64_t $tmp777 = param1.value;
int64_t $tmp778 = $tmp776.value;
bool $tmp779 = $tmp777 >= $tmp778;
frost$core$Bit $tmp780 = (frost$core$Bit) {$tmp779};
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block3; else goto block2;
block3:;
frost$core$Int $tmp782 = (frost$core$Int) {36u};
int64_t $tmp783 = param1.value;
int64_t $tmp784 = $tmp782.value;
bool $tmp785 = $tmp783 <= $tmp784;
frost$core$Bit $tmp786 = (frost$core$Bit) {$tmp785};
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block1; else goto block2;
block2:;
frost$core$Int $tmp788 = (frost$core$Int) {1074u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s789, $tmp788, &$s790);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1075
frost$core$Bit $tmp791 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s792);
bool $tmp793 = $tmp791.value;
if ($tmp793) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1076
frost$core$Int $tmp794 = (frost$core$Int) {1u};
frost$core$Bit $tmp795 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp796 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp794, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp795);
frost$core$String* $tmp797 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(param0, $tmp796);
frost$core$UInt64$nullable $tmp798 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q($tmp797, param1);
*(&local0) = $tmp798;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp797));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1077
frost$core$UInt64$nullable $tmp799 = *(&local0);
frost$core$Bit $tmp800 = (frost$core$Bit) {!$tmp799.nonnull};
bool $tmp801 = $tmp800.value;
if ($tmp801) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1078
return ((frost$core$Int16$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1080
frost$core$UInt64$nullable $tmp802 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt16():frost.core.Int16 from Int16.frost:1080:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:556
uint64_t $tmp803 = ((frost$core$UInt64) $tmp802.value).value;
frost$core$Int16 $tmp804 = (frost$core$Int16) {((int16_t) $tmp803)};
// begin inline call to function frost.core.Int16.-():frost.core.Int16 from Int16.frost:1080:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:141
int16_t $tmp805 = $tmp804.value;
int16_t $tmp806 = -$tmp805;
frost$core$Int16 $tmp807 = (frost$core$Int16) {$tmp806};
return ((frost$core$Int16$nullable) { $tmp807, true });
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1083
frost$core$UInt64$nullable $tmp808 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp808;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1084
frost$core$UInt64$nullable $tmp809 = *(&local1);
frost$core$Bit $tmp810 = (frost$core$Bit) {!$tmp809.nonnull};
bool $tmp811 = $tmp810.value;
if ($tmp811) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1085
return ((frost$core$Int16$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1087
frost$core$UInt64$nullable $tmp812 = *(&local1);
// begin inline call to function frost.core.UInt64.get_asInt16():frost.core.Int16 from Int16.frost:1087:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:556
uint64_t $tmp813 = ((frost$core$UInt64) $tmp812.value).value;
frost$core$Int16 $tmp814 = (frost$core$Int16) {((int16_t) $tmp813)};
return ((frost$core$Int16$nullable) { $tmp814, true });
block5:;
goto block14;
block14:;

}
frost$core$Int frost$core$Int16$get_asInt$R$frost$core$Int(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1094
int16_t $tmp815 = param0.value;
frost$core$Int $tmp816 = (frost$core$Int) {((int64_t) $tmp815)};
return $tmp816;

}
frost$core$Int8 frost$core$Int16$get_asInt8$R$frost$core$Int8(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1100
int16_t $tmp817 = param0.value;
frost$core$Int8 $tmp818 = (frost$core$Int8) {((int8_t) $tmp817)};
return $tmp818;

}
frost$core$Int32 frost$core$Int16$get_asInt32$R$frost$core$Int32(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1106
int16_t $tmp819 = param0.value;
frost$core$Int32 $tmp820 = (frost$core$Int32) {((int32_t) $tmp819)};
return $tmp820;

}
frost$core$Int64 frost$core$Int16$get_asInt64$R$frost$core$Int64(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1112
int16_t $tmp821 = param0.value;
frost$core$Int64 $tmp822 = (frost$core$Int64) {((int64_t) $tmp821)};
return $tmp822;

}
frost$core$UInt frost$core$Int16$get_asUInt$R$frost$core$UInt(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1118
int16_t $tmp823 = param0.value;
frost$core$UInt $tmp824 = (frost$core$UInt) {((uint64_t) $tmp823)};
return $tmp824;

}
frost$core$UInt8 frost$core$Int16$get_asUInt8$R$frost$core$UInt8(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1124
int16_t $tmp825 = param0.value;
frost$core$UInt8 $tmp826 = (frost$core$UInt8) {((uint8_t) $tmp825)};
return $tmp826;

}
frost$core$UInt16 frost$core$Int16$get_asUInt16$R$frost$core$UInt16(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1130
int16_t $tmp827 = param0.value;
frost$core$UInt16 $tmp828 = (frost$core$UInt16) {((uint16_t) $tmp827)};
return $tmp828;

}
frost$core$UInt32 frost$core$Int16$get_asUInt32$R$frost$core$UInt32(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1136
int16_t $tmp829 = param0.value;
frost$core$UInt32 $tmp830 = (frost$core$UInt32) {((uint32_t) $tmp829)};
return $tmp830;

}
frost$core$UInt64 frost$core$Int16$get_asUInt64$R$frost$core$UInt64(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1142
int16_t $tmp831 = param0.value;
frost$core$UInt64 $tmp832 = (frost$core$UInt64) {((uint64_t) $tmp831)};
return $tmp832;

}
frost$core$Real32 frost$core$Int16$get_asReal32$R$frost$core$Real32(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1148
int16_t $tmp833 = param0.value;
frost$core$Real32 $tmp834 = (frost$core$Real32) {((float) $tmp833)};
return $tmp834;

}
frost$core$Real64 frost$core$Int16$get_asReal64$R$frost$core$Real64(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1154
int16_t $tmp835 = param0.value;
frost$core$Real64 $tmp836 = (frost$core$Real64) {((double) $tmp835)};
return $tmp836;

}
frost$core$String* frost$core$Int16$get_asString$R$frost$core$String(frost$core$Int16 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$Int16 local3;
frost$core$Int local4;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1160
frost$core$Int $tmp837 = (frost$core$Int) {6u};
*(&local0) = $tmp837;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1161
frost$core$Int $tmp838 = *(&local0);
frost$core$Int64 $tmp839 = frost$core$Int64$init$frost$core$Int($tmp838);
int64_t $tmp840 = $tmp839.value;
frost$core$Char8* $tmp841 = ((frost$core$Char8*) frostAlloc($tmp840 * 1));
*(&local1) = $tmp841;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1162
frost$core$Int $tmp842 = *(&local0);
frost$core$Int $tmp843 = (frost$core$Int) {1u};
int64_t $tmp844 = $tmp842.value;
int64_t $tmp845 = $tmp843.value;
int64_t $tmp846 = $tmp844 - $tmp845;
frost$core$Int $tmp847 = (frost$core$Int) {$tmp846};
*(&local2) = $tmp847;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1163
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1164
frost$core$Int16 $tmp848 = *(&local3);
frost$core$Int16 $tmp849 = (frost$core$Int16) {0u};
int16_t $tmp850 = $tmp848.value;
int16_t $tmp851 = $tmp849.value;
bool $tmp852 = $tmp850 >= $tmp851;
frost$core$Bit $tmp853 = (frost$core$Bit) {$tmp852};
bool $tmp854 = $tmp853.value;
if ($tmp854) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1165
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1166
frost$core$Char8* $tmp855 = *(&local1);
frost$core$Int $tmp856 = *(&local2);
frost$core$Int64 $tmp857 = frost$core$Int64$init$frost$core$Int($tmp856);
frost$core$Int16 $tmp858 = *(&local3);
frost$core$Int16 $tmp859 = (frost$core$Int16) {10u};
// begin inline call to function frost.core.Int16.%(other:frost.core.Int16):frost.core.Int32 from Int16.frost:1166:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:241
int16_t $tmp860 = $tmp858.value;
int16_t $tmp861 = $tmp859.value;
int32_t $tmp862 = ((int32_t) $tmp860) % ((int32_t) $tmp861);
frost$core$Int32 $tmp863 = (frost$core$Int32) {$tmp862};
frost$core$Int32 $tmp864 = (frost$core$Int32) {48u};
int32_t $tmp865 = $tmp863.value;
int32_t $tmp866 = $tmp864.value;
int32_t $tmp867 = $tmp865 + $tmp866;
frost$core$Int32 $tmp868 = (frost$core$Int32) {$tmp867};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int16.frost:1166:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:990
int32_t $tmp869 = $tmp868.value;
frost$core$UInt8 $tmp870 = (frost$core$UInt8) {((uint8_t) $tmp869)};
frost$core$Char8 $tmp871 = frost$core$Char8$init$frost$core$UInt8($tmp870);
int64_t $tmp872 = $tmp857.value;
$tmp855[$tmp872] = $tmp871;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1167
frost$core$Int16 $tmp873 = *(&local3);
frost$core$Int32 $tmp874 = frost$core$Int32$init$frost$core$Int16($tmp873);
frost$core$Int32 $tmp875 = (frost$core$Int32) {10u};
int32_t $tmp876 = $tmp874.value;
int32_t $tmp877 = $tmp875.value;
int32_t $tmp878 = $tmp876 / $tmp877;
frost$core$Int32 $tmp879 = (frost$core$Int32) {$tmp878};
// begin inline call to function frost.core.Int32.get_asInt16():frost.core.Int16 from Int16.frost:1167:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:972
int32_t $tmp880 = $tmp879.value;
frost$core$Int16 $tmp881 = (frost$core$Int16) {((int16_t) $tmp880)};
*(&local3) = $tmp881;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1168
frost$core$Int $tmp882 = *(&local2);
frost$core$Int $tmp883 = (frost$core$Int) {1u};
int64_t $tmp884 = $tmp882.value;
int64_t $tmp885 = $tmp883.value;
int64_t $tmp886 = $tmp884 - $tmp885;
frost$core$Int $tmp887 = (frost$core$Int) {$tmp886};
*(&local2) = $tmp887;
frost$core$Int16 $tmp888 = *(&local3);
frost$core$Int16 $tmp889 = (frost$core$Int16) {0u};
int16_t $tmp890 = $tmp888.value;
int16_t $tmp891 = $tmp889.value;
bool $tmp892 = $tmp890 > $tmp891;
frost$core$Bit $tmp893 = (frost$core$Bit) {$tmp892};
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1171
frost$core$Int $tmp895 = *(&local2);
frost$core$Int $tmp896 = (frost$core$Int) {1u};
int64_t $tmp897 = $tmp895.value;
int64_t $tmp898 = $tmp896.value;
int64_t $tmp899 = $tmp897 + $tmp898;
frost$core$Int $tmp900 = (frost$core$Int) {$tmp899};
*(&local2) = $tmp900;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1174
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1175
frost$core$Char8* $tmp901 = *(&local1);
frost$core$Int $tmp902 = *(&local2);
frost$core$Int64 $tmp903 = frost$core$Int64$init$frost$core$Int($tmp902);
frost$core$Int32 $tmp904 = (frost$core$Int32) {48u};
frost$core$Int16 $tmp905 = *(&local3);
frost$core$Int16 $tmp906 = (frost$core$Int16) {10u};
// begin inline call to function frost.core.Int16.%(other:frost.core.Int16):frost.core.Int32 from Int16.frost:1175:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:241
int16_t $tmp907 = $tmp905.value;
int16_t $tmp908 = $tmp906.value;
int32_t $tmp909 = ((int32_t) $tmp907) % ((int32_t) $tmp908);
frost$core$Int32 $tmp910 = (frost$core$Int32) {$tmp909};
int32_t $tmp911 = $tmp904.value;
int32_t $tmp912 = $tmp910.value;
int32_t $tmp913 = $tmp911 - $tmp912;
frost$core$Int32 $tmp914 = (frost$core$Int32) {$tmp913};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int16.frost:1175:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:990
int32_t $tmp915 = $tmp914.value;
frost$core$UInt8 $tmp916 = (frost$core$UInt8) {((uint8_t) $tmp915)};
frost$core$Char8 $tmp917 = frost$core$Char8$init$frost$core$UInt8($tmp916);
int64_t $tmp918 = $tmp903.value;
$tmp901[$tmp918] = $tmp917;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1176
frost$core$Int16 $tmp919 = *(&local3);
frost$core$Int32 $tmp920 = frost$core$Int32$init$frost$core$Int16($tmp919);
frost$core$Int32 $tmp921 = (frost$core$Int32) {10u};
int32_t $tmp922 = $tmp920.value;
int32_t $tmp923 = $tmp921.value;
int32_t $tmp924 = $tmp922 / $tmp923;
frost$core$Int32 $tmp925 = (frost$core$Int32) {$tmp924};
// begin inline call to function frost.core.Int32.get_asInt16():frost.core.Int16 from Int16.frost:1176:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:972
int32_t $tmp926 = $tmp925.value;
frost$core$Int16 $tmp927 = (frost$core$Int16) {((int16_t) $tmp926)};
*(&local3) = $tmp927;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1177
frost$core$Int $tmp928 = *(&local2);
frost$core$Int $tmp929 = (frost$core$Int) {1u};
int64_t $tmp930 = $tmp928.value;
int64_t $tmp931 = $tmp929.value;
int64_t $tmp932 = $tmp930 - $tmp931;
frost$core$Int $tmp933 = (frost$core$Int) {$tmp932};
*(&local2) = $tmp933;
frost$core$Int16 $tmp934 = *(&local3);
frost$core$Int16 $tmp935 = (frost$core$Int16) {0u};
int16_t $tmp936 = $tmp934.value;
int16_t $tmp937 = $tmp935.value;
bool $tmp938 = $tmp936 < $tmp937;
frost$core$Bit $tmp939 = (frost$core$Bit) {$tmp938};
bool $tmp940 = $tmp939.value;
if ($tmp940) goto block10; else goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1180
frost$core$Char8* $tmp941 = *(&local1);
frost$core$Int $tmp942 = *(&local2);
frost$core$Int64 $tmp943 = frost$core$Int64$init$frost$core$Int($tmp942);
frost$core$UInt8 $tmp944 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp945 = frost$core$Char8$init$frost$core$UInt8($tmp944);
int64_t $tmp946 = $tmp943.value;
$tmp941[$tmp946] = $tmp945;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1182
frost$core$Int $tmp947 = *(&local0);
frost$core$Int $tmp948 = *(&local2);
int64_t $tmp949 = $tmp947.value;
int64_t $tmp950 = $tmp948.value;
int64_t $tmp951 = $tmp949 - $tmp950;
frost$core$Int $tmp952 = (frost$core$Int) {$tmp951};
*(&local4) = $tmp952;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1183
frost$core$Int $tmp953 = (frost$core$Int) {0u};
frost$core$Int $tmp954 = *(&local4);
frost$core$Bit $tmp955 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp956 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp953, $tmp954, $tmp955);
frost$core$Int $tmp957 = $tmp956.min;
*(&local5) = $tmp957;
frost$core$Int $tmp958 = $tmp956.max;
frost$core$Bit $tmp959 = $tmp956.inclusive;
bool $tmp960 = $tmp959.value;
frost$core$Int $tmp961 = (frost$core$Int) {1u};
if ($tmp960) goto block19; else goto block20;
block19:;
int64_t $tmp962 = $tmp957.value;
int64_t $tmp963 = $tmp958.value;
bool $tmp964 = $tmp962 <= $tmp963;
frost$core$Bit $tmp965 = (frost$core$Bit) {$tmp964};
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block16; else goto block17;
block20:;
int64_t $tmp967 = $tmp957.value;
int64_t $tmp968 = $tmp958.value;
bool $tmp969 = $tmp967 < $tmp968;
frost$core$Bit $tmp970 = (frost$core$Bit) {$tmp969};
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1184
frost$core$Char8* $tmp972 = *(&local1);
frost$core$Int $tmp973 = *(&local5);
frost$core$Int64 $tmp974 = frost$core$Int64$init$frost$core$Int($tmp973);
frost$core$Char8* $tmp975 = *(&local1);
frost$core$Int $tmp976 = *(&local5);
frost$core$Int $tmp977 = *(&local2);
int64_t $tmp978 = $tmp976.value;
int64_t $tmp979 = $tmp977.value;
int64_t $tmp980 = $tmp978 + $tmp979;
frost$core$Int $tmp981 = (frost$core$Int) {$tmp980};
frost$core$Int64 $tmp982 = frost$core$Int64$init$frost$core$Int($tmp981);
int64_t $tmp983 = $tmp982.value;
frost$core$Char8 $tmp984 = $tmp975[$tmp983];
int64_t $tmp985 = $tmp974.value;
$tmp972[$tmp985] = $tmp984;
frost$core$Int $tmp986 = *(&local5);
int64_t $tmp987 = $tmp958.value;
int64_t $tmp988 = $tmp986.value;
int64_t $tmp989 = $tmp987 - $tmp988;
frost$core$Int $tmp990 = (frost$core$Int) {$tmp989};
if ($tmp960) goto block22; else goto block23;
block22:;
int64_t $tmp991 = $tmp990.value;
int64_t $tmp992 = $tmp961.value;
bool $tmp993 = $tmp991 >= $tmp992;
frost$core$Bit $tmp994 = (frost$core$Bit) {$tmp993};
bool $tmp995 = $tmp994.value;
if ($tmp995) goto block21; else goto block17;
block23:;
int64_t $tmp996 = $tmp990.value;
int64_t $tmp997 = $tmp961.value;
bool $tmp998 = $tmp996 > $tmp997;
frost$core$Bit $tmp999 = (frost$core$Bit) {$tmp998};
bool $tmp1000 = $tmp999.value;
if ($tmp1000) goto block21; else goto block17;
block21:;
int64_t $tmp1001 = $tmp986.value;
int64_t $tmp1002 = $tmp961.value;
int64_t $tmp1003 = $tmp1001 + $tmp1002;
frost$core$Int $tmp1004 = (frost$core$Int) {$tmp1003};
*(&local5) = $tmp1004;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1186
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1005 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp1006 = *(&local1);
frost$core$Int $tmp1007 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp1005, $tmp1006, $tmp1007);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1005));
return $tmp1005;

}
frost$core$String* frost$core$Int16$format$frost$core$String$R$frost$core$String(frost$core$Int16 param0, frost$core$String* param1) {

frost$core$Int16 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1192
int16_t $tmp1008 = param0.value;
bool $tmp1009 = $tmp1008 < 0u;
frost$core$Bit $tmp1010 = (frost$core$Bit) {$tmp1009};
// begin inline call to function frost.core.Int16.get_abs():frost.core.Int16 from Int16.frost:1192:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:864
frost$core$Int16 $tmp1011 = (frost$core$Int16) {0u};
int16_t $tmp1012 = param0.value;
int16_t $tmp1013 = $tmp1011.value;
bool $tmp1014 = $tmp1012 < $tmp1013;
frost$core$Bit $tmp1015 = (frost$core$Bit) {$tmp1014};
bool $tmp1016 = $tmp1015.value;
if ($tmp1016) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:865
// begin inline call to function frost.core.Int16.-():frost.core.Int16 from Int16.frost:865:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:141
int16_t $tmp1017 = param0.value;
int16_t $tmp1018 = -$tmp1017;
frost$core$Int16 $tmp1019 = (frost$core$Int16) {$tmp1018};
*(&local0) = $tmp1019;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:867
*(&local0) = param0;
goto block1;
block1:;
frost$core$Int16 $tmp1020 = *(&local0);
// begin inline call to function frost.core.Int16.get_asUInt64():frost.core.UInt64 from Int16.frost:1192:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:1142
int16_t $tmp1021 = $tmp1020.value;
frost$core$UInt64 $tmp1022 = (frost$core$UInt64) {((uint64_t) $tmp1021)};
frost$core$UInt64 $tmp1023 = (frost$core$UInt64) {65535u};
frost$core$String* $tmp1024 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp1010, $tmp1022, $tmp1023, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1024));
return $tmp1024;

}
void frost$core$Int16$cleanup(frost$core$Int16 param0) {

return;

}

