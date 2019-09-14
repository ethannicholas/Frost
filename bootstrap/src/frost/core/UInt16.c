#include "frost/core/UInt16.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/HashKey.h"
#include "frost/core/Equatable.h"
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
__attribute__((weak)) frost$core$Int frost$core$UInt16$get_hash$R$frost$core$Int$shim(frost$core$Object* p0) {
    frost$core$Int result = frost$core$UInt16$get_hash$R$frost$core$Int(((frost$core$UInt16$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[17]; } frost$core$UInt16$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt16$_frost$collections$ListView, { frost$core$UInt16$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt16$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt16$_frost$collections$HashKey, { frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt16$_frost$core$Equatable, { frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt16$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt16$_frost$collections$Iterable, { frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt16$_frost$core$Comparable, { frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$UInt16$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt16$_frost$core$Formattable, { frost$core$UInt16$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$UInt16$class_type frost$core$UInt16$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt16$_frost$collections$CollectionView, { frost$core$UInt16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$ADD$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$ADD$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$SUB$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$SUB$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$SUB$R$frost$core$UInt16$shim, frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$MUL$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$MUL$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$INTDIV$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$INTDIV$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$REM$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$REM$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt16$$BNOT$R$frost$core$UInt16$shim, frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BAND$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BAND$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BXOR$frost$core$Int$R$frost$core$Int$shim, frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BXOR$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt$R$frost$core$Bit$shim, frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$min$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16$shim, frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$min$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$max$frost$core$Int$R$frost$core$Int64$shim, frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16$shim, frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$max$frost$core$UInt$R$frost$core$UInt$shim, frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$core$UInt16$get_count$R$frost$core$Int$shim, frost$core$UInt16$get_bitCount$R$frost$core$UInt16$shim, frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt16$get_hash$R$frost$core$Int$shim, frost$core$UInt16$get_asInt$R$frost$core$Int$shim, frost$core$UInt16$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt16$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt16$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt16$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt16$get_asUInt$R$frost$core$UInt$shim, frost$core$UInt16$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt16$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt16$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt16$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt16$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt16$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[17]; } frost$core$UInt16$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int$Q$Cfrost$core$Int$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$ListView$get_last$R$frost$collections$ListView$T, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$R$frost$collections$ListView$LT$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$collections$HashKey = { (frost$core$Class*) &frost$collections$HashKey$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$ListView, { frost$core$UInt16$get_hash$R$frost$core$Int$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt16$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$HashKey, { frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Equatable, { frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt16$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$Iterable, { frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Comparable, { frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$UInt16$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Formattable, { frost$core$UInt16$get_count$R$frost$core$Int$shim, frost$collections$ListView$get_first$R$frost$collections$ListView$T$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$UInt16$wrapperclass_type frost$core$UInt16$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$CollectionView, { frost$core$UInt16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int (*$fn4)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -3971116837131242237, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, -3971116837131242237, NULL };
static frost$core$String $s7 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 3637239000496995262, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 91, 8404044226111741979, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 3637239000496995262, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x3f", 121, -5127036384278193654, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 3637239000496995262, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, 7321660184590913765, NULL };

frost$core$UInt16 frost$core$UInt16$init$builtin_uint16(uint16_t param0) {

frost$core$UInt16 local0;
uint16_t* _1;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:30
_1 = &(&local0)->value;
*_1 = param0;
_3 = *(&local0);
return _3;

}
frost$core$UInt16 frost$core$UInt16$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt16 local0;
uint8_t _1;
uint16_t _2;
uint16_t* _3;
frost$core$UInt16 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:36
_1 = param0.value;
_2 = ((uint16_t) _1);
_3 = &(&local0)->value;
*_3 = _2;
_5 = *(&local0);
return _5;

}
frost$core$Int32 frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:42
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:48
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$ADD$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:54
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 + _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:60
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 + _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:65
_1 = param0.value;
_2 = param1.value;
_3 = _1 + _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:71
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:77
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt16$$ADD$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:83
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 + _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:89
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:95
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$SUB$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:101
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 - _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:107
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 - _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:112
_1 = param0.value;
_2 = param1.value;
_3 = _1 - _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:118
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:124
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt16$$SUB$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:130
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 - _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$UInt16 frost$core$UInt16$$SUB$R$frost$core$UInt16(frost$core$UInt16 param0) {

uint16_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:135
_1 = param0.value;
_2 = -_1;
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:141
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:147
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$MUL$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:153
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 * _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:159
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 * _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:164
_1 = param0.value;
_2 = param1.value;
_3 = _1 * _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:170
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:176
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt16$$MUL$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:182
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 * _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:188
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:194
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$INTDIV$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:200
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 / _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:206
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 / _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:211
_1 = param0.value;
_2 = param1.value;
_3 = _1 / _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:217
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:223
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt16$$INTDIV$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:229
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:235
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:241
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$Int64 frost$core$UInt16$$REM$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
int64_t _5;
frost$core$Int64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:247
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 % _4;
_6 = (frost$core$Int64) {_5};
return _6;

}
frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:253
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 % _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:258
_1 = param0.value;
_2 = param1.value;
_3 = _1 % _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:264
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:270
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt16$$REM$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:276
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 % _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Int8 param1) {

uint16_t _1;
float _2;
int8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:282
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
float _2;
int16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:288
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
float _2;
int32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:294
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt16 param0, frost$core$Int64 param1) {

uint16_t _1;
double _2;
int64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:300
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$UInt8 param1) {

uint16_t _1;
float _2;
uint8_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:306
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
float _2;
uint16_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:312
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
float _2;
uint32_t _3;
float _4;
float _5;
frost$core$Real32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:318
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = ((float) _3);
_5 = _2 / _4;
_6 = (frost$core$Real32) {_5};
return _6;

}
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
double _2;
uint64_t _3;
double _4;
double _5;
frost$core$Real64 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:324
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = ((double) _3);
_5 = _2 / _4;
_6 = (frost$core$Real64) {_5};
return _6;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Real32 param1) {

uint16_t _1;
float _2;
float _3;
float _4;
frost$core$Real32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:330
_1 = param0.value;
_2 = ((float) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real32) {_4};
return _5;

}
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt16 param0, frost$core$Real64 param1) {

uint16_t _1;
double _2;
double _3;
double _4;
frost$core$Real64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:336
_1 = param0.value;
_2 = ((double) _1);
_3 = param1.value;
_4 = _2 / _3;
_5 = (frost$core$Real64) {_4};
return _5;

}
frost$core$UInt16 frost$core$UInt16$$BNOT$R$frost$core$UInt16(frost$core$UInt16 param0) {

uint16_t _1;
uint16_t _2;
frost$core$UInt16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:341
_1 = param0.value;
_2 = ~_1;
_3 = (frost$core$UInt16) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:347
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:353
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:359
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt16$$BAND$frost$core$Int$R$frost$core$Int(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:365
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:371
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 & _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:376
_1 = param0.value;
_2 = param1.value;
_3 = _1 & _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:382
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:388
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt16$$BAND$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:394
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 & _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:400
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:406
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:412
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt16$$BOR$frost$core$Int$R$frost$core$Int(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:418
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:424
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 | _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:429
_1 = param0.value;
_2 = param1.value;
_3 = _1 | _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:435
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:441
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt16$$BOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:447
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 | _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
int32_t _5;
frost$core$Int32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:453
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$Int32) {_5};
return _6;

}
frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int32_t _2;
int32_t _3;
int32_t _4;
frost$core$Int32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:459
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int32) {_4};
return _5;

}
frost$core$Int64 frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:465
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int64) {_4};
return _5;

}
frost$core$Int frost$core$UInt16$$BXOR$frost$core$Int$R$frost$core$Int(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
frost$core$Int _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:471
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$Int) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:477
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 ^ _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:482
_1 = param0.value;
_2 = param1.value;
_3 = _1 ^ _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
uint32_t _4;
frost$core$UInt32 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:488
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt32) {_4};
return _5;

}
frost$core$UInt64 frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt64 _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:494
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt64) {_4};
return _5;

}
frost$core$UInt frost$core$UInt16$$BXOR$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
uint64_t _4;
frost$core$UInt _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:500
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 ^ _3;
_5 = (frost$core$UInt) {_4};
return _5;

}
frost$core$UInt32 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:506
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 << _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:511
_1 = param0.value;
_2 = param1.value;
_3 = _1 << _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$UInt32 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint32_t _2;
uint16_t _3;
uint32_t _4;
uint32_t _5;
frost$core$UInt32 _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:517
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = ((uint32_t) _3);
_5 = _2 >> _4;
_6 = (frost$core$UInt32) {_5};
return _6;

}
frost$core$UInt16 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
uint16_t _3;
frost$core$UInt16 _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:522
_1 = param0.value;
_2 = param1.value;
_3 = _1 >> _2;
_4 = (frost$core$UInt16) {_3};
return _4;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

uint16_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:528
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:534
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:540
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:546
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 == _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

uint16_t _1;
uint8_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:552
_1 = param0.value;
_2 = param1.value;
_3 = ((uint16_t) _2);
_4 = _1 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:559
_1 = param0.value;
_2 = param1.value;
_3 = _1 == _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:565
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:571
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:577
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 == _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

uint16_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:583
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:589
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:595
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:601
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 != _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

uint16_t _1;
uint8_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:607
_1 = param0.value;
_2 = param1.value;
_3 = ((uint16_t) _2);
_4 = _1 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:614
_1 = param0.value;
_2 = param1.value;
_3 = _1 != _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:620
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:626
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:632
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 != _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

uint16_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:638
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:644
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:650
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:656
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

uint16_t _1;
uint8_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:662
_1 = param0.value;
_2 = param1.value;
_3 = ((uint16_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:669
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:675
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:681
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:687
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

uint16_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:693
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:699
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:705
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:711
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

uint16_t _1;
uint8_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:717
_1 = param0.value;
_2 = param1.value;
_3 = ((uint16_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:724
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:730
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:736
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:742
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

uint16_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:748
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:754
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:760
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:766
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 >= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

uint16_t _1;
uint8_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:772
_1 = param0.value;
_2 = param1.value;
_3 = ((uint16_t) _2);
_4 = _1 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:779
_1 = param0.value;
_2 = param1.value;
_3 = _1 >= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:785
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:791
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:797
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 >= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

uint16_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:803
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:809
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:815
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:821
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 <= _4;
_6 = (frost$core$Bit) {_5};
return _6;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

uint16_t _1;
uint8_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:827
_1 = param0.value;
_2 = param1.value;
_3 = ((uint16_t) _2);
_4 = _1 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:834
_1 = param0.value;
_2 = param1.value;
_3 = _1 <= _2;
_4 = (frost$core$Bit) {_3};
return _4;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:840
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:846
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:852
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 <= _3;
_5 = (frost$core$Bit) {_4};
return _5;

}
frost$core$Int32 frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int8 param1) {

uint16_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint16_t _10;
int32_t _11;
frost$core$Int32 _12;
int8_t _15;
int32_t _16;
frost$core$Int32 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:858
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:859
_10 = param0.value;
_11 = ((int32_t) _10);
_12 = (frost$core$Int32) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:861
_15 = param1.value;
_16 = ((int32_t) _15);
_17 = (frost$core$Int32) {_16};
return _17;

}
frost$core$Int32 frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint16_t _10;
int32_t _11;
frost$core$Int32 _12;
int16_t _15;
int32_t _16;
frost$core$Int32 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:867
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:868
_10 = param0.value;
_11 = ((int32_t) _10);
_12 = (frost$core$Int32) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:870
_15 = param1.value;
_16 = ((int32_t) _15);
_17 = (frost$core$Int32) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint16_t _10;
int64_t _11;
frost$core$Int64 _12;
int32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:876
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:877
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:879
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt16$min$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint16_t _10;
int64_t _11;
frost$core$Int64 _12;
int64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:886
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 < _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:887
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:889
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt8 param1) {

uint16_t _1;
uint8_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint16_t _9;
frost$core$UInt16 _10;
uint8_t _13;
uint16_t _14;
frost$core$UInt16 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:895
_1 = param0.value;
_2 = param1.value;
_3 = ((uint16_t) _2);
_4 = _1 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:896
_9 = param0.value;
_10 = (frost$core$UInt16) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:898
_13 = param1.value;
_14 = ((uint16_t) _13);
_15 = (frost$core$UInt16) {_14};
return _15;

}
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint16_t _8;
frost$core$UInt16 _9;
uint16_t _12;
frost$core$UInt16 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:904
_1 = param0.value;
_2 = param1.value;
_3 = _1 < _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:905
_8 = param0.value;
_9 = (frost$core$UInt16) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:907
_12 = param1.value;
_13 = (frost$core$UInt16) {_12};
return _13;

}
frost$core$UInt32 frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint16_t _9;
uint32_t _10;
frost$core$UInt32 _11;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:913
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:914
_9 = param0.value;
_10 = ((uint32_t) _9);
_11 = (frost$core$UInt32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:916
_14 = param1.value;
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint16_t _9;
uint64_t _10;
frost$core$UInt64 _11;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:922
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:923
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:925
_14 = param1.value;
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt frost$core$UInt16$min$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint16_t _9;
uint64_t _10;
frost$core$UInt _11;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:931
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 < _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:932
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:934
_14 = param1.value;
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$core$Int32 frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int8 param1) {

uint16_t _1;
int32_t _2;
int8_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint16_t _10;
int32_t _11;
frost$core$Int32 _12;
int8_t _15;
int32_t _16;
frost$core$Int32 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:940
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:941
_10 = param0.value;
_11 = ((int32_t) _10);
_12 = (frost$core$Int32) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:943
_15 = param1.value;
_16 = ((int32_t) _15);
_17 = (frost$core$Int32) {_16};
return _17;

}
frost$core$Int32 frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

uint16_t _1;
int32_t _2;
int16_t _3;
int32_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint16_t _10;
int32_t _11;
frost$core$Int32 _12;
int16_t _15;
int32_t _16;
frost$core$Int32 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:949
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = param1.value;
_4 = ((int32_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:950
_10 = param0.value;
_11 = ((int32_t) _10);
_12 = (frost$core$Int32) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:952
_15 = param1.value;
_16 = ((int32_t) _15);
_17 = (frost$core$Int32) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

uint16_t _1;
int64_t _2;
int32_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint16_t _10;
int64_t _11;
frost$core$Int64 _12;
int32_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:958
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:959
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:961
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$Int64 frost$core$UInt16$max$frost$core$Int$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int param1) {

uint16_t _1;
int64_t _2;
int64_t _3;
int64_t _4;
bool _5;
frost$core$Bit _6;
bool _7;
uint16_t _10;
int64_t _11;
frost$core$Int64 _12;
int64_t _15;
int64_t _16;
frost$core$Int64 _17;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:968
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = param1.value;
_4 = ((int64_t) _3);
_5 = _2 > _4;
_6 = (frost$core$Bit) {_5};
_7 = _6.value;
if (_7) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:969
_10 = param0.value;
_11 = ((int64_t) _10);
_12 = (frost$core$Int64) {_11};
return _12;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:971
_15 = param1.value;
_16 = ((int64_t) _15);
_17 = (frost$core$Int64) {_16};
return _17;

}
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt8 param1) {

uint16_t _1;
uint8_t _2;
uint16_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint16_t _9;
frost$core$UInt16 _10;
uint8_t _13;
uint16_t _14;
frost$core$UInt16 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:977
_1 = param0.value;
_2 = param1.value;
_3 = ((uint16_t) _2);
_4 = _1 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:978
_9 = param0.value;
_10 = (frost$core$UInt16) {_9};
return _10;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:980
_13 = param1.value;
_14 = ((uint16_t) _13);
_15 = (frost$core$UInt16) {_14};
return _15;

}
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

uint16_t _1;
uint16_t _2;
bool _3;
frost$core$Bit _4;
bool _5;
uint16_t _8;
frost$core$UInt16 _9;
uint16_t _12;
frost$core$UInt16 _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:986
_1 = param0.value;
_2 = param1.value;
_3 = _1 > _2;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:987
_8 = param0.value;
_9 = (frost$core$UInt16) {_8};
return _9;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:989
_12 = param1.value;
_13 = (frost$core$UInt16) {_12};
return _13;

}
frost$core$UInt32 frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

uint16_t _1;
uint32_t _2;
uint32_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint16_t _9;
uint32_t _10;
frost$core$UInt32 _11;
uint32_t _14;
frost$core$UInt32 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:995
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:996
_9 = param0.value;
_10 = ((uint32_t) _9);
_11 = (frost$core$UInt32) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:998
_14 = param1.value;
_15 = (frost$core$UInt32) {_14};
return _15;

}
frost$core$UInt64 frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint16_t _9;
uint64_t _10;
frost$core$UInt64 _11;
uint64_t _14;
frost$core$UInt64 _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1004
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1005
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt64) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1007
_14 = param1.value;
_15 = (frost$core$UInt64) {_14};
return _15;

}
frost$core$UInt frost$core$UInt16$max$frost$core$UInt$R$frost$core$UInt(frost$core$UInt16 param0, frost$core$UInt param1) {

uint16_t _1;
uint64_t _2;
uint64_t _3;
bool _4;
frost$core$Bit _5;
bool _6;
uint16_t _9;
uint64_t _10;
frost$core$UInt _11;
uint64_t _14;
frost$core$UInt _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1013
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = param1.value;
_4 = _2 > _3;
_5 = (frost$core$Bit) {_4};
_6 = _5.value;
if (_6) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1014
_9 = param0.value;
_10 = ((uint64_t) _9);
_11 = (frost$core$UInt) {_10};
return _11;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1016
_14 = param1.value;
_15 = (frost$core$UInt) {_14};
return _15;

}
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$Range$LTfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$Range$LTfrost$core$UInt16$GT param0) {

org$frostlang$frost$UInt16List* _1;
frost$core$UInt16 _2;
frost$core$UInt16 _3;
frost$core$UInt16 _4;
frost$core$Bit _5;
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT _6;
frost$collections$ListView* _8;
frost$core$Object* _9;
frost$core$Object* _11;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1021
_1 = (org$frostlang$frost$UInt16List*) frostObjectAlloc(sizeof(org$frostlang$frost$UInt16List), (frost$core$Class*) &org$frostlang$frost$UInt16List$class);
_2 = param0.min;
_3 = param0.max;
_4 = (frost$core$UInt16) {1u};
_5 = param0.inclusive;
_6 = frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$init$frost$core$UInt16$frost$core$UInt16$frost$core$UInt16$frost$core$Bit(_2, _3, _4, _5);
org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT(_1, _6);
_8 = ((frost$collections$ListView*) _1);
_9 = ((frost$core$Object*) _8);
frost$core$Frost$ref$frost$core$Object$Q(_9);
_11 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_11);
return _8;

}
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT param0) {

org$frostlang$frost$UInt16List* _1;
frost$collections$ListView* _3;
frost$core$Object* _4;
frost$core$Object* _6;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1026
_1 = (org$frostlang$frost$UInt16List*) frostObjectAlloc(sizeof(org$frostlang$frost$UInt16List), (frost$core$Class*) &org$frostlang$frost$UInt16List$class);
org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT(_1, param0);
_3 = ((frost$collections$ListView*) _1);
_4 = ((frost$core$Object*) _3);
frost$core$Frost$ref$frost$core$Object$Q(_4);
_6 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_6);
return _3;

}
frost$core$Bit frost$core$UInt16$$IDX$frost$core$Int$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int param1) {

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
uint16_t _32;
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
frost$core$UInt16$wrapper* $tmp5;
$tmp5 = (frost$core$UInt16$wrapper*) frostObjectAlloc(sizeof(frost$core$UInt16$wrapper), (frost$core$Class*) &frost$core$UInt16$wrapperclass);
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
_18 = (frost$core$Int) {1031u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s7, _18, &$s8);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1032
_22 = (frost$core$Int) {1u};
// begin inline call to function frost.core.Int.<<(other:frost.core.Int):frost.core.Int from UInt16.frost:1032:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:389
_25 = _22.value;
_26 = param1.value;
_27 = _25 << _26;
_28 = (frost$core$Int) {_27};
// begin inline call to function frost.core.UInt16.&&(other:frost.core.Int):frost.core.Int from UInt16.frost:1032:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:365
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
frost$core$Int frost$core$UInt16$get_count$R$frost$core$Int(frost$core$UInt16 param0) {

frost$core$Int _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1038
_1 = (frost$core$Int) {16u};
return _1;

}
frost$collections$Iterator* frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt16 param0) {

org$frostlang$frost$IntBitIterator* _1;
uint16_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$collections$Iterator* _10;
frost$core$Object* _11;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1048
_1 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(sizeof(org$frostlang$frost$IntBitIterator), (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.UInt16.get_asUInt64():frost.core.UInt64 from UInt16.frost:1048:55
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1118
_4 = param0.value;
_5 = ((uint64_t) _4);
_6 = (frost$core$UInt64) {_5};
_8 = (frost$core$UInt64) {32768u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64(_1, _6, _8);
_10 = ((frost$collections$Iterator*) _1);
_11 = ((frost$core$Object*) _10);
frost$core$Frost$ref$frost$core$Object$Q(_11);
_13 = ((frost$core$Object*) _1);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return _10;

}
frost$core$Int frost$core$UInt16$get_hash$R$frost$core$Int(frost$core$UInt16 param0) {

uint16_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1053
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$UInt16$nullable frost$core$UInt16$parse$frost$core$String$frost$core$Int$R$frost$core$UInt16$Q(frost$core$String* param0, frost$core$Int param1) {

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
uint16_t _41;
frost$core$UInt16 _42;
frost$core$UInt16$nullable _44;
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
_14 = (frost$core$Int) {1059u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s9, _14, &$s10);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1060
_18 = frost$core$Frost$parse$frost$core$String$frost$core$Int$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = _18;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1061
_21 = *(&local0);
_22 = !_21.nonnull;
_23 = (frost$core$Bit) {_22};
_24 = _23.value;
if (_24) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1062
return ((frost$core$UInt16$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1064
_29 = *(&local0);
_30 = _29.nonnull;
_31 = (frost$core$Bit) {_30};
_32 = _31.value;
if (_32) goto block6; else goto block7;
block7:;
_34 = (frost$core$Int) {1064u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s11, _34, &$s12);
abort(); // unreachable
block6:;
_37 = ((frost$core$UInt64) _29.value);
// begin inline call to function frost.core.UInt64.get_asUInt16():frost.core.UInt16 from UInt16.frost:1064:22
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:586
_40 = _37.value;
_41 = ((uint16_t) _40);
_42 = (frost$core$UInt16) {_41};
_44 = ((frost$core$UInt16$nullable) { _42, true });
return _44;

}
frost$core$Int frost$core$UInt16$get_asInt$R$frost$core$Int(frost$core$UInt16 param0) {

uint16_t _1;
int64_t _2;
frost$core$Int _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1070
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int) {_2};
return _3;

}
frost$core$Int8 frost$core$UInt16$get_asInt8$R$frost$core$Int8(frost$core$UInt16 param0) {

uint16_t _1;
int8_t _2;
frost$core$Int8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1076
_1 = param0.value;
_2 = ((int8_t) _1);
_3 = (frost$core$Int8) {_2};
return _3;

}
frost$core$Int16 frost$core$UInt16$get_asInt16$R$frost$core$Int16(frost$core$UInt16 param0) {

uint16_t _1;
int16_t _2;
frost$core$Int16 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1082
_1 = param0.value;
_2 = ((int16_t) _1);
_3 = (frost$core$Int16) {_2};
return _3;

}
frost$core$Int32 frost$core$UInt16$get_asInt32$R$frost$core$Int32(frost$core$UInt16 param0) {

uint16_t _1;
int32_t _2;
frost$core$Int32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1088
_1 = param0.value;
_2 = ((int32_t) _1);
_3 = (frost$core$Int32) {_2};
return _3;

}
frost$core$Int64 frost$core$UInt16$get_asInt64$R$frost$core$Int64(frost$core$UInt16 param0) {

uint16_t _1;
int64_t _2;
frost$core$Int64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1094
_1 = param0.value;
_2 = ((int64_t) _1);
_3 = (frost$core$Int64) {_2};
return _3;

}
frost$core$UInt frost$core$UInt16$get_asUInt$R$frost$core$UInt(frost$core$UInt16 param0) {

uint16_t _1;
uint64_t _2;
frost$core$UInt _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1100
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt) {_2};
return _3;

}
frost$core$UInt8 frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(frost$core$UInt16 param0) {

uint16_t _1;
uint8_t _2;
frost$core$UInt8 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1106
_1 = param0.value;
_2 = ((uint8_t) _1);
_3 = (frost$core$UInt8) {_2};
return _3;

}
frost$core$UInt32 frost$core$UInt16$get_asUInt32$R$frost$core$UInt32(frost$core$UInt16 param0) {

uint16_t _1;
uint32_t _2;
frost$core$UInt32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1112
_1 = param0.value;
_2 = ((uint32_t) _1);
_3 = (frost$core$UInt32) {_2};
return _3;

}
frost$core$UInt64 frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(frost$core$UInt16 param0) {

uint16_t _1;
uint64_t _2;
frost$core$UInt64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1118
_1 = param0.value;
_2 = ((uint64_t) _1);
_3 = (frost$core$UInt64) {_2};
return _3;

}
frost$core$Real32 frost$core$UInt16$get_asReal32$R$frost$core$Real32(frost$core$UInt16 param0) {

uint16_t _1;
float _2;
frost$core$Real32 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1124
_1 = param0.value;
_2 = ((float) _1);
_3 = (frost$core$Real32) {_2};
return _3;

}
frost$core$Real64 frost$core$UInt16$get_asReal64$R$frost$core$Real64(frost$core$UInt16 param0) {

uint16_t _1;
double _2;
frost$core$Real64 _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1130
_1 = param0.value;
_2 = ((double) _1);
_3 = (frost$core$Real64) {_2};
return _3;

}
frost$core$String* frost$core$UInt16$get_asString$R$frost$core$String(frost$core$UInt16 param0) {

frost$core$Int local0;
frost$core$Char8* local1;
frost$core$Int local2;
frost$core$UInt16 local3;
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
frost$core$UInt16 _20;
frost$core$UInt16 _21;
uint16_t _22;
uint16_t _23;
bool _24;
frost$core$Bit _25;
bool _26;
frost$core$Char8* _31;
frost$core$Int _32;
frost$core$Int64 _33;
frost$core$UInt16 _34;
frost$core$UInt16 _35;
uint16_t _38;
uint32_t _39;
uint16_t _40;
uint32_t _41;
uint32_t _42;
frost$core$UInt32 _43;
frost$core$UInt32 _45;
uint32_t _46;
uint32_t _47;
uint32_t _48;
frost$core$UInt32 _49;
uint32_t _52;
uint8_t _53;
frost$core$UInt8 _54;
frost$core$Char8 _56;
int64_t _57;
frost$core$UInt16 _60;
frost$core$UInt32 _61;
frost$core$UInt32 _62;
uint32_t _63;
uint32_t _64;
uint32_t _65;
frost$core$UInt32 _66;
uint32_t _69;
uint16_t _70;
frost$core$UInt16 _71;
frost$core$Int _75;
frost$core$Int _76;
int64_t _77;
int64_t _78;
int64_t _79;
frost$core$Int _80;
frost$core$UInt16 _83;
frost$core$UInt16 _84;
uint16_t _85;
uint16_t _86;
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
frost$core$UInt32 _107;
frost$core$UInt16 _108;
frost$core$UInt16 _109;
uint16_t _112;
uint32_t _113;
uint16_t _114;
uint32_t _115;
uint32_t _116;
frost$core$UInt32 _117;
uint32_t _119;
uint32_t _120;
uint32_t _121;
frost$core$UInt32 _122;
uint32_t _125;
uint8_t _126;
frost$core$UInt8 _127;
frost$core$Char8 _129;
int64_t _130;
frost$core$UInt16 _133;
frost$core$UInt32 _134;
frost$core$UInt32 _135;
uint32_t _136;
uint32_t _137;
uint32_t _138;
frost$core$UInt32 _139;
uint32_t _142;
uint16_t _143;
frost$core$UInt16 _144;
frost$core$Int _148;
frost$core$Int _149;
int64_t _150;
int64_t _151;
int64_t _152;
frost$core$Int _153;
frost$core$UInt16 _156;
frost$core$UInt16 _157;
uint16_t _158;
uint16_t _159;
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1136
_1 = (frost$core$Int) {5u};
*(&local0) = _1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1137
_4 = *(&local0);
_5 = frost$core$Int64$init$frost$core$Int(_4);
_6 = _5.value;
_7 = ((frost$core$Char8*) frostAlloc(_6 * sizeof(frost$core$Char8)));
*(&local1) = _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1138
_10 = *(&local0);
_11 = (frost$core$Int) {1u};
_12 = _10.value;
_13 = _11.value;
_14 = _12 - _13;
_15 = (frost$core$Int) {_14};
*(&local2) = _15;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1139
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1140
_20 = *(&local3);
_21 = (frost$core$UInt16) {0u};
_22 = _20.value;
_23 = _21.value;
_24 = _22 >= _23;
_25 = (frost$core$Bit) {_24};
_26 = _25.value;
if (_26) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1141
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1142
_31 = *(&local1);
_32 = *(&local2);
_33 = frost$core$Int64$init$frost$core$Int(_32);
_34 = *(&local3);
_35 = (frost$core$UInt16) {10u};
// begin inline call to function frost.core.UInt16.%(other:frost.core.UInt16):frost.core.UInt32 from UInt16.frost:1142:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:253
_38 = _34.value;
_39 = ((uint32_t) _38);
_40 = _35.value;
_41 = ((uint32_t) _40);
_42 = _39 % _41;
_43 = (frost$core$UInt32) {_42};
_45 = (frost$core$UInt32) {48u};
_46 = _43.value;
_47 = _45.value;
_48 = _46 + _47;
_49 = (frost$core$UInt32) {_48};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt16.frost:1142:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_52 = _49.value;
_53 = ((uint8_t) _52);
_54 = (frost$core$UInt8) {_53};
_56 = frost$core$Char8$init$frost$core$UInt8(_54);
_57 = _33.value;
_31[_57] = _56;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1143
_60 = *(&local3);
_61 = frost$core$UInt32$init$frost$core$UInt16(_60);
_62 = (frost$core$UInt32) {10u};
_63 = _61.value;
_64 = _62.value;
_65 = _63 / _64;
_66 = (frost$core$UInt32) {_65};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from UInt16.frost:1143:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_69 = _66.value;
_70 = ((uint16_t) _69);
_71 = (frost$core$UInt16) {_70};
*(&local3) = _71;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1144
_75 = *(&local2);
_76 = (frost$core$Int) {1u};
_77 = _75.value;
_78 = _76.value;
_79 = _77 - _78;
_80 = (frost$core$Int) {_79};
*(&local2) = _80;
_83 = *(&local3);
_84 = (frost$core$UInt16) {0u};
_85 = _83.value;
_86 = _84.value;
_87 = _85 > _86;
_88 = (frost$core$Bit) {_87};
_89 = _88.value;
if (_89) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1147
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1150
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1151
_104 = *(&local1);
_105 = *(&local2);
_106 = frost$core$Int64$init$frost$core$Int(_105);
_107 = (frost$core$UInt32) {48u};
_108 = *(&local3);
_109 = (frost$core$UInt16) {10u};
// begin inline call to function frost.core.UInt16.%(other:frost.core.UInt16):frost.core.UInt32 from UInt16.frost:1151:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:253
_112 = _108.value;
_113 = ((uint32_t) _112);
_114 = _109.value;
_115 = ((uint32_t) _114);
_116 = _113 % _115;
_117 = (frost$core$UInt32) {_116};
_119 = _107.value;
_120 = _117.value;
_121 = _119 - _120;
_122 = (frost$core$UInt32) {_121};
// begin inline call to function frost.core.UInt32.get_asUInt8():frost.core.UInt8 from UInt16.frost:1151:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:966
_125 = _122.value;
_126 = ((uint8_t) _125);
_127 = (frost$core$UInt8) {_126};
_129 = frost$core$Char8$init$frost$core$UInt8(_127);
_130 = _106.value;
_104[_130] = _129;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1152
_133 = *(&local3);
_134 = frost$core$UInt32$init$frost$core$UInt16(_133);
_135 = (frost$core$UInt32) {10u};
_136 = _134.value;
_137 = _135.value;
_138 = _136 / _137;
_139 = (frost$core$UInt32) {_138};
// begin inline call to function frost.core.UInt32.get_asUInt16():frost.core.UInt16 from UInt16.frost:1152:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt32.frost:972
_142 = _139.value;
_143 = ((uint16_t) _142);
_144 = (frost$core$UInt16) {_143};
*(&local3) = _144;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1153
_148 = *(&local2);
_149 = (frost$core$Int) {1u};
_150 = _148.value;
_151 = _149.value;
_152 = _150 - _151;
_153 = (frost$core$Int) {_152};
*(&local2) = _153;
_156 = *(&local3);
_157 = (frost$core$UInt16) {0u};
_158 = _156.value;
_159 = _157.value;
_160 = _158 < _159;
_161 = (frost$core$Bit) {_160};
_162 = _161.value;
if (_162) goto block10; else goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1156
_165 = *(&local1);
_166 = *(&local2);
_167 = frost$core$Int64$init$frost$core$Int(_166);
_168 = (frost$core$UInt8) {45u};
_169 = frost$core$Char8$init$frost$core$UInt8(_168);
_170 = _167.value;
_165[_170] = _169;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1158
_174 = *(&local0);
_175 = *(&local2);
_176 = _174.value;
_177 = _175.value;
_178 = _176 - _177;
_179 = (frost$core$Int) {_178};
*(&local4) = _179;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1159
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1160
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
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1162
_247 = (frost$core$String*) frostObjectAlloc(sizeof(frost$core$String), (frost$core$Class*) &frost$core$String$class);
_248 = *(&local1);
_249 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int(_247, _248, _249);
_251 = ((frost$core$Object*) _247);
frost$core$Frost$ref$frost$core$Object$Q(_251);
_253 = ((frost$core$Object*) _247);
frost$core$Frost$unref$frost$core$Object$Q(_253);
return _247;

}
frost$core$String* frost$core$UInt16$format$frost$core$String$R$frost$core$String(frost$core$UInt16 param0, frost$core$String* param1) {

frost$core$Bit _1;
uint16_t _4;
uint64_t _5;
frost$core$UInt64 _6;
frost$core$UInt64 _8;
frost$core$String* _9;
frost$core$Object* _10;
frost$core$Object* _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1168
_1 = (frost$core$Bit) {false};
// begin inline call to function frost.core.UInt16.get_asUInt64():frost.core.UInt64 from UInt16.frost:1168:40
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt16.frost:1118
_4 = param0.value;
_5 = ((uint64_t) _4);
_6 = (frost$core$UInt64) {_5};
_8 = (frost$core$UInt64) {65535u};
_9 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(_1, _6, _8, param1);
_10 = ((frost$core$Object*) _9);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = ((frost$core$Object*) _9);
frost$core$Frost$unref$frost$core$Object$Q(_12);
return _9;

}
void frost$core$UInt16$cleanup(frost$core$UInt16 param0) {

return;

}

