#include "frost/core/UInt16.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/ListView.h"
#include "frost/collections/Key.h"
#include "frost/core/Comparable.h"
#include "frost/core/Formattable.h"
#include "frost/core/Int32.h"
#include "frost/core/Int16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
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
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Int64 frost$core$UInt16$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt16$get_count$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt16$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$Object* frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$UInt16$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt16$get_hash$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$SHL$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$SHL$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$SHL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt16$$SHL$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$SHL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt16$$SHL$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$SHL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$SHR$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$UInt16$$SHR$frost$core$Int16$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$$SHR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$UInt16$$SHR$frost$core$Int32$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt16$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$UInt16$$SHR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt16$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int8 frost$core$UInt16$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt16$get_asInt8$R$frost$core$Int8(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$UInt16$convert$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt16$convert$R$frost$core$Int8(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt16$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt16$get_asInt16$R$frost$core$Int16(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt16$convert$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt16$convert$R$frost$core$Int16(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt16$get_asInt32$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt16$convert$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt16$convert$R$frost$core$Int32(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt16$get_asInt64$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt16$convert$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt16$convert$R$frost$core$Int64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt16$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt16$convert$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt16$convert$R$frost$core$UInt8(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt16$get_asUInt32$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt16$convert$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt16$convert$R$frost$core$UInt32(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt16$convert$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt16$convert$R$frost$core$UInt64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt16$get_asReal32$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt16$convert$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt16$convert$R$frost$core$Real32(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt16$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt16$get_asReal64$R$frost$core$Real64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt16$convert$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt16$convert$R$frost$core$Real64(((frost$core$UInt16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt16$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt16$cleanup(((frost$core$UInt16$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt16$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt16$_frost$collections$CollectionView, { frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt16$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt16$_frost$collections$Iterable, { frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt16$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt16$_frost$core$Equatable, { frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt16$_frost$collections$ListView, { frost$core$UInt16$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt16$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt16$_frost$collections$Key, { frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt16$_frost$core$Comparable, { frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$UInt16$class_type frost$core$UInt16$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt16$_frost$core$Formattable, { frost$core$UInt16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$SUB$R$frost$core$UInt16$shim, frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt16$$BNOT$R$frost$core$UInt16$shim, frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$SHL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$SHL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$SHR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$SHR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16$shim, frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16$shim, frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt16$get_count$R$frost$core$Int64$shim, frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt16$get_hash$R$frost$core$Int64$shim, frost$core$UInt16$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt16$convert$R$frost$core$Int8$shim, frost$core$UInt16$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt16$convert$R$frost$core$Int16$shim, frost$core$UInt16$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt16$convert$R$frost$core$Int32$shim, frost$core$UInt16$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt16$convert$R$frost$core$Int64$shim, frost$core$UInt16$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt16$convert$R$frost$core$UInt8$shim, frost$core$UInt16$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt16$convert$R$frost$core$UInt32$shim, frost$core$UInt16$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt16$convert$R$frost$core$UInt64$shim, frost$core$UInt16$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt16$convert$R$frost$core$Real32$shim, frost$core$UInt16$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt16$convert$R$frost$core$Real64$shim, frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt16$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt16$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$CollectionView, { frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt16$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$Iterable, { frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt16$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Equatable, { frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$ListView, { frost$core$UInt16$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt16$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$Key, { frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Comparable, { frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$UInt16$wrapperclass_type frost$core$UInt16$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Formattable, { frost$core$UInt16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn625)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s634 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 8497665508273682800, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, -7575919172661098457, NULL };
static frost$core$String $s664 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 8497665508273682800, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x3f", 123, -6892138887488414678, NULL };
static frost$core$String $s674 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 8497665508273682800, NULL };
static frost$core$String $s675 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 73, -6495590796473870699, NULL };

frost$core$UInt16 frost$core$UInt16$init$builtin_uint16(uint16_t param0) {

frost$core$UInt16 local0;
// line 30
uint16_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt16 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$UInt16 frost$core$UInt16$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt16 local0;
// line 36
uint8_t $tmp6 = param0.value;
uint16_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint16_t) $tmp6);
frost$core$UInt16 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int32 frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 42
uint16_t $tmp9 = param0.value;
int16_t $tmp10 = param1.value;
int32_t $tmp11 = ((int32_t) $tmp9) + ((int32_t) $tmp10);
frost$core$Int32 $tmp12 = frost$core$Int32$init$builtin_int32($tmp11);
return $tmp12;

}
frost$core$Int64 frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 48
uint16_t $tmp13 = param0.value;
int32_t $tmp14 = param1.value;
int64_t $tmp15 = ((int64_t) $tmp13) + ((int64_t) $tmp14);
frost$core$Int64 $tmp16 = frost$core$Int64$init$builtin_int64($tmp15);
return $tmp16;

}
frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 54
uint16_t $tmp17 = param0.value;
uint16_t $tmp18 = param1.value;
uint32_t $tmp19 = ((uint32_t) $tmp17) + ((uint32_t) $tmp18);
frost$core$UInt32 $tmp20 = frost$core$UInt32$init$builtin_uint32($tmp19);
return $tmp20;

}
frost$core$UInt16 frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 59
uint16_t $tmp21 = param0.value;
uint16_t $tmp22 = param1.value;
uint16_t $tmp23 = $tmp21 + $tmp22;
frost$core$UInt16 $tmp24 = frost$core$UInt16$init$builtin_uint16($tmp23);
return $tmp24;

}
frost$core$UInt32 frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 65
uint16_t $tmp25 = param0.value;
uint32_t $tmp26 = param1.value;
uint32_t $tmp27 = ((uint32_t) $tmp25) + $tmp26;
frost$core$UInt32 $tmp28 = frost$core$UInt32$init$builtin_uint32($tmp27);
return $tmp28;

}
frost$core$UInt64 frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 71
uint16_t $tmp29 = param0.value;
uint64_t $tmp30 = param1.value;
uint64_t $tmp31 = ((uint64_t) $tmp29) + $tmp30;
frost$core$UInt64 $tmp32 = frost$core$UInt64$init$builtin_uint64($tmp31);
return $tmp32;

}
frost$core$Int32 frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 77
uint16_t $tmp33 = param0.value;
int16_t $tmp34 = param1.value;
int32_t $tmp35 = ((int32_t) $tmp33) - ((int32_t) $tmp34);
frost$core$Int32 $tmp36 = frost$core$Int32$init$builtin_int32($tmp35);
return $tmp36;

}
frost$core$Int64 frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 83
uint16_t $tmp37 = param0.value;
int32_t $tmp38 = param1.value;
int64_t $tmp39 = ((int64_t) $tmp37) - ((int64_t) $tmp38);
frost$core$Int64 $tmp40 = frost$core$Int64$init$builtin_int64($tmp39);
return $tmp40;

}
frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 89
uint16_t $tmp41 = param0.value;
uint16_t $tmp42 = param1.value;
uint32_t $tmp43 = ((uint32_t) $tmp41) - ((uint32_t) $tmp42);
frost$core$UInt32 $tmp44 = frost$core$UInt32$init$builtin_uint32($tmp43);
return $tmp44;

}
frost$core$UInt16 frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 94
uint16_t $tmp45 = param0.value;
uint16_t $tmp46 = param1.value;
uint16_t $tmp47 = $tmp45 - $tmp46;
frost$core$UInt16 $tmp48 = frost$core$UInt16$init$builtin_uint16($tmp47);
return $tmp48;

}
frost$core$UInt32 frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 100
uint16_t $tmp49 = param0.value;
uint32_t $tmp50 = param1.value;
uint32_t $tmp51 = ((uint32_t) $tmp49) - $tmp50;
frost$core$UInt32 $tmp52 = frost$core$UInt32$init$builtin_uint32($tmp51);
return $tmp52;

}
frost$core$UInt64 frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 106
uint16_t $tmp53 = param0.value;
uint64_t $tmp54 = param1.value;
uint64_t $tmp55 = ((uint64_t) $tmp53) - $tmp54;
frost$core$UInt64 $tmp56 = frost$core$UInt64$init$builtin_uint64($tmp55);
return $tmp56;

}
frost$core$UInt16 frost$core$UInt16$$SUB$R$frost$core$UInt16(frost$core$UInt16 param0) {

// line 111
uint16_t $tmp57 = param0.value;
uint16_t $tmp58 = -$tmp57;
frost$core$UInt16 $tmp59 = (frost$core$UInt16) {$tmp58};
return $tmp59;

}
frost$core$Int32 frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 117
uint16_t $tmp60 = param0.value;
int16_t $tmp61 = param1.value;
int32_t $tmp62 = ((int32_t) $tmp60) * ((int32_t) $tmp61);
frost$core$Int32 $tmp63 = frost$core$Int32$init$builtin_int32($tmp62);
return $tmp63;

}
frost$core$Int64 frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 123
uint16_t $tmp64 = param0.value;
int32_t $tmp65 = param1.value;
int64_t $tmp66 = ((int64_t) $tmp64) * ((int64_t) $tmp65);
frost$core$Int64 $tmp67 = frost$core$Int64$init$builtin_int64($tmp66);
return $tmp67;

}
frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 129
uint16_t $tmp68 = param0.value;
uint16_t $tmp69 = param1.value;
uint32_t $tmp70 = ((uint32_t) $tmp68) * ((uint32_t) $tmp69);
frost$core$UInt32 $tmp71 = frost$core$UInt32$init$builtin_uint32($tmp70);
return $tmp71;

}
frost$core$UInt16 frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 134
uint16_t $tmp72 = param0.value;
uint16_t $tmp73 = param1.value;
uint16_t $tmp74 = $tmp72 * $tmp73;
frost$core$UInt16 $tmp75 = frost$core$UInt16$init$builtin_uint16($tmp74);
return $tmp75;

}
frost$core$UInt32 frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 140
uint16_t $tmp76 = param0.value;
uint32_t $tmp77 = param1.value;
uint32_t $tmp78 = ((uint32_t) $tmp76) * $tmp77;
frost$core$UInt32 $tmp79 = frost$core$UInt32$init$builtin_uint32($tmp78);
return $tmp79;

}
frost$core$UInt64 frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 146
uint16_t $tmp80 = param0.value;
uint64_t $tmp81 = param1.value;
uint64_t $tmp82 = ((uint64_t) $tmp80) * $tmp81;
frost$core$UInt64 $tmp83 = frost$core$UInt64$init$builtin_uint64($tmp82);
return $tmp83;

}
frost$core$Int32 frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 152
uint16_t $tmp84 = param0.value;
int16_t $tmp85 = param1.value;
int32_t $tmp86 = ((int32_t) $tmp84) / ((int32_t) $tmp85);
frost$core$Int32 $tmp87 = frost$core$Int32$init$builtin_int32($tmp86);
return $tmp87;

}
frost$core$Int64 frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 158
uint16_t $tmp88 = param0.value;
int32_t $tmp89 = param1.value;
int64_t $tmp90 = ((int64_t) $tmp88) / ((int64_t) $tmp89);
frost$core$Int64 $tmp91 = frost$core$Int64$init$builtin_int64($tmp90);
return $tmp91;

}
frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 164
uint16_t $tmp92 = param0.value;
uint16_t $tmp93 = param1.value;
uint32_t $tmp94 = ((uint32_t) $tmp92) / ((uint32_t) $tmp93);
frost$core$UInt32 $tmp95 = frost$core$UInt32$init$builtin_uint32($tmp94);
return $tmp95;

}
frost$core$UInt16 frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 169
uint16_t $tmp96 = param0.value;
uint16_t $tmp97 = param1.value;
uint16_t $tmp98 = $tmp96 / $tmp97;
frost$core$UInt16 $tmp99 = frost$core$UInt16$init$builtin_uint16($tmp98);
return $tmp99;

}
frost$core$UInt32 frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 175
uint16_t $tmp100 = param0.value;
uint32_t $tmp101 = param1.value;
uint32_t $tmp102 = ((uint32_t) $tmp100) / $tmp101;
frost$core$UInt32 $tmp103 = frost$core$UInt32$init$builtin_uint32($tmp102);
return $tmp103;

}
frost$core$UInt64 frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 181
uint16_t $tmp104 = param0.value;
uint64_t $tmp105 = param1.value;
uint64_t $tmp106 = ((uint64_t) $tmp104) / $tmp105;
frost$core$UInt64 $tmp107 = frost$core$UInt64$init$builtin_uint64($tmp106);
return $tmp107;

}
frost$core$Int32 frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 187
uint16_t $tmp108 = param0.value;
int16_t $tmp109 = param1.value;
int32_t $tmp110 = ((int32_t) $tmp108) % ((int32_t) $tmp109);
frost$core$Int32 $tmp111 = frost$core$Int32$init$builtin_int32($tmp110);
return $tmp111;

}
frost$core$Int64 frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 193
uint16_t $tmp112 = param0.value;
int32_t $tmp113 = param1.value;
int64_t $tmp114 = ((int64_t) $tmp112) % ((int64_t) $tmp113);
frost$core$Int64 $tmp115 = frost$core$Int64$init$builtin_int64($tmp114);
return $tmp115;

}
frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 199
uint16_t $tmp116 = param0.value;
uint16_t $tmp117 = param1.value;
uint32_t $tmp118 = ((uint32_t) $tmp116) % ((uint32_t) $tmp117);
frost$core$UInt32 $tmp119 = frost$core$UInt32$init$builtin_uint32($tmp118);
return $tmp119;

}
frost$core$UInt16 frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 204
uint16_t $tmp120 = param0.value;
uint16_t $tmp121 = param1.value;
uint16_t $tmp122 = $tmp120 % $tmp121;
frost$core$UInt16 $tmp123 = frost$core$UInt16$init$builtin_uint16($tmp122);
return $tmp123;

}
frost$core$UInt32 frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 210
uint16_t $tmp124 = param0.value;
uint32_t $tmp125 = param1.value;
uint32_t $tmp126 = ((uint32_t) $tmp124) % $tmp125;
frost$core$UInt32 $tmp127 = frost$core$UInt32$init$builtin_uint32($tmp126);
return $tmp127;

}
frost$core$UInt64 frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 216
uint16_t $tmp128 = param0.value;
uint64_t $tmp129 = param1.value;
uint64_t $tmp130 = ((uint64_t) $tmp128) % $tmp129;
frost$core$UInt64 $tmp131 = frost$core$UInt64$init$builtin_uint64($tmp130);
return $tmp131;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 222
uint16_t $tmp132 = param0.value;
int8_t $tmp133 = param1.value;
float $tmp134 = ((float) $tmp132) / ((float) $tmp133);
frost$core$Real32 $tmp135 = frost$core$Real32$init$builtin_float32($tmp134);
return $tmp135;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 228
uint16_t $tmp136 = param0.value;
int16_t $tmp137 = param1.value;
float $tmp138 = ((float) $tmp136) / ((float) $tmp137);
frost$core$Real32 $tmp139 = frost$core$Real32$init$builtin_float32($tmp138);
return $tmp139;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 234
uint16_t $tmp140 = param0.value;
int32_t $tmp141 = param1.value;
float $tmp142 = ((float) $tmp140) / ((float) $tmp141);
frost$core$Real32 $tmp143 = frost$core$Real32$init$builtin_float32($tmp142);
return $tmp143;

}
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// line 240
uint16_t $tmp144 = param0.value;
int64_t $tmp145 = param1.value;
double $tmp146 = ((double) $tmp144) / ((double) $tmp145);
frost$core$Real64 $tmp147 = frost$core$Real64$init$builtin_float64($tmp146);
return $tmp147;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 246
uint16_t $tmp148 = param0.value;
uint8_t $tmp149 = param1.value;
float $tmp150 = ((float) $tmp148) / ((float) $tmp149);
frost$core$Real32 $tmp151 = frost$core$Real32$init$builtin_float32($tmp150);
return $tmp151;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 252
uint16_t $tmp152 = param0.value;
uint16_t $tmp153 = param1.value;
float $tmp154 = ((float) $tmp152) / ((float) $tmp153);
frost$core$Real32 $tmp155 = frost$core$Real32$init$builtin_float32($tmp154);
return $tmp155;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 258
uint16_t $tmp156 = param0.value;
uint32_t $tmp157 = param1.value;
float $tmp158 = ((float) $tmp156) / ((float) $tmp157);
frost$core$Real32 $tmp159 = frost$core$Real32$init$builtin_float32($tmp158);
return $tmp159;

}
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 264
uint16_t $tmp160 = param0.value;
uint64_t $tmp161 = param1.value;
double $tmp162 = ((double) $tmp160) / ((double) $tmp161);
frost$core$Real64 $tmp163 = frost$core$Real64$init$builtin_float64($tmp162);
return $tmp163;

}
frost$core$Real32 frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$UInt16 param0, frost$core$Real32 param1) {

// line 270
uint16_t $tmp164 = param0.value;
float $tmp165 = param1.value;
float $tmp166 = ((float) $tmp164) / $tmp165;
frost$core$Real32 $tmp167 = frost$core$Real32$init$builtin_float32($tmp166);
return $tmp167;

}
frost$core$Real64 frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt16 param0, frost$core$Real64 param1) {

// line 276
uint16_t $tmp168 = param0.value;
double $tmp169 = param1.value;
double $tmp170 = ((double) $tmp168) / $tmp169;
frost$core$Real64 $tmp171 = frost$core$Real64$init$builtin_float64($tmp170);
return $tmp171;

}
frost$core$UInt16 frost$core$UInt16$$BNOT$R$frost$core$UInt16(frost$core$UInt16 param0) {

// line 281
uint16_t $tmp172 = param0.value;
uint16_t $tmp173 = !$tmp172;
frost$core$UInt16 $tmp174 = (frost$core$UInt16) {$tmp173};
return $tmp174;

}
frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 287
uint16_t $tmp175 = param0.value;
int16_t $tmp176 = param1.value;
int32_t $tmp177 = ((int32_t) $tmp175) & ((int32_t) $tmp176);
frost$core$Int32 $tmp178 = frost$core$Int32$init$builtin_int32($tmp177);
return $tmp178;

}
frost$core$Int32 frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 293
uint16_t $tmp179 = param0.value;
int32_t $tmp180 = param1.value;
int32_t $tmp181 = ((int32_t) $tmp179) & $tmp180;
frost$core$Int32 $tmp182 = frost$core$Int32$init$builtin_int32($tmp181);
return $tmp182;

}
frost$core$Int64 frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// line 299
uint16_t $tmp183 = param0.value;
int64_t $tmp184 = param1.value;
int64_t $tmp185 = ((int64_t) $tmp183) & $tmp184;
frost$core$Int64 $tmp186 = frost$core$Int64$init$builtin_int64($tmp185);
return $tmp186;

}
frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 305
uint16_t $tmp187 = param0.value;
uint16_t $tmp188 = param1.value;
uint32_t $tmp189 = ((uint32_t) $tmp187) & ((uint32_t) $tmp188);
frost$core$UInt32 $tmp190 = frost$core$UInt32$init$builtin_uint32($tmp189);
return $tmp190;

}
frost$core$UInt16 frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 310
uint16_t $tmp191 = param0.value;
uint16_t $tmp192 = param1.value;
uint16_t $tmp193 = $tmp191 & $tmp192;
frost$core$UInt16 $tmp194 = frost$core$UInt16$init$builtin_uint16($tmp193);
return $tmp194;

}
frost$core$UInt32 frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 316
uint16_t $tmp195 = param0.value;
uint32_t $tmp196 = param1.value;
uint32_t $tmp197 = ((uint32_t) $tmp195) & $tmp196;
frost$core$UInt32 $tmp198 = frost$core$UInt32$init$builtin_uint32($tmp197);
return $tmp198;

}
frost$core$UInt64 frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 322
uint16_t $tmp199 = param0.value;
uint64_t $tmp200 = param1.value;
uint64_t $tmp201 = ((uint64_t) $tmp199) & $tmp200;
frost$core$UInt64 $tmp202 = frost$core$UInt64$init$builtin_uint64($tmp201);
return $tmp202;

}
frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 328
uint16_t $tmp203 = param0.value;
int16_t $tmp204 = param1.value;
int32_t $tmp205 = ((int32_t) $tmp203) | ((int32_t) $tmp204);
frost$core$Int32 $tmp206 = frost$core$Int32$init$builtin_int32($tmp205);
return $tmp206;

}
frost$core$Int32 frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 334
uint16_t $tmp207 = param0.value;
int32_t $tmp208 = param1.value;
int32_t $tmp209 = ((int32_t) $tmp207) | $tmp208;
frost$core$Int32 $tmp210 = frost$core$Int32$init$builtin_int32($tmp209);
return $tmp210;

}
frost$core$Int64 frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// line 340
uint16_t $tmp211 = param0.value;
int64_t $tmp212 = param1.value;
int64_t $tmp213 = ((int64_t) $tmp211) | $tmp212;
frost$core$Int64 $tmp214 = frost$core$Int64$init$builtin_int64($tmp213);
return $tmp214;

}
frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 346
uint16_t $tmp215 = param0.value;
uint16_t $tmp216 = param1.value;
uint32_t $tmp217 = ((uint32_t) $tmp215) | ((uint32_t) $tmp216);
frost$core$UInt32 $tmp218 = frost$core$UInt32$init$builtin_uint32($tmp217);
return $tmp218;

}
frost$core$UInt16 frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 351
uint16_t $tmp219 = param0.value;
uint16_t $tmp220 = param1.value;
uint16_t $tmp221 = $tmp219 | $tmp220;
frost$core$UInt16 $tmp222 = frost$core$UInt16$init$builtin_uint16($tmp221);
return $tmp222;

}
frost$core$UInt32 frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 357
uint16_t $tmp223 = param0.value;
uint32_t $tmp224 = param1.value;
uint32_t $tmp225 = ((uint32_t) $tmp223) | $tmp224;
frost$core$UInt32 $tmp226 = frost$core$UInt32$init$builtin_uint32($tmp225);
return $tmp226;

}
frost$core$UInt64 frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 363
uint16_t $tmp227 = param0.value;
uint64_t $tmp228 = param1.value;
uint64_t $tmp229 = ((uint64_t) $tmp227) | $tmp228;
frost$core$UInt64 $tmp230 = frost$core$UInt64$init$builtin_uint64($tmp229);
return $tmp230;

}
frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 369
uint16_t $tmp231 = param0.value;
int16_t $tmp232 = param1.value;
int32_t $tmp233 = ((int32_t) $tmp231) ^ ((int32_t) $tmp232);
frost$core$Int32 $tmp234 = frost$core$Int32$init$builtin_int32($tmp233);
return $tmp234;

}
frost$core$Int32 frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 375
uint16_t $tmp235 = param0.value;
int32_t $tmp236 = param1.value;
int32_t $tmp237 = ((int32_t) $tmp235) ^ $tmp236;
frost$core$Int32 $tmp238 = frost$core$Int32$init$builtin_int32($tmp237);
return $tmp238;

}
frost$core$Int64 frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// line 381
uint16_t $tmp239 = param0.value;
int64_t $tmp240 = param1.value;
int64_t $tmp241 = ((int64_t) $tmp239) ^ $tmp240;
frost$core$Int64 $tmp242 = frost$core$Int64$init$builtin_int64($tmp241);
return $tmp242;

}
frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 387
uint16_t $tmp243 = param0.value;
uint16_t $tmp244 = param1.value;
uint32_t $tmp245 = ((uint32_t) $tmp243) ^ ((uint32_t) $tmp244);
frost$core$UInt32 $tmp246 = frost$core$UInt32$init$builtin_uint32($tmp245);
return $tmp246;

}
frost$core$UInt16 frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 392
uint16_t $tmp247 = param0.value;
uint16_t $tmp248 = param1.value;
uint16_t $tmp249 = $tmp247 ^ $tmp248;
frost$core$UInt16 $tmp250 = frost$core$UInt16$init$builtin_uint16($tmp249);
return $tmp250;

}
frost$core$UInt32 frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 398
uint16_t $tmp251 = param0.value;
uint32_t $tmp252 = param1.value;
uint32_t $tmp253 = ((uint32_t) $tmp251) ^ $tmp252;
frost$core$UInt32 $tmp254 = frost$core$UInt32$init$builtin_uint32($tmp253);
return $tmp254;

}
frost$core$UInt64 frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 404
uint16_t $tmp255 = param0.value;
uint64_t $tmp256 = param1.value;
uint64_t $tmp257 = ((uint64_t) $tmp255) ^ $tmp256;
frost$core$UInt64 $tmp258 = frost$core$UInt64$init$builtin_uint64($tmp257);
return $tmp258;

}
frost$core$Int32 frost$core$UInt16$$SHL$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 410
uint16_t $tmp259 = param0.value;
int16_t $tmp260 = param1.value;
int32_t $tmp261 = ((int32_t) $tmp259) << ((int32_t) $tmp260);
frost$core$Int32 $tmp262 = frost$core$Int32$init$builtin_int32($tmp261);
return $tmp262;

}
frost$core$Int32 frost$core$UInt16$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 416
uint16_t $tmp263 = param0.value;
int32_t $tmp264 = param1.value;
int32_t $tmp265 = ((int32_t) $tmp263) << $tmp264;
frost$core$Int32 $tmp266 = frost$core$Int32$init$builtin_int32($tmp265);
return $tmp266;

}
frost$core$Int64 frost$core$UInt16$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// line 422
uint16_t $tmp267 = param0.value;
int64_t $tmp268 = param1.value;
int64_t $tmp269 = ((int64_t) $tmp267) << $tmp268;
frost$core$Int64 $tmp270 = frost$core$Int64$init$builtin_int64($tmp269);
return $tmp270;

}
frost$core$UInt32 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 428
uint16_t $tmp271 = param0.value;
uint16_t $tmp272 = param1.value;
uint32_t $tmp273 = ((uint32_t) $tmp271) << ((uint32_t) $tmp272);
frost$core$UInt32 $tmp274 = frost$core$UInt32$init$builtin_uint32($tmp273);
return $tmp274;

}
frost$core$UInt16 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 433
uint16_t $tmp275 = param0.value;
uint16_t $tmp276 = param1.value;
uint16_t $tmp277 = $tmp275 << $tmp276;
frost$core$UInt16 $tmp278 = frost$core$UInt16$init$builtin_uint16($tmp277);
return $tmp278;

}
frost$core$UInt32 frost$core$UInt16$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 439
uint16_t $tmp279 = param0.value;
uint32_t $tmp280 = param1.value;
uint32_t $tmp281 = ((uint32_t) $tmp279) << $tmp280;
frost$core$UInt32 $tmp282 = frost$core$UInt32$init$builtin_uint32($tmp281);
return $tmp282;

}
frost$core$UInt64 frost$core$UInt16$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 445
uint16_t $tmp283 = param0.value;
uint64_t $tmp284 = param1.value;
uint64_t $tmp285 = ((uint64_t) $tmp283) << $tmp284;
frost$core$UInt64 $tmp286 = frost$core$UInt64$init$builtin_uint64($tmp285);
return $tmp286;

}
frost$core$Int32 frost$core$UInt16$$SHR$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 451
uint16_t $tmp287 = param0.value;
int16_t $tmp288 = param1.value;
int32_t $tmp289 = ((int32_t) $tmp287) >> ((int32_t) $tmp288);
frost$core$Int32 $tmp290 = frost$core$Int32$init$builtin_int32($tmp289);
return $tmp290;

}
frost$core$Int32 frost$core$UInt16$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 457
uint16_t $tmp291 = param0.value;
int32_t $tmp292 = param1.value;
int32_t $tmp293 = ((int32_t) $tmp291) >> $tmp292;
frost$core$Int32 $tmp294 = frost$core$Int32$init$builtin_int32($tmp293);
return $tmp294;

}
frost$core$Int64 frost$core$UInt16$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int64 param1) {

// line 463
uint16_t $tmp295 = param0.value;
int64_t $tmp296 = param1.value;
int64_t $tmp297 = ((int64_t) $tmp295) >> $tmp296;
frost$core$Int64 $tmp298 = frost$core$Int64$init$builtin_int64($tmp297);
return $tmp298;

}
frost$core$UInt32 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 469
uint16_t $tmp299 = param0.value;
uint16_t $tmp300 = param1.value;
uint32_t $tmp301 = ((uint32_t) $tmp299) >> ((uint32_t) $tmp300);
frost$core$UInt32 $tmp302 = frost$core$UInt32$init$builtin_uint32($tmp301);
return $tmp302;

}
frost$core$UInt16 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 474
uint16_t $tmp303 = param0.value;
uint16_t $tmp304 = param1.value;
uint16_t $tmp305 = $tmp303 >> $tmp304;
frost$core$UInt16 $tmp306 = frost$core$UInt16$init$builtin_uint16($tmp305);
return $tmp306;

}
frost$core$UInt32 frost$core$UInt16$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 480
uint16_t $tmp307 = param0.value;
uint32_t $tmp308 = param1.value;
uint32_t $tmp309 = ((uint32_t) $tmp307) >> $tmp308;
frost$core$UInt32 $tmp310 = frost$core$UInt32$init$builtin_uint32($tmp309);
return $tmp310;

}
frost$core$UInt64 frost$core$UInt16$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 486
uint16_t $tmp311 = param0.value;
uint64_t $tmp312 = param1.value;
uint64_t $tmp313 = ((uint64_t) $tmp311) >> $tmp312;
frost$core$UInt64 $tmp314 = frost$core$UInt64$init$builtin_uint64($tmp313);
return $tmp314;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 492
uint16_t $tmp315 = param0.value;
int8_t $tmp316 = param1.value;
bool $tmp317 = ((int32_t) $tmp315) == ((int32_t) $tmp316);
frost$core$Bit $tmp318 = frost$core$Bit$init$builtin_bit($tmp317);
return $tmp318;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 498
uint16_t $tmp319 = param0.value;
int16_t $tmp320 = param1.value;
bool $tmp321 = ((int32_t) $tmp319) == ((int32_t) $tmp320);
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit($tmp321);
return $tmp322;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 504
uint16_t $tmp323 = param0.value;
int32_t $tmp324 = param1.value;
bool $tmp325 = ((int64_t) $tmp323) == ((int64_t) $tmp324);
frost$core$Bit $tmp326 = frost$core$Bit$init$builtin_bit($tmp325);
return $tmp326;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 510
uint16_t $tmp327 = param0.value;
uint8_t $tmp328 = param1.value;
bool $tmp329 = $tmp327 == ((uint16_t) $tmp328);
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit($tmp329);
return $tmp330;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 517
uint16_t $tmp331 = param0.value;
uint16_t $tmp332 = param1.value;
bool $tmp333 = $tmp331 == $tmp332;
frost$core$Bit $tmp334 = frost$core$Bit$init$builtin_bit($tmp333);
return $tmp334;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 523
uint16_t $tmp335 = param0.value;
uint32_t $tmp336 = param1.value;
bool $tmp337 = ((uint32_t) $tmp335) == $tmp336;
frost$core$Bit $tmp338 = frost$core$Bit$init$builtin_bit($tmp337);
return $tmp338;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 529
uint16_t $tmp339 = param0.value;
uint64_t $tmp340 = param1.value;
bool $tmp341 = ((uint64_t) $tmp339) == $tmp340;
frost$core$Bit $tmp342 = frost$core$Bit$init$builtin_bit($tmp341);
return $tmp342;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 535
uint16_t $tmp343 = param0.value;
int8_t $tmp344 = param1.value;
bool $tmp345 = ((int32_t) $tmp343) != ((int32_t) $tmp344);
frost$core$Bit $tmp346 = frost$core$Bit$init$builtin_bit($tmp345);
return $tmp346;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 541
uint16_t $tmp347 = param0.value;
int16_t $tmp348 = param1.value;
bool $tmp349 = ((int32_t) $tmp347) != ((int32_t) $tmp348);
frost$core$Bit $tmp350 = frost$core$Bit$init$builtin_bit($tmp349);
return $tmp350;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 547
uint16_t $tmp351 = param0.value;
int32_t $tmp352 = param1.value;
bool $tmp353 = ((int64_t) $tmp351) != ((int64_t) $tmp352);
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit($tmp353);
return $tmp354;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 553
uint16_t $tmp355 = param0.value;
uint8_t $tmp356 = param1.value;
bool $tmp357 = $tmp355 != ((uint16_t) $tmp356);
frost$core$Bit $tmp358 = frost$core$Bit$init$builtin_bit($tmp357);
return $tmp358;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 560
uint16_t $tmp359 = param0.value;
uint16_t $tmp360 = param1.value;
bool $tmp361 = $tmp359 != $tmp360;
frost$core$Bit $tmp362 = frost$core$Bit$init$builtin_bit($tmp361);
return $tmp362;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 566
uint16_t $tmp363 = param0.value;
uint32_t $tmp364 = param1.value;
bool $tmp365 = ((uint32_t) $tmp363) != $tmp364;
frost$core$Bit $tmp366 = frost$core$Bit$init$builtin_bit($tmp365);
return $tmp366;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 572
uint16_t $tmp367 = param0.value;
uint64_t $tmp368 = param1.value;
bool $tmp369 = ((uint64_t) $tmp367) != $tmp368;
frost$core$Bit $tmp370 = frost$core$Bit$init$builtin_bit($tmp369);
return $tmp370;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 578
uint16_t $tmp371 = param0.value;
int8_t $tmp372 = param1.value;
bool $tmp373 = ((int32_t) $tmp371) < ((int32_t) $tmp372);
frost$core$Bit $tmp374 = frost$core$Bit$init$builtin_bit($tmp373);
return $tmp374;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 584
uint16_t $tmp375 = param0.value;
int16_t $tmp376 = param1.value;
bool $tmp377 = ((int32_t) $tmp375) < ((int32_t) $tmp376);
frost$core$Bit $tmp378 = frost$core$Bit$init$builtin_bit($tmp377);
return $tmp378;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 590
uint16_t $tmp379 = param0.value;
int32_t $tmp380 = param1.value;
bool $tmp381 = ((int64_t) $tmp379) < ((int64_t) $tmp380);
frost$core$Bit $tmp382 = frost$core$Bit$init$builtin_bit($tmp381);
return $tmp382;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 596
uint16_t $tmp383 = param0.value;
uint8_t $tmp384 = param1.value;
bool $tmp385 = $tmp383 < ((uint16_t) $tmp384);
frost$core$Bit $tmp386 = frost$core$Bit$init$builtin_bit($tmp385);
return $tmp386;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 603
uint16_t $tmp387 = param0.value;
uint16_t $tmp388 = param1.value;
bool $tmp389 = $tmp387 < $tmp388;
frost$core$Bit $tmp390 = frost$core$Bit$init$builtin_bit($tmp389);
return $tmp390;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 609
uint16_t $tmp391 = param0.value;
uint32_t $tmp392 = param1.value;
bool $tmp393 = ((uint32_t) $tmp391) < $tmp392;
frost$core$Bit $tmp394 = frost$core$Bit$init$builtin_bit($tmp393);
return $tmp394;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 615
uint16_t $tmp395 = param0.value;
uint64_t $tmp396 = param1.value;
bool $tmp397 = ((uint64_t) $tmp395) < $tmp396;
frost$core$Bit $tmp398 = frost$core$Bit$init$builtin_bit($tmp397);
return $tmp398;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 621
uint16_t $tmp399 = param0.value;
int8_t $tmp400 = param1.value;
bool $tmp401 = ((int32_t) $tmp399) > ((int32_t) $tmp400);
frost$core$Bit $tmp402 = frost$core$Bit$init$builtin_bit($tmp401);
return $tmp402;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 627
uint16_t $tmp403 = param0.value;
int16_t $tmp404 = param1.value;
bool $tmp405 = ((int32_t) $tmp403) > ((int32_t) $tmp404);
frost$core$Bit $tmp406 = frost$core$Bit$init$builtin_bit($tmp405);
return $tmp406;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 633
uint16_t $tmp407 = param0.value;
int32_t $tmp408 = param1.value;
bool $tmp409 = ((int64_t) $tmp407) > ((int64_t) $tmp408);
frost$core$Bit $tmp410 = frost$core$Bit$init$builtin_bit($tmp409);
return $tmp410;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 639
uint16_t $tmp411 = param0.value;
uint8_t $tmp412 = param1.value;
bool $tmp413 = $tmp411 > ((uint16_t) $tmp412);
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit($tmp413);
return $tmp414;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 646
uint16_t $tmp415 = param0.value;
uint16_t $tmp416 = param1.value;
bool $tmp417 = $tmp415 > $tmp416;
frost$core$Bit $tmp418 = frost$core$Bit$init$builtin_bit($tmp417);
return $tmp418;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 652
uint16_t $tmp419 = param0.value;
uint32_t $tmp420 = param1.value;
bool $tmp421 = ((uint32_t) $tmp419) > $tmp420;
frost$core$Bit $tmp422 = frost$core$Bit$init$builtin_bit($tmp421);
return $tmp422;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 658
uint16_t $tmp423 = param0.value;
uint64_t $tmp424 = param1.value;
bool $tmp425 = ((uint64_t) $tmp423) > $tmp424;
frost$core$Bit $tmp426 = frost$core$Bit$init$builtin_bit($tmp425);
return $tmp426;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 664
uint16_t $tmp427 = param0.value;
int8_t $tmp428 = param1.value;
bool $tmp429 = ((int32_t) $tmp427) >= ((int32_t) $tmp428);
frost$core$Bit $tmp430 = frost$core$Bit$init$builtin_bit($tmp429);
return $tmp430;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 670
uint16_t $tmp431 = param0.value;
int16_t $tmp432 = param1.value;
bool $tmp433 = ((int32_t) $tmp431) >= ((int32_t) $tmp432);
frost$core$Bit $tmp434 = frost$core$Bit$init$builtin_bit($tmp433);
return $tmp434;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 676
uint16_t $tmp435 = param0.value;
int32_t $tmp436 = param1.value;
bool $tmp437 = ((int64_t) $tmp435) >= ((int64_t) $tmp436);
frost$core$Bit $tmp438 = frost$core$Bit$init$builtin_bit($tmp437);
return $tmp438;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 682
uint16_t $tmp439 = param0.value;
uint8_t $tmp440 = param1.value;
bool $tmp441 = $tmp439 >= ((uint16_t) $tmp440);
frost$core$Bit $tmp442 = frost$core$Bit$init$builtin_bit($tmp441);
return $tmp442;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 689
uint16_t $tmp443 = param0.value;
uint16_t $tmp444 = param1.value;
bool $tmp445 = $tmp443 >= $tmp444;
frost$core$Bit $tmp446 = frost$core$Bit$init$builtin_bit($tmp445);
return $tmp446;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 695
uint16_t $tmp447 = param0.value;
uint32_t $tmp448 = param1.value;
bool $tmp449 = ((uint32_t) $tmp447) >= $tmp448;
frost$core$Bit $tmp450 = frost$core$Bit$init$builtin_bit($tmp449);
return $tmp450;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 701
uint16_t $tmp451 = param0.value;
uint64_t $tmp452 = param1.value;
bool $tmp453 = ((uint64_t) $tmp451) >= $tmp452;
frost$core$Bit $tmp454 = frost$core$Bit$init$builtin_bit($tmp453);
return $tmp454;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 707
uint16_t $tmp455 = param0.value;
int8_t $tmp456 = param1.value;
bool $tmp457 = ((int32_t) $tmp455) <= ((int32_t) $tmp456);
frost$core$Bit $tmp458 = frost$core$Bit$init$builtin_bit($tmp457);
return $tmp458;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 713
uint16_t $tmp459 = param0.value;
int16_t $tmp460 = param1.value;
bool $tmp461 = ((int32_t) $tmp459) <= ((int32_t) $tmp460);
frost$core$Bit $tmp462 = frost$core$Bit$init$builtin_bit($tmp461);
return $tmp462;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 719
uint16_t $tmp463 = param0.value;
int32_t $tmp464 = param1.value;
bool $tmp465 = ((int64_t) $tmp463) <= ((int64_t) $tmp464);
frost$core$Bit $tmp466 = frost$core$Bit$init$builtin_bit($tmp465);
return $tmp466;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 725
uint16_t $tmp467 = param0.value;
uint8_t $tmp468 = param1.value;
bool $tmp469 = $tmp467 <= ((uint16_t) $tmp468);
frost$core$Bit $tmp470 = frost$core$Bit$init$builtin_bit($tmp469);
return $tmp470;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 732
uint16_t $tmp471 = param0.value;
uint16_t $tmp472 = param1.value;
bool $tmp473 = $tmp471 <= $tmp472;
frost$core$Bit $tmp474 = frost$core$Bit$init$builtin_bit($tmp473);
return $tmp474;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 738
uint16_t $tmp475 = param0.value;
uint32_t $tmp476 = param1.value;
bool $tmp477 = ((uint32_t) $tmp475) <= $tmp476;
frost$core$Bit $tmp478 = frost$core$Bit$init$builtin_bit($tmp477);
return $tmp478;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 744
uint16_t $tmp479 = param0.value;
uint64_t $tmp480 = param1.value;
bool $tmp481 = ((uint64_t) $tmp479) <= $tmp480;
frost$core$Bit $tmp482 = frost$core$Bit$init$builtin_bit($tmp481);
return $tmp482;

}
frost$core$Int32 frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 750
uint16_t $tmp483 = param0.value;
int8_t $tmp484 = param1.value;
bool $tmp485 = ((int32_t) $tmp483) < ((int32_t) $tmp484);
frost$core$Bit $tmp486 = frost$core$Bit$init$builtin_bit($tmp485);
bool $tmp487 = $tmp486.value;
if ($tmp487) goto block1; else goto block2;
block1:;
// line 751
uint16_t $tmp488 = param0.value;
frost$core$Int32 $tmp489 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp488));
return $tmp489;
block2:;
// line 753
int8_t $tmp490 = param1.value;
frost$core$Int32 $tmp491 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp490));
return $tmp491;

}
frost$core$Int32 frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 759
uint16_t $tmp492 = param0.value;
int16_t $tmp493 = param1.value;
bool $tmp494 = ((int32_t) $tmp492) < ((int32_t) $tmp493);
frost$core$Bit $tmp495 = frost$core$Bit$init$builtin_bit($tmp494);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block1; else goto block2;
block1:;
// line 760
uint16_t $tmp497 = param0.value;
frost$core$Int32 $tmp498 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp497));
return $tmp498;
block2:;
// line 762
int16_t $tmp499 = param1.value;
frost$core$Int32 $tmp500 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp499));
return $tmp500;

}
frost$core$Int64 frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 768
uint16_t $tmp501 = param0.value;
int32_t $tmp502 = param1.value;
bool $tmp503 = ((int64_t) $tmp501) < ((int64_t) $tmp502);
frost$core$Bit $tmp504 = frost$core$Bit$init$builtin_bit($tmp503);
bool $tmp505 = $tmp504.value;
if ($tmp505) goto block1; else goto block2;
block1:;
// line 769
uint16_t $tmp506 = param0.value;
frost$core$Int64 $tmp507 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp506));
return $tmp507;
block2:;
// line 771
int32_t $tmp508 = param1.value;
frost$core$Int64 $tmp509 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp508));
return $tmp509;

}
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 778
uint16_t $tmp510 = param0.value;
uint8_t $tmp511 = param1.value;
bool $tmp512 = $tmp510 < ((uint16_t) $tmp511);
frost$core$Bit $tmp513 = frost$core$Bit$init$builtin_bit($tmp512);
bool $tmp514 = $tmp513.value;
if ($tmp514) goto block1; else goto block2;
block1:;
// line 779
uint16_t $tmp515 = param0.value;
frost$core$UInt16 $tmp516 = frost$core$UInt16$init$builtin_uint16($tmp515);
return $tmp516;
block2:;
// line 781
uint8_t $tmp517 = param1.value;
frost$core$UInt16 $tmp518 = frost$core$UInt16$init$builtin_uint16(((uint16_t) $tmp517));
return $tmp518;

}
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 787
uint16_t $tmp519 = param0.value;
uint16_t $tmp520 = param1.value;
bool $tmp521 = $tmp519 < $tmp520;
frost$core$Bit $tmp522 = frost$core$Bit$init$builtin_bit($tmp521);
bool $tmp523 = $tmp522.value;
if ($tmp523) goto block1; else goto block2;
block1:;
// line 788
uint16_t $tmp524 = param0.value;
frost$core$UInt16 $tmp525 = frost$core$UInt16$init$builtin_uint16($tmp524);
return $tmp525;
block2:;
// line 790
uint16_t $tmp526 = param1.value;
frost$core$UInt16 $tmp527 = frost$core$UInt16$init$builtin_uint16($tmp526);
return $tmp527;

}
frost$core$UInt32 frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 796
uint16_t $tmp528 = param0.value;
uint32_t $tmp529 = param1.value;
bool $tmp530 = ((uint32_t) $tmp528) < $tmp529;
frost$core$Bit $tmp531 = frost$core$Bit$init$builtin_bit($tmp530);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block1; else goto block2;
block1:;
// line 797
uint16_t $tmp533 = param0.value;
frost$core$UInt32 $tmp534 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp533));
return $tmp534;
block2:;
// line 799
uint32_t $tmp535 = param1.value;
frost$core$UInt32 $tmp536 = frost$core$UInt32$init$builtin_uint32($tmp535);
return $tmp536;

}
frost$core$UInt64 frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 805
uint16_t $tmp537 = param0.value;
uint64_t $tmp538 = param1.value;
bool $tmp539 = ((uint64_t) $tmp537) < $tmp538;
frost$core$Bit $tmp540 = frost$core$Bit$init$builtin_bit($tmp539);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block1; else goto block2;
block1:;
// line 806
uint16_t $tmp542 = param0.value;
frost$core$UInt64 $tmp543 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp542));
return $tmp543;
block2:;
// line 808
uint64_t $tmp544 = param1.value;
frost$core$UInt64 $tmp545 = frost$core$UInt64$init$builtin_uint64($tmp544);
return $tmp545;

}
frost$core$Int32 frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 814
uint16_t $tmp546 = param0.value;
int8_t $tmp547 = param1.value;
bool $tmp548 = ((int32_t) $tmp546) > ((int32_t) $tmp547);
frost$core$Bit $tmp549 = frost$core$Bit$init$builtin_bit($tmp548);
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block1; else goto block2;
block1:;
// line 815
uint16_t $tmp551 = param0.value;
frost$core$Int32 $tmp552 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp551));
return $tmp552;
block2:;
// line 817
int8_t $tmp553 = param1.value;
frost$core$Int32 $tmp554 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp553));
return $tmp554;

}
frost$core$Int32 frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 823
uint16_t $tmp555 = param0.value;
int16_t $tmp556 = param1.value;
bool $tmp557 = ((int32_t) $tmp555) > ((int32_t) $tmp556);
frost$core$Bit $tmp558 = frost$core$Bit$init$builtin_bit($tmp557);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block1; else goto block2;
block1:;
// line 824
uint16_t $tmp560 = param0.value;
frost$core$Int32 $tmp561 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp560));
return $tmp561;
block2:;
// line 826
int16_t $tmp562 = param1.value;
frost$core$Int32 $tmp563 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp562));
return $tmp563;

}
frost$core$Int64 frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 832
uint16_t $tmp564 = param0.value;
int32_t $tmp565 = param1.value;
bool $tmp566 = ((int64_t) $tmp564) > ((int64_t) $tmp565);
frost$core$Bit $tmp567 = frost$core$Bit$init$builtin_bit($tmp566);
bool $tmp568 = $tmp567.value;
if ($tmp568) goto block1; else goto block2;
block1:;
// line 833
uint16_t $tmp569 = param0.value;
frost$core$Int64 $tmp570 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp569));
return $tmp570;
block2:;
// line 835
int32_t $tmp571 = param1.value;
frost$core$Int64 $tmp572 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp571));
return $tmp572;

}
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 842
uint16_t $tmp573 = param0.value;
uint8_t $tmp574 = param1.value;
bool $tmp575 = $tmp573 > ((uint16_t) $tmp574);
frost$core$Bit $tmp576 = frost$core$Bit$init$builtin_bit($tmp575);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block1; else goto block2;
block1:;
// line 843
uint16_t $tmp578 = param0.value;
frost$core$UInt16 $tmp579 = frost$core$UInt16$init$builtin_uint16($tmp578);
return $tmp579;
block2:;
// line 845
uint8_t $tmp580 = param1.value;
frost$core$UInt16 $tmp581 = frost$core$UInt16$init$builtin_uint16(((uint16_t) $tmp580));
return $tmp581;

}
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 851
uint16_t $tmp582 = param0.value;
uint16_t $tmp583 = param1.value;
bool $tmp584 = $tmp582 > $tmp583;
frost$core$Bit $tmp585 = frost$core$Bit$init$builtin_bit($tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block1; else goto block2;
block1:;
// line 852
uint16_t $tmp587 = param0.value;
frost$core$UInt16 $tmp588 = frost$core$UInt16$init$builtin_uint16($tmp587);
return $tmp588;
block2:;
// line 854
uint16_t $tmp589 = param1.value;
frost$core$UInt16 $tmp590 = frost$core$UInt16$init$builtin_uint16($tmp589);
return $tmp590;

}
frost$core$UInt32 frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 860
uint16_t $tmp591 = param0.value;
uint32_t $tmp592 = param1.value;
bool $tmp593 = ((uint32_t) $tmp591) > $tmp592;
frost$core$Bit $tmp594 = frost$core$Bit$init$builtin_bit($tmp593);
bool $tmp595 = $tmp594.value;
if ($tmp595) goto block1; else goto block2;
block1:;
// line 861
uint16_t $tmp596 = param0.value;
frost$core$UInt32 $tmp597 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp596));
return $tmp597;
block2:;
// line 863
uint32_t $tmp598 = param1.value;
frost$core$UInt32 $tmp599 = frost$core$UInt32$init$builtin_uint32($tmp598);
return $tmp599;

}
frost$core$UInt64 frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 869
uint16_t $tmp600 = param0.value;
uint64_t $tmp601 = param1.value;
bool $tmp602 = ((uint64_t) $tmp600) > $tmp601;
frost$core$Bit $tmp603 = frost$core$Bit$init$builtin_bit($tmp602);
bool $tmp604 = $tmp603.value;
if ($tmp604) goto block1; else goto block2;
block1:;
// line 870
uint16_t $tmp605 = param0.value;
frost$core$UInt64 $tmp606 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp605));
return $tmp606;
block2:;
// line 872
uint64_t $tmp607 = param1.value;
frost$core$UInt64 $tmp608 = frost$core$UInt64$init$builtin_uint64($tmp607);
return $tmp608;

}
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$Range$LTfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$Range$LTfrost$core$UInt16$GT param0) {

// line 877
org$frostlang$frost$UInt16List* $tmp609 = (org$frostlang$frost$UInt16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt16List$class);
frost$core$UInt16 $tmp610 = param0.min;
frost$core$UInt16 $tmp611 = param0.max;
frost$core$UInt16 $tmp612 = (frost$core$UInt16) {1};
frost$core$Bit $tmp613 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT $tmp614 = frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$init$frost$core$UInt16$frost$core$UInt16$frost$core$UInt16$frost$core$Bit($tmp610, $tmp611, $tmp612, $tmp613);
org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT($tmp609, $tmp614);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp609)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp609));
// unreffing REF($1:org.frostlang.frost.UInt16List)
return ((frost$collections$ListView*) $tmp609);

}
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT param0) {

// line 882
org$frostlang$frost$UInt16List* $tmp615 = (org$frostlang$frost$UInt16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt16List$class);
org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT($tmp615, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp615)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp615));
// unreffing REF($1:org.frostlang.frost.UInt16List)
return ((frost$collections$ListView*) $tmp615);

}
frost$core$Bit frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$Int64 $tmp616 = (frost$core$Int64) {0};
int64_t $tmp617 = param1.value;
int64_t $tmp618 = $tmp616.value;
bool $tmp619 = $tmp617 >= $tmp618;
frost$core$Bit $tmp620 = (frost$core$Bit) {$tmp619};
bool $tmp621 = $tmp620.value;
if ($tmp621) goto block1; else goto block2;
block1:;
frost$core$UInt16$wrapper* $tmp622;
$tmp622 = (frost$core$UInt16$wrapper*) frostObjectAlloc(14, (frost$core$Class*) &frost$core$UInt16$wrapperclass);
$tmp622->value = param0;
ITable* $tmp623 = ((frost$collections$CollectionView*) $tmp622)->$class->itable;
while ($tmp623->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp623 = $tmp623->next;
}
$fn625 $tmp624 = $tmp623->methods[0];
frost$core$Int64 $tmp626 = $tmp624(((frost$collections$CollectionView*) $tmp622));
int64_t $tmp627 = param1.value;
int64_t $tmp628 = $tmp626.value;
bool $tmp629 = $tmp627 < $tmp628;
frost$core$Bit $tmp630 = (frost$core$Bit) {$tmp629};
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp622)));
// unreffing REF($7:frost.collections.CollectionView)
*(&local0) = $tmp630;
goto block3;
block2:;
*(&local0) = $tmp620;
goto block3;
block3:;
frost$core$Bit $tmp631 = *(&local0);
bool $tmp632 = $tmp631.value;
if ($tmp632) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp633 = (frost$core$Int64) {887};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s634, $tmp633, &$s635);
abort(); // unreachable
block4:;
// line 888
frost$core$Int64 $tmp636 = (frost$core$Int64) {1};
frost$core$Int64 $tmp637 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp636, param1);
frost$core$Int64 $tmp638 = frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp637);
frost$core$Int64 $tmp639 = (frost$core$Int64) {0};
int64_t $tmp640 = $tmp638.value;
int64_t $tmp641 = $tmp639.value;
bool $tmp642 = $tmp640 != $tmp641;
frost$core$Bit $tmp643 = (frost$core$Bit) {$tmp642};
return $tmp643;

}
frost$core$Int64 frost$core$UInt16$get_count$R$frost$core$Int64(frost$core$UInt16 param0) {

// line 894
frost$core$Int64 $tmp644 = (frost$core$Int64) {16};
return $tmp644;

}
frost$collections$Iterator* frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt16 param0) {

// line 899
org$frostlang$frost$IntBitIterator* $tmp645 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp646 = frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp647 = (frost$core$UInt64) {32768};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp645, $tmp646, $tmp647);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp645)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp645));
// unreffing REF($1:org.frostlang.frost.IntBitIterator)
return ((frost$collections$Iterator*) $tmp645);

}
frost$core$Int64 frost$core$UInt16$get_hash$R$frost$core$Int64(frost$core$UInt16 param0) {

// line 904
uint16_t $tmp648 = param0.value;
frost$core$Int64 $tmp649 = (frost$core$Int64) {((int64_t) $tmp648)};
return $tmp649;

}
frost$core$UInt16$nullable frost$core$UInt16$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt16$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$Bit local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp650 = (frost$core$Int64) {2};
int64_t $tmp651 = param1.value;
int64_t $tmp652 = $tmp650.value;
bool $tmp653 = $tmp651 >= $tmp652;
frost$core$Bit $tmp654 = (frost$core$Bit) {$tmp653};
bool $tmp655 = $tmp654.value;
if ($tmp655) goto block1; else goto block2;
block1:;
frost$core$Int64 $tmp656 = (frost$core$Int64) {36};
int64_t $tmp657 = param1.value;
int64_t $tmp658 = $tmp656.value;
bool $tmp659 = $tmp657 <= $tmp658;
frost$core$Bit $tmp660 = (frost$core$Bit) {$tmp659};
*(&local0) = $tmp660;
goto block3;
block2:;
*(&local0) = $tmp654;
goto block3;
block3:;
frost$core$Bit $tmp661 = *(&local0);
bool $tmp662 = $tmp661.value;
if ($tmp662) goto block4; else goto block5;
block5:;
frost$core$Int64 $tmp663 = (frost$core$Int64) {910};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s664, $tmp663, &$s665);
abort(); // unreachable
block4:;
// line 911
frost$core$UInt64$nullable $tmp666 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp666;
// line 912
frost$core$UInt64$nullable $tmp667 = *(&local1);
frost$core$Bit $tmp668 = frost$core$Bit$init$builtin_bit(!$tmp667.nonnull);
bool $tmp669 = $tmp668.value;
if ($tmp669) goto block6; else goto block7;
block6:;
// line 913
return ((frost$core$UInt16$nullable) { .nonnull = false });
block7:;
// line 915
frost$core$UInt64$nullable $tmp670 = *(&local1);
frost$core$Bit $tmp671 = frost$core$Bit$init$builtin_bit($tmp670.nonnull);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block8; else goto block9;
block9:;
frost$core$Int64 $tmp673 = (frost$core$Int64) {915};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s674, $tmp673, &$s675);
abort(); // unreachable
block8:;
frost$core$UInt16 $tmp676 = frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt64) $tmp670.value));
return ((frost$core$UInt16$nullable) { $tmp676, true });

}
frost$core$Int8 frost$core$UInt16$get_asInt8$R$frost$core$Int8(frost$core$UInt16 param0) {

// line 921
uint16_t $tmp677 = param0.value;
frost$core$Int8 $tmp678 = (frost$core$Int8) {((int8_t) $tmp677)};
return $tmp678;

}
frost$core$Int8 frost$core$UInt16$convert$R$frost$core$Int8(frost$core$UInt16 param0) {

// line 924
uint16_t $tmp679 = param0.value;
frost$core$Int8 $tmp680 = (frost$core$Int8) {((int8_t) $tmp679)};
return $tmp680;

}
frost$core$Int16 frost$core$UInt16$get_asInt16$R$frost$core$Int16(frost$core$UInt16 param0) {

// line 930
uint16_t $tmp681 = param0.value;
frost$core$Int16 $tmp682 = (frost$core$Int16) {((int16_t) $tmp681)};
return $tmp682;

}
frost$core$Int16 frost$core$UInt16$convert$R$frost$core$Int16(frost$core$UInt16 param0) {

// line 933
uint16_t $tmp683 = param0.value;
frost$core$Int16 $tmp684 = (frost$core$Int16) {((int16_t) $tmp683)};
return $tmp684;

}
frost$core$Int32 frost$core$UInt16$get_asInt32$R$frost$core$Int32(frost$core$UInt16 param0) {

// line 939
uint16_t $tmp685 = param0.value;
frost$core$Int32 $tmp686 = (frost$core$Int32) {((int32_t) $tmp685)};
return $tmp686;

}
frost$core$Int32 frost$core$UInt16$convert$R$frost$core$Int32(frost$core$UInt16 param0) {

// line 942
uint16_t $tmp687 = param0.value;
frost$core$Int32 $tmp688 = (frost$core$Int32) {((int32_t) $tmp687)};
return $tmp688;

}
frost$core$Int64 frost$core$UInt16$get_asInt64$R$frost$core$Int64(frost$core$UInt16 param0) {

// line 948
uint16_t $tmp689 = param0.value;
frost$core$Int64 $tmp690 = (frost$core$Int64) {((int64_t) $tmp689)};
return $tmp690;

}
frost$core$Int64 frost$core$UInt16$convert$R$frost$core$Int64(frost$core$UInt16 param0) {

// line 951
uint16_t $tmp691 = param0.value;
frost$core$Int64 $tmp692 = (frost$core$Int64) {((int64_t) $tmp691)};
return $tmp692;

}
frost$core$UInt8 frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(frost$core$UInt16 param0) {

// line 957
uint16_t $tmp693 = param0.value;
frost$core$UInt8 $tmp694 = (frost$core$UInt8) {((uint8_t) $tmp693)};
return $tmp694;

}
frost$core$UInt8 frost$core$UInt16$convert$R$frost$core$UInt8(frost$core$UInt16 param0) {

// line 960
uint16_t $tmp695 = param0.value;
frost$core$UInt8 $tmp696 = (frost$core$UInt8) {((uint8_t) $tmp695)};
return $tmp696;

}
frost$core$UInt32 frost$core$UInt16$get_asUInt32$R$frost$core$UInt32(frost$core$UInt16 param0) {

// line 966
uint16_t $tmp697 = param0.value;
frost$core$UInt32 $tmp698 = (frost$core$UInt32) {((uint32_t) $tmp697)};
return $tmp698;

}
frost$core$UInt32 frost$core$UInt16$convert$R$frost$core$UInt32(frost$core$UInt16 param0) {

// line 969
uint16_t $tmp699 = param0.value;
frost$core$UInt32 $tmp700 = (frost$core$UInt32) {((uint32_t) $tmp699)};
return $tmp700;

}
frost$core$UInt64 frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(frost$core$UInt16 param0) {

// line 975
uint16_t $tmp701 = param0.value;
frost$core$UInt64 $tmp702 = (frost$core$UInt64) {((uint64_t) $tmp701)};
return $tmp702;

}
frost$core$UInt64 frost$core$UInt16$convert$R$frost$core$UInt64(frost$core$UInt16 param0) {

// line 978
uint16_t $tmp703 = param0.value;
frost$core$UInt64 $tmp704 = (frost$core$UInt64) {((uint64_t) $tmp703)};
return $tmp704;

}
frost$core$Real32 frost$core$UInt16$get_asReal32$R$frost$core$Real32(frost$core$UInt16 param0) {

// line 984
uint16_t $tmp705 = param0.value;
frost$core$Real32 $tmp706 = (frost$core$Real32) {((float) $tmp705)};
return $tmp706;

}
frost$core$Real32 frost$core$UInt16$convert$R$frost$core$Real32(frost$core$UInt16 param0) {

// line 987
uint16_t $tmp707 = param0.value;
frost$core$Real32 $tmp708 = (frost$core$Real32) {((float) $tmp707)};
return $tmp708;

}
frost$core$Real64 frost$core$UInt16$get_asReal64$R$frost$core$Real64(frost$core$UInt16 param0) {

// line 993
uint16_t $tmp709 = param0.value;
frost$core$Real64 $tmp710 = (frost$core$Real64) {((double) $tmp709)};
return $tmp710;

}
frost$core$Real64 frost$core$UInt16$convert$R$frost$core$Real64(frost$core$UInt16 param0) {

// line 996
uint16_t $tmp711 = param0.value;
frost$core$Real64 $tmp712 = (frost$core$Real64) {((double) $tmp711)};
return $tmp712;

}
frost$core$String* frost$core$UInt16$get_asString$R$frost$core$String(frost$core$UInt16 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt16 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 1002
frost$core$Int64 $tmp713 = (frost$core$Int64) {5};
*(&local0) = $tmp713;
// line 1003
frost$core$Int64 $tmp714 = *(&local0);
int64_t $tmp715 = $tmp714.value;
frost$core$Char8* $tmp716 = ((frost$core$Char8*) frostAlloc($tmp715 * 1));
*(&local1) = $tmp716;
// line 1004
frost$core$Int64 $tmp717 = *(&local0);
frost$core$Int64 $tmp718 = (frost$core$Int64) {1};
int64_t $tmp719 = $tmp717.value;
int64_t $tmp720 = $tmp718.value;
int64_t $tmp721 = $tmp719 - $tmp720;
frost$core$Int64 $tmp722 = (frost$core$Int64) {$tmp721};
*(&local2) = $tmp722;
// line 1005
*(&local3) = param0;
// line 1006
frost$core$UInt16 $tmp723 = *(&local3);
frost$core$UInt16 $tmp724 = (frost$core$UInt16) {0};
uint16_t $tmp725 = $tmp723.value;
uint16_t $tmp726 = $tmp724.value;
bool $tmp727 = $tmp725 >= $tmp726;
frost$core$Bit $tmp728 = (frost$core$Bit) {$tmp727};
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block1; else goto block3;
block1:;
// line 1007
goto block4;
block4:;
// line 1008
frost$core$Char8* $tmp730 = *(&local1);
frost$core$Int64 $tmp731 = *(&local2);
frost$core$UInt16 $tmp732 = *(&local3);
frost$core$UInt16 $tmp733 = (frost$core$UInt16) {10};
frost$core$UInt32 $tmp734 = frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32($tmp732, $tmp733);
frost$core$UInt32 $tmp735 = (frost$core$UInt32) {48};
uint32_t $tmp736 = $tmp734.value;
uint32_t $tmp737 = $tmp735.value;
uint32_t $tmp738 = $tmp736 + $tmp737;
frost$core$UInt32 $tmp739 = (frost$core$UInt32) {$tmp738};
frost$core$UInt8 $tmp740 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp739);
frost$core$Char8 $tmp741 = frost$core$Char8$init$frost$core$UInt8($tmp740);
int64_t $tmp742 = $tmp731.value;
$tmp730[$tmp742] = $tmp741;
// line 1009
frost$core$UInt16 $tmp743 = *(&local3);
frost$core$UInt32 $tmp744 = frost$core$UInt32$init$frost$core$UInt16($tmp743);
frost$core$UInt32 $tmp745 = (frost$core$UInt32) {10};
uint32_t $tmp746 = $tmp744.value;
uint32_t $tmp747 = $tmp745.value;
uint32_t $tmp748 = $tmp746 / $tmp747;
frost$core$UInt32 $tmp749 = (frost$core$UInt32) {$tmp748};
frost$core$UInt16 $tmp750 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16($tmp749);
*(&local3) = $tmp750;
// line 1010
frost$core$Int64 $tmp751 = *(&local2);
frost$core$Int64 $tmp752 = (frost$core$Int64) {1};
int64_t $tmp753 = $tmp751.value;
int64_t $tmp754 = $tmp752.value;
int64_t $tmp755 = $tmp753 - $tmp754;
frost$core$Int64 $tmp756 = (frost$core$Int64) {$tmp755};
*(&local2) = $tmp756;
goto block5;
block5:;
frost$core$UInt16 $tmp757 = *(&local3);
frost$core$UInt16 $tmp758 = (frost$core$UInt16) {0};
uint16_t $tmp759 = $tmp757.value;
uint16_t $tmp760 = $tmp758.value;
bool $tmp761 = $tmp759 > $tmp760;
frost$core$Bit $tmp762 = (frost$core$Bit) {$tmp761};
bool $tmp763 = $tmp762.value;
if ($tmp763) goto block4; else goto block6;
block6:;
// line 1013
frost$core$Int64 $tmp764 = *(&local2);
frost$core$Int64 $tmp765 = (frost$core$Int64) {1};
int64_t $tmp766 = $tmp764.value;
int64_t $tmp767 = $tmp765.value;
int64_t $tmp768 = $tmp766 + $tmp767;
frost$core$Int64 $tmp769 = (frost$core$Int64) {$tmp768};
*(&local2) = $tmp769;
goto block2;
block3:;
// line 1
// line 1016
goto block7;
block7:;
// line 1017
frost$core$Char8* $tmp770 = *(&local1);
frost$core$Int64 $tmp771 = *(&local2);
frost$core$UInt32 $tmp772 = (frost$core$UInt32) {48};
frost$core$UInt16 $tmp773 = *(&local3);
frost$core$UInt16 $tmp774 = (frost$core$UInt16) {10};
frost$core$UInt32 $tmp775 = frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32($tmp773, $tmp774);
uint32_t $tmp776 = $tmp772.value;
uint32_t $tmp777 = $tmp775.value;
uint32_t $tmp778 = $tmp776 - $tmp777;
frost$core$UInt32 $tmp779 = (frost$core$UInt32) {$tmp778};
frost$core$UInt8 $tmp780 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp779);
frost$core$Char8 $tmp781 = frost$core$Char8$init$frost$core$UInt8($tmp780);
int64_t $tmp782 = $tmp771.value;
$tmp770[$tmp782] = $tmp781;
// line 1018
frost$core$UInt16 $tmp783 = *(&local3);
frost$core$UInt32 $tmp784 = frost$core$UInt32$init$frost$core$UInt16($tmp783);
frost$core$UInt32 $tmp785 = (frost$core$UInt32) {10};
uint32_t $tmp786 = $tmp784.value;
uint32_t $tmp787 = $tmp785.value;
uint32_t $tmp788 = $tmp786 / $tmp787;
frost$core$UInt32 $tmp789 = (frost$core$UInt32) {$tmp788};
frost$core$UInt16 $tmp790 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16($tmp789);
*(&local3) = $tmp790;
// line 1019
frost$core$Int64 $tmp791 = *(&local2);
frost$core$Int64 $tmp792 = (frost$core$Int64) {1};
int64_t $tmp793 = $tmp791.value;
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793 - $tmp794;
frost$core$Int64 $tmp796 = (frost$core$Int64) {$tmp795};
*(&local2) = $tmp796;
goto block8;
block8:;
frost$core$UInt16 $tmp797 = *(&local3);
frost$core$UInt16 $tmp798 = (frost$core$UInt16) {0};
uint16_t $tmp799 = $tmp797.value;
uint16_t $tmp800 = $tmp798.value;
bool $tmp801 = $tmp799 < $tmp800;
frost$core$Bit $tmp802 = (frost$core$Bit) {$tmp801};
bool $tmp803 = $tmp802.value;
if ($tmp803) goto block7; else goto block9;
block9:;
// line 1022
frost$core$Char8* $tmp804 = *(&local1);
frost$core$Int64 $tmp805 = *(&local2);
frost$core$UInt8 $tmp806 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp807 = frost$core$Char8$init$frost$core$UInt8($tmp806);
int64_t $tmp808 = $tmp805.value;
$tmp804[$tmp808] = $tmp807;
goto block2;
block2:;
// line 1024
frost$core$Int64 $tmp809 = *(&local0);
frost$core$Int64 $tmp810 = *(&local2);
int64_t $tmp811 = $tmp809.value;
int64_t $tmp812 = $tmp810.value;
int64_t $tmp813 = $tmp811 - $tmp812;
frost$core$Int64 $tmp814 = (frost$core$Int64) {$tmp813};
*(&local4) = $tmp814;
// line 1025
frost$core$Int64 $tmp815 = (frost$core$Int64) {0};
frost$core$Int64 $tmp816 = *(&local4);
frost$core$Bit $tmp817 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp818 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp815, $tmp816, $tmp817);
frost$core$Int64 $tmp819 = $tmp818.min;
*(&local5) = $tmp819;
frost$core$Int64 $tmp820 = $tmp818.max;
frost$core$Bit $tmp821 = $tmp818.inclusive;
bool $tmp822 = $tmp821.value;
frost$core$Int64 $tmp823 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp824 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp823);
if ($tmp822) goto block13; else goto block14;
block13:;
int64_t $tmp825 = $tmp819.value;
int64_t $tmp826 = $tmp820.value;
bool $tmp827 = $tmp825 <= $tmp826;
frost$core$Bit $tmp828 = (frost$core$Bit) {$tmp827};
bool $tmp829 = $tmp828.value;
if ($tmp829) goto block10; else goto block11;
block14:;
int64_t $tmp830 = $tmp819.value;
int64_t $tmp831 = $tmp820.value;
bool $tmp832 = $tmp830 < $tmp831;
frost$core$Bit $tmp833 = (frost$core$Bit) {$tmp832};
bool $tmp834 = $tmp833.value;
if ($tmp834) goto block10; else goto block11;
block10:;
// line 1026
frost$core$Char8* $tmp835 = *(&local1);
frost$core$Int64 $tmp836 = *(&local5);
frost$core$Char8* $tmp837 = *(&local1);
frost$core$Int64 $tmp838 = *(&local5);
frost$core$Int64 $tmp839 = *(&local2);
int64_t $tmp840 = $tmp838.value;
int64_t $tmp841 = $tmp839.value;
int64_t $tmp842 = $tmp840 + $tmp841;
frost$core$Int64 $tmp843 = (frost$core$Int64) {$tmp842};
int64_t $tmp844 = $tmp843.value;
frost$core$Char8 $tmp845 = $tmp837[$tmp844];
int64_t $tmp846 = $tmp836.value;
$tmp835[$tmp846] = $tmp845;
goto block12;
block12:;
frost$core$Int64 $tmp847 = *(&local5);
int64_t $tmp848 = $tmp820.value;
int64_t $tmp849 = $tmp847.value;
int64_t $tmp850 = $tmp848 - $tmp849;
frost$core$Int64 $tmp851 = (frost$core$Int64) {$tmp850};
frost$core$UInt64 $tmp852 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp851);
if ($tmp822) goto block16; else goto block17;
block16:;
uint64_t $tmp853 = $tmp852.value;
uint64_t $tmp854 = $tmp824.value;
bool $tmp855 = $tmp853 >= $tmp854;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
bool $tmp857 = $tmp856.value;
if ($tmp857) goto block15; else goto block11;
block17:;
uint64_t $tmp858 = $tmp852.value;
uint64_t $tmp859 = $tmp824.value;
bool $tmp860 = $tmp858 > $tmp859;
frost$core$Bit $tmp861 = (frost$core$Bit) {$tmp860};
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block15; else goto block11;
block15:;
int64_t $tmp863 = $tmp847.value;
int64_t $tmp864 = $tmp823.value;
int64_t $tmp865 = $tmp863 + $tmp864;
frost$core$Int64 $tmp866 = (frost$core$Int64) {$tmp865};
*(&local5) = $tmp866;
goto block10;
block11:;
// line 1028
frost$core$String* $tmp867 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp868 = *(&local1);
frost$core$Int64 $tmp869 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp867, $tmp868, $tmp869);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp867));
// unreffing REF($207:frost.core.String)
return $tmp867;

}
frost$core$String* frost$core$UInt16$format$frost$core$String$R$frost$core$String(frost$core$UInt16 param0, frost$core$String* param1) {

// line 1034
frost$core$Bit $tmp870 = frost$core$Bit$init$builtin_bit(false);
frost$core$UInt64 $tmp871 = frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp872 = (frost$core$UInt64) {65535};
frost$core$String* $tmp873 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp870, $tmp871, $tmp872, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp873));
// unreffing REF($4:frost.core.String)
return $tmp873;

}
void frost$core$UInt16$cleanup(frost$core$UInt16 param0) {

return;

}

