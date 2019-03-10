#include "frost/core/Int16.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
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

__attribute__((weak)) frost$core$Int64 frost$core$Int16$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int16$get_hash$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$Int64 frost$core$Int16$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int16$get_count$R$frost$core$Int64(((frost$core$Int16$wrapper*) p0)->value);

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
__attribute__((weak)) void frost$core$Int16$get_bitCount$R$frost$core$Int16$shim(frost$core$Int16* sret, frost$core$Object* p0) {
    frost$core$Int16$get_bitCount$R$frost$core$Int16(sret, ((frost$core$Int16$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Int16$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$Int16$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int16$_frost$collections$Key, { frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int16$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int16$_frost$collections$ListView, { frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int16$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int16$_frost$core$Comparable, { frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int16$_frost$core$Equatable, { frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int16$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int16$_frost$collections$Iterable, { frost$core$Int16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int16$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int16$_frost$core$Formattable, { frost$core$Int16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$Int16$class_type frost$core$Int16$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int16$_frost$collections$CollectionView, { frost$core$Int16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$SUB$R$frost$core$Int16$shim, frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int16$$BNOT$R$frost$core$Int16$shim, frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32$shim, frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int16$get_abs$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16$shim, frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16$shim, frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32$shim, frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int16$get_count$R$frost$core$Int64$shim, frost$core$Int16$get_bitCount$R$frost$core$Int16$shim, frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int16$get_hash$R$frost$core$Int64$shim, frost$core$Int16$get_asInt8$R$frost$core$Int8$shim, frost$core$Int16$get_asInt32$R$frost$core$Int32$shim, frost$core$Int16$get_asInt64$R$frost$core$Int64$shim, frost$core$Int16$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int16$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int16$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int16$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int16$get_asReal32$R$frost$core$Real32$shim, frost$core$Int16$get_asReal64$R$frost$core$Real64$shim, frost$core$Int16$format$frost$core$String$R$frost$core$String$shim, frost$core$Int16$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$Int16$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$Int16$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$Key, { frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int16$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$ListView, { frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int16$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Comparable, { frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Equatable, { frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int16$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$Iterable, { frost$core$Int16$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int16$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int16$wrapper_frost$core$Formattable, { frost$core$Int16$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$Int16$wrapperclass_type frost$core$Int16$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int16$wrapper_frost$collections$CollectionView, { frost$core$Int16$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn597)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, 161584705572475510, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36", 16, 161584705572475510, NULL };
static frost$core$String $s605 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -1702292265505566123, NULL };
static frost$core$String $s606 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, 259803494533367930, NULL };
static frost$core$String $s641 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x31\x36\x2e\x66\x72\x6f\x73\x74", 11, -1702292265505566123, NULL };
static frost$core$String $s642 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x31\x36\x3f", 121, 3829063333278919010, NULL };
static frost$core$String $s644 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };

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
frost$core$Int32 frost$core$Int16$$ADD$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:71
int16_t $tmp28 = param0.value;
uint16_t $tmp29 = param1.value;
int32_t $tmp30 = ((int32_t) $tmp28) + ((int32_t) $tmp29);
frost$core$Int32 $tmp31 = (frost$core$Int32) {$tmp30};
return $tmp31;

}
frost$core$Int64 frost$core$Int16$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:77
int16_t $tmp32 = param0.value;
uint32_t $tmp33 = param1.value;
int64_t $tmp34 = ((int64_t) $tmp32) + ((int64_t) $tmp33);
frost$core$Int64 $tmp35 = (frost$core$Int64) {$tmp34};
return $tmp35;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:83
int16_t $tmp36 = param0.value;
int16_t $tmp37 = param1.value;
int32_t $tmp38 = ((int32_t) $tmp36) - ((int32_t) $tmp37);
frost$core$Int32 $tmp39 = (frost$core$Int32) {$tmp38};
return $tmp39;

}
frost$core$Int16 frost$core$Int16$$SUB$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:88
int16_t $tmp40 = param0.value;
int16_t $tmp41 = param1.value;
int16_t $tmp42 = $tmp40 - $tmp41;
frost$core$Int16 $tmp43 = (frost$core$Int16) {$tmp42};
return $tmp43;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:94
int16_t $tmp44 = param0.value;
int32_t $tmp45 = param1.value;
int32_t $tmp46 = ((int32_t) $tmp44) - $tmp45;
frost$core$Int32 $tmp47 = (frost$core$Int32) {$tmp46};
return $tmp47;

}
frost$core$Int64 frost$core$Int16$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:100
int16_t $tmp48 = param0.value;
int64_t $tmp49 = param1.value;
int64_t $tmp50 = ((int64_t) $tmp48) - $tmp49;
frost$core$Int64 $tmp51 = (frost$core$Int64) {$tmp50};
return $tmp51;

}
frost$core$Int32 frost$core$Int16$$SUB$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:106
int16_t $tmp52 = param0.value;
uint16_t $tmp53 = param1.value;
int32_t $tmp54 = ((int32_t) $tmp52) - ((int32_t) $tmp53);
frost$core$Int32 $tmp55 = (frost$core$Int32) {$tmp54};
return $tmp55;

}
frost$core$Int64 frost$core$Int16$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:112
int16_t $tmp56 = param0.value;
uint32_t $tmp57 = param1.value;
int64_t $tmp58 = ((int64_t) $tmp56) - ((int64_t) $tmp57);
frost$core$Int64 $tmp59 = (frost$core$Int64) {$tmp58};
return $tmp59;

}
frost$core$Int16 frost$core$Int16$$SUB$R$frost$core$Int16(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:117
int16_t $tmp60 = param0.value;
int16_t $tmp61 = -$tmp60;
frost$core$Int16 $tmp62 = (frost$core$Int16) {$tmp61};
return $tmp62;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:123
int16_t $tmp63 = param0.value;
int16_t $tmp64 = param1.value;
int32_t $tmp65 = ((int32_t) $tmp63) * ((int32_t) $tmp64);
frost$core$Int32 $tmp66 = (frost$core$Int32) {$tmp65};
return $tmp66;

}
frost$core$Int16 frost$core$Int16$$MUL$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:128
int16_t $tmp67 = param0.value;
int16_t $tmp68 = param1.value;
int16_t $tmp69 = $tmp67 * $tmp68;
frost$core$Int16 $tmp70 = (frost$core$Int16) {$tmp69};
return $tmp70;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:134
int16_t $tmp71 = param0.value;
int32_t $tmp72 = param1.value;
int32_t $tmp73 = ((int32_t) $tmp71) * $tmp72;
frost$core$Int32 $tmp74 = (frost$core$Int32) {$tmp73};
return $tmp74;

}
frost$core$Int64 frost$core$Int16$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:140
int16_t $tmp75 = param0.value;
int64_t $tmp76 = param1.value;
int64_t $tmp77 = ((int64_t) $tmp75) * $tmp76;
frost$core$Int64 $tmp78 = (frost$core$Int64) {$tmp77};
return $tmp78;

}
frost$core$Int32 frost$core$Int16$$MUL$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:146
int16_t $tmp79 = param0.value;
uint16_t $tmp80 = param1.value;
int32_t $tmp81 = ((int32_t) $tmp79) * ((int32_t) $tmp80);
frost$core$Int32 $tmp82 = (frost$core$Int32) {$tmp81};
return $tmp82;

}
frost$core$Int64 frost$core$Int16$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:152
int16_t $tmp83 = param0.value;
uint32_t $tmp84 = param1.value;
int64_t $tmp85 = ((int64_t) $tmp83) * ((int64_t) $tmp84);
frost$core$Int64 $tmp86 = (frost$core$Int64) {$tmp85};
return $tmp86;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:158
int16_t $tmp87 = param0.value;
int16_t $tmp88 = param1.value;
int32_t $tmp89 = ((int32_t) $tmp87) / ((int32_t) $tmp88);
frost$core$Int32 $tmp90 = (frost$core$Int32) {$tmp89};
return $tmp90;

}
frost$core$Int16 frost$core$Int16$$INTDIV$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:163
int16_t $tmp91 = param0.value;
int16_t $tmp92 = param1.value;
int16_t $tmp93 = $tmp91 / $tmp92;
frost$core$Int16 $tmp94 = (frost$core$Int16) {$tmp93};
return $tmp94;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:169
int16_t $tmp95 = param0.value;
int32_t $tmp96 = param1.value;
int32_t $tmp97 = ((int32_t) $tmp95) / $tmp96;
frost$core$Int32 $tmp98 = (frost$core$Int32) {$tmp97};
return $tmp98;

}
frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:175
int16_t $tmp99 = param0.value;
int64_t $tmp100 = param1.value;
int64_t $tmp101 = ((int64_t) $tmp99) / $tmp100;
frost$core$Int64 $tmp102 = (frost$core$Int64) {$tmp101};
return $tmp102;

}
frost$core$Int32 frost$core$Int16$$INTDIV$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:181
int16_t $tmp103 = param0.value;
uint16_t $tmp104 = param1.value;
int32_t $tmp105 = ((int32_t) $tmp103) / ((int32_t) $tmp104);
frost$core$Int32 $tmp106 = (frost$core$Int32) {$tmp105};
return $tmp106;

}
frost$core$Int64 frost$core$Int16$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:187
int16_t $tmp107 = param0.value;
uint32_t $tmp108 = param1.value;
int64_t $tmp109 = ((int64_t) $tmp107) / ((int64_t) $tmp108);
frost$core$Int64 $tmp110 = (frost$core$Int64) {$tmp109};
return $tmp110;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:193
int16_t $tmp111 = param0.value;
int16_t $tmp112 = param1.value;
int32_t $tmp113 = ((int32_t) $tmp111) % ((int32_t) $tmp112);
frost$core$Int32 $tmp114 = (frost$core$Int32) {$tmp113};
return $tmp114;

}
frost$core$Int16 frost$core$Int16$$REM$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:198
int16_t $tmp115 = param0.value;
int16_t $tmp116 = param1.value;
int16_t $tmp117 = $tmp115 % $tmp116;
frost$core$Int16 $tmp118 = (frost$core$Int16) {$tmp117};
return $tmp118;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:204
int16_t $tmp119 = param0.value;
int32_t $tmp120 = param1.value;
int32_t $tmp121 = ((int32_t) $tmp119) % $tmp120;
frost$core$Int32 $tmp122 = (frost$core$Int32) {$tmp121};
return $tmp122;

}
frost$core$Int64 frost$core$Int16$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:210
int16_t $tmp123 = param0.value;
int64_t $tmp124 = param1.value;
int64_t $tmp125 = ((int64_t) $tmp123) % $tmp124;
frost$core$Int64 $tmp126 = (frost$core$Int64) {$tmp125};
return $tmp126;

}
frost$core$Int32 frost$core$Int16$$REM$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:216
int16_t $tmp127 = param0.value;
uint16_t $tmp128 = param1.value;
int32_t $tmp129 = ((int32_t) $tmp127) % ((int32_t) $tmp128);
frost$core$Int32 $tmp130 = (frost$core$Int32) {$tmp129};
return $tmp130;

}
frost$core$Int64 frost$core$Int16$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:222
int16_t $tmp131 = param0.value;
uint32_t $tmp132 = param1.value;
int64_t $tmp133 = ((int64_t) $tmp131) % ((int64_t) $tmp132);
frost$core$Int64 $tmp134 = (frost$core$Int64) {$tmp133};
return $tmp134;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:228
int16_t $tmp135 = param0.value;
int8_t $tmp136 = param1.value;
float $tmp137 = ((float) $tmp135) / ((float) $tmp136);
frost$core$Real32 $tmp138 = (frost$core$Real32) {$tmp137};
return $tmp138;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:234
int16_t $tmp139 = param0.value;
int16_t $tmp140 = param1.value;
float $tmp141 = ((float) $tmp139) / ((float) $tmp140);
frost$core$Real32 $tmp142 = (frost$core$Real32) {$tmp141};
return $tmp142;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:240
int16_t $tmp143 = param0.value;
int32_t $tmp144 = param1.value;
float $tmp145 = ((float) $tmp143) / ((float) $tmp144);
frost$core$Real32 $tmp146 = (frost$core$Real32) {$tmp145};
return $tmp146;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:246
int16_t $tmp147 = param0.value;
int64_t $tmp148 = param1.value;
double $tmp149 = ((double) $tmp147) / ((double) $tmp148);
frost$core$Real64 $tmp150 = (frost$core$Real64) {$tmp149};
return $tmp150;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:252
int16_t $tmp151 = param0.value;
uint8_t $tmp152 = param1.value;
float $tmp153 = ((float) $tmp151) / ((float) $tmp152);
frost$core$Real32 $tmp154 = (frost$core$Real32) {$tmp153};
return $tmp154;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:258
int16_t $tmp155 = param0.value;
uint16_t $tmp156 = param1.value;
float $tmp157 = ((float) $tmp155) / ((float) $tmp156);
frost$core$Real32 $tmp158 = (frost$core$Real32) {$tmp157};
return $tmp158;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:264
int16_t $tmp159 = param0.value;
uint32_t $tmp160 = param1.value;
float $tmp161 = ((float) $tmp159) / ((float) $tmp160);
frost$core$Real32 $tmp162 = (frost$core$Real32) {$tmp161};
return $tmp162;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:270
int16_t $tmp163 = param0.value;
uint64_t $tmp164 = param1.value;
double $tmp165 = ((double) $tmp163) / ((double) $tmp164);
frost$core$Real64 $tmp166 = (frost$core$Real64) {$tmp165};
return $tmp166;

}
frost$core$Real32 frost$core$Int16$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int16 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:276
int16_t $tmp167 = param0.value;
float $tmp168 = param1.value;
float $tmp169 = ((float) $tmp167) / $tmp168;
frost$core$Real32 $tmp170 = (frost$core$Real32) {$tmp169};
return $tmp170;

}
frost$core$Real64 frost$core$Int16$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int16 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:282
int16_t $tmp171 = param0.value;
double $tmp172 = param1.value;
double $tmp173 = ((double) $tmp171) / $tmp172;
frost$core$Real64 $tmp174 = (frost$core$Real64) {$tmp173};
return $tmp174;

}
frost$core$Int16 frost$core$Int16$$BNOT$R$frost$core$Int16(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:287
int16_t $tmp175 = param0.value;
int16_t $tmp176 = !$tmp175;
frost$core$Int16 $tmp177 = (frost$core$Int16) {$tmp176};
return $tmp177;

}
frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:293
int16_t $tmp178 = param0.value;
int16_t $tmp179 = param1.value;
int32_t $tmp180 = ((int32_t) $tmp178) & ((int32_t) $tmp179);
frost$core$Int32 $tmp181 = (frost$core$Int32) {$tmp180};
return $tmp181;

}
frost$core$Int16 frost$core$Int16$$BAND$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:298
int16_t $tmp182 = param0.value;
int16_t $tmp183 = param1.value;
int16_t $tmp184 = $tmp182 & $tmp183;
frost$core$Int16 $tmp185 = (frost$core$Int16) {$tmp184};
return $tmp185;

}
frost$core$Int32 frost$core$Int16$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:304
int16_t $tmp186 = param0.value;
int32_t $tmp187 = param1.value;
int32_t $tmp188 = ((int32_t) $tmp186) & $tmp187;
frost$core$Int32 $tmp189 = (frost$core$Int32) {$tmp188};
return $tmp189;

}
frost$core$Int64 frost$core$Int16$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:310
int16_t $tmp190 = param0.value;
int64_t $tmp191 = param1.value;
int64_t $tmp192 = ((int64_t) $tmp190) & $tmp191;
frost$core$Int64 $tmp193 = (frost$core$Int64) {$tmp192};
return $tmp193;

}
frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:316
int16_t $tmp194 = param0.value;
uint16_t $tmp195 = param1.value;
uint32_t $tmp196 = ((uint32_t) $tmp194) & ((uint32_t) $tmp195);
frost$core$UInt32 $tmp197 = (frost$core$UInt32) {$tmp196};
return $tmp197;

}
frost$core$UInt32 frost$core$Int16$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:322
int16_t $tmp198 = param0.value;
uint32_t $tmp199 = param1.value;
uint32_t $tmp200 = ((uint32_t) $tmp198) & $tmp199;
frost$core$UInt32 $tmp201 = (frost$core$UInt32) {$tmp200};
return $tmp201;

}
frost$core$UInt64 frost$core$Int16$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:328
int16_t $tmp202 = param0.value;
uint64_t $tmp203 = param1.value;
uint64_t $tmp204 = ((uint64_t) $tmp202) & $tmp203;
frost$core$UInt64 $tmp205 = (frost$core$UInt64) {$tmp204};
return $tmp205;

}
frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:334
int16_t $tmp206 = param0.value;
int16_t $tmp207 = param1.value;
int32_t $tmp208 = ((int32_t) $tmp206) | ((int32_t) $tmp207);
frost$core$Int32 $tmp209 = (frost$core$Int32) {$tmp208};
return $tmp209;

}
frost$core$Int16 frost$core$Int16$$BOR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:339
int16_t $tmp210 = param0.value;
int16_t $tmp211 = param1.value;
int16_t $tmp212 = $tmp210 | $tmp211;
frost$core$Int16 $tmp213 = (frost$core$Int16) {$tmp212};
return $tmp213;

}
frost$core$Int32 frost$core$Int16$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:345
int16_t $tmp214 = param0.value;
int32_t $tmp215 = param1.value;
int32_t $tmp216 = ((int32_t) $tmp214) | $tmp215;
frost$core$Int32 $tmp217 = (frost$core$Int32) {$tmp216};
return $tmp217;

}
frost$core$Int64 frost$core$Int16$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:351
int16_t $tmp218 = param0.value;
int64_t $tmp219 = param1.value;
int64_t $tmp220 = ((int64_t) $tmp218) | $tmp219;
frost$core$Int64 $tmp221 = (frost$core$Int64) {$tmp220};
return $tmp221;

}
frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:357
int16_t $tmp222 = param0.value;
uint16_t $tmp223 = param1.value;
uint32_t $tmp224 = ((uint32_t) $tmp222) | ((uint32_t) $tmp223);
frost$core$UInt32 $tmp225 = (frost$core$UInt32) {$tmp224};
return $tmp225;

}
frost$core$UInt32 frost$core$Int16$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:363
int16_t $tmp226 = param0.value;
uint32_t $tmp227 = param1.value;
uint32_t $tmp228 = ((uint32_t) $tmp226) | $tmp227;
frost$core$UInt32 $tmp229 = (frost$core$UInt32) {$tmp228};
return $tmp229;

}
frost$core$UInt64 frost$core$Int16$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:369
int16_t $tmp230 = param0.value;
uint64_t $tmp231 = param1.value;
uint64_t $tmp232 = ((uint64_t) $tmp230) | $tmp231;
frost$core$UInt64 $tmp233 = (frost$core$UInt64) {$tmp232};
return $tmp233;

}
frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:375
int16_t $tmp234 = param0.value;
int16_t $tmp235 = param1.value;
int32_t $tmp236 = ((int32_t) $tmp234) ^ ((int32_t) $tmp235);
frost$core$Int32 $tmp237 = (frost$core$Int32) {$tmp236};
return $tmp237;

}
frost$core$Int16 frost$core$Int16$$BXOR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:380
int16_t $tmp238 = param0.value;
int16_t $tmp239 = param1.value;
int16_t $tmp240 = $tmp238 ^ $tmp239;
frost$core$Int16 $tmp241 = (frost$core$Int16) {$tmp240};
return $tmp241;

}
frost$core$Int32 frost$core$Int16$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:386
int16_t $tmp242 = param0.value;
int32_t $tmp243 = param1.value;
int32_t $tmp244 = ((int32_t) $tmp242) ^ $tmp243;
frost$core$Int32 $tmp245 = (frost$core$Int32) {$tmp244};
return $tmp245;

}
frost$core$Int64 frost$core$Int16$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:392
int16_t $tmp246 = param0.value;
int64_t $tmp247 = param1.value;
int64_t $tmp248 = ((int64_t) $tmp246) ^ $tmp247;
frost$core$Int64 $tmp249 = (frost$core$Int64) {$tmp248};
return $tmp249;

}
frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt16$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:398
int16_t $tmp250 = param0.value;
uint16_t $tmp251 = param1.value;
uint32_t $tmp252 = ((uint32_t) $tmp250) ^ ((uint32_t) $tmp251);
frost$core$UInt32 $tmp253 = (frost$core$UInt32) {$tmp252};
return $tmp253;

}
frost$core$UInt32 frost$core$Int16$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:404
int16_t $tmp254 = param0.value;
uint32_t $tmp255 = param1.value;
uint32_t $tmp256 = ((uint32_t) $tmp254) ^ $tmp255;
frost$core$UInt32 $tmp257 = (frost$core$UInt32) {$tmp256};
return $tmp257;

}
frost$core$UInt64 frost$core$Int16$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int16 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:410
int16_t $tmp258 = param0.value;
uint64_t $tmp259 = param1.value;
uint64_t $tmp260 = ((uint64_t) $tmp258) ^ $tmp259;
frost$core$UInt64 $tmp261 = (frost$core$UInt64) {$tmp260};
return $tmp261;

}
frost$core$Int32 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:416
int16_t $tmp262 = param0.value;
int16_t $tmp263 = param1.value;
int32_t $tmp264 = ((int32_t) $tmp262) << ((int32_t) $tmp263);
frost$core$Int32 $tmp265 = (frost$core$Int32) {$tmp264};
return $tmp265;

}
frost$core$Int16 frost$core$Int16$$SHL$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:421
int16_t $tmp266 = param0.value;
int16_t $tmp267 = param1.value;
int16_t $tmp268 = $tmp266 << $tmp267;
frost$core$Int16 $tmp269 = (frost$core$Int16) {$tmp268};
return $tmp269;

}
frost$core$Int32 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:427
int16_t $tmp270 = param0.value;
int16_t $tmp271 = param1.value;
int32_t $tmp272 = ((int32_t) $tmp270) >> ((int32_t) $tmp271);
frost$core$Int32 $tmp273 = (frost$core$Int32) {$tmp272};
return $tmp273;

}
frost$core$Int16 frost$core$Int16$$SHR$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:432
int16_t $tmp274 = param0.value;
int16_t $tmp275 = param1.value;
int16_t $tmp276 = $tmp274 >> $tmp275;
frost$core$Int16 $tmp277 = (frost$core$Int16) {$tmp276};
return $tmp277;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:438
int16_t $tmp278 = param0.value;
int8_t $tmp279 = param1.value;
bool $tmp280 = $tmp278 == ((int16_t) $tmp279);
frost$core$Bit $tmp281 = (frost$core$Bit) {$tmp280};
return $tmp281;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:445
int16_t $tmp282 = param0.value;
int16_t $tmp283 = param1.value;
bool $tmp284 = $tmp282 == $tmp283;
frost$core$Bit $tmp285 = (frost$core$Bit) {$tmp284};
return $tmp285;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:451
int16_t $tmp286 = param0.value;
int32_t $tmp287 = param1.value;
bool $tmp288 = ((int32_t) $tmp286) == $tmp287;
frost$core$Bit $tmp289 = (frost$core$Bit) {$tmp288};
return $tmp289;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:457
int16_t $tmp290 = param0.value;
int64_t $tmp291 = param1.value;
bool $tmp292 = ((int64_t) $tmp290) == $tmp291;
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
return $tmp293;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:463
int16_t $tmp294 = param0.value;
uint8_t $tmp295 = param1.value;
bool $tmp296 = ((int32_t) $tmp294) == ((int32_t) $tmp295);
frost$core$Bit $tmp297 = (frost$core$Bit) {$tmp296};
return $tmp297;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:469
int16_t $tmp298 = param0.value;
uint16_t $tmp299 = param1.value;
bool $tmp300 = ((int32_t) $tmp298) == ((int32_t) $tmp299);
frost$core$Bit $tmp301 = (frost$core$Bit) {$tmp300};
return $tmp301;

}
frost$core$Bit frost$core$Int16$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:475
int16_t $tmp302 = param0.value;
uint32_t $tmp303 = param1.value;
bool $tmp304 = ((int64_t) $tmp302) == ((int64_t) $tmp303);
frost$core$Bit $tmp305 = (frost$core$Bit) {$tmp304};
return $tmp305;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:481
int16_t $tmp306 = param0.value;
int8_t $tmp307 = param1.value;
bool $tmp308 = $tmp306 != ((int16_t) $tmp307);
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
return $tmp309;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:488
int16_t $tmp310 = param0.value;
int16_t $tmp311 = param1.value;
bool $tmp312 = $tmp310 != $tmp311;
frost$core$Bit $tmp313 = (frost$core$Bit) {$tmp312};
return $tmp313;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:494
int16_t $tmp314 = param0.value;
int32_t $tmp315 = param1.value;
bool $tmp316 = ((int32_t) $tmp314) != $tmp315;
frost$core$Bit $tmp317 = (frost$core$Bit) {$tmp316};
return $tmp317;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:500
int16_t $tmp318 = param0.value;
int64_t $tmp319 = param1.value;
bool $tmp320 = ((int64_t) $tmp318) != $tmp319;
frost$core$Bit $tmp321 = (frost$core$Bit) {$tmp320};
return $tmp321;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:506
int16_t $tmp322 = param0.value;
uint8_t $tmp323 = param1.value;
bool $tmp324 = ((int32_t) $tmp322) != ((int32_t) $tmp323);
frost$core$Bit $tmp325 = (frost$core$Bit) {$tmp324};
return $tmp325;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:512
int16_t $tmp326 = param0.value;
uint16_t $tmp327 = param1.value;
bool $tmp328 = ((int32_t) $tmp326) != ((int32_t) $tmp327);
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
return $tmp329;

}
frost$core$Bit frost$core$Int16$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:518
int16_t $tmp330 = param0.value;
uint32_t $tmp331 = param1.value;
bool $tmp332 = ((int64_t) $tmp330) != ((int64_t) $tmp331);
frost$core$Bit $tmp333 = (frost$core$Bit) {$tmp332};
return $tmp333;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:524
int16_t $tmp334 = param0.value;
int8_t $tmp335 = param1.value;
bool $tmp336 = $tmp334 < ((int16_t) $tmp335);
frost$core$Bit $tmp337 = (frost$core$Bit) {$tmp336};
return $tmp337;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:531
int16_t $tmp338 = param0.value;
int16_t $tmp339 = param1.value;
bool $tmp340 = $tmp338 < $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
return $tmp341;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:537
int16_t $tmp342 = param0.value;
int32_t $tmp343 = param1.value;
bool $tmp344 = ((int32_t) $tmp342) < $tmp343;
frost$core$Bit $tmp345 = (frost$core$Bit) {$tmp344};
return $tmp345;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:543
int16_t $tmp346 = param0.value;
int64_t $tmp347 = param1.value;
bool $tmp348 = ((int64_t) $tmp346) < $tmp347;
frost$core$Bit $tmp349 = (frost$core$Bit) {$tmp348};
return $tmp349;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:549
int16_t $tmp350 = param0.value;
uint8_t $tmp351 = param1.value;
bool $tmp352 = ((int32_t) $tmp350) < ((int32_t) $tmp351);
frost$core$Bit $tmp353 = (frost$core$Bit) {$tmp352};
return $tmp353;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:555
int16_t $tmp354 = param0.value;
uint16_t $tmp355 = param1.value;
bool $tmp356 = ((int32_t) $tmp354) < ((int32_t) $tmp355);
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
return $tmp357;

}
frost$core$Bit frost$core$Int16$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:561
int16_t $tmp358 = param0.value;
uint32_t $tmp359 = param1.value;
bool $tmp360 = ((int64_t) $tmp358) < ((int64_t) $tmp359);
frost$core$Bit $tmp361 = (frost$core$Bit) {$tmp360};
return $tmp361;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:567
int16_t $tmp362 = param0.value;
int8_t $tmp363 = param1.value;
bool $tmp364 = $tmp362 > ((int16_t) $tmp363);
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
return $tmp365;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:574
int16_t $tmp366 = param0.value;
int16_t $tmp367 = param1.value;
bool $tmp368 = $tmp366 > $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
return $tmp369;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:580
int16_t $tmp370 = param0.value;
int32_t $tmp371 = param1.value;
bool $tmp372 = ((int32_t) $tmp370) > $tmp371;
frost$core$Bit $tmp373 = (frost$core$Bit) {$tmp372};
return $tmp373;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:586
int16_t $tmp374 = param0.value;
int64_t $tmp375 = param1.value;
bool $tmp376 = ((int64_t) $tmp374) > $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
return $tmp377;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:592
int16_t $tmp378 = param0.value;
uint8_t $tmp379 = param1.value;
bool $tmp380 = ((int32_t) $tmp378) > ((int32_t) $tmp379);
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
return $tmp381;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:598
int16_t $tmp382 = param0.value;
uint16_t $tmp383 = param1.value;
bool $tmp384 = ((int32_t) $tmp382) > ((int32_t) $tmp383);
frost$core$Bit $tmp385 = (frost$core$Bit) {$tmp384};
return $tmp385;

}
frost$core$Bit frost$core$Int16$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:604
int16_t $tmp386 = param0.value;
uint32_t $tmp387 = param1.value;
bool $tmp388 = ((int64_t) $tmp386) > ((int64_t) $tmp387);
frost$core$Bit $tmp389 = (frost$core$Bit) {$tmp388};
return $tmp389;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:610
int16_t $tmp390 = param0.value;
int8_t $tmp391 = param1.value;
bool $tmp392 = $tmp390 >= ((int16_t) $tmp391);
frost$core$Bit $tmp393 = (frost$core$Bit) {$tmp392};
return $tmp393;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:617
int16_t $tmp394 = param0.value;
int16_t $tmp395 = param1.value;
bool $tmp396 = $tmp394 >= $tmp395;
frost$core$Bit $tmp397 = (frost$core$Bit) {$tmp396};
return $tmp397;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:623
int16_t $tmp398 = param0.value;
int32_t $tmp399 = param1.value;
bool $tmp400 = ((int32_t) $tmp398) >= $tmp399;
frost$core$Bit $tmp401 = (frost$core$Bit) {$tmp400};
return $tmp401;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:629
int16_t $tmp402 = param0.value;
int64_t $tmp403 = param1.value;
bool $tmp404 = ((int64_t) $tmp402) >= $tmp403;
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404};
return $tmp405;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:635
int16_t $tmp406 = param0.value;
uint8_t $tmp407 = param1.value;
bool $tmp408 = ((int32_t) $tmp406) >= ((int32_t) $tmp407);
frost$core$Bit $tmp409 = (frost$core$Bit) {$tmp408};
return $tmp409;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:641
int16_t $tmp410 = param0.value;
uint16_t $tmp411 = param1.value;
bool $tmp412 = ((int32_t) $tmp410) >= ((int32_t) $tmp411);
frost$core$Bit $tmp413 = (frost$core$Bit) {$tmp412};
return $tmp413;

}
frost$core$Bit frost$core$Int16$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:647
int16_t $tmp414 = param0.value;
uint32_t $tmp415 = param1.value;
bool $tmp416 = ((int64_t) $tmp414) >= ((int64_t) $tmp415);
frost$core$Bit $tmp417 = (frost$core$Bit) {$tmp416};
return $tmp417;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:653
int16_t $tmp418 = param0.value;
int8_t $tmp419 = param1.value;
bool $tmp420 = $tmp418 <= ((int16_t) $tmp419);
frost$core$Bit $tmp421 = (frost$core$Bit) {$tmp420};
return $tmp421;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:660
int16_t $tmp422 = param0.value;
int16_t $tmp423 = param1.value;
bool $tmp424 = $tmp422 <= $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
return $tmp425;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:666
int16_t $tmp426 = param0.value;
int32_t $tmp427 = param1.value;
bool $tmp428 = ((int32_t) $tmp426) <= $tmp427;
frost$core$Bit $tmp429 = (frost$core$Bit) {$tmp428};
return $tmp429;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:672
int16_t $tmp430 = param0.value;
int64_t $tmp431 = param1.value;
bool $tmp432 = ((int64_t) $tmp430) <= $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
return $tmp433;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:678
int16_t $tmp434 = param0.value;
uint8_t $tmp435 = param1.value;
bool $tmp436 = ((int32_t) $tmp434) <= ((int32_t) $tmp435);
frost$core$Bit $tmp437 = (frost$core$Bit) {$tmp436};
return $tmp437;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:684
int16_t $tmp438 = param0.value;
uint16_t $tmp439 = param1.value;
bool $tmp440 = ((int32_t) $tmp438) <= ((int32_t) $tmp439);
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
return $tmp441;

}
frost$core$Bit frost$core$Int16$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:690
int16_t $tmp442 = param0.value;
uint32_t $tmp443 = param1.value;
bool $tmp444 = ((int64_t) $tmp442) <= ((int64_t) $tmp443);
frost$core$Bit $tmp445 = (frost$core$Bit) {$tmp444};
return $tmp445;

}
frost$core$Int16 frost$core$Int16$get_abs$R$frost$core$Int16(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:696
frost$core$Int16 $tmp446 = (frost$core$Int16) {0u};
int16_t $tmp447 = param0.value;
int16_t $tmp448 = $tmp446.value;
bool $tmp449 = $tmp447 < $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:697
// begin inline call to function frost.core.Int16.-():frost.core.Int16 from Int16.frost:697:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:117
int16_t $tmp452 = param0.value;
int16_t $tmp453 = -$tmp452;
frost$core$Int16 $tmp454 = (frost$core$Int16) {$tmp453};
return $tmp454;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:699
return param0;

}
frost$core$Int16 frost$core$Int16$min$frost$core$Int8$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:705
int16_t $tmp455 = param0.value;
int8_t $tmp456 = param1.value;
bool $tmp457 = $tmp455 < ((int16_t) $tmp456);
frost$core$Bit $tmp458 = (frost$core$Bit) {$tmp457};
bool $tmp459 = $tmp458.value;
if ($tmp459) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:706
int16_t $tmp460 = param0.value;
frost$core$Int16 $tmp461 = (frost$core$Int16) {$tmp460};
return $tmp461;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:708
int8_t $tmp462 = param1.value;
frost$core$Int16 $tmp463 = (frost$core$Int16) {((int16_t) $tmp462)};
return $tmp463;

}
frost$core$Int16 frost$core$Int16$min$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:714
int16_t $tmp464 = param0.value;
int16_t $tmp465 = param1.value;
bool $tmp466 = $tmp464 < $tmp465;
frost$core$Bit $tmp467 = (frost$core$Bit) {$tmp466};
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:715
int16_t $tmp469 = param0.value;
frost$core$Int16 $tmp470 = (frost$core$Int16) {$tmp469};
return $tmp470;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:717
int16_t $tmp471 = param1.value;
frost$core$Int16 $tmp472 = (frost$core$Int16) {$tmp471};
return $tmp472;

}
frost$core$Int32 frost$core$Int16$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:723
int16_t $tmp473 = param0.value;
int32_t $tmp474 = param1.value;
bool $tmp475 = ((int32_t) $tmp473) < $tmp474;
frost$core$Bit $tmp476 = (frost$core$Bit) {$tmp475};
bool $tmp477 = $tmp476.value;
if ($tmp477) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:724
int16_t $tmp478 = param0.value;
frost$core$Int32 $tmp479 = (frost$core$Int32) {((int32_t) $tmp478)};
return $tmp479;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:726
int32_t $tmp480 = param1.value;
frost$core$Int32 $tmp481 = (frost$core$Int32) {$tmp480};
return $tmp481;

}
frost$core$Int64 frost$core$Int16$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:732
int16_t $tmp482 = param0.value;
int64_t $tmp483 = param1.value;
bool $tmp484 = ((int64_t) $tmp482) < $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:733
int16_t $tmp487 = param0.value;
frost$core$Int64 $tmp488 = (frost$core$Int64) {((int64_t) $tmp487)};
return $tmp488;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:735
int64_t $tmp489 = param1.value;
frost$core$Int64 $tmp490 = (frost$core$Int64) {$tmp489};
return $tmp490;

}
frost$core$Int32 frost$core$Int16$min$frost$core$UInt8$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:741
int16_t $tmp491 = param0.value;
uint8_t $tmp492 = param1.value;
bool $tmp493 = ((int32_t) $tmp491) < ((int32_t) $tmp492);
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:742
int16_t $tmp496 = param0.value;
frost$core$Int32 $tmp497 = (frost$core$Int32) {((int32_t) $tmp496)};
return $tmp497;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:744
uint8_t $tmp498 = param1.value;
frost$core$Int32 $tmp499 = (frost$core$Int32) {((int32_t) $tmp498)};
return $tmp499;

}
frost$core$Int32 frost$core$Int16$min$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:750
int16_t $tmp500 = param0.value;
uint16_t $tmp501 = param1.value;
bool $tmp502 = ((int32_t) $tmp500) < ((int32_t) $tmp501);
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:751
int16_t $tmp505 = param0.value;
frost$core$Int32 $tmp506 = (frost$core$Int32) {((int32_t) $tmp505)};
return $tmp506;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:753
uint16_t $tmp507 = param1.value;
frost$core$Int32 $tmp508 = (frost$core$Int32) {((int32_t) $tmp507)};
return $tmp508;

}
frost$core$Int64 frost$core$Int16$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:759
int16_t $tmp509 = param0.value;
uint32_t $tmp510 = param1.value;
bool $tmp511 = ((int64_t) $tmp509) < ((int64_t) $tmp510);
frost$core$Bit $tmp512 = (frost$core$Bit) {$tmp511};
bool $tmp513 = $tmp512.value;
if ($tmp513) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:760
int16_t $tmp514 = param0.value;
frost$core$Int64 $tmp515 = (frost$core$Int64) {((int64_t) $tmp514)};
return $tmp515;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:762
uint32_t $tmp516 = param1.value;
frost$core$Int64 $tmp517 = (frost$core$Int64) {((int64_t) $tmp516)};
return $tmp517;

}
frost$core$Int16 frost$core$Int16$max$frost$core$Int8$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:769
int16_t $tmp518 = param0.value;
int8_t $tmp519 = param1.value;
bool $tmp520 = $tmp518 > ((int16_t) $tmp519);
frost$core$Bit $tmp521 = (frost$core$Bit) {$tmp520};
bool $tmp522 = $tmp521.value;
if ($tmp522) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:770
int16_t $tmp523 = param0.value;
frost$core$Int16 $tmp524 = (frost$core$Int16) {$tmp523};
return $tmp524;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:772
int8_t $tmp525 = param1.value;
frost$core$Int16 $tmp526 = (frost$core$Int16) {((int16_t) $tmp525)};
return $tmp526;

}
frost$core$Int16 frost$core$Int16$max$frost$core$Int16$R$frost$core$Int16(frost$core$Int16 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:778
int16_t $tmp527 = param0.value;
int16_t $tmp528 = param1.value;
bool $tmp529 = $tmp527 > $tmp528;
frost$core$Bit $tmp530 = (frost$core$Bit) {$tmp529};
bool $tmp531 = $tmp530.value;
if ($tmp531) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:779
int16_t $tmp532 = param0.value;
frost$core$Int16 $tmp533 = (frost$core$Int16) {$tmp532};
return $tmp533;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:781
int16_t $tmp534 = param1.value;
frost$core$Int16 $tmp535 = (frost$core$Int16) {$tmp534};
return $tmp535;

}
frost$core$Int32 frost$core$Int16$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int16 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:787
int16_t $tmp536 = param0.value;
int32_t $tmp537 = param1.value;
bool $tmp538 = ((int32_t) $tmp536) > $tmp537;
frost$core$Bit $tmp539 = (frost$core$Bit) {$tmp538};
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:788
int16_t $tmp541 = param0.value;
frost$core$Int32 $tmp542 = (frost$core$Int32) {((int32_t) $tmp541)};
return $tmp542;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:790
int32_t $tmp543 = param1.value;
frost$core$Int32 $tmp544 = (frost$core$Int32) {$tmp543};
return $tmp544;

}
frost$core$Int64 frost$core$Int16$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int16 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:796
int16_t $tmp545 = param0.value;
int64_t $tmp546 = param1.value;
bool $tmp547 = ((int64_t) $tmp545) > $tmp546;
frost$core$Bit $tmp548 = (frost$core$Bit) {$tmp547};
bool $tmp549 = $tmp548.value;
if ($tmp549) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:797
int16_t $tmp550 = param0.value;
frost$core$Int64 $tmp551 = (frost$core$Int64) {((int64_t) $tmp550)};
return $tmp551;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:799
int64_t $tmp552 = param1.value;
frost$core$Int64 $tmp553 = (frost$core$Int64) {$tmp552};
return $tmp553;

}
frost$core$Int32 frost$core$Int16$max$frost$core$UInt8$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:805
int16_t $tmp554 = param0.value;
uint8_t $tmp555 = param1.value;
bool $tmp556 = ((int32_t) $tmp554) > ((int32_t) $tmp555);
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:806
int16_t $tmp559 = param0.value;
frost$core$Int32 $tmp560 = (frost$core$Int32) {((int32_t) $tmp559)};
return $tmp560;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:808
uint8_t $tmp561 = param1.value;
frost$core$Int32 $tmp562 = (frost$core$Int32) {((int32_t) $tmp561)};
return $tmp562;

}
frost$core$Int32 frost$core$Int16$max$frost$core$UInt16$R$frost$core$Int32(frost$core$Int16 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:814
int16_t $tmp563 = param0.value;
uint16_t $tmp564 = param1.value;
bool $tmp565 = ((int32_t) $tmp563) > ((int32_t) $tmp564);
frost$core$Bit $tmp566 = (frost$core$Bit) {$tmp565};
bool $tmp567 = $tmp566.value;
if ($tmp567) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:815
int16_t $tmp568 = param0.value;
frost$core$Int32 $tmp569 = (frost$core$Int32) {((int32_t) $tmp568)};
return $tmp569;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:817
uint16_t $tmp570 = param1.value;
frost$core$Int32 $tmp571 = (frost$core$Int32) {((int32_t) $tmp570)};
return $tmp571;

}
frost$core$Int64 frost$core$Int16$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int16 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:823
int16_t $tmp572 = param0.value;
uint32_t $tmp573 = param1.value;
bool $tmp574 = ((int64_t) $tmp572) > ((int64_t) $tmp573);
frost$core$Bit $tmp575 = (frost$core$Bit) {$tmp574};
bool $tmp576 = $tmp575.value;
if ($tmp576) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:824
int16_t $tmp577 = param0.value;
frost$core$Int64 $tmp578 = (frost$core$Int64) {((int64_t) $tmp577)};
return $tmp578;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:826
uint32_t $tmp579 = param1.value;
frost$core$Int64 $tmp580 = (frost$core$Int64) {((int64_t) $tmp579)};
return $tmp580;

}
frost$collections$ListView* frost$core$Int16$$IDX$frost$core$Range$LTfrost$core$Int16$GT$R$frost$collections$ListView$LTfrost$core$Int16$GT(frost$core$Range$LTfrost$core$Int16$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:832
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int16List));
org$frostlang$frost$Int16List* $tmp581 = (org$frostlang$frost$Int16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int16List$class);
frost$core$Int16 $tmp582 = param0.min;
frost$core$Int16 $tmp583 = param0.max;
frost$core$Int16 $tmp584 = (frost$core$Int16) {1u};
frost$core$Bit $tmp585 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT $tmp586 = frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$init$frost$core$Int16$frost$core$Int16$frost$core$Int16$frost$core$Bit($tmp582, $tmp583, $tmp584, $tmp585);
org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT($tmp581, $tmp586);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp581)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp581));
return ((frost$collections$ListView*) $tmp581);

}
frost$collections$ListView* frost$core$Int16$$IDX$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT$R$frost$collections$ListView$LTfrost$core$Int16$GT(frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:837
FROST_ASSERT(32 == sizeof(org$frostlang$frost$Int16List));
org$frostlang$frost$Int16List* $tmp587 = (org$frostlang$frost$Int16List*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$Int16List$class);
org$frostlang$frost$Int16List$init$frost$core$SteppedRange$LTfrost$core$Int16$Cfrost$core$Int16$GT($tmp587, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp587)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp587));
return ((frost$collections$ListView*) $tmp587);

}
frost$core$Bit frost$core$Int16$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int16 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp588 = (frost$core$Int64) {0u};
int64_t $tmp589 = param1.value;
int64_t $tmp590 = $tmp588.value;
bool $tmp591 = $tmp589 >= $tmp590;
frost$core$Bit $tmp592 = (frost$core$Bit) {$tmp591};
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block3; else goto block2;
block3:;
frost$core$Int16$wrapper* $tmp594;
$tmp594 = (frost$core$Int16$wrapper*) frostObjectAlloc(18, (frost$core$Class*) &frost$core$Int16$wrapperclass);
$tmp594->value = param0;
ITable* $tmp595 = ((frost$collections$CollectionView*) $tmp594)->$class->itable;
while ($tmp595->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp595 = $tmp595->next;
}
$fn597 $tmp596 = $tmp595->methods[0];
frost$core$Int64 $tmp598 = $tmp596(((frost$collections$CollectionView*) $tmp594));
int64_t $tmp599 = param1.value;
int64_t $tmp600 = $tmp598.value;
bool $tmp601 = $tmp599 < $tmp600;
frost$core$Bit $tmp602 = (frost$core$Bit) {$tmp601};
bool $tmp603 = $tmp602.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp594)));
if ($tmp603) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp604 = (frost$core$Int64) {842u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s605, $tmp604, &$s606);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:843
frost$core$Int64 $tmp607 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from Int16.frost:843:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:209
int64_t $tmp608 = $tmp607.value;
int64_t $tmp609 = param1.value;
int64_t $tmp610 = $tmp608 << $tmp609;
frost$core$Int64 $tmp611 = (frost$core$Int64) {$tmp610};
// begin inline call to function frost.core.Int16.&&(other:frost.core.Int64):frost.core.Int64 from Int16.frost:843:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:310
int16_t $tmp612 = param0.value;
int64_t $tmp613 = $tmp611.value;
int64_t $tmp614 = ((int64_t) $tmp612) & $tmp613;
frost$core$Int64 $tmp615 = (frost$core$Int64) {$tmp614};
frost$core$Int64 $tmp616 = (frost$core$Int64) {0u};
int64_t $tmp617 = $tmp615.value;
int64_t $tmp618 = $tmp616.value;
bool $tmp619 = $tmp617 != $tmp618;
frost$core$Bit $tmp620 = (frost$core$Bit) {$tmp619};
return $tmp620;

}
frost$core$Int64 frost$core$Int16$get_count$R$frost$core$Int64(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:849
frost$core$Int64 $tmp621 = (frost$core$Int64) {16u};
return $tmp621;

}
frost$collections$Iterator* frost$core$Int16$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:859
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp622 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int16.get_asUInt64():frost.core.UInt64 from Int16.frost:859:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:926
int16_t $tmp623 = param0.value;
frost$core$UInt64 $tmp624 = (frost$core$UInt64) {((uint64_t) $tmp623)};
frost$core$UInt64 $tmp625 = (frost$core$UInt64) {32768u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp622, $tmp624, $tmp625);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp622)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp622));
return ((frost$collections$Iterator*) $tmp622);

}
frost$core$Int64 frost$core$Int16$get_hash$R$frost$core$Int64(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:864
int16_t $tmp626 = param0.value;
frost$core$Int64 $tmp627 = (frost$core$Int64) {((int64_t) $tmp626)};
return $tmp627;

}
frost$core$Int16$nullable frost$core$Int16$parse$frost$core$String$frost$core$Int64$R$frost$core$Int16$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp628 = (frost$core$Int64) {2u};
int64_t $tmp629 = param1.value;
int64_t $tmp630 = $tmp628.value;
bool $tmp631 = $tmp629 >= $tmp630;
frost$core$Bit $tmp632 = (frost$core$Bit) {$tmp631};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp634 = (frost$core$Int64) {36u};
int64_t $tmp635 = param1.value;
int64_t $tmp636 = $tmp634.value;
bool $tmp637 = $tmp635 <= $tmp636;
frost$core$Bit $tmp638 = (frost$core$Bit) {$tmp637};
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp640 = (frost$core$Int64) {870u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s641, $tmp640, &$s642);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:871
frost$core$Bit $tmp643 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s644);
bool $tmp645 = $tmp643.value;
if ($tmp645) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:872
frost$core$Int64 $tmp646 = (frost$core$Int64) {1u};
frost$core$Bit $tmp647 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp648 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp646, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp647);
frost$core$String* $tmp649 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp648);
frost$core$UInt64$nullable $tmp650 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp649, param1);
*(&local0) = $tmp650;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp649));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:873
frost$core$UInt64$nullable $tmp651 = *(&local0);
frost$core$Bit $tmp652 = (frost$core$Bit) {!$tmp651.nonnull};
bool $tmp653 = $tmp652.value;
if ($tmp653) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:874
return ((frost$core$Int16$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:876
frost$core$UInt64$nullable $tmp654 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt16():frost.core.Int16 from Int16.frost:876:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:488
uint64_t $tmp655 = ((frost$core$UInt64) $tmp654.value).value;
frost$core$Int16 $tmp656 = (frost$core$Int16) {((int16_t) $tmp655)};
// begin inline call to function frost.core.Int16.-():frost.core.Int16 from Int16.frost:876:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:117
int16_t $tmp657 = $tmp656.value;
int16_t $tmp658 = -$tmp657;
frost$core$Int16 $tmp659 = (frost$core$Int16) {$tmp658};
return ((frost$core$Int16$nullable) { $tmp659, true });
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:879
frost$core$UInt64$nullable $tmp660 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp660;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:880
frost$core$UInt64$nullable $tmp661 = *(&local1);
frost$core$Bit $tmp662 = (frost$core$Bit) {!$tmp661.nonnull};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:881
return ((frost$core$Int16$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:883
frost$core$UInt64$nullable $tmp664 = *(&local1);
// begin inline call to function frost.core.UInt64.get_asInt16():frost.core.Int16 from Int16.frost:883:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:488
uint64_t $tmp665 = ((frost$core$UInt64) $tmp664.value).value;
frost$core$Int16 $tmp666 = (frost$core$Int16) {((int16_t) $tmp665)};
return ((frost$core$Int16$nullable) { $tmp666, true });
block5:;
goto block14;
block14:;

}
frost$core$Int8 frost$core$Int16$get_asInt8$R$frost$core$Int8(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:890
int16_t $tmp667 = param0.value;
frost$core$Int8 $tmp668 = (frost$core$Int8) {((int8_t) $tmp667)};
return $tmp668;

}
frost$core$Int32 frost$core$Int16$get_asInt32$R$frost$core$Int32(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:896
int16_t $tmp669 = param0.value;
frost$core$Int32 $tmp670 = (frost$core$Int32) {((int32_t) $tmp669)};
return $tmp670;

}
frost$core$Int64 frost$core$Int16$get_asInt64$R$frost$core$Int64(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:902
int16_t $tmp671 = param0.value;
frost$core$Int64 $tmp672 = (frost$core$Int64) {((int64_t) $tmp671)};
return $tmp672;

}
frost$core$UInt8 frost$core$Int16$get_asUInt8$R$frost$core$UInt8(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:908
int16_t $tmp673 = param0.value;
frost$core$UInt8 $tmp674 = (frost$core$UInt8) {((uint8_t) $tmp673)};
return $tmp674;

}
frost$core$UInt16 frost$core$Int16$get_asUInt16$R$frost$core$UInt16(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:914
int16_t $tmp675 = param0.value;
frost$core$UInt16 $tmp676 = (frost$core$UInt16) {((uint16_t) $tmp675)};
return $tmp676;

}
frost$core$UInt32 frost$core$Int16$get_asUInt32$R$frost$core$UInt32(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:920
int16_t $tmp677 = param0.value;
frost$core$UInt32 $tmp678 = (frost$core$UInt32) {((uint32_t) $tmp677)};
return $tmp678;

}
frost$core$UInt64 frost$core$Int16$get_asUInt64$R$frost$core$UInt64(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:926
int16_t $tmp679 = param0.value;
frost$core$UInt64 $tmp680 = (frost$core$UInt64) {((uint64_t) $tmp679)};
return $tmp680;

}
frost$core$Real32 frost$core$Int16$get_asReal32$R$frost$core$Real32(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:932
int16_t $tmp681 = param0.value;
frost$core$Real32 $tmp682 = (frost$core$Real32) {((float) $tmp681)};
return $tmp682;

}
frost$core$Real64 frost$core$Int16$get_asReal64$R$frost$core$Real64(frost$core$Int16 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:938
int16_t $tmp683 = param0.value;
frost$core$Real64 $tmp684 = (frost$core$Real64) {((double) $tmp683)};
return $tmp684;

}
frost$core$String* frost$core$Int16$get_asString$R$frost$core$String(frost$core$Int16 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int16 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:944
frost$core$Int64 $tmp685 = (frost$core$Int64) {6u};
*(&local0) = $tmp685;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:945
frost$core$Int64 $tmp686 = *(&local0);
int64_t $tmp687 = $tmp686.value;
frost$core$Char8* $tmp688 = ((frost$core$Char8*) frostAlloc($tmp687 * 1));
*(&local1) = $tmp688;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:946
frost$core$Int64 $tmp689 = *(&local0);
frost$core$Int64 $tmp690 = (frost$core$Int64) {1u};
int64_t $tmp691 = $tmp689.value;
int64_t $tmp692 = $tmp690.value;
int64_t $tmp693 = $tmp691 - $tmp692;
frost$core$Int64 $tmp694 = (frost$core$Int64) {$tmp693};
*(&local2) = $tmp694;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:947
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:948
frost$core$Int16 $tmp695 = *(&local3);
frost$core$Int16 $tmp696 = (frost$core$Int16) {0u};
int16_t $tmp697 = $tmp695.value;
int16_t $tmp698 = $tmp696.value;
bool $tmp699 = $tmp697 >= $tmp698;
frost$core$Bit $tmp700 = (frost$core$Bit) {$tmp699};
bool $tmp701 = $tmp700.value;
if ($tmp701) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:949
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:950
frost$core$Char8* $tmp702 = *(&local1);
frost$core$Int64 $tmp703 = *(&local2);
frost$core$Int16 $tmp704 = *(&local3);
frost$core$Int16 $tmp705 = (frost$core$Int16) {10u};
// begin inline call to function frost.core.Int16.%(other:frost.core.Int16):frost.core.Int32 from Int16.frost:950:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:193
int16_t $tmp706 = $tmp704.value;
int16_t $tmp707 = $tmp705.value;
int32_t $tmp708 = ((int32_t) $tmp706) % ((int32_t) $tmp707);
frost$core$Int32 $tmp709 = (frost$core$Int32) {$tmp708};
frost$core$Int32 $tmp710 = (frost$core$Int32) {48u};
int32_t $tmp711 = $tmp709.value;
int32_t $tmp712 = $tmp710.value;
int32_t $tmp713 = $tmp711 + $tmp712;
frost$core$Int32 $tmp714 = (frost$core$Int32) {$tmp713};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int16.frost:950:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:774
int32_t $tmp715 = $tmp714.value;
frost$core$UInt8 $tmp716 = (frost$core$UInt8) {((uint8_t) $tmp715)};
frost$core$Char8 $tmp717 = frost$core$Char8$init$frost$core$UInt8($tmp716);
int64_t $tmp718 = $tmp703.value;
$tmp702[$tmp718] = $tmp717;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:951
frost$core$Int16 $tmp719 = *(&local3);
frost$core$Int32 $tmp720 = frost$core$Int32$init$frost$core$Int16($tmp719);
frost$core$Int32 $tmp721 = (frost$core$Int32) {10u};
int32_t $tmp722 = $tmp720.value;
int32_t $tmp723 = $tmp721.value;
int32_t $tmp724 = $tmp722 / $tmp723;
frost$core$Int32 $tmp725 = (frost$core$Int32) {$tmp724};
// begin inline call to function frost.core.Int32.get_asInt16():frost.core.Int16 from Int16.frost:951:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:762
int32_t $tmp726 = $tmp725.value;
frost$core$Int16 $tmp727 = (frost$core$Int16) {((int16_t) $tmp726)};
*(&local3) = $tmp727;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:952
frost$core$Int64 $tmp728 = *(&local2);
frost$core$Int64 $tmp729 = (frost$core$Int64) {1u};
int64_t $tmp730 = $tmp728.value;
int64_t $tmp731 = $tmp729.value;
int64_t $tmp732 = $tmp730 - $tmp731;
frost$core$Int64 $tmp733 = (frost$core$Int64) {$tmp732};
*(&local2) = $tmp733;
frost$core$Int16 $tmp734 = *(&local3);
frost$core$Int16 $tmp735 = (frost$core$Int16) {0u};
int16_t $tmp736 = $tmp734.value;
int16_t $tmp737 = $tmp735.value;
bool $tmp738 = $tmp736 > $tmp737;
frost$core$Bit $tmp739 = (frost$core$Bit) {$tmp738};
bool $tmp740 = $tmp739.value;
if ($tmp740) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:955
frost$core$Int64 $tmp741 = *(&local2);
frost$core$Int64 $tmp742 = (frost$core$Int64) {1u};
int64_t $tmp743 = $tmp741.value;
int64_t $tmp744 = $tmp742.value;
int64_t $tmp745 = $tmp743 + $tmp744;
frost$core$Int64 $tmp746 = (frost$core$Int64) {$tmp745};
*(&local2) = $tmp746;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:958
goto block10;
block10:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:959
frost$core$Char8* $tmp747 = *(&local1);
frost$core$Int64 $tmp748 = *(&local2);
frost$core$Int32 $tmp749 = (frost$core$Int32) {48u};
frost$core$Int16 $tmp750 = *(&local3);
frost$core$Int16 $tmp751 = (frost$core$Int16) {10u};
// begin inline call to function frost.core.Int16.%(other:frost.core.Int16):frost.core.Int32 from Int16.frost:959:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:193
int16_t $tmp752 = $tmp750.value;
int16_t $tmp753 = $tmp751.value;
int32_t $tmp754 = ((int32_t) $tmp752) % ((int32_t) $tmp753);
frost$core$Int32 $tmp755 = (frost$core$Int32) {$tmp754};
int32_t $tmp756 = $tmp749.value;
int32_t $tmp757 = $tmp755.value;
int32_t $tmp758 = $tmp756 - $tmp757;
frost$core$Int32 $tmp759 = (frost$core$Int32) {$tmp758};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int16.frost:959:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:774
int32_t $tmp760 = $tmp759.value;
frost$core$UInt8 $tmp761 = (frost$core$UInt8) {((uint8_t) $tmp760)};
frost$core$Char8 $tmp762 = frost$core$Char8$init$frost$core$UInt8($tmp761);
int64_t $tmp763 = $tmp748.value;
$tmp747[$tmp763] = $tmp762;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:960
frost$core$Int16 $tmp764 = *(&local3);
frost$core$Int32 $tmp765 = frost$core$Int32$init$frost$core$Int16($tmp764);
frost$core$Int32 $tmp766 = (frost$core$Int32) {10u};
int32_t $tmp767 = $tmp765.value;
int32_t $tmp768 = $tmp766.value;
int32_t $tmp769 = $tmp767 / $tmp768;
frost$core$Int32 $tmp770 = (frost$core$Int32) {$tmp769};
// begin inline call to function frost.core.Int32.get_asInt16():frost.core.Int16 from Int16.frost:960:39
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:762
int32_t $tmp771 = $tmp770.value;
frost$core$Int16 $tmp772 = (frost$core$Int16) {((int16_t) $tmp771)};
*(&local3) = $tmp772;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:961
frost$core$Int64 $tmp773 = *(&local2);
frost$core$Int64 $tmp774 = (frost$core$Int64) {1u};
int64_t $tmp775 = $tmp773.value;
int64_t $tmp776 = $tmp774.value;
int64_t $tmp777 = $tmp775 - $tmp776;
frost$core$Int64 $tmp778 = (frost$core$Int64) {$tmp777};
*(&local2) = $tmp778;
frost$core$Int16 $tmp779 = *(&local3);
frost$core$Int16 $tmp780 = (frost$core$Int16) {0u};
int16_t $tmp781 = $tmp779.value;
int16_t $tmp782 = $tmp780.value;
bool $tmp783 = $tmp781 < $tmp782;
frost$core$Bit $tmp784 = (frost$core$Bit) {$tmp783};
bool $tmp785 = $tmp784.value;
if ($tmp785) goto block10; else goto block12;
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:964
frost$core$Char8* $tmp786 = *(&local1);
frost$core$Int64 $tmp787 = *(&local2);
frost$core$UInt8 $tmp788 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp789 = frost$core$Char8$init$frost$core$UInt8($tmp788);
int64_t $tmp790 = $tmp787.value;
$tmp786[$tmp790] = $tmp789;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:966
frost$core$Int64 $tmp791 = *(&local0);
frost$core$Int64 $tmp792 = *(&local2);
int64_t $tmp793 = $tmp791.value;
int64_t $tmp794 = $tmp792.value;
int64_t $tmp795 = $tmp793 - $tmp794;
frost$core$Int64 $tmp796 = (frost$core$Int64) {$tmp795};
*(&local4) = $tmp796;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:967
frost$core$Int64 $tmp797 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp798 = *(&local4);
frost$core$Bit $tmp799 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp800 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp797, $tmp798, $tmp799);
frost$core$Int64 $tmp801 = $tmp800.min;
*(&local5) = $tmp801;
frost$core$Int64 $tmp802 = $tmp800.max;
frost$core$Bit $tmp803 = $tmp800.inclusive;
bool $tmp804 = $tmp803.value;
frost$core$Int64 $tmp805 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp806 = $tmp805.value;
frost$core$UInt64 $tmp807 = (frost$core$UInt64) {((uint64_t) $tmp806)};
if ($tmp804) goto block20; else goto block21;
block20:;
int64_t $tmp808 = $tmp801.value;
int64_t $tmp809 = $tmp802.value;
bool $tmp810 = $tmp808 <= $tmp809;
frost$core$Bit $tmp811 = (frost$core$Bit) {$tmp810};
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block17; else goto block18;
block21:;
int64_t $tmp813 = $tmp801.value;
int64_t $tmp814 = $tmp802.value;
bool $tmp815 = $tmp813 < $tmp814;
frost$core$Bit $tmp816 = (frost$core$Bit) {$tmp815};
bool $tmp817 = $tmp816.value;
if ($tmp817) goto block17; else goto block18;
block17:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:968
frost$core$Char8* $tmp818 = *(&local1);
frost$core$Int64 $tmp819 = *(&local5);
frost$core$Char8* $tmp820 = *(&local1);
frost$core$Int64 $tmp821 = *(&local5);
frost$core$Int64 $tmp822 = *(&local2);
int64_t $tmp823 = $tmp821.value;
int64_t $tmp824 = $tmp822.value;
int64_t $tmp825 = $tmp823 + $tmp824;
frost$core$Int64 $tmp826 = (frost$core$Int64) {$tmp825};
int64_t $tmp827 = $tmp826.value;
frost$core$Char8 $tmp828 = $tmp820[$tmp827];
int64_t $tmp829 = $tmp819.value;
$tmp818[$tmp829] = $tmp828;
frost$core$Int64 $tmp830 = *(&local5);
int64_t $tmp831 = $tmp802.value;
int64_t $tmp832 = $tmp830.value;
int64_t $tmp833 = $tmp831 - $tmp832;
frost$core$Int64 $tmp834 = (frost$core$Int64) {$tmp833};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp835 = $tmp834.value;
frost$core$UInt64 $tmp836 = (frost$core$UInt64) {((uint64_t) $tmp835)};
if ($tmp804) goto block24; else goto block25;
block24:;
uint64_t $tmp837 = $tmp836.value;
uint64_t $tmp838 = $tmp807.value;
bool $tmp839 = $tmp837 >= $tmp838;
frost$core$Bit $tmp840 = (frost$core$Bit) {$tmp839};
bool $tmp841 = $tmp840.value;
if ($tmp841) goto block22; else goto block18;
block25:;
uint64_t $tmp842 = $tmp836.value;
uint64_t $tmp843 = $tmp807.value;
bool $tmp844 = $tmp842 > $tmp843;
frost$core$Bit $tmp845 = (frost$core$Bit) {$tmp844};
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block22; else goto block18;
block22:;
int64_t $tmp847 = $tmp830.value;
int64_t $tmp848 = $tmp805.value;
int64_t $tmp849 = $tmp847 + $tmp848;
frost$core$Int64 $tmp850 = (frost$core$Int64) {$tmp849};
*(&local5) = $tmp850;
goto block17;
block18:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:970
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp851 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp852 = *(&local1);
frost$core$Int64 $tmp853 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp851, $tmp852, $tmp853);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp851));
return $tmp851;

}
frost$core$String* frost$core$Int16$format$frost$core$String$R$frost$core$String(frost$core$Int16 param0, frost$core$String* param1) {

frost$core$Int16 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:976
int16_t $tmp854 = param0.value;
bool $tmp855 = $tmp854 < 0u;
frost$core$Bit $tmp856 = (frost$core$Bit) {$tmp855};
// begin inline call to function frost.core.Int16.get_abs():frost.core.Int16 from Int16.frost:976:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:696
frost$core$Int16 $tmp857 = (frost$core$Int16) {0u};
int16_t $tmp858 = param0.value;
int16_t $tmp859 = $tmp857.value;
bool $tmp860 = $tmp858 < $tmp859;
frost$core$Bit $tmp861 = (frost$core$Bit) {$tmp860};
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:697
// begin inline call to function frost.core.Int16.-():frost.core.Int16 from Int16.frost:697:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:117
int16_t $tmp863 = param0.value;
int16_t $tmp864 = -$tmp863;
frost$core$Int16 $tmp865 = (frost$core$Int16) {$tmp864};
*(&local0) = $tmp865;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:699
*(&local0) = param0;
goto block1;
block1:;
frost$core$Int16 $tmp866 = *(&local0);
// begin inline call to function frost.core.Int16.get_asUInt64():frost.core.UInt64 from Int16.frost:976:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int16.frost:926
int16_t $tmp867 = $tmp866.value;
frost$core$UInt64 $tmp868 = (frost$core$UInt64) {((uint64_t) $tmp867)};
frost$core$UInt64 $tmp869 = (frost$core$UInt64) {65535u};
frost$core$String* $tmp870 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp856, $tmp868, $tmp869, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp870));
return $tmp870;

}
void frost$core$Int16$cleanup(frost$core$Int16 param0) {

return;

}

