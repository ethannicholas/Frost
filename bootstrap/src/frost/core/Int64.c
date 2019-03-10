#include "frost/core/Int64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"
#include "frost/core/Comparable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Equatable.h"
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
__attribute__((weak)) frost$core$Int64 frost$core$Int64$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$get_hash$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

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
__attribute__((weak)) frost$collections$Iterator* frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$Int64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$Int64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$Int64$format$frost$core$String$R$frost$core$String(((frost$core$Int64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$Int64$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$Int64$get_count$R$frost$core$Int64(((frost$core$Int64$wrapper*) p0)->value);

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
__attribute__((weak)) void frost$core$Int64$get_bitCount$R$frost$core$Int64$shim(frost$core$Int64* sret, frost$core$Object* p0) {
    frost$core$Int64$get_bitCount$R$frost$core$Int64(sret, ((frost$core$Int64$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$Int64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int64$_frost$collections$ListView, { frost$core$Int64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Int64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int64$_frost$collections$Key, { frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int64$_frost$core$Comparable, { frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Int64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$_frost$collections$Iterable, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$Int64$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int64$_frost$core$Formattable, { frost$core$Int64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Int64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$_frost$collections$CollectionView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

static frost$core$String $s1;
frost$core$Int64$class_type frost$core$Int64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$_frost$core$Equatable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SUB$R$frost$core$Int64$shim, frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$Int64$$BNOT$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$get_abs$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64$shim, frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64$shim, frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$get_count$R$frost$core$Int64$shim, frost$core$Int64$get_bitCount$R$frost$core$Int64$shim, frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$Int64$get_hash$R$frost$core$Int64$shim, frost$core$Int64$get_asInt8$R$frost$core$Int8$shim, frost$core$Int64$get_asInt16$R$frost$core$Int16$shim, frost$core$Int64$get_asInt32$R$frost$core$Int32$shim, frost$core$Int64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$Int64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$Int64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$Int64$get_asUInt64$R$frost$core$UInt64$shim, frost$core$Int64$get_asReal32$R$frost$core$Real32$shim, frost$core$Int64$get_asReal64$R$frost$core$Real64$shim, frost$core$Int64$format$frost$core$String$R$frost$core$String$shim, frost$core$Int64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$Int64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$ListView, { frost$core$Int64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$Int64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$Key, { frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Comparable, { frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$Int64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$Iterable, { frost$core$Int64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$Int64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Formattable, { frost$core$Int64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$Int64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$Int64$wrapper_frost$collections$CollectionView, { frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit$shim, frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit$shim} };

static frost$core$String $s3;
frost$core$Int64$wrapperclass_type frost$core$Int64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$Int64$wrapper_frost$core$Equatable, { frost$core$Int64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn346)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, 160599543153787679, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 16, 160599543153787679, NULL };
static frost$core$String $s318 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 140, 254499716960505976, NULL };
static frost$core$String $s334 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s335 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3e", 165, 7013620419859298807, NULL };
static frost$core$String $s354 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s355 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 92, -7925974920941409073, NULL };
static frost$core$String $s390 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 11, -4141573454745717252, NULL };
static frost$core$String $s391 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f", 121, -5328703959364404258, NULL };
static frost$core$String $s393 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2d", 1, -5808622843851602280, NULL };

frost$core$Int64 frost$core$Int64$init$builtin_int64(int64_t param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:31
int64_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$Int64 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int8(frost$core$Int8 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:37
int8_t $tmp6 = param0.value;
int64_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((int64_t) $tmp6);
frost$core$Int64 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int16(frost$core$Int16 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:43
int16_t $tmp9 = param0.value;
int64_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((int64_t) $tmp9);
frost$core$Int64 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$Int64 frost$core$Int64$init$frost$core$Int32(frost$core$Int32 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:49
int32_t $tmp12 = param0.value;
int64_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((int64_t) $tmp12);
frost$core$Int64 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:55
uint8_t $tmp15 = param0.value;
int64_t* $tmp16 = &(&local0)->value;
*$tmp16 = ((int64_t) $tmp15);
frost$core$Int64 $tmp17 = *(&local0);
return $tmp17;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:61
uint16_t $tmp18 = param0.value;
int64_t* $tmp19 = &(&local0)->value;
*$tmp19 = ((int64_t) $tmp18);
frost$core$Int64 $tmp20 = *(&local0);
return $tmp20;

}
frost$core$Int64 frost$core$Int64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:67
uint32_t $tmp21 = param0.value;
int64_t* $tmp22 = &(&local0)->value;
*$tmp22 = ((int64_t) $tmp21);
frost$core$Int64 $tmp23 = *(&local0);
return $tmp23;

}
frost$core$Int64 frost$core$Int64$$ADD$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:73
int64_t $tmp24 = param0.value;
int64_t $tmp25 = param1.value;
int64_t $tmp26 = $tmp24 + $tmp25;
frost$core$Int64 $tmp27 = (frost$core$Int64) {$tmp26};
return $tmp27;

}
frost$core$Int64 frost$core$Int64$$SUB$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:79
int64_t $tmp28 = param0.value;
int64_t $tmp29 = param1.value;
int64_t $tmp30 = $tmp28 - $tmp29;
frost$core$Int64 $tmp31 = (frost$core$Int64) {$tmp30};
return $tmp31;

}
frost$core$Int64 frost$core$Int64$$SUB$R$frost$core$Int64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp32 = param0.value;
int64_t $tmp33 = -$tmp32;
frost$core$Int64 $tmp34 = (frost$core$Int64) {$tmp33};
return $tmp34;

}
frost$core$Int64 frost$core$Int64$$MUL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:90
int64_t $tmp35 = param0.value;
int64_t $tmp36 = param1.value;
int64_t $tmp37 = $tmp35 * $tmp36;
frost$core$Int64 $tmp38 = (frost$core$Int64) {$tmp37};
return $tmp38;

}
frost$core$Int64 frost$core$Int64$$INTDIV$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:96
int64_t $tmp39 = param0.value;
int64_t $tmp40 = param1.value;
int64_t $tmp41 = $tmp39 / $tmp40;
frost$core$Int64 $tmp42 = (frost$core$Int64) {$tmp41};
return $tmp42;

}
frost$core$Int64 frost$core$Int64$$REM$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:102
int64_t $tmp43 = param0.value;
int64_t $tmp44 = param1.value;
int64_t $tmp45 = $tmp43 % $tmp44;
frost$core$Int64 $tmp46 = (frost$core$Int64) {$tmp45};
return $tmp46;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:108
int64_t $tmp47 = param0.value;
int8_t $tmp48 = param1.value;
double $tmp49 = ((double) $tmp47) / ((double) $tmp48);
frost$core$Real64 $tmp50 = (frost$core$Real64) {$tmp49};
return $tmp50;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:114
int64_t $tmp51 = param0.value;
int16_t $tmp52 = param1.value;
double $tmp53 = ((double) $tmp51) / ((double) $tmp52);
frost$core$Real64 $tmp54 = (frost$core$Real64) {$tmp53};
return $tmp54;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:120
int64_t $tmp55 = param0.value;
int32_t $tmp56 = param1.value;
double $tmp57 = ((double) $tmp55) / ((double) $tmp56);
frost$core$Real64 $tmp58 = (frost$core$Real64) {$tmp57};
return $tmp58;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:126
int64_t $tmp59 = param0.value;
int64_t $tmp60 = param1.value;
double $tmp61 = ((double) $tmp59) / ((double) $tmp60);
frost$core$Real64 $tmp62 = (frost$core$Real64) {$tmp61};
return $tmp62;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:132
int64_t $tmp63 = param0.value;
uint8_t $tmp64 = param1.value;
double $tmp65 = ((double) $tmp63) / ((double) $tmp64);
frost$core$Real64 $tmp66 = (frost$core$Real64) {$tmp65};
return $tmp66;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:138
int64_t $tmp67 = param0.value;
uint16_t $tmp68 = param1.value;
double $tmp69 = ((double) $tmp67) / ((double) $tmp68);
frost$core$Real64 $tmp70 = (frost$core$Real64) {$tmp69};
return $tmp70;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:144
int64_t $tmp71 = param0.value;
uint32_t $tmp72 = param1.value;
double $tmp73 = ((double) $tmp71) / ((double) $tmp72);
frost$core$Real64 $tmp74 = (frost$core$Real64) {$tmp73};
return $tmp74;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:150
int64_t $tmp75 = param0.value;
uint64_t $tmp76 = param1.value;
double $tmp77 = ((double) $tmp75) / ((double) $tmp76);
frost$core$Real64 $tmp78 = (frost$core$Real64) {$tmp77};
return $tmp78;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:156
int64_t $tmp79 = param0.value;
float $tmp80 = param1.value;
double $tmp81 = ((double) $tmp79) / ((double) $tmp80);
frost$core$Real64 $tmp82 = (frost$core$Real64) {$tmp81};
return $tmp82;

}
frost$core$Real64 frost$core$Int64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$Int64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:162
int64_t $tmp83 = param0.value;
double $tmp84 = param1.value;
double $tmp85 = ((double) $tmp83) / $tmp84;
frost$core$Real64 $tmp86 = (frost$core$Real64) {$tmp85};
return $tmp86;

}
frost$core$Int64 frost$core$Int64$$BNOT$R$frost$core$Int64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:167
int64_t $tmp87 = param0.value;
int64_t $tmp88 = !$tmp87;
frost$core$Int64 $tmp89 = (frost$core$Int64) {$tmp88};
return $tmp89;

}
frost$core$Int64 frost$core$Int64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp90 = param0.value;
int64_t $tmp91 = param1.value;
int64_t $tmp92 = $tmp90 & $tmp91;
frost$core$Int64 $tmp93 = (frost$core$Int64) {$tmp92};
return $tmp93;

}
frost$core$UInt64 frost$core$Int64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:179
int64_t $tmp94 = param0.value;
uint64_t $tmp95 = param1.value;
uint64_t $tmp96 = ((uint64_t) $tmp94) & $tmp95;
frost$core$UInt64 $tmp97 = (frost$core$UInt64) {$tmp96};
return $tmp97;

}
frost$core$Int64 frost$core$Int64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:185
int64_t $tmp98 = param0.value;
int64_t $tmp99 = param1.value;
int64_t $tmp100 = $tmp98 | $tmp99;
frost$core$Int64 $tmp101 = (frost$core$Int64) {$tmp100};
return $tmp101;

}
frost$core$UInt64 frost$core$Int64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:191
int64_t $tmp102 = param0.value;
uint64_t $tmp103 = param1.value;
uint64_t $tmp104 = ((uint64_t) $tmp102) | $tmp103;
frost$core$UInt64 $tmp105 = (frost$core$UInt64) {$tmp104};
return $tmp105;

}
frost$core$Int64 frost$core$Int64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:197
int64_t $tmp106 = param0.value;
int64_t $tmp107 = param1.value;
int64_t $tmp108 = $tmp106 ^ $tmp107;
frost$core$Int64 $tmp109 = (frost$core$Int64) {$tmp108};
return $tmp109;

}
frost$core$UInt64 frost$core$Int64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$Int64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:203
int64_t $tmp110 = param0.value;
uint64_t $tmp111 = param1.value;
uint64_t $tmp112 = ((uint64_t) $tmp110) ^ $tmp111;
frost$core$UInt64 $tmp113 = (frost$core$UInt64) {$tmp112};
return $tmp113;

}
frost$core$Int64 frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:209
int64_t $tmp114 = param0.value;
int64_t $tmp115 = param1.value;
int64_t $tmp116 = $tmp114 << $tmp115;
frost$core$Int64 $tmp117 = (frost$core$Int64) {$tmp116};
return $tmp117;

}
frost$core$Int64 frost$core$Int64$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:215
int64_t $tmp118 = param0.value;
int64_t $tmp119 = param1.value;
int64_t $tmp120 = $tmp118 >> $tmp119;
frost$core$Int64 $tmp121 = (frost$core$Int64) {$tmp120};
return $tmp121;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:221
int64_t $tmp122 = param0.value;
int8_t $tmp123 = param1.value;
bool $tmp124 = $tmp122 == ((int64_t) $tmp123);
frost$core$Bit $tmp125 = (frost$core$Bit) {$tmp124};
return $tmp125;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:227
int64_t $tmp126 = param0.value;
int16_t $tmp127 = param1.value;
bool $tmp128 = $tmp126 == ((int64_t) $tmp127);
frost$core$Bit $tmp129 = (frost$core$Bit) {$tmp128};
return $tmp129;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:233
int64_t $tmp130 = param0.value;
int32_t $tmp131 = param1.value;
bool $tmp132 = $tmp130 == ((int64_t) $tmp131);
frost$core$Bit $tmp133 = (frost$core$Bit) {$tmp132};
return $tmp133;

}
frost$core$Bit frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:240
int64_t $tmp134 = param0.value;
int64_t $tmp135 = param1.value;
bool $tmp136 = $tmp134 == $tmp135;
frost$core$Bit $tmp137 = (frost$core$Bit) {$tmp136};
return $tmp137;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:246
int64_t $tmp138 = param0.value;
int8_t $tmp139 = param1.value;
bool $tmp140 = $tmp138 != ((int64_t) $tmp139);
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
return $tmp141;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:252
int64_t $tmp142 = param0.value;
int16_t $tmp143 = param1.value;
bool $tmp144 = $tmp142 != ((int64_t) $tmp143);
frost$core$Bit $tmp145 = (frost$core$Bit) {$tmp144};
return $tmp145;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:258
int64_t $tmp146 = param0.value;
int32_t $tmp147 = param1.value;
bool $tmp148 = $tmp146 != ((int64_t) $tmp147);
frost$core$Bit $tmp149 = (frost$core$Bit) {$tmp148};
return $tmp149;

}
frost$core$Bit frost$core$Int64$$NEQ$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:265
int64_t $tmp150 = param0.value;
int64_t $tmp151 = param1.value;
bool $tmp152 = $tmp150 != $tmp151;
frost$core$Bit $tmp153 = (frost$core$Bit) {$tmp152};
return $tmp153;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:271
int64_t $tmp154 = param0.value;
int8_t $tmp155 = param1.value;
bool $tmp156 = $tmp154 < ((int64_t) $tmp155);
frost$core$Bit $tmp157 = (frost$core$Bit) {$tmp156};
return $tmp157;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:277
int64_t $tmp158 = param0.value;
int16_t $tmp159 = param1.value;
bool $tmp160 = $tmp158 < ((int64_t) $tmp159);
frost$core$Bit $tmp161 = (frost$core$Bit) {$tmp160};
return $tmp161;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:283
int64_t $tmp162 = param0.value;
int32_t $tmp163 = param1.value;
bool $tmp164 = $tmp162 < ((int64_t) $tmp163);
frost$core$Bit $tmp165 = (frost$core$Bit) {$tmp164};
return $tmp165;

}
frost$core$Bit frost$core$Int64$$LT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:290
int64_t $tmp166 = param0.value;
int64_t $tmp167 = param1.value;
bool $tmp168 = $tmp166 < $tmp167;
frost$core$Bit $tmp169 = (frost$core$Bit) {$tmp168};
return $tmp169;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:296
int64_t $tmp170 = param0.value;
int8_t $tmp171 = param1.value;
bool $tmp172 = $tmp170 > ((int64_t) $tmp171);
frost$core$Bit $tmp173 = (frost$core$Bit) {$tmp172};
return $tmp173;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:302
int64_t $tmp174 = param0.value;
int16_t $tmp175 = param1.value;
bool $tmp176 = $tmp174 > ((int64_t) $tmp175);
frost$core$Bit $tmp177 = (frost$core$Bit) {$tmp176};
return $tmp177;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:308
int64_t $tmp178 = param0.value;
int32_t $tmp179 = param1.value;
bool $tmp180 = $tmp178 > ((int64_t) $tmp179);
frost$core$Bit $tmp181 = (frost$core$Bit) {$tmp180};
return $tmp181;

}
frost$core$Bit frost$core$Int64$$GT$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:315
int64_t $tmp182 = param0.value;
int64_t $tmp183 = param1.value;
bool $tmp184 = $tmp182 > $tmp183;
frost$core$Bit $tmp185 = (frost$core$Bit) {$tmp184};
return $tmp185;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:321
int64_t $tmp186 = param0.value;
int8_t $tmp187 = param1.value;
bool $tmp188 = $tmp186 >= ((int64_t) $tmp187);
frost$core$Bit $tmp189 = (frost$core$Bit) {$tmp188};
return $tmp189;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:327
int64_t $tmp190 = param0.value;
int16_t $tmp191 = param1.value;
bool $tmp192 = $tmp190 >= ((int64_t) $tmp191);
frost$core$Bit $tmp193 = (frost$core$Bit) {$tmp192};
return $tmp193;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:333
int64_t $tmp194 = param0.value;
int32_t $tmp195 = param1.value;
bool $tmp196 = $tmp194 >= ((int64_t) $tmp195);
frost$core$Bit $tmp197 = (frost$core$Bit) {$tmp196};
return $tmp197;

}
frost$core$Bit frost$core$Int64$$GE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:340
int64_t $tmp198 = param0.value;
int64_t $tmp199 = param1.value;
bool $tmp200 = $tmp198 >= $tmp199;
frost$core$Bit $tmp201 = (frost$core$Bit) {$tmp200};
return $tmp201;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int8$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:346
int64_t $tmp202 = param0.value;
int8_t $tmp203 = param1.value;
bool $tmp204 = $tmp202 <= ((int64_t) $tmp203);
frost$core$Bit $tmp205 = (frost$core$Bit) {$tmp204};
return $tmp205;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int16$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:352
int64_t $tmp206 = param0.value;
int16_t $tmp207 = param1.value;
bool $tmp208 = $tmp206 <= ((int64_t) $tmp207);
frost$core$Bit $tmp209 = (frost$core$Bit) {$tmp208};
return $tmp209;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int32$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:358
int64_t $tmp210 = param0.value;
int32_t $tmp211 = param1.value;
bool $tmp212 = $tmp210 <= ((int64_t) $tmp211);
frost$core$Bit $tmp213 = (frost$core$Bit) {$tmp212};
return $tmp213;

}
frost$core$Bit frost$core$Int64$$LE$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:365
int64_t $tmp214 = param0.value;
int64_t $tmp215 = param1.value;
bool $tmp216 = $tmp214 <= $tmp215;
frost$core$Bit $tmp217 = (frost$core$Bit) {$tmp216};
return $tmp217;

}
frost$core$Int64 frost$core$Int64$get_abs$R$frost$core$Int64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:371
frost$core$Int64 $tmp218 = (frost$core$Int64) {0u};
int64_t $tmp219 = param0.value;
int64_t $tmp220 = $tmp218.value;
bool $tmp221 = $tmp219 < $tmp220;
frost$core$Bit $tmp222 = (frost$core$Bit) {$tmp221};
bool $tmp223 = $tmp222.value;
if ($tmp223) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:372
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Int64.frost:372:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp224 = param0.value;
int64_t $tmp225 = -$tmp224;
frost$core$Int64 $tmp226 = (frost$core$Int64) {$tmp225};
return $tmp226;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:374
return param0;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:380
int64_t $tmp227 = param0.value;
int8_t $tmp228 = param1.value;
bool $tmp229 = $tmp227 < ((int64_t) $tmp228);
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:381
int64_t $tmp232 = param0.value;
frost$core$Int64 $tmp233 = (frost$core$Int64) {$tmp232};
return $tmp233;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:383
int8_t $tmp234 = param1.value;
frost$core$Int64 $tmp235 = (frost$core$Int64) {((int64_t) $tmp234)};
return $tmp235;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:389
int64_t $tmp236 = param0.value;
int16_t $tmp237 = param1.value;
bool $tmp238 = $tmp236 < ((int64_t) $tmp237);
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:390
int64_t $tmp241 = param0.value;
frost$core$Int64 $tmp242 = (frost$core$Int64) {$tmp241};
return $tmp242;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:392
int16_t $tmp243 = param1.value;
frost$core$Int64 $tmp244 = (frost$core$Int64) {((int64_t) $tmp243)};
return $tmp244;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:398
int64_t $tmp245 = param0.value;
int32_t $tmp246 = param1.value;
bool $tmp247 = $tmp245 < ((int64_t) $tmp246);
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:399
int64_t $tmp250 = param0.value;
frost$core$Int64 $tmp251 = (frost$core$Int64) {$tmp250};
return $tmp251;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:401
int32_t $tmp252 = param1.value;
frost$core$Int64 $tmp253 = (frost$core$Int64) {((int64_t) $tmp252)};
return $tmp253;

}
frost$core$Int64 frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:407
int64_t $tmp254 = param0.value;
int64_t $tmp255 = param1.value;
bool $tmp256 = $tmp254 < $tmp255;
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:408
int64_t $tmp259 = param0.value;
frost$core$Int64 $tmp260 = (frost$core$Int64) {$tmp259};
return $tmp260;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:410
int64_t $tmp261 = param1.value;
frost$core$Int64 $tmp262 = (frost$core$Int64) {$tmp261};
return $tmp262;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int8$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:420
int64_t $tmp263 = param0.value;
int8_t $tmp264 = param1.value;
bool $tmp265 = $tmp263 > ((int64_t) $tmp264);
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:421
int64_t $tmp268 = param0.value;
frost$core$Int64 $tmp269 = (frost$core$Int64) {$tmp268};
return $tmp269;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:423
int8_t $tmp270 = param1.value;
frost$core$Int64 $tmp271 = (frost$core$Int64) {((int64_t) $tmp270)};
return $tmp271;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int16$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:429
int64_t $tmp272 = param0.value;
int16_t $tmp273 = param1.value;
bool $tmp274 = $tmp272 > ((int64_t) $tmp273);
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:430
int64_t $tmp277 = param0.value;
frost$core$Int64 $tmp278 = (frost$core$Int64) {$tmp277};
return $tmp278;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:432
int16_t $tmp279 = param1.value;
frost$core$Int64 $tmp280 = (frost$core$Int64) {((int64_t) $tmp279)};
return $tmp280;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int32$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:438
int64_t $tmp281 = param0.value;
int32_t $tmp282 = param1.value;
bool $tmp283 = $tmp281 > ((int64_t) $tmp282);
frost$core$Bit $tmp284 = (frost$core$Bit) {$tmp283};
bool $tmp285 = $tmp284.value;
if ($tmp285) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:439
int64_t $tmp286 = param0.value;
frost$core$Int64 $tmp287 = (frost$core$Int64) {$tmp286};
return $tmp287;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:441
int32_t $tmp288 = param1.value;
frost$core$Int64 $tmp289 = (frost$core$Int64) {((int64_t) $tmp288)};
return $tmp289;

}
frost$core$Int64 frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64(frost$core$Int64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:447
int64_t $tmp290 = param0.value;
int64_t $tmp291 = param1.value;
bool $tmp292 = $tmp290 > $tmp291;
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:448
int64_t $tmp295 = param0.value;
frost$core$Int64 $tmp296 = (frost$core$Int64) {$tmp295};
return $tmp296;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:450
int64_t $tmp297 = param1.value;
frost$core$Int64 $tmp298 = (frost$core$Int64) {$tmp297};
return $tmp298;

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$Range$LTfrost$core$Int64$GT param0) {

frost$core$Int64 $tmp299 = param0.max;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:458:19
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp300 = $tmp299.value;
frost$core$UInt64 $tmp301 = (frost$core$UInt64) {((uint64_t) $tmp300)};
frost$core$Int64 $tmp302 = param0.min;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:458:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp303 = $tmp302.value;
frost$core$UInt64 $tmp304 = (frost$core$UInt64) {((uint64_t) $tmp303)};
uint64_t $tmp305 = $tmp301.value;
uint64_t $tmp306 = $tmp304.value;
uint64_t $tmp307 = $tmp305 - $tmp306;
frost$core$UInt64 $tmp308 = (frost$core$UInt64) {$tmp307};
frost$core$Int64 $tmp309 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:458:61
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp310 = $tmp309.value;
frost$core$UInt64 $tmp311 = (frost$core$UInt64) {((uint64_t) $tmp310)};
uint64_t $tmp312 = $tmp308.value;
uint64_t $tmp313 = $tmp311.value;
bool $tmp314 = $tmp312 < $tmp313;
frost$core$Bit $tmp315 = (frost$core$Bit) {$tmp314};
bool $tmp316 = $tmp315.value;
if ($tmp316) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp317 = (frost$core$Int64) {459u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s318, $tmp317, &$s319);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:460
FROST_ASSERT(56 == sizeof(org$frostlang$frost$Int64List));
org$frostlang$frost$Int64List* $tmp320 = (org$frostlang$frost$Int64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$Int64List$class);
frost$core$Int64 $tmp321 = param0.min;
frost$core$Int64 $tmp322 = param0.max;
frost$core$Int64 $tmp323 = (frost$core$Int64) {1u};
frost$core$Bit $tmp324 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp325 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp321, $tmp322, $tmp323, $tmp324);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT($tmp320, $tmp325);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp320)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp320));
return ((frost$collections$ListView*) $tmp320);

}
frost$collections$ListView* frost$core$Int64$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$core$Int64$GT(frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT param0) {

frost$core$Int64 $tmp326 = org$frostlang$frost$Int64List$computeCount$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$R$frost$core$Int64(param0);
frost$core$Int64 $tmp327 = (frost$core$Int64) {0u};
int64_t $tmp328 = $tmp326.value;
int64_t $tmp329 = $tmp327.value;
bool $tmp330 = $tmp328 > $tmp329;
frost$core$Bit $tmp331 = (frost$core$Bit) {$tmp330};
bool $tmp332 = $tmp331.value;
if ($tmp332) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp333 = (frost$core$Int64) {465u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s334, $tmp333, &$s335);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:466
FROST_ASSERT(56 == sizeof(org$frostlang$frost$Int64List));
org$frostlang$frost$Int64List* $tmp336 = (org$frostlang$frost$Int64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$Int64List$class);
org$frostlang$frost$Int64List$init$frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT($tmp336, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp336)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp336));
return ((frost$collections$ListView*) $tmp336);

}
frost$core$Bit frost$core$Int64$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$Int64 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp337 = (frost$core$Int64) {0u};
int64_t $tmp338 = param1.value;
int64_t $tmp339 = $tmp337.value;
bool $tmp340 = $tmp338 >= $tmp339;
frost$core$Bit $tmp341 = (frost$core$Bit) {$tmp340};
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block3; else goto block2;
block3:;
frost$core$Int64$wrapper* $tmp343;
$tmp343 = (frost$core$Int64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$Int64$wrapperclass);
$tmp343->value = param0;
ITable* $tmp344 = ((frost$collections$CollectionView*) $tmp343)->$class->itable;
while ($tmp344->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp344 = $tmp344->next;
}
$fn346 $tmp345 = $tmp344->methods[0];
frost$core$Int64 $tmp347 = $tmp345(((frost$collections$CollectionView*) $tmp343));
int64_t $tmp348 = param1.value;
int64_t $tmp349 = $tmp347.value;
bool $tmp350 = $tmp348 < $tmp349;
frost$core$Bit $tmp351 = (frost$core$Bit) {$tmp350};
bool $tmp352 = $tmp351.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp343)));
if ($tmp352) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp353 = (frost$core$Int64) {471u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s354, $tmp353, &$s355);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:472
frost$core$Int64 $tmp356 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from Int64.frost:472:27
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:209
int64_t $tmp357 = $tmp356.value;
int64_t $tmp358 = param1.value;
int64_t $tmp359 = $tmp357 << $tmp358;
frost$core$Int64 $tmp360 = (frost$core$Int64) {$tmp359};
// begin inline call to function frost.core.Int64.&&(other:frost.core.Int64):frost.core.Int64 from Int64.frost:472:21
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:173
int64_t $tmp361 = param0.value;
int64_t $tmp362 = $tmp360.value;
int64_t $tmp363 = $tmp361 & $tmp362;
frost$core$Int64 $tmp364 = (frost$core$Int64) {$tmp363};
frost$core$Int64 $tmp365 = (frost$core$Int64) {0u};
int64_t $tmp366 = $tmp364.value;
int64_t $tmp367 = $tmp365.value;
bool $tmp368 = $tmp366 != $tmp367;
frost$core$Bit $tmp369 = (frost$core$Bit) {$tmp368};
return $tmp369;

}
frost$core$Int64 frost$core$Int64$get_count$R$frost$core$Int64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:478
frost$core$Int64 $tmp370 = (frost$core$Int64) {64u};
return $tmp370;

}
frost$collections$Iterator* frost$core$Int64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:488
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp371 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:488:55
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp372 = param0.value;
frost$core$UInt64 $tmp373 = (frost$core$UInt64) {((uint64_t) $tmp372)};
frost$core$UInt64 $tmp374 = (frost$core$UInt64) {9223372036854775808u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp371, $tmp373, $tmp374);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp371)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp371));
return ((frost$collections$Iterator*) $tmp371);

}
frost$core$Int64 frost$core$Int64$get_hash$R$frost$core$Int64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:493
int64_t $tmp375 = param0.value;
frost$core$Int64 $tmp376 = (frost$core$Int64) {$tmp375};
return $tmp376;

}
frost$core$Int64$nullable frost$core$Int64$parse$frost$core$String$frost$core$Int64$R$frost$core$Int64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$UInt64$nullable local1;
frost$core$Int64 $tmp377 = (frost$core$Int64) {2u};
int64_t $tmp378 = param1.value;
int64_t $tmp379 = $tmp377.value;
bool $tmp380 = $tmp378 >= $tmp379;
frost$core$Bit $tmp381 = (frost$core$Bit) {$tmp380};
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp383 = (frost$core$Int64) {36u};
int64_t $tmp384 = param1.value;
int64_t $tmp385 = $tmp383.value;
bool $tmp386 = $tmp384 <= $tmp385;
frost$core$Bit $tmp387 = (frost$core$Bit) {$tmp386};
bool $tmp388 = $tmp387.value;
if ($tmp388) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp389 = (frost$core$Int64) {499u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s390, $tmp389, &$s391);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:500
frost$core$Bit $tmp392 = frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(param0, &$s393);
bool $tmp394 = $tmp392.value;
if ($tmp394) goto block4; else goto block6;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:501
frost$core$Int64 $tmp395 = (frost$core$Int64) {1u};
frost$core$Bit $tmp396 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$Q$GT $tmp397 = frost$core$Range$LTfrost$core$Int64$Q$GT$init$frost$core$Int64$Q$frost$core$Int64$Q$frost$core$Bit(((frost$core$Int64$nullable) { $tmp395, true }), ((frost$core$Int64$nullable) { .nonnull = false }), $tmp396);
frost$core$String* $tmp398 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(param0, $tmp397);
frost$core$UInt64$nullable $tmp399 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q($tmp398, param1);
*(&local0) = $tmp399;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp398));
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:502
frost$core$UInt64$nullable $tmp400 = *(&local0);
frost$core$Bit $tmp401 = (frost$core$Bit) {!$tmp400.nonnull};
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block7; else goto block8;
block7:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:503
return ((frost$core$Int64$nullable) { .nonnull = false });
block8:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:505
frost$core$UInt64$nullable $tmp403 = *(&local0);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Int64.frost:505:25
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:500
uint64_t $tmp404 = ((frost$core$UInt64) $tmp403.value).value;
frost$core$Int64 $tmp405 = (frost$core$Int64) {((int64_t) $tmp404)};
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Int64.frost:505:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp406 = $tmp405.value;
int64_t $tmp407 = -$tmp406;
frost$core$Int64 $tmp408 = (frost$core$Int64) {$tmp407};
return ((frost$core$Int64$nullable) { $tmp408, true });
block6:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:508
frost$core$UInt64$nullable $tmp409 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local1) = $tmp409;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:509
frost$core$UInt64$nullable $tmp410 = *(&local1);
frost$core$Bit $tmp411 = (frost$core$Bit) {!$tmp410.nonnull};
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:510
return ((frost$core$Int64$nullable) { .nonnull = false });
block12:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:512
frost$core$UInt64$nullable $tmp413 = *(&local1);
// begin inline call to function frost.core.UInt64.get_asInt64():frost.core.Int64 from Int64.frost:512:26
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/UInt64.frost:500
uint64_t $tmp414 = ((frost$core$UInt64) $tmp413.value).value;
frost$core$Int64 $tmp415 = (frost$core$Int64) {((int64_t) $tmp414)};
return ((frost$core$Int64$nullable) { $tmp415, true });
block5:;
goto block14;
block14:;

}
frost$core$Int8 frost$core$Int64$get_asInt8$R$frost$core$Int8(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:519
int64_t $tmp416 = param0.value;
frost$core$Int8 $tmp417 = (frost$core$Int8) {((int8_t) $tmp416)};
return $tmp417;

}
frost$core$Int16 frost$core$Int64$get_asInt16$R$frost$core$Int16(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:525
int64_t $tmp418 = param0.value;
frost$core$Int16 $tmp419 = (frost$core$Int16) {((int16_t) $tmp418)};
return $tmp419;

}
frost$core$Int32 frost$core$Int64$get_asInt32$R$frost$core$Int32(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:531
int64_t $tmp420 = param0.value;
frost$core$Int32 $tmp421 = (frost$core$Int32) {((int32_t) $tmp420)};
return $tmp421;

}
frost$core$UInt8 frost$core$Int64$get_asUInt8$R$frost$core$UInt8(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:537
int64_t $tmp422 = param0.value;
frost$core$UInt8 $tmp423 = (frost$core$UInt8) {((uint8_t) $tmp422)};
return $tmp423;

}
frost$core$UInt16 frost$core$Int64$get_asUInt16$R$frost$core$UInt16(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:543
int64_t $tmp424 = param0.value;
frost$core$UInt16 $tmp425 = (frost$core$UInt16) {((uint16_t) $tmp424)};
return $tmp425;

}
frost$core$UInt32 frost$core$Int64$get_asUInt32$R$frost$core$UInt32(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:549
int64_t $tmp426 = param0.value;
frost$core$UInt32 $tmp427 = (frost$core$UInt32) {((uint32_t) $tmp426)};
return $tmp427;

}
frost$core$UInt64 frost$core$Int64$get_asUInt64$R$frost$core$UInt64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp428 = param0.value;
frost$core$UInt64 $tmp429 = (frost$core$UInt64) {((uint64_t) $tmp428)};
return $tmp429;

}
frost$core$Real32 frost$core$Int64$get_asReal32$R$frost$core$Real32(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:561
int64_t $tmp430 = param0.value;
frost$core$Real32 $tmp431 = (frost$core$Real32) {((float) $tmp430)};
return $tmp431;

}
frost$core$Real64 frost$core$Int64$get_asReal64$R$frost$core$Real64(frost$core$Int64 param0) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:567
int64_t $tmp432 = param0.value;
frost$core$Real64 $tmp433 = (frost$core$Real64) {((double) $tmp432)};
return $tmp433;

}
frost$core$String* frost$core$Int64$get_asString$R$frost$core$String(frost$core$Int64 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:573
frost$core$Int64 $tmp434 = (frost$core$Int64) {20u};
*(&local0) = $tmp434;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:574
frost$core$Int64 $tmp435 = *(&local0);
int64_t $tmp436 = $tmp435.value;
frost$core$Char8* $tmp437 = ((frost$core$Char8*) frostAlloc($tmp436 * 1));
*(&local1) = $tmp437;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:575
frost$core$Int64 $tmp438 = *(&local0);
frost$core$Int64 $tmp439 = (frost$core$Int64) {1u};
int64_t $tmp440 = $tmp438.value;
int64_t $tmp441 = $tmp439.value;
int64_t $tmp442 = $tmp440 - $tmp441;
frost$core$Int64 $tmp443 = (frost$core$Int64) {$tmp442};
*(&local2) = $tmp443;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:576
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:577
frost$core$Int64 $tmp444 = *(&local3);
frost$core$Int64 $tmp445 = (frost$core$Int64) {0u};
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445.value;
bool $tmp448 = $tmp446 >= $tmp447;
frost$core$Bit $tmp449 = (frost$core$Bit) {$tmp448};
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:578
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:579
frost$core$Char8* $tmp451 = *(&local1);
frost$core$Int64 $tmp452 = *(&local2);
frost$core$Int64 $tmp453 = *(&local3);
frost$core$Int64 $tmp454 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Int64.frost:579:46
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:102
int64_t $tmp455 = $tmp453.value;
int64_t $tmp456 = $tmp454.value;
int64_t $tmp457 = $tmp455 % $tmp456;
frost$core$Int64 $tmp458 = (frost$core$Int64) {$tmp457};
frost$core$Int64 $tmp459 = (frost$core$Int64) {48u};
int64_t $tmp460 = $tmp458.value;
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460 + $tmp461;
frost$core$Int64 $tmp463 = (frost$core$Int64) {$tmp462};
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Int64.frost:579:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:537
int64_t $tmp464 = $tmp463.value;
frost$core$UInt8 $tmp465 = (frost$core$UInt8) {((uint8_t) $tmp464)};
frost$core$Char8 $tmp466 = frost$core$Char8$init$frost$core$UInt8($tmp465);
int64_t $tmp467 = $tmp452.value;
$tmp451[$tmp467] = $tmp466;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:580
frost$core$Int64 $tmp468 = *(&local3);
frost$core$Int64 $tmp469 = (frost$core$Int64) {10u};
int64_t $tmp470 = $tmp468.value;
int64_t $tmp471 = $tmp469.value;
int64_t $tmp472 = $tmp470 / $tmp471;
frost$core$Int64 $tmp473 = (frost$core$Int64) {$tmp472};
*(&local3) = $tmp473;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:581
frost$core$Int64 $tmp474 = *(&local2);
frost$core$Int64 $tmp475 = (frost$core$Int64) {1u};
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475.value;
int64_t $tmp478 = $tmp476 - $tmp477;
frost$core$Int64 $tmp479 = (frost$core$Int64) {$tmp478};
*(&local2) = $tmp479;
frost$core$Int64 $tmp480 = *(&local3);
frost$core$Int64 $tmp481 = (frost$core$Int64) {0u};
int64_t $tmp482 = $tmp480.value;
int64_t $tmp483 = $tmp481.value;
bool $tmp484 = $tmp482 > $tmp483;
frost$core$Bit $tmp485 = (frost$core$Bit) {$tmp484};
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:584
frost$core$Int64 $tmp487 = *(&local2);
frost$core$Int64 $tmp488 = (frost$core$Int64) {1u};
int64_t $tmp489 = $tmp487.value;
int64_t $tmp490 = $tmp488.value;
int64_t $tmp491 = $tmp489 + $tmp490;
frost$core$Int64 $tmp492 = (frost$core$Int64) {$tmp491};
*(&local2) = $tmp492;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:587
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:588
frost$core$Char8* $tmp493 = *(&local1);
frost$core$Int64 $tmp494 = *(&local2);
frost$core$Int64 $tmp495 = (frost$core$Int64) {48u};
frost$core$Int64 $tmp496 = *(&local3);
frost$core$Int64 $tmp497 = (frost$core$Int64) {10u};
// begin inline call to function frost.core.Int64.%(other:frost.core.Int64):frost.core.Int64 from Int64.frost:588:51
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:102
int64_t $tmp498 = $tmp496.value;
int64_t $tmp499 = $tmp497.value;
int64_t $tmp500 = $tmp498 % $tmp499;
frost$core$Int64 $tmp501 = (frost$core$Int64) {$tmp500};
int64_t $tmp502 = $tmp495.value;
int64_t $tmp503 = $tmp501.value;
int64_t $tmp504 = $tmp502 - $tmp503;
frost$core$Int64 $tmp505 = (frost$core$Int64) {$tmp504};
// begin inline call to function frost.core.Int64.get_asUInt8():frost.core.UInt8 from Int64.frost:588:56
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:537
int64_t $tmp506 = $tmp505.value;
frost$core$UInt8 $tmp507 = (frost$core$UInt8) {((uint8_t) $tmp506)};
frost$core$Char8 $tmp508 = frost$core$Char8$init$frost$core$UInt8($tmp507);
int64_t $tmp509 = $tmp494.value;
$tmp493[$tmp509] = $tmp508;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:589
frost$core$Int64 $tmp510 = *(&local3);
frost$core$Int64 $tmp511 = (frost$core$Int64) {10u};
int64_t $tmp512 = $tmp510.value;
int64_t $tmp513 = $tmp511.value;
int64_t $tmp514 = $tmp512 / $tmp513;
frost$core$Int64 $tmp515 = (frost$core$Int64) {$tmp514};
*(&local3) = $tmp515;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:590
frost$core$Int64 $tmp516 = *(&local2);
frost$core$Int64 $tmp517 = (frost$core$Int64) {1u};
int64_t $tmp518 = $tmp516.value;
int64_t $tmp519 = $tmp517.value;
int64_t $tmp520 = $tmp518 - $tmp519;
frost$core$Int64 $tmp521 = (frost$core$Int64) {$tmp520};
*(&local2) = $tmp521;
frost$core$Int64 $tmp522 = *(&local3);
frost$core$Int64 $tmp523 = (frost$core$Int64) {0u};
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523.value;
bool $tmp526 = $tmp524 < $tmp525;
frost$core$Bit $tmp527 = (frost$core$Bit) {$tmp526};
bool $tmp528 = $tmp527.value;
if ($tmp528) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:593
frost$core$Char8* $tmp529 = *(&local1);
frost$core$Int64 $tmp530 = *(&local2);
frost$core$UInt8 $tmp531 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp532 = frost$core$Char8$init$frost$core$UInt8($tmp531);
int64_t $tmp533 = $tmp530.value;
$tmp529[$tmp533] = $tmp532;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:595
frost$core$Int64 $tmp534 = *(&local0);
frost$core$Int64 $tmp535 = *(&local2);
int64_t $tmp536 = $tmp534.value;
int64_t $tmp537 = $tmp535.value;
int64_t $tmp538 = $tmp536 - $tmp537;
frost$core$Int64 $tmp539 = (frost$core$Int64) {$tmp538};
*(&local4) = $tmp539;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:596
frost$core$Int64 $tmp540 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp541 = *(&local4);
frost$core$Bit $tmp542 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp543 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp540, $tmp541, $tmp542);
frost$core$Int64 $tmp544 = $tmp543.min;
*(&local5) = $tmp544;
frost$core$Int64 $tmp545 = $tmp543.max;
frost$core$Bit $tmp546 = $tmp543.inclusive;
bool $tmp547 = $tmp546.value;
frost$core$Int64 $tmp548 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp549 = $tmp548.value;
frost$core$UInt64 $tmp550 = (frost$core$UInt64) {((uint64_t) $tmp549)};
if ($tmp547) goto block18; else goto block19;
block18:;
int64_t $tmp551 = $tmp544.value;
int64_t $tmp552 = $tmp545.value;
bool $tmp553 = $tmp551 <= $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block15; else goto block16;
block19:;
int64_t $tmp556 = $tmp544.value;
int64_t $tmp557 = $tmp545.value;
bool $tmp558 = $tmp556 < $tmp557;
frost$core$Bit $tmp559 = (frost$core$Bit) {$tmp558};
bool $tmp560 = $tmp559.value;
if ($tmp560) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:597
frost$core$Char8* $tmp561 = *(&local1);
frost$core$Int64 $tmp562 = *(&local5);
frost$core$Char8* $tmp563 = *(&local1);
frost$core$Int64 $tmp564 = *(&local5);
frost$core$Int64 $tmp565 = *(&local2);
int64_t $tmp566 = $tmp564.value;
int64_t $tmp567 = $tmp565.value;
int64_t $tmp568 = $tmp566 + $tmp567;
frost$core$Int64 $tmp569 = (frost$core$Int64) {$tmp568};
int64_t $tmp570 = $tmp569.value;
frost$core$Char8 $tmp571 = $tmp563[$tmp570];
int64_t $tmp572 = $tmp562.value;
$tmp561[$tmp572] = $tmp571;
frost$core$Int64 $tmp573 = *(&local5);
int64_t $tmp574 = $tmp545.value;
int64_t $tmp575 = $tmp573.value;
int64_t $tmp576 = $tmp574 - $tmp575;
frost$core$Int64 $tmp577 = (frost$core$Int64) {$tmp576};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp578 = $tmp577.value;
frost$core$UInt64 $tmp579 = (frost$core$UInt64) {((uint64_t) $tmp578)};
if ($tmp547) goto block22; else goto block23;
block22:;
uint64_t $tmp580 = $tmp579.value;
uint64_t $tmp581 = $tmp550.value;
bool $tmp582 = $tmp580 >= $tmp581;
frost$core$Bit $tmp583 = (frost$core$Bit) {$tmp582};
bool $tmp584 = $tmp583.value;
if ($tmp584) goto block20; else goto block16;
block23:;
uint64_t $tmp585 = $tmp579.value;
uint64_t $tmp586 = $tmp550.value;
bool $tmp587 = $tmp585 > $tmp586;
frost$core$Bit $tmp588 = (frost$core$Bit) {$tmp587};
bool $tmp589 = $tmp588.value;
if ($tmp589) goto block20; else goto block16;
block20:;
int64_t $tmp590 = $tmp573.value;
int64_t $tmp591 = $tmp548.value;
int64_t $tmp592 = $tmp590 + $tmp591;
frost$core$Int64 $tmp593 = (frost$core$Int64) {$tmp592};
*(&local5) = $tmp593;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:599
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp594 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp595 = *(&local1);
frost$core$Int64 $tmp596 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp594, $tmp595, $tmp596);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp594));
return $tmp594;

}
frost$core$String* frost$core$Int64$format$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

frost$core$Int64 local0;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:605
int64_t $tmp597 = param0.value;
bool $tmp598 = $tmp597 < 0u;
frost$core$Bit $tmp599 = (frost$core$Bit) {$tmp598};
// begin inline call to function frost.core.Int64.get_abs():frost.core.Int64 from Int64.frost:605:40
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:371
frost$core$Int64 $tmp600 = (frost$core$Int64) {0u};
int64_t $tmp601 = param0.value;
int64_t $tmp602 = $tmp600.value;
bool $tmp603 = $tmp601 < $tmp602;
frost$core$Bit $tmp604 = (frost$core$Bit) {$tmp603};
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block2; else goto block3;
block2:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:372
// begin inline call to function frost.core.Int64.-():frost.core.Int64 from Int64.frost:372:20
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:84
int64_t $tmp606 = param0.value;
int64_t $tmp607 = -$tmp606;
frost$core$Int64 $tmp608 = (frost$core$Int64) {$tmp607};
*(&local0) = $tmp608;
goto block1;
block3:;
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:374
*(&local0) = param0;
goto block1;
block1:;
frost$core$Int64 $tmp609 = *(&local0);
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Int64.frost:605:43
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Int64.frost:555
int64_t $tmp610 = $tmp609.value;
frost$core$UInt64 $tmp611 = (frost$core$UInt64) {((uint64_t) $tmp610)};
frost$core$UInt64 $tmp612 = (frost$core$UInt64) {18446744073709551615u};
frost$core$String* $tmp613 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp599, $tmp611, $tmp612, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
return $tmp613;

}
void frost$core$Int64$cleanup(frost$core$Int64 param0) {

return;

}

