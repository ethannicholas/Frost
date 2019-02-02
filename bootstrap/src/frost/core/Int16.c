#include "frost/core/Int16.h"
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
#include "frost/core/Formattable.h"
#include "frost/core/Comparable.h"
#include "frost/collections/Key.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
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
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Int64 frost$core$Int16$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int16$get_count$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int16$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$Object* frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$Int16$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int16$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int16$format$frost$core$String$R$frost$core$String(((frost$core$Int16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int64 frost$core$Int16$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int16$get_hash$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

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
__attribute__((weak)) frost$core$Int32 frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int32 result = frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32(((frost$core$Int16$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value, p1);

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

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int16$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int16$_frost$collections$CollectionView, { frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int16$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int16$_frost$collections$Iterable, { frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$Int16$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int16$_frost$core$Equatable, { frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int16$_frost$collections$ListView, { frost$core$Int16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int16$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int16$_frost$core$Formattable, { frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int16$_frost$core$Comparable, { frost$core$Int16$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s1;
frost$core$Int16$class_type frost$core$Int16$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int16$_frost$collections$Key, { frost$core$Int16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$SUB$R$frost$core$Int16$shim, frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int16$$BNOT$R$frost$core$Int16$shim, frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$get_abs$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16$shim, frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$get_count$R$frost$core$Int64$shim, frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int16$get_hash$R$frost$core$Int64$shim, frost$core$Int16$get_asInt8$R$frost$core$Int8$shim, frost$core$Int16$get_asInt32$R$frost$core$Int32$shim, frost$core$Int16$get_asInt64$R$frost$core$Int64$shim, frost$core$Int16$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int16$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int16$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int16$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int16$get_asReal32$R$frost$core$Real32$shim, frost$core$Int16$get_asReal64$R$frost$core$Real64$shim, frost$core$Int16$format$frost$core$String$R$frost$core$String$shim, frost$core$Int16$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int16$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$CollectionView, { frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int16$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$Iterable, { frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$Int16$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Equatable, { frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$ListView, { frost$core$Int16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int16$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Formattable, { frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Comparable, { frost$core$Int16$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s3;
frost$core$Int16$wrapperclass_type frost$core$Int16$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$Key, { frost$core$Int16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn595)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, -3824106976036894950, NULL };
static frost$core$String $s603 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static frost$core$String $s604 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -7454659636657985286, NULL };
static frost$core$String $s632 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -8642746113042059877, NULL };
static frost$core$String $s633 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f", 121, -7300499346784167556, NULL };
static frost$core$String $s635 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };

frost$core$Int16 frost$core$Int16$init$builtin_int16(int16_t param0) {

frost$core$Int16 local0;
// line 30
int16_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int16 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int16 frost$core$Int16$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int16 local0;
// line 36
int8_t $tmp6 = param0.value;
int16_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int16_t) $tmp6);
frost$core$Int16 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int16 frost$core$Int16$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int16 local0;
// line 42
uint8_t $tmp9 = param0.value;
int16_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int16_t) $tmp9);
frost$core$Int16 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 48
int16_t $tmp12 = param0.value;
int16_t $tmp13 = param1.value;
int32_t $tmp14 = ((int32_t) $tmp12) + ((int32_t) $tmp13);
frost$core$Int32 $tmp15 = frost$core$Int32$init$builtin_int32($tmp14);
return $tmp15;

}
frost$core$Int16 frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 53
int16_t $tmp16 = param0.value;
int16_t $tmp17 = param1.value;
int16_t $tmp18 = $tmp16 + $tmp17;
frost$core$Int16 $tmp19 = frost$core$Int16$init$builtin_int16($tmp18);
return $tmp19;

}
frost$core$Int32 frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 59
int16_t $tmp20 = param0.value;
int32_t $tmp21 = param1.value;
int32_t $tmp22 = ((int32_t) $tmp20) + $tmp21;
frost$core$Int32 $tmp23 = frost$core$Int32$init$builtin_int32($tmp22);
return $tmp23;

}
frost$core$Int64 frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 65
int16_t $tmp24 = param0.value;
int64_t $tmp25 = param1.value;
int64_t $tmp26 = ((int64_t) $tmp24) + $tmp25;
frost$core$Int64 $tmp27 = frost$core$Int64$init$builtin_int64($tmp26);
return $tmp27;

}
frost$core$Int32 frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 71
int16_t $tmp28 = param0.value;
uint16_t $tmp29 = param1.value;
int32_t $tmp30 = ((int32_t) $tmp28) + ((int32_t) $tmp29);
frost$core$Int32 $tmp31 = frost$core$Int32$init$builtin_int32($tmp30);
return $tmp31;

}
frost$core$Int64 frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 77
int16_t $tmp32 = param0.value;
uint32_t $tmp33 = param1.value;
int64_t $tmp34 = ((int64_t) $tmp32) + ((int64_t) $tmp33);
frost$core$Int64 $tmp35 = frost$core$Int64$init$builtin_int64($tmp34);
return $tmp35;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 83
int16_t $tmp36 = param0.value;
int16_t $tmp37 = param1.value;
int32_t $tmp38 = ((int32_t) $tmp36) - ((int32_t) $tmp37);
frost$core$Int32 $tmp39 = frost$core$Int32$init$builtin_int32($tmp38);
return $tmp39;

}
frost$core$Int16 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 88
int16_t $tmp40 = param0.value;
int16_t $tmp41 = param1.value;
int16_t $tmp42 = $tmp40 - $tmp41;
frost$core$Int16 $tmp43 = frost$core$Int16$init$builtin_int16($tmp42);
return $tmp43;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 94
int16_t $tmp44 = param0.value;
int32_t $tmp45 = param1.value;
int32_t $tmp46 = ((int32_t) $tmp44) - $tmp45;
frost$core$Int32 $tmp47 = frost$core$Int32$init$builtin_int32($tmp46);
return $tmp47;

}
frost$core$Int64 frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 100
int16_t $tmp48 = param0.value;
int64_t $tmp49 = param1.value;
int64_t $tmp50 = ((int64_t) $tmp48) - $tmp49;
frost$core$Int64 $tmp51 = frost$core$Int64$init$builtin_int64($tmp50);
return $tmp51;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 106
int16_t $tmp52 = param0.value;
uint16_t $tmp53 = param1.value;
int32_t $tmp54 = ((int32_t) $tmp52) - ((int32_t) $tmp53);
frost$core$Int32 $tmp55 = frost$core$Int32$init$builtin_int32($tmp54);
return $tmp55;

}
frost$core$Int64 frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 112
int16_t $tmp56 = param0.value;
uint32_t $tmp57 = param1.value;
int64_t $tmp58 = ((int64_t) $tmp56) - ((int64_t) $tmp57);
frost$core$Int64 $tmp59 = frost$core$Int64$init$builtin_int64($tmp58);
return $tmp59;

}
frost$core$Int16 frost$core$Int16$$SUB$R$frost$core$Int16(frost$core$Int16 param0) {

// line 117
int16_t $tmp60 = param0.value;
int16_t $tmp61 = -$tmp60;
frost$core$Int16 $tmp62 = (frost$core$Int16) {$tmp61};
return $tmp62;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 123
int16_t $tmp63 = param0.value;
int16_t $tmp64 = param1.value;
int32_t $tmp65 = ((int32_t) $tmp63) * ((int32_t) $tmp64);
frost$core$Int32 $tmp66 = frost$core$Int32$init$builtin_int32($tmp65);
return $tmp66;

}
frost$core$Int16 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 128
int16_t $tmp67 = param0.value;
int16_t $tmp68 = param1.value;
int16_t $tmp69 = $tmp67 * $tmp68;
frost$core$Int16 $tmp70 = frost$core$Int16$init$builtin_int16($tmp69);
return $tmp70;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 134
int16_t $tmp71 = param0.value;
int32_t $tmp72 = param1.value;
int32_t $tmp73 = ((int32_t) $tmp71) * $tmp72;
frost$core$Int32 $tmp74 = frost$core$Int32$init$builtin_int32($tmp73);
return $tmp74;

}
frost$core$Int64 frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 140
int16_t $tmp75 = param0.value;
int64_t $tmp76 = param1.value;
int64_t $tmp77 = ((int64_t) $tmp75) * $tmp76;
frost$core$Int64 $tmp78 = frost$core$Int64$init$builtin_int64($tmp77);
return $tmp78;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 146
int16_t $tmp79 = param0.value;
uint16_t $tmp80 = param1.value;
int32_t $tmp81 = ((int32_t) $tmp79) * ((int32_t) $tmp80);
frost$core$Int32 $tmp82 = frost$core$Int32$init$builtin_int32($tmp81);
return $tmp82;

}
frost$core$Int64 frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 152
int16_t $tmp83 = param0.value;
uint32_t $tmp84 = param1.value;
int64_t $tmp85 = ((int64_t) $tmp83) * ((int64_t) $tmp84);
frost$core$Int64 $tmp86 = frost$core$Int64$init$builtin_int64($tmp85);
return $tmp86;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 158
int16_t $tmp87 = param0.value;
int16_t $tmp88 = param1.value;
int32_t $tmp89 = ((int32_t) $tmp87) / ((int32_t) $tmp88);
frost$core$Int32 $tmp90 = frost$core$Int32$init$builtin_int32($tmp89);
return $tmp90;

}
frost$core$Int16 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 163
int16_t $tmp91 = param0.value;
int16_t $tmp92 = param1.value;
int16_t $tmp93 = $tmp91 / $tmp92;
frost$core$Int16 $tmp94 = frost$core$Int16$init$builtin_int16($tmp93);
return $tmp94;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 169
int16_t $tmp95 = param0.value;
int32_t $tmp96 = param1.value;
int32_t $tmp97 = ((int32_t) $tmp95) / $tmp96;
frost$core$Int32 $tmp98 = frost$core$Int32$init$builtin_int32($tmp97);
return $tmp98;

}
frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 175
int16_t $tmp99 = param0.value;
int64_t $tmp100 = param1.value;
int64_t $tmp101 = ((int64_t) $tmp99) / $tmp100;
frost$core$Int64 $tmp102 = frost$core$Int64$init$builtin_int64($tmp101);
return $tmp102;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 181
int16_t $tmp103 = param0.value;
uint16_t $tmp104 = param1.value;
int32_t $tmp105 = ((int32_t) $tmp103) / ((int32_t) $tmp104);
frost$core$Int32 $tmp106 = frost$core$Int32$init$builtin_int32($tmp105);
return $tmp106;

}
frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 187
int16_t $tmp107 = param0.value;
uint32_t $tmp108 = param1.value;
int64_t $tmp109 = ((int64_t) $tmp107) / ((int64_t) $tmp108);
frost$core$Int64 $tmp110 = frost$core$Int64$init$builtin_int64($tmp109);
return $tmp110;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 193
int16_t $tmp111 = param0.value;
int16_t $tmp112 = param1.value;
int32_t $tmp113 = ((int32_t) $tmp111) % ((int32_t) $tmp112);
frost$core$Int32 $tmp114 = frost$core$Int32$init$builtin_int32($tmp113);
return $tmp114;

}
frost$core$Int16 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 198
int16_t $tmp115 = param0.value;
int16_t $tmp116 = param1.value;
int16_t $tmp117 = $tmp115 % $tmp116;
frost$core$Int16 $tmp118 = frost$core$Int16$init$builtin_int16($tmp117);
return $tmp118;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 204
int16_t $tmp119 = param0.value;
int32_t $tmp120 = param1.value;
int32_t $tmp121 = ((int32_t) $tmp119) % $tmp120;
frost$core$Int32 $tmp122 = frost$core$Int32$init$builtin_int32($tmp121);
return $tmp122;

}
frost$core$Int64 frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 210
int16_t $tmp123 = param0.value;
int64_t $tmp124 = param1.value;
int64_t $tmp125 = ((int64_t) $tmp123) % $tmp124;
frost$core$Int64 $tmp126 = frost$core$Int64$init$builtin_int64($tmp125);
return $tmp126;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 216
int16_t $tmp127 = param0.value;
uint16_t $tmp128 = param1.value;
int32_t $tmp129 = ((int32_t) $tmp127) % ((int32_t) $tmp128);
frost$core$Int32 $tmp130 = frost$core$Int32$init$builtin_int32($tmp129);
return $tmp130;

}
frost$core$Int64 frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 222
int16_t $tmp131 = param0.value;
uint32_t $tmp132 = param1.value;
int64_t $tmp133 = ((int64_t) $tmp131) % ((int64_t) $tmp132);
frost$core$Int64 $tmp134 = frost$core$Int64$init$builtin_int64($tmp133);
return $tmp134;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 228
int16_t $tmp135 = param0.value;
int8_t $tmp136 = param1.value;
float $tmp137 = ((float) $tmp135) / ((float) $tmp136);
frost$core$Real32 $tmp138 = frost$core$Real32$init$builtin_float32($tmp137);
return $tmp138;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 234
int16_t $tmp139 = param0.value;
int16_t $tmp140 = param1.value;
float $tmp141 = ((float) $tmp139) / ((float) $tmp140);
frost$core$Real32 $tmp142 = frost$core$Real32$init$builtin_float32($tmp141);
return $tmp142;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 240
int16_t $tmp143 = param0.value;
int32_t $tmp144 = param1.value;
float $tmp145 = ((float) $tmp143) / ((float) $tmp144);
frost$core$Real32 $tmp146 = frost$core$Real32$init$builtin_float32($tmp145);
return $tmp146;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 246
int16_t $tmp147 = param0.value;
int64_t $tmp148 = param1.value;
double $tmp149 = ((double) $tmp147) / ((double) $tmp148);
frost$core$Real64 $tmp150 = frost$core$Real64$init$builtin_float64($tmp149);
return $tmp150;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 252
int16_t $tmp151 = param0.value;
uint8_t $tmp152 = param1.value;
float $tmp153 = ((float) $tmp151) / ((float) $tmp152);
frost$core$Real32 $tmp154 = frost$core$Real32$init$builtin_float32($tmp153);
return $tmp154;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 258
int16_t $tmp155 = param0.value;
uint16_t $tmp156 = param1.value;
float $tmp157 = ((float) $tmp155) / ((float) $tmp156);
frost$core$Real32 $tmp158 = frost$core$Real32$init$builtin_float32($tmp157);
return $tmp158;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 264
int16_t $tmp159 = param0.value;
uint32_t $tmp160 = param1.value;
float $tmp161 = ((float) $tmp159) / ((float) $tmp160);
frost$core$Real32 $tmp162 = frost$core$Real32$init$builtin_float32($tmp161);
return $tmp162;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 270
int16_t $tmp163 = param0.value;
uint64_t $tmp164 = param1.value;
double $tmp165 = ((double) $tmp163) / ((double) $tmp164);
frost$core$Real64 $tmp166 = frost$core$Real64$init$builtin_float64($tmp165);
return $tmp166;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Real32 param1) {

// line 276
int16_t $tmp167 = param0.value;
float $tmp168 = param1.value;
float $tmp169 = ((float) $tmp167) / $tmp168;
frost$core$Real32 $tmp170 = frost$core$Real32$init$builtin_float32($tmp169);
return $tmp170;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$Real64 param1) {

// line 282
int16_t $tmp171 = param0.value;
double $tmp172 = param1.value;
double $tmp173 = ((double) $tmp171) / $tmp172;
frost$core$Real64 $tmp174 = frost$core$Real64$init$builtin_float64($tmp173);
return $tmp174;

}
frost$core$Int16 frost$core$Int16$$BNOT$R$frost$core$Int16(frost$core$Int16 param0) {

// line 287
int16_t $tmp175 = param0.value;
int16_t $tmp176 = !$tmp175;
frost$core$Int16 $tmp177 = (frost$core$Int16) {$tmp176};
return $tmp177;

}
frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 293
int16_t $tmp178 = param0.value;
int16_t $tmp179 = param1.value;
int32_t $tmp180 = ((int32_t) $tmp178) & ((int32_t) $tmp179);
frost$core$Int32 $tmp181 = frost$core$Int32$init$builtin_int32($tmp180);
return $tmp181;

}
frost$core$Int16 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 298
int16_t $tmp182 = param0.value;
int16_t $tmp183 = param1.value;
int16_t $tmp184 = $tmp182 & $tmp183;
frost$core$Int16 $tmp185 = frost$core$Int16$init$builtin_int16($tmp184);
return $tmp185;

}
frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 304
int16_t $tmp186 = param0.value;
int32_t $tmp187 = param1.value;
int32_t $tmp188 = ((int32_t) $tmp186) & $tmp187;
frost$core$Int32 $tmp189 = frost$core$Int32$init$builtin_int32($tmp188);
return $tmp189;

}
frost$core$Int64 frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 310
int16_t $tmp190 = param0.value;
int64_t $tmp191 = param1.value;
int64_t $tmp192 = ((int64_t) $tmp190) & $tmp191;
frost$core$Int64 $tmp193 = frost$core$Int64$init$builtin_int64($tmp192);
return $tmp193;

}
frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 316
int16_t $tmp194 = param0.value;
uint16_t $tmp195 = param1.value;
uint32_t $tmp196 = ((uint32_t) $tmp194) & ((uint32_t) $tmp195);
frost$core$UInt32 $tmp197 = frost$core$UInt32$init$builtin_uint32($tmp196);
return $tmp197;

}
frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 322
int16_t $tmp198 = param0.value;
uint32_t $tmp199 = param1.value;
uint32_t $tmp200 = ((uint32_t) $tmp198) & $tmp199;
frost$core$UInt32 $tmp201 = frost$core$UInt32$init$builtin_uint32($tmp200);
return $tmp201;

}
frost$core$UInt64 frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 328
int16_t $tmp202 = param0.value;
uint64_t $tmp203 = param1.value;
uint64_t $tmp204 = ((uint64_t) $tmp202) & $tmp203;
frost$core$UInt64 $tmp205 = frost$core$UInt64$init$builtin_uint64($tmp204);
return $tmp205;

}
frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 334
int16_t $tmp206 = param0.value;
int16_t $tmp207 = param1.value;
int32_t $tmp208 = ((int32_t) $tmp206) | ((int32_t) $tmp207);
frost$core$Int32 $tmp209 = frost$core$Int32$init$builtin_int32($tmp208);
return $tmp209;

}
frost$core$Int16 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 339
int16_t $tmp210 = param0.value;
int16_t $tmp211 = param1.value;
int16_t $tmp212 = $tmp210 | $tmp211;
frost$core$Int16 $tmp213 = frost$core$Int16$init$builtin_int16($tmp212);
return $tmp213;

}
frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 345
int16_t $tmp214 = param0.value;
int32_t $tmp215 = param1.value;
int32_t $tmp216 = ((int32_t) $tmp214) | $tmp215;
frost$core$Int32 $tmp217 = frost$core$Int32$init$builtin_int32($tmp216);
return $tmp217;

}
frost$core$Int64 frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 351
int16_t $tmp218 = param0.value;
int64_t $tmp219 = param1.value;
int64_t $tmp220 = ((int64_t) $tmp218) | $tmp219;
frost$core$Int64 $tmp221 = frost$core$Int64$init$builtin_int64($tmp220);
return $tmp221;

}
frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 357
int16_t $tmp222 = param0.value;
uint16_t $tmp223 = param1.value;
uint32_t $tmp224 = ((uint32_t) $tmp222) | ((uint32_t) $tmp223);
frost$core$UInt32 $tmp225 = frost$core$UInt32$init$builtin_uint32($tmp224);
return $tmp225;

}
frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 363
int16_t $tmp226 = param0.value;
uint32_t $tmp227 = param1.value;
uint32_t $tmp228 = ((uint32_t) $tmp226) | $tmp227;
frost$core$UInt32 $tmp229 = frost$core$UInt32$init$builtin_uint32($tmp228);
return $tmp229;

}
frost$core$UInt64 frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 369
int16_t $tmp230 = param0.value;
uint64_t $tmp231 = param1.value;
uint64_t $tmp232 = ((uint64_t) $tmp230) | $tmp231;
frost$core$UInt64 $tmp233 = frost$core$UInt64$init$builtin_uint64($tmp232);
return $tmp233;

}
frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 375
int16_t $tmp234 = param0.value;
int16_t $tmp235 = param1.value;
int32_t $tmp236 = ((int32_t) $tmp234) ^ ((int32_t) $tmp235);
frost$core$Int32 $tmp237 = frost$core$Int32$init$builtin_int32($tmp236);
return $tmp237;

}
frost$core$Int16 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 380
int16_t $tmp238 = param0.value;
int16_t $tmp239 = param1.value;
int16_t $tmp240 = $tmp238 ^ $tmp239;
frost$core$Int16 $tmp241 = frost$core$Int16$init$builtin_int16($tmp240);
return $tmp241;

}
frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 386
int16_t $tmp242 = param0.value;
int32_t $tmp243 = param1.value;
int32_t $tmp244 = ((int32_t) $tmp242) ^ $tmp243;
frost$core$Int32 $tmp245 = frost$core$Int32$init$builtin_int32($tmp244);
return $tmp245;

}
frost$core$Int64 frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 392
int16_t $tmp246 = param0.value;
int64_t $tmp247 = param1.value;
int64_t $tmp248 = ((int64_t) $tmp246) ^ $tmp247;
frost$core$Int64 $tmp249 = frost$core$Int64$init$builtin_int64($tmp248);
return $tmp249;

}
frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 398
int16_t $tmp250 = param0.value;
uint16_t $tmp251 = param1.value;
uint32_t $tmp252 = ((uint32_t) $tmp250) ^ ((uint32_t) $tmp251);
frost$core$UInt32 $tmp253 = frost$core$UInt32$init$builtin_uint32($tmp252);
return $tmp253;

}
frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 404
int16_t $tmp254 = param0.value;
uint32_t $tmp255 = param1.value;
uint32_t $tmp256 = ((uint32_t) $tmp254) ^ $tmp255;
frost$core$UInt32 $tmp257 = frost$core$UInt32$init$builtin_uint32($tmp256);
return $tmp257;

}
frost$core$UInt64 frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// line 410
int16_t $tmp258 = param0.value;
uint64_t $tmp259 = param1.value;
uint64_t $tmp260 = ((uint64_t) $tmp258) ^ $tmp259;
frost$core$UInt64 $tmp261 = frost$core$UInt64$init$builtin_uint64($tmp260);
return $tmp261;

}
frost$core$Int32 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 416
int16_t $tmp262 = param0.value;
int16_t $tmp263 = param1.value;
int32_t $tmp264 = ((int32_t) $tmp262) << ((int32_t) $tmp263);
frost$core$Int32 $tmp265 = frost$core$Int32$init$builtin_int32($tmp264);
return $tmp265;

}
frost$core$Int16 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 421
int16_t $tmp266 = param0.value;
int16_t $tmp267 = param1.value;
int16_t $tmp268 = $tmp266 << $tmp267;
frost$core$Int16 $tmp269 = frost$core$Int16$init$builtin_int16($tmp268);
return $tmp269;

}
frost$core$Int32 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 427
int16_t $tmp270 = param0.value;
int16_t $tmp271 = param1.value;
int32_t $tmp272 = ((int32_t) $tmp270) >> ((int32_t) $tmp271);
frost$core$Int32 $tmp273 = frost$core$Int32$init$builtin_int32($tmp272);
return $tmp273;

}
frost$core$Int16 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 432
int16_t $tmp274 = param0.value;
int16_t $tmp275 = param1.value;
int16_t $tmp276 = $tmp274 >> $tmp275;
frost$core$Int16 $tmp277 = frost$core$Int16$init$builtin_int16($tmp276);
return $tmp277;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 438
int16_t $tmp278 = param0.value;
int8_t $tmp279 = param1.value;
bool $tmp280 = $tmp278 == ((int16_t) $tmp279);
frost$core$Bit $tmp281 = frost$core$Bit$init$builtin_bit($tmp280);
return $tmp281;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 445
int16_t $tmp282 = param0.value;
int16_t $tmp283 = param1.value;
bool $tmp284 = $tmp282 == $tmp283;
frost$core$Bit $tmp285 = frost$core$Bit$init$builtin_bit($tmp284);
return $tmp285;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 451
int16_t $tmp286 = param0.value;
int32_t $tmp287 = param1.value;
bool $tmp288 = ((int32_t) $tmp286) == $tmp287;
frost$core$Bit $tmp289 = frost$core$Bit$init$builtin_bit($tmp288);
return $tmp289;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 457
int16_t $tmp290 = param0.value;
int64_t $tmp291 = param1.value;
bool $tmp292 = ((int64_t) $tmp290) == $tmp291;
frost$core$Bit $tmp293 = frost$core$Bit$init$builtin_bit($tmp292);
return $tmp293;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 463
int16_t $tmp294 = param0.value;
uint8_t $tmp295 = param1.value;
bool $tmp296 = ((int32_t) $tmp294) == ((int32_t) $tmp295);
frost$core$Bit $tmp297 = frost$core$Bit$init$builtin_bit($tmp296);
return $tmp297;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 469
int16_t $tmp298 = param0.value;
uint16_t $tmp299 = param1.value;
bool $tmp300 = ((int32_t) $tmp298) == ((int32_t) $tmp299);
frost$core$Bit $tmp301 = frost$core$Bit$init$builtin_bit($tmp300);
return $tmp301;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 475
int16_t $tmp302 = param0.value;
uint32_t $tmp303 = param1.value;
bool $tmp304 = ((int64_t) $tmp302) == ((int64_t) $tmp303);
frost$core$Bit $tmp305 = frost$core$Bit$init$builtin_bit($tmp304);
return $tmp305;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 481
int16_t $tmp306 = param0.value;
int8_t $tmp307 = param1.value;
bool $tmp308 = $tmp306 != ((int16_t) $tmp307);
frost$core$Bit $tmp309 = frost$core$Bit$init$builtin_bit($tmp308);
return $tmp309;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 488
int16_t $tmp310 = param0.value;
int16_t $tmp311 = param1.value;
bool $tmp312 = $tmp310 != $tmp311;
frost$core$Bit $tmp313 = frost$core$Bit$init$builtin_bit($tmp312);
return $tmp313;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 494
int16_t $tmp314 = param0.value;
int32_t $tmp315 = param1.value;
bool $tmp316 = ((int32_t) $tmp314) != $tmp315;
frost$core$Bit $tmp317 = frost$core$Bit$init$builtin_bit($tmp316);
return $tmp317;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 500
int16_t $tmp318 = param0.value;
int64_t $tmp319 = param1.value;
bool $tmp320 = ((int64_t) $tmp318) != $tmp319;
frost$core$Bit $tmp321 = frost$core$Bit$init$builtin_bit($tmp320);
return $tmp321;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 506
int16_t $tmp322 = param0.value;
uint8_t $tmp323 = param1.value;
bool $tmp324 = ((int32_t) $tmp322) != ((int32_t) $tmp323);
frost$core$Bit $tmp325 = frost$core$Bit$init$builtin_bit($tmp324);
return $tmp325;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 512
int16_t $tmp326 = param0.value;
uint16_t $tmp327 = param1.value;
bool $tmp328 = ((int32_t) $tmp326) != ((int32_t) $tmp327);
frost$core$Bit $tmp329 = frost$core$Bit$init$builtin_bit($tmp328);
return $tmp329;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 518
int16_t $tmp330 = param0.value;
uint32_t $tmp331 = param1.value;
bool $tmp332 = ((int64_t) $tmp330) != ((int64_t) $tmp331);
frost$core$Bit $tmp333 = frost$core$Bit$init$builtin_bit($tmp332);
return $tmp333;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 524
int16_t $tmp334 = param0.value;
int8_t $tmp335 = param1.value;
bool $tmp336 = $tmp334 < ((int16_t) $tmp335);
frost$core$Bit $tmp337 = frost$core$Bit$init$builtin_bit($tmp336);
return $tmp337;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 531
int16_t $tmp338 = param0.value;
int16_t $tmp339 = param1.value;
bool $tmp340 = $tmp338 < $tmp339;
frost$core$Bit $tmp341 = frost$core$Bit$init$builtin_bit($tmp340);
return $tmp341;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 537
int16_t $tmp342 = param0.value;
int32_t $tmp343 = param1.value;
bool $tmp344 = ((int32_t) $tmp342) < $tmp343;
frost$core$Bit $tmp345 = frost$core$Bit$init$builtin_bit($tmp344);
return $tmp345;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 543
int16_t $tmp346 = param0.value;
int64_t $tmp347 = param1.value;
bool $tmp348 = ((int64_t) $tmp346) < $tmp347;
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit($tmp348);
return $tmp349;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 549
int16_t $tmp350 = param0.value;
uint8_t $tmp351 = param1.value;
bool $tmp352 = ((int32_t) $tmp350) < ((int32_t) $tmp351);
frost$core$Bit $tmp353 = frost$core$Bit$init$builtin_bit($tmp352);
return $tmp353;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 555
int16_t $tmp354 = param0.value;
uint16_t $tmp355 = param1.value;
bool $tmp356 = ((int32_t) $tmp354) < ((int32_t) $tmp355);
frost$core$Bit $tmp357 = frost$core$Bit$init$builtin_bit($tmp356);
return $tmp357;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 561
int16_t $tmp358 = param0.value;
uint32_t $tmp359 = param1.value;
bool $tmp360 = ((int64_t) $tmp358) < ((int64_t) $tmp359);
frost$core$Bit $tmp361 = frost$core$Bit$init$builtin_bit($tmp360);
return $tmp361;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 567
int16_t $tmp362 = param0.value;
int8_t $tmp363 = param1.value;
bool $tmp364 = $tmp362 > ((int16_t) $tmp363);
frost$core$Bit $tmp365 = frost$core$Bit$init$builtin_bit($tmp364);
return $tmp365;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 574
int16_t $tmp366 = param0.value;
int16_t $tmp367 = param1.value;
bool $tmp368 = $tmp366 > $tmp367;
frost$core$Bit $tmp369 = frost$core$Bit$init$builtin_bit($tmp368);
return $tmp369;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 580
int16_t $tmp370 = param0.value;
int32_t $tmp371 = param1.value;
bool $tmp372 = ((int32_t) $tmp370) > $tmp371;
frost$core$Bit $tmp373 = frost$core$Bit$init$builtin_bit($tmp372);
return $tmp373;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 586
int16_t $tmp374 = param0.value;
int64_t $tmp375 = param1.value;
bool $tmp376 = ((int64_t) $tmp374) > $tmp375;
frost$core$Bit $tmp377 = frost$core$Bit$init$builtin_bit($tmp376);
return $tmp377;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 592
int16_t $tmp378 = param0.value;
uint8_t $tmp379 = param1.value;
bool $tmp380 = ((int32_t) $tmp378) > ((int32_t) $tmp379);
frost$core$Bit $tmp381 = frost$core$Bit$init$builtin_bit($tmp380);
return $tmp381;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 598
int16_t $tmp382 = param0.value;
uint16_t $tmp383 = param1.value;
bool $tmp384 = ((int32_t) $tmp382) > ((int32_t) $tmp383);
frost$core$Bit $tmp385 = frost$core$Bit$init$builtin_bit($tmp384);
return $tmp385;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 604
int16_t $tmp386 = param0.value;
uint32_t $tmp387 = param1.value;
bool $tmp388 = ((int64_t) $tmp386) > ((int64_t) $tmp387);
frost$core$Bit $tmp389 = frost$core$Bit$init$builtin_bit($tmp388);
return $tmp389;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 610
int16_t $tmp390 = param0.value;
int8_t $tmp391 = param1.value;
bool $tmp392 = $tmp390 >= ((int16_t) $tmp391);
frost$core$Bit $tmp393 = frost$core$Bit$init$builtin_bit($tmp392);
return $tmp393;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 617
int16_t $tmp394 = param0.value;
int16_t $tmp395 = param1.value;
bool $tmp396 = $tmp394 >= $tmp395;
frost$core$Bit $tmp397 = frost$core$Bit$init$builtin_bit($tmp396);
return $tmp397;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 623
int16_t $tmp398 = param0.value;
int32_t $tmp399 = param1.value;
bool $tmp400 = ((int32_t) $tmp398) >= $tmp399;
frost$core$Bit $tmp401 = frost$core$Bit$init$builtin_bit($tmp400);
return $tmp401;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 629
int16_t $tmp402 = param0.value;
int64_t $tmp403 = param1.value;
bool $tmp404 = ((int64_t) $tmp402) >= $tmp403;
frost$core$Bit $tmp405 = frost$core$Bit$init$builtin_bit($tmp404);
return $tmp405;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 635
int16_t $tmp406 = param0.value;
uint8_t $tmp407 = param1.value;
bool $tmp408 = ((int32_t) $tmp406) >= ((int32_t) $tmp407);
frost$core$Bit $tmp409 = frost$core$Bit$init$builtin_bit($tmp408);
return $tmp409;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 641
int16_t $tmp410 = param0.value;
uint16_t $tmp411 = param1.value;
bool $tmp412 = ((int32_t) $tmp410) >= ((int32_t) $tmp411);
frost$core$Bit $tmp413 = frost$core$Bit$init$builtin_bit($tmp412);
return $tmp413;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 647
int16_t $tmp414 = param0.value;
uint32_t $tmp415 = param1.value;
bool $tmp416 = ((int64_t) $tmp414) >= ((int64_t) $tmp415);
frost$core$Bit $tmp417 = frost$core$Bit$init$builtin_bit($tmp416);
return $tmp417;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 653
int16_t $tmp418 = param0.value;
int8_t $tmp419 = param1.value;
bool $tmp420 = $tmp418 <= ((int16_t) $tmp419);
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit($tmp420);
return $tmp421;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 660
int16_t $tmp422 = param0.value;
int16_t $tmp423 = param1.value;
bool $tmp424 = $tmp422 <= $tmp423;
frost$core$Bit $tmp425 = frost$core$Bit$init$builtin_bit($tmp424);
return $tmp425;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 666
int16_t $tmp426 = param0.value;
int32_t $tmp427 = param1.value;
bool $tmp428 = ((int32_t) $tmp426) <= $tmp427;
frost$core$Bit $tmp429 = frost$core$Bit$init$builtin_bit($tmp428);
return $tmp429;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 672
int16_t $tmp430 = param0.value;
int64_t $tmp431 = param1.value;
bool $tmp432 = ((int64_t) $tmp430) <= $tmp431;
frost$core$Bit $tmp433 = frost$core$Bit$init$builtin_bit($tmp432);
return $tmp433;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 678
int16_t $tmp434 = param0.value;
uint8_t $tmp435 = param1.value;
bool $tmp436 = ((int32_t) $tmp434) <= ((int32_t) $tmp435);
frost$core$Bit $tmp437 = frost$core$Bit$init$builtin_bit($tmp436);
return $tmp437;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 684
int16_t $tmp438 = param0.value;
uint16_t $tmp439 = param1.value;
bool $tmp440 = ((int32_t) $tmp438) <= ((int32_t) $tmp439);
frost$core$Bit $tmp441 = frost$core$Bit$init$builtin_bit($tmp440);
return $tmp441;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 690
int16_t $tmp442 = param0.value;
uint32_t $tmp443 = param1.value;
bool $tmp444 = ((int64_t) $tmp442) <= ((int64_t) $tmp443);
frost$core$Bit $tmp445 = frost$core$Bit$init$builtin_bit($tmp444);
return $tmp445;

}
frost$core$Int16 frost$core$Int16$get_abs$R$frost$core$Int16(frost$core$Int16 param0) {

// line 696
frost$core$Int16 $tmp446 = (frost$core$Int16) {0};
int16_t $tmp447 = param0.value;
int16_t $tmp448 = $tmp446.value;
bool $tmp449 = $tmp447 < $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block1; else goto block2;
block1:;
// line 697
frost$core$Int16 $tmp452 = frost$core$Int16$$SUB$R$frost$core$Int16(param0);
return $tmp452;
block2:;
// line 699
return param0;

}
frost$core$Int16 frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 705
int16_t $tmp453 = param0.value;
int8_t $tmp454 = param1.value;
bool $tmp455 = $tmp453 < ((int16_t) $tmp454);
frost$core$Bit $tmp456 = frost$core$Bit$init$builtin_bit($tmp455);
bool $tmp457 = $tmp456.value;
if ($tmp457) goto block1; else goto block2;
block1:;
// line 706
int16_t $tmp458 = param0.value;
frost$core$Int16 $tmp459 = frost$core$Int16$init$builtin_int16($tmp458);
return $tmp459;
block2:;
// line 708
int8_t $tmp460 = param1.value;
frost$core$Int16 $tmp461 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp460));
return $tmp461;

}
frost$core$Int16 frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 714
int16_t $tmp462 = param0.value;
int16_t $tmp463 = param1.value;
bool $tmp464 = $tmp462 < $tmp463;
frost$core$Bit $tmp465 = frost$core$Bit$init$builtin_bit($tmp464);
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block1; else goto block2;
block1:;
// line 715
int16_t $tmp467 = param0.value;
frost$core$Int16 $tmp468 = frost$core$Int16$init$builtin_int16($tmp467);
return $tmp468;
block2:;
// line 717
int16_t $tmp469 = param1.value;
frost$core$Int16 $tmp470 = frost$core$Int16$init$builtin_int16($tmp469);
return $tmp470;

}
frost$core$Int32 frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 723
int16_t $tmp471 = param0.value;
int32_t $tmp472 = param1.value;
bool $tmp473 = ((int32_t) $tmp471) < $tmp472;
frost$core$Bit $tmp474 = frost$core$Bit$init$builtin_bit($tmp473);
bool $tmp475 = $tmp474.value;
if ($tmp475) goto block1; else goto block2;
block1:;
// line 724
int16_t $tmp476 = param0.value;
frost$core$Int32 $tmp477 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp476));
return $tmp477;
block2:;
// line 726
int32_t $tmp478 = param1.value;
frost$core$Int32 $tmp479 = frost$core$Int32$init$builtin_int32($tmp478);
return $tmp479;

}
frost$core$Int64 frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 732
int16_t $tmp480 = param0.value;
int64_t $tmp481 = param1.value;
bool $tmp482 = ((int64_t) $tmp480) < $tmp481;
frost$core$Bit $tmp483 = frost$core$Bit$init$builtin_bit($tmp482);
bool $tmp484 = $tmp483.value;
if ($tmp484) goto block1; else goto block2;
block1:;
// line 733
int16_t $tmp485 = param0.value;
frost$core$Int64 $tmp486 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp485));
return $tmp486;
block2:;
// line 735
int64_t $tmp487 = param1.value;
frost$core$Int64 $tmp488 = frost$core$Int64$init$builtin_int64($tmp487);
return $tmp488;

}
frost$core$Int32 frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 741
int16_t $tmp489 = param0.value;
uint8_t $tmp490 = param1.value;
bool $tmp491 = ((int32_t) $tmp489) < ((int32_t) $tmp490);
frost$core$Bit $tmp492 = frost$core$Bit$init$builtin_bit($tmp491);
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block1; else goto block2;
block1:;
// line 742
int16_t $tmp494 = param0.value;
frost$core$Int32 $tmp495 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp494));
return $tmp495;
block2:;
// line 744
uint8_t $tmp496 = param1.value;
frost$core$Int32 $tmp497 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp496));
return $tmp497;

}
frost$core$Int32 frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 750
int16_t $tmp498 = param0.value;
uint16_t $tmp499 = param1.value;
bool $tmp500 = ((int32_t) $tmp498) < ((int32_t) $tmp499);
frost$core$Bit $tmp501 = frost$core$Bit$init$builtin_bit($tmp500);
bool $tmp502 = $tmp501.value;
if ($tmp502) goto block1; else goto block2;
block1:;
// line 751
int16_t $tmp503 = param0.value;
frost$core$Int32 $tmp504 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp503));
return $tmp504;
block2:;
// line 753
uint16_t $tmp505 = param1.value;
frost$core$Int32 $tmp506 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp505));
return $tmp506;

}
frost$core$Int64 frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 759
int16_t $tmp507 = param0.value;
uint32_t $tmp508 = param1.value;
bool $tmp509 = ((int64_t) $tmp507) < ((int64_t) $tmp508);
frost$core$Bit $tmp510 = frost$core$Bit$init$builtin_bit($tmp509);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block1; else goto block2;
block1:;
// line 760
int16_t $tmp512 = param0.value;
frost$core$Int64 $tmp513 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp512));
return $tmp513;
block2:;
// line 762
uint32_t $tmp514 = param1.value;
frost$core$Int64 $tmp515 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp514));
return $tmp515;

}
frost$core$Int16 frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int8 param1) {

// line 769
int16_t $tmp516 = param0.value;
int8_t $tmp517 = param1.value;
bool $tmp518 = $tmp516 > ((int16_t) $tmp517);
frost$core$Bit $tmp519 = frost$core$Bit$init$builtin_bit($tmp518);
bool $tmp520 = $tmp519.value;
if ($tmp520) goto block1; else goto block2;
block1:;
// line 770
int16_t $tmp521 = param0.value;
frost$core$Int16 $tmp522 = frost$core$Int16$init$builtin_int16($tmp521);
return $tmp522;
block2:;
// line 772
int8_t $tmp523 = param1.value;
frost$core$Int16 $tmp524 = frost$core$Int16$init$builtin_int16(((int16_t) $tmp523));
return $tmp524;

}
frost$core$Int16 frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// line 778
int16_t $tmp525 = param0.value;
int16_t $tmp526 = param1.value;
bool $tmp527 = $tmp525 > $tmp526;
frost$core$Bit $tmp528 = frost$core$Bit$init$builtin_bit($tmp527);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block1; else goto block2;
block1:;
// line 779
int16_t $tmp530 = param0.value;
frost$core$Int16 $tmp531 = frost$core$Int16$init$builtin_int16($tmp530);
return $tmp531;
block2:;
// line 781
int16_t $tmp532 = param1.value;
frost$core$Int16 $tmp533 = frost$core$Int16$init$builtin_int16($tmp532);
return $tmp533;

}
frost$core$Int32 frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// line 787
int16_t $tmp534 = param0.value;
int32_t $tmp535 = param1.value;
bool $tmp536 = ((int32_t) $tmp534) > $tmp535;
frost$core$Bit $tmp537 = frost$core$Bit$init$builtin_bit($tmp536);
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block1; else goto block2;
block1:;
// line 788
int16_t $tmp539 = param0.value;
frost$core$Int32 $tmp540 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp539));
return $tmp540;
block2:;
// line 790
int32_t $tmp541 = param1.value;
frost$core$Int32 $tmp542 = frost$core$Int32$init$builtin_int32($tmp541);
return $tmp542;

}
frost$core$Int64 frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// line 796
int16_t $tmp543 = param0.value;
int64_t $tmp544 = param1.value;
bool $tmp545 = ((int64_t) $tmp543) > $tmp544;
frost$core$Bit $tmp546 = frost$core$Bit$init$builtin_bit($tmp545);
bool $tmp547 = $tmp546.value;
if ($tmp547) goto block1; else goto block2;
block1:;
// line 797
int16_t $tmp548 = param0.value;
frost$core$Int64 $tmp549 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp548));
return $tmp549;
block2:;
// line 799
int64_t $tmp550 = param1.value;
frost$core$Int64 $tmp551 = frost$core$Int64$init$builtin_int64($tmp550);
return $tmp551;

}
frost$core$Int32 frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// line 805
int16_t $tmp552 = param0.value;
uint8_t $tmp553 = param1.value;
bool $tmp554 = ((int32_t) $tmp552) > ((int32_t) $tmp553);
frost$core$Bit $tmp555 = frost$core$Bit$init$builtin_bit($tmp554);
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block1; else goto block2;
block1:;
// line 806
int16_t $tmp557 = param0.value;
frost$core$Int32 $tmp558 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp557));
return $tmp558;
block2:;
// line 808
uint8_t $tmp559 = param1.value;
frost$core$Int32 $tmp560 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp559));
return $tmp560;

}
frost$core$Int32 frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// line 814
int16_t $tmp561 = param0.value;
uint16_t $tmp562 = param1.value;
bool $tmp563 = ((int32_t) $tmp561) > ((int32_t) $tmp562);
frost$core$Bit $tmp564 = frost$core$Bit$init$builtin_bit($tmp563);
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block1; else goto block2;
block1:;
// line 815
int16_t $tmp566 = param0.value;
frost$core$Int32 $tmp567 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp566));
return $tmp567;
block2:;
// line 817
uint16_t $tmp568 = param1.value;
frost$core$Int32 $tmp569 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp568));
return $tmp569;

}
frost$core$Int64 frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// line 823
int16_t $tmp570 = param0.value;
uint32_t $tmp571 = param1.value;
bool $tmp572 = ((int64_t) $tmp570) > ((int64_t) $tmp571);
frost$core$Bit $tmp573 = frost$core$Bit$init$builtin_bit($tmp572);
bool $tmp574 = $tmp573.value;
if ($tmp574) goto block1; else goto block2;
block1:;
// line 824
int16_t $tmp575 = param0.value;
frost$core$Int64 $tmp576 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp575));
return $tmp576;
block2:;
// line 826
uint32_t $tmp577 = param1.value;
frost$core$Int64 $tmp578 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp577));
return $tmp578;

}
frost$collections$ListView* frost$core$Int16$$IDX$frost$core$Range$LTfrost$core$Int16$GT$R$frost$collections$ListView$LTfrost$core$Int16$GT(frost$core$Range$LTfrost$core$Int16$GT param0) {

// line 832
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int16List));
org$frostlang$frost$Int16List* $tmp579 = (org$frostlang$frost$Int16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int16List$class);
frost$core$Int16 $tmp580 = param0.min;
frost$core$Int16 $tmp581 = param0.max;
frost$core$Int16 $tmp582 = (frost$core$Int16) {1};
frost$core$Bit $tmp583 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT $tmp584 = frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$init$frost$core$Int16$frost$core$Int16$frost$core$Int16$frost$core$Bit($tmp580, $tmp581, $tmp582, $tmp583);
org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT($tmp579, $tmp584);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp579)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp579));
return ((frost$collections$ListView*) $tmp579);

}
frost$collections$ListView* frost$core$Int16$$IDX$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$collections$ListView$LTfrost$core$Int16$GT(frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param0) {

// line 837
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int16List));
org$frostlang$frost$Int16List* $tmp585 = (org$frostlang$frost$Int16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int16List$class);
org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT($tmp585, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp585)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
return ((frost$collections$ListView*) $tmp585);

}
frost$core$Bit frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp586 = (frost$core$Int64) {0};
int64_t $tmp587 = param1.value;
int64_t $tmp588 = $tmp586.value;
bool $tmp589 = $tmp587 >= $tmp588;
frost$core$Bit $tmp590 = (frost$core$Bit) {$tmp589};
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block3; else goto block2;
block3:;
frost$core$Int16$wrapper* $tmp592;
$tmp592 = (frost$core$Int16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$Int16$wrapperclass);
$tmp592->value = param0;
ITable* $tmp593 = ((frost$collections$CollectionView*) $tmp592)->$class->itable;
while ($tmp593->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp593 = $tmp593->next;
}
$fn595 $tmp594 = $tmp593->methods[0];
frost$core$Int64 $tmp596 = $tmp594(((frost$collections$CollectionView*) $tmp592));
int64_t $tmp597 = param1.value;
int64_t $tmp598 = $tmp596.value;
bool $tmp599 = $tmp597 < $tmp598;
frost$core$Bit $tmp600 = (frost$core$Bit) {$tmp599};
bool $tmp601 = $tmp600.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp592)));
if ($tmp601) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp602 = (frost$core$Int64) {842};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s603, $tmp602, &$s604);
abort(); // unreachable
block1:;
// line 843
frost$core$Int64 $tmp605 = (frost$core$Int64) {1};
frost$core$Int64 $tmp606 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp605, param1);
frost$core$Int64 $tmp607 = frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp606);
frost$core$Int64 $tmp608 = (frost$core$Int64) {0};
int64_t $tmp609 = $tmp607.value;
int64_t $tmp610 = $tmp608.value;
bool $tmp611 = $tmp609 != $tmp610;
frost$core$Bit $tmp612 = (frost$core$Bit) {$tmp611};
return $tmp612;

}
frost$core$Int64 frost$core$Int16$get_count$R$frost$core$Int64(frost$core$Int16 param0) {

// line 849
frost$core$Int64 $tmp613 = (frost$core$Int64) {16};
return $tmp613;

}
frost$collections$Iterator* frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int16 param0) {

// line 854
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp614 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp615 = frost$core$Int16$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp616 = (frost$core$UInt64) {32768};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp614, $tmp615, $tmp616);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp614)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
return ((frost$collections$Iterator*) $tmp614);

}
frost$core$Int64 frost$core$Int16$get_hash$R$frost$core$Int64(frost$core$Int16 param0) {

// line 859
int16_t $tmp617 = param0.value;
frost$core$Int64 $tmp618 = (frost$core$Int64) {((int64_t) $tmp617)};
return $tmp618;

}
frost$core$Int16$nullable frost$core$Int16$parse$frost$core$String$frost$core$Int64$R$frost$core$Int16$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp619 = (frost$core$Int64) {2};
int64_t $tmp620 = param1.value;
int64_t $tmp621 = $tmp619.value;
bool $tmp622 = $tmp620 >= $tmp621;
frost$core$Bit $tmp623 = (frost$core$Bit) {$tmp622};
bool $tmp624 = $tmp623.value;
if ($tmp624) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp625 = (frost$core$Int64) {36};
int64_t $tmp626 = param1.value;
int64_t $tmp627 = $tmp625.value;
bool $tmp628 = $tmp626 <= $tmp627;
frost$core$Bit $tmp629 = (frost$core$Bit) {$tmp628};
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp631 = (frost$core$Int64) {865};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s632, $tmp631, &$s633);
abort(); // unreachable
block1:;
// line 866
frost$core$Bit $tmp634 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s635);
bool $tmp636 = $tmp634.value;
if ($tmp636) goto block4; else goto block6;
block4:;
// line 867
frost$core$Int64 $tmp637 = (frost$core$Int64) {1};
frost$core$Bit $tmp638 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp639 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp637, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp638);
frost$core$String* $tmp640 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp639);
frost$core$UInt64$nullable $tmp641 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp640, param1);
*(&local0) = $tmp641;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp640));
// line 868
frost$core$UInt64$nullable $tmp642 = *(&local0);
frost$core$Bit $tmp643 = frost$core$Bit$init$builtin_bit(!$tmp642.nonnull);
bool $tmp644 = $tmp643.value;
if ($tmp644) goto block7; else goto block8;
block7:;
// line 869
return ((frost$core$Int16$nullable) { .nonnull = false });
block8:;
// line 871
frost$core$UInt64$nullable $tmp645 = *(&local0);
frost$core$Int16 $tmp646 = frost$core$UInt64$get_asInt16$R$frost$core$Int16(((frost$core$UInt64) $tmp645.value));
frost$core$Int16 $tmp647 = frost$core$Int16$$SUB$R$frost$core$Int16($tmp646);
return ((frost$core$Int16$nullable) { $tmp647, true });
block6:;
// line 1
// line 874
frost$core$UInt64$nullable $tmp648 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp648;
// line 875
frost$core$UInt64$nullable $tmp649 = *(&local1);
frost$core$Bit $tmp650 = frost$core$Bit$init$builtin_bit(!$tmp649.nonnull);
bool $tmp651 = $tmp650.value;
if ($tmp651) goto block9; else goto block10;
block9:;
// line 876
return ((frost$core$Int16$nullable) { .nonnull = false });
block10:;
// line 878
frost$core$UInt64$nullable $tmp652 = *(&local1);
frost$core$Int16 $tmp653 = frost$core$UInt64$get_asInt16$R$frost$core$Int16(((frost$core$UInt64) $tmp652.value));
return ((frost$core$Int16$nullable) { $tmp653, true });
block5:;
goto block11;
block11:;

}
frost$core$Int8 frost$core$Int16$get_asInt8$R$frost$core$Int8(frost$core$Int16 param0) {

// line 885
int16_t $tmp654 = param0.value;
frost$core$Int8 $tmp655 = (frost$core$Int8) {((int8_t) $tmp654)};
return $tmp655;

}
frost$core$Int32 frost$core$Int16$get_asInt32$R$frost$core$Int32(frost$core$Int16 param0) {

// line 891
int16_t $tmp656 = param0.value;
frost$core$Int32 $tmp657 = (frost$core$Int32) {((int32_t) $tmp656)};
return $tmp657;

}
frost$core$Int64 frost$core$Int16$get_asInt64$R$frost$core$Int64(frost$core$Int16 param0) {

// line 897
int16_t $tmp658 = param0.value;
frost$core$Int64 $tmp659 = (frost$core$Int64) {((int64_t) $tmp658)};
return $tmp659;

}
frost$core$UInt8 frost$core$Int16$get_asUInt8$R$frost$core$UInt8(frost$core$Int16 param0) {

// line 903
int16_t $tmp660 = param0.value;
frost$core$UInt8 $tmp661 = (frost$core$UInt8) {((uint8_t) $tmp660)};
return $tmp661;

}
frost$core$UInt16 frost$core$Int16$get_asUInt16$R$frost$core$UInt16(frost$core$Int16 param0) {

// line 909
int16_t $tmp662 = param0.value;
frost$core$UInt16 $tmp663 = (frost$core$UInt16) {((uint16_t) $tmp662)};
return $tmp663;

}
frost$core$UInt32 frost$core$Int16$get_asUInt32$R$frost$core$UInt32(frost$core$Int16 param0) {

// line 915
int16_t $tmp664 = param0.value;
frost$core$UInt32 $tmp665 = (frost$core$UInt32) {((uint32_t) $tmp664)};
return $tmp665;

}
frost$core$UInt64 frost$core$Int16$get_asUInt64$R$frost$core$UInt64(frost$core$Int16 param0) {

// line 921
int16_t $tmp666 = param0.value;
frost$core$UInt64 $tmp667 = (frost$core$UInt64) {((uint64_t) $tmp666)};
return $tmp667;

}
frost$core$Real32 frost$core$Int16$get_asReal32$R$frost$core$Real32(frost$core$Int16 param0) {

// line 927
int16_t $tmp668 = param0.value;
frost$core$Real32 $tmp669 = (frost$core$Real32) {((float) $tmp668)};
return $tmp669;

}
frost$core$Real64 frost$core$Int16$get_asReal64$R$frost$core$Real64(frost$core$Int16 param0) {

// line 933
int16_t $tmp670 = param0.value;
frost$core$Real64 $tmp671 = (frost$core$Real64) {((double) $tmp670)};
return $tmp671;

}
frost$core$String* frost$core$Int16$get_asString$R$frost$core$String(frost$core$Int16 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int16 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 939
frost$core$Int64 $tmp672 = (frost$core$Int64) {6};
*(&local0) = $tmp672;
// line 940
frost$core$Int64 $tmp673 = *(&local0);
int64_t $tmp674 = $tmp673.value;
frost$core$Char8* $tmp675 = ((frost$core$Char8*) frostAlloc($tmp674 * 1));
*(&local1) = $tmp675;
// line 941
frost$core$Int64 $tmp676 = *(&local0);
frost$core$Int64 $tmp677 = (frost$core$Int64) {1};
int64_t $tmp678 = $tmp676.value;
int64_t $tmp679 = $tmp677.value;
int64_t $tmp680 = $tmp678 - $tmp679;
frost$core$Int64 $tmp681 = (frost$core$Int64) {$tmp680};
*(&local2) = $tmp681;
// line 942
*(&local3) = param0;
// line 943
frost$core$Int16 $tmp682 = *(&local3);
frost$core$Int16 $tmp683 = (frost$core$Int16) {0};
int16_t $tmp684 = $tmp682.value;
int16_t $tmp685 = $tmp683.value;
bool $tmp686 = $tmp684 >= $tmp685;
frost$core$Bit $tmp687 = (frost$core$Bit) {$tmp686};
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block1; else goto block3;
block1:;
// line 944
goto block4;
block4:;
// line 945
frost$core$Char8* $tmp689 = *(&local1);
frost$core$Int64 $tmp690 = *(&local2);
frost$core$Int16 $tmp691 = *(&local3);
frost$core$Int16 $tmp692 = (frost$core$Int16) {10};
frost$core$Int32 $tmp693 = frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32($tmp691, $tmp692);
frost$core$Int32 $tmp694 = (frost$core$Int32) {48};
int32_t $tmp695 = $tmp693.value;
int32_t $tmp696 = $tmp694.value;
int32_t $tmp697 = $tmp695 + $tmp696;
frost$core$Int32 $tmp698 = (frost$core$Int32) {$tmp697};
frost$core$UInt8 $tmp699 = frost$core$Int32$get_asUInt8$R$frost$core$UInt8($tmp698);
frost$core$Char8 $tmp700 = frost$core$Char8$init$frost$core$UInt8($tmp699);
int64_t $tmp701 = $tmp690.value;
$tmp689[$tmp701] = $tmp700;
// line 946
frost$core$Int16 $tmp702 = *(&local3);
frost$core$Int32 $tmp703 = frost$core$Int32$init$frost$core$Int16($tmp702);
frost$core$Int32 $tmp704 = (frost$core$Int32) {10};
int32_t $tmp705 = $tmp703.value;
int32_t $tmp706 = $tmp704.value;
int32_t $tmp707 = $tmp705 / $tmp706;
frost$core$Int32 $tmp708 = (frost$core$Int32) {$tmp707};
frost$core$Int16 $tmp709 = frost$core$Int32$get_asInt16$R$frost$core$Int16($tmp708);
*(&local3) = $tmp709;
// line 947
frost$core$Int64 $tmp710 = *(&local2);
frost$core$Int64 $tmp711 = (frost$core$Int64) {1};
int64_t $tmp712 = $tmp710.value;
int64_t $tmp713 = $tmp711.value;
int64_t $tmp714 = $tmp712 - $tmp713;
frost$core$Int64 $tmp715 = (frost$core$Int64) {$tmp714};
*(&local2) = $tmp715;
goto block5;
block5:;
frost$core$Int16 $tmp716 = *(&local3);
frost$core$Int16 $tmp717 = (frost$core$Int16) {0};
int16_t $tmp718 = $tmp716.value;
int16_t $tmp719 = $tmp717.value;
bool $tmp720 = $tmp718 > $tmp719;
frost$core$Bit $tmp721 = (frost$core$Bit) {$tmp720};
bool $tmp722 = $tmp721.value;
if ($tmp722) goto block4; else goto block6;
block6:;
// line 950
frost$core$Int64 $tmp723 = *(&local2);
frost$core$Int64 $tmp724 = (frost$core$Int64) {1};
int64_t $tmp725 = $tmp723.value;
int64_t $tmp726 = $tmp724.value;
int64_t $tmp727 = $tmp725 + $tmp726;
frost$core$Int64 $tmp728 = (frost$core$Int64) {$tmp727};
*(&local2) = $tmp728;
goto block2;
block3:;
// line 1
// line 953
goto block7;
block7:;
// line 954
frost$core$Char8* $tmp729 = *(&local1);
frost$core$Int64 $tmp730 = *(&local2);
frost$core$Int32 $tmp731 = (frost$core$Int32) {48};
frost$core$Int16 $tmp732 = *(&local3);
frost$core$Int16 $tmp733 = (frost$core$Int16) {10};
frost$core$Int32 $tmp734 = frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32($tmp732, $tmp733);
int32_t $tmp735 = $tmp731.value;
int32_t $tmp736 = $tmp734.value;
int32_t $tmp737 = $tmp735 - $tmp736;
frost$core$Int32 $tmp738 = (frost$core$Int32) {$tmp737};
frost$core$UInt8 $tmp739 = frost$core$Int32$get_asUInt8$R$frost$core$UInt8($tmp738);
frost$core$Char8 $tmp740 = frost$core$Char8$init$frost$core$UInt8($tmp739);
int64_t $tmp741 = $tmp730.value;
$tmp729[$tmp741] = $tmp740;
// line 955
frost$core$Int16 $tmp742 = *(&local3);
frost$core$Int32 $tmp743 = frost$core$Int32$init$frost$core$Int16($tmp742);
frost$core$Int32 $tmp744 = (frost$core$Int32) {10};
int32_t $tmp745 = $tmp743.value;
int32_t $tmp746 = $tmp744.value;
int32_t $tmp747 = $tmp745 / $tmp746;
frost$core$Int32 $tmp748 = (frost$core$Int32) {$tmp747};
frost$core$Int16 $tmp749 = frost$core$Int32$get_asInt16$R$frost$core$Int16($tmp748);
*(&local3) = $tmp749;
// line 956
frost$core$Int64 $tmp750 = *(&local2);
frost$core$Int64 $tmp751 = (frost$core$Int64) {1};
int64_t $tmp752 = $tmp750.value;
int64_t $tmp753 = $tmp751.value;
int64_t $tmp754 = $tmp752 - $tmp753;
frost$core$Int64 $tmp755 = (frost$core$Int64) {$tmp754};
*(&local2) = $tmp755;
goto block8;
block8:;
frost$core$Int16 $tmp756 = *(&local3);
frost$core$Int16 $tmp757 = (frost$core$Int16) {0};
int16_t $tmp758 = $tmp756.value;
int16_t $tmp759 = $tmp757.value;
bool $tmp760 = $tmp758 < $tmp759;
frost$core$Bit $tmp761 = (frost$core$Bit) {$tmp760};
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block7; else goto block9;
block9:;
// line 959
frost$core$Char8* $tmp763 = *(&local1);
frost$core$Int64 $tmp764 = *(&local2);
frost$core$UInt8 $tmp765 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp766 = frost$core$Char8$init$frost$core$UInt8($tmp765);
int64_t $tmp767 = $tmp764.value;
$tmp763[$tmp767] = $tmp766;
goto block2;
block2:;
// line 961
frost$core$Int64 $tmp768 = *(&local0);
frost$core$Int64 $tmp769 = *(&local2);
int64_t $tmp770 = $tmp768.value;
int64_t $tmp771 = $tmp769.value;
int64_t $tmp772 = $tmp770 - $tmp771;
frost$core$Int64 $tmp773 = (frost$core$Int64) {$tmp772};
*(&local4) = $tmp773;
// line 962
frost$core$Int64 $tmp774 = (frost$core$Int64) {0};
frost$core$Int64 $tmp775 = *(&local4);
frost$core$Bit $tmp776 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp777 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp774, $tmp775, $tmp776);
frost$core$Int64 $tmp778 = $tmp777.min;
*(&local5) = $tmp778;
frost$core$Int64 $tmp779 = $tmp777.max;
frost$core$Bit $tmp780 = $tmp777.inclusive;
bool $tmp781 = $tmp780.value;
frost$core$Int64 $tmp782 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp783 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp782);
if ($tmp781) goto block13; else goto block14;
block13:;
int64_t $tmp784 = $tmp778.value;
int64_t $tmp785 = $tmp779.value;
bool $tmp786 = $tmp784 <= $tmp785;
frost$core$Bit $tmp787 = (frost$core$Bit) {$tmp786};
bool $tmp788 = $tmp787.value;
if ($tmp788) goto block10; else goto block11;
block14:;
int64_t $tmp789 = $tmp778.value;
int64_t $tmp790 = $tmp779.value;
bool $tmp791 = $tmp789 < $tmp790;
frost$core$Bit $tmp792 = (frost$core$Bit) {$tmp791};
bool $tmp793 = $tmp792.value;
if ($tmp793) goto block10; else goto block11;
block10:;
// line 963
frost$core$Char8* $tmp794 = *(&local1);
frost$core$Int64 $tmp795 = *(&local5);
frost$core$Char8* $tmp796 = *(&local1);
frost$core$Int64 $tmp797 = *(&local5);
frost$core$Int64 $tmp798 = *(&local2);
int64_t $tmp799 = $tmp797.value;
int64_t $tmp800 = $tmp798.value;
int64_t $tmp801 = $tmp799 + $tmp800;
frost$core$Int64 $tmp802 = (frost$core$Int64) {$tmp801};
int64_t $tmp803 = $tmp802.value;
frost$core$Char8 $tmp804 = $tmp796[$tmp803];
int64_t $tmp805 = $tmp795.value;
$tmp794[$tmp805] = $tmp804;
goto block12;
block12:;
frost$core$Int64 $tmp806 = *(&local5);
int64_t $tmp807 = $tmp779.value;
int64_t $tmp808 = $tmp806.value;
int64_t $tmp809 = $tmp807 - $tmp808;
frost$core$Int64 $tmp810 = (frost$core$Int64) {$tmp809};
frost$core$UInt64 $tmp811 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp810);
if ($tmp781) goto block16; else goto block17;
block16:;
uint64_t $tmp812 = $tmp811.value;
uint64_t $tmp813 = $tmp783.value;
bool $tmp814 = $tmp812 >= $tmp813;
frost$core$Bit $tmp815 = (frost$core$Bit) {$tmp814};
bool $tmp816 = $tmp815.value;
if ($tmp816) goto block15; else goto block11;
block17:;
uint64_t $tmp817 = $tmp811.value;
uint64_t $tmp818 = $tmp783.value;
bool $tmp819 = $tmp817 > $tmp818;
frost$core$Bit $tmp820 = (frost$core$Bit) {$tmp819};
bool $tmp821 = $tmp820.value;
if ($tmp821) goto block15; else goto block11;
block15:;
int64_t $tmp822 = $tmp806.value;
int64_t $tmp823 = $tmp782.value;
int64_t $tmp824 = $tmp822 + $tmp823;
frost$core$Int64 $tmp825 = (frost$core$Int64) {$tmp824};
*(&local5) = $tmp825;
goto block10;
block11:;
// line 965
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp826 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp827 = *(&local1);
frost$core$Int64 $tmp828 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp826, $tmp827, $tmp828);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp826));
return $tmp826;

}
frost$core$String* frost$core$Int16$format$frost$core$String$R$frost$core$String(frost$core$Int16 param0, frost$core$String* param1) {

// line 971
int16_t $tmp829 = param0.value;
bool $tmp830 = $tmp829 < 0;
frost$core$Bit $tmp831 = frost$core$Bit$init$builtin_bit($tmp830);
frost$core$Int16 $tmp832 = frost$core$Int16$get_abs$R$frost$core$Int16(param0);
frost$core$UInt64 $tmp833 = frost$core$Int16$get_asUInt64$R$frost$core$UInt64($tmp832);
frost$core$UInt64 $tmp834 = (frost$core$UInt64) {65535};
frost$core$String* $tmp835 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp831, $tmp833, $tmp834, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp835));
return $tmp835;

}
void frost$core$Int16$cleanup(frost$core$Int16 param0) {

return;

}

