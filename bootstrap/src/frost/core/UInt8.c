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
#include "frost/collections/HashKey.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
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
#include "frost/unsafe/Pointer.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);
__attribute__((weak)) frost$core$Object* frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$UInt8$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int frost$core$UInt8$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt8$get_hash$R$frost$core$Int(((frost$core$UInt8$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$core$UInt8$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt8$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt8$_frost$collections$ListView, { frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt8$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt8$_frost$core$Comparable, { frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt8$_frost$core$Equatable, { frost$core$UInt8$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt8$_frost$collections$HashKey, { frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt8$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt8$_frost$collections$Iterable, { frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$UInt8$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt8$_frost$core$Formattable, { frost$core$UInt8$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$UInt8$class_type frost$core$UInt8$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt8$_frost$collections$CollectionView, { frost$core$UInt8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$ADD$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$ADD$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$SUB$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$SUB$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$SUB$R$frost$core$UInt8$shim, frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$MUL$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$MUL$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$INTDIV$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$$REM$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$REM$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt8$$BNOT$R$frost$core$UInt8$shim, frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt8$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32$shim, frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16$shim, frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$min$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$min$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16$shim, frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt8$max$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8$shim, frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt8$max$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt8$get_count$R$frost$core$Int$shim, frost$core$UInt8$get_bitCount$R$frost$core$UInt8$shim, frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt8$get_hash$R$frost$core$Int$shim, frost$core$UInt8$get_asInt$R$frost$core$Int$shim, frost$core$UInt8$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt8$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt8$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt8$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt8$get_asUInt$R$frost$core$UInt$shim, frost$core$UInt8$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt8$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt8$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt8$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt8$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt8$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[17]; } frost$core$UInt8$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt8$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$ListView, { frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt8$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Comparable, { frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Equatable, { frost$core$UInt8$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$HashKey, { frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt8$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$Iterable, { frost$core$UInt8$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$UInt8$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt8$wrapper_frost$core$Formattable, { frost$core$UInt8$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$UInt8$wrapperclass_type frost$core$UInt8$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt8$wrapper_frost$collections$CollectionView, { frost$core$UInt8$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -7673783684893366276, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38", 16, -7673783684893366276, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 11, -3353100713791193429, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 90, -7439922039727462966, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 11, -3353100713791193429, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x38\x3f", 119, 7168004075600014508, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x55\x49\x6e\x74\x38\x2e\x66\x72\x6f\x73\x74", 11, -3353100713791193429, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$UInt8 frost$core$UInt8$init$builtin_uint8(uint8_t param0) {

frost$core$UInt8 local0;
uint8_t* _1;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:30
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:36
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:42
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:48
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$ADD$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:54
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:60
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$ADD$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:65
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:71
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:77
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt8$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:83
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt8$$ADD$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:89
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:95
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:101
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:107
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$SUB$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:113
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:119
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$SUB$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:124
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:130
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:136
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt8$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:142
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt8$$SUB$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:148
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$UInt8 frost$core$UInt8$$SUB$R$frost$core$UInt8(frost$core$UInt8 param0) {

uint8_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:153
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:159
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:165
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:171
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$MUL$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:177
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:183
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$MUL$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:188
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:194
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:200
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt8$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:206
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt8$$MUL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:212
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:218
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:224
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:230
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$INTDIV$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:236
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:242
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$INTDIV$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:247
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:253
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:259
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt8$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:265
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt8$$INTDIV$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:271
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:277
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:283
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:289
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt8$$REM$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:295
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:301
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$REM$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:306
_1 = param0.value;
_2 = param1.value;
_3 = _1 % _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:312
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:318
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt8$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:324
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt8$$REM$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:330
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
float _2;
int8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:336
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
float _2;
int16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:342
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
float _2;
int32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:348
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$Int64 param1) {

uint8_t _1;
double _2;
int64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:354
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
float _2;
uint8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:360
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
float _2;
uint16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:366
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
float _2;
uint32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:372
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
double _2;
uint64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:378
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt8$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt8 param0, frost$core$Real32 param1) {

uint8_t _1;
float _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:384
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real64 frost$core$UInt8$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt8 param0, frost$core$Real64 param1) {

uint8_t _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:390
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$UInt8 frost$core$UInt8$$BNOT$R$frost$core$UInt8(frost$core$UInt8 param0) {

uint8_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:395
_1 = param0.value;
_2 = ~_1;
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:401
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:407
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:413
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt8$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:419
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt8$$BAND$frost$core$Int$R$frost$core$Int(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:425
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:431
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$BAND$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:436
_1 = param0.value;
_2 = param1.value;
_3 = _1 & _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:442
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:448
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt8$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:454
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt8$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:460
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:466
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:472
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:478
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt8$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:484
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt8$$BOR$frost$core$Int$R$frost$core$Int(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:490
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:496
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$BOR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:501
_1 = param0.value;
_2 = param1.value;
_3 = _1 | _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:507
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:513
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt8$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:519
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt8$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:525
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int8$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:531
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:537
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt8$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:543
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt8$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int64 param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:549
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt8$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:555
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:561
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$BXOR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:566
_1 = param0.value;
_2 = param1.value;
_3 = _1 ^ _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:572
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt8$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:578
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt8$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:584
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt8$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:590
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:596
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 << _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$SHL$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:601
_1 = param0.value;
_2 = param1.value;
_3 = _1 << _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint32_t _2;
uint8_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:607
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 >> _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt8 frost$core$UInt8$$SHR$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
uint8_t _3;
frost$core$UInt8 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:612
_1 = param0.value;
_2 = param1.value;
_3 = _1 >> _2;
_4 = (frost$core$UInt8) {_3};
return _4;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int16_t _2;
int8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:618
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:624
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:630
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:636
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:643
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint16_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:649
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:655
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:661
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:667
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int16_t _2;
int8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:673
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:679
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:685
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:691
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:698
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint16_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:704
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:710
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:716
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:722
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int16_t _2;
int8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:728
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:734
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:740
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:746
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:753
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint16_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:759
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:765
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:771
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:777
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int16_t _2;
int8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:783
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:789
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:795
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:801
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:808
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint16_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:814
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:820
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:826
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:832
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int16_t _2;
int8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:838
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:844
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:850
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:856
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:863
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint16_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:869
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:875
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:881
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:887
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int16_t _2;
int8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:893
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:899
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:905
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:911
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:918
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint16_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:924
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:930
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:936
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt8$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:942
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Int16 frost$core$UInt8$min$frost$core$Int8$R$frost$core$Int16(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int16_t _2;
int8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint8_t _10;
int16_t _11;
frost$core$Int16 _12;
int8_t _15;
int16_t _16;
frost$core$Int16 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:948
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:949
_10 = param0.value;
_11 = ((int16_t) _10);
_12 = (frost$core$Int16) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:951
_15 = param1.value;
_16 = ((int16_t) _15);
_17 = (frost$core$Int16) {_16};
return _17;

}
frost$core$Int32 frost$core$UInt8$min$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint8_t _10;
int32_t _11;
frost$core$Int32 _12;
int16_t _15;
int32_t _16;
frost$core$Int32 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:957
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:958
_10 = param0.value;
_11 = ((int32_t) _10);
_12 = (frost$core$Int32) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:960
_15 = param1.value;
_16 = ((int32_t) _15);
_17 = (frost$core$Int32) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt8$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint8_t _10;
int64_t _11;
frost$core$Int64 _12;
int32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:966
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:967
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:969
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt8$min$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint8_t _10;
int64_t _11;
frost$core$Int64 _12;
int64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:976
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:977
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:979
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$UInt8 frost$core$UInt8$min$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint8_t _8;
frost$core$UInt8 _9;
uint8_t _12;
frost$core$UInt8 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:985
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:986
_8 = param0.value;
_9 = (frost$core$UInt8) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:988
_12 = param1.value;
_13 = (frost$core$UInt8) {_12};
return _13;

}
frost$core$UInt16 frost$core$UInt8$min$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint16_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint8_t _9;
uint16_t _10;
frost$core$UInt16 _11;
uint16_t _14;
frost$core$UInt16 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:994
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:995
_9 = param0.value;
_10 = ((uint16_t) _9);
_11 = (frost$core$UInt16) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:997
_14 = param1.value;
_15 = (frost$core$UInt16) {_14};
return _15;

}
frost$core$UInt32 frost$core$UInt8$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint8_t _9;
uint32_t _10;
frost$core$UInt32 _11;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1003
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1004
_9 = param0.value;
_10 = ((uint32_t) _9);
_11 = (frost$core$UInt32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1006
_14 = param1.value;
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt8$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint8_t _9;
uint64_t _10;
frost$core$UInt64 _11;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1012
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1013
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1015
_14 = param1.value;
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt frost$core$UInt8$min$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint8_t _9;
uint64_t _10;
frost$core$UInt _11;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1021
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1022
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1024
_14 = param1.value;
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$core$Int16 frost$core$UInt8$max$frost$core$Int8$R$frost$core$Int16(frost$core$UInt8 param0, frost$core$Int8 param1) {

uint8_t _1;
int16_t _2;
int8_t _3;
int16_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint8_t _10;
int16_t _11;
frost$core$Int16 _12;
int8_t _15;
int16_t _16;
frost$core$Int16 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1030
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = param1.value;
_4 = ((int16_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1031
_10 = param0.value;
_11 = ((int16_t) _10);
_12 = (frost$core$Int16) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1033
_15 = param1.value;
_16 = ((int16_t) _15);
_17 = (frost$core$Int16) {_16};
return _17;

}
frost$core$Int32 frost$core$UInt8$max$frost$core$Int16$R$frost$core$Int32(frost$core$UInt8 param0, frost$core$Int16 param1) {

uint8_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint8_t _10;
int32_t _11;
frost$core$Int32 _12;
int16_t _15;
int32_t _16;
frost$core$Int32 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1039
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1040
_10 = param0.value;
_11 = ((int32_t) _10);
_12 = (frost$core$Int32) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1042
_15 = param1.value;
_16 = ((int32_t) _15);
_17 = (frost$core$Int32) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt8$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int32 param1) {

uint8_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint8_t _10;
int64_t _11;
frost$core$Int64 _12;
int32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1048
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1049
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1051
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt8$max$frost$core$Int$R$frost$core$Int64(frost$core$UInt8 param0, frost$core$Int param1) {

uint8_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint8_t _10;
int64_t _11;
frost$core$Int64 _12;
int64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1058
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1059
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1061
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$UInt8 frost$core$UInt8$max$frost$core$UInt8$R$frost$core$UInt8(frost$core$UInt8 param0, frost$core$UInt8 param1) {

uint8_t _1;
uint8_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint8_t _8;
frost$core$UInt8 _9;
uint8_t _12;
frost$core$UInt8 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1067
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1068
_8 = param0.value;
_9 = (frost$core$UInt8) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1070
_12 = param1.value;
_13 = (frost$core$UInt8) {_12};
return _13;

}
frost$core$UInt16 frost$core$UInt8$max$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt8 param0, frost$core$UInt16 param1) {

uint8_t _1;
uint16_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint8_t _9;
uint16_t _10;
frost$core$UInt16 _11;
uint16_t _14;
frost$core$UInt16 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1076
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1077
_9 = param0.value;
_10 = ((uint16_t) _9);
_11 = (frost$core$UInt16) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1079
_14 = param1.value;
_15 = (frost$core$UInt16) {_14};
return _15;

}
frost$core$UInt32 frost$core$UInt8$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt8 param0, frost$core$UInt32 param1) {

uint8_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint8_t _9;
uint32_t _10;
frost$core$UInt32 _11;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1085
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1086
_9 = param0.value;
_10 = ((uint32_t) _9);
_11 = (frost$core$UInt32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1088
_14 = param1.value;
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt8$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt8 param0, frost$core$UInt64 param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint8_t _9;
uint64_t _10;
frost$core$UInt64 _11;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1094
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1095
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1097
_14 = param1.value;
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt frost$core$UInt8$max$frost$core$UInt$R$frost$core$UInt(frost$core$UInt8 param0, frost$core$UInt param1) {

uint8_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint8_t _9;
uint64_t _10;
frost$core$UInt _11;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1103
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1104
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1106
_14 = param1.value;
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$collections$ListView* frost$core$UInt8$$IDX$frost$core$Range$LTfrost$core$UInt8$GT$R$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$core$Range$LTfrost$core$UInt8$GT param0) {

org$frostlang$frost$UInt8List* _1;
frost$core$UInt8 _2;
frost$core$UInt8 _3;
frost$core$UInt8 _4;
frost$core$Bit _5;
frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT _6;
frost$collections$ListView* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1111
_1 = (org$frostlang$frost$UInt8List*) frostObjectAlloc(sizeof(org$frostlang$frost$UInt8List), (frost$core$Class*) &org$frostlang$frost$UInt8List$class);
_2 = param0.min;
_3 = param0.max;
_4 = (frost$core$UInt8) {1u};
_5 = param0.inclusive;
_6 = frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$init$frost$core$UInt8$frost$core$UInt8$frost$core$UInt8$frost$core$Bit(_2, _3, _4, _5);
org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT(_1, _6);
_8 = ((frost$collections$ListView*) _1);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$collections$ListView* frost$core$UInt8$$IDX$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT$R$frost$collections$ListView$LTfrost$core$UInt8$GT(frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT param0) {

org$frostlang$frost$UInt8List* _1;
frost$collections$ListView* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1116
_1 = (org$frostlang$frost$UInt8List*) frostObjectAlloc(sizeof(org$frostlang$frost$UInt8List), (frost$core$Class*) &org$frostlang$frost$UInt8List$class);
org$frostlang$frost$UInt8List$init$frost$core$SteppedRange$LTfrost$core$UInt8$Cfrost$core$UInt8$GT(_1, param0);
_3 = ((frost$collections$ListView*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Bit frost$core$UInt8$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt8 param0, frost$core$Int param1) {

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
uint8_t _32;
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
frost$core$UInt8$wrapper* $tmp5;
$tmp5 = (frost$core$UInt8$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt8$wrapper), (frost$core$Class*) &frost$core$UInt8$wrapperclass);
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
_18 = (frost$core$Int) {1121u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _18, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1122
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt8.frost:1122:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_25 = _22.value;
_26 = param1.value;
_27 = _25 << _26;
_28 = (frost$core$Int) {_27};
// begin inline call to function frost.core.UInt8.&&(other:frost.core.Int):frost.core.Int from UInt8.frost:1122:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:425
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
frost$core$Int frost$core$UInt8$get_count$R$frost$core$Int(frost$core$UInt8 param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1128
_1 = (frost$core$Int) {8u};
return _1;

}
frost$collections$Iterator* frost$core$UInt8$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt8 param0) {

org$frostlang$frost$IntBitIterator* _1;
uint8_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$collections$Iterator* _10;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1138
_1 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(sizeof(org$frostlang$frost$IntBitIterator), (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.UInt8.get_asUInt64():frost.core.UInt64 from UInt8.frost:1138:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1208
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
frost$core$Int frost$core$UInt8$get_hash$R$frost$core$Int(frost$core$UInt8 param0) {

uint8_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1143
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$UInt8$nullable frost$core$UInt8$parse$frost$core$String$frost$core$Int$R$frost$core$UInt8$Q(frost$core$String* param0, frost$core$Int param1) {

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
uint8_t _41;
frost$core$UInt8 _42;
frost$core$UInt8$nullable _44;
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
_14 = (frost$core$Int) {1149u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _14, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1150
_18 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1151
_21 = *(&local0);
_22 = !_21.nonnull;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1152
return ((frost$core$UInt8$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1154
_29 = *(&local0);
_30 = _29.nonnull;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block6; else goto block7;
block7:;
_34 = (frost$core$Int) {1154u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _34, &$s12);
abort(); // unreachable
block6:;
_37 = ((frost$core$UInt64) _29.value);
// begin inline call to function frost.core.UInt64.get_asUInt8():frost.core.UInt8 from UInt8.frost:1154:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:580
_40 = _37.value;
_41 = ((uint8_t) _40);
_42 = (frost$core$UInt8) {_41};
_44 = ((frost$core$UInt8$nullable) { _42, true });
return _44;

}
frost$core$Int frost$core$UInt8$get_asInt$R$frost$core$Int(frost$core$UInt8 param0) {

uint8_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1160
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8 frost$core$UInt8$get_asInt8$R$frost$core$Int8(frost$core$UInt8 param0) {

uint8_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1166
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$UInt8$get_asInt16$R$frost$core$Int16(frost$core$UInt8 param0) {

uint8_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1172
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt8$get_asInt32$R$frost$core$Int32(frost$core$UInt8 param0) {

uint8_t _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1178
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$UInt8$get_asInt64$R$frost$core$Int64(frost$core$UInt8 param0) {

uint8_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1184
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$UInt frost$core$UInt8$get_asUInt$R$frost$core$UInt(frost$core$UInt8 param0) {

uint8_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1190
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$UInt16 frost$core$UInt8$get_asUInt16$R$frost$core$UInt16(frost$core$UInt8 param0) {

uint8_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1196
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$UInt32 frost$core$UInt8$get_asUInt32$R$frost$core$UInt32(frost$core$UInt8 param0) {

uint8_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1202
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$UInt8$get_asUInt64$R$frost$core$UInt64(frost$core$UInt8 param0) {

uint8_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1208
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Real32 frost$core$UInt8$get_asReal32$R$frost$core$Real32(frost$core$UInt8 param0) {

uint8_t _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1214
_1 = param0.value;
_2 = ((float) _1);
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real64 frost$core$UInt8$get_asReal64$R$frost$core$Real64(frost$core$UInt8 param0) {

uint8_t _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1220
_1 = param0.value;
_2 = ((double) _1);
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$String* frost$core$UInt8$get_asString$R$frost$core$String(frost$core$UInt8 param0) {

frost$core$Int local0;
frost$unsafe$Pointer local1;
frost$unsafe$Pointer local2;
frost$unsafe$Pointer local3;
frost$core$Int local4;
frost$core$UInt8 local5;
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
frost$core$UInt8 _31;
frost$core$UInt8 _32;
uint8_t _33;
uint8_t _34;
bool _35;
frost$core$Bit _36;
bool _37;
frost$unsafe$Pointer _42;
int64_t _43;
frost$core$Int _44;
frost$core$Int64 _45;
frost$core$UInt8 _46;
frost$core$UInt8 _47;
uint8_t _50;
uint32_t _51;
uint8_t _52;
uint32_t _53;
uint32_t _54;
frost$core$UInt32 _55;
frost$core$UInt32 _57;
uint32_t _58;
uint32_t _59;
uint32_t _60;
frost$core$UInt32 _61;
uint32_t _64;
uint8_t _65;
frost$core$UInt8 _66;
frost$core$Char8 _68;
int64_t _69;
frost$core$UInt8 _72;
frost$core$UInt32 _73;
frost$core$UInt32 _74;
uint32_t _75;
uint32_t _76;
uint32_t _77;
frost$core$UInt32 _78;
uint32_t _81;
uint8_t _82;
frost$core$UInt8 _83;
frost$core$Int _87;
frost$core$Int _88;
int64_t _89;
int64_t _90;
int64_t _91;
frost$core$Int _92;
frost$core$UInt8 _95;
frost$core$UInt8 _96;
uint8_t _97;
uint8_t _98;
bool _99;
frost$core$Bit _100;
bool _101;
frost$core$Int _104;
frost$core$Int _105;
int64_t _106;
int64_t _107;
int64_t _108;
frost$core$Int _109;
frost$unsafe$Pointer _116;
int64_t _117;
frost$core$Int _118;
frost$core$Int64 _119;
frost$core$UInt32 _120;
frost$core$UInt8 _121;
frost$core$UInt8 _122;
uint8_t _125;
uint32_t _126;
uint8_t _127;
uint32_t _128;
uint32_t _129;
frost$core$UInt32 _130;
uint32_t _132;
uint32_t _133;
uint32_t _134;
frost$core$UInt32 _135;
uint32_t _138;
uint8_t _139;
frost$core$UInt8 _140;
frost$core$Char8 _142;
int64_t _143;
frost$core$UInt8 _146;
frost$core$UInt32 _147;
frost$core$UInt32 _148;
uint32_t _149;
uint32_t _150;
uint32_t _151;
frost$core$UInt32 _152;
uint32_t _155;
uint8_t _156;
frost$core$UInt8 _157;
frost$core$Int _161;
frost$core$Int _162;
int64_t _163;
int64_t _164;
int64_t _165;
frost$core$Int _166;
frost$core$UInt8 _169;
frost$core$UInt8 _170;
uint8_t _171;
uint8_t _172;
bool _173;
frost$core$Bit _174;
bool _175;
frost$unsafe$Pointer _178;
int64_t _179;
frost$core$Int _180;
frost$core$Int64 _181;
frost$core$UInt8 _182;
frost$core$Char8 _183;
int64_t _184;
frost$core$Int _188;
frost$core$Int _189;
int64_t _190;
int64_t _191;
int64_t _192;
frost$core$Int _193;
frost$core$Int _196;
frost$core$Int _197;
frost$core$Bit _198;
frost$core$Range$LTfrost$core$Int$GT _199;
frost$core$Int _200;
frost$core$Int _202;
frost$core$Bit _203;
bool _204;
frost$core$Int _205;
int64_t _207;
int64_t _208;
bool _209;
frost$core$Bit _210;
bool _211;
int64_t _213;
int64_t _214;
bool _215;
frost$core$Bit _216;
bool _217;
frost$unsafe$Pointer _220;
int64_t _221;
frost$core$Int _222;
frost$core$Int64 _223;
frost$unsafe$Pointer _224;
int64_t _225;
frost$core$Int _226;
frost$core$Int _227;
int64_t _228;
int64_t _229;
int64_t _230;
frost$core$Int _231;
frost$core$Int64 _232;
int64_t _233;
frost$core$Char8 _234;
int64_t _235;
frost$core$Int _238;
int64_t _239;
int64_t _240;
int64_t _241;
frost$core$Int _242;
int64_t _244;
int64_t _245;
bool _246;
frost$core$Bit _247;
bool _248;
int64_t _250;
int64_t _251;
bool _252;
frost$core$Bit _253;
bool _254;
int64_t _256;
int64_t _257;
int64_t _258;
frost$core$Int _259;
frost$core$String* _263;
frost$unsafe$Pointer _264;
frost$core$Int _265;
frost$core$Object* _267;
frost$core$Object* _269;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1226
_1 = (frost$core$Int) {3u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1227
_4 = *(&local0);
// begin inline call to method frost.unsafe.Pointer.alloc(count:frost.core.Int):frost.unsafe.Pointer<frost.unsafe.Pointer.T> from UInt8.frost:1227:42
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1228
_21 = *(&local0);
_22 = (frost$core$Int) {1u};
_23 = _21.value;
_24 = _22.value;
_25 = _23 - _24;
_26 = (frost$core$Int) {_25};
*(&local4) = _26;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1229
*(&local5) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1230
_31 = *(&local5);
_32 = (frost$core$UInt8) {0u};
_33 = _31.value;
_34 = _32.value;
_35 = _33 >= _34;
_36 = (frost$core$Bit) {_35};
_37 = _36.value;
if (_37) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1231
goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1232
_42 = *(&local3);
_43 = _42.value;
_44 = *(&local4);
_45 = frost$core$Int64$init$frost$core$Int(_44);
_46 = *(&local5);
_47 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.%(other:frost.core.UInt8):frost.core.UInt32 from UInt8.frost:1232:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:301
_50 = _46.value;
_51 = ((uint32_t) _50);
_52 = _47.value;
_53 = ((uint32_t) _52);
_54 = _51 % _53;
_55 = (frost$core$UInt32) {_54};
_57 = (frost$core$UInt32) {48u};
_58 = _55.value;
_59 = _57.value;
_60 = _58 + _59;
_61 = (frost$core$UInt32) {_60};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1232:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_64 = _61.value;
_65 = ((uint8_t) _64);
_66 = (frost$core$UInt8) {_65};
_68 = frost$core$Char8$init$frost$core$UInt8(_66);
_69 = _45.value;
((frost$core$Char8*)_43)[_69] = _68;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1233
_72 = *(&local5);
_73 = frost$core$UInt32$init$frost$core$UInt8(_72);
_74 = (frost$core$UInt32) {10u};
_75 = _73.value;
_76 = _74.value;
_77 = _75 / _76;
_78 = (frost$core$UInt32) {_77};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1233:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_81 = _78.value;
_82 = ((uint8_t) _81);
_83 = (frost$core$UInt8) {_82};
*(&local5) = _83;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1234
_87 = *(&local4);
_88 = (frost$core$Int) {1u};
_89 = _87.value;
_90 = _88.value;
_91 = _89 - _90;
_92 = (frost$core$Int) {_91};
*(&local4) = _92;
_95 = *(&local5);
_96 = (frost$core$UInt8) {0u};
_97 = _95.value;
_98 = _96.value;
_99 = _97 > _98;
_100 = (frost$core$Bit) {_99};
_101 = _100.value;
if (_101) goto block6; else goto block8;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1237
_104 = *(&local4);
_105 = (frost$core$Int) {1u};
_106 = _104.value;
_107 = _105.value;
_108 = _106 + _107;
_109 = (frost$core$Int) {_108};
*(&local4) = _109;
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1240
goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1241
_116 = *(&local3);
_117 = _116.value;
_118 = *(&local4);
_119 = frost$core$Int64$init$frost$core$Int(_118);
_120 = (frost$core$UInt32) {48u};
_121 = *(&local5);
_122 = (frost$core$UInt8) {10u};
// begin inline call to function frost.core.UInt8.%(other:frost.core.UInt8):frost.core.UInt32 from UInt8.frost:1241:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:301
_125 = _121.value;
_126 = ((uint32_t) _125);
_127 = _122.value;
_128 = ((uint32_t) _127);
_129 = _126 % _128;
_130 = (frost$core$UInt32) {_129};
_132 = _120.value;
_133 = _130.value;
_134 = _132 - _133;
_135 = (frost$core$UInt32) {_134};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1241:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_138 = _135.value;
_139 = ((uint8_t) _138);
_140 = (frost$core$UInt8) {_139};
_142 = frost$core$Char8$init$frost$core$UInt8(_140);
_143 = _119.value;
((frost$core$Char8*)_117)[_143] = _142;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1242
_146 = *(&local5);
_147 = frost$core$UInt32$init$frost$core$UInt8(_146);
_148 = (frost$core$UInt32) {10u};
_149 = _147.value;
_150 = _148.value;
_151 = _149 / _150;
_152 = (frost$core$UInt32) {_151};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt8.frost:1242:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_155 = _152.value;
_156 = ((uint8_t) _155);
_157 = (frost$core$UInt8) {_156};
*(&local5) = _157;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1243
_161 = *(&local4);
_162 = (frost$core$Int) {1u};
_163 = _161.value;
_164 = _162.value;
_165 = _163 - _164;
_166 = (frost$core$Int) {_165};
*(&local4) = _166;
_169 = *(&local5);
_170 = (frost$core$UInt8) {0u};
_171 = _169.value;
_172 = _170.value;
_173 = _171 < _172;
_174 = (frost$core$Bit) {_173};
_175 = _174.value;
if (_175) goto block12; else goto block14;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1246
_178 = *(&local3);
_179 = _178.value;
_180 = *(&local4);
_181 = frost$core$Int64$init$frost$core$Int(_180);
_182 = (frost$core$UInt8) {45u};
_183 = frost$core$Char8$init$frost$core$UInt8(_182);
_184 = _181.value;
((frost$core$Char8*)_179)[_184] = _183;
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1248
_188 = *(&local0);
_189 = *(&local4);
_190 = _188.value;
_191 = _189.value;
_192 = _190 - _191;
_193 = (frost$core$Int) {_192};
*(&local6) = _193;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1249
_196 = (frost$core$Int) {0u};
_197 = *(&local6);
_198 = (frost$core$Bit) {false};
_199 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit(_196, _197, _198);
_200 = _199.min;
*(&local7) = _200;
_202 = _199.max;
_203 = _199.inclusive;
_204 = _203.value;
_205 = (frost$core$Int) {1u};
if (_204) goto block21; else goto block22;
block21:;
_207 = _200.value;
_208 = _202.value;
_209 = _207 <= _208;
_210 = (frost$core$Bit) {_209};
_211 = _210.value;
if (_211) goto block18; else goto block19;
block22:;
_213 = _200.value;
_214 = _202.value;
_215 = _213 < _214;
_216 = (frost$core$Bit) {_215};
_217 = _216.value;
if (_217) goto block18; else goto block19;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1250
_220 = *(&local3);
_221 = _220.value;
_222 = *(&local7);
_223 = frost$core$Int64$init$frost$core$Int(_222);
_224 = *(&local3);
_225 = _224.value;
_226 = *(&local7);
_227 = *(&local4);
_228 = _226.value;
_229 = _227.value;
_230 = _228 + _229;
_231 = (frost$core$Int) {_230};
_232 = frost$core$Int64$init$frost$core$Int(_231);
_233 = _232.value;
_234 = ((frost$core$Char8*)_225)[_233];
_235 = _223.value;
((frost$core$Char8*)_221)[_235] = _234;
_238 = *(&local7);
_239 = _202.value;
_240 = _238.value;
_241 = _239 - _240;
_242 = (frost$core$Int) {_241};
if (_204) goto block24; else goto block25;
block24:;
_244 = _242.value;
_245 = _205.value;
_246 = _244 >= _245;
_247 = (frost$core$Bit) {_246};
_248 = _247.value;
if (_248) goto block23; else goto block19;
block25:;
_250 = _242.value;
_251 = _205.value;
_252 = _250 > _251;
_253 = (frost$core$Bit) {_252};
_254 = _253.value;
if (_254) goto block23; else goto block19;
block23:;
_256 = _238.value;
_257 = _205.value;
_258 = _256 + _257;
_259 = (frost$core$Int) {_258};
*(&local7) = _259;
goto block18;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1252
_263 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_264 = *(&local3);
_265 = *(&local6);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_263, _264, _265);
_267 = ((frost$core$Object*) _263);
frost$core$Frost$ref$frost$core$Object$Q(_267);
_269 = ((frost$core$Object*) _263);
frost$core$Frost$unref$frost$core$Object$Q(_269);
return _263;

}
frost$core$String* frost$core$UInt8$format$frost$core$String$R$frost$core$String(frost$core$UInt8 param0, frost$core$String* param1) {

frost$core$Bit _1;
uint8_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1258
_1 = (frost$core$Bit) {false};
// begin inline call to function frost.core.UInt8.get_asUInt64():frost.core.UInt64 from UInt8.frost:1258:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt8.frost:1208
_4 = param0.value;
_5 = ((uint64_t) _4);
_6 = (frost$core$UInt64) {_5};
_8 = (frost$core$UInt64) {255u};
_9 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_1, _6, _8, param1);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
return _9;

}
void frost$core$UInt8$cleanup(frost$core$UInt8 param0) {

return;

}

