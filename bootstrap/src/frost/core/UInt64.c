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
    $tmp2 = (frost$core$Bit$wrapper*) frostObjectAlloc(17, (frost$core$Class*) &frost$core$Bit$wrapperclass);
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

struct { frost$core$Class* cl; ITable* next; void* methods[14]; } frost$core$UInt64$_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt64$_frost$collections$Key, { frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$UInt64$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$_frost$collections$ListView, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$UInt64$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$_frost$core$Comparable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s1;
frost$core$UInt64$class_type frost$core$UInt64$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$_frost$core$Formattable, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim, frost$core$UInt64$$ADD$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SUB$R$frost$core$UInt64$shim, frost$core$UInt64$$MUL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$INTDIV$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$DIV$frost$core$Int8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Int64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt8$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt16$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$UInt64$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real32$R$frost$core$Real64$shim, frost$core$UInt64$$DIV$frost$core$Real64$R$frost$core$Real64$shim, frost$core$UInt64$$BNOT$R$frost$core$UInt64$shim, frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BAND$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$BXOR$frost$core$Int64$R$frost$core$Int64$shim, frost$core$UInt64$$BXOR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64$shim, frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64$shim, frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim, frost$core$UInt64$get_hash$R$frost$core$Int64$shim, frost$core$UInt64$get_asInt8$R$frost$core$Int8$shim, frost$core$UInt64$get_asInt16$R$frost$core$Int16$shim, frost$core$UInt64$get_asInt32$R$frost$core$Int32$shim, frost$core$UInt64$get_asInt64$R$frost$core$Int64$shim, frost$core$UInt64$get_asUInt8$R$frost$core$UInt8$shim, frost$core$UInt64$get_asUInt16$R$frost$core$UInt16$shim, frost$core$UInt64$get_asUInt32$R$frost$core$UInt32$shim, frost$core$UInt64$get_asReal32$R$frost$core$Real32$shim, frost$core$UInt64$get_asReal64$R$frost$core$Real64$shim, frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim, frost$core$UInt64$cleanup$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[10]; } frost$core$UInt64$wrapper_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, NULL, { frost$core$UInt64$get_count$R$frost$core$Int64$shim, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$CollectionView, { frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[2]; } frost$core$UInt64$wrapper_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Iterable, { frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Equatable, { frost$core$UInt64$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[14]; } frost$core$UInt64$wrapper_frost$collections$ListView = { (frost$core$Class*) &frost$collections$ListView$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$Key, { frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit$shim, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$filter$$LPfrost$collections$ListView$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$combine$frost$collections$ListView$LTfrost$collections$ListView$combine$U$GT$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$combine$U$RP$EQ$AM$GT$LPfrost$collections$ListView$combine$V$RP$R$frost$collections$ListView$LTfrost$collections$ListView$combine$V$GT, frost$collections$ListView$get_iterator$R$frost$collections$Iterator$LTfrost$collections$ListView$T$GT$shim, frost$collections$ListView$get_enumeration$R$frost$collections$Iterator$LT$LPfrost$core$Int64$Cfrost$collections$ListView$T$RP$GT, frost$collections$ListView$get_permutations$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$combinations$frost$core$Int64$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$get_powerSet$R$frost$collections$Iterator$LTfrost$collections$ListView$LTfrost$collections$ListView$T$GT$GT, frost$collections$ListView$sort$$LPfrost$collections$ListView$T$Cfrost$collections$ListView$T$RP$EQ$GT$LPfrost$core$Bit$RP$R$frost$collections$ListView$LTfrost$collections$ListView$T$GT} };

struct { frost$core$Class* cl; ITable* itable; void* methods[4]; } frost$core$UInt64$wrapper_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$UInt64$wrapper_frost$collections$ListView, { frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit$shim, frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit$shim} };

struct { frost$core$Class* cl; ITable* itable; void* methods[1]; } frost$core$UInt64$wrapper_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Comparable, { frost$core$UInt64$format$frost$core$String$R$frost$core$String$shim} };

static frost$core$String $s3;
frost$core$UInt64$wrapperclass_type frost$core$UInt64$wrapperclass = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s3, (frost$core$Class*) &frost$core$Value$class, (ITable*) &frost$core$UInt64$wrapper_frost$core$Formattable, { frost$core$UInt64$get_asString$R$frost$core$String$shim, frost$core$Value$cleanup$shim} };typedef frost$core$Int64 (*$fn323)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34", 17, 1146821090439666874, NULL };
static frost$core$String $s295 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s296 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 143, 5763903624548886351, NULL };
static frost$core$String $s311 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s312 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x72\x61\x6e\x67\x65\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3e", 169, -424783135773710871, NULL };
static frost$core$String $s331 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s332 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 93, -8879437518421684442, NULL };
static frost$core$String $s359 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x55\x49\x6e\x74\x36\x34\x2e\x66\x72\x6f\x73\x74", 12, 8498199452909435103, NULL };
static frost$core$String $s360 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x2e\x70\x61\x72\x73\x65\x28\x73\x74\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x61\x64\x69\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74\x36\x34\x3f", 123, -1339440412019629644, NULL };

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
frost$core$UInt64 frost$core$UInt64$$SHL$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 190
uint64_t $tmp105 = param0.value;
uint64_t $tmp106 = param1.value;
uint64_t $tmp107 = $tmp105 << $tmp106;
frost$core$UInt64 $tmp108 = frost$core$UInt64$init$builtin_uint64($tmp107);
return $tmp108;

}
frost$core$UInt64 frost$core$UInt64$$SHR$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 196
uint64_t $tmp109 = param0.value;
uint64_t $tmp110 = param1.value;
uint64_t $tmp111 = $tmp109 >> $tmp110;
frost$core$UInt64 $tmp112 = frost$core$UInt64$init$builtin_uint64($tmp111);
return $tmp112;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 202
uint64_t $tmp113 = param0.value;
uint8_t $tmp114 = param1.value;
bool $tmp115 = $tmp113 == ((uint64_t) $tmp114);
frost$core$Bit $tmp116 = frost$core$Bit$init$builtin_bit($tmp115);
return $tmp116;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 208
uint64_t $tmp117 = param0.value;
uint16_t $tmp118 = param1.value;
bool $tmp119 = $tmp117 == ((uint64_t) $tmp118);
frost$core$Bit $tmp120 = frost$core$Bit$init$builtin_bit($tmp119);
return $tmp120;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 214
uint64_t $tmp121 = param0.value;
uint32_t $tmp122 = param1.value;
bool $tmp123 = $tmp121 == ((uint64_t) $tmp122);
frost$core$Bit $tmp124 = frost$core$Bit$init$builtin_bit($tmp123);
return $tmp124;

}
frost$core$Bit frost$core$UInt64$$EQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 221
uint64_t $tmp125 = param0.value;
uint64_t $tmp126 = param1.value;
bool $tmp127 = $tmp125 == $tmp126;
frost$core$Bit $tmp128 = frost$core$Bit$init$builtin_bit($tmp127);
return $tmp128;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 227
uint64_t $tmp129 = param0.value;
uint8_t $tmp130 = param1.value;
bool $tmp131 = $tmp129 != ((uint64_t) $tmp130);
frost$core$Bit $tmp132 = frost$core$Bit$init$builtin_bit($tmp131);
return $tmp132;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 233
uint64_t $tmp133 = param0.value;
uint16_t $tmp134 = param1.value;
bool $tmp135 = $tmp133 != ((uint64_t) $tmp134);
frost$core$Bit $tmp136 = frost$core$Bit$init$builtin_bit($tmp135);
return $tmp136;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 239
uint64_t $tmp137 = param0.value;
uint32_t $tmp138 = param1.value;
bool $tmp139 = $tmp137 != ((uint64_t) $tmp138);
frost$core$Bit $tmp140 = frost$core$Bit$init$builtin_bit($tmp139);
return $tmp140;

}
frost$core$Bit frost$core$UInt64$$NEQ$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 246
uint64_t $tmp141 = param0.value;
uint64_t $tmp142 = param1.value;
bool $tmp143 = $tmp141 != $tmp142;
frost$core$Bit $tmp144 = frost$core$Bit$init$builtin_bit($tmp143);
return $tmp144;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 252
uint64_t $tmp145 = param0.value;
uint8_t $tmp146 = param1.value;
bool $tmp147 = $tmp145 < ((uint64_t) $tmp146);
frost$core$Bit $tmp148 = frost$core$Bit$init$builtin_bit($tmp147);
return $tmp148;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 258
uint64_t $tmp149 = param0.value;
uint16_t $tmp150 = param1.value;
bool $tmp151 = $tmp149 < ((uint64_t) $tmp150);
frost$core$Bit $tmp152 = frost$core$Bit$init$builtin_bit($tmp151);
return $tmp152;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 264
uint64_t $tmp153 = param0.value;
uint32_t $tmp154 = param1.value;
bool $tmp155 = $tmp153 < ((uint64_t) $tmp154);
frost$core$Bit $tmp156 = frost$core$Bit$init$builtin_bit($tmp155);
return $tmp156;

}
frost$core$Bit frost$core$UInt64$$LT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 271
uint64_t $tmp157 = param0.value;
uint64_t $tmp158 = param1.value;
bool $tmp159 = $tmp157 < $tmp158;
frost$core$Bit $tmp160 = frost$core$Bit$init$builtin_bit($tmp159);
return $tmp160;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 277
uint64_t $tmp161 = param0.value;
uint8_t $tmp162 = param1.value;
bool $tmp163 = $tmp161 > ((uint64_t) $tmp162);
frost$core$Bit $tmp164 = frost$core$Bit$init$builtin_bit($tmp163);
return $tmp164;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 283
uint64_t $tmp165 = param0.value;
uint16_t $tmp166 = param1.value;
bool $tmp167 = $tmp165 > ((uint64_t) $tmp166);
frost$core$Bit $tmp168 = frost$core$Bit$init$builtin_bit($tmp167);
return $tmp168;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 289
uint64_t $tmp169 = param0.value;
uint32_t $tmp170 = param1.value;
bool $tmp171 = $tmp169 > ((uint64_t) $tmp170);
frost$core$Bit $tmp172 = frost$core$Bit$init$builtin_bit($tmp171);
return $tmp172;

}
frost$core$Bit frost$core$UInt64$$GT$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 296
uint64_t $tmp173 = param0.value;
uint64_t $tmp174 = param1.value;
bool $tmp175 = $tmp173 > $tmp174;
frost$core$Bit $tmp176 = frost$core$Bit$init$builtin_bit($tmp175);
return $tmp176;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 302
uint64_t $tmp177 = param0.value;
uint8_t $tmp178 = param1.value;
bool $tmp179 = $tmp177 >= ((uint64_t) $tmp178);
frost$core$Bit $tmp180 = frost$core$Bit$init$builtin_bit($tmp179);
return $tmp180;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 308
uint64_t $tmp181 = param0.value;
uint16_t $tmp182 = param1.value;
bool $tmp183 = $tmp181 >= ((uint64_t) $tmp182);
frost$core$Bit $tmp184 = frost$core$Bit$init$builtin_bit($tmp183);
return $tmp184;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 314
uint64_t $tmp185 = param0.value;
uint32_t $tmp186 = param1.value;
bool $tmp187 = $tmp185 >= ((uint64_t) $tmp186);
frost$core$Bit $tmp188 = frost$core$Bit$init$builtin_bit($tmp187);
return $tmp188;

}
frost$core$Bit frost$core$UInt64$$GE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 321
uint64_t $tmp189 = param0.value;
uint64_t $tmp190 = param1.value;
bool $tmp191 = $tmp189 >= $tmp190;
frost$core$Bit $tmp192 = frost$core$Bit$init$builtin_bit($tmp191);
return $tmp192;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt8$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 327
uint64_t $tmp193 = param0.value;
uint8_t $tmp194 = param1.value;
bool $tmp195 = $tmp193 <= ((uint64_t) $tmp194);
frost$core$Bit $tmp196 = frost$core$Bit$init$builtin_bit($tmp195);
return $tmp196;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt16$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 333
uint64_t $tmp197 = param0.value;
uint16_t $tmp198 = param1.value;
bool $tmp199 = $tmp197 <= ((uint64_t) $tmp198);
frost$core$Bit $tmp200 = frost$core$Bit$init$builtin_bit($tmp199);
return $tmp200;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt32$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 339
uint64_t $tmp201 = param0.value;
uint32_t $tmp202 = param1.value;
bool $tmp203 = $tmp201 <= ((uint64_t) $tmp202);
frost$core$Bit $tmp204 = frost$core$Bit$init$builtin_bit($tmp203);
return $tmp204;

}
frost$core$Bit frost$core$UInt64$$LE$frost$core$UInt64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 346
uint64_t $tmp205 = param0.value;
uint64_t $tmp206 = param1.value;
bool $tmp207 = $tmp205 <= $tmp206;
frost$core$Bit $tmp208 = frost$core$Bit$init$builtin_bit($tmp207);
return $tmp208;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 356
uint64_t $tmp209 = param0.value;
uint8_t $tmp210 = param1.value;
bool $tmp211 = $tmp209 < ((uint64_t) $tmp210);
frost$core$Bit $tmp212 = frost$core$Bit$init$builtin_bit($tmp211);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block1; else goto block2;
block1:;
// line 357
uint64_t $tmp214 = param0.value;
frost$core$UInt64 $tmp215 = frost$core$UInt64$init$builtin_uint64($tmp214);
return $tmp215;
block2:;
// line 359
uint8_t $tmp216 = param1.value;
frost$core$UInt64 $tmp217 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp216));
return $tmp217;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 365
uint64_t $tmp218 = param0.value;
uint16_t $tmp219 = param1.value;
bool $tmp220 = $tmp218 < ((uint64_t) $tmp219);
frost$core$Bit $tmp221 = frost$core$Bit$init$builtin_bit($tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block1; else goto block2;
block1:;
// line 366
uint64_t $tmp223 = param0.value;
frost$core$UInt64 $tmp224 = frost$core$UInt64$init$builtin_uint64($tmp223);
return $tmp224;
block2:;
// line 368
uint16_t $tmp225 = param1.value;
frost$core$UInt64 $tmp226 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp225));
return $tmp226;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 374
uint64_t $tmp227 = param0.value;
uint32_t $tmp228 = param1.value;
bool $tmp229 = $tmp227 < ((uint64_t) $tmp228);
frost$core$Bit $tmp230 = frost$core$Bit$init$builtin_bit($tmp229);
bool $tmp231 = $tmp230.value;
if ($tmp231) goto block1; else goto block2;
block1:;
// line 375
uint64_t $tmp232 = param0.value;
frost$core$UInt64 $tmp233 = frost$core$UInt64$init$builtin_uint64($tmp232);
return $tmp233;
block2:;
// line 377
uint32_t $tmp234 = param1.value;
frost$core$UInt64 $tmp235 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp234));
return $tmp235;

}
frost$core$UInt64 frost$core$UInt64$min$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 383
uint64_t $tmp236 = param0.value;
uint64_t $tmp237 = param1.value;
bool $tmp238 = $tmp236 < $tmp237;
frost$core$Bit $tmp239 = frost$core$Bit$init$builtin_bit($tmp238);
bool $tmp240 = $tmp239.value;
if ($tmp240) goto block1; else goto block2;
block1:;
// line 384
uint64_t $tmp241 = param0.value;
frost$core$UInt64 $tmp242 = frost$core$UInt64$init$builtin_uint64($tmp241);
return $tmp242;
block2:;
// line 386
uint64_t $tmp243 = param1.value;
frost$core$UInt64 $tmp244 = frost$core$UInt64$init$builtin_uint64($tmp243);
return $tmp244;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt8$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt8 param1) {

// line 396
uint64_t $tmp245 = param0.value;
uint8_t $tmp246 = param1.value;
bool $tmp247 = $tmp245 > ((uint64_t) $tmp246);
frost$core$Bit $tmp248 = frost$core$Bit$init$builtin_bit($tmp247);
bool $tmp249 = $tmp248.value;
if ($tmp249) goto block1; else goto block2;
block1:;
// line 397
uint64_t $tmp250 = param0.value;
frost$core$UInt64 $tmp251 = frost$core$UInt64$init$builtin_uint64($tmp250);
return $tmp251;
block2:;
// line 399
uint8_t $tmp252 = param1.value;
frost$core$UInt64 $tmp253 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp252));
return $tmp253;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt16$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt16 param1) {

// line 405
uint64_t $tmp254 = param0.value;
uint16_t $tmp255 = param1.value;
bool $tmp256 = $tmp254 > ((uint64_t) $tmp255);
frost$core$Bit $tmp257 = frost$core$Bit$init$builtin_bit($tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block1; else goto block2;
block1:;
// line 406
uint64_t $tmp259 = param0.value;
frost$core$UInt64 $tmp260 = frost$core$UInt64$init$builtin_uint64($tmp259);
return $tmp260;
block2:;
// line 408
uint16_t $tmp261 = param1.value;
frost$core$UInt64 $tmp262 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp261));
return $tmp262;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt32$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt32 param1) {

// line 414
uint64_t $tmp263 = param0.value;
uint32_t $tmp264 = param1.value;
bool $tmp265 = $tmp263 > ((uint64_t) $tmp264);
frost$core$Bit $tmp266 = frost$core$Bit$init$builtin_bit($tmp265);
bool $tmp267 = $tmp266.value;
if ($tmp267) goto block1; else goto block2;
block1:;
// line 415
uint64_t $tmp268 = param0.value;
frost$core$UInt64 $tmp269 = frost$core$UInt64$init$builtin_uint64($tmp268);
return $tmp269;
block2:;
// line 417
uint32_t $tmp270 = param1.value;
frost$core$UInt64 $tmp271 = frost$core$UInt64$init$builtin_uint64(((uint64_t) $tmp270));
return $tmp271;

}
frost$core$UInt64 frost$core$UInt64$max$frost$core$UInt64$R$frost$core$UInt64(frost$core$UInt64 param0, frost$core$UInt64 param1) {

// line 423
uint64_t $tmp272 = param0.value;
uint64_t $tmp273 = param1.value;
bool $tmp274 = $tmp272 > $tmp273;
frost$core$Bit $tmp275 = frost$core$Bit$init$builtin_bit($tmp274);
bool $tmp276 = $tmp275.value;
if ($tmp276) goto block1; else goto block2;
block1:;
// line 424
uint64_t $tmp277 = param0.value;
frost$core$UInt64 $tmp278 = frost$core$UInt64$init$builtin_uint64($tmp277);
return $tmp278;
block2:;
// line 426
uint64_t $tmp279 = param1.value;
frost$core$UInt64 $tmp280 = frost$core$UInt64$init$builtin_uint64($tmp279);
return $tmp280;

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$Range$LTfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$Range$LTfrost$core$UInt64$GT param0) {

frost$core$UInt64 $tmp281 = param0.max;
frost$core$UInt64 $tmp282 = param0.min;
uint64_t $tmp283 = $tmp281.value;
uint64_t $tmp284 = $tmp282.value;
uint64_t $tmp285 = $tmp283 - $tmp284;
frost$core$UInt64 $tmp286 = (frost$core$UInt64) {$tmp285};
frost$core$Int64 $tmp287 = (frost$core$Int64) {9223372036854775807};
frost$core$UInt64 $tmp288 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp287);
uint64_t $tmp289 = $tmp286.value;
uint64_t $tmp290 = $tmp288.value;
bool $tmp291 = $tmp289 < $tmp290;
frost$core$Bit $tmp292 = (frost$core$Bit) {$tmp291};
bool $tmp293 = $tmp292.value;
if ($tmp293) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp294 = (frost$core$Int64) {431};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s295, $tmp294, &$s296);
abort(); // unreachable
block1:;
// line 432
FROST_ASSERT(56 == sizeof(org$frostlang$frost$UInt64List));
org$frostlang$frost$UInt64List* $tmp297 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
frost$core$UInt64 $tmp298 = param0.min;
frost$core$UInt64 $tmp299 = param0.max;
frost$core$UInt64 $tmp300 = (frost$core$UInt64) {1};
frost$core$Bit $tmp301 = param0.inclusive;
frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT $tmp302 = frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$init$frost$core$UInt64$frost$core$UInt64$frost$core$UInt64$frost$core$Bit($tmp298, $tmp299, $tmp300, $tmp301);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp297, $tmp302);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp297)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp297));
return ((frost$collections$ListView*) $tmp297);

}
frost$collections$ListView* frost$core$UInt64$$IDX$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$collections$ListView$LTfrost$core$UInt64$GT(frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT param0) {

frost$core$Int64 $tmp303 = org$frostlang$frost$UInt64List$computeCount$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT$R$frost$core$Int64(param0);
frost$core$Int64 $tmp304 = (frost$core$Int64) {0};
int64_t $tmp305 = $tmp303.value;
int64_t $tmp306 = $tmp304.value;
bool $tmp307 = $tmp305 > $tmp306;
frost$core$Bit $tmp308 = (frost$core$Bit) {$tmp307};
bool $tmp309 = $tmp308.value;
if ($tmp309) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp310 = (frost$core$Int64) {437};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s311, $tmp310, &$s312);
abort(); // unreachable
block1:;
// line 438
FROST_ASSERT(56 == sizeof(org$frostlang$frost$UInt64List));
org$frostlang$frost$UInt64List* $tmp313 = (org$frostlang$frost$UInt64List*) frostObjectAlloc(56, (frost$core$Class*) &org$frostlang$frost$UInt64List$class);
org$frostlang$frost$UInt64List$init$frost$core$SteppedRange$LTfrost$core$UInt64$Cfrost$core$UInt64$GT($tmp313, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp313)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp313));
return ((frost$collections$ListView*) $tmp313);

}
frost$core$Bit frost$core$UInt64$$IDX$frost$core$Int64$R$frost$core$Bit(frost$core$UInt64 param0, frost$core$Int64 param1) {

frost$core$Int64 $tmp314 = (frost$core$Int64) {0};
int64_t $tmp315 = param1.value;
int64_t $tmp316 = $tmp314.value;
bool $tmp317 = $tmp315 >= $tmp316;
frost$core$Bit $tmp318 = (frost$core$Bit) {$tmp317};
bool $tmp319 = $tmp318.value;
if ($tmp319) goto block3; else goto block2;
block3:;
frost$core$UInt64$wrapper* $tmp320;
$tmp320 = (frost$core$UInt64$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$UInt64$wrapperclass);
$tmp320->value = param0;
ITable* $tmp321 = ((frost$collections$CollectionView*) $tmp320)->$class->itable;
while ($tmp321->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp321 = $tmp321->next;
}
$fn323 $tmp322 = $tmp321->methods[0];
frost$core$Int64 $tmp324 = $tmp322(((frost$collections$CollectionView*) $tmp320));
int64_t $tmp325 = param1.value;
int64_t $tmp326 = $tmp324.value;
bool $tmp327 = $tmp325 < $tmp326;
frost$core$Bit $tmp328 = (frost$core$Bit) {$tmp327};
bool $tmp329 = $tmp328.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$CollectionView*) $tmp320)));
if ($tmp329) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp330 = (frost$core$Int64) {443};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s331, $tmp330, &$s332);
abort(); // unreachable
block1:;
// line 444
frost$core$Int64 $tmp333 = (frost$core$Int64) {1};
frost$core$Int64 $tmp334 = frost$core$Int64$$SHL$frost$core$Int64$R$frost$core$Int64($tmp333, param1);
frost$core$Int64 $tmp335 = frost$core$UInt64$$BAND$frost$core$Int64$R$frost$core$Int64(param0, $tmp334);
frost$core$Int64 $tmp336 = (frost$core$Int64) {0};
int64_t $tmp337 = $tmp335.value;
int64_t $tmp338 = $tmp336.value;
bool $tmp339 = $tmp337 != $tmp338;
frost$core$Bit $tmp340 = (frost$core$Bit) {$tmp339};
return $tmp340;

}
frost$core$Int64 frost$core$UInt64$get_count$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 450
frost$core$Int64 $tmp341 = (frost$core$Int64) {64};
return $tmp341;

}
frost$collections$Iterator* frost$core$UInt64$get_iterator$R$frost$collections$Iterator$LTfrost$core$Bit$GT(frost$core$UInt64 param0) {

// line 455
FROST_ASSERT(32 == sizeof(org$frostlang$frost$IntBitIterator));
org$frostlang$frost$IntBitIterator* $tmp342 = (org$frostlang$frost$IntBitIterator*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frost$IntBitIterator$class);
frost$core$UInt64 $tmp343 = (frost$core$UInt64) {9223372036854775808};
org$frostlang$frost$IntBitIterator$init$frost$core$UInt64$frost$core$UInt64($tmp342, param0, $tmp343);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp342)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp342));
return ((frost$collections$Iterator*) $tmp342);

}
frost$core$Int64 frost$core$UInt64$get_hash$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 460
uint64_t $tmp344 = param0.value;
frost$core$Int64 $tmp345 = (frost$core$Int64) {((int64_t) $tmp344)};
return $tmp345;

}
frost$core$UInt64$nullable frost$core$UInt64$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$UInt64$nullable local0;
frost$core$Int64 $tmp346 = (frost$core$Int64) {2};
int64_t $tmp347 = param1.value;
int64_t $tmp348 = $tmp346.value;
bool $tmp349 = $tmp347 >= $tmp348;
frost$core$Bit $tmp350 = (frost$core$Bit) {$tmp349};
bool $tmp351 = $tmp350.value;
if ($tmp351) goto block3; else goto block2;
block3:;
frost$core$Int64 $tmp352 = (frost$core$Int64) {36};
int64_t $tmp353 = param1.value;
int64_t $tmp354 = $tmp352.value;
bool $tmp355 = $tmp353 <= $tmp354;
frost$core$Bit $tmp356 = (frost$core$Bit) {$tmp355};
bool $tmp357 = $tmp356.value;
if ($tmp357) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp358 = (frost$core$Int64) {466};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s359, $tmp358, &$s360);
abort(); // unreachable
block1:;
// line 467
frost$core$UInt64$nullable $tmp361 = frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(param0, param1);
*(&local0) = $tmp361;
// line 468
frost$core$UInt64$nullable $tmp362 = *(&local0);
frost$core$Bit $tmp363 = frost$core$Bit$init$builtin_bit(!$tmp362.nonnull);
bool $tmp364 = $tmp363.value;
if ($tmp364) goto block4; else goto block5;
block4:;
// line 469
return ((frost$core$UInt64$nullable) { .nonnull = false });
block5:;
// line 471
frost$core$UInt64$nullable $tmp365 = *(&local0);
return $tmp365;

}
frost$core$Int8 frost$core$UInt64$get_asInt8$R$frost$core$Int8(frost$core$UInt64 param0) {

// line 477
uint64_t $tmp366 = param0.value;
frost$core$Int8 $tmp367 = (frost$core$Int8) {((int8_t) $tmp366)};
return $tmp367;

}
frost$core$Int16 frost$core$UInt64$get_asInt16$R$frost$core$Int16(frost$core$UInt64 param0) {

// line 483
uint64_t $tmp368 = param0.value;
frost$core$Int16 $tmp369 = (frost$core$Int16) {((int16_t) $tmp368)};
return $tmp369;

}
frost$core$Int32 frost$core$UInt64$get_asInt32$R$frost$core$Int32(frost$core$UInt64 param0) {

// line 489
uint64_t $tmp370 = param0.value;
frost$core$Int32 $tmp371 = (frost$core$Int32) {((int32_t) $tmp370)};
return $tmp371;

}
frost$core$Int64 frost$core$UInt64$get_asInt64$R$frost$core$Int64(frost$core$UInt64 param0) {

// line 495
uint64_t $tmp372 = param0.value;
frost$core$Int64 $tmp373 = (frost$core$Int64) {((int64_t) $tmp372)};
return $tmp373;

}
frost$core$UInt8 frost$core$UInt64$get_asUInt8$R$frost$core$UInt8(frost$core$UInt64 param0) {

// line 501
uint64_t $tmp374 = param0.value;
frost$core$UInt8 $tmp375 = (frost$core$UInt8) {((uint8_t) $tmp374)};
return $tmp375;

}
frost$core$UInt16 frost$core$UInt64$get_asUInt16$R$frost$core$UInt16(frost$core$UInt64 param0) {

// line 507
uint64_t $tmp376 = param0.value;
frost$core$UInt16 $tmp377 = (frost$core$UInt16) {((uint16_t) $tmp376)};
return $tmp377;

}
frost$core$UInt32 frost$core$UInt64$get_asUInt32$R$frost$core$UInt32(frost$core$UInt64 param0) {

// line 513
uint64_t $tmp378 = param0.value;
frost$core$UInt32 $tmp379 = (frost$core$UInt32) {((uint32_t) $tmp378)};
return $tmp379;

}
frost$core$Real32 frost$core$UInt64$get_asReal32$R$frost$core$Real32(frost$core$UInt64 param0) {

// line 519
uint64_t $tmp380 = param0.value;
frost$core$Real32 $tmp381 = (frost$core$Real32) {((float) $tmp380)};
return $tmp381;

}
frost$core$Real64 frost$core$UInt64$get_asReal64$R$frost$core$Real64(frost$core$UInt64 param0) {

// line 525
uint64_t $tmp382 = param0.value;
frost$core$Real64 $tmp383 = (frost$core$Real64) {((double) $tmp382)};
return $tmp383;

}
frost$core$String* frost$core$UInt64$get_asString$R$frost$core$String(frost$core$UInt64 param0) {

frost$core$Int64 local0;
frost$core$Char8* local1;
frost$core$Int64 local2;
frost$core$UInt64 local3;
frost$core$Int64 local4;
frost$core$Int64 local5;
// line 531
frost$core$Int64 $tmp384 = (frost$core$Int64) {20};
*(&local0) = $tmp384;
// line 532
frost$core$Int64 $tmp385 = *(&local0);
int64_t $tmp386 = $tmp385.value;
frost$core$Char8* $tmp387 = ((frost$core$Char8*) frostAlloc($tmp386 * 1));
*(&local1) = $tmp387;
// line 533
frost$core$Int64 $tmp388 = *(&local0);
frost$core$Int64 $tmp389 = (frost$core$Int64) {1};
int64_t $tmp390 = $tmp388.value;
int64_t $tmp391 = $tmp389.value;
int64_t $tmp392 = $tmp390 - $tmp391;
frost$core$Int64 $tmp393 = (frost$core$Int64) {$tmp392};
*(&local2) = $tmp393;
// line 534
*(&local3) = param0;
// line 535
frost$core$UInt64 $tmp394 = *(&local3);
frost$core$UInt64 $tmp395 = (frost$core$UInt64) {0};
uint64_t $tmp396 = $tmp394.value;
uint64_t $tmp397 = $tmp395.value;
bool $tmp398 = $tmp396 >= $tmp397;
frost$core$Bit $tmp399 = (frost$core$Bit) {$tmp398};
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block1; else goto block3;
block1:;
// line 536
goto block4;
block4:;
// line 537
frost$core$Char8* $tmp401 = *(&local1);
frost$core$Int64 $tmp402 = *(&local2);
frost$core$UInt64 $tmp403 = *(&local3);
frost$core$UInt64 $tmp404 = (frost$core$UInt64) {10};
frost$core$UInt64 $tmp405 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp403, $tmp404);
frost$core$UInt64 $tmp406 = (frost$core$UInt64) {48};
uint64_t $tmp407 = $tmp405.value;
uint64_t $tmp408 = $tmp406.value;
uint64_t $tmp409 = $tmp407 + $tmp408;
frost$core$UInt64 $tmp410 = (frost$core$UInt64) {$tmp409};
frost$core$UInt8 $tmp411 = frost$core$UInt64$get_asUInt8$R$frost$core$UInt8($tmp410);
frost$core$Char8 $tmp412 = frost$core$Char8$init$frost$core$UInt8($tmp411);
int64_t $tmp413 = $tmp402.value;
$tmp401[$tmp413] = $tmp412;
// line 538
frost$core$UInt64 $tmp414 = *(&local3);
frost$core$UInt64 $tmp415 = (frost$core$UInt64) {10};
uint64_t $tmp416 = $tmp414.value;
uint64_t $tmp417 = $tmp415.value;
uint64_t $tmp418 = $tmp416 / $tmp417;
frost$core$UInt64 $tmp419 = (frost$core$UInt64) {$tmp418};
*(&local3) = $tmp419;
// line 539
frost$core$Int64 $tmp420 = *(&local2);
frost$core$Int64 $tmp421 = (frost$core$Int64) {1};
int64_t $tmp422 = $tmp420.value;
int64_t $tmp423 = $tmp421.value;
int64_t $tmp424 = $tmp422 - $tmp423;
frost$core$Int64 $tmp425 = (frost$core$Int64) {$tmp424};
*(&local2) = $tmp425;
goto block5;
block5:;
frost$core$UInt64 $tmp426 = *(&local3);
frost$core$UInt64 $tmp427 = (frost$core$UInt64) {0};
uint64_t $tmp428 = $tmp426.value;
uint64_t $tmp429 = $tmp427.value;
bool $tmp430 = $tmp428 > $tmp429;
frost$core$Bit $tmp431 = (frost$core$Bit) {$tmp430};
bool $tmp432 = $tmp431.value;
if ($tmp432) goto block4; else goto block6;
block6:;
// line 542
frost$core$Int64 $tmp433 = *(&local2);
frost$core$Int64 $tmp434 = (frost$core$Int64) {1};
int64_t $tmp435 = $tmp433.value;
int64_t $tmp436 = $tmp434.value;
int64_t $tmp437 = $tmp435 + $tmp436;
frost$core$Int64 $tmp438 = (frost$core$Int64) {$tmp437};
*(&local2) = $tmp438;
goto block2;
block3:;
// line 1
// line 545
goto block7;
block7:;
// line 546
frost$core$Char8* $tmp439 = *(&local1);
frost$core$Int64 $tmp440 = *(&local2);
frost$core$UInt64 $tmp441 = (frost$core$UInt64) {48};
frost$core$UInt64 $tmp442 = *(&local3);
frost$core$UInt64 $tmp443 = (frost$core$UInt64) {10};
frost$core$UInt64 $tmp444 = frost$core$UInt64$$REM$frost$core$UInt64$R$frost$core$UInt64($tmp442, $tmp443);
uint64_t $tmp445 = $tmp441.value;
uint64_t $tmp446 = $tmp444.value;
uint64_t $tmp447 = $tmp445 - $tmp446;
frost$core$UInt64 $tmp448 = (frost$core$UInt64) {$tmp447};
frost$core$UInt8 $tmp449 = frost$core$UInt64$get_asUInt8$R$frost$core$UInt8($tmp448);
frost$core$Char8 $tmp450 = frost$core$Char8$init$frost$core$UInt8($tmp449);
int64_t $tmp451 = $tmp440.value;
$tmp439[$tmp451] = $tmp450;
// line 547
frost$core$UInt64 $tmp452 = *(&local3);
frost$core$UInt64 $tmp453 = (frost$core$UInt64) {10};
uint64_t $tmp454 = $tmp452.value;
uint64_t $tmp455 = $tmp453.value;
uint64_t $tmp456 = $tmp454 / $tmp455;
frost$core$UInt64 $tmp457 = (frost$core$UInt64) {$tmp456};
*(&local3) = $tmp457;
// line 548
frost$core$Int64 $tmp458 = *(&local2);
frost$core$Int64 $tmp459 = (frost$core$Int64) {1};
int64_t $tmp460 = $tmp458.value;
int64_t $tmp461 = $tmp459.value;
int64_t $tmp462 = $tmp460 - $tmp461;
frost$core$Int64 $tmp463 = (frost$core$Int64) {$tmp462};
*(&local2) = $tmp463;
goto block8;
block8:;
frost$core$UInt64 $tmp464 = *(&local3);
frost$core$UInt64 $tmp465 = (frost$core$UInt64) {0};
uint64_t $tmp466 = $tmp464.value;
uint64_t $tmp467 = $tmp465.value;
bool $tmp468 = $tmp466 < $tmp467;
frost$core$Bit $tmp469 = (frost$core$Bit) {$tmp468};
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block7; else goto block9;
block9:;
// line 551
frost$core$Char8* $tmp471 = *(&local1);
frost$core$Int64 $tmp472 = *(&local2);
frost$core$UInt8 $tmp473 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp474 = frost$core$Char8$init$frost$core$UInt8($tmp473);
int64_t $tmp475 = $tmp472.value;
$tmp471[$tmp475] = $tmp474;
goto block2;
block2:;
// line 553
frost$core$Int64 $tmp476 = *(&local0);
frost$core$Int64 $tmp477 = *(&local2);
int64_t $tmp478 = $tmp476.value;
int64_t $tmp479 = $tmp477.value;
int64_t $tmp480 = $tmp478 - $tmp479;
frost$core$Int64 $tmp481 = (frost$core$Int64) {$tmp480};
*(&local4) = $tmp481;
// line 554
frost$core$Int64 $tmp482 = (frost$core$Int64) {0};
frost$core$Int64 $tmp483 = *(&local4);
frost$core$Bit $tmp484 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp485 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp482, $tmp483, $tmp484);
frost$core$Int64 $tmp486 = $tmp485.min;
*(&local5) = $tmp486;
frost$core$Int64 $tmp487 = $tmp485.max;
frost$core$Bit $tmp488 = $tmp485.inclusive;
bool $tmp489 = $tmp488.value;
frost$core$Int64 $tmp490 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp491 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp490);
if ($tmp489) goto block13; else goto block14;
block13:;
int64_t $tmp492 = $tmp486.value;
int64_t $tmp493 = $tmp487.value;
bool $tmp494 = $tmp492 <= $tmp493;
frost$core$Bit $tmp495 = (frost$core$Bit) {$tmp494};
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block10; else goto block11;
block14:;
int64_t $tmp497 = $tmp486.value;
int64_t $tmp498 = $tmp487.value;
bool $tmp499 = $tmp497 < $tmp498;
frost$core$Bit $tmp500 = (frost$core$Bit) {$tmp499};
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block10; else goto block11;
block10:;
// line 555
frost$core$Char8* $tmp502 = *(&local1);
frost$core$Int64 $tmp503 = *(&local5);
frost$core$Char8* $tmp504 = *(&local1);
frost$core$Int64 $tmp505 = *(&local5);
frost$core$Int64 $tmp506 = *(&local2);
int64_t $tmp507 = $tmp505.value;
int64_t $tmp508 = $tmp506.value;
int64_t $tmp509 = $tmp507 + $tmp508;
frost$core$Int64 $tmp510 = (frost$core$Int64) {$tmp509};
int64_t $tmp511 = $tmp510.value;
frost$core$Char8 $tmp512 = $tmp504[$tmp511];
int64_t $tmp513 = $tmp503.value;
$tmp502[$tmp513] = $tmp512;
goto block12;
block12:;
frost$core$Int64 $tmp514 = *(&local5);
int64_t $tmp515 = $tmp487.value;
int64_t $tmp516 = $tmp514.value;
int64_t $tmp517 = $tmp515 - $tmp516;
frost$core$Int64 $tmp518 = (frost$core$Int64) {$tmp517};
frost$core$UInt64 $tmp519 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp518);
if ($tmp489) goto block16; else goto block17;
block16:;
uint64_t $tmp520 = $tmp519.value;
uint64_t $tmp521 = $tmp491.value;
bool $tmp522 = $tmp520 >= $tmp521;
frost$core$Bit $tmp523 = (frost$core$Bit) {$tmp522};
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block15; else goto block11;
block17:;
uint64_t $tmp525 = $tmp519.value;
uint64_t $tmp526 = $tmp491.value;
bool $tmp527 = $tmp525 > $tmp526;
frost$core$Bit $tmp528 = (frost$core$Bit) {$tmp527};
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block15; else goto block11;
block15:;
int64_t $tmp530 = $tmp514.value;
int64_t $tmp531 = $tmp490.value;
int64_t $tmp532 = $tmp530 + $tmp531;
frost$core$Int64 $tmp533 = (frost$core$Int64) {$tmp532};
*(&local5) = $tmp533;
goto block10;
block11:;
// line 557
FROST_ASSERT(48 == sizeof(frost$core$String));
frost$core$String* $tmp534 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp535 = *(&local1);
frost$core$Int64 $tmp536 = *(&local4);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp534, $tmp535, $tmp536);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp534));
return $tmp534;

}
frost$core$String* frost$core$UInt64$format$frost$core$String$R$frost$core$String(frost$core$UInt64 param0, frost$core$String* param1) {

// line 563
frost$core$Bit $tmp537 = frost$core$Bit$init$builtin_bit(false);
frost$core$UInt64 $tmp538 = (frost$core$UInt64) {18446744073709551615};
frost$core$String* $tmp539 = frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String($tmp537, param0, $tmp538, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp539));
return $tmp539;

}
void frost$core$UInt64$cleanup(frost$core$UInt64 param0) {

return;

}

