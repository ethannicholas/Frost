#include "frost/core/UInt64.h"
#include "frost/core/Value.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/ListView.h"
#include "frost/core/Object.h"
#include "frost/core/Int64.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterator.h"
#include "frost/collections/Key.h"
#include "frost/core/Comparable.h"
#include "frost/collections/Iterable.h"
#include "frost/core/Equatable.h"
#include "frost/core/Formattable.h"
#include "frost/collections/CollectionView.h"
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

__attribute__((weak)) frost$core$Object* frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim(frost$core$Object* p0, frost$core$Int64 p1) {
    frost$core$Bit result = frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit(((frost$core$UInt64$wrapper*) p0)->value, p1);

    frost$core$Bit$wrapper* $tmp2;
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
    $tmp2->value = result;
    return ((frost$core$Object*) $tmp2);
}
__attribute__((weak)) frost$collections$Iterator* frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim(frost$collections$ListView* p0) {
    frost$collections$Iterator* result = frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$get_hash$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$get_hash$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim(frost$core$Object* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$UInt64$format$frost$core$String$R$frost$core$String(((frost$core$UInt64$wrapper*) p0)->value, p1);

    return result;
}
__attribute__((weak)) frost$core$Int64 frost$core$UInt64$get_count$R$frost$core$Int64$shim(frost$core$Object* p0) {
    frost$core$Int64 result = frost$core$UInt64$get_count$R$frost$core$Int64(((frost$core$UInt64$wrapper*) p0)->value);

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
__attribute__((weak)) frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim(frost$core$Object* p0, frost$core$UInt64 p1) {
    frost$core$UInt64 result = frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(((frost$core$UInt64$wrapper*) p0)->value, p1);

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
__attribute__((weak)) void frost$core$UInt64$get_bitCount$R$frost$core$UInt64$shim(frost$core$UInt64* sret, frost$core$Object* p0) {
    frost$core$UInt64$get_bitCount$R$frost$core$UInt64(sret, ((frost$core$UInt64$wrapper*) p0)->value);

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

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$UInt64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt64$_frost$collections$ListView, { frost$core$UInt64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$_frost$collections$Key, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$_frost$core$Comparable, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$UInt64$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$_frost$core$Equatable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[10]; } frost$core$UInt64$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt64$_frost$core$Formattable, { frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$core$UInt64$class_type frost$core$UInt64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$_frost$collections$CollectionView, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$R$frost$core$UInt64$shim, frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim, frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$core$UInt64$get_bitCount$R$frost$core$UInt64$shim, frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt64$get_hash$R$frost$core$Int64$shim, frost$core$UInt64$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt64$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt64$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt64$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt64$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt64$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$UInt64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, NULL, { frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$ListView, { frost$core$UInt64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Key, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Comparable, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Equatable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Formattable, { frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s3;
frost$core$UInt64$wrapperclass_type frost$core$UInt64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$CollectionView, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn324)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -3974054732201254354, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, -3974054732201254354, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s297 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 143, 927876898115167035, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s313 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 169, 7504487529883524065, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s333 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, 1657117150319770676, NULL };
static frost$core$String $s366 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, -1926602429048847549, NULL };
static frost$core$String $s367 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f", 123, 6724921226886078890, NULL };

frost$core$UInt64 frost$core$UInt64$init$builtin_uint64(uint64_t param0) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:30
uint64_t* $tmp4 = &(&local0)->value;
*$tmp4 = param0;
frost$core$UInt64 $tmp5 = *(&local0);
return $tmp5;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt8(frost$core$UInt8 param0) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:36
uint8_t $tmp6 = param0.value;
uint64_t* $tmp7 = &(&local0)->value;
*$tmp7 = ((uint64_t) $tmp6);
frost$core$UInt64 $tmp8 = *(&local0);
return $tmp8;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt16(frost$core$UInt16 param0) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:42
uint16_t $tmp9 = param0.value;
uint64_t* $tmp10 = &(&local0)->value;
*$tmp10 = ((uint64_t) $tmp9);
frost$core$UInt64 $tmp11 = *(&local0);
return $tmp11;

}
frost$core$UInt64 frost$core$UInt64$init$frost$core$UInt32(frost$core$UInt32 param0) {

frost$core$UInt64 local0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:48
uint32_t $tmp12 = param0.value;
uint64_t* $tmp13 = &(&local0)->value;
*$tmp13 = ((uint64_t) $tmp12);
frost$core$UInt64 $tmp14 = *(&local0);
return $tmp14;

}
frost$core$UInt64 frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:54
uint64_t $tmp15 = param0.value;
uint64_t $tmp16 = param1.value;
uint64_t $tmp17 = $tmp15 + $tmp16;
frost$core$UInt64 $tmp18 = (frost$core$UInt64) {$tmp17};
return $tmp18;

}
frost$core$UInt64 frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:60
uint64_t $tmp19 = param0.value;
uint64_t $tmp20 = param1.value;
uint64_t $tmp21 = $tmp19 - $tmp20;
frost$core$UInt64 $tmp22 = (frost$core$UInt64) {$tmp21};
return $tmp22;

}
frost$core$UInt64 frost$core$UInt64$$SUB$R$frost$core$UInt64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:65
uint64_t $tmp23 = param0.value;
uint64_t $tmp24 = -$tmp23;
frost$core$UInt64 $tmp25 = (frost$core$UInt64) {$tmp24};
return $tmp25;

}
frost$core$UInt64 frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:71
uint64_t $tmp26 = param0.value;
uint64_t $tmp27 = param1.value;
uint64_t $tmp28 = $tmp26 * $tmp27;
frost$core$UInt64 $tmp29 = (frost$core$UInt64) {$tmp28};
return $tmp29;

}
frost$core$UInt64 frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:77
uint64_t $tmp30 = param0.value;
uint64_t $tmp31 = param1.value;
uint64_t $tmp32 = $tmp30 / $tmp31;
frost$core$UInt64 $tmp33 = (frost$core$UInt64) {$tmp32};
return $tmp33;

}
frost$core$UInt64 frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:83
uint64_t $tmp34 = param0.value;
uint64_t $tmp35 = param1.value;
uint64_t $tmp36 = $tmp34 % $tmp35;
frost$core$UInt64 $tmp37 = (frost$core$UInt64) {$tmp36};
return $tmp37;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:89
uint64_t $tmp38 = param0.value;
int8_t $tmp39 = param1.value;
double $tmp40 = ((double) $tmp38) / ((double) $tmp39);
frost$core$Real64 $tmp41 = (frost$core$Real64) {$tmp40};
return $tmp41;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:95
uint64_t $tmp42 = param0.value;
int16_t $tmp43 = param1.value;
double $tmp44 = ((double) $tmp42) / ((double) $tmp43);
frost$core$Real64 $tmp45 = (frost$core$Real64) {$tmp44};
return $tmp45;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:101
uint64_t $tmp46 = param0.value;
int32_t $tmp47 = param1.value;
double $tmp48 = ((double) $tmp46) / ((double) $tmp47);
frost$core$Real64 $tmp49 = (frost$core$Real64) {$tmp48};
return $tmp49;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:107
uint64_t $tmp50 = param0.value;
int64_t $tmp51 = param1.value;
double $tmp52 = ((double) $tmp50) / ((double) $tmp51);
frost$core$Real64 $tmp53 = (frost$core$Real64) {$tmp52};
return $tmp53;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:113
uint64_t $tmp54 = param0.value;
uint8_t $tmp55 = param1.value;
double $tmp56 = ((double) $tmp54) / ((double) $tmp55);
frost$core$Real64 $tmp57 = (frost$core$Real64) {$tmp56};
return $tmp57;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:119
uint64_t $tmp58 = param0.value;
uint16_t $tmp59 = param1.value;
double $tmp60 = ((double) $tmp58) / ((double) $tmp59);
frost$core$Real64 $tmp61 = (frost$core$Real64) {$tmp60};
return $tmp61;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:125
uint64_t $tmp62 = param0.value;
uint32_t $tmp63 = param1.value;
double $tmp64 = ((double) $tmp62) / ((double) $tmp63);
frost$core$Real64 $tmp65 = (frost$core$Real64) {$tmp64};
return $tmp65;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:131
uint64_t $tmp66 = param0.value;
uint64_t $tmp67 = param1.value;
double $tmp68 = ((double) $tmp66) / ((double) $tmp67);
frost$core$Real64 $tmp69 = (frost$core$Real64) {$tmp68};
return $tmp69;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:137
uint64_t $tmp70 = param0.value;
float $tmp71 = param1.value;
double $tmp72 = ((double) $tmp70) / ((double) $tmp71);
frost$core$Real64 $tmp73 = (frost$core$Real64) {$tmp72};
return $tmp73;

}
frost$core$Real64 frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64(frost$core$UInt64 param0, frost$core$Real64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:143
uint64_t $tmp74 = param0.value;
double $tmp75 = param1.value;
double $tmp76 = ((double) $tmp74) / $tmp75;
frost$core$Real64 $tmp77 = (frost$core$Real64) {$tmp76};
return $tmp77;

}
frost$core$UInt64 frost$core$UInt64$$BNOT$R$frost$core$UInt64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:148
uint64_t $tmp78 = param0.value;
uint64_t $tmp79 = !$tmp78;
frost$core$UInt64 $tmp80 = (frost$core$UInt64) {$tmp79};
return $tmp80;

}
frost$core$Int64 frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:154
uint64_t $tmp81 = param0.value;
int64_t $tmp82 = param1.value;
int64_t $tmp83 = ((int64_t) $tmp81) & $tmp82;
frost$core$Int64 $tmp84 = (frost$core$Int64) {$tmp83};
return $tmp84;

}
frost$core$UInt64 frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:160
uint64_t $tmp85 = param0.value;
uint64_t $tmp86 = param1.value;
uint64_t $tmp87 = $tmp85 & $tmp86;
frost$core$UInt64 $tmp88 = (frost$core$UInt64) {$tmp87};
return $tmp88;

}
frost$core$Int64 frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:166
uint64_t $tmp89 = param0.value;
int64_t $tmp90 = param1.value;
int64_t $tmp91 = ((int64_t) $tmp89) | $tmp90;
frost$core$Int64 $tmp92 = (frost$core$Int64) {$tmp91};
return $tmp92;

}
frost$core$UInt64 frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:172
uint64_t $tmp93 = param0.value;
uint64_t $tmp94 = param1.value;
uint64_t $tmp95 = $tmp93 | $tmp94;
frost$core$UInt64 $tmp96 = (frost$core$UInt64) {$tmp95};
return $tmp96;

}
frost$core$Int64 frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64(frost$core$UInt64 param0, frost$core$Int64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:178
uint64_t $tmp97 = param0.value;
int64_t $tmp98 = param1.value;
int64_t $tmp99 = ((int64_t) $tmp97) ^ $tmp98;
frost$core$Int64 $tmp100 = (frost$core$Int64) {$tmp99};
return $tmp100;

}
frost$core$UInt64 frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:184
uint64_t $tmp101 = param0.value;
uint64_t $tmp102 = param1.value;
uint64_t $tmp103 = $tmp101 ^ $tmp102;
frost$core$UInt64 $tmp104 = (frost$core$UInt64) {$tmp103};
return $tmp104;

}
frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:190
uint64_t $tmp105 = param0.value;
uint64_t $tmp106 = param1.value;
uint64_t $tmp107 = $tmp105 << $tmp106;
frost$core$UInt64 $tmp108 = (frost$core$UInt64) {$tmp107};
return $tmp108;

}
frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:196
uint64_t $tmp109 = param0.value;
uint64_t $tmp110 = param1.value;
uint64_t $tmp111 = $tmp109 >> $tmp110;
frost$core$UInt64 $tmp112 = (frost$core$UInt64) {$tmp111};
return $tmp112;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:202
uint64_t $tmp113 = param0.value;
uint8_t $tmp114 = param1.value;
bool $tmp115 = $tmp113 == ((uint64_t) $tmp114);
frost$core$Bit $tmp116 = (frost$core$Bit) {$tmp115};
return $tmp116;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:208
uint64_t $tmp117 = param0.value;
uint16_t $tmp118 = param1.value;
bool $tmp119 = $tmp117 == ((uint64_t) $tmp118);
frost$core$Bit $tmp120 = (frost$core$Bit) {$tmp119};
return $tmp120;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:214
uint64_t $tmp121 = param0.value;
uint32_t $tmp122 = param1.value;
bool $tmp123 = $tmp121 == ((uint64_t) $tmp122);
frost$core$Bit $tmp124 = (frost$core$Bit) {$tmp123};
return $tmp124;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:221
uint64_t $tmp125 = param0.value;
uint64_t $tmp126 = param1.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = (frost$core$Bit) {$tmp127};
return $tmp128;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:227
uint64_t $tmp129 = param0.value;
uint8_t $tmp130 = param1.value;
bool $tmp131 = $tmp129 != ((uint64_t) $tmp130);
frost$core$Bit $tmp132 = (frost$core$Bit) {$tmp131};
return $tmp132;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:233
uint64_t $tmp133 = param0.value;
uint16_t $tmp134 = param1.value;
bool $tmp135 = $tmp133 != ((uint64_t) $tmp134);
frost$core$Bit $tmp136 = (frost$core$Bit) {$tmp135};
return $tmp136;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:239
uint64_t $tmp137 = param0.value;
uint32_t $tmp138 = param1.value;
bool $tmp139 = $tmp137 != ((uint64_t) $tmp138);
frost$core$Bit $tmp140 = (frost$core$Bit) {$tmp139};
return $tmp140;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:246
uint64_t $tmp141 = param0.value;
uint64_t $tmp142 = param1.value;
bool $tmp143 = $tmp141 != $tmp142;
frost$core$Bit $tmp144 = (frost$core$Bit) {$tmp143};
return $tmp144;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:252
uint64_t $tmp145 = param0.value;
uint8_t $tmp146 = param1.value;
bool $tmp147 = $tmp145 < ((uint64_t) $tmp146);
frost$core$Bit $tmp148 = (frost$core$Bit) {$tmp147};
return $tmp148;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:258
uint64_t $tmp149 = param0.value;
uint16_t $tmp150 = param1.value;
bool $tmp151 = $tmp149 < ((uint64_t) $tmp150);
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
return $tmp152;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:264
uint64_t $tmp153 = param0.value;
uint32_t $tmp154 = param1.value;
bool $tmp155 = $tmp153 < ((uint64_t) $tmp154);
frost$core$Bit $tmp156 = (frost$core$Bit) {$tmp155};
return $tmp156;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:271
uint64_t $tmp157 = param0.value;
uint64_t $tmp158 = param1.value;
bool $tmp159 = $tmp157 < $tmp158;
frost$core$Bit $tmp160 = (frost$core$Bit) {$tmp159};
return $tmp160;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:277
uint64_t $tmp161 = param0.value;
uint8_t $tmp162 = param1.value;
bool $tmp163 = $tmp161 > ((uint64_t) $tmp162);
frost$core$Bit $tmp164 = (frost$core$Bit) {$tmp163};
return $tmp164;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:283
uint64_t $tmp165 = param0.value;
uint16_t $tmp166 = param1.value;
bool $tmp167 = $tmp165 > ((uint64_t) $tmp166);
frost$core$Bit $tmp168 = (frost$core$Bit) {$tmp167};
return $tmp168;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:289
uint64_t $tmp169 = param0.value;
uint32_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 > ((uint64_t) $tmp170);
frost$core$Bit $tmp172 = (frost$core$Bit) {$tmp171};
return $tmp172;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:296
uint64_t $tmp173 = param0.value;
uint64_t $tmp174 = param1.value;
bool $tmp175 = $tmp173 > $tmp174;
frost$core$Bit $tmp176 = (frost$core$Bit) {$tmp175};
return $tmp176;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:302
uint64_t $tmp177 = param0.value;
uint8_t $tmp178 = param1.value;
bool $tmp179 = $tmp177 >= ((uint64_t) $tmp178);
frost$core$Bit $tmp180 = (frost$core$Bit) {$tmp179};
return $tmp180;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:308
uint64_t $tmp181 = param0.value;
uint16_t $tmp182 = param1.value;
bool $tmp183 = $tmp181 >= ((uint64_t) $tmp182);
frost$core$Bit $tmp184 = (frost$core$Bit) {$tmp183};
return $tmp184;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:314
uint64_t $tmp185 = param0.value;
uint32_t $tmp186 = param1.value;
bool $tmp187 = $tmp185 >= ((uint64_t) $tmp186);
frost$core$Bit $tmp188 = (frost$core$Bit) {$tmp187};
return $tmp188;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:321
uint64_t $tmp189 = param0.value;
uint64_t $tmp190 = param1.value;
bool $tmp191 = $tmp189 >= $tmp190;
frost$core$Bit $tmp192 = (frost$core$Bit) {$tmp191};
return $tmp192;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:327
uint64_t $tmp193 = param0.value;
uint8_t $tmp194 = param1.value;
bool $tmp195 = $tmp193 <= ((uint64_t) $tmp194);
frost$core$Bit $tmp196 = (frost$core$Bit) {$tmp195};
return $tmp196;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:333
uint64_t $tmp197 = param0.value;
uint16_t $tmp198 = param1.value;
bool $tmp199 = $tmp197 <= ((uint64_t) $tmp198);
frost$core$Bit $tmp200 = (frost$core$Bit) {$tmp199};
return $tmp200;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:339
uint64_t $tmp201 = param0.value;
uint32_t $tmp202 = param1.value;
bool $tmp203 = $tmp201 <= ((uint64_t) $tmp202);
frost$core$Bit $tmp204 = (frost$core$Bit) {$tmp203};
return $tmp204;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:346
uint64_t $tmp205 = param0.value;
uint64_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 <= $tmp206;
frost$core$Bit $tmp208 = (frost$core$Bit) {$tmp207};
return $tmp208;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:356
uint64_t $tmp209 = param0.value;
uint8_t $tmp210 = param1.value;
bool $tmp211 = $tmp209 < ((uint64_t) $tmp210);
frost$core$Bit $tmp212 = (frost$core$Bit) {$tmp211};
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:357
uint64_t $tmp214 = param0.value;
frost$core$UInt64 $tmp215 = (frost$core$UInt64) {$tmp214};
return $tmp215;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:359
uint8_t $tmp216 = param1.value;
frost$core$UInt64 $tmp217 = (frost$core$UInt64) {((uint64_t) $tmp216)};
return $tmp217;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:365
uint64_t $tmp218 = param0.value;
uint16_t $tmp219 = param1.value;
bool $tmp220 = $tmp218 < ((uint64_t) $tmp219);
frost$core$Bit $tmp221 = (frost$core$Bit) {$tmp220};
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:366
uint64_t $tmp223 = param0.value;
frost$core$UInt64 $tmp224 = (frost$core$UInt64) {$tmp223};
return $tmp224;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:368
uint16_t $tmp225 = param1.value;
frost$core$UInt64 $tmp226 = (frost$core$UInt64) {((uint64_t) $tmp225)};
return $tmp226;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:374
uint64_t $tmp227 = param0.value;
uint32_t $tmp228 = param1.value;
bool $tmp229 = $tmp227 < ((uint64_t) $tmp228);
frost$core$Bit $tmp230 = (frost$core$Bit) {$tmp229};
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:375
uint64_t $tmp232 = param0.value;
frost$core$UInt64 $tmp233 = (frost$core$UInt64) {$tmp232};
return $tmp233;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:377
uint32_t $tmp234 = param1.value;
frost$core$UInt64 $tmp235 = (frost$core$UInt64) {((uint64_t) $tmp234)};
return $tmp235;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:383
uint64_t $tmp236 = param0.value;
uint64_t $tmp237 = param1.value;
bool $tmp238 = $tmp236 < $tmp237;
frost$core$Bit $tmp239 = (frost$core$Bit) {$tmp238};
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:384
uint64_t $tmp241 = param0.value;
frost$core$UInt64 $tmp242 = (frost$core$UInt64) {$tmp241};
return $tmp242;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:386
uint64_t $tmp243 = param1.value;
frost$core$UInt64 $tmp244 = (frost$core$UInt64) {$tmp243};
return $tmp244;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:396
uint64_t $tmp245 = param0.value;
uint8_t $tmp246 = param1.value;
bool $tmp247 = $tmp245 > ((uint64_t) $tmp246);
frost$core$Bit $tmp248 = (frost$core$Bit) {$tmp247};
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:397
uint64_t $tmp250 = param0.value;
frost$core$UInt64 $tmp251 = (frost$core$UInt64) {$tmp250};
return $tmp251;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:399
uint8_t $tmp252 = param1.value;
frost$core$UInt64 $tmp253 = (frost$core$UInt64) {((uint64_t) $tmp252)};
return $tmp253;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:405
uint64_t $tmp254 = param0.value;
uint16_t $tmp255 = param1.value;
bool $tmp256 = $tmp254 > ((uint64_t) $tmp255);
frost$core$Bit $tmp257 = (frost$core$Bit) {$tmp256};
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:406
uint64_t $tmp259 = param0.value;
frost$core$UInt64 $tmp260 = (frost$core$UInt64) {$tmp259};
return $tmp260;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:408
uint16_t $tmp261 = param1.value;
frost$core$UInt64 $tmp262 = (frost$core$UInt64) {((uint64_t) $tmp261)};
return $tmp262;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:414
uint64_t $tmp263 = param0.value;
uint32_t $tmp264 = param1.value;
bool $tmp265 = $tmp263 > ((uint64_t) $tmp264);
frost$core$Bit $tmp266 = (frost$core$Bit) {$tmp265};
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:415
uint64_t $tmp268 = param0.value;
frost$core$UInt64 $tmp269 = (frost$core$UInt64) {$tmp268};
return $tmp269;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:417
uint32_t $tmp270 = param1.value;
frost$core$UInt64 $tmp271 = (frost$core$UInt64) {((uint64_t) $tmp270)};
return $tmp271;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:423
uint64_t $tmp272 = param0.value;
uint64_t $tmp273 = param1.value;
bool $tmp274 = $tmp272 > $tmp273;
frost$core$Bit $tmp275 = (frost$core$Bit) {$tmp274};
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:424
uint64_t $tmp277 = param0.value;
frost$core$UInt64 $tmp278 = (frost$core$UInt64) {$tmp277};
return $tmp278;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:426
uint64_t $tmp279 = param1.value;
frost$core$UInt64 $tmp280 = (frost$core$UInt64) {$tmp279};
return $tmp280;

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$Range$LTfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$Range$LTfrost$core$UInt64$GT param0) {

frost$core$UInt64 $tmp281 = param0.max;
frost$core$UInt64 $tmp282 = param0.min;
uint64_t $tmp283 = $tmp281.value;
uint64_t $tmp284 = $tmp282.value;
uint64_t $tmp285 = $tmp283 - $tmp284;
frost$core$UInt64 $tmp286 = (frost$core$UInt64) {$tmp285};
frost$core$Int64 $tmp287 = (frost$core$Int64) {9223372036854775807u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from UInt64.frost:430:43
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp288 = $tmp287.value;
frost$core$UInt64 $tmp289 = (frost$core$UInt64) {((uint64_t) $tmp288)};
uint64_t $tmp290 = $tmp286.value;
uint64_t $tmp291 = $tmp289.value;
bool $tmp292 = $tmp290 < $tmp291;
frost$core$Bit $tmp293 = (frost$core$Bit) {$tmp292};
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp295 = (frost$core$Int64) {431u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s296, $tmp295, &$s297);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:432
FROST_ASSERT(56 == sizeof(org$frostlang$frost$UInt64List));
org$frostlang$frost$UInt64List* $tmp298 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
frost$core$UInt64 $tmp299 = param0.min;
frost$core$UInt64 $tmp300 = param0.max;
frost$core$UInt64 $tmp301 = (frost$core$UInt64) {1u};
frost$core$Bit $tmp302 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT $tmp303 = frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$init$frost$core$UInt64$frost$core$UInt64$frost$core$UInt64$frost$core$Bit($tmp299, $tmp300, $tmp301, $tmp302);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp298, $tmp303);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp298)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp298));
return ((frost$collections$ListView*) $tmp298);

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

frost$core$Int64 $tmp304 = org$frostlang$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int64(param0);
frost$core$Int64 $tmp305 = (frost$core$Int64) {0u};
int64_t $tmp306 = $tmp304.value;
int64_t $tmp307 = $tmp305.value;
bool $tmp308 = $tmp306 > $tmp307;
frost$core$Bit $tmp309 = (frost$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp311 = (frost$core$Int64) {437u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s312, $tmp311, &$s313);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:438
FROST_ASSERT(56 == sizeof(org$frostlang$frost$UInt64List));
org$frostlang$frost$UInt64List* $tmp314 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp314, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp314)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp314));
return ((frost$collections$ListView*) $tmp314);

}
frost$core$Bit frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp315 = (frost$core$Int64) {0u};
int64_t $tmp316 = param1.value;
int64_t $tmp317 = $tmp315.value;
bool $tmp318 = $tmp316 >= $tmp317;
frost$core$Bit $tmp319 = (frost$core$Bit) {$tmp318};
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block3; else goto block2;
block3:;
frost$core$UInt64$wrapper* $tmp321;
$tmp321 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp321->value = param0;
ITable* $tmp322 = ((frost$collections$CollectionView*) $tmp321)->$class->itable;
while ($tmp322->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp322 = $tmp322->next;
}
$fn324 $tmp323 = $tmp322->methods[0];
frost$core$Int64 $tmp325 = $tmp323(((frost$collections$CollectionView*) $tmp321));
int64_t $tmp326 = param1.value;
int64_t $tmp327 = $tmp325.value;
bool $tmp328 = $tmp326 < $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp321)));
if ($tmp330) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp331 = (frost$core$Int64) {443u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s332, $tmp331, &$s333);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:444
frost$core$Int64 $tmp334 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.<<(other:frost.core.Int64):frost.core.Int64 from UInt64.frost:444:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:209
int64_t $tmp335 = $tmp334.value;
int64_t $tmp336 = param1.value;
int64_t $tmp337 = $tmp335 << $tmp336;
frost$core$Int64 $tmp338 = (frost$core$Int64) {$tmp337};
// begin inline call to function frost.core.UInt64.&&(other:frost.core.Int64):frost.core.Int64 from UInt64.frost:444:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:154
uint64_t $tmp339 = param0.value;
int64_t $tmp340 = $tmp338.value;
int64_t $tmp341 = ((int64_t) $tmp339) & $tmp340;
frost$core$Int64 $tmp342 = (frost$core$Int64) {$tmp341};
frost$core$Int64 $tmp343 = (frost$core$Int64) {0u};
int64_t $tmp344 = $tmp342.value;
int64_t $tmp345 = $tmp343.value;
bool $tmp346 = $tmp344 != $tmp345;
frost$core$Bit $tmp347 = (frost$core$Bit) {$tmp346};
return $tmp347;

}
frost$core$Int64 frost$core$UInt64$get_count$R$frost$core$Int64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:450
frost$core$Int64 $tmp348 = (frost$core$Int64) {64u};
return $tmp348;

}
frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:460
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp349 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp350 = (frost$core$UInt64) {9223372036854775808u};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp349, param0, $tmp350);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp349)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp349));
return ((frost$collections$Iterator*) $tmp349);

}
frost$core$Int64 frost$core$UInt64$get_hash$R$frost$core$Int64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:465
uint64_t $tmp351 = param0.value;
frost$core$Int64 $tmp352 = (frost$core$Int64) {((int64_t) $tmp351)};
return $tmp352;

}
frost$core$UInt64$nullable frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$Int64 $tmp353 = (frost$core$Int64) {2u};
int64_t $tmp354 = param1.value;
int64_t $tmp355 = $tmp353.value;
bool $tmp356 = $tmp354 >= $tmp355;
frost$core$Bit $tmp357 = (frost$core$Bit) {$tmp356};
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp359 = (frost$core$Int64) {36u};
int64_t $tmp360 = param1.value;
int64_t $tmp361 = $tmp359.value;
bool $tmp362 = $tmp360 <= $tmp361;
frost$core$Bit $tmp363 = (frost$core$Bit) {$tmp362};
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp365 = (frost$core$Int64) {471u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s366, $tmp365, &$s367);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:472
frost$core$UInt64$nullable $tmp368 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp368;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:473
frost$core$UInt64$nullable $tmp369 = *(&local0);
frost$core$Bit $tmp370 = (frost$core$Bit) {!$tmp369.nonnull};
bool $tmp371 = $tmp370.value;
if ($tmp371) goto block4; else goto block5;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:474
return ((frost$core$UInt64$nullable) { .nonnull = false });
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:476
frost$core$UInt64$nullable $tmp372 = *(&local0);
return $tmp372;

}
frost$core$Int8 frost$core$UInt64$get_asInt8$R$frost$core$Int8(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:482
uint64_t $tmp373 = param0.value;
frost$core$Int8 $tmp374 = (frost$core$Int8) {((int8_t) $tmp373)};
return $tmp374;

}
frost$core$Int16 frost$core$UInt64$get_asInt16$R$frost$core$Int16(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:488
uint64_t $tmp375 = param0.value;
frost$core$Int16 $tmp376 = (frost$core$Int16) {((int16_t) $tmp375)};
return $tmp376;

}
frost$core$Int32 frost$core$UInt64$get_asInt32$R$frost$core$Int32(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:494
uint64_t $tmp377 = param0.value;
frost$core$Int32 $tmp378 = (frost$core$Int32) {((int32_t) $tmp377)};
return $tmp378;

}
frost$core$Int64 frost$core$UInt64$get_asInt64$R$frost$core$Int64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:500
uint64_t $tmp379 = param0.value;
frost$core$Int64 $tmp380 = (frost$core$Int64) {((int64_t) $tmp379)};
return $tmp380;

}
frost$core$UInt8 frost$core$UInt64$get_asUInt8$R$frost$core$UInt8(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:506
uint64_t $tmp381 = param0.value;
frost$core$UInt8 $tmp382 = (frost$core$UInt8) {((uint8_t) $tmp381)};
return $tmp382;

}
frost$core$UInt16 frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:512
uint64_t $tmp383 = param0.value;
frost$core$UInt16 $tmp384 = (frost$core$UInt16) {((uint16_t) $tmp383)};
return $tmp384;

}
frost$core$UInt32 frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:518
uint64_t $tmp385 = param0.value;
frost$core$UInt32 $tmp386 = (frost$core$UInt32) {((uint32_t) $tmp385)};
return $tmp386;

}
frost$core$Real32 frost$core$UInt64$get_asReal32$R$frost$core$Real32(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:524
uint64_t $tmp387 = param0.value;
frost$core$Real32 $tmp388 = (frost$core$Real32) {((float) $tmp387)};
return $tmp388;

}
frost$core$Real64 frost$core$UInt64$get_asReal64$R$frost$core$Real64(frost$core$UInt64 param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:530
uint64_t $tmp389 = param0.value;
frost$core$Real64 $tmp390 = (frost$core$Real64) {((double) $tmp389)};
return $tmp390;

}
frost$core$String* frost$core$UInt64$get_asString$R$frost$core$String(frost$core$UInt64 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt64 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:536
frost$core$Int64 $tmp391 = (frost$core$Int64) {20u};
*(&local0) = $tmp391;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:537
frost$core$Int64 $tmp392 = *(&local0);
int64_t $tmp393 = $tmp392.value;
frost$core$Char8* $tmp394 = ((frost$core$Char8*) frostAlloc($tmp393 * 1));
*(&local1) = $tmp394;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:538
frost$core$Int64 $tmp395 = *(&local0);
frost$core$Int64 $tmp396 = (frost$core$Int64) {1u};
int64_t $tmp397 = $tmp395.value;
int64_t $tmp398 = $tmp396.value;
int64_t $tmp399 = $tmp397 - $tmp398;
frost$core$Int64 $tmp400 = (frost$core$Int64) {$tmp399};
*(&local2) = $tmp400;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:539
*(&local3) = param0;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:540
frost$core$UInt64 $tmp401 = *(&local3);
frost$core$UInt64 $tmp402 = (frost$core$UInt64) {0u};
uint64_t $tmp403 = $tmp401.value;
uint64_t $tmp404 = $tmp402.value;
bool $tmp405 = $tmp403 >= $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block1; else goto block3;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:541
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:542
frost$core$Char8* $tmp408 = *(&local1);
frost$core$Int64 $tmp409 = *(&local2);
frost$core$UInt64 $tmp410 = *(&local3);
frost$core$UInt64 $tmp411 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from UInt64.frost:542:46
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:83
uint64_t $tmp412 = $tmp410.value;
uint64_t $tmp413 = $tmp411.value;
uint64_t $tmp414 = $tmp412 % $tmp413;
frost$core$UInt64 $tmp415 = (frost$core$UInt64) {$tmp414};
frost$core$UInt64 $tmp416 = (frost$core$UInt64) {48u};
uint64_t $tmp417 = $tmp415.value;
uint64_t $tmp418 = $tmp416.value;
uint64_t $tmp419 = $tmp417 + $tmp418;
frost$core$UInt64 $tmp420 = (frost$core$UInt64) {$tmp419};
// begin inline call to function frost.core.UInt64.get_asUInt8():frost.core.UInt8 from UInt64.frost:542:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:506
uint64_t $tmp421 = $tmp420.value;
frost$core$UInt8 $tmp422 = (frost$core$UInt8) {((uint8_t) $tmp421)};
frost$core$Char8 $tmp423 = frost$core$Char8$init$frost$core$UInt8($tmp422);
int64_t $tmp424 = $tmp409.value;
$tmp408[$tmp424] = $tmp423;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:543
frost$core$UInt64 $tmp425 = *(&local3);
frost$core$UInt64 $tmp426 = (frost$core$UInt64) {10u};
uint64_t $tmp427 = $tmp425.value;
uint64_t $tmp428 = $tmp426.value;
uint64_t $tmp429 = $tmp427 / $tmp428;
frost$core$UInt64 $tmp430 = (frost$core$UInt64) {$tmp429};
*(&local3) = $tmp430;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:544
frost$core$Int64 $tmp431 = *(&local2);
frost$core$Int64 $tmp432 = (frost$core$Int64) {1u};
int64_t $tmp433 = $tmp431.value;
int64_t $tmp434 = $tmp432.value;
int64_t $tmp435 = $tmp433 - $tmp434;
frost$core$Int64 $tmp436 = (frost$core$Int64) {$tmp435};
*(&local2) = $tmp436;
frost$core$UInt64 $tmp437 = *(&local3);
frost$core$UInt64 $tmp438 = (frost$core$UInt64) {0u};
uint64_t $tmp439 = $tmp437.value;
uint64_t $tmp440 = $tmp438.value;
bool $tmp441 = $tmp439 > $tmp440;
frost$core$Bit $tmp442 = (frost$core$Bit) {$tmp441};
bool $tmp443 = $tmp442.value;
if ($tmp443) goto block4; else goto block6;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:547
frost$core$Int64 $tmp444 = *(&local2);
frost$core$Int64 $tmp445 = (frost$core$Int64) {1u};
int64_t $tmp446 = $tmp444.value;
int64_t $tmp447 = $tmp445.value;
int64_t $tmp448 = $tmp446 + $tmp447;
frost$core$Int64 $tmp449 = (frost$core$Int64) {$tmp448};
*(&local2) = $tmp449;
goto block2;
block3:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:550
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:551
frost$core$Char8* $tmp450 = *(&local1);
frost$core$Int64 $tmp451 = *(&local2);
frost$core$UInt64 $tmp452 = (frost$core$UInt64) {48u};
frost$core$UInt64 $tmp453 = *(&local3);
frost$core$UInt64 $tmp454 = (frost$core$UInt64) {10u};
// begin inline call to function frost.core.UInt64.%(other:frost.core.UInt64):frost.core.UInt64 from UInt64.frost:551:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:83
uint64_t $tmp455 = $tmp453.value;
uint64_t $tmp456 = $tmp454.value;
uint64_t $tmp457 = $tmp455 % $tmp456;
frost$core$UInt64 $tmp458 = (frost$core$UInt64) {$tmp457};
uint64_t $tmp459 = $tmp452.value;
uint64_t $tmp460 = $tmp458.value;
uint64_t $tmp461 = $tmp459 - $tmp460;
frost$core$UInt64 $tmp462 = (frost$core$UInt64) {$tmp461};
// begin inline call to function frost.core.UInt64.get_asUInt8():frost.core.UInt8 from UInt64.frost:551:56
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:506
uint64_t $tmp463 = $tmp462.value;
frost$core$UInt8 $tmp464 = (frost$core$UInt8) {((uint8_t) $tmp463)};
frost$core$Char8 $tmp465 = frost$core$Char8$init$frost$core$UInt8($tmp464);
int64_t $tmp466 = $tmp451.value;
$tmp450[$tmp466] = $tmp465;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:552
frost$core$UInt64 $tmp467 = *(&local3);
frost$core$UInt64 $tmp468 = (frost$core$UInt64) {10u};
uint64_t $tmp469 = $tmp467.value;
uint64_t $tmp470 = $tmp468.value;
uint64_t $tmp471 = $tmp469 / $tmp470;
frost$core$UInt64 $tmp472 = (frost$core$UInt64) {$tmp471};
*(&local3) = $tmp472;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:553
frost$core$Int64 $tmp473 = *(&local2);
frost$core$Int64 $tmp474 = (frost$core$Int64) {1u};
int64_t $tmp475 = $tmp473.value;
int64_t $tmp476 = $tmp474.value;
int64_t $tmp477 = $tmp475 - $tmp476;
frost$core$Int64 $tmp478 = (frost$core$Int64) {$tmp477};
*(&local2) = $tmp478;
frost$core$UInt64 $tmp479 = *(&local3);
frost$core$UInt64 $tmp480 = (frost$core$UInt64) {0u};
uint64_t $tmp481 = $tmp479.value;
uint64_t $tmp482 = $tmp480.value;
bool $tmp483 = $tmp481 < $tmp482;
frost$core$Bit $tmp484 = (frost$core$Bit) {$tmp483};
bool $tmp485 = $tmp484.value;
if ($tmp485) goto block9; else goto block11;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:556
frost$core$Char8* $tmp486 = *(&local1);
frost$core$Int64 $tmp487 = *(&local2);
frost$core$UInt8 $tmp488 = (frost$core$UInt8) {45u};
frost$core$Char8 $tmp489 = frost$core$Char8$init$frost$core$UInt8($tmp488);
int64_t $tmp490 = $tmp487.value;
$tmp486[$tmp490] = $tmp489;
goto block2;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:558
frost$core$Int64 $tmp491 = *(&local0);
frost$core$Int64 $tmp492 = *(&local2);
int64_t $tmp493 = $tmp491.value;
int64_t $tmp494 = $tmp492.value;
int64_t $tmp495 = $tmp493 - $tmp494;
frost$core$Int64 $tmp496 = (frost$core$Int64) {$tmp495};
*(&local4) = $tmp496;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:559
frost$core$Int64 $tmp497 = (frost$core$Int64) {0u};
frost$core$Int64 $tmp498 = *(&local4);
frost$core$Bit $tmp499 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$Int64$GT $tmp500 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp497, $tmp498, $tmp499);
frost$core$Int64 $tmp501 = $tmp500.min;
*(&local5) = $tmp501;
frost$core$Int64 $tmp502 = $tmp500.max;
frost$core$Bit $tmp503 = $tmp500.inclusive;
bool $tmp504 = $tmp503.value;
frost$core$Int64 $tmp505 = (frost$core$Int64) {1u};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp506 = $tmp505.value;
frost$core$UInt64 $tmp507 = (frost$core$UInt64) {((uint64_t) $tmp506)};
if ($tmp504) goto block18; else goto block19;
block18:;
int64_t $tmp508 = $tmp501.value;
int64_t $tmp509 = $tmp502.value;
bool $tmp510 = $tmp508 <= $tmp509;
frost$core$Bit $tmp511 = (frost$core$Bit) {$tmp510};
bool $tmp512 = $tmp511.value;
if ($tmp512) goto block15; else goto block16;
block19:;
int64_t $tmp513 = $tmp501.value;
int64_t $tmp514 = $tmp502.value;
bool $tmp515 = $tmp513 < $tmp514;
frost$core$Bit $tmp516 = (frost$core$Bit) {$tmp515};
bool $tmp517 = $tmp516.value;
if ($tmp517) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:560
frost$core$Char8* $tmp518 = *(&local1);
frost$core$Int64 $tmp519 = *(&local5);
frost$core$Char8* $tmp520 = *(&local1);
frost$core$Int64 $tmp521 = *(&local5);
frost$core$Int64 $tmp522 = *(&local2);
int64_t $tmp523 = $tmp521.value;
int64_t $tmp524 = $tmp522.value;
int64_t $tmp525 = $tmp523 + $tmp524;
frost$core$Int64 $tmp526 = (frost$core$Int64) {$tmp525};
int64_t $tmp527 = $tmp526.value;
frost$core$Char8 $tmp528 = $tmp520[$tmp527];
int64_t $tmp529 = $tmp519.value;
$tmp518[$tmp529] = $tmp528;
frost$core$Int64 $tmp530 = *(&local5);
int64_t $tmp531 = $tmp502.value;
int64_t $tmp532 = $tmp530.value;
int64_t $tmp533 = $tmp531 - $tmp532;
frost$core$Int64 $tmp534 = (frost$core$Int64) {$tmp533};
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from <internal>:1:1
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:555
int64_t $tmp535 = $tmp534.value;
frost$core$UInt64 $tmp536 = (frost$core$UInt64) {((uint64_t) $tmp535)};
if ($tmp504) goto block22; else goto block23;
block22:;
uint64_t $tmp537 = $tmp536.value;
uint64_t $tmp538 = $tmp507.value;
bool $tmp539 = $tmp537 >= $tmp538;
frost$core$Bit $tmp540 = (frost$core$Bit) {$tmp539};
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block20; else goto block16;
block23:;
uint64_t $tmp542 = $tmp536.value;
uint64_t $tmp543 = $tmp507.value;
bool $tmp544 = $tmp542 > $tmp543;
frost$core$Bit $tmp545 = (frost$core$Bit) {$tmp544};
bool $tmp546 = $tmp545.value;
if ($tmp546) goto block20; else goto block16;
block20:;
int64_t $tmp547 = $tmp530.value;
int64_t $tmp548 = $tmp505.value;
int64_t $tmp549 = $tmp547 + $tmp548;
frost$core$Int64 $tmp550 = (frost$core$Int64) {$tmp549};
*(&local5) = $tmp550;
goto block15;
block16:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:562
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp551 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp552 = *(&local1);
frost$core$Int64 $tmp553 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp551, $tmp552, $tmp553);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp551));
return $tmp551;

}
frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String(frost$core$UInt64 param0, frost$core$String* param1) {

// /Users/ethannicholas/Dropbox/Frost/src/frost/core/UInt64.frost:568
frost$core$Bit $tmp554 = (frost$core$Bit) {false};
frost$core$UInt64 $tmp555 = (frost$core$UInt64) {18446744073709551615u};
frost$core$String* $tmp556 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp554, param0, $tmp555, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp556));
return $tmp556;

}
void frost$core$UInt64$cleanup(frost$core$UInt64 param0) {

return;

}

