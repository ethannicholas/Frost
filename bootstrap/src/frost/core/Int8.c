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
frost$core$Int8$wrapperclass_type frost$core$Int8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int8$wrapper_frost$core$Equatable, { frost$core$Int8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -7590539272432582497, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38", 15, -7590539272432582497, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, -2256820527861775714, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 89, -1908921956172430917, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, -2256820527861775714, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x38\x3f", 117, -766631899501174366, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, -2256820527861775714, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 10, -2256820527861775714, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$Int8 frost$core$Int8$init$builtin_int8(int8_t param0) {

frost$core$Int8 local0;
int8_t* _1;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:30
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:36
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$ADD$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:41
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:47
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:53
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:59
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int8$$ADD$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:65
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int32_t _2;
uint8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:71
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$ADD$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:77
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:83
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$ADD$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:89
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:95
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$SUB$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:100
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:106
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:112
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:118
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int8$$SUB$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:124
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int32_t _2;
uint8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:130
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$SUB$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:136
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:142
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$SUB$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:148
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$SUB$R$frost$core$Int8(frost$core$Int8 param0) {

int8_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:153
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:159
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$MUL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:164
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:170
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:176
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:182
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int8$$MUL$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:188
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int32_t _2;
uint8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:194
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$MUL$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:200
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:206
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$MUL$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:212
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:218
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$INTDIV$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:223
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:229
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:235
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:241
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int8$$INTDIV$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:247
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int32_t _2;
uint8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:253
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$INTDIV$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:259
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:265
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$INTDIV$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:271
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:277
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$REM$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:282
_1 = param0.value;
_2 = param1.value;
_3 = _1 % _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:288
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:294
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:300
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int8$$REM$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:306
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int32_t _2;
uint8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:312
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$REM$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:318
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:324
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$Int8$$REM$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:330
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
float _2;
int8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:336
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
float _2;
int16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:342
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
float _2;
int32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:348
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
double _2;
int64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:354
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
float _2;
uint8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:360
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
float _2;
uint16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:366
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
float _2;
uint32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:372
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$UInt64 param1) {

int8_t _1;
double _2;
uint64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:378
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$Int8$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int8 param0, frost$core$Real32 param1) {

int8_t _1;
float _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:384
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real64 frost$core$Int8$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int8 param0, frost$core$Real64 param1) {

int8_t _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:390
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$Int8 frost$core$Int8$$BNOT$R$frost$core$Int8(frost$core$Int8 param0) {

int8_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:395
_1 = param0.value;
_2 = !_1;
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:401
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$BAND$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:406
_1 = param0.value;
_2 = param1.value;
_3 = _1 & _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:412
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:418
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int8$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:424
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int8$$BAND$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:430
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:436
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:442
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$Int8$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:448
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$Int8$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

int8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:454
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$Int8$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:460
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:466
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$BOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:471
_1 = param0.value;
_2 = param1.value;
_3 = _1 | _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:477
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:483
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int8$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:489
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int8$$BOR$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:495
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:501
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:507
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$Int8$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:513
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$Int8$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

int8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:519
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$Int8$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:525
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:531
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$BXOR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:536
_1 = param0.value;
_2 = param1.value;
_3 = _1 ^ _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:542
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$Int8$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:548
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$Int8$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:554
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$Int8$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:560
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:566
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:572
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$Int8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:578
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$Int8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int8 param0, frost$core$UInt64 param1) {

int8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:584
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$Int8$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:590
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:596
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 << _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$SHL$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:601
_1 = param0.value;
_2 = param1.value;
_3 = _1 << _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Int32 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:607
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 >> _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$$SHR$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
int8_t _3;
frost$core$Int8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:612
_1 = param0.value;
_2 = param1.value;
_3 = _1 >> _2;
_4 = (frost$core$Int8) {_3};
return _4;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:619
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int16_t _2;
int16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:625
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:631
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:637
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:643
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int16_t _2;
uint8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:649
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:655
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:661
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:667
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:674
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int16_t _2;
int16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:680
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:686
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:692
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:698
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int16_t _2;
uint8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:704
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:710
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:716
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:722
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:729
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int16_t _2;
int16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:735
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:741
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:747
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:753
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int16_t _2;
uint8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:759
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:765
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:771
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:777
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:784
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int16_t _2;
int16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:790
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:796
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:802
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:808
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int16_t _2;
uint8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:814
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:820
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:826
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:832
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:839
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int16_t _2;
int16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:845
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:851
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:857
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:863
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int16_t _2;
uint8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:869
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:875
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:881
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:887
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:894
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int16_t _2;
int16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:900
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:906
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:912
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:918
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int16_t _2;
uint8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:924
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:930
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:936
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$Int8$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:942
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Int8 frost$core$Int8$get_abs$R$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int8 _1;
int8_t _2;
int8_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int8_t _11;
int8_t _12;
frost$core$Int8 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:948
_1 = (frost$core$Int8) {0u};
_2 = param0.value;
_3 = _1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:949
// begin inline call to function frost.core.Int8.-():frost.core.Int8 from Int8.frost:949:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:153
_11 = param0.value;
_12 = -_11;
_13 = (frost$core$Int8) {_12};
return _13;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:951
return param0;

}
frost$core$Int8 frost$core$Int8$min$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
int8_t _8;
frost$core$Int8 _9;
int8_t _12;
frost$core$Int8 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:957
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:958
_8 = param0.value;
_9 = (frost$core$Int8) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:960
_12 = param1.value;
_13 = (frost$core$Int8) {_12};
return _13;

}
frost$core$Int16 frost$core$Int8$min$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int16_t _2;
int16_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int8_t _9;
int16_t _10;
frost$core$Int16 _11;
int16_t _14;
frost$core$Int16 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:966
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:967
_9 = param0.value;
_10 = ((int16_t) _9);
_11 = (frost$core$Int16) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:969
_14 = param1.value;
_15 = (frost$core$Int16) {_14};
return _15;

}
frost$core$Int32 frost$core$Int8$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int8_t _9;
int32_t _10;
frost$core$Int32 _11;
int32_t _14;
frost$core$Int32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:975
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:976
_9 = param0.value;
_10 = ((int32_t) _9);
_11 = (frost$core$Int32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:978
_14 = param1.value;
_15 = (frost$core$Int32) {_14};
return _15;

}
frost$core$Int64 frost$core$Int8$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int8_t _9;
int64_t _10;
frost$core$Int64 _11;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:984
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:985
_9 = param0.value;
_10 = ((int64_t) _9);
_11 = (frost$core$Int64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:987
_14 = param1.value;
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int frost$core$Int8$min$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int8_t _9;
int64_t _10;
frost$core$Int _11;
int64_t _14;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:993
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:994
_9 = param0.value;
_10 = ((int64_t) _9);
_11 = (frost$core$Int) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:996
_14 = param1.value;
_15 = (frost$core$Int) {_14};
return _15;

}
frost$core$Int16 frost$core$Int8$min$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int16_t _2;
uint8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int8_t _10;
int16_t _11;
frost$core$Int16 _12;
uint8_t _15;
int16_t _16;
frost$core$Int16 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1002
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1003
_10 = param0.value;
_11 = ((int16_t) _10);
_12 = (frost$core$Int16) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1005
_15 = param1.value;
_16 = ((int16_t) _15);
_17 = (frost$core$Int16) {_16};
return _17;

}
frost$core$Int32 frost$core$Int8$min$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int8_t _10;
int32_t _11;
frost$core$Int32 _12;
uint16_t _15;
int32_t _16;
frost$core$Int32 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1011
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1012
_10 = param0.value;
_11 = ((int32_t) _10);
_12 = (frost$core$Int32) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1014
_15 = param1.value;
_16 = ((int32_t) _15);
_17 = (frost$core$Int32) {_16};
return _17;

}
frost$core$Int64 frost$core$Int8$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int8_t _10;
int64_t _11;
frost$core$Int64 _12;
uint32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1020
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1021
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1023
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$Int8$min$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int8_t _10;
int64_t _11;
frost$core$Int64 _12;
uint64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1030
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1031
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1033
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int8 frost$core$Int8$max$frost$core$Int8$R$frost$core$Int8(frost$core$Int8 param0, frost$core$Int8 param1) {

int8_t _1;
int8_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
int8_t _8;
frost$core$Int8 _9;
int8_t _12;
frost$core$Int8 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1039
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1040
_8 = param0.value;
_9 = (frost$core$Int8) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1042
_12 = param1.value;
_13 = (frost$core$Int8) {_12};
return _13;

}
frost$core$Int16 frost$core$Int8$max$frost$core$Int16$R$frost$core$Int16(frost$core$Int8 param0, frost$core$Int16 param1) {

int8_t _1;
int16_t _2;
int16_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int8_t _9;
int16_t _10;
frost$core$Int16 _11;
int16_t _14;
frost$core$Int16 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1048
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1049
_9 = param0.value;
_10 = ((int16_t) _9);
_11 = (frost$core$Int16) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1051
_14 = param1.value;
_15 = (frost$core$Int16) {_14};
return _15;

}
frost$core$Int32 frost$core$Int8$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int8 param0, frost$core$Int32 param1) {

int8_t _1;
int32_t _2;
int32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int8_t _9;
int32_t _10;
frost$core$Int32 _11;
int32_t _14;
frost$core$Int32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1057
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1058
_9 = param0.value;
_10 = ((int32_t) _9);
_11 = (frost$core$Int32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1060
_14 = param1.value;
_15 = (frost$core$Int32) {_14};
return _15;

}
frost$core$Int64 frost$core$Int8$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int8 param0, frost$core$Int64 param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int8_t _9;
int64_t _10;
frost$core$Int64 _11;
int64_t _14;
frost$core$Int64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1066
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1067
_9 = param0.value;
_10 = ((int64_t) _9);
_11 = (frost$core$Int64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1069
_14 = param1.value;
_15 = (frost$core$Int64) {_14};
return _15;

}
frost$core$Int frost$core$Int8$max$frost$core$Int$R$frost$core$Int(frost$core$Int8 param0, frost$core$Int param1) {

int8_t _1;
int64_t _2;
int64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
int8_t _9;
int64_t _10;
frost$core$Int _11;
int64_t _14;
frost$core$Int _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1075
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1076
_9 = param0.value;
_10 = ((int64_t) _9);
_11 = (frost$core$Int) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1078
_14 = param1.value;
_15 = (frost$core$Int) {_14};
return _15;

}
frost$core$Int16 frost$core$Int8$max$frost$core$UInt8$R$frost$core$Int16(frost$core$Int8 param0, frost$core$UInt8 param1) {

int8_t _1;
int16_t _2;
uint8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int8_t _10;
int16_t _11;
frost$core$Int16 _12;
uint8_t _15;
int16_t _16;
frost$core$Int16 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1084
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1085
_10 = param0.value;
_11 = ((int16_t) _10);
_12 = (frost$core$Int16) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1087
_15 = param1.value;
_16 = ((int16_t) _15);
_17 = (frost$core$Int16) {_16};
return _17;

}
frost$core$Int32 frost$core$Int8$max$frost$core$UInt16$R$frost$core$Int32(frost$core$Int8 param0, frost$core$UInt16 param1) {

int8_t _1;
int32_t _2;
uint16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int8_t _10;
int32_t _11;
frost$core$Int32 _12;
uint16_t _15;
int32_t _16;
frost$core$Int32 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1093
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1094
_10 = param0.value;
_11 = ((int32_t) _10);
_12 = (frost$core$Int32) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1096
_15 = param1.value;
_16 = ((int32_t) _15);
_17 = (frost$core$Int32) {_16};
return _17;

}
frost$core$Int64 frost$core$Int8$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt32 param1) {

int8_t _1;
int64_t _2;
uint32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int8_t _10;
int64_t _11;
frost$core$Int64 _12;
uint32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1102
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1103
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1105
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$Int8$max$frost$core$UInt$R$frost$core$Int64(frost$core$Int8 param0, frost$core$UInt param1) {

int8_t _1;
int64_t _2;
uint64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
int8_t _10;
int64_t _11;
frost$core$Int64 _12;
uint64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1112
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1113
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1115
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$Range$LTfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$Range$LTfrost$core$Int8$GT param0) {

org$frostlang$frost$Int8List* _1;
frost$core$Int8 _2;
frost$core$Int8 _3;
frost$core$Int8 _4;
frost$core$Bit _5;
frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT _6;
frost$collections$ListView* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1120
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int8List));
_1 = (org$frostlang$frost$Int8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int8List$class);
_2 = param0.min;
_3 = param0.max;
_4 = (frost$core$Int8) {1u};
_5 = param0.inclusive;
_6 = frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$init$frost$core$Int8$frost$core$Int8$frost$core$Int8$frost$core$Bit(_2, _3, _4, _5);
org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT(_1, _6);
_8 = ((frost$collections$ListView*) _1);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$collections$ListView* frost$core$Int8$$IDX$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT$R$frost$collections$ListView$LTfrost$core$Int8$GT(frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT param0) {

org$frostlang$frost$Int8List* _1;
frost$collections$ListView* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1125
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int8List));
_1 = (org$frostlang$frost$Int8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int8List$class);
org$frostlang$frost$Int8List$init$frost$core$SteppedRange$LTfrost$core$Int8$Cfrost$core$Int8$GT(_1, param0);
_3 = ((frost$collections$ListView*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Bit frost$core$Int8$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$Int8 param0, frost$core$Int param1) {

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
int8_t _32;
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
frost$core$Int8$wrapper* $tmp5;
$tmp5 = (frost$core$Int8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Int8$wrapperclass);
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
_18 = (frost$core$Int) {1130u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _18, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1131
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from Int8.frost:1131:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_25 = _22.value;
_26 = param1.value;
_27 = _25 << _26;
_28 = (frost$core$Int) {_27};
// begin inline call to function frost.core.Int8.&&(other:frost.core.Int):frost.core.Int from Int8.frost:1131:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:430
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
frost$core$Int frost$core$Int8$get_count$R$frost$core$Int(frost$core$Int8 param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1137
_1 = (frost$core$Int) {8u};
return _1;

}
frost$collections$Iterator* frost$core$Int8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int8 param0) {

org$frostlang$frost$IntBitIterator* _1;
int8_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$collections$Iterator* _10;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1147
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
_1 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int8.get_asUInt64():frost.core.UInt64 from Int8.frost:1147:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1226
_4 = param0.value;
_5 = ((uint64_t) _4);
_6 = (frost$core$UInt64) {_5};
_8 = (frost$core$UInt64) {128u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(_1, _6, _8);
_10 = ((frost$collections$Iterator*) _1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return _10;

}
frost$core$Int frost$core$Int8$get_hash$R$frost$core$Int(frost$core$Int8 param0) {

int8_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1152
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8$nullable frost$core$Int8$parse$frost$core$String$frost$core$Int$R$frost$core$Int8$Q(frost$core$String* param0, frost$core$Int param1) {

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
int8_t _52;
frost$core$Int8 _53;
int8_t _57;
int8_t _58;
frost$core$Int8 _59;
frost$core$Int8$nullable _61;
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
int8_t _88;
frost$core$Int8 _89;
frost$core$Int8$nullable _91;
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
_14 = (frost$core$Int) {1158u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _14, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1159
_18 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s11);
_19 = _18.value;
if (_19) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1160
_22 = (frost$core$Int) {1u};
_23 = ((frost$core$Int$nullable) { _22, true });
_24 = (frost$core$Bit) {false};
_25 = frost$core$Range$LTfrost$core$Int$Q$GT$init$frost$core$Int$Q$frost$core$Int$Q$frost$core$Bit(_23, ((frost$core$Int$nullable) { .nonnull = false }), _24);
_26 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$core$String(param0, _25);
_27 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(_26, param1);
*(&local0) = _27;
_29 = ((frost$core$Object*) _26);
frost$core$Frost$unref$frost$core$Object$Q(_29);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1161
_32 = *(&local0);
_33 = !_32.nonnull;
_34 = (frost$core$Bit) {_33};
_35 = _34.value;
if (_35) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1162
return ((frost$core$Int8$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1164
_40 = *(&local0);
_41 = _40.nonnull;
_42 = (frost$core$Bit) {_41};
_43 = _42.value;
if (_43) goto block9; else goto block10;
block10:;
_45 = (frost$core$Int) {1164u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s12, _45, &$s13);
abort(); // unreachable
block9:;
_48 = ((frost$core$UInt64) _40.value);
// begin inline call to function frost.core.UInt64.get_asInt8():frost.core.Int8 from Int8.frost:1164:25
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:550
_51 = _48.value;
_52 = ((int8_t) _51);
_53 = (frost$core$Int8) {_52};
// begin inline call to function frost.core.Int8.-():frost.core.Int8 from Int8.frost:1164:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:153
_57 = _53.value;
_58 = -_57;
_59 = (frost$core$Int8) {_58};
_61 = ((frost$core$Int8$nullable) { _59, true });
return _61;
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1167
_65 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = _65;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1168
_68 = *(&local1);
_69 = !_68.nonnull;
_70 = (frost$core$Bit) {_69};
_71 = _70.value;
if (_71) goto block13; else goto block14;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1169
return ((frost$core$Int8$nullable) { .nonnull = false });
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1171
_76 = *(&local1);
_77 = _76.nonnull;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block15; else goto block16;
block16:;
_81 = (frost$core$Int) {1171u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s14, _81, &$s15);
abort(); // unreachable
block15:;
_84 = ((frost$core$UInt64) _76.value);
// begin inline call to function frost.core.UInt64.get_asInt8():frost.core.Int8 from Int8.frost:1171:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:550
_87 = _84.value;
_88 = ((int8_t) _87);
_89 = (frost$core$Int8) {_88};
_91 = ((frost$core$Int8$nullable) { _89, true });
return _91;
block5:;
goto block18;
block18:;

}
frost$core$Int frost$core$Int8$get_asInt$R$frost$core$Int(frost$core$Int8 param0) {

int8_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1178
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int16 frost$core$Int8$get_asInt16$R$frost$core$Int16(frost$core$Int8 param0) {

int8_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1184
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$Int8$get_asInt32$R$frost$core$Int32(frost$core$Int8 param0) {

int8_t _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1190
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$Int8$get_asInt64$R$frost$core$Int64(frost$core$Int8 param0) {

int8_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1196
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$UInt frost$core$Int8$get_asUInt$R$frost$core$UInt(frost$core$Int8 param0) {

int8_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1202
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$UInt8 frost$core$Int8$get_asUInt8$R$frost$core$UInt8(frost$core$Int8 param0) {

int8_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1208
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt16 frost$core$Int8$get_asUInt16$R$frost$core$UInt16(frost$core$Int8 param0) {

int8_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1214
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$Int8$get_asUInt32$R$frost$core$UInt32(frost$core$Int8 param0) {

int8_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1220
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$Int8$get_asUInt64$R$frost$core$UInt64(frost$core$Int8 param0) {

int8_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1226
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Real32 frost$core$Int8$get_asReal32$R$frost$core$Real32(frost$core$Int8 param0) {

int8_t _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1232
_1 = param0.value;
_2 = ((float) _1);
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real64 frost$core$Int8$get_asReal64$R$frost$core$Real64(frost$core$Int8 param0) {

int8_t _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1238
_1 = param0.value;
_2 = ((double) _1);
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$String* frost$core$Int8$get_asString$R$frost$core$String(frost$core$Int8 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$Int8 local3;
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
frost$core$Int8 _20;
frost$core$Int8 _21;
int8_t _22;
int8_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Char8* _31;
frost$core$Int _32;
frost$core$Int64 _33;
frost$core$Int8 _34;
frost$core$Int8 _35;
int8_t _38;
int32_t _39;
int8_t _40;
int32_t _41;
int32_t _42;
frost$core$Int32 _43;
frost$core$Int32 _45;
int32_t _46;
int32_t _47;
int32_t _48;
frost$core$Int32 _49;
int32_t _52;
uint8_t _53;
frost$core$UInt8 _54;
frost$core$Char8 _56;
int64_t _57;
frost$core$Int8 _60;
frost$core$Int32 _61;
frost$core$Int32 _62;
int32_t _63;
int32_t _64;
int32_t _65;
frost$core$Int32 _66;
int32_t _69;
int8_t _70;
frost$core$Int8 _71;
frost$core$Int _75;
frost$core$Int _76;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
frost$core$Int8 _83;
frost$core$Int8 _84;
int8_t _85;
int8_t _86;
bool _87;
frost$core$Bit _88;
bool _89;
frost$core$Int _92;
frost$core$Int _93;
int64_t _94;
int64_t _95;
int64_t _96;
frost$core$Int _97;
frost$core$Char8* _104;
frost$core$Int _105;
frost$core$Int64 _106;
frost$core$Int32 _107;
frost$core$Int8 _108;
frost$core$Int8 _109;
int8_t _112;
int32_t _113;
int8_t _114;
int32_t _115;
int32_t _116;
frost$core$Int32 _117;
int32_t _119;
int32_t _120;
int32_t _121;
frost$core$Int32 _122;
int32_t _125;
uint8_t _126;
frost$core$UInt8 _127;
frost$core$Char8 _129;
int64_t _130;
frost$core$Int8 _133;
frost$core$Int32 _134;
frost$core$Int32 _135;
int32_t _136;
int32_t _137;
int32_t _138;
frost$core$Int32 _139;
int32_t _142;
int8_t _143;
frost$core$Int8 _144;
frost$core$Int _148;
frost$core$Int _149;
int64_t _150;
int64_t _151;
int64_t _152;
frost$core$Int _153;
frost$core$Int8 _156;
frost$core$Int8 _157;
int8_t _158;
int8_t _159;
bool _160;
frost$core$Bit _161;
bool _162;
frost$core$Char8* _165;
frost$core$Int _166;
frost$core$Int64 _167;
frost$core$UInt8 _168;
frost$core$Char8 _169;
int64_t _170;
frost$core$Int _174;
frost$core$Int _175;
int64_t _176;
int64_t _177;
int64_t _178;
frost$core$Int _179;
frost$core$Int _182;
frost$core$Int _183;
frost$core$Bit _184;
frost$core$Range$LTfrost$core$Int$GT _185;
frost$core$Int _186;
frost$core$Int _188;
frost$core$Bit _189;
bool _190;
frost$core$Int _191;
int64_t _193;
int64_t _194;
bool _195;
frost$core$Bit _196;
bool _197;
int64_t _199;
int64_t _200;
bool _201;
frost$core$Bit _202;
bool _203;
frost$core$Char8* _206;
frost$core$Int _207;
frost$core$Int64 _208;
frost$core$Char8* _209;
frost$core$Int _210;
frost$core$Int _211;
int64_t _212;
int64_t _213;
int64_t _214;
frost$core$Int _215;
frost$core$Int64 _216;
int64_t _217;
frost$core$Char8 _218;
int64_t _219;
frost$core$Int _222;
int64_t _223;
int64_t _224;
int64_t _225;
frost$core$Int _226;
int64_t _228;
int64_t _229;
bool _230;
frost$core$Bit _231;
bool _232;
int64_t _234;
int64_t _235;
bool _236;
frost$core$Bit _237;
bool _238;
int64_t _240;
int64_t _241;
int64_t _242;
frost$core$Int _243;
frost$core$String* _247;
frost$core$Char8* _248;
frost$core$Int _249;
frost$core$Object* _251;
frost$core$Object* _253;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1244
_1 = (frost$core$Int) {4u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1245
_4 = *(&local0);
_5 = frost$core$Int64$init$frost$core$Int(_4);
_6 = _5.value;
_7 = ((frost$core$Char8*) frostAlloc(_6 * 1));
*(&local1) = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1246
_10 = *(&local0);
_11 = (frost$core$Int) {1u};
_12 = _10.value;
_13 = _11.value;
_14 = _12 - _13;
_15 = (frost$core$Int) {_14};
*(&local2) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1247
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1248
_20 = *(&local3);
_21 = (frost$core$Int8) {0u};
_22 = _20.value;
_23 = _21.value;
_24 = _22 >= _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1249
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1250
_31 = *(&local1);
_32 = *(&local2);
_33 = frost$core$Int64$init$frost$core$Int(_32);
_34 = *(&local3);
_35 = (frost$core$Int8) {10u};
// begin inline call to function frost.core.Int8.%(other:frost.core.Int8):frost.core.Int32 from Int8.frost:1250:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:277
_38 = _34.value;
_39 = ((int32_t) _38);
_40 = _35.value;
_41 = ((int32_t) _40);
_42 = _39 % _41;
_43 = (frost$core$Int32) {_42};
_45 = (frost$core$Int32) {48u};
_46 = _43.value;
_47 = _45.value;
_48 = _46 + _47;
_49 = (frost$core$Int32) {_48};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int8.frost:1250:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:990
_52 = _49.value;
_53 = ((uint8_t) _52);
_54 = (frost$core$UInt8) {_53};
_56 = frost$core$Char8$init$frost$core$UInt8(_54);
_57 = _33.value;
_31[_57] = _56;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1251
_60 = *(&local3);
_61 = frost$core$Int32$init$frost$core$Int8(_60);
_62 = (frost$core$Int32) {10u};
_63 = _61.value;
_64 = _62.value;
_65 = _63 / _64;
_66 = (frost$core$Int32) {_65};
// begin inline call to function frost.core.Int32.get_asInt8():frost.core.Int8 from Int8.frost:1251:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:966
_69 = _66.value;
_70 = ((int8_t) _69);
_71 = (frost$core$Int8) {_70};
*(&local3) = _71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1252
_75 = *(&local2);
_76 = (frost$core$Int) {1u};
_77 = _75.value;
_78 = _76.value;
_79 = _77 - _78;
_80 = (frost$core$Int) {_79};
*(&local2) = _80;
_83 = *(&local3);
_84 = (frost$core$Int8) {0u};
_85 = _83.value;
_86 = _84.value;
_87 = _85 > _86;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1255
_92 = *(&local2);
_93 = (frost$core$Int) {1u};
_94 = _92.value;
_95 = _93.value;
_96 = _94 + _95;
_97 = (frost$core$Int) {_96};
*(&local2) = _97;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1258
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1259
_104 = *(&local1);
_105 = *(&local2);
_106 = frost$core$Int64$init$frost$core$Int(_105);
_107 = (frost$core$Int32) {48u};
_108 = *(&local3);
_109 = (frost$core$Int8) {10u};
// begin inline call to function frost.core.Int8.%(other:frost.core.Int8):frost.core.Int32 from Int8.frost:1259:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:277
_112 = _108.value;
_113 = ((int32_t) _112);
_114 = _109.value;
_115 = ((int32_t) _114);
_116 = _113 % _115;
_117 = (frost$core$Int32) {_116};
_119 = _107.value;
_120 = _117.value;
_121 = _119 - _120;
_122 = (frost$core$Int32) {_121};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int8.frost:1259:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:990
_125 = _122.value;
_126 = ((uint8_t) _125);
_127 = (frost$core$UInt8) {_126};
_129 = frost$core$Char8$init$frost$core$UInt8(_127);
_130 = _106.value;
_104[_130] = _129;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1260
_133 = *(&local3);
_134 = frost$core$Int32$init$frost$core$Int8(_133);
_135 = (frost$core$Int32) {10u};
_136 = _134.value;
_137 = _135.value;
_138 = _136 / _137;
_139 = (frost$core$Int32) {_138};
// begin inline call to function frost.core.Int32.get_asInt8():frost.core.Int8 from Int8.frost:1260:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int32.frost:966
_142 = _139.value;
_143 = ((int8_t) _142);
_144 = (frost$core$Int8) {_143};
*(&local3) = _144;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1261
_148 = *(&local2);
_149 = (frost$core$Int) {1u};
_150 = _148.value;
_151 = _149.value;
_152 = _150 - _151;
_153 = (frost$core$Int) {_152};
*(&local2) = _153;
_156 = *(&local3);
_157 = (frost$core$Int8) {0u};
_158 = _156.value;
_159 = _157.value;
_160 = _158 < _159;
_161 = (frost$core$Bit) {_160};
_162 = _161.value;
if (_162) goto block10; else goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1264
_165 = *(&local1);
_166 = *(&local2);
_167 = frost$core$Int64$init$frost$core$Int(_166);
_168 = (frost$core$UInt8) {45u};
_169 = frost$core$Char8$init$frost$core$UInt8(_168);
_170 = _167.value;
_165[_170] = _169;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1266
_174 = *(&local0);
_175 = *(&local2);
_176 = _174.value;
_177 = _175.value;
_178 = _176 - _177;
_179 = (frost$core$Int) {_178};
*(&local4) = _179;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1267
_182 = (frost$core$Int) {0u};
_183 = *(&local4);
_184 = (frost$core$Bit) {false};
_185 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_182, _183, _184);
_186 = _185.min;
*(&local5) = _186;
_188 = _185.max;
_189 = _185.inclusive;
_190 = _189.value;
_191 = (frost$core$Int) {1u};
if (_190) goto block19; else goto block20;
block19:;
_193 = _186.value;
_194 = _188.value;
_195 = _193 <= _194;
_196 = (frost$core$Bit) {_195};
_197 = _196.value;
if (_197) goto block16; else goto block17;
block20:;
_199 = _186.value;
_200 = _188.value;
_201 = _199 < _200;
_202 = (frost$core$Bit) {_201};
_203 = _202.value;
if (_203) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1268
_206 = *(&local1);
_207 = *(&local5);
_208 = frost$core$Int64$init$frost$core$Int(_207);
_209 = *(&local1);
_210 = *(&local5);
_211 = *(&local2);
_212 = _210.value;
_213 = _211.value;
_214 = _212 + _213;
_215 = (frost$core$Int) {_214};
_216 = frost$core$Int64$init$frost$core$Int(_215);
_217 = _216.value;
_218 = _209[_217];
_219 = _208.value;
_206[_219] = _218;
_222 = *(&local5);
_223 = _188.value;
_224 = _222.value;
_225 = _223 - _224;
_226 = (frost$core$Int) {_225};
if (_190) goto block22; else goto block23;
block22:;
_228 = _226.value;
_229 = _191.value;
_230 = _228 >= _229;
_231 = (frost$core$Bit) {_230};
_232 = _231.value;
if (_232) goto block21; else goto block17;
block23:;
_234 = _226.value;
_235 = _191.value;
_236 = _234 > _235;
_237 = (frost$core$Bit) {_236};
_238 = _237.value;
if (_238) goto block21; else goto block17;
block21:;
_240 = _222.value;
_241 = _191.value;
_242 = _240 + _241;
_243 = (frost$core$Int) {_242};
*(&local5) = _243;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1270
FROST_ASSERT(48 == sizeof(frost$core$String));
_247 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
_248 = *(&local1);
_249 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_247, _248, _249);
_251 = ((frost$core$Object*) _247);
frost$core$Frost$ref$frost$core$Object$Q(_251);
_253 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_253);
return _247;

}
frost$core$String* frost$core$Int8$format$frost$core$String$R$frost$core$String(frost$core$Int8 param0, frost$core$String* param1) {

frost$core$Int8 local0;
int8_t _1;
bool _2;
frost$core$Bit _3;
frost$core$Int8 _6;
int8_t _7;
int8_t _8;
bool _9;
frost$core$Bit _10;
bool _11;
int8_t _16;
int8_t _17;
frost$core$Int8 _18;
frost$core$Int8 _25;
int8_t _28;
uint64_t _29;
frost$core$UInt64 _30;
frost$core$UInt64 _32;
frost$core$String* _33;
frost$core$Object* _34;
frost$core$Object* _36;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1276
_1 = param0.value;
_2 = _1 < 0u;
_3 = (frost$core$Bit) {_2};
// begin inline call to function frost.core.Int8.get_abs():frost.core.Int8 from Int8.frost:1276:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:948
_6 = (frost$core$Int8) {0u};
_7 = param0.value;
_8 = _6.value;
_9 = _7 < _8;
_10 = (frost$core$Bit) {_9};
_11 = _10.value;
if (_11) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:949
// begin inline call to function frost.core.Int8.-():frost.core.Int8 from Int8.frost:949:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:153
_16 = param0.value;
_17 = -_16;
_18 = (frost$core$Int8) {_17};
*(&local0) = _18;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:951
*(&local0) = param0;
goto block1;
block1:;
_25 = *(&local0);
// begin inline call to function frost.core.Int8.get_asUInt64():frost.core.UInt64 from Int8.frost:1276:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int8.frost:1226
_28 = _25.value;
_29 = ((uint64_t) _28);
_30 = (frost$core$UInt64) {_29};
_32 = (frost$core$UInt64) {255u};
_33 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_3, _30, _32, param1);
_34 = ((frost$core$Object*) _33);
frost$core$Frost$ref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _33);
frost$core$Frost$unref$frost$core$Object$Q(_36);
return _33;

}
void frost$core$Int8$cleanup(frost$core$Int8 param0) {

return;

}

