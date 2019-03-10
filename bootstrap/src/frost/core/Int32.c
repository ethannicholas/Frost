#include "frost/core/Int32.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/core/Object.h"
#include "frost/collections/ListView.h"
#include "frost/core/Int64.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Key.h"
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

__attribute__((weak)) frost$core$Bit frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int32$wrapper*) p0)->value, ((frost$core$Int32$wrapper*) p1)->value);

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
__attribute__((weak)) frost$collections$Iterator* frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int32$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int32$format$frost$core$String$R$frost$core$String(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int32$get_count$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int32$get_hash$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value);

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
__attribute__((weak)) void frost$core$Int32$get_bitCount$R$frost$core$Int32$shim(frost$core$Int32* sret, frost$core$Object* p0) {
    frost$core$Int32$get_bitCount$R$frost$core$Int32(sret, ((frost$core$Int32$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$Int32$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int32$_frost$core$Equatable, { frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int32$_frost$collections$ListView, { frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int32$_frost$core$Comparable, { frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int32$_frost$collections$Iterable, { frost$core$Int32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int32$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int32$_frost$core$Formattable, { frost$core$Int32$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int32$_frost$collections$CollectionView, { frost$core$Int32$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s1;
frost$core$Int32$class_type frost$core$Int32$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int32$_frost$collections$Key, { frost$core$Int32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$SUB$R$frost$core$Int32$shim, frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int32$$BNOT$R$frost$core$Int32$shim, frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$get_abs$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$get_count$R$frost$core$Int64$shim, frost$core$Int32$get_bitCount$R$frost$core$Int32$shim, frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int32$get_hash$R$frost$core$Int64$shim, frost$core$Int32$get_asInt8$R$frost$core$Int8$shim, frost$core$Int32$get_asInt16$R$frost$core$Int16$shim, frost$core$Int32$get_asInt64$R$frost$core$Int64$shim, frost$core$Int32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int32$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int32$get_asReal32$R$frost$core$Real32$shim, frost$core$Int32$get_asReal64$R$frost$core$Real64$shim, frost$core$Int32$format$frost$core$String$R$frost$core$String$shim, frost$core$Int32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$Int32$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Equatable, { frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$ListView, { frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Comparable, { frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$Iterable, { frost$core$Int32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int32$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Formattable, { frost$core$Int32$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$CollectionView, { frost$core$Int32$get_hash$R$frost$core$Int64$shim} };

static frost$core$String $s3;
frost$core$Int32$wrapperclass_type frost$core$Int32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$Key, { frost$core$Int32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn499)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, 163427487060978696, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, 163427487060978696, NULL };
static frost$core$String $s507 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -1858408941383958353, NULL };
static frost$core$String $s508 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -2489540674621627472, NULL };
static frost$core$String $s543 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -1858408941383958353, NULL };
static frost$core$String $s544 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f", 121, -8800473122489495150, NULL };
static frost$core$String $s546 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };

frost$core$Int32 frost$core$Int32$init$builtin_int32(int32_t param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:30
int32_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int32 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int32 frost$core$Int32$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:36
int8_t $tmp6 = param0.value;
int32_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int32_t) $tmp6);
frost$core$Int32 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int32 frost$core$Int32$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:42
int16_t $tmp9 = param0.value;
int32_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int32_t) $tmp9);
frost$core$Int32 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int32 frost$core$Int32$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:48
uint8_t $tmp12 = param0.value;
int32_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((int32_t) $tmp12);
frost$core$Int32 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$Int32 frost$core$Int32$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:54
uint16_t $tmp15 = param0.value;
int32_t* $tmp16 = &(&local0)->value;
*$tmp16 = ((int32_t) $tmp15);
frost$core$Int32 $tmp17 = *(&local0);
return $tmp17;

}
frost$core$Int32 frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:60
int32_t $tmp18 = param0.value;
int32_t $tmp19 = param1.value;
int32_t $tmp20 = $tmp18 + $tmp19;
frost$core$Int32 $tmp21 = (frost$core$Int32) {$tmp20};
return $tmp21;

}
frost$core$Int64 frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:66
int32_t $tmp22 = param0.value;
int64_t $tmp23 = param1.value;
int64_t $tmp24 = ((int64_t) $tmp22) + $tmp23;
frost$core$Int64 $tmp25 = (frost$core$Int64) {$tmp24};
return $tmp25;

}
frost$core$Int64 frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:72
int32_t $tmp26 = param0.value;
uint32_t $tmp27 = param1.value;
int64_t $tmp28 = ((int64_t) $tmp26) + ((int64_t) $tmp27);
frost$core$Int64 $tmp29 = (frost$core$Int64) {$tmp28};
return $tmp29;

}
frost$core$Int32 frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:78
int32_t $tmp30 = param0.value;
int32_t $tmp31 = param1.value;
int32_t $tmp32 = $tmp30 - $tmp31;
frost$core$Int32 $tmp33 = (frost$core$Int32) {$tmp32};
return $tmp33;

}
frost$core$Int64 frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:84
int32_t $tmp34 = param0.value;
int64_t $tmp35 = param1.value;
int64_t $tmp36 = ((int64_t) $tmp34) - $tmp35;
frost$core$Int64 $tmp37 = (frost$core$Int64) {$tmp36};
return $tmp37;

}
frost$core$Int64 frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:90
int32_t $tmp38 = param0.value;
uint32_t $tmp39 = param1.value;
int64_t $tmp40 = ((int64_t) $tmp38) - ((int64_t) $tmp39);
frost$core$Int64 $tmp41 = (frost$core$Int64) {$tmp40};
return $tmp41;

}
frost$core$Int32 frost$core$Int32$$SUB$R$frost$core$Int32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:95
int32_t $tmp42 = param0.value;
int32_t $tmp43 = -$tmp42;
frost$core$Int32 $tmp44 = (frost$core$Int32) {$tmp43};
return $tmp44;

}
frost$core$Int32 frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:101
int32_t $tmp45 = param0.value;
int32_t $tmp46 = param1.value;
int32_t $tmp47 = $tmp45 * $tmp46;
frost$core$Int32 $tmp48 = (frost$core$Int32) {$tmp47};
return $tmp48;

}
frost$core$Int64 frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:107
int32_t $tmp49 = param0.value;
int64_t $tmp50 = param1.value;
int64_t $tmp51 = ((int64_t) $tmp49) * $tmp50;
frost$core$Int64 $tmp52 = (frost$core$Int64) {$tmp51};
return $tmp52;

}
frost$core$Int64 frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:113
int32_t $tmp53 = param0.value;
uint32_t $tmp54 = param1.value;
int64_t $tmp55 = ((int64_t) $tmp53) * ((int64_t) $tmp54);
frost$core$Int64 $tmp56 = (frost$core$Int64) {$tmp55};
return $tmp56;

}
frost$core$Int32 frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:119
int32_t $tmp57 = param0.value;
int32_t $tmp58 = param1.value;
int32_t $tmp59 = $tmp57 / $tmp58;
frost$core$Int32 $tmp60 = (frost$core$Int32) {$tmp59};
return $tmp60;

}
frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:125
int32_t $tmp61 = param0.value;
int64_t $tmp62 = param1.value;
int64_t $tmp63 = ((int64_t) $tmp61) / $tmp62;
frost$core$Int64 $tmp64 = (frost$core$Int64) {$tmp63};
return $tmp64;

}
frost$core$Int64 frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:131
int32_t $tmp65 = param0.value;
uint32_t $tmp66 = param1.value;
int64_t $tmp67 = ((int64_t) $tmp65) / ((int64_t) $tmp66);
frost$core$Int64 $tmp68 = (frost$core$Int64) {$tmp67};
return $tmp68;

}
frost$core$Int32 frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:137
int32_t $tmp69 = param0.value;
int32_t $tmp70 = param1.value;
int32_t $tmp71 = $tmp69 % $tmp70;
frost$core$Int32 $tmp72 = (frost$core$Int32) {$tmp71};
return $tmp72;

}
frost$core$Int64 frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:143
int32_t $tmp73 = param0.value;
int64_t $tmp74 = param1.value;
int64_t $tmp75 = ((int64_t) $tmp73) % $tmp74;
frost$core$Int64 $tmp76 = (frost$core$Int64) {$tmp75};
return $tmp76;

}
frost$core$Int64 frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:149
int32_t $tmp77 = param0.value;
uint32_t $tmp78 = param1.value;
int64_t $tmp79 = ((int64_t) $tmp77) % ((int64_t) $tmp78);
frost$core$Int64 $tmp80 = (frost$core$Int64) {$tmp79};
return $tmp80;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:155
int32_t $tmp81 = param0.value;
int8_t $tmp82 = param1.value;
float $tmp83 = ((float) $tmp81) / ((float) $tmp82);
frost$core$Real32 $tmp84 = (frost$core$Real32) {$tmp83};
return $tmp84;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:161
int32_t $tmp85 = param0.value;
int16_t $tmp86 = param1.value;
float $tmp87 = ((float) $tmp85) / ((float) $tmp86);
frost$core$Real32 $tmp88 = (frost$core$Real32) {$tmp87};
return $tmp88;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:167
int32_t $tmp89 = param0.value;
int32_t $tmp90 = param1.value;
float $tmp91 = ((float) $tmp89) / ((float) $tmp90);
frost$core$Real32 $tmp92 = (frost$core$Real32) {$tmp91};
return $tmp92;

}
frost$core$Real64 frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:173
int32_t $tmp93 = param0.value;
int64_t $tmp94 = param1.value;
double $tmp95 = ((double) $tmp93) / ((double) $tmp94);
frost$core$Real64 $tmp96 = (frost$core$Real64) {$tmp95};
return $tmp96;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:179
int32_t $tmp97 = param0.value;
uint8_t $tmp98 = param1.value;
float $tmp99 = ((float) $tmp97) / ((float) $tmp98);
frost$core$Real32 $tmp100 = (frost$core$Real32) {$tmp99};
return $tmp100;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:185
int32_t $tmp101 = param0.value;
uint16_t $tmp102 = param1.value;
float $tmp103 = ((float) $tmp101) / ((float) $tmp102);
frost$core$Real32 $tmp104 = (frost$core$Real32) {$tmp103};
return $tmp104;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:191
int32_t $tmp105 = param0.value;
uint32_t $tmp106 = param1.value;
float $tmp107 = ((float) $tmp105) / ((float) $tmp106);
frost$core$Real32 $tmp108 = (frost$core$Real32) {$tmp107};
return $tmp108;

}
frost$core$Real64 frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:197
int32_t $tmp109 = param0.value;
uint64_t $tmp110 = param1.value;
double $tmp111 = ((double) $tmp109) / ((double) $tmp110);
frost$core$Real64 $tmp112 = (frost$core$Real64) {$tmp111};
return $tmp112;

}
frost$core$Real32 frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32(frost$core$Int32 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:203
int32_t $tmp113 = param0.value;
float $tmp114 = param1.value;
float $tmp115 = ((float) $tmp113) / $tmp114;
frost$core$Real32 $tmp116 = (frost$core$Real32) {$tmp115};
return $tmp116;

}
frost$core$Real64 frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int32 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:209
int32_t $tmp117 = param0.value;
double $tmp118 = param1.value;
double $tmp119 = ((double) $tmp117) / $tmp118;
frost$core$Real64 $tmp120 = (frost$core$Real64) {$tmp119};
return $tmp120;

}
frost$core$Int32 frost$core$Int32$$BNOT$R$frost$core$Int32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:214
int32_t $tmp121 = param0.value;
int32_t $tmp122 = !$tmp121;
frost$core$Int32 $tmp123 = (frost$core$Int32) {$tmp122};
return $tmp123;

}
frost$core$Int32 frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:220
int32_t $tmp124 = param0.value;
int32_t $tmp125 = param1.value;
int32_t $tmp126 = $tmp124 & $tmp125;
frost$core$Int32 $tmp127 = (frost$core$Int32) {$tmp126};
return $tmp127;

}
frost$core$Int64 frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:226
int32_t $tmp128 = param0.value;
int64_t $tmp129 = param1.value;
int64_t $tmp130 = ((int64_t) $tmp128) & $tmp129;
frost$core$Int64 $tmp131 = (frost$core$Int64) {$tmp130};
return $tmp131;

}
frost$core$UInt32 frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:232
int32_t $tmp132 = param0.value;
uint32_t $tmp133 = param1.value;
uint32_t $tmp134 = ((uint32_t) $tmp132) & $tmp133;
frost$core$UInt32 $tmp135 = (frost$core$UInt32) {$tmp134};
return $tmp135;

}
frost$core$UInt64 frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:238
int32_t $tmp136 = param0.value;
uint64_t $tmp137 = param1.value;
uint64_t $tmp138 = ((uint64_t) $tmp136) & $tmp137;
frost$core$UInt64 $tmp139 = (frost$core$UInt64) {$tmp138};
return $tmp139;

}
frost$core$Int32 frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:244
int32_t $tmp140 = param0.value;
int32_t $tmp141 = param1.value;
int32_t $tmp142 = $tmp140 | $tmp141;
frost$core$Int32 $tmp143 = (frost$core$Int32) {$tmp142};
return $tmp143;

}
frost$core$Int64 frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:250
int32_t $tmp144 = param0.value;
int64_t $tmp145 = param1.value;
int64_t $tmp146 = ((int64_t) $tmp144) | $tmp145;
frost$core$Int64 $tmp147 = (frost$core$Int64) {$tmp146};
return $tmp147;

}
frost$core$UInt32 frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:256
int32_t $tmp148 = param0.value;
uint32_t $tmp149 = param1.value;
uint32_t $tmp150 = ((uint32_t) $tmp148) | $tmp149;
frost$core$UInt32 $tmp151 = (frost$core$UInt32) {$tmp150};
return $tmp151;

}
frost$core$UInt64 frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:262
int32_t $tmp152 = param0.value;
uint64_t $tmp153 = param1.value;
uint64_t $tmp154 = ((uint64_t) $tmp152) | $tmp153;
frost$core$UInt64 $tmp155 = (frost$core$UInt64) {$tmp154};
return $tmp155;

}
frost$core$Int32 frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:268
int32_t $tmp156 = param0.value;
int32_t $tmp157 = param1.value;
int32_t $tmp158 = $tmp156 ^ $tmp157;
frost$core$Int32 $tmp159 = (frost$core$Int32) {$tmp158};
return $tmp159;

}
frost$core$Int64 frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:274
int32_t $tmp160 = param0.value;
int64_t $tmp161 = param1.value;
int64_t $tmp162 = ((int64_t) $tmp160) ^ $tmp161;
frost$core$Int64 $tmp163 = (frost$core$Int64) {$tmp162};
return $tmp163;

}
frost$core$UInt32 frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:280
int32_t $tmp164 = param0.value;
uint32_t $tmp165 = param1.value;
uint32_t $tmp166 = ((uint32_t) $tmp164) ^ $tmp165;
frost$core$UInt32 $tmp167 = (frost$core$UInt32) {$tmp166};
return $tmp167;

}
frost$core$UInt64 frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:286
int32_t $tmp168 = param0.value;
uint64_t $tmp169 = param1.value;
uint64_t $tmp170 = ((uint64_t) $tmp168) ^ $tmp169;
frost$core$UInt64 $tmp171 = (frost$core$UInt64) {$tmp170};
return $tmp171;

}
frost$core$Int32 frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:292
int32_t $tmp172 = param0.value;
int32_t $tmp173 = param1.value;
int32_t $tmp174 = $tmp172 << $tmp173;
frost$core$Int32 $tmp175 = (frost$core$Int32) {$tmp174};
return $tmp175;

}
frost$core$Int32 frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:298
int32_t $tmp176 = param0.value;
int32_t $tmp177 = param1.value;
int32_t $tmp178 = $tmp176 >> $tmp177;
frost$core$Int32 $tmp179 = (frost$core$Int32) {$tmp178};
return $tmp179;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:304
int32_t $tmp180 = param0.value;
int8_t $tmp181 = param1.value;
bool $tmp182 = $tmp180 == ((int32_t) $tmp181);
frost$core$Bit $tmp183 = (frost$core$Bit) {$tmp182};
return $tmp183;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:310
int32_t $tmp184 = param0.value;
int16_t $tmp185 = param1.value;
bool $tmp186 = $tmp184 == ((int32_t) $tmp185);
frost$core$Bit $tmp187 = (frost$core$Bit) {$tmp186};
return $tmp187;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:317
int32_t $tmp188 = param0.value;
int32_t $tmp189 = param1.value;
bool $tmp190 = $tmp188 == $tmp189;
frost$core$Bit $tmp191 = (frost$core$Bit) {$tmp190};
return $tmp191;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:323
int32_t $tmp192 = param0.value;
int64_t $tmp193 = param1.value;
bool $tmp194 = ((int64_t) $tmp192) == $tmp193;
frost$core$Bit $tmp195 = (frost$core$Bit) {$tmp194};
return $tmp195;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:329
int32_t $tmp196 = param0.value;
uint8_t $tmp197 = param1.value;
bool $tmp198 = ((int64_t) $tmp196) == ((int64_t) $tmp197);
frost$core$Bit $tmp199 = (frost$core$Bit) {$tmp198};
return $tmp199;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:335
int32_t $tmp200 = param0.value;
uint16_t $tmp201 = param1.value;
bool $tmp202 = ((int64_t) $tmp200) == ((int64_t) $tmp201);
frost$core$Bit $tmp203 = (frost$core$Bit) {$tmp202};
return $tmp203;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:341
int32_t $tmp204 = param0.value;
uint32_t $tmp205 = param1.value;
bool $tmp206 = ((int64_t) $tmp204) == ((int64_t) $tmp205);
frost$core$Bit $tmp207 = (frost$core$Bit) {$tmp206};
return $tmp207;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:347
int32_t $tmp208 = param0.value;
int8_t $tmp209 = param1.value;
bool $tmp210 = $tmp208 != ((int32_t) $tmp209);
frost$core$Bit $tmp211 = (frost$core$Bit) {$tmp210};
return $tmp211;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:353
int32_t $tmp212 = param0.value;
int16_t $tmp213 = param1.value;
bool $tmp214 = $tmp212 != ((int32_t) $tmp213);
frost$core$Bit $tmp215 = (frost$core$Bit) {$tmp214};
return $tmp215;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:360
int32_t $tmp216 = param0.value;
int32_t $tmp217 = param1.value;
bool $tmp218 = $tmp216 != $tmp217;
frost$core$Bit $tmp219 = (frost$core$Bit) {$tmp218};
return $tmp219;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:366
int32_t $tmp220 = param0.value;
int64_t $tmp221 = param1.value;
bool $tmp222 = ((int64_t) $tmp220) != $tmp221;
frost$core$Bit $tmp223 = (frost$core$Bit) {$tmp222};
return $tmp223;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:372
int32_t $tmp224 = param0.value;
uint8_t $tmp225 = param1.value;
bool $tmp226 = ((int64_t) $tmp224) != ((int64_t) $tmp225);
frost$core$Bit $tmp227 = (frost$core$Bit) {$tmp226};
return $tmp227;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:378
int32_t $tmp228 = param0.value;
uint16_t $tmp229 = param1.value;
bool $tmp230 = ((int64_t) $tmp228) != ((int64_t) $tmp229);
frost$core$Bit $tmp231 = (frost$core$Bit) {$tmp230};
return $tmp231;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:384
int32_t $tmp232 = param0.value;
uint32_t $tmp233 = param1.value;
bool $tmp234 = ((int64_t) $tmp232) != ((int64_t) $tmp233);
frost$core$Bit $tmp235 = (frost$core$Bit) {$tmp234};
return $tmp235;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:390
int32_t $tmp236 = param0.value;
int8_t $tmp237 = param1.value;
bool $tmp238 = $tmp236 < ((int32_t) $tmp237);
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
return $tmp239;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:396
int32_t $tmp240 = param0.value;
int16_t $tmp241 = param1.value;
bool $tmp242 = $tmp240 < ((int32_t) $tmp241);
frost$core$Bit $tmp243 = (frost$core$Bit) {$tmp242};
return $tmp243;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:403
int32_t $tmp244 = param0.value;
int32_t $tmp245 = param1.value;
bool $tmp246 = $tmp244 < $tmp245;
frost$core$Bit $tmp247 = (frost$core$Bit) {$tmp246};
return $tmp247;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:409
int32_t $tmp248 = param0.value;
int64_t $tmp249 = param1.value;
bool $tmp250 = ((int64_t) $tmp248) < $tmp249;
frost$core$Bit $tmp251 = (frost$core$Bit) {$tmp250};
return $tmp251;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:415
int32_t $tmp252 = param0.value;
uint8_t $tmp253 = param1.value;
bool $tmp254 = ((int64_t) $tmp252) < ((int64_t) $tmp253);
frost$core$Bit $tmp255 = (frost$core$Bit) {$tmp254};
return $tmp255;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:421
int32_t $tmp256 = param0.value;
uint16_t $tmp257 = param1.value;
bool $tmp258 = ((int64_t) $tmp256) < ((int64_t) $tmp257);
frost$core$Bit $tmp259 = (frost$core$Bit) {$tmp258};
return $tmp259;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:427
int32_t $tmp260 = param0.value;
uint32_t $tmp261 = param1.value;
bool $tmp262 = ((int64_t) $tmp260) < ((int64_t) $tmp261);
frost$core$Bit $tmp263 = (frost$core$Bit) {$tmp262};
return $tmp263;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:433
int32_t $tmp264 = param0.value;
int8_t $tmp265 = param1.value;
bool $tmp266 = $tmp264 > ((int32_t) $tmp265);
frost$core$Bit $tmp267 = (frost$core$Bit) {$tmp266};
return $tmp267;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:439
int32_t $tmp268 = param0.value;
int16_t $tmp269 = param1.value;
bool $tmp270 = $tmp268 > ((int32_t) $tmp269);
frost$core$Bit $tmp271 = (frost$core$Bit) {$tmp270};
return $tmp271;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:446
int32_t $tmp272 = param0.value;
int32_t $tmp273 = param1.value;
bool $tmp274 = $tmp272 > $tmp273;
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
return $tmp275;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:452
int32_t $tmp276 = param0.value;
int64_t $tmp277 = param1.value;
bool $tmp278 = ((int64_t) $tmp276) > $tmp277;
frost$core$Bit $tmp279 = (frost$core$Bit) {$tmp278};
return $tmp279;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:458
int32_t $tmp280 = param0.value;
uint8_t $tmp281 = param1.value;
bool $tmp282 = ((int64_t) $tmp280) > ((int64_t) $tmp281);
frost$core$Bit $tmp283 = (frost$core$Bit) {$tmp282};
return $tmp283;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:464
int32_t $tmp284 = param0.value;
uint16_t $tmp285 = param1.value;
bool $tmp286 = ((int64_t) $tmp284) > ((int64_t) $tmp285);
frost$core$Bit $tmp287 = (frost$core$Bit) {$tmp286};
return $tmp287;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:470
int32_t $tmp288 = param0.value;
uint32_t $tmp289 = param1.value;
bool $tmp290 = ((int64_t) $tmp288) > ((int64_t) $tmp289);
frost$core$Bit $tmp291 = (frost$core$Bit) {$tmp290};
return $tmp291;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:476
int32_t $tmp292 = param0.value;
int8_t $tmp293 = param1.value;
bool $tmp294 = $tmp292 >= ((int32_t) $tmp293);
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294};
return $tmp295;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:482
int32_t $tmp296 = param0.value;
int16_t $tmp297 = param1.value;
bool $tmp298 = $tmp296 >= ((int32_t) $tmp297);
frost$core$Bit $tmp299 = (frost$core$Bit) {$tmp298};
return $tmp299;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:489
int32_t $tmp300 = param0.value;
int32_t $tmp301 = param1.value;
bool $tmp302 = $tmp300 >= $tmp301;
frost$core$Bit $tmp303 = (frost$core$Bit) {$tmp302};
return $tmp303;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:495
int32_t $tmp304 = param0.value;
int64_t $tmp305 = param1.value;
bool $tmp306 = ((int64_t) $tmp304) >= $tmp305;
frost$core$Bit $tmp307 = (frost$core$Bit) {$tmp306};
return $tmp307;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:501
int32_t $tmp308 = param0.value;
uint8_t $tmp309 = param1.value;
bool $tmp310 = ((int64_t) $tmp308) >= ((int64_t) $tmp309);
frost$core$Bit $tmp311 = (frost$core$Bit) {$tmp310};
return $tmp311;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:507
int32_t $tmp312 = param0.value;
uint16_t $tmp313 = param1.value;
bool $tmp314 = ((int64_t) $tmp312) >= ((int64_t) $tmp313);
frost$core$Bit $tmp315 = (frost$core$Bit) {$tmp314};
return $tmp315;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:513
int32_t $tmp316 = param0.value;
uint32_t $tmp317 = param1.value;
bool $tmp318 = ((int64_t) $tmp316) >= ((int64_t) $tmp317);
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
return $tmp319;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:519
int32_t $tmp320 = param0.value;
int8_t $tmp321 = param1.value;
bool $tmp322 = $tmp320 <= ((int32_t) $tmp321);
frost$core$Bit $tmp323 = (frost$core$Bit) {$tmp322};
return $tmp323;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:525
int32_t $tmp324 = param0.value;
int16_t $tmp325 = param1.value;
bool $tmp326 = $tmp324 <= ((int32_t) $tmp325);
frost$core$Bit $tmp327 = (frost$core$Bit) {$tmp326};
return $tmp327;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:532
int32_t $tmp328 = param0.value;
int32_t $tmp329 = param1.value;
bool $tmp330 = $tmp328 <= $tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
return $tmp331;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:538
int32_t $tmp332 = param0.value;
int64_t $tmp333 = param1.value;
bool $tmp334 = ((int64_t) $tmp332) <= $tmp333;
frost$core$Bit $tmp335 = (frost$core$Bit) {$tmp334};
return $tmp335;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:544
int32_t $tmp336 = param0.value;
uint8_t $tmp337 = param1.value;
bool $tmp338 = ((int64_t) $tmp336) <= ((int64_t) $tmp337);
frost$core$Bit $tmp339 = (frost$core$Bit) {$tmp338};
return $tmp339;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:550
int32_t $tmp340 = param0.value;
uint16_t $tmp341 = param1.value;
bool $tmp342 = ((int64_t) $tmp340) <= ((int64_t) $tmp341);
frost$core$Bit $tmp343 = (frost$core$Bit) {$tmp342};
return $tmp343;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:556
int32_t $tmp344 = param0.value;
uint32_t $tmp345 = param1.value;
bool $tmp346 = ((int64_t) $tmp344) <= ((int64_t) $tmp345);
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
return $tmp347;

}
frost$core$Int32 frost$core$Int32$get_abs$R$frost$core$Int32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:562
frost$core$Int32 $tmp348 = (frost$core$Int32) {0u};
int32_t $tmp349 = param0.value;
int32_t $tmp350 = $tmp348.value;
bool $tmp351 = $tmp349 < $tmp350;
frost$core$Bit $tmp352 = (frost$core$Bit) {$tmp351};
bool $tmp353 = $tmp352.value;
if ($tmp353) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:563
// begin inline call to function frost.core.Int32.-():frost.core.Int32 from Int32.frost:563:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:95
int32_t $tmp354 = param0.value;
int32_t $tmp355 = -$tmp354;
frost$core$Int32 $tmp356 = (frost$core$Int32) {$tmp355};
return $tmp356;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:565
return param0;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:571
int32_t $tmp357 = param0.value;
int8_t $tmp358 = param1.value;
bool $tmp359 = $tmp357 < ((int32_t) $tmp358);
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:572
int32_t $tmp362 = param0.value;
frost$core$Int32 $tmp363 = (frost$core$Int32) {$tmp362};
return $tmp363;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:574
int8_t $tmp364 = param1.value;
frost$core$Int32 $tmp365 = (frost$core$Int32) {((int32_t) $tmp364)};
return $tmp365;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:580
int32_t $tmp366 = param0.value;
int16_t $tmp367 = param1.value;
bool $tmp368 = $tmp366 < ((int32_t) $tmp367);
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:581
int32_t $tmp371 = param0.value;
frost$core$Int32 $tmp372 = (frost$core$Int32) {$tmp371};
return $tmp372;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:583
int16_t $tmp373 = param1.value;
frost$core$Int32 $tmp374 = (frost$core$Int32) {((int32_t) $tmp373)};
return $tmp374;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:589
int32_t $tmp375 = param0.value;
int32_t $tmp376 = param1.value;
bool $tmp377 = $tmp375 < $tmp376;
frost$core$Bit $tmp378 = (frost$core$Bit) {$tmp377};
bool $tmp379 = $tmp378.value;
if ($tmp379) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:590
int32_t $tmp380 = param0.value;
frost$core$Int32 $tmp381 = (frost$core$Int32) {$tmp380};
return $tmp381;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:592
int32_t $tmp382 = param1.value;
frost$core$Int32 $tmp383 = (frost$core$Int32) {$tmp382};
return $tmp383;

}
frost$core$Int64 frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:598
int32_t $tmp384 = param0.value;
int64_t $tmp385 = param1.value;
bool $tmp386 = ((int64_t) $tmp384) < $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:599
int32_t $tmp389 = param0.value;
frost$core$Int64 $tmp390 = (frost$core$Int64) {((int64_t) $tmp389)};
return $tmp390;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:601
int64_t $tmp391 = param1.value;
frost$core$Int64 $tmp392 = (frost$core$Int64) {$tmp391};
return $tmp392;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:607
int32_t $tmp393 = param0.value;
uint8_t $tmp394 = param1.value;
bool $tmp395 = ((int64_t) $tmp393) < ((int64_t) $tmp394);
frost$core$Bit $tmp396 = (frost$core$Bit) {$tmp395};
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:608
int32_t $tmp398 = param0.value;
frost$core$Int64 $tmp399 = (frost$core$Int64) {((int64_t) $tmp398)};
return $tmp399;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:610
uint8_t $tmp400 = param1.value;
frost$core$Int64 $tmp401 = (frost$core$Int64) {((int64_t) $tmp400)};
return $tmp401;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:616
int32_t $tmp402 = param0.value;
uint16_t $tmp403 = param1.value;
bool $tmp404 = ((int64_t) $tmp402) < ((int64_t) $tmp403);
frost$core$Bit $tmp405 = (frost$core$Bit) {$tmp404};
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:617
int32_t $tmp407 = param0.value;
frost$core$Int64 $tmp408 = (frost$core$Int64) {((int64_t) $tmp407)};
return $tmp408;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:619
uint16_t $tmp409 = param1.value;
frost$core$Int64 $tmp410 = (frost$core$Int64) {((int64_t) $tmp409)};
return $tmp410;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:625
int32_t $tmp411 = param0.value;
uint32_t $tmp412 = param1.value;
bool $tmp413 = ((int64_t) $tmp411) < ((int64_t) $tmp412);
frost$core$Bit $tmp414 = (frost$core$Bit) {$tmp413};
bool $tmp415 = $tmp414.value;
if ($tmp415) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:626
int32_t $tmp416 = param0.value;
frost$core$Int64 $tmp417 = (frost$core$Int64) {((int64_t) $tmp416)};
return $tmp417;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:628
uint32_t $tmp418 = param1.value;
frost$core$Int64 $tmp419 = (frost$core$Int64) {((int64_t) $tmp418)};
return $tmp419;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:635
int32_t $tmp420 = param0.value;
int8_t $tmp421 = param1.value;
bool $tmp422 = $tmp420 > ((int32_t) $tmp421);
frost$core$Bit $tmp423 = (frost$core$Bit) {$tmp422};
bool $tmp424 = $tmp423.value;
if ($tmp424) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:636
int32_t $tmp425 = param0.value;
frost$core$Int32 $tmp426 = (frost$core$Int32) {$tmp425};
return $tmp426;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:638
int8_t $tmp427 = param1.value;
frost$core$Int32 $tmp428 = (frost$core$Int32) {((int32_t) $tmp427)};
return $tmp428;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:644
int32_t $tmp429 = param0.value;
int16_t $tmp430 = param1.value;
bool $tmp431 = $tmp429 > ((int32_t) $tmp430);
frost$core$Bit $tmp432 = (frost$core$Bit) {$tmp431};
bool $tmp433 = $tmp432.value;
if ($tmp433) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:645
int32_t $tmp434 = param0.value;
frost$core$Int32 $tmp435 = (frost$core$Int32) {$tmp434};
return $tmp435;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:647
int16_t $tmp436 = param1.value;
frost$core$Int32 $tmp437 = (frost$core$Int32) {((int32_t) $tmp436)};
return $tmp437;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:653
int32_t $tmp438 = param0.value;
int32_t $tmp439 = param1.value;
bool $tmp440 = $tmp438 > $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:654
int32_t $tmp443 = param0.value;
frost$core$Int32 $tmp444 = (frost$core$Int32) {$tmp443};
return $tmp444;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:656
int32_t $tmp445 = param1.value;
frost$core$Int32 $tmp446 = (frost$core$Int32) {$tmp445};
return $tmp446;

}
frost$core$Int64 frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:662
int32_t $tmp447 = param0.value;
int64_t $tmp448 = param1.value;
bool $tmp449 = ((int64_t) $tmp447) > $tmp448;
frost$core$Bit $tmp450 = (frost$core$Bit) {$tmp449};
bool $tmp451 = $tmp450.value;
if ($tmp451) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:663
int32_t $tmp452 = param0.value;
frost$core$Int64 $tmp453 = (frost$core$Int64) {((int64_t) $tmp452)};
return $tmp453;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:665
int64_t $tmp454 = param1.value;
frost$core$Int64 $tmp455 = (frost$core$Int64) {$tmp454};
return $tmp455;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:671
int32_t $tmp456 = param0.value;
uint8_t $tmp457 = param1.value;
bool $tmp458 = ((int64_t) $tmp456) > ((int64_t) $tmp457);
frost$core$Bit $tmp459 = (frost$core$Bit) {$tmp458};
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:672
int32_t $tmp461 = param0.value;
frost$core$Int64 $tmp462 = (frost$core$Int64) {((int64_t) $tmp461)};
return $tmp462;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:674
uint8_t $tmp463 = param1.value;
frost$core$Int64 $tmp464 = (frost$core$Int64) {((int64_t) $tmp463)};
return $tmp464;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:680
int32_t $tmp465 = param0.value;
uint16_t $tmp466 = param1.value;
bool $tmp467 = ((int64_t) $tmp465) > ((int64_t) $tmp466);
frost$core$Bit $tmp468 = (frost$core$Bit) {$tmp467};
bool $tmp469 = $tmp468.value;
if ($tmp469) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:681
int32_t $tmp470 = param0.value;
frost$core$Int64 $tmp471 = (frost$core$Int64) {((int64_t) $tmp470)};
return $tmp471;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:683
uint16_t $tmp472 = param1.value;
frost$core$Int64 $tmp473 = (frost$core$Int64) {((int64_t) $tmp472)};
return $tmp473;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:689
int32_t $tmp474 = param0.value;
uint32_t $tmp475 = param1.value;
bool $tmp476 = ((int64_t) $tmp474) > ((int64_t) $tmp475);
frost$core$Bit $tmp477 = (frost$core$Bit) {$tmp476};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:690
int32_t $tmp479 = param0.value;
frost$core$Int64 $tmp480 = (frost$core$Int64) {((int64_t) $tmp479)};
return $tmp480;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:692
uint32_t $tmp481 = param1.value;
frost$core$Int64 $tmp482 = (frost$core$Int64) {((int64_t) $tmp481)};
return $tmp482;

}
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$Range$LTfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$Range$LTfrost$core$Int32$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:698
FROST_ASSERT(40 == sizeof(org$frostlang$frost$Int32List));
org$frostlang$frost$Int32List* $tmp483 = (org$frostlang$frost$Int32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$Int32List$class);
frost$core$Int32 $tmp484 = param0.min;
frost$core$Int32 $tmp485 = param0.max;
frost$core$Int32 $tmp486 = (frost$core$Int32) {1u};
frost$core$Bit $tmp487 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT $tmp488 = frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$init$frost$core$Int32$frost$core$Int32$frost$core$Int32$frost$core$Bit($tmp484, $tmp485, $tmp486, $tmp487);
org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT($tmp483, $tmp488);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp483)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp483));
return ((frost$collections$ListView*) $tmp483);

}
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:703
FROST_ASSERT(40 == sizeof(org$frostlang$frost$Int32List));
org$frostlang$frost$Int32List* $tmp489 = (org$frostlang$frost$Int32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$Int32List$class);
org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT($tmp489, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp489)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp489));
return ((frost$collections$ListView*) $tmp489);

}
frost$core$Bit frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp490 = (frost$core$Int64) {0u};
int64_t $tmp491 = param1.value;
int64_t $tmp492 = $tmp490.value;
bool $tmp493 = $tmp491 >= $tmp492;
frost$core$Bit $tmp494 = (frost$core$Bit) {$tmp493};
bool $tmp495 = $tmp494.value;
if ($tmp495) goto block3; else goto block2;
block3:;
frost$core$Int32$wrapper* $tmp496;
$tmp496 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp496->value = param0;
ITable* $tmp497 = ((frost$collections$CollectionView*) $tmp496)->$class->itable;
while ($tmp497->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp497 = $tmp497->next;
}
$fn499 $tmp498 = $tmp497->methods[0];
frost$core$Int64 $tmp500 = $tmp498(((frost$collections$CollectionView*) $tmp496));
int64_t $tmp501 = param1.value;
int64_t $tmp502 = $tmp500.value;
bool $tmp503 = $tmp501 < $tmp502;
frost$core$Bit $tmp504 = (frost$core$Bit) {$tmp503};
bool $tmp505 = $tmp504.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp496)));
if ($tmp505) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp506 = (frost$core$Int64) {708u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s507, $tmp506, &$s508);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:709
frost$core$Int64 $tmp509 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from Int32.frost:709:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:209
int64_t $tmp510 = $tmp509.value;
int64_t $tmp511 = param1.value;
int64_t $tmp512 = $tmp510 << $tmp511;
frost$core$Int64 $tmp513 = (frost$core$Int64) {$tmp512};
// begin inline call to function frost.core.Int32.&&(other:frost.core.Int64):frost.core.Int64 from Int32.frost:709:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:226
int32_t $tmp514 = param0.value;
int64_t $tmp515 = $tmp513.value;
int64_t $tmp516 = ((int64_t) $tmp514) & $tmp515;
frost$core$Int64 $tmp517 = (frost$core$Int64) {$tmp516};
frost$core$Int64 $tmp518 = (frost$core$Int64) {0u};
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518.value;
bool $tmp521 = $tmp519 != $tmp520;
frost$core$Bit $tmp522 = (frost$core$Bit) {$tmp521};
return $tmp522;

}
frost$core$Int64 frost$core$Int32$get_count$R$frost$core$Int64(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:715
frost$core$Int64 $tmp523 = (frost$core$Int64) {32u};
return $tmp523;

}
frost$collections$Iterator* frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:725
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp524 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int32.get_asUInt64():frost.core.UInt64 from Int32.frost:725:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:792
int32_t $tmp525 = param0.value;
frost$core$UInt64 $tmp526 = (frost$core$UInt64) {((uint64_t) $tmp525)};
frost$core$UInt64 $tmp527 = (frost$core$UInt64) {2147483648u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp524, $tmp526, $tmp527);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp524)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp524));
return ((frost$collections$Iterator*) $tmp524);

}
frost$core$Int64 frost$core$Int32$get_hash$R$frost$core$Int64(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:730
int32_t $tmp528 = param0.value;
frost$core$Int64 $tmp529 = (frost$core$Int64) {((int64_t) $tmp528)};
return $tmp529;

}
frost$core$Int32$nullable frost$core$Int32$parse$frost$core$String$frost$core$Int64$R$frost$core$Int32$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp530 = (frost$core$Int64) {2u};
int64_t $tmp531 = param1.value;
int64_t $tmp532 = $tmp530.value;
bool $tmp533 = $tmp531 >= $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp536 = (frost$core$Int64) {36u};
int64_t $tmp537 = param1.value;
int64_t $tmp538 = $tmp536.value;
bool $tmp539 = $tmp537 <= $tmp538;
frost$core$Bit $tmp540 = (frost$core$Bit) {$tmp539};
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp542 = (frost$core$Int64) {736u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s543, $tmp542, &$s544);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:737
frost$core$Bit $tmp545 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s546);
bool $tmp547 = $tmp545.value;
if ($tmp547) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:738
frost$core$Int64 $tmp548 = (frost$core$Int64) {1u};
frost$core$Bit $tmp549 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp550 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp548, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp549);
frost$core$String* $tmp551 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp550);
frost$core$UInt64$nullable $tmp552 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp551, param1);
*(&local0) = $tmp552;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:739
frost$core$UInt64$nullable $tmp553 = *(&local0);
frost$core$Bit $tmp554 = (frost$core$Bit) {!$tmp553.nonnull};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:740
return ((frost$core$Int32$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:742
frost$core$UInt64$nullable $tmp556 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt32():frost.core.Int32 from Int32.frost:742:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:494
uint64_t $tmp557 = ((frost$core$UInt64) $tmp556.value).value;
frost$core$Int32 $tmp558 = (frost$core$Int32) {((int32_t) $tmp557)};
// begin inline call to function frost.core.Int32.-():frost.core.Int32 from Int32.frost:742:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:95
int32_t $tmp559 = $tmp558.value;
int32_t $tmp560 = -$tmp559;
frost$core$Int32 $tmp561 = (frost$core$Int32) {$tmp560};
return ((frost$core$Int32$nullable) { $tmp561, true });
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:745
frost$core$UInt64$nullable $tmp562 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp562;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:746
frost$core$UInt64$nullable $tmp563 = *(&local1);
frost$core$Bit $tmp564 = (frost$core$Bit) {!$tmp563.nonnull};
bool $tmp565 = $tmp564.value;
if ($tmp565) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:747
return ((frost$core$Int32$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:749
frost$core$UInt64$nullable $tmp566 = *(&local1);
// begin inline call to function frost.core.UInt64.get_asInt32():frost.core.Int32 from Int32.frost:749:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:494
uint64_t $tmp567 = ((frost$core$UInt64) $tmp566.value).value;
frost$core$Int32 $tmp568 = (frost$core$Int32) {((int32_t) $tmp567)};
return ((frost$core$Int32$nullable) { $tmp568, true });
block5:;
goto block14;
block14:;

}
frost$core$Int8 frost$core$Int32$get_asInt8$R$frost$core$Int8(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:756
int32_t $tmp569 = param0.value;
frost$core$Int8 $tmp570 = (frost$core$Int8) {((int8_t) $tmp569)};
return $tmp570;

}
frost$core$Int16 frost$core$Int32$get_asInt16$R$frost$core$Int16(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:762
int32_t $tmp571 = param0.value;
frost$core$Int16 $tmp572 = (frost$core$Int16) {((int16_t) $tmp571)};
return $tmp572;

}
frost$core$Int64 frost$core$Int32$get_asInt64$R$frost$core$Int64(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:768
int32_t $tmp573 = param0.value;
frost$core$Int64 $tmp574 = (frost$core$Int64) {((int64_t) $tmp573)};
return $tmp574;

}
frost$core$UInt8 frost$core$Int32$get_asUInt8$R$frost$core$UInt8(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:774
int32_t $tmp575 = param0.value;
frost$core$UInt8 $tmp576 = (frost$core$UInt8) {((uint8_t) $tmp575)};
return $tmp576;

}
frost$core$UInt16 frost$core$Int32$get_asUInt16$R$frost$core$UInt16(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:780
int32_t $tmp577 = param0.value;
frost$core$UInt16 $tmp578 = (frost$core$UInt16) {((uint16_t) $tmp577)};
return $tmp578;

}
frost$core$UInt32 frost$core$Int32$get_asUInt32$R$frost$core$UInt32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:786
int32_t $tmp579 = param0.value;
frost$core$UInt32 $tmp580 = (frost$core$UInt32) {((uint32_t) $tmp579)};
return $tmp580;

}
frost$core$UInt64 frost$core$Int32$get_asUInt64$R$frost$core$UInt64(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:792
int32_t $tmp581 = param0.value;
frost$core$UInt64 $tmp582 = (frost$core$UInt64) {((uint64_t) $tmp581)};
return $tmp582;

}
frost$core$Real32 frost$core$Int32$get_asReal32$R$frost$core$Real32(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:798
int32_t $tmp583 = param0.value;
frost$core$Real32 $tmp584 = (frost$core$Real32) {((float) $tmp583)};
return $tmp584;

}
frost$core$Real64 frost$core$Int32$get_asReal64$R$frost$core$Real64(frost$core$Int32 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:804
int32_t $tmp585 = param0.value;
frost$core$Real64 $tmp586 = (frost$core$Real64) {((double) $tmp585)};
return $tmp586;

}
frost$core$String* frost$core$Int32$get_asString$R$frost$core$String(frost$core$Int32 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int32 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:810
frost$core$Int64 $tmp587 = (frost$core$Int64) {11u};
*(&local0) = $tmp587;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:811
frost$core$Int64 $tmp588 = *(&local0);
int64_t $tmp589 = $tmp588.value;
frost$core$Char8* $tmp590 = ((frost$core$Char8*) frostAlloc($tmp589 * 1));
*(&local1) = $tmp590;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:812
frost$core$Int64 $tmp591 = *(&local0);
frost$core$Int64 $tmp592 = (frost$core$Int64) {1u};
int64_t $tmp593 = $tmp591.value;
int64_t $tmp594 = $tmp592.value;
int64_t $tmp595 = $tmp593 - $tmp594;
frost$core$Int64 $tmp596 = (frost$core$Int64) {$tmp595};
*(&local2) = $tmp596;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:813
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:814
frost$core$Int32 $tmp597 = *(&local3);
frost$core$Int32 $tmp598 = (frost$core$Int32) {0u};
int32_t $tmp599 = $tmp597.value;
int32_t $tmp600 = $tmp598.value;
bool $tmp601 = $tmp599 >= $tmp600;
frost$core$Bit $tmp602 = (frost$core$Bit) {$tmp601};
bool $tmp603 = $tmp602.value;
if ($tmp603) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:815
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:816
frost$core$Char8* $tmp604 = *(&local1);
frost$core$Int64 $tmp605 = *(&local2);
frost$core$Int32 $tmp606 = *(&local3);
frost$core$Int32 $tmp607 = (frost$core$Int32) {10u};
// begin inline call to function frost.core.Int32.%(other:frost.core.Int32):frost.core.Int32 from Int32.frost:816:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:137
int32_t $tmp608 = $tmp606.value;
int32_t $tmp609 = $tmp607.value;
int32_t $tmp610 = $tmp608 % $tmp609;
frost$core$Int32 $tmp611 = (frost$core$Int32) {$tmp610};
frost$core$Int32 $tmp612 = (frost$core$Int32) {48u};
int32_t $tmp613 = $tmp611.value;
int32_t $tmp614 = $tmp612.value;
int32_t $tmp615 = $tmp613 + $tmp614;
frost$core$Int32 $tmp616 = (frost$core$Int32) {$tmp615};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int32.frost:816:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:774
int32_t $tmp617 = $tmp616.value;
frost$core$UInt8 $tmp618 = (frost$core$UInt8) {((uint8_t) $tmp617)};
frost$core$Char8 $tmp619 = frost$core$Char8$init$frost$core$UInt8($tmp618);
int64_t $tmp620 = $tmp605.value;
$tmp604[$tmp620] = $tmp619;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:817
frost$core$Int32 $tmp621 = *(&local3);
frost$core$Int32 $tmp622 = (frost$core$Int32) {10u};
int32_t $tmp623 = $tmp621.value;
int32_t $tmp624 = $tmp622.value;
int32_t $tmp625 = $tmp623 / $tmp624;
frost$core$Int32 $tmp626 = (frost$core$Int32) {$tmp625};
*(&local3) = $tmp626;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:818
frost$core$Int64 $tmp627 = *(&local2);
frost$core$Int64 $tmp628 = (frost$core$Int64) {1u};
int64_t $tmp629 = $tmp627.value;
int64_t $tmp630 = $tmp628.value;
int64_t $tmp631 = $tmp629 - $tmp630;
frost$core$Int64 $tmp632 = (frost$core$Int64) {$tmp631};
*(&local2) = $tmp632;
frost$core$Int32 $tmp633 = *(&local3);
frost$core$Int32 $tmp634 = (frost$core$Int32) {0u};
int32_t $tmp635 = $tmp633.value;
int32_t $tmp636 = $tmp634.value;
bool $tmp637 = $tmp635 > $tmp636;
frost$core$Bit $tmp638 = (frost$core$Bit) {$tmp637};
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:821
frost$core$Int64 $tmp640 = *(&local2);
frost$core$Int64 $tmp641 = (frost$core$Int64) {1u};
int64_t $tmp642 = $tmp640.value;
int64_t $tmp643 = $tmp641.value;
int64_t $tmp644 = $tmp642 + $tmp643;
frost$core$Int64 $tmp645 = (frost$core$Int64) {$tmp644};
*(&local2) = $tmp645;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:824
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:825
frost$core$Char8* $tmp646 = *(&local1);
frost$core$Int64 $tmp647 = *(&local2);
frost$core$Int32 $tmp648 = (frost$core$Int32) {48u};
frost$core$Int32 $tmp649 = *(&local3);
frost$core$Int32 $tmp650 = (frost$core$Int32) {10u};
// begin inline call to function frost.core.Int32.%(other:frost.core.Int32):frost.core.Int32 from Int32.frost:825:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:137
int32_t $tmp651 = $tmp649.value;
int32_t $tmp652 = $tmp650.value;
int32_t $tmp653 = $tmp651 % $tmp652;
frost$core$Int32 $tmp654 = (frost$core$Int32) {$tmp653};
int32_t $tmp655 = $tmp648.value;
int32_t $tmp656 = $tmp654.value;
int32_t $tmp657 = $tmp655 - $tmp656;
frost$core$Int32 $tmp658 = (frost$core$Int32) {$tmp657};
// begin inline call to function frost.core.Int32.get_asUInt8():frost.core.UInt8 from Int32.frost:825:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:774
int32_t $tmp659 = $tmp658.value;
frost$core$UInt8 $tmp660 = (frost$core$UInt8) {((uint8_t) $tmp659)};
frost$core$Char8 $tmp661 = frost$core$Char8$init$frost$core$UInt8($tmp660);
int64_t $tmp662 = $tmp647.value;
$tmp646[$tmp662] = $tmp661;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:826
frost$core$Int32 $tmp663 = *(&local3);
frost$core$Int32 $tmp664 = (frost$core$Int32) {10u};
int32_t $tmp665 = $tmp663.value;
int32_t $tmp666 = $tmp664.value;
int32_t $tmp667 = $tmp665 / $tmp666;
frost$core$Int32 $tmp668 = (frost$core$Int32) {$tmp667};
*(&local3) = $tmp668;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:827
frost$core$Int64 $tmp669 = *(&local2);
frost$core$Int64 $tmp670 = (frost$core$Int64) {1u};
int64_t $tmp671 = $tmp669.value;
int64_t $tmp672 = $tmp670.value;
int64_t $tmp673 = $tmp671 - $tmp672;
frost$core$Int64 $tmp674 = (frost$core$Int64) {$tmp673};
*(&local2) = $tmp674;
frost$core$Int32 $tmp675 = *(&local3);
frost$core$Int32 $tmp676 = (frost$core$Int32) {0u};
int32_t $tmp677 = $tmp675.value;
int32_t $tmp678 = $tmp676.value;
bool $tmp679 = $tmp677 < $tmp678;
frost$core$Bit $tmp680 = (frost$core$Bit) {$tmp679};
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:830
frost$core$Char8* $tmp682 = *(&local1);
frost$core$Int64 $tmp683 = *(&local2);
frost$core$UInt8 $tmp684 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp685 = frost$core$Char8$init$frost$core$UInt8($tmp684);
int64_t $tmp686 = $tmp683.value;
$tmp682[$tmp686] = $tmp685;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:832
frost$core$Int64 $tmp687 = *(&local0);
frost$core$Int64 $tmp688 = *(&local2);
int64_t $tmp689 = $tmp687.value;
int64_t $tmp690 = $tmp688.value;
int64_t $tmp691 = $tmp689 - $tmp690;
frost$core$Int64 $tmp692 = (frost$core$Int64) {$tmp691};
*(&local4) = $tmp692;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:833
frost$core$Int64 $tmp693 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp694 = *(&local4);
frost$core$Bit $tmp695 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp696 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp693, $tmp694, $tmp695);
frost$core$Int64 $tmp697 = $tmp696.min;
*(&local5) = $tmp697;
frost$core$Int64 $tmp698 = $tmp696.max;
frost$core$Bit $tmp699 = $tmp696.inclusive;
bool $tmp700 = $tmp699.value;
frost$core$Int64 $tmp701 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp702 = $tmp701.value;
frost$core$UInt64 $tmp703 = (frost$core$UInt64) {((uint64_t) $tmp702)};
if ($tmp700) goto block18; else goto block19;
block18:;
int64_t $tmp704 = $tmp697.value;
int64_t $tmp705 = $tmp698.value;
bool $tmp706 = $tmp704 <= $tmp705;
frost$core$Bit $tmp707 = (frost$core$Bit) {$tmp706};
bool $tmp708 = $tmp707.value;
if ($tmp708) goto block15; else goto block16;
block19:;
int64_t $tmp709 = $tmp697.value;
int64_t $tmp710 = $tmp698.value;
bool $tmp711 = $tmp709 < $tmp710;
frost$core$Bit $tmp712 = (frost$core$Bit) {$tmp711};
bool $tmp713 = $tmp712.value;
if ($tmp713) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:834
frost$core$Char8* $tmp714 = *(&local1);
frost$core$Int64 $tmp715 = *(&local5);
frost$core$Char8* $tmp716 = *(&local1);
frost$core$Int64 $tmp717 = *(&local5);
frost$core$Int64 $tmp718 = *(&local2);
int64_t $tmp719 = $tmp717.value;
int64_t $tmp720 = $tmp718.value;
int64_t $tmp721 = $tmp719 + $tmp720;
frost$core$Int64 $tmp722 = (frost$core$Int64) {$tmp721};
int64_t $tmp723 = $tmp722.value;
frost$core$Char8 $tmp724 = $tmp716[$tmp723];
int64_t $tmp725 = $tmp715.value;
$tmp714[$tmp725] = $tmp724;
frost$core$Int64 $tmp726 = *(&local5);
int64_t $tmp727 = $tmp698.value;
int64_t $tmp728 = $tmp726.value;
int64_t $tmp729 = $tmp727 - $tmp728;
frost$core$Int64 $tmp730 = (frost$core$Int64) {$tmp729};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp731 = $tmp730.value;
frost$core$UInt64 $tmp732 = (frost$core$UInt64) {((uint64_t) $tmp731)};
if ($tmp700) goto block22; else goto block23;
block22:;
uint64_t $tmp733 = $tmp732.value;
uint64_t $tmp734 = $tmp703.value;
bool $tmp735 = $tmp733 >= $tmp734;
frost$core$Bit $tmp736 = (frost$core$Bit) {$tmp735};
bool $tmp737 = $tmp736.value;
if ($tmp737) goto block20; else goto block16;
block23:;
uint64_t $tmp738 = $tmp732.value;
uint64_t $tmp739 = $tmp703.value;
bool $tmp740 = $tmp738 > $tmp739;
frost$core$Bit $tmp741 = (frost$core$Bit) {$tmp740};
bool $tmp742 = $tmp741.value;
if ($tmp742) goto block20; else goto block16;
block20:;
int64_t $tmp743 = $tmp726.value;
int64_t $tmp744 = $tmp701.value;
int64_t $tmp745 = $tmp743 + $tmp744;
frost$core$Int64 $tmp746 = (frost$core$Int64) {$tmp745};
*(&local5) = $tmp746;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:836
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp747 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp748 = *(&local1);
frost$core$Int64 $tmp749 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp747, $tmp748, $tmp749);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp747));
return $tmp747;

}
frost$core$String* frost$core$Int32$format$frost$core$String$R$frost$core$String(frost$core$Int32 param0, frost$core$String* param1) {

frost$core$Int32 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:842
int32_t $tmp750 = param0.value;
bool $tmp751 = $tmp750 < 0u;
frost$core$Bit $tmp752 = (frost$core$Bit) {$tmp751};
// begin inline call to function frost.core.Int32.get_abs():frost.core.Int32 from Int32.frost:842:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:562
frost$core$Int32 $tmp753 = (frost$core$Int32) {0u};
int32_t $tmp754 = param0.value;
int32_t $tmp755 = $tmp753.value;
bool $tmp756 = $tmp754 < $tmp755;
frost$core$Bit $tmp757 = (frost$core$Bit) {$tmp756};
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:563
// begin inline call to function frost.core.Int32.-():frost.core.Int32 from Int32.frost:563:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:95
int32_t $tmp759 = param0.value;
int32_t $tmp760 = -$tmp759;
frost$core$Int32 $tmp761 = (frost$core$Int32) {$tmp760};
*(&local0) = $tmp761;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:565
*(&local0) = param0;
goto block1;
block1:;
frost$core$Int32 $tmp762 = *(&local0);
// begin inline call to function frost.core.Int32.get_asUInt64():frost.core.UInt64 from Int32.frost:842:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int32.frost:792
int32_t $tmp763 = $tmp762.value;
frost$core$UInt64 $tmp764 = (frost$core$UInt64) {((uint64_t) $tmp763)};
frost$core$UInt64 $tmp765 = (frost$core$UInt64) {4294967295u};
frost$core$String* $tmp766 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp752, $tmp764, $tmp765, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp766));
return $tmp766;

}
void frost$core$Int32$cleanup(frost$core$Int32 param0) {

return;

}

