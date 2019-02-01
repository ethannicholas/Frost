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
__attribute__((weak)) frost$core$Int64 frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value, p1);

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

struct { frost$core$Class* cl; ITable* next; void* methods[13]; } frost$core$Int64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int64$_frost$collections$Key, { frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$_frost$collections$ListView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$_frost$core$Equatable, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$Int64$class_type frost$core$Int64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$_frost$core$Formattable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$R$frost$core$Int64$shim, frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int64$$BNOT$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$get_abs$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$get_count$R$frost$core$Int64$shim, frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int64$get_hash$R$frost$core$Int64$shim, frost$core$Int64$get_asInt8$R$frost$core$Int8$shim, frost$core$Int64$get_asInt16$R$frost$core$Int16$shim, frost$core$Int64$get_asInt32$R$frost$core$Int32$shim, frost$core$Int64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int64$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int64$get_asReal32$R$frost$core$Real32$shim, frost$core$Int64$get_asReal64$R$frost$core$Real64$shim, frost$core$Int64$format$frost$core$String$R$frost$core$String$shim, frost$core$Int64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$Int64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$CollectionView, { frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$Iterable, { frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Comparable, { frost$core$Int64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[13]; } frost$core$Int64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$Key, { frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$ListView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Equatable, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$Int64$wrapperclass_type frost$core$Int64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Formattable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn341)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, -3824106976036894447, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static frost$core$String $s314 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 140, -7534793921674576608, NULL };
static frost$core$String $s329 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static frost$core$String $s330 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 165, 803035695710935569, NULL };
static frost$core$String $s349 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static frost$core$String $s350 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -8758177982418571271, NULL };
static frost$core$String $s378 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -8642212168406307574, NULL };
static frost$core$String $s379 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f", 121, -7062881103722945606, NULL };
static frost$core$String $s381 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, 146, NULL };

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
frost$core$Int64 frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 215
int64_t $tmp118 = param0.value;
int64_t $tmp119 = param1.value;
int64_t $tmp120 = $tmp118 >> $tmp119;
frost$core$Int64 $tmp121 = frost$core$Int64$init$builtin_int64($tmp120);
return $tmp121;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 221
int64_t $tmp122 = param0.value;
int8_t $tmp123 = param1.value;
bool $tmp124 = $tmp122 == ((int64_t) $tmp123);
frost$core$Bit $tmp125 = frost$core$Bit$init$builtin_bit($tmp124);
return $tmp125;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 227
int64_t $tmp126 = param0.value;
int16_t $tmp127 = param1.value;
bool $tmp128 = $tmp126 == ((int64_t) $tmp127);
frost$core$Bit $tmp129 = frost$core$Bit$init$builtin_bit($tmp128);
return $tmp129;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 233
int64_t $tmp130 = param0.value;
int32_t $tmp131 = param1.value;
bool $tmp132 = $tmp130 == ((int64_t) $tmp131);
frost$core$Bit $tmp133 = frost$core$Bit$init$builtin_bit($tmp132);
return $tmp133;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 240
int64_t $tmp134 = param0.value;
int64_t $tmp135 = param1.value;
bool $tmp136 = $tmp134 == $tmp135;
frost$core$Bit $tmp137 = frost$core$Bit$init$builtin_bit($tmp136);
return $tmp137;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 246
int64_t $tmp138 = param0.value;
int8_t $tmp139 = param1.value;
bool $tmp140 = $tmp138 != ((int64_t) $tmp139);
frost$core$Bit $tmp141 = frost$core$Bit$init$builtin_bit($tmp140);
return $tmp141;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 252
int64_t $tmp142 = param0.value;
int16_t $tmp143 = param1.value;
bool $tmp144 = $tmp142 != ((int64_t) $tmp143);
frost$core$Bit $tmp145 = frost$core$Bit$init$builtin_bit($tmp144);
return $tmp145;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 258
int64_t $tmp146 = param0.value;
int32_t $tmp147 = param1.value;
bool $tmp148 = $tmp146 != ((int64_t) $tmp147);
frost$core$Bit $tmp149 = frost$core$Bit$init$builtin_bit($tmp148);
return $tmp149;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 265
int64_t $tmp150 = param0.value;
int64_t $tmp151 = param1.value;
bool $tmp152 = $tmp150 != $tmp151;
frost$core$Bit $tmp153 = frost$core$Bit$init$builtin_bit($tmp152);
return $tmp153;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 271
int64_t $tmp154 = param0.value;
int8_t $tmp155 = param1.value;
bool $tmp156 = $tmp154 < ((int64_t) $tmp155);
frost$core$Bit $tmp157 = frost$core$Bit$init$builtin_bit($tmp156);
return $tmp157;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 277
int64_t $tmp158 = param0.value;
int16_t $tmp159 = param1.value;
bool $tmp160 = $tmp158 < ((int64_t) $tmp159);
frost$core$Bit $tmp161 = frost$core$Bit$init$builtin_bit($tmp160);
return $tmp161;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 283
int64_t $tmp162 = param0.value;
int32_t $tmp163 = param1.value;
bool $tmp164 = $tmp162 < ((int64_t) $tmp163);
frost$core$Bit $tmp165 = frost$core$Bit$init$builtin_bit($tmp164);
return $tmp165;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 290
int64_t $tmp166 = param0.value;
int64_t $tmp167 = param1.value;
bool $tmp168 = $tmp166 < $tmp167;
frost$core$Bit $tmp169 = frost$core$Bit$init$builtin_bit($tmp168);
return $tmp169;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 296
int64_t $tmp170 = param0.value;
int8_t $tmp171 = param1.value;
bool $tmp172 = $tmp170 > ((int64_t) $tmp171);
frost$core$Bit $tmp173 = frost$core$Bit$init$builtin_bit($tmp172);
return $tmp173;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 302
int64_t $tmp174 = param0.value;
int16_t $tmp175 = param1.value;
bool $tmp176 = $tmp174 > ((int64_t) $tmp175);
frost$core$Bit $tmp177 = frost$core$Bit$init$builtin_bit($tmp176);
return $tmp177;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 308
int64_t $tmp178 = param0.value;
int32_t $tmp179 = param1.value;
bool $tmp180 = $tmp178 > ((int64_t) $tmp179);
frost$core$Bit $tmp181 = frost$core$Bit$init$builtin_bit($tmp180);
return $tmp181;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 315
int64_t $tmp182 = param0.value;
int64_t $tmp183 = param1.value;
bool $tmp184 = $tmp182 > $tmp183;
frost$core$Bit $tmp185 = frost$core$Bit$init$builtin_bit($tmp184);
return $tmp185;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 321
int64_t $tmp186 = param0.value;
int8_t $tmp187 = param1.value;
bool $tmp188 = $tmp186 >= ((int64_t) $tmp187);
frost$core$Bit $tmp189 = frost$core$Bit$init$builtin_bit($tmp188);
return $tmp189;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 327
int64_t $tmp190 = param0.value;
int16_t $tmp191 = param1.value;
bool $tmp192 = $tmp190 >= ((int64_t) $tmp191);
frost$core$Bit $tmp193 = frost$core$Bit$init$builtin_bit($tmp192);
return $tmp193;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 333
int64_t $tmp194 = param0.value;
int32_t $tmp195 = param1.value;
bool $tmp196 = $tmp194 >= ((int64_t) $tmp195);
frost$core$Bit $tmp197 = frost$core$Bit$init$builtin_bit($tmp196);
return $tmp197;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 340
int64_t $tmp198 = param0.value;
int64_t $tmp199 = param1.value;
bool $tmp200 = $tmp198 >= $tmp199;
frost$core$Bit $tmp201 = frost$core$Bit$init$builtin_bit($tmp200);
return $tmp201;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 346
int64_t $tmp202 = param0.value;
int8_t $tmp203 = param1.value;
bool $tmp204 = $tmp202 <= ((int64_t) $tmp203);
frost$core$Bit $tmp205 = frost$core$Bit$init$builtin_bit($tmp204);
return $tmp205;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 352
int64_t $tmp206 = param0.value;
int16_t $tmp207 = param1.value;
bool $tmp208 = $tmp206 <= ((int64_t) $tmp207);
frost$core$Bit $tmp209 = frost$core$Bit$init$builtin_bit($tmp208);
return $tmp209;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 358
int64_t $tmp210 = param0.value;
int32_t $tmp211 = param1.value;
bool $tmp212 = $tmp210 <= ((int64_t) $tmp211);
frost$core$Bit $tmp213 = frost$core$Bit$init$builtin_bit($tmp212);
return $tmp213;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 365
int64_t $tmp214 = param0.value;
int64_t $tmp215 = param1.value;
bool $tmp216 = $tmp214 <= $tmp215;
frost$core$Bit $tmp217 = frost$core$Bit$init$builtin_bit($tmp216);
return $tmp217;

}
frost$core$Int64 frost$core$Int64$get_abs$R$frost$core$Int64(frost$core$Int64 param0) {

// line 371
frost$core$Int64 $tmp218 = (frost$core$Int64) {0};
int64_t $tmp219 = param0.value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 < $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block1; else goto block2;
block1:;
// line 372
frost$core$Int64 $tmp224 = frost$core$Int64$$SUB$R$frost$core$Int64(param0);
return $tmp224;
block2:;
// line 374
return param0;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 380
int64_t $tmp225 = param0.value;
int8_t $tmp226 = param1.value;
bool $tmp227 = $tmp225 < ((int64_t) $tmp226);
frost$core$Bit $tmp228 = frost$core$Bit$init$builtin_bit($tmp227);
bool $tmp229 = $tmp228.value;
if ($tmp229) goto block1; else goto block2;
block1:;
// line 381
int64_t $tmp230 = param0.value;
frost$core$Int64 $tmp231 = frost$core$Int64$init$builtin_int64($tmp230);
return $tmp231;
block2:;
// line 383
int8_t $tmp232 = param1.value;
frost$core$Int64 $tmp233 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp232));
return $tmp233;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 389
int64_t $tmp234 = param0.value;
int16_t $tmp235 = param1.value;
bool $tmp236 = $tmp234 < ((int64_t) $tmp235);
frost$core$Bit $tmp237 = frost$core$Bit$init$builtin_bit($tmp236);
bool $tmp238 = $tmp237.value;
if ($tmp238) goto block1; else goto block2;
block1:;
// line 390
int64_t $tmp239 = param0.value;
frost$core$Int64 $tmp240 = frost$core$Int64$init$builtin_int64($tmp239);
return $tmp240;
block2:;
// line 392
int16_t $tmp241 = param1.value;
frost$core$Int64 $tmp242 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp241));
return $tmp242;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 398
int64_t $tmp243 = param0.value;
int32_t $tmp244 = param1.value;
bool $tmp245 = $tmp243 < ((int64_t) $tmp244);
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit($tmp245);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block1; else goto block2;
block1:;
// line 399
int64_t $tmp248 = param0.value;
frost$core$Int64 $tmp249 = frost$core$Int64$init$builtin_int64($tmp248);
return $tmp249;
block2:;
// line 401
int32_t $tmp250 = param1.value;
frost$core$Int64 $tmp251 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp250));
return $tmp251;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 407
int64_t $tmp252 = param0.value;
int64_t $tmp253 = param1.value;
bool $tmp254 = $tmp252 < $tmp253;
frost$core$Bit $tmp255 = frost$core$Bit$init$builtin_bit($tmp254);
bool $tmp256 = $tmp255.value;
if ($tmp256) goto block1; else goto block2;
block1:;
// line 408
int64_t $tmp257 = param0.value;
frost$core$Int64 $tmp258 = frost$core$Int64$init$builtin_int64($tmp257);
return $tmp258;
block2:;
// line 410
int64_t $tmp259 = param1.value;
frost$core$Int64 $tmp260 = frost$core$Int64$init$builtin_int64($tmp259);
return $tmp260;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

// line 420
int64_t $tmp261 = param0.value;
int8_t $tmp262 = param1.value;
bool $tmp263 = $tmp261 > ((int64_t) $tmp262);
frost$core$Bit $tmp264 = frost$core$Bit$init$builtin_bit($tmp263);
bool $tmp265 = $tmp264.value;
if ($tmp265) goto block1; else goto block2;
block1:;
// line 421
int64_t $tmp266 = param0.value;
frost$core$Int64 $tmp267 = frost$core$Int64$init$builtin_int64($tmp266);
return $tmp267;
block2:;
// line 423
int8_t $tmp268 = param1.value;
frost$core$Int64 $tmp269 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp268));
return $tmp269;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

// line 429
int64_t $tmp270 = param0.value;
int16_t $tmp271 = param1.value;
bool $tmp272 = $tmp270 > ((int64_t) $tmp271);
frost$core$Bit $tmp273 = frost$core$Bit$init$builtin_bit($tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block1; else goto block2;
block1:;
// line 430
int64_t $tmp275 = param0.value;
frost$core$Int64 $tmp276 = frost$core$Int64$init$builtin_int64($tmp275);
return $tmp276;
block2:;
// line 432
int16_t $tmp277 = param1.value;
frost$core$Int64 $tmp278 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp277));
return $tmp278;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

// line 438
int64_t $tmp279 = param0.value;
int32_t $tmp280 = param1.value;
bool $tmp281 = $tmp279 > ((int64_t) $tmp280);
frost$core$Bit $tmp282 = frost$core$Bit$init$builtin_bit($tmp281);
bool $tmp283 = $tmp282.value;
if ($tmp283) goto block1; else goto block2;
block1:;
// line 439
int64_t $tmp284 = param0.value;
frost$core$Int64 $tmp285 = frost$core$Int64$init$builtin_int64($tmp284);
return $tmp285;
block2:;
// line 441
int32_t $tmp286 = param1.value;
frost$core$Int64 $tmp287 = frost$core$Int64$init$builtin_int64(((int64_t) $tmp286));
return $tmp287;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// line 447
int64_t $tmp288 = param0.value;
int64_t $tmp289 = param1.value;
bool $tmp290 = $tmp288 > $tmp289;
frost$core$Bit $tmp291 = frost$core$Bit$init$builtin_bit($tmp290);
bool $tmp292 = $tmp291.value;
if ($tmp292) goto block1; else goto block2;
block1:;
// line 448
int64_t $tmp293 = param0.value;
frost$core$Int64 $tmp294 = frost$core$Int64$init$builtin_int64($tmp293);
return $tmp294;
block2:;
// line 450
int64_t $tmp295 = param1.value;
frost$core$Int64 $tmp296 = frost$core$Int64$init$builtin_int64($tmp295);
return $tmp296;

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$Range$LTfrost$core$Int64$GT param0) {

frost$core$Int64 $tmp297 = param0.max;
frost$core$UInt64 $tmp298 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp297);
frost$core$Int64 $tmp299 = param0.min;
frost$core$UInt64 $tmp300 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp299);
uint64_t $tmp301 = $tmp298.value;
uint64_t $tmp302 = $tmp300.value;
uint64_t $tmp303 = $tmp301 - $tmp302;
frost$core$UInt64 $tmp304 = (frost$core$UInt64) {$tmp303};
frost$core$Int64 $tmp305 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp306 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp305);
uint64_t $tmp307 = $tmp304.value;
uint64_t $tmp308 = $tmp306.value;
bool $tmp309 = $tmp307 < $tmp308;
frost$core$Bit $tmp310 = (frost$core$Bit) {$tmp309};
bool $tmp311 = $tmp310.value;
if ($tmp311) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp312 = (frost$core$Int64) {459};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s313, $tmp312, &$s314);
abort(); // unreachable
block1:;
// line 460
FROST_ASSERT(56 == sizeof(org$frostlang$frost$Int64List));
org$frostlang$frost$Int64List* $tmp315 = (org$frostlang$frost$Int64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$Int64List$class);
frost$core$Int64 $tmp316 = param0.min;
frost$core$Int64 $tmp317 = param0.max;
frost$core$Int64 $tmp318 = (frost$core$Int64) {1};
frost$core$Bit $tmp319 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp320 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp316, $tmp317, $tmp318, $tmp319);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT($tmp315, $tmp320);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp315)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp315));
return ((frost$collections$ListView*) $tmp315);

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param0) {

frost$core$Int64 $tmp321 = org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int64(param0);
frost$core$Int64 $tmp322 = (frost$core$Int64) {0};
int64_t $tmp323 = $tmp321.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 > $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp328 = (frost$core$Int64) {465};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s329, $tmp328, &$s330);
abort(); // unreachable
block1:;
// line 466
FROST_ASSERT(56 == sizeof(org$frostlang$frost$Int64List));
org$frostlang$frost$Int64List* $tmp331 = (org$frostlang$frost$Int64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$Int64List$class);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT($tmp331, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp331)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp331));
return ((frost$collections$ListView*) $tmp331);

}
frost$core$Bit frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp332 = (frost$core$Int64) {0};
int64_t $tmp333 = param1.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 >= $tmp334;
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335};
bool $tmp337 = $tmp336.value;
if ($tmp337) goto block3; else goto block2;
block3:;
frost$core$Int64$wrapper* $tmp338;
$tmp338 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp338->value = param0;
ITable* $tmp339 = ((frost$collections$CollectionView*) $tmp338)->$class->itable;
while ($tmp339->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp339 = $tmp339->next;
}
$fn341 $tmp340 = $tmp339->methods[0];
frost$core$Int64 $tmp342 = $tmp340(((frost$collections$CollectionView*) $tmp338));
int64_t $tmp343 = param1.value;
int64_t $tmp344 = $tmp342.value;
bool $tmp345 = $tmp343 < $tmp344;
frost$core$Bit $tmp346 = (frost$core$Bit) {$tmp345};
bool $tmp347 = $tmp346.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp338)));
if ($tmp347) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp348 = (frost$core$Int64) {471};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s349, $tmp348, &$s350);
abort(); // unreachable
block1:;
// line 472
frost$core$Int64 $tmp351 = (frost$core$Int64) {1};
frost$core$Int64 $tmp352 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp351, param1);
frost$core$Int64 $tmp353 = frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp352);
frost$core$Int64 $tmp354 = (frost$core$Int64) {0};
int64_t $tmp355 = $tmp353.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 != $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
return $tmp358;

}
frost$core$Int64 frost$core$Int64$get_count$R$frost$core$Int64(frost$core$Int64 param0) {

// line 478
frost$core$Int64 $tmp359 = (frost$core$Int64) {64};
return $tmp359;

}
frost$collections$Iterator* frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int64 param0) {

// line 483
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp360 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp361 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64(param0);
frost$core$UInt64 $tmp362 = (frost$core$UInt64) {9223372036854775808};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp360, $tmp361, $tmp362);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp360)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp360));
return ((frost$collections$Iterator*) $tmp360);

}
frost$core$Int64 frost$core$Int64$get_hash$R$frost$core$Int64(frost$core$Int64 param0) {

// line 488
int64_t $tmp363 = param0.value;
frost$core$Int64 $tmp364 = (frost$core$Int64) {$tmp363};
return $tmp364;

}
frost$core$Int64$nullable frost$core$Int64$parse$frost$core$String$frost$core$Int64$R$frost$core$Int64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp365 = (frost$core$Int64) {2};
int64_t $tmp366 = param1.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 >= $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp371 = (frost$core$Int64) {36};
int64_t $tmp372 = param1.value;
int64_t $tmp373 = $tmp371.value;
bool $tmp374 = $tmp372 <= $tmp373;
frost$core$Bit $tmp375 = (frost$core$Bit) {$tmp374};
bool $tmp376 = $tmp375.value;
if ($tmp376) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp377 = (frost$core$Int64) {494};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s378, $tmp377, &$s379);
abort(); // unreachable
block1:;
// line 495
frost$core$Bit $tmp380 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s381);
bool $tmp382 = $tmp380.value;
if ($tmp382) goto block4; else goto block6;
block4:;
// line 496
frost$core$Int64 $tmp383 = (frost$core$Int64) {1};
frost$core$Bit $tmp384 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp385 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp383, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp384);
frost$core$String* $tmp386 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp385);
frost$core$UInt64$nullable $tmp387 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp386, param1);
*(&local0) = $tmp387;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp386));
// line 497
frost$core$UInt64$nullable $tmp388 = *(&local0);
frost$core$Bit $tmp389 = frost$core$Bit$init$builtin_bit(!$tmp388.nonnull);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block7; else goto block8;
block7:;
// line 498
return ((frost$core$Int64$nullable) { .nonnull = false });
block8:;
// line 500
frost$core$UInt64$nullable $tmp391 = *(&local0);
frost$core$Int64 $tmp392 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(((frost$core$UInt64) $tmp391.value));
frost$core$Int64 $tmp393 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp392);
return ((frost$core$Int64$nullable) { $tmp393, true });
block6:;
// line 1
// line 503
frost$core$UInt64$nullable $tmp394 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp394;
// line 504
frost$core$UInt64$nullable $tmp395 = *(&local1);
frost$core$Bit $tmp396 = frost$core$Bit$init$builtin_bit(!$tmp395.nonnull);
bool $tmp397 = $tmp396.value;
if ($tmp397) goto block9; else goto block10;
block9:;
// line 505
return ((frost$core$Int64$nullable) { .nonnull = false });
block10:;
// line 507
frost$core$UInt64$nullable $tmp398 = *(&local1);
frost$core$Int64 $tmp399 = frost$core$UInt64$get_asInt64$R$frost$core$Int64(((frost$core$UInt64) $tmp398.value));
return ((frost$core$Int64$nullable) { $tmp399, true });
block5:;
goto block11;
block11:;

}
frost$core$Int8 frost$core$Int64$get_asInt8$R$frost$core$Int8(frost$core$Int64 param0) {

// line 514
int64_t $tmp400 = param0.value;
frost$core$Int8 $tmp401 = (frost$core$Int8) {((int8_t) $tmp400)};
return $tmp401;

}
frost$core$Int16 frost$core$Int64$get_asInt16$R$frost$core$Int16(frost$core$Int64 param0) {

// line 520
int64_t $tmp402 = param0.value;
frost$core$Int16 $tmp403 = (frost$core$Int16) {((int16_t) $tmp402)};
return $tmp403;

}
frost$core$Int32 frost$core$Int64$get_asInt32$R$frost$core$Int32(frost$core$Int64 param0) {

// line 526
int64_t $tmp404 = param0.value;
frost$core$Int32 $tmp405 = (frost$core$Int32) {((int32_t) $tmp404)};
return $tmp405;

}
frost$core$UInt8 frost$core$Int64$get_asUInt8$R$frost$core$UInt8(frost$core$Int64 param0) {

// line 532
int64_t $tmp406 = param0.value;
frost$core$UInt8 $tmp407 = (frost$core$UInt8) {((uint8_t) $tmp406)};
return $tmp407;

}
frost$core$UInt16 frost$core$Int64$get_asUInt16$R$frost$core$UInt16(frost$core$Int64 param0) {

// line 538
int64_t $tmp408 = param0.value;
frost$core$UInt16 $tmp409 = (frost$core$UInt16) {((uint16_t) $tmp408)};
return $tmp409;

}
frost$core$UInt32 frost$core$Int64$get_asUInt32$R$frost$core$UInt32(frost$core$Int64 param0) {

// line 544
int64_t $tmp410 = param0.value;
frost$core$UInt32 $tmp411 = (frost$core$UInt32) {((uint32_t) $tmp410)};
return $tmp411;

}
frost$core$UInt64 frost$core$Int64$get_asUInt64$R$frost$core$UInt64(frost$core$Int64 param0) {

// line 550
int64_t $tmp412 = param0.value;
frost$core$UInt64 $tmp413 = (frost$core$UInt64) {((uint64_t) $tmp412)};
return $tmp413;

}
frost$core$Real32 frost$core$Int64$get_asReal32$R$frost$core$Real32(frost$core$Int64 param0) {

// line 556
int64_t $tmp414 = param0.value;
frost$core$Real32 $tmp415 = (frost$core$Real32) {((float) $tmp414)};
return $tmp415;

}
frost$core$Real64 frost$core$Int64$get_asReal64$R$frost$core$Real64(frost$core$Int64 param0) {

// line 562
int64_t $tmp416 = param0.value;
frost$core$Real64 $tmp417 = (frost$core$Real64) {((double) $tmp416)};
return $tmp417;

}
frost$core$String* frost$core$Int64$get_asString$R$frost$core$String(frost$core$Int64 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 568
frost$core$Int64 $tmp418 = (frost$core$Int64) {20};
*(&local0) = $tmp418;
// line 569
frost$core$Int64 $tmp419 = *(&local0);
int64_t $tmp420 = $tmp419.value;
frost$core$Char8* $tmp421 = ((frost$core$Char8*) frostAlloc($tmp420 * 1));
*(&local1) = $tmp421;
// line 570
frost$core$Int64 $tmp422 = *(&local0);
frost$core$Int64 $tmp423 = (frost$core$Int64) {1};
int64_t $tmp424 = $tmp422.value;
int64_t $tmp425 = $tmp423.value;
int64_t $tmp426 = $tmp424 - $tmp425;
frost$core$Int64 $tmp427 = (frost$core$Int64) {$tmp426};
*(&local2) = $tmp427;
// line 571
*(&local3) = param0;
// line 572
frost$core$Int64 $tmp428 = *(&local3);
frost$core$Int64 $tmp429 = (frost$core$Int64) {0};
int64_t $tmp430 = $tmp428.value;
int64_t $tmp431 = $tmp429.value;
bool $tmp432 = $tmp430 >= $tmp431;
frost$core$Bit $tmp433 = (frost$core$Bit) {$tmp432};
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block1; else goto block3;
block1:;
// line 573
goto block4;
block4:;
// line 574
frost$core$Char8* $tmp435 = *(&local1);
frost$core$Int64 $tmp436 = *(&local2);
frost$core$Int64 $tmp437 = *(&local3);
frost$core$Int64 $tmp438 = (frost$core$Int64) {10};
frost$core$Int64 $tmp439 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp437, $tmp438);
frost$core$Int64 $tmp440 = (frost$core$Int64) {48};
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440.value;
int64_t $tmp443 = $tmp441 + $tmp442;
frost$core$Int64 $tmp444 = (frost$core$Int64) {$tmp443};
frost$core$UInt8 $tmp445 = frost$core$Int64$get_asUInt8$R$frost$core$UInt8($tmp444);
frost$core$Char8 $tmp446 = frost$core$Char8$init$frost$core$UInt8($tmp445);
int64_t $tmp447 = $tmp436.value;
$tmp435[$tmp447] = $tmp446;
// line 575
frost$core$Int64 $tmp448 = *(&local3);
frost$core$Int64 $tmp449 = (frost$core$Int64) {10};
int64_t $tmp450 = $tmp448.value;
int64_t $tmp451 = $tmp449.value;
int64_t $tmp452 = $tmp450 / $tmp451;
frost$core$Int64 $tmp453 = (frost$core$Int64) {$tmp452};
*(&local3) = $tmp453;
// line 576
frost$core$Int64 $tmp454 = *(&local2);
frost$core$Int64 $tmp455 = (frost$core$Int64) {1};
int64_t $tmp456 = $tmp454.value;
int64_t $tmp457 = $tmp455.value;
int64_t $tmp458 = $tmp456 - $tmp457;
frost$core$Int64 $tmp459 = (frost$core$Int64) {$tmp458};
*(&local2) = $tmp459;
goto block5;
block5:;
frost$core$Int64 $tmp460 = *(&local3);
frost$core$Int64 $tmp461 = (frost$core$Int64) {0};
int64_t $tmp462 = $tmp460.value;
int64_t $tmp463 = $tmp461.value;
bool $tmp464 = $tmp462 > $tmp463;
frost$core$Bit $tmp465 = (frost$core$Bit) {$tmp464};
bool $tmp466 = $tmp465.value;
if ($tmp466) goto block4; else goto block6;
block6:;
// line 579
frost$core$Int64 $tmp467 = *(&local2);
frost$core$Int64 $tmp468 = (frost$core$Int64) {1};
int64_t $tmp469 = $tmp467.value;
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469 + $tmp470;
frost$core$Int64 $tmp472 = (frost$core$Int64) {$tmp471};
*(&local2) = $tmp472;
goto block2;
block3:;
// line 1
// line 582
goto block7;
block7:;
// line 583
frost$core$Char8* $tmp473 = *(&local1);
frost$core$Int64 $tmp474 = *(&local2);
frost$core$Int64 $tmp475 = (frost$core$Int64) {48};
frost$core$Int64 $tmp476 = *(&local3);
frost$core$Int64 $tmp477 = (frost$core$Int64) {10};
frost$core$Int64 $tmp478 = frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64($tmp476, $tmp477);
int64_t $tmp479 = $tmp475.value;
int64_t $tmp480 = $tmp478.value;
int64_t $tmp481 = $tmp479 - $tmp480;
frost$core$Int64 $tmp482 = (frost$core$Int64) {$tmp481};
frost$core$UInt8 $tmp483 = frost$core$Int64$get_asUInt8$R$frost$core$UInt8($tmp482);
frost$core$Char8 $tmp484 = frost$core$Char8$init$frost$core$UInt8($tmp483);
int64_t $tmp485 = $tmp474.value;
$tmp473[$tmp485] = $tmp484;
// line 584
frost$core$Int64 $tmp486 = *(&local3);
frost$core$Int64 $tmp487 = (frost$core$Int64) {10};
int64_t $tmp488 = $tmp486.value;
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488 / $tmp489;
frost$core$Int64 $tmp491 = (frost$core$Int64) {$tmp490};
*(&local3) = $tmp491;
// line 585
frost$core$Int64 $tmp492 = *(&local2);
frost$core$Int64 $tmp493 = (frost$core$Int64) {1};
int64_t $tmp494 = $tmp492.value;
int64_t $tmp495 = $tmp493.value;
int64_t $tmp496 = $tmp494 - $tmp495;
frost$core$Int64 $tmp497 = (frost$core$Int64) {$tmp496};
*(&local2) = $tmp497;
goto block8;
block8:;
frost$core$Int64 $tmp498 = *(&local3);
frost$core$Int64 $tmp499 = (frost$core$Int64) {0};
int64_t $tmp500 = $tmp498.value;
int64_t $tmp501 = $tmp499.value;
bool $tmp502 = $tmp500 < $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block7; else goto block9;
block9:;
// line 588
frost$core$Char8* $tmp505 = *(&local1);
frost$core$Int64 $tmp506 = *(&local2);
frost$core$UInt8 $tmp507 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp508 = frost$core$Char8$init$frost$core$UInt8($tmp507);
int64_t $tmp509 = $tmp506.value;
$tmp505[$tmp509] = $tmp508;
goto block2;
block2:;
// line 590
frost$core$Int64 $tmp510 = *(&local0);
frost$core$Int64 $tmp511 = *(&local2);
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512 - $tmp513;
frost$core$Int64 $tmp515 = (frost$core$Int64) {$tmp514};
*(&local4) = $tmp515;
// line 591
frost$core$Int64 $tmp516 = (frost$core$Int64) {0};
frost$core$Int64 $tmp517 = *(&local4);
frost$core$Bit $tmp518 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp519 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp516, $tmp517, $tmp518);
frost$core$Int64 $tmp520 = $tmp519.min;
*(&local5) = $tmp520;
frost$core$Int64 $tmp521 = $tmp519.max;
frost$core$Bit $tmp522 = $tmp519.inclusive;
bool $tmp523 = $tmp522.value;
frost$core$Int64 $tmp524 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp525 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp524);
if ($tmp523) goto block13; else goto block14;
block13:;
int64_t $tmp526 = $tmp520.value;
int64_t $tmp527 = $tmp521.value;
bool $tmp528 = $tmp526 <= $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block10; else goto block11;
block14:;
int64_t $tmp531 = $tmp520.value;
int64_t $tmp532 = $tmp521.value;
bool $tmp533 = $tmp531 < $tmp532;
frost$core$Bit $tmp534 = (frost$core$Bit) {$tmp533};
bool $tmp535 = $tmp534.value;
if ($tmp535) goto block10; else goto block11;
block10:;
// line 592
frost$core$Char8* $tmp536 = *(&local1);
frost$core$Int64 $tmp537 = *(&local5);
frost$core$Char8* $tmp538 = *(&local1);
frost$core$Int64 $tmp539 = *(&local5);
frost$core$Int64 $tmp540 = *(&local2);
int64_t $tmp541 = $tmp539.value;
int64_t $tmp542 = $tmp540.value;
int64_t $tmp543 = $tmp541 + $tmp542;
frost$core$Int64 $tmp544 = (frost$core$Int64) {$tmp543};
int64_t $tmp545 = $tmp544.value;
frost$core$Char8 $tmp546 = $tmp538[$tmp545];
int64_t $tmp547 = $tmp537.value;
$tmp536[$tmp547] = $tmp546;
goto block12;
block12:;
frost$core$Int64 $tmp548 = *(&local5);
int64_t $tmp549 = $tmp521.value;
int64_t $tmp550 = $tmp548.value;
int64_t $tmp551 = $tmp549 - $tmp550;
frost$core$Int64 $tmp552 = (frost$core$Int64) {$tmp551};
frost$core$UInt64 $tmp553 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp552);
if ($tmp523) goto block16; else goto block17;
block16:;
uint64_t $tmp554 = $tmp553.value;
uint64_t $tmp555 = $tmp525.value;
bool $tmp556 = $tmp554 >= $tmp555;
frost$core$Bit $tmp557 = (frost$core$Bit) {$tmp556};
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block15; else goto block11;
block17:;
uint64_t $tmp559 = $tmp553.value;
uint64_t $tmp560 = $tmp525.value;
bool $tmp561 = $tmp559 > $tmp560;
frost$core$Bit $tmp562 = (frost$core$Bit) {$tmp561};
bool $tmp563 = $tmp562.value;
if ($tmp563) goto block15; else goto block11;
block15:;
int64_t $tmp564 = $tmp548.value;
int64_t $tmp565 = $tmp524.value;
int64_t $tmp566 = $tmp564 + $tmp565;
frost$core$Int64 $tmp567 = (frost$core$Int64) {$tmp566};
*(&local5) = $tmp567;
goto block10;
block11:;
// line 594
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp568 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp569 = *(&local1);
frost$core$Int64 $tmp570 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp568, $tmp569, $tmp570);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp568));
return $tmp568;

}
frost$core$String* frost$core$Int64$format$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

// line 600
int64_t $tmp571 = param0.value;
bool $tmp572 = $tmp571 < 0;
frost$core$Bit $tmp573 = frost$core$Bit$init$builtin_bit($tmp572);
frost$core$Int64 $tmp574 = frost$core$Int64$get_abs$R$frost$core$Int64(param0);
frost$core$UInt64 $tmp575 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp574);
frost$core$UInt64 $tmp576 = (frost$core$UInt64) {18446744073709551615};
frost$core$String* $tmp577 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp573, $tmp575, $tmp576, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp577));
return $tmp577;

}
void frost$core$Int64$cleanup(frost$core$Int64 param0) {

return;

}

