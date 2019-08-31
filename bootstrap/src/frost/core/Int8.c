#include "frost/core/Int8.h"
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
#include "frost/collections/HashKey.h"
#include "frost/core/Equatable.h"
#include "frost/core/Int32.h"
#include "frost/core/Int16.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt.h"
#include "frost/core/Real32.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int8.GT.h"
#include "org/frostlang/frost/Int8List.h"
#include "frost/core/SteppedRange.LTfrost/core/Int8.Cfrost/core/Int8.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int.Q.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Int8$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int8$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$collections$Iterator* frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int8$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int8$format$frost$core$String$R$frost$core$String(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int8$get_count$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int8$get_hash$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, ((frost$core$Int8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int8$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Int8$get_asString$R$frost$core$String(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$$ADD$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$$ADD$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int8$$ADD$frost$core$UInt$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$$SUB$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$$SUB$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int8$$SUB$frost$core$UInt$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$SUB$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int8$$SUB$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$$MUL$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$$MUL$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int8$$MUL$frost$core$UInt$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$$INTDIV$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$$INTDIV$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int8$$INTDIV$frost$core$UInt$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$$REM$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$$REM$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int8$$REM$frost$core$UInt$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$BNOT$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int8$$BNOT$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$$BAND$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$$BAND$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int8$$BAND$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int8$$BAND$frost$core$UInt$R$frost$core$UInt(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$$BOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$$BOR$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int8$$BOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int8$$BOR$frost$core$UInt$R$frost$core$UInt(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$$BXOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$$BXOR$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int8$$BXOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$Int8$$BXOR$frost$core$UInt$R$frost$core$UInt(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int8$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$Int$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int8$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$Int$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int8$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$Int$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int8$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$Int$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int8$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$Int$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int8$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$Int8$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$get_abs$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int8$get_abs$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$min$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$min$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int16 result = frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$min$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int8$min$frost$core$UInt$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int8 result = frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int16 result = frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$Int8$max$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$Int8$max$frost$core$Int$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int16 result = frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$max$frost$core$UInt$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Int64 result = frost$core$Int8$max$frost$core$UInt$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$Int8$get_bitCount$R$frost$core$Int8$shim(frost$core$Int8* sret, frost$core$Object* p0) {
    frost$core$Int8$get_bitCount$R$frost$core$Int8(sret, ((frost$core$Int8$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$Int8$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$Int8$get_asInt$R$frost$core$Int(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int8$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int8$get_asInt16$R$frost$core$Int16(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int8$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int8$get_asInt32$R$frost$core$Int32(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int8$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int8$get_asInt64$R$frost$core$Int64(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$Int8$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$Int8$get_asUInt$R$frost$core$UInt(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Int8$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Int8$get_asUInt8$R$frost$core$UInt8(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Int8$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Int8$get_asUInt16$R$frost$core$UInt16(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int8$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Int8$get_asUInt32$R$frost$core$UInt32(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int8$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Int8$get_asUInt64$R$frost$core$UInt64(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int8$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Int8$get_asReal32$R$frost$core$Real32(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int8$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Int8$get_asReal64$R$frost$core$Real64(((frost$core$Int8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Int8$cleanup$shim(frost$core$Object* p0) {
    frost$core$Int8$cleanup(((frost$core$Int8$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int8$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$core$Int8$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int8$_frost$core$Comparable, { frost$core$Int8$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int8$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int8$_frost$collections$ListView, { frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int8$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int8$_frost$collections$Iterable, { frost$core$Int8$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$Int8$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int8$_frost$core$Formattable, { frost$core$Int8$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int8$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Int8$_frost$collections$CollectionView, { frost$core$Int8$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int8$_frost$collections$HashKey, { frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Int8$class_type frost$core$Int8$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int8$_frost$core$Equatable, { frost$core$Int8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$ADD$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$ADD$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$SUB$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$SUB$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int8$$SUB$R$frost$core$Int8$shim, frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$MUL$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$MUL$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$INTDIV$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$INTDIV$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$REM$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$$REM$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int8$$BNOT$R$frost$core$Int8$shim, frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int8$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int8$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int8$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$Int8$get_abs$R$frost$core$Int8$shim, frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$min$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16$shim, frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$min$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8$shim, frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int8$max$frost$core$Int$R$frost$core$Int$shim, frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16$shim, frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int8$max$frost$core$UInt$R$frost$core$Int64$shim, frost$core$Int8$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$Int8$get_count$R$frost$core$Int$shim, frost$core$Int8$get_bitCount$R$frost$core$Int8$shim, frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int8$get_hash$R$frost$core$Int$shim, frost$core$Int8$get_asInt$R$frost$core$Int$shim, frost$core$Int8$get_asInt16$R$frost$core$Int16$shim, frost$core$Int8$get_asInt32$R$frost$core$Int32$shim, frost$core$Int8$get_asInt64$R$frost$core$Int64$shim, frost$core$Int8$get_asUInt$R$frost$core$UInt$shim, frost$core$Int8$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int8$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int8$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int8$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int8$get_asReal32$R$frost$core$Real32$shim, frost$core$Int8$get_asReal64$R$frost$core$Real64$shim, frost$core$Int8$format$frost$core$String$R$frost$core$String$shim, frost$core$Int8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, NULL, { frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[16]; } frost$core$Int8$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Comparable, { frost$core$Int8$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int8$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$ListView, { frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int8$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$Iterable, { frost$core$Int8$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$Int8$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Formattable, { frost$core$Int8$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int8$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$CollectionView, { frost$core$Int8$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int8$wrapper_frost$collections$HashKey, { frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim} };

static frost$core$String $s3;
frost$core$Int8$wrapperclass_type frost$core$Int8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Equatable, { frost$core$Int8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn803)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -7590539272432582497, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -7590539272432582497, NULL };
static frost$core$String $s811 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, -2256820527861775714, NULL };
static frost$core$String $s812 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 89, -1908921956172430917, NULL };
static frost$core$String $s847 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, -2256820527861775714, NULL };
static frost$core$String $s848 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3f", 117, -766631899501174366, NULL };
static frost$core$String $s850 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s864 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, -2256820527861775714, NULL };
static frost$core$String $s865 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s879 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, -2256820527861775714, NULL };
static frost$core$String $s880 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$Int8 frost$core$Int8$init$builtin_int8(int8_t param0) {

frost$core$Int8 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:30
int8_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int8 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:36
int8_t $tmp6 = param0.value;
int8_t $tmp7 = param1.value;
int32_t $tmp8 = ((int32_t) $tmp6) + ((int32_t) $tmp7);
frost$core$Int32 $tmp9 = (frost$core$Int32) {$tmp8};
return $tmp9;

}
frost$core$Int8 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:41
int8_t $tmp10 = param0.value;
int8_t $tmp11 = param1.value;
int8_t $tmp12 = $tmp10 + $tmp11;
frost$core$Int8 $tmp13 = (frost$core$Int8) {$tmp12};
return $tmp13;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:47
int8_t $tmp14 = param0.value;
int16_t $tmp15 = param1.value;
int32_t $tmp16 = ((int32_t) $tmp14) + ((int32_t) $tmp15);
frost$core$Int32 $tmp17 = (frost$core$Int32) {$tmp16};
return $tmp17;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:53
int8_t $tmp18 = param0.value;
int32_t $tmp19 = param1.value;
int32_t $tmp20 = ((int32_t) $tmp18) + $tmp19;
frost$core$Int32 $tmp21 = (frost$core$Int32) {$tmp20};
return $tmp21;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:59
int8_t $tmp22 = param0.value;
int64_t $tmp23 = param1.value;
int64_t $tmp24 = ((int64_t) $tmp22) + $tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {$tmp24};
return $tmp25;

}
frost$core$Int frost$core$Int8$$ADD$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:65
int8_t $tmp26 = param0.value;
int64_t $tmp27 = param1.value;
int64_t $tmp28 = ((int64_t) $tmp26) + $tmp27;
frost$core$Int $tmp29 = (frost$core$Int) {$tmp28};
return $tmp29;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:71
int8_t $tmp30 = param0.value;
uint8_t $tmp31 = param1.value;
int32_t $tmp32 = ((int32_t) $tmp30) + ((int32_t) $tmp31);
frost$core$Int32 $tmp33 = (frost$core$Int32) {$tmp32};
return $tmp33;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:77
int8_t $tmp34 = param0.value;
uint16_t $tmp35 = param1.value;
int32_t $tmp36 = ((int32_t) $tmp34) + ((int32_t) $tmp35);
frost$core$Int32 $tmp37 = (frost$core$Int32) {$tmp36};
return $tmp37;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:83
int8_t $tmp38 = param0.value;
uint32_t $tmp39 = param1.value;
int64_t $tmp40 = ((int64_t) $tmp38) + ((int64_t) $tmp39);
frost$core$Int64 $tmp41 = (frost$core$Int64) {$tmp40};
return $tmp41;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:89
int8_t $tmp42 = param0.value;
uint64_t $tmp43 = param1.value;
int64_t $tmp44 = ((int64_t) $tmp42) + ((int64_t) $tmp43);
frost$core$Int64 $tmp45 = (frost$core$Int64) {$tmp44};
return $tmp45;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:95
int8_t $tmp46 = param0.value;
int8_t $tmp47 = param1.value;
int32_t $tmp48 = ((int32_t) $tmp46) - ((int32_t) $tmp47);
frost$core$Int32 $tmp49 = (frost$core$Int32) {$tmp48};
return $tmp49;

}
frost$core$Int8 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:100
int8_t $tmp50 = param0.value;
int8_t $tmp51 = param1.value;
int8_t $tmp52 = $tmp50 - $tmp51;
frost$core$Int8 $tmp53 = (frost$core$Int8) {$tmp52};
return $tmp53;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:106
int8_t $tmp54 = param0.value;
int16_t $tmp55 = param1.value;
int32_t $tmp56 = ((int32_t) $tmp54) - ((int32_t) $tmp55);
frost$core$Int32 $tmp57 = (frost$core$Int32) {$tmp56};
return $tmp57;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:112
int8_t $tmp58 = param0.value;
int32_t $tmp59 = param1.value;
int32_t $tmp60 = ((int32_t) $tmp58) - $tmp59;
frost$core$Int32 $tmp61 = (frost$core$Int32) {$tmp60};
return $tmp61;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:118
int8_t $tmp62 = param0.value;
int64_t $tmp63 = param1.value;
int64_t $tmp64 = ((int64_t) $tmp62) - $tmp63;
frost$core$Int64 $tmp65 = (frost$core$Int64) {$tmp64};
return $tmp65;

}
frost$core$Int frost$core$Int8$$SUB$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:124
int8_t $tmp66 = param0.value;
int64_t $tmp67 = param1.value;
int64_t $tmp68 = ((int64_t) $tmp66) - $tmp67;
frost$core$Int $tmp69 = (frost$core$Int) {$tmp68};
return $tmp69;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:130
int8_t $tmp70 = param0.value;
uint8_t $tmp71 = param1.value;
int32_t $tmp72 = ((int32_t) $tmp70) - ((int32_t) $tmp71);
frost$core$Int32 $tmp73 = (frost$core$Int32) {$tmp72};
return $tmp73;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:136
int8_t $tmp74 = param0.value;
uint16_t $tmp75 = param1.value;
int32_t $tmp76 = ((int32_t) $tmp74) - ((int32_t) $tmp75);
frost$core$Int32 $tmp77 = (frost$core$Int32) {$tmp76};
return $tmp77;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:142
int8_t $tmp78 = param0.value;
uint32_t $tmp79 = param1.value;
int64_t $tmp80 = ((int64_t) $tmp78) - ((int64_t) $tmp79);
frost$core$Int64 $tmp81 = (frost$core$Int64) {$tmp80};
return $tmp81;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:148
int8_t $tmp82 = param0.value;
uint64_t $tmp83 = param1.value;
int64_t $tmp84 = ((int64_t) $tmp82) - ((int64_t) $tmp83);
frost$core$Int64 $tmp85 = (frost$core$Int64) {$tmp84};
return $tmp85;

}
frost$core$Int8 frost$core$Int8$$SUB$R$frost$core$Int8(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:153
int8_t $tmp86 = param0.value;
int8_t $tmp87 = -$tmp86;
frost$core$Int8 $tmp88 = (frost$core$Int8) {$tmp87};
return $tmp88;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:159
int8_t $tmp89 = param0.value;
int8_t $tmp90 = param1.value;
int32_t $tmp91 = ((int32_t) $tmp89) * ((int32_t) $tmp90);
frost$core$Int32 $tmp92 = (frost$core$Int32) {$tmp91};
return $tmp92;

}
frost$core$Int8 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:164
int8_t $tmp93 = param0.value;
int8_t $tmp94 = param1.value;
int8_t $tmp95 = $tmp93 * $tmp94;
frost$core$Int8 $tmp96 = (frost$core$Int8) {$tmp95};
return $tmp96;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:170
int8_t $tmp97 = param0.value;
int16_t $tmp98 = param1.value;
int32_t $tmp99 = ((int32_t) $tmp97) * ((int32_t) $tmp98);
frost$core$Int32 $tmp100 = (frost$core$Int32) {$tmp99};
return $tmp100;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:176
int8_t $tmp101 = param0.value;
int32_t $tmp102 = param1.value;
int32_t $tmp103 = ((int32_t) $tmp101) * $tmp102;
frost$core$Int32 $tmp104 = (frost$core$Int32) {$tmp103};
return $tmp104;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:182
int8_t $tmp105 = param0.value;
int64_t $tmp106 = param1.value;
int64_t $tmp107 = ((int64_t) $tmp105) * $tmp106;
frost$core$Int64 $tmp108 = (frost$core$Int64) {$tmp107};
return $tmp108;

}
frost$core$Int frost$core$Int8$$MUL$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:188
int8_t $tmp109 = param0.value;
int64_t $tmp110 = param1.value;
int64_t $tmp111 = ((int64_t) $tmp109) * $tmp110;
frost$core$Int $tmp112 = (frost$core$Int) {$tmp111};
return $tmp112;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:194
int8_t $tmp113 = param0.value;
uint8_t $tmp114 = param1.value;
int32_t $tmp115 = ((int32_t) $tmp113) * ((int32_t) $tmp114);
frost$core$Int32 $tmp116 = (frost$core$Int32) {$tmp115};
return $tmp116;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:200
int8_t $tmp117 = param0.value;
uint16_t $tmp118 = param1.value;
int32_t $tmp119 = ((int32_t) $tmp117) * ((int32_t) $tmp118);
frost$core$Int32 $tmp120 = (frost$core$Int32) {$tmp119};
return $tmp120;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:206
int8_t $tmp121 = param0.value;
uint32_t $tmp122 = param1.value;
int64_t $tmp123 = ((int64_t) $tmp121) * ((int64_t) $tmp122);
frost$core$Int64 $tmp124 = (frost$core$Int64) {$tmp123};
return $tmp124;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:212
int8_t $tmp125 = param0.value;
uint64_t $tmp126 = param1.value;
int64_t $tmp127 = ((int64_t) $tmp125) * ((int64_t) $tmp126);
frost$core$Int64 $tmp128 = (frost$core$Int64) {$tmp127};
return $tmp128;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:218
int8_t $tmp129 = param0.value;
int8_t $tmp130 = param1.value;
int32_t $tmp131 = ((int32_t) $tmp129) / ((int32_t) $tmp130);
frost$core$Int32 $tmp132 = (frost$core$Int32) {$tmp131};
return $tmp132;

}
frost$core$Int8 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:223
int8_t $tmp133 = param0.value;
int8_t $tmp134 = param1.value;
int8_t $tmp135 = $tmp133 / $tmp134;
frost$core$Int8 $tmp136 = (frost$core$Int8) {$tmp135};
return $tmp136;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:229
int8_t $tmp137 = param0.value;
int16_t $tmp138 = param1.value;
int32_t $tmp139 = ((int32_t) $tmp137) / ((int32_t) $tmp138);
frost$core$Int32 $tmp140 = (frost$core$Int32) {$tmp139};
return $tmp140;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:235
int8_t $tmp141 = param0.value;
int32_t $tmp142 = param1.value;
int32_t $tmp143 = ((int32_t) $tmp141) / $tmp142;
frost$core$Int32 $tmp144 = (frost$core$Int32) {$tmp143};
return $tmp144;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:241
int8_t $tmp145 = param0.value;
int64_t $tmp146 = param1.value;
int64_t $tmp147 = ((int64_t) $tmp145) / $tmp146;
frost$core$Int64 $tmp148 = (frost$core$Int64) {$tmp147};
return $tmp148;

}
frost$core$Int frost$core$Int8$$INTDIV$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:247
int8_t $tmp149 = param0.value;
int64_t $tmp150 = param1.value;
int64_t $tmp151 = ((int64_t) $tmp149) / $tmp150;
frost$core$Int $tmp152 = (frost$core$Int) {$tmp151};
return $tmp152;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:253
int8_t $tmp153 = param0.value;
uint8_t $tmp154 = param1.value;
int32_t $tmp155 = ((int32_t) $tmp153) / ((int32_t) $tmp154);
frost$core$Int32 $tmp156 = (frost$core$Int32) {$tmp155};
return $tmp156;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:259
int8_t $tmp157 = param0.value;
uint16_t $tmp158 = param1.value;
int32_t $tmp159 = ((int32_t) $tmp157) / ((int32_t) $tmp158);
frost$core$Int32 $tmp160 = (frost$core$Int32) {$tmp159};
return $tmp160;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:265
int8_t $tmp161 = param0.value;
uint32_t $tmp162 = param1.value;
int64_t $tmp163 = ((int64_t) $tmp161) / ((int64_t) $tmp162);
frost$core$Int64 $tmp164 = (frost$core$Int64) {$tmp163};
return $tmp164;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:271
int8_t $tmp165 = param0.value;
uint64_t $tmp166 = param1.value;
int64_t $tmp167 = ((int64_t) $tmp165) / ((int64_t) $tmp166);
frost$core$Int64 $tmp168 = (frost$core$Int64) {$tmp167};
return $tmp168;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:277
int8_t $tmp169 = param0.value;
int8_t $tmp170 = param1.value;
int32_t $tmp171 = ((int32_t) $tmp169) % ((int32_t) $tmp170);
frost$core$Int32 $tmp172 = (frost$core$Int32) {$tmp171};
return $tmp172;

}
frost$core$Int8 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:282
int8_t $tmp173 = param0.value;
int8_t $tmp174 = param1.value;
int8_t $tmp175 = $tmp173 % $tmp174;
frost$core$Int8 $tmp176 = (frost$core$Int8) {$tmp175};
return $tmp176;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:288
int8_t $tmp177 = param0.value;
int16_t $tmp178 = param1.value;
int32_t $tmp179 = ((int32_t) $tmp177) % ((int32_t) $tmp178);
frost$core$Int32 $tmp180 = (frost$core$Int32) {$tmp179};
return $tmp180;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:294
int8_t $tmp181 = param0.value;
int32_t $tmp182 = param1.value;
int32_t $tmp183 = ((int32_t) $tmp181) % $tmp182;
frost$core$Int32 $tmp184 = (frost$core$Int32) {$tmp183};
return $tmp184;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:300
int8_t $tmp185 = param0.value;
int64_t $tmp186 = param1.value;
int64_t $tmp187 = ((int64_t) $tmp185) % $tmp186;
frost$core$Int64 $tmp188 = (frost$core$Int64) {$tmp187};
return $tmp188;

}
frost$core$Int frost$core$Int8$$REM$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:306
int8_t $tmp189 = param0.value;
int64_t $tmp190 = param1.value;
int64_t $tmp191 = ((int64_t) $tmp189) % $tmp190;
frost$core$Int $tmp192 = (frost$core$Int) {$tmp191};
return $tmp192;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:312
int8_t $tmp193 = param0.value;
uint8_t $tmp194 = param1.value;
int32_t $tmp195 = ((int32_t) $tmp193) % ((int32_t) $tmp194);
frost$core$Int32 $tmp196 = (frost$core$Int32) {$tmp195};
return $tmp196;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:318
int8_t $tmp197 = param0.value;
uint16_t $tmp198 = param1.value;
int32_t $tmp199 = ((int32_t) $tmp197) % ((int32_t) $tmp198);
frost$core$Int32 $tmp200 = (frost$core$Int32) {$tmp199};
return $tmp200;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:324
int8_t $tmp201 = param0.value;
uint32_t $tmp202 = param1.value;
int64_t $tmp203 = ((int64_t) $tmp201) % ((int64_t) $tmp202);
frost$core$Int64 $tmp204 = (frost$core$Int64) {$tmp203};
return $tmp204;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:330
int8_t $tmp205 = param0.value;
uint64_t $tmp206 = param1.value;
int64_t $tmp207 = ((int64_t) $tmp205) % ((int64_t) $tmp206);
frost$core$Int64 $tmp208 = (frost$core$Int64) {$tmp207};
return $tmp208;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:336
int8_t $tmp209 = param0.value;
int8_t $tmp210 = param1.value;
float $tmp211 = ((float) $tmp209) / ((float) $tmp210);
frost$core$Real32 $tmp212 = (frost$core$Real32) {$tmp211};
return $tmp212;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:342
int8_t $tmp213 = param0.value;
int16_t $tmp214 = param1.value;
float $tmp215 = ((float) $tmp213) / ((float) $tmp214);
frost$core$Real32 $tmp216 = (frost$core$Real32) {$tmp215};
return $tmp216;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:348
int8_t $tmp217 = param0.value;
int32_t $tmp218 = param1.value;
float $tmp219 = ((float) $tmp217) / ((float) $tmp218);
frost$core$Real32 $tmp220 = (frost$core$Real32) {$tmp219};
return $tmp220;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:354
int8_t $tmp221 = param0.value;
int64_t $tmp222 = param1.value;
double $tmp223 = ((double) $tmp221) / ((double) $tmp222);
frost$core$Real64 $tmp224 = (frost$core$Real64) {$tmp223};
return $tmp224;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:360
int8_t $tmp225 = param0.value;
uint8_t $tmp226 = param1.value;
float $tmp227 = ((float) $tmp225) / ((float) $tmp226);
frost$core$Real32 $tmp228 = (frost$core$Real32) {$tmp227};
return $tmp228;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:366
int8_t $tmp229 = param0.value;
uint16_t $tmp230 = param1.value;
float $tmp231 = ((float) $tmp229) / ((float) $tmp230);
frost$core$Real32 $tmp232 = (frost$core$Real32) {$tmp231};
return $tmp232;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:372
int8_t $tmp233 = param0.value;
uint32_t $tmp234 = param1.value;
float $tmp235 = ((float) $tmp233) / ((float) $tmp234);
frost$core$Real32 $tmp236 = (frost$core$Real32) {$tmp235};
return $tmp236;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:378
int8_t $tmp237 = param0.value;
uint64_t $tmp238 = param1.value;
double $tmp239 = ((double) $tmp237) / ((double) $tmp238);
frost$core$Real64 $tmp240 = (frost$core$Real64) {$tmp239};
return $tmp240;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:384
int8_t $tmp241 = param0.value;
float $tmp242 = param1.value;
float $tmp243 = ((float) $tmp241) / $tmp242;
frost$core$Real32 $tmp244 = (frost$core$Real32) {$tmp243};
return $tmp244;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:390
int8_t $tmp245 = param0.value;
double $tmp246 = param1.value;
double $tmp247 = ((double) $tmp245) / $tmp246;
frost$core$Real64 $tmp248 = (frost$core$Real64) {$tmp247};
return $tmp248;

}
frost$core$Int8 frost$core$Int8$$BNOT$R$frost$core$Int8(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:395
int8_t $tmp249 = param0.value;
int8_t $tmp250 = !$tmp249;
frost$core$Int8 $tmp251 = (frost$core$Int8) {$tmp250};
return $tmp251;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:401
int8_t $tmp252 = param0.value;
int8_t $tmp253 = param1.value;
int32_t $tmp254 = ((int32_t) $tmp252) & ((int32_t) $tmp253);
frost$core$Int32 $tmp255 = (frost$core$Int32) {$tmp254};
return $tmp255;

}
frost$core$Int8 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:406
int8_t $tmp256 = param0.value;
int8_t $tmp257 = param1.value;
int8_t $tmp258 = $tmp256 & $tmp257;
frost$core$Int8 $tmp259 = (frost$core$Int8) {$tmp258};
return $tmp259;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:412
int8_t $tmp260 = param0.value;
int16_t $tmp261 = param1.value;
int32_t $tmp262 = ((int32_t) $tmp260) & ((int32_t) $tmp261);
frost$core$Int32 $tmp263 = (frost$core$Int32) {$tmp262};
return $tmp263;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:418
int8_t $tmp264 = param0.value;
int32_t $tmp265 = param1.value;
int32_t $tmp266 = ((int32_t) $tmp264) & $tmp265;
frost$core$Int32 $tmp267 = (frost$core$Int32) {$tmp266};
return $tmp267;

}
frost$core$Int64 frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:424
int8_t $tmp268 = param0.value;
int64_t $tmp269 = param1.value;
int64_t $tmp270 = ((int64_t) $tmp268) & $tmp269;
frost$core$Int64 $tmp271 = (frost$core$Int64) {$tmp270};
return $tmp271;

}
frost$core$Int frost$core$Int8$$BAND$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:430
int8_t $tmp272 = param0.value;
int64_t $tmp273 = param1.value;
int64_t $tmp274 = ((int64_t) $tmp272) & $tmp273;
frost$core$Int $tmp275 = (frost$core$Int) {$tmp274};
return $tmp275;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:436
int8_t $tmp276 = param0.value;
uint8_t $tmp277 = param1.value;
uint32_t $tmp278 = ((uint32_t) $tmp276) & ((uint32_t) $tmp277);
frost$core$UInt32 $tmp279 = (frost$core$UInt32) {$tmp278};
return $tmp279;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:442
int8_t $tmp280 = param0.value;
uint16_t $tmp281 = param1.value;
uint32_t $tmp282 = ((uint32_t) $tmp280) & ((uint32_t) $tmp281);
frost$core$UInt32 $tmp283 = (frost$core$UInt32) {$tmp282};
return $tmp283;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:448
int8_t $tmp284 = param0.value;
uint32_t $tmp285 = param1.value;
uint32_t $tmp286 = ((uint32_t) $tmp284) & $tmp285;
frost$core$UInt32 $tmp287 = (frost$core$UInt32) {$tmp286};
return $tmp287;

}
frost$core$UInt64 frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:454
int8_t $tmp288 = param0.value;
uint64_t $tmp289 = param1.value;
uint64_t $tmp290 = ((uint64_t) $tmp288) & $tmp289;
frost$core$UInt64 $tmp291 = (frost$core$UInt64) {$tmp290};
return $tmp291;

}
frost$core$UInt frost$core$Int8$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:460
int8_t $tmp292 = param0.value;
uint64_t $tmp293 = param1.value;
uint64_t $tmp294 = ((uint64_t) $tmp292) & $tmp293;
frost$core$UInt $tmp295 = (frost$core$UInt) {$tmp294};
return $tmp295;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:466
int8_t $tmp296 = param0.value;
int8_t $tmp297 = param1.value;
int32_t $tmp298 = ((int32_t) $tmp296) | ((int32_t) $tmp297);
frost$core$Int32 $tmp299 = (frost$core$Int32) {$tmp298};
return $tmp299;

}
frost$core$Int8 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:471
int8_t $tmp300 = param0.value;
int8_t $tmp301 = param1.value;
int8_t $tmp302 = $tmp300 | $tmp301;
frost$core$Int8 $tmp303 = (frost$core$Int8) {$tmp302};
return $tmp303;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:477
int8_t $tmp304 = param0.value;
int16_t $tmp305 = param1.value;
int32_t $tmp306 = ((int32_t) $tmp304) | ((int32_t) $tmp305);
frost$core$Int32 $tmp307 = (frost$core$Int32) {$tmp306};
return $tmp307;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:483
int8_t $tmp308 = param0.value;
int32_t $tmp309 = param1.value;
int32_t $tmp310 = ((int32_t) $tmp308) | $tmp309;
frost$core$Int32 $tmp311 = (frost$core$Int32) {$tmp310};
return $tmp311;

}
frost$core$Int64 frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:489
int8_t $tmp312 = param0.value;
int64_t $tmp313 = param1.value;
int64_t $tmp314 = ((int64_t) $tmp312) | $tmp313;
frost$core$Int64 $tmp315 = (frost$core$Int64) {$tmp314};
return $tmp315;

}
frost$core$Int frost$core$Int8$$BOR$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:495
int8_t $tmp316 = param0.value;
int64_t $tmp317 = param1.value;
int64_t $tmp318 = ((int64_t) $tmp316) | $tmp317;
frost$core$Int $tmp319 = (frost$core$Int) {$tmp318};
return $tmp319;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:501
int8_t $tmp320 = param0.value;
uint8_t $tmp321 = param1.value;
uint32_t $tmp322 = ((uint32_t) $tmp320) | ((uint32_t) $tmp321);
frost$core$UInt32 $tmp323 = (frost$core$UInt32) {$tmp322};
return $tmp323;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:507
int8_t $tmp324 = param0.value;
uint16_t $tmp325 = param1.value;
uint32_t $tmp326 = ((uint32_t) $tmp324) | ((uint32_t) $tmp325);
frost$core$UInt32 $tmp327 = (frost$core$UInt32) {$tmp326};
return $tmp327;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:513
int8_t $tmp328 = param0.value;
uint32_t $tmp329 = param1.value;
uint32_t $tmp330 = ((uint32_t) $tmp328) | $tmp329;
frost$core$UInt32 $tmp331 = (frost$core$UInt32) {$tmp330};
return $tmp331;

}
frost$core$UInt64 frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:519
int8_t $tmp332 = param0.value;
uint64_t $tmp333 = param1.value;
uint64_t $tmp334 = ((uint64_t) $tmp332) | $tmp333;
frost$core$UInt64 $tmp335 = (frost$core$UInt64) {$tmp334};
return $tmp335;

}
frost$core$UInt frost$core$Int8$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:525
int8_t $tmp336 = param0.value;
uint64_t $tmp337 = param1.value;
uint64_t $tmp338 = ((uint64_t) $tmp336) | $tmp337;
frost$core$UInt $tmp339 = (frost$core$UInt) {$tmp338};
return $tmp339;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:531
int8_t $tmp340 = param0.value;
int8_t $tmp341 = param1.value;
int32_t $tmp342 = ((int32_t) $tmp340) ^ ((int32_t) $tmp341);
frost$core$Int32 $tmp343 = (frost$core$Int32) {$tmp342};
return $tmp343;

}
frost$core$Int8 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:536
int8_t $tmp344 = param0.value;
int8_t $tmp345 = param1.value;
int8_t $tmp346 = $tmp344 ^ $tmp345;
frost$core$Int8 $tmp347 = (frost$core$Int8) {$tmp346};
return $tmp347;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:542
int8_t $tmp348 = param0.value;
int16_t $tmp349 = param1.value;
int32_t $tmp350 = ((int32_t) $tmp348) ^ ((int32_t) $tmp349);
frost$core$Int32 $tmp351 = (frost$core$Int32) {$tmp350};
return $tmp351;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:548
int8_t $tmp352 = param0.value;
int32_t $tmp353 = param1.value;
int32_t $tmp354 = ((int32_t) $tmp352) ^ $tmp353;
frost$core$Int32 $tmp355 = (frost$core$Int32) {$tmp354};
return $tmp355;

}
frost$core$Int64 frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:554
int8_t $tmp356 = param0.value;
int64_t $tmp357 = param1.value;
int64_t $tmp358 = ((int64_t) $tmp356) ^ $tmp357;
frost$core$Int64 $tmp359 = (frost$core$Int64) {$tmp358};
return $tmp359;

}
frost$core$Int frost$core$Int8$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:560
int8_t $tmp360 = param0.value;
int64_t $tmp361 = param1.value;
int64_t $tmp362 = ((int64_t) $tmp360) ^ $tmp361;
frost$core$Int $tmp363 = (frost$core$Int) {$tmp362};
return $tmp363;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:566
int8_t $tmp364 = param0.value;
uint8_t $tmp365 = param1.value;
uint32_t $tmp366 = ((uint32_t) $tmp364) ^ ((uint32_t) $tmp365);
frost$core$UInt32 $tmp367 = (frost$core$UInt32) {$tmp366};
return $tmp367;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:572
int8_t $tmp368 = param0.value;
uint16_t $tmp369 = param1.value;
uint32_t $tmp370 = ((uint32_t) $tmp368) ^ ((uint32_t) $tmp369);
frost$core$UInt32 $tmp371 = (frost$core$UInt32) {$tmp370};
return $tmp371;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:578
int8_t $tmp372 = param0.value;
uint32_t $tmp373 = param1.value;
uint32_t $tmp374 = ((uint32_t) $tmp372) ^ $tmp373;
frost$core$UInt32 $tmp375 = (frost$core$UInt32) {$tmp374};
return $tmp375;

}
frost$core$UInt64 frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:584
int8_t $tmp376 = param0.value;
uint64_t $tmp377 = param1.value;
uint64_t $tmp378 = ((uint64_t) $tmp376) ^ $tmp377;
frost$core$UInt64 $tmp379 = (frost$core$UInt64) {$tmp378};
return $tmp379;

}
frost$core$UInt frost$core$Int8$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:590
int8_t $tmp380 = param0.value;
uint64_t $tmp381 = param1.value;
uint64_t $tmp382 = ((uint64_t) $tmp380) ^ $tmp381;
frost$core$UInt $tmp383 = (frost$core$UInt) {$tmp382};
return $tmp383;

}
frost$core$Int32 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:596
int8_t $tmp384 = param0.value;
int8_t $tmp385 = param1.value;
int32_t $tmp386 = ((int32_t) $tmp384) << ((int32_t) $tmp385);
frost$core$Int32 $tmp387 = (frost$core$Int32) {$tmp386};
return $tmp387;

}
frost$core$Int8 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:601
int8_t $tmp388 = param0.value;
int8_t $tmp389 = param1.value;
int8_t $tmp390 = $tmp388 << $tmp389;
frost$core$Int8 $tmp391 = (frost$core$Int8) {$tmp390};
return $tmp391;

}
frost$core$Int32 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:607
int8_t $tmp392 = param0.value;
int8_t $tmp393 = param1.value;
int32_t $tmp394 = ((int32_t) $tmp392) >> ((int32_t) $tmp393);
frost$core$Int32 $tmp395 = (frost$core$Int32) {$tmp394};
return $tmp395;

}
frost$core$Int8 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:612
int8_t $tmp396 = param0.value;
int8_t $tmp397 = param1.value;
int8_t $tmp398 = $tmp396 >> $tmp397;
frost$core$Int8 $tmp399 = (frost$core$Int8) {$tmp398};
return $tmp399;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:619
int8_t $tmp400 = param0.value;
int8_t $tmp401 = param1.value;
bool $tmp402 = $tmp400 == $tmp401;
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
return $tmp403;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:625
int8_t $tmp404 = param0.value;
int16_t $tmp405 = param1.value;
bool $tmp406 = ((int16_t) $tmp404) == $tmp405;
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406};
return $tmp407;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:631
int8_t $tmp408 = param0.value;
int32_t $tmp409 = param1.value;
bool $tmp410 = ((int32_t) $tmp408) == $tmp409;
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
return $tmp411;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:637
int8_t $tmp412 = param0.value;
int64_t $tmp413 = param1.value;
bool $tmp414 = ((int64_t) $tmp412) == $tmp413;
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
return $tmp415;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:643
int8_t $tmp416 = param0.value;
int64_t $tmp417 = param1.value;
bool $tmp418 = ((int64_t) $tmp416) == $tmp417;
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418};
return $tmp419;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:649
int8_t $tmp420 = param0.value;
uint8_t $tmp421 = param1.value;
bool $tmp422 = ((int16_t) $tmp420) == ((int16_t) $tmp421);
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
return $tmp423;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:655
int8_t $tmp424 = param0.value;
uint16_t $tmp425 = param1.value;
bool $tmp426 = ((int32_t) $tmp424) == ((int32_t) $tmp425);
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
return $tmp427;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:661
int8_t $tmp428 = param0.value;
uint32_t $tmp429 = param1.value;
bool $tmp430 = ((int64_t) $tmp428) == ((int64_t) $tmp429);
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
return $tmp431;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:667
int8_t $tmp432 = param0.value;
uint64_t $tmp433 = param1.value;
bool $tmp434 = ((int64_t) $tmp432) == ((int64_t) $tmp433);
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
return $tmp435;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:674
int8_t $tmp436 = param0.value;
int8_t $tmp437 = param1.value;
bool $tmp438 = $tmp436 != $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
return $tmp439;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:680
int8_t $tmp440 = param0.value;
int16_t $tmp441 = param1.value;
bool $tmp442 = ((int16_t) $tmp440) != $tmp441;
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
return $tmp443;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:686
int8_t $tmp444 = param0.value;
int32_t $tmp445 = param1.value;
bool $tmp446 = ((int32_t) $tmp444) != $tmp445;
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
return $tmp447;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:692
int8_t $tmp448 = param0.value;
int64_t $tmp449 = param1.value;
bool $tmp450 = ((int64_t) $tmp448) != $tmp449;
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
return $tmp451;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:698
int8_t $tmp452 = param0.value;
int64_t $tmp453 = param1.value;
bool $tmp454 = ((int64_t) $tmp452) != $tmp453;
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp454};
return $tmp455;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:704
int8_t $tmp456 = param0.value;
uint8_t $tmp457 = param1.value;
bool $tmp458 = ((int16_t) $tmp456) != ((int16_t) $tmp457);
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
return $tmp459;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:710
int8_t $tmp460 = param0.value;
uint16_t $tmp461 = param1.value;
bool $tmp462 = ((int32_t) $tmp460) != ((int32_t) $tmp461);
frost$core$Bit $tmp463 = (frost$core$Bit) {$tmp462};
return $tmp463;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:716
int8_t $tmp464 = param0.value;
uint32_t $tmp465 = param1.value;
bool $tmp466 = ((int64_t) $tmp464) != ((int64_t) $tmp465);
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
return $tmp467;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:722
int8_t $tmp468 = param0.value;
uint64_t $tmp469 = param1.value;
bool $tmp470 = ((int64_t) $tmp468) != ((int64_t) $tmp469);
frost$core$Bit $tmp471 = (frost$core$Bit) {$tmp470};
return $tmp471;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:729
int8_t $tmp472 = param0.value;
int8_t $tmp473 = param1.value;
bool $tmp474 = $tmp472 < $tmp473;
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
return $tmp475;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:735
int8_t $tmp476 = param0.value;
int16_t $tmp477 = param1.value;
bool $tmp478 = ((int16_t) $tmp476) < $tmp477;
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
return $tmp479;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:741
int8_t $tmp480 = param0.value;
int32_t $tmp481 = param1.value;
bool $tmp482 = ((int32_t) $tmp480) < $tmp481;
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
return $tmp483;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:747
int8_t $tmp484 = param0.value;
int64_t $tmp485 = param1.value;
bool $tmp486 = ((int64_t) $tmp484) < $tmp485;
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486};
return $tmp487;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:753
int8_t $tmp488 = param0.value;
int64_t $tmp489 = param1.value;
bool $tmp490 = ((int64_t) $tmp488) < $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
return $tmp491;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:759
int8_t $tmp492 = param0.value;
uint8_t $tmp493 = param1.value;
bool $tmp494 = ((int16_t) $tmp492) < ((int16_t) $tmp493);
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
return $tmp495;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:765
int8_t $tmp496 = param0.value;
uint16_t $tmp497 = param1.value;
bool $tmp498 = ((int32_t) $tmp496) < ((int32_t) $tmp497);
frost$core$Bit $tmp499 = (frost$core$Bit) {$tmp498};
return $tmp499;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:771
int8_t $tmp500 = param0.value;
uint32_t $tmp501 = param1.value;
bool $tmp502 = ((int64_t) $tmp500) < ((int64_t) $tmp501);
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
return $tmp503;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:777
int8_t $tmp504 = param0.value;
uint64_t $tmp505 = param1.value;
bool $tmp506 = ((int64_t) $tmp504) < ((int64_t) $tmp505);
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
return $tmp507;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:784
int8_t $tmp508 = param0.value;
int8_t $tmp509 = param1.value;
bool $tmp510 = $tmp508 > $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
return $tmp511;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:790
int8_t $tmp512 = param0.value;
int16_t $tmp513 = param1.value;
bool $tmp514 = ((int16_t) $tmp512) > $tmp513;
frost$core$Bit $tmp515 = (frost$core$Bit) {$tmp514};
return $tmp515;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:796
int8_t $tmp516 = param0.value;
int32_t $tmp517 = param1.value;
bool $tmp518 = ((int32_t) $tmp516) > $tmp517;
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518};
return $tmp519;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:802
int8_t $tmp520 = param0.value;
int64_t $tmp521 = param1.value;
bool $tmp522 = ((int64_t) $tmp520) > $tmp521;
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
return $tmp523;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:808
int8_t $tmp524 = param0.value;
int64_t $tmp525 = param1.value;
bool $tmp526 = ((int64_t) $tmp524) > $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
return $tmp527;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:814
int8_t $tmp528 = param0.value;
uint8_t $tmp529 = param1.value;
bool $tmp530 = ((int16_t) $tmp528) > ((int16_t) $tmp529);
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530};
return $tmp531;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:820
int8_t $tmp532 = param0.value;
uint16_t $tmp533 = param1.value;
bool $tmp534 = ((int32_t) $tmp532) > ((int32_t) $tmp533);
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
return $tmp535;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:826
int8_t $tmp536 = param0.value;
uint32_t $tmp537 = param1.value;
bool $tmp538 = ((int64_t) $tmp536) > ((int64_t) $tmp537);
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
return $tmp539;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:832
int8_t $tmp540 = param0.value;
uint64_t $tmp541 = param1.value;
bool $tmp542 = ((int64_t) $tmp540) > ((int64_t) $tmp541);
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
return $tmp543;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:839
int8_t $tmp544 = param0.value;
int8_t $tmp545 = param1.value;
bool $tmp546 = $tmp544 >= $tmp545;
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
return $tmp547;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:845
int8_t $tmp548 = param0.value;
int16_t $tmp549 = param1.value;
bool $tmp550 = ((int16_t) $tmp548) >= $tmp549;
frost$core$Bit $tmp551 = (frost$core$Bit) {$tmp550};
return $tmp551;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:851
int8_t $tmp552 = param0.value;
int32_t $tmp553 = param1.value;
bool $tmp554 = ((int32_t) $tmp552) >= $tmp553;
frost$core$Bit $tmp555 = (frost$core$Bit) {$tmp554};
return $tmp555;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:857
int8_t $tmp556 = param0.value;
int64_t $tmp557 = param1.value;
bool $tmp558 = ((int64_t) $tmp556) >= $tmp557;
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558};
return $tmp559;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:863
int8_t $tmp560 = param0.value;
int64_t $tmp561 = param1.value;
bool $tmp562 = ((int64_t) $tmp560) >= $tmp561;
frost$core$Bit $tmp563 = (frost$core$Bit) {$tmp562};
return $tmp563;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:869
int8_t $tmp564 = param0.value;
uint8_t $tmp565 = param1.value;
bool $tmp566 = ((int16_t) $tmp564) >= ((int16_t) $tmp565);
frost$core$Bit $tmp567 = (frost$core$Bit) {$tmp566};
return $tmp567;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:875
int8_t $tmp568 = param0.value;
uint16_t $tmp569 = param1.value;
bool $tmp570 = ((int32_t) $tmp568) >= ((int32_t) $tmp569);
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570};
return $tmp571;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:881
int8_t $tmp572 = param0.value;
uint32_t $tmp573 = param1.value;
bool $tmp574 = ((int64_t) $tmp572) >= ((int64_t) $tmp573);
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
return $tmp575;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:887
int8_t $tmp576 = param0.value;
uint64_t $tmp577 = param1.value;
bool $tmp578 = ((int64_t) $tmp576) >= ((int64_t) $tmp577);
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578};
return $tmp579;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:894
int8_t $tmp580 = param0.value;
int8_t $tmp581 = param1.value;
bool $tmp582 = $tmp580 <= $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
return $tmp583;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:900
int8_t $tmp584 = param0.value;
int16_t $tmp585 = param1.value;
bool $tmp586 = ((int16_t) $tmp584) <= $tmp585;
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
return $tmp587;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:906
int8_t $tmp588 = param0.value;
int32_t $tmp589 = param1.value;
bool $tmp590 = ((int32_t) $tmp588) <= $tmp589;
frost$core$Bit $tmp591 = (frost$core$Bit) {$tmp590};
return $tmp591;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:912
int8_t $tmp592 = param0.value;
int64_t $tmp593 = param1.value;
bool $tmp594 = ((int64_t) $tmp592) <= $tmp593;
frost$core$Bit $tmp595 = (frost$core$Bit) {$tmp594};
return $tmp595;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:918
int8_t $tmp596 = param0.value;
int64_t $tmp597 = param1.value;
bool $tmp598 = ((int64_t) $tmp596) <= $tmp597;
frost$core$Bit $tmp599 = (frost$core$Bit) {$tmp598};
return $tmp599;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:924
int8_t $tmp600 = param0.value;
uint8_t $tmp601 = param1.value;
bool $tmp602 = ((int16_t) $tmp600) <= ((int16_t) $tmp601);
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp602};
return $tmp603;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:930
int8_t $tmp604 = param0.value;
uint16_t $tmp605 = param1.value;
bool $tmp606 = ((int32_t) $tmp604) <= ((int32_t) $tmp605);
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
return $tmp607;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:936
int8_t $tmp608 = param0.value;
uint32_t $tmp609 = param1.value;
bool $tmp610 = ((int64_t) $tmp608) <= ((int64_t) $tmp609);
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
return $tmp611;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:942
int8_t $tmp612 = param0.value;
uint64_t $tmp613 = param1.value;
bool $tmp614 = ((int64_t) $tmp612) <= ((int64_t) $tmp613);
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
return $tmp615;

}
frost$core$Int8 frost$core$Int8$get_abs$R$frost$core$Int8(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:948
frost$core$Int8 $tmp616 = (frost$core$Int8) {0u};
int8_t $tmp617 = param0.value;
int8_t $tmp618 = $tmp616.value;
bool $tmp619 = $tmp617 < $tmp618;
frost$core$Bit $tmp620 = (frost$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:949
// begin inline call to function frost.core.Int8.-():frost.core.Int8 from Int8.frost:949:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:153
int8_t $tmp622 = param0.value;
int8_t $tmp623 = -$tmp622;
frost$core$Int8 $tmp624 = (frost$core$Int8) {$tmp623};
return $tmp624;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:951
return param0;

}
frost$core$Int8 frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:957
int8_t $tmp625 = param0.value;
int8_t $tmp626 = param1.value;
bool $tmp627 = $tmp625 < $tmp626;
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:958
int8_t $tmp630 = param0.value;
frost$core$Int8 $tmp631 = (frost$core$Int8) {$tmp630};
return $tmp631;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:960
int8_t $tmp632 = param1.value;
frost$core$Int8 $tmp633 = (frost$core$Int8) {$tmp632};
return $tmp633;

}
frost$core$Int16 frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:966
int8_t $tmp634 = param0.value;
int16_t $tmp635 = param1.value;
bool $tmp636 = ((int16_t) $tmp634) < $tmp635;
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:967
int8_t $tmp639 = param0.value;
frost$core$Int16 $tmp640 = (frost$core$Int16) {((int16_t) $tmp639)};
return $tmp640;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:969
int16_t $tmp641 = param1.value;
frost$core$Int16 $tmp642 = (frost$core$Int16) {$tmp641};
return $tmp642;

}
frost$core$Int32 frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:975
int8_t $tmp643 = param0.value;
int32_t $tmp644 = param1.value;
bool $tmp645 = ((int32_t) $tmp643) < $tmp644;
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:976
int8_t $tmp648 = param0.value;
frost$core$Int32 $tmp649 = (frost$core$Int32) {((int32_t) $tmp648)};
return $tmp649;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:978
int32_t $tmp650 = param1.value;
frost$core$Int32 $tmp651 = (frost$core$Int32) {$tmp650};
return $tmp651;

}
frost$core$Int64 frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:984
int8_t $tmp652 = param0.value;
int64_t $tmp653 = param1.value;
bool $tmp654 = ((int64_t) $tmp652) < $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:985
int8_t $tmp657 = param0.value;
frost$core$Int64 $tmp658 = (frost$core$Int64) {((int64_t) $tmp657)};
return $tmp658;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:987
int64_t $tmp659 = param1.value;
frost$core$Int64 $tmp660 = (frost$core$Int64) {$tmp659};
return $tmp660;

}
frost$core$Int frost$core$Int8$min$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:993
int8_t $tmp661 = param0.value;
int64_t $tmp662 = param1.value;
bool $tmp663 = ((int64_t) $tmp661) < $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:994
int8_t $tmp666 = param0.value;
frost$core$Int $tmp667 = (frost$core$Int) {((int64_t) $tmp666)};
return $tmp667;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:996
int64_t $tmp668 = param1.value;
frost$core$Int $tmp669 = (frost$core$Int) {$tmp668};
return $tmp669;

}
frost$core$Int16 frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1002
int8_t $tmp670 = param0.value;
uint8_t $tmp671 = param1.value;
bool $tmp672 = ((int16_t) $tmp670) < ((int16_t) $tmp671);
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1003
int8_t $tmp675 = param0.value;
frost$core$Int16 $tmp676 = (frost$core$Int16) {((int16_t) $tmp675)};
return $tmp676;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1005
uint8_t $tmp677 = param1.value;
frost$core$Int16 $tmp678 = (frost$core$Int16) {((int16_t) $tmp677)};
return $tmp678;

}
frost$core$Int32 frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1011
int8_t $tmp679 = param0.value;
uint16_t $tmp680 = param1.value;
bool $tmp681 = ((int32_t) $tmp679) < ((int32_t) $tmp680);
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1012
int8_t $tmp684 = param0.value;
frost$core$Int32 $tmp685 = (frost$core$Int32) {((int32_t) $tmp684)};
return $tmp685;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1014
uint16_t $tmp686 = param1.value;
frost$core$Int32 $tmp687 = (frost$core$Int32) {((int32_t) $tmp686)};
return $tmp687;

}
frost$core$Int64 frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1020
int8_t $tmp688 = param0.value;
uint32_t $tmp689 = param1.value;
bool $tmp690 = ((int64_t) $tmp688) < ((int64_t) $tmp689);
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1021
int8_t $tmp693 = param0.value;
frost$core$Int64 $tmp694 = (frost$core$Int64) {((int64_t) $tmp693)};
return $tmp694;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1023
uint32_t $tmp695 = param1.value;
frost$core$Int64 $tmp696 = (frost$core$Int64) {((int64_t) $tmp695)};
return $tmp696;

}
frost$core$Int64 frost$core$Int8$min$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1030
int8_t $tmp697 = param0.value;
uint64_t $tmp698 = param1.value;
bool $tmp699 = ((int64_t) $tmp697) < ((int64_t) $tmp698);
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1031
int8_t $tmp702 = param0.value;
frost$core$Int64 $tmp703 = (frost$core$Int64) {((int64_t) $tmp702)};
return $tmp703;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1033
uint64_t $tmp704 = param1.value;
frost$core$Int64 $tmp705 = (frost$core$Int64) {((int64_t) $tmp704)};
return $tmp705;

}
frost$core$Int8 frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1039
int8_t $tmp706 = param0.value;
int8_t $tmp707 = param1.value;
bool $tmp708 = $tmp706 > $tmp707;
frost$core$Bit $tmp709 = (frost$core$Bit) {$tmp708};
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1040
int8_t $tmp711 = param0.value;
frost$core$Int8 $tmp712 = (frost$core$Int8) {$tmp711};
return $tmp712;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1042
int8_t $tmp713 = param1.value;
frost$core$Int8 $tmp714 = (frost$core$Int8) {$tmp713};
return $tmp714;

}
frost$core$Int16 frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1048
int8_t $tmp715 = param0.value;
int16_t $tmp716 = param1.value;
bool $tmp717 = ((int16_t) $tmp715) > $tmp716;
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1049
int8_t $tmp720 = param0.value;
frost$core$Int16 $tmp721 = (frost$core$Int16) {((int16_t) $tmp720)};
return $tmp721;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1051
int16_t $tmp722 = param1.value;
frost$core$Int16 $tmp723 = (frost$core$Int16) {$tmp722};
return $tmp723;

}
frost$core$Int32 frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1057
int8_t $tmp724 = param0.value;
int32_t $tmp725 = param1.value;
bool $tmp726 = ((int32_t) $tmp724) > $tmp725;
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1058
int8_t $tmp729 = param0.value;
frost$core$Int32 $tmp730 = (frost$core$Int32) {((int32_t) $tmp729)};
return $tmp730;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1060
int32_t $tmp731 = param1.value;
frost$core$Int32 $tmp732 = (frost$core$Int32) {$tmp731};
return $tmp732;

}
frost$core$Int64 frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1066
int8_t $tmp733 = param0.value;
int64_t $tmp734 = param1.value;
bool $tmp735 = ((int64_t) $tmp733) > $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1067
int8_t $tmp738 = param0.value;
frost$core$Int64 $tmp739 = (frost$core$Int64) {((int64_t) $tmp738)};
return $tmp739;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1069
int64_t $tmp740 = param1.value;
frost$core$Int64 $tmp741 = (frost$core$Int64) {$tmp740};
return $tmp741;

}
frost$core$Int frost$core$Int8$max$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1075
int8_t $tmp742 = param0.value;
int64_t $tmp743 = param1.value;
bool $tmp744 = ((int64_t) $tmp742) > $tmp743;
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1076
int8_t $tmp747 = param0.value;
frost$core$Int $tmp748 = (frost$core$Int) {((int64_t) $tmp747)};
return $tmp748;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1078
int64_t $tmp749 = param1.value;
frost$core$Int $tmp750 = (frost$core$Int) {$tmp749};
return $tmp750;

}
frost$core$Int16 frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1084
int8_t $tmp751 = param0.value;
uint8_t $tmp752 = param1.value;
bool $tmp753 = ((int16_t) $tmp751) > ((int16_t) $tmp752);
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1085
int8_t $tmp756 = param0.value;
frost$core$Int16 $tmp757 = (frost$core$Int16) {((int16_t) $tmp756)};
return $tmp757;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1087
uint8_t $tmp758 = param1.value;
frost$core$Int16 $tmp759 = (frost$core$Int16) {((int16_t) $tmp758)};
return $tmp759;

}
frost$core$Int32 frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1093
int8_t $tmp760 = param0.value;
uint16_t $tmp761 = param1.value;
bool $tmp762 = ((int32_t) $tmp760) > ((int32_t) $tmp761);
frost$core$Bit $tmp763 = (frost$core$Bit) {$tmp762};
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1094
int8_t $tmp765 = param0.value;
frost$core$Int32 $tmp766 = (frost$core$Int32) {((int32_t) $tmp765)};
return $tmp766;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1096
uint16_t $tmp767 = param1.value;
frost$core$Int32 $tmp768 = (frost$core$Int32) {((int32_t) $tmp767)};
return $tmp768;

}
frost$core$Int64 frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1102
int8_t $tmp769 = param0.value;
uint32_t $tmp770 = param1.value;
bool $tmp771 = ((int64_t) $tmp769) > ((int64_t) $tmp770);
frost$core$Bit $tmp772 = (frost$core$Bit) {$tmp771};
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1103
int8_t $tmp774 = param0.value;
frost$core$Int64 $tmp775 = (frost$core$Int64) {((int64_t) $tmp774)};
return $tmp775;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1105
uint32_t $tmp776 = param1.value;
frost$core$Int64 $tmp777 = (frost$core$Int64) {((int64_t) $tmp776)};
return $tmp777;

}
frost$core$Int64 frost$core$Int8$max$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1112
int8_t $tmp778 = param0.value;
uint64_t $tmp779 = param1.value;
bool $tmp780 = ((int64_t) $tmp778) > ((int64_t) $tmp779);
frost$core$Bit $tmp781 = (frost$core$Bit) {$tmp780};
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1113
int8_t $tmp783 = param0.value;
frost$core$Int64 $tmp784 = (frost$core$Int64) {((int64_t) $tmp783)};
return $tmp784;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1115
uint64_t $tmp785 = param1.value;
frost$core$Int64 $tmp786 = (frost$core$Int64) {((int64_t) $tmp785)};
return $tmp786;

}
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$Range$LTfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$Range$LTfrost$core$Int8$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1120
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int8List));
org$frostlang$frost$Int8List* $tmp787 = (org$frostlang$frost$Int8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int8List$class);
frost$core$Int8 $tmp788 = param0.min;
frost$core$Int8 $tmp789 = param0.max;
frost$core$Int8 $tmp790 = (frost$core$Int8) {1u};
frost$core$Bit $tmp791 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT $tmp792 = frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$init$frost$core$Int8$frost$core$Int8$frost$core$Int8$frost$core$Bit($tmp788, $tmp789, $tmp790, $tmp791);
org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT($tmp787, $tmp792);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp787)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp787));
return ((frost$collections$ListView*) $tmp787);

}
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1125
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int8List));
org$frostlang$frost$Int8List* $tmp793 = (org$frostlang$frost$Int8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int8List$class);
org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT($tmp793, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp793)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp793));
return ((frost$collections$ListView*) $tmp793);

}
frost$core$Bit frost$core$Int8$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

frost$core$Int $tmp794 = (frost$core$Int) {0u};
int64_t $tmp795 = param1.value;
int64_t $tmp796 = $tmp794.value;
bool $tmp797 = $tmp795 >= $tmp796;
frost$core$Bit $tmp798 = (frost$core$Bit) {$tmp797};
bool $tmp799 = $tmp798.value;
if ($tmp799) goto block3; else goto block2;
block3:;
frost$core$Int8$wrapper* $tmp800;
$tmp800 = (frost$core$Int8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Int8$wrapperclass);
$tmp800->value = param0;
ITable* $tmp801 = ((frost$collections$CollectionView*) $tmp800)->$class->itable;
while ($tmp801->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp801 = $tmp801->next;
}
$fn803 $tmp802 = $tmp801->methods[0];
frost$core$Int $tmp804 = $tmp802(((frost$collections$CollectionView*) $tmp800));
int64_t $tmp805 = param1.value;
int64_t $tmp806 = $tmp804.value;
bool $tmp807 = $tmp805 < $tmp806;
frost$core$Bit $tmp808 = (frost$core$Bit) {$tmp807};
bool $tmp809 = $tmp808.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp800)));
if ($tmp809) goto block1; else goto block2;
block2:;
frost$core$Int $tmp810 = (frost$core$Int) {1130u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s811, $tmp810, &$s812);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1131
frost$core$Int $tmp813 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from Int8.frost:1131:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
int64_t $tmp814 = $tmp813.value;
int64_t $tmp815 = param1.value;
int64_t $tmp816 = $tmp814 << $tmp815;
frost$core$Int $tmp817 = (frost$core$Int) {$tmp816};
// begin inline call to function frost.core.Int8.&&(other:frost.core.Int):frost.core.Int from Int8.frost:1131:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:430
int8_t $tmp818 = param0.value;
int64_t $tmp819 = $tmp817.value;
int64_t $tmp820 = ((int64_t) $tmp818) & $tmp819;
frost$core$Int $tmp821 = (frost$core$Int) {$tmp820};
frost$core$Int $tmp822 = (frost$core$Int) {0u};
int64_t $tmp823 = $tmp821.value;
int64_t $tmp824 = $tmp822.value;
bool $tmp825 = $tmp823 != $tmp824;
frost$core$Bit $tmp826 = (frost$core$Bit) {$tmp825};
return $tmp826;

}
frost$core$Int frost$core$Int8$get_count$R$frost$core$Int(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1137
frost$core$Int $tmp827 = (frost$core$Int) {8u};
return $tmp827;

}
frost$collections$Iterator* frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1147
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp828 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int8.get_asUInt64():frost.core.UInt64 from Int8.frost:1147:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1226
int8_t $tmp829 = param0.value;
frost$core$UInt64 $tmp830 = (frost$core$UInt64) {((uint64_t) $tmp829)};
frost$core$UInt64 $tmp831 = (frost$core$UInt64) {128u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp828, $tmp830, $tmp831);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp828)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp828));
return ((frost$collections$Iterator*) $tmp828);

}
frost$core$Int frost$core$Int8$get_hash$R$frost$core$Int(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1152
int8_t $tmp832 = param0.value;
frost$core$Int $tmp833 = (frost$core$Int) {((int64_t) $tmp832)};
return $tmp833;

}
frost$core$Int8$nullable frost$core$Int8$parse$frost$core$String$frost$core$Int$R$frost$core$Int8$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int $tmp834 = (frost$core$Int) {2u};
int64_t $tmp835 = param1.value;
int64_t $tmp836 = $tmp834.value;
bool $tmp837 = $tmp835 >= $tmp836;
frost$core$Bit $tmp838 = (frost$core$Bit) {$tmp837};
bool $tmp839 = $tmp838.value;
if ($tmp839) goto block3; else goto block2;
block3:;
frost$core$Int $tmp840 = (frost$core$Int) {36u};
int64_t $tmp841 = param1.value;
int64_t $tmp842 = $tmp840.value;
bool $tmp843 = $tmp841 <= $tmp842;
frost$core$Bit $tmp844 = (frost$core$Bit) {$tmp843};
bool $tmp845 = $tmp844.value;
if ($tmp845) goto block1; else goto block2;
block2:;
frost$core$Int $tmp846 = (frost$core$Int) {1158u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s847, $tmp846, &$s848);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1159
frost$core$Bit $tmp849 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s850);
bool $tmp851 = $tmp849.value;
if ($tmp851) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1160
frost$core$Int $tmp852 = (frost$core$Int) {1u};
frost$core$Bit $tmp853 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$Q$GT $tmp854 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(((frost$core$Int$nullable) { $tmp852, true }), ((frost$core$Int$nullable) { .nonnull = false }), $tmp853);
frost$core$String* $tmp855 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(param0, $tmp854);
frost$core$UInt64$nullable $tmp856 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q($tmp855, param1);
*(&local0) = $tmp856;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp855));
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1161
frost$core$UInt64$nullable $tmp857 = *(&local0);
frost$core$Bit $tmp858 = (frost$core$Bit) {!$tmp857.nonnull};
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1162
return ((frost$core$Int8$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1164
frost$core$UInt64$nullable $tmp860 = *(&local0);
frost$core$Bit $tmp861 = (frost$core$Bit) {$tmp860.nonnull};
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block9; else goto block10;
block10:;
frost$core$Int $tmp863 = (frost$core$Int) {1164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s864, $tmp863, &$s865);
abort(); // unreachable
block9:;
// begin inline call to function frost.core.UInt64.get_asInt8():frost.core.Int8 from Int8.frost:1164:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:550
uint64_t $tmp866 = ((frost$core$UInt64) $tmp860.value).value;
frost$core$Int8 $tmp867 = (frost$core$Int8) {((int8_t) $tmp866)};
// begin inline call to function frost.core.Int8.-():frost.core.Int8 from Int8.frost:1164:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:153
int8_t $tmp868 = $tmp867.value;
int8_t $tmp869 = -$tmp868;
frost$core$Int8 $tmp870 = (frost$core$Int8) {$tmp869};
return ((frost$core$Int8$nullable) { $tmp870, true });
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1167
frost$core$UInt64$nullable $tmp871 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp871;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1168
frost$core$UInt64$nullable $tmp872 = *(&local1);
frost$core$Bit $tmp873 = (frost$core$Bit) {!$tmp872.nonnull};
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1169
return ((frost$core$Int8$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1171
frost$core$UInt64$nullable $tmp875 = *(&local1);
frost$core$Bit $tmp876 = (frost$core$Bit) {$tmp875.nonnull};
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block15; else goto block16;
block16:;
frost$core$Int $tmp878 = (frost$core$Int) {1171u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s879, $tmp878, &$s880);
abort(); // unreachable
block15:;
// begin inline call to function frost.core.UInt64.get_asInt8():frost.core.Int8 from Int8.frost:1171:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:550
uint64_t $tmp881 = ((frost$core$UInt64) $tmp875.value).value;
frost$core$Int8 $tmp882 = (frost$core$Int8) {((int8_t) $tmp881)};
return ((frost$core$Int8$nullable) { $tmp882, true });
block5:;
goto block18;
block18:;

}
frost$core$Int frost$core$Int8$get_asInt$R$frost$core$Int(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1178
int8_t $tmp883 = param0.value;
frost$core$Int $tmp884 = (frost$core$Int) {((int64_t) $tmp883)};
return $tmp884;

}
frost$core$Int16 frost$core$Int8$get_asInt16$R$frost$core$Int16(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1184
int8_t $tmp885 = param0.value;
frost$core$Int16 $tmp886 = (frost$core$Int16) {((int16_t) $tmp885)};
return $tmp886;

}
frost$core$Int32 frost$core$Int8$get_asInt32$R$frost$core$Int32(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1190
int8_t $tmp887 = param0.value;
frost$core$Int32 $tmp888 = (frost$core$Int32) {((int32_t) $tmp887)};
return $tmp888;

}
frost$core$Int64 frost$core$Int8$get_asInt64$R$frost$core$Int64(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1196
int8_t $tmp889 = param0.value;
frost$core$Int64 $tmp890 = (frost$core$Int64) {((int64_t) $tmp889)};
return $tmp890;

}
frost$core$UInt frost$core$Int8$get_asUInt$R$frost$core$UInt(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1202
int8_t $tmp891 = param0.value;
frost$core$UInt $tmp892 = (frost$core$UInt) {((uint64_t) $tmp891)};
return $tmp892;

}
frost$core$UInt8 frost$core$Int8$get_asUInt8$R$frost$core$UInt8(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
int8_t $tmp893 = param0.value;
frost$core$UInt8 $tmp894 = (frost$core$UInt8) {((uint8_t) $tmp893)};
return $tmp894;

}
frost$core$UInt16 frost$core$Int8$get_asUInt16$R$frost$core$UInt16(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1214
int8_t $tmp895 = param0.value;
frost$core$UInt16 $tmp896 = (frost$core$UInt16) {((uint16_t) $tmp895)};
return $tmp896;

}
frost$core$UInt32 frost$core$Int8$get_asUInt32$R$frost$core$UInt32(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1220
int8_t $tmp897 = param0.value;
frost$core$UInt32 $tmp898 = (frost$core$UInt32) {((uint32_t) $tmp897)};
return $tmp898;

}
frost$core$UInt64 frost$core$Int8$get_asUInt64$R$frost$core$UInt64(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1226
int8_t $tmp899 = param0.value;
frost$core$UInt64 $tmp900 = (frost$core$UInt64) {((uint64_t) $tmp899)};
return $tmp900;

}
frost$core$Real32 frost$core$Int8$get_asReal32$R$frost$core$Real32(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1232
int8_t $tmp901 = param0.value;
frost$core$Real32 $tmp902 = (frost$core$Real32) {((float) $tmp901)};
return $tmp902;

}
frost$core$Real64 frost$core$Int8$get_asReal64$R$frost$core$Real64(frost$core$Int8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1238
int8_t $tmp903 = param0.value;
frost$core$Real64 $tmp904 = (frost$core$Real64) {((double) $tmp903)};
return $tmp904;

}
frost$core$String* frost$core$Int8$get_asString$R$frost$core$String(frost$core$Int8 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$Int8 local3;
frost$core$Int local4;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1244
frost$core$Int $tmp905 = (frost$core$Int) {4u};
*(&local0) = $tmp905;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1245
frost$core$Int $tmp906 = *(&local0);
frost$core$Int64 $tmp907 = frost$core$Int64$init$frost$core$Int($tmp906);
int64_t $tmp908 = $tmp907.value;
frost$core$Char8* $tmp909 = ((frost$core$Char8*) frostAlloc($tmp908 * 1));
*(&local1) = $tmp909;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1246
frost$core$Int $tmp910 = *(&local0);
frost$core$Int $tmp911 = (frost$core$Int) {1u};
int64_t $tmp912 = $tmp910.value;
int64_t $tmp913 = $tmp911.value;
int64_t $tmp914 = $tmp912 - $tmp913;
frost$core$Int $tmp915 = (frost$core$Int) {$tmp914};
*(&local2) = $tmp915;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1247
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1248
frost$core$Int8 $tmp916 = *(&local3);
frost$core$Int8 $tmp917 = (frost$core$Int8) {0u};
int8_t $tmp918 = $tmp916.value;
int8_t $tmp919 = $tmp917.value;
bool $tmp920 = $tmp918 >= $tmp919;
frost$core$Bit $tmp921 = (frost$core$Bit) {$tmp920};
bool $tmp922 = $tmp921.value;
if ($tmp922) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1249
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1250
frost$core$Char8* $tmp923 = *(&local1);
frost$core$Int $tmp924 = *(&local2);
frost$core$Int64 $tmp925 = frost$core$Int64$init$frost$core$Int($tmp924);
frost$core$Int8 $tmp926 = *(&local3);
frost$core$Int8 $tmp927 = (frost$core$Int8) {10u};
// begin inline call to function frost.core.Int8.%(other:frost.core.Int8):frost.core.Int32 from Int8.frost:1250:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:277
int8_t $tmp928 = $tmp926.value;
int8_t $tmp929 = $tmp927.value;
int32_t $tmp930 = ((int32_t) $tmp928) % ((int32_t) $tmp929);
frost$core$Int32 $tmp931 = (frost$core$Int32) {$tmp930};
frost$core$Int32 $tmp932 = (frost$core$Int32) {48u};
int32_t $tmp933 = $tmp931.value;
int32_t $tmp934 = $tmp932.value;
int32_t $tmp935 = $tmp933 + $tmp934;
frost$core$Int32 $tmp936 = (frost$core$Int32) {$tmp935};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int8.frost:1250:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:990
int32_t $tmp937 = $tmp936.value;
frost$core$UInt8 $tmp938 = (frost$core$UInt8) {((uint8_t) $tmp937)};
frost$core$Char8 $tmp939 = frost$core$Char8$init$frost$core$UInt8($tmp938);
int64_t $tmp940 = $tmp925.value;
$tmp923[$tmp940] = $tmp939;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1251
frost$core$Int8 $tmp941 = *(&local3);
frost$core$Int32 $tmp942 = frost$core$Int32$init$frost$core$Int8($tmp941);
frost$core$Int32 $tmp943 = (frost$core$Int32) {10u};
int32_t $tmp944 = $tmp942.value;
int32_t $tmp945 = $tmp943.value;
int32_t $tmp946 = $tmp944 / $tmp945;
frost$core$Int32 $tmp947 = (frost$core$Int32) {$tmp946};
// begin inline call to function frost.core.Int32.get_asInt8():frost.core.Int8 from Int8.frost:1251:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:966
int32_t $tmp948 = $tmp947.value;
frost$core$Int8 $tmp949 = (frost$core$Int8) {((int8_t) $tmp948)};
*(&local3) = $tmp949;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1252
frost$core$Int $tmp950 = *(&local2);
frost$core$Int $tmp951 = (frost$core$Int) {1u};
int64_t $tmp952 = $tmp950.value;
int64_t $tmp953 = $tmp951.value;
int64_t $tmp954 = $tmp952 - $tmp953;
frost$core$Int $tmp955 = (frost$core$Int) {$tmp954};
*(&local2) = $tmp955;
frost$core$Int8 $tmp956 = *(&local3);
frost$core$Int8 $tmp957 = (frost$core$Int8) {0u};
int8_t $tmp958 = $tmp956.value;
int8_t $tmp959 = $tmp957.value;
bool $tmp960 = $tmp958 > $tmp959;
frost$core$Bit $tmp961 = (frost$core$Bit) {$tmp960};
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1255
frost$core$Int $tmp963 = *(&local2);
frost$core$Int $tmp964 = (frost$core$Int) {1u};
int64_t $tmp965 = $tmp963.value;
int64_t $tmp966 = $tmp964.value;
int64_t $tmp967 = $tmp965 + $tmp966;
frost$core$Int $tmp968 = (frost$core$Int) {$tmp967};
*(&local2) = $tmp968;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1258
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1259
frost$core$Char8* $tmp969 = *(&local1);
frost$core$Int $tmp970 = *(&local2);
frost$core$Int64 $tmp971 = frost$core$Int64$init$frost$core$Int($tmp970);
frost$core$Int32 $tmp972 = (frost$core$Int32) {48u};
frost$core$Int8 $tmp973 = *(&local3);
frost$core$Int8 $tmp974 = (frost$core$Int8) {10u};
// begin inline call to function frost.core.Int8.%(other:frost.core.Int8):frost.core.Int32 from Int8.frost:1259:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:277
int8_t $tmp975 = $tmp973.value;
int8_t $tmp976 = $tmp974.value;
int32_t $tmp977 = ((int32_t) $tmp975) % ((int32_t) $tmp976);
frost$core$Int32 $tmp978 = (frost$core$Int32) {$tmp977};
int32_t $tmp979 = $tmp972.value;
int32_t $tmp980 = $tmp978.value;
int32_t $tmp981 = $tmp979 - $tmp980;
frost$core$Int32 $tmp982 = (frost$core$Int32) {$tmp981};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int8.frost:1259:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:990
int32_t $tmp983 = $tmp982.value;
frost$core$UInt8 $tmp984 = (frost$core$UInt8) {((uint8_t) $tmp983)};
frost$core$Char8 $tmp985 = frost$core$Char8$init$frost$core$UInt8($tmp984);
int64_t $tmp986 = $tmp971.value;
$tmp969[$tmp986] = $tmp985;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1260
frost$core$Int8 $tmp987 = *(&local3);
frost$core$Int32 $tmp988 = frost$core$Int32$init$frost$core$Int8($tmp987);
frost$core$Int32 $tmp989 = (frost$core$Int32) {10u};
int32_t $tmp990 = $tmp988.value;
int32_t $tmp991 = $tmp989.value;
int32_t $tmp992 = $tmp990 / $tmp991;
frost$core$Int32 $tmp993 = (frost$core$Int32) {$tmp992};
// begin inline call to function frost.core.Int32.get_asInt8():frost.core.Int8 from Int8.frost:1260:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:966
int32_t $tmp994 = $tmp993.value;
frost$core$Int8 $tmp995 = (frost$core$Int8) {((int8_t) $tmp994)};
*(&local3) = $tmp995;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1261
frost$core$Int $tmp996 = *(&local2);
frost$core$Int $tmp997 = (frost$core$Int) {1u};
int64_t $tmp998 = $tmp996.value;
int64_t $tmp999 = $tmp997.value;
int64_t $tmp1000 = $tmp998 - $tmp999;
frost$core$Int $tmp1001 = (frost$core$Int) {$tmp1000};
*(&local2) = $tmp1001;
frost$core$Int8 $tmp1002 = *(&local3);
frost$core$Int8 $tmp1003 = (frost$core$Int8) {0u};
int8_t $tmp1004 = $tmp1002.value;
int8_t $tmp1005 = $tmp1003.value;
bool $tmp1006 = $tmp1004 < $tmp1005;
frost$core$Bit $tmp1007 = (frost$core$Bit) {$tmp1006};
bool $tmp1008 = $tmp1007.value;
if ($tmp1008) goto block10; else goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1264
frost$core$Char8* $tmp1009 = *(&local1);
frost$core$Int $tmp1010 = *(&local2);
frost$core$Int64 $tmp1011 = frost$core$Int64$init$frost$core$Int($tmp1010);
frost$core$UInt8 $tmp1012 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp1013 = frost$core$Char8$init$frost$core$UInt8($tmp1012);
int64_t $tmp1014 = $tmp1011.value;
$tmp1009[$tmp1014] = $tmp1013;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1266
frost$core$Int $tmp1015 = *(&local0);
frost$core$Int $tmp1016 = *(&local2);
int64_t $tmp1017 = $tmp1015.value;
int64_t $tmp1018 = $tmp1016.value;
int64_t $tmp1019 = $tmp1017 - $tmp1018;
frost$core$Int $tmp1020 = (frost$core$Int) {$tmp1019};
*(&local4) = $tmp1020;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1267
frost$core$Int $tmp1021 = (frost$core$Int) {0u};
frost$core$Int $tmp1022 = *(&local4);
frost$core$Bit $tmp1023 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp1024 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp1021, $tmp1022, $tmp1023);
frost$core$Int $tmp1025 = $tmp1024.min;
*(&local5) = $tmp1025;
frost$core$Int $tmp1026 = $tmp1024.max;
frost$core$Bit $tmp1027 = $tmp1024.inclusive;
bool $tmp1028 = $tmp1027.value;
frost$core$Int $tmp1029 = (frost$core$Int) {1u};
if ($tmp1028) goto block19; else goto block20;
block19:;
int64_t $tmp1030 = $tmp1025.value;
int64_t $tmp1031 = $tmp1026.value;
bool $tmp1032 = $tmp1030 <= $tmp1031;
frost$core$Bit $tmp1033 = (frost$core$Bit) {$tmp1032};
bool $tmp1034 = $tmp1033.value;
if ($tmp1034) goto block16; else goto block17;
block20:;
int64_t $tmp1035 = $tmp1025.value;
int64_t $tmp1036 = $tmp1026.value;
bool $tmp1037 = $tmp1035 < $tmp1036;
frost$core$Bit $tmp1038 = (frost$core$Bit) {$tmp1037};
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1268
frost$core$Char8* $tmp1040 = *(&local1);
frost$core$Int $tmp1041 = *(&local5);
frost$core$Int64 $tmp1042 = frost$core$Int64$init$frost$core$Int($tmp1041);
frost$core$Char8* $tmp1043 = *(&local1);
frost$core$Int $tmp1044 = *(&local5);
frost$core$Int $tmp1045 = *(&local2);
int64_t $tmp1046 = $tmp1044.value;
int64_t $tmp1047 = $tmp1045.value;
int64_t $tmp1048 = $tmp1046 + $tmp1047;
frost$core$Int $tmp1049 = (frost$core$Int) {$tmp1048};
frost$core$Int64 $tmp1050 = frost$core$Int64$init$frost$core$Int($tmp1049);
int64_t $tmp1051 = $tmp1050.value;
frost$core$Char8 $tmp1052 = $tmp1043[$tmp1051];
int64_t $tmp1053 = $tmp1042.value;
$tmp1040[$tmp1053] = $tmp1052;
frost$core$Int $tmp1054 = *(&local5);
int64_t $tmp1055 = $tmp1026.value;
int64_t $tmp1056 = $tmp1054.value;
int64_t $tmp1057 = $tmp1055 - $tmp1056;
frost$core$Int $tmp1058 = (frost$core$Int) {$tmp1057};
if ($tmp1028) goto block22; else goto block23;
block22:;
int64_t $tmp1059 = $tmp1058.value;
int64_t $tmp1060 = $tmp1029.value;
bool $tmp1061 = $tmp1059 >= $tmp1060;
frost$core$Bit $tmp1062 = (frost$core$Bit) {$tmp1061};
bool $tmp1063 = $tmp1062.value;
if ($tmp1063) goto block21; else goto block17;
block23:;
int64_t $tmp1064 = $tmp1058.value;
int64_t $tmp1065 = $tmp1029.value;
bool $tmp1066 = $tmp1064 > $tmp1065;
frost$core$Bit $tmp1067 = (frost$core$Bit) {$tmp1066};
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block21; else goto block17;
block21:;
int64_t $tmp1069 = $tmp1054.value;
int64_t $tmp1070 = $tmp1029.value;
int64_t $tmp1071 = $tmp1069 + $tmp1070;
frost$core$Int $tmp1072 = (frost$core$Int) {$tmp1071};
*(&local5) = $tmp1072;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1270
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1073 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp1074 = *(&local1);
frost$core$Int $tmp1075 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp1073, $tmp1074, $tmp1075);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
return $tmp1073;

}
frost$core$String* frost$core$Int8$format$frost$core$String$R$frost$core$String(frost$core$Int8 param0, frost$core$String* param1) {

frost$core$Int8 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1276
int8_t $tmp1076 = param0.value;
bool $tmp1077 = $tmp1076 < 0u;
frost$core$Bit $tmp1078 = (frost$core$Bit) {$tmp1077};
// begin inline call to function frost.core.Int8.get_abs():frost.core.Int8 from Int8.frost:1276:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:948
frost$core$Int8 $tmp1079 = (frost$core$Int8) {0u};
int8_t $tmp1080 = param0.value;
int8_t $tmp1081 = $tmp1079.value;
bool $tmp1082 = $tmp1080 < $tmp1081;
frost$core$Bit $tmp1083 = (frost$core$Bit) {$tmp1082};
bool $tmp1084 = $tmp1083.value;
if ($tmp1084) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:949
// begin inline call to function frost.core.Int8.-():frost.core.Int8 from Int8.frost:949:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:153
int8_t $tmp1085 = param0.value;
int8_t $tmp1086 = -$tmp1085;
frost$core$Int8 $tmp1087 = (frost$core$Int8) {$tmp1086};
*(&local0) = $tmp1087;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:951
*(&local0) = param0;
goto block1;
block1:;
frost$core$Int8 $tmp1088 = *(&local0);
// begin inline call to function frost.core.Int8.get_asUInt64():frost.core.UInt64 from Int8.frost:1276:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1226
int8_t $tmp1089 = $tmp1088.value;
frost$core$UInt64 $tmp1090 = (frost$core$UInt64) {((uint64_t) $tmp1089)};
frost$core$UInt64 $tmp1091 = (frost$core$UInt64) {255u};
frost$core$String* $tmp1092 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp1078, $tmp1090, $tmp1091, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1092));
return $tmp1092;

}
void frost$core$Int8$cleanup(frost$core$Int8 param0) {

return;

}

