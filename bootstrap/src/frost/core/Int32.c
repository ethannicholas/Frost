#include "frost/core/Int32.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Int64.h"
#include "frost/core/Object.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"
#include "frost/collections/ListView.h"
#include "frost/core/Bit.h"
#include "frost/core/Comparable.h"
#include "frost/core/Formattable.h"
#include "frost/core/Equatable.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real32.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Real64.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt64.h"
#include "frost/core/Range.LTfrost/core/Int32.GT.h"
#include "org/frostlang/frost/Int32List.h"
#include "frost/core/SteppedRange.LTfrost/core/Int32.Cfrost/core/Int32.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Int64 frost$core$Int32$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int32$get_count$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int32$get_hash$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int32$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int32$format$frost$core$String$R$frost$core$String(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int32$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Int32$get_asString$R$frost$core$String(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$SUB$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int32$$SUB$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real32 result = frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$BNOT$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int32$$BNOT$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$get_abs$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int32$get_abs$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int64 result = frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int64 result = frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int32 result = frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int32 result = frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Int64 result = frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Int64 result = frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Int64 result = frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int32$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int32$get_asInt8$R$frost$core$Int8(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int32$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int32$get_asInt16$R$frost$core$Int16(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int32$get_asInt64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Int32$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Int32$get_asUInt8$R$frost$core$UInt8(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Int32$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Int32$get_asUInt16$R$frost$core$UInt16(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Int32$get_asUInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Int32$get_asUInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int32$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Int32$get_asReal32$R$frost$core$Real32(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int32$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Int32$get_asReal64$R$frost$core$Real64(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Int32$cleanup$shim(frost$core$Object* p0) {
    frost$core$Int32$cleanup(((frost$core$Int32$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int32$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int32$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int32$_frost$collections$CollectionView, { frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int32$_frost$collections$Iterable, { frost$core$Int32$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[13]; } frost$core$Int32$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int32$_frost$collections$Key, { frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int32$_frost$collections$ListView, { frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int32$_frost$core$Comparable, { frost$core$Int32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int32$_frost$core$Formattable, { frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Int32$class_type frost$core$Int32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int32$_frost$core$Equatable, { frost$core$Int32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$SUB$R$frost$core$Int32$shim, frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int32$$BNOT$R$frost$core$Int32$shim, frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$get_abs$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$get_count$R$frost$core$Int64$shim, frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int32$get_hash$R$frost$core$Int64$shim, frost$core$Int32$get_asInt8$R$frost$core$Int8$shim, frost$core$Int32$get_asInt16$R$frost$core$Int16$shim, frost$core$Int32$get_asInt64$R$frost$core$Int64$shim, frost$core$Int32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int32$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int32$get_asReal32$R$frost$core$Real32$shim, frost$core$Int32$get_asReal64$R$frost$core$Real64$shim, frost$core$Int32$format$frost$core$String$R$frost$core$String$shim, frost$core$Int32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int32$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int32$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$CollectionView, { frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$Iterable, { frost$core$Int32$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[13]; } frost$core$Int32$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$Key, { frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$ListView, { frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Comparable, { frost$core$Int32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Formattable, { frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim} };

static frost$core$String $s3;
frost$core$Int32$wrapperclass_type frost$core$Int32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Equatable, { frost$core$Int32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn497)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s505 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -8642535932052240879, NULL };
static frost$core$String $s506 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -7344325607249503472, NULL };
static frost$core$String $s534 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -8642535932052240879, NULL };
static frost$core$String $s535 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f", 121, -8087126475298893784, NULL };
static frost$core$String $s537 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };

frost$core$Int32 frost$core$Int32$init$builtin_int32(int32_t param0) {

frost$core$Int32 local0;
// line 30
int32_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int32 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int32 frost$core$Int32$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int32 local0;
// line 36
int8_t $tmp6 = param0.value;
int32_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int32_t) $tmp6);
frost$core$Int32 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int32 frost$core$Int32$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Int32 local0;
// line 42
int16_t $tmp9 = param0.value;
int32_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int32_t) $tmp9);
frost$core$Int32 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int32 frost$core$Int32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int32 local0;
// line 48
uint8_t $tmp12 = param0.value;
int32_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((int32_t) $tmp12);
frost$core$Int32 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$Int32 frost$core$Int32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Int32 local0;
// line 54
uint16_t $tmp15 = param0.value;
int32_t* $tmp16 = &(&local0)->value;
*$tmp16 = ((int32_t) $tmp15);
frost$core$Int32 $tmp17 = *(&local0);
return $tmp17;

}
frost$core$Int32 frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 60
int32_t $tmp18 = param0.value;
int32_t $tmp19 = param1.value;
int32_t $tmp20 = $tmp18 + $tmp19;
frost$core$Int32 $tmp21 = frost$core$Int32$init$builtin_int32($tmp20);
return $tmp21;

}
frost$core$Int64 frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 66
int32_t $tmp22 = param0.value;
int64_t $tmp23 = param1.value;
int64_t $tmp24 = ((int64_t) $tmp22) + $tmp23;
frost$core$Int64 $tmp25 = frost$core$Int64$init$builtin_int64($tmp24);
return $tmp25;

}
frost$core$Int64 frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 72
int32_t $tmp26 = param0.value;
uint32_t $tmp27 = param1.value;
int64_t $tmp28 = ((int64_t) $tmp26) + ((int64_t) $tmp27);
frost$core$Int64 $tmp29 = frost$core$Int64$init$builtin_int64($tmp28);
return $tmp29;

}
frost$core$Int32 frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 78
int32_t $tmp30 = param0.value;
int32_t $tmp31 = param1.value;
int32_t $tmp32 = $tmp30 - $tmp31;
frost$core$Int32 $tmp33 = frost$core$Int32$init$builtin_int32($tmp32);
return $tmp33;

}
frost$core$Int64 frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 84
int32_t $tmp34 = param0.value;
int64_t $tmp35 = param1.value;
int64_t $tmp36 = ((int64_t) $tmp34) - $tmp35;
frost$core$Int64 $tmp37 = frost$core$Int64$init$builtin_int64($tmp36);
return $tmp37;

}
frost$core$Int64 frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 90
int32_t $tmp38 = param0.value;
uint32_t $tmp39 = param1.value;
int64_t $tmp40 = ((int64_t) $tmp38) - ((int64_t) $tmp39);
frost$core$Int64 $tmp41 = frost$core$Int64$init$builtin_int64($tmp40);
return $tmp41;

}
frost$core$Int32 frost$core$Int32$$SUB$R$frost$core$Int32(frost$core$Int32 param0) {

// line 95
int32_t $tmp42 = param0.value;
int32_t $tmp43 = -$tmp42;
frost$core$Int32 $tmp44 = (frost$core$Int32) {$tmp43};
return $tmp44;

}
frost$core$Int32 frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 101
int32_t $tmp45 = param0.value;
int32_t $tmp46 = param1.value;
int32_t $tmp47 = $tmp45 * $tmp46;
frost$core$Int32 $tmp48 = frost$core$Int32$init$builtin_int32($tmp47);
return $tmp48;

}
frost$core$Int64 frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 107
int32_t $tmp49 = param0.value;
int64_t $tmp50 = param1.value;
int64_t $tmp51 = ((int64_t) $tmp49) * $tmp50;
frost$core$Int64 $tmp52 = frost$core$Int64$init$builtin_int64($tmp51);
return $tmp52;

}
frost$core$Int64 frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 113
int32_t $tmp53 = param0.value;
uint32_t $tmp54 = param1.value;
int64_t $tmp55 = ((int64_t) $tmp53) * ((int64_t) $tmp54);
frost$core$Int64 $tmp56 = frost$core$Int64$init$builtin_int64($tmp55);
return $tmp56;

}
frost$core$Int32 frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 119
int32_t $tmp57 = param0.value;
int32_t $tmp58 = param1.value;
int32_t $tmp59 = $tmp57 / $tmp58;
frost$core$Int32 $tmp60 = frost$core$Int32$init$builtin_int32($tmp59);
return $tmp60;

}
frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 125
int32_t $tmp61 = param0.value;
int64_t $tmp62 = param1.value;
int64_t $tmp63 = ((int64_t) $tmp61) / $tmp62;
frost$core$Int64 $tmp64 = frost$core$Int64$init$builtin_int64($tmp63);
return $tmp64;

}
frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 131
int32_t $tmp65 = param0.value;
uint32_t $tmp66 = param1.value;
int64_t $tmp67 = ((int64_t) $tmp65) / ((int64_t) $tmp66);
frost$core$Int64 $tmp68 = frost$core$Int64$init$builtin_int64($tmp67);
return $tmp68;

}
frost$core$Int32 frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 137
int32_t $tmp69 = param0.value;
int32_t $tmp70 = param1.value;
int32_t $tmp71 = $tmp69 % $tmp70;
frost$core$Int32 $tmp72 = frost$core$Int32$init$builtin_int32($tmp71);
return $tmp72;

}
frost$core$Int64 frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 143
int32_t $tmp73 = param0.value;
int64_t $tmp74 = param1.value;
int64_t $tmp75 = ((int64_t) $tmp73) % $tmp74;
frost$core$Int64 $tmp76 = frost$core$Int64$init$builtin_int64($tmp75);
return $tmp76;

}
frost$core$Int64 frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 149
int32_t $tmp77 = param0.value;
uint32_t $tmp78 = param1.value;
int64_t $tmp79 = ((int64_t) $tmp77) % ((int64_t) $tmp78);
frost$core$Int64 $tmp80 = frost$core$Int64$init$builtin_int64($tmp79);
return $tmp80;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 155
int32_t $tmp81 = param0.value;
int8_t $tmp82 = param1.value;
float $tmp83 = ((float) $tmp81) / ((float) $tmp82);
frost$core$Real32 $tmp84 = frost$core$Real32$init$builtin_float32($tmp83);
return $tmp84;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 161
int32_t $tmp85 = param0.value;
int16_t $tmp86 = param1.value;
float $tmp87 = ((float) $tmp85) / ((float) $tmp86);
frost$core$Real32 $tmp88 = frost$core$Real32$init$builtin_float32($tmp87);
return $tmp88;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 167
int32_t $tmp89 = param0.value;
int32_t $tmp90 = param1.value;
float $tmp91 = ((float) $tmp89) / ((float) $tmp90);
frost$core$Real32 $tmp92 = frost$core$Real32$init$builtin_float32($tmp91);
return $tmp92;

}
frost$core$Real64 frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 173
int32_t $tmp93 = param0.value;
int64_t $tmp94 = param1.value;
double $tmp95 = ((double) $tmp93) / ((double) $tmp94);
frost$core$Real64 $tmp96 = frost$core$Real64$init$builtin_float64($tmp95);
return $tmp96;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 179
int32_t $tmp97 = param0.value;
uint8_t $tmp98 = param1.value;
float $tmp99 = ((float) $tmp97) / ((float) $tmp98);
frost$core$Real32 $tmp100 = frost$core$Real32$init$builtin_float32($tmp99);
return $tmp100;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 185
int32_t $tmp101 = param0.value;
uint16_t $tmp102 = param1.value;
float $tmp103 = ((float) $tmp101) / ((float) $tmp102);
frost$core$Real32 $tmp104 = frost$core$Real32$init$builtin_float32($tmp103);
return $tmp104;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 191
int32_t $tmp105 = param0.value;
uint32_t $tmp106 = param1.value;
float $tmp107 = ((float) $tmp105) / ((float) $tmp106);
frost$core$Real32 $tmp108 = frost$core$Real32$init$builtin_float32($tmp107);
return $tmp108;

}
frost$core$Real64 frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// line 197
int32_t $tmp109 = param0.value;
uint64_t $tmp110 = param1.value;
double $tmp111 = ((double) $tmp109) / ((double) $tmp110);
frost$core$Real64 $tmp112 = frost$core$Real64$init$builtin_float64($tmp111);
return $tmp112;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Real32 param1) {

// line 203
int32_t $tmp113 = param0.value;
float $tmp114 = param1.value;
float $tmp115 = ((float) $tmp113) / $tmp114;
frost$core$Real32 $tmp116 = frost$core$Real32$init$builtin_float32($tmp115);
return $tmp116;

}
frost$core$Real64 frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int32 param0, frost$core$Real64 param1) {

// line 209
int32_t $tmp117 = param0.value;
double $tmp118 = param1.value;
double $tmp119 = ((double) $tmp117) / $tmp118;
frost$core$Real64 $tmp120 = frost$core$Real64$init$builtin_float64($tmp119);
return $tmp120;

}
frost$core$Int32 frost$core$Int32$$BNOT$R$frost$core$Int32(frost$core$Int32 param0) {

// line 214
int32_t $tmp121 = param0.value;
int32_t $tmp122 = !$tmp121;
frost$core$Int32 $tmp123 = (frost$core$Int32) {$tmp122};
return $tmp123;

}
frost$core$Int32 frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 220
int32_t $tmp124 = param0.value;
int32_t $tmp125 = param1.value;
int32_t $tmp126 = $tmp124 & $tmp125;
frost$core$Int32 $tmp127 = frost$core$Int32$init$builtin_int32($tmp126);
return $tmp127;

}
frost$core$Int64 frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 226
int32_t $tmp128 = param0.value;
int64_t $tmp129 = param1.value;
int64_t $tmp130 = ((int64_t) $tmp128) & $tmp129;
frost$core$Int64 $tmp131 = frost$core$Int64$init$builtin_int64($tmp130);
return $tmp131;

}
frost$core$UInt32 frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 232
int32_t $tmp132 = param0.value;
uint32_t $tmp133 = param1.value;
uint32_t $tmp134 = ((uint32_t) $tmp132) & $tmp133;
frost$core$UInt32 $tmp135 = frost$core$UInt32$init$builtin_uint32($tmp134);
return $tmp135;

}
frost$core$UInt64 frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// line 238
int32_t $tmp136 = param0.value;
uint64_t $tmp137 = param1.value;
uint64_t $tmp138 = ((uint64_t) $tmp136) & $tmp137;
frost$core$UInt64 $tmp139 = frost$core$UInt64$init$builtin_uint64($tmp138);
return $tmp139;

}
frost$core$Int32 frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 244
int32_t $tmp140 = param0.value;
int32_t $tmp141 = param1.value;
int32_t $tmp142 = $tmp140 | $tmp141;
frost$core$Int32 $tmp143 = frost$core$Int32$init$builtin_int32($tmp142);
return $tmp143;

}
frost$core$Int64 frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 250
int32_t $tmp144 = param0.value;
int64_t $tmp145 = param1.value;
int64_t $tmp146 = ((int64_t) $tmp144) | $tmp145;
frost$core$Int64 $tmp147 = frost$core$Int64$init$builtin_int64($tmp146);
return $tmp147;

}
frost$core$UInt32 frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 256
int32_t $tmp148 = param0.value;
uint32_t $tmp149 = param1.value;
uint32_t $tmp150 = ((uint32_t) $tmp148) | $tmp149;
frost$core$UInt32 $tmp151 = frost$core$UInt32$init$builtin_uint32($tmp150);
return $tmp151;

}
frost$core$UInt64 frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// line 262
int32_t $tmp152 = param0.value;
uint64_t $tmp153 = param1.value;
uint64_t $tmp154 = ((uint64_t) $tmp152) | $tmp153;
frost$core$UInt64 $tmp155 = frost$core$UInt64$init$builtin_uint64($tmp154);
return $tmp155;

}
frost$core$Int32 frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 268
int32_t $tmp156 = param0.value;
int32_t $tmp157 = param1.value;
int32_t $tmp158 = $tmp156 ^ $tmp157;
frost$core$Int32 $tmp159 = frost$core$Int32$init$builtin_int32($tmp158);
return $tmp159;

}
frost$core$Int64 frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 274
int32_t $tmp160 = param0.value;
int64_t $tmp161 = param1.value;
int64_t $tmp162 = ((int64_t) $tmp160) ^ $tmp161;
frost$core$Int64 $tmp163 = frost$core$Int64$init$builtin_int64($tmp162);
return $tmp163;

}
frost$core$UInt32 frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 280
int32_t $tmp164 = param0.value;
uint32_t $tmp165 = param1.value;
uint32_t $tmp166 = ((uint32_t) $tmp164) ^ $tmp165;
frost$core$UInt32 $tmp167 = frost$core$UInt32$init$builtin_uint32($tmp166);
return $tmp167;

}
frost$core$UInt64 frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// line 286
int32_t $tmp168 = param0.value;
uint64_t $tmp169 = param1.value;
uint64_t $tmp170 = ((uint64_t) $tmp168) ^ $tmp169;
frost$core$UInt64 $tmp171 = frost$core$UInt64$init$builtin_uint64($tmp170);
return $tmp171;

}
frost$core$Int32 frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 292
int32_t $tmp172 = param0.value;
int32_t $tmp173 = param1.value;
int32_t $tmp174 = $tmp172 << $tmp173;
frost$core$Int32 $tmp175 = frost$core$Int32$init$builtin_int32($tmp174);
return $tmp175;

}
frost$core$Int32 frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 298
int32_t $tmp176 = param0.value;
int32_t $tmp177 = param1.value;
int32_t $tmp178 = $tmp176 >> $tmp177;
frost$core$Int32 $tmp179 = frost$core$Int32$init$builtin_int32($tmp178);
return $tmp179;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 304
int32_t $tmp180 = param0.value;
int8_t $tmp181 = param1.value;
bool $tmp182 = $tmp180 == ((int32_t) $tmp181);
frost$core$Bit $tmp183 = frost$core$Bit$init$builtin_bit($tmp182);
return $tmp183;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 310
int32_t $tmp184 = param0.value;
int16_t $tmp185 = param1.value;
bool $tmp186 = $tmp184 == ((int32_t) $tmp185);
frost$core$Bit $tmp187 = frost$core$Bit$init$builtin_bit($tmp186);
return $tmp187;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 317
int32_t $tmp188 = param0.value;
int32_t $tmp189 = param1.value;
bool $tmp190 = $tmp188 == $tmp189;
frost$core$Bit $tmp191 = frost$core$Bit$init$builtin_bit($tmp190);
return $tmp191;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 323
int32_t $tmp192 = param0.value;
int64_t $tmp193 = param1.value;
bool $tmp194 = ((int64_t) $tmp192) == $tmp193;
frost$core$Bit $tmp195 = frost$core$Bit$init$builtin_bit($tmp194);
return $tmp195;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 329
int32_t $tmp196 = param0.value;
uint8_t $tmp197 = param1.value;
bool $tmp198 = ((int64_t) $tmp196) == ((int64_t) $tmp197);
frost$core$Bit $tmp199 = frost$core$Bit$init$builtin_bit($tmp198);
return $tmp199;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 335
int32_t $tmp200 = param0.value;
uint16_t $tmp201 = param1.value;
bool $tmp202 = ((int64_t) $tmp200) == ((int64_t) $tmp201);
frost$core$Bit $tmp203 = frost$core$Bit$init$builtin_bit($tmp202);
return $tmp203;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 341
int32_t $tmp204 = param0.value;
uint32_t $tmp205 = param1.value;
bool $tmp206 = ((int64_t) $tmp204) == ((int64_t) $tmp205);
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit($tmp206);
return $tmp207;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 347
int32_t $tmp208 = param0.value;
int8_t $tmp209 = param1.value;
bool $tmp210 = $tmp208 != ((int32_t) $tmp209);
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit($tmp210);
return $tmp211;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 353
int32_t $tmp212 = param0.value;
int16_t $tmp213 = param1.value;
bool $tmp214 = $tmp212 != ((int32_t) $tmp213);
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit($tmp214);
return $tmp215;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 360
int32_t $tmp216 = param0.value;
int32_t $tmp217 = param1.value;
bool $tmp218 = $tmp216 != $tmp217;
frost$core$Bit $tmp219 = frost$core$Bit$init$builtin_bit($tmp218);
return $tmp219;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 366
int32_t $tmp220 = param0.value;
int64_t $tmp221 = param1.value;
bool $tmp222 = ((int64_t) $tmp220) != $tmp221;
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit($tmp222);
return $tmp223;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 372
int32_t $tmp224 = param0.value;
uint8_t $tmp225 = param1.value;
bool $tmp226 = ((int64_t) $tmp224) != ((int64_t) $tmp225);
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit($tmp226);
return $tmp227;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 378
int32_t $tmp228 = param0.value;
uint16_t $tmp229 = param1.value;
bool $tmp230 = ((int64_t) $tmp228) != ((int64_t) $tmp229);
frost$core$Bit $tmp231 = frost$core$Bit$init$builtin_bit($tmp230);
return $tmp231;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 384
int32_t $tmp232 = param0.value;
uint32_t $tmp233 = param1.value;
bool $tmp234 = ((int64_t) $tmp232) != ((int64_t) $tmp233);
frost$core$Bit $tmp235 = frost$core$Bit$init$builtin_bit($tmp234);
return $tmp235;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 390
int32_t $tmp236 = param0.value;
int8_t $tmp237 = param1.value;
bool $tmp238 = $tmp236 < ((int32_t) $tmp237);
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238);
return $tmp239;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 396
int32_t $tmp240 = param0.value;
int16_t $tmp241 = param1.value;
bool $tmp242 = $tmp240 < ((int32_t) $tmp241);
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit($tmp242);
return $tmp243;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 403
int32_t $tmp244 = param0.value;
int32_t $tmp245 = param1.value;
bool $tmp246 = $tmp244 < $tmp245;
frost$core$Bit $tmp247 = frost$core$Bit$init$builtin_bit($tmp246);
return $tmp247;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 409
int32_t $tmp248 = param0.value;
int64_t $tmp249 = param1.value;
bool $tmp250 = ((int64_t) $tmp248) < $tmp249;
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit($tmp250);
return $tmp251;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 415
int32_t $tmp252 = param0.value;
uint8_t $tmp253 = param1.value;
bool $tmp254 = ((int64_t) $tmp252) < ((int64_t) $tmp253);
frost$core$Bit $tmp255 = frost$core$Bit$init$builtin_bit($tmp254);
return $tmp255;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 421
int32_t $tmp256 = param0.value;
uint16_t $tmp257 = param1.value;
bool $tmp258 = ((int64_t) $tmp256) < ((int64_t) $tmp257);
frost$core$Bit $tmp259 = frost$core$Bit$init$builtin_bit($tmp258);
return $tmp259;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 427
int32_t $tmp260 = param0.value;
uint32_t $tmp261 = param1.value;
bool $tmp262 = ((int64_t) $tmp260) < ((int64_t) $tmp261);
frost$core$Bit $tmp263 = frost$core$Bit$init$builtin_bit($tmp262);
return $tmp263;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 433
int32_t $tmp264 = param0.value;
int8_t $tmp265 = param1.value;
bool $tmp266 = $tmp264 > ((int32_t) $tmp265);
frost$core$Bit $tmp267 = frost$core$Bit$init$builtin_bit($tmp266);
return $tmp267;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 439
int32_t $tmp268 = param0.value;
int16_t $tmp269 = param1.value;
bool $tmp270 = $tmp268 > ((int32_t) $tmp269);
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit($tmp270);
return $tmp271;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 446
int32_t $tmp272 = param0.value;
int32_t $tmp273 = param1.value;
bool $tmp274 = $tmp272 > $tmp273;
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit($tmp274);
return $tmp275;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 452
int32_t $tmp276 = param0.value;
int64_t $tmp277 = param1.value;
bool $tmp278 = ((int64_t) $tmp276) > $tmp277;
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit($tmp278);
return $tmp279;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 458
int32_t $tmp280 = param0.value;
uint8_t $tmp281 = param1.value;
bool $tmp282 = ((int64_t) $tmp280) > ((int64_t) $tmp281);
frost$core$Bit $tmp283 = frost$core$Bit$init$builtin_bit($tmp282);
return $tmp283;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 464
int32_t $tmp284 = param0.value;
uint16_t $tmp285 = param1.value;
bool $tmp286 = ((int64_t) $tmp284) > ((int64_t) $tmp285);
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit($tmp286);
return $tmp287;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 470
int32_t $tmp288 = param0.value;
uint32_t $tmp289 = param1.value;
bool $tmp290 = ((int64_t) $tmp288) > ((int64_t) $tmp289);
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit($tmp290);
return $tmp291;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 476
int32_t $tmp292 = param0.value;
int8_t $tmp293 = param1.value;
bool $tmp294 = $tmp292 >= ((int32_t) $tmp293);
frost$core$Bit $tmp295 = frost$core$Bit$init$builtin_bit($tmp294);
return $tmp295;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 482
int32_t $tmp296 = param0.value;
int16_t $tmp297 = param1.value;
bool $tmp298 = $tmp296 >= ((int32_t) $tmp297);
frost$core$Bit $tmp299 = frost$core$Bit$init$builtin_bit($tmp298);
return $tmp299;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 489
int32_t $tmp300 = param0.value;
int32_t $tmp301 = param1.value;
bool $tmp302 = $tmp300 >= $tmp301;
frost$core$Bit $tmp303 = frost$core$Bit$init$builtin_bit($tmp302);
return $tmp303;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 495
int32_t $tmp304 = param0.value;
int64_t $tmp305 = param1.value;
bool $tmp306 = ((int64_t) $tmp304) >= $tmp305;
frost$core$Bit $tmp307 = frost$core$Bit$init$builtin_bit($tmp306);
return $tmp307;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 501
int32_t $tmp308 = param0.value;
uint8_t $tmp309 = param1.value;
bool $tmp310 = ((int64_t) $tmp308) >= ((int64_t) $tmp309);
frost$core$Bit $tmp311 = frost$core$Bit$init$builtin_bit($tmp310);
return $tmp311;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 507
int32_t $tmp312 = param0.value;
uint16_t $tmp313 = param1.value;
bool $tmp314 = ((int64_t) $tmp312) >= ((int64_t) $tmp313);
frost$core$Bit $tmp315 = frost$core$Bit$init$builtin_bit($tmp314);
return $tmp315;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 513
int32_t $tmp316 = param0.value;
uint32_t $tmp317 = param1.value;
bool $tmp318 = ((int64_t) $tmp316) >= ((int64_t) $tmp317);
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit($tmp318);
return $tmp319;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 519
int32_t $tmp320 = param0.value;
int8_t $tmp321 = param1.value;
bool $tmp322 = $tmp320 <= ((int32_t) $tmp321);
frost$core$Bit $tmp323 = frost$core$Bit$init$builtin_bit($tmp322);
return $tmp323;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 525
int32_t $tmp324 = param0.value;
int16_t $tmp325 = param1.value;
bool $tmp326 = $tmp324 <= ((int32_t) $tmp325);
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit($tmp326);
return $tmp327;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 532
int32_t $tmp328 = param0.value;
int32_t $tmp329 = param1.value;
bool $tmp330 = $tmp328 <= $tmp329;
frost$core$Bit $tmp331 = frost$core$Bit$init$builtin_bit($tmp330);
return $tmp331;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 538
int32_t $tmp332 = param0.value;
int64_t $tmp333 = param1.value;
bool $tmp334 = ((int64_t) $tmp332) <= $tmp333;
frost$core$Bit $tmp335 = frost$core$Bit$init$builtin_bit($tmp334);
return $tmp335;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 544
int32_t $tmp336 = param0.value;
uint8_t $tmp337 = param1.value;
bool $tmp338 = ((int64_t) $tmp336) <= ((int64_t) $tmp337);
frost$core$Bit $tmp339 = frost$core$Bit$init$builtin_bit($tmp338);
return $tmp339;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 550
int32_t $tmp340 = param0.value;
uint16_t $tmp341 = param1.value;
bool $tmp342 = ((int64_t) $tmp340) <= ((int64_t) $tmp341);
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit($tmp342);
return $tmp343;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 556
int32_t $tmp344 = param0.value;
uint32_t $tmp345 = param1.value;
bool $tmp346 = ((int64_t) $tmp344) <= ((int64_t) $tmp345);
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit($tmp346);
return $tmp347;

}
frost$core$Int32 frost$core$Int32$get_abs$R$frost$core$Int32(frost$core$Int32 param0) {

// line 562
frost$core$Int32 $tmp348 = (frost$core$Int32) {0};
int32_t $tmp349 = param0.value;
int32_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 < $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block1; else goto block2;
block1:;
// line 563
frost$core$Int32 $tmp354 = frost$core$Int32$$SUB$R$frost$core$Int32(param0);
return $tmp354;
block2:;
// line 565
return param0;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 571
int32_t $tmp355 = param0.value;
int8_t $tmp356 = param1.value;
bool $tmp357 = $tmp355 < ((int32_t) $tmp356);
frost$core$Bit $tmp358 = frost$core$Bit$init$builtin_bit($tmp357);
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block1; else goto block2;
block1:;
// line 572
int32_t $tmp360 = param0.value;
frost$core$Int32 $tmp361 = frost$core$Int32$init$builtin_int32($tmp360);
return $tmp361;
block2:;
// line 574
int8_t $tmp362 = param1.value;
frost$core$Int32 $tmp363 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp362));
return $tmp363;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 580
int32_t $tmp364 = param0.value;
int16_t $tmp365 = param1.value;
bool $tmp366 = $tmp364 < ((int32_t) $tmp365);
frost$core$Bit $tmp367 = frost$core$Bit$init$builtin_bit($tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block1; else goto block2;
block1:;
// line 581
int32_t $tmp369 = param0.value;
frost$core$Int32 $tmp370 = frost$core$Int32$init$builtin_int32($tmp369);
return $tmp370;
block2:;
// line 583
int16_t $tmp371 = param1.value;
frost$core$Int32 $tmp372 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp371));
return $tmp372;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 589
int32_t $tmp373 = param0.value;
int32_t $tmp374 = param1.value;
bool $tmp375 = $tmp373 < $tmp374;
frost$core$Bit $tmp376 = frost$core$Bit$init$builtin_bit($tmp375);
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block1; else goto block2;
block1:;
// line 590
int32_t $tmp378 = param0.value;
frost$core$Int32 $tmp379 = frost$core$Int32$init$builtin_int32($tmp378);
return $tmp379;
block2:;
// line 592
int32_t $tmp380 = param1.value;
frost$core$Int32 $tmp381 = frost$core$Int32$init$builtin_int32($tmp380);
return $tmp381;

}
frost$core$Int64 frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 598
int32_t $tmp382 = param0.value;
int64_t $tmp383 = param1.value;
bool $tmp384 = ((int64_t) $tmp382) < $tmp383;
frost$core$Bit $tmp385 = frost$core$Bit$init$builtin_bit($tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block1; else goto block2;
block1:;
// line 599
int32_t $tmp387 = param0.value;
frost$core$Int64 $tmp388 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp387));
return $tmp388;
block2:;
// line 601
int64_t $tmp389 = param1.value;
frost$core$Int64 $tmp390 = frost$core$Int64$init$builtin_int64($tmp389);
return $tmp390;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 607
int32_t $tmp391 = param0.value;
uint8_t $tmp392 = param1.value;
bool $tmp393 = ((int64_t) $tmp391) < ((int64_t) $tmp392);
frost$core$Bit $tmp394 = frost$core$Bit$init$builtin_bit($tmp393);
bool $tmp395 = $tmp394.value;
if ($tmp395) goto block1; else goto block2;
block1:;
// line 608
int32_t $tmp396 = param0.value;
frost$core$Int64 $tmp397 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp396));
return $tmp397;
block2:;
// line 610
uint8_t $tmp398 = param1.value;
frost$core$Int64 $tmp399 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp398));
return $tmp399;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 616
int32_t $tmp400 = param0.value;
uint16_t $tmp401 = param1.value;
bool $tmp402 = ((int64_t) $tmp400) < ((int64_t) $tmp401);
frost$core$Bit $tmp403 = frost$core$Bit$init$builtin_bit($tmp402);
bool $tmp404 = $tmp403.value;
if ($tmp404) goto block1; else goto block2;
block1:;
// line 617
int32_t $tmp405 = param0.value;
frost$core$Int64 $tmp406 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp405));
return $tmp406;
block2:;
// line 619
uint16_t $tmp407 = param1.value;
frost$core$Int64 $tmp408 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp407));
return $tmp408;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 625
int32_t $tmp409 = param0.value;
uint32_t $tmp410 = param1.value;
bool $tmp411 = ((int64_t) $tmp409) < ((int64_t) $tmp410);
frost$core$Bit $tmp412 = frost$core$Bit$init$builtin_bit($tmp411);
bool $tmp413 = $tmp412.value;
if ($tmp413) goto block1; else goto block2;
block1:;
// line 626
int32_t $tmp414 = param0.value;
frost$core$Int64 $tmp415 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp414));
return $tmp415;
block2:;
// line 628
uint32_t $tmp416 = param1.value;
frost$core$Int64 $tmp417 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp416));
return $tmp417;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 635
int32_t $tmp418 = param0.value;
int8_t $tmp419 = param1.value;
bool $tmp420 = $tmp418 > ((int32_t) $tmp419);
frost$core$Bit $tmp421 = frost$core$Bit$init$builtin_bit($tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block1; else goto block2;
block1:;
// line 636
int32_t $tmp423 = param0.value;
frost$core$Int32 $tmp424 = frost$core$Int32$init$builtin_int32($tmp423);
return $tmp424;
block2:;
// line 638
int8_t $tmp425 = param1.value;
frost$core$Int32 $tmp426 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp425));
return $tmp426;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 644
int32_t $tmp427 = param0.value;
int16_t $tmp428 = param1.value;
bool $tmp429 = $tmp427 > ((int32_t) $tmp428);
frost$core$Bit $tmp430 = frost$core$Bit$init$builtin_bit($tmp429);
bool $tmp431 = $tmp430.value;
if ($tmp431) goto block1; else goto block2;
block1:;
// line 645
int32_t $tmp432 = param0.value;
frost$core$Int32 $tmp433 = frost$core$Int32$init$builtin_int32($tmp432);
return $tmp433;
block2:;
// line 647
int16_t $tmp434 = param1.value;
frost$core$Int32 $tmp435 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp434));
return $tmp435;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 653
int32_t $tmp436 = param0.value;
int32_t $tmp437 = param1.value;
bool $tmp438 = $tmp436 > $tmp437;
frost$core$Bit $tmp439 = frost$core$Bit$init$builtin_bit($tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block1; else goto block2;
block1:;
// line 654
int32_t $tmp441 = param0.value;
frost$core$Int32 $tmp442 = frost$core$Int32$init$builtin_int32($tmp441);
return $tmp442;
block2:;
// line 656
int32_t $tmp443 = param1.value;
frost$core$Int32 $tmp444 = frost$core$Int32$init$builtin_int32($tmp443);
return $tmp444;

}
frost$core$Int64 frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 662
int32_t $tmp445 = param0.value;
int64_t $tmp446 = param1.value;
bool $tmp447 = ((int64_t) $tmp445) > $tmp446;
frost$core$Bit $tmp448 = frost$core$Bit$init$builtin_bit($tmp447);
bool $tmp449 = $tmp448.value;
if ($tmp449) goto block1; else goto block2;
block1:;
// line 663
int32_t $tmp450 = param0.value;
frost$core$Int64 $tmp451 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp450));
return $tmp451;
block2:;
// line 665
int64_t $tmp452 = param1.value;
frost$core$Int64 $tmp453 = frost$core$Int64$init$builtin_int64($tmp452);
return $tmp453;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 671
int32_t $tmp454 = param0.value;
uint8_t $tmp455 = param1.value;
bool $tmp456 = ((int64_t) $tmp454) > ((int64_t) $tmp455);
frost$core$Bit $tmp457 = frost$core$Bit$init$builtin_bit($tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block1; else goto block2;
block1:;
// line 672
int32_t $tmp459 = param0.value;
frost$core$Int64 $tmp460 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp459));
return $tmp460;
block2:;
// line 674
uint8_t $tmp461 = param1.value;
frost$core$Int64 $tmp462 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp461));
return $tmp462;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 680
int32_t $tmp463 = param0.value;
uint16_t $tmp464 = param1.value;
bool $tmp465 = ((int64_t) $tmp463) > ((int64_t) $tmp464);
frost$core$Bit $tmp466 = frost$core$Bit$init$builtin_bit($tmp465);
bool $tmp467 = $tmp466.value;
if ($tmp467) goto block1; else goto block2;
block1:;
// line 681
int32_t $tmp468 = param0.value;
frost$core$Int64 $tmp469 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp468));
return $tmp469;
block2:;
// line 683
uint16_t $tmp470 = param1.value;
frost$core$Int64 $tmp471 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp470));
return $tmp471;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 689
int32_t $tmp472 = param0.value;
uint32_t $tmp473 = param1.value;
bool $tmp474 = ((int64_t) $tmp472) > ((int64_t) $tmp473);
frost$core$Bit $tmp475 = frost$core$Bit$init$builtin_bit($tmp474);
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block1; else goto block2;
block1:;
// line 690
int32_t $tmp477 = param0.value;
frost$core$Int64 $tmp478 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp477));
return $tmp478;
block2:;
// line 692
uint32_t $tmp479 = param1.value;
frost$core$Int64 $tmp480 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp479));
return $tmp480;

}
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$Range$LTfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$Range$LTfrost$core$Int32$GT param0) {

// line 698
FROST_ASSERT(40 == sizeof(org$frostlang$frost$Int32List));
org$frostlang$frost$Int32List* $tmp481 = (org$frostlang$frost$Int32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$Int32List$class);
frost$core$Int32 $tmp482 = param0.min;
frost$core$Int32 $tmp483 = param0.max;
frost$core$Int32 $tmp484 = (frost$core$Int32) {1};
frost$core$Bit $tmp485 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT $tmp486 = frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$init$frost$core$Int32$frost$core$Int32$frost$core$Int32$frost$core$Bit($tmp482, $tmp483, $tmp484, $tmp485);
org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT($tmp481, $tmp486);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp481)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp481));
return ((frost$collections$ListView*) $tmp481);

}
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT param0) {

// line 703
FROST_ASSERT(40 == sizeof(org$frostlang$frost$Int32List));
org$frostlang$frost$Int32List* $tmp487 = (org$frostlang$frost$Int32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$Int32List$class);
org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT($tmp487, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp487)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp487));
return ((frost$collections$ListView*) $tmp487);

}
frost$core$Bit frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp488 = (frost$core$Int64) {0};
int64_t $tmp489 = param1.value;
int64_t $tmp490 = $tmp488.value;
bool $tmp491 = $tmp489 >= $tmp490;
frost$core$Bit $tmp492 = (frost$core$Bit) {$tmp491};
bool $tmp493 = $tmp492.value;
if ($tmp493) goto block3; else goto block2;
block3:;
frost$core$Int32$wrapper* $tmp494;
$tmp494 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp494->value = param0;
ITable* $tmp495 = ((frost$collections$CollectionView*) $tmp494)->$class->itable;
while ($tmp495->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp495 = $tmp495->next;
}
$fn497 $tmp496 = $tmp495->methods[0];
frost$core$Int64 $tmp498 = $tmp496(((frost$collections$CollectionView*) $tmp494));
int64_t $tmp499 = param1.value;
int64_t $tmp500 = $tmp498.value;
bool $tmp501 = $tmp499 < $tmp500;
frost$core$Bit $tmp502 = (frost$core$Bit) {$tmp501};
bool $tmp503 = $tmp502.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp494)));
if ($tmp503) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp504 = (frost$core$Int64) {708};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s505, $tmp504, &$s506);
abort(); // unreachable
block1:;
// line 709
frost$core$Int64 $tmp507 = (frost$core$Int64) {1};
frost$core$Int64 $tmp508 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp507, param1);
frost$core$Int64 $tmp509 = frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp508);
frost$core$Int64 $tmp510 = (frost$core$Int64) {0};
int64_t $tmp511 = $tmp509.value;
int64_t $tmp512 = $tmp510.value;
bool $tmp513 = $tmp511 != $tmp512;
frost$core$Bit $tmp514 = (frost$core$Bit) {$tmp513};
return $tmp514;

}
frost$core$Int64 frost$core$Int32$get_count$R$frost$core$Int64(frost$core$Int32 param0) {

// line 715
frost$core$Int64 $tmp515 = (frost$core$Int64) {32};
return $tmp515;

}
frost$collections$Iterator* frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int32 param0) {

// line 720
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp516 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp517 = frost$core$Int32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp518 = (frost$core$UInt64) {2147483648};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp516, $tmp517, $tmp518);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp516)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp516));
return ((frost$collections$Iterator*) $tmp516);

}
frost$core$Int64 frost$core$Int32$get_hash$R$frost$core$Int64(frost$core$Int32 param0) {

// line 725
int32_t $tmp519 = param0.value;
frost$core$Int64 $tmp520 = (frost$core$Int64) {((int64_t) $tmp519)};
return $tmp520;

}
frost$core$Int32$nullable frost$core$Int32$parse$frost$core$String$frost$core$Int64$R$frost$core$Int32$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp521 = (frost$core$Int64) {2};
int64_t $tmp522 = param1.value;
int64_t $tmp523 = $tmp521.value;
bool $tmp524 = $tmp522 >= $tmp523;
frost$core$Bit $tmp525 = (frost$core$Bit) {$tmp524};
bool $tmp526 = $tmp525.value;
if ($tmp526) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp527 = (frost$core$Int64) {36};
int64_t $tmp528 = param1.value;
int64_t $tmp529 = $tmp527.value;
bool $tmp530 = $tmp528 <= $tmp529;
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp533 = (frost$core$Int64) {731};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s534, $tmp533, &$s535);
abort(); // unreachable
block1:;
// line 732
frost$core$Bit $tmp536 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s537);
bool $tmp538 = $tmp536.value;
if ($tmp538) goto block4; else goto block6;
block4:;
// line 733
frost$core$Int64 $tmp539 = (frost$core$Int64) {1};
frost$core$Bit $tmp540 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp541 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp539, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp540);
frost$core$String* $tmp542 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp541);
frost$core$UInt64$nullable $tmp543 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp542, param1);
*(&local0) = $tmp543;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
// line 734
frost$core$UInt64$nullable $tmp544 = *(&local0);
frost$core$Bit $tmp545 = frost$core$Bit$init$builtin_bit(!$tmp544.nonnull);
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block7; else goto block8;
block7:;
// line 735
return ((frost$core$Int32$nullable) { .nonnull = false });
block8:;
// line 737
frost$core$UInt64$nullable $tmp547 = *(&local0);
frost$core$Int32 $tmp548 = frost$core$UInt64$get_asInt32$R$frost$core$Int32(((frost$core$UInt64) $tmp547.value));
frost$core$Int32 $tmp549 = frost$core$Int32$$SUB$R$frost$core$Int32($tmp548);
return ((frost$core$Int32$nullable) { $tmp549, true });
block6:;
// line 1
// line 740
frost$core$UInt64$nullable $tmp550 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp550;
// line 741
frost$core$UInt64$nullable $tmp551 = *(&local1);
frost$core$Bit $tmp552 = frost$core$Bit$init$builtin_bit(!$tmp551.nonnull);
bool $tmp553 = $tmp552.value;
if ($tmp553) goto block9; else goto block10;
block9:;
// line 742
return ((frost$core$Int32$nullable) { .nonnull = false });
block10:;
// line 744
frost$core$UInt64$nullable $tmp554 = *(&local1);
frost$core$Int32 $tmp555 = frost$core$UInt64$get_asInt32$R$frost$core$Int32(((frost$core$UInt64) $tmp554.value));
return ((frost$core$Int32$nullable) { $tmp555, true });
block5:;
goto block11;
block11:;

}
frost$core$Int8 frost$core$Int32$get_asInt8$R$frost$core$Int8(frost$core$Int32 param0) {

// line 751
int32_t $tmp556 = param0.value;
frost$core$Int8 $tmp557 = (frost$core$Int8) {((int8_t) $tmp556)};
return $tmp557;

}
frost$core$Int16 frost$core$Int32$get_asInt16$R$frost$core$Int16(frost$core$Int32 param0) {

// line 757
int32_t $tmp558 = param0.value;
frost$core$Int16 $tmp559 = (frost$core$Int16) {((int16_t) $tmp558)};
return $tmp559;

}
frost$core$Int64 frost$core$Int32$get_asInt64$R$frost$core$Int64(frost$core$Int32 param0) {

// line 763
int32_t $tmp560 = param0.value;
frost$core$Int64 $tmp561 = (frost$core$Int64) {((int64_t) $tmp560)};
return $tmp561;

}
frost$core$UInt8 frost$core$Int32$get_asUInt8$R$frost$core$UInt8(frost$core$Int32 param0) {

// line 769
int32_t $tmp562 = param0.value;
frost$core$UInt8 $tmp563 = (frost$core$UInt8) {((uint8_t) $tmp562)};
return $tmp563;

}
frost$core$UInt16 frost$core$Int32$get_asUInt16$R$frost$core$UInt16(frost$core$Int32 param0) {

// line 775
int32_t $tmp564 = param0.value;
frost$core$UInt16 $tmp565 = (frost$core$UInt16) {((uint16_t) $tmp564)};
return $tmp565;

}
frost$core$UInt32 frost$core$Int32$get_asUInt32$R$frost$core$UInt32(frost$core$Int32 param0) {

// line 781
int32_t $tmp566 = param0.value;
frost$core$UInt32 $tmp567 = (frost$core$UInt32) {((uint32_t) $tmp566)};
return $tmp567;

}
frost$core$UInt64 frost$core$Int32$get_asUInt64$R$frost$core$UInt64(frost$core$Int32 param0) {

// line 787
int32_t $tmp568 = param0.value;
frost$core$UInt64 $tmp569 = (frost$core$UInt64) {((uint64_t) $tmp568)};
return $tmp569;

}
frost$core$Real32 frost$core$Int32$get_asReal32$R$frost$core$Real32(frost$core$Int32 param0) {

// line 793
int32_t $tmp570 = param0.value;
frost$core$Real32 $tmp571 = (frost$core$Real32) {((float) $tmp570)};
return $tmp571;

}
frost$core$Real64 frost$core$Int32$get_asReal64$R$frost$core$Real64(frost$core$Int32 param0) {

// line 799
int32_t $tmp572 = param0.value;
frost$core$Real64 $tmp573 = (frost$core$Real64) {((double) $tmp572)};
return $tmp573;

}
frost$core$String* frost$core$Int32$get_asString$R$frost$core$String(frost$core$Int32 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int32 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 805
frost$core$Int64 $tmp574 = (frost$core$Int64) {11};
*(&local0) = $tmp574;
// line 806
frost$core$Int64 $tmp575 = *(&local0);
int64_t $tmp576 = $tmp575.value;
frost$core$Char8* $tmp577 = ((frost$core$Char8*) frostAlloc($tmp576 * 1));
*(&local1) = $tmp577;
// line 807
frost$core$Int64 $tmp578 = *(&local0);
frost$core$Int64 $tmp579 = (frost$core$Int64) {1};
int64_t $tmp580 = $tmp578.value;
int64_t $tmp581 = $tmp579.value;
int64_t $tmp582 = $tmp580 - $tmp581;
frost$core$Int64 $tmp583 = (frost$core$Int64) {$tmp582};
*(&local2) = $tmp583;
// line 808
*(&local3) = param0;
// line 809
frost$core$Int32 $tmp584 = *(&local3);
frost$core$Int32 $tmp585 = (frost$core$Int32) {0};
int32_t $tmp586 = $tmp584.value;
int32_t $tmp587 = $tmp585.value;
bool $tmp588 = $tmp586 >= $tmp587;
frost$core$Bit $tmp589 = (frost$core$Bit) {$tmp588};
bool $tmp590 = $tmp589.value;
if ($tmp590) goto block1; else goto block3;
block1:;
// line 810
goto block4;
block4:;
// line 811
frost$core$Char8* $tmp591 = *(&local1);
frost$core$Int64 $tmp592 = *(&local2);
frost$core$Int32 $tmp593 = *(&local3);
frost$core$Int32 $tmp594 = (frost$core$Int32) {10};
frost$core$Int32 $tmp595 = frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32($tmp593, $tmp594);
frost$core$Int32 $tmp596 = (frost$core$Int32) {48};
int32_t $tmp597 = $tmp595.value;
int32_t $tmp598 = $tmp596.value;
int32_t $tmp599 = $tmp597 + $tmp598;
frost$core$Int32 $tmp600 = (frost$core$Int32) {$tmp599};
frost$core$UInt8 $tmp601 = frost$core$Int32$get_asUInt8$R$frost$core$UInt8($tmp600);
frost$core$Char8 $tmp602 = frost$core$Char8$init$frost$core$UInt8($tmp601);
int64_t $tmp603 = $tmp592.value;
$tmp591[$tmp603] = $tmp602;
// line 812
frost$core$Int32 $tmp604 = *(&local3);
frost$core$Int32 $tmp605 = (frost$core$Int32) {10};
int32_t $tmp606 = $tmp604.value;
int32_t $tmp607 = $tmp605.value;
int32_t $tmp608 = $tmp606 / $tmp607;
frost$core$Int32 $tmp609 = (frost$core$Int32) {$tmp608};
*(&local3) = $tmp609;
// line 813
frost$core$Int64 $tmp610 = *(&local2);
frost$core$Int64 $tmp611 = (frost$core$Int64) {1};
int64_t $tmp612 = $tmp610.value;
int64_t $tmp613 = $tmp611.value;
int64_t $tmp614 = $tmp612 - $tmp613;
frost$core$Int64 $tmp615 = (frost$core$Int64) {$tmp614};
*(&local2) = $tmp615;
goto block5;
block5:;
frost$core$Int32 $tmp616 = *(&local3);
frost$core$Int32 $tmp617 = (frost$core$Int32) {0};
int32_t $tmp618 = $tmp616.value;
int32_t $tmp619 = $tmp617.value;
bool $tmp620 = $tmp618 > $tmp619;
frost$core$Bit $tmp621 = (frost$core$Bit) {$tmp620};
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block4; else goto block6;
block6:;
// line 816
frost$core$Int64 $tmp623 = *(&local2);
frost$core$Int64 $tmp624 = (frost$core$Int64) {1};
int64_t $tmp625 = $tmp623.value;
int64_t $tmp626 = $tmp624.value;
int64_t $tmp627 = $tmp625 + $tmp626;
frost$core$Int64 $tmp628 = (frost$core$Int64) {$tmp627};
*(&local2) = $tmp628;
goto block2;
block3:;
// line 1
// line 819
goto block7;
block7:;
// line 820
frost$core$Char8* $tmp629 = *(&local1);
frost$core$Int64 $tmp630 = *(&local2);
frost$core$Int32 $tmp631 = (frost$core$Int32) {48};
frost$core$Int32 $tmp632 = *(&local3);
frost$core$Int32 $tmp633 = (frost$core$Int32) {10};
frost$core$Int32 $tmp634 = frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32($tmp632, $tmp633);
int32_t $tmp635 = $tmp631.value;
int32_t $tmp636 = $tmp634.value;
int32_t $tmp637 = $tmp635 - $tmp636;
frost$core$Int32 $tmp638 = (frost$core$Int32) {$tmp637};
frost$core$UInt8 $tmp639 = frost$core$Int32$get_asUInt8$R$frost$core$UInt8($tmp638);
frost$core$Char8 $tmp640 = frost$core$Char8$init$frost$core$UInt8($tmp639);
int64_t $tmp641 = $tmp630.value;
$tmp629[$tmp641] = $tmp640;
// line 821
frost$core$Int32 $tmp642 = *(&local3);
frost$core$Int32 $tmp643 = (frost$core$Int32) {10};
int32_t $tmp644 = $tmp642.value;
int32_t $tmp645 = $tmp643.value;
int32_t $tmp646 = $tmp644 / $tmp645;
frost$core$Int32 $tmp647 = (frost$core$Int32) {$tmp646};
*(&local3) = $tmp647;
// line 822
frost$core$Int64 $tmp648 = *(&local2);
frost$core$Int64 $tmp649 = (frost$core$Int64) {1};
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649.value;
int64_t $tmp652 = $tmp650 - $tmp651;
frost$core$Int64 $tmp653 = (frost$core$Int64) {$tmp652};
*(&local2) = $tmp653;
goto block8;
block8:;
frost$core$Int32 $tmp654 = *(&local3);
frost$core$Int32 $tmp655 = (frost$core$Int32) {0};
int32_t $tmp656 = $tmp654.value;
int32_t $tmp657 = $tmp655.value;
bool $tmp658 = $tmp656 < $tmp657;
frost$core$Bit $tmp659 = (frost$core$Bit) {$tmp658};
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block7; else goto block9;
block9:;
// line 825
frost$core$Char8* $tmp661 = *(&local1);
frost$core$Int64 $tmp662 = *(&local2);
frost$core$UInt8 $tmp663 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp664 = frost$core$Char8$init$frost$core$UInt8($tmp663);
int64_t $tmp665 = $tmp662.value;
$tmp661[$tmp665] = $tmp664;
goto block2;
block2:;
// line 827
frost$core$Int64 $tmp666 = *(&local0);
frost$core$Int64 $tmp667 = *(&local2);
int64_t $tmp668 = $tmp666.value;
int64_t $tmp669 = $tmp667.value;
int64_t $tmp670 = $tmp668 - $tmp669;
frost$core$Int64 $tmp671 = (frost$core$Int64) {$tmp670};
*(&local4) = $tmp671;
// line 828
frost$core$Int64 $tmp672 = (frost$core$Int64) {0};
frost$core$Int64 $tmp673 = *(&local4);
frost$core$Bit $tmp674 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp675 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp672, $tmp673, $tmp674);
frost$core$Int64 $tmp676 = $tmp675.min;
*(&local5) = $tmp676;
frost$core$Int64 $tmp677 = $tmp675.max;
frost$core$Bit $tmp678 = $tmp675.inclusive;
bool $tmp679 = $tmp678.value;
frost$core$Int64 $tmp680 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp681 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp680);
if ($tmp679) goto block13; else goto block14;
block13:;
int64_t $tmp682 = $tmp676.value;
int64_t $tmp683 = $tmp677.value;
bool $tmp684 = $tmp682 <= $tmp683;
frost$core$Bit $tmp685 = (frost$core$Bit) {$tmp684};
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block10; else goto block11;
block14:;
int64_t $tmp687 = $tmp676.value;
int64_t $tmp688 = $tmp677.value;
bool $tmp689 = $tmp687 < $tmp688;
frost$core$Bit $tmp690 = (frost$core$Bit) {$tmp689};
bool $tmp691 = $tmp690.value;
if ($tmp691) goto block10; else goto block11;
block10:;
// line 829
frost$core$Char8* $tmp692 = *(&local1);
frost$core$Int64 $tmp693 = *(&local5);
frost$core$Char8* $tmp694 = *(&local1);
frost$core$Int64 $tmp695 = *(&local5);
frost$core$Int64 $tmp696 = *(&local2);
int64_t $tmp697 = $tmp695.value;
int64_t $tmp698 = $tmp696.value;
int64_t $tmp699 = $tmp697 + $tmp698;
frost$core$Int64 $tmp700 = (frost$core$Int64) {$tmp699};
int64_t $tmp701 = $tmp700.value;
frost$core$Char8 $tmp702 = $tmp694[$tmp701];
int64_t $tmp703 = $tmp693.value;
$tmp692[$tmp703] = $tmp702;
goto block12;
block12:;
frost$core$Int64 $tmp704 = *(&local5);
int64_t $tmp705 = $tmp677.value;
int64_t $tmp706 = $tmp704.value;
int64_t $tmp707 = $tmp705 - $tmp706;
frost$core$Int64 $tmp708 = (frost$core$Int64) {$tmp707};
frost$core$UInt64 $tmp709 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp708);
if ($tmp679) goto block16; else goto block17;
block16:;
uint64_t $tmp710 = $tmp709.value;
uint64_t $tmp711 = $tmp681.value;
bool $tmp712 = $tmp710 >= $tmp711;
frost$core$Bit $tmp713 = (frost$core$Bit) {$tmp712};
bool $tmp714 = $tmp713.value;
if ($tmp714) goto block15; else goto block11;
block17:;
uint64_t $tmp715 = $tmp709.value;
uint64_t $tmp716 = $tmp681.value;
bool $tmp717 = $tmp715 > $tmp716;
frost$core$Bit $tmp718 = (frost$core$Bit) {$tmp717};
bool $tmp719 = $tmp718.value;
if ($tmp719) goto block15; else goto block11;
block15:;
int64_t $tmp720 = $tmp704.value;
int64_t $tmp721 = $tmp680.value;
int64_t $tmp722 = $tmp720 + $tmp721;
frost$core$Int64 $tmp723 = (frost$core$Int64) {$tmp722};
*(&local5) = $tmp723;
goto block10;
block11:;
// line 831
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp724 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp725 = *(&local1);
frost$core$Int64 $tmp726 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp724, $tmp725, $tmp726);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp724));
return $tmp724;

}
frost$core$String* frost$core$Int32$format$frost$core$String$R$frost$core$String(frost$core$Int32 param0, frost$core$String* param1) {

// line 837
int32_t $tmp727 = param0.value;
bool $tmp728 = $tmp727 < 0;
frost$core$Bit $tmp729 = frost$core$Bit$init$builtin_bit($tmp728);
frost$core$Int32 $tmp730 = frost$core$Int32$get_abs$R$frost$core$Int32(param0);
frost$core$UInt64 $tmp731 = frost$core$Int32$get_asUInt64$R$frost$core$UInt64($tmp730);
frost$core$UInt64 $tmp732 = (frost$core$UInt64) {4294967295};
frost$core$String* $tmp733 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp729, $tmp731, $tmp732, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp733));
return $tmp733;

}
void frost$core$Int32$cleanup(frost$core$Int32 param0) {

return;

}

