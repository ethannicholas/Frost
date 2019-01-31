#include "frost/core/Int64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Object.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Comparable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Key.h"
#include "frost/collections/ListView.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/UInt64.h"
#include "frost/core/Real32.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/Int64List.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/Char8.h"

__attribute__((weak)) frost$core$Int64 frost$core$Int64$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$get_count$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$get_hash$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, ((frost$core$Int64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int64$format$frost$core$String$R$frost$core$String(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int64$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$Int64$get_asString$R$frost$core$String(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$SUB$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$$SUB$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$BNOT$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$$BNOT$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int64$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$Int64$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Bit result = frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Bit result = frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Bit result = frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$get_abs$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$get_abs$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Int64 result = frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Int64 result = frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Int64 result = frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$Int64$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$Int64$get_asInt8$R$frost$core$Int8(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$Int64$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$Int64$get_asInt16$R$frost$core$Int16(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$Int64$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$Int64$get_asInt32$R$frost$core$Int32(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$Int64$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$Int64$get_asUInt8$R$frost$core$UInt8(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$Int64$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$Int64$get_asUInt16$R$frost$core$UInt16(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$Int64$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$Int64$get_asUInt32$R$frost$core$UInt32(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$Int64$get_asUInt64$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$Int64$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$Int64$get_asReal32$R$frost$core$Real32(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$Int64$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$Int64$get_asReal64$R$frost$core$Real64(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Int64$cleanup$shim(frost$core$Object* p0) {
    frost$core$Int64$cleanup(((frost$core$Int64$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int64$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int64$_frost$collections$CollectionView, { frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int64$_frost$collections$Iterable, { frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int64$_frost$core$Comparable, { frost$core$Int64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$core$Int64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int64$_frost$collections$Key, { frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$_frost$collections$ListView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$_frost$core$Equatable, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$Int64$class_type frost$core$Int64$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$_frost$core$Formattable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$R$frost$core$Int64$shim, frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int64$$BNOT$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$get_abs$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$get_count$R$frost$core$Int64$shim, frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int64$get_hash$R$frost$core$Int64$shim, frost$core$Int64$get_asInt8$R$frost$core$Int8$shim, frost$core$Int64$get_asInt16$R$frost$core$Int16$shim, frost$core$Int64$get_asInt32$R$frost$core$Int32$shim, frost$core$Int64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int64$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int64$get_asReal32$R$frost$core$Real32$shim, frost$core$Int64$get_asReal64$R$frost$core$Real64$shim, frost$core$Int64$format$frost$core$String$R$frost$core$String$shim, frost$core$Int64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$CollectionView, { frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$Iterable, { frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Comparable, { frost$core$Int64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[11]; } frost$core$Int64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$Key, { frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$ListView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Equatable, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$Int64$wrapperclass_type frost$core$Int64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Formattable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn349)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s321 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static frost$core$String $s322 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 140, -7534793921674576608, NULL };
static frost$core$String $s337 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static frost$core$String $s338 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 165, 803035695710935569, NULL };
static frost$core$String $s357 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static frost$core$String $s358 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -8758177982418571271, NULL };
static frost$core$String $s386 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static frost$core$String $s387 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f", 121, -7062881103722945606, NULL };
static frost$core$String $s389 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x2d", 1, 146, NULL };

frost$core$Int64 frost$core$Int64$init$builtin_int64(int64_t param0) {

frost$core$Int64 local0;
// line 31
int64_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int64 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int64 local0;
// line 37
int8_t $tmp6 = param0.value;
int64_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int64_t) $tmp6);
frost$core$Int64 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Int64 local0;
// line 43
int16_t $tmp9 = param0.value;
int64_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int64_t) $tmp9);
frost$core$Int64 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Int64 local0;
// line 49
int32_t $tmp12 = param0.value;
int64_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((int64_t) $tmp12);
frost$core$Int64 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int64 local0;
// line 55
uint8_t $tmp15 = param0.value;
int64_t* $tmp16 = &(&local0)->value;
*$tmp16 = ((int64_t) $tmp15);
frost$core$Int64 $tmp17 = *(&local0);
return $tmp17;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Int64 local0;
// line 61
uint16_t $tmp18 = param0.value;
int64_t* $tmp19 = &(&local0)->value;
*$tmp19 = ((int64_t) $tmp18);
frost$core$Int64 $tmp20 = *(&local0);
return $tmp20;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Int64 local0;
// line 67
uint32_t $tmp21 = param0.value;
int64_t* $tmp22 = &(&local0)->value;
*$tmp22 = ((int64_t) $tmp21);
frost$core$Int64 $tmp23 = *(&local0);
return $tmp23;

}
frost$core$Int64 frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 73
int64_t $tmp24 = param0.value;
int64_t $tmp25 = param1.value;
int64_t $tmp26 = $tmp24 + $tmp25;
frost$core$Int64 $tmp27 = frost$core$Int64$init$builtin_int64($tmp26);
return $tmp27;

}
frost$core$Int64 frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 79
int64_t $tmp28 = param0.value;
int64_t $tmp29 = param1.value;
int64_t $tmp30 = $tmp28 - $tmp29;
frost$core$Int64 $tmp31 = frost$core$Int64$init$builtin_int64($tmp30);
return $tmp31;

}
frost$core$Int64 frost$core$Int64$$SUB$R$frost$core$Int64(frost$core$Int64 param0) {

// line 84
int64_t $tmp32 = param0.value;
int64_t $tmp33 = -$tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {$tmp33};
return $tmp34;

}
frost$core$Int64 frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 90
int64_t $tmp35 = param0.value;
int64_t $tmp36 = param1.value;
int64_t $tmp37 = $tmp35 * $tmp36;
frost$core$Int64 $tmp38 = frost$core$Int64$init$builtin_int64($tmp37);
return $tmp38;

}
frost$core$Int64 frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 96
int64_t $tmp39 = param0.value;
int64_t $tmp40 = param1.value;
int64_t $tmp41 = $tmp39 / $tmp40;
frost$core$Int64 $tmp42 = frost$core$Int64$init$builtin_int64($tmp41);
return $tmp42;

}
frost$core$Int64 frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 102
int64_t $tmp43 = param0.value;
int64_t $tmp44 = param1.value;
int64_t $tmp45 = $tmp43 % $tmp44;
frost$core$Int64 $tmp46 = frost$core$Int64$init$builtin_int64($tmp45);
return $tmp46;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 108
int64_t $tmp47 = param0.value;
int8_t $tmp48 = param1.value;
double $tmp49 = ((double) $tmp47) / ((double) $tmp48);
frost$core$Real64 $tmp50 = frost$core$Real64$init$builtin_float64($tmp49);
return $tmp50;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 114
int64_t $tmp51 = param0.value;
int16_t $tmp52 = param1.value;
double $tmp53 = ((double) $tmp51) / ((double) $tmp52);
frost$core$Real64 $tmp54 = frost$core$Real64$init$builtin_float64($tmp53);
return $tmp54;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 120
int64_t $tmp55 = param0.value;
int32_t $tmp56 = param1.value;
double $tmp57 = ((double) $tmp55) / ((double) $tmp56);
frost$core$Real64 $tmp58 = frost$core$Real64$init$builtin_float64($tmp57);
return $tmp58;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 126
int64_t $tmp59 = param0.value;
int64_t $tmp60 = param1.value;
double $tmp61 = ((double) $tmp59) / ((double) $tmp60);
frost$core$Real64 $tmp62 = frost$core$Real64$init$builtin_float64($tmp61);
return $tmp62;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt8 param1) {

// line 132
int64_t $tmp63 = param0.value;
uint8_t $tmp64 = param1.value;
double $tmp65 = ((double) $tmp63) / ((double) $tmp64);
frost$core$Real64 $tmp66 = frost$core$Real64$init$builtin_float64($tmp65);
return $tmp66;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt16 param1) {

// line 138
int64_t $tmp67 = param0.value;
uint16_t $tmp68 = param1.value;
double $tmp69 = ((double) $tmp67) / ((double) $tmp68);
frost$core$Real64 $tmp70 = frost$core$Real64$init$builtin_float64($tmp69);
return $tmp70;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt32 param1) {

// line 144
int64_t $tmp71 = param0.value;
uint32_t $tmp72 = param1.value;
double $tmp73 = ((double) $tmp71) / ((double) $tmp72);
frost$core$Real64 $tmp74 = frost$core$Real64$init$builtin_float64($tmp73);
return $tmp74;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// line 150
int64_t $tmp75 = param0.value;
uint64_t $tmp76 = param1.value;
double $tmp77 = ((double) $tmp75) / ((double) $tmp76);
frost$core$Real64 $tmp78 = frost$core$Real64$init$builtin_float64($tmp77);
return $tmp78;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Real32 param1) {

// line 156
int64_t $tmp79 = param0.value;
float $tmp80 = param1.value;
double $tmp81 = ((double) $tmp79) / ((double) $tmp80);
frost$core$Real64 $tmp82 = frost$core$Real64$init$builtin_float64($tmp81);
return $tmp82;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Real64 param1) {

// line 162
int64_t $tmp83 = param0.value;
double $tmp84 = param1.value;
double $tmp85 = ((double) $tmp83) / $tmp84;
frost$core$Real64 $tmp86 = frost$core$Real64$init$builtin_float64($tmp85);
return $tmp86;

}
frost$core$Int64 frost$core$Int64$$BNOT$R$frost$core$Int64(frost$core$Int64 param0) {

// line 167
int64_t $tmp87 = param0.value;
int64_t $tmp88 = !$tmp87;
frost$core$Int64 $tmp89 = (frost$core$Int64) {$tmp88};
return $tmp89;

}
frost$core$Int64 frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 173
int64_t $tmp90 = param0.value;
int64_t $tmp91 = param1.value;
int64_t $tmp92 = $tmp90 & $tmp91;
frost$core$Int64 $tmp93 = frost$core$Int64$init$builtin_int64($tmp92);
return $tmp93;

}
frost$core$UInt64 frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// line 179
int64_t $tmp94 = param0.value;
uint64_t $tmp95 = param1.value;
uint64_t $tmp96 = ((uint64_t) $tmp94) & $tmp95;
frost$core$UInt64 $tmp97 = frost$core$UInt64$init$builtin_uint64($tmp96);
return $tmp97;

}
frost$core$Int64 frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 185
int64_t $tmp98 = param0.value;
int64_t $tmp99 = param1.value;
int64_t $tmp100 = $tmp98 | $tmp99;
frost$core$Int64 $tmp101 = frost$core$Int64$init$builtin_int64($tmp100);
return $tmp101;

}
frost$core$UInt64 frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// line 191
int64_t $tmp102 = param0.value;
uint64_t $tmp103 = param1.value;
uint64_t $tmp104 = ((uint64_t) $tmp102) | $tmp103;
frost$core$UInt64 $tmp105 = frost$core$UInt64$init$builtin_uint64($tmp104);
return $tmp105;

}
frost$core$Int64 frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 197
int64_t $tmp106 = param0.value;
int64_t $tmp107 = param1.value;
int64_t $tmp108 = $tmp106 ^ $tmp107;
frost$core$Int64 $tmp109 = frost$core$Int64$init$builtin_int64($tmp108);
return $tmp109;

}
frost$core$UInt64 frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// line 203
int64_t $tmp110 = param0.value;
uint64_t $tmp111 = param1.value;
uint64_t $tmp112 = ((uint64_t) $tmp110) ^ $tmp111;
frost$core$UInt64 $tmp113 = frost$core$UInt64$init$builtin_uint64($tmp112);
return $tmp113;

}
frost$core$Int64 frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 209
int64_t $tmp114 = param0.value;
int64_t $tmp115 = param1.value;
int64_t $tmp116 = $tmp114 << $tmp115;
frost$core$Int64 $tmp117 = frost$core$Int64$init$builtin_int64($tmp116);
return $tmp117;

}
frost$core$UInt64 frost$core$Int64$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// line 215
int64_t $tmp118 = param0.value;
uint64_t $tmp119 = param1.value;
uint64_t $tmp120 = ((uint64_t) $tmp118) << $tmp119;
frost$core$UInt64 $tmp121 = frost$core$UInt64$init$builtin_uint64($tmp120);
return $tmp121;

}
frost$core$Int64 frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 221
int64_t $tmp122 = param0.value;
int64_t $tmp123 = param1.value;
int64_t $tmp124 = $tmp122 >> $tmp123;
frost$core$Int64 $tmp125 = frost$core$Int64$init$builtin_int64($tmp124);
return $tmp125;

}
frost$core$UInt64 frost$core$Int64$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// line 227
int64_t $tmp126 = param0.value;
uint64_t $tmp127 = param1.value;
uint64_t $tmp128 = ((uint64_t) $tmp126) >> $tmp127;
frost$core$UInt64 $tmp129 = frost$core$UInt64$init$builtin_uint64($tmp128);
return $tmp129;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 233
int64_t $tmp130 = param0.value;
int8_t $tmp131 = param1.value;
bool $tmp132 = $tmp130 == ((int64_t) $tmp131);
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit($tmp132);
return $tmp133;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 239
int64_t $tmp134 = param0.value;
int16_t $tmp135 = param1.value;
bool $tmp136 = $tmp134 == ((int64_t) $tmp135);
frost$core$Bit $tmp137 = frost$core$Bit$init$builtin_bit($tmp136);
return $tmp137;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 245
int64_t $tmp138 = param0.value;
int32_t $tmp139 = param1.value;
bool $tmp140 = $tmp138 == ((int64_t) $tmp139);
frost$core$Bit $tmp141 = frost$core$Bit$init$builtin_bit($tmp140);
return $tmp141;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 252
int64_t $tmp142 = param0.value;
int64_t $tmp143 = param1.value;
bool $tmp144 = $tmp142 == $tmp143;
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit($tmp144);
return $tmp145;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 258
int64_t $tmp146 = param0.value;
int8_t $tmp147 = param1.value;
bool $tmp148 = $tmp146 != ((int64_t) $tmp147);
frost$core$Bit $tmp149 = frost$core$Bit$init$builtin_bit($tmp148);
return $tmp149;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 264
int64_t $tmp150 = param0.value;
int16_t $tmp151 = param1.value;
bool $tmp152 = $tmp150 != ((int64_t) $tmp151);
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152);
return $tmp153;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 270
int64_t $tmp154 = param0.value;
int32_t $tmp155 = param1.value;
bool $tmp156 = $tmp154 != ((int64_t) $tmp155);
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit($tmp156);
return $tmp157;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 277
int64_t $tmp158 = param0.value;
int64_t $tmp159 = param1.value;
bool $tmp160 = $tmp158 != $tmp159;
frost$core$Bit $tmp161 = frost$core$Bit$init$builtin_bit($tmp160);
return $tmp161;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 283
int64_t $tmp162 = param0.value;
int8_t $tmp163 = param1.value;
bool $tmp164 = $tmp162 < ((int64_t) $tmp163);
frost$core$Bit $tmp165 = frost$core$Bit$init$builtin_bit($tmp164);
return $tmp165;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 289
int64_t $tmp166 = param0.value;
int16_t $tmp167 = param1.value;
bool $tmp168 = $tmp166 < ((int64_t) $tmp167);
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit($tmp168);
return $tmp169;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 295
int64_t $tmp170 = param0.value;
int32_t $tmp171 = param1.value;
bool $tmp172 = $tmp170 < ((int64_t) $tmp171);
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit($tmp172);
return $tmp173;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 302
int64_t $tmp174 = param0.value;
int64_t $tmp175 = param1.value;
bool $tmp176 = $tmp174 < $tmp175;
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit($tmp176);
return $tmp177;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 308
int64_t $tmp178 = param0.value;
int8_t $tmp179 = param1.value;
bool $tmp180 = $tmp178 > ((int64_t) $tmp179);
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180);
return $tmp181;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 314
int64_t $tmp182 = param0.value;
int16_t $tmp183 = param1.value;
bool $tmp184 = $tmp182 > ((int64_t) $tmp183);
frost$core$Bit $tmp185 = frost$core$Bit$init$builtin_bit($tmp184);
return $tmp185;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 320
int64_t $tmp186 = param0.value;
int32_t $tmp187 = param1.value;
bool $tmp188 = $tmp186 > ((int64_t) $tmp187);
frost$core$Bit $tmp189 = frost$core$Bit$init$builtin_bit($tmp188);
return $tmp189;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 327
int64_t $tmp190 = param0.value;
int64_t $tmp191 = param1.value;
bool $tmp192 = $tmp190 > $tmp191;
frost$core$Bit $tmp193 = frost$core$Bit$init$builtin_bit($tmp192);
return $tmp193;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 333
int64_t $tmp194 = param0.value;
int8_t $tmp195 = param1.value;
bool $tmp196 = $tmp194 >= ((int64_t) $tmp195);
frost$core$Bit $tmp197 = frost$core$Bit$init$builtin_bit($tmp196);
return $tmp197;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 339
int64_t $tmp198 = param0.value;
int16_t $tmp199 = param1.value;
bool $tmp200 = $tmp198 >= ((int64_t) $tmp199);
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit($tmp200);
return $tmp201;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 345
int64_t $tmp202 = param0.value;
int32_t $tmp203 = param1.value;
bool $tmp204 = $tmp202 >= ((int64_t) $tmp203);
frost$core$Bit $tmp205 = frost$core$Bit$init$builtin_bit($tmp204);
return $tmp205;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 352
int64_t $tmp206 = param0.value;
int64_t $tmp207 = param1.value;
bool $tmp208 = $tmp206 >= $tmp207;
frost$core$Bit $tmp209 = frost$core$Bit$init$builtin_bit($tmp208);
return $tmp209;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 358
int64_t $tmp210 = param0.value;
int8_t $tmp211 = param1.value;
bool $tmp212 = $tmp210 <= ((int64_t) $tmp211);
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212);
return $tmp213;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 364
int64_t $tmp214 = param0.value;
int16_t $tmp215 = param1.value;
bool $tmp216 = $tmp214 <= ((int64_t) $tmp215);
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216);
return $tmp217;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 370
int64_t $tmp218 = param0.value;
int32_t $tmp219 = param1.value;
bool $tmp220 = $tmp218 <= ((int64_t) $tmp219);
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit($tmp220);
return $tmp221;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 377
int64_t $tmp222 = param0.value;
int64_t $tmp223 = param1.value;
bool $tmp224 = $tmp222 <= $tmp223;
frost$core$Bit $tmp225 = frost$core$Bit$init$builtin_bit($tmp224);
return $tmp225;

}
frost$core$Int64 frost$core$Int64$get_abs$R$frost$core$Int64(frost$core$Int64 param0) {

// line 383
frost$core$Int64 $tmp226 = (frost$core$Int64) {0};
int64_t $tmp227 = param0.value;
int64_t $tmp228 = $tmp226.value;
bool $tmp229 = $tmp227 < $tmp228;
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block1; else goto block2;
block1:;
// line 384
frost$core$Int64 $tmp232 = frost$core$Int64$$SUB$R$frost$core$Int64(param0);
return $tmp232;
block2:;
// line 386
return param0;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 392
int64_t $tmp233 = param0.value;
int8_t $tmp234 = param1.value;
bool $tmp235 = $tmp233 < ((int64_t) $tmp234);
frost$core$Bit $tmp236 = frost$core$Bit$init$builtin_bit($tmp235);
bool $tmp237 = $tmp236.value;
if ($tmp237) goto block1; else goto block2;
block1:;
// line 393
int64_t $tmp238 = param0.value;
frost$core$Int64 $tmp239 = frost$core$Int64$init$builtin_int64($tmp238);
return $tmp239;
block2:;
// line 395
int8_t $tmp240 = param1.value;
frost$core$Int64 $tmp241 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp240));
return $tmp241;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 401
int64_t $tmp242 = param0.value;
int16_t $tmp243 = param1.value;
bool $tmp244 = $tmp242 < ((int64_t) $tmp243);
frost$core$Bit $tmp245 = frost$core$Bit$init$builtin_bit($tmp244);
bool $tmp246 = $tmp245.value;
if ($tmp246) goto block1; else goto block2;
block1:;
// line 402
int64_t $tmp247 = param0.value;
frost$core$Int64 $tmp248 = frost$core$Int64$init$builtin_int64($tmp247);
return $tmp248;
block2:;
// line 404
int16_t $tmp249 = param1.value;
frost$core$Int64 $tmp250 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp249));
return $tmp250;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 410
int64_t $tmp251 = param0.value;
int32_t $tmp252 = param1.value;
bool $tmp253 = $tmp251 < ((int64_t) $tmp252);
frost$core$Bit $tmp254 = frost$core$Bit$init$builtin_bit($tmp253);
bool $tmp255 = $tmp254.value;
if ($tmp255) goto block1; else goto block2;
block1:;
// line 411
int64_t $tmp256 = param0.value;
frost$core$Int64 $tmp257 = frost$core$Int64$init$builtin_int64($tmp256);
return $tmp257;
block2:;
// line 413
int32_t $tmp258 = param1.value;
frost$core$Int64 $tmp259 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp258));
return $tmp259;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 419
int64_t $tmp260 = param0.value;
int64_t $tmp261 = param1.value;
bool $tmp262 = $tmp260 < $tmp261;
frost$core$Bit $tmp263 = frost$core$Bit$init$builtin_bit($tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block1; else goto block2;
block1:;
// line 420
int64_t $tmp265 = param0.value;
frost$core$Int64 $tmp266 = frost$core$Int64$init$builtin_int64($tmp265);
return $tmp266;
block2:;
// line 422
int64_t $tmp267 = param1.value;
frost$core$Int64 $tmp268 = frost$core$Int64$init$builtin_int64($tmp267);
return $tmp268;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 432
int64_t $tmp269 = param0.value;
int8_t $tmp270 = param1.value;
bool $tmp271 = $tmp269 > ((int64_t) $tmp270);
frost$core$Bit $tmp272 = frost$core$Bit$init$builtin_bit($tmp271);
bool $tmp273 = $tmp272.value;
if ($tmp273) goto block1; else goto block2;
block1:;
// line 433
int64_t $tmp274 = param0.value;
frost$core$Int64 $tmp275 = frost$core$Int64$init$builtin_int64($tmp274);
return $tmp275;
block2:;
// line 435
int8_t $tmp276 = param1.value;
frost$core$Int64 $tmp277 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp276));
return $tmp277;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 441
int64_t $tmp278 = param0.value;
int16_t $tmp279 = param1.value;
bool $tmp280 = $tmp278 > ((int64_t) $tmp279);
frost$core$Bit $tmp281 = frost$core$Bit$init$builtin_bit($tmp280);
bool $tmp282 = $tmp281.value;
if ($tmp282) goto block1; else goto block2;
block1:;
// line 442
int64_t $tmp283 = param0.value;
frost$core$Int64 $tmp284 = frost$core$Int64$init$builtin_int64($tmp283);
return $tmp284;
block2:;
// line 444
int16_t $tmp285 = param1.value;
frost$core$Int64 $tmp286 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp285));
return $tmp286;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 450
int64_t $tmp287 = param0.value;
int32_t $tmp288 = param1.value;
bool $tmp289 = $tmp287 > ((int64_t) $tmp288);
frost$core$Bit $tmp290 = frost$core$Bit$init$builtin_bit($tmp289);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block1; else goto block2;
block1:;
// line 451
int64_t $tmp292 = param0.value;
frost$core$Int64 $tmp293 = frost$core$Int64$init$builtin_int64($tmp292);
return $tmp293;
block2:;
// line 453
int32_t $tmp294 = param1.value;
frost$core$Int64 $tmp295 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp294));
return $tmp295;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 459
int64_t $tmp296 = param0.value;
int64_t $tmp297 = param1.value;
bool $tmp298 = $tmp296 > $tmp297;
frost$core$Bit $tmp299 = frost$core$Bit$init$builtin_bit($tmp298);
bool $tmp300 = $tmp299.value;
if ($tmp300) goto block1; else goto block2;
block1:;
// line 460
int64_t $tmp301 = param0.value;
frost$core$Int64 $tmp302 = frost$core$Int64$init$builtin_int64($tmp301);
return $tmp302;
block2:;
// line 462
int64_t $tmp303 = param1.value;
frost$core$Int64 $tmp304 = frost$core$Int64$init$builtin_int64($tmp303);
return $tmp304;

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$Range$LTfrost$core$Int64$GT param0) {

frost$core$Int64 $tmp305 = param0.max;
frost$core$UInt64 $tmp306 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp305);
frost$core$Int64 $tmp307 = param0.min;
frost$core$UInt64 $tmp308 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp307);
uint64_t $tmp309 = $tmp306.value;
uint64_t $tmp310 = $tmp308.value;
uint64_t $tmp311 = $tmp309 - $tmp310;
frost$core$UInt64 $tmp312 = (frost$core$UInt64) {$tmp311};
frost$core$Int64 $tmp313 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp314 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp313);
uint64_t $tmp315 = $tmp312.value;
uint64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 < $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp320 = (frost$core$Int64) {471};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s321, $tmp320, &$s322);
abort(); // unreachable
block1:;
// line 472
FROST_ASSERT(56 == sizeof(org$frostlang$frost$Int64List));
org$frostlang$frost$Int64List* $tmp323 = (org$frostlang$frost$Int64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$Int64List$class);
frost$core$Int64 $tmp324 = param0.min;
frost$core$Int64 $tmp325 = param0.max;
frost$core$Int64 $tmp326 = (frost$core$Int64) {1};
frost$core$Bit $tmp327 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp328 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp324, $tmp325, $tmp326, $tmp327);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT($tmp323, $tmp328);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp323)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp323));
return ((frost$collections$ListView*) $tmp323);

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param0) {

frost$core$Int64 $tmp329 = org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int64(param0);
frost$core$Int64 $tmp330 = (frost$core$Int64) {0};
int64_t $tmp331 = $tmp329.value;
int64_t $tmp332 = $tmp330.value;
bool $tmp333 = $tmp331 > $tmp332;
frost$core$Bit $tmp334 = (frost$core$Bit) {$tmp333};
bool $tmp335 = $tmp334.value;
if ($tmp335) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp336 = (frost$core$Int64) {477};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s337, $tmp336, &$s338);
abort(); // unreachable
block1:;
// line 478
FROST_ASSERT(56 == sizeof(org$frostlang$frost$Int64List));
org$frostlang$frost$Int64List* $tmp339 = (org$frostlang$frost$Int64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$Int64List$class);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT($tmp339, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp339)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp339));
return ((frost$collections$ListView*) $tmp339);

}
frost$core$Bit frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp340 = (frost$core$Int64) {0};
int64_t $tmp341 = param1.value;
int64_t $tmp342 = $tmp340.value;
bool $tmp343 = $tmp341 >= $tmp342;
frost$core$Bit $tmp344 = (frost$core$Bit) {$tmp343};
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block3; else goto block2;
block3:;
frost$core$Int64$wrapper* $tmp346;
$tmp346 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp346->value = param0;
ITable* $tmp347 = ((frost$collections$CollectionView*) $tmp346)->$class->itable;
while ($tmp347->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp347 = $tmp347->next;
}
$fn349 $tmp348 = $tmp347->methods[0];
frost$core$Int64 $tmp350 = $tmp348(((frost$collections$CollectionView*) $tmp346));
int64_t $tmp351 = param1.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 < $tmp352;
frost$core$Bit $tmp354 = (frost$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp346)));
if ($tmp355) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp356 = (frost$core$Int64) {483};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s357, $tmp356, &$s358);
abort(); // unreachable
block1:;
// line 484
frost$core$Int64 $tmp359 = (frost$core$Int64) {1};
frost$core$Int64 $tmp360 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp359, param1);
frost$core$Int64 $tmp361 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp360);
frost$core$Int64 $tmp362 = (frost$core$Int64) {0};
int64_t $tmp363 = $tmp361.value;
int64_t $tmp364 = $tmp362.value;
bool $tmp365 = $tmp363 != $tmp364;
frost$core$Bit $tmp366 = (frost$core$Bit) {$tmp365};
return $tmp366;

}
frost$core$Int64 frost$core$Int64$get_count$R$frost$core$Int64(frost$core$Int64 param0) {

// line 490
frost$core$Int64 $tmp367 = (frost$core$Int64) {64};
return $tmp367;

}
frost$collections$Iterator* frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int64 param0) {

// line 495
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp368 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp369 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp370 = (frost$core$UInt64) {9223372036854775808};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp368, $tmp369, $tmp370);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp368)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp368));
return ((frost$collections$Iterator*) $tmp368);

}
frost$core$Int64 frost$core$Int64$get_hash$R$frost$core$Int64(frost$core$Int64 param0) {

// line 500
int64_t $tmp371 = param0.value;
frost$core$Int64 $tmp372 = (frost$core$Int64) {$tmp371};
return $tmp372;

}
frost$core$Int64$nullable frost$core$Int64$parse$frost$core$String$frost$core$Int64$R$frost$core$Int64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp373 = (frost$core$Int64) {2};
int64_t $tmp374 = param1.value;
int64_t $tmp375 = $tmp373.value;
bool $tmp376 = $tmp374 >= $tmp375;
frost$core$Bit $tmp377 = (frost$core$Bit) {$tmp376};
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp379 = (frost$core$Int64) {36};
int64_t $tmp380 = param1.value;
int64_t $tmp381 = $tmp379.value;
bool $tmp382 = $tmp380 <= $tmp381;
frost$core$Bit $tmp383 = (frost$core$Bit) {$tmp382};
bool $tmp384 = $tmp383.value;
if ($tmp384) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp385 = (frost$core$Int64) {506};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s386, $tmp385, &$s387);
abort(); // unreachable
block1:;
// line 507
frost$core$Bit $tmp388 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s389);
bool $tmp390 = $tmp388.value;
if ($tmp390) goto block4; else goto block6;
block4:;
// line 508
frost$core$Int64 $tmp391 = (frost$core$Int64) {1};
frost$core$Bit $tmp392 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp393 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp391, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp392);
frost$core$String* $tmp394 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp393);
frost$core$UInt64$nullable $tmp395 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp394, param1);
*(&local0) = $tmp395;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp394));
// line 509
frost$core$UInt64$nullable $tmp396 = *(&local0);
frost$core$Bit $tmp397 = frost$core$Bit$init$builtin_bit(!$tmp396.nonnull);
bool $tmp398 = $tmp397.value;
if ($tmp398) goto block7; else goto block8;
block7:;
// line 510
return ((frost$core$Int64$nullable) { .nonnull = false });
block8:;
// line 512
frost$core$UInt64$nullable $tmp399 = *(&local0);
frost$core$Int64 $tmp400 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(((frost$core$UInt64) $tmp399.value));
frost$core$Int64 $tmp401 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp400);
return ((frost$core$Int64$nullable) { $tmp401, true });
block6:;
// line 1
// line 515
frost$core$UInt64$nullable $tmp402 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp402;
// line 516
frost$core$UInt64$nullable $tmp403 = *(&local1);
frost$core$Bit $tmp404 = frost$core$Bit$init$builtin_bit(!$tmp403.nonnull);
bool $tmp405 = $tmp404.value;
if ($tmp405) goto block9; else goto block10;
block9:;
// line 517
return ((frost$core$Int64$nullable) { .nonnull = false });
block10:;
// line 519
frost$core$UInt64$nullable $tmp406 = *(&local1);
frost$core$Int64 $tmp407 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(((frost$core$UInt64) $tmp406.value));
return ((frost$core$Int64$nullable) { $tmp407, true });
block5:;
goto block11;
block11:;

}
frost$core$Int8 frost$core$Int64$get_asInt8$R$frost$core$Int8(frost$core$Int64 param0) {

// line 526
int64_t $tmp408 = param0.value;
frost$core$Int8 $tmp409 = (frost$core$Int8) {((int8_t) $tmp408)};
return $tmp409;

}
frost$core$Int16 frost$core$Int64$get_asInt16$R$frost$core$Int16(frost$core$Int64 param0) {

// line 532
int64_t $tmp410 = param0.value;
frost$core$Int16 $tmp411 = (frost$core$Int16) {((int16_t) $tmp410)};
return $tmp411;

}
frost$core$Int32 frost$core$Int64$get_asInt32$R$frost$core$Int32(frost$core$Int64 param0) {

// line 538
int64_t $tmp412 = param0.value;
frost$core$Int32 $tmp413 = (frost$core$Int32) {((int32_t) $tmp412)};
return $tmp413;

}
frost$core$UInt8 frost$core$Int64$get_asUInt8$R$frost$core$UInt8(frost$core$Int64 param0) {

// line 544
int64_t $tmp414 = param0.value;
frost$core$UInt8 $tmp415 = (frost$core$UInt8) {((uint8_t) $tmp414)};
return $tmp415;

}
frost$core$UInt16 frost$core$Int64$get_asUInt16$R$frost$core$UInt16(frost$core$Int64 param0) {

// line 550
int64_t $tmp416 = param0.value;
frost$core$UInt16 $tmp417 = (frost$core$UInt16) {((uint16_t) $tmp416)};
return $tmp417;

}
frost$core$UInt32 frost$core$Int64$get_asUInt32$R$frost$core$UInt32(frost$core$Int64 param0) {

// line 556
int64_t $tmp418 = param0.value;
frost$core$UInt32 $tmp419 = (frost$core$UInt32) {((uint32_t) $tmp418)};
return $tmp419;

}
frost$core$UInt64 frost$core$Int64$get_asUInt64$R$frost$core$UInt64(frost$core$Int64 param0) {

// line 562
int64_t $tmp420 = param0.value;
frost$core$UInt64 $tmp421 = (frost$core$UInt64) {((uint64_t) $tmp420)};
return $tmp421;

}
frost$core$Real32 frost$core$Int64$get_asReal32$R$frost$core$Real32(frost$core$Int64 param0) {

// line 568
int64_t $tmp422 = param0.value;
frost$core$Real32 $tmp423 = (frost$core$Real32) {((float) $tmp422)};
return $tmp423;

}
frost$core$Real64 frost$core$Int64$get_asReal64$R$frost$core$Real64(frost$core$Int64 param0) {

// line 574
int64_t $tmp424 = param0.value;
frost$core$Real64 $tmp425 = (frost$core$Real64) {((double) $tmp424)};
return $tmp425;

}
frost$core$String* frost$core$Int64$get_asString$R$frost$core$String(frost$core$Int64 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 580
frost$core$Int64 $tmp426 = (frost$core$Int64) {20};
*(&local0) = $tmp426;
// line 581
frost$core$Int64 $tmp427 = *(&local0);
int64_t $tmp428 = $tmp427.value;
frost$core$Char8* $tmp429 = ((frost$core$Char8*) frostAlloc($tmp428 * 1));
*(&local1) = $tmp429;
// line 582
frost$core$Int64 $tmp430 = *(&local0);
frost$core$Int64 $tmp431 = (frost$core$Int64) {1};
int64_t $tmp432 = $tmp430.value;
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432 - $tmp433;
frost$core$Int64 $tmp435 = (frost$core$Int64) {$tmp434};
*(&local2) = $tmp435;
// line 583
*(&local3) = param0;
// line 584
frost$core$Int64 $tmp436 = *(&local3);
frost$core$Int64 $tmp437 = (frost$core$Int64) {0};
int64_t $tmp438 = $tmp436.value;
int64_t $tmp439 = $tmp437.value;
bool $tmp440 = $tmp438 >= $tmp439;
frost$core$Bit $tmp441 = (frost$core$Bit) {$tmp440};
bool $tmp442 = $tmp441.value;
if ($tmp442) goto block1; else goto block3;
block1:;
// line 585
goto block4;
block4:;
// line 586
frost$core$Char8* $tmp443 = *(&local1);
frost$core$Int64 $tmp444 = *(&local2);
frost$core$Int64 $tmp445 = *(&local3);
frost$core$Int64 $tmp446 = (frost$core$Int64) {10};
frost$core$Int64 $tmp447 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp445, $tmp446);
frost$core$Int64 $tmp448 = (frost$core$Int64) {48};
int64_t $tmp449 = $tmp447.value;
int64_t $tmp450 = $tmp448.value;
int64_t $tmp451 = $tmp449 + $tmp450;
frost$core$Int64 $tmp452 = (frost$core$Int64) {$tmp451};
frost$core$UInt8 $tmp453 = frost$core$Int64$get_asUInt8$R$frost$core$UInt8($tmp452);
frost$core$Char8 $tmp454 = frost$core$Char8$init$frost$core$UInt8($tmp453);
int64_t $tmp455 = $tmp444.value;
$tmp443[$tmp455] = $tmp454;
// line 587
frost$core$Int64 $tmp456 = *(&local3);
frost$core$Int64 $tmp457 = (frost$core$Int64) {10};
int64_t $tmp458 = $tmp456.value;
int64_t $tmp459 = $tmp457.value;
int64_t $tmp460 = $tmp458 / $tmp459;
frost$core$Int64 $tmp461 = (frost$core$Int64) {$tmp460};
*(&local3) = $tmp461;
// line 588
frost$core$Int64 $tmp462 = *(&local2);
frost$core$Int64 $tmp463 = (frost$core$Int64) {1};
int64_t $tmp464 = $tmp462.value;
int64_t $tmp465 = $tmp463.value;
int64_t $tmp466 = $tmp464 - $tmp465;
frost$core$Int64 $tmp467 = (frost$core$Int64) {$tmp466};
*(&local2) = $tmp467;
goto block5;
block5:;
frost$core$Int64 $tmp468 = *(&local3);
frost$core$Int64 $tmp469 = (frost$core$Int64) {0};
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
bool $tmp472 = $tmp470 > $tmp471;
frost$core$Bit $tmp473 = (frost$core$Bit) {$tmp472};
bool $tmp474 = $tmp473.value;
if ($tmp474) goto block4; else goto block6;
block6:;
// line 591
frost$core$Int64 $tmp475 = *(&local2);
frost$core$Int64 $tmp476 = (frost$core$Int64) {1};
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477 + $tmp478;
frost$core$Int64 $tmp480 = (frost$core$Int64) {$tmp479};
*(&local2) = $tmp480;
goto block2;
block3:;
// line 1
// line 594
goto block7;
block7:;
// line 595
frost$core$Char8* $tmp481 = *(&local1);
frost$core$Int64 $tmp482 = *(&local2);
frost$core$Int64 $tmp483 = (frost$core$Int64) {48};
frost$core$Int64 $tmp484 = *(&local3);
frost$core$Int64 $tmp485 = (frost$core$Int64) {10};
frost$core$Int64 $tmp486 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp484, $tmp485);
int64_t $tmp487 = $tmp483.value;
int64_t $tmp488 = $tmp486.value;
int64_t $tmp489 = $tmp487 - $tmp488;
frost$core$Int64 $tmp490 = (frost$core$Int64) {$tmp489};
frost$core$UInt8 $tmp491 = frost$core$Int64$get_asUInt8$R$frost$core$UInt8($tmp490);
frost$core$Char8 $tmp492 = frost$core$Char8$init$frost$core$UInt8($tmp491);
int64_t $tmp493 = $tmp482.value;
$tmp481[$tmp493] = $tmp492;
// line 596
frost$core$Int64 $tmp494 = *(&local3);
frost$core$Int64 $tmp495 = (frost$core$Int64) {10};
int64_t $tmp496 = $tmp494.value;
int64_t $tmp497 = $tmp495.value;
int64_t $tmp498 = $tmp496 / $tmp497;
frost$core$Int64 $tmp499 = (frost$core$Int64) {$tmp498};
*(&local3) = $tmp499;
// line 597
frost$core$Int64 $tmp500 = *(&local2);
frost$core$Int64 $tmp501 = (frost$core$Int64) {1};
int64_t $tmp502 = $tmp500.value;
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502 - $tmp503;
frost$core$Int64 $tmp505 = (frost$core$Int64) {$tmp504};
*(&local2) = $tmp505;
goto block8;
block8:;
frost$core$Int64 $tmp506 = *(&local3);
frost$core$Int64 $tmp507 = (frost$core$Int64) {0};
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507.value;
bool $tmp510 = $tmp508 < $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block7; else goto block9;
block9:;
// line 600
frost$core$Char8* $tmp513 = *(&local1);
frost$core$Int64 $tmp514 = *(&local2);
frost$core$UInt8 $tmp515 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp516 = frost$core$Char8$init$frost$core$UInt8($tmp515);
int64_t $tmp517 = $tmp514.value;
$tmp513[$tmp517] = $tmp516;
goto block2;
block2:;
// line 602
frost$core$Int64 $tmp518 = *(&local0);
frost$core$Int64 $tmp519 = *(&local2);
int64_t $tmp520 = $tmp518.value;
int64_t $tmp521 = $tmp519.value;
int64_t $tmp522 = $tmp520 - $tmp521;
frost$core$Int64 $tmp523 = (frost$core$Int64) {$tmp522};
*(&local4) = $tmp523;
// line 603
frost$core$Int64 $tmp524 = (frost$core$Int64) {0};
frost$core$Int64 $tmp525 = *(&local4);
frost$core$Bit $tmp526 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp527 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp524, $tmp525, $tmp526);
frost$core$Int64 $tmp528 = $tmp527.min;
*(&local5) = $tmp528;
frost$core$Int64 $tmp529 = $tmp527.max;
frost$core$Bit $tmp530 = $tmp527.inclusive;
bool $tmp531 = $tmp530.value;
frost$core$Int64 $tmp532 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp533 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp532);
if ($tmp531) goto block13; else goto block14;
block13:;
int64_t $tmp534 = $tmp528.value;
int64_t $tmp535 = $tmp529.value;
bool $tmp536 = $tmp534 <= $tmp535;
frost$core$Bit $tmp537 = (frost$core$Bit) {$tmp536};
bool $tmp538 = $tmp537.value;
if ($tmp538) goto block10; else goto block11;
block14:;
int64_t $tmp539 = $tmp528.value;
int64_t $tmp540 = $tmp529.value;
bool $tmp541 = $tmp539 < $tmp540;
frost$core$Bit $tmp542 = (frost$core$Bit) {$tmp541};
bool $tmp543 = $tmp542.value;
if ($tmp543) goto block10; else goto block11;
block10:;
// line 604
frost$core$Char8* $tmp544 = *(&local1);
frost$core$Int64 $tmp545 = *(&local5);
frost$core$Char8* $tmp546 = *(&local1);
frost$core$Int64 $tmp547 = *(&local5);
frost$core$Int64 $tmp548 = *(&local2);
int64_t $tmp549 = $tmp547.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 + $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {$tmp551};
int64_t $tmp553 = $tmp552.value;
frost$core$Char8 $tmp554 = $tmp546[$tmp553];
int64_t $tmp555 = $tmp545.value;
$tmp544[$tmp555] = $tmp554;
goto block12;
block12:;
frost$core$Int64 $tmp556 = *(&local5);
int64_t $tmp557 = $tmp529.value;
int64_t $tmp558 = $tmp556.value;
int64_t $tmp559 = $tmp557 - $tmp558;
frost$core$Int64 $tmp560 = (frost$core$Int64) {$tmp559};
frost$core$UInt64 $tmp561 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp560);
if ($tmp531) goto block16; else goto block17;
block16:;
uint64_t $tmp562 = $tmp561.value;
uint64_t $tmp563 = $tmp533.value;
bool $tmp564 = $tmp562 >= $tmp563;
frost$core$Bit $tmp565 = (frost$core$Bit) {$tmp564};
bool $tmp566 = $tmp565.value;
if ($tmp566) goto block15; else goto block11;
block17:;
uint64_t $tmp567 = $tmp561.value;
uint64_t $tmp568 = $tmp533.value;
bool $tmp569 = $tmp567 > $tmp568;
frost$core$Bit $tmp570 = (frost$core$Bit) {$tmp569};
bool $tmp571 = $tmp570.value;
if ($tmp571) goto block15; else goto block11;
block15:;
int64_t $tmp572 = $tmp556.value;
int64_t $tmp573 = $tmp532.value;
int64_t $tmp574 = $tmp572 + $tmp573;
frost$core$Int64 $tmp575 = (frost$core$Int64) {$tmp574};
*(&local5) = $tmp575;
goto block10;
block11:;
// line 606
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp576 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp577 = *(&local1);
frost$core$Int64 $tmp578 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp576, $tmp577, $tmp578);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp576));
return $tmp576;

}
frost$core$String* frost$core$Int64$format$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

// line 612
int64_t $tmp579 = param0.value;
bool $tmp580 = $tmp579 < 0;
frost$core$Bit $tmp581 = frost$core$Bit$init$builtin_bit($tmp580);
frost$core$Int64 $tmp582 = frost$core$Int64$get_abs$R$frost$core$Int64(param0);
frost$core$UInt64 $tmp583 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp582);
frost$core$UInt64 $tmp584 = (frost$core$UInt64) {18446744073709551615};
frost$core$String* $tmp585 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp581, $tmp583, $tmp584, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp585));
return $tmp585;

}
void frost$core$Int64$cleanup(frost$core$Int64 param0) {

return;

}

