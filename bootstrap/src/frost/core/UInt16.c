#include "frost/core/UInt16.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/collections/Key.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Comparable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int32.h"
#include "frost/core/Int16.h"
#include "frost/core/Int64.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/UInt.h"
#include "frost/core/Real32.h"
#include "frost/core/Int8.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt8.h"
#include "frost/core/Range.LTfrost/core/UInt16.GT.h"
#include "org/frostlang/frost/UInt16List.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt16.Cfrost/core/UInt16.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int.GT.h"

__attribute__((weak)) frost$core$Object* frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, ((frost$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, ((frost$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt16$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt16$get_hash$R$frost$core$Int(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, ((frost$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, ((frost$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, ((frost$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, ((frost$core$UInt16$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt16$format$frost$core$String$R$frost$core$String(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt16$get_count$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt16$get_count$R$frost$core$Int(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt16$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt16$get_asString$R$frost$core$String(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$ADD$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt16$$ADD$frost$core$Int$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$$ADD$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$$ADD$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$SUB$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt16$$SUB$frost$core$Int$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$$SUB$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$$SUB$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$SUB$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt16$$SUB$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$MUL$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt16$$MUL$frost$core$Int$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$$MUL$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$$MUL$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$INTDIV$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt16$$INTDIV$frost$core$Int$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$$INTDIV$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$REM$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt16$$REM$frost$core$Int$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$$REM$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$$REM$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$BNOT$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt16$$BNOT$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt16$$BAND$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt16$$BAND$frost$core$Int$R$frost$core$Int(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$$BAND$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$$BAND$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt16$$BOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt16$$BOR$frost$core$Int$R$frost$core$Int(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$$BOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$$BOR$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int frost$core$UInt16$$BXOR$frost$core$Int$R$frost$core$Int$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int result = frost$core$UInt16$$BXOR$frost$core$Int$R$frost$core$Int(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$$BXOR$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$$BXOR$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt16$$EQ$frost$core$Int$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt16$$EQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt16$$NEQ$frost$core$Int$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt16$$NEQ$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt16$$LT$frost$core$Int$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt16$$LT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GT$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt16$$GT$frost$core$Int$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt16$$GT$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt16$$GE$frost$core$Int$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt16$$GE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LE$frost$core$Int$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Bit result = frost$core$UInt16$$LE$frost$core$Int$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Bit result = frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$Bit result = frost$core$UInt16$$LE$frost$core$UInt$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$min$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt16$min$frost$core$Int$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt16 result = frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$min$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$min$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$max$frost$core$Int$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int p1) {
    frost$core$Int64 result = frost$core$UInt16$max$frost$core$Int$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt16 result = frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt16 result = frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$max$frost$core$UInt$R$frost$core$UInt$shim(frost$core$Object* p0, frost$core$UInt p1) {
    frost$core$UInt result = frost$core$UInt16$max$frost$core$UInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) void frost$core$UInt16$get_bitCount$R$frost$core$UInt16$shim(frost$core$UInt16* sret, frost$core$Object* p0) {
    frost$core$UInt16$get_bitCount$R$frost$core$UInt16(sret, ((frost$core$UInt16$wrapper*) p0)->value);

}
__attribute__((weak)) frost$core$Int frost$core$UInt16$get_asInt$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt16$get_asInt$R$frost$core$Int(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$UInt16$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt16$get_asInt8$R$frost$core$Int8(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt16$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt16$get_asInt16$R$frost$core$Int16(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt16$get_asInt32$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt16$get_asInt64$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt frost$core$UInt16$get_asUInt$R$frost$core$UInt$shim(frost$core$Object* p0) {
    frost$core$UInt result = frost$core$UInt16$get_asUInt$R$frost$core$UInt(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt16$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt16$get_asUInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt16$get_asReal32$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt16$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt16$get_asReal64$R$frost$core$Real64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt16$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt16$cleanup(((frost$core$UInt16$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[16]; } frost$core$UInt16$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt16$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt16$_frost$collections$ListView, { frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt16$_frost$core$Equatable, { frost$core$UInt16$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt16$_frost$collections$Key, { frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt16$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt16$_frost$collections$Iterable, { frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt16$_frost$core$Comparable, { frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$UInt16$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt16$_frost$core$Formattable, { frost$core$UInt16$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$UInt16$class_type frost$core$UInt16$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt16$_frost$collections$CollectionView, { frost$core$UInt16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$ADD$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$ADD$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$SUB$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$SUB$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$SUB$R$frost$core$UInt16$shim, frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$MUL$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$MUL$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$INTDIV$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$REM$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$REM$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt16$$BNOT$R$frost$core$UInt16$shim, frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$min$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16$shim, frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$min$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$max$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16$shim, frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$max$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$get_count$R$frost$core$Int$shim, frost$core$UInt16$get_bitCount$R$frost$core$UInt16$shim, frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt16$get_hash$R$frost$core$Int$shim, frost$core$UInt16$get_asInt$R$frost$core$Int$shim, frost$core$UInt16$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt16$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt16$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt16$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt16$get_asUInt$R$frost$core$UInt$shim, frost$core$UInt16$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt16$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt16$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt16$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt16$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt16$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[16]; } frost$core$UInt16$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt16$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$ListView, { frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Equatable, { frost$core$UInt16$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$Key, { frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt16$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$Iterable, { frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Comparable, { frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$UInt16$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Formattable, { frost$core$UInt16$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$UInt16$wrapperclass_type frost$core$UInt16$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$CollectionView, { frost$core$UInt16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn733)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -3971116837131242237, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -3971116837131242237, NULL };
static frost$core$String $s741 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 3637239000496995262, NULL };
static frost$core$String $s742 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, 8404044226111741979, NULL };
static frost$core$String $s777 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 3637239000496995262, NULL };
static frost$core$String $s778 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x3f", 121, -5127036384278193654, NULL };

frost$core$UInt16 frost$core$UInt16$init$builtin_uint16(uint16_t param0) {

frost$core$UInt16 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:30
uint16_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt16 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$UInt16 frost$core$UInt16$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt16 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:36
uint8_t $tmp6 = param0.value;
uint16_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint16_t) $tmp6);
frost$core$UInt16 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int32 frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:42
uint16_t $tmp9 = param0.value;
int16_t $tmp10 = param1.value;
int32_t $tmp11 = ((int32_t) $tmp9) + ((int32_t) $tmp10);
frost$core$Int32 $tmp12 = (frost$core$Int32) {$tmp11};
return $tmp12;

}
frost$core$Int64 frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:48
uint16_t $tmp13 = param0.value;
int32_t $tmp14 = param1.value;
int64_t $tmp15 = ((int64_t) $tmp13) + ((int64_t) $tmp14);
frost$core$Int64 $tmp16 = (frost$core$Int64) {$tmp15};
return $tmp16;

}
frost$core$Int64 frost$core$UInt16$$ADD$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:54
uint16_t $tmp17 = param0.value;
int64_t $tmp18 = param1.value;
int64_t $tmp19 = ((int64_t) $tmp17) + ((int64_t) $tmp18);
frost$core$Int64 $tmp20 = (frost$core$Int64) {$tmp19};
return $tmp20;

}
frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:60
uint16_t $tmp21 = param0.value;
uint16_t $tmp22 = param1.value;
uint32_t $tmp23 = ((uint32_t) $tmp21) + ((uint32_t) $tmp22);
frost$core$UInt32 $tmp24 = (frost$core$UInt32) {$tmp23};
return $tmp24;

}
frost$core$UInt16 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:65
uint16_t $tmp25 = param0.value;
uint16_t $tmp26 = param1.value;
uint16_t $tmp27 = $tmp25 + $tmp26;
frost$core$UInt16 $tmp28 = (frost$core$UInt16) {$tmp27};
return $tmp28;

}
frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:71
uint16_t $tmp29 = param0.value;
uint32_t $tmp30 = param1.value;
uint32_t $tmp31 = ((uint32_t) $tmp29) + $tmp30;
frost$core$UInt32 $tmp32 = (frost$core$UInt32) {$tmp31};
return $tmp32;

}
frost$core$UInt64 frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:77
uint16_t $tmp33 = param0.value;
uint64_t $tmp34 = param1.value;
uint64_t $tmp35 = ((uint64_t) $tmp33) + $tmp34;
frost$core$UInt64 $tmp36 = (frost$core$UInt64) {$tmp35};
return $tmp36;

}
frost$core$UInt frost$core$UInt16$$ADD$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:83
uint16_t $tmp37 = param0.value;
uint64_t $tmp38 = param1.value;
uint64_t $tmp39 = ((uint64_t) $tmp37) + $tmp38;
frost$core$UInt $tmp40 = (frost$core$UInt) {$tmp39};
return $tmp40;

}
frost$core$Int32 frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:89
uint16_t $tmp41 = param0.value;
int16_t $tmp42 = param1.value;
int32_t $tmp43 = ((int32_t) $tmp41) - ((int32_t) $tmp42);
frost$core$Int32 $tmp44 = (frost$core$Int32) {$tmp43};
return $tmp44;

}
frost$core$Int64 frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:95
uint16_t $tmp45 = param0.value;
int32_t $tmp46 = param1.value;
int64_t $tmp47 = ((int64_t) $tmp45) - ((int64_t) $tmp46);
frost$core$Int64 $tmp48 = (frost$core$Int64) {$tmp47};
return $tmp48;

}
frost$core$Int64 frost$core$UInt16$$SUB$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:101
uint16_t $tmp49 = param0.value;
int64_t $tmp50 = param1.value;
int64_t $tmp51 = ((int64_t) $tmp49) - ((int64_t) $tmp50);
frost$core$Int64 $tmp52 = (frost$core$Int64) {$tmp51};
return $tmp52;

}
frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:107
uint16_t $tmp53 = param0.value;
uint16_t $tmp54 = param1.value;
uint32_t $tmp55 = ((uint32_t) $tmp53) - ((uint32_t) $tmp54);
frost$core$UInt32 $tmp56 = (frost$core$UInt32) {$tmp55};
return $tmp56;

}
frost$core$UInt16 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:112
uint16_t $tmp57 = param0.value;
uint16_t $tmp58 = param1.value;
uint16_t $tmp59 = $tmp57 - $tmp58;
frost$core$UInt16 $tmp60 = (frost$core$UInt16) {$tmp59};
return $tmp60;

}
frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:118
uint16_t $tmp61 = param0.value;
uint32_t $tmp62 = param1.value;
uint32_t $tmp63 = ((uint32_t) $tmp61) - $tmp62;
frost$core$UInt32 $tmp64 = (frost$core$UInt32) {$tmp63};
return $tmp64;

}
frost$core$UInt64 frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:124
uint16_t $tmp65 = param0.value;
uint64_t $tmp66 = param1.value;
uint64_t $tmp67 = ((uint64_t) $tmp65) - $tmp66;
frost$core$UInt64 $tmp68 = (frost$core$UInt64) {$tmp67};
return $tmp68;

}
frost$core$UInt frost$core$UInt16$$SUB$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:130
uint16_t $tmp69 = param0.value;
uint64_t $tmp70 = param1.value;
uint64_t $tmp71 = ((uint64_t) $tmp69) - $tmp70;
frost$core$UInt $tmp72 = (frost$core$UInt) {$tmp71};
return $tmp72;

}
frost$core$UInt16 frost$core$UInt16$$SUB$R$frost$core$UInt16(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:135
uint16_t $tmp73 = param0.value;
uint16_t $tmp74 = -$tmp73;
frost$core$UInt16 $tmp75 = (frost$core$UInt16) {$tmp74};
return $tmp75;

}
frost$core$Int32 frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:141
uint16_t $tmp76 = param0.value;
int16_t $tmp77 = param1.value;
int32_t $tmp78 = ((int32_t) $tmp76) * ((int32_t) $tmp77);
frost$core$Int32 $tmp79 = (frost$core$Int32) {$tmp78};
return $tmp79;

}
frost$core$Int64 frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:147
uint16_t $tmp80 = param0.value;
int32_t $tmp81 = param1.value;
int64_t $tmp82 = ((int64_t) $tmp80) * ((int64_t) $tmp81);
frost$core$Int64 $tmp83 = (frost$core$Int64) {$tmp82};
return $tmp83;

}
frost$core$Int64 frost$core$UInt16$$MUL$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:153
uint16_t $tmp84 = param0.value;
int64_t $tmp85 = param1.value;
int64_t $tmp86 = ((int64_t) $tmp84) * ((int64_t) $tmp85);
frost$core$Int64 $tmp87 = (frost$core$Int64) {$tmp86};
return $tmp87;

}
frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:159
uint16_t $tmp88 = param0.value;
uint16_t $tmp89 = param1.value;
uint32_t $tmp90 = ((uint32_t) $tmp88) * ((uint32_t) $tmp89);
frost$core$UInt32 $tmp91 = (frost$core$UInt32) {$tmp90};
return $tmp91;

}
frost$core$UInt16 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:164
uint16_t $tmp92 = param0.value;
uint16_t $tmp93 = param1.value;
uint16_t $tmp94 = $tmp92 * $tmp93;
frost$core$UInt16 $tmp95 = (frost$core$UInt16) {$tmp94};
return $tmp95;

}
frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:170
uint16_t $tmp96 = param0.value;
uint32_t $tmp97 = param1.value;
uint32_t $tmp98 = ((uint32_t) $tmp96) * $tmp97;
frost$core$UInt32 $tmp99 = (frost$core$UInt32) {$tmp98};
return $tmp99;

}
frost$core$UInt64 frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:176
uint16_t $tmp100 = param0.value;
uint64_t $tmp101 = param1.value;
uint64_t $tmp102 = ((uint64_t) $tmp100) * $tmp101;
frost$core$UInt64 $tmp103 = (frost$core$UInt64) {$tmp102};
return $tmp103;

}
frost$core$UInt frost$core$UInt16$$MUL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:182
uint16_t $tmp104 = param0.value;
uint64_t $tmp105 = param1.value;
uint64_t $tmp106 = ((uint64_t) $tmp104) * $tmp105;
frost$core$UInt $tmp107 = (frost$core$UInt) {$tmp106};
return $tmp107;

}
frost$core$Int32 frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:188
uint16_t $tmp108 = param0.value;
int16_t $tmp109 = param1.value;
int32_t $tmp110 = ((int32_t) $tmp108) / ((int32_t) $tmp109);
frost$core$Int32 $tmp111 = (frost$core$Int32) {$tmp110};
return $tmp111;

}
frost$core$Int64 frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:194
uint16_t $tmp112 = param0.value;
int32_t $tmp113 = param1.value;
int64_t $tmp114 = ((int64_t) $tmp112) / ((int64_t) $tmp113);
frost$core$Int64 $tmp115 = (frost$core$Int64) {$tmp114};
return $tmp115;

}
frost$core$Int64 frost$core$UInt16$$INTDIV$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:200
uint16_t $tmp116 = param0.value;
int64_t $tmp117 = param1.value;
int64_t $tmp118 = ((int64_t) $tmp116) / ((int64_t) $tmp117);
frost$core$Int64 $tmp119 = (frost$core$Int64) {$tmp118};
return $tmp119;

}
frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:206
uint16_t $tmp120 = param0.value;
uint16_t $tmp121 = param1.value;
uint32_t $tmp122 = ((uint32_t) $tmp120) / ((uint32_t) $tmp121);
frost$core$UInt32 $tmp123 = (frost$core$UInt32) {$tmp122};
return $tmp123;

}
frost$core$UInt16 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:211
uint16_t $tmp124 = param0.value;
uint16_t $tmp125 = param1.value;
uint16_t $tmp126 = $tmp124 / $tmp125;
frost$core$UInt16 $tmp127 = (frost$core$UInt16) {$tmp126};
return $tmp127;

}
frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:217
uint16_t $tmp128 = param0.value;
uint32_t $tmp129 = param1.value;
uint32_t $tmp130 = ((uint32_t) $tmp128) / $tmp129;
frost$core$UInt32 $tmp131 = (frost$core$UInt32) {$tmp130};
return $tmp131;

}
frost$core$UInt64 frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:223
uint16_t $tmp132 = param0.value;
uint64_t $tmp133 = param1.value;
uint64_t $tmp134 = ((uint64_t) $tmp132) / $tmp133;
frost$core$UInt64 $tmp135 = (frost$core$UInt64) {$tmp134};
return $tmp135;

}
frost$core$UInt frost$core$UInt16$$INTDIV$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:229
uint16_t $tmp136 = param0.value;
uint64_t $tmp137 = param1.value;
uint64_t $tmp138 = ((uint64_t) $tmp136) / $tmp137;
frost$core$UInt $tmp139 = (frost$core$UInt) {$tmp138};
return $tmp139;

}
frost$core$Int32 frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:235
uint16_t $tmp140 = param0.value;
int16_t $tmp141 = param1.value;
int32_t $tmp142 = ((int32_t) $tmp140) % ((int32_t) $tmp141);
frost$core$Int32 $tmp143 = (frost$core$Int32) {$tmp142};
return $tmp143;

}
frost$core$Int64 frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:241
uint16_t $tmp144 = param0.value;
int32_t $tmp145 = param1.value;
int64_t $tmp146 = ((int64_t) $tmp144) % ((int64_t) $tmp145);
frost$core$Int64 $tmp147 = (frost$core$Int64) {$tmp146};
return $tmp147;

}
frost$core$Int64 frost$core$UInt16$$REM$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:247
uint16_t $tmp148 = param0.value;
int64_t $tmp149 = param1.value;
int64_t $tmp150 = ((int64_t) $tmp148) % ((int64_t) $tmp149);
frost$core$Int64 $tmp151 = (frost$core$Int64) {$tmp150};
return $tmp151;

}
frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:253
uint16_t $tmp152 = param0.value;
uint16_t $tmp153 = param1.value;
uint32_t $tmp154 = ((uint32_t) $tmp152) % ((uint32_t) $tmp153);
frost$core$UInt32 $tmp155 = (frost$core$UInt32) {$tmp154};
return $tmp155;

}
frost$core$UInt16 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:258
uint16_t $tmp156 = param0.value;
uint16_t $tmp157 = param1.value;
uint16_t $tmp158 = $tmp156 % $tmp157;
frost$core$UInt16 $tmp159 = (frost$core$UInt16) {$tmp158};
return $tmp159;

}
frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:264
uint16_t $tmp160 = param0.value;
uint32_t $tmp161 = param1.value;
uint32_t $tmp162 = ((uint32_t) $tmp160) % $tmp161;
frost$core$UInt32 $tmp163 = (frost$core$UInt32) {$tmp162};
return $tmp163;

}
frost$core$UInt64 frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:270
uint16_t $tmp164 = param0.value;
uint64_t $tmp165 = param1.value;
uint64_t $tmp166 = ((uint64_t) $tmp164) % $tmp165;
frost$core$UInt64 $tmp167 = (frost$core$UInt64) {$tmp166};
return $tmp167;

}
frost$core$UInt frost$core$UInt16$$REM$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:276
uint16_t $tmp168 = param0.value;
uint64_t $tmp169 = param1.value;
uint64_t $tmp170 = ((uint64_t) $tmp168) % $tmp169;
frost$core$UInt $tmp171 = (frost$core$UInt) {$tmp170};
return $tmp171;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:282
uint16_t $tmp172 = param0.value;
int8_t $tmp173 = param1.value;
float $tmp174 = ((float) $tmp172) / ((float) $tmp173);
frost$core$Real32 $tmp175 = (frost$core$Real32) {$tmp174};
return $tmp175;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:288
uint16_t $tmp176 = param0.value;
int16_t $tmp177 = param1.value;
float $tmp178 = ((float) $tmp176) / ((float) $tmp177);
frost$core$Real32 $tmp179 = (frost$core$Real32) {$tmp178};
return $tmp179;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:294
uint16_t $tmp180 = param0.value;
int32_t $tmp181 = param1.value;
float $tmp182 = ((float) $tmp180) / ((float) $tmp181);
frost$core$Real32 $tmp183 = (frost$core$Real32) {$tmp182};
return $tmp183;

}
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:300
uint16_t $tmp184 = param0.value;
int64_t $tmp185 = param1.value;
double $tmp186 = ((double) $tmp184) / ((double) $tmp185);
frost$core$Real64 $tmp187 = (frost$core$Real64) {$tmp186};
return $tmp187;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:306
uint16_t $tmp188 = param0.value;
uint8_t $tmp189 = param1.value;
float $tmp190 = ((float) $tmp188) / ((float) $tmp189);
frost$core$Real32 $tmp191 = (frost$core$Real32) {$tmp190};
return $tmp191;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:312
uint16_t $tmp192 = param0.value;
uint16_t $tmp193 = param1.value;
float $tmp194 = ((float) $tmp192) / ((float) $tmp193);
frost$core$Real32 $tmp195 = (frost$core$Real32) {$tmp194};
return $tmp195;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:318
uint16_t $tmp196 = param0.value;
uint32_t $tmp197 = param1.value;
float $tmp198 = ((float) $tmp196) / ((float) $tmp197);
frost$core$Real32 $tmp199 = (frost$core$Real32) {$tmp198};
return $tmp199;

}
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:324
uint16_t $tmp200 = param0.value;
uint64_t $tmp201 = param1.value;
double $tmp202 = ((double) $tmp200) / ((double) $tmp201);
frost$core$Real64 $tmp203 = (frost$core$Real64) {$tmp202};
return $tmp203;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:330
uint16_t $tmp204 = param0.value;
float $tmp205 = param1.value;
float $tmp206 = ((float) $tmp204) / $tmp205;
frost$core$Real32 $tmp207 = (frost$core$Real32) {$tmp206};
return $tmp207;

}
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt16 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:336
uint16_t $tmp208 = param0.value;
double $tmp209 = param1.value;
double $tmp210 = ((double) $tmp208) / $tmp209;
frost$core$Real64 $tmp211 = (frost$core$Real64) {$tmp210};
return $tmp211;

}
frost$core$UInt16 frost$core$UInt16$$BNOT$R$frost$core$UInt16(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:341
uint16_t $tmp212 = param0.value;
uint16_t $tmp213 = !$tmp212;
frost$core$UInt16 $tmp214 = (frost$core$UInt16) {$tmp213};
return $tmp214;

}
frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:347
uint16_t $tmp215 = param0.value;
int16_t $tmp216 = param1.value;
int32_t $tmp217 = ((int32_t) $tmp215) & ((int32_t) $tmp216);
frost$core$Int32 $tmp218 = (frost$core$Int32) {$tmp217};
return $tmp218;

}
frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:353
uint16_t $tmp219 = param0.value;
int32_t $tmp220 = param1.value;
int32_t $tmp221 = ((int32_t) $tmp219) & $tmp220;
frost$core$Int32 $tmp222 = (frost$core$Int32) {$tmp221};
return $tmp222;

}
frost$core$Int64 frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:359
uint16_t $tmp223 = param0.value;
int64_t $tmp224 = param1.value;
int64_t $tmp225 = ((int64_t) $tmp223) & $tmp224;
frost$core$Int64 $tmp226 = (frost$core$Int64) {$tmp225};
return $tmp226;

}
frost$core$Int frost$core$UInt16$$BAND$frost$core$Int$R$frost$core$Int(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:365
uint16_t $tmp227 = param0.value;
int64_t $tmp228 = param1.value;
int64_t $tmp229 = ((int64_t) $tmp227) & $tmp228;
frost$core$Int $tmp230 = (frost$core$Int) {$tmp229};
return $tmp230;

}
frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:371
uint16_t $tmp231 = param0.value;
uint16_t $tmp232 = param1.value;
uint32_t $tmp233 = ((uint32_t) $tmp231) & ((uint32_t) $tmp232);
frost$core$UInt32 $tmp234 = (frost$core$UInt32) {$tmp233};
return $tmp234;

}
frost$core$UInt16 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:376
uint16_t $tmp235 = param0.value;
uint16_t $tmp236 = param1.value;
uint16_t $tmp237 = $tmp235 & $tmp236;
frost$core$UInt16 $tmp238 = (frost$core$UInt16) {$tmp237};
return $tmp238;

}
frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:382
uint16_t $tmp239 = param0.value;
uint32_t $tmp240 = param1.value;
uint32_t $tmp241 = ((uint32_t) $tmp239) & $tmp240;
frost$core$UInt32 $tmp242 = (frost$core$UInt32) {$tmp241};
return $tmp242;

}
frost$core$UInt64 frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:388
uint16_t $tmp243 = param0.value;
uint64_t $tmp244 = param1.value;
uint64_t $tmp245 = ((uint64_t) $tmp243) & $tmp244;
frost$core$UInt64 $tmp246 = (frost$core$UInt64) {$tmp245};
return $tmp246;

}
frost$core$UInt frost$core$UInt16$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:394
uint16_t $tmp247 = param0.value;
uint64_t $tmp248 = param1.value;
uint64_t $tmp249 = ((uint64_t) $tmp247) & $tmp248;
frost$core$UInt $tmp250 = (frost$core$UInt) {$tmp249};
return $tmp250;

}
frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:400
uint16_t $tmp251 = param0.value;
int16_t $tmp252 = param1.value;
int32_t $tmp253 = ((int32_t) $tmp251) | ((int32_t) $tmp252);
frost$core$Int32 $tmp254 = (frost$core$Int32) {$tmp253};
return $tmp254;

}
frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:406
uint16_t $tmp255 = param0.value;
int32_t $tmp256 = param1.value;
int32_t $tmp257 = ((int32_t) $tmp255) | $tmp256;
frost$core$Int32 $tmp258 = (frost$core$Int32) {$tmp257};
return $tmp258;

}
frost$core$Int64 frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:412
uint16_t $tmp259 = param0.value;
int64_t $tmp260 = param1.value;
int64_t $tmp261 = ((int64_t) $tmp259) | $tmp260;
frost$core$Int64 $tmp262 = (frost$core$Int64) {$tmp261};
return $tmp262;

}
frost$core$Int frost$core$UInt16$$BOR$frost$core$Int$R$frost$core$Int(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:418
uint16_t $tmp263 = param0.value;
int64_t $tmp264 = param1.value;
int64_t $tmp265 = ((int64_t) $tmp263) | $tmp264;
frost$core$Int $tmp266 = (frost$core$Int) {$tmp265};
return $tmp266;

}
frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:424
uint16_t $tmp267 = param0.value;
uint16_t $tmp268 = param1.value;
uint32_t $tmp269 = ((uint32_t) $tmp267) | ((uint32_t) $tmp268);
frost$core$UInt32 $tmp270 = (frost$core$UInt32) {$tmp269};
return $tmp270;

}
frost$core$UInt16 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:429
uint16_t $tmp271 = param0.value;
uint16_t $tmp272 = param1.value;
uint16_t $tmp273 = $tmp271 | $tmp272;
frost$core$UInt16 $tmp274 = (frost$core$UInt16) {$tmp273};
return $tmp274;

}
frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:435
uint16_t $tmp275 = param0.value;
uint32_t $tmp276 = param1.value;
uint32_t $tmp277 = ((uint32_t) $tmp275) | $tmp276;
frost$core$UInt32 $tmp278 = (frost$core$UInt32) {$tmp277};
return $tmp278;

}
frost$core$UInt64 frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:441
uint16_t $tmp279 = param0.value;
uint64_t $tmp280 = param1.value;
uint64_t $tmp281 = ((uint64_t) $tmp279) | $tmp280;
frost$core$UInt64 $tmp282 = (frost$core$UInt64) {$tmp281};
return $tmp282;

}
frost$core$UInt frost$core$UInt16$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:447
uint16_t $tmp283 = param0.value;
uint64_t $tmp284 = param1.value;
uint64_t $tmp285 = ((uint64_t) $tmp283) | $tmp284;
frost$core$UInt $tmp286 = (frost$core$UInt) {$tmp285};
return $tmp286;

}
frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:453
uint16_t $tmp287 = param0.value;
int16_t $tmp288 = param1.value;
int32_t $tmp289 = ((int32_t) $tmp287) ^ ((int32_t) $tmp288);
frost$core$Int32 $tmp290 = (frost$core$Int32) {$tmp289};
return $tmp290;

}
frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:459
uint16_t $tmp291 = param0.value;
int32_t $tmp292 = param1.value;
int32_t $tmp293 = ((int32_t) $tmp291) ^ $tmp292;
frost$core$Int32 $tmp294 = (frost$core$Int32) {$tmp293};
return $tmp294;

}
frost$core$Int64 frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:465
uint16_t $tmp295 = param0.value;
int64_t $tmp296 = param1.value;
int64_t $tmp297 = ((int64_t) $tmp295) ^ $tmp296;
frost$core$Int64 $tmp298 = (frost$core$Int64) {$tmp297};
return $tmp298;

}
frost$core$Int frost$core$UInt16$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:471
uint16_t $tmp299 = param0.value;
int64_t $tmp300 = param1.value;
int64_t $tmp301 = ((int64_t) $tmp299) ^ $tmp300;
frost$core$Int $tmp302 = (frost$core$Int) {$tmp301};
return $tmp302;

}
frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:477
uint16_t $tmp303 = param0.value;
uint16_t $tmp304 = param1.value;
uint32_t $tmp305 = ((uint32_t) $tmp303) ^ ((uint32_t) $tmp304);
frost$core$UInt32 $tmp306 = (frost$core$UInt32) {$tmp305};
return $tmp306;

}
frost$core$UInt16 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:482
uint16_t $tmp307 = param0.value;
uint16_t $tmp308 = param1.value;
uint16_t $tmp309 = $tmp307 ^ $tmp308;
frost$core$UInt16 $tmp310 = (frost$core$UInt16) {$tmp309};
return $tmp310;

}
frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:488
uint16_t $tmp311 = param0.value;
uint32_t $tmp312 = param1.value;
uint32_t $tmp313 = ((uint32_t) $tmp311) ^ $tmp312;
frost$core$UInt32 $tmp314 = (frost$core$UInt32) {$tmp313};
return $tmp314;

}
frost$core$UInt64 frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:494
uint16_t $tmp315 = param0.value;
uint64_t $tmp316 = param1.value;
uint64_t $tmp317 = ((uint64_t) $tmp315) ^ $tmp316;
frost$core$UInt64 $tmp318 = (frost$core$UInt64) {$tmp317};
return $tmp318;

}
frost$core$UInt frost$core$UInt16$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:500
uint16_t $tmp319 = param0.value;
uint64_t $tmp320 = param1.value;
uint64_t $tmp321 = ((uint64_t) $tmp319) ^ $tmp320;
frost$core$UInt $tmp322 = (frost$core$UInt) {$tmp321};
return $tmp322;

}
frost$core$UInt32 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:506
uint16_t $tmp323 = param0.value;
uint16_t $tmp324 = param1.value;
uint32_t $tmp325 = ((uint32_t) $tmp323) << ((uint32_t) $tmp324);
frost$core$UInt32 $tmp326 = (frost$core$UInt32) {$tmp325};
return $tmp326;

}
frost$core$UInt16 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:511
uint16_t $tmp327 = param0.value;
uint16_t $tmp328 = param1.value;
uint16_t $tmp329 = $tmp327 << $tmp328;
frost$core$UInt16 $tmp330 = (frost$core$UInt16) {$tmp329};
return $tmp330;

}
frost$core$UInt32 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:517
uint16_t $tmp331 = param0.value;
uint16_t $tmp332 = param1.value;
uint32_t $tmp333 = ((uint32_t) $tmp331) >> ((uint32_t) $tmp332);
frost$core$UInt32 $tmp334 = (frost$core$UInt32) {$tmp333};
return $tmp334;

}
frost$core$UInt16 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:522
uint16_t $tmp335 = param0.value;
uint16_t $tmp336 = param1.value;
uint16_t $tmp337 = $tmp335 >> $tmp336;
frost$core$UInt16 $tmp338 = (frost$core$UInt16) {$tmp337};
return $tmp338;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:528
uint16_t $tmp339 = param0.value;
int8_t $tmp340 = param1.value;
bool $tmp341 = ((int32_t) $tmp339) == ((int32_t) $tmp340);
frost$core$Bit $tmp342 = (frost$core$Bit) {$tmp341};
return $tmp342;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:534
uint16_t $tmp343 = param0.value;
int16_t $tmp344 = param1.value;
bool $tmp345 = ((int32_t) $tmp343) == ((int32_t) $tmp344);
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
return $tmp346;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:540
uint16_t $tmp347 = param0.value;
int32_t $tmp348 = param1.value;
bool $tmp349 = ((int64_t) $tmp347) == ((int64_t) $tmp348);
frost$core$Bit $tmp350 = (frost$core$Bit) {$tmp349};
return $tmp350;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:546
uint16_t $tmp351 = param0.value;
int64_t $tmp352 = param1.value;
bool $tmp353 = ((int64_t) $tmp351) == ((int64_t) $tmp352);
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
return $tmp354;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:552
uint16_t $tmp355 = param0.value;
uint8_t $tmp356 = param1.value;
bool $tmp357 = $tmp355 == ((uint16_t) $tmp356);
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
return $tmp358;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:559
uint16_t $tmp359 = param0.value;
uint16_t $tmp360 = param1.value;
bool $tmp361 = $tmp359 == $tmp360;
frost$core$Bit $tmp362 = (frost$core$Bit) {$tmp361};
return $tmp362;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:565
uint16_t $tmp363 = param0.value;
uint32_t $tmp364 = param1.value;
bool $tmp365 = ((uint32_t) $tmp363) == $tmp364;
frost$core$Bit $tmp366 = (frost$core$Bit) {$tmp365};
return $tmp366;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:571
uint16_t $tmp367 = param0.value;
uint64_t $tmp368 = param1.value;
bool $tmp369 = ((uint64_t) $tmp367) == $tmp368;
frost$core$Bit $tmp370 = (frost$core$Bit) {$tmp369};
return $tmp370;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:577
uint16_t $tmp371 = param0.value;
uint64_t $tmp372 = param1.value;
bool $tmp373 = ((uint64_t) $tmp371) == $tmp372;
frost$core$Bit $tmp374 = (frost$core$Bit) {$tmp373};
return $tmp374;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:583
uint16_t $tmp375 = param0.value;
int8_t $tmp376 = param1.value;
bool $tmp377 = ((int32_t) $tmp375) != ((int32_t) $tmp376);
frost$core$Bit $tmp378 = (frost$core$Bit) {$tmp377};
return $tmp378;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:589
uint16_t $tmp379 = param0.value;
int16_t $tmp380 = param1.value;
bool $tmp381 = ((int32_t) $tmp379) != ((int32_t) $tmp380);
frost$core$Bit $tmp382 = (frost$core$Bit) {$tmp381};
return $tmp382;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:595
uint16_t $tmp383 = param0.value;
int32_t $tmp384 = param1.value;
bool $tmp385 = ((int64_t) $tmp383) != ((int64_t) $tmp384);
frost$core$Bit $tmp386 = (frost$core$Bit) {$tmp385};
return $tmp386;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:601
uint16_t $tmp387 = param0.value;
int64_t $tmp388 = param1.value;
bool $tmp389 = ((int64_t) $tmp387) != ((int64_t) $tmp388);
frost$core$Bit $tmp390 = (frost$core$Bit) {$tmp389};
return $tmp390;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:607
uint16_t $tmp391 = param0.value;
uint8_t $tmp392 = param1.value;
bool $tmp393 = $tmp391 != ((uint16_t) $tmp392);
frost$core$Bit $tmp394 = (frost$core$Bit) {$tmp393};
return $tmp394;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:614
uint16_t $tmp395 = param0.value;
uint16_t $tmp396 = param1.value;
bool $tmp397 = $tmp395 != $tmp396;
frost$core$Bit $tmp398 = (frost$core$Bit) {$tmp397};
return $tmp398;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:620
uint16_t $tmp399 = param0.value;
uint32_t $tmp400 = param1.value;
bool $tmp401 = ((uint32_t) $tmp399) != $tmp400;
frost$core$Bit $tmp402 = (frost$core$Bit) {$tmp401};
return $tmp402;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:626
uint16_t $tmp403 = param0.value;
uint64_t $tmp404 = param1.value;
bool $tmp405 = ((uint64_t) $tmp403) != $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
return $tmp406;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:632
uint16_t $tmp407 = param0.value;
uint64_t $tmp408 = param1.value;
bool $tmp409 = ((uint64_t) $tmp407) != $tmp408;
frost$core$Bit $tmp410 = (frost$core$Bit) {$tmp409};
return $tmp410;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:638
uint16_t $tmp411 = param0.value;
int8_t $tmp412 = param1.value;
bool $tmp413 = ((int32_t) $tmp411) < ((int32_t) $tmp412);
frost$core$Bit $tmp414 = (frost$core$Bit) {$tmp413};
return $tmp414;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:644
uint16_t $tmp415 = param0.value;
int16_t $tmp416 = param1.value;
bool $tmp417 = ((int32_t) $tmp415) < ((int32_t) $tmp416);
frost$core$Bit $tmp418 = (frost$core$Bit) {$tmp417};
return $tmp418;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:650
uint16_t $tmp419 = param0.value;
int32_t $tmp420 = param1.value;
bool $tmp421 = ((int64_t) $tmp419) < ((int64_t) $tmp420);
frost$core$Bit $tmp422 = (frost$core$Bit) {$tmp421};
return $tmp422;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:656
uint16_t $tmp423 = param0.value;
int64_t $tmp424 = param1.value;
bool $tmp425 = ((int64_t) $tmp423) < ((int64_t) $tmp424);
frost$core$Bit $tmp426 = (frost$core$Bit) {$tmp425};
return $tmp426;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:662
uint16_t $tmp427 = param0.value;
uint8_t $tmp428 = param1.value;
bool $tmp429 = $tmp427 < ((uint16_t) $tmp428);
frost$core$Bit $tmp430 = (frost$core$Bit) {$tmp429};
return $tmp430;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:669
uint16_t $tmp431 = param0.value;
uint16_t $tmp432 = param1.value;
bool $tmp433 = $tmp431 < $tmp432;
frost$core$Bit $tmp434 = (frost$core$Bit) {$tmp433};
return $tmp434;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:675
uint16_t $tmp435 = param0.value;
uint32_t $tmp436 = param1.value;
bool $tmp437 = ((uint32_t) $tmp435) < $tmp436;
frost$core$Bit $tmp438 = (frost$core$Bit) {$tmp437};
return $tmp438;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:681
uint16_t $tmp439 = param0.value;
uint64_t $tmp440 = param1.value;
bool $tmp441 = ((uint64_t) $tmp439) < $tmp440;
frost$core$Bit $tmp442 = (frost$core$Bit) {$tmp441};
return $tmp442;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:687
uint16_t $tmp443 = param0.value;
uint64_t $tmp444 = param1.value;
bool $tmp445 = ((uint64_t) $tmp443) < $tmp444;
frost$core$Bit $tmp446 = (frost$core$Bit) {$tmp445};
return $tmp446;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:693
uint16_t $tmp447 = param0.value;
int8_t $tmp448 = param1.value;
bool $tmp449 = ((int32_t) $tmp447) > ((int32_t) $tmp448);
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
return $tmp450;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:699
uint16_t $tmp451 = param0.value;
int16_t $tmp452 = param1.value;
bool $tmp453 = ((int32_t) $tmp451) > ((int32_t) $tmp452);
frost$core$Bit $tmp454 = (frost$core$Bit) {$tmp453};
return $tmp454;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:705
uint16_t $tmp455 = param0.value;
int32_t $tmp456 = param1.value;
bool $tmp457 = ((int64_t) $tmp455) > ((int64_t) $tmp456);
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
return $tmp458;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:711
uint16_t $tmp459 = param0.value;
int64_t $tmp460 = param1.value;
bool $tmp461 = ((int64_t) $tmp459) > ((int64_t) $tmp460);
frost$core$Bit $tmp462 = (frost$core$Bit) {$tmp461};
return $tmp462;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:717
uint16_t $tmp463 = param0.value;
uint8_t $tmp464 = param1.value;
bool $tmp465 = $tmp463 > ((uint16_t) $tmp464);
frost$core$Bit $tmp466 = (frost$core$Bit) {$tmp465};
return $tmp466;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:724
uint16_t $tmp467 = param0.value;
uint16_t $tmp468 = param1.value;
bool $tmp469 = $tmp467 > $tmp468;
frost$core$Bit $tmp470 = (frost$core$Bit) {$tmp469};
return $tmp470;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:730
uint16_t $tmp471 = param0.value;
uint32_t $tmp472 = param1.value;
bool $tmp473 = ((uint32_t) $tmp471) > $tmp472;
frost$core$Bit $tmp474 = (frost$core$Bit) {$tmp473};
return $tmp474;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:736
uint16_t $tmp475 = param0.value;
uint64_t $tmp476 = param1.value;
bool $tmp477 = ((uint64_t) $tmp475) > $tmp476;
frost$core$Bit $tmp478 = (frost$core$Bit) {$tmp477};
return $tmp478;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:742
uint16_t $tmp479 = param0.value;
uint64_t $tmp480 = param1.value;
bool $tmp481 = ((uint64_t) $tmp479) > $tmp480;
frost$core$Bit $tmp482 = (frost$core$Bit) {$tmp481};
return $tmp482;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:748
uint16_t $tmp483 = param0.value;
int8_t $tmp484 = param1.value;
bool $tmp485 = ((int32_t) $tmp483) >= ((int32_t) $tmp484);
frost$core$Bit $tmp486 = (frost$core$Bit) {$tmp485};
return $tmp486;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:754
uint16_t $tmp487 = param0.value;
int16_t $tmp488 = param1.value;
bool $tmp489 = ((int32_t) $tmp487) >= ((int32_t) $tmp488);
frost$core$Bit $tmp490 = (frost$core$Bit) {$tmp489};
return $tmp490;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:760
uint16_t $tmp491 = param0.value;
int32_t $tmp492 = param1.value;
bool $tmp493 = ((int64_t) $tmp491) >= ((int64_t) $tmp492);
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
return $tmp494;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:766
uint16_t $tmp495 = param0.value;
int64_t $tmp496 = param1.value;
bool $tmp497 = ((int64_t) $tmp495) >= ((int64_t) $tmp496);
frost$core$Bit $tmp498 = (frost$core$Bit) {$tmp497};
return $tmp498;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:772
uint16_t $tmp499 = param0.value;
uint8_t $tmp500 = param1.value;
bool $tmp501 = $tmp499 >= ((uint16_t) $tmp500);
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
return $tmp502;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:779
uint16_t $tmp503 = param0.value;
uint16_t $tmp504 = param1.value;
bool $tmp505 = $tmp503 >= $tmp504;
frost$core$Bit $tmp506 = (frost$core$Bit) {$tmp505};
return $tmp506;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:785
uint16_t $tmp507 = param0.value;
uint32_t $tmp508 = param1.value;
bool $tmp509 = ((uint32_t) $tmp507) >= $tmp508;
frost$core$Bit $tmp510 = (frost$core$Bit) {$tmp509};
return $tmp510;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:791
uint16_t $tmp511 = param0.value;
uint64_t $tmp512 = param1.value;
bool $tmp513 = ((uint64_t) $tmp511) >= $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
return $tmp514;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:797
uint16_t $tmp515 = param0.value;
uint64_t $tmp516 = param1.value;
bool $tmp517 = ((uint64_t) $tmp515) >= $tmp516;
frost$core$Bit $tmp518 = (frost$core$Bit) {$tmp517};
return $tmp518;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:803
uint16_t $tmp519 = param0.value;
int8_t $tmp520 = param1.value;
bool $tmp521 = ((int32_t) $tmp519) <= ((int32_t) $tmp520);
frost$core$Bit $tmp522 = (frost$core$Bit) {$tmp521};
return $tmp522;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:809
uint16_t $tmp523 = param0.value;
int16_t $tmp524 = param1.value;
bool $tmp525 = ((int32_t) $tmp523) <= ((int32_t) $tmp524);
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
return $tmp526;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:815
uint16_t $tmp527 = param0.value;
int32_t $tmp528 = param1.value;
bool $tmp529 = ((int64_t) $tmp527) <= ((int64_t) $tmp528);
frost$core$Bit $tmp530 = (frost$core$Bit) {$tmp529};
return $tmp530;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:821
uint16_t $tmp531 = param0.value;
int64_t $tmp532 = param1.value;
bool $tmp533 = ((int64_t) $tmp531) <= ((int64_t) $tmp532);
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
return $tmp534;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:827
uint16_t $tmp535 = param0.value;
uint8_t $tmp536 = param1.value;
bool $tmp537 = $tmp535 <= ((uint16_t) $tmp536);
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
return $tmp538;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:834
uint16_t $tmp539 = param0.value;
uint16_t $tmp540 = param1.value;
bool $tmp541 = $tmp539 <= $tmp540;
frost$core$Bit $tmp542 = (frost$core$Bit) {$tmp541};
return $tmp542;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:840
uint16_t $tmp543 = param0.value;
uint32_t $tmp544 = param1.value;
bool $tmp545 = ((uint32_t) $tmp543) <= $tmp544;
frost$core$Bit $tmp546 = (frost$core$Bit) {$tmp545};
return $tmp546;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:846
uint16_t $tmp547 = param0.value;
uint64_t $tmp548 = param1.value;
bool $tmp549 = ((uint64_t) $tmp547) <= $tmp548;
frost$core$Bit $tmp550 = (frost$core$Bit) {$tmp549};
return $tmp550;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:852
uint16_t $tmp551 = param0.value;
uint64_t $tmp552 = param1.value;
bool $tmp553 = ((uint64_t) $tmp551) <= $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
return $tmp554;

}
frost$core$Int32 frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:858
uint16_t $tmp555 = param0.value;
int8_t $tmp556 = param1.value;
bool $tmp557 = ((int32_t) $tmp555) < ((int32_t) $tmp556);
frost$core$Bit $tmp558 = (frost$core$Bit) {$tmp557};
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:859
uint16_t $tmp560 = param0.value;
frost$core$Int32 $tmp561 = (frost$core$Int32) {((int32_t) $tmp560)};
return $tmp561;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:861
int8_t $tmp562 = param1.value;
frost$core$Int32 $tmp563 = (frost$core$Int32) {((int32_t) $tmp562)};
return $tmp563;

}
frost$core$Int32 frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:867
uint16_t $tmp564 = param0.value;
int16_t $tmp565 = param1.value;
bool $tmp566 = ((int32_t) $tmp564) < ((int32_t) $tmp565);
frost$core$Bit $tmp567 = (frost$core$Bit) {$tmp566};
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:868
uint16_t $tmp569 = param0.value;
frost$core$Int32 $tmp570 = (frost$core$Int32) {((int32_t) $tmp569)};
return $tmp570;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:870
int16_t $tmp571 = param1.value;
frost$core$Int32 $tmp572 = (frost$core$Int32) {((int32_t) $tmp571)};
return $tmp572;

}
frost$core$Int64 frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:876
uint16_t $tmp573 = param0.value;
int32_t $tmp574 = param1.value;
bool $tmp575 = ((int64_t) $tmp573) < ((int64_t) $tmp574);
frost$core$Bit $tmp576 = (frost$core$Bit) {$tmp575};
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:877
uint16_t $tmp578 = param0.value;
frost$core$Int64 $tmp579 = (frost$core$Int64) {((int64_t) $tmp578)};
return $tmp579;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:879
int32_t $tmp580 = param1.value;
frost$core$Int64 $tmp581 = (frost$core$Int64) {((int64_t) $tmp580)};
return $tmp581;

}
frost$core$Int64 frost$core$UInt16$min$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:886
uint16_t $tmp582 = param0.value;
int64_t $tmp583 = param1.value;
bool $tmp584 = ((int64_t) $tmp582) < ((int64_t) $tmp583);
frost$core$Bit $tmp585 = (frost$core$Bit) {$tmp584};
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:887
uint16_t $tmp587 = param0.value;
frost$core$Int64 $tmp588 = (frost$core$Int64) {((int64_t) $tmp587)};
return $tmp588;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:889
int64_t $tmp589 = param1.value;
frost$core$Int64 $tmp590 = (frost$core$Int64) {((int64_t) $tmp589)};
return $tmp590;

}
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:895
uint16_t $tmp591 = param0.value;
uint8_t $tmp592 = param1.value;
bool $tmp593 = $tmp591 < ((uint16_t) $tmp592);
frost$core$Bit $tmp594 = (frost$core$Bit) {$tmp593};
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:896
uint16_t $tmp596 = param0.value;
frost$core$UInt16 $tmp597 = (frost$core$UInt16) {$tmp596};
return $tmp597;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:898
uint8_t $tmp598 = param1.value;
frost$core$UInt16 $tmp599 = (frost$core$UInt16) {((uint16_t) $tmp598)};
return $tmp599;

}
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:904
uint16_t $tmp600 = param0.value;
uint16_t $tmp601 = param1.value;
bool $tmp602 = $tmp600 < $tmp601;
frost$core$Bit $tmp603 = (frost$core$Bit) {$tmp602};
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:905
uint16_t $tmp605 = param0.value;
frost$core$UInt16 $tmp606 = (frost$core$UInt16) {$tmp605};
return $tmp606;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:907
uint16_t $tmp607 = param1.value;
frost$core$UInt16 $tmp608 = (frost$core$UInt16) {$tmp607};
return $tmp608;

}
frost$core$UInt32 frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:913
uint16_t $tmp609 = param0.value;
uint32_t $tmp610 = param1.value;
bool $tmp611 = ((uint32_t) $tmp609) < $tmp610;
frost$core$Bit $tmp612 = (frost$core$Bit) {$tmp611};
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:914
uint16_t $tmp614 = param0.value;
frost$core$UInt32 $tmp615 = (frost$core$UInt32) {((uint32_t) $tmp614)};
return $tmp615;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:916
uint32_t $tmp616 = param1.value;
frost$core$UInt32 $tmp617 = (frost$core$UInt32) {$tmp616};
return $tmp617;

}
frost$core$UInt64 frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:922
uint16_t $tmp618 = param0.value;
uint64_t $tmp619 = param1.value;
bool $tmp620 = ((uint64_t) $tmp618) < $tmp619;
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:923
uint16_t $tmp623 = param0.value;
frost$core$UInt64 $tmp624 = (frost$core$UInt64) {((uint64_t) $tmp623)};
return $tmp624;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:925
uint64_t $tmp625 = param1.value;
frost$core$UInt64 $tmp626 = (frost$core$UInt64) {$tmp625};
return $tmp626;

}
frost$core$UInt frost$core$UInt16$min$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:931
uint16_t $tmp627 = param0.value;
uint64_t $tmp628 = param1.value;
bool $tmp629 = ((uint64_t) $tmp627) < $tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629};
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:932
uint16_t $tmp632 = param0.value;
frost$core$UInt $tmp633 = (frost$core$UInt) {((uint64_t) $tmp632)};
return $tmp633;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:934
uint64_t $tmp634 = param1.value;
frost$core$UInt $tmp635 = (frost$core$UInt) {$tmp634};
return $tmp635;

}
frost$core$Int32 frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:940
uint16_t $tmp636 = param0.value;
int8_t $tmp637 = param1.value;
bool $tmp638 = ((int32_t) $tmp636) > ((int32_t) $tmp637);
frost$core$Bit $tmp639 = (frost$core$Bit) {$tmp638};
bool $tmp640 = $tmp639.value;
if ($tmp640) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:941
uint16_t $tmp641 = param0.value;
frost$core$Int32 $tmp642 = (frost$core$Int32) {((int32_t) $tmp641)};
return $tmp642;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:943
int8_t $tmp643 = param1.value;
frost$core$Int32 $tmp644 = (frost$core$Int32) {((int32_t) $tmp643)};
return $tmp644;

}
frost$core$Int32 frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:949
uint16_t $tmp645 = param0.value;
int16_t $tmp646 = param1.value;
bool $tmp647 = ((int32_t) $tmp645) > ((int32_t) $tmp646);
frost$core$Bit $tmp648 = (frost$core$Bit) {$tmp647};
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:950
uint16_t $tmp650 = param0.value;
frost$core$Int32 $tmp651 = (frost$core$Int32) {((int32_t) $tmp650)};
return $tmp651;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:952
int16_t $tmp652 = param1.value;
frost$core$Int32 $tmp653 = (frost$core$Int32) {((int32_t) $tmp652)};
return $tmp653;

}
frost$core$Int64 frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:958
uint16_t $tmp654 = param0.value;
int32_t $tmp655 = param1.value;
bool $tmp656 = ((int64_t) $tmp654) > ((int64_t) $tmp655);
frost$core$Bit $tmp657 = (frost$core$Bit) {$tmp656};
bool $tmp658 = $tmp657.value;
if ($tmp658) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:959
uint16_t $tmp659 = param0.value;
frost$core$Int64 $tmp660 = (frost$core$Int64) {((int64_t) $tmp659)};
return $tmp660;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:961
int32_t $tmp661 = param1.value;
frost$core$Int64 $tmp662 = (frost$core$Int64) {((int64_t) $tmp661)};
return $tmp662;

}
frost$core$Int64 frost$core$UInt16$max$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:968
uint16_t $tmp663 = param0.value;
int64_t $tmp664 = param1.value;
bool $tmp665 = ((int64_t) $tmp663) > ((int64_t) $tmp664);
frost$core$Bit $tmp666 = (frost$core$Bit) {$tmp665};
bool $tmp667 = $tmp666.value;
if ($tmp667) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:969
uint16_t $tmp668 = param0.value;
frost$core$Int64 $tmp669 = (frost$core$Int64) {((int64_t) $tmp668)};
return $tmp669;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:971
int64_t $tmp670 = param1.value;
frost$core$Int64 $tmp671 = (frost$core$Int64) {((int64_t) $tmp670)};
return $tmp671;

}
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:977
uint16_t $tmp672 = param0.value;
uint8_t $tmp673 = param1.value;
bool $tmp674 = $tmp672 > ((uint16_t) $tmp673);
frost$core$Bit $tmp675 = (frost$core$Bit) {$tmp674};
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:978
uint16_t $tmp677 = param0.value;
frost$core$UInt16 $tmp678 = (frost$core$UInt16) {$tmp677};
return $tmp678;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:980
uint8_t $tmp679 = param1.value;
frost$core$UInt16 $tmp680 = (frost$core$UInt16) {((uint16_t) $tmp679)};
return $tmp680;

}
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:986
uint16_t $tmp681 = param0.value;
uint16_t $tmp682 = param1.value;
bool $tmp683 = $tmp681 > $tmp682;
frost$core$Bit $tmp684 = (frost$core$Bit) {$tmp683};
bool $tmp685 = $tmp684.value;
if ($tmp685) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:987
uint16_t $tmp686 = param0.value;
frost$core$UInt16 $tmp687 = (frost$core$UInt16) {$tmp686};
return $tmp687;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:989
uint16_t $tmp688 = param1.value;
frost$core$UInt16 $tmp689 = (frost$core$UInt16) {$tmp688};
return $tmp689;

}
frost$core$UInt32 frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:995
uint16_t $tmp690 = param0.value;
uint32_t $tmp691 = param1.value;
bool $tmp692 = ((uint32_t) $tmp690) > $tmp691;
frost$core$Bit $tmp693 = (frost$core$Bit) {$tmp692};
bool $tmp694 = $tmp693.value;
if ($tmp694) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:996
uint16_t $tmp695 = param0.value;
frost$core$UInt32 $tmp696 = (frost$core$UInt32) {((uint32_t) $tmp695)};
return $tmp696;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:998
uint32_t $tmp697 = param1.value;
frost$core$UInt32 $tmp698 = (frost$core$UInt32) {$tmp697};
return $tmp698;

}
frost$core$UInt64 frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1004
uint16_t $tmp699 = param0.value;
uint64_t $tmp700 = param1.value;
bool $tmp701 = ((uint64_t) $tmp699) > $tmp700;
frost$core$Bit $tmp702 = (frost$core$Bit) {$tmp701};
bool $tmp703 = $tmp702.value;
if ($tmp703) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1005
uint16_t $tmp704 = param0.value;
frost$core$UInt64 $tmp705 = (frost$core$UInt64) {((uint64_t) $tmp704)};
return $tmp705;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1007
uint64_t $tmp706 = param1.value;
frost$core$UInt64 $tmp707 = (frost$core$UInt64) {$tmp706};
return $tmp707;

}
frost$core$UInt frost$core$UInt16$max$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1013
uint16_t $tmp708 = param0.value;
uint64_t $tmp709 = param1.value;
bool $tmp710 = ((uint64_t) $tmp708) > $tmp709;
frost$core$Bit $tmp711 = (frost$core$Bit) {$tmp710};
bool $tmp712 = $tmp711.value;
if ($tmp712) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1014
uint16_t $tmp713 = param0.value;
frost$core$UInt $tmp714 = (frost$core$UInt) {((uint64_t) $tmp713)};
return $tmp714;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1016
uint64_t $tmp715 = param1.value;
frost$core$UInt $tmp716 = (frost$core$UInt) {$tmp715};
return $tmp716;

}
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$Range$LTfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$Range$LTfrost$core$UInt16$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1021
FROST_ASSERT(32 == sizeof(org$frostlang$frost$UInt16List));
org$frostlang$frost$UInt16List* $tmp717 = (org$frostlang$frost$UInt16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt16List$class);
frost$core$UInt16 $tmp718 = param0.min;
frost$core$UInt16 $tmp719 = param0.max;
frost$core$UInt16 $tmp720 = (frost$core$UInt16) {1u};
frost$core$Bit $tmp721 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT $tmp722 = frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$init$frost$core$UInt16$frost$core$UInt16$frost$core$UInt16$frost$core$Bit($tmp718, $tmp719, $tmp720, $tmp721);
org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT($tmp717, $tmp722);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp717)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp717));
return ((frost$collections$ListView*) $tmp717);

}
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1026
FROST_ASSERT(32 == sizeof(org$frostlang$frost$UInt16List));
org$frostlang$frost$UInt16List* $tmp723 = (org$frostlang$frost$UInt16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt16List$class);
org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT($tmp723, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp723)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp723));
return ((frost$collections$ListView*) $tmp723);

}
frost$core$Bit frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

frost$core$Int $tmp724 = (frost$core$Int) {0u};
int64_t $tmp725 = param1.value;
int64_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 >= $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block3; else goto block2;
block3:;
frost$core$UInt16$wrapper* $tmp730;
$tmp730 = (frost$core$UInt16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$UInt16$wrapperclass);
$tmp730->value = param0;
ITable* $tmp731 = ((frost$collections$CollectionView*) $tmp730)->$class->itable;
while ($tmp731->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp731 = $tmp731->next;
}
$fn733 $tmp732 = $tmp731->methods[0];
frost$core$Int $tmp734 = $tmp732(((frost$collections$CollectionView*) $tmp730));
int64_t $tmp735 = param1.value;
int64_t $tmp736 = $tmp734.value;
bool $tmp737 = $tmp735 < $tmp736;
frost$core$Bit $tmp738 = (frost$core$Bit) {$tmp737};
bool $tmp739 = $tmp738.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp730)));
if ($tmp739) goto block1; else goto block2;
block2:;
frost$core$Int $tmp740 = (frost$core$Int) {1031u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s741, $tmp740, &$s742);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1032
frost$core$Int $tmp743 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt16.frost:1032:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
int64_t $tmp744 = $tmp743.value;
int64_t $tmp745 = param1.value;
int64_t $tmp746 = $tmp744 << $tmp745;
frost$core$Int $tmp747 = (frost$core$Int) {$tmp746};
// begin inline call to function frost.core.UInt16.&&(other:frost.core.Int):frost.core.Int from UInt16.frost:1032:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:365
uint16_t $tmp748 = param0.value;
int64_t $tmp749 = $tmp747.value;
int64_t $tmp750 = ((int64_t) $tmp748) & $tmp749;
frost$core$Int $tmp751 = (frost$core$Int) {$tmp750};
frost$core$Int $tmp752 = (frost$core$Int) {0u};
int64_t $tmp753 = $tmp751.value;
int64_t $tmp754 = $tmp752.value;
bool $tmp755 = $tmp753 != $tmp754;
frost$core$Bit $tmp756 = (frost$core$Bit) {$tmp755};
return $tmp756;

}
frost$core$Int frost$core$UInt16$get_count$R$frost$core$Int(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1038
frost$core$Int $tmp757 = (frost$core$Int) {16u};
return $tmp757;

}
frost$collections$Iterator* frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1048
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp758 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.UInt16.get_asUInt64():frost.core.UInt64 from UInt16.frost:1048:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1118
uint16_t $tmp759 = param0.value;
frost$core$UInt64 $tmp760 = (frost$core$UInt64) {((uint64_t) $tmp759)};
frost$core$UInt64 $tmp761 = (frost$core$UInt64) {32768u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp758, $tmp760, $tmp761);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp758)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp758));
return ((frost$collections$Iterator*) $tmp758);

}
frost$core$Int frost$core$UInt16$get_hash$R$frost$core$Int(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1053
uint16_t $tmp762 = param0.value;
frost$core$Int $tmp763 = (frost$core$Int) {((int64_t) $tmp762)};
return $tmp763;

}
frost$core$UInt16$nullable frost$core$UInt16$parse$frost$core$String$frost$core$Int$R$frost$core$UInt16$Q(frost$core$String* param0, frost$core$Int param1) {

frost$core$UInt64$nullable local0;
frost$core$Int $tmp764 = (frost$core$Int) {2u};
int64_t $tmp765 = param1.value;
int64_t $tmp766 = $tmp764.value;
bool $tmp767 = $tmp765 >= $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block3; else goto block2;
block3:;
frost$core$Int $tmp770 = (frost$core$Int) {36u};
int64_t $tmp771 = param1.value;
int64_t $tmp772 = $tmp770.value;
bool $tmp773 = $tmp771 <= $tmp772;
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block1; else goto block2;
block2:;
frost$core$Int $tmp776 = (frost$core$Int) {1059u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s777, $tmp776, &$s778);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1060
frost$core$UInt64$nullable $tmp779 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp779;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1061
frost$core$UInt64$nullable $tmp780 = *(&local0);
frost$core$Bit $tmp781 = (frost$core$Bit) {!$tmp780.nonnull};
bool $tmp782 = $tmp781.value;
if ($tmp782) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1062
return ((frost$core$UInt16$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1064
frost$core$UInt64$nullable $tmp783 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asUInt16():frost.core.UInt16 from UInt16.frost:1064:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:586
uint64_t $tmp784 = ((frost$core$UInt64) $tmp783.value).value;
frost$core$UInt16 $tmp785 = (frost$core$UInt16) {((uint16_t) $tmp784)};
return ((frost$core$UInt16$nullable) { $tmp785, true });

}
frost$core$Int frost$core$UInt16$get_asInt$R$frost$core$Int(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1070
uint16_t $tmp786 = param0.value;
frost$core$Int $tmp787 = (frost$core$Int) {((int64_t) $tmp786)};
return $tmp787;

}
frost$core$Int8 frost$core$UInt16$get_asInt8$R$frost$core$Int8(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1076
uint16_t $tmp788 = param0.value;
frost$core$Int8 $tmp789 = (frost$core$Int8) {((int8_t) $tmp788)};
return $tmp789;

}
frost$core$Int16 frost$core$UInt16$get_asInt16$R$frost$core$Int16(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1082
uint16_t $tmp790 = param0.value;
frost$core$Int16 $tmp791 = (frost$core$Int16) {((int16_t) $tmp790)};
return $tmp791;

}
frost$core$Int32 frost$core$UInt16$get_asInt32$R$frost$core$Int32(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1088
uint16_t $tmp792 = param0.value;
frost$core$Int32 $tmp793 = (frost$core$Int32) {((int32_t) $tmp792)};
return $tmp793;

}
frost$core$Int64 frost$core$UInt16$get_asInt64$R$frost$core$Int64(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1094
uint16_t $tmp794 = param0.value;
frost$core$Int64 $tmp795 = (frost$core$Int64) {((int64_t) $tmp794)};
return $tmp795;

}
frost$core$UInt frost$core$UInt16$get_asUInt$R$frost$core$UInt(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1100
uint16_t $tmp796 = param0.value;
frost$core$UInt $tmp797 = (frost$core$UInt) {((uint64_t) $tmp796)};
return $tmp797;

}
frost$core$UInt8 frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1106
uint16_t $tmp798 = param0.value;
frost$core$UInt8 $tmp799 = (frost$core$UInt8) {((uint8_t) $tmp798)};
return $tmp799;

}
frost$core$UInt32 frost$core$UInt16$get_asUInt32$R$frost$core$UInt32(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1112
uint16_t $tmp800 = param0.value;
frost$core$UInt32 $tmp801 = (frost$core$UInt32) {((uint32_t) $tmp800)};
return $tmp801;

}
frost$core$UInt64 frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1118
uint16_t $tmp802 = param0.value;
frost$core$UInt64 $tmp803 = (frost$core$UInt64) {((uint64_t) $tmp802)};
return $tmp803;

}
frost$core$Real32 frost$core$UInt16$get_asReal32$R$frost$core$Real32(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1124
uint16_t $tmp804 = param0.value;
frost$core$Real32 $tmp805 = (frost$core$Real32) {((float) $tmp804)};
return $tmp805;

}
frost$core$Real64 frost$core$UInt16$get_asReal64$R$frost$core$Real64(frost$core$UInt16 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1130
uint16_t $tmp806 = param0.value;
frost$core$Real64 $tmp807 = (frost$core$Real64) {((double) $tmp806)};
return $tmp807;

}
frost$core$String* frost$core$UInt16$get_asString$R$frost$core$String(frost$core$UInt16 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$UInt16 local3;
frost$core$Int local4;
frost$core$Int local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1136
frost$core$Int $tmp808 = (frost$core$Int) {5u};
*(&local0) = $tmp808;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1137
frost$core$Int $tmp809 = *(&local0);
frost$core$Int64 $tmp810 = frost$core$Int64$init$frost$core$Int($tmp809);
int64_t $tmp811 = $tmp810.value;
frost$core$Char8* $tmp812 = ((frost$core$Char8*) frostAlloc($tmp811 * 1));
*(&local1) = $tmp812;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1138
frost$core$Int $tmp813 = *(&local0);
frost$core$Int $tmp814 = (frost$core$Int) {1u};
int64_t $tmp815 = $tmp813.value;
int64_t $tmp816 = $tmp814.value;
int64_t $tmp817 = $tmp815 - $tmp816;
frost$core$Int $tmp818 = (frost$core$Int) {$tmp817};
*(&local2) = $tmp818;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1139
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1140
frost$core$UInt16 $tmp819 = *(&local3);
frost$core$UInt16 $tmp820 = (frost$core$UInt16) {0u};
uint16_t $tmp821 = $tmp819.value;
uint16_t $tmp822 = $tmp820.value;
bool $tmp823 = $tmp821 >= $tmp822;
frost$core$Bit $tmp824 = (frost$core$Bit) {$tmp823};
bool $tmp825 = $tmp824.value;
if ($tmp825) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1141
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1142
frost$core$Char8* $tmp826 = *(&local1);
frost$core$Int $tmp827 = *(&local2);
frost$core$Int64 $tmp828 = frost$core$Int64$init$frost$core$Int($tmp827);
frost$core$UInt16 $tmp829 = *(&local3);
frost$core$UInt16 $tmp830 = (frost$core$UInt16) {10u};
// begin inline call to function frost.core.UInt16.%(other:frost.core.UInt16):frost.core.UInt32 from UInt16.frost:1142:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:253
uint16_t $tmp831 = $tmp829.value;
uint16_t $tmp832 = $tmp830.value;
uint32_t $tmp833 = ((uint32_t) $tmp831) % ((uint32_t) $tmp832);
frost$core$UInt32 $tmp834 = (frost$core$UInt32) {$tmp833};
frost$core$UInt32 $tmp835 = (frost$core$UInt32) {48u};
uint32_t $tmp836 = $tmp834.value;
uint32_t $tmp837 = $tmp835.value;
uint32_t $tmp838 = $tmp836 + $tmp837;
frost$core$UInt32 $tmp839 = (frost$core$UInt32) {$tmp838};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt16.frost:1142:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
uint32_t $tmp840 = $tmp839.value;
frost$core$UInt8 $tmp841 = (frost$core$UInt8) {((uint8_t) $tmp840)};
frost$core$Char8 $tmp842 = frost$core$Char8$init$frost$core$UInt8($tmp841);
int64_t $tmp843 = $tmp828.value;
$tmp826[$tmp843] = $tmp842;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1143
frost$core$UInt16 $tmp844 = *(&local3);
frost$core$UInt32 $tmp845 = frost$core$UInt32$init$frost$core$UInt16($tmp844);
frost$core$UInt32 $tmp846 = (frost$core$UInt32) {10u};
uint32_t $tmp847 = $tmp845.value;
uint32_t $tmp848 = $tmp846.value;
uint32_t $tmp849 = $tmp847 / $tmp848;
frost$core$UInt32 $tmp850 = (frost$core$UInt32) {$tmp849};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from UInt16.frost:1143:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
uint32_t $tmp851 = $tmp850.value;
frost$core$UInt16 $tmp852 = (frost$core$UInt16) {((uint16_t) $tmp851)};
*(&local3) = $tmp852;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1144
frost$core$Int $tmp853 = *(&local2);
frost$core$Int $tmp854 = (frost$core$Int) {1u};
int64_t $tmp855 = $tmp853.value;
int64_t $tmp856 = $tmp854.value;
int64_t $tmp857 = $tmp855 - $tmp856;
frost$core$Int $tmp858 = (frost$core$Int) {$tmp857};
*(&local2) = $tmp858;
frost$core$UInt16 $tmp859 = *(&local3);
frost$core$UInt16 $tmp860 = (frost$core$UInt16) {0u};
uint16_t $tmp861 = $tmp859.value;
uint16_t $tmp862 = $tmp860.value;
bool $tmp863 = $tmp861 > $tmp862;
frost$core$Bit $tmp864 = (frost$core$Bit) {$tmp863};
bool $tmp865 = $tmp864.value;
if ($tmp865) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1147
frost$core$Int $tmp866 = *(&local2);
frost$core$Int $tmp867 = (frost$core$Int) {1u};
int64_t $tmp868 = $tmp866.value;
int64_t $tmp869 = $tmp867.value;
int64_t $tmp870 = $tmp868 + $tmp869;
frost$core$Int $tmp871 = (frost$core$Int) {$tmp870};
*(&local2) = $tmp871;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1150
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1151
frost$core$Char8* $tmp872 = *(&local1);
frost$core$Int $tmp873 = *(&local2);
frost$core$Int64 $tmp874 = frost$core$Int64$init$frost$core$Int($tmp873);
frost$core$UInt32 $tmp875 = (frost$core$UInt32) {48u};
frost$core$UInt16 $tmp876 = *(&local3);
frost$core$UInt16 $tmp877 = (frost$core$UInt16) {10u};
// begin inline call to function frost.core.UInt16.%(other:frost.core.UInt16):frost.core.UInt32 from UInt16.frost:1151:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:253
uint16_t $tmp878 = $tmp876.value;
uint16_t $tmp879 = $tmp877.value;
uint32_t $tmp880 = ((uint32_t) $tmp878) % ((uint32_t) $tmp879);
frost$core$UInt32 $tmp881 = (frost$core$UInt32) {$tmp880};
uint32_t $tmp882 = $tmp875.value;
uint32_t $tmp883 = $tmp881.value;
uint32_t $tmp884 = $tmp882 - $tmp883;
frost$core$UInt32 $tmp885 = (frost$core$UInt32) {$tmp884};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt16.frost:1151:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
uint32_t $tmp886 = $tmp885.value;
frost$core$UInt8 $tmp887 = (frost$core$UInt8) {((uint8_t) $tmp886)};
frost$core$Char8 $tmp888 = frost$core$Char8$init$frost$core$UInt8($tmp887);
int64_t $tmp889 = $tmp874.value;
$tmp872[$tmp889] = $tmp888;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1152
frost$core$UInt16 $tmp890 = *(&local3);
frost$core$UInt32 $tmp891 = frost$core$UInt32$init$frost$core$UInt16($tmp890);
frost$core$UInt32 $tmp892 = (frost$core$UInt32) {10u};
uint32_t $tmp893 = $tmp891.value;
uint32_t $tmp894 = $tmp892.value;
uint32_t $tmp895 = $tmp893 / $tmp894;
frost$core$UInt32 $tmp896 = (frost$core$UInt32) {$tmp895};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from UInt16.frost:1152:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
uint32_t $tmp897 = $tmp896.value;
frost$core$UInt16 $tmp898 = (frost$core$UInt16) {((uint16_t) $tmp897)};
*(&local3) = $tmp898;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1153
frost$core$Int $tmp899 = *(&local2);
frost$core$Int $tmp900 = (frost$core$Int) {1u};
int64_t $tmp901 = $tmp899.value;
int64_t $tmp902 = $tmp900.value;
int64_t $tmp903 = $tmp901 - $tmp902;
frost$core$Int $tmp904 = (frost$core$Int) {$tmp903};
*(&local2) = $tmp904;
frost$core$UInt16 $tmp905 = *(&local3);
frost$core$UInt16 $tmp906 = (frost$core$UInt16) {0u};
uint16_t $tmp907 = $tmp905.value;
uint16_t $tmp908 = $tmp906.value;
bool $tmp909 = $tmp907 < $tmp908;
frost$core$Bit $tmp910 = (frost$core$Bit) {$tmp909};
bool $tmp911 = $tmp910.value;
if ($tmp911) goto block10; else goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1156
frost$core$Char8* $tmp912 = *(&local1);
frost$core$Int $tmp913 = *(&local2);
frost$core$Int64 $tmp914 = frost$core$Int64$init$frost$core$Int($tmp913);
frost$core$UInt8 $tmp915 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp916 = frost$core$Char8$init$frost$core$UInt8($tmp915);
int64_t $tmp917 = $tmp914.value;
$tmp912[$tmp917] = $tmp916;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1158
frost$core$Int $tmp918 = *(&local0);
frost$core$Int $tmp919 = *(&local2);
int64_t $tmp920 = $tmp918.value;
int64_t $tmp921 = $tmp919.value;
int64_t $tmp922 = $tmp920 - $tmp921;
frost$core$Int $tmp923 = (frost$core$Int) {$tmp922};
*(&local4) = $tmp923;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1159
frost$core$Int $tmp924 = (frost$core$Int) {0u};
frost$core$Int $tmp925 = *(&local4);
frost$core$Bit $tmp926 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int$GT $tmp927 = frost$core$Range$LTfrost$core$Int$GT$init$frost$core$Int$frost$core$Int$frost$core$Bit($tmp924, $tmp925, $tmp926);
frost$core$Int $tmp928 = $tmp927.min;
*(&local5) = $tmp928;
frost$core$Int $tmp929 = $tmp927.max;
frost$core$Bit $tmp930 = $tmp927.inclusive;
bool $tmp931 = $tmp930.value;
frost$core$Int $tmp932 = (frost$core$Int) {1u};
if ($tmp931) goto block19; else goto block20;
block19:;
int64_t $tmp933 = $tmp928.value;
int64_t $tmp934 = $tmp929.value;
bool $tmp935 = $tmp933 <= $tmp934;
frost$core$Bit $tmp936 = (frost$core$Bit) {$tmp935};
bool $tmp937 = $tmp936.value;
if ($tmp937) goto block16; else goto block17;
block20:;
int64_t $tmp938 = $tmp928.value;
int64_t $tmp939 = $tmp929.value;
bool $tmp940 = $tmp938 < $tmp939;
frost$core$Bit $tmp941 = (frost$core$Bit) {$tmp940};
bool $tmp942 = $tmp941.value;
if ($tmp942) goto block16; else goto block17;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1160
frost$core$Char8* $tmp943 = *(&local1);
frost$core$Int $tmp944 = *(&local5);
frost$core$Int64 $tmp945 = frost$core$Int64$init$frost$core$Int($tmp944);
frost$core$Char8* $tmp946 = *(&local1);
frost$core$Int $tmp947 = *(&local5);
frost$core$Int $tmp948 = *(&local2);
int64_t $tmp949 = $tmp947.value;
int64_t $tmp950 = $tmp948.value;
int64_t $tmp951 = $tmp949 + $tmp950;
frost$core$Int $tmp952 = (frost$core$Int) {$tmp951};
frost$core$Int64 $tmp953 = frost$core$Int64$init$frost$core$Int($tmp952);
int64_t $tmp954 = $tmp953.value;
frost$core$Char8 $tmp955 = $tmp946[$tmp954];
int64_t $tmp956 = $tmp945.value;
$tmp943[$tmp956] = $tmp955;
frost$core$Int $tmp957 = *(&local5);
int64_t $tmp958 = $tmp929.value;
int64_t $tmp959 = $tmp957.value;
int64_t $tmp960 = $tmp958 - $tmp959;
frost$core$Int $tmp961 = (frost$core$Int) {$tmp960};
if ($tmp931) goto block22; else goto block23;
block22:;
int64_t $tmp962 = $tmp961.value;
int64_t $tmp963 = $tmp932.value;
bool $tmp964 = $tmp962 >= $tmp963;
frost$core$Bit $tmp965 = (frost$core$Bit) {$tmp964};
bool $tmp966 = $tmp965.value;
if ($tmp966) goto block21; else goto block17;
block23:;
int64_t $tmp967 = $tmp961.value;
int64_t $tmp968 = $tmp932.value;
bool $tmp969 = $tmp967 > $tmp968;
frost$core$Bit $tmp970 = (frost$core$Bit) {$tmp969};
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block21; else goto block17;
block21:;
int64_t $tmp972 = $tmp957.value;
int64_t $tmp973 = $tmp932.value;
int64_t $tmp974 = $tmp972 + $tmp973;
frost$core$Int $tmp975 = (frost$core$Int) {$tmp974};
*(&local5) = $tmp975;
goto block16;
block17:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1162
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp976 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp977 = *(&local1);
frost$core$Int $tmp978 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int($tmp976, $tmp977, $tmp978);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp976));
return $tmp976;

}
frost$core$String* frost$core$UInt16$format$frost$core$String$R$frost$core$String(frost$core$UInt16 param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1168
frost$core$Bit $tmp979 = (frost$core$Bit) {false};
// begin inline call to function frost.core.UInt16.get_asUInt64():frost.core.UInt64 from UInt16.frost:1168:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1118
uint16_t $tmp980 = param0.value;
frost$core$UInt64 $tmp981 = (frost$core$UInt64) {((uint64_t) $tmp980)};
frost$core$UInt64 $tmp982 = (frost$core$UInt64) {65535u};
frost$core$String* $tmp983 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp979, $tmp981, $tmp982, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp983));
return $tmp983;

}
void frost$core$UInt16$cleanup(frost$core$UInt16 param0) {

return;

}

