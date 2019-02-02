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
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
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

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt16$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt16$_frost$collections$CollectionView, { frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt16$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt16$_frost$collections$Iterable, { frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$UInt16$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt16$_frost$core$Equatable, { frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt16$_frost$collections$ListView, { frost$core$UInt16$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt16$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt16$_frost$collections$Key, { frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt16$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt16$_frost$core$Comparable, { frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$UInt16$class_type frost$core$UInt16$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt16$_frost$core$Formattable, { frost$core$UInt16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt16$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$ADD$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$ADD$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$ADD$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$SUB$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SUB$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$SUB$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$SUB$R$frost$core$UInt16$shim, frost$core$UInt16$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$MUL$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$MUL$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$MUL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$INTDIV$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$INTDIV$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$INTDIV$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$REM$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$REM$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt16$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$UInt16$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt16$$BNOT$R$frost$core$UInt16$shim, frost$core$UInt16$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BAND$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BOR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$UInt16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$BXOR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16$shim, frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32$shim, frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16$shim, frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16$shim, frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt16$get_count$R$frost$core$Int64$shim, frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt16$get_hash$R$frost$core$Int64$shim, frost$core$UInt16$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt16$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt16$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt16$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt16$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt16$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt16$get_asUInt64$R$frost$core$UInt64$shim, frost$core$UInt16$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt16$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt16$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt16$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$CollectionView, { frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt16$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$Iterable, { frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$UInt16$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Equatable, { frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$ListView, { frost$core$UInt16$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt16$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt16$wrapper_frost$collections$Key, { frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt16$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Comparable, { frost$core$UInt16$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$UInt16$wrapperclass_type frost$core$UInt16$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt16$wrapper_frost$core$Formattable, { frost$core$UInt16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn585)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36", 17, 1146821090439666371, NULL };
static frost$core$String $s593 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 8497665508273682800, NULL };
static frost$core$String $s594 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, -7575919172661098457, NULL };
static frost$core$String $s622 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 12, 8497665508273682800, NULL };
static frost$core$String $s623 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x31\x36\x3f", 123, -6892138887488414678, NULL };

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
frost$core$UInt32 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 410
uint16_t $tmp259 = param0.value;
uint16_t $tmp260 = param1.value;
uint32_t $tmp261 = ((uint32_t) $tmp259) << ((uint32_t) $tmp260);
frost$core$UInt32 $tmp262 = frost$core$UInt32$init$builtin_uint32($tmp261);
return $tmp262;

}
frost$core$UInt16 frost$core$UInt16$$SHL$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 415
uint16_t $tmp263 = param0.value;
uint16_t $tmp264 = param1.value;
uint16_t $tmp265 = $tmp263 << $tmp264;
frost$core$UInt16 $tmp266 = frost$core$UInt16$init$builtin_uint16($tmp265);
return $tmp266;

}
frost$core$UInt32 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 421
uint16_t $tmp267 = param0.value;
uint16_t $tmp268 = param1.value;
uint32_t $tmp269 = ((uint32_t) $tmp267) >> ((uint32_t) $tmp268);
frost$core$UInt32 $tmp270 = frost$core$UInt32$init$builtin_uint32($tmp269);
return $tmp270;

}
frost$core$UInt16 frost$core$UInt16$$SHR$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 426
uint16_t $tmp271 = param0.value;
uint16_t $tmp272 = param1.value;
uint16_t $tmp273 = $tmp271 >> $tmp272;
frost$core$UInt16 $tmp274 = frost$core$UInt16$init$builtin_uint16($tmp273);
return $tmp274;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 432
uint16_t $tmp275 = param0.value;
int8_t $tmp276 = param1.value;
bool $tmp277 = ((int32_t) $tmp275) == ((int32_t) $tmp276);
frost$core$Bit $tmp278 = frost$core$Bit$init$builtin_bit($tmp277);
return $tmp278;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 438
uint16_t $tmp279 = param0.value;
int16_t $tmp280 = param1.value;
bool $tmp281 = ((int32_t) $tmp279) == ((int32_t) $tmp280);
frost$core$Bit $tmp282 = frost$core$Bit$init$builtin_bit($tmp281);
return $tmp282;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 444
uint16_t $tmp283 = param0.value;
int32_t $tmp284 = param1.value;
bool $tmp285 = ((int64_t) $tmp283) == ((int64_t) $tmp284);
frost$core$Bit $tmp286 = frost$core$Bit$init$builtin_bit($tmp285);
return $tmp286;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 450
uint16_t $tmp287 = param0.value;
uint8_t $tmp288 = param1.value;
bool $tmp289 = $tmp287 == ((uint16_t) $tmp288);
frost$core$Bit $tmp290 = frost$core$Bit$init$builtin_bit($tmp289);
return $tmp290;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 457
uint16_t $tmp291 = param0.value;
uint16_t $tmp292 = param1.value;
bool $tmp293 = $tmp291 == $tmp292;
frost$core$Bit $tmp294 = frost$core$Bit$init$builtin_bit($tmp293);
return $tmp294;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 463
uint16_t $tmp295 = param0.value;
uint32_t $tmp296 = param1.value;
bool $tmp297 = ((uint32_t) $tmp295) == $tmp296;
frost$core$Bit $tmp298 = frost$core$Bit$init$builtin_bit($tmp297);
return $tmp298;

}
frost$core$Bit frost$core$UInt16$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 469
uint16_t $tmp299 = param0.value;
uint64_t $tmp300 = param1.value;
bool $tmp301 = ((uint64_t) $tmp299) == $tmp300;
frost$core$Bit $tmp302 = frost$core$Bit$init$builtin_bit($tmp301);
return $tmp302;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 475
uint16_t $tmp303 = param0.value;
int8_t $tmp304 = param1.value;
bool $tmp305 = ((int32_t) $tmp303) != ((int32_t) $tmp304);
frost$core$Bit $tmp306 = frost$core$Bit$init$builtin_bit($tmp305);
return $tmp306;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 481
uint16_t $tmp307 = param0.value;
int16_t $tmp308 = param1.value;
bool $tmp309 = ((int32_t) $tmp307) != ((int32_t) $tmp308);
frost$core$Bit $tmp310 = frost$core$Bit$init$builtin_bit($tmp309);
return $tmp310;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 487
uint16_t $tmp311 = param0.value;
int32_t $tmp312 = param1.value;
bool $tmp313 = ((int64_t) $tmp311) != ((int64_t) $tmp312);
frost$core$Bit $tmp314 = frost$core$Bit$init$builtin_bit($tmp313);
return $tmp314;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 493
uint16_t $tmp315 = param0.value;
uint8_t $tmp316 = param1.value;
bool $tmp317 = $tmp315 != ((uint16_t) $tmp316);
frost$core$Bit $tmp318 = frost$core$Bit$init$builtin_bit($tmp317);
return $tmp318;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 500
uint16_t $tmp319 = param0.value;
uint16_t $tmp320 = param1.value;
bool $tmp321 = $tmp319 != $tmp320;
frost$core$Bit $tmp322 = frost$core$Bit$init$builtin_bit($tmp321);
return $tmp322;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 506
uint16_t $tmp323 = param0.value;
uint32_t $tmp324 = param1.value;
bool $tmp325 = ((uint32_t) $tmp323) != $tmp324;
frost$core$Bit $tmp326 = frost$core$Bit$init$builtin_bit($tmp325);
return $tmp326;

}
frost$core$Bit frost$core$UInt16$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 512
uint16_t $tmp327 = param0.value;
uint64_t $tmp328 = param1.value;
bool $tmp329 = ((uint64_t) $tmp327) != $tmp328;
frost$core$Bit $tmp330 = frost$core$Bit$init$builtin_bit($tmp329);
return $tmp330;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 518
uint16_t $tmp331 = param0.value;
int8_t $tmp332 = param1.value;
bool $tmp333 = ((int32_t) $tmp331) < ((int32_t) $tmp332);
frost$core$Bit $tmp334 = frost$core$Bit$init$builtin_bit($tmp333);
return $tmp334;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 524
uint16_t $tmp335 = param0.value;
int16_t $tmp336 = param1.value;
bool $tmp337 = ((int32_t) $tmp335) < ((int32_t) $tmp336);
frost$core$Bit $tmp338 = frost$core$Bit$init$builtin_bit($tmp337);
return $tmp338;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 530
uint16_t $tmp339 = param0.value;
int32_t $tmp340 = param1.value;
bool $tmp341 = ((int64_t) $tmp339) < ((int64_t) $tmp340);
frost$core$Bit $tmp342 = frost$core$Bit$init$builtin_bit($tmp341);
return $tmp342;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 536
uint16_t $tmp343 = param0.value;
uint8_t $tmp344 = param1.value;
bool $tmp345 = $tmp343 < ((uint16_t) $tmp344);
frost$core$Bit $tmp346 = frost$core$Bit$init$builtin_bit($tmp345);
return $tmp346;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 543
uint16_t $tmp347 = param0.value;
uint16_t $tmp348 = param1.value;
bool $tmp349 = $tmp347 < $tmp348;
frost$core$Bit $tmp350 = frost$core$Bit$init$builtin_bit($tmp349);
return $tmp350;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 549
uint16_t $tmp351 = param0.value;
uint32_t $tmp352 = param1.value;
bool $tmp353 = ((uint32_t) $tmp351) < $tmp352;
frost$core$Bit $tmp354 = frost$core$Bit$init$builtin_bit($tmp353);
return $tmp354;

}
frost$core$Bit frost$core$UInt16$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 555
uint16_t $tmp355 = param0.value;
uint64_t $tmp356 = param1.value;
bool $tmp357 = ((uint64_t) $tmp355) < $tmp356;
frost$core$Bit $tmp358 = frost$core$Bit$init$builtin_bit($tmp357);
return $tmp358;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 561
uint16_t $tmp359 = param0.value;
int8_t $tmp360 = param1.value;
bool $tmp361 = ((int32_t) $tmp359) > ((int32_t) $tmp360);
frost$core$Bit $tmp362 = frost$core$Bit$init$builtin_bit($tmp361);
return $tmp362;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 567
uint16_t $tmp363 = param0.value;
int16_t $tmp364 = param1.value;
bool $tmp365 = ((int32_t) $tmp363) > ((int32_t) $tmp364);
frost$core$Bit $tmp366 = frost$core$Bit$init$builtin_bit($tmp365);
return $tmp366;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 573
uint16_t $tmp367 = param0.value;
int32_t $tmp368 = param1.value;
bool $tmp369 = ((int64_t) $tmp367) > ((int64_t) $tmp368);
frost$core$Bit $tmp370 = frost$core$Bit$init$builtin_bit($tmp369);
return $tmp370;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 579
uint16_t $tmp371 = param0.value;
uint8_t $tmp372 = param1.value;
bool $tmp373 = $tmp371 > ((uint16_t) $tmp372);
frost$core$Bit $tmp374 = frost$core$Bit$init$builtin_bit($tmp373);
return $tmp374;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 586
uint16_t $tmp375 = param0.value;
uint16_t $tmp376 = param1.value;
bool $tmp377 = $tmp375 > $tmp376;
frost$core$Bit $tmp378 = frost$core$Bit$init$builtin_bit($tmp377);
return $tmp378;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 592
uint16_t $tmp379 = param0.value;
uint32_t $tmp380 = param1.value;
bool $tmp381 = ((uint32_t) $tmp379) > $tmp380;
frost$core$Bit $tmp382 = frost$core$Bit$init$builtin_bit($tmp381);
return $tmp382;

}
frost$core$Bit frost$core$UInt16$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 598
uint16_t $tmp383 = param0.value;
uint64_t $tmp384 = param1.value;
bool $tmp385 = ((uint64_t) $tmp383) > $tmp384;
frost$core$Bit $tmp386 = frost$core$Bit$init$builtin_bit($tmp385);
return $tmp386;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 604
uint16_t $tmp387 = param0.value;
int8_t $tmp388 = param1.value;
bool $tmp389 = ((int32_t) $tmp387) >= ((int32_t) $tmp388);
frost$core$Bit $tmp390 = frost$core$Bit$init$builtin_bit($tmp389);
return $tmp390;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 610
uint16_t $tmp391 = param0.value;
int16_t $tmp392 = param1.value;
bool $tmp393 = ((int32_t) $tmp391) >= ((int32_t) $tmp392);
frost$core$Bit $tmp394 = frost$core$Bit$init$builtin_bit($tmp393);
return $tmp394;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 616
uint16_t $tmp395 = param0.value;
int32_t $tmp396 = param1.value;
bool $tmp397 = ((int64_t) $tmp395) >= ((int64_t) $tmp396);
frost$core$Bit $tmp398 = frost$core$Bit$init$builtin_bit($tmp397);
return $tmp398;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 622
uint16_t $tmp399 = param0.value;
uint8_t $tmp400 = param1.value;
bool $tmp401 = $tmp399 >= ((uint16_t) $tmp400);
frost$core$Bit $tmp402 = frost$core$Bit$init$builtin_bit($tmp401);
return $tmp402;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 629
uint16_t $tmp403 = param0.value;
uint16_t $tmp404 = param1.value;
bool $tmp405 = $tmp403 >= $tmp404;
frost$core$Bit $tmp406 = frost$core$Bit$init$builtin_bit($tmp405);
return $tmp406;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 635
uint16_t $tmp407 = param0.value;
uint32_t $tmp408 = param1.value;
bool $tmp409 = ((uint32_t) $tmp407) >= $tmp408;
frost$core$Bit $tmp410 = frost$core$Bit$init$builtin_bit($tmp409);
return $tmp410;

}
frost$core$Bit frost$core$UInt16$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 641
uint16_t $tmp411 = param0.value;
uint64_t $tmp412 = param1.value;
bool $tmp413 = ((uint64_t) $tmp411) >= $tmp412;
frost$core$Bit $tmp414 = frost$core$Bit$init$builtin_bit($tmp413);
return $tmp414;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 647
uint16_t $tmp415 = param0.value;
int8_t $tmp416 = param1.value;
bool $tmp417 = ((int32_t) $tmp415) <= ((int32_t) $tmp416);
frost$core$Bit $tmp418 = frost$core$Bit$init$builtin_bit($tmp417);
return $tmp418;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 653
uint16_t $tmp419 = param0.value;
int16_t $tmp420 = param1.value;
bool $tmp421 = ((int32_t) $tmp419) <= ((int32_t) $tmp420);
frost$core$Bit $tmp422 = frost$core$Bit$init$builtin_bit($tmp421);
return $tmp422;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 659
uint16_t $tmp423 = param0.value;
int32_t $tmp424 = param1.value;
bool $tmp425 = ((int64_t) $tmp423) <= ((int64_t) $tmp424);
frost$core$Bit $tmp426 = frost$core$Bit$init$builtin_bit($tmp425);
return $tmp426;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 665
uint16_t $tmp427 = param0.value;
uint8_t $tmp428 = param1.value;
bool $tmp429 = $tmp427 <= ((uint16_t) $tmp428);
frost$core$Bit $tmp430 = frost$core$Bit$init$builtin_bit($tmp429);
return $tmp430;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 672
uint16_t $tmp431 = param0.value;
uint16_t $tmp432 = param1.value;
bool $tmp433 = $tmp431 <= $tmp432;
frost$core$Bit $tmp434 = frost$core$Bit$init$builtin_bit($tmp433);
return $tmp434;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 678
uint16_t $tmp435 = param0.value;
uint32_t $tmp436 = param1.value;
bool $tmp437 = ((uint32_t) $tmp435) <= $tmp436;
frost$core$Bit $tmp438 = frost$core$Bit$init$builtin_bit($tmp437);
return $tmp438;

}
frost$core$Bit frost$core$UInt16$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 684
uint16_t $tmp439 = param0.value;
uint64_t $tmp440 = param1.value;
bool $tmp441 = ((uint64_t) $tmp439) <= $tmp440;
frost$core$Bit $tmp442 = frost$core$Bit$init$builtin_bit($tmp441);
return $tmp442;

}
frost$core$Int32 frost$core$UInt16$min$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 690
uint16_t $tmp443 = param0.value;
int8_t $tmp444 = param1.value;
bool $tmp445 = ((int32_t) $tmp443) < ((int32_t) $tmp444);
frost$core$Bit $tmp446 = frost$core$Bit$init$builtin_bit($tmp445);
bool $tmp447 = $tmp446.value;
if ($tmp447) goto block1; else goto block2;
block1:;
// line 691
uint16_t $tmp448 = param0.value;
frost$core$Int32 $tmp449 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp448));
return $tmp449;
block2:;
// line 693
int8_t $tmp450 = param1.value;
frost$core$Int32 $tmp451 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp450));
return $tmp451;

}
frost$core$Int32 frost$core$UInt16$min$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 699
uint16_t $tmp452 = param0.value;
int16_t $tmp453 = param1.value;
bool $tmp454 = ((int32_t) $tmp452) < ((int32_t) $tmp453);
frost$core$Bit $tmp455 = frost$core$Bit$init$builtin_bit($tmp454);
bool $tmp456 = $tmp455.value;
if ($tmp456) goto block1; else goto block2;
block1:;
// line 700
uint16_t $tmp457 = param0.value;
frost$core$Int32 $tmp458 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp457));
return $tmp458;
block2:;
// line 702
int16_t $tmp459 = param1.value;
frost$core$Int32 $tmp460 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp459));
return $tmp460;

}
frost$core$Int64 frost$core$UInt16$min$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 708
uint16_t $tmp461 = param0.value;
int32_t $tmp462 = param1.value;
bool $tmp463 = ((int64_t) $tmp461) < ((int64_t) $tmp462);
frost$core$Bit $tmp464 = frost$core$Bit$init$builtin_bit($tmp463);
bool $tmp465 = $tmp464.value;
if ($tmp465) goto block1; else goto block2;
block1:;
// line 709
uint16_t $tmp466 = param0.value;
frost$core$Int64 $tmp467 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp466));
return $tmp467;
block2:;
// line 711
int32_t $tmp468 = param1.value;
frost$core$Int64 $tmp469 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp468));
return $tmp469;

}
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 718
uint16_t $tmp470 = param0.value;
uint8_t $tmp471 = param1.value;
bool $tmp472 = $tmp470 < ((uint16_t) $tmp471);
frost$core$Bit $tmp473 = frost$core$Bit$init$builtin_bit($tmp472);
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block1; else goto block2;
block1:;
// line 719
uint16_t $tmp475 = param0.value;
frost$core$UInt16 $tmp476 = frost$core$UInt16$init$builtin_uint16($tmp475);
return $tmp476;
block2:;
// line 721
uint8_t $tmp477 = param1.value;
frost$core$UInt16 $tmp478 = frost$core$UInt16$init$builtin_uint16(((uint16_t) $tmp477));
return $tmp478;

}
frost$core$UInt16 frost$core$UInt16$min$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 727
uint16_t $tmp479 = param0.value;
uint16_t $tmp480 = param1.value;
bool $tmp481 = $tmp479 < $tmp480;
frost$core$Bit $tmp482 = frost$core$Bit$init$builtin_bit($tmp481);
bool $tmp483 = $tmp482.value;
if ($tmp483) goto block1; else goto block2;
block1:;
// line 728
uint16_t $tmp484 = param0.value;
frost$core$UInt16 $tmp485 = frost$core$UInt16$init$builtin_uint16($tmp484);
return $tmp485;
block2:;
// line 730
uint16_t $tmp486 = param1.value;
frost$core$UInt16 $tmp487 = frost$core$UInt16$init$builtin_uint16($tmp486);
return $tmp487;

}
frost$core$UInt32 frost$core$UInt16$min$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 736
uint16_t $tmp488 = param0.value;
uint32_t $tmp489 = param1.value;
bool $tmp490 = ((uint32_t) $tmp488) < $tmp489;
frost$core$Bit $tmp491 = frost$core$Bit$init$builtin_bit($tmp490);
bool $tmp492 = $tmp491.value;
if ($tmp492) goto block1; else goto block2;
block1:;
// line 737
uint16_t $tmp493 = param0.value;
frost$core$UInt32 $tmp494 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp493));
return $tmp494;
block2:;
// line 739
uint32_t $tmp495 = param1.value;
frost$core$UInt32 $tmp496 = frost$core$UInt32$init$builtin_uint32($tmp495);
return $tmp496;

}
frost$core$UInt64 frost$core$UInt16$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 745
uint16_t $tmp497 = param0.value;
uint64_t $tmp498 = param1.value;
bool $tmp499 = ((uint64_t) $tmp497) < $tmp498;
frost$core$Bit $tmp500 = frost$core$Bit$init$builtin_bit($tmp499);
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block1; else goto block2;
block1:;
// line 746
uint16_t $tmp502 = param0.value;
frost$core$UInt64 $tmp503 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp502));
return $tmp503;
block2:;
// line 748
uint64_t $tmp504 = param1.value;
frost$core$UInt64 $tmp505 = frost$core$UInt64$init$builtin_uint64($tmp504);
return $tmp505;

}
frost$core$Int32 frost$core$UInt16$max$frost$core$Int8$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int8 param1) {

// line 754
uint16_t $tmp506 = param0.value;
int8_t $tmp507 = param1.value;
bool $tmp508 = ((int32_t) $tmp506) > ((int32_t) $tmp507);
frost$core$Bit $tmp509 = frost$core$Bit$init$builtin_bit($tmp508);
bool $tmp510 = $tmp509.value;
if ($tmp510) goto block1; else goto block2;
block1:;
// line 755
uint16_t $tmp511 = param0.value;
frost$core$Int32 $tmp512 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp511));
return $tmp512;
block2:;
// line 757
int8_t $tmp513 = param1.value;
frost$core$Int32 $tmp514 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp513));
return $tmp514;

}
frost$core$Int32 frost$core$UInt16$max$frost$core$Int16$R$frost$core$Int32(frost$core$UInt16 param0, frost$core$Int16 param1) {

// line 763
uint16_t $tmp515 = param0.value;
int16_t $tmp516 = param1.value;
bool $tmp517 = ((int32_t) $tmp515) > ((int32_t) $tmp516);
frost$core$Bit $tmp518 = frost$core$Bit$init$builtin_bit($tmp517);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block1; else goto block2;
block1:;
// line 764
uint16_t $tmp520 = param0.value;
frost$core$Int32 $tmp521 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp520));
return $tmp521;
block2:;
// line 766
int16_t $tmp522 = param1.value;
frost$core$Int32 $tmp523 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp522));
return $tmp523;

}
frost$core$Int64 frost$core$UInt16$max$frost$core$Int32$R$frost$core$Int64(frost$core$UInt16 param0, frost$core$Int32 param1) {

// line 772
uint16_t $tmp524 = param0.value;
int32_t $tmp525 = param1.value;
bool $tmp526 = ((int64_t) $tmp524) > ((int64_t) $tmp525);
frost$core$Bit $tmp527 = frost$core$Bit$init$builtin_bit($tmp526);
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block1; else goto block2;
block1:;
// line 773
uint16_t $tmp529 = param0.value;
frost$core$Int64 $tmp530 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp529));
return $tmp530;
block2:;
// line 775
int32_t $tmp531 = param1.value;
frost$core$Int64 $tmp532 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp531));
return $tmp532;

}
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt8$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt8 param1) {

// line 782
uint16_t $tmp533 = param0.value;
uint8_t $tmp534 = param1.value;
bool $tmp535 = $tmp533 > ((uint16_t) $tmp534);
frost$core$Bit $tmp536 = frost$core$Bit$init$builtin_bit($tmp535);
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block1; else goto block2;
block1:;
// line 783
uint16_t $tmp538 = param0.value;
frost$core$UInt16 $tmp539 = frost$core$UInt16$init$builtin_uint16($tmp538);
return $tmp539;
block2:;
// line 785
uint8_t $tmp540 = param1.value;
frost$core$UInt16 $tmp541 = frost$core$UInt16$init$builtin_uint16(((uint16_t) $tmp540));
return $tmp541;

}
frost$core$UInt16 frost$core$UInt16$max$frost$core$UInt16$R$frost$core$UInt16(frost$core$UInt16 param0, frost$core$UInt16 param1) {

// line 791
uint16_t $tmp542 = param0.value;
uint16_t $tmp543 = param1.value;
bool $tmp544 = $tmp542 > $tmp543;
frost$core$Bit $tmp545 = frost$core$Bit$init$builtin_bit($tmp544);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block1; else goto block2;
block1:;
// line 792
uint16_t $tmp547 = param0.value;
frost$core$UInt16 $tmp548 = frost$core$UInt16$init$builtin_uint16($tmp547);
return $tmp548;
block2:;
// line 794
uint16_t $tmp549 = param1.value;
frost$core$UInt16 $tmp550 = frost$core$UInt16$init$builtin_uint16($tmp549);
return $tmp550;

}
frost$core$UInt32 frost$core$UInt16$max$frost$core$UInt32$R$frost$core$UInt32(frost$core$UInt16 param0, frost$core$UInt32 param1) {

// line 800
uint16_t $tmp551 = param0.value;
uint32_t $tmp552 = param1.value;
bool $tmp553 = ((uint32_t) $tmp551) > $tmp552;
frost$core$Bit $tmp554 = frost$core$Bit$init$builtin_bit($tmp553);
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block1; else goto block2;
block1:;
// line 801
uint16_t $tmp556 = param0.value;
frost$core$UInt32 $tmp557 = frost$core$UInt32$init$builtin_uint32(((uint32_t) $tmp556));
return $tmp557;
block2:;
// line 803
uint32_t $tmp558 = param1.value;
frost$core$UInt32 $tmp559 = frost$core$UInt32$init$builtin_uint32($tmp558);
return $tmp559;

}
frost$core$UInt64 frost$core$UInt16$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt16 param0, frost$core$UInt64 param1) {

// line 809
uint16_t $tmp560 = param0.value;
uint64_t $tmp561 = param1.value;
bool $tmp562 = ((uint64_t) $tmp560) > $tmp561;
frost$core$Bit $tmp563 = frost$core$Bit$init$builtin_bit($tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block1; else goto block2;
block1:;
// line 810
uint16_t $tmp565 = param0.value;
frost$core$UInt64 $tmp566 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp565));
return $tmp566;
block2:;
// line 812
uint64_t $tmp567 = param1.value;
frost$core$UInt64 $tmp568 = frost$core$UInt64$init$builtin_uint64($tmp567);
return $tmp568;

}
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$Range$LTfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$Range$LTfrost$core$UInt16$GT param0) {

// line 817
FROST_ASSERT(32 == sizeof(org$frostlang$frost$UInt16List));
org$frostlang$frost$UInt16List* $tmp569 = (org$frostlang$frost$UInt16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt16List$class);
frost$core$UInt16 $tmp570 = param0.min;
frost$core$UInt16 $tmp571 = param0.max;
frost$core$UInt16 $tmp572 = (frost$core$UInt16) {1};
frost$core$Bit $tmp573 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT $tmp574 = frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$init$frost$core$UInt16$frost$core$UInt16$frost$core$UInt16$frost$core$Bit($tmp570, $tmp571, $tmp572, $tmp573);
org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT($tmp569, $tmp574);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp569)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp569));
return ((frost$collections$ListView*) $tmp569);

}
frost$collections$ListView* frost$core$UInt16$$IDX$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT$R$frost$collections$ListView$LTfrost$core$UInt16$GT(frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT param0) {

// line 822
FROST_ASSERT(32 == sizeof(org$frostlang$frost$UInt16List));
org$frostlang$frost$UInt16List* $tmp575 = (org$frostlang$frost$UInt16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$UInt16List$class);
org$frostlang$frost$UInt16List$init$frost$core$SteppedRange$LTfrost$core$UInt16$Cfrost$core$UInt16$GT($tmp575, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp575)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp575));
return ((frost$collections$ListView*) $tmp575);

}
frost$core$Bit frost$core$UInt16$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt16 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp576 = (frost$core$Int64) {0};
int64_t $tmp577 = param1.value;
int64_t $tmp578 = $tmp576.value;
bool $tmp579 = $tmp577 >= $tmp578;
frost$core$Bit $tmp580 = (frost$core$Bit) {$tmp579};
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block3; else goto block2;
block3:;
frost$core$UInt16$wrapper* $tmp582;
$tmp582 = (frost$core$UInt16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$UInt16$wrapperclass);
$tmp582->value = param0;
ITable* $tmp583 = ((frost$collections$CollectionView*) $tmp582)->$class->itable;
while ($tmp583->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp583 = $tmp583->next;
}
$fn585 $tmp584 = $tmp583->methods[0];
frost$core$Int64 $tmp586 = $tmp584(((frost$collections$CollectionView*) $tmp582));
int64_t $tmp587 = param1.value;
int64_t $tmp588 = $tmp586.value;
bool $tmp589 = $tmp587 < $tmp588;
frost$core$Bit $tmp590 = (frost$core$Bit) {$tmp589};
bool $tmp591 = $tmp590.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp582)));
if ($tmp591) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp592 = (frost$core$Int64) {827};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s593, $tmp592, &$s594);
abort(); // unreachable
block1:;
// line 828
frost$core$Int64 $tmp595 = (frost$core$Int64) {1};
frost$core$Int64 $tmp596 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp595, param1);
frost$core$Int64 $tmp597 = frost$core$UInt16$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp596);
frost$core$Int64 $tmp598 = (frost$core$Int64) {0};
int64_t $tmp599 = $tmp597.value;
int64_t $tmp600 = $tmp598.value;
bool $tmp601 = $tmp599 != $tmp600;
frost$core$Bit $tmp602 = (frost$core$Bit) {$tmp601};
return $tmp602;

}
frost$core$Int64 frost$core$UInt16$get_count$R$frost$core$Int64(frost$core$UInt16 param0) {

// line 834
frost$core$Int64 $tmp603 = (frost$core$Int64) {16};
return $tmp603;

}
frost$collections$Iterator* frost$core$UInt16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt16 param0) {

// line 839
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp604 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp605 = frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp606 = (frost$core$UInt64) {32768};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp604, $tmp605, $tmp606);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp604)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp604));
return ((frost$collections$Iterator*) $tmp604);

}
frost$core$Int64 frost$core$UInt16$get_hash$R$frost$core$Int64(frost$core$UInt16 param0) {

// line 844
uint16_t $tmp607 = param0.value;
frost$core$Int64 $tmp608 = (frost$core$Int64) {((int64_t) $tmp607)};
return $tmp608;

}
frost$core$UInt16$nullable frost$core$UInt16$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt16$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$Int64 $tmp609 = (frost$core$Int64) {2};
int64_t $tmp610 = param1.value;
int64_t $tmp611 = $tmp609.value;
bool $tmp612 = $tmp610 >= $tmp611;
frost$core$Bit $tmp613 = (frost$core$Bit) {$tmp612};
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp615 = (frost$core$Int64) {36};
int64_t $tmp616 = param1.value;
int64_t $tmp617 = $tmp615.value;
bool $tmp618 = $tmp616 <= $tmp617;
frost$core$Bit $tmp619 = (frost$core$Bit) {$tmp618};
bool $tmp620 = $tmp619.value;
if ($tmp620) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp621 = (frost$core$Int64) {850};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s622, $tmp621, &$s623);
abort(); // unreachable
block1:;
// line 851
frost$core$UInt64$nullable $tmp624 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp624;
// line 852
frost$core$UInt64$nullable $tmp625 = *(&local0);
frost$core$Bit $tmp626 = frost$core$Bit$init$builtin_bit(!$tmp625.nonnull);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block4; else goto block5;
block4:;
// line 853
return ((frost$core$UInt16$nullable) { .nonnull = false });
block5:;
// line 855
frost$core$UInt64$nullable $tmp628 = *(&local0);
frost$core$UInt16 $tmp629 = frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt64) $tmp628.value));
return ((frost$core$UInt16$nullable) { $tmp629, true });

}
frost$core$Int8 frost$core$UInt16$get_asInt8$R$frost$core$Int8(frost$core$UInt16 param0) {

// line 861
uint16_t $tmp630 = param0.value;
frost$core$Int8 $tmp631 = (frost$core$Int8) {((int8_t) $tmp630)};
return $tmp631;

}
frost$core$Int16 frost$core$UInt16$get_asInt16$R$frost$core$Int16(frost$core$UInt16 param0) {

// line 867
uint16_t $tmp632 = param0.value;
frost$core$Int16 $tmp633 = (frost$core$Int16) {((int16_t) $tmp632)};
return $tmp633;

}
frost$core$Int32 frost$core$UInt16$get_asInt32$R$frost$core$Int32(frost$core$UInt16 param0) {

// line 873
uint16_t $tmp634 = param0.value;
frost$core$Int32 $tmp635 = (frost$core$Int32) {((int32_t) $tmp634)};
return $tmp635;

}
frost$core$Int64 frost$core$UInt16$get_asInt64$R$frost$core$Int64(frost$core$UInt16 param0) {

// line 879
uint16_t $tmp636 = param0.value;
frost$core$Int64 $tmp637 = (frost$core$Int64) {((int64_t) $tmp636)};
return $tmp637;

}
frost$core$UInt8 frost$core$UInt16$get_asUInt8$R$frost$core$UInt8(frost$core$UInt16 param0) {

// line 885
uint16_t $tmp638 = param0.value;
frost$core$UInt8 $tmp639 = (frost$core$UInt8) {((uint8_t) $tmp638)};
return $tmp639;

}
frost$core$UInt32 frost$core$UInt16$get_asUInt32$R$frost$core$UInt32(frost$core$UInt16 param0) {

// line 891
uint16_t $tmp640 = param0.value;
frost$core$UInt32 $tmp641 = (frost$core$UInt32) {((uint32_t) $tmp640)};
return $tmp641;

}
frost$core$UInt64 frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(frost$core$UInt16 param0) {

// line 897
uint16_t $tmp642 = param0.value;
frost$core$UInt64 $tmp643 = (frost$core$UInt64) {((uint64_t) $tmp642)};
return $tmp643;

}
frost$core$Real32 frost$core$UInt16$get_asReal32$R$frost$core$Real32(frost$core$UInt16 param0) {

// line 903
uint16_t $tmp644 = param0.value;
frost$core$Real32 $tmp645 = (frost$core$Real32) {((float) $tmp644)};
return $tmp645;

}
frost$core$Real64 frost$core$UInt16$get_asReal64$R$frost$core$Real64(frost$core$UInt16 param0) {

// line 909
uint16_t $tmp646 = param0.value;
frost$core$Real64 $tmp647 = (frost$core$Real64) {((double) $tmp646)};
return $tmp647;

}
frost$core$String* frost$core$UInt16$get_asString$R$frost$core$String(frost$core$UInt16 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt16 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 915
frost$core$Int64 $tmp648 = (frost$core$Int64) {5};
*(&local0) = $tmp648;
// line 916
frost$core$Int64 $tmp649 = *(&local0);
int64_t $tmp650 = $tmp649.value;
frost$core$Char8* $tmp651 = ((frost$core$Char8*) frostAlloc($tmp650 * 1));
*(&local1) = $tmp651;
// line 917
frost$core$Int64 $tmp652 = *(&local0);
frost$core$Int64 $tmp653 = (frost$core$Int64) {1};
int64_t $tmp654 = $tmp652.value;
int64_t $tmp655 = $tmp653.value;
int64_t $tmp656 = $tmp654 - $tmp655;
frost$core$Int64 $tmp657 = (frost$core$Int64) {$tmp656};
*(&local2) = $tmp657;
// line 918
*(&local3) = param0;
// line 919
frost$core$UInt16 $tmp658 = *(&local3);
frost$core$UInt16 $tmp659 = (frost$core$UInt16) {0};
uint16_t $tmp660 = $tmp658.value;
uint16_t $tmp661 = $tmp659.value;
bool $tmp662 = $tmp660 >= $tmp661;
frost$core$Bit $tmp663 = (frost$core$Bit) {$tmp662};
bool $tmp664 = $tmp663.value;
if ($tmp664) goto block1; else goto block3;
block1:;
// line 920
goto block4;
block4:;
// line 921
frost$core$Char8* $tmp665 = *(&local1);
frost$core$Int64 $tmp666 = *(&local2);
frost$core$UInt16 $tmp667 = *(&local3);
frost$core$UInt16 $tmp668 = (frost$core$UInt16) {10};
frost$core$UInt32 $tmp669 = frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32($tmp667, $tmp668);
frost$core$UInt32 $tmp670 = (frost$core$UInt32) {48};
uint32_t $tmp671 = $tmp669.value;
uint32_t $tmp672 = $tmp670.value;
uint32_t $tmp673 = $tmp671 + $tmp672;
frost$core$UInt32 $tmp674 = (frost$core$UInt32) {$tmp673};
frost$core$UInt8 $tmp675 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp674);
frost$core$Char8 $tmp676 = frost$core$Char8$init$frost$core$UInt8($tmp675);
int64_t $tmp677 = $tmp666.value;
$tmp665[$tmp677] = $tmp676;
// line 922
frost$core$UInt16 $tmp678 = *(&local3);
frost$core$UInt32 $tmp679 = frost$core$UInt32$init$frost$core$UInt16($tmp678);
frost$core$UInt32 $tmp680 = (frost$core$UInt32) {10};
uint32_t $tmp681 = $tmp679.value;
uint32_t $tmp682 = $tmp680.value;
uint32_t $tmp683 = $tmp681 / $tmp682;
frost$core$UInt32 $tmp684 = (frost$core$UInt32) {$tmp683};
frost$core$UInt16 $tmp685 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16($tmp684);
*(&local3) = $tmp685;
// line 923
frost$core$Int64 $tmp686 = *(&local2);
frost$core$Int64 $tmp687 = (frost$core$Int64) {1};
int64_t $tmp688 = $tmp686.value;
int64_t $tmp689 = $tmp687.value;
int64_t $tmp690 = $tmp688 - $tmp689;
frost$core$Int64 $tmp691 = (frost$core$Int64) {$tmp690};
*(&local2) = $tmp691;
goto block5;
block5:;
frost$core$UInt16 $tmp692 = *(&local3);
frost$core$UInt16 $tmp693 = (frost$core$UInt16) {0};
uint16_t $tmp694 = $tmp692.value;
uint16_t $tmp695 = $tmp693.value;
bool $tmp696 = $tmp694 > $tmp695;
frost$core$Bit $tmp697 = (frost$core$Bit) {$tmp696};
bool $tmp698 = $tmp697.value;
if ($tmp698) goto block4; else goto block6;
block6:;
// line 926
frost$core$Int64 $tmp699 = *(&local2);
frost$core$Int64 $tmp700 = (frost$core$Int64) {1};
int64_t $tmp701 = $tmp699.value;
int64_t $tmp702 = $tmp700.value;
int64_t $tmp703 = $tmp701 + $tmp702;
frost$core$Int64 $tmp704 = (frost$core$Int64) {$tmp703};
*(&local2) = $tmp704;
goto block2;
block3:;
// line 1
// line 929
goto block7;
block7:;
// line 930
frost$core$Char8* $tmp705 = *(&local1);
frost$core$Int64 $tmp706 = *(&local2);
frost$core$UInt32 $tmp707 = (frost$core$UInt32) {48};
frost$core$UInt16 $tmp708 = *(&local3);
frost$core$UInt16 $tmp709 = (frost$core$UInt16) {10};
frost$core$UInt32 $tmp710 = frost$core$UInt16$$REM$frost$core$UInt16$R$frost$core$UInt32($tmp708, $tmp709);
uint32_t $tmp711 = $tmp707.value;
uint32_t $tmp712 = $tmp710.value;
uint32_t $tmp713 = $tmp711 - $tmp712;
frost$core$UInt32 $tmp714 = (frost$core$UInt32) {$tmp713};
frost$core$UInt8 $tmp715 = frost$core$UInt32$get_asUInt8$R$frost$core$UInt8($tmp714);
frost$core$Char8 $tmp716 = frost$core$Char8$init$frost$core$UInt8($tmp715);
int64_t $tmp717 = $tmp706.value;
$tmp705[$tmp717] = $tmp716;
// line 931
frost$core$UInt16 $tmp718 = *(&local3);
frost$core$UInt32 $tmp719 = frost$core$UInt32$init$frost$core$UInt16($tmp718);
frost$core$UInt32 $tmp720 = (frost$core$UInt32) {10};
uint32_t $tmp721 = $tmp719.value;
uint32_t $tmp722 = $tmp720.value;
uint32_t $tmp723 = $tmp721 / $tmp722;
frost$core$UInt32 $tmp724 = (frost$core$UInt32) {$tmp723};
frost$core$UInt16 $tmp725 = frost$core$UInt32$get_asUInt16$R$frost$core$UInt16($tmp724);
*(&local3) = $tmp725;
// line 932
frost$core$Int64 $tmp726 = *(&local2);
frost$core$Int64 $tmp727 = (frost$core$Int64) {1};
int64_t $tmp728 = $tmp726.value;
int64_t $tmp729 = $tmp727.value;
int64_t $tmp730 = $tmp728 - $tmp729;
frost$core$Int64 $tmp731 = (frost$core$Int64) {$tmp730};
*(&local2) = $tmp731;
goto block8;
block8:;
frost$core$UInt16 $tmp732 = *(&local3);
frost$core$UInt16 $tmp733 = (frost$core$UInt16) {0};
uint16_t $tmp734 = $tmp732.value;
uint16_t $tmp735 = $tmp733.value;
bool $tmp736 = $tmp734 < $tmp735;
frost$core$Bit $tmp737 = (frost$core$Bit) {$tmp736};
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block7; else goto block9;
block9:;
// line 935
frost$core$Char8* $tmp739 = *(&local1);
frost$core$Int64 $tmp740 = *(&local2);
frost$core$UInt8 $tmp741 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp742 = frost$core$Char8$init$frost$core$UInt8($tmp741);
int64_t $tmp743 = $tmp740.value;
$tmp739[$tmp743] = $tmp742;
goto block2;
block2:;
// line 937
frost$core$Int64 $tmp744 = *(&local0);
frost$core$Int64 $tmp745 = *(&local2);
int64_t $tmp746 = $tmp744.value;
int64_t $tmp747 = $tmp745.value;
int64_t $tmp748 = $tmp746 - $tmp747;
frost$core$Int64 $tmp749 = (frost$core$Int64) {$tmp748};
*(&local4) = $tmp749;
// line 938
frost$core$Int64 $tmp750 = (frost$core$Int64) {0};
frost$core$Int64 $tmp751 = *(&local4);
frost$core$Bit $tmp752 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp753 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp750, $tmp751, $tmp752);
frost$core$Int64 $tmp754 = $tmp753.min;
*(&local5) = $tmp754;
frost$core$Int64 $tmp755 = $tmp753.max;
frost$core$Bit $tmp756 = $tmp753.inclusive;
bool $tmp757 = $tmp756.value;
frost$core$Int64 $tmp758 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp759 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp758);
if ($tmp757) goto block13; else goto block14;
block13:;
int64_t $tmp760 = $tmp754.value;
int64_t $tmp761 = $tmp755.value;
bool $tmp762 = $tmp760 <= $tmp761;
frost$core$Bit $tmp763 = (frost$core$Bit) {$tmp762};
bool $tmp764 = $tmp763.value;
if ($tmp764) goto block10; else goto block11;
block14:;
int64_t $tmp765 = $tmp754.value;
int64_t $tmp766 = $tmp755.value;
bool $tmp767 = $tmp765 < $tmp766;
frost$core$Bit $tmp768 = (frost$core$Bit) {$tmp767};
bool $tmp769 = $tmp768.value;
if ($tmp769) goto block10; else goto block11;
block10:;
// line 939
frost$core$Char8* $tmp770 = *(&local1);
frost$core$Int64 $tmp771 = *(&local5);
frost$core$Char8* $tmp772 = *(&local1);
frost$core$Int64 $tmp773 = *(&local5);
frost$core$Int64 $tmp774 = *(&local2);
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774.value;
int64_t $tmp777 = $tmp775 + $tmp776;
frost$core$Int64 $tmp778 = (frost$core$Int64) {$tmp777};
int64_t $tmp779 = $tmp778.value;
frost$core$Char8 $tmp780 = $tmp772[$tmp779];
int64_t $tmp781 = $tmp771.value;
$tmp770[$tmp781] = $tmp780;
goto block12;
block12:;
frost$core$Int64 $tmp782 = *(&local5);
int64_t $tmp783 = $tmp755.value;
int64_t $tmp784 = $tmp782.value;
int64_t $tmp785 = $tmp783 - $tmp784;
frost$core$Int64 $tmp786 = (frost$core$Int64) {$tmp785};
frost$core$UInt64 $tmp787 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp786);
if ($tmp757) goto block16; else goto block17;
block16:;
uint64_t $tmp788 = $tmp787.value;
uint64_t $tmp789 = $tmp759.value;
bool $tmp790 = $tmp788 >= $tmp789;
frost$core$Bit $tmp791 = (frost$core$Bit) {$tmp790};
bool $tmp792 = $tmp791.value;
if ($tmp792) goto block15; else goto block11;
block17:;
uint64_t $tmp793 = $tmp787.value;
uint64_t $tmp794 = $tmp759.value;
bool $tmp795 = $tmp793 > $tmp794;
frost$core$Bit $tmp796 = (frost$core$Bit) {$tmp795};
bool $tmp797 = $tmp796.value;
if ($tmp797) goto block15; else goto block11;
block15:;
int64_t $tmp798 = $tmp782.value;
int64_t $tmp799 = $tmp758.value;
int64_t $tmp800 = $tmp798 + $tmp799;
frost$core$Int64 $tmp801 = (frost$core$Int64) {$tmp800};
*(&local5) = $tmp801;
goto block10;
block11:;
// line 941
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp802 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp803 = *(&local1);
frost$core$Int64 $tmp804 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp802, $tmp803, $tmp804);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp802));
return $tmp802;

}
frost$core$String* frost$core$UInt16$format$frost$core$String$R$frost$core$String(frost$core$UInt16 param0, frost$core$String* param1) {

// line 947
frost$core$Bit $tmp805 = frost$core$Bit$init$builtin_bit(false);
frost$core$UInt64 $tmp806 = frost$core$UInt16$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp807 = (frost$core$UInt64) {65535};
frost$core$String* $tmp808 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp805, $tmp806, $tmp807, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp808));
return $tmp808;

}
void frost$core$UInt16$cleanup(frost$core$UInt16 param0) {

return;

}

