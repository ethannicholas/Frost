#include "frost/core/UInt8.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Key.h"
#include "frost/core/Int32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt64.h"
#include "frost/core/UInt.h"
#include "frost/core/Real32.h"
#include "frost/core/Real64.h"
#include "frost/core/Range.LTfrost/core/UInt8.GT.h"
#include "org/frostlang/frost/UInt8List.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt8.Cfrost/core/UInt8.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Object* frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, ((frost$core$UInt8$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt8$format$frost$core$String$R$frost$core$String(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt8$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt8$get_count$R$frost$core$Int(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt8$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt8$get_hash$R$frost$core$Int(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt8$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt8$get_asString$R$frost$core$String(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$ADD$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt8$$ADD$frost$core$Int$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$$ADD$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$$ADD$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$SUB$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt8$$SUB$frost$core$Int$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$$SUB$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$$SUB$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$SUB$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt8$$SUB$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$MUL$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt8$$MUL$frost$core$Int$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$$MUL$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$$MUL$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$INTDIV$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt8$$INTDIV$frost$core$Int$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$$INTDIV$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$REM$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt8$$REM$frost$core$Int$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$$REM$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$$REM$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$BNOT$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt8$$BNOT$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt8$$BAND$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt8$$BAND$frost$core$Int$R$frost$core$Int(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$$BAND$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$$BAND$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt8$$BOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt8$$BOR$frost$core$Int$R$frost$core$Int(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$$BOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$$BOR$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt8$$BXOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt8$$BXOR$frost$core$Int$R$frost$core$Int(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$$BXOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$$BXOR$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt32 result = frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$Int$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt8$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$Int$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt8$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$Int$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt8$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$Int$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt8$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$Int$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt8$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$Int$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt8$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int16 result = frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$min$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt8$min$frost$core$Int$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$min$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$min$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int16 result = frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$max$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt8$max$frost$core$Int$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt8 result = frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$max$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt8$max$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$UInt8$get_bitCount$R$frost$core$UInt8$shim(frost$core$UInt8* sret, frost$core$Object* p0) {
    frost$core$UInt8$get_bitCount$R$frost$core$UInt8(sret, ((frost$core$UInt8$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$UInt8$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt8$get_asInt$R$frost$core$Int(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$UInt8$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt8$get_asInt8$R$frost$core$Int8(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt8$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt8$get_asInt16$R$frost$core$Int16(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt8$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt8$get_asInt32$R$frost$core$Int32(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt8$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt8$get_asInt64$R$frost$core$Int64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt8$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$UInt8$get_asUInt$R$frost$core$UInt(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt8$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt8$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt8$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt8$get_asUInt32$R$frost$core$UInt32(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt8$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt8$get_asUInt64$R$frost$core$UInt64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt8$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt8$get_asReal32$R$frost$core$Real32(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt8$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt8$get_asReal64$R$frost$core$Real64(((frost$core$UInt8$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt8$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt8$cleanup(((frost$core$UInt8$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$core$UInt8$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt8$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt8$_frost$collections$ListView, { frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt8$_frost$core$Comparable, { frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt8$_frost$core$Equatable, { frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt8$_frost$collections$Iterable, { frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$UInt8$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt8$_frost$core$Formattable, { frost$core$UInt8$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt8$_frost$collections$CollectionView, { frost$core$UInt8$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s1;
frost$core$UInt8$class_type frost$core$UInt8$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt8$_frost$collections$Key, { frost$core$UInt8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$ADD$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$ADD$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$SUB$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$SUB$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$SUB$R$frost$core$UInt8$shim, frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$MUL$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$MUL$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$INTDIV$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$REM$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$REM$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt8$$BNOT$R$frost$core$UInt8$shim, frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16$shim, frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$min$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$min$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16$shim, frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$max$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$max$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$get_count$R$frost$core$Int$shim, frost$core$UInt8$get_bitCount$R$frost$core$UInt8$shim, frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt8$get_hash$R$frost$core$Int$shim, frost$core$UInt8$get_asInt$R$frost$core$Int$shim, frost$core$UInt8$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt8$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt8$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt8$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt8$get_asUInt$R$frost$core$UInt$shim, frost$core$UInt8$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt8$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt8$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt8$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt8$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[16]; } frost$core$UInt8$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$ListView, { frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Comparable, { frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Equatable, { frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$Iterable, { frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$UInt8$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Formattable, { frost$core$UInt8$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$CollectionView, { frost$core$UInt8$get_hash$R$frost$core$Int$shim} };

static frost$core$String $s3;
frost$core$UInt8$wrapperclass_type frost$core$UInt8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$Key, { frost$core$UInt8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn794)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -7673783684893366276, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -7673783684893366276, NULL };
static frost$core$String $s802 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 11, -3353100713791193429, NULL };
static frost$core$String $s803 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 90, -7439922039727462966, NULL };
static frost$core$String $s838 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 11, -3353100713791193429, NULL };
static frost$core$String $s839 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f", 119, 7168004075600014508, NULL };

frost$core$UInt8 frost$core$UInt8$init$builtin_uint8(uint8_t param0) {

frost$core$UInt8 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:30
uint8_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt8 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:36
uint8_t $tmp6 = param0.value;
int8_t $tmp7 = param1.value;
int32_t $tmp8 = ((int32_t) $tmp6) + ((int32_t) $tmp7);
frost$core$Int32 $tmp9 = (frost$core$Int32) {$tmp8};
return $tmp9;

}
frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:42
uint8_t $tmp10 = param0.value;
int16_t $tmp11 = param1.value;
int32_t $tmp12 = ((int32_t) $tmp10) + ((int32_t) $tmp11);
frost$core$Int32 $tmp13 = (frost$core$Int32) {$tmp12};
return $tmp13;

}
frost$core$Int64 frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:48
uint8_t $tmp14 = param0.value;
int32_t $tmp15 = param1.value;
int64_t $tmp16 = ((int64_t) $tmp14) + ((int64_t) $tmp15);
frost$core$Int64 $tmp17 = (frost$core$Int64) {$tmp16};
return $tmp17;

}
frost$core$Int64 frost$core$UInt8$$ADD$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:54
uint8_t $tmp18 = param0.value;
int64_t $tmp19 = param1.value;
int64_t $tmp20 = ((int64_t) $tmp18) + ((int64_t) $tmp19);
frost$core$Int64 $tmp21 = (frost$core$Int64) {$tmp20};
return $tmp21;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:60
uint8_t $tmp22 = param0.value;
uint8_t $tmp23 = param1.value;
uint32_t $tmp24 = ((uint32_t) $tmp22) + ((uint32_t) $tmp23);
frost$core$UInt32 $tmp25 = (frost$core$UInt32) {$tmp24};
return $tmp25;

}
frost$core$UInt8 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:65
uint8_t $tmp26 = param0.value;
uint8_t $tmp27 = param1.value;
uint8_t $tmp28 = $tmp26 + $tmp27;
frost$core$UInt8 $tmp29 = (frost$core$UInt8) {$tmp28};
return $tmp29;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:71
uint8_t $tmp30 = param0.value;
uint16_t $tmp31 = param1.value;
uint32_t $tmp32 = ((uint32_t) $tmp30) + ((uint32_t) $tmp31);
frost$core$UInt32 $tmp33 = (frost$core$UInt32) {$tmp32};
return $tmp33;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:77
uint8_t $tmp34 = param0.value;
uint32_t $tmp35 = param1.value;
uint32_t $tmp36 = ((uint32_t) $tmp34) + $tmp35;
frost$core$UInt32 $tmp37 = (frost$core$UInt32) {$tmp36};
return $tmp37;

}
frost$core$UInt64 frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:83
uint8_t $tmp38 = param0.value;
uint64_t $tmp39 = param1.value;
uint64_t $tmp40 = ((uint64_t) $tmp38) + $tmp39;
frost$core$UInt64 $tmp41 = (frost$core$UInt64) {$tmp40};
return $tmp41;

}
frost$core$UInt frost$core$UInt8$$ADD$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:89
uint8_t $tmp42 = param0.value;
uint64_t $tmp43 = param1.value;
uint64_t $tmp44 = ((uint64_t) $tmp42) + $tmp43;
frost$core$UInt $tmp45 = (frost$core$UInt) {$tmp44};
return $tmp45;

}
frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:95
uint8_t $tmp46 = param0.value;
int8_t $tmp47 = param1.value;
int32_t $tmp48 = ((int32_t) $tmp46) - ((int32_t) $tmp47);
frost$core$Int32 $tmp49 = (frost$core$Int32) {$tmp48};
return $tmp49;

}
frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:101
uint8_t $tmp50 = param0.value;
int16_t $tmp51 = param1.value;
int32_t $tmp52 = ((int32_t) $tmp50) - ((int32_t) $tmp51);
frost$core$Int32 $tmp53 = (frost$core$Int32) {$tmp52};
return $tmp53;

}
frost$core$Int64 frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:107
uint8_t $tmp54 = param0.value;
int32_t $tmp55 = param1.value;
int64_t $tmp56 = ((int64_t) $tmp54) - ((int64_t) $tmp55);
frost$core$Int64 $tmp57 = (frost$core$Int64) {$tmp56};
return $tmp57;

}
frost$core$Int64 frost$core$UInt8$$SUB$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:113
uint8_t $tmp58 = param0.value;
int64_t $tmp59 = param1.value;
int64_t $tmp60 = ((int64_t) $tmp58) - ((int64_t) $tmp59);
frost$core$Int64 $tmp61 = (frost$core$Int64) {$tmp60};
return $tmp61;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:119
uint8_t $tmp62 = param0.value;
uint8_t $tmp63 = param1.value;
uint32_t $tmp64 = ((uint32_t) $tmp62) - ((uint32_t) $tmp63);
frost$core$UInt32 $tmp65 = (frost$core$UInt32) {$tmp64};
return $tmp65;

}
frost$core$UInt8 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:124
uint8_t $tmp66 = param0.value;
uint8_t $tmp67 = param1.value;
uint8_t $tmp68 = $tmp66 - $tmp67;
frost$core$UInt8 $tmp69 = (frost$core$UInt8) {$tmp68};
return $tmp69;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:130
uint8_t $tmp70 = param0.value;
uint16_t $tmp71 = param1.value;
uint32_t $tmp72 = ((uint32_t) $tmp70) - ((uint32_t) $tmp71);
frost$core$UInt32 $tmp73 = (frost$core$UInt32) {$tmp72};
return $tmp73;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:136
uint8_t $tmp74 = param0.value;
uint32_t $tmp75 = param1.value;
uint32_t $tmp76 = ((uint32_t) $tmp74) - $tmp75;
frost$core$UInt32 $tmp77 = (frost$core$UInt32) {$tmp76};
return $tmp77;

}
frost$core$UInt64 frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:142
uint8_t $tmp78 = param0.value;
uint64_t $tmp79 = param1.value;
uint64_t $tmp80 = ((uint64_t) $tmp78) - $tmp79;
frost$core$UInt64 $tmp81 = (frost$core$UInt64) {$tmp80};
return $tmp81;

}
frost$core$UInt frost$core$UInt8$$SUB$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:148
uint8_t $tmp82 = param0.value;
uint64_t $tmp83 = param1.value;
uint64_t $tmp84 = ((uint64_t) $tmp82) - $tmp83;
frost$core$UInt $tmp85 = (frost$core$UInt) {$tmp84};
return $tmp85;

}
frost$core$UInt8 frost$core$UInt8$$SUB$R$frost$core$UInt8(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:153
uint8_t $tmp86 = param0.value;
uint8_t $tmp87 = -$tmp86;
frost$core$UInt8 $tmp88 = (frost$core$UInt8) {$tmp87};
return $tmp88;

}
frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:159
uint8_t $tmp89 = param0.value;
int8_t $tmp90 = param1.value;
int32_t $tmp91 = ((int32_t) $tmp89) * ((int32_t) $tmp90);
frost$core$Int32 $tmp92 = (frost$core$Int32) {$tmp91};
return $tmp92;

}
frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:165
uint8_t $tmp93 = param0.value;
int16_t $tmp94 = param1.value;
int32_t $tmp95 = ((int32_t) $tmp93) * ((int32_t) $tmp94);
frost$core$Int32 $tmp96 = (frost$core$Int32) {$tmp95};
return $tmp96;

}
frost$core$Int64 frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:171
uint8_t $tmp97 = param0.value;
int32_t $tmp98 = param1.value;
int64_t $tmp99 = ((int64_t) $tmp97) * ((int64_t) $tmp98);
frost$core$Int64 $tmp100 = (frost$core$Int64) {$tmp99};
return $tmp100;

}
frost$core$Int64 frost$core$UInt8$$MUL$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:177
uint8_t $tmp101 = param0.value;
int64_t $tmp102 = param1.value;
int64_t $tmp103 = ((int64_t) $tmp101) * ((int64_t) $tmp102);
frost$core$Int64 $tmp104 = (frost$core$Int64) {$tmp103};
return $tmp104;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:183
uint8_t $tmp105 = param0.value;
uint8_t $tmp106 = param1.value;
uint32_t $tmp107 = ((uint32_t) $tmp105) * ((uint32_t) $tmp106);
frost$core$UInt32 $tmp108 = (frost$core$UInt32) {$tmp107};
return $tmp108;

}
frost$core$UInt8 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:188
uint8_t $tmp109 = param0.value;
uint8_t $tmp110 = param1.value;
uint8_t $tmp111 = $tmp109 * $tmp110;
frost$core$UInt8 $tmp112 = (frost$core$UInt8) {$tmp111};
return $tmp112;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:194
uint8_t $tmp113 = param0.value;
uint16_t $tmp114 = param1.value;
uint32_t $tmp115 = ((uint32_t) $tmp113) * ((uint32_t) $tmp114);
frost$core$UInt32 $tmp116 = (frost$core$UInt32) {$tmp115};
return $tmp116;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:200
uint8_t $tmp117 = param0.value;
uint32_t $tmp118 = param1.value;
uint32_t $tmp119 = ((uint32_t) $tmp117) * $tmp118;
frost$core$UInt32 $tmp120 = (frost$core$UInt32) {$tmp119};
return $tmp120;

}
frost$core$UInt64 frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:206
uint8_t $tmp121 = param0.value;
uint64_t $tmp122 = param1.value;
uint64_t $tmp123 = ((uint64_t) $tmp121) * $tmp122;
frost$core$UInt64 $tmp124 = (frost$core$UInt64) {$tmp123};
return $tmp124;

}
frost$core$UInt frost$core$UInt8$$MUL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:212
uint8_t $tmp125 = param0.value;
uint64_t $tmp126 = param1.value;
uint64_t $tmp127 = ((uint64_t) $tmp125) * $tmp126;
frost$core$UInt $tmp128 = (frost$core$UInt) {$tmp127};
return $tmp128;

}
frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:218
uint8_t $tmp129 = param0.value;
int8_t $tmp130 = param1.value;
int32_t $tmp131 = ((int32_t) $tmp129) / ((int32_t) $tmp130);
frost$core$Int32 $tmp132 = (frost$core$Int32) {$tmp131};
return $tmp132;

}
frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:224
uint8_t $tmp133 = param0.value;
int16_t $tmp134 = param1.value;
int32_t $tmp135 = ((int32_t) $tmp133) / ((int32_t) $tmp134);
frost$core$Int32 $tmp136 = (frost$core$Int32) {$tmp135};
return $tmp136;

}
frost$core$Int64 frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:230
uint8_t $tmp137 = param0.value;
int32_t $tmp138 = param1.value;
int64_t $tmp139 = ((int64_t) $tmp137) / ((int64_t) $tmp138);
frost$core$Int64 $tmp140 = (frost$core$Int64) {$tmp139};
return $tmp140;

}
frost$core$Int64 frost$core$UInt8$$INTDIV$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:236
uint8_t $tmp141 = param0.value;
int64_t $tmp142 = param1.value;
int64_t $tmp143 = ((int64_t) $tmp141) / ((int64_t) $tmp142);
frost$core$Int64 $tmp144 = (frost$core$Int64) {$tmp143};
return $tmp144;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:242
uint8_t $tmp145 = param0.value;
uint8_t $tmp146 = param1.value;
uint32_t $tmp147 = ((uint32_t) $tmp145) / ((uint32_t) $tmp146);
frost$core$UInt32 $tmp148 = (frost$core$UInt32) {$tmp147};
return $tmp148;

}
frost$core$UInt8 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:247
uint8_t $tmp149 = param0.value;
uint8_t $tmp150 = param1.value;
uint8_t $tmp151 = $tmp149 / $tmp150;
frost$core$UInt8 $tmp152 = (frost$core$UInt8) {$tmp151};
return $tmp152;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:253
uint8_t $tmp153 = param0.value;
uint16_t $tmp154 = param1.value;
uint32_t $tmp155 = ((uint32_t) $tmp153) / ((uint32_t) $tmp154);
frost$core$UInt32 $tmp156 = (frost$core$UInt32) {$tmp155};
return $tmp156;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:259
uint8_t $tmp157 = param0.value;
uint32_t $tmp158 = param1.value;
uint32_t $tmp159 = ((uint32_t) $tmp157) / $tmp158;
frost$core$UInt32 $tmp160 = (frost$core$UInt32) {$tmp159};
return $tmp160;

}
frost$core$UInt64 frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:265
uint8_t $tmp161 = param0.value;
uint64_t $tmp162 = param1.value;
uint64_t $tmp163 = ((uint64_t) $tmp161) / $tmp162;
frost$core$UInt64 $tmp164 = (frost$core$UInt64) {$tmp163};
return $tmp164;

}
frost$core$UInt frost$core$UInt8$$INTDIV$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:271
uint8_t $tmp165 = param0.value;
uint64_t $tmp166 = param1.value;
uint64_t $tmp167 = ((uint64_t) $tmp165) / $tmp166;
frost$core$UInt $tmp168 = (frost$core$UInt) {$tmp167};
return $tmp168;

}
frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:277
uint8_t $tmp169 = param0.value;
int8_t $tmp170 = param1.value;
int32_t $tmp171 = ((int32_t) $tmp169) % ((int32_t) $tmp170);
frost$core$Int32 $tmp172 = (frost$core$Int32) {$tmp171};
return $tmp172;

}
frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:283
uint8_t $tmp173 = param0.value;
int16_t $tmp174 = param1.value;
int32_t $tmp175 = ((int32_t) $tmp173) % ((int32_t) $tmp174);
frost$core$Int32 $tmp176 = (frost$core$Int32) {$tmp175};
return $tmp176;

}
frost$core$Int64 frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:289
uint8_t $tmp177 = param0.value;
int32_t $tmp178 = param1.value;
int64_t $tmp179 = ((int64_t) $tmp177) % ((int64_t) $tmp178);
frost$core$Int64 $tmp180 = (frost$core$Int64) {$tmp179};
return $tmp180;

}
frost$core$Int64 frost$core$UInt8$$REM$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:295
uint8_t $tmp181 = param0.value;
int64_t $tmp182 = param1.value;
int64_t $tmp183 = ((int64_t) $tmp181) % ((int64_t) $tmp182);
frost$core$Int64 $tmp184 = (frost$core$Int64) {$tmp183};
return $tmp184;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:301
uint8_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
uint32_t $tmp187 = ((uint32_t) $tmp185) % ((uint32_t) $tmp186);
frost$core$UInt32 $tmp188 = (frost$core$UInt32) {$tmp187};
return $tmp188;

}
frost$core$UInt8 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:306
uint8_t $tmp189 = param0.value;
uint8_t $tmp190 = param1.value;
uint8_t $tmp191 = $tmp189 % $tmp190;
frost$core$UInt8 $tmp192 = (frost$core$UInt8) {$tmp191};
return $tmp192;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:312
uint8_t $tmp193 = param0.value;
uint16_t $tmp194 = param1.value;
uint32_t $tmp195 = ((uint32_t) $tmp193) % ((uint32_t) $tmp194);
frost$core$UInt32 $tmp196 = (frost$core$UInt32) {$tmp195};
return $tmp196;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:318
uint8_t $tmp197 = param0.value;
uint32_t $tmp198 = param1.value;
uint32_t $tmp199 = ((uint32_t) $tmp197) % $tmp198;
frost$core$UInt32 $tmp200 = (frost$core$UInt32) {$tmp199};
return $tmp200;

}
frost$core$UInt64 frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:324
uint8_t $tmp201 = param0.value;
uint64_t $tmp202 = param1.value;
uint64_t $tmp203 = ((uint64_t) $tmp201) % $tmp202;
frost$core$UInt64 $tmp204 = (frost$core$UInt64) {$tmp203};
return $tmp204;

}
frost$core$UInt frost$core$UInt8$$REM$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:330
uint8_t $tmp205 = param0.value;
uint64_t $tmp206 = param1.value;
uint64_t $tmp207 = ((uint64_t) $tmp205) % $tmp206;
frost$core$UInt $tmp208 = (frost$core$UInt) {$tmp207};
return $tmp208;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:336
uint8_t $tmp209 = param0.value;
int8_t $tmp210 = param1.value;
float $tmp211 = ((float) $tmp209) / ((float) $tmp210);
frost$core$Real32 $tmp212 = (frost$core$Real32) {$tmp211};
return $tmp212;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:342
uint8_t $tmp213 = param0.value;
int16_t $tmp214 = param1.value;
float $tmp215 = ((float) $tmp213) / ((float) $tmp214);
frost$core$Real32 $tmp216 = (frost$core$Real32) {$tmp215};
return $tmp216;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:348
uint8_t $tmp217 = param0.value;
int32_t $tmp218 = param1.value;
float $tmp219 = ((float) $tmp217) / ((float) $tmp218);
frost$core$Real32 $tmp220 = (frost$core$Real32) {$tmp219};
return $tmp220;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:354
uint8_t $tmp221 = param0.value;
int64_t $tmp222 = param1.value;
double $tmp223 = ((double) $tmp221) / ((double) $tmp222);
frost$core$Real64 $tmp224 = (frost$core$Real64) {$tmp223};
return $tmp224;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:360
uint8_t $tmp225 = param0.value;
uint8_t $tmp226 = param1.value;
float $tmp227 = ((float) $tmp225) / ((float) $tmp226);
frost$core$Real32 $tmp228 = (frost$core$Real32) {$tmp227};
return $tmp228;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:366
uint8_t $tmp229 = param0.value;
uint16_t $tmp230 = param1.value;
float $tmp231 = ((float) $tmp229) / ((float) $tmp230);
frost$core$Real32 $tmp232 = (frost$core$Real32) {$tmp231};
return $tmp232;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:372
uint8_t $tmp233 = param0.value;
uint32_t $tmp234 = param1.value;
float $tmp235 = ((float) $tmp233) / ((float) $tmp234);
frost$core$Real32 $tmp236 = (frost$core$Real32) {$tmp235};
return $tmp236;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:378
uint8_t $tmp237 = param0.value;
uint64_t $tmp238 = param1.value;
double $tmp239 = ((double) $tmp237) / ((double) $tmp238);
frost$core$Real64 $tmp240 = (frost$core$Real64) {$tmp239};
return $tmp240;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:384
uint8_t $tmp241 = param0.value;
float $tmp242 = param1.value;
float $tmp243 = ((float) $tmp241) / $tmp242;
frost$core$Real32 $tmp244 = (frost$core$Real32) {$tmp243};
return $tmp244;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:390
uint8_t $tmp245 = param0.value;
double $tmp246 = param1.value;
double $tmp247 = ((double) $tmp245) / $tmp246;
frost$core$Real64 $tmp248 = (frost$core$Real64) {$tmp247};
return $tmp248;

}
frost$core$UInt8 frost$core$UInt8$$BNOT$R$frost$core$UInt8(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:395
uint8_t $tmp249 = param0.value;
uint8_t $tmp250 = !$tmp249;
frost$core$UInt8 $tmp251 = (frost$core$UInt8) {$tmp250};
return $tmp251;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:401
uint8_t $tmp252 = param0.value;
int8_t $tmp253 = param1.value;
int32_t $tmp254 = ((int32_t) $tmp252) & ((int32_t) $tmp253);
frost$core$Int32 $tmp255 = (frost$core$Int32) {$tmp254};
return $tmp255;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:407
uint8_t $tmp256 = param0.value;
int16_t $tmp257 = param1.value;
int32_t $tmp258 = ((int32_t) $tmp256) & ((int32_t) $tmp257);
frost$core$Int32 $tmp259 = (frost$core$Int32) {$tmp258};
return $tmp259;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:413
uint8_t $tmp260 = param0.value;
int32_t $tmp261 = param1.value;
int32_t $tmp262 = ((int32_t) $tmp260) & $tmp261;
frost$core$Int32 $tmp263 = (frost$core$Int32) {$tmp262};
return $tmp263;

}
frost$core$Int64 frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:419
uint8_t $tmp264 = param0.value;
int64_t $tmp265 = param1.value;
int64_t $tmp266 = ((int64_t) $tmp264) & $tmp265;
frost$core$Int64 $tmp267 = (frost$core$Int64) {$tmp266};
return $tmp267;

}
frost$core$Int frost$core$UInt8$$BAND$frost$core$Int$R$frost$core$Int(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:425
uint8_t $tmp268 = param0.value;
int64_t $tmp269 = param1.value;
int64_t $tmp270 = ((int64_t) $tmp268) & $tmp269;
frost$core$Int $tmp271 = (frost$core$Int) {$tmp270};
return $tmp271;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:431
uint8_t $tmp272 = param0.value;
uint8_t $tmp273 = param1.value;
uint32_t $tmp274 = ((uint32_t) $tmp272) & ((uint32_t) $tmp273);
frost$core$UInt32 $tmp275 = (frost$core$UInt32) {$tmp274};
return $tmp275;

}
frost$core$UInt8 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:436
uint8_t $tmp276 = param0.value;
uint8_t $tmp277 = param1.value;
uint8_t $tmp278 = $tmp276 & $tmp277;
frost$core$UInt8 $tmp279 = (frost$core$UInt8) {$tmp278};
return $tmp279;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:442
uint8_t $tmp280 = param0.value;
uint16_t $tmp281 = param1.value;
uint32_t $tmp282 = ((uint32_t) $tmp280) & ((uint32_t) $tmp281);
frost$core$UInt32 $tmp283 = (frost$core$UInt32) {$tmp282};
return $tmp283;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:448
uint8_t $tmp284 = param0.value;
uint32_t $tmp285 = param1.value;
uint32_t $tmp286 = ((uint32_t) $tmp284) & $tmp285;
frost$core$UInt32 $tmp287 = (frost$core$UInt32) {$tmp286};
return $tmp287;

}
frost$core$UInt64 frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:454
uint8_t $tmp288 = param0.value;
uint64_t $tmp289 = param1.value;
uint64_t $tmp290 = ((uint64_t) $tmp288) & $tmp289;
frost$core$UInt64 $tmp291 = (frost$core$UInt64) {$tmp290};
return $tmp291;

}
frost$core$UInt frost$core$UInt8$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:460
uint8_t $tmp292 = param0.value;
uint64_t $tmp293 = param1.value;
uint64_t $tmp294 = ((uint64_t) $tmp292) & $tmp293;
frost$core$UInt $tmp295 = (frost$core$UInt) {$tmp294};
return $tmp295;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:466
uint8_t $tmp296 = param0.value;
int8_t $tmp297 = param1.value;
int32_t $tmp298 = ((int32_t) $tmp296) | ((int32_t) $tmp297);
frost$core$Int32 $tmp299 = (frost$core$Int32) {$tmp298};
return $tmp299;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:472
uint8_t $tmp300 = param0.value;
int16_t $tmp301 = param1.value;
int32_t $tmp302 = ((int32_t) $tmp300) | ((int32_t) $tmp301);
frost$core$Int32 $tmp303 = (frost$core$Int32) {$tmp302};
return $tmp303;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:478
uint8_t $tmp304 = param0.value;
int32_t $tmp305 = param1.value;
int32_t $tmp306 = ((int32_t) $tmp304) | $tmp305;
frost$core$Int32 $tmp307 = (frost$core$Int32) {$tmp306};
return $tmp307;

}
frost$core$Int64 frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:484
uint8_t $tmp308 = param0.value;
int64_t $tmp309 = param1.value;
int64_t $tmp310 = ((int64_t) $tmp308) | $tmp309;
frost$core$Int64 $tmp311 = (frost$core$Int64) {$tmp310};
return $tmp311;

}
frost$core$Int frost$core$UInt8$$BOR$frost$core$Int$R$frost$core$Int(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:490
uint8_t $tmp312 = param0.value;
int64_t $tmp313 = param1.value;
int64_t $tmp314 = ((int64_t) $tmp312) | $tmp313;
frost$core$Int $tmp315 = (frost$core$Int) {$tmp314};
return $tmp315;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:496
uint8_t $tmp316 = param0.value;
uint8_t $tmp317 = param1.value;
uint32_t $tmp318 = ((uint32_t) $tmp316) | ((uint32_t) $tmp317);
frost$core$UInt32 $tmp319 = (frost$core$UInt32) {$tmp318};
return $tmp319;

}
frost$core$UInt8 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:501
uint8_t $tmp320 = param0.value;
uint8_t $tmp321 = param1.value;
uint8_t $tmp322 = $tmp320 | $tmp321;
frost$core$UInt8 $tmp323 = (frost$core$UInt8) {$tmp322};
return $tmp323;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:507
uint8_t $tmp324 = param0.value;
uint16_t $tmp325 = param1.value;
uint32_t $tmp326 = ((uint32_t) $tmp324) | ((uint32_t) $tmp325);
frost$core$UInt32 $tmp327 = (frost$core$UInt32) {$tmp326};
return $tmp327;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:513
uint8_t $tmp328 = param0.value;
uint32_t $tmp329 = param1.value;
uint32_t $tmp330 = ((uint32_t) $tmp328) | $tmp329;
frost$core$UInt32 $tmp331 = (frost$core$UInt32) {$tmp330};
return $tmp331;

}
frost$core$UInt64 frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:519
uint8_t $tmp332 = param0.value;
uint64_t $tmp333 = param1.value;
uint64_t $tmp334 = ((uint64_t) $tmp332) | $tmp333;
frost$core$UInt64 $tmp335 = (frost$core$UInt64) {$tmp334};
return $tmp335;

}
frost$core$UInt frost$core$UInt8$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:525
uint8_t $tmp336 = param0.value;
uint64_t $tmp337 = param1.value;
uint64_t $tmp338 = ((uint64_t) $tmp336) | $tmp337;
frost$core$UInt $tmp339 = (frost$core$UInt) {$tmp338};
return $tmp339;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:531
uint8_t $tmp340 = param0.value;
int8_t $tmp341 = param1.value;
int32_t $tmp342 = ((int32_t) $tmp340) ^ ((int32_t) $tmp341);
frost$core$Int32 $tmp343 = (frost$core$Int32) {$tmp342};
return $tmp343;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:537
uint8_t $tmp344 = param0.value;
int16_t $tmp345 = param1.value;
int32_t $tmp346 = ((int32_t) $tmp344) ^ ((int32_t) $tmp345);
frost$core$Int32 $tmp347 = (frost$core$Int32) {$tmp346};
return $tmp347;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:543
uint8_t $tmp348 = param0.value;
int32_t $tmp349 = param1.value;
int32_t $tmp350 = ((int32_t) $tmp348) ^ $tmp349;
frost$core$Int32 $tmp351 = (frost$core$Int32) {$tmp350};
return $tmp351;

}
frost$core$Int64 frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:549
uint8_t $tmp352 = param0.value;
int64_t $tmp353 = param1.value;
int64_t $tmp354 = ((int64_t) $tmp352) ^ $tmp353;
frost$core$Int64 $tmp355 = (frost$core$Int64) {$tmp354};
return $tmp355;

}
frost$core$Int frost$core$UInt8$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:555
uint8_t $tmp356 = param0.value;
int64_t $tmp357 = param1.value;
int64_t $tmp358 = ((int64_t) $tmp356) ^ $tmp357;
frost$core$Int $tmp359 = (frost$core$Int) {$tmp358};
return $tmp359;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:561
uint8_t $tmp360 = param0.value;
uint8_t $tmp361 = param1.value;
uint32_t $tmp362 = ((uint32_t) $tmp360) ^ ((uint32_t) $tmp361);
frost$core$UInt32 $tmp363 = (frost$core$UInt32) {$tmp362};
return $tmp363;

}
frost$core$UInt8 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:566
uint8_t $tmp364 = param0.value;
uint8_t $tmp365 = param1.value;
uint8_t $tmp366 = $tmp364 ^ $tmp365;
frost$core$UInt8 $tmp367 = (frost$core$UInt8) {$tmp366};
return $tmp367;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:572
uint8_t $tmp368 = param0.value;
uint16_t $tmp369 = param1.value;
uint32_t $tmp370 = ((uint32_t) $tmp368) ^ ((uint32_t) $tmp369);
frost$core$UInt32 $tmp371 = (frost$core$UInt32) {$tmp370};
return $tmp371;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:578
uint8_t $tmp372 = param0.value;
uint32_t $tmp373 = param1.value;
uint32_t $tmp374 = ((uint32_t) $tmp372) ^ $tmp373;
frost$core$UInt32 $tmp375 = (frost$core$UInt32) {$tmp374};
return $tmp375;

}
frost$core$UInt64 frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:584
uint8_t $tmp376 = param0.value;
uint64_t $tmp377 = param1.value;
uint64_t $tmp378 = ((uint64_t) $tmp376) ^ $tmp377;
frost$core$UInt64 $tmp379 = (frost$core$UInt64) {$tmp378};
return $tmp379;

}
frost$core$UInt frost$core$UInt8$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:590
uint8_t $tmp380 = param0.value;
uint64_t $tmp381 = param1.value;
uint64_t $tmp382 = ((uint64_t) $tmp380) ^ $tmp381;
frost$core$UInt $tmp383 = (frost$core$UInt) {$tmp382};
return $tmp383;

}
frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
uint8_t $tmp384 = param0.value;
uint8_t $tmp385 = param1.value;
uint32_t $tmp386 = ((uint32_t) $tmp384) << ((uint32_t) $tmp385);
frost$core$UInt32 $tmp387 = (frost$core$UInt32) {$tmp386};
return $tmp387;

}
frost$core$UInt8 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:601
uint8_t $tmp388 = param0.value;
uint8_t $tmp389 = param1.value;
uint8_t $tmp390 = $tmp388 << $tmp389;
frost$core$UInt8 $tmp391 = (frost$core$UInt8) {$tmp390};
return $tmp391;

}
frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:607
uint8_t $tmp392 = param0.value;
uint8_t $tmp393 = param1.value;
uint32_t $tmp394 = ((uint32_t) $tmp392) >> ((uint32_t) $tmp393);
frost$core$UInt32 $tmp395 = (frost$core$UInt32) {$tmp394};
return $tmp395;

}
frost$core$UInt8 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:612
uint8_t $tmp396 = param0.value;
uint8_t $tmp397 = param1.value;
uint8_t $tmp398 = $tmp396 >> $tmp397;
frost$core$UInt8 $tmp399 = (frost$core$UInt8) {$tmp398};
return $tmp399;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:618
uint8_t $tmp400 = param0.value;
int8_t $tmp401 = param1.value;
bool $tmp402 = ((int16_t) $tmp400) == ((int16_t) $tmp401);
frost$core$Bit $tmp403 = (frost$core$Bit) {$tmp402};
return $tmp403;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:624
uint8_t $tmp404 = param0.value;
int16_t $tmp405 = param1.value;
bool $tmp406 = ((int32_t) $tmp404) == ((int32_t) $tmp405);
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406};
return $tmp407;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:630
uint8_t $tmp408 = param0.value;
int32_t $tmp409 = param1.value;
bool $tmp410 = ((int64_t) $tmp408) == ((int64_t) $tmp409);
frost$core$Bit $tmp411 = (frost$core$Bit) {$tmp410};
return $tmp411;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:636
uint8_t $tmp412 = param0.value;
int64_t $tmp413 = param1.value;
bool $tmp414 = ((int64_t) $tmp412) == ((int64_t) $tmp413);
frost$core$Bit $tmp415 = (frost$core$Bit) {$tmp414};
return $tmp415;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
uint8_t $tmp416 = param0.value;
uint8_t $tmp417 = param1.value;
bool $tmp418 = $tmp416 == $tmp417;
frost$core$Bit $tmp419 = (frost$core$Bit) {$tmp418};
return $tmp419;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:649
uint8_t $tmp420 = param0.value;
uint16_t $tmp421 = param1.value;
bool $tmp422 = ((uint16_t) $tmp420) == $tmp421;
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
return $tmp423;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:655
uint8_t $tmp424 = param0.value;
uint32_t $tmp425 = param1.value;
bool $tmp426 = ((uint32_t) $tmp424) == $tmp425;
frost$core$Bit $tmp427 = (frost$core$Bit) {$tmp426};
return $tmp427;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:661
uint8_t $tmp428 = param0.value;
uint64_t $tmp429 = param1.value;
bool $tmp430 = ((uint64_t) $tmp428) == $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
return $tmp431;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:667
uint8_t $tmp432 = param0.value;
uint64_t $tmp433 = param1.value;
bool $tmp434 = ((uint64_t) $tmp432) == $tmp433;
frost$core$Bit $tmp435 = (frost$core$Bit) {$tmp434};
return $tmp435;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:673
uint8_t $tmp436 = param0.value;
int8_t $tmp437 = param1.value;
bool $tmp438 = ((int16_t) $tmp436) != ((int16_t) $tmp437);
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
return $tmp439;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:679
uint8_t $tmp440 = param0.value;
int16_t $tmp441 = param1.value;
bool $tmp442 = ((int32_t) $tmp440) != ((int32_t) $tmp441);
frost$core$Bit $tmp443 = (frost$core$Bit) {$tmp442};
return $tmp443;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:685
uint8_t $tmp444 = param0.value;
int32_t $tmp445 = param1.value;
bool $tmp446 = ((int64_t) $tmp444) != ((int64_t) $tmp445);
frost$core$Bit $tmp447 = (frost$core$Bit) {$tmp446};
return $tmp447;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:691
uint8_t $tmp448 = param0.value;
int64_t $tmp449 = param1.value;
bool $tmp450 = ((int64_t) $tmp448) != ((int64_t) $tmp449);
frost$core$Bit $tmp451 = (frost$core$Bit) {$tmp450};
return $tmp451;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:698
uint8_t $tmp452 = param0.value;
uint8_t $tmp453 = param1.value;
bool $tmp454 = $tmp452 != $tmp453;
frost$core$Bit $tmp455 = (frost$core$Bit) {$tmp454};
return $tmp455;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:704
uint8_t $tmp456 = param0.value;
uint16_t $tmp457 = param1.value;
bool $tmp458 = ((uint16_t) $tmp456) != $tmp457;
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
return $tmp459;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:710
uint8_t $tmp460 = param0.value;
uint32_t $tmp461 = param1.value;
bool $tmp462 = ((uint32_t) $tmp460) != $tmp461;
frost$core$Bit $tmp463 = (frost$core$Bit) {$tmp462};
return $tmp463;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:716
uint8_t $tmp464 = param0.value;
uint64_t $tmp465 = param1.value;
bool $tmp466 = ((uint64_t) $tmp464) != $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
return $tmp467;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:722
uint8_t $tmp468 = param0.value;
uint64_t $tmp469 = param1.value;
bool $tmp470 = ((uint64_t) $tmp468) != $tmp469;
frost$core$Bit $tmp471 = (frost$core$Bit) {$tmp470};
return $tmp471;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:728
uint8_t $tmp472 = param0.value;
int8_t $tmp473 = param1.value;
bool $tmp474 = ((int16_t) $tmp472) < ((int16_t) $tmp473);
frost$core$Bit $tmp475 = (frost$core$Bit) {$tmp474};
return $tmp475;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:734
uint8_t $tmp476 = param0.value;
int16_t $tmp477 = param1.value;
bool $tmp478 = ((int32_t) $tmp476) < ((int32_t) $tmp477);
frost$core$Bit $tmp479 = (frost$core$Bit) {$tmp478};
return $tmp479;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:740
uint8_t $tmp480 = param0.value;
int32_t $tmp481 = param1.value;
bool $tmp482 = ((int64_t) $tmp480) < ((int64_t) $tmp481);
frost$core$Bit $tmp483 = (frost$core$Bit) {$tmp482};
return $tmp483;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:746
uint8_t $tmp484 = param0.value;
int64_t $tmp485 = param1.value;
bool $tmp486 = ((int64_t) $tmp484) < ((int64_t) $tmp485);
frost$core$Bit $tmp487 = (frost$core$Bit) {$tmp486};
return $tmp487;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:753
uint8_t $tmp488 = param0.value;
uint8_t $tmp489 = param1.value;
bool $tmp490 = $tmp488 < $tmp489;
frost$core$Bit $tmp491 = (frost$core$Bit) {$tmp490};
return $tmp491;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:759
uint8_t $tmp492 = param0.value;
uint16_t $tmp493 = param1.value;
bool $tmp494 = ((uint16_t) $tmp492) < $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
return $tmp495;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:765
uint8_t $tmp496 = param0.value;
uint32_t $tmp497 = param1.value;
bool $tmp498 = ((uint32_t) $tmp496) < $tmp497;
frost$core$Bit $tmp499 = (frost$core$Bit) {$tmp498};
return $tmp499;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:771
uint8_t $tmp500 = param0.value;
uint64_t $tmp501 = param1.value;
bool $tmp502 = ((uint64_t) $tmp500) < $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
return $tmp503;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:777
uint8_t $tmp504 = param0.value;
uint64_t $tmp505 = param1.value;
bool $tmp506 = ((uint64_t) $tmp504) < $tmp505;
frost$core$Bit $tmp507 = (frost$core$Bit) {$tmp506};
return $tmp507;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:783
uint8_t $tmp508 = param0.value;
int8_t $tmp509 = param1.value;
bool $tmp510 = ((int16_t) $tmp508) > ((int16_t) $tmp509);
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
return $tmp511;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:789
uint8_t $tmp512 = param0.value;
int16_t $tmp513 = param1.value;
bool $tmp514 = ((int32_t) $tmp512) > ((int32_t) $tmp513);
frost$core$Bit $tmp515 = (frost$core$Bit) {$tmp514};
return $tmp515;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:795
uint8_t $tmp516 = param0.value;
int32_t $tmp517 = param1.value;
bool $tmp518 = ((int64_t) $tmp516) > ((int64_t) $tmp517);
frost$core$Bit $tmp519 = (frost$core$Bit) {$tmp518};
return $tmp519;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:801
uint8_t $tmp520 = param0.value;
int64_t $tmp521 = param1.value;
bool $tmp522 = ((int64_t) $tmp520) > ((int64_t) $tmp521);
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
return $tmp523;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:808
uint8_t $tmp524 = param0.value;
uint8_t $tmp525 = param1.value;
bool $tmp526 = $tmp524 > $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
return $tmp527;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:814
uint8_t $tmp528 = param0.value;
uint16_t $tmp529 = param1.value;
bool $tmp530 = ((uint16_t) $tmp528) > $tmp529;
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530};
return $tmp531;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:820
uint8_t $tmp532 = param0.value;
uint32_t $tmp533 = param1.value;
bool $tmp534 = ((uint32_t) $tmp532) > $tmp533;
frost$core$Bit $tmp535 = (frost$core$Bit) {$tmp534};
return $tmp535;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:826
uint8_t $tmp536 = param0.value;
uint64_t $tmp537 = param1.value;
bool $tmp538 = ((uint64_t) $tmp536) > $tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
return $tmp539;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:832
uint8_t $tmp540 = param0.value;
uint64_t $tmp541 = param1.value;
bool $tmp542 = ((uint64_t) $tmp540) > $tmp541;
frost$core$Bit $tmp543 = (frost$core$Bit) {$tmp542};
return $tmp543;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:838
uint8_t $tmp544 = param0.value;
int8_t $tmp545 = param1.value;
bool $tmp546 = ((int16_t) $tmp544) >= ((int16_t) $tmp545);
frost$core$Bit $tmp547 = (frost$core$Bit) {$tmp546};
return $tmp547;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:844
uint8_t $tmp548 = param0.value;
int16_t $tmp549 = param1.value;
bool $tmp550 = ((int32_t) $tmp548) >= ((int32_t) $tmp549);
frost$core$Bit $tmp551 = (frost$core$Bit) {$tmp550};
return $tmp551;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:850
uint8_t $tmp552 = param0.value;
int32_t $tmp553 = param1.value;
bool $tmp554 = ((int64_t) $tmp552) >= ((int64_t) $tmp553);
frost$core$Bit $tmp555 = (frost$core$Bit) {$tmp554};
return $tmp555;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:856
uint8_t $tmp556 = param0.value;
int64_t $tmp557 = param1.value;
bool $tmp558 = ((int64_t) $tmp556) >= ((int64_t) $tmp557);
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558};
return $tmp559;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:863
uint8_t $tmp560 = param0.value;
uint8_t $tmp561 = param1.value;
bool $tmp562 = $tmp560 >= $tmp561;
frost$core$Bit $tmp563 = (frost$core$Bit) {$tmp562};
return $tmp563;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:869
uint8_t $tmp564 = param0.value;
uint16_t $tmp565 = param1.value;
bool $tmp566 = ((uint16_t) $tmp564) >= $tmp565;
frost$core$Bit $tmp567 = (frost$core$Bit) {$tmp566};
return $tmp567;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:875
uint8_t $tmp568 = param0.value;
uint32_t $tmp569 = param1.value;
bool $tmp570 = ((uint32_t) $tmp568) >= $tmp569;
frost$core$Bit $tmp571 = (frost$core$Bit) {$tmp570};
return $tmp571;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:881
uint8_t $tmp572 = param0.value;
uint64_t $tmp573 = param1.value;
bool $tmp574 = ((uint64_t) $tmp572) >= $tmp573;
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
return $tmp575;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:887
uint8_t $tmp576 = param0.value;
uint64_t $tmp577 = param1.value;
bool $tmp578 = ((uint64_t) $tmp576) >= $tmp577;
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578};
return $tmp579;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:893
uint8_t $tmp580 = param0.value;
int8_t $tmp581 = param1.value;
bool $tmp582 = ((int16_t) $tmp580) <= ((int16_t) $tmp581);
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
return $tmp583;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:899
uint8_t $tmp584 = param0.value;
int16_t $tmp585 = param1.value;
bool $tmp586 = ((int32_t) $tmp584) <= ((int32_t) $tmp585);
frost$core$Bit $tmp587 = (frost$core$Bit) {$tmp586};
return $tmp587;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:905
uint8_t $tmp588 = param0.value;
int32_t $tmp589 = param1.value;
bool $tmp590 = ((int64_t) $tmp588) <= ((int64_t) $tmp589);
frost$core$Bit $tmp591 = (frost$core$Bit) {$tmp590};
return $tmp591;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:911
uint8_t $tmp592 = param0.value;
int64_t $tmp593 = param1.value;
bool $tmp594 = ((int64_t) $tmp592) <= ((int64_t) $tmp593);
frost$core$Bit $tmp595 = (frost$core$Bit) {$tmp594};
return $tmp595;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:918
uint8_t $tmp596 = param0.value;
uint8_t $tmp597 = param1.value;
bool $tmp598 = $tmp596 <= $tmp597;
frost$core$Bit $tmp599 = (frost$core$Bit) {$tmp598};
return $tmp599;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:924
uint8_t $tmp600 = param0.value;
uint16_t $tmp601 = param1.value;
bool $tmp602 = ((uint16_t) $tmp600) <= $tmp601;
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp602};
return $tmp603;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:930
uint8_t $tmp604 = param0.value;
uint32_t $tmp605 = param1.value;
bool $tmp606 = ((uint32_t) $tmp604) <= $tmp605;
frost$core$Bit $tmp607 = (frost$core$Bit) {$tmp606};
return $tmp607;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:936
uint8_t $tmp608 = param0.value;
uint64_t $tmp609 = param1.value;
bool $tmp610 = ((uint64_t) $tmp608) <= $tmp609;
frost$core$Bit $tmp611 = (frost$core$Bit) {$tmp610};
return $tmp611;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:942
uint8_t $tmp612 = param0.value;
uint64_t $tmp613 = param1.value;
bool $tmp614 = ((uint64_t) $tmp612) <= $tmp613;
frost$core$Bit $tmp615 = (frost$core$Bit) {$tmp614};
return $tmp615;

}
frost$core$Int16 frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:948
uint8_t $tmp616 = param0.value;
int8_t $tmp617 = param1.value;
bool $tmp618 = ((int16_t) $tmp616) < ((int16_t) $tmp617);
frost$core$Bit $tmp619 = (frost$core$Bit) {$tmp618};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:949
uint8_t $tmp621 = param0.value;
frost$core$Int16 $tmp622 = (frost$core$Int16) {((int16_t) $tmp621)};
return $tmp622;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:951
int8_t $tmp623 = param1.value;
frost$core$Int16 $tmp624 = (frost$core$Int16) {((int16_t) $tmp623)};
return $tmp624;

}
frost$core$Int32 frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:957
uint8_t $tmp625 = param0.value;
int16_t $tmp626 = param1.value;
bool $tmp627 = ((int32_t) $tmp625) < ((int32_t) $tmp626);
frost$core$Bit $tmp628 = (frost$core$Bit) {$tmp627};
bool $tmp629 = $tmp628.value;
if ($tmp629) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:958
uint8_t $tmp630 = param0.value;
frost$core$Int32 $tmp631 = (frost$core$Int32) {((int32_t) $tmp630)};
return $tmp631;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:960
int16_t $tmp632 = param1.value;
frost$core$Int32 $tmp633 = (frost$core$Int32) {((int32_t) $tmp632)};
return $tmp633;

}
frost$core$Int64 frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:966
uint8_t $tmp634 = param0.value;
int32_t $tmp635 = param1.value;
bool $tmp636 = ((int64_t) $tmp634) < ((int64_t) $tmp635);
frost$core$Bit $tmp637 = (frost$core$Bit) {$tmp636};
bool $tmp638 = $tmp637.value;
if ($tmp638) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:967
uint8_t $tmp639 = param0.value;
frost$core$Int64 $tmp640 = (frost$core$Int64) {((int64_t) $tmp639)};
return $tmp640;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:969
int32_t $tmp641 = param1.value;
frost$core$Int64 $tmp642 = (frost$core$Int64) {((int64_t) $tmp641)};
return $tmp642;

}
frost$core$Int64 frost$core$UInt8$min$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:976
uint8_t $tmp643 = param0.value;
int64_t $tmp644 = param1.value;
bool $tmp645 = ((int64_t) $tmp643) < ((int64_t) $tmp644);
frost$core$Bit $tmp646 = (frost$core$Bit) {$tmp645};
bool $tmp647 = $tmp646.value;
if ($tmp647) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:977
uint8_t $tmp648 = param0.value;
frost$core$Int64 $tmp649 = (frost$core$Int64) {((int64_t) $tmp648)};
return $tmp649;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:979
int64_t $tmp650 = param1.value;
frost$core$Int64 $tmp651 = (frost$core$Int64) {((int64_t) $tmp650)};
return $tmp651;

}
frost$core$UInt8 frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:985
uint8_t $tmp652 = param0.value;
uint8_t $tmp653 = param1.value;
bool $tmp654 = $tmp652 < $tmp653;
frost$core$Bit $tmp655 = (frost$core$Bit) {$tmp654};
bool $tmp656 = $tmp655.value;
if ($tmp656) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:986
uint8_t $tmp657 = param0.value;
frost$core$UInt8 $tmp658 = (frost$core$UInt8) {$tmp657};
return $tmp658;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:988
uint8_t $tmp659 = param1.value;
frost$core$UInt8 $tmp660 = (frost$core$UInt8) {$tmp659};
return $tmp660;

}
frost$core$UInt16 frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:994
uint8_t $tmp661 = param0.value;
uint16_t $tmp662 = param1.value;
bool $tmp663 = ((uint16_t) $tmp661) < $tmp662;
frost$core$Bit $tmp664 = (frost$core$Bit) {$tmp663};
bool $tmp665 = $tmp664.value;
if ($tmp665) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:995
uint8_t $tmp666 = param0.value;
frost$core$UInt16 $tmp667 = (frost$core$UInt16) {((uint16_t) $tmp666)};
return $tmp667;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:997
uint16_t $tmp668 = param1.value;
frost$core$UInt16 $tmp669 = (frost$core$UInt16) {$tmp668};
return $tmp669;

}
frost$core$UInt32 frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1003
uint8_t $tmp670 = param0.value;
uint32_t $tmp671 = param1.value;
bool $tmp672 = ((uint32_t) $tmp670) < $tmp671;
frost$core$Bit $tmp673 = (frost$core$Bit) {$tmp672};
bool $tmp674 = $tmp673.value;
if ($tmp674) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1004
uint8_t $tmp675 = param0.value;
frost$core$UInt32 $tmp676 = (frost$core$UInt32) {((uint32_t) $tmp675)};
return $tmp676;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1006
uint32_t $tmp677 = param1.value;
frost$core$UInt32 $tmp678 = (frost$core$UInt32) {$tmp677};
return $tmp678;

}
frost$core$UInt64 frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1012
uint8_t $tmp679 = param0.value;
uint64_t $tmp680 = param1.value;
bool $tmp681 = ((uint64_t) $tmp679) < $tmp680;
frost$core$Bit $tmp682 = (frost$core$Bit) {$tmp681};
bool $tmp683 = $tmp682.value;
if ($tmp683) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1013
uint8_t $tmp684 = param0.value;
frost$core$UInt64 $tmp685 = (frost$core$UInt64) {((uint64_t) $tmp684)};
return $tmp685;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1015
uint64_t $tmp686 = param1.value;
frost$core$UInt64 $tmp687 = (frost$core$UInt64) {$tmp686};
return $tmp687;

}
frost$core$UInt frost$core$UInt8$min$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1021
uint8_t $tmp688 = param0.value;
uint64_t $tmp689 = param1.value;
bool $tmp690 = ((uint64_t) $tmp688) < $tmp689;
frost$core$Bit $tmp691 = (frost$core$Bit) {$tmp690};
bool $tmp692 = $tmp691.value;
if ($tmp692) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1022
uint8_t $tmp693 = param0.value;
frost$core$UInt $tmp694 = (frost$core$UInt) {((uint64_t) $tmp693)};
return $tmp694;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1024
uint64_t $tmp695 = param1.value;
frost$core$UInt $tmp696 = (frost$core$UInt) {$tmp695};
return $tmp696;

}
frost$core$Int16 frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16(frost$core$UInt8 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1030
uint8_t $tmp697 = param0.value;
int8_t $tmp698 = param1.value;
bool $tmp699 = ((int16_t) $tmp697) > ((int16_t) $tmp698);
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1031
uint8_t $tmp702 = param0.value;
frost$core$Int16 $tmp703 = (frost$core$Int16) {((int16_t) $tmp702)};
return $tmp703;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1033
int8_t $tmp704 = param1.value;
frost$core$Int16 $tmp705 = (frost$core$Int16) {((int16_t) $tmp704)};
return $tmp705;

}
frost$core$Int32 frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1039
uint8_t $tmp706 = param0.value;
int16_t $tmp707 = param1.value;
bool $tmp708 = ((int32_t) $tmp706) > ((int32_t) $tmp707);
frost$core$Bit $tmp709 = (frost$core$Bit) {$tmp708};
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1040
uint8_t $tmp711 = param0.value;
frost$core$Int32 $tmp712 = (frost$core$Int32) {((int32_t) $tmp711)};
return $tmp712;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1042
int16_t $tmp713 = param1.value;
frost$core$Int32 $tmp714 = (frost$core$Int32) {((int32_t) $tmp713)};
return $tmp714;

}
frost$core$Int64 frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1048
uint8_t $tmp715 = param0.value;
int32_t $tmp716 = param1.value;
bool $tmp717 = ((int64_t) $tmp715) > ((int64_t) $tmp716);
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1049
uint8_t $tmp720 = param0.value;
frost$core$Int64 $tmp721 = (frost$core$Int64) {((int64_t) $tmp720)};
return $tmp721;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1051
int32_t $tmp722 = param1.value;
frost$core$Int64 $tmp723 = (frost$core$Int64) {((int64_t) $tmp722)};
return $tmp723;

}
frost$core$Int64 frost$core$UInt8$max$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1058
uint8_t $tmp724 = param0.value;
int64_t $tmp725 = param1.value;
bool $tmp726 = ((int64_t) $tmp724) > ((int64_t) $tmp725);
frost$core$Bit $tmp727 = (frost$core$Bit) {$tmp726};
bool $tmp728 = $tmp727.value;
if ($tmp728) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1059
uint8_t $tmp729 = param0.value;
frost$core$Int64 $tmp730 = (frost$core$Int64) {((int64_t) $tmp729)};
return $tmp730;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1061
int64_t $tmp731 = param1.value;
frost$core$Int64 $tmp732 = (frost$core$Int64) {((int64_t) $tmp731)};
return $tmp732;

}
frost$core$UInt8 frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1067
uint8_t $tmp733 = param0.value;
uint8_t $tmp734 = param1.value;
bool $tmp735 = $tmp733 > $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1068
uint8_t $tmp738 = param0.value;
frost$core$UInt8 $tmp739 = (frost$core$UInt8) {$tmp738};
return $tmp739;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1070
uint8_t $tmp740 = param1.value;
frost$core$UInt8 $tmp741 = (frost$core$UInt8) {$tmp740};
return $tmp741;

}
frost$core$UInt16 frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt8 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1076
uint8_t $tmp742 = param0.value;
uint16_t $tmp743 = param1.value;
bool $tmp744 = ((uint16_t) $tmp742) > $tmp743;
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1077
uint8_t $tmp747 = param0.value;
frost$core$UInt16 $tmp748 = (frost$core$UInt16) {((uint16_t) $tmp747)};
return $tmp748;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1079
uint16_t $tmp749 = param1.value;
frost$core$UInt16 $tmp750 = (frost$core$UInt16) {$tmp749};
return $tmp750;

}
frost$core$UInt32 frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1085
uint8_t $tmp751 = param0.value;
uint32_t $tmp752 = param1.value;
bool $tmp753 = ((uint32_t) $tmp751) > $tmp752;
frost$core$Bit $tmp754 = (frost$core$Bit) {$tmp753};
bool $tmp755 = $tmp754.value;
if ($tmp755) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1086
uint8_t $tmp756 = param0.value;
frost$core$UInt32 $tmp757 = (frost$core$UInt32) {((uint32_t) $tmp756)};
return $tmp757;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1088
uint32_t $tmp758 = param1.value;
frost$core$UInt32 $tmp759 = (frost$core$UInt32) {$tmp758};
return $tmp759;

}
frost$core$UInt64 frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1094
uint8_t $tmp760 = param0.value;
uint64_t $tmp761 = param1.value;
bool $tmp762 = ((uint64_t) $tmp760) > $tmp761;
frost$core$Bit $tmp763 = (frost$core$Bit) {$tmp762};
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1095
uint8_t $tmp765 = param0.value;
frost$core$UInt64 $tmp766 = (frost$core$UInt64) {((uint64_t) $tmp765)};
return $tmp766;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1097
uint64_t $tmp767 = param1.value;
frost$core$UInt64 $tmp768 = (frost$core$UInt64) {$tmp767};
return $tmp768;

}
frost$core$UInt frost$core$UInt8$max$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1103
uint8_t $tmp769 = param0.value;
uint64_t $tmp770 = param1.value;
bool $tmp771 = ((uint64_t) $tmp769) > $tmp770;
frost$core$Bit $tmp772 = (frost$core$Bit) {$tmp771};
bool $tmp773 = $tmp772.value;
if ($tmp773) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1104
uint8_t $tmp774 = param0.value;
frost$core$UInt $tmp775 = (frost$core$UInt) {((uint64_t) $tmp774)};
return $tmp775;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1106
uint64_t $tmp776 = param1.value;
frost$core$UInt $tmp777 = (frost$core$UInt) {$tmp776};
return $tmp777;

}
frost$collections$ListView* frost$core$UInt8$$IDX$frost$core$Range$LTfrost$core$UInt8$GT$R$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$core$Range$LTfrost$core$UInt8$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1111
FROST_ASSERT(32 == sizeof(org$frostlang$frost$UInt8List));
org$frostlang$frost$UInt8List* $tmp778 = (org$frostlang$frost$UInt8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt8List$class);
frost$core$UInt8 $tmp779 = param0.min;
frost$core$UInt8 $tmp780 = param0.max;
frost$core$UInt8 $tmp781 = (frost$core$UInt8) {1u};
frost$core$Bit $tmp782 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT $tmp783 = frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$init$frost$core$UInt8$frost$core$UInt8$frost$core$UInt8$frost$core$Bit($tmp779, $tmp780, $tmp781, $tmp782);
org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT($tmp778, $tmp783);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp778)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp778));
return ((frost$collections$ListView*) $tmp778);

}
frost$collections$ListView* frost$core$UInt8$$IDX$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1116
FROST_ASSERT(32 == sizeof(org$frostlang$frost$UInt8List));
org$frostlang$frost$UInt8List* $tmp784 = (org$frostlang$frost$UInt8List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt8List$class);
org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT($tmp784, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp784)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp784));
return ((frost$collections$ListView*) $tmp784);

}
frost$core$Bit frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

frost$core$Int $tmp785 = (frost$core$Int) {0u};
int64_t $tmp786 = param1.value;
int64_t $tmp787 = $tmp785.value;
bool $tmp788 = $tmp786 >= $tmp787;
frost$core$Bit $tmp789 = (frost$core$Bit) {$tmp788};
bool $tmp790 = $tmp789.value;
if ($tmp790) goto block3; else goto block2;
block3:;
frost$core$UInt8$wrapper* $tmp791;
$tmp791 = (frost$core$UInt8$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$UInt8$wrapperclass);
$tmp791->value = param0;
ITable* $tmp792 = ((frost$collections$CollectionView*) $tmp791)->$class->itable;
while ($tmp792->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp792 = $tmp792->next;
}
$fn794 $tmp793 = $tmp792->methods[0];
frost$core$Int $tmp795 = $tmp793(((frost$collections$CollectionView*) $tmp791));
int64_t $tmp796 = param1.value;
int64_t $tmp797 = $tmp795.value;
bool $tmp798 = $tmp796 < $tmp797;
frost$core$Bit $tmp799 = (frost$core$Bit) {$tmp798};
bool $tmp800 = $tmp799.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp791)));
if ($tmp800) goto block1; else goto block2;
block2:;
frost$core$Int $tmp801 = (frost$core$Int) {1121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s802, $tmp801, &$s803);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1122
frost$core$Int $tmp804 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt8.frost:1122:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
int64_t $tmp805 = $tmp804.value;
int64_t $tmp806 = param1.value;
int64_t $tmp807 = $tmp805 << $tmp806;
frost$core$Int $tmp808 = (frost$core$Int) {$tmp807};
// begin inline call to function frost.core.UInt8.&&(other:frost.core.Int):frost.core.Int from UInt8.frost:1122:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:425
uint8_t $tmp809 = param0.value;
int64_t $tmp810 = $tmp808.value;
int64_t $tmp811 = ((int64_t) $tmp809) & $tmp810;
frost$core$Int $tmp812 = (frost$core$Int) {$tmp811};
frost$core$Int $tmp813 = (frost$core$Int) {0u};
int64_t $tmp814 = $tmp812.value;
int64_t $tmp815 = $tmp813.value;
bool $tmp816 = $tmp814 != $tmp815;
frost$core$Bit $tmp817 = (frost$core$Bit) {$tmp816};
return $tmp817;

}
frost$core$Int frost$core$UInt8$get_count$R$frost$core$Int(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1128
frost$core$Int $tmp818 = (frost$core$Int) {8u};
return $tmp818;

}
frost$collections$Iterator* frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1138
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp819 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.UInt8.get_asUInt64():frost.core.UInt64 from UInt8.frost:1138:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1208
uint8_t $tmp820 = param0.value;
frost$core$UInt64 $tmp821 = (frost$core$UInt64) {((uint64_t) $tmp820)};
frost$core$UInt64 $tmp822 = (frost$core$UInt64) {128u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp819, $tmp821, $tmp822);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp819)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp819));
return ((frost$collections$Iterator*) $tmp819);

}
frost$core$Int frost$core$UInt8$get_hash$R$frost$core$Int(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1143
uint8_t $tmp823 = param0.value;
frost$core$Int $tmp824 = (frost$core$Int) {((int64_t) $tmp823)};
return $tmp824;

}
frost$core$UInt8$nullable frost$core$UInt8$parse$frost$core$String$frost$core$Int$R$frost$core$UInt8$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$Int $tmp825 = (frost$core$Int) {2u};
int64_t $tmp826 = param1.value;
int64_t $tmp827 = $tmp825.value;
bool $tmp828 = $tmp826 >= $tmp827;
frost$core$Bit $tmp829 = (frost$core$Bit) {$tmp828};
bool $tmp830 = $tmp829.value;
if ($tmp830) goto block3; else goto block2;
block3:;
frost$core$Int $tmp831 = (frost$core$Int) {36u};
int64_t $tmp832 = param1.value;
int64_t $tmp833 = $tmp831.value;
bool $tmp834 = $tmp832 <= $tmp833;
frost$core$Bit $tmp835 = (frost$core$Bit) {$tmp834};
bool $tmp836 = $tmp835.value;
if ($tmp836) goto block1; else goto block2;
block2:;
frost$core$Int $tmp837 = (frost$core$Int) {1149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s838, $tmp837, &$s839);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1150
frost$core$UInt64$nullable $tmp840 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp840;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1151
frost$core$UInt64$nullable $tmp841 = *(&local0);
frost$core$Bit $tmp842 = (frost$core$Bit) {!$tmp841.nonnull};
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1152
return ((frost$core$UInt8$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1154
frost$core$UInt64$nullable $tmp844 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asUInt8():frost.core.UInt8 from UInt8.frost:1154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:580
uint64_t $tmp845 = ((frost$core$UInt64) $tmp844.value).value;
frost$core$UInt8 $tmp846 = (frost$core$UInt8) {((uint8_t) $tmp845)};
return ((frost$core$UInt8$nullable) { $tmp846, true });

}
frost$core$Int frost$core$UInt8$get_asInt$R$frost$core$Int(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1160
uint8_t $tmp847 = param0.value;
frost$core$Int $tmp848 = (frost$core$Int) {((int64_t) $tmp847)};
return $tmp848;

}
frost$core$Int8 frost$core$UInt8$get_asInt8$R$frost$core$Int8(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1166
uint8_t $tmp849 = param0.value;
frost$core$Int8 $tmp850 = (frost$core$Int8) {((int8_t) $tmp849)};
return $tmp850;

}
frost$core$Int16 frost$core$UInt8$get_asInt16$R$frost$core$Int16(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1172
uint8_t $tmp851 = param0.value;
frost$core$Int16 $tmp852 = (frost$core$Int16) {((int16_t) $tmp851)};
return $tmp852;

}
frost$core$Int32 frost$core$UInt8$get_asInt32$R$frost$core$Int32(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1178
uint8_t $tmp853 = param0.value;
frost$core$Int32 $tmp854 = (frost$core$Int32) {((int32_t) $tmp853)};
return $tmp854;

}
frost$core$Int64 frost$core$UInt8$get_asInt64$R$frost$core$Int64(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1184
uint8_t $tmp855 = param0.value;
frost$core$Int64 $tmp856 = (frost$core$Int64) {((int64_t) $tmp855)};
return $tmp856;

}
frost$core$UInt frost$core$UInt8$get_asUInt$R$frost$core$UInt(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1190
uint8_t $tmp857 = param0.value;
frost$core$UInt $tmp858 = (frost$core$UInt) {((uint64_t) $tmp857)};
return $tmp858;

}
frost$core$UInt16 frost$core$UInt8$get_asUInt16$R$frost$core$UInt16(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1196
uint8_t $tmp859 = param0.value;
frost$core$UInt16 $tmp860 = (frost$core$UInt16) {((uint16_t) $tmp859)};
return $tmp860;

}
frost$core$UInt32 frost$core$UInt8$get_asUInt32$R$frost$core$UInt32(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1202
uint8_t $tmp861 = param0.value;
frost$core$UInt32 $tmp862 = (frost$core$UInt32) {((uint32_t) $tmp861)};
return $tmp862;

}
frost$core$UInt64 frost$core$UInt8$get_asUInt64$R$frost$core$UInt64(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1208
uint8_t $tmp863 = param0.value;
frost$core$UInt64 $tmp864 = (frost$core$UInt64) {((uint64_t) $tmp863)};
return $tmp864;

}
frost$core$Real32 frost$core$UInt8$get_asReal32$R$frost$core$Real32(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1214
uint8_t $tmp865 = param0.value;
frost$core$Real32 $tmp866 = (frost$core$Real32) {((float) $tmp865)};
return $tmp866;

}
frost$core$Real64 frost$core$UInt8$get_asReal64$R$frost$core$Real64(frost$core$UInt8 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1220
uint8_t $tmp867 = param0.value;
frost$core$Real64 $tmp868 = (frost$core$Real64) {((double) $tmp867)};
return $tmp868;

}
frost$core$String* frost$core$UInt8$get_asString$R$frost$core$String(frost$core$UInt8 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$UInt8 local3;
frost$core$Int local4;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1226
frost$core$Int $tmp869 = (frost$core$Int) {3u};
*(&local0) = $tmp869;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1227
frost$core$Int $tmp870 = *(&local0);
frost$core$Int64 $tmp871 = frost$core$Int64$init$frost$core$Int($tmp870);
int64_t $tmp872 = $tmp871.value;
frost$core$Char8* $tmp873 = ((frost$core$Char8*) frostAlloc($tmp872 * 1));
*(&local1) = $tmp873;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1228
frost$core$Int $tmp874 = *(&local0);
frost$core$Int $tmp875 = (frost$core$Int) {1u};
int64_t $tmp876 = $tmp874.value;
int64_t $tmp877 = $tmp875.value;
int64_t $tmp878 = $tmp876 - $tmp877;
frost$core$Int $tmp879 = (frost$core$Int) {$tmp878};
*(&local2) = $tmp879;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1229
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1230
frost$core$UInt8 $tmp880 = *(&local3);
frost$core$UInt8 $tmp881 = (frost$core$UInt8) {0u};
uint8_t $tmp882 = $tmp880.value;
uint8_t $tmp883 = $tmp881.value;
bool $tmp884 = $tmp882 >= $tmp883;
frost$core$Bit $tmp885 = (frost$core$Bit) {$tmp884};
bool $tmp886 = $tmp885.value;
if ($tmp886) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1231
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1232
frost$core$Char8* $tmp887 = *(&local1);
frost$core$Int $tmp888 = *(&local2);
frost$core$Int64 $tmp889 = frost$core$Int64$init$frost$core$Int($tmp888);
frost$core$UInt8 $tmp890 = *(&local3);
frost$core$UInt8 $tmp891 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.%(other:frost.core.UInt8):frost.core.UInt32 from UInt8.frost:1232:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:301
uint8_t $tmp892 = $tmp890.value;
uint8_t $tmp893 = $tmp891.value;
uint32_t $tmp894 = ((uint32_t) $tmp892) % ((uint32_t) $tmp893);
frost$core$UInt32 $tmp895 = (frost$core$UInt32) {$tmp894};
frost$core$UInt32 $tmp896 = (frost$core$UInt32) {48u};
uint32_t $tmp897 = $tmp895.value;
uint32_t $tmp898 = $tmp896.value;
uint32_t $tmp899 = $tmp897 + $tmp898;
frost$core$UInt32 $tmp900 = (frost$core$UInt32) {$tmp899};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1232:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
uint32_t $tmp901 = $tmp900.value;
frost$core$UInt8 $tmp902 = (frost$core$UInt8) {((uint8_t) $tmp901)};
frost$core$Char8 $tmp903 = frost$core$Char8$init$frost$core$UInt8($tmp902);
int64_t $tmp904 = $tmp889.value;
$tmp887[$tmp904] = $tmp903;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1233
frost$core$UInt8 $tmp905 = *(&local3);
frost$core$UInt32 $tmp906 = frost$core$UInt32$init$frost$core$UInt8($tmp905);
frost$core$UInt32 $tmp907 = (frost$core$UInt32) {10u};
uint32_t $tmp908 = $tmp906.value;
uint32_t $tmp909 = $tmp907.value;
uint32_t $tmp910 = $tmp908 / $tmp909;
frost$core$UInt32 $tmp911 = (frost$core$UInt32) {$tmp910};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1233:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
uint32_t $tmp912 = $tmp911.value;
frost$core$UInt8 $tmp913 = (frost$core$UInt8) {((uint8_t) $tmp912)};
*(&local3) = $tmp913;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1234
frost$core$Int $tmp914 = *(&local2);
frost$core$Int $tmp915 = (frost$core$Int) {1u};
int64_t $tmp916 = $tmp914.value;
int64_t $tmp917 = $tmp915.value;
int64_t $tmp918 = $tmp916 - $tmp917;
frost$core$Int $tmp919 = (frost$core$Int) {$tmp918};
*(&local2) = $tmp919;
frost$core$UInt8 $tmp920 = *(&local3);
frost$core$UInt8 $tmp921 = (frost$core$UInt8) {0u};
uint8_t $tmp922 = $tmp920.value;
uint8_t $tmp923 = $tmp921.value;
bool $tmp924 = $tmp922 > $tmp923;
frost$core$Bit $tmp925 = (frost$core$Bit) {$tmp924};
bool $tmp926 = $tmp925.value;
if ($tmp926) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1237
frost$core$Int $tmp927 = *(&local2);
frost$core$Int $tmp928 = (frost$core$Int) {1u};
int64_t $tmp929 = $tmp927.value;
int64_t $tmp930 = $tmp928.value;
int64_t $tmp931 = $tmp929 + $tmp930;
frost$core$Int $tmp932 = (frost$core$Int) {$tmp931};
*(&local2) = $tmp932;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1240
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1241
frost$core$Char8* $tmp933 = *(&local1);
frost$core$Int $tmp934 = *(&local2);
frost$core$Int64 $tmp935 = frost$core$Int64$init$frost$core$Int($tmp934);
frost$core$UInt32 $tmp936 = (frost$core$UInt32) {48u};
frost$core$UInt8 $tmp937 = *(&local3);
frost$core$UInt8 $tmp938 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.%(other:frost.core.UInt8):frost.core.UInt32 from UInt8.frost:1241:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:301
uint8_t $tmp939 = $tmp937.value;
uint8_t $tmp940 = $tmp938.value;
uint32_t $tmp941 = ((uint32_t) $tmp939) % ((uint32_t) $tmp940);
frost$core$UInt32 $tmp942 = (frost$core$UInt32) {$tmp941};
uint32_t $tmp943 = $tmp936.value;
uint32_t $tmp944 = $tmp942.value;
uint32_t $tmp945 = $tmp943 - $tmp944;
frost$core$UInt32 $tmp946 = (frost$core$UInt32) {$tmp945};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1241:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
uint32_t $tmp947 = $tmp946.value;
frost$core$UInt8 $tmp948 = (frost$core$UInt8) {((uint8_t) $tmp947)};
frost$core$Char8 $tmp949 = frost$core$Char8$init$frost$core$UInt8($tmp948);
int64_t $tmp950 = $tmp935.value;
$tmp933[$tmp950] = $tmp949;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1242
frost$core$UInt8 $tmp951 = *(&local3);
frost$core$UInt32 $tmp952 = frost$core$UInt32$init$frost$core$UInt8($tmp951);
frost$core$UInt32 $tmp953 = (frost$core$UInt32) {10u};
uint32_t $tmp954 = $tmp952.value;
uint32_t $tmp955 = $tmp953.value;
uint32_t $tmp956 = $tmp954 / $tmp955;
frost$core$UInt32 $tmp957 = (frost$core$UInt32) {$tmp956};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1242:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
uint32_t $tmp958 = $tmp957.value;
frost$core$UInt8 $tmp959 = (frost$core$UInt8) {((uint8_t) $tmp958)};
*(&local3) = $tmp959;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1243
frost$core$Int $tmp960 = *(&local2);
frost$core$Int $tmp961 = (frost$core$Int) {1u};
int64_t $tmp962 = $tmp960.value;
int64_t $tmp963 = $tmp961.value;
int64_t $tmp964 = $tmp962 - $tmp963;
frost$core$Int $tmp965 = (frost$core$Int) {$tmp964};
*(&local2) = $tmp965;
frost$core$UInt8 $tmp966 = *(&local3);
frost$core$UInt8 $tmp967 = (frost$core$UInt8) {0u};
uint8_t $tmp968 = $tmp966.value;
uint8_t $tmp969 = $tmp967.value;
bool $tmp970 = $tmp968 < $tmp969;
frost$core$Bit $tmp971 = (frost$core$Bit) {$tmp970};
bool $tmp972 = $tmp971.value;
if ($tmp972) goto block10; else goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1246
frost$core$Char8* $tmp973 = *(&local1);
frost$core$Int $tmp974 = *(&local2);
frost$core$Int64 $tmp975 = frost$core$Int64$init$frost$core$Int($tmp974);
frost$core$UInt8 $tmp976 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp977 = frost$core$Char8$init$frost$core$UInt8($tmp976);
int64_t $tmp978 = $tmp975.value;
$tmp973[$tmp978] = $tmp977;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1248
frost$core$Int $tmp979 = *(&local0);
frost$core$Int $tmp980 = *(&local2);
int64_t $tmp981 = $tmp979.value;
int64_t $tmp982 = $tmp980.value;
int64_t $tmp983 = $tmp981 - $tmp982;
frost$core$Int $tmp984 = (frost$core$Int) {$tmp983};
*(&local4) = $tmp984;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1249
frost$core$Int $tmp985 = (frost$core$Int) {0u};
frost$core$Int $tmp986 = *(&local4);
frost$core$Bit $tmp987 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp988 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp985, $tmp986, $tmp987);
frost$core$Int $tmp989 = $tmp988.min;
*(&local5) = $tmp989;
frost$core$Int $tmp990 = $tmp988.max;
frost$core$Bit $tmp991 = $tmp988.inclusive;
bool $tmp992 = $tmp991.value;
frost$core$Int $tmp993 = (frost$core$Int) {1u};
if ($tmp992) goto block19; else goto block20;
block19:;
int64_t $tmp994 = $tmp989.value;
int64_t $tmp995 = $tmp990.value;
bool $tmp996 = $tmp994 <= $tmp995;
frost$core$Bit $tmp997 = (frost$core$Bit) {$tmp996};
bool $tmp998 = $tmp997.value;
if ($tmp998) goto block16; else goto block17;
block20:;
int64_t $tmp999 = $tmp989.value;
int64_t $tmp1000 = $tmp990.value;
bool $tmp1001 = $tmp999 < $tmp1000;
frost$core$Bit $tmp1002 = (frost$core$Bit) {$tmp1001};
bool $tmp1003 = $tmp1002.value;
if ($tmp1003) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1250
frost$core$Char8* $tmp1004 = *(&local1);
frost$core$Int $tmp1005 = *(&local5);
frost$core$Int64 $tmp1006 = frost$core$Int64$init$frost$core$Int($tmp1005);
frost$core$Char8* $tmp1007 = *(&local1);
frost$core$Int $tmp1008 = *(&local5);
frost$core$Int $tmp1009 = *(&local2);
int64_t $tmp1010 = $tmp1008.value;
int64_t $tmp1011 = $tmp1009.value;
int64_t $tmp1012 = $tmp1010 + $tmp1011;
frost$core$Int $tmp1013 = (frost$core$Int) {$tmp1012};
frost$core$Int64 $tmp1014 = frost$core$Int64$init$frost$core$Int($tmp1013);
int64_t $tmp1015 = $tmp1014.value;
frost$core$Char8 $tmp1016 = $tmp1007[$tmp1015];
int64_t $tmp1017 = $tmp1006.value;
$tmp1004[$tmp1017] = $tmp1016;
frost$core$Int $tmp1018 = *(&local5);
int64_t $tmp1019 = $tmp990.value;
int64_t $tmp1020 = $tmp1018.value;
int64_t $tmp1021 = $tmp1019 - $tmp1020;
frost$core$Int $tmp1022 = (frost$core$Int) {$tmp1021};
if ($tmp992) goto block22; else goto block23;
block22:;
int64_t $tmp1023 = $tmp1022.value;
int64_t $tmp1024 = $tmp993.value;
bool $tmp1025 = $tmp1023 >= $tmp1024;
frost$core$Bit $tmp1026 = (frost$core$Bit) {$tmp1025};
bool $tmp1027 = $tmp1026.value;
if ($tmp1027) goto block21; else goto block17;
block23:;
int64_t $tmp1028 = $tmp1022.value;
int64_t $tmp1029 = $tmp993.value;
bool $tmp1030 = $tmp1028 > $tmp1029;
frost$core$Bit $tmp1031 = (frost$core$Bit) {$tmp1030};
bool $tmp1032 = $tmp1031.value;
if ($tmp1032) goto block21; else goto block17;
block21:;
int64_t $tmp1033 = $tmp1018.value;
int64_t $tmp1034 = $tmp993.value;
int64_t $tmp1035 = $tmp1033 + $tmp1034;
frost$core$Int $tmp1036 = (frost$core$Int) {$tmp1035};
*(&local5) = $tmp1036;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1252
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp1037 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp1038 = *(&local1);
frost$core$Int $tmp1039 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp1037, $tmp1038, $tmp1039);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1037));
return $tmp1037;

}
frost$core$String* frost$core$UInt8$format$frost$core$String$R$frost$core$String(frost$core$UInt8 param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1258
frost$core$Bit $tmp1040 = (frost$core$Bit) {false};
// begin inline call to function frost.core.UInt8.get_asUInt64():frost.core.UInt64 from UInt8.frost:1258:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1208
uint8_t $tmp1041 = param0.value;
frost$core$UInt64 $tmp1042 = (frost$core$UInt64) {((uint64_t) $tmp1041)};
frost$core$UInt64 $tmp1043 = (frost$core$UInt64) {255u};
frost$core$String* $tmp1044 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp1040, $tmp1042, $tmp1043, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1044));
return $tmp1044;

}
void frost$core$UInt8$cleanup(frost$core$UInt8 param0) {

return;

}

