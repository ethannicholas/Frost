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
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$SHL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$SHL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int32$$SHL$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int32$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int32 result = frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int32$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int32$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int32$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt32 result = frost$core$Int32$$SHR$frost$core$UInt32$R$frost$core$UInt32(((frost$core$Int32$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int32$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int32$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int32$wrapper*) p0)->value, p1);

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

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$Int32$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int32$_frost$collections$Key, { frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int32$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int32$_frost$collections$ListView, { frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int32$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int32$_frost$core$Comparable, { frost$core$Int32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int32$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int32$_frost$core$Formattable, { frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Int32$class_type frost$core$Int32$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int32$_frost$core$Equatable, { frost$core$Int32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int32$$ADD$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$ADD$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$SUB$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$SUB$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$SUB$R$frost$core$Int32$shim, frost$core$Int32$$MUL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$MUL$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$INTDIV$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$INTDIV$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$REM$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$DIV$frost$core$Int8$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int16$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int32$$DIV$frost$core$UInt8$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt16$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int32$$DIV$frost$core$Real32$R$frost$core$Real32$shim, frost$core$Int32$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int32$$BNOT$R$frost$core$Int32$shim, frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BAND$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$BOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$BXOR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$BXOR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$SHL$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$$SHR$frost$core$UInt32$R$frost$core$UInt32$shim, frost$core$Int32$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$Int32$get_abs$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32$shim, frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64$shim, frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64$shim, frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int32$get_count$R$frost$core$Int64$shim, frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int32$get_hash$R$frost$core$Int64$shim, frost$core$Int32$get_asInt8$R$frost$core$Int8$shim, frost$core$Int32$get_asInt16$R$frost$core$Int16$shim, frost$core$Int32$get_asInt64$R$frost$core$Int64$shim, frost$core$Int32$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int32$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int32$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int32$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int32$get_asReal32$R$frost$core$Real32$shim, frost$core$Int32$get_asReal64$R$frost$core$Real64$shim, frost$core$Int32$format$frost$core$String$R$frost$core$String$shim, frost$core$Int32$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int32$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int32$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$CollectionView, { frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$Iterable, { frost$core$Int32$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$Int32$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$Key, { frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int32$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int32$wrapper_frost$collections$ListView, { frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int32$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Comparable, { frost$core$Int32$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int32$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Formattable, { frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit$shim} };

static frost$core$String $s3;
frost$core$Int32$wrapperclass_type frost$core$Int32$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int32$wrapper_frost$core$Equatable, { frost$core$Int32$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn521)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32", 16, -3824106976036894752, NULL };
static frost$core$String $s529 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -8642535932052240879, NULL };
static frost$core$String $s530 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -7344325607249503472, NULL };
static frost$core$String $s558 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x33\x32\x2e\x66\x72\x6f\x73\x74", 11, -8642535932052240879, NULL };
static frost$core$String $s559 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x33\x32\x3f", 121, -8087126475298893784, NULL };
static frost$core$String $s561 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };

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
frost$core$Int64 frost$core$Int32$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 298
int32_t $tmp176 = param0.value;
int64_t $tmp177 = param1.value;
int64_t $tmp178 = ((int64_t) $tmp176) << $tmp177;
frost$core$Int64 $tmp179 = frost$core$Int64$init$builtin_int64($tmp178);
return $tmp179;

}
frost$core$UInt32 frost$core$Int32$$SHL$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 304
int32_t $tmp180 = param0.value;
uint32_t $tmp181 = param1.value;
uint32_t $tmp182 = ((uint32_t) $tmp180) << $tmp181;
frost$core$UInt32 $tmp183 = frost$core$UInt32$init$builtin_uint32($tmp182);
return $tmp183;

}
frost$core$UInt64 frost$core$Int32$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// line 310
int32_t $tmp184 = param0.value;
uint64_t $tmp185 = param1.value;
uint64_t $tmp186 = ((uint64_t) $tmp184) << $tmp185;
frost$core$UInt64 $tmp187 = frost$core$UInt64$init$builtin_uint64($tmp186);
return $tmp187;

}
frost$core$Int32 frost$core$Int32$$SHR$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 316
int32_t $tmp188 = param0.value;
int32_t $tmp189 = param1.value;
int32_t $tmp190 = $tmp188 >> $tmp189;
frost$core$Int32 $tmp191 = frost$core$Int32$init$builtin_int32($tmp190);
return $tmp191;

}
frost$core$Int64 frost$core$Int32$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 322
int32_t $tmp192 = param0.value;
int64_t $tmp193 = param1.value;
int64_t $tmp194 = ((int64_t) $tmp192) >> $tmp193;
frost$core$Int64 $tmp195 = frost$core$Int64$init$builtin_int64($tmp194);
return $tmp195;

}
frost$core$UInt32 frost$core$Int32$$SHR$frost$core$UInt32$R$frost$core$UInt32(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 328
int32_t $tmp196 = param0.value;
uint32_t $tmp197 = param1.value;
uint32_t $tmp198 = ((uint32_t) $tmp196) >> $tmp197;
frost$core$UInt32 $tmp199 = frost$core$UInt32$init$builtin_uint32($tmp198);
return $tmp199;

}
frost$core$UInt64 frost$core$Int32$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int32 param0, frost$core$UInt64 param1) {

// line 334
int32_t $tmp200 = param0.value;
uint64_t $tmp201 = param1.value;
uint64_t $tmp202 = ((uint64_t) $tmp200) >> $tmp201;
frost$core$UInt64 $tmp203 = frost$core$UInt64$init$builtin_uint64($tmp202);
return $tmp203;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 340
int32_t $tmp204 = param0.value;
int8_t $tmp205 = param1.value;
bool $tmp206 = $tmp204 == ((int32_t) $tmp205);
frost$core$Bit $tmp207 = frost$core$Bit$init$builtin_bit($tmp206);
return $tmp207;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 346
int32_t $tmp208 = param0.value;
int16_t $tmp209 = param1.value;
bool $tmp210 = $tmp208 == ((int32_t) $tmp209);
frost$core$Bit $tmp211 = frost$core$Bit$init$builtin_bit($tmp210);
return $tmp211;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 353
int32_t $tmp212 = param0.value;
int32_t $tmp213 = param1.value;
bool $tmp214 = $tmp212 == $tmp213;
frost$core$Bit $tmp215 = frost$core$Bit$init$builtin_bit($tmp214);
return $tmp215;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 359
int32_t $tmp216 = param0.value;
int64_t $tmp217 = param1.value;
bool $tmp218 = ((int64_t) $tmp216) == $tmp217;
frost$core$Bit $tmp219 = frost$core$Bit$init$builtin_bit($tmp218);
return $tmp219;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 365
int32_t $tmp220 = param0.value;
uint8_t $tmp221 = param1.value;
bool $tmp222 = ((int64_t) $tmp220) == ((int64_t) $tmp221);
frost$core$Bit $tmp223 = frost$core$Bit$init$builtin_bit($tmp222);
return $tmp223;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 371
int32_t $tmp224 = param0.value;
uint16_t $tmp225 = param1.value;
bool $tmp226 = ((int64_t) $tmp224) == ((int64_t) $tmp225);
frost$core$Bit $tmp227 = frost$core$Bit$init$builtin_bit($tmp226);
return $tmp227;

}
frost$core$Bit frost$core$Int32$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 377
int32_t $tmp228 = param0.value;
uint32_t $tmp229 = param1.value;
bool $tmp230 = ((int64_t) $tmp228) == ((int64_t) $tmp229);
frost$core$Bit $tmp231 = frost$core$Bit$init$builtin_bit($tmp230);
return $tmp231;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 383
int32_t $tmp232 = param0.value;
int8_t $tmp233 = param1.value;
bool $tmp234 = $tmp232 != ((int32_t) $tmp233);
frost$core$Bit $tmp235 = frost$core$Bit$init$builtin_bit($tmp234);
return $tmp235;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 389
int32_t $tmp236 = param0.value;
int16_t $tmp237 = param1.value;
bool $tmp238 = $tmp236 != ((int32_t) $tmp237);
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238);
return $tmp239;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 396
int32_t $tmp240 = param0.value;
int32_t $tmp241 = param1.value;
bool $tmp242 = $tmp240 != $tmp241;
frost$core$Bit $tmp243 = frost$core$Bit$init$builtin_bit($tmp242);
return $tmp243;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 402
int32_t $tmp244 = param0.value;
int64_t $tmp245 = param1.value;
bool $tmp246 = ((int64_t) $tmp244) != $tmp245;
frost$core$Bit $tmp247 = frost$core$Bit$init$builtin_bit($tmp246);
return $tmp247;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 408
int32_t $tmp248 = param0.value;
uint8_t $tmp249 = param1.value;
bool $tmp250 = ((int64_t) $tmp248) != ((int64_t) $tmp249);
frost$core$Bit $tmp251 = frost$core$Bit$init$builtin_bit($tmp250);
return $tmp251;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 414
int32_t $tmp252 = param0.value;
uint16_t $tmp253 = param1.value;
bool $tmp254 = ((int64_t) $tmp252) != ((int64_t) $tmp253);
frost$core$Bit $tmp255 = frost$core$Bit$init$builtin_bit($tmp254);
return $tmp255;

}
frost$core$Bit frost$core$Int32$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 420
int32_t $tmp256 = param0.value;
uint32_t $tmp257 = param1.value;
bool $tmp258 = ((int64_t) $tmp256) != ((int64_t) $tmp257);
frost$core$Bit $tmp259 = frost$core$Bit$init$builtin_bit($tmp258);
return $tmp259;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 426
int32_t $tmp260 = param0.value;
int8_t $tmp261 = param1.value;
bool $tmp262 = $tmp260 < ((int32_t) $tmp261);
frost$core$Bit $tmp263 = frost$core$Bit$init$builtin_bit($tmp262);
return $tmp263;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 432
int32_t $tmp264 = param0.value;
int16_t $tmp265 = param1.value;
bool $tmp266 = $tmp264 < ((int32_t) $tmp265);
frost$core$Bit $tmp267 = frost$core$Bit$init$builtin_bit($tmp266);
return $tmp267;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 439
int32_t $tmp268 = param0.value;
int32_t $tmp269 = param1.value;
bool $tmp270 = $tmp268 < $tmp269;
frost$core$Bit $tmp271 = frost$core$Bit$init$builtin_bit($tmp270);
return $tmp271;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 445
int32_t $tmp272 = param0.value;
int64_t $tmp273 = param1.value;
bool $tmp274 = ((int64_t) $tmp272) < $tmp273;
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit($tmp274);
return $tmp275;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 451
int32_t $tmp276 = param0.value;
uint8_t $tmp277 = param1.value;
bool $tmp278 = ((int64_t) $tmp276) < ((int64_t) $tmp277);
frost$core$Bit $tmp279 = frost$core$Bit$init$builtin_bit($tmp278);
return $tmp279;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 457
int32_t $tmp280 = param0.value;
uint16_t $tmp281 = param1.value;
bool $tmp282 = ((int64_t) $tmp280) < ((int64_t) $tmp281);
frost$core$Bit $tmp283 = frost$core$Bit$init$builtin_bit($tmp282);
return $tmp283;

}
frost$core$Bit frost$core$Int32$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 463
int32_t $tmp284 = param0.value;
uint32_t $tmp285 = param1.value;
bool $tmp286 = ((int64_t) $tmp284) < ((int64_t) $tmp285);
frost$core$Bit $tmp287 = frost$core$Bit$init$builtin_bit($tmp286);
return $tmp287;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 469
int32_t $tmp288 = param0.value;
int8_t $tmp289 = param1.value;
bool $tmp290 = $tmp288 > ((int32_t) $tmp289);
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit($tmp290);
return $tmp291;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 475
int32_t $tmp292 = param0.value;
int16_t $tmp293 = param1.value;
bool $tmp294 = $tmp292 > ((int32_t) $tmp293);
frost$core$Bit $tmp295 = frost$core$Bit$init$builtin_bit($tmp294);
return $tmp295;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 482
int32_t $tmp296 = param0.value;
int32_t $tmp297 = param1.value;
bool $tmp298 = $tmp296 > $tmp297;
frost$core$Bit $tmp299 = frost$core$Bit$init$builtin_bit($tmp298);
return $tmp299;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 488
int32_t $tmp300 = param0.value;
int64_t $tmp301 = param1.value;
bool $tmp302 = ((int64_t) $tmp300) > $tmp301;
frost$core$Bit $tmp303 = frost$core$Bit$init$builtin_bit($tmp302);
return $tmp303;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 494
int32_t $tmp304 = param0.value;
uint8_t $tmp305 = param1.value;
bool $tmp306 = ((int64_t) $tmp304) > ((int64_t) $tmp305);
frost$core$Bit $tmp307 = frost$core$Bit$init$builtin_bit($tmp306);
return $tmp307;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 500
int32_t $tmp308 = param0.value;
uint16_t $tmp309 = param1.value;
bool $tmp310 = ((int64_t) $tmp308) > ((int64_t) $tmp309);
frost$core$Bit $tmp311 = frost$core$Bit$init$builtin_bit($tmp310);
return $tmp311;

}
frost$core$Bit frost$core$Int32$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 506
int32_t $tmp312 = param0.value;
uint32_t $tmp313 = param1.value;
bool $tmp314 = ((int64_t) $tmp312) > ((int64_t) $tmp313);
frost$core$Bit $tmp315 = frost$core$Bit$init$builtin_bit($tmp314);
return $tmp315;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 512
int32_t $tmp316 = param0.value;
int8_t $tmp317 = param1.value;
bool $tmp318 = $tmp316 >= ((int32_t) $tmp317);
frost$core$Bit $tmp319 = frost$core$Bit$init$builtin_bit($tmp318);
return $tmp319;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 518
int32_t $tmp320 = param0.value;
int16_t $tmp321 = param1.value;
bool $tmp322 = $tmp320 >= ((int32_t) $tmp321);
frost$core$Bit $tmp323 = frost$core$Bit$init$builtin_bit($tmp322);
return $tmp323;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 525
int32_t $tmp324 = param0.value;
int32_t $tmp325 = param1.value;
bool $tmp326 = $tmp324 >= $tmp325;
frost$core$Bit $tmp327 = frost$core$Bit$init$builtin_bit($tmp326);
return $tmp327;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 531
int32_t $tmp328 = param0.value;
int64_t $tmp329 = param1.value;
bool $tmp330 = ((int64_t) $tmp328) >= $tmp329;
frost$core$Bit $tmp331 = frost$core$Bit$init$builtin_bit($tmp330);
return $tmp331;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 537
int32_t $tmp332 = param0.value;
uint8_t $tmp333 = param1.value;
bool $tmp334 = ((int64_t) $tmp332) >= ((int64_t) $tmp333);
frost$core$Bit $tmp335 = frost$core$Bit$init$builtin_bit($tmp334);
return $tmp335;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 543
int32_t $tmp336 = param0.value;
uint16_t $tmp337 = param1.value;
bool $tmp338 = ((int64_t) $tmp336) >= ((int64_t) $tmp337);
frost$core$Bit $tmp339 = frost$core$Bit$init$builtin_bit($tmp338);
return $tmp339;

}
frost$core$Bit frost$core$Int32$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 549
int32_t $tmp340 = param0.value;
uint32_t $tmp341 = param1.value;
bool $tmp342 = ((int64_t) $tmp340) >= ((int64_t) $tmp341);
frost$core$Bit $tmp343 = frost$core$Bit$init$builtin_bit($tmp342);
return $tmp343;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 555
int32_t $tmp344 = param0.value;
int8_t $tmp345 = param1.value;
bool $tmp346 = $tmp344 <= ((int32_t) $tmp345);
frost$core$Bit $tmp347 = frost$core$Bit$init$builtin_bit($tmp346);
return $tmp347;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 561
int32_t $tmp348 = param0.value;
int16_t $tmp349 = param1.value;
bool $tmp350 = $tmp348 <= ((int32_t) $tmp349);
frost$core$Bit $tmp351 = frost$core$Bit$init$builtin_bit($tmp350);
return $tmp351;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 568
int32_t $tmp352 = param0.value;
int32_t $tmp353 = param1.value;
bool $tmp354 = $tmp352 <= $tmp353;
frost$core$Bit $tmp355 = frost$core$Bit$init$builtin_bit($tmp354);
return $tmp355;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 574
int32_t $tmp356 = param0.value;
int64_t $tmp357 = param1.value;
bool $tmp358 = ((int64_t) $tmp356) <= $tmp357;
frost$core$Bit $tmp359 = frost$core$Bit$init$builtin_bit($tmp358);
return $tmp359;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 580
int32_t $tmp360 = param0.value;
uint8_t $tmp361 = param1.value;
bool $tmp362 = ((int64_t) $tmp360) <= ((int64_t) $tmp361);
frost$core$Bit $tmp363 = frost$core$Bit$init$builtin_bit($tmp362);
return $tmp363;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 586
int32_t $tmp364 = param0.value;
uint16_t $tmp365 = param1.value;
bool $tmp366 = ((int64_t) $tmp364) <= ((int64_t) $tmp365);
frost$core$Bit $tmp367 = frost$core$Bit$init$builtin_bit($tmp366);
return $tmp367;

}
frost$core$Bit frost$core$Int32$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 592
int32_t $tmp368 = param0.value;
uint32_t $tmp369 = param1.value;
bool $tmp370 = ((int64_t) $tmp368) <= ((int64_t) $tmp369);
frost$core$Bit $tmp371 = frost$core$Bit$init$builtin_bit($tmp370);
return $tmp371;

}
frost$core$Int32 frost$core$Int32$get_abs$R$frost$core$Int32(frost$core$Int32 param0) {

// line 598
frost$core$Int32 $tmp372 = (frost$core$Int32) {0};
int32_t $tmp373 = param0.value;
int32_t $tmp374 = $tmp372.value;
bool $tmp375 = $tmp373 < $tmp374;
frost$core$Bit $tmp376 = (frost$core$Bit) {$tmp375};
bool $tmp377 = $tmp376.value;
if ($tmp377) goto block1; else goto block2;
block1:;
// line 599
frost$core$Int32 $tmp378 = frost$core$Int32$$SUB$R$frost$core$Int32(param0);
return $tmp378;
block2:;
// line 601
return param0;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 607
int32_t $tmp379 = param0.value;
int8_t $tmp380 = param1.value;
bool $tmp381 = $tmp379 < ((int32_t) $tmp380);
frost$core$Bit $tmp382 = frost$core$Bit$init$builtin_bit($tmp381);
bool $tmp383 = $tmp382.value;
if ($tmp383) goto block1; else goto block2;
block1:;
// line 608
int32_t $tmp384 = param0.value;
frost$core$Int32 $tmp385 = frost$core$Int32$init$builtin_int32($tmp384);
return $tmp385;
block2:;
// line 610
int8_t $tmp386 = param1.value;
frost$core$Int32 $tmp387 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp386));
return $tmp387;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 616
int32_t $tmp388 = param0.value;
int16_t $tmp389 = param1.value;
bool $tmp390 = $tmp388 < ((int32_t) $tmp389);
frost$core$Bit $tmp391 = frost$core$Bit$init$builtin_bit($tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block1; else goto block2;
block1:;
// line 617
int32_t $tmp393 = param0.value;
frost$core$Int32 $tmp394 = frost$core$Int32$init$builtin_int32($tmp393);
return $tmp394;
block2:;
// line 619
int16_t $tmp395 = param1.value;
frost$core$Int32 $tmp396 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp395));
return $tmp396;

}
frost$core$Int32 frost$core$Int32$min$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 625
int32_t $tmp397 = param0.value;
int32_t $tmp398 = param1.value;
bool $tmp399 = $tmp397 < $tmp398;
frost$core$Bit $tmp400 = frost$core$Bit$init$builtin_bit($tmp399);
bool $tmp401 = $tmp400.value;
if ($tmp401) goto block1; else goto block2;
block1:;
// line 626
int32_t $tmp402 = param0.value;
frost$core$Int32 $tmp403 = frost$core$Int32$init$builtin_int32($tmp402);
return $tmp403;
block2:;
// line 628
int32_t $tmp404 = param1.value;
frost$core$Int32 $tmp405 = frost$core$Int32$init$builtin_int32($tmp404);
return $tmp405;

}
frost$core$Int64 frost$core$Int32$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 634
int32_t $tmp406 = param0.value;
int64_t $tmp407 = param1.value;
bool $tmp408 = ((int64_t) $tmp406) < $tmp407;
frost$core$Bit $tmp409 = frost$core$Bit$init$builtin_bit($tmp408);
bool $tmp410 = $tmp409.value;
if ($tmp410) goto block1; else goto block2;
block1:;
// line 635
int32_t $tmp411 = param0.value;
frost$core$Int64 $tmp412 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp411));
return $tmp412;
block2:;
// line 637
int64_t $tmp413 = param1.value;
frost$core$Int64 $tmp414 = frost$core$Int64$init$builtin_int64($tmp413);
return $tmp414;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 643
int32_t $tmp415 = param0.value;
uint8_t $tmp416 = param1.value;
bool $tmp417 = ((int64_t) $tmp415) < ((int64_t) $tmp416);
frost$core$Bit $tmp418 = frost$core$Bit$init$builtin_bit($tmp417);
bool $tmp419 = $tmp418.value;
if ($tmp419) goto block1; else goto block2;
block1:;
// line 644
int32_t $tmp420 = param0.value;
frost$core$Int64 $tmp421 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp420));
return $tmp421;
block2:;
// line 646
uint8_t $tmp422 = param1.value;
frost$core$Int64 $tmp423 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp422));
return $tmp423;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 652
int32_t $tmp424 = param0.value;
uint16_t $tmp425 = param1.value;
bool $tmp426 = ((int64_t) $tmp424) < ((int64_t) $tmp425);
frost$core$Bit $tmp427 = frost$core$Bit$init$builtin_bit($tmp426);
bool $tmp428 = $tmp427.value;
if ($tmp428) goto block1; else goto block2;
block1:;
// line 653
int32_t $tmp429 = param0.value;
frost$core$Int64 $tmp430 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp429));
return $tmp430;
block2:;
// line 655
uint16_t $tmp431 = param1.value;
frost$core$Int64 $tmp432 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp431));
return $tmp432;

}
frost$core$Int64 frost$core$Int32$min$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 661
int32_t $tmp433 = param0.value;
uint32_t $tmp434 = param1.value;
bool $tmp435 = ((int64_t) $tmp433) < ((int64_t) $tmp434);
frost$core$Bit $tmp436 = frost$core$Bit$init$builtin_bit($tmp435);
bool $tmp437 = $tmp436.value;
if ($tmp437) goto block1; else goto block2;
block1:;
// line 662
int32_t $tmp438 = param0.value;
frost$core$Int64 $tmp439 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp438));
return $tmp439;
block2:;
// line 664
uint32_t $tmp440 = param1.value;
frost$core$Int64 $tmp441 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp440));
return $tmp441;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int8$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int8 param1) {

// line 671
int32_t $tmp442 = param0.value;
int8_t $tmp443 = param1.value;
bool $tmp444 = $tmp442 > ((int32_t) $tmp443);
frost$core$Bit $tmp445 = frost$core$Bit$init$builtin_bit($tmp444);
bool $tmp446 = $tmp445.value;
if ($tmp446) goto block1; else goto block2;
block1:;
// line 672
int32_t $tmp447 = param0.value;
frost$core$Int32 $tmp448 = frost$core$Int32$init$builtin_int32($tmp447);
return $tmp448;
block2:;
// line 674
int8_t $tmp449 = param1.value;
frost$core$Int32 $tmp450 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp449));
return $tmp450;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int16$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int16 param1) {

// line 680
int32_t $tmp451 = param0.value;
int16_t $tmp452 = param1.value;
bool $tmp453 = $tmp451 > ((int32_t) $tmp452);
frost$core$Bit $tmp454 = frost$core$Bit$init$builtin_bit($tmp453);
bool $tmp455 = $tmp454.value;
if ($tmp455) goto block1; else goto block2;
block1:;
// line 681
int32_t $tmp456 = param0.value;
frost$core$Int32 $tmp457 = frost$core$Int32$init$builtin_int32($tmp456);
return $tmp457;
block2:;
// line 683
int16_t $tmp458 = param1.value;
frost$core$Int32 $tmp459 = frost$core$Int32$init$builtin_int32(((int32_t) $tmp458));
return $tmp459;

}
frost$core$Int32 frost$core$Int32$max$frost$core$Int32$R$frost$core$Int32(frost$core$Int32 param0, frost$core$Int32 param1) {

// line 689
int32_t $tmp460 = param0.value;
int32_t $tmp461 = param1.value;
bool $tmp462 = $tmp460 > $tmp461;
frost$core$Bit $tmp463 = frost$core$Bit$init$builtin_bit($tmp462);
bool $tmp464 = $tmp463.value;
if ($tmp464) goto block1; else goto block2;
block1:;
// line 690
int32_t $tmp465 = param0.value;
frost$core$Int32 $tmp466 = frost$core$Int32$init$builtin_int32($tmp465);
return $tmp466;
block2:;
// line 692
int32_t $tmp467 = param1.value;
frost$core$Int32 $tmp468 = frost$core$Int32$init$builtin_int32($tmp467);
return $tmp468;

}
frost$core$Int64 frost$core$Int32$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int32 param0, frost$core$Int64 param1) {

// line 698
int32_t $tmp469 = param0.value;
int64_t $tmp470 = param1.value;
bool $tmp471 = ((int64_t) $tmp469) > $tmp470;
frost$core$Bit $tmp472 = frost$core$Bit$init$builtin_bit($tmp471);
bool $tmp473 = $tmp472.value;
if ($tmp473) goto block1; else goto block2;
block1:;
// line 699
int32_t $tmp474 = param0.value;
frost$core$Int64 $tmp475 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp474));
return $tmp475;
block2:;
// line 701
int64_t $tmp476 = param1.value;
frost$core$Int64 $tmp477 = frost$core$Int64$init$builtin_int64($tmp476);
return $tmp477;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt8$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt8 param1) {

// line 707
int32_t $tmp478 = param0.value;
uint8_t $tmp479 = param1.value;
bool $tmp480 = ((int64_t) $tmp478) > ((int64_t) $tmp479);
frost$core$Bit $tmp481 = frost$core$Bit$init$builtin_bit($tmp480);
bool $tmp482 = $tmp481.value;
if ($tmp482) goto block1; else goto block2;
block1:;
// line 708
int32_t $tmp483 = param0.value;
frost$core$Int64 $tmp484 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp483));
return $tmp484;
block2:;
// line 710
uint8_t $tmp485 = param1.value;
frost$core$Int64 $tmp486 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp485));
return $tmp486;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt16$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt16 param1) {

// line 716
int32_t $tmp487 = param0.value;
uint16_t $tmp488 = param1.value;
bool $tmp489 = ((int64_t) $tmp487) > ((int64_t) $tmp488);
frost$core$Bit $tmp490 = frost$core$Bit$init$builtin_bit($tmp489);
bool $tmp491 = $tmp490.value;
if ($tmp491) goto block1; else goto block2;
block1:;
// line 717
int32_t $tmp492 = param0.value;
frost$core$Int64 $tmp493 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp492));
return $tmp493;
block2:;
// line 719
uint16_t $tmp494 = param1.value;
frost$core$Int64 $tmp495 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp494));
return $tmp495;

}
frost$core$Int64 frost$core$Int32$max$frost$core$UInt32$R$frost$core$Int64(frost$core$Int32 param0, frost$core$UInt32 param1) {

// line 725
int32_t $tmp496 = param0.value;
uint32_t $tmp497 = param1.value;
bool $tmp498 = ((int64_t) $tmp496) > ((int64_t) $tmp497);
frost$core$Bit $tmp499 = frost$core$Bit$init$builtin_bit($tmp498);
bool $tmp500 = $tmp499.value;
if ($tmp500) goto block1; else goto block2;
block1:;
// line 726
int32_t $tmp501 = param0.value;
frost$core$Int64 $tmp502 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp501));
return $tmp502;
block2:;
// line 728
uint32_t $tmp503 = param1.value;
frost$core$Int64 $tmp504 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp503));
return $tmp504;

}
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$Range$LTfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$Range$LTfrost$core$Int32$GT param0) {

// line 734
FROST_ASSERT(40 == sizeof(org$frostlang$frost$Int32List));
org$frostlang$frost$Int32List* $tmp505 = (org$frostlang$frost$Int32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$Int32List$class);
frost$core$Int32 $tmp506 = param0.min;
frost$core$Int32 $tmp507 = param0.max;
frost$core$Int32 $tmp508 = (frost$core$Int32) {1};
frost$core$Bit $tmp509 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT $tmp510 = frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$init$frost$core$Int32$frost$core$Int32$frost$core$Int32$frost$core$Bit($tmp506, $tmp507, $tmp508, $tmp509);
org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT($tmp505, $tmp510);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp505)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp505));
return ((frost$collections$ListView*) $tmp505);

}
frost$collections$ListView* frost$core$Int32$$IDX$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT$R$frost$collections$ListView$LTfrost$core$Int32$GT(frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT param0) {

// line 739
FROST_ASSERT(40 == sizeof(org$frostlang$frost$Int32List));
org$frostlang$frost$Int32List* $tmp511 = (org$frostlang$frost$Int32List*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frost$Int32List$class);
org$frostlang$frost$Int32List$init$frost$core$SteppedRange$LTfrost$core$Int32$Cfrost$core$Int32$GT($tmp511, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp511)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp511));
return ((frost$collections$ListView*) $tmp511);

}
frost$core$Bit frost$core$Int32$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int32 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp512 = (frost$core$Int64) {0};
int64_t $tmp513 = param1.value;
int64_t $tmp514 = $tmp512.value;
bool $tmp515 = $tmp513 >= $tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block3; else goto block2;
block3:;
frost$core$Int32$wrapper* $tmp518;
$tmp518 = (frost$core$Int32$wrapper*) frostObjectAlloc(20, (frost$core$Class*) &frost$core$Int32$wrapperclass);
$tmp518->value = param0;
ITable* $tmp519 = ((frost$collections$CollectionView*) $tmp518)->$class->itable;
while ($tmp519->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp519 = $tmp519->next;
}
$fn521 $tmp520 = $tmp519->methods[0];
frost$core$Int64 $tmp522 = $tmp520(((frost$collections$CollectionView*) $tmp518));
int64_t $tmp523 = param1.value;
int64_t $tmp524 = $tmp522.value;
bool $tmp525 = $tmp523 < $tmp524;
frost$core$Bit $tmp526 = (frost$core$Bit) {$tmp525};
bool $tmp527 = $tmp526.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp518)));
if ($tmp527) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp528 = (frost$core$Int64) {744};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s529, $tmp528, &$s530);
abort(); // unreachable
block1:;
// line 745
frost$core$Int64 $tmp531 = (frost$core$Int64) {1};
frost$core$Int64 $tmp532 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp531, param1);
frost$core$Int64 $tmp533 = frost$core$Int32$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp532);
frost$core$Int64 $tmp534 = (frost$core$Int64) {0};
int64_t $tmp535 = $tmp533.value;
int64_t $tmp536 = $tmp534.value;
bool $tmp537 = $tmp535 != $tmp536;
frost$core$Bit $tmp538 = (frost$core$Bit) {$tmp537};
return $tmp538;

}
frost$core$Int64 frost$core$Int32$get_count$R$frost$core$Int64(frost$core$Int32 param0) {

// line 751
frost$core$Int64 $tmp539 = (frost$core$Int64) {32};
return $tmp539;

}
frost$collections$Iterator* frost$core$Int32$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int32 param0) {

// line 756
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp540 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp541 = frost$core$Int32$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp542 = (frost$core$UInt64) {2147483648};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp540, $tmp541, $tmp542);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp540)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp540));
return ((frost$collections$Iterator*) $tmp540);

}
frost$core$Int64 frost$core$Int32$get_hash$R$frost$core$Int64(frost$core$Int32 param0) {

// line 761
int32_t $tmp543 = param0.value;
frost$core$Int64 $tmp544 = (frost$core$Int64) {((int64_t) $tmp543)};
return $tmp544;

}
frost$core$Int32$nullable frost$core$Int32$parse$frost$core$String$frost$core$Int64$R$frost$core$Int32$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp545 = (frost$core$Int64) {2};
int64_t $tmp546 = param1.value;
int64_t $tmp547 = $tmp545.value;
bool $tmp548 = $tmp546 >= $tmp547;
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp551 = (frost$core$Int64) {36};
int64_t $tmp552 = param1.value;
int64_t $tmp553 = $tmp551.value;
bool $tmp554 = $tmp552 <= $tmp553;
frost$core$Bit $tmp555 = (frost$core$Bit) {$tmp554};
bool $tmp556 = $tmp555.value;
if ($tmp556) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp557 = (frost$core$Int64) {767};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s558, $tmp557, &$s559);
abort(); // unreachable
block1:;
// line 768
frost$core$Bit $tmp560 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s561);
bool $tmp562 = $tmp560.value;
if ($tmp562) goto block4; else goto block6;
block4:;
// line 769
frost$core$Int64 $tmp563 = (frost$core$Int64) {1};
frost$core$Bit $tmp564 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp565 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp563, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp564);
frost$core$String* $tmp566 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp565);
frost$core$UInt64$nullable $tmp567 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp566, param1);
*(&local0) = $tmp567;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp566));
// line 770
frost$core$UInt64$nullable $tmp568 = *(&local0);
frost$core$Bit $tmp569 = frost$core$Bit$init$builtin_bit(!$tmp568.nonnull);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block7; else goto block8;
block7:;
// line 771
return ((frost$core$Int32$nullable) { .nonnull = false });
block8:;
// line 773
frost$core$UInt64$nullable $tmp571 = *(&local0);
frost$core$Int32 $tmp572 = frost$core$UInt64$get_asInt32$R$frost$core$Int32(((frost$core$UInt64) $tmp571.value));
frost$core$Int32 $tmp573 = frost$core$Int32$$SUB$R$frost$core$Int32($tmp572);
return ((frost$core$Int32$nullable) { $tmp573, true });
block6:;
// line 1
// line 776
frost$core$UInt64$nullable $tmp574 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp574;
// line 777
frost$core$UInt64$nullable $tmp575 = *(&local1);
frost$core$Bit $tmp576 = frost$core$Bit$init$builtin_bit(!$tmp575.nonnull);
bool $tmp577 = $tmp576.value;
if ($tmp577) goto block9; else goto block10;
block9:;
// line 778
return ((frost$core$Int32$nullable) { .nonnull = false });
block10:;
// line 780
frost$core$UInt64$nullable $tmp578 = *(&local1);
frost$core$Int32 $tmp579 = frost$core$UInt64$get_asInt32$R$frost$core$Int32(((frost$core$UInt64) $tmp578.value));
return ((frost$core$Int32$nullable) { $tmp579, true });
block5:;
goto block11;
block11:;

}
frost$core$Int8 frost$core$Int32$get_asInt8$R$frost$core$Int8(frost$core$Int32 param0) {

// line 787
int32_t $tmp580 = param0.value;
frost$core$Int8 $tmp581 = (frost$core$Int8) {((int8_t) $tmp580)};
return $tmp581;

}
frost$core$Int16 frost$core$Int32$get_asInt16$R$frost$core$Int16(frost$core$Int32 param0) {

// line 793
int32_t $tmp582 = param0.value;
frost$core$Int16 $tmp583 = (frost$core$Int16) {((int16_t) $tmp582)};
return $tmp583;

}
frost$core$Int64 frost$core$Int32$get_asInt64$R$frost$core$Int64(frost$core$Int32 param0) {

// line 799
int32_t $tmp584 = param0.value;
frost$core$Int64 $tmp585 = (frost$core$Int64) {((int64_t) $tmp584)};
return $tmp585;

}
frost$core$UInt8 frost$core$Int32$get_asUInt8$R$frost$core$UInt8(frost$core$Int32 param0) {

// line 805
int32_t $tmp586 = param0.value;
frost$core$UInt8 $tmp587 = (frost$core$UInt8) {((uint8_t) $tmp586)};
return $tmp587;

}
frost$core$UInt16 frost$core$Int32$get_asUInt16$R$frost$core$UInt16(frost$core$Int32 param0) {

// line 811
int32_t $tmp588 = param0.value;
frost$core$UInt16 $tmp589 = (frost$core$UInt16) {((uint16_t) $tmp588)};
return $tmp589;

}
frost$core$UInt32 frost$core$Int32$get_asUInt32$R$frost$core$UInt32(frost$core$Int32 param0) {

// line 817
int32_t $tmp590 = param0.value;
frost$core$UInt32 $tmp591 = (frost$core$UInt32) {((uint32_t) $tmp590)};
return $tmp591;

}
frost$core$UInt64 frost$core$Int32$get_asUInt64$R$frost$core$UInt64(frost$core$Int32 param0) {

// line 823
int32_t $tmp592 = param0.value;
frost$core$UInt64 $tmp593 = (frost$core$UInt64) {((uint64_t) $tmp592)};
return $tmp593;

}
frost$core$Real32 frost$core$Int32$get_asReal32$R$frost$core$Real32(frost$core$Int32 param0) {

// line 829
int32_t $tmp594 = param0.value;
frost$core$Real32 $tmp595 = (frost$core$Real32) {((float) $tmp594)};
return $tmp595;

}
frost$core$Real64 frost$core$Int32$get_asReal64$R$frost$core$Real64(frost$core$Int32 param0) {

// line 835
int32_t $tmp596 = param0.value;
frost$core$Real64 $tmp597 = (frost$core$Real64) {((double) $tmp596)};
return $tmp597;

}
frost$core$String* frost$core$Int32$get_asString$R$frost$core$String(frost$core$Int32 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int32 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 841
frost$core$Int64 $tmp598 = (frost$core$Int64) {11};
*(&local0) = $tmp598;
// line 842
frost$core$Int64 $tmp599 = *(&local0);
int64_t $tmp600 = $tmp599.value;
frost$core$Char8* $tmp601 = ((frost$core$Char8*) frostAlloc($tmp600 * 1));
*(&local1) = $tmp601;
// line 843
frost$core$Int64 $tmp602 = *(&local0);
frost$core$Int64 $tmp603 = (frost$core$Int64) {1};
int64_t $tmp604 = $tmp602.value;
int64_t $tmp605 = $tmp603.value;
int64_t $tmp606 = $tmp604 - $tmp605;
frost$core$Int64 $tmp607 = (frost$core$Int64) {$tmp606};
*(&local2) = $tmp607;
// line 844
*(&local3) = param0;
// line 845
frost$core$Int32 $tmp608 = *(&local3);
frost$core$Int32 $tmp609 = (frost$core$Int32) {0};
int32_t $tmp610 = $tmp608.value;
int32_t $tmp611 = $tmp609.value;
bool $tmp612 = $tmp610 >= $tmp611;
frost$core$Bit $tmp613 = (frost$core$Bit) {$tmp612};
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block1; else goto block3;
block1:;
// line 846
goto block4;
block4:;
// line 847
frost$core$Char8* $tmp615 = *(&local1);
frost$core$Int64 $tmp616 = *(&local2);
frost$core$Int32 $tmp617 = *(&local3);
frost$core$Int32 $tmp618 = (frost$core$Int32) {10};
frost$core$Int32 $tmp619 = frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32($tmp617, $tmp618);
frost$core$Int32 $tmp620 = (frost$core$Int32) {48};
int32_t $tmp621 = $tmp619.value;
int32_t $tmp622 = $tmp620.value;
int32_t $tmp623 = $tmp621 + $tmp622;
frost$core$Int32 $tmp624 = (frost$core$Int32) {$tmp623};
frost$core$UInt8 $tmp625 = frost$core$Int32$get_asUInt8$R$frost$core$UInt8($tmp624);
frost$core$Char8 $tmp626 = frost$core$Char8$init$frost$core$UInt8($tmp625);
int64_t $tmp627 = $tmp616.value;
$tmp615[$tmp627] = $tmp626;
// line 848
frost$core$Int32 $tmp628 = *(&local3);
frost$core$Int32 $tmp629 = (frost$core$Int32) {10};
int32_t $tmp630 = $tmp628.value;
int32_t $tmp631 = $tmp629.value;
int32_t $tmp632 = $tmp630 / $tmp631;
frost$core$Int32 $tmp633 = (frost$core$Int32) {$tmp632};
*(&local3) = $tmp633;
// line 849
frost$core$Int64 $tmp634 = *(&local2);
frost$core$Int64 $tmp635 = (frost$core$Int64) {1};
int64_t $tmp636 = $tmp634.value;
int64_t $tmp637 = $tmp635.value;
int64_t $tmp638 = $tmp636 - $tmp637;
frost$core$Int64 $tmp639 = (frost$core$Int64) {$tmp638};
*(&local2) = $tmp639;
goto block5;
block5:;
frost$core$Int32 $tmp640 = *(&local3);
frost$core$Int32 $tmp641 = (frost$core$Int32) {0};
int32_t $tmp642 = $tmp640.value;
int32_t $tmp643 = $tmp641.value;
bool $tmp644 = $tmp642 > $tmp643;
frost$core$Bit $tmp645 = (frost$core$Bit) {$tmp644};
bool $tmp646 = $tmp645.value;
if ($tmp646) goto block4; else goto block6;
block6:;
// line 852
frost$core$Int64 $tmp647 = *(&local2);
frost$core$Int64 $tmp648 = (frost$core$Int64) {1};
int64_t $tmp649 = $tmp647.value;
int64_t $tmp650 = $tmp648.value;
int64_t $tmp651 = $tmp649 + $tmp650;
frost$core$Int64 $tmp652 = (frost$core$Int64) {$tmp651};
*(&local2) = $tmp652;
goto block2;
block3:;
// line 1
// line 855
goto block7;
block7:;
// line 856
frost$core$Char8* $tmp653 = *(&local1);
frost$core$Int64 $tmp654 = *(&local2);
frost$core$Int32 $tmp655 = (frost$core$Int32) {48};
frost$core$Int32 $tmp656 = *(&local3);
frost$core$Int32 $tmp657 = (frost$core$Int32) {10};
frost$core$Int32 $tmp658 = frost$core$Int32$$REM$frost$core$Int32$R$frost$core$Int32($tmp656, $tmp657);
int32_t $tmp659 = $tmp655.value;
int32_t $tmp660 = $tmp658.value;
int32_t $tmp661 = $tmp659 - $tmp660;
frost$core$Int32 $tmp662 = (frost$core$Int32) {$tmp661};
frost$core$UInt8 $tmp663 = frost$core$Int32$get_asUInt8$R$frost$core$UInt8($tmp662);
frost$core$Char8 $tmp664 = frost$core$Char8$init$frost$core$UInt8($tmp663);
int64_t $tmp665 = $tmp654.value;
$tmp653[$tmp665] = $tmp664;
// line 857
frost$core$Int32 $tmp666 = *(&local3);
frost$core$Int32 $tmp667 = (frost$core$Int32) {10};
int32_t $tmp668 = $tmp666.value;
int32_t $tmp669 = $tmp667.value;
int32_t $tmp670 = $tmp668 / $tmp669;
frost$core$Int32 $tmp671 = (frost$core$Int32) {$tmp670};
*(&local3) = $tmp671;
// line 858
frost$core$Int64 $tmp672 = *(&local2);
frost$core$Int64 $tmp673 = (frost$core$Int64) {1};
int64_t $tmp674 = $tmp672.value;
int64_t $tmp675 = $tmp673.value;
int64_t $tmp676 = $tmp674 - $tmp675;
frost$core$Int64 $tmp677 = (frost$core$Int64) {$tmp676};
*(&local2) = $tmp677;
goto block8;
block8:;
frost$core$Int32 $tmp678 = *(&local3);
frost$core$Int32 $tmp679 = (frost$core$Int32) {0};
int32_t $tmp680 = $tmp678.value;
int32_t $tmp681 = $tmp679.value;
bool $tmp682 = $tmp680 < $tmp681;
frost$core$Bit $tmp683 = (frost$core$Bit) {$tmp682};
bool $tmp684 = $tmp683.value;
if ($tmp684) goto block7; else goto block9;
block9:;
// line 861
frost$core$Char8* $tmp685 = *(&local1);
frost$core$Int64 $tmp686 = *(&local2);
frost$core$UInt8 $tmp687 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp688 = frost$core$Char8$init$frost$core$UInt8($tmp687);
int64_t $tmp689 = $tmp686.value;
$tmp685[$tmp689] = $tmp688;
goto block2;
block2:;
// line 863
frost$core$Int64 $tmp690 = *(&local0);
frost$core$Int64 $tmp691 = *(&local2);
int64_t $tmp692 = $tmp690.value;
int64_t $tmp693 = $tmp691.value;
int64_t $tmp694 = $tmp692 - $tmp693;
frost$core$Int64 $tmp695 = (frost$core$Int64) {$tmp694};
*(&local4) = $tmp695;
// line 864
frost$core$Int64 $tmp696 = (frost$core$Int64) {0};
frost$core$Int64 $tmp697 = *(&local4);
frost$core$Bit $tmp698 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp699 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp696, $tmp697, $tmp698);
frost$core$Int64 $tmp700 = $tmp699.min;
*(&local5) = $tmp700;
frost$core$Int64 $tmp701 = $tmp699.max;
frost$core$Bit $tmp702 = $tmp699.inclusive;
bool $tmp703 = $tmp702.value;
frost$core$Int64 $tmp704 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp705 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp704);
if ($tmp703) goto block13; else goto block14;
block13:;
int64_t $tmp706 = $tmp700.value;
int64_t $tmp707 = $tmp701.value;
bool $tmp708 = $tmp706 <= $tmp707;
frost$core$Bit $tmp709 = (frost$core$Bit) {$tmp708};
bool $tmp710 = $tmp709.value;
if ($tmp710) goto block10; else goto block11;
block14:;
int64_t $tmp711 = $tmp700.value;
int64_t $tmp712 = $tmp701.value;
bool $tmp713 = $tmp711 < $tmp712;
frost$core$Bit $tmp714 = (frost$core$Bit) {$tmp713};
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block10; else goto block11;
block10:;
// line 865
frost$core$Char8* $tmp716 = *(&local1);
frost$core$Int64 $tmp717 = *(&local5);
frost$core$Char8* $tmp718 = *(&local1);
frost$core$Int64 $tmp719 = *(&local5);
frost$core$Int64 $tmp720 = *(&local2);
int64_t $tmp721 = $tmp719.value;
int64_t $tmp722 = $tmp720.value;
int64_t $tmp723 = $tmp721 + $tmp722;
frost$core$Int64 $tmp724 = (frost$core$Int64) {$tmp723};
int64_t $tmp725 = $tmp724.value;
frost$core$Char8 $tmp726 = $tmp718[$tmp725];
int64_t $tmp727 = $tmp717.value;
$tmp716[$tmp727] = $tmp726;
goto block12;
block12:;
frost$core$Int64 $tmp728 = *(&local5);
int64_t $tmp729 = $tmp701.value;
int64_t $tmp730 = $tmp728.value;
int64_t $tmp731 = $tmp729 - $tmp730;
frost$core$Int64 $tmp732 = (frost$core$Int64) {$tmp731};
frost$core$UInt64 $tmp733 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp732);
if ($tmp703) goto block16; else goto block17;
block16:;
uint64_t $tmp734 = $tmp733.value;
uint64_t $tmp735 = $tmp705.value;
bool $tmp736 = $tmp734 >= $tmp735;
frost$core$Bit $tmp737 = (frost$core$Bit) {$tmp736};
bool $tmp738 = $tmp737.value;
if ($tmp738) goto block15; else goto block11;
block17:;
uint64_t $tmp739 = $tmp733.value;
uint64_t $tmp740 = $tmp705.value;
bool $tmp741 = $tmp739 > $tmp740;
frost$core$Bit $tmp742 = (frost$core$Bit) {$tmp741};
bool $tmp743 = $tmp742.value;
if ($tmp743) goto block15; else goto block11;
block15:;
int64_t $tmp744 = $tmp728.value;
int64_t $tmp745 = $tmp704.value;
int64_t $tmp746 = $tmp744 + $tmp745;
frost$core$Int64 $tmp747 = (frost$core$Int64) {$tmp746};
*(&local5) = $tmp747;
goto block10;
block11:;
// line 867
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp748 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp749 = *(&local1);
frost$core$Int64 $tmp750 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp748, $tmp749, $tmp750);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp748));
return $tmp748;

}
frost$core$String* frost$core$Int32$format$frost$core$String$R$frost$core$String(frost$core$Int32 param0, frost$core$String* param1) {

// line 873
int32_t $tmp751 = param0.value;
bool $tmp752 = $tmp751 < 0;
frost$core$Bit $tmp753 = frost$core$Bit$init$builtin_bit($tmp752);
frost$core$Int32 $tmp754 = frost$core$Int32$get_abs$R$frost$core$Int32(param0);
frost$core$UInt64 $tmp755 = frost$core$Int32$get_asUInt64$R$frost$core$UInt64($tmp754);
frost$core$UInt64 $tmp756 = (frost$core$UInt64) {4294967295};
frost$core$String* $tmp757 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp753, $tmp755, $tmp756, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp757));
return $tmp757;

}
void frost$core$Int32$cleanup(frost$core$Int32 param0) {

return;

}

