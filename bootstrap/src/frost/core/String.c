#include "frost/core/String.h"
#include "frost/core/Immutable.h"
#include "frost/core/Class.h"
#include "frost/collections/Key.h"
#include "frost/core/Int64.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Formattable.h"
#include "frost/core/Comparable.h"
#include "frost/core/Object.h"
#include "frost/core/Frost.h"
#include "frost/collections/ListView.h"
#include "frost/collections/CollectionView.h"
#include "frost/core/Char8.h"
#include "frost/core/Range.LTfrost/core/Int64.GT.h"
#include "frost/core/UInt64.h"
#include "frost/core/MutableString.h"
#include "frost/core/Char32.h"
#include "frost/core/UInt8.h"
#include "frost/core/String/UTF8List.h"
#include "frost/core/String/UTF16Iterator.h"
#include "frost/core/String/UTF32Iterator.h"
#include "frost/core/String/Index.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/core/Int32.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/String/Index.Q.Cfrost/core/Int64.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Cfrost/core/Int64.GT.h"
#include "frost/core/Range.LTfrost/core/Int64.Q.GT.h"
#include "frost/core/SteppedRange.LTfrost/core/Int64.Q.Cfrost/core/Int64.GT.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Matcher.h"
#include "frost/collections/Array.h"
#include "frost/core/MutableMethod.h"
#include "frost/core/String/MatchIterator.h"
#include "frost/core/String/RegexMatchIterator.h"
#include "frost/core/Real64.h"

__attribute__((weak)) frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64$shim(frost$core$String* p0) {
    frost$core$Int64 result = frost$core$String$get_hash$R$frost$core$Int64(p0);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim(frost$core$String* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(p0, ((frost$core$String*) p1));

    return result;
}
__attribute__((weak)) frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim(frost$core$String* p0) {
    frost$collections$Iterator* result = frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(p0);

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String$shim(frost$core$String* p0, frost$core$String* p1) {
    frost$core$String* result = frost$core$String$format$frost$core$String$R$frost$core$String(p0, p1);

    return result;
}
__attribute__((weak)) frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim(frost$core$String* p0, frost$core$Comparable* p1) {
    frost$core$Bit result = frost$core$String$$GT$frost$core$String$R$frost$core$Bit(p0, ((frost$core$String*) p1));

    return result;
}
__attribute__((weak)) frost$core$String* frost$core$String$get_asString$R$frost$core$String$shim(frost$core$String* p0) {
    frost$core$String* result = frost$core$String$get_asString$R$frost$core$String(p0);

    return result;
}
__attribute__((weak)) void frost$core$String$cleanup$shim(frost$core$String* p0) {
    frost$core$String$cleanup(p0);

}

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, NULL, { frost$core$String$get_hash$R$frost$core$Int64$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$String$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, (ITable*) &frost$core$String$_frost$collections$Key, { frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$core$String$_frost$core$Equatable, { frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$String$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, (ITable*) &frost$core$String$_frost$collections$Iterable, { frost$core$String$format$frost$core$String$R$frost$core$String$shim} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$String$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$String$_frost$core$Formattable, { frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$String$class_type frost$core$String$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Immutable$class, (ITable*) &frost$core$String$_frost$core$Comparable, { frost$core$String$get_asString$R$frost$core$String$shim, frost$core$String$cleanup$shim, frost$core$String$format$frost$core$String$R$frost$core$String$shim, frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT, frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT, frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT$shim, frost$core$String$get_length$R$frost$core$Int64, frost$core$String$get_byteLength$R$frost$core$Int64, frost$core$String$startsWith$frost$core$String$R$frost$core$Bit, frost$core$String$endsWith$frost$core$String$R$frost$core$Bit, frost$core$String$get_trimmed$R$frost$core$String, frost$core$String$$ADD$frost$core$String$R$frost$core$String, frost$core$String$$ADD$frost$core$Object$R$frost$core$String, frost$core$String$$MUL$frost$core$Int64$R$frost$core$String, frost$core$String$$EQ$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$GT$frost$core$String$R$frost$core$Bit$shim, frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32, frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String, frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String, frost$core$String$contains$frost$core$Char8$R$frost$core$Bit, frost$core$String$contains$frost$core$String$R$frost$core$Bit, frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q, frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q, frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit, frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q, frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String, frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT, frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT, frost$core$String$get_start$R$frost$core$String$Index, frost$core$String$get_end$R$frost$core$String$Index, frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index, frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index, frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String, frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String, frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String, frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String, frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT, frost$core$String$get_asInt64$R$frost$core$Int64$Q, frost$core$String$get_asUInt64$R$frost$core$UInt64$Q, frost$core$String$get_asReal64$R$frost$core$Real64$Q, frost$core$String$get_hash$R$frost$core$Int64$shim} };

typedef frost$core$Int64 (*$fn20)(frost$collections$CollectionView*);
typedef frost$core$Object* (*$fn55)(frost$collections$ListView*, frost$core$Int64);
typedef frost$collections$Iterator* (*$fn87)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn91)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn96)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn178)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn182)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn187)(frost$collections$Iterator*);
typedef frost$collections$Iterator* (*$fn263)(frost$collections$Iterable*);
typedef frost$core$Int64 (*$fn267)(frost$collections$Iterator*);
typedef frost$core$String* (*$fn601)(frost$core$Object*);
typedef frost$core$String* (*$fn713)(frost$core$Object*);
typedef frost$core$Bit (*$fn789)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn798)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn823)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$String* (*$fn1339)(frost$core$Object*);
typedef frost$core$String* (*$fn1523)(frost$core$Object*);
typedef frost$core$Object* (*$fn2138)(frost$core$String*);
typedef frost$core$Object* (*$fn2140)(frost$core$Object*, frost$core$String*);
typedef frost$core$String* (*$fn2144)(frost$core$Object*);
typedef frost$core$String* (*$fn2151)(frost$core$Object*);
typedef frost$core$Object* (*$fn2217)(frost$collections$ListView*);
typedef frost$core$Object* (*$fn2219)(frost$core$Object*, frost$collections$ListView*);
typedef frost$core$String* (*$fn2223)(frost$core$Object*);
typedef frost$core$String* (*$fn2231)(frost$core$Object*);
typedef frost$core$Int64 (*$fn2552)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn2606)(frost$collections$CollectionView*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 17, 1146821073898077815, NULL };
static frost$core$String $s167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s170 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static frost$core$String $s173 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s195 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x22", 2, 19527, NULL };
static frost$core$String $s201 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x5c", 2, 19585, NULL };
static frost$core$String $s207 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x6e", 2, 19603, NULL };
static frost$core$String $s213 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x72", 2, 19607, NULL };
static frost$core$String $s219 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x5c\x74", 2, 19609, NULL };
static frost$core$String $s240 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x3f", 1, 164, NULL };
static frost$core$String $s242 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x22", 1, 135, NULL };
static frost$core$String $s249 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s611 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s612 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 95, 612931044334107490, NULL };
static frost$core$String $s665 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s666 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x2a\x28\x63\x6f\x75\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x2c\x20\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 116, -8142968872510394027, NULL };
static frost$core$String $s861 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s906 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s964 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s1167 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1168 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1191 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1192 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s1374 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2070 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "", 0, 1, NULL };
static frost$core$String $s2255 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2311 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2591 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, -7878295538840852540, NULL };
static frost$core$String $s2592 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2e\x73\x70\x6c\x69\x74\x28\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x52\x65\x67\x75\x6c\x61\x72\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2c\x20\x6d\x61\x78\x52\x65\x73\x75\x6c\x74\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3e", 169, -286058843379027293, NULL };

void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int64 param2) {

// line 328
frost$core$Int64 $tmp2 = (frost$core$Int64) {0};
frost$core$Int64* $tmp3 = &param0->dummy;
*$tmp3 = $tmp2;
// line 351
frost$core$Char8** $tmp4 = &param0->data;
*$tmp4 = param1;
// line 352
frost$core$Int64* $tmp5 = &param0->_length;
*$tmp5 = param2;
// line 353
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp6 = &param0->owner;
frost$core$String* $tmp7 = *$tmp6;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$core$String** $tmp8 = &param0->owner;
*$tmp8 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String(frost$core$String* param0, frost$core$Char8* param1, frost$core$Int64 param2, frost$core$String* param3) {

// line 328
frost$core$Int64 $tmp9 = (frost$core$Int64) {0};
frost$core$Int64* $tmp10 = &param0->dummy;
*$tmp10 = $tmp9;
// line 358
frost$core$Char8** $tmp11 = &param0->data;
*$tmp11 = param1;
// line 359
frost$core$Int64* $tmp12 = &param0->_length;
*$tmp12 = param2;
// line 360
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param3));
frost$core$String** $tmp13 = &param0->owner;
frost$core$String* $tmp14 = *$tmp13;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp14));
frost$core$String** $tmp15 = &param0->owner;
*$tmp15 = param3;
return;

}
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0, frost$collections$ListView* param1) {

frost$core$Int64 local0;
// line 328
frost$core$Int64 $tmp16 = (frost$core$Int64) {0};
frost$core$Int64* $tmp17 = &param0->dummy;
*$tmp17 = $tmp16;
// line 364
ITable* $tmp18 = ((frost$collections$CollectionView*) param1)->$class->itable;
while ($tmp18->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp18 = $tmp18->next;
}
$fn20 $tmp19 = $tmp18->methods[0];
frost$core$Int64 $tmp21 = $tmp19(((frost$collections$CollectionView*) param1));
frost$core$Int64* $tmp22 = &param0->_length;
*$tmp22 = $tmp21;
// line 365
frost$core$Int64* $tmp23 = &param0->_length;
frost$core$Int64 $tmp24 = *$tmp23;
int64_t $tmp25 = $tmp24.value;
frost$core$Char8* $tmp26 = ((frost$core$Char8*) frostAlloc($tmp25 * 1));
frost$core$Char8** $tmp27 = &param0->data;
*$tmp27 = $tmp26;
// line 366
frost$core$Int64 $tmp28 = (frost$core$Int64) {0};
frost$core$Int64* $tmp29 = &param0->_length;
frost$core$Int64 $tmp30 = *$tmp29;
frost$core$Bit $tmp31 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp32 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp28, $tmp30, $tmp31);
frost$core$Int64 $tmp33 = $tmp32.min;
*(&local0) = $tmp33;
frost$core$Int64 $tmp34 = $tmp32.max;
frost$core$Bit $tmp35 = $tmp32.inclusive;
bool $tmp36 = $tmp35.value;
frost$core$Int64 $tmp37 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp38 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp37);
if ($tmp36) goto block4; else goto block5;
block4:;
int64_t $tmp39 = $tmp33.value;
int64_t $tmp40 = $tmp34.value;
bool $tmp41 = $tmp39 <= $tmp40;
frost$core$Bit $tmp42 = (frost$core$Bit) {$tmp41};
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block1; else goto block2;
block5:;
int64_t $tmp44 = $tmp33.value;
int64_t $tmp45 = $tmp34.value;
bool $tmp46 = $tmp44 < $tmp45;
frost$core$Bit $tmp47 = (frost$core$Bit) {$tmp46};
bool $tmp48 = $tmp47.value;
if ($tmp48) goto block1; else goto block2;
block1:;
// line 367
frost$core$Char8** $tmp49 = &param0->data;
frost$core$Char8* $tmp50 = *$tmp49;
frost$core$Int64 $tmp51 = *(&local0);
frost$core$Int64 $tmp52 = *(&local0);
ITable* $tmp53 = param1->$class->itable;
while ($tmp53->$class != (frost$core$Class*) &frost$collections$ListView$class) {
    $tmp53 = $tmp53->next;
}
$fn55 $tmp54 = $tmp53->methods[0];
frost$core$Object* $tmp56 = $tmp54(param1, $tmp52);
int64_t $tmp57 = $tmp51.value;
$tmp50[$tmp57] = ((frost$core$Char8$wrapper*) $tmp56)->value;
frost$core$Frost$unref$frost$core$Object$Q($tmp56);
goto block3;
block3:;
frost$core$Int64 $tmp58 = *(&local0);
int64_t $tmp59 = $tmp34.value;
int64_t $tmp60 = $tmp58.value;
int64_t $tmp61 = $tmp59 - $tmp60;
frost$core$Int64 $tmp62 = (frost$core$Int64) {$tmp61};
frost$core$UInt64 $tmp63 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp62);
if ($tmp36) goto block7; else goto block8;
block7:;
uint64_t $tmp64 = $tmp63.value;
uint64_t $tmp65 = $tmp38.value;
bool $tmp66 = $tmp64 >= $tmp65;
frost$core$Bit $tmp67 = (frost$core$Bit) {$tmp66};
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block6; else goto block2;
block8:;
uint64_t $tmp69 = $tmp63.value;
uint64_t $tmp70 = $tmp38.value;
bool $tmp71 = $tmp69 > $tmp70;
frost$core$Bit $tmp72 = (frost$core$Bit) {$tmp71};
bool $tmp73 = $tmp72.value;
if ($tmp73) goto block6; else goto block2;
block6:;
int64_t $tmp74 = $tmp58.value;
int64_t $tmp75 = $tmp37.value;
int64_t $tmp76 = $tmp74 + $tmp75;
frost$core$Int64 $tmp77 = (frost$core$Int64) {$tmp76};
*(&local0) = $tmp77;
goto block1;
block2:;
// line 369
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp78 = &param0->owner;
frost$core$String* $tmp79 = *$tmp78;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp79));
frost$core$String** $tmp80 = &param0->owner;
*$tmp80 = ((frost$core$String*) NULL);
return;

}
void frost$core$String$init$frost$collections$ListView$LTfrost$core$Char32$GT(frost$core$String* param0, frost$collections$ListView* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char32 local1;
frost$core$Int64 local2;
// line 328
frost$core$Int64 $tmp81 = (frost$core$Int64) {0};
frost$core$Int64* $tmp82 = &param0->dummy;
*$tmp82 = $tmp81;
// line 373
frost$core$MutableString* $tmp83 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp83);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
frost$core$MutableString* $tmp84 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp84));
*(&local0) = $tmp83;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp83));
// line 374
ITable* $tmp85 = ((frost$collections$Iterable*) param1)->$class->itable;
while ($tmp85->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp85 = $tmp85->next;
}
$fn87 $tmp86 = $tmp85->methods[0];
frost$collections$Iterator* $tmp88 = $tmp86(((frost$collections$Iterable*) param1));
goto block1;
block1:;
ITable* $tmp89 = $tmp88->$class->itable;
while ($tmp89->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp89 = $tmp89->next;
}
$fn91 $tmp90 = $tmp89->methods[0];
frost$core$Bit $tmp92 = $tmp90($tmp88);
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block3; else goto block2;
block2:;
ITable* $tmp94 = $tmp88->$class->itable;
while ($tmp94->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp94 = $tmp94->next;
}
$fn96 $tmp95 = $tmp94->methods[1];
frost$core$Object* $tmp97 = $tmp95($tmp88);
*(&local1) = ((frost$core$Char32$wrapper*) $tmp97)->value;
// line 375
frost$core$MutableString* $tmp98 = *(&local0);
frost$core$Char32 $tmp99 = *(&local1);
frost$core$MutableString$append$frost$core$Char32($tmp98, $tmp99);
frost$core$Frost$unref$frost$core$Object$Q($tmp97);
goto block1;
block3:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp88));
// line 377
frost$core$MutableString* $tmp100 = *(&local0);
frost$core$Int64* $tmp101 = &$tmp100->_length;
frost$core$Int64 $tmp102 = *$tmp101;
int64_t $tmp103 = $tmp102.value;
frost$core$Char8* $tmp104 = ((frost$core$Char8*) frostAlloc($tmp103 * 1));
frost$core$Char8** $tmp105 = &param0->data;
*$tmp105 = $tmp104;
// line 378
frost$core$Int64 $tmp106 = (frost$core$Int64) {0};
frost$core$MutableString* $tmp107 = *(&local0);
frost$core$Int64* $tmp108 = &$tmp107->_length;
frost$core$Int64 $tmp109 = *$tmp108;
frost$core$Bit $tmp110 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp111 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp106, $tmp109, $tmp110);
frost$core$Int64 $tmp112 = $tmp111.min;
*(&local2) = $tmp112;
frost$core$Int64 $tmp113 = $tmp111.max;
frost$core$Bit $tmp114 = $tmp111.inclusive;
bool $tmp115 = $tmp114.value;
frost$core$Int64 $tmp116 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp117 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp116);
if ($tmp115) goto block7; else goto block8;
block7:;
int64_t $tmp118 = $tmp112.value;
int64_t $tmp119 = $tmp113.value;
bool $tmp120 = $tmp118 <= $tmp119;
frost$core$Bit $tmp121 = (frost$core$Bit) {$tmp120};
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block4; else goto block5;
block8:;
int64_t $tmp123 = $tmp112.value;
int64_t $tmp124 = $tmp113.value;
bool $tmp125 = $tmp123 < $tmp124;
frost$core$Bit $tmp126 = (frost$core$Bit) {$tmp125};
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block4; else goto block5;
block4:;
// line 379
frost$core$Char8** $tmp128 = &param0->data;
frost$core$Char8* $tmp129 = *$tmp128;
frost$core$Int64 $tmp130 = *(&local2);
frost$core$MutableString* $tmp131 = *(&local0);
frost$core$Char8** $tmp132 = &$tmp131->data;
frost$core$Char8* $tmp133 = *$tmp132;
frost$core$Int64 $tmp134 = *(&local2);
int64_t $tmp135 = $tmp134.value;
frost$core$Char8 $tmp136 = $tmp133[$tmp135];
int64_t $tmp137 = $tmp130.value;
$tmp129[$tmp137] = $tmp136;
goto block6;
block6:;
frost$core$Int64 $tmp138 = *(&local2);
int64_t $tmp139 = $tmp113.value;
int64_t $tmp140 = $tmp138.value;
int64_t $tmp141 = $tmp139 - $tmp140;
frost$core$Int64 $tmp142 = (frost$core$Int64) {$tmp141};
frost$core$UInt64 $tmp143 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp142);
if ($tmp115) goto block10; else goto block11;
block10:;
uint64_t $tmp144 = $tmp143.value;
uint64_t $tmp145 = $tmp117.value;
bool $tmp146 = $tmp144 >= $tmp145;
frost$core$Bit $tmp147 = (frost$core$Bit) {$tmp146};
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block9; else goto block5;
block11:;
uint64_t $tmp149 = $tmp143.value;
uint64_t $tmp150 = $tmp117.value;
bool $tmp151 = $tmp149 > $tmp150;
frost$core$Bit $tmp152 = (frost$core$Bit) {$tmp151};
bool $tmp153 = $tmp152.value;
if ($tmp153) goto block9; else goto block5;
block9:;
int64_t $tmp154 = $tmp138.value;
int64_t $tmp155 = $tmp116.value;
int64_t $tmp156 = $tmp154 + $tmp155;
frost$core$Int64 $tmp157 = (frost$core$Int64) {$tmp156};
*(&local2) = $tmp157;
goto block4;
block5:;
// line 381
frost$core$MutableString* $tmp158 = *(&local0);
frost$core$Int64* $tmp159 = &$tmp158->_length;
frost$core$Int64 $tmp160 = *$tmp159;
frost$core$Int64* $tmp161 = &param0->_length;
*$tmp161 = $tmp160;
// line 382
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$String*) NULL)));
frost$core$String** $tmp162 = &param0->owner;
frost$core$String* $tmp163 = *$tmp162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
frost$core$String** $tmp164 = &param0->owner;
*$tmp164 = ((frost$core$String*) NULL);
frost$core$MutableString* $tmp165 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp165));
*(&local0) = ((frost$core$MutableString*) NULL);
return;

}
frost$core$String* frost$core$String$get_asString$R$frost$core$String(frost$core$String* param0) {

// line 390
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;

}
frost$core$String* frost$core$String$format$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Char8 local1;
frost$core$Bit local2;
// line 403
frost$core$Bit $tmp166 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s167);
bool $tmp168 = $tmp166.value;
if ($tmp168) goto block2; else goto block3;
block2:;
// line 405
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block3:;
frost$core$Bit $tmp169 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s170);
bool $tmp171 = $tmp169.value;
if ($tmp171) goto block4; else goto block5;
block4:;
// line 408
frost$core$MutableString* $tmp172 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init$frost$core$String($tmp172, &$s173);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
frost$core$MutableString* $tmp174 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp174));
*(&local0) = $tmp172;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp172));
// line 409
frost$collections$ListView* $tmp175 = frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(param0);
ITable* $tmp176 = ((frost$collections$Iterable*) $tmp175)->$class->itable;
while ($tmp176->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp176 = $tmp176->next;
}
$fn178 $tmp177 = $tmp176->methods[0];
frost$collections$Iterator* $tmp179 = $tmp177(((frost$collections$Iterable*) $tmp175));
goto block6;
block6:;
ITable* $tmp180 = $tmp179->$class->itable;
while ($tmp180->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp180 = $tmp180->next;
}
$fn182 $tmp181 = $tmp180->methods[0];
frost$core$Bit $tmp183 = $tmp181($tmp179);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block8; else goto block7;
block7:;
ITable* $tmp185 = $tmp179->$class->itable;
while ($tmp185->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp185 = $tmp185->next;
}
$fn187 $tmp186 = $tmp185->methods[1];
frost$core$Object* $tmp188 = $tmp186($tmp179);
*(&local1) = ((frost$core$Char8$wrapper*) $tmp188)->value;
// line 410
frost$core$Char8 $tmp189 = *(&local1);
frost$core$UInt8 $tmp190 = (frost$core$UInt8) {34};
frost$core$Char8 $tmp191 = frost$core$Char8$init$frost$core$UInt8($tmp190);
frost$core$Bit $tmp192 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp191);
bool $tmp193 = $tmp192.value;
if ($tmp193) goto block10; else goto block11;
block10:;
// line 412
frost$core$MutableString* $tmp194 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp194, &$s195);
goto block9;
block11:;
frost$core$UInt8 $tmp196 = (frost$core$UInt8) {92};
frost$core$Char8 $tmp197 = frost$core$Char8$init$frost$core$UInt8($tmp196);
frost$core$Bit $tmp198 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp197);
bool $tmp199 = $tmp198.value;
if ($tmp199) goto block12; else goto block13;
block12:;
// line 415
frost$core$MutableString* $tmp200 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp200, &$s201);
goto block9;
block13:;
frost$core$UInt8 $tmp202 = (frost$core$UInt8) {10};
frost$core$Char8 $tmp203 = frost$core$Char8$init$frost$core$UInt8($tmp202);
frost$core$Bit $tmp204 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp203);
bool $tmp205 = $tmp204.value;
if ($tmp205) goto block14; else goto block15;
block14:;
// line 418
frost$core$MutableString* $tmp206 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp206, &$s207);
goto block9;
block15:;
frost$core$UInt8 $tmp208 = (frost$core$UInt8) {13};
frost$core$Char8 $tmp209 = frost$core$Char8$init$frost$core$UInt8($tmp208);
frost$core$Bit $tmp210 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp209);
bool $tmp211 = $tmp210.value;
if ($tmp211) goto block16; else goto block17;
block16:;
// line 421
frost$core$MutableString* $tmp212 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp212, &$s213);
goto block9;
block17:;
frost$core$UInt8 $tmp214 = (frost$core$UInt8) {9};
frost$core$Char8 $tmp215 = frost$core$Char8$init$frost$core$UInt8($tmp214);
frost$core$Bit $tmp216 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp189, $tmp215);
bool $tmp217 = $tmp216.value;
if ($tmp217) goto block18; else goto block19;
block18:;
// line 424
frost$core$MutableString* $tmp218 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp218, &$s219);
goto block9;
block19:;
// line 427
frost$core$Char8 $tmp220 = *(&local1);
frost$core$UInt8 $tmp221 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8($tmp220);
frost$core$UInt8 $tmp222 = (frost$core$UInt8) {32};
uint8_t $tmp223 = $tmp221.value;
uint8_t $tmp224 = $tmp222.value;
bool $tmp225 = $tmp223 >= $tmp224;
frost$core$Bit $tmp226 = (frost$core$Bit) {$tmp225};
bool $tmp227 = $tmp226.value;
if ($tmp227) goto block22; else goto block23;
block22:;
frost$core$Char8 $tmp228 = *(&local1);
frost$core$UInt8 $tmp229 = frost$core$Char8$get_asUInt8$R$frost$core$UInt8($tmp228);
frost$core$UInt8 $tmp230 = (frost$core$UInt8) {126};
uint8_t $tmp231 = $tmp229.value;
uint8_t $tmp232 = $tmp230.value;
bool $tmp233 = $tmp231 <= $tmp232;
frost$core$Bit $tmp234 = (frost$core$Bit) {$tmp233};
*(&local2) = $tmp234;
goto block24;
block23:;
*(&local2) = $tmp226;
goto block24;
block24:;
frost$core$Bit $tmp235 = *(&local2);
bool $tmp236 = $tmp235.value;
if ($tmp236) goto block20; else goto block25;
block20:;
// line 428
frost$core$MutableString* $tmp237 = *(&local0);
frost$core$Char8 $tmp238 = *(&local1);
frost$core$MutableString$append$frost$core$Char8($tmp237, $tmp238);
goto block21;
block25:;
// line 1
// line 432
frost$core$MutableString* $tmp239 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp239, &$s240);
goto block21;
block21:;
goto block9;
block9:;
frost$core$Frost$unref$frost$core$Object$Q($tmp188);
goto block6;
block8:;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp179));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp175));
// line 437
frost$core$MutableString* $tmp241 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp241, &$s242);
// line 438
frost$core$MutableString* $tmp243 = *(&local0);
frost$core$String* $tmp244 = frost$core$MutableString$finish$R$frost$core$String($tmp243);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp244));
frost$core$MutableString* $tmp245 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp245));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp244;
block5:;
// line 441
frost$core$Bit $tmp246 = frost$core$Bit$init$builtin_bit(false);
bool $tmp247 = $tmp246.value;
if ($tmp247) goto block26; else goto block27;
block27:;
frost$core$Int64 $tmp248 = (frost$core$Int64) {441};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s249, $tmp248);
abort(); // unreachable
block26:;
// line 442
goto block28;
block28:;
goto block28;
block29:;
goto block1;
block1:;
goto block30;
block30:;

}
void frost$core$String$cleanup(frost$core$String* param0) {

// line 450
frost$core$String** $tmp250 = &param0->owner;
frost$core$String* $tmp251 = *$tmp250;
frost$core$Bit $tmp252 = frost$core$Bit$init$builtin_bit($tmp251 == NULL);
bool $tmp253 = $tmp252.value;
if ($tmp253) goto block1; else goto block2;
block1:;
// line 451
frost$core$Char8** $tmp254 = &param0->data;
frost$core$Char8* $tmp255 = *$tmp254;
frostFree($tmp255);
goto block2;
block2:;
// line 449
frost$core$Immutable$cleanup(((frost$core$Immutable*) param0));
frost$core$String** $tmp256 = &param0->owner;
frost$core$String* $tmp257 = *$tmp256;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp257));
return;

}
frost$collections$ListView* frost$core$String$get_utf8$R$frost$collections$ListView$LTfrost$core$Char8$GT(frost$core$String* param0) {

// line 459
frost$core$String$UTF8List* $tmp258 = (frost$core$String$UTF8List*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$UTF8List$class);
frost$core$String$UTF8List$init$frost$core$String($tmp258, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp258)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp258));
return ((frost$collections$ListView*) $tmp258);

}
frost$collections$Iterator* frost$core$String$get_utf16$R$frost$collections$Iterator$LTfrost$core$Char16$GT(frost$core$String* param0) {

// line 468
frost$core$String$UTF16Iterator* $tmp259 = (frost$core$String$UTF16Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF16Iterator$class);
frost$core$String$UTF16Iterator$init$frost$core$String($tmp259, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp259)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp259));
return ((frost$collections$Iterator*) $tmp259);

}
frost$collections$Iterator* frost$core$String$get_iterator$R$frost$collections$Iterator$LTfrost$core$Char32$GT(frost$core$String* param0) {

// line 476
frost$core$String$UTF32Iterator* $tmp260 = (frost$core$String$UTF32Iterator*) frostObjectAlloc(32, (frost$core$Class*) &frost$core$String$UTF32Iterator$class);
frost$core$String$UTF32Iterator$init$frost$core$String($tmp260, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp260)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp260));
return ((frost$collections$Iterator*) $tmp260);

}
frost$core$Int64 frost$core$String$get_length$R$frost$core$Int64(frost$core$String* param0) {

// line 486
ITable* $tmp261 = ((frost$collections$Iterable*) param0)->$class->itable;
while ($tmp261->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp261 = $tmp261->next;
}
$fn263 $tmp262 = $tmp261->methods[0];
frost$collections$Iterator* $tmp264 = $tmp262(((frost$collections$Iterable*) param0));
ITable* $tmp265 = $tmp264->$class->itable;
while ($tmp265->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp265 = $tmp265->next;
}
$fn267 $tmp266 = $tmp265->methods[2];
frost$core$Int64 $tmp268 = $tmp266($tmp264);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp264));
return $tmp268;

}
frost$core$Int64 frost$core$String$get_byteLength$R$frost$core$Int64(frost$core$String* param0) {

// line 493
frost$core$Int64* $tmp269 = &param0->_length;
frost$core$Int64 $tmp270 = *$tmp269;
return $tmp270;

}
frost$core$Bit frost$core$String$startsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 497
frost$core$Int64* $tmp271 = &param0->_length;
frost$core$Int64 $tmp272 = *$tmp271;
frost$core$Int64* $tmp273 = &param1->_length;
frost$core$Int64 $tmp274 = *$tmp273;
int64_t $tmp275 = $tmp272.value;
int64_t $tmp276 = $tmp274.value;
bool $tmp277 = $tmp275 < $tmp276;
frost$core$Bit $tmp278 = (frost$core$Bit) {$tmp277};
bool $tmp279 = $tmp278.value;
if ($tmp279) goto block1; else goto block2;
block1:;
// line 498
frost$core$Bit $tmp280 = frost$core$Bit$init$builtin_bit(false);
return $tmp280;
block2:;
// line 500
frost$core$Int64 $tmp281 = (frost$core$Int64) {0};
frost$core$Int64* $tmp282 = &param1->_length;
frost$core$Int64 $tmp283 = *$tmp282;
frost$core$Bit $tmp284 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp285 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp281, $tmp283, $tmp284);
frost$core$Int64 $tmp286 = $tmp285.min;
*(&local0) = $tmp286;
frost$core$Int64 $tmp287 = $tmp285.max;
frost$core$Bit $tmp288 = $tmp285.inclusive;
bool $tmp289 = $tmp288.value;
frost$core$Int64 $tmp290 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp291 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp290);
if ($tmp289) goto block6; else goto block7;
block6:;
int64_t $tmp292 = $tmp286.value;
int64_t $tmp293 = $tmp287.value;
bool $tmp294 = $tmp292 <= $tmp293;
frost$core$Bit $tmp295 = (frost$core$Bit) {$tmp294};
bool $tmp296 = $tmp295.value;
if ($tmp296) goto block3; else goto block4;
block7:;
int64_t $tmp297 = $tmp286.value;
int64_t $tmp298 = $tmp287.value;
bool $tmp299 = $tmp297 < $tmp298;
frost$core$Bit $tmp300 = (frost$core$Bit) {$tmp299};
bool $tmp301 = $tmp300.value;
if ($tmp301) goto block3; else goto block4;
block3:;
// line 501
frost$core$Char8** $tmp302 = &param0->data;
frost$core$Char8* $tmp303 = *$tmp302;
frost$core$Int64 $tmp304 = *(&local0);
int64_t $tmp305 = $tmp304.value;
frost$core$Char8 $tmp306 = $tmp303[$tmp305];
frost$core$Char8** $tmp307 = &param1->data;
frost$core$Char8* $tmp308 = *$tmp307;
frost$core$Int64 $tmp309 = *(&local0);
int64_t $tmp310 = $tmp309.value;
frost$core$Char8 $tmp311 = $tmp308[$tmp310];
frost$core$Bit $tmp312 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp306, $tmp311);
bool $tmp313 = $tmp312.value;
if ($tmp313) goto block8; else goto block9;
block8:;
// line 502
frost$core$Bit $tmp314 = frost$core$Bit$init$builtin_bit(false);
return $tmp314;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp315 = *(&local0);
int64_t $tmp316 = $tmp287.value;
int64_t $tmp317 = $tmp315.value;
int64_t $tmp318 = $tmp316 - $tmp317;
frost$core$Int64 $tmp319 = (frost$core$Int64) {$tmp318};
frost$core$UInt64 $tmp320 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp319);
if ($tmp289) goto block11; else goto block12;
block11:;
uint64_t $tmp321 = $tmp320.value;
uint64_t $tmp322 = $tmp291.value;
bool $tmp323 = $tmp321 >= $tmp322;
frost$core$Bit $tmp324 = (frost$core$Bit) {$tmp323};
bool $tmp325 = $tmp324.value;
if ($tmp325) goto block10; else goto block4;
block12:;
uint64_t $tmp326 = $tmp320.value;
uint64_t $tmp327 = $tmp291.value;
bool $tmp328 = $tmp326 > $tmp327;
frost$core$Bit $tmp329 = (frost$core$Bit) {$tmp328};
bool $tmp330 = $tmp329.value;
if ($tmp330) goto block10; else goto block4;
block10:;
int64_t $tmp331 = $tmp315.value;
int64_t $tmp332 = $tmp290.value;
int64_t $tmp333 = $tmp331 + $tmp332;
frost$core$Int64 $tmp334 = (frost$core$Int64) {$tmp333};
*(&local0) = $tmp334;
goto block3;
block4:;
// line 505
frost$core$Bit $tmp335 = frost$core$Bit$init$builtin_bit(true);
return $tmp335;

}
frost$core$Bit frost$core$String$endsWith$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 509
frost$core$Int64* $tmp336 = &param0->_length;
frost$core$Int64 $tmp337 = *$tmp336;
frost$core$Int64* $tmp338 = &param1->_length;
frost$core$Int64 $tmp339 = *$tmp338;
int64_t $tmp340 = $tmp337.value;
int64_t $tmp341 = $tmp339.value;
bool $tmp342 = $tmp340 < $tmp341;
frost$core$Bit $tmp343 = (frost$core$Bit) {$tmp342};
bool $tmp344 = $tmp343.value;
if ($tmp344) goto block1; else goto block2;
block1:;
// line 510
frost$core$Bit $tmp345 = frost$core$Bit$init$builtin_bit(false);
return $tmp345;
block2:;
// line 512
frost$core$Int64 $tmp346 = (frost$core$Int64) {0};
frost$core$Int64* $tmp347 = &param1->_length;
frost$core$Int64 $tmp348 = *$tmp347;
frost$core$Bit $tmp349 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp350 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp346, $tmp348, $tmp349);
frost$core$Int64 $tmp351 = $tmp350.min;
*(&local0) = $tmp351;
frost$core$Int64 $tmp352 = $tmp350.max;
frost$core$Bit $tmp353 = $tmp350.inclusive;
bool $tmp354 = $tmp353.value;
frost$core$Int64 $tmp355 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp356 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp355);
if ($tmp354) goto block6; else goto block7;
block6:;
int64_t $tmp357 = $tmp351.value;
int64_t $tmp358 = $tmp352.value;
bool $tmp359 = $tmp357 <= $tmp358;
frost$core$Bit $tmp360 = (frost$core$Bit) {$tmp359};
bool $tmp361 = $tmp360.value;
if ($tmp361) goto block3; else goto block4;
block7:;
int64_t $tmp362 = $tmp351.value;
int64_t $tmp363 = $tmp352.value;
bool $tmp364 = $tmp362 < $tmp363;
frost$core$Bit $tmp365 = (frost$core$Bit) {$tmp364};
bool $tmp366 = $tmp365.value;
if ($tmp366) goto block3; else goto block4;
block3:;
// line 513
frost$core$Char8** $tmp367 = &param0->data;
frost$core$Char8* $tmp368 = *$tmp367;
frost$core$Int64* $tmp369 = &param0->_length;
frost$core$Int64 $tmp370 = *$tmp369;
frost$core$Int64* $tmp371 = &param1->_length;
frost$core$Int64 $tmp372 = *$tmp371;
int64_t $tmp373 = $tmp370.value;
int64_t $tmp374 = $tmp372.value;
int64_t $tmp375 = $tmp373 - $tmp374;
frost$core$Int64 $tmp376 = (frost$core$Int64) {$tmp375};
frost$core$Int64 $tmp377 = *(&local0);
int64_t $tmp378 = $tmp376.value;
int64_t $tmp379 = $tmp377.value;
int64_t $tmp380 = $tmp378 + $tmp379;
frost$core$Int64 $tmp381 = (frost$core$Int64) {$tmp380};
int64_t $tmp382 = $tmp381.value;
frost$core$Char8 $tmp383 = $tmp368[$tmp382];
frost$core$Char8** $tmp384 = &param1->data;
frost$core$Char8* $tmp385 = *$tmp384;
frost$core$Int64 $tmp386 = *(&local0);
int64_t $tmp387 = $tmp386.value;
frost$core$Char8 $tmp388 = $tmp385[$tmp387];
frost$core$Bit $tmp389 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp383, $tmp388);
bool $tmp390 = $tmp389.value;
if ($tmp390) goto block8; else goto block9;
block8:;
// line 514
frost$core$Bit $tmp391 = frost$core$Bit$init$builtin_bit(false);
return $tmp391;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp392 = *(&local0);
int64_t $tmp393 = $tmp352.value;
int64_t $tmp394 = $tmp392.value;
int64_t $tmp395 = $tmp393 - $tmp394;
frost$core$Int64 $tmp396 = (frost$core$Int64) {$tmp395};
frost$core$UInt64 $tmp397 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp396);
if ($tmp354) goto block11; else goto block12;
block11:;
uint64_t $tmp398 = $tmp397.value;
uint64_t $tmp399 = $tmp356.value;
bool $tmp400 = $tmp398 >= $tmp399;
frost$core$Bit $tmp401 = (frost$core$Bit) {$tmp400};
bool $tmp402 = $tmp401.value;
if ($tmp402) goto block10; else goto block4;
block12:;
uint64_t $tmp403 = $tmp397.value;
uint64_t $tmp404 = $tmp356.value;
bool $tmp405 = $tmp403 > $tmp404;
frost$core$Bit $tmp406 = (frost$core$Bit) {$tmp405};
bool $tmp407 = $tmp406.value;
if ($tmp407) goto block10; else goto block4;
block10:;
int64_t $tmp408 = $tmp392.value;
int64_t $tmp409 = $tmp355.value;
int64_t $tmp410 = $tmp408 + $tmp409;
frost$core$Int64 $tmp411 = (frost$core$Int64) {$tmp410};
*(&local0) = $tmp411;
goto block3;
block4:;
// line 517
frost$core$Bit $tmp412 = frost$core$Bit$init$builtin_bit(true);
return $tmp412;

}
frost$core$String* frost$core$String$get_trimmed$R$frost$core$String(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Bit local1;
frost$core$Int64 local2;
frost$core$Bit local3;
// line 526
frost$core$Int64* $tmp413 = &param0->_length;
frost$core$Int64 $tmp414 = *$tmp413;
frost$core$Int64 $tmp415 = (frost$core$Int64) {0};
frost$core$Bit $tmp416 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp414, $tmp415);
bool $tmp417 = $tmp416.value;
if ($tmp417) goto block1; else goto block2;
block1:;
// line 527
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 529
frost$core$Int64 $tmp418 = (frost$core$Int64) {0};
*(&local0) = $tmp418;
// line 530
goto block3;
block3:;
frost$core$Int64 $tmp419 = *(&local0);
frost$core$Int64* $tmp420 = &param0->_length;
frost$core$Int64 $tmp421 = *$tmp420;
int64_t $tmp422 = $tmp419.value;
int64_t $tmp423 = $tmp421.value;
bool $tmp424 = $tmp422 < $tmp423;
frost$core$Bit $tmp425 = (frost$core$Bit) {$tmp424};
bool $tmp426 = $tmp425.value;
if ($tmp426) goto block6; else goto block7;
block6:;
frost$core$Char8** $tmp427 = &param0->data;
frost$core$Char8* $tmp428 = *$tmp427;
frost$core$Int64 $tmp429 = *(&local0);
int64_t $tmp430 = $tmp429.value;
frost$core$Char8 $tmp431 = $tmp428[$tmp430];
frost$core$Bit $tmp432 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp431);
*(&local1) = $tmp432;
goto block8;
block7:;
*(&local1) = $tmp425;
goto block8;
block8:;
frost$core$Bit $tmp433 = *(&local1);
bool $tmp434 = $tmp433.value;
if ($tmp434) goto block4; else goto block5;
block4:;
// line 531
frost$core$Int64 $tmp435 = *(&local0);
frost$core$Int64 $tmp436 = (frost$core$Int64) {1};
int64_t $tmp437 = $tmp435.value;
int64_t $tmp438 = $tmp436.value;
int64_t $tmp439 = $tmp437 + $tmp438;
frost$core$Int64 $tmp440 = (frost$core$Int64) {$tmp439};
*(&local0) = $tmp440;
goto block3;
block5:;
// line 534
frost$core$Int64* $tmp441 = &param0->_length;
frost$core$Int64 $tmp442 = *$tmp441;
frost$core$Int64 $tmp443 = (frost$core$Int64) {1};
int64_t $tmp444 = $tmp442.value;
int64_t $tmp445 = $tmp443.value;
int64_t $tmp446 = $tmp444 - $tmp445;
frost$core$Int64 $tmp447 = (frost$core$Int64) {$tmp446};
*(&local2) = $tmp447;
// line 535
goto block9;
block9:;
frost$core$Int64 $tmp448 = *(&local2);
frost$core$Int64 $tmp449 = *(&local0);
int64_t $tmp450 = $tmp448.value;
int64_t $tmp451 = $tmp449.value;
bool $tmp452 = $tmp450 >= $tmp451;
frost$core$Bit $tmp453 = (frost$core$Bit) {$tmp452};
bool $tmp454 = $tmp453.value;
if ($tmp454) goto block12; else goto block13;
block12:;
frost$core$Char8** $tmp455 = &param0->data;
frost$core$Char8* $tmp456 = *$tmp455;
frost$core$Int64 $tmp457 = *(&local2);
int64_t $tmp458 = $tmp457.value;
frost$core$Char8 $tmp459 = $tmp456[$tmp458];
frost$core$Bit $tmp460 = frost$core$Char8$isWhitespace$R$frost$core$Bit($tmp459);
*(&local3) = $tmp460;
goto block14;
block13:;
*(&local3) = $tmp453;
goto block14;
block14:;
frost$core$Bit $tmp461 = *(&local3);
bool $tmp462 = $tmp461.value;
if ($tmp462) goto block10; else goto block11;
block10:;
// line 536
frost$core$Int64 $tmp463 = *(&local2);
frost$core$Int64 $tmp464 = (frost$core$Int64) {1};
int64_t $tmp465 = $tmp463.value;
int64_t $tmp466 = $tmp464.value;
int64_t $tmp467 = $tmp465 - $tmp466;
frost$core$Int64 $tmp468 = (frost$core$Int64) {$tmp467};
*(&local2) = $tmp468;
goto block9;
block11:;
// line 539
frost$core$Int64 $tmp469 = *(&local0);
frost$core$String$Index $tmp470 = frost$core$String$Index$init$frost$core$Int64($tmp469);
frost$core$Int64 $tmp471 = *(&local2);
frost$core$String$Index $tmp472 = frost$core$String$Index$init$frost$core$Int64($tmp471);
frost$core$Bit $tmp473 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$String$Index$GT $tmp474 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp470, $tmp472, $tmp473);
frost$core$String* $tmp475 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp474);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp475));
return $tmp475;

}
frost$core$String* frost$core$String$$ADD$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1) {

frost$core$Char8* local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 546
frost$core$Int64* $tmp476 = &param0->_length;
frost$core$Int64 $tmp477 = *$tmp476;
frost$core$Int64* $tmp478 = &param1->_length;
frost$core$Int64 $tmp479 = *$tmp478;
int64_t $tmp480 = $tmp477.value;
int64_t $tmp481 = $tmp479.value;
int64_t $tmp482 = $tmp480 + $tmp481;
frost$core$Int64 $tmp483 = (frost$core$Int64) {$tmp482};
int64_t $tmp484 = $tmp483.value;
frost$core$Char8* $tmp485 = ((frost$core$Char8*) frostAlloc($tmp484 * 1));
*(&local0) = $tmp485;
// line 547
frost$core$Int64 $tmp486 = (frost$core$Int64) {0};
frost$core$Int64* $tmp487 = &param0->_length;
frost$core$Int64 $tmp488 = *$tmp487;
frost$core$Bit $tmp489 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp490 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp486, $tmp488, $tmp489);
frost$core$Int64 $tmp491 = $tmp490.min;
*(&local1) = $tmp491;
frost$core$Int64 $tmp492 = $tmp490.max;
frost$core$Bit $tmp493 = $tmp490.inclusive;
bool $tmp494 = $tmp493.value;
frost$core$Int64 $tmp495 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp496 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp495);
if ($tmp494) goto block4; else goto block5;
block4:;
int64_t $tmp497 = $tmp491.value;
int64_t $tmp498 = $tmp492.value;
bool $tmp499 = $tmp497 <= $tmp498;
frost$core$Bit $tmp500 = (frost$core$Bit) {$tmp499};
bool $tmp501 = $tmp500.value;
if ($tmp501) goto block1; else goto block2;
block5:;
int64_t $tmp502 = $tmp491.value;
int64_t $tmp503 = $tmp492.value;
bool $tmp504 = $tmp502 < $tmp503;
frost$core$Bit $tmp505 = (frost$core$Bit) {$tmp504};
bool $tmp506 = $tmp505.value;
if ($tmp506) goto block1; else goto block2;
block1:;
// line 548
frost$core$Char8* $tmp507 = *(&local0);
frost$core$Int64 $tmp508 = *(&local1);
frost$core$Char8** $tmp509 = &param0->data;
frost$core$Char8* $tmp510 = *$tmp509;
frost$core$Int64 $tmp511 = *(&local1);
int64_t $tmp512 = $tmp511.value;
frost$core$Char8 $tmp513 = $tmp510[$tmp512];
int64_t $tmp514 = $tmp508.value;
$tmp507[$tmp514] = $tmp513;
goto block3;
block3:;
frost$core$Int64 $tmp515 = *(&local1);
int64_t $tmp516 = $tmp492.value;
int64_t $tmp517 = $tmp515.value;
int64_t $tmp518 = $tmp516 - $tmp517;
frost$core$Int64 $tmp519 = (frost$core$Int64) {$tmp518};
frost$core$UInt64 $tmp520 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp519);
if ($tmp494) goto block7; else goto block8;
block7:;
uint64_t $tmp521 = $tmp520.value;
uint64_t $tmp522 = $tmp496.value;
bool $tmp523 = $tmp521 >= $tmp522;
frost$core$Bit $tmp524 = (frost$core$Bit) {$tmp523};
bool $tmp525 = $tmp524.value;
if ($tmp525) goto block6; else goto block2;
block8:;
uint64_t $tmp526 = $tmp520.value;
uint64_t $tmp527 = $tmp496.value;
bool $tmp528 = $tmp526 > $tmp527;
frost$core$Bit $tmp529 = (frost$core$Bit) {$tmp528};
bool $tmp530 = $tmp529.value;
if ($tmp530) goto block6; else goto block2;
block6:;
int64_t $tmp531 = $tmp515.value;
int64_t $tmp532 = $tmp495.value;
int64_t $tmp533 = $tmp531 + $tmp532;
frost$core$Int64 $tmp534 = (frost$core$Int64) {$tmp533};
*(&local1) = $tmp534;
goto block1;
block2:;
// line 550
frost$core$Int64 $tmp535 = (frost$core$Int64) {0};
frost$core$Int64* $tmp536 = &param1->_length;
frost$core$Int64 $tmp537 = *$tmp536;
frost$core$Bit $tmp538 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp539 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp535, $tmp537, $tmp538);
frost$core$Int64 $tmp540 = $tmp539.min;
*(&local2) = $tmp540;
frost$core$Int64 $tmp541 = $tmp539.max;
frost$core$Bit $tmp542 = $tmp539.inclusive;
bool $tmp543 = $tmp542.value;
frost$core$Int64 $tmp544 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp545 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp544);
if ($tmp543) goto block12; else goto block13;
block12:;
int64_t $tmp546 = $tmp540.value;
int64_t $tmp547 = $tmp541.value;
bool $tmp548 = $tmp546 <= $tmp547;
frost$core$Bit $tmp549 = (frost$core$Bit) {$tmp548};
bool $tmp550 = $tmp549.value;
if ($tmp550) goto block9; else goto block10;
block13:;
int64_t $tmp551 = $tmp540.value;
int64_t $tmp552 = $tmp541.value;
bool $tmp553 = $tmp551 < $tmp552;
frost$core$Bit $tmp554 = (frost$core$Bit) {$tmp553};
bool $tmp555 = $tmp554.value;
if ($tmp555) goto block9; else goto block10;
block9:;
// line 551
frost$core$Char8* $tmp556 = *(&local0);
frost$core$Int64* $tmp557 = &param0->_length;
frost$core$Int64 $tmp558 = *$tmp557;
frost$core$Int64 $tmp559 = *(&local2);
int64_t $tmp560 = $tmp558.value;
int64_t $tmp561 = $tmp559.value;
int64_t $tmp562 = $tmp560 + $tmp561;
frost$core$Int64 $tmp563 = (frost$core$Int64) {$tmp562};
frost$core$Char8** $tmp564 = &param1->data;
frost$core$Char8* $tmp565 = *$tmp564;
frost$core$Int64 $tmp566 = *(&local2);
int64_t $tmp567 = $tmp566.value;
frost$core$Char8 $tmp568 = $tmp565[$tmp567];
int64_t $tmp569 = $tmp563.value;
$tmp556[$tmp569] = $tmp568;
goto block11;
block11:;
frost$core$Int64 $tmp570 = *(&local2);
int64_t $tmp571 = $tmp541.value;
int64_t $tmp572 = $tmp570.value;
int64_t $tmp573 = $tmp571 - $tmp572;
frost$core$Int64 $tmp574 = (frost$core$Int64) {$tmp573};
frost$core$UInt64 $tmp575 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp574);
if ($tmp543) goto block15; else goto block16;
block15:;
uint64_t $tmp576 = $tmp575.value;
uint64_t $tmp577 = $tmp545.value;
bool $tmp578 = $tmp576 >= $tmp577;
frost$core$Bit $tmp579 = (frost$core$Bit) {$tmp578};
bool $tmp580 = $tmp579.value;
if ($tmp580) goto block14; else goto block10;
block16:;
uint64_t $tmp581 = $tmp575.value;
uint64_t $tmp582 = $tmp545.value;
bool $tmp583 = $tmp581 > $tmp582;
frost$core$Bit $tmp584 = (frost$core$Bit) {$tmp583};
bool $tmp585 = $tmp584.value;
if ($tmp585) goto block14; else goto block10;
block14:;
int64_t $tmp586 = $tmp570.value;
int64_t $tmp587 = $tmp544.value;
int64_t $tmp588 = $tmp586 + $tmp587;
frost$core$Int64 $tmp589 = (frost$core$Int64) {$tmp588};
*(&local2) = $tmp589;
goto block9;
block10:;
// line 553
frost$core$String* $tmp590 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8* $tmp591 = *(&local0);
frost$core$Int64* $tmp592 = &param0->_length;
frost$core$Int64 $tmp593 = *$tmp592;
frost$core$Int64* $tmp594 = &param1->_length;
frost$core$Int64 $tmp595 = *$tmp594;
int64_t $tmp596 = $tmp593.value;
int64_t $tmp597 = $tmp595.value;
int64_t $tmp598 = $tmp596 + $tmp597;
frost$core$Int64 $tmp599 = (frost$core$Int64) {$tmp598};
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64($tmp590, $tmp591, $tmp599);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp590));
return $tmp590;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$R$frost$core$String(frost$core$String* param0, frost$core$Object* param1) {

// line 561
$fn601 $tmp600 = ($fn601) param1->$class->vtable[0];
frost$core$String* $tmp602 = $tmp600(param1);
frost$core$String* $tmp603 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp602);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp603));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp602));
return $tmp603;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp604 = (frost$core$Int64) {0};
int64_t $tmp605 = param1.value;
int64_t $tmp606 = $tmp604.value;
bool $tmp607 = $tmp605 >= $tmp606;
frost$core$Bit $tmp608 = (frost$core$Bit) {$tmp607};
bool $tmp609 = $tmp608.value;
if ($tmp609) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp610 = (frost$core$Int64) {568};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s611, $tmp610, &$s612);
abort(); // unreachable
block1:;
// line 569
frost$core$MutableString* $tmp613 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp613);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
frost$core$MutableString* $tmp614 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp614));
*(&local0) = $tmp613;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp613));
// line 570
frost$core$Int64 $tmp615 = (frost$core$Int64) {0};
frost$core$Bit $tmp616 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp617 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp615, param1, $tmp616);
frost$core$Int64 $tmp618 = $tmp617.min;
*(&local1) = $tmp618;
frost$core$Int64 $tmp619 = $tmp617.max;
frost$core$Bit $tmp620 = $tmp617.inclusive;
bool $tmp621 = $tmp620.value;
frost$core$Int64 $tmp622 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp623 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp622);
if ($tmp621) goto block6; else goto block7;
block6:;
int64_t $tmp624 = $tmp618.value;
int64_t $tmp625 = $tmp619.value;
bool $tmp626 = $tmp624 <= $tmp625;
frost$core$Bit $tmp627 = (frost$core$Bit) {$tmp626};
bool $tmp628 = $tmp627.value;
if ($tmp628) goto block3; else goto block4;
block7:;
int64_t $tmp629 = $tmp618.value;
int64_t $tmp630 = $tmp619.value;
bool $tmp631 = $tmp629 < $tmp630;
frost$core$Bit $tmp632 = (frost$core$Bit) {$tmp631};
bool $tmp633 = $tmp632.value;
if ($tmp633) goto block3; else goto block4;
block3:;
// line 571
frost$core$MutableString* $tmp634 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp634, param0);
goto block5;
block5:;
frost$core$Int64 $tmp635 = *(&local1);
int64_t $tmp636 = $tmp619.value;
int64_t $tmp637 = $tmp635.value;
int64_t $tmp638 = $tmp636 - $tmp637;
frost$core$Int64 $tmp639 = (frost$core$Int64) {$tmp638};
frost$core$UInt64 $tmp640 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp639);
if ($tmp621) goto block9; else goto block10;
block9:;
uint64_t $tmp641 = $tmp640.value;
uint64_t $tmp642 = $tmp623.value;
bool $tmp643 = $tmp641 >= $tmp642;
frost$core$Bit $tmp644 = (frost$core$Bit) {$tmp643};
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block8; else goto block4;
block10:;
uint64_t $tmp646 = $tmp640.value;
uint64_t $tmp647 = $tmp623.value;
bool $tmp648 = $tmp646 > $tmp647;
frost$core$Bit $tmp649 = (frost$core$Bit) {$tmp648};
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block8; else goto block4;
block8:;
int64_t $tmp651 = $tmp635.value;
int64_t $tmp652 = $tmp622.value;
int64_t $tmp653 = $tmp651 + $tmp652;
frost$core$Int64 $tmp654 = (frost$core$Int64) {$tmp653};
*(&local1) = $tmp654;
goto block3;
block4:;
// line 573
frost$core$MutableString* $tmp655 = *(&local0);
frost$core$String* $tmp656 = frost$core$MutableString$finish$R$frost$core$String($tmp655);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp656));
frost$core$MutableString* $tmp657 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp657));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp656;

}
frost$core$String* frost$core$String$$MUL$frost$core$Int64$frost$core$String$R$frost$core$String(frost$core$Int64 param0, frost$core$String* param1) {

frost$core$MutableString* local0 = NULL;
frost$core$Int64 local1;
frost$core$Int64 $tmp658 = (frost$core$Int64) {0};
int64_t $tmp659 = param0.value;
int64_t $tmp660 = $tmp658.value;
bool $tmp661 = $tmp659 >= $tmp660;
frost$core$Bit $tmp662 = (frost$core$Bit) {$tmp661};
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp664 = (frost$core$Int64) {581};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s665, $tmp664, &$s666);
abort(); // unreachable
block1:;
// line 582
frost$core$MutableString* $tmp667 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp667);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
frost$core$MutableString* $tmp668 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp668));
*(&local0) = $tmp667;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp667));
// line 583
frost$core$Int64 $tmp669 = (frost$core$Int64) {0};
frost$core$Bit $tmp670 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp671 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp669, param0, $tmp670);
frost$core$Int64 $tmp672 = $tmp671.min;
*(&local1) = $tmp672;
frost$core$Int64 $tmp673 = $tmp671.max;
frost$core$Bit $tmp674 = $tmp671.inclusive;
bool $tmp675 = $tmp674.value;
frost$core$Int64 $tmp676 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp677 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp676);
if ($tmp675) goto block6; else goto block7;
block6:;
int64_t $tmp678 = $tmp672.value;
int64_t $tmp679 = $tmp673.value;
bool $tmp680 = $tmp678 <= $tmp679;
frost$core$Bit $tmp681 = (frost$core$Bit) {$tmp680};
bool $tmp682 = $tmp681.value;
if ($tmp682) goto block3; else goto block4;
block7:;
int64_t $tmp683 = $tmp672.value;
int64_t $tmp684 = $tmp673.value;
bool $tmp685 = $tmp683 < $tmp684;
frost$core$Bit $tmp686 = (frost$core$Bit) {$tmp685};
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block3; else goto block4;
block3:;
// line 584
frost$core$MutableString* $tmp688 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp688, param1);
goto block5;
block5:;
frost$core$Int64 $tmp689 = *(&local1);
int64_t $tmp690 = $tmp673.value;
int64_t $tmp691 = $tmp689.value;
int64_t $tmp692 = $tmp690 - $tmp691;
frost$core$Int64 $tmp693 = (frost$core$Int64) {$tmp692};
frost$core$UInt64 $tmp694 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp693);
if ($tmp675) goto block9; else goto block10;
block9:;
uint64_t $tmp695 = $tmp694.value;
uint64_t $tmp696 = $tmp677.value;
bool $tmp697 = $tmp695 >= $tmp696;
frost$core$Bit $tmp698 = (frost$core$Bit) {$tmp697};
bool $tmp699 = $tmp698.value;
if ($tmp699) goto block8; else goto block4;
block10:;
uint64_t $tmp700 = $tmp694.value;
uint64_t $tmp701 = $tmp677.value;
bool $tmp702 = $tmp700 > $tmp701;
frost$core$Bit $tmp703 = (frost$core$Bit) {$tmp702};
bool $tmp704 = $tmp703.value;
if ($tmp704) goto block8; else goto block4;
block8:;
int64_t $tmp705 = $tmp689.value;
int64_t $tmp706 = $tmp676.value;
int64_t $tmp707 = $tmp705 + $tmp706;
frost$core$Int64 $tmp708 = (frost$core$Int64) {$tmp707};
*(&local1) = $tmp708;
goto block3;
block4:;
// line 586
frost$core$MutableString* $tmp709 = *(&local0);
frost$core$String* $tmp710 = frost$core$MutableString$finish$R$frost$core$String($tmp709);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp710));
frost$core$MutableString* $tmp711 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp711));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp710;

}
frost$core$String* frost$core$String$$ADD$frost$core$Object$frost$core$String$R$frost$core$String(frost$core$Object* param0, frost$core$String* param1) {

// line 595
$fn713 $tmp712 = ($fn713) param0->$class->vtable[0];
frost$core$String* $tmp714 = $tmp712(param0);
frost$core$String* $tmp715 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp714, param1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp715));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp714));
return $tmp715;

}
frost$core$Bit frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$Int64 local0;
// line 608
frost$core$Int64* $tmp716 = &param0->_length;
frost$core$Int64 $tmp717 = *$tmp716;
frost$core$Int64* $tmp718 = &param1->_length;
frost$core$Int64 $tmp719 = *$tmp718;
int64_t $tmp720 = $tmp717.value;
int64_t $tmp721 = $tmp719.value;
bool $tmp722 = $tmp720 != $tmp721;
frost$core$Bit $tmp723 = (frost$core$Bit) {$tmp722};
bool $tmp724 = $tmp723.value;
if ($tmp724) goto block1; else goto block2;
block1:;
// line 609
frost$core$Bit $tmp725 = frost$core$Bit$init$builtin_bit(false);
return $tmp725;
block2:;
// line 611
frost$core$Int64 $tmp726 = (frost$core$Int64) {0};
frost$core$Int64* $tmp727 = &param0->_length;
frost$core$Int64 $tmp728 = *$tmp727;
frost$core$Bit $tmp729 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp730 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp726, $tmp728, $tmp729);
frost$core$Int64 $tmp731 = $tmp730.min;
*(&local0) = $tmp731;
frost$core$Int64 $tmp732 = $tmp730.max;
frost$core$Bit $tmp733 = $tmp730.inclusive;
bool $tmp734 = $tmp733.value;
frost$core$Int64 $tmp735 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp736 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp735);
if ($tmp734) goto block6; else goto block7;
block6:;
int64_t $tmp737 = $tmp731.value;
int64_t $tmp738 = $tmp732.value;
bool $tmp739 = $tmp737 <= $tmp738;
frost$core$Bit $tmp740 = (frost$core$Bit) {$tmp739};
bool $tmp741 = $tmp740.value;
if ($tmp741) goto block3; else goto block4;
block7:;
int64_t $tmp742 = $tmp731.value;
int64_t $tmp743 = $tmp732.value;
bool $tmp744 = $tmp742 < $tmp743;
frost$core$Bit $tmp745 = (frost$core$Bit) {$tmp744};
bool $tmp746 = $tmp745.value;
if ($tmp746) goto block3; else goto block4;
block3:;
// line 612
frost$core$Char8** $tmp747 = &param0->data;
frost$core$Char8* $tmp748 = *$tmp747;
frost$core$Int64 $tmp749 = *(&local0);
int64_t $tmp750 = $tmp749.value;
frost$core$Char8 $tmp751 = $tmp748[$tmp750];
frost$core$Char8** $tmp752 = &param1->data;
frost$core$Char8* $tmp753 = *$tmp752;
frost$core$Int64 $tmp754 = *(&local0);
int64_t $tmp755 = $tmp754.value;
frost$core$Char8 $tmp756 = $tmp753[$tmp755];
frost$core$Bit $tmp757 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp751, $tmp756);
bool $tmp758 = $tmp757.value;
if ($tmp758) goto block8; else goto block9;
block8:;
// line 613
frost$core$Bit $tmp759 = frost$core$Bit$init$builtin_bit(false);
return $tmp759;
block9:;
goto block5;
block5:;
frost$core$Int64 $tmp760 = *(&local0);
int64_t $tmp761 = $tmp732.value;
int64_t $tmp762 = $tmp760.value;
int64_t $tmp763 = $tmp761 - $tmp762;
frost$core$Int64 $tmp764 = (frost$core$Int64) {$tmp763};
frost$core$UInt64 $tmp765 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp764);
if ($tmp734) goto block11; else goto block12;
block11:;
uint64_t $tmp766 = $tmp765.value;
uint64_t $tmp767 = $tmp736.value;
bool $tmp768 = $tmp766 >= $tmp767;
frost$core$Bit $tmp769 = (frost$core$Bit) {$tmp768};
bool $tmp770 = $tmp769.value;
if ($tmp770) goto block10; else goto block4;
block12:;
uint64_t $tmp771 = $tmp765.value;
uint64_t $tmp772 = $tmp736.value;
bool $tmp773 = $tmp771 > $tmp772;
frost$core$Bit $tmp774 = (frost$core$Bit) {$tmp773};
bool $tmp775 = $tmp774.value;
if ($tmp775) goto block10; else goto block4;
block10:;
int64_t $tmp776 = $tmp760.value;
int64_t $tmp777 = $tmp735.value;
int64_t $tmp778 = $tmp776 + $tmp777;
frost$core$Int64 $tmp779 = (frost$core$Int64) {$tmp778};
*(&local0) = $tmp779;
goto block3;
block4:;
// line 616
frost$core$Bit $tmp780 = frost$core$Bit$init$builtin_bit(true);
return $tmp780;

}
frost$core$Bit frost$core$String$$GT$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$Bit local2;
frost$core$Char32 local3;
frost$core$Char32 local4;
// line 627
frost$core$String$Index $tmp781 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp781;
// line 628
frost$core$String$Index $tmp782 = frost$core$String$get_start$R$frost$core$String$Index(param1);
*(&local1) = $tmp782;
// line 629
goto block1;
block1:;
frost$core$String$Index $tmp783 = *(&local0);
frost$core$String$Index$wrapper* $tmp784;
$tmp784 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp784->value = $tmp783;
frost$core$String$Index $tmp785 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp786;
$tmp786 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp786->value = $tmp785;
ITable* $tmp787 = ((frost$core$Comparable*) $tmp784)->$class->itable;
while ($tmp787->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp787 = $tmp787->next;
}
$fn789 $tmp788 = $tmp787->methods[1];
frost$core$Bit $tmp790 = $tmp788(((frost$core$Comparable*) $tmp784), ((frost$core$Comparable*) $tmp786));
bool $tmp791 = $tmp790.value;
if ($tmp791) goto block4; else goto block5;
block4:;
frost$core$String$Index $tmp792 = *(&local1);
frost$core$String$Index$wrapper* $tmp793;
$tmp793 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp793->value = $tmp792;
frost$core$String$Index $tmp794 = frost$core$String$get_end$R$frost$core$String$Index(param1);
frost$core$String$Index$wrapper* $tmp795;
$tmp795 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp795->value = $tmp794;
ITable* $tmp796 = ((frost$core$Comparable*) $tmp793)->$class->itable;
while ($tmp796->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp796 = $tmp796->next;
}
$fn798 $tmp797 = $tmp796->methods[1];
frost$core$Bit $tmp799 = $tmp797(((frost$core$Comparable*) $tmp793), ((frost$core$Comparable*) $tmp795));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp795)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp793)));
*(&local2) = $tmp799;
goto block6;
block5:;
*(&local2) = $tmp790;
goto block6;
block6:;
frost$core$Bit $tmp800 = *(&local2);
bool $tmp801 = $tmp800.value;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp786)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Comparable*) $tmp784)));
if ($tmp801) goto block2; else goto block3;
block2:;
// line 630
frost$core$String$Index $tmp802 = *(&local0);
frost$core$Char32 $tmp803 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp802);
*(&local3) = $tmp803;
// line 631
frost$core$String$Index $tmp804 = *(&local1);
frost$core$Char32 $tmp805 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param1, $tmp804);
*(&local4) = $tmp805;
// line 632
frost$core$Char32 $tmp806 = *(&local3);
frost$core$Char32 $tmp807 = *(&local4);
frost$core$Bit $tmp808 = frost$core$Char32$$EQ$frost$core$Char32$R$frost$core$Bit($tmp806, $tmp807);
bool $tmp809 = $tmp808.value;
if ($tmp809) goto block7; else goto block8;
block7:;
// line 633
frost$core$String$Index $tmp810 = *(&local0);
frost$core$String$Index $tmp811 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp810);
*(&local0) = $tmp811;
// line 634
frost$core$String$Index $tmp812 = *(&local1);
frost$core$String$Index $tmp813 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param1, $tmp812);
*(&local1) = $tmp813;
// line 635
goto block1;
block8:;
// line 637
frost$core$Char32 $tmp814 = *(&local3);
frost$core$Char32 $tmp815 = *(&local4);
frost$core$Bit $tmp816 = frost$core$Char32$$GT$frost$core$Char32$R$frost$core$Bit($tmp814, $tmp815);
return $tmp816;
block3:;
// line 639
frost$core$String$Index $tmp817 = *(&local0);
frost$core$String$Index$wrapper* $tmp818;
$tmp818 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp818->value = $tmp817;
frost$core$String$Index $tmp819 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$wrapper* $tmp820;
$tmp820 = (frost$core$String$Index$wrapper*) frostObjectAlloc(24, (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp820->value = $tmp819;
ITable* $tmp821 = ((frost$core$Equatable*) $tmp818)->$class->itable;
while ($tmp821->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp821 = $tmp821->next;
}
$fn823 $tmp822 = $tmp821->methods[1];
frost$core$Bit $tmp824 = $tmp822(((frost$core$Equatable*) $tmp818), ((frost$core$Equatable*) $tmp820));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp820)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) ((frost$core$Equatable*) $tmp818)));
return $tmp824;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
frost$core$Char8 local1;
frost$core$Int32 local2;
// line 646
frost$core$Int64 $tmp825 = param1.value;
*(&local0) = $tmp825;
// line 647
frost$core$Char8** $tmp826 = &param0->data;
frost$core$Char8* $tmp827 = *$tmp826;
frost$core$Int64 $tmp828 = *(&local0);
int64_t $tmp829 = $tmp828.value;
frost$core$Char8 $tmp830 = $tmp827[$tmp829];
*(&local1) = $tmp830;
// line 648
frost$core$Char8 $tmp831 = *(&local1);
frost$core$Int32 $tmp832 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp831);
*(&local2) = $tmp832;
// line 649
frost$core$Char8 $tmp833 = *(&local1);
uint8_t $tmp834 = $tmp833.value;
int64_t $tmp835 = ((int64_t) $tmp834) & 255;
bool $tmp836 = $tmp835 < 192;
frost$core$Bit $tmp837 = frost$core$Bit$init$builtin_bit($tmp836);
bool $tmp838 = $tmp837.value;
if ($tmp838) goto block1; else goto block2;
block1:;
// line 650
frost$core$Int32 $tmp839 = *(&local2);
frost$core$Char32 $tmp840 = frost$core$Char32$init$frost$core$Int32($tmp839);
return $tmp840;
block2:;
// line 652
frost$core$Char8 $tmp841 = *(&local1);
uint8_t $tmp842 = $tmp841.value;
int64_t $tmp843 = ((int64_t) $tmp842) & 255;
bool $tmp844 = $tmp843 < 224;
frost$core$Bit $tmp845 = frost$core$Bit$init$builtin_bit($tmp844);
bool $tmp846 = $tmp845.value;
if ($tmp846) goto block3; else goto block4;
block3:;
// line 653
frost$core$Int64 $tmp847 = *(&local0);
frost$core$Int64 $tmp848 = (frost$core$Int64) {1};
int64_t $tmp849 = $tmp847.value;
int64_t $tmp850 = $tmp848.value;
int64_t $tmp851 = $tmp849 + $tmp850;
frost$core$Int64 $tmp852 = (frost$core$Int64) {$tmp851};
frost$core$Int64* $tmp853 = &param0->_length;
frost$core$Int64 $tmp854 = *$tmp853;
int64_t $tmp855 = $tmp852.value;
int64_t $tmp856 = $tmp854.value;
bool $tmp857 = $tmp855 < $tmp856;
frost$core$Bit $tmp858 = (frost$core$Bit) {$tmp857};
bool $tmp859 = $tmp858.value;
if ($tmp859) goto block5; else goto block6;
block6:;
frost$core$Int64 $tmp860 = (frost$core$Int64) {653};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s861, $tmp860);
abort(); // unreachable
block5:;
// line 654
frost$core$Int32 $tmp862 = *(&local2);
frost$core$Int32 $tmp863 = (frost$core$Int32) {31};
frost$core$Int32 $tmp864 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp862, $tmp863);
frost$core$Int32 $tmp865 = (frost$core$Int32) {6};
frost$core$Int32 $tmp866 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp864, $tmp865);
frost$core$Char8** $tmp867 = &param0->data;
frost$core$Char8* $tmp868 = *$tmp867;
frost$core$Int64 $tmp869 = *(&local0);
frost$core$Int64 $tmp870 = (frost$core$Int64) {1};
int64_t $tmp871 = $tmp869.value;
int64_t $tmp872 = $tmp870.value;
int64_t $tmp873 = $tmp871 + $tmp872;
frost$core$Int64 $tmp874 = (frost$core$Int64) {$tmp873};
int64_t $tmp875 = $tmp874.value;
frost$core$Char8 $tmp876 = $tmp868[$tmp875];
frost$core$Int32 $tmp877 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp876);
frost$core$Int32 $tmp878 = (frost$core$Int32) {63};
frost$core$Int32 $tmp879 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp877, $tmp878);
int32_t $tmp880 = $tmp866.value;
int32_t $tmp881 = $tmp879.value;
int32_t $tmp882 = $tmp880 + $tmp881;
frost$core$Int32 $tmp883 = (frost$core$Int32) {$tmp882};
*(&local2) = $tmp883;
// line 655
frost$core$Int32 $tmp884 = *(&local2);
frost$core$Char32 $tmp885 = frost$core$Char32$init$frost$core$Int32($tmp884);
return $tmp885;
block4:;
// line 657
frost$core$Char8 $tmp886 = *(&local1);
uint8_t $tmp887 = $tmp886.value;
int64_t $tmp888 = ((int64_t) $tmp887) & 255;
bool $tmp889 = $tmp888 < 240;
frost$core$Bit $tmp890 = frost$core$Bit$init$builtin_bit($tmp889);
bool $tmp891 = $tmp890.value;
if ($tmp891) goto block7; else goto block8;
block7:;
// line 658
frost$core$Int64 $tmp892 = *(&local0);
frost$core$Int64 $tmp893 = (frost$core$Int64) {2};
int64_t $tmp894 = $tmp892.value;
int64_t $tmp895 = $tmp893.value;
int64_t $tmp896 = $tmp894 + $tmp895;
frost$core$Int64 $tmp897 = (frost$core$Int64) {$tmp896};
frost$core$Int64* $tmp898 = &param0->_length;
frost$core$Int64 $tmp899 = *$tmp898;
int64_t $tmp900 = $tmp897.value;
int64_t $tmp901 = $tmp899.value;
bool $tmp902 = $tmp900 < $tmp901;
frost$core$Bit $tmp903 = (frost$core$Bit) {$tmp902};
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp905 = (frost$core$Int64) {658};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s906, $tmp905);
abort(); // unreachable
block9:;
// line 659
frost$core$Int32 $tmp907 = *(&local2);
frost$core$Int32 $tmp908 = (frost$core$Int32) {15};
frost$core$Int32 $tmp909 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp907, $tmp908);
frost$core$Int32 $tmp910 = (frost$core$Int32) {12};
frost$core$Int32 $tmp911 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp909, $tmp910);
frost$core$Char8** $tmp912 = &param0->data;
frost$core$Char8* $tmp913 = *$tmp912;
frost$core$Int64 $tmp914 = *(&local0);
frost$core$Int64 $tmp915 = (frost$core$Int64) {1};
int64_t $tmp916 = $tmp914.value;
int64_t $tmp917 = $tmp915.value;
int64_t $tmp918 = $tmp916 + $tmp917;
frost$core$Int64 $tmp919 = (frost$core$Int64) {$tmp918};
int64_t $tmp920 = $tmp919.value;
frost$core$Char8 $tmp921 = $tmp913[$tmp920];
frost$core$Int32 $tmp922 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp921);
frost$core$Int32 $tmp923 = (frost$core$Int32) {63};
frost$core$Int32 $tmp924 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp922, $tmp923);
frost$core$Int32 $tmp925 = (frost$core$Int32) {6};
frost$core$Int32 $tmp926 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp924, $tmp925);
int32_t $tmp927 = $tmp911.value;
int32_t $tmp928 = $tmp926.value;
int32_t $tmp929 = $tmp927 + $tmp928;
frost$core$Int32 $tmp930 = (frost$core$Int32) {$tmp929};
frost$core$Char8** $tmp931 = &param0->data;
frost$core$Char8* $tmp932 = *$tmp931;
frost$core$Int64 $tmp933 = *(&local0);
frost$core$Int64 $tmp934 = (frost$core$Int64) {2};
int64_t $tmp935 = $tmp933.value;
int64_t $tmp936 = $tmp934.value;
int64_t $tmp937 = $tmp935 + $tmp936;
frost$core$Int64 $tmp938 = (frost$core$Int64) {$tmp937};
int64_t $tmp939 = $tmp938.value;
frost$core$Char8 $tmp940 = $tmp932[$tmp939];
frost$core$Int32 $tmp941 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp940);
frost$core$Int32 $tmp942 = (frost$core$Int32) {63};
frost$core$Int32 $tmp943 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp941, $tmp942);
int32_t $tmp944 = $tmp930.value;
int32_t $tmp945 = $tmp943.value;
int32_t $tmp946 = $tmp944 + $tmp945;
frost$core$Int32 $tmp947 = (frost$core$Int32) {$tmp946};
*(&local2) = $tmp947;
// line 661
frost$core$Int32 $tmp948 = *(&local2);
frost$core$Char32 $tmp949 = frost$core$Char32$init$frost$core$Int32($tmp948);
return $tmp949;
block8:;
// line 663
frost$core$Int64 $tmp950 = *(&local0);
frost$core$Int64 $tmp951 = (frost$core$Int64) {3};
int64_t $tmp952 = $tmp950.value;
int64_t $tmp953 = $tmp951.value;
int64_t $tmp954 = $tmp952 + $tmp953;
frost$core$Int64 $tmp955 = (frost$core$Int64) {$tmp954};
frost$core$Int64* $tmp956 = &param0->_length;
frost$core$Int64 $tmp957 = *$tmp956;
int64_t $tmp958 = $tmp955.value;
int64_t $tmp959 = $tmp957.value;
bool $tmp960 = $tmp958 < $tmp959;
frost$core$Bit $tmp961 = (frost$core$Bit) {$tmp960};
bool $tmp962 = $tmp961.value;
if ($tmp962) goto block11; else goto block12;
block12:;
frost$core$Int64 $tmp963 = (frost$core$Int64) {663};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s964, $tmp963);
abort(); // unreachable
block11:;
// line 664
frost$core$Int32 $tmp965 = *(&local2);
frost$core$Int32 $tmp966 = (frost$core$Int32) {7};
frost$core$Int32 $tmp967 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp965, $tmp966);
frost$core$Int32 $tmp968 = (frost$core$Int32) {18};
frost$core$Int32 $tmp969 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp967, $tmp968);
frost$core$Char8** $tmp970 = &param0->data;
frost$core$Char8* $tmp971 = *$tmp970;
frost$core$Int64 $tmp972 = *(&local0);
frost$core$Int64 $tmp973 = (frost$core$Int64) {1};
int64_t $tmp974 = $tmp972.value;
int64_t $tmp975 = $tmp973.value;
int64_t $tmp976 = $tmp974 + $tmp975;
frost$core$Int64 $tmp977 = (frost$core$Int64) {$tmp976};
int64_t $tmp978 = $tmp977.value;
frost$core$Char8 $tmp979 = $tmp971[$tmp978];
frost$core$Int32 $tmp980 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp979);
frost$core$Int32 $tmp981 = (frost$core$Int32) {63};
frost$core$Int32 $tmp982 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp980, $tmp981);
frost$core$Int32 $tmp983 = (frost$core$Int32) {12};
frost$core$Int32 $tmp984 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp982, $tmp983);
int32_t $tmp985 = $tmp969.value;
int32_t $tmp986 = $tmp984.value;
int32_t $tmp987 = $tmp985 + $tmp986;
frost$core$Int32 $tmp988 = (frost$core$Int32) {$tmp987};
frost$core$Char8** $tmp989 = &param0->data;
frost$core$Char8* $tmp990 = *$tmp989;
frost$core$Int64 $tmp991 = *(&local0);
frost$core$Int64 $tmp992 = (frost$core$Int64) {2};
int64_t $tmp993 = $tmp991.value;
int64_t $tmp994 = $tmp992.value;
int64_t $tmp995 = $tmp993 + $tmp994;
frost$core$Int64 $tmp996 = (frost$core$Int64) {$tmp995};
int64_t $tmp997 = $tmp996.value;
frost$core$Char8 $tmp998 = $tmp990[$tmp997];
frost$core$Int32 $tmp999 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp998);
frost$core$Int32 $tmp1000 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1001 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp999, $tmp1000);
frost$core$Int32 $tmp1002 = (frost$core$Int32) {6};
frost$core$Int32 $tmp1003 = frost$core$Int32$$SHL$frost$core$Int32$R$frost$core$Int32($tmp1001, $tmp1002);
int32_t $tmp1004 = $tmp988.value;
int32_t $tmp1005 = $tmp1003.value;
int32_t $tmp1006 = $tmp1004 + $tmp1005;
frost$core$Int32 $tmp1007 = (frost$core$Int32) {$tmp1006};
frost$core$Char8** $tmp1008 = &param0->data;
frost$core$Char8* $tmp1009 = *$tmp1008;
frost$core$Int64 $tmp1010 = *(&local0);
frost$core$Int64 $tmp1011 = (frost$core$Int64) {3};
int64_t $tmp1012 = $tmp1010.value;
int64_t $tmp1013 = $tmp1011.value;
int64_t $tmp1014 = $tmp1012 + $tmp1013;
frost$core$Int64 $tmp1015 = (frost$core$Int64) {$tmp1014};
int64_t $tmp1016 = $tmp1015.value;
frost$core$Char8 $tmp1017 = $tmp1009[$tmp1016];
frost$core$Int32 $tmp1018 = frost$core$Char8$get_asInt32$R$frost$core$Int32($tmp1017);
frost$core$Int32 $tmp1019 = (frost$core$Int32) {63};
frost$core$Int32 $tmp1020 = frost$core$Int32$$BAND$frost$core$Int32$R$frost$core$Int32($tmp1018, $tmp1019);
int32_t $tmp1021 = $tmp1007.value;
int32_t $tmp1022 = $tmp1020.value;
int32_t $tmp1023 = $tmp1021 + $tmp1022;
frost$core$Int32 $tmp1024 = (frost$core$Int32) {$tmp1023};
*(&local2) = $tmp1024;
// line 667
frost$core$Int32 $tmp1025 = *(&local2);
frost$core$Char32 $tmp1026 = frost$core$Char32$init$frost$core$Int32($tmp1025);
return $tmp1026;

}
frost$core$Char32 frost$core$String$$IDX$frost$core$Int64$R$frost$core$Char32(frost$core$String* param0, frost$core$Int64 param1) {

// line 676
frost$core$String$Index $tmp1027 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1028 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1027, param1);
frost$core$Char32 $tmp1029 = frost$core$String$$IDX$frost$core$String$Index$R$frost$core$Char32(param0, $tmp1028);
return $tmp1029;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
// line 689
frost$core$String$Index $tmp1030 = param1.max;
frost$core$Int64 $tmp1031 = $tmp1030.value;
frost$core$String$Index $tmp1032 = param1.min;
frost$core$Int64 $tmp1033 = $tmp1032.value;
int64_t $tmp1034 = $tmp1031.value;
int64_t $tmp1035 = $tmp1033.value;
int64_t $tmp1036 = $tmp1034 - $tmp1035;
frost$core$Int64 $tmp1037 = (frost$core$Int64) {$tmp1036};
*(&local0) = $tmp1037;
// line 690
frost$core$Bit $tmp1038 = param1.inclusive;
bool $tmp1039 = $tmp1038.value;
if ($tmp1039) goto block1; else goto block2;
block1:;
// line 691
frost$core$Int64 $tmp1040 = *(&local0);
frost$core$Int64 $tmp1041 = (frost$core$Int64) {1};
int64_t $tmp1042 = $tmp1040.value;
int64_t $tmp1043 = $tmp1041.value;
int64_t $tmp1044 = $tmp1042 + $tmp1043;
frost$core$Int64 $tmp1045 = (frost$core$Int64) {$tmp1044};
*(&local0) = $tmp1045;
goto block2;
block2:;
// line 693
frost$core$String* $tmp1046 = (frost$core$String*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$String$class);
frost$core$Char8** $tmp1047 = &param0->data;
frost$core$Char8* $tmp1048 = *$tmp1047;
frost$core$String$Index $tmp1049 = param1.min;
frost$core$Int64 $tmp1050 = $tmp1049.value;
int64_t $tmp1051 = $tmp1050.value;
frost$core$Char8* $tmp1052 = $tmp1048 + $tmp1051;
frost$core$Int64 $tmp1053 = *(&local0);
frost$core$String$init$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$frost$core$String($tmp1046, $tmp1052, $tmp1053, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1046));
return $tmp1046;

}
frost$core$String* frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 709
// line 710
frost$core$String$Index$nullable $tmp1054 = param1.min;
frost$core$Bit $tmp1055 = frost$core$Bit$init$builtin_bit($tmp1054.nonnull);
bool $tmp1056 = $tmp1055.value;
if ($tmp1056) goto block1; else goto block3;
block1:;
// line 711
frost$core$String$Index$nullable $tmp1057 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1057.value);
goto block2;
block3:;
// line 1
// line 714
frost$core$String$Index $tmp1058 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1058;
goto block2;
block2:;
// line 717
frost$core$Bit $tmp1059 = param1.inclusive;
*(&local1) = $tmp1059;
// line 718
// line 719
frost$core$String$Index$nullable $tmp1060 = param1.max;
frost$core$Bit $tmp1061 = frost$core$Bit$init$builtin_bit($tmp1060.nonnull);
bool $tmp1062 = $tmp1061.value;
if ($tmp1062) goto block4; else goto block6;
block4:;
// line 720
frost$core$String$Index$nullable $tmp1063 = param1.max;
*(&local2) = ((frost$core$String$Index) $tmp1063.value);
goto block5;
block6:;
// line 1
// line 723
frost$core$String$Index $tmp1064 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1064;
// line 724
frost$core$Bit $tmp1065 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1065;
goto block5;
block5:;
// line 726
frost$core$String$Index $tmp1066 = *(&local0);
frost$core$String$Index $tmp1067 = *(&local2);
frost$core$Bit $tmp1068 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1069 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1066, $tmp1067, $tmp1068);
frost$core$String* $tmp1070 = frost$core$String$substring$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1069);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1070));
return $tmp1070;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$GT param1) {

frost$core$Int64 local0;
frost$core$MutableString* local1 = NULL;
frost$core$Int64 local2;
frost$core$Char8 local3;
// line 734
frost$core$String$Index $tmp1071 = param1.min;
frost$core$Int64 $tmp1072 = $tmp1071.value;
*(&local0) = $tmp1072;
// line 735
frost$core$MutableString* $tmp1073 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1073);
*(&local1) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
frost$core$MutableString* $tmp1074 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1074));
*(&local1) = $tmp1073;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1073));
// line 736
frost$core$String$Index $tmp1075 = param1.max;
frost$core$Int64 $tmp1076 = $tmp1075.value;
*(&local2) = $tmp1076;
// line 737
frost$core$Bit $tmp1077 = param1.inclusive;
bool $tmp1078 = $tmp1077.value;
if ($tmp1078) goto block1; else goto block2;
block1:;
// line 738
frost$core$Int64 $tmp1079 = *(&local2);
frost$core$Int64 $tmp1080 = (frost$core$Int64) {1};
int64_t $tmp1081 = $tmp1079.value;
int64_t $tmp1082 = $tmp1080.value;
int64_t $tmp1083 = $tmp1081 + $tmp1082;
frost$core$Int64 $tmp1084 = (frost$core$Int64) {$tmp1083};
*(&local2) = $tmp1084;
goto block2;
block2:;
// line 740
goto block3;
block3:;
frost$core$Int64 $tmp1085 = *(&local0);
frost$core$Int64 $tmp1086 = *(&local2);
int64_t $tmp1087 = $tmp1085.value;
int64_t $tmp1088 = $tmp1086.value;
bool $tmp1089 = $tmp1087 < $tmp1088;
frost$core$Bit $tmp1090 = (frost$core$Bit) {$tmp1089};
bool $tmp1091 = $tmp1090.value;
if ($tmp1091) goto block4; else goto block5;
block4:;
// line 741
frost$core$Char8** $tmp1092 = &param0->data;
frost$core$Char8* $tmp1093 = *$tmp1092;
frost$core$Int64 $tmp1094 = *(&local0);
int64_t $tmp1095 = $tmp1094.value;
frost$core$Char8 $tmp1096 = $tmp1093[$tmp1095];
*(&local3) = $tmp1096;
// line 742
frost$core$MutableString* $tmp1097 = *(&local1);
frost$core$Char8 $tmp1098 = *(&local3);
frost$core$MutableString$append$frost$core$Char8($tmp1097, $tmp1098);
// line 743
frost$core$Int64 $tmp1099 = *(&local0);
frost$core$Int64 $tmp1100 = (frost$core$Int64) {1};
int64_t $tmp1101 = $tmp1099.value;
int64_t $tmp1102 = $tmp1100.value;
int64_t $tmp1103 = $tmp1101 + $tmp1102;
frost$core$Int64 $tmp1104 = (frost$core$Int64) {$tmp1103};
*(&local0) = $tmp1104;
// line 744
frost$core$Char8 $tmp1105 = *(&local3);
uint8_t $tmp1106 = $tmp1105.value;
int64_t $tmp1107 = ((int64_t) $tmp1106) & 255;
bool $tmp1108 = $tmp1107 >= 192;
frost$core$Bit $tmp1109 = frost$core$Bit$init$builtin_bit($tmp1108);
bool $tmp1110 = $tmp1109.value;
if ($tmp1110) goto block6; else goto block7;
block6:;
// line 745
frost$core$MutableString* $tmp1111 = *(&local1);
frost$core$Char8** $tmp1112 = &param0->data;
frost$core$Char8* $tmp1113 = *$tmp1112;
frost$core$Int64 $tmp1114 = *(&local0);
int64_t $tmp1115 = $tmp1114.value;
frost$core$Char8 $tmp1116 = $tmp1113[$tmp1115];
frost$core$MutableString$append$frost$core$Char8($tmp1111, $tmp1116);
// line 746
frost$core$Int64 $tmp1117 = *(&local0);
frost$core$Int64 $tmp1118 = (frost$core$Int64) {1};
int64_t $tmp1119 = $tmp1117.value;
int64_t $tmp1120 = $tmp1118.value;
int64_t $tmp1121 = $tmp1119 + $tmp1120;
frost$core$Int64 $tmp1122 = (frost$core$Int64) {$tmp1121};
*(&local0) = $tmp1122;
goto block7;
block7:;
// line 748
frost$core$Char8 $tmp1123 = *(&local3);
uint8_t $tmp1124 = $tmp1123.value;
int64_t $tmp1125 = ((int64_t) $tmp1124) & 255;
bool $tmp1126 = $tmp1125 >= 224;
frost$core$Bit $tmp1127 = frost$core$Bit$init$builtin_bit($tmp1126);
bool $tmp1128 = $tmp1127.value;
if ($tmp1128) goto block8; else goto block9;
block8:;
// line 749
frost$core$MutableString* $tmp1129 = *(&local1);
frost$core$Char8** $tmp1130 = &param0->data;
frost$core$Char8* $tmp1131 = *$tmp1130;
frost$core$Int64 $tmp1132 = *(&local0);
int64_t $tmp1133 = $tmp1132.value;
frost$core$Char8 $tmp1134 = $tmp1131[$tmp1133];
frost$core$MutableString$append$frost$core$Char8($tmp1129, $tmp1134);
// line 750
frost$core$Int64 $tmp1135 = *(&local0);
frost$core$Int64 $tmp1136 = (frost$core$Int64) {1};
int64_t $tmp1137 = $tmp1135.value;
int64_t $tmp1138 = $tmp1136.value;
int64_t $tmp1139 = $tmp1137 + $tmp1138;
frost$core$Int64 $tmp1140 = (frost$core$Int64) {$tmp1139};
*(&local0) = $tmp1140;
goto block9;
block9:;
// line 752
frost$core$Char8 $tmp1141 = *(&local3);
uint8_t $tmp1142 = $tmp1141.value;
int64_t $tmp1143 = ((int64_t) $tmp1142) & 255;
bool $tmp1144 = $tmp1143 >= 240;
frost$core$Bit $tmp1145 = frost$core$Bit$init$builtin_bit($tmp1144);
bool $tmp1146 = $tmp1145.value;
if ($tmp1146) goto block10; else goto block11;
block10:;
// line 753
frost$core$MutableString* $tmp1147 = *(&local1);
frost$core$Char8** $tmp1148 = &param0->data;
frost$core$Char8* $tmp1149 = *$tmp1148;
frost$core$Int64 $tmp1150 = *(&local0);
int64_t $tmp1151 = $tmp1150.value;
frost$core$Char8 $tmp1152 = $tmp1149[$tmp1151];
frost$core$MutableString$append$frost$core$Char8($tmp1147, $tmp1152);
// line 754
frost$core$Int64 $tmp1153 = *(&local0);
frost$core$Int64 $tmp1154 = (frost$core$Int64) {1};
int64_t $tmp1155 = $tmp1153.value;
int64_t $tmp1156 = $tmp1154.value;
int64_t $tmp1157 = $tmp1155 + $tmp1156;
frost$core$Int64 $tmp1158 = (frost$core$Int64) {$tmp1157};
*(&local0) = $tmp1158;
goto block11;
block11:;
goto block3;
block5:;
// line 757
frost$core$MutableString* $tmp1159 = *(&local1);
frost$core$String* $tmp1160 = frost$core$MutableString$finish$R$frost$core$String($tmp1159);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1160));
frost$core$MutableString* $tmp1161 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1161));
*(&local1) = ((frost$core$MutableString*) NULL);
return $tmp1160;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$String$Index$Q$GT param1) {

frost$core$String$Index local0;
frost$core$Bit local1;
frost$core$String$Index local2;
// line 768
frost$core$Int64* $tmp1162 = &param0->_length;
frost$core$Int64 $tmp1163 = *$tmp1162;
frost$core$Int64 $tmp1164 = (frost$core$Int64) {0};
frost$core$Bit $tmp1165 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1163, $tmp1164);
bool $tmp1166 = $tmp1165.value;
if ($tmp1166) goto block1; else goto block2;
block1:;
// line 769
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1167));
return &$s1168;
block2:;
// line 771
// line 772
frost$core$String$Index$nullable $tmp1169 = param1.min;
frost$core$Bit $tmp1170 = frost$core$Bit$init$builtin_bit($tmp1169.nonnull);
bool $tmp1171 = $tmp1170.value;
if ($tmp1171) goto block3; else goto block5;
block3:;
// line 773
frost$core$String$Index$nullable $tmp1172 = param1.min;
*(&local0) = ((frost$core$String$Index) $tmp1172.value);
goto block4;
block5:;
// line 1
// line 776
frost$core$String$Index $tmp1173 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local0) = $tmp1173;
goto block4;
block4:;
// line 779
frost$core$Bit $tmp1174 = param1.inclusive;
*(&local1) = $tmp1174;
// line 780
// line 781
frost$core$String$Index$nullable $tmp1175 = param1.max;
frost$core$Bit $tmp1176 = frost$core$Bit$init$builtin_bit($tmp1175.nonnull);
bool $tmp1177 = $tmp1176.value;
if ($tmp1177) goto block6; else goto block8;
block6:;
// line 782
frost$core$String$Index$nullable $tmp1178 = param1.max;
*(&local2) = ((frost$core$String$Index) $tmp1178.value);
goto block7;
block8:;
// line 1
// line 785
frost$core$String$Index $tmp1179 = frost$core$String$get_end$R$frost$core$String$Index(param0);
*(&local2) = $tmp1179;
// line 786
frost$core$Bit $tmp1180 = frost$core$Bit$init$builtin_bit(false);
*(&local1) = $tmp1180;
goto block7;
block7:;
// line 788
frost$core$String$Index $tmp1181 = *(&local0);
frost$core$String$Index $tmp1182 = *(&local2);
frost$core$Bit $tmp1183 = *(&local1);
frost$core$Range$LTfrost$core$String$Index$GT $tmp1184 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp1181, $tmp1182, $tmp1183);
frost$core$String* $tmp1185 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp1184);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1185));
return $tmp1185;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT param1) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$MutableString* local3 = NULL;
frost$core$Char8 local4;
frost$core$Int64 local5;
frost$core$Char8 local6;
frost$core$Int64 local7;
frost$core$Int64 local8;
frost$core$Bit local9;
frost$core$Bit local10;
frost$core$Bit local11;
frost$core$Char8 local12;
// line 804
frost$core$Int64* $tmp1186 = &param0->_length;
frost$core$Int64 $tmp1187 = *$tmp1186;
frost$core$Int64 $tmp1188 = (frost$core$Int64) {0};
frost$core$Bit $tmp1189 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1187, $tmp1188);
bool $tmp1190 = $tmp1189.value;
if ($tmp1190) goto block1; else goto block2;
block1:;
// line 805
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) &$s1191));
return &$s1192;
block2:;
// line 807
frost$core$Int64 $tmp1193 = param1.step;
*(&local0) = $tmp1193;
// line 809
// line 810
frost$core$String$Index$nullable $tmp1194 = param1.start;
frost$core$Bit $tmp1195 = frost$core$Bit$init$builtin_bit($tmp1194.nonnull);
bool $tmp1196 = $tmp1195.value;
if ($tmp1196) goto block3; else goto block5;
block3:;
// line 811
frost$core$String$Index$nullable $tmp1197 = param1.start;
frost$core$Int64 $tmp1198 = ((frost$core$String$Index) $tmp1197.value).value;
*(&local1) = $tmp1198;
goto block4;
block5:;
// line 813
frost$core$Int64 $tmp1199 = *(&local0);
frost$core$Int64 $tmp1200 = (frost$core$Int64) {0};
int64_t $tmp1201 = $tmp1199.value;
int64_t $tmp1202 = $tmp1200.value;
bool $tmp1203 = $tmp1201 > $tmp1202;
frost$core$Bit $tmp1204 = (frost$core$Bit) {$tmp1203};
bool $tmp1205 = $tmp1204.value;
if ($tmp1205) goto block6; else goto block8;
block6:;
// line 814
frost$core$String$Index $tmp1206 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1207 = $tmp1206.value;
*(&local1) = $tmp1207;
goto block7;
block8:;
// line 1
// line 817
frost$core$String$Index $tmp1208 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index $tmp1209 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1208);
frost$core$Int64 $tmp1210 = $tmp1209.value;
*(&local1) = $tmp1210;
goto block7;
block7:;
goto block4;
block4:;
// line 820
// line 821
frost$core$String$Index$nullable $tmp1211 = param1.end;
frost$core$Bit $tmp1212 = frost$core$Bit$init$builtin_bit($tmp1211.nonnull);
bool $tmp1213 = $tmp1212.value;
if ($tmp1213) goto block9; else goto block11;
block9:;
// line 822
frost$core$String$Index$nullable $tmp1214 = param1.end;
frost$core$Int64 $tmp1215 = ((frost$core$String$Index) $tmp1214.value).value;
*(&local2) = $tmp1215;
goto block10;
block11:;
// line 824
frost$core$Int64 $tmp1216 = *(&local0);
frost$core$Int64 $tmp1217 = (frost$core$Int64) {0};
int64_t $tmp1218 = $tmp1216.value;
int64_t $tmp1219 = $tmp1217.value;
bool $tmp1220 = $tmp1218 > $tmp1219;
frost$core$Bit $tmp1221 = (frost$core$Bit) {$tmp1220};
bool $tmp1222 = $tmp1221.value;
if ($tmp1222) goto block12; else goto block14;
block12:;
// line 825
frost$core$String$Index $tmp1223 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1224 = $tmp1223.value;
*(&local2) = $tmp1224;
goto block13;
block14:;
// line 1
// line 828
frost$core$String$Index $tmp1225 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64 $tmp1226 = $tmp1225.value;
*(&local2) = $tmp1226;
goto block13;
block13:;
goto block10;
block10:;
// line 831
frost$core$MutableString* $tmp1227 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp1227);
*(&local3) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
frost$core$MutableString* $tmp1228 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1228));
*(&local3) = $tmp1227;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1227));
// line 832
frost$core$Int64 $tmp1229 = param1.step;
frost$core$Int64 $tmp1230 = (frost$core$Int64) {0};
int64_t $tmp1231 = $tmp1229.value;
int64_t $tmp1232 = $tmp1230.value;
bool $tmp1233 = $tmp1231 > $tmp1232;
frost$core$Bit $tmp1234 = (frost$core$Bit) {$tmp1233};
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block15; else goto block17;
block15:;
// line 833
goto block18;
block18:;
frost$core$Int64 $tmp1236 = *(&local1);
frost$core$Int64 $tmp1237 = *(&local2);
int64_t $tmp1238 = $tmp1236.value;
int64_t $tmp1239 = $tmp1237.value;
bool $tmp1240 = $tmp1238 < $tmp1239;
frost$core$Bit $tmp1241 = (frost$core$Bit) {$tmp1240};
bool $tmp1242 = $tmp1241.value;
if ($tmp1242) goto block19; else goto block20;
block19:;
// line 834
frost$core$Char8** $tmp1243 = &param0->data;
frost$core$Char8* $tmp1244 = *$tmp1243;
frost$core$Int64 $tmp1245 = *(&local1);
int64_t $tmp1246 = $tmp1245.value;
frost$core$Char8 $tmp1247 = $tmp1244[$tmp1246];
*(&local4) = $tmp1247;
// line 835
frost$core$MutableString* $tmp1248 = *(&local3);
frost$core$Char8 $tmp1249 = *(&local4);
frost$core$MutableString$append$frost$core$Char8($tmp1248, $tmp1249);
// line 836
frost$core$Int64 $tmp1250 = *(&local1);
frost$core$Int64 $tmp1251 = (frost$core$Int64) {1};
int64_t $tmp1252 = $tmp1250.value;
int64_t $tmp1253 = $tmp1251.value;
int64_t $tmp1254 = $tmp1252 + $tmp1253;
frost$core$Int64 $tmp1255 = (frost$core$Int64) {$tmp1254};
*(&local1) = $tmp1255;
// line 837
frost$core$Char8 $tmp1256 = *(&local4);
uint8_t $tmp1257 = $tmp1256.value;
int64_t $tmp1258 = ((int64_t) $tmp1257) & 255;
bool $tmp1259 = $tmp1258 >= 192;
frost$core$Bit $tmp1260 = frost$core$Bit$init$builtin_bit($tmp1259);
bool $tmp1261 = $tmp1260.value;
if ($tmp1261) goto block21; else goto block22;
block21:;
// line 838
frost$core$MutableString* $tmp1262 = *(&local3);
frost$core$Char8** $tmp1263 = &param0->data;
frost$core$Char8* $tmp1264 = *$tmp1263;
frost$core$Int64 $tmp1265 = *(&local1);
int64_t $tmp1266 = $tmp1265.value;
frost$core$Char8 $tmp1267 = $tmp1264[$tmp1266];
frost$core$MutableString$append$frost$core$Char8($tmp1262, $tmp1267);
// line 839
frost$core$Int64 $tmp1268 = *(&local1);
frost$core$Int64 $tmp1269 = (frost$core$Int64) {1};
int64_t $tmp1270 = $tmp1268.value;
int64_t $tmp1271 = $tmp1269.value;
int64_t $tmp1272 = $tmp1270 + $tmp1271;
frost$core$Int64 $tmp1273 = (frost$core$Int64) {$tmp1272};
*(&local1) = $tmp1273;
goto block22;
block22:;
// line 841
frost$core$Char8 $tmp1274 = *(&local4);
uint8_t $tmp1275 = $tmp1274.value;
int64_t $tmp1276 = ((int64_t) $tmp1275) & 255;
bool $tmp1277 = $tmp1276 >= 224;
frost$core$Bit $tmp1278 = frost$core$Bit$init$builtin_bit($tmp1277);
bool $tmp1279 = $tmp1278.value;
if ($tmp1279) goto block23; else goto block24;
block23:;
// line 842
frost$core$MutableString* $tmp1280 = *(&local3);
frost$core$Char8** $tmp1281 = &param0->data;
frost$core$Char8* $tmp1282 = *$tmp1281;
frost$core$Int64 $tmp1283 = *(&local1);
int64_t $tmp1284 = $tmp1283.value;
frost$core$Char8 $tmp1285 = $tmp1282[$tmp1284];
frost$core$MutableString$append$frost$core$Char8($tmp1280, $tmp1285);
// line 843
frost$core$Int64 $tmp1286 = *(&local1);
frost$core$Int64 $tmp1287 = (frost$core$Int64) {1};
int64_t $tmp1288 = $tmp1286.value;
int64_t $tmp1289 = $tmp1287.value;
int64_t $tmp1290 = $tmp1288 + $tmp1289;
frost$core$Int64 $tmp1291 = (frost$core$Int64) {$tmp1290};
*(&local1) = $tmp1291;
goto block24;
block24:;
// line 845
frost$core$Char8 $tmp1292 = *(&local4);
uint8_t $tmp1293 = $tmp1292.value;
int64_t $tmp1294 = ((int64_t) $tmp1293) & 255;
bool $tmp1295 = $tmp1294 >= 240;
frost$core$Bit $tmp1296 = frost$core$Bit$init$builtin_bit($tmp1295);
bool $tmp1297 = $tmp1296.value;
if ($tmp1297) goto block25; else goto block26;
block25:;
// line 846
frost$core$MutableString* $tmp1298 = *(&local3);
frost$core$Char8** $tmp1299 = &param0->data;
frost$core$Char8* $tmp1300 = *$tmp1299;
frost$core$Int64 $tmp1301 = *(&local1);
int64_t $tmp1302 = $tmp1301.value;
frost$core$Char8 $tmp1303 = $tmp1300[$tmp1302];
frost$core$MutableString$append$frost$core$Char8($tmp1298, $tmp1303);
// line 847
frost$core$Int64 $tmp1304 = *(&local1);
frost$core$Int64 $tmp1305 = (frost$core$Int64) {1};
int64_t $tmp1306 = $tmp1304.value;
int64_t $tmp1307 = $tmp1305.value;
int64_t $tmp1308 = $tmp1306 + $tmp1307;
frost$core$Int64 $tmp1309 = (frost$core$Int64) {$tmp1308};
*(&local1) = $tmp1309;
goto block26;
block26:;
// line 849
frost$core$Int64 $tmp1310 = (frost$core$Int64) {1};
frost$core$Int64 $tmp1311 = *(&local0);
frost$core$Bit $tmp1312 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1313 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1310, $tmp1311, $tmp1312);
frost$core$Int64 $tmp1314 = $tmp1313.min;
*(&local5) = $tmp1314;
frost$core$Int64 $tmp1315 = $tmp1313.max;
frost$core$Bit $tmp1316 = $tmp1313.inclusive;
bool $tmp1317 = $tmp1316.value;
frost$core$Int64 $tmp1318 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1319 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1318);
if ($tmp1317) goto block30; else goto block31;
block30:;
int64_t $tmp1320 = $tmp1314.value;
int64_t $tmp1321 = $tmp1315.value;
bool $tmp1322 = $tmp1320 <= $tmp1321;
frost$core$Bit $tmp1323 = (frost$core$Bit) {$tmp1322};
bool $tmp1324 = $tmp1323.value;
if ($tmp1324) goto block27; else goto block28;
block31:;
int64_t $tmp1325 = $tmp1314.value;
int64_t $tmp1326 = $tmp1315.value;
bool $tmp1327 = $tmp1325 < $tmp1326;
frost$core$Bit $tmp1328 = (frost$core$Bit) {$tmp1327};
bool $tmp1329 = $tmp1328.value;
if ($tmp1329) goto block27; else goto block28;
block27:;
// line 850
frost$core$Int64 $tmp1330 = *(&local1);
frost$core$Int64 $tmp1331 = *(&local2);
int64_t $tmp1332 = $tmp1330.value;
int64_t $tmp1333 = $tmp1331.value;
bool $tmp1334 = $tmp1332 >= $tmp1333;
frost$core$Bit $tmp1335 = (frost$core$Bit) {$tmp1334};
bool $tmp1336 = $tmp1335.value;
if ($tmp1336) goto block32; else goto block33;
block32:;
// line 851
frost$core$MutableString* $tmp1337 = *(&local3);
$fn1339 $tmp1338 = ($fn1339) ((frost$core$Object*) $tmp1337)->$class->vtable[0];
frost$core$String* $tmp1340 = $tmp1338(((frost$core$Object*) $tmp1337));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1340));
frost$core$MutableString* $tmp1341 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1341));
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1340;
block33:;
// line 853
frost$core$Int64 $tmp1342 = *(&local1);
frost$core$String$Index $tmp1343 = frost$core$String$Index$init$frost$core$Int64($tmp1342);
frost$core$String$Index $tmp1344 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1343);
frost$core$Int64 $tmp1345 = $tmp1344.value;
*(&local1) = $tmp1345;
goto block29;
block29:;
frost$core$Int64 $tmp1346 = *(&local5);
int64_t $tmp1347 = $tmp1315.value;
int64_t $tmp1348 = $tmp1346.value;
int64_t $tmp1349 = $tmp1347 - $tmp1348;
frost$core$Int64 $tmp1350 = (frost$core$Int64) {$tmp1349};
frost$core$UInt64 $tmp1351 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1350);
if ($tmp1317) goto block35; else goto block36;
block35:;
uint64_t $tmp1352 = $tmp1351.value;
uint64_t $tmp1353 = $tmp1319.value;
bool $tmp1354 = $tmp1352 >= $tmp1353;
frost$core$Bit $tmp1355 = (frost$core$Bit) {$tmp1354};
bool $tmp1356 = $tmp1355.value;
if ($tmp1356) goto block34; else goto block28;
block36:;
uint64_t $tmp1357 = $tmp1351.value;
uint64_t $tmp1358 = $tmp1319.value;
bool $tmp1359 = $tmp1357 > $tmp1358;
frost$core$Bit $tmp1360 = (frost$core$Bit) {$tmp1359};
bool $tmp1361 = $tmp1360.value;
if ($tmp1361) goto block34; else goto block28;
block34:;
int64_t $tmp1362 = $tmp1346.value;
int64_t $tmp1363 = $tmp1318.value;
int64_t $tmp1364 = $tmp1362 + $tmp1363;
frost$core$Int64 $tmp1365 = (frost$core$Int64) {$tmp1364};
*(&local5) = $tmp1365;
goto block27;
block28:;
goto block18;
block20:;
goto block16;
block17:;
// line 1
// line 858
frost$core$Int64 $tmp1366 = param1.step;
frost$core$Int64 $tmp1367 = (frost$core$Int64) {0};
int64_t $tmp1368 = $tmp1366.value;
int64_t $tmp1369 = $tmp1367.value;
bool $tmp1370 = $tmp1368 < $tmp1369;
frost$core$Bit $tmp1371 = (frost$core$Bit) {$tmp1370};
bool $tmp1372 = $tmp1371.value;
if ($tmp1372) goto block37; else goto block38;
block38:;
frost$core$Int64 $tmp1373 = (frost$core$Int64) {858};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s1374, $tmp1373);
abort(); // unreachable
block37:;
// line 859
goto block39;
block39:;
frost$core$Int64 $tmp1375 = *(&local1);
frost$core$Int64 $tmp1376 = *(&local2);
int64_t $tmp1377 = $tmp1375.value;
int64_t $tmp1378 = $tmp1376.value;
bool $tmp1379 = $tmp1377 > $tmp1378;
frost$core$Bit $tmp1380 = (frost$core$Bit) {$tmp1379};
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block40; else goto block41;
block40:;
// line 860
frost$core$Char8** $tmp1382 = &param0->data;
frost$core$Char8* $tmp1383 = *$tmp1382;
frost$core$Int64 $tmp1384 = *(&local1);
int64_t $tmp1385 = $tmp1384.value;
frost$core$Char8 $tmp1386 = $tmp1383[$tmp1385];
*(&local6) = $tmp1386;
// line 861
frost$core$MutableString* $tmp1387 = *(&local3);
frost$core$Char8 $tmp1388 = *(&local6);
frost$core$MutableString$append$frost$core$Char8($tmp1387, $tmp1388);
// line 862
frost$core$Int64 $tmp1389 = *(&local1);
*(&local7) = $tmp1389;
// line 863
frost$core$Int64 $tmp1390 = *(&local1);
frost$core$Int64 $tmp1391 = (frost$core$Int64) {1};
int64_t $tmp1392 = $tmp1390.value;
int64_t $tmp1393 = $tmp1391.value;
int64_t $tmp1394 = $tmp1392 + $tmp1393;
frost$core$Int64 $tmp1395 = (frost$core$Int64) {$tmp1394};
*(&local1) = $tmp1395;
// line 864
frost$core$Char8 $tmp1396 = *(&local6);
uint8_t $tmp1397 = $tmp1396.value;
int64_t $tmp1398 = ((int64_t) $tmp1397) & 255;
bool $tmp1399 = $tmp1398 >= 192;
frost$core$Bit $tmp1400 = frost$core$Bit$init$builtin_bit($tmp1399);
bool $tmp1401 = $tmp1400.value;
if ($tmp1401) goto block42; else goto block43;
block42:;
// line 865
frost$core$MutableString* $tmp1402 = *(&local3);
frost$core$Char8** $tmp1403 = &param0->data;
frost$core$Char8* $tmp1404 = *$tmp1403;
frost$core$Int64 $tmp1405 = *(&local1);
int64_t $tmp1406 = $tmp1405.value;
frost$core$Char8 $tmp1407 = $tmp1404[$tmp1406];
frost$core$MutableString$append$frost$core$Char8($tmp1402, $tmp1407);
// line 866
frost$core$Int64 $tmp1408 = *(&local1);
frost$core$Int64 $tmp1409 = (frost$core$Int64) {1};
int64_t $tmp1410 = $tmp1408.value;
int64_t $tmp1411 = $tmp1409.value;
int64_t $tmp1412 = $tmp1410 + $tmp1411;
frost$core$Int64 $tmp1413 = (frost$core$Int64) {$tmp1412};
*(&local1) = $tmp1413;
goto block43;
block43:;
// line 868
frost$core$Char8 $tmp1414 = *(&local6);
uint8_t $tmp1415 = $tmp1414.value;
int64_t $tmp1416 = ((int64_t) $tmp1415) & 255;
bool $tmp1417 = $tmp1416 >= 224;
frost$core$Bit $tmp1418 = frost$core$Bit$init$builtin_bit($tmp1417);
bool $tmp1419 = $tmp1418.value;
if ($tmp1419) goto block44; else goto block45;
block44:;
// line 869
frost$core$MutableString* $tmp1420 = *(&local3);
frost$core$Char8** $tmp1421 = &param0->data;
frost$core$Char8* $tmp1422 = *$tmp1421;
frost$core$Int64 $tmp1423 = *(&local1);
int64_t $tmp1424 = $tmp1423.value;
frost$core$Char8 $tmp1425 = $tmp1422[$tmp1424];
frost$core$MutableString$append$frost$core$Char8($tmp1420, $tmp1425);
// line 870
frost$core$Int64 $tmp1426 = *(&local1);
frost$core$Int64 $tmp1427 = (frost$core$Int64) {1};
int64_t $tmp1428 = $tmp1426.value;
int64_t $tmp1429 = $tmp1427.value;
int64_t $tmp1430 = $tmp1428 + $tmp1429;
frost$core$Int64 $tmp1431 = (frost$core$Int64) {$tmp1430};
*(&local1) = $tmp1431;
goto block45;
block45:;
// line 872
frost$core$Char8 $tmp1432 = *(&local6);
uint8_t $tmp1433 = $tmp1432.value;
int64_t $tmp1434 = ((int64_t) $tmp1433) & 255;
bool $tmp1435 = $tmp1434 >= 240;
frost$core$Bit $tmp1436 = frost$core$Bit$init$builtin_bit($tmp1435);
bool $tmp1437 = $tmp1436.value;
if ($tmp1437) goto block46; else goto block47;
block46:;
// line 873
frost$core$MutableString* $tmp1438 = *(&local3);
frost$core$Char8** $tmp1439 = &param0->data;
frost$core$Char8* $tmp1440 = *$tmp1439;
frost$core$Int64 $tmp1441 = *(&local1);
int64_t $tmp1442 = $tmp1441.value;
frost$core$Char8 $tmp1443 = $tmp1440[$tmp1442];
frost$core$MutableString$append$frost$core$Char8($tmp1438, $tmp1443);
goto block47;
block47:;
// line 875
frost$core$Int64 $tmp1444 = *(&local7);
frost$core$Int64 $tmp1445 = (frost$core$Int64) {1};
int64_t $tmp1446 = $tmp1444.value;
int64_t $tmp1447 = $tmp1445.value;
int64_t $tmp1448 = $tmp1446 - $tmp1447;
frost$core$Int64 $tmp1449 = (frost$core$Int64) {$tmp1448};
*(&local1) = $tmp1449;
// line 876
goto block48;
block48:;
frost$core$Char8** $tmp1450 = &param0->data;
frost$core$Char8* $tmp1451 = *$tmp1450;
frost$core$Int64 $tmp1452 = *(&local1);
int64_t $tmp1453 = $tmp1452.value;
frost$core$Char8 $tmp1454 = $tmp1451[$tmp1453];
uint8_t $tmp1455 = $tmp1454.value;
int64_t $tmp1456 = ((int64_t) $tmp1455) & 255;
bool $tmp1457 = $tmp1456 >= 128;
frost$core$Char8** $tmp1458 = &param0->data;
frost$core$Char8* $tmp1459 = *$tmp1458;
frost$core$Int64 $tmp1460 = *(&local1);
int64_t $tmp1461 = $tmp1460.value;
frost$core$Char8 $tmp1462 = $tmp1459[$tmp1461];
uint8_t $tmp1463 = $tmp1462.value;
int64_t $tmp1464 = ((int64_t) $tmp1463) & 255;
bool $tmp1465 = $tmp1464 < 192;
bool $tmp1466 = $tmp1457 & $tmp1465;
frost$core$Bit $tmp1467 = frost$core$Bit$init$builtin_bit($tmp1466);
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block49; else goto block50;
block49:;
// line 877
frost$core$Int64 $tmp1469 = *(&local1);
frost$core$Int64 $tmp1470 = (frost$core$Int64) {1};
int64_t $tmp1471 = $tmp1469.value;
int64_t $tmp1472 = $tmp1470.value;
int64_t $tmp1473 = $tmp1471 - $tmp1472;
frost$core$Int64 $tmp1474 = (frost$core$Int64) {$tmp1473};
*(&local1) = $tmp1474;
goto block48;
block50:;
// line 879
frost$core$Int64 $tmp1475 = (frost$core$Int64) {18446744073709551615};
frost$core$Int64 $tmp1476 = *(&local0);
frost$core$Int64 $tmp1477 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1478 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1479 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1475, $tmp1476, $tmp1477, $tmp1478);
frost$core$Int64 $tmp1480 = $tmp1479.start;
*(&local8) = $tmp1480;
frost$core$Int64 $tmp1481 = $tmp1479.end;
frost$core$Int64 $tmp1482 = $tmp1479.step;
frost$core$UInt64 $tmp1483 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1482);
frost$core$Int64 $tmp1484 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1482);
frost$core$UInt64 $tmp1485 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1484);
frost$core$Bit $tmp1486 = $tmp1479.inclusive;
bool $tmp1487 = $tmp1486.value;
frost$core$Int64 $tmp1488 = (frost$core$Int64) {0};
int64_t $tmp1489 = $tmp1482.value;
int64_t $tmp1490 = $tmp1488.value;
bool $tmp1491 = $tmp1489 >= $tmp1490;
frost$core$Bit $tmp1492 = (frost$core$Bit) {$tmp1491};
bool $tmp1493 = $tmp1492.value;
if ($tmp1493) goto block54; else goto block55;
block54:;
if ($tmp1487) goto block56; else goto block57;
block56:;
int64_t $tmp1494 = $tmp1480.value;
int64_t $tmp1495 = $tmp1481.value;
bool $tmp1496 = $tmp1494 <= $tmp1495;
frost$core$Bit $tmp1497 = (frost$core$Bit) {$tmp1496};
bool $tmp1498 = $tmp1497.value;
if ($tmp1498) goto block51; else goto block52;
block57:;
int64_t $tmp1499 = $tmp1480.value;
int64_t $tmp1500 = $tmp1481.value;
bool $tmp1501 = $tmp1499 < $tmp1500;
frost$core$Bit $tmp1502 = (frost$core$Bit) {$tmp1501};
bool $tmp1503 = $tmp1502.value;
if ($tmp1503) goto block51; else goto block52;
block55:;
if ($tmp1487) goto block58; else goto block59;
block58:;
int64_t $tmp1504 = $tmp1480.value;
int64_t $tmp1505 = $tmp1481.value;
bool $tmp1506 = $tmp1504 >= $tmp1505;
frost$core$Bit $tmp1507 = (frost$core$Bit) {$tmp1506};
bool $tmp1508 = $tmp1507.value;
if ($tmp1508) goto block51; else goto block52;
block59:;
int64_t $tmp1509 = $tmp1480.value;
int64_t $tmp1510 = $tmp1481.value;
bool $tmp1511 = $tmp1509 > $tmp1510;
frost$core$Bit $tmp1512 = (frost$core$Bit) {$tmp1511};
bool $tmp1513 = $tmp1512.value;
if ($tmp1513) goto block51; else goto block52;
block51:;
// line 880
frost$core$Int64 $tmp1514 = *(&local1);
frost$core$Int64 $tmp1515 = *(&local2);
int64_t $tmp1516 = $tmp1514.value;
int64_t $tmp1517 = $tmp1515.value;
bool $tmp1518 = $tmp1516 <= $tmp1517;
frost$core$Bit $tmp1519 = (frost$core$Bit) {$tmp1518};
bool $tmp1520 = $tmp1519.value;
if ($tmp1520) goto block60; else goto block61;
block60:;
// line 881
frost$core$MutableString* $tmp1521 = *(&local3);
$fn1523 $tmp1522 = ($fn1523) ((frost$core$Object*) $tmp1521)->$class->vtable[0];
frost$core$String* $tmp1524 = $tmp1522(((frost$core$Object*) $tmp1521));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1524));
frost$core$MutableString* $tmp1525 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1525));
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1524;
block61:;
// line 883
frost$core$Int64 $tmp1526 = *(&local1);
frost$core$String$Index $tmp1527 = frost$core$String$Index$init$frost$core$Int64($tmp1526);
frost$core$String$Index $tmp1528 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp1527);
frost$core$Int64 $tmp1529 = $tmp1528.value;
*(&local1) = $tmp1529;
goto block53;
block53:;
frost$core$Int64 $tmp1530 = *(&local8);
if ($tmp1493) goto block63; else goto block64;
block63:;
int64_t $tmp1531 = $tmp1481.value;
int64_t $tmp1532 = $tmp1530.value;
int64_t $tmp1533 = $tmp1531 - $tmp1532;
frost$core$Int64 $tmp1534 = (frost$core$Int64) {$tmp1533};
frost$core$UInt64 $tmp1535 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1534);
if ($tmp1487) goto block65; else goto block66;
block65:;
uint64_t $tmp1536 = $tmp1535.value;
uint64_t $tmp1537 = $tmp1483.value;
bool $tmp1538 = $tmp1536 >= $tmp1537;
frost$core$Bit $tmp1539 = (frost$core$Bit) {$tmp1538};
bool $tmp1540 = $tmp1539.value;
if ($tmp1540) goto block62; else goto block52;
block66:;
uint64_t $tmp1541 = $tmp1535.value;
uint64_t $tmp1542 = $tmp1483.value;
bool $tmp1543 = $tmp1541 > $tmp1542;
frost$core$Bit $tmp1544 = (frost$core$Bit) {$tmp1543};
bool $tmp1545 = $tmp1544.value;
if ($tmp1545) goto block62; else goto block52;
block64:;
int64_t $tmp1546 = $tmp1530.value;
int64_t $tmp1547 = $tmp1481.value;
int64_t $tmp1548 = $tmp1546 - $tmp1547;
frost$core$Int64 $tmp1549 = (frost$core$Int64) {$tmp1548};
frost$core$UInt64 $tmp1550 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1549);
if ($tmp1487) goto block67; else goto block68;
block67:;
uint64_t $tmp1551 = $tmp1550.value;
uint64_t $tmp1552 = $tmp1485.value;
bool $tmp1553 = $tmp1551 >= $tmp1552;
frost$core$Bit $tmp1554 = (frost$core$Bit) {$tmp1553};
bool $tmp1555 = $tmp1554.value;
if ($tmp1555) goto block62; else goto block52;
block68:;
uint64_t $tmp1556 = $tmp1550.value;
uint64_t $tmp1557 = $tmp1485.value;
bool $tmp1558 = $tmp1556 > $tmp1557;
frost$core$Bit $tmp1559 = (frost$core$Bit) {$tmp1558};
bool $tmp1560 = $tmp1559.value;
if ($tmp1560) goto block62; else goto block52;
block62:;
int64_t $tmp1561 = $tmp1530.value;
int64_t $tmp1562 = $tmp1482.value;
int64_t $tmp1563 = $tmp1561 + $tmp1562;
frost$core$Int64 $tmp1564 = (frost$core$Int64) {$tmp1563};
*(&local8) = $tmp1564;
goto block51;
block52:;
goto block39;
block41:;
goto block16;
block16:;
// line 887
frost$core$Bit $tmp1565 = param1.inclusive;
bool $tmp1566 = $tmp1565.value;
if ($tmp1566) goto block71; else goto block72;
block71:;
*(&local11) = $tmp1565;
goto block73;
block72:;
frost$core$String$Index$nullable $tmp1567 = param1.end;
frost$core$Bit $tmp1568 = frost$core$Bit$init$builtin_bit(!$tmp1567.nonnull);
*(&local11) = $tmp1568;
goto block73;
block73:;
frost$core$Bit $tmp1569 = *(&local11);
bool $tmp1570 = $tmp1569.value;
if ($tmp1570) goto block74; else goto block75;
block74:;
frost$core$Int64 $tmp1571 = *(&local1);
frost$core$Int64 $tmp1572 = *(&local2);
frost$core$Bit $tmp1573 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp1571, $tmp1572);
*(&local10) = $tmp1573;
goto block76;
block75:;
*(&local10) = $tmp1569;
goto block76;
block76:;
frost$core$Bit $tmp1574 = *(&local10);
bool $tmp1575 = $tmp1574.value;
if ($tmp1575) goto block77; else goto block78;
block77:;
frost$core$Int64 $tmp1576 = *(&local2);
frost$core$Int64* $tmp1577 = &param0->_length;
frost$core$Int64 $tmp1578 = *$tmp1577;
int64_t $tmp1579 = $tmp1576.value;
int64_t $tmp1580 = $tmp1578.value;
bool $tmp1581 = $tmp1579 < $tmp1580;
frost$core$Bit $tmp1582 = (frost$core$Bit) {$tmp1581};
*(&local9) = $tmp1582;
goto block79;
block78:;
*(&local9) = $tmp1574;
goto block79;
block79:;
frost$core$Bit $tmp1583 = *(&local9);
bool $tmp1584 = $tmp1583.value;
if ($tmp1584) goto block69; else goto block70;
block69:;
// line 888
frost$core$Char8** $tmp1585 = &param0->data;
frost$core$Char8* $tmp1586 = *$tmp1585;
frost$core$Int64 $tmp1587 = *(&local1);
int64_t $tmp1588 = $tmp1587.value;
frost$core$Char8 $tmp1589 = $tmp1586[$tmp1588];
*(&local12) = $tmp1589;
// line 889
frost$core$MutableString* $tmp1590 = *(&local3);
frost$core$Char8 $tmp1591 = *(&local12);
frost$core$MutableString$append$frost$core$Char8($tmp1590, $tmp1591);
// line 890
frost$core$Int64 $tmp1592 = *(&local1);
frost$core$Int64 $tmp1593 = (frost$core$Int64) {1};
int64_t $tmp1594 = $tmp1592.value;
int64_t $tmp1595 = $tmp1593.value;
int64_t $tmp1596 = $tmp1594 + $tmp1595;
frost$core$Int64 $tmp1597 = (frost$core$Int64) {$tmp1596};
*(&local1) = $tmp1597;
// line 891
frost$core$Char8 $tmp1598 = *(&local12);
uint8_t $tmp1599 = $tmp1598.value;
int64_t $tmp1600 = ((int64_t) $tmp1599) & 255;
bool $tmp1601 = $tmp1600 >= 192;
frost$core$Bit $tmp1602 = frost$core$Bit$init$builtin_bit($tmp1601);
bool $tmp1603 = $tmp1602.value;
if ($tmp1603) goto block80; else goto block81;
block80:;
// line 892
frost$core$MutableString* $tmp1604 = *(&local3);
frost$core$Char8** $tmp1605 = &param0->data;
frost$core$Char8* $tmp1606 = *$tmp1605;
frost$core$Int64 $tmp1607 = *(&local1);
int64_t $tmp1608 = $tmp1607.value;
frost$core$Char8 $tmp1609 = $tmp1606[$tmp1608];
frost$core$MutableString$append$frost$core$Char8($tmp1604, $tmp1609);
// line 893
frost$core$Int64 $tmp1610 = *(&local1);
frost$core$Int64 $tmp1611 = (frost$core$Int64) {1};
int64_t $tmp1612 = $tmp1610.value;
int64_t $tmp1613 = $tmp1611.value;
int64_t $tmp1614 = $tmp1612 + $tmp1613;
frost$core$Int64 $tmp1615 = (frost$core$Int64) {$tmp1614};
*(&local1) = $tmp1615;
goto block81;
block81:;
// line 895
frost$core$Char8 $tmp1616 = *(&local12);
uint8_t $tmp1617 = $tmp1616.value;
int64_t $tmp1618 = ((int64_t) $tmp1617) & 255;
bool $tmp1619 = $tmp1618 >= 224;
frost$core$Bit $tmp1620 = frost$core$Bit$init$builtin_bit($tmp1619);
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block82; else goto block83;
block82:;
// line 896
frost$core$MutableString* $tmp1622 = *(&local3);
frost$core$Char8** $tmp1623 = &param0->data;
frost$core$Char8* $tmp1624 = *$tmp1623;
frost$core$Int64 $tmp1625 = *(&local1);
int64_t $tmp1626 = $tmp1625.value;
frost$core$Char8 $tmp1627 = $tmp1624[$tmp1626];
frost$core$MutableString$append$frost$core$Char8($tmp1622, $tmp1627);
// line 897
frost$core$Int64 $tmp1628 = *(&local1);
frost$core$Int64 $tmp1629 = (frost$core$Int64) {1};
int64_t $tmp1630 = $tmp1628.value;
int64_t $tmp1631 = $tmp1629.value;
int64_t $tmp1632 = $tmp1630 + $tmp1631;
frost$core$Int64 $tmp1633 = (frost$core$Int64) {$tmp1632};
*(&local1) = $tmp1633;
goto block83;
block83:;
// line 899
frost$core$Char8 $tmp1634 = *(&local12);
uint8_t $tmp1635 = $tmp1634.value;
int64_t $tmp1636 = ((int64_t) $tmp1635) & 255;
bool $tmp1637 = $tmp1636 >= 240;
frost$core$Bit $tmp1638 = frost$core$Bit$init$builtin_bit($tmp1637);
bool $tmp1639 = $tmp1638.value;
if ($tmp1639) goto block84; else goto block85;
block84:;
// line 900
frost$core$MutableString* $tmp1640 = *(&local3);
frost$core$Char8** $tmp1641 = &param0->data;
frost$core$Char8* $tmp1642 = *$tmp1641;
frost$core$Int64 $tmp1643 = *(&local1);
int64_t $tmp1644 = $tmp1643.value;
frost$core$Char8 $tmp1645 = $tmp1642[$tmp1644];
frost$core$MutableString$append$frost$core$Char8($tmp1640, $tmp1645);
goto block85;
block85:;
goto block70;
block70:;
// line 903
frost$core$MutableString* $tmp1646 = *(&local3);
frost$core$String* $tmp1647 = frost$core$MutableString$finish$R$frost$core$String($tmp1646);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1647));
frost$core$MutableString* $tmp1648 = *(&local3);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1648));
*(&local3) = ((frost$core$MutableString*) NULL);
return $tmp1647;

}
frost$core$String* frost$core$String$$IDX$frost$core$Range$LTfrost$core$Int64$Q$GT$R$frost$core$String(frost$core$String* param0, frost$core$Range$LTfrost$core$Int64$Q$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 912
// line 913
frost$core$Int64$nullable $tmp1649 = param1.min;
frost$core$Bit $tmp1650 = frost$core$Bit$init$builtin_bit($tmp1649.nonnull);
bool $tmp1651 = $tmp1650.value;
if ($tmp1651) goto block1; else goto block3;
block1:;
// line 914
frost$core$String$Index $tmp1652 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1653 = param1.min;
frost$core$String$Index $tmp1654 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1652, ((frost$core$Int64) $tmp1653.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1654, true });
goto block2;
block3:;
// line 1
// line 917
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 919
// line 920
frost$core$Int64$nullable $tmp1655 = param1.max;
frost$core$Bit $tmp1656 = frost$core$Bit$init$builtin_bit($tmp1655.nonnull);
bool $tmp1657 = $tmp1656.value;
if ($tmp1657) goto block4; else goto block6;
block4:;
// line 921
frost$core$String$Index $tmp1658 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1659 = param1.max;
frost$core$String$Index $tmp1660 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1658, ((frost$core$Int64) $tmp1659.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1660, true });
goto block5;
block6:;
// line 1
// line 924
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 926
frost$core$String$Index$nullable $tmp1661 = *(&local0);
frost$core$String$Index$nullable $tmp1662 = *(&local1);
frost$core$Bit $tmp1663 = param1.inclusive;
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp1664 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit($tmp1661, $tmp1662, $tmp1663);
frost$core$String* $tmp1665 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp1664);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1665));
return $tmp1665;

}
frost$core$String* frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT$R$frost$core$String(frost$core$String* param0, frost$core$SteppedRange$LTfrost$core$Int64$Q$Cfrost$core$Int64$GT param1) {

frost$core$String$Index$nullable local0;
frost$core$String$Index$nullable local1;
// line 935
// line 936
frost$core$Int64$nullable $tmp1666 = param1.start;
frost$core$Bit $tmp1667 = frost$core$Bit$init$builtin_bit($tmp1666.nonnull);
bool $tmp1668 = $tmp1667.value;
if ($tmp1668) goto block1; else goto block3;
block1:;
// line 937
frost$core$String$Index $tmp1669 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1670 = param1.start;
frost$core$String$Index $tmp1671 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1669, ((frost$core$Int64) $tmp1670.value));
*(&local0) = ((frost$core$String$Index$nullable) { $tmp1671, true });
goto block2;
block3:;
// line 1
// line 940
*(&local0) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block2;
block2:;
// line 942
// line 943
frost$core$Int64$nullable $tmp1672 = param1.end;
frost$core$Bit $tmp1673 = frost$core$Bit$init$builtin_bit($tmp1672.nonnull);
bool $tmp1674 = $tmp1673.value;
if ($tmp1674) goto block4; else goto block6;
block4:;
// line 944
frost$core$String$Index $tmp1675 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$Int64$nullable $tmp1676 = param1.end;
frost$core$String$Index $tmp1677 = frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(param0, $tmp1675, ((frost$core$Int64) $tmp1676.value));
*(&local1) = ((frost$core$String$Index$nullable) { $tmp1677, true });
goto block5;
block6:;
// line 1
// line 947
*(&local1) = ((frost$core$String$Index$nullable) { .nonnull = false });
goto block5;
block5:;
// line 949
frost$core$String$Index$nullable $tmp1678 = *(&local0);
frost$core$String$Index$nullable $tmp1679 = *(&local1);
frost$core$Int64 $tmp1680 = param1.step;
frost$core$Bit $tmp1681 = param1.inclusive;
frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT $tmp1682 = frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Int64$frost$core$Bit($tmp1678, $tmp1679, $tmp1680, $tmp1681);
frost$core$String* $tmp1683 = frost$core$String$$IDX$frost$core$SteppedRange$LTfrost$core$String$Index$Q$Cfrost$core$Int64$GT$R$frost$core$String(param0, $tmp1682);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp1683));
return $tmp1683;

}
frost$core$Bit frost$core$String$contains$frost$core$Char8$R$frost$core$Bit(frost$core$String* param0, frost$core$Char8 param1) {

frost$core$Int64 local0;
// line 956
frost$core$Int64 $tmp1684 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1685 = &param0->_length;
frost$core$Int64 $tmp1686 = *$tmp1685;
frost$core$Bit $tmp1687 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1688 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1684, $tmp1686, $tmp1687);
frost$core$Int64 $tmp1689 = $tmp1688.min;
*(&local0) = $tmp1689;
frost$core$Int64 $tmp1690 = $tmp1688.max;
frost$core$Bit $tmp1691 = $tmp1688.inclusive;
bool $tmp1692 = $tmp1691.value;
frost$core$Int64 $tmp1693 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1694 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1693);
if ($tmp1692) goto block4; else goto block5;
block4:;
int64_t $tmp1695 = $tmp1689.value;
int64_t $tmp1696 = $tmp1690.value;
bool $tmp1697 = $tmp1695 <= $tmp1696;
frost$core$Bit $tmp1698 = (frost$core$Bit) {$tmp1697};
bool $tmp1699 = $tmp1698.value;
if ($tmp1699) goto block1; else goto block2;
block5:;
int64_t $tmp1700 = $tmp1689.value;
int64_t $tmp1701 = $tmp1690.value;
bool $tmp1702 = $tmp1700 < $tmp1701;
frost$core$Bit $tmp1703 = (frost$core$Bit) {$tmp1702};
bool $tmp1704 = $tmp1703.value;
if ($tmp1704) goto block1; else goto block2;
block1:;
// line 957
frost$core$Char8** $tmp1705 = &param0->data;
frost$core$Char8* $tmp1706 = *$tmp1705;
frost$core$Int64 $tmp1707 = *(&local0);
int64_t $tmp1708 = $tmp1707.value;
frost$core$Char8 $tmp1709 = $tmp1706[$tmp1708];
frost$core$Bit $tmp1710 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp1709, param1);
bool $tmp1711 = $tmp1710.value;
if ($tmp1711) goto block6; else goto block7;
block6:;
// line 958
frost$core$Bit $tmp1712 = frost$core$Bit$init$builtin_bit(true);
return $tmp1712;
block7:;
goto block3;
block3:;
frost$core$Int64 $tmp1713 = *(&local0);
int64_t $tmp1714 = $tmp1690.value;
int64_t $tmp1715 = $tmp1713.value;
int64_t $tmp1716 = $tmp1714 - $tmp1715;
frost$core$Int64 $tmp1717 = (frost$core$Int64) {$tmp1716};
frost$core$UInt64 $tmp1718 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1717);
if ($tmp1692) goto block9; else goto block10;
block9:;
uint64_t $tmp1719 = $tmp1718.value;
uint64_t $tmp1720 = $tmp1694.value;
bool $tmp1721 = $tmp1719 >= $tmp1720;
frost$core$Bit $tmp1722 = (frost$core$Bit) {$tmp1721};
bool $tmp1723 = $tmp1722.value;
if ($tmp1723) goto block8; else goto block2;
block10:;
uint64_t $tmp1724 = $tmp1718.value;
uint64_t $tmp1725 = $tmp1694.value;
bool $tmp1726 = $tmp1724 > $tmp1725;
frost$core$Bit $tmp1727 = (frost$core$Bit) {$tmp1726};
bool $tmp1728 = $tmp1727.value;
if ($tmp1728) goto block8; else goto block2;
block8:;
int64_t $tmp1729 = $tmp1713.value;
int64_t $tmp1730 = $tmp1693.value;
int64_t $tmp1731 = $tmp1729 + $tmp1730;
frost$core$Int64 $tmp1732 = (frost$core$Int64) {$tmp1731};
*(&local0) = $tmp1732;
goto block1;
block2:;
// line 961
frost$core$Bit $tmp1733 = frost$core$Bit$init$builtin_bit(false);
return $tmp1733;

}
frost$core$Bit frost$core$String$contains$frost$core$String$R$frost$core$Bit(frost$core$String* param0, frost$core$String* param1) {

// line 968
frost$core$String$Index$nullable $tmp1734 = frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(param0, param1);
frost$core$Bit $tmp1735 = frost$core$Bit$init$builtin_bit($tmp1734.nonnull);
return $tmp1735;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 979
frost$core$String$Index $tmp1736 = frost$core$String$get_start$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1737 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1736);
return $tmp1737;

}
frost$core$String$Index$nullable frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 991
frost$core$Int64* $tmp1738 = &param0->_length;
frost$core$Int64 $tmp1739 = *$tmp1738;
frost$core$Int64* $tmp1740 = &param1->_length;
frost$core$Int64 $tmp1741 = *$tmp1740;
int64_t $tmp1742 = $tmp1739.value;
int64_t $tmp1743 = $tmp1741.value;
bool $tmp1744 = $tmp1742 < $tmp1743;
frost$core$Bit $tmp1745 = (frost$core$Bit) {$tmp1744};
bool $tmp1746 = $tmp1745.value;
if ($tmp1746) goto block1; else goto block2;
block1:;
// line 992
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 994
frost$core$Int64 $tmp1747 = param2.value;
frost$core$Int64* $tmp1748 = &param0->_length;
frost$core$Int64 $tmp1749 = *$tmp1748;
frost$core$Int64* $tmp1750 = &param1->_length;
frost$core$Int64 $tmp1751 = *$tmp1750;
int64_t $tmp1752 = $tmp1749.value;
int64_t $tmp1753 = $tmp1751.value;
int64_t $tmp1754 = $tmp1752 - $tmp1753;
frost$core$Int64 $tmp1755 = (frost$core$Int64) {$tmp1754};
frost$core$Bit $tmp1756 = frost$core$Bit$init$builtin_bit(true);
frost$core$Range$LTfrost$core$Int64$GT $tmp1757 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1747, $tmp1755, $tmp1756);
frost$core$Int64 $tmp1758 = $tmp1757.min;
*(&local0) = $tmp1758;
frost$core$Int64 $tmp1759 = $tmp1757.max;
frost$core$Bit $tmp1760 = $tmp1757.inclusive;
bool $tmp1761 = $tmp1760.value;
frost$core$Int64 $tmp1762 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1763 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1762);
if ($tmp1761) goto block6; else goto block7;
block6:;
int64_t $tmp1764 = $tmp1758.value;
int64_t $tmp1765 = $tmp1759.value;
bool $tmp1766 = $tmp1764 <= $tmp1765;
frost$core$Bit $tmp1767 = (frost$core$Bit) {$tmp1766};
bool $tmp1768 = $tmp1767.value;
if ($tmp1768) goto block3; else goto block4;
block7:;
int64_t $tmp1769 = $tmp1758.value;
int64_t $tmp1770 = $tmp1759.value;
bool $tmp1771 = $tmp1769 < $tmp1770;
frost$core$Bit $tmp1772 = (frost$core$Bit) {$tmp1771};
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block3; else goto block4;
block3:;
// line 995
frost$core$Int64 $tmp1774 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1775 = &param1->_length;
frost$core$Int64 $tmp1776 = *$tmp1775;
frost$core$Bit $tmp1777 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1778 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1774, $tmp1776, $tmp1777);
frost$core$Int64 $tmp1779 = $tmp1778.min;
*(&local1) = $tmp1779;
frost$core$Int64 $tmp1780 = $tmp1778.max;
frost$core$Bit $tmp1781 = $tmp1778.inclusive;
bool $tmp1782 = $tmp1781.value;
frost$core$Int64 $tmp1783 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1784 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1783);
if ($tmp1782) goto block11; else goto block12;
block11:;
int64_t $tmp1785 = $tmp1779.value;
int64_t $tmp1786 = $tmp1780.value;
bool $tmp1787 = $tmp1785 <= $tmp1786;
frost$core$Bit $tmp1788 = (frost$core$Bit) {$tmp1787};
bool $tmp1789 = $tmp1788.value;
if ($tmp1789) goto block8; else goto block9;
block12:;
int64_t $tmp1790 = $tmp1779.value;
int64_t $tmp1791 = $tmp1780.value;
bool $tmp1792 = $tmp1790 < $tmp1791;
frost$core$Bit $tmp1793 = (frost$core$Bit) {$tmp1792};
bool $tmp1794 = $tmp1793.value;
if ($tmp1794) goto block8; else goto block9;
block8:;
// line 996
frost$core$Char8** $tmp1795 = &param0->data;
frost$core$Char8* $tmp1796 = *$tmp1795;
frost$core$Int64 $tmp1797 = *(&local0);
frost$core$Int64 $tmp1798 = *(&local1);
int64_t $tmp1799 = $tmp1797.value;
int64_t $tmp1800 = $tmp1798.value;
int64_t $tmp1801 = $tmp1799 + $tmp1800;
frost$core$Int64 $tmp1802 = (frost$core$Int64) {$tmp1801};
int64_t $tmp1803 = $tmp1802.value;
frost$core$Char8 $tmp1804 = $tmp1796[$tmp1803];
frost$core$Char8** $tmp1805 = &param1->data;
frost$core$Char8* $tmp1806 = *$tmp1805;
frost$core$Int64 $tmp1807 = *(&local1);
int64_t $tmp1808 = $tmp1807.value;
frost$core$Char8 $tmp1809 = $tmp1806[$tmp1808];
frost$core$Bit $tmp1810 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1804, $tmp1809);
bool $tmp1811 = $tmp1810.value;
if ($tmp1811) goto block13; else goto block14;
block13:;
// line 997
goto block5;
block14:;
goto block10;
block10:;
frost$core$Int64 $tmp1812 = *(&local1);
int64_t $tmp1813 = $tmp1780.value;
int64_t $tmp1814 = $tmp1812.value;
int64_t $tmp1815 = $tmp1813 - $tmp1814;
frost$core$Int64 $tmp1816 = (frost$core$Int64) {$tmp1815};
frost$core$UInt64 $tmp1817 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1816);
if ($tmp1782) goto block16; else goto block17;
block16:;
uint64_t $tmp1818 = $tmp1817.value;
uint64_t $tmp1819 = $tmp1784.value;
bool $tmp1820 = $tmp1818 >= $tmp1819;
frost$core$Bit $tmp1821 = (frost$core$Bit) {$tmp1820};
bool $tmp1822 = $tmp1821.value;
if ($tmp1822) goto block15; else goto block9;
block17:;
uint64_t $tmp1823 = $tmp1817.value;
uint64_t $tmp1824 = $tmp1784.value;
bool $tmp1825 = $tmp1823 > $tmp1824;
frost$core$Bit $tmp1826 = (frost$core$Bit) {$tmp1825};
bool $tmp1827 = $tmp1826.value;
if ($tmp1827) goto block15; else goto block9;
block15:;
int64_t $tmp1828 = $tmp1812.value;
int64_t $tmp1829 = $tmp1783.value;
int64_t $tmp1830 = $tmp1828 + $tmp1829;
frost$core$Int64 $tmp1831 = (frost$core$Int64) {$tmp1830};
*(&local1) = $tmp1831;
goto block8;
block9:;
// line 1000
frost$core$Int64 $tmp1832 = *(&local0);
frost$core$String$Index $tmp1833 = frost$core$String$Index$init$frost$core$Int64($tmp1832);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1833, true }).value), true });
block5:;
frost$core$Int64 $tmp1834 = *(&local0);
int64_t $tmp1835 = $tmp1759.value;
int64_t $tmp1836 = $tmp1834.value;
int64_t $tmp1837 = $tmp1835 - $tmp1836;
frost$core$Int64 $tmp1838 = (frost$core$Int64) {$tmp1837};
frost$core$UInt64 $tmp1839 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1838);
if ($tmp1761) goto block19; else goto block20;
block19:;
uint64_t $tmp1840 = $tmp1839.value;
uint64_t $tmp1841 = $tmp1763.value;
bool $tmp1842 = $tmp1840 >= $tmp1841;
frost$core$Bit $tmp1843 = (frost$core$Bit) {$tmp1842};
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block18; else goto block4;
block20:;
uint64_t $tmp1845 = $tmp1839.value;
uint64_t $tmp1846 = $tmp1763.value;
bool $tmp1847 = $tmp1845 > $tmp1846;
frost$core$Bit $tmp1848 = (frost$core$Bit) {$tmp1847};
bool $tmp1849 = $tmp1848.value;
if ($tmp1849) goto block18; else goto block4;
block18:;
int64_t $tmp1850 = $tmp1834.value;
int64_t $tmp1851 = $tmp1762.value;
int64_t $tmp1852 = $tmp1850 + $tmp1851;
frost$core$Int64 $tmp1853 = (frost$core$Int64) {$tmp1852};
*(&local0) = $tmp1853;
goto block3;
block4:;
// line 1002
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1) {

// line 1013
frost$core$String$Index $tmp1854 = frost$core$String$get_end$R$frost$core$String$Index(param0);
frost$core$String$Index$nullable $tmp1855 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp1854);
return $tmp1855;

}
frost$core$String$Index$nullable frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(frost$core$String* param0, frost$core$String* param1, frost$core$String$Index param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1025
frost$core$Int64* $tmp1856 = &param0->_length;
frost$core$Int64 $tmp1857 = *$tmp1856;
frost$core$Int64* $tmp1858 = &param1->_length;
frost$core$Int64 $tmp1859 = *$tmp1858;
int64_t $tmp1860 = $tmp1857.value;
int64_t $tmp1861 = $tmp1859.value;
bool $tmp1862 = $tmp1860 < $tmp1861;
frost$core$Bit $tmp1863 = (frost$core$Bit) {$tmp1862};
bool $tmp1864 = $tmp1863.value;
if ($tmp1864) goto block1; else goto block2;
block1:;
// line 1026
return ((frost$core$String$Index$nullable) { .nonnull = false });
block2:;
// line 1028
frost$core$Int64 $tmp1865 = param2.value;
frost$core$Int64* $tmp1866 = &param0->_length;
frost$core$Int64 $tmp1867 = *$tmp1866;
frost$core$Int64* $tmp1868 = &param1->_length;
frost$core$Int64 $tmp1869 = *$tmp1868;
int64_t $tmp1870 = $tmp1867.value;
int64_t $tmp1871 = $tmp1869.value;
int64_t $tmp1872 = $tmp1870 - $tmp1871;
frost$core$Int64 $tmp1873 = (frost$core$Int64) {$tmp1872};
frost$core$Int64 $tmp1874 = frost$core$Int64$min$frost$core$Int64$R$frost$core$Int64($tmp1865, $tmp1873);
*(&local0) = $tmp1874;
// line 1029
frost$core$Int64 $tmp1875 = *(&local0);
frost$core$Int64 $tmp1876 = (frost$core$Int64) {0};
frost$core$Int64 $tmp1877 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp1878 = frost$core$Bit$init$builtin_bit(true);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp1879 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1875, $tmp1876, $tmp1877, $tmp1878);
frost$core$Int64 $tmp1880 = $tmp1879.start;
*(&local1) = $tmp1880;
frost$core$Int64 $tmp1881 = $tmp1879.end;
frost$core$Int64 $tmp1882 = $tmp1879.step;
frost$core$UInt64 $tmp1883 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1882);
frost$core$Int64 $tmp1884 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp1882);
frost$core$UInt64 $tmp1885 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1884);
frost$core$Bit $tmp1886 = $tmp1879.inclusive;
bool $tmp1887 = $tmp1886.value;
frost$core$Int64 $tmp1888 = (frost$core$Int64) {0};
int64_t $tmp1889 = $tmp1882.value;
int64_t $tmp1890 = $tmp1888.value;
bool $tmp1891 = $tmp1889 >= $tmp1890;
frost$core$Bit $tmp1892 = (frost$core$Bit) {$tmp1891};
bool $tmp1893 = $tmp1892.value;
if ($tmp1893) goto block6; else goto block7;
block6:;
if ($tmp1887) goto block8; else goto block9;
block8:;
int64_t $tmp1894 = $tmp1880.value;
int64_t $tmp1895 = $tmp1881.value;
bool $tmp1896 = $tmp1894 <= $tmp1895;
frost$core$Bit $tmp1897 = (frost$core$Bit) {$tmp1896};
bool $tmp1898 = $tmp1897.value;
if ($tmp1898) goto block3; else goto block4;
block9:;
int64_t $tmp1899 = $tmp1880.value;
int64_t $tmp1900 = $tmp1881.value;
bool $tmp1901 = $tmp1899 < $tmp1900;
frost$core$Bit $tmp1902 = (frost$core$Bit) {$tmp1901};
bool $tmp1903 = $tmp1902.value;
if ($tmp1903) goto block3; else goto block4;
block7:;
if ($tmp1887) goto block10; else goto block11;
block10:;
int64_t $tmp1904 = $tmp1880.value;
int64_t $tmp1905 = $tmp1881.value;
bool $tmp1906 = $tmp1904 >= $tmp1905;
frost$core$Bit $tmp1907 = (frost$core$Bit) {$tmp1906};
bool $tmp1908 = $tmp1907.value;
if ($tmp1908) goto block3; else goto block4;
block11:;
int64_t $tmp1909 = $tmp1880.value;
int64_t $tmp1910 = $tmp1881.value;
bool $tmp1911 = $tmp1909 > $tmp1910;
frost$core$Bit $tmp1912 = (frost$core$Bit) {$tmp1911};
bool $tmp1913 = $tmp1912.value;
if ($tmp1913) goto block3; else goto block4;
block3:;
// line 1030
frost$core$Int64 $tmp1914 = (frost$core$Int64) {0};
frost$core$Int64* $tmp1915 = &param1->_length;
frost$core$Int64 $tmp1916 = *$tmp1915;
frost$core$Bit $tmp1917 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp1918 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp1914, $tmp1916, $tmp1917);
frost$core$Int64 $tmp1919 = $tmp1918.min;
*(&local2) = $tmp1919;
frost$core$Int64 $tmp1920 = $tmp1918.max;
frost$core$Bit $tmp1921 = $tmp1918.inclusive;
bool $tmp1922 = $tmp1921.value;
frost$core$Int64 $tmp1923 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp1924 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1923);
if ($tmp1922) goto block15; else goto block16;
block15:;
int64_t $tmp1925 = $tmp1919.value;
int64_t $tmp1926 = $tmp1920.value;
bool $tmp1927 = $tmp1925 <= $tmp1926;
frost$core$Bit $tmp1928 = (frost$core$Bit) {$tmp1927};
bool $tmp1929 = $tmp1928.value;
if ($tmp1929) goto block12; else goto block13;
block16:;
int64_t $tmp1930 = $tmp1919.value;
int64_t $tmp1931 = $tmp1920.value;
bool $tmp1932 = $tmp1930 < $tmp1931;
frost$core$Bit $tmp1933 = (frost$core$Bit) {$tmp1932};
bool $tmp1934 = $tmp1933.value;
if ($tmp1934) goto block12; else goto block13;
block12:;
// line 1031
frost$core$Char8** $tmp1935 = &param0->data;
frost$core$Char8* $tmp1936 = *$tmp1935;
frost$core$Int64 $tmp1937 = *(&local1);
frost$core$Int64 $tmp1938 = *(&local2);
int64_t $tmp1939 = $tmp1937.value;
int64_t $tmp1940 = $tmp1938.value;
int64_t $tmp1941 = $tmp1939 + $tmp1940;
frost$core$Int64 $tmp1942 = (frost$core$Int64) {$tmp1941};
int64_t $tmp1943 = $tmp1942.value;
frost$core$Char8 $tmp1944 = $tmp1936[$tmp1943];
frost$core$Char8** $tmp1945 = &param1->data;
frost$core$Char8* $tmp1946 = *$tmp1945;
frost$core$Int64 $tmp1947 = *(&local2);
int64_t $tmp1948 = $tmp1947.value;
frost$core$Char8 $tmp1949 = $tmp1946[$tmp1948];
frost$core$Bit $tmp1950 = frost$core$Char8$$NEQ$frost$core$Char8$R$frost$core$Bit($tmp1944, $tmp1949);
bool $tmp1951 = $tmp1950.value;
if ($tmp1951) goto block17; else goto block18;
block17:;
// line 1032
goto block5;
block18:;
goto block14;
block14:;
frost$core$Int64 $tmp1952 = *(&local2);
int64_t $tmp1953 = $tmp1920.value;
int64_t $tmp1954 = $tmp1952.value;
int64_t $tmp1955 = $tmp1953 - $tmp1954;
frost$core$Int64 $tmp1956 = (frost$core$Int64) {$tmp1955};
frost$core$UInt64 $tmp1957 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1956);
if ($tmp1922) goto block20; else goto block21;
block20:;
uint64_t $tmp1958 = $tmp1957.value;
uint64_t $tmp1959 = $tmp1924.value;
bool $tmp1960 = $tmp1958 >= $tmp1959;
frost$core$Bit $tmp1961 = (frost$core$Bit) {$tmp1960};
bool $tmp1962 = $tmp1961.value;
if ($tmp1962) goto block19; else goto block13;
block21:;
uint64_t $tmp1963 = $tmp1957.value;
uint64_t $tmp1964 = $tmp1924.value;
bool $tmp1965 = $tmp1963 > $tmp1964;
frost$core$Bit $tmp1966 = (frost$core$Bit) {$tmp1965};
bool $tmp1967 = $tmp1966.value;
if ($tmp1967) goto block19; else goto block13;
block19:;
int64_t $tmp1968 = $tmp1952.value;
int64_t $tmp1969 = $tmp1923.value;
int64_t $tmp1970 = $tmp1968 + $tmp1969;
frost$core$Int64 $tmp1971 = (frost$core$Int64) {$tmp1970};
*(&local2) = $tmp1971;
goto block12;
block13:;
// line 1035
frost$core$Int64 $tmp1972 = *(&local1);
frost$core$String$Index $tmp1973 = frost$core$String$Index$init$frost$core$Int64($tmp1972);
return ((frost$core$String$Index$nullable) { ((frost$core$String$Index) ((frost$core$String$Index$nullable) { $tmp1973, true }).value), true });
block5:;
frost$core$Int64 $tmp1974 = *(&local1);
if ($tmp1893) goto block23; else goto block24;
block23:;
int64_t $tmp1975 = $tmp1881.value;
int64_t $tmp1976 = $tmp1974.value;
int64_t $tmp1977 = $tmp1975 - $tmp1976;
frost$core$Int64 $tmp1978 = (frost$core$Int64) {$tmp1977};
frost$core$UInt64 $tmp1979 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1978);
if ($tmp1887) goto block25; else goto block26;
block25:;
uint64_t $tmp1980 = $tmp1979.value;
uint64_t $tmp1981 = $tmp1883.value;
bool $tmp1982 = $tmp1980 >= $tmp1981;
frost$core$Bit $tmp1983 = (frost$core$Bit) {$tmp1982};
bool $tmp1984 = $tmp1983.value;
if ($tmp1984) goto block22; else goto block4;
block26:;
uint64_t $tmp1985 = $tmp1979.value;
uint64_t $tmp1986 = $tmp1883.value;
bool $tmp1987 = $tmp1985 > $tmp1986;
frost$core$Bit $tmp1988 = (frost$core$Bit) {$tmp1987};
bool $tmp1989 = $tmp1988.value;
if ($tmp1989) goto block22; else goto block4;
block24:;
int64_t $tmp1990 = $tmp1974.value;
int64_t $tmp1991 = $tmp1881.value;
int64_t $tmp1992 = $tmp1990 - $tmp1991;
frost$core$Int64 $tmp1993 = (frost$core$Int64) {$tmp1992};
frost$core$UInt64 $tmp1994 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp1993);
if ($tmp1887) goto block27; else goto block28;
block27:;
uint64_t $tmp1995 = $tmp1994.value;
uint64_t $tmp1996 = $tmp1885.value;
bool $tmp1997 = $tmp1995 >= $tmp1996;
frost$core$Bit $tmp1998 = (frost$core$Bit) {$tmp1997};
bool $tmp1999 = $tmp1998.value;
if ($tmp1999) goto block22; else goto block4;
block28:;
uint64_t $tmp2000 = $tmp1994.value;
uint64_t $tmp2001 = $tmp1885.value;
bool $tmp2002 = $tmp2000 > $tmp2001;
frost$core$Bit $tmp2003 = (frost$core$Bit) {$tmp2002};
bool $tmp2004 = $tmp2003.value;
if ($tmp2004) goto block22; else goto block4;
block22:;
int64_t $tmp2005 = $tmp1974.value;
int64_t $tmp2006 = $tmp1882.value;
int64_t $tmp2007 = $tmp2005 + $tmp2006;
frost$core$Int64 $tmp2008 = (frost$core$Int64) {$tmp2007};
*(&local1) = $tmp2008;
goto block3;
block4:;
// line 1037
return ((frost$core$String$Index$nullable) { .nonnull = false });

}
frost$core$Bit frost$core$String$matches$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1048
frost$core$Matcher* $tmp2009 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2010;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2010, $tmp2009);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2009));
return $tmp2010;

}
frost$core$Bit frost$core$String$contains$frost$core$RegularExpression$R$frost$core$Bit(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1059
frost$core$Matcher* $tmp2011 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
frost$core$Bit $tmp2012 = frost$core$Matcher$find$R$frost$core$Bit($tmp2011);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2011));
return $tmp2012;

}
frost$collections$ListView* frost$core$String$parse$frost$core$RegularExpression$R$frost$collections$ListView$LTfrost$core$String$GT$Q(frost$core$String* param0, frost$core$RegularExpression* param1) {

frost$core$Matcher* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$Int64 local2;
// line 1073
frost$core$Matcher* $tmp2013 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local0) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
frost$core$Matcher* $tmp2014 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2014));
*(&local0) = $tmp2013;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2013));
// line 1074
frost$core$Matcher* $tmp2015 = *(&local0);
frost$core$Bit $tmp2016;
frost$core$Matcher$matches$R$frost$core$Bit(&$tmp2016, $tmp2015);
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block1; else goto block2;
block1:;
// line 1075
frost$collections$Array* $tmp2018 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2018);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
frost$collections$Array* $tmp2019 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2019));
*(&local1) = $tmp2018;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2018));
// line 1076
frost$core$Int64 $tmp2020 = (frost$core$Int64) {1};
frost$core$Matcher* $tmp2021 = *(&local0);
frost$core$Int64 $tmp2022;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2022, $tmp2021);
frost$core$Bit $tmp2023 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2024 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2020, $tmp2022, $tmp2023);
frost$core$Int64 $tmp2025 = $tmp2024.min;
*(&local2) = $tmp2025;
frost$core$Int64 $tmp2026 = $tmp2024.max;
frost$core$Bit $tmp2027 = $tmp2024.inclusive;
bool $tmp2028 = $tmp2027.value;
frost$core$Int64 $tmp2029 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2030 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2029);
if ($tmp2028) goto block6; else goto block7;
block6:;
int64_t $tmp2031 = $tmp2025.value;
int64_t $tmp2032 = $tmp2026.value;
bool $tmp2033 = $tmp2031 <= $tmp2032;
frost$core$Bit $tmp2034 = (frost$core$Bit) {$tmp2033};
bool $tmp2035 = $tmp2034.value;
if ($tmp2035) goto block3; else goto block4;
block7:;
int64_t $tmp2036 = $tmp2025.value;
int64_t $tmp2037 = $tmp2026.value;
bool $tmp2038 = $tmp2036 < $tmp2037;
frost$core$Bit $tmp2039 = (frost$core$Bit) {$tmp2038};
bool $tmp2040 = $tmp2039.value;
if ($tmp2040) goto block3; else goto block4;
block3:;
// line 1077
frost$collections$Array* $tmp2041 = *(&local1);
frost$core$Matcher* $tmp2042 = *(&local0);
frost$core$Int64 $tmp2043 = *(&local2);
frost$core$String* $tmp2044 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2042, $tmp2043);
frost$collections$Array$add$frost$collections$Array$T($tmp2041, ((frost$core$Object*) $tmp2044));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2044));
goto block5;
block5:;
frost$core$Int64 $tmp2045 = *(&local2);
int64_t $tmp2046 = $tmp2026.value;
int64_t $tmp2047 = $tmp2045.value;
int64_t $tmp2048 = $tmp2046 - $tmp2047;
frost$core$Int64 $tmp2049 = (frost$core$Int64) {$tmp2048};
frost$core$UInt64 $tmp2050 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2049);
if ($tmp2028) goto block9; else goto block10;
block9:;
uint64_t $tmp2051 = $tmp2050.value;
uint64_t $tmp2052 = $tmp2030.value;
bool $tmp2053 = $tmp2051 >= $tmp2052;
frost$core$Bit $tmp2054 = (frost$core$Bit) {$tmp2053};
bool $tmp2055 = $tmp2054.value;
if ($tmp2055) goto block8; else goto block4;
block10:;
uint64_t $tmp2056 = $tmp2050.value;
uint64_t $tmp2057 = $tmp2030.value;
bool $tmp2058 = $tmp2056 > $tmp2057;
frost$core$Bit $tmp2059 = (frost$core$Bit) {$tmp2058};
bool $tmp2060 = $tmp2059.value;
if ($tmp2060) goto block8; else goto block4;
block8:;
int64_t $tmp2061 = $tmp2045.value;
int64_t $tmp2062 = $tmp2029.value;
int64_t $tmp2063 = $tmp2061 + $tmp2062;
frost$core$Int64 $tmp2064 = (frost$core$Int64) {$tmp2063};
*(&local2) = $tmp2064;
goto block3;
block4:;
// line 1079
frost$collections$Array* $tmp2065 = *(&local1);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) $tmp2065)));
frost$collections$Array* $tmp2066 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2066));
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Matcher* $tmp2067 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2067));
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) $tmp2065);
block2:;
// line 1081
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$ListView*) NULL)));
frost$core$Matcher* $tmp2068 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2068));
*(&local0) = ((frost$core$Matcher*) NULL);
return ((frost$collections$ListView*) NULL);

}
frost$core$String* frost$core$String$replace$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$String* param1, frost$core$String* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
// line 1092
frost$core$Bit $tmp2069 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(param1, &$s2070);
bool $tmp2071 = $tmp2069.value;
if ($tmp2071) goto block1; else goto block2;
block1:;
// line 1093
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1095
frost$core$MutableString* $tmp2072 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2072);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
frost$core$MutableString* $tmp2073 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2073));
*(&local0) = $tmp2072;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2072));
// line 1096
frost$core$String$Index $tmp2074 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2074;
// line 1097
goto block3;
block3:;
// line 1098
frost$core$String$Index $tmp2075 = *(&local1);
frost$core$String$Index$nullable $tmp2076 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2075);
*(&local2) = $tmp2076;
// line 1099
frost$core$String$Index$nullable $tmp2077 = *(&local2);
frost$core$Bit $tmp2078 = frost$core$Bit$init$builtin_bit(!$tmp2077.nonnull);
bool $tmp2079 = $tmp2078.value;
if ($tmp2079) goto block5; else goto block6;
block5:;
// line 1100
frost$core$MutableString* $tmp2080 = *(&local0);
frost$core$String$Index $tmp2081 = *(&local1);
frost$core$Bit $tmp2082 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2083 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2081, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2082);
frost$core$String* $tmp2084 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2083);
frost$core$MutableString$append$frost$core$String($tmp2080, $tmp2084);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2084));
// line 1101
goto block4;
block6:;
// line 1103
frost$core$MutableString* $tmp2085 = *(&local0);
frost$core$String$Index $tmp2086 = *(&local1);
frost$core$String$Index$nullable $tmp2087 = *(&local2);
frost$core$Bit $tmp2088 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2089 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2086, ((frost$core$String$Index) $tmp2087.value), $tmp2088);
frost$core$String* $tmp2090 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2089);
frost$core$MutableString$append$frost$core$String($tmp2085, $tmp2090);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2090));
// line 1104
frost$core$MutableString* $tmp2091 = *(&local0);
frost$core$MutableString$append$frost$core$String($tmp2091, param2);
// line 1105
frost$core$String$Index$nullable $tmp2092 = *(&local2);
frost$core$Int64 $tmp2093 = ((frost$core$String$Index) $tmp2092.value).value;
frost$core$Int64* $tmp2094 = &param1->_length;
frost$core$Int64 $tmp2095 = *$tmp2094;
int64_t $tmp2096 = $tmp2093.value;
int64_t $tmp2097 = $tmp2095.value;
int64_t $tmp2098 = $tmp2096 + $tmp2097;
frost$core$Int64 $tmp2099 = (frost$core$Int64) {$tmp2098};
frost$core$String$Index $tmp2100 = frost$core$String$Index$init$frost$core$Int64($tmp2099);
*(&local1) = $tmp2100;
goto block3;
block4:;
// line 1107
frost$core$MutableString* $tmp2101 = *(&local0);
frost$core$String* $tmp2102 = frost$core$MutableString$finish$R$frost$core$String($tmp2101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2102));
frost$core$MutableString* $tmp2103 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2103));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2102;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2) {

// line 1121
frost$core$Bit $tmp2104 = frost$core$Bit$init$builtin_bit(true);
frost$core$String* $tmp2105 = frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(param0, param1, param2, $tmp2104);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2105));
return $tmp2105;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$frost$core$String$frost$core$Bit$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$String* param2, frost$core$Bit param3) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
// line 1126
frost$core$MutableString* $tmp2106 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2106);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
frost$core$MutableString* $tmp2107 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2107));
*(&local0) = $tmp2106;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2106));
// line 1127
frost$core$Matcher* $tmp2108 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
frost$core$Matcher* $tmp2109 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2109));
*(&local1) = $tmp2108;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2108));
// line 1128
goto block1;
block1:;
frost$core$Matcher* $tmp2110 = *(&local1);
frost$core$Bit $tmp2111 = frost$core$Matcher$find$R$frost$core$Bit($tmp2110);
bool $tmp2112 = $tmp2111.value;
if ($tmp2112) goto block2; else goto block3;
block2:;
// line 1129
frost$core$Matcher* $tmp2113 = *(&local1);
frost$core$MutableString* $tmp2114 = *(&local0);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2113, $tmp2114, param2, param3);
goto block1;
block3:;
// line 1131
frost$core$Matcher* $tmp2115 = *(&local1);
frost$core$MutableString* $tmp2116 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2115, $tmp2116);
// line 1132
frost$core$MutableString* $tmp2117 = *(&local0);
frost$core$String* $tmp2118 = frost$core$MutableString$finish$R$frost$core$String($tmp2117);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2118));
frost$core$Matcher* $tmp2119 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2119));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2120 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2120));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2118;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$core$String$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$Object* local2 = NULL;
// line 1153
frost$core$MutableString* $tmp2121 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2121);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
frost$core$MutableString* $tmp2122 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2122));
*(&local0) = $tmp2121;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2121));
// line 1154
frost$core$Matcher* $tmp2123 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
frost$core$Matcher* $tmp2124 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2124));
*(&local1) = $tmp2123;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2123));
// line 1155
goto block1;
block1:;
frost$core$Matcher* $tmp2125 = *(&local1);
frost$core$Bit $tmp2126 = frost$core$Matcher$find$R$frost$core$Bit($tmp2125);
bool $tmp2127 = $tmp2126.value;
if ($tmp2127) goto block2; else goto block3;
block2:;
// line 1156
frost$core$Matcher* $tmp2128 = *(&local1);
frost$core$MutableString* $tmp2129 = *(&local0);
frost$core$Matcher* $tmp2130 = *(&local1);
frost$core$Int64 $tmp2131 = (frost$core$Int64) {0};
frost$core$String* $tmp2132 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2130, $tmp2131);
frost$core$Int8** $tmp2133 = &param2->pointer;
frost$core$Int8* $tmp2134 = *$tmp2133;
frost$core$Object** $tmp2135 = &param2->target;
frost$core$Object* $tmp2136 = *$tmp2135;
bool $tmp2137 = $tmp2136 != ((frost$core$Object*) NULL);
if ($tmp2137) goto block4; else goto block5;
block5:;
frost$core$Object* $tmp2139 = (($fn2138) $tmp2134)($tmp2132);
*(&local2) = $tmp2139;
goto block6;
block4:;
frost$core$Object* $tmp2141 = (($fn2140) $tmp2134)($tmp2136, $tmp2132);
*(&local2) = $tmp2141;
goto block6;
block6:;
frost$core$Object* $tmp2142 = *(&local2);
$fn2144 $tmp2143 = ($fn2144) $tmp2142->$class->vtable[0];
frost$core$String* $tmp2145 = $tmp2143($tmp2142);
frost$core$Bit $tmp2146 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2128, $tmp2129, $tmp2145, $tmp2146);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2145));
frost$core$Frost$unref$frost$core$Object$Q($tmp2142);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2132));
goto block1;
block3:;
// line 1158
frost$core$Matcher* $tmp2147 = *(&local1);
frost$core$MutableString* $tmp2148 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2147, $tmp2148);
// line 1159
frost$core$MutableString* $tmp2149 = *(&local0);
$fn2151 $tmp2150 = ($fn2151) ((frost$core$Object*) $tmp2149)->$class->vtable[0];
frost$core$String* $tmp2152 = $tmp2150(((frost$core$Object*) $tmp2149));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2152));
frost$core$Matcher* $tmp2153 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2153));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2154 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2154));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2152;

}
frost$core$String* frost$core$String$replace$frost$core$RegularExpression$$LPfrost$collections$ListView$LTfrost$core$String$Q$GT$RP$EQ$GT$LPfrost$core$Object$RP$R$frost$core$String(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$MutableMethod* param2) {

frost$core$MutableString* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$collections$Array* local2 = NULL;
frost$core$Int64 local3;
frost$core$Object* local4 = NULL;
// line 1173
frost$core$MutableString* $tmp2155 = (frost$core$MutableString*) frostObjectAlloc(48, (frost$core$Class*) &frost$core$MutableString$class);
frost$core$MutableString$init($tmp2155);
*(&local0) = ((frost$core$MutableString*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
frost$core$MutableString* $tmp2156 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2156));
*(&local0) = $tmp2155;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2155));
// line 1174
frost$core$Matcher* $tmp2157 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
frost$core$Matcher* $tmp2158 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2158));
*(&local1) = $tmp2157;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2157));
// line 1175
goto block1;
block1:;
frost$core$Matcher* $tmp2159 = *(&local1);
frost$core$Bit $tmp2160 = frost$core$Matcher$find$R$frost$core$Bit($tmp2159);
bool $tmp2161 = $tmp2160.value;
if ($tmp2161) goto block2; else goto block3;
block2:;
// line 1176
frost$collections$Array* $tmp2162 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2162);
*(&local2) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
frost$collections$Array* $tmp2163 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2163));
*(&local2) = $tmp2162;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2162));
// line 1177
frost$core$Int64 $tmp2164 = (frost$core$Int64) {0};
frost$core$Matcher* $tmp2165 = *(&local1);
frost$core$Int64 $tmp2166;
frost$core$Matcher$get_groupCount$R$frost$core$Int64(&$tmp2166, $tmp2165);
frost$core$Bit $tmp2167 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2168 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2164, $tmp2166, $tmp2167);
frost$core$Int64 $tmp2169 = $tmp2168.min;
*(&local3) = $tmp2169;
frost$core$Int64 $tmp2170 = $tmp2168.max;
frost$core$Bit $tmp2171 = $tmp2168.inclusive;
bool $tmp2172 = $tmp2171.value;
frost$core$Int64 $tmp2173 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2174 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2173);
if ($tmp2172) goto block7; else goto block8;
block7:;
int64_t $tmp2175 = $tmp2169.value;
int64_t $tmp2176 = $tmp2170.value;
bool $tmp2177 = $tmp2175 <= $tmp2176;
frost$core$Bit $tmp2178 = (frost$core$Bit) {$tmp2177};
bool $tmp2179 = $tmp2178.value;
if ($tmp2179) goto block4; else goto block5;
block8:;
int64_t $tmp2180 = $tmp2169.value;
int64_t $tmp2181 = $tmp2170.value;
bool $tmp2182 = $tmp2180 < $tmp2181;
frost$core$Bit $tmp2183 = (frost$core$Bit) {$tmp2182};
bool $tmp2184 = $tmp2183.value;
if ($tmp2184) goto block4; else goto block5;
block4:;
// line 1178
frost$collections$Array* $tmp2185 = *(&local2);
frost$core$Matcher* $tmp2186 = *(&local1);
frost$core$Int64 $tmp2187 = *(&local3);
frost$core$String* $tmp2188 = frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q($tmp2186, $tmp2187);
frost$collections$Array$add$frost$collections$Array$T($tmp2185, ((frost$core$Object*) $tmp2188));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2188));
goto block6;
block6:;
frost$core$Int64 $tmp2189 = *(&local3);
int64_t $tmp2190 = $tmp2170.value;
int64_t $tmp2191 = $tmp2189.value;
int64_t $tmp2192 = $tmp2190 - $tmp2191;
frost$core$Int64 $tmp2193 = (frost$core$Int64) {$tmp2192};
frost$core$UInt64 $tmp2194 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2193);
if ($tmp2172) goto block10; else goto block11;
block10:;
uint64_t $tmp2195 = $tmp2194.value;
uint64_t $tmp2196 = $tmp2174.value;
bool $tmp2197 = $tmp2195 >= $tmp2196;
frost$core$Bit $tmp2198 = (frost$core$Bit) {$tmp2197};
bool $tmp2199 = $tmp2198.value;
if ($tmp2199) goto block9; else goto block5;
block11:;
uint64_t $tmp2200 = $tmp2194.value;
uint64_t $tmp2201 = $tmp2174.value;
bool $tmp2202 = $tmp2200 > $tmp2201;
frost$core$Bit $tmp2203 = (frost$core$Bit) {$tmp2202};
bool $tmp2204 = $tmp2203.value;
if ($tmp2204) goto block9; else goto block5;
block9:;
int64_t $tmp2205 = $tmp2189.value;
int64_t $tmp2206 = $tmp2173.value;
int64_t $tmp2207 = $tmp2205 + $tmp2206;
frost$core$Int64 $tmp2208 = (frost$core$Int64) {$tmp2207};
*(&local3) = $tmp2208;
goto block4;
block5:;
// line 1180
frost$core$Matcher* $tmp2209 = *(&local1);
frost$core$MutableString* $tmp2210 = *(&local0);
frost$collections$Array* $tmp2211 = *(&local2);
frost$core$Int8** $tmp2212 = &param2->pointer;
frost$core$Int8* $tmp2213 = *$tmp2212;
frost$core$Object** $tmp2214 = &param2->target;
frost$core$Object* $tmp2215 = *$tmp2214;
bool $tmp2216 = $tmp2215 != ((frost$core$Object*) NULL);
if ($tmp2216) goto block12; else goto block13;
block13:;
frost$core$Object* $tmp2218 = (($fn2217) $tmp2213)(((frost$collections$ListView*) $tmp2211));
*(&local4) = $tmp2218;
goto block14;
block12:;
frost$core$Object* $tmp2220 = (($fn2219) $tmp2213)($tmp2215, ((frost$collections$ListView*) $tmp2211));
*(&local4) = $tmp2220;
goto block14;
block14:;
frost$core$Object* $tmp2221 = *(&local4);
$fn2223 $tmp2222 = ($fn2223) $tmp2221->$class->vtable[0];
frost$core$String* $tmp2224 = $tmp2222($tmp2221);
frost$core$Bit $tmp2225 = frost$core$Bit$init$builtin_bit(false);
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit($tmp2209, $tmp2210, $tmp2224, $tmp2225);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2224));
frost$core$Frost$unref$frost$core$Object$Q($tmp2221);
frost$collections$Array* $tmp2226 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2226));
*(&local2) = ((frost$collections$Array*) NULL);
goto block1;
block3:;
// line 1182
frost$core$Matcher* $tmp2227 = *(&local1);
frost$core$MutableString* $tmp2228 = *(&local0);
frost$core$Matcher$appendTail$frost$core$MutableString($tmp2227, $tmp2228);
// line 1183
frost$core$MutableString* $tmp2229 = *(&local0);
$fn2231 $tmp2230 = ($fn2231) ((frost$core$Object*) $tmp2229)->$class->vtable[0];
frost$core$String* $tmp2232 = $tmp2230(((frost$core$Object*) $tmp2229));
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2232));
frost$core$Matcher* $tmp2233 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2233));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$MutableString* $tmp2234 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2234));
*(&local0) = ((frost$core$MutableString*) NULL);
return $tmp2232;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1187
frost$core$Bit $tmp2235 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2236 = frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(param0, param1, $tmp2235);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2236));
return $tmp2236;

}
frost$collections$Iterator* frost$core$String$find$frost$core$String$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Index$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Bit param2) {

// line 1191
frost$core$String$MatchIterator* $tmp2237 = (frost$core$String$MatchIterator*) frostObjectAlloc(46, (frost$core$Class*) &frost$core$String$MatchIterator$class);
frost$core$String$MatchIterator$init$frost$core$String$frost$core$String$frost$core$Bit($tmp2237, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2237)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2237));
return ((frost$collections$Iterator*) $tmp2237);

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1195
frost$core$Bit $tmp2238 = frost$core$Bit$init$builtin_bit(false);
frost$collections$Iterator* $tmp2239 = frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(param0, param1, $tmp2238);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2239));
return $tmp2239;

}
frost$collections$Iterator* frost$core$String$find$frost$core$RegularExpression$frost$core$Bit$R$frost$collections$Iterator$LTfrost$core$String$Match$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Bit param2) {

// line 1199
frost$core$String$RegexMatchIterator* $tmp2240 = (frost$core$String$RegexMatchIterator*) frostObjectAlloc(34, (frost$core$Class*) &frost$core$String$RegexMatchIterator$class);
frost$core$String$RegexMatchIterator$init$frost$core$String$frost$core$RegularExpression$frost$core$Bit($tmp2240, param0, param1, param2);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((frost$collections$Iterator*) $tmp2240)));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2240));
return ((frost$collections$Iterator*) $tmp2240);

}
frost$core$String$Index frost$core$String$get_start$R$frost$core$String$Index(frost$core$String* param0) {

// line 1206
frost$core$Int64 $tmp2241 = (frost$core$Int64) {0};
frost$core$String$Index $tmp2242 = frost$core$String$Index$init$frost$core$Int64($tmp2241);
return $tmp2242;

}
frost$core$String$Index frost$core$String$get_end$R$frost$core$String$Index(frost$core$String* param0) {

// line 1213
frost$core$Int64* $tmp2243 = &param0->_length;
frost$core$Int64 $tmp2244 = *$tmp2243;
frost$core$String$Index $tmp2245 = frost$core$String$Index$init$frost$core$Int64($tmp2244);
return $tmp2245;

}
frost$core$String$Index frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

int64_t local0;
// line 1223
frost$core$Int64 $tmp2246 = param1.value;
frost$core$Int64* $tmp2247 = &param0->_length;
frost$core$Int64 $tmp2248 = *$tmp2247;
int64_t $tmp2249 = $tmp2246.value;
int64_t $tmp2250 = $tmp2248.value;
bool $tmp2251 = $tmp2249 < $tmp2250;
frost$core$Bit $tmp2252 = (frost$core$Bit) {$tmp2251};
bool $tmp2253 = $tmp2252.value;
if ($tmp2253) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2254 = (frost$core$Int64) {1223};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2255, $tmp2254);
abort(); // unreachable
block1:;
// line 1224
frost$core$Char8** $tmp2256 = &param0->data;
frost$core$Char8* $tmp2257 = *$tmp2256;
frost$core$Int64 $tmp2258 = param1.value;
int64_t $tmp2259 = $tmp2258.value;
frost$core$Char8 $tmp2260 = $tmp2257[$tmp2259];
uint8_t $tmp2261 = $tmp2260.value;
int64_t $tmp2262 = ((int64_t) $tmp2261) & 255;
*(&local0) = $tmp2262;
// line 1225
int64_t $tmp2263 = *(&local0);
bool $tmp2264 = $tmp2263 >= 240;
frost$core$Bit $tmp2265 = frost$core$Bit$init$builtin_bit($tmp2264);
bool $tmp2266 = $tmp2265.value;
if ($tmp2266) goto block3; else goto block4;
block3:;
// line 1226
frost$core$Int64 $tmp2267 = param1.value;
frost$core$Int64 $tmp2268 = (frost$core$Int64) {4};
int64_t $tmp2269 = $tmp2267.value;
int64_t $tmp2270 = $tmp2268.value;
int64_t $tmp2271 = $tmp2269 + $tmp2270;
frost$core$Int64 $tmp2272 = (frost$core$Int64) {$tmp2271};
frost$core$String$Index $tmp2273 = frost$core$String$Index$init$frost$core$Int64($tmp2272);
return $tmp2273;
block4:;
// line 1228
int64_t $tmp2274 = *(&local0);
bool $tmp2275 = $tmp2274 >= 224;
frost$core$Bit $tmp2276 = frost$core$Bit$init$builtin_bit($tmp2275);
bool $tmp2277 = $tmp2276.value;
if ($tmp2277) goto block5; else goto block6;
block5:;
// line 1229
frost$core$Int64 $tmp2278 = param1.value;
frost$core$Int64 $tmp2279 = (frost$core$Int64) {3};
int64_t $tmp2280 = $tmp2278.value;
int64_t $tmp2281 = $tmp2279.value;
int64_t $tmp2282 = $tmp2280 + $tmp2281;
frost$core$Int64 $tmp2283 = (frost$core$Int64) {$tmp2282};
frost$core$String$Index $tmp2284 = frost$core$String$Index$init$frost$core$Int64($tmp2283);
return $tmp2284;
block6:;
// line 1231
int64_t $tmp2285 = *(&local0);
bool $tmp2286 = $tmp2285 >= 192;
frost$core$Bit $tmp2287 = frost$core$Bit$init$builtin_bit($tmp2286);
bool $tmp2288 = $tmp2287.value;
if ($tmp2288) goto block7; else goto block8;
block7:;
// line 1232
frost$core$Int64 $tmp2289 = param1.value;
frost$core$Int64 $tmp2290 = (frost$core$Int64) {2};
int64_t $tmp2291 = $tmp2289.value;
int64_t $tmp2292 = $tmp2290.value;
int64_t $tmp2293 = $tmp2291 + $tmp2292;
frost$core$Int64 $tmp2294 = (frost$core$Int64) {$tmp2293};
frost$core$String$Index $tmp2295 = frost$core$String$Index$init$frost$core$Int64($tmp2294);
return $tmp2295;
block8:;
// line 1234
frost$core$Int64 $tmp2296 = param1.value;
frost$core$Int64 $tmp2297 = (frost$core$Int64) {1};
int64_t $tmp2298 = $tmp2296.value;
int64_t $tmp2299 = $tmp2297.value;
int64_t $tmp2300 = $tmp2298 + $tmp2299;
frost$core$Int64 $tmp2301 = (frost$core$Int64) {$tmp2300};
frost$core$String$Index $tmp2302 = frost$core$String$Index$init$frost$core$Int64($tmp2301);
return $tmp2302;

}
frost$core$String$Index frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1) {

frost$core$Int64 local0;
// line 1244
frost$core$Int64 $tmp2303 = param1.value;
frost$core$Int64 $tmp2304 = (frost$core$Int64) {0};
int64_t $tmp2305 = $tmp2303.value;
int64_t $tmp2306 = $tmp2304.value;
bool $tmp2307 = $tmp2305 > $tmp2306;
frost$core$Bit $tmp2308 = (frost$core$Bit) {$tmp2307};
bool $tmp2309 = $tmp2308.value;
if ($tmp2309) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2310 = (frost$core$Int64) {1244};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s2311, $tmp2310);
abort(); // unreachable
block1:;
// line 1245
frost$core$Int64 $tmp2312 = param1.value;
frost$core$Int64 $tmp2313 = (frost$core$Int64) {1};
int64_t $tmp2314 = $tmp2312.value;
int64_t $tmp2315 = $tmp2313.value;
int64_t $tmp2316 = $tmp2314 - $tmp2315;
frost$core$Int64 $tmp2317 = (frost$core$Int64) {$tmp2316};
*(&local0) = $tmp2317;
// line 1246
goto block3;
block3:;
frost$core$Char8** $tmp2318 = &param0->data;
frost$core$Char8* $tmp2319 = *$tmp2318;
frost$core$Int64 $tmp2320 = *(&local0);
int64_t $tmp2321 = $tmp2320.value;
frost$core$Char8 $tmp2322 = $tmp2319[$tmp2321];
uint8_t $tmp2323 = $tmp2322.value;
int64_t $tmp2324 = ((int64_t) $tmp2323) & 255;
bool $tmp2325 = $tmp2324 >= 128;
frost$core$Char8** $tmp2326 = &param0->data;
frost$core$Char8* $tmp2327 = *$tmp2326;
frost$core$Int64 $tmp2328 = *(&local0);
int64_t $tmp2329 = $tmp2328.value;
frost$core$Char8 $tmp2330 = $tmp2327[$tmp2329];
uint8_t $tmp2331 = $tmp2330.value;
int64_t $tmp2332 = ((int64_t) $tmp2331) & 255;
bool $tmp2333 = $tmp2332 < 192;
bool $tmp2334 = $tmp2325 & $tmp2333;
frost$core$Bit $tmp2335 = frost$core$Bit$init$builtin_bit($tmp2334);
bool $tmp2336 = $tmp2335.value;
if ($tmp2336) goto block4; else goto block5;
block4:;
// line 1248
frost$core$Int64 $tmp2337 = *(&local0);
frost$core$Int64 $tmp2338 = (frost$core$Int64) {1};
int64_t $tmp2339 = $tmp2337.value;
int64_t $tmp2340 = $tmp2338.value;
int64_t $tmp2341 = $tmp2339 - $tmp2340;
frost$core$Int64 $tmp2342 = (frost$core$Int64) {$tmp2341};
*(&local0) = $tmp2342;
goto block3;
block5:;
// line 1250
frost$core$Int64 $tmp2343 = *(&local0);
frost$core$String$Index $tmp2344 = frost$core$String$Index$init$frost$core$Int64($tmp2343);
return $tmp2344;

}
frost$core$String$Index frost$core$String$offset$frost$core$String$Index$frost$core$Int64$R$frost$core$String$Index(frost$core$String* param0, frost$core$String$Index param1, frost$core$Int64 param2) {

frost$core$String$Index local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1260
*(&local0) = param1;
// line 1261
frost$core$Int64 $tmp2345 = (frost$core$Int64) {0};
int64_t $tmp2346 = param2.value;
int64_t $tmp2347 = $tmp2345.value;
bool $tmp2348 = $tmp2346 > $tmp2347;
frost$core$Bit $tmp2349 = (frost$core$Bit) {$tmp2348};
bool $tmp2350 = $tmp2349.value;
if ($tmp2350) goto block1; else goto block3;
block1:;
// line 1262
frost$core$Int64 $tmp2351 = (frost$core$Int64) {0};
frost$core$Bit $tmp2352 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2353 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2351, param2, $tmp2352);
frost$core$Int64 $tmp2354 = $tmp2353.min;
*(&local1) = $tmp2354;
frost$core$Int64 $tmp2355 = $tmp2353.max;
frost$core$Bit $tmp2356 = $tmp2353.inclusive;
bool $tmp2357 = $tmp2356.value;
frost$core$Int64 $tmp2358 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2359 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2358);
if ($tmp2357) goto block7; else goto block8;
block7:;
int64_t $tmp2360 = $tmp2354.value;
int64_t $tmp2361 = $tmp2355.value;
bool $tmp2362 = $tmp2360 <= $tmp2361;
frost$core$Bit $tmp2363 = (frost$core$Bit) {$tmp2362};
bool $tmp2364 = $tmp2363.value;
if ($tmp2364) goto block4; else goto block5;
block8:;
int64_t $tmp2365 = $tmp2354.value;
int64_t $tmp2366 = $tmp2355.value;
bool $tmp2367 = $tmp2365 < $tmp2366;
frost$core$Bit $tmp2368 = (frost$core$Bit) {$tmp2367};
bool $tmp2369 = $tmp2368.value;
if ($tmp2369) goto block4; else goto block5;
block4:;
// line 1263
frost$core$String$Index $tmp2370 = *(&local0);
frost$core$String$Index $tmp2371 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2370);
*(&local0) = $tmp2371;
goto block6;
block6:;
frost$core$Int64 $tmp2372 = *(&local1);
int64_t $tmp2373 = $tmp2355.value;
int64_t $tmp2374 = $tmp2372.value;
int64_t $tmp2375 = $tmp2373 - $tmp2374;
frost$core$Int64 $tmp2376 = (frost$core$Int64) {$tmp2375};
frost$core$UInt64 $tmp2377 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2376);
if ($tmp2357) goto block10; else goto block11;
block10:;
uint64_t $tmp2378 = $tmp2377.value;
uint64_t $tmp2379 = $tmp2359.value;
bool $tmp2380 = $tmp2378 >= $tmp2379;
frost$core$Bit $tmp2381 = (frost$core$Bit) {$tmp2380};
bool $tmp2382 = $tmp2381.value;
if ($tmp2382) goto block9; else goto block5;
block11:;
uint64_t $tmp2383 = $tmp2377.value;
uint64_t $tmp2384 = $tmp2359.value;
bool $tmp2385 = $tmp2383 > $tmp2384;
frost$core$Bit $tmp2386 = (frost$core$Bit) {$tmp2385};
bool $tmp2387 = $tmp2386.value;
if ($tmp2387) goto block9; else goto block5;
block9:;
int64_t $tmp2388 = $tmp2372.value;
int64_t $tmp2389 = $tmp2358.value;
int64_t $tmp2390 = $tmp2388 + $tmp2389;
frost$core$Int64 $tmp2391 = (frost$core$Int64) {$tmp2390};
*(&local1) = $tmp2391;
goto block4;
block5:;
goto block2;
block3:;
// line 1
// line 1267
frost$core$Int64 $tmp2392 = (frost$core$Int64) {0};
frost$core$Int64 $tmp2393 = (frost$core$Int64) {18446744073709551615};
frost$core$Bit $tmp2394 = frost$core$Bit$init$builtin_bit(false);
frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT $tmp2395 = frost$core$SteppedRange$LTfrost$core$Int64$Cfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2392, param2, $tmp2393, $tmp2394);
frost$core$Int64 $tmp2396 = $tmp2395.start;
*(&local2) = $tmp2396;
frost$core$Int64 $tmp2397 = $tmp2395.end;
frost$core$Int64 $tmp2398 = $tmp2395.step;
frost$core$UInt64 $tmp2399 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2398);
frost$core$Int64 $tmp2400 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2398);
frost$core$UInt64 $tmp2401 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2400);
frost$core$Bit $tmp2402 = $tmp2395.inclusive;
bool $tmp2403 = $tmp2402.value;
frost$core$Int64 $tmp2404 = (frost$core$Int64) {0};
int64_t $tmp2405 = $tmp2398.value;
int64_t $tmp2406 = $tmp2404.value;
bool $tmp2407 = $tmp2405 >= $tmp2406;
frost$core$Bit $tmp2408 = (frost$core$Bit) {$tmp2407};
bool $tmp2409 = $tmp2408.value;
if ($tmp2409) goto block15; else goto block16;
block15:;
if ($tmp2403) goto block17; else goto block18;
block17:;
int64_t $tmp2410 = $tmp2396.value;
int64_t $tmp2411 = $tmp2397.value;
bool $tmp2412 = $tmp2410 <= $tmp2411;
frost$core$Bit $tmp2413 = (frost$core$Bit) {$tmp2412};
bool $tmp2414 = $tmp2413.value;
if ($tmp2414) goto block12; else goto block13;
block18:;
int64_t $tmp2415 = $tmp2396.value;
int64_t $tmp2416 = $tmp2397.value;
bool $tmp2417 = $tmp2415 < $tmp2416;
frost$core$Bit $tmp2418 = (frost$core$Bit) {$tmp2417};
bool $tmp2419 = $tmp2418.value;
if ($tmp2419) goto block12; else goto block13;
block16:;
if ($tmp2403) goto block19; else goto block20;
block19:;
int64_t $tmp2420 = $tmp2396.value;
int64_t $tmp2421 = $tmp2397.value;
bool $tmp2422 = $tmp2420 >= $tmp2421;
frost$core$Bit $tmp2423 = (frost$core$Bit) {$tmp2422};
bool $tmp2424 = $tmp2423.value;
if ($tmp2424) goto block12; else goto block13;
block20:;
int64_t $tmp2425 = $tmp2396.value;
int64_t $tmp2426 = $tmp2397.value;
bool $tmp2427 = $tmp2425 > $tmp2426;
frost$core$Bit $tmp2428 = (frost$core$Bit) {$tmp2427};
bool $tmp2429 = $tmp2428.value;
if ($tmp2429) goto block12; else goto block13;
block12:;
// line 1268
frost$core$String$Index $tmp2430 = *(&local0);
frost$core$String$Index $tmp2431 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2430);
*(&local0) = $tmp2431;
goto block14;
block14:;
frost$core$Int64 $tmp2432 = *(&local2);
if ($tmp2409) goto block22; else goto block23;
block22:;
int64_t $tmp2433 = $tmp2397.value;
int64_t $tmp2434 = $tmp2432.value;
int64_t $tmp2435 = $tmp2433 - $tmp2434;
frost$core$Int64 $tmp2436 = (frost$core$Int64) {$tmp2435};
frost$core$UInt64 $tmp2437 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2436);
if ($tmp2403) goto block24; else goto block25;
block24:;
uint64_t $tmp2438 = $tmp2437.value;
uint64_t $tmp2439 = $tmp2399.value;
bool $tmp2440 = $tmp2438 >= $tmp2439;
frost$core$Bit $tmp2441 = (frost$core$Bit) {$tmp2440};
bool $tmp2442 = $tmp2441.value;
if ($tmp2442) goto block21; else goto block13;
block25:;
uint64_t $tmp2443 = $tmp2437.value;
uint64_t $tmp2444 = $tmp2399.value;
bool $tmp2445 = $tmp2443 > $tmp2444;
frost$core$Bit $tmp2446 = (frost$core$Bit) {$tmp2445};
bool $tmp2447 = $tmp2446.value;
if ($tmp2447) goto block21; else goto block13;
block23:;
int64_t $tmp2448 = $tmp2432.value;
int64_t $tmp2449 = $tmp2397.value;
int64_t $tmp2450 = $tmp2448 - $tmp2449;
frost$core$Int64 $tmp2451 = (frost$core$Int64) {$tmp2450};
frost$core$UInt64 $tmp2452 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2451);
if ($tmp2403) goto block26; else goto block27;
block26:;
uint64_t $tmp2453 = $tmp2452.value;
uint64_t $tmp2454 = $tmp2401.value;
bool $tmp2455 = $tmp2453 >= $tmp2454;
frost$core$Bit $tmp2456 = (frost$core$Bit) {$tmp2455};
bool $tmp2457 = $tmp2456.value;
if ($tmp2457) goto block21; else goto block13;
block27:;
uint64_t $tmp2458 = $tmp2452.value;
uint64_t $tmp2459 = $tmp2401.value;
bool $tmp2460 = $tmp2458 > $tmp2459;
frost$core$Bit $tmp2461 = (frost$core$Bit) {$tmp2460};
bool $tmp2462 = $tmp2461.value;
if ($tmp2462) goto block21; else goto block13;
block21:;
int64_t $tmp2463 = $tmp2432.value;
int64_t $tmp2464 = $tmp2398.value;
int64_t $tmp2465 = $tmp2463 + $tmp2464;
frost$core$Int64 $tmp2466 = (frost$core$Int64) {$tmp2465};
*(&local2) = $tmp2466;
goto block12;
block13:;
goto block2;
block2:;
// line 1271
frost$core$String$Index $tmp2467 = *(&local0);
return $tmp2467;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1284
frost$core$Int32 $tmp2468 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2469 = frost$core$Char32$init$frost$core$Int32($tmp2468);
frost$core$String* $tmp2470 = frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2469);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2470));
return $tmp2470;

}
frost$core$String* frost$core$String$leftAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1298
frost$core$Int64 $tmp2471 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2472 = $tmp2471.value;
int64_t $tmp2473 = param1.value;
bool $tmp2474 = $tmp2472 >= $tmp2473;
frost$core$Bit $tmp2475 = (frost$core$Bit) {$tmp2474};
bool $tmp2476 = $tmp2475.value;
if ($tmp2476) goto block1; else goto block2;
block1:;
// line 1299
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1301
frost$core$Int64 $tmp2477 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2478 = param1.value;
int64_t $tmp2479 = $tmp2477.value;
int64_t $tmp2480 = $tmp2478 - $tmp2479;
frost$core$Int64 $tmp2481 = (frost$core$Int64) {$tmp2480};
frost$core$String* $tmp2482 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2481);
frost$core$String* $tmp2483 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(param0, $tmp2482);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2483));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2482));
return $tmp2483;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1314
frost$core$Int32 $tmp2484 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2485 = frost$core$Char32$init$frost$core$Int32($tmp2484);
frost$core$String* $tmp2486 = frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2485);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2486));
return $tmp2486;

}
frost$core$String* frost$core$String$rightAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

// line 1328
frost$core$Int64 $tmp2487 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2488 = $tmp2487.value;
int64_t $tmp2489 = param1.value;
bool $tmp2490 = $tmp2488 >= $tmp2489;
frost$core$Bit $tmp2491 = (frost$core$Bit) {$tmp2490};
bool $tmp2492 = $tmp2491.value;
if ($tmp2492) goto block1; else goto block2;
block1:;
// line 1329
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1331
frost$core$Int64 $tmp2493 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2494 = param1.value;
int64_t $tmp2495 = $tmp2493.value;
int64_t $tmp2496 = $tmp2494 - $tmp2495;
frost$core$Int64 $tmp2497 = (frost$core$Int64) {$tmp2496};
frost$core$String* $tmp2498 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2497);
frost$core$String* $tmp2499 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2498, param0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2499));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2498));
return $tmp2499;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1) {

// line 1346
frost$core$Int32 $tmp2500 = (frost$core$Int32) {32};
frost$core$Char32 $tmp2501 = frost$core$Char32$init$frost$core$Int32($tmp2500);
frost$core$String* $tmp2502 = frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(param0, param1, $tmp2501);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2502));
return $tmp2502;

}
frost$core$String* frost$core$String$centerAlign$frost$core$Int64$frost$core$Char32$R$frost$core$String(frost$core$String* param0, frost$core$Int64 param1, frost$core$Char32 param2) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
// line 1362
frost$core$Int64 $tmp2503 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2504 = $tmp2503.value;
int64_t $tmp2505 = param1.value;
bool $tmp2506 = $tmp2504 >= $tmp2505;
frost$core$Bit $tmp2507 = (frost$core$Bit) {$tmp2506};
bool $tmp2508 = $tmp2507.value;
if ($tmp2508) goto block1; else goto block2;
block1:;
// line 1363
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param0));
return param0;
block2:;
// line 1365
frost$core$Int64 $tmp2509 = frost$core$String$get_length$R$frost$core$Int64(param0);
int64_t $tmp2510 = param1.value;
int64_t $tmp2511 = $tmp2509.value;
int64_t $tmp2512 = $tmp2510 - $tmp2511;
frost$core$Int64 $tmp2513 = (frost$core$Int64) {$tmp2512};
*(&local0) = $tmp2513;
// line 1366
frost$core$Int64 $tmp2514 = *(&local0);
frost$core$Int64 $tmp2515 = (frost$core$Int64) {2};
int64_t $tmp2516 = $tmp2514.value;
int64_t $tmp2517 = $tmp2515.value;
int64_t $tmp2518 = $tmp2516 / $tmp2517;
frost$core$Int64 $tmp2519 = (frost$core$Int64) {$tmp2518};
*(&local1) = $tmp2519;
// line 1367
frost$core$Int64 $tmp2520 = *(&local0);
frost$core$Int64 $tmp2521 = *(&local1);
int64_t $tmp2522 = $tmp2520.value;
int64_t $tmp2523 = $tmp2521.value;
int64_t $tmp2524 = $tmp2522 - $tmp2523;
frost$core$Int64 $tmp2525 = (frost$core$Int64) {$tmp2524};
*(&local2) = $tmp2525;
// line 1368
frost$core$Int64 $tmp2526 = *(&local1);
frost$core$String* $tmp2527 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2526);
frost$core$String* $tmp2528 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2527, param0);
frost$core$Int64 $tmp2529 = *(&local2);
frost$core$String* $tmp2530 = frost$core$Char32$$MUL$frost$core$Int64$R$frost$core$String(param2, $tmp2529);
frost$core$String* $tmp2531 = frost$core$String$$ADD$frost$core$String$R$frost$core$String($tmp2528, $tmp2530);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2531));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2530));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2528));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2527));
return $tmp2531;

}
frost$collections$Array* frost$core$String$split$frost$core$String$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1) {

// line 1379
frost$core$Int64 $tmp2532 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2533 = frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2532);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2533));
return $tmp2533;

}
frost$collections$Array* frost$core$String$split$frost$core$String$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$String* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index$nullable local2;
frost$core$Bit local3;
// line 1392
frost$collections$Array* $tmp2534 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2534);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
frost$collections$Array* $tmp2535 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2535));
*(&local0) = $tmp2534;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2534));
// line 1393
frost$core$String$Index $tmp2536 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local1) = $tmp2536;
// line 1394
goto block1;
block1:;
// line 1395
// line 1396
frost$core$Int64* $tmp2537 = &param1->_length;
frost$core$Int64 $tmp2538 = *$tmp2537;
frost$core$Int64 $tmp2539 = (frost$core$Int64) {0};
frost$core$Bit $tmp2540 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2538, $tmp2539);
bool $tmp2541 = $tmp2540.value;
if ($tmp2541) goto block3; else goto block5;
block3:;
// line 1397
frost$core$String$Index $tmp2542 = *(&local1);
frost$core$String$Index $tmp2543 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(param0, $tmp2542);
*(&local2) = ((frost$core$String$Index$nullable) { $tmp2543, true });
goto block4;
block5:;
// line 1
// line 1400
frost$core$String$Index $tmp2544 = *(&local1);
frost$core$String$Index$nullable $tmp2545 = frost$core$String$indexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q(param0, param1, $tmp2544);
*(&local2) = $tmp2545;
goto block4;
block4:;
// line 1402
frost$core$String$Index$nullable $tmp2546 = *(&local2);
frost$core$Bit $tmp2547 = frost$core$Bit$init$builtin_bit(!$tmp2546.nonnull);
bool $tmp2548 = $tmp2547.value;
if ($tmp2548) goto block8; else goto block9;
block8:;
*(&local3) = $tmp2547;
goto block10;
block9:;
frost$collections$Array* $tmp2549 = *(&local0);
ITable* $tmp2550 = ((frost$collections$CollectionView*) $tmp2549)->$class->itable;
while ($tmp2550->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2550 = $tmp2550->next;
}
$fn2552 $tmp2551 = $tmp2550->methods[0];
frost$core$Int64 $tmp2553 = $tmp2551(((frost$collections$CollectionView*) $tmp2549));
frost$core$Int64 $tmp2554 = (frost$core$Int64) {1};
int64_t $tmp2555 = param2.value;
int64_t $tmp2556 = $tmp2554.value;
int64_t $tmp2557 = $tmp2555 - $tmp2556;
frost$core$Int64 $tmp2558 = (frost$core$Int64) {$tmp2557};
frost$core$Bit $tmp2559 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2553, $tmp2558);
*(&local3) = $tmp2559;
goto block10;
block10:;
frost$core$Bit $tmp2560 = *(&local3);
bool $tmp2561 = $tmp2560.value;
if ($tmp2561) goto block6; else goto block7;
block6:;
// line 1403
frost$collections$Array* $tmp2562 = *(&local0);
frost$core$String$Index $tmp2563 = *(&local1);
frost$core$Bit $tmp2564 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2565 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2563, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2564);
frost$core$String* $tmp2566 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2565);
frost$collections$Array$add$frost$collections$Array$T($tmp2562, ((frost$core$Object*) $tmp2566));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2566));
// line 1404
goto block2;
block7:;
// line 1406
frost$collections$Array* $tmp2567 = *(&local0);
frost$core$String$Index $tmp2568 = *(&local1);
frost$core$String$Index$nullable $tmp2569 = *(&local2);
frost$core$Bit $tmp2570 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2571 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2568, ((frost$core$String$Index) $tmp2569.value), $tmp2570);
frost$core$String* $tmp2572 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2571);
frost$collections$Array$add$frost$collections$Array$T($tmp2567, ((frost$core$Object*) $tmp2572));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2572));
// line 1407
frost$core$String$Index$nullable $tmp2573 = *(&local2);
frost$core$Int64 $tmp2574 = ((frost$core$String$Index) $tmp2573.value).value;
frost$core$Int64* $tmp2575 = &param1->_length;
frost$core$Int64 $tmp2576 = *$tmp2575;
int64_t $tmp2577 = $tmp2574.value;
int64_t $tmp2578 = $tmp2576.value;
int64_t $tmp2579 = $tmp2577 + $tmp2578;
frost$core$Int64 $tmp2580 = (frost$core$Int64) {$tmp2579};
frost$core$String$Index $tmp2581 = frost$core$String$Index$init$frost$core$Int64($tmp2580);
*(&local1) = $tmp2581;
goto block1;
block2:;
// line 1409
frost$collections$Array* $tmp2582 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2582));
frost$collections$Array* $tmp2583 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2583));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2582;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1, frost$core$Int64 param2) {

frost$collections$Array* local0 = NULL;
frost$core$Matcher* local1 = NULL;
frost$core$String$Index local2;
frost$core$Bit local3;
frost$core$Bit local4;
frost$core$String$Index local5;
frost$core$Int64 $tmp2584 = (frost$core$Int64) {0};
int64_t $tmp2585 = param2.value;
int64_t $tmp2586 = $tmp2584.value;
bool $tmp2587 = $tmp2585 > $tmp2586;
frost$core$Bit $tmp2588 = (frost$core$Bit) {$tmp2587};
bool $tmp2589 = $tmp2588.value;
if ($tmp2589) goto block1; else goto block2;
block2:;
frost$core$Int64 $tmp2590 = (frost$core$Int64) {1423};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s2591, $tmp2590, &$s2592);
abort(); // unreachable
block1:;
// line 1424
frost$collections$Array* $tmp2593 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp2593);
*(&local0) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
frost$collections$Array* $tmp2594 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2594));
*(&local0) = $tmp2593;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2593));
// line 1425
frost$core$Matcher* $tmp2595 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(param1, param0);
*(&local1) = ((frost$core$Matcher*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
frost$core$Matcher* $tmp2596 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2596));
*(&local1) = $tmp2595;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2595));
// line 1426
frost$core$String$Index $tmp2597 = frost$core$String$get_start$R$frost$core$String$Index(param0);
*(&local2) = $tmp2597;
// line 1427
goto block3;
block3:;
// line 1428
frost$core$Matcher* $tmp2598 = *(&local1);
frost$core$Bit $tmp2599 = frost$core$Matcher$find$R$frost$core$Bit($tmp2598);
*(&local3) = $tmp2599;
// line 1429
frost$core$Bit $tmp2600 = *(&local3);
frost$core$Bit $tmp2601 = frost$core$Bit$$NOT$R$frost$core$Bit($tmp2600);
bool $tmp2602 = $tmp2601.value;
if ($tmp2602) goto block7; else goto block8;
block7:;
*(&local4) = $tmp2601;
goto block9;
block8:;
frost$collections$Array* $tmp2603 = *(&local0);
ITable* $tmp2604 = ((frost$collections$CollectionView*) $tmp2603)->$class->itable;
while ($tmp2604->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp2604 = $tmp2604->next;
}
$fn2606 $tmp2605 = $tmp2604->methods[0];
frost$core$Int64 $tmp2607 = $tmp2605(((frost$collections$CollectionView*) $tmp2603));
frost$core$Int64 $tmp2608 = (frost$core$Int64) {1};
int64_t $tmp2609 = param2.value;
int64_t $tmp2610 = $tmp2608.value;
int64_t $tmp2611 = $tmp2609 - $tmp2610;
frost$core$Int64 $tmp2612 = (frost$core$Int64) {$tmp2611};
frost$core$Bit $tmp2613 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2607, $tmp2612);
*(&local4) = $tmp2613;
goto block9;
block9:;
frost$core$Bit $tmp2614 = *(&local4);
bool $tmp2615 = $tmp2614.value;
if ($tmp2615) goto block5; else goto block6;
block5:;
// line 1430
frost$collections$Array* $tmp2616 = *(&local0);
frost$core$String$Index $tmp2617 = *(&local2);
frost$core$Bit $tmp2618 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp2619 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp2617, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp2618);
frost$core$String* $tmp2620 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param0, $tmp2619);
frost$collections$Array$add$frost$collections$Array$T($tmp2616, ((frost$core$Object*) $tmp2620));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2620));
// line 1431
goto block4;
block6:;
// line 1433
frost$core$Matcher* $tmp2621 = *(&local1);
frost$core$String$Index $tmp2622;
frost$core$Matcher$get_start$R$frost$core$String$Index(&$tmp2622, $tmp2621);
*(&local5) = $tmp2622;
// line 1434
frost$collections$Array* $tmp2623 = *(&local0);
frost$core$String$Index $tmp2624 = *(&local2);
frost$core$String$Index $tmp2625 = *(&local5);
frost$core$Bit $tmp2626 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$String$Index$GT $tmp2627 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit($tmp2624, $tmp2625, $tmp2626);
frost$core$String* $tmp2628 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param0, $tmp2627);
frost$collections$Array$add$frost$collections$Array$T($tmp2623, ((frost$core$Object*) $tmp2628));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2628));
// line 1435
frost$core$String$Index $tmp2629 = *(&local5);
frost$core$Int64 $tmp2630 = $tmp2629.value;
frost$core$Matcher* $tmp2631 = *(&local1);
frost$core$String$Index $tmp2632;
frost$core$Matcher$get_end$R$frost$core$String$Index(&$tmp2632, $tmp2631);
frost$core$Int64 $tmp2633 = $tmp2632.value;
frost$core$Int64 $tmp2634 = frost$core$Int64$max$frost$core$Int64$R$frost$core$Int64($tmp2630, $tmp2633);
frost$core$String$Index $tmp2635 = frost$core$String$Index$init$frost$core$Int64($tmp2634);
*(&local2) = $tmp2635;
goto block3;
block4:;
// line 1437
frost$collections$Array* $tmp2636 = *(&local0);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2636));
frost$core$Matcher* $tmp2637 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2637));
*(&local1) = ((frost$core$Matcher*) NULL);
frost$collections$Array* $tmp2638 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2638));
*(&local0) = ((frost$collections$Array*) NULL);
return $tmp2636;

}
frost$collections$Array* frost$core$String$split$frost$core$RegularExpression$R$frost$collections$Array$LTfrost$core$String$GT(frost$core$String* param0, frost$core$RegularExpression* param1) {

// line 1450
frost$core$Int64 $tmp2639 = (frost$core$Int64) {9223372036854775807};
frost$collections$Array* $tmp2640 = frost$core$String$split$frost$core$RegularExpression$frost$core$Int64$R$frost$collections$Array$LTfrost$core$String$GT(param0, param1, $tmp2639);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2640));
return $tmp2640;

}
frost$core$Int64$nullable frost$core$String$get_asInt64$R$frost$core$Int64$Q(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
frost$core$Int64 local2;
frost$core$Int64 local3;
frost$core$Bit local4;
// line 1462
frost$core$Int64* $tmp2641 = &param0->_length;
frost$core$Int64 $tmp2642 = *$tmp2641;
frost$core$Int64 $tmp2643 = (frost$core$Int64) {0};
frost$core$Bit $tmp2644 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2642, $tmp2643);
bool $tmp2645 = $tmp2644.value;
if ($tmp2645) goto block1; else goto block2;
block1:;
// line 1463
return ((frost$core$Int64$nullable) { .nonnull = false });
block2:;
// line 1465
frost$core$Int64 $tmp2646 = (frost$core$Int64) {0};
*(&local0) = $tmp2646;
// line 1466
// line 1467
frost$core$Char8** $tmp2647 = &param0->data;
frost$core$Char8* $tmp2648 = *$tmp2647;
frost$core$Int64 $tmp2649 = (frost$core$Int64) {0};
int64_t $tmp2650 = $tmp2649.value;
frost$core$Char8 $tmp2651 = $tmp2648[$tmp2650];
frost$core$UInt8 $tmp2652 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2653 = frost$core$Char8$init$frost$core$UInt8($tmp2652);
frost$core$Bit $tmp2654 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2651, $tmp2653);
bool $tmp2655 = $tmp2654.value;
if ($tmp2655) goto block3; else goto block5;
block3:;
// line 1468
frost$core$Int64 $tmp2656 = (frost$core$Int64) {1};
*(&local1) = $tmp2656;
goto block4;
block5:;
// line 1
// line 1471
frost$core$Int64 $tmp2657 = (frost$core$Int64) {0};
*(&local1) = $tmp2657;
goto block4;
block4:;
// line 1473
frost$core$Int64 $tmp2658 = *(&local1);
frost$core$Int64* $tmp2659 = &param0->_length;
frost$core$Int64 $tmp2660 = *$tmp2659;
frost$core$Bit $tmp2661 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2662 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2658, $tmp2660, $tmp2661);
frost$core$Int64 $tmp2663 = $tmp2662.min;
*(&local2) = $tmp2663;
frost$core$Int64 $tmp2664 = $tmp2662.max;
frost$core$Bit $tmp2665 = $tmp2662.inclusive;
bool $tmp2666 = $tmp2665.value;
frost$core$Int64 $tmp2667 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2668 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2667);
if ($tmp2666) goto block9; else goto block10;
block9:;
int64_t $tmp2669 = $tmp2663.value;
int64_t $tmp2670 = $tmp2664.value;
bool $tmp2671 = $tmp2669 <= $tmp2670;
frost$core$Bit $tmp2672 = (frost$core$Bit) {$tmp2671};
bool $tmp2673 = $tmp2672.value;
if ($tmp2673) goto block6; else goto block7;
block10:;
int64_t $tmp2674 = $tmp2663.value;
int64_t $tmp2675 = $tmp2664.value;
bool $tmp2676 = $tmp2674 < $tmp2675;
frost$core$Bit $tmp2677 = (frost$core$Bit) {$tmp2676};
bool $tmp2678 = $tmp2677.value;
if ($tmp2678) goto block6; else goto block7;
block6:;
// line 1474
frost$core$Char8** $tmp2679 = &param0->data;
frost$core$Char8* $tmp2680 = *$tmp2679;
frost$core$Int64 $tmp2681 = *(&local2);
int64_t $tmp2682 = $tmp2681.value;
frost$core$Char8 $tmp2683 = $tmp2680[$tmp2682];
uint8_t $tmp2684 = $tmp2683.value;
frost$core$Int64 $tmp2685 = (frost$core$Int64) {((int64_t) $tmp2684)};
frost$core$Int64 $tmp2686 = (frost$core$Int64) {48};
int64_t $tmp2687 = $tmp2685.value;
int64_t $tmp2688 = $tmp2686.value;
int64_t $tmp2689 = $tmp2687 - $tmp2688;
frost$core$Int64 $tmp2690 = (frost$core$Int64) {$tmp2689};
*(&local3) = $tmp2690;
// line 1475
frost$core$Int64 $tmp2691 = *(&local3);
frost$core$Int64 $tmp2692 = (frost$core$Int64) {0};
int64_t $tmp2693 = $tmp2691.value;
int64_t $tmp2694 = $tmp2692.value;
bool $tmp2695 = $tmp2693 < $tmp2694;
frost$core$Bit $tmp2696 = (frost$core$Bit) {$tmp2695};
bool $tmp2697 = $tmp2696.value;
if ($tmp2697) goto block13; else goto block14;
block13:;
*(&local4) = $tmp2696;
goto block15;
block14:;
frost$core$Int64 $tmp2698 = *(&local3);
frost$core$Int64 $tmp2699 = (frost$core$Int64) {9};
int64_t $tmp2700 = $tmp2698.value;
int64_t $tmp2701 = $tmp2699.value;
bool $tmp2702 = $tmp2700 > $tmp2701;
frost$core$Bit $tmp2703 = (frost$core$Bit) {$tmp2702};
*(&local4) = $tmp2703;
goto block15;
block15:;
frost$core$Bit $tmp2704 = *(&local4);
bool $tmp2705 = $tmp2704.value;
if ($tmp2705) goto block11; else goto block12;
block11:;
// line 1476
return ((frost$core$Int64$nullable) { .nonnull = false });
block12:;
// line 1478
frost$core$Int64 $tmp2706 = *(&local0);
frost$core$Int64 $tmp2707 = (frost$core$Int64) {10};
int64_t $tmp2708 = $tmp2706.value;
int64_t $tmp2709 = $tmp2707.value;
int64_t $tmp2710 = $tmp2708 * $tmp2709;
frost$core$Int64 $tmp2711 = (frost$core$Int64) {$tmp2710};
frost$core$Int64 $tmp2712 = *(&local3);
int64_t $tmp2713 = $tmp2711.value;
int64_t $tmp2714 = $tmp2712.value;
int64_t $tmp2715 = $tmp2713 + $tmp2714;
frost$core$Int64 $tmp2716 = (frost$core$Int64) {$tmp2715};
*(&local0) = $tmp2716;
goto block8;
block8:;
frost$core$Int64 $tmp2717 = *(&local2);
int64_t $tmp2718 = $tmp2664.value;
int64_t $tmp2719 = $tmp2717.value;
int64_t $tmp2720 = $tmp2718 - $tmp2719;
frost$core$Int64 $tmp2721 = (frost$core$Int64) {$tmp2720};
frost$core$UInt64 $tmp2722 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2721);
if ($tmp2666) goto block17; else goto block18;
block17:;
uint64_t $tmp2723 = $tmp2722.value;
uint64_t $tmp2724 = $tmp2668.value;
bool $tmp2725 = $tmp2723 >= $tmp2724;
frost$core$Bit $tmp2726 = (frost$core$Bit) {$tmp2725};
bool $tmp2727 = $tmp2726.value;
if ($tmp2727) goto block16; else goto block7;
block18:;
uint64_t $tmp2728 = $tmp2722.value;
uint64_t $tmp2729 = $tmp2668.value;
bool $tmp2730 = $tmp2728 > $tmp2729;
frost$core$Bit $tmp2731 = (frost$core$Bit) {$tmp2730};
bool $tmp2732 = $tmp2731.value;
if ($tmp2732) goto block16; else goto block7;
block16:;
int64_t $tmp2733 = $tmp2717.value;
int64_t $tmp2734 = $tmp2667.value;
int64_t $tmp2735 = $tmp2733 + $tmp2734;
frost$core$Int64 $tmp2736 = (frost$core$Int64) {$tmp2735};
*(&local2) = $tmp2736;
goto block6;
block7:;
// line 1480
frost$core$Char8** $tmp2737 = &param0->data;
frost$core$Char8* $tmp2738 = *$tmp2737;
frost$core$Int64 $tmp2739 = (frost$core$Int64) {0};
int64_t $tmp2740 = $tmp2739.value;
frost$core$Char8 $tmp2741 = $tmp2738[$tmp2740];
frost$core$UInt8 $tmp2742 = (frost$core$UInt8) {45};
frost$core$Char8 $tmp2743 = frost$core$Char8$init$frost$core$UInt8($tmp2742);
frost$core$Bit $tmp2744 = frost$core$Char8$$EQ$frost$core$Char8$R$frost$core$Bit($tmp2741, $tmp2743);
bool $tmp2745 = $tmp2744.value;
if ($tmp2745) goto block19; else goto block20;
block19:;
// line 1481
frost$core$Int64 $tmp2746 = *(&local0);
frost$core$Int64 $tmp2747 = frost$core$Int64$$SUB$R$frost$core$Int64($tmp2746);
*(&local0) = $tmp2747;
goto block20;
block20:;
// line 1483
frost$core$Int64 $tmp2748 = *(&local0);
return ((frost$core$Int64$nullable) { $tmp2748, true });

}
frost$core$UInt64$nullable frost$core$String$get_asUInt64$R$frost$core$UInt64$Q(frost$core$String* param0) {

frost$core$UInt64 local0;
frost$core$Int64 local1;
frost$core$UInt64 local2;
frost$core$Bit local3;
// line 1494
frost$core$Int64* $tmp2749 = &param0->_length;
frost$core$Int64 $tmp2750 = *$tmp2749;
frost$core$Int64 $tmp2751 = (frost$core$Int64) {0};
frost$core$Bit $tmp2752 = frost$core$Int64$$EQ$frost$core$Int64$R$frost$core$Bit($tmp2750, $tmp2751);
bool $tmp2753 = $tmp2752.value;
if ($tmp2753) goto block1; else goto block2;
block1:;
// line 1495
return ((frost$core$UInt64$nullable) { .nonnull = false });
block2:;
// line 1497
frost$core$UInt64 $tmp2754 = (frost$core$UInt64) {0};
*(&local0) = $tmp2754;
// line 1498
frost$core$Int64 $tmp2755 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2756 = &param0->_length;
frost$core$Int64 $tmp2757 = *$tmp2756;
frost$core$Bit $tmp2758 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2759 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2755, $tmp2757, $tmp2758);
frost$core$Int64 $tmp2760 = $tmp2759.min;
*(&local1) = $tmp2760;
frost$core$Int64 $tmp2761 = $tmp2759.max;
frost$core$Bit $tmp2762 = $tmp2759.inclusive;
bool $tmp2763 = $tmp2762.value;
frost$core$Int64 $tmp2764 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2765 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2764);
if ($tmp2763) goto block6; else goto block7;
block6:;
int64_t $tmp2766 = $tmp2760.value;
int64_t $tmp2767 = $tmp2761.value;
bool $tmp2768 = $tmp2766 <= $tmp2767;
frost$core$Bit $tmp2769 = (frost$core$Bit) {$tmp2768};
bool $tmp2770 = $tmp2769.value;
if ($tmp2770) goto block3; else goto block4;
block7:;
int64_t $tmp2771 = $tmp2760.value;
int64_t $tmp2772 = $tmp2761.value;
bool $tmp2773 = $tmp2771 < $tmp2772;
frost$core$Bit $tmp2774 = (frost$core$Bit) {$tmp2773};
bool $tmp2775 = $tmp2774.value;
if ($tmp2775) goto block3; else goto block4;
block3:;
// line 1499
frost$core$Char8** $tmp2776 = &param0->data;
frost$core$Char8* $tmp2777 = *$tmp2776;
frost$core$Int64 $tmp2778 = *(&local1);
int64_t $tmp2779 = $tmp2778.value;
frost$core$Char8 $tmp2780 = $tmp2777[$tmp2779];
uint8_t $tmp2781 = $tmp2780.value;
frost$core$UInt64 $tmp2782 = (frost$core$UInt64) {((uint64_t) $tmp2781)};
frost$core$UInt64 $tmp2783 = (frost$core$UInt64) {48};
uint64_t $tmp2784 = $tmp2782.value;
uint64_t $tmp2785 = $tmp2783.value;
uint64_t $tmp2786 = $tmp2784 - $tmp2785;
frost$core$UInt64 $tmp2787 = (frost$core$UInt64) {$tmp2786};
*(&local2) = $tmp2787;
// line 1500
frost$core$UInt64 $tmp2788 = *(&local2);
frost$core$UInt64 $tmp2789 = (frost$core$UInt64) {0};
uint64_t $tmp2790 = $tmp2788.value;
uint64_t $tmp2791 = $tmp2789.value;
bool $tmp2792 = $tmp2790 < $tmp2791;
frost$core$Bit $tmp2793 = (frost$core$Bit) {$tmp2792};
bool $tmp2794 = $tmp2793.value;
if ($tmp2794) goto block10; else goto block11;
block10:;
*(&local3) = $tmp2793;
goto block12;
block11:;
frost$core$UInt64 $tmp2795 = *(&local2);
frost$core$UInt64 $tmp2796 = (frost$core$UInt64) {9};
uint64_t $tmp2797 = $tmp2795.value;
uint64_t $tmp2798 = $tmp2796.value;
bool $tmp2799 = $tmp2797 > $tmp2798;
frost$core$Bit $tmp2800 = (frost$core$Bit) {$tmp2799};
*(&local3) = $tmp2800;
goto block12;
block12:;
frost$core$Bit $tmp2801 = *(&local3);
bool $tmp2802 = $tmp2801.value;
if ($tmp2802) goto block8; else goto block9;
block8:;
// line 1501
return ((frost$core$UInt64$nullable) { .nonnull = false });
block9:;
// line 1503
frost$core$UInt64 $tmp2803 = *(&local0);
frost$core$UInt64 $tmp2804 = (frost$core$UInt64) {10};
uint64_t $tmp2805 = $tmp2803.value;
uint64_t $tmp2806 = $tmp2804.value;
uint64_t $tmp2807 = $tmp2805 * $tmp2806;
frost$core$UInt64 $tmp2808 = (frost$core$UInt64) {$tmp2807};
frost$core$UInt64 $tmp2809 = *(&local2);
uint64_t $tmp2810 = $tmp2808.value;
uint64_t $tmp2811 = $tmp2809.value;
uint64_t $tmp2812 = $tmp2810 + $tmp2811;
frost$core$UInt64 $tmp2813 = (frost$core$UInt64) {$tmp2812};
*(&local0) = $tmp2813;
goto block5;
block5:;
frost$core$Int64 $tmp2814 = *(&local1);
int64_t $tmp2815 = $tmp2761.value;
int64_t $tmp2816 = $tmp2814.value;
int64_t $tmp2817 = $tmp2815 - $tmp2816;
frost$core$Int64 $tmp2818 = (frost$core$Int64) {$tmp2817};
frost$core$UInt64 $tmp2819 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2818);
if ($tmp2763) goto block14; else goto block15;
block14:;
uint64_t $tmp2820 = $tmp2819.value;
uint64_t $tmp2821 = $tmp2765.value;
bool $tmp2822 = $tmp2820 >= $tmp2821;
frost$core$Bit $tmp2823 = (frost$core$Bit) {$tmp2822};
bool $tmp2824 = $tmp2823.value;
if ($tmp2824) goto block13; else goto block4;
block15:;
uint64_t $tmp2825 = $tmp2819.value;
uint64_t $tmp2826 = $tmp2765.value;
bool $tmp2827 = $tmp2825 > $tmp2826;
frost$core$Bit $tmp2828 = (frost$core$Bit) {$tmp2827};
bool $tmp2829 = $tmp2828.value;
if ($tmp2829) goto block13; else goto block4;
block13:;
int64_t $tmp2830 = $tmp2814.value;
int64_t $tmp2831 = $tmp2764.value;
int64_t $tmp2832 = $tmp2830 + $tmp2831;
frost$core$Int64 $tmp2833 = (frost$core$Int64) {$tmp2832};
*(&local1) = $tmp2833;
goto block3;
block4:;
// line 1505
frost$core$UInt64 $tmp2834 = *(&local0);
return ((frost$core$UInt64$nullable) { $tmp2834, true });

}
frost$core$Real64$nullable frost$core$String$get_asReal64$R$frost$core$Real64$Q(frost$core$String* param0) {

// line 1516
frost$core$Real64 $tmp2835;
frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(&$tmp2835, param0);
return ((frost$core$Real64$nullable) { $tmp2835, true });

}
frost$core$Int64 frost$core$String$get_hash$R$frost$core$Int64(frost$core$String* param0) {

frost$core$Int64 local0;
frost$core$Int64 local1;
// line 1524
frost$core$Int64 $tmp2836 = (frost$core$Int64) {1};
*(&local0) = $tmp2836;
// line 1525
frost$core$Int64 $tmp2837 = (frost$core$Int64) {0};
frost$core$Int64* $tmp2838 = &param0->_length;
frost$core$Int64 $tmp2839 = *$tmp2838;
frost$core$Bit $tmp2840 = frost$core$Bit$init$builtin_bit(false);
frost$core$Range$LTfrost$core$Int64$GT $tmp2841 = frost$core$Range$LTfrost$core$Int64$GT$init$frost$core$Int64$frost$core$Int64$frost$core$Bit($tmp2837, $tmp2839, $tmp2840);
frost$core$Int64 $tmp2842 = $tmp2841.min;
*(&local1) = $tmp2842;
frost$core$Int64 $tmp2843 = $tmp2841.max;
frost$core$Bit $tmp2844 = $tmp2841.inclusive;
bool $tmp2845 = $tmp2844.value;
frost$core$Int64 $tmp2846 = (frost$core$Int64) {1};
frost$core$UInt64 $tmp2847 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2846);
if ($tmp2845) goto block4; else goto block5;
block4:;
int64_t $tmp2848 = $tmp2842.value;
int64_t $tmp2849 = $tmp2843.value;
bool $tmp2850 = $tmp2848 <= $tmp2849;
frost$core$Bit $tmp2851 = (frost$core$Bit) {$tmp2850};
bool $tmp2852 = $tmp2851.value;
if ($tmp2852) goto block1; else goto block2;
block5:;
int64_t $tmp2853 = $tmp2842.value;
int64_t $tmp2854 = $tmp2843.value;
bool $tmp2855 = $tmp2853 < $tmp2854;
frost$core$Bit $tmp2856 = (frost$core$Bit) {$tmp2855};
bool $tmp2857 = $tmp2856.value;
if ($tmp2857) goto block1; else goto block2;
block1:;
// line 1526
frost$core$Int64 $tmp2858 = *(&local0);
frost$core$Int64 $tmp2859 = (frost$core$Int64) {101};
int64_t $tmp2860 = $tmp2858.value;
int64_t $tmp2861 = $tmp2859.value;
int64_t $tmp2862 = $tmp2860 * $tmp2861;
frost$core$Int64 $tmp2863 = (frost$core$Int64) {$tmp2862};
frost$core$Char8** $tmp2864 = &param0->data;
frost$core$Char8* $tmp2865 = *$tmp2864;
frost$core$Int64 $tmp2866 = *(&local1);
int64_t $tmp2867 = $tmp2866.value;
frost$core$Char8 $tmp2868 = $tmp2865[$tmp2867];
uint8_t $tmp2869 = $tmp2868.value;
frost$core$Int64 $tmp2870 = (frost$core$Int64) {((int64_t) $tmp2869)};
int64_t $tmp2871 = $tmp2863.value;
int64_t $tmp2872 = $tmp2870.value;
int64_t $tmp2873 = $tmp2871 + $tmp2872;
frost$core$Int64 $tmp2874 = (frost$core$Int64) {$tmp2873};
*(&local0) = $tmp2874;
goto block3;
block3:;
frost$core$Int64 $tmp2875 = *(&local1);
int64_t $tmp2876 = $tmp2843.value;
int64_t $tmp2877 = $tmp2875.value;
int64_t $tmp2878 = $tmp2876 - $tmp2877;
frost$core$Int64 $tmp2879 = (frost$core$Int64) {$tmp2878};
frost$core$UInt64 $tmp2880 = frost$core$Int64$get_asUInt64$R$frost$core$UInt64($tmp2879);
if ($tmp2845) goto block7; else goto block8;
block7:;
uint64_t $tmp2881 = $tmp2880.value;
uint64_t $tmp2882 = $tmp2847.value;
bool $tmp2883 = $tmp2881 >= $tmp2882;
frost$core$Bit $tmp2884 = (frost$core$Bit) {$tmp2883};
bool $tmp2885 = $tmp2884.value;
if ($tmp2885) goto block6; else goto block2;
block8:;
uint64_t $tmp2886 = $tmp2880.value;
uint64_t $tmp2887 = $tmp2847.value;
bool $tmp2888 = $tmp2886 > $tmp2887;
frost$core$Bit $tmp2889 = (frost$core$Bit) {$tmp2888};
bool $tmp2890 = $tmp2889.value;
if ($tmp2890) goto block6; else goto block2;
block6:;
int64_t $tmp2891 = $tmp2875.value;
int64_t $tmp2892 = $tmp2846.value;
int64_t $tmp2893 = $tmp2891 + $tmp2892;
frost$core$Int64 $tmp2894 = (frost$core$Int64) {$tmp2893};
*(&local1) = $tmp2894;
goto block1;
block2:;
// line 1537
frost$core$Int64 $tmp2895 = *(&local0);
return $tmp2895;

}

