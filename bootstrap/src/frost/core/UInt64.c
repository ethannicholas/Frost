#include "frost/core/UInt64.h"
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
#include "frost/collections/Key.h"
#include "frost/collections/ListView.h"
#include "frost/core/Comparable.h"
#include "frost/core/Formattable.h"
#include "frost/core/Real64.h"
#include "frost/core/Int8.h"
#include "frost/core/Int16.h"
#include "frost/core/Int32.h"
#include "frost/core/UInt8.h"
#include "frost/core/UInt16.h"
#include "frost/core/UInt32.h"
#include "frost/core/Real32.h"
#include "frost/core/Range.LTfrost/core/UInt64.GT.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frost/UInt64List.h"
#include "frost/core/SteppedRange.LTfrost/core/UInt64.Cfrost/core/UInt64.GT.h"
#include "org/frostlang/frost/IntBitIterator.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"

__attribute__((weak)) frost$core$Int64 frost$core$UInt64$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$get_count$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim(frost$core$Object* p0) {
    frost$collections$Iterator* result = frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$get_hash$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Object* frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(13, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, ((frost$core$UInt64$wrapper*) p1)->value);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt64$format$frost$core$String$R$frost$core$String(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$UInt64$get_asString$R$frost$core$String$shim(frost$core$Object* p0) {
    frost$core$String* result = frost$core$UInt64$get_asString$R$frost$core$String(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$Value$cleanup$shim(frost$core$Value* p0) {
    frost$core$Value$cleanup(p0);

}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt64$$SUB$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int8 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int16 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real32 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim(frost$core$Object* p0, frost$core$Real64 p1) {
    frost$core$Real64 result = frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim(frost$core$Object* p0) {
    frost$core$UInt64 result = frost$core$UInt64$$BNOT$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$SHL$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$SHL$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$$SHR$frost$core$Int64$R$frost$core$Int64$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Int64 result = frost$core$UInt64$$SHR$frost$core$Int64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$Bit result = frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt8 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt16 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt32 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int8 frost$core$UInt64$get_asInt8$R$frost$core$Int8$shim(frost$core$Object* p0) {
    frost$core$Int8 result = frost$core$UInt64$get_asInt8$R$frost$core$Int8(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int16 frost$core$UInt64$get_asInt16$R$frost$core$Int16$shim(frost$core$Object* p0) {
    frost$core$Int16 result = frost$core$UInt64$get_asInt16$R$frost$core$Int16(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int32 frost$core$UInt64$get_asInt32$R$frost$core$Int32$shim(frost$core$Object* p0) {
    frost$core$Int32 result = frost$core$UInt64$get_asInt32$R$frost$core$Int32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$get_asInt64$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$get_asInt64$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt8 frost$core$UInt64$get_asUInt8$R$frost$core$UInt8$shim(frost$core$Object* p0) {
    frost$core$UInt8 result = frost$core$UInt64$get_asUInt8$R$frost$core$UInt8(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt16 frost$core$UInt64$get_asUInt16$R$frost$core$UInt16$shim(frost$core$Object* p0) {
    frost$core$UInt16 result = frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$UInt32 frost$core$UInt64$get_asUInt32$R$frost$core$UInt32$shim(frost$core$Object* p0) {
    frost$core$UInt32 result = frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real32 frost$core$UInt64$get_asReal32$R$frost$core$Real32$shim(frost$core$Object* p0) {
    frost$core$Real32 result = frost$core$UInt64$get_asReal32$R$frost$core$Real32(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) frost$core$Real64 frost$core$UInt64$get_asReal64$R$frost$core$Real64$shim(frost$core$Object* p0) {
    frost$core$Real64 result = frost$core$UInt64$get_asReal64$R$frost$core$Real64(((frost$core$UInt64$wrapper*) p0)->value);

    return result;
}
__attribute__((weak)) void frost$core$UInt64$cleanup$shim(frost$core$Object* p0) {
    frost$core$UInt64$cleanup(((frost$core$UInt64$wrapper*) p0)->value);

}

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt64$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$_frost$collections$CollectionView, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt64$_frost$core$Equatable, { frost$core$UInt64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt64$_frost$collections$Key, { frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$_frost$collections$ListView, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$_frost$core$Comparable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$UInt64$class_type frost$core$UInt64$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$_frost$core$Formattable, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$R$frost$core$UInt64$shim, frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim, frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHL$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt64$get_hash$R$frost$core$Int64$shim, frost$core$UInt64$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt64$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt64$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt64$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt64$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt64$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$CollectionView, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Equatable, { frost$core$UInt64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Key, { frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$ListView, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Comparable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$UInt64$wrapperclass_type frost$core$UInt64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Formattable, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn331)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s303 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s304 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 143, 5763903624548886351, NULL };
static frost$core$String $s319 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s320 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 169, -424783135773710871, NULL };
static frost$core$String $s339 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s340 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, -8879437518421684442, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s368 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f", 123, -1339440412019629644, NULL };

frost$core$UInt64 frost$core$UInt64$init$builtin_uint64(uint64_t param0) {

frost$core$UInt64 local0;
// line 30
uint64_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt64 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt64 local0;
// line 36
uint8_t $tmp6 = param0.value;
uint64_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint64_t) $tmp6);
frost$core$UInt64 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt64 local0;
// line 42
uint16_t $tmp9 = param0.value;
uint64_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((uint64_t) $tmp9);
frost$core$UInt64 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$UInt64 local0;
// line 48
uint32_t $tmp12 = param0.value;
uint64_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((uint64_t) $tmp12);
frost$core$UInt64 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 54
uint64_t $tmp15 = param0.value;
uint64_t $tmp16 = param1.value;
uint64_t $tmp17 = $tmp15 + $tmp16;
frost$core$UInt64 $tmp18 = frost$core$UInt64$init$builtin_uint64($tmp17);
return $tmp18;

}
frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 60
uint64_t $tmp19 = param0.value;
uint64_t $tmp20 = param1.value;
uint64_t $tmp21 = $tmp19 - $tmp20;
frost$core$UInt64 $tmp22 = frost$core$UInt64$init$builtin_uint64($tmp21);
return $tmp22;

}
frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64(frost$core$UInt64 param0) {

// line 65
uint64_t $tmp23 = param0.value;
uint64_t $tmp24 = -$tmp23;
frost$core$UInt64 $tmp25 = (frost$core$UInt64) {$tmp24};
return $tmp25;

}
frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 71
uint64_t $tmp26 = param0.value;
uint64_t $tmp27 = param1.value;
uint64_t $tmp28 = $tmp26 * $tmp27;
frost$core$UInt64 $tmp29 = frost$core$UInt64$init$builtin_uint64($tmp28);
return $tmp29;

}
frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 77
uint64_t $tmp30 = param0.value;
uint64_t $tmp31 = param1.value;
uint64_t $tmp32 = $tmp30 / $tmp31;
frost$core$UInt64 $tmp33 = frost$core$UInt64$init$builtin_uint64($tmp32);
return $tmp33;

}
frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 83
uint64_t $tmp34 = param0.value;
uint64_t $tmp35 = param1.value;
uint64_t $tmp36 = $tmp34 % $tmp35;
frost$core$UInt64 $tmp37 = frost$core$UInt64$init$builtin_uint64($tmp36);
return $tmp37;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int8 param1) {

// line 89
uint64_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
double $tmp40 = ((double) $tmp38) / ((double) $tmp39);
frost$core$Real64 $tmp41 = frost$core$Real64$init$builtin_float64($tmp40);
return $tmp41;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int16 param1) {

// line 95
uint64_t $tmp42 = param0.value;
int16_t $tmp43 = param1.value;
double $tmp44 = ((double) $tmp42) / ((double) $tmp43);
frost$core$Real64 $tmp45 = frost$core$Real64$init$builtin_float64($tmp44);
return $tmp45;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int32 param1) {

// line 101
uint64_t $tmp46 = param0.value;
int32_t $tmp47 = param1.value;
double $tmp48 = ((double) $tmp46) / ((double) $tmp47);
frost$core$Real64 $tmp49 = frost$core$Real64$init$builtin_float64($tmp48);
return $tmp49;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 107
uint64_t $tmp50 = param0.value;
int64_t $tmp51 = param1.value;
double $tmp52 = ((double) $tmp50) / ((double) $tmp51);
frost$core$Real64 $tmp53 = frost$core$Real64$init$builtin_float64($tmp52);
return $tmp53;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 113
uint64_t $tmp54 = param0.value;
uint8_t $tmp55 = param1.value;
double $tmp56 = ((double) $tmp54) / ((double) $tmp55);
frost$core$Real64 $tmp57 = frost$core$Real64$init$builtin_float64($tmp56);
return $tmp57;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 119
uint64_t $tmp58 = param0.value;
uint16_t $tmp59 = param1.value;
double $tmp60 = ((double) $tmp58) / ((double) $tmp59);
frost$core$Real64 $tmp61 = frost$core$Real64$init$builtin_float64($tmp60);
return $tmp61;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 125
uint64_t $tmp62 = param0.value;
uint32_t $tmp63 = param1.value;
double $tmp64 = ((double) $tmp62) / ((double) $tmp63);
frost$core$Real64 $tmp65 = frost$core$Real64$init$builtin_float64($tmp64);
return $tmp65;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 131
uint64_t $tmp66 = param0.value;
uint64_t $tmp67 = param1.value;
double $tmp68 = ((double) $tmp66) / ((double) $tmp67);
frost$core$Real64 $tmp69 = frost$core$Real64$init$builtin_float64($tmp68);
return $tmp69;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real32 param1) {

// line 137
uint64_t $tmp70 = param0.value;
float $tmp71 = param1.value;
double $tmp72 = ((double) $tmp70) / ((double) $tmp71);
frost$core$Real64 $tmp73 = frost$core$Real64$init$builtin_float64($tmp72);
return $tmp73;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real64 param1) {

// line 143
uint64_t $tmp74 = param0.value;
double $tmp75 = param1.value;
double $tmp76 = ((double) $tmp74) / $tmp75;
frost$core$Real64 $tmp77 = frost$core$Real64$init$builtin_float64($tmp76);
return $tmp77;

}
frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64(frost$core$UInt64 param0) {

// line 148
uint64_t $tmp78 = param0.value;
uint64_t $tmp79 = !$tmp78;
frost$core$UInt64 $tmp80 = (frost$core$UInt64) {$tmp79};
return $tmp80;

}
frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 154
uint64_t $tmp81 = param0.value;
int64_t $tmp82 = param1.value;
int64_t $tmp83 = ((int64_t) $tmp81) & $tmp82;
frost$core$Int64 $tmp84 = frost$core$Int64$init$builtin_int64($tmp83);
return $tmp84;

}
frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 160
uint64_t $tmp85 = param0.value;
uint64_t $tmp86 = param1.value;
uint64_t $tmp87 = $tmp85 & $tmp86;
frost$core$UInt64 $tmp88 = frost$core$UInt64$init$builtin_uint64($tmp87);
return $tmp88;

}
frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 166
uint64_t $tmp89 = param0.value;
int64_t $tmp90 = param1.value;
int64_t $tmp91 = ((int64_t) $tmp89) | $tmp90;
frost$core$Int64 $tmp92 = frost$core$Int64$init$builtin_int64($tmp91);
return $tmp92;

}
frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 172
uint64_t $tmp93 = param0.value;
uint64_t $tmp94 = param1.value;
uint64_t $tmp95 = $tmp93 | $tmp94;
frost$core$UInt64 $tmp96 = frost$core$UInt64$init$builtin_uint64($tmp95);
return $tmp96;

}
frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 178
uint64_t $tmp97 = param0.value;
int64_t $tmp98 = param1.value;
int64_t $tmp99 = ((int64_t) $tmp97) ^ $tmp98;
frost$core$Int64 $tmp100 = frost$core$Int64$init$builtin_int64($tmp99);
return $tmp100;

}
frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 184
uint64_t $tmp101 = param0.value;
uint64_t $tmp102 = param1.value;
uint64_t $tmp103 = $tmp101 ^ $tmp102;
frost$core$UInt64 $tmp104 = frost$core$UInt64$init$builtin_uint64($tmp103);
return $tmp104;

}
frost$core$Int64 frost$core$UInt64$$SHL$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 190
uint64_t $tmp105 = param0.value;
int64_t $tmp106 = param1.value;
int64_t $tmp107 = ((int64_t) $tmp105) << $tmp106;
frost$core$Int64 $tmp108 = frost$core$Int64$init$builtin_int64($tmp107);
return $tmp108;

}
frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 196
uint64_t $tmp109 = param0.value;
uint64_t $tmp110 = param1.value;
uint64_t $tmp111 = $tmp109 << $tmp110;
frost$core$UInt64 $tmp112 = frost$core$UInt64$init$builtin_uint64($tmp111);
return $tmp112;

}
frost$core$Int64 frost$core$UInt64$$SHR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// line 202
uint64_t $tmp113 = param0.value;
int64_t $tmp114 = param1.value;
int64_t $tmp115 = ((int64_t) $tmp113) >> $tmp114;
frost$core$Int64 $tmp116 = frost$core$Int64$init$builtin_int64($tmp115);
return $tmp116;

}
frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 208
uint64_t $tmp117 = param0.value;
uint64_t $tmp118 = param1.value;
uint64_t $tmp119 = $tmp117 >> $tmp118;
frost$core$UInt64 $tmp120 = frost$core$UInt64$init$builtin_uint64($tmp119);
return $tmp120;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 214
uint64_t $tmp121 = param0.value;
uint8_t $tmp122 = param1.value;
bool $tmp123 = $tmp121 == ((uint64_t) $tmp122);
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit($tmp123);
return $tmp124;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 220
uint64_t $tmp125 = param0.value;
uint16_t $tmp126 = param1.value;
bool $tmp127 = $tmp125 == ((uint64_t) $tmp126);
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit($tmp127);
return $tmp128;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 226
uint64_t $tmp129 = param0.value;
uint32_t $tmp130 = param1.value;
bool $tmp131 = $tmp129 == ((uint64_t) $tmp130);
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit($tmp131);
return $tmp132;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 233
uint64_t $tmp133 = param0.value;
uint64_t $tmp134 = param1.value;
bool $tmp135 = $tmp133 == $tmp134;
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135);
return $tmp136;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 239
uint64_t $tmp137 = param0.value;
uint8_t $tmp138 = param1.value;
bool $tmp139 = $tmp137 != ((uint64_t) $tmp138);
frost$core$Bit $tmp140 = frost$core$Bit$init$builtin_bit($tmp139);
return $tmp140;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 245
uint64_t $tmp141 = param0.value;
uint16_t $tmp142 = param1.value;
bool $tmp143 = $tmp141 != ((uint64_t) $tmp142);
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit($tmp143);
return $tmp144;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 251
uint64_t $tmp145 = param0.value;
uint32_t $tmp146 = param1.value;
bool $tmp147 = $tmp145 != ((uint64_t) $tmp146);
frost$core$Bit $tmp148 = frost$core$Bit$init$builtin_bit($tmp147);
return $tmp148;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 258
uint64_t $tmp149 = param0.value;
uint64_t $tmp150 = param1.value;
bool $tmp151 = $tmp149 != $tmp150;
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit($tmp151);
return $tmp152;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 264
uint64_t $tmp153 = param0.value;
uint8_t $tmp154 = param1.value;
bool $tmp155 = $tmp153 < ((uint64_t) $tmp154);
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit($tmp155);
return $tmp156;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 270
uint64_t $tmp157 = param0.value;
uint16_t $tmp158 = param1.value;
bool $tmp159 = $tmp157 < ((uint64_t) $tmp158);
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159);
return $tmp160;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 276
uint64_t $tmp161 = param0.value;
uint32_t $tmp162 = param1.value;
bool $tmp163 = $tmp161 < ((uint64_t) $tmp162);
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit($tmp163);
return $tmp164;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 283
uint64_t $tmp165 = param0.value;
uint64_t $tmp166 = param1.value;
bool $tmp167 = $tmp165 < $tmp166;
frost$core$Bit $tmp168 = frost$core$Bit$init$builtin_bit($tmp167);
return $tmp168;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 289
uint64_t $tmp169 = param0.value;
uint8_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 > ((uint64_t) $tmp170);
frost$core$Bit $tmp172 = frost$core$Bit$init$builtin_bit($tmp171);
return $tmp172;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 295
uint64_t $tmp173 = param0.value;
uint16_t $tmp174 = param1.value;
bool $tmp175 = $tmp173 > ((uint64_t) $tmp174);
frost$core$Bit $tmp176 = frost$core$Bit$init$builtin_bit($tmp175);
return $tmp176;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 301
uint64_t $tmp177 = param0.value;
uint32_t $tmp178 = param1.value;
bool $tmp179 = $tmp177 > ((uint64_t) $tmp178);
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179);
return $tmp180;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 308
uint64_t $tmp181 = param0.value;
uint64_t $tmp182 = param1.value;
bool $tmp183 = $tmp181 > $tmp182;
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit($tmp183);
return $tmp184;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 314
uint64_t $tmp185 = param0.value;
uint8_t $tmp186 = param1.value;
bool $tmp187 = $tmp185 >= ((uint64_t) $tmp186);
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit($tmp187);
return $tmp188;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 320
uint64_t $tmp189 = param0.value;
uint16_t $tmp190 = param1.value;
bool $tmp191 = $tmp189 >= ((uint64_t) $tmp190);
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit($tmp191);
return $tmp192;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 326
uint64_t $tmp193 = param0.value;
uint32_t $tmp194 = param1.value;
bool $tmp195 = $tmp193 >= ((uint64_t) $tmp194);
frost$core$Bit $tmp196 = frost$core$Bit$init$builtin_bit($tmp195);
return $tmp196;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 333
uint64_t $tmp197 = param0.value;
uint64_t $tmp198 = param1.value;
bool $tmp199 = $tmp197 >= $tmp198;
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199);
return $tmp200;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 339
uint64_t $tmp201 = param0.value;
uint8_t $tmp202 = param1.value;
bool $tmp203 = $tmp201 <= ((uint64_t) $tmp202);
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203);
return $tmp204;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 345
uint64_t $tmp205 = param0.value;
uint16_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 <= ((uint64_t) $tmp206);
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit($tmp207);
return $tmp208;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 351
uint64_t $tmp209 = param0.value;
uint32_t $tmp210 = param1.value;
bool $tmp211 = $tmp209 <= ((uint64_t) $tmp210);
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit($tmp211);
return $tmp212;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 358
uint64_t $tmp213 = param0.value;
uint64_t $tmp214 = param1.value;
bool $tmp215 = $tmp213 <= $tmp214;
frost$core$Bit $tmp216 = frost$core$Bit$init$builtin_bit($tmp215);
return $tmp216;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 368
uint64_t $tmp217 = param0.value;
uint8_t $tmp218 = param1.value;
bool $tmp219 = $tmp217 < ((uint64_t) $tmp218);
frost$core$Bit $tmp220 = frost$core$Bit$init$builtin_bit($tmp219);
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block1; else goto block2;
block1:;
// line 369
uint64_t $tmp222 = param0.value;
frost$core$UInt64 $tmp223 = frost$core$UInt64$init$builtin_uint64($tmp222);
return $tmp223;
block2:;
// line 371
uint8_t $tmp224 = param1.value;
frost$core$UInt64 $tmp225 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp224));
return $tmp225;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 377
uint64_t $tmp226 = param0.value;
uint16_t $tmp227 = param1.value;
bool $tmp228 = $tmp226 < ((uint64_t) $tmp227);
frost$core$Bit $tmp229 = frost$core$Bit$init$builtin_bit($tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block1; else goto block2;
block1:;
// line 378
uint64_t $tmp231 = param0.value;
frost$core$UInt64 $tmp232 = frost$core$UInt64$init$builtin_uint64($tmp231);
return $tmp232;
block2:;
// line 380
uint16_t $tmp233 = param1.value;
frost$core$UInt64 $tmp234 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp233));
return $tmp234;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 386
uint64_t $tmp235 = param0.value;
uint32_t $tmp236 = param1.value;
bool $tmp237 = $tmp235 < ((uint64_t) $tmp236);
frost$core$Bit $tmp238 = frost$core$Bit$init$builtin_bit($tmp237);
bool $tmp239 = $tmp238.value;
if ($tmp239) goto block1; else goto block2;
block1:;
// line 387
uint64_t $tmp240 = param0.value;
frost$core$UInt64 $tmp241 = frost$core$UInt64$init$builtin_uint64($tmp240);
return $tmp241;
block2:;
// line 389
uint32_t $tmp242 = param1.value;
frost$core$UInt64 $tmp243 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp242));
return $tmp243;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 395
uint64_t $tmp244 = param0.value;
uint64_t $tmp245 = param1.value;
bool $tmp246 = $tmp244 < $tmp245;
frost$core$Bit $tmp247 = frost$core$Bit$init$builtin_bit($tmp246);
bool $tmp248 = $tmp247.value;
if ($tmp248) goto block1; else goto block2;
block1:;
// line 396
uint64_t $tmp249 = param0.value;
frost$core$UInt64 $tmp250 = frost$core$UInt64$init$builtin_uint64($tmp249);
return $tmp250;
block2:;
// line 398
uint64_t $tmp251 = param1.value;
frost$core$UInt64 $tmp252 = frost$core$UInt64$init$builtin_uint64($tmp251);
return $tmp252;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 408
uint64_t $tmp253 = param0.value;
uint8_t $tmp254 = param1.value;
bool $tmp255 = $tmp253 > ((uint64_t) $tmp254);
frost$core$Bit $tmp256 = frost$core$Bit$init$builtin_bit($tmp255);
bool $tmp257 = $tmp256.value;
if ($tmp257) goto block1; else goto block2;
block1:;
// line 409
uint64_t $tmp258 = param0.value;
frost$core$UInt64 $tmp259 = frost$core$UInt64$init$builtin_uint64($tmp258);
return $tmp259;
block2:;
// line 411
uint8_t $tmp260 = param1.value;
frost$core$UInt64 $tmp261 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp260));
return $tmp261;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 417
uint64_t $tmp262 = param0.value;
uint16_t $tmp263 = param1.value;
bool $tmp264 = $tmp262 > ((uint64_t) $tmp263);
frost$core$Bit $tmp265 = frost$core$Bit$init$builtin_bit($tmp264);
bool $tmp266 = $tmp265.value;
if ($tmp266) goto block1; else goto block2;
block1:;
// line 418
uint64_t $tmp267 = param0.value;
frost$core$UInt64 $tmp268 = frost$core$UInt64$init$builtin_uint64($tmp267);
return $tmp268;
block2:;
// line 420
uint16_t $tmp269 = param1.value;
frost$core$UInt64 $tmp270 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp269));
return $tmp270;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 426
uint64_t $tmp271 = param0.value;
uint32_t $tmp272 = param1.value;
bool $tmp273 = $tmp271 > ((uint64_t) $tmp272);
frost$core$Bit $tmp274 = frost$core$Bit$init$builtin_bit($tmp273);
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block1; else goto block2;
block1:;
// line 427
uint64_t $tmp276 = param0.value;
frost$core$UInt64 $tmp277 = frost$core$UInt64$init$builtin_uint64($tmp276);
return $tmp277;
block2:;
// line 429
uint32_t $tmp278 = param1.value;
frost$core$UInt64 $tmp279 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp278));
return $tmp279;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 435
uint64_t $tmp280 = param0.value;
uint64_t $tmp281 = param1.value;
bool $tmp282 = $tmp280 > $tmp281;
frost$core$Bit $tmp283 = frost$core$Bit$init$builtin_bit($tmp282);
bool $tmp284 = $tmp283.value;
if ($tmp284) goto block1; else goto block2;
block1:;
// line 436
uint64_t $tmp285 = param0.value;
frost$core$UInt64 $tmp286 = frost$core$UInt64$init$builtin_uint64($tmp285);
return $tmp286;
block2:;
// line 438
uint64_t $tmp287 = param1.value;
frost$core$UInt64 $tmp288 = frost$core$UInt64$init$builtin_uint64($tmp287);
return $tmp288;

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$Range$LTfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$Range$LTfrost$core$UInt64$GT param0) {

frost$core$UInt64 $tmp289 = param0.max;
frost$core$UInt64 $tmp290 = param0.min;
uint64_t $tmp291 = $tmp289.value;
uint64_t $tmp292 = $tmp290.value;
uint64_t $tmp293 = $tmp291 - $tmp292;
frost$core$UInt64 $tmp294 = (frost$core$UInt64) {$tmp293};
frost$core$Int64 $tmp295 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp296 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp295);
uint64_t $tmp297 = $tmp294.value;
uint64_t $tmp298 = $tmp296.value;
bool $tmp299 = $tmp297 < $tmp298;
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp302 = (frost$core$Int64) {443};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s303, $tmp302, &$s304);
abort(); // unreachable
block1:;
// line 444
org$frostlang$frost$UInt64List* $tmp305 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
frost$core$UInt64 $tmp306 = param0.min;
frost$core$UInt64 $tmp307 = param0.max;
frost$core$UInt64 $tmp308 = (frost$core$UInt64) {1};
frost$core$Bit $tmp309 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT $tmp310 = frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$init$frost$core$UInt64$frost$core$UInt64$frost$core$UInt64$frost$core$Bit($tmp306, $tmp307, $tmp308, $tmp309);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp305, $tmp310);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp305)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp305));
return ((frost$collections$ListView*) $tmp305);

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

frost$core$Int64 $tmp311 = org$frostlang$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int64(param0);
frost$core$Int64 $tmp312 = (frost$core$Int64) {0};
int64_t $tmp313 = $tmp311.value;
int64_t $tmp314 = $tmp312.value;
bool $tmp315 = $tmp313 > $tmp314;
frost$core$Bit $tmp316 = (frost$core$Bit) {$tmp315};
bool $tmp317 = $tmp316.value;
if ($tmp317) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp318 = (frost$core$Int64) {449};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s319, $tmp318, &$s320);
abort(); // unreachable
block1:;
// line 450
org$frostlang$frost$UInt64List* $tmp321 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(64, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp321, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp321)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp321));
return ((frost$collections$ListView*) $tmp321);

}
frost$core$Bit frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp322 = (frost$core$Int64) {0};
int64_t $tmp323 = param1.value;
int64_t $tmp324 = $tmp322.value;
bool $tmp325 = $tmp323 >= $tmp324;
frost$core$Bit $tmp326 = (frost$core$Bit) {$tmp325};
bool $tmp327 = $tmp326.value;
if ($tmp327) goto block3; else goto block2;
block3:;
frost$core$UInt64$wrapper* $tmp328;
$tmp328 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp328->value = param0;
ITable* $tmp329 = ((frost$collections$CollectionView*) $tmp328)->$class->itable;
while ($tmp329->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp329 = $tmp329->next;
}
$fn331 $tmp330 = $tmp329->methods[0];
frost$core$Int64 $tmp332 = $tmp330(((frost$collections$CollectionView*) $tmp328));
int64_t $tmp333 = param1.value;
int64_t $tmp334 = $tmp332.value;
bool $tmp335 = $tmp333 < $tmp334;
frost$core$Bit $tmp336 = (frost$core$Bit) {$tmp335};
bool $tmp337 = $tmp336.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp328)));
if ($tmp337) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp338 = (frost$core$Int64) {455};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s339, $tmp338, &$s340);
abort(); // unreachable
block1:;
// line 456
frost$core$Int64 $tmp341 = (frost$core$Int64) {1};
frost$core$Int64 $tmp342 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp341, param1);
frost$core$Int64 $tmp343 = frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp342);
frost$core$Int64 $tmp344 = (frost$core$Int64) {0};
int64_t $tmp345 = $tmp343.value;
int64_t $tmp346 = $tmp344.value;
bool $tmp347 = $tmp345 != $tmp346;
frost$core$Bit $tmp348 = (frost$core$Bit) {$tmp347};
return $tmp348;

}
frost$core$Int64 frost$core$UInt64$get_count$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 462
frost$core$Int64 $tmp349 = (frost$core$Int64) {64};
return $tmp349;

}
frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt64 param0) {

// line 467
org$frostlang$frost$IntBitIterator* $tmp350 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp351 = (frost$core$UInt64) {9223372036854775808};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp350, param0, $tmp351);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp350)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp350));
return ((frost$collections$Iterator*) $tmp350);

}
frost$core$Int64 frost$core$UInt64$get_hash$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 472
uint64_t $tmp352 = param0.value;
frost$core$Int64 $tmp353 = (frost$core$Int64) {((int64_t) $tmp352)};
return $tmp353;

}
frost$core$UInt64$nullable frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$Int64 $tmp354 = (frost$core$Int64) {2};
int64_t $tmp355 = param1.value;
int64_t $tmp356 = $tmp354.value;
bool $tmp357 = $tmp355 >= $tmp356;
frost$core$Bit $tmp358 = (frost$core$Bit) {$tmp357};
bool $tmp359 = $tmp358.value;
if ($tmp359) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp360 = (frost$core$Int64) {36};
int64_t $tmp361 = param1.value;
int64_t $tmp362 = $tmp360.value;
bool $tmp363 = $tmp361 <= $tmp362;
frost$core$Bit $tmp364 = (frost$core$Bit) {$tmp363};
bool $tmp365 = $tmp364.value;
if ($tmp365) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp366 = (frost$core$Int64) {478};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s367, $tmp366, &$s368);
abort(); // unreachable
block1:;
// line 479
frost$core$UInt64$nullable $tmp369 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp369;
// line 480
frost$core$UInt64$nullable $tmp370 = *(&local0);
frost$core$Bit $tmp371 = frost$core$Bit$init$builtin_bit(!$tmp370.nonnull);
bool $tmp372 = $tmp371.value;
if ($tmp372) goto block4; else goto block5;
block4:;
// line 481
return ((frost$core$UInt64$nullable) { .nonnull = false });
block5:;
// line 483
frost$core$UInt64$nullable $tmp373 = *(&local0);
return $tmp373;

}
frost$core$Int8 frost$core$UInt64$get_asInt8$R$frost$core$Int8(frost$core$UInt64 param0) {

// line 489
uint64_t $tmp374 = param0.value;
frost$core$Int8 $tmp375 = (frost$core$Int8) {((int8_t) $tmp374)};
return $tmp375;

}
frost$core$Int16 frost$core$UInt64$get_asInt16$R$frost$core$Int16(frost$core$UInt64 param0) {

// line 495
uint64_t $tmp376 = param0.value;
frost$core$Int16 $tmp377 = (frost$core$Int16) {((int16_t) $tmp376)};
return $tmp377;

}
frost$core$Int32 frost$core$UInt64$get_asInt32$R$frost$core$Int32(frost$core$UInt64 param0) {

// line 501
uint64_t $tmp378 = param0.value;
frost$core$Int32 $tmp379 = (frost$core$Int32) {((int32_t) $tmp378)};
return $tmp379;

}
frost$core$Int64 frost$core$UInt64$get_asInt64$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 507
uint64_t $tmp380 = param0.value;
frost$core$Int64 $tmp381 = (frost$core$Int64) {((int64_t) $tmp380)};
return $tmp381;

}
frost$core$UInt8 frost$core$UInt64$get_asUInt8$R$frost$core$UInt8(frost$core$UInt64 param0) {

// line 513
uint64_t $tmp382 = param0.value;
frost$core$UInt8 $tmp383 = (frost$core$UInt8) {((uint8_t) $tmp382)};
return $tmp383;

}
frost$core$UInt16 frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(frost$core$UInt64 param0) {

// line 519
uint64_t $tmp384 = param0.value;
frost$core$UInt16 $tmp385 = (frost$core$UInt16) {((uint16_t) $tmp384)};
return $tmp385;

}
frost$core$UInt32 frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(frost$core$UInt64 param0) {

// line 525
uint64_t $tmp386 = param0.value;
frost$core$UInt32 $tmp387 = (frost$core$UInt32) {((uint32_t) $tmp386)};
return $tmp387;

}
frost$core$Real32 frost$core$UInt64$get_asReal32$R$frost$core$Real32(frost$core$UInt64 param0) {

// line 531
uint64_t $tmp388 = param0.value;
frost$core$Real32 $tmp389 = (frost$core$Real32) {((float) $tmp388)};
return $tmp389;

}
frost$core$Real64 frost$core$UInt64$get_asReal64$R$frost$core$Real64(frost$core$UInt64 param0) {

// line 537
uint64_t $tmp390 = param0.value;
frost$core$Real64 $tmp391 = (frost$core$Real64) {((double) $tmp390)};
return $tmp391;

}
frost$core$String* frost$core$UInt64$get_asString$R$frost$core$String(frost$core$UInt64 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt64 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 543
frost$core$Int64 $tmp392 = (frost$core$Int64) {20};
*(&local0) = $tmp392;
// line 544
frost$core$Int64 $tmp393 = *(&local0);
int64_t $tmp394 = $tmp393.value;
frost$core$Char8* $tmp395 = ((frost$core$Char8*) frostAlloc($tmp394 * 1));
*(&local1) = $tmp395;
// line 545
frost$core$Int64 $tmp396 = *(&local0);
frost$core$Int64 $tmp397 = (frost$core$Int64) {1};
int64_t $tmp398 = $tmp396.value;
int64_t $tmp399 = $tmp397.value;
int64_t $tmp400 = $tmp398 - $tmp399;
frost$core$Int64 $tmp401 = (frost$core$Int64) {$tmp400};
*(&local2) = $tmp401;
// line 546
*(&local3) = param0;
// line 547
frost$core$UInt64 $tmp402 = *(&local3);
frost$core$UInt64 $tmp403 = (frost$core$UInt64) {0};
uint64_t $tmp404 = $tmp402.value;
uint64_t $tmp405 = $tmp403.value;
bool $tmp406 = $tmp404 >= $tmp405;
frost$core$Bit $tmp407 = (frost$core$Bit) {$tmp406};
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block1; else goto block3;
block1:;
// line 548
goto block4;
block4:;
// line 549
frost$core$Char8* $tmp409 = *(&local1);
frost$core$Int64 $tmp410 = *(&local2);
frost$core$UInt64 $tmp411 = *(&local3);
frost$core$UInt64 $tmp412 = (frost$core$UInt64) {10};
frost$core$UInt64 $tmp413 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp411, $tmp412);
frost$core$UInt64 $tmp414 = (frost$core$UInt64) {48};
uint64_t $tmp415 = $tmp413.value;
uint64_t $tmp416 = $tmp414.value;
uint64_t $tmp417 = $tmp415 + $tmp416;
frost$core$UInt64 $tmp418 = (frost$core$UInt64) {$tmp417};
frost$core$UInt8 $tmp419 = frost$core$UInt64$get_asUInt8$R$frost$core$UInt8($tmp418);
frost$core$Char8 $tmp420 = frost$core$Char8$init$frost$core$UInt8($tmp419);
int64_t $tmp421 = $tmp410.value;
$tmp409[$tmp421] = $tmp420;
// line 550
frost$core$UInt64 $tmp422 = *(&local3);
frost$core$UInt64 $tmp423 = (frost$core$UInt64) {10};
uint64_t $tmp424 = $tmp422.value;
uint64_t $tmp425 = $tmp423.value;
uint64_t $tmp426 = $tmp424 / $tmp425;
frost$core$UInt64 $tmp427 = (frost$core$UInt64) {$tmp426};
*(&local3) = $tmp427;
// line 551
frost$core$Int64 $tmp428 = *(&local2);
frost$core$Int64 $tmp429 = (frost$core$Int64) {1};
int64_t $tmp430 = $tmp428.value;
int64_t $tmp431 = $tmp429.value;
int64_t $tmp432 = $tmp430 - $tmp431;
frost$core$Int64 $tmp433 = (frost$core$Int64) {$tmp432};
*(&local2) = $tmp433;
goto block5;
block5:;
frost$core$UInt64 $tmp434 = *(&local3);
frost$core$UInt64 $tmp435 = (frost$core$UInt64) {0};
uint64_t $tmp436 = $tmp434.value;
uint64_t $tmp437 = $tmp435.value;
bool $tmp438 = $tmp436 > $tmp437;
frost$core$Bit $tmp439 = (frost$core$Bit) {$tmp438};
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block4; else goto block6;
block6:;
// line 554
frost$core$Int64 $tmp441 = *(&local2);
frost$core$Int64 $tmp442 = (frost$core$Int64) {1};
int64_t $tmp443 = $tmp441.value;
int64_t $tmp444 = $tmp442.value;
int64_t $tmp445 = $tmp443 + $tmp444;
frost$core$Int64 $tmp446 = (frost$core$Int64) {$tmp445};
*(&local2) = $tmp446;
goto block2;
block3:;
// line 1
// line 557
goto block7;
block7:;
// line 558
frost$core$Char8* $tmp447 = *(&local1);
frost$core$Int64 $tmp448 = *(&local2);
frost$core$UInt64 $tmp449 = (frost$core$UInt64) {48};
frost$core$UInt64 $tmp450 = *(&local3);
frost$core$UInt64 $tmp451 = (frost$core$UInt64) {10};
frost$core$UInt64 $tmp452 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp450, $tmp451);
uint64_t $tmp453 = $tmp449.value;
uint64_t $tmp454 = $tmp452.value;
uint64_t $tmp455 = $tmp453 - $tmp454;
frost$core$UInt64 $tmp456 = (frost$core$UInt64) {$tmp455};
frost$core$UInt8 $tmp457 = frost$core$UInt64$get_asUInt8$R$frost$core$UInt8($tmp456);
frost$core$Char8 $tmp458 = frost$core$Char8$init$frost$core$UInt8($tmp457);
int64_t $tmp459 = $tmp448.value;
$tmp447[$tmp459] = $tmp458;
// line 559
frost$core$UInt64 $tmp460 = *(&local3);
frost$core$UInt64 $tmp461 = (frost$core$UInt64) {10};
uint64_t $tmp462 = $tmp460.value;
uint64_t $tmp463 = $tmp461.value;
uint64_t $tmp464 = $tmp462 / $tmp463;
frost$core$UInt64 $tmp465 = (frost$core$UInt64) {$tmp464};
*(&local3) = $tmp465;
// line 560
frost$core$Int64 $tmp466 = *(&local2);
frost$core$Int64 $tmp467 = (frost$core$Int64) {1};
int64_t $tmp468 = $tmp466.value;
int64_t $tmp469 = $tmp467.value;
int64_t $tmp470 = $tmp468 - $tmp469;
frost$core$Int64 $tmp471 = (frost$core$Int64) {$tmp470};
*(&local2) = $tmp471;
goto block8;
block8:;
frost$core$UInt64 $tmp472 = *(&local3);
frost$core$UInt64 $tmp473 = (frost$core$UInt64) {0};
uint64_t $tmp474 = $tmp472.value;
uint64_t $tmp475 = $tmp473.value;
bool $tmp476 = $tmp474 < $tmp475;
frost$core$Bit $tmp477 = (frost$core$Bit) {$tmp476};
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block7; else goto block9;
block9:;
// line 563
frost$core$Char8* $tmp479 = *(&local1);
frost$core$Int64 $tmp480 = *(&local2);
frost$core$UInt8 $tmp481 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp482 = frost$core$Char8$init$frost$core$UInt8($tmp481);
int64_t $tmp483 = $tmp480.value;
$tmp479[$tmp483] = $tmp482;
goto block2;
block2:;
// line 565
frost$core$Int64 $tmp484 = *(&local0);
frost$core$Int64 $tmp485 = *(&local2);
int64_t $tmp486 = $tmp484.value;
int64_t $tmp487 = $tmp485.value;
int64_t $tmp488 = $tmp486 - $tmp487;
frost$core$Int64 $tmp489 = (frost$core$Int64) {$tmp488};
*(&local4) = $tmp489;
// line 566
frost$core$Int64 $tmp490 = (frost$core$Int64) {0};
frost$core$Int64 $tmp491 = *(&local4);
frost$core$Bit $tmp492 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp493 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp490, $tmp491, $tmp492);
frost$core$Int64 $tmp494 = $tmp493.min;
*(&local5) = $tmp494;
frost$core$Int64 $tmp495 = $tmp493.max;
frost$core$Bit $tmp496 = $tmp493.inclusive;
bool $tmp497 = $tmp496.value;
frost$core$Int64 $tmp498 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp499 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp498);
if ($tmp497) goto block13; else goto block14;
block13:;
int64_t $tmp500 = $tmp494.value;
int64_t $tmp501 = $tmp495.value;
bool $tmp502 = $tmp500 <= $tmp501;
frost$core$Bit $tmp503 = (frost$core$Bit) {$tmp502};
bool $tmp504 = $tmp503.value;
if ($tmp504) goto block10; else goto block11;
block14:;
int64_t $tmp505 = $tmp494.value;
int64_t $tmp506 = $tmp495.value;
bool $tmp507 = $tmp505 < $tmp506;
frost$core$Bit $tmp508 = (frost$core$Bit) {$tmp507};
bool $tmp509 = $tmp508.value;
if ($tmp509) goto block10; else goto block11;
block10:;
// line 567
frost$core$Char8* $tmp510 = *(&local1);
frost$core$Int64 $tmp511 = *(&local5);
frost$core$Char8* $tmp512 = *(&local1);
frost$core$Int64 $tmp513 = *(&local5);
frost$core$Int64 $tmp514 = *(&local2);
int64_t $tmp515 = $tmp513.value;
int64_t $tmp516 = $tmp514.value;
int64_t $tmp517 = $tmp515 + $tmp516;
frost$core$Int64 $tmp518 = (frost$core$Int64) {$tmp517};
int64_t $tmp519 = $tmp518.value;
frost$core$Char8 $tmp520 = $tmp512[$tmp519];
int64_t $tmp521 = $tmp511.value;
$tmp510[$tmp521] = $tmp520;
goto block12;
block12:;
frost$core$Int64 $tmp522 = *(&local5);
int64_t $tmp523 = $tmp495.value;
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523 - $tmp524;
frost$core$Int64 $tmp526 = (frost$core$Int64) {$tmp525};
frost$core$UInt64 $tmp527 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp526);
if ($tmp497) goto block16; else goto block17;
block16:;
uint64_t $tmp528 = $tmp527.value;
uint64_t $tmp529 = $tmp499.value;
bool $tmp530 = $tmp528 >= $tmp529;
frost$core$Bit $tmp531 = (frost$core$Bit) {$tmp530};
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block15; else goto block11;
block17:;
uint64_t $tmp533 = $tmp527.value;
uint64_t $tmp534 = $tmp499.value;
bool $tmp535 = $tmp533 > $tmp534;
frost$core$Bit $tmp536 = (frost$core$Bit) {$tmp535};
bool $tmp537 = $tmp536.value;
if ($tmp537) goto block15; else goto block11;
block15:;
int64_t $tmp538 = $tmp522.value;
int64_t $tmp539 = $tmp498.value;
int64_t $tmp540 = $tmp538 + $tmp539;
frost$core$Int64 $tmp541 = (frost$core$Int64) {$tmp540};
*(&local5) = $tmp541;
goto block10;
block11:;
// line 569
frost$core$String* $tmp542 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp543 = *(&local1);
frost$core$Int64 $tmp544 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp542, $tmp543, $tmp544);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp542));
return $tmp542;

}
frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String(frost$core$UInt64 param0, frost$core$String* param1) {

// line 575
frost$core$Bit $tmp545 = frost$core$Bit$init$builtin_bit(false);
frost$core$UInt64 $tmp546 = (frost$core$UInt64) {18446744073709551615};
frost$core$String* $tmp547 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp545, param0, $tmp546, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp547));
return $tmp547;

}
void frost$core$UInt64$cleanup(frost$core$UInt64 param0) {

return;

}

